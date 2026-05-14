//! CVE classification and patch-impact labeling (t430).
//!
//! Extends the N-day correlation system with structured CVE metadata and
//! severity classification. Maps detected vulnerabilities to CVSS scores,
//! CWE categories, and affected version ranges.

use std::collections::BTreeMap;

/// CVSS v3.1 severity level.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum CvssSeverity {
    None,
    Low,
    Medium,
    High,
    Critical,
}

impl CvssSeverity {
    /// Classify a CVSS base score into a severity level.
    pub fn from_score(score: f32) -> Self {
        match score {
            s if s <= 0.0 => Self::None,
            s if s < 4.0 => Self::Low,
            s if s < 7.0 => Self::Medium,
            s if s < 9.0 => Self::High,
            _ => Self::Critical,
        }
    }
}

/// Structured CVE metadata for classification.
#[derive(Debug, Clone, PartialEq)]
pub struct CveRecord {
    pub cve_id: String,
    pub cvss_score: f32,
    pub severity: CvssSeverity,
    pub cwe_id: Option<String>,
    pub description: String,
    pub affected_versions: Vec<String>,
    /// Pre-patch function fingerprint.
    pub vuln_fingerprint: u64,
}

/// A classified vulnerability finding in a binary.
#[derive(Debug, Clone, PartialEq)]
pub struct CveClassification {
    pub cve: CveRecord,
    pub matched_function_addr: u64,
    pub matched_function_name: Option<String>,
    pub confidence: f32,
}

/// CVE database for classification lookups.
#[derive(Debug, Default, Clone)]
pub struct CveDatabase {
    records: BTreeMap<String, CveRecord>,
}

impl CveDatabase {
    pub fn new() -> Self { Self::default() }

    pub fn insert(&mut self, record: CveRecord) {
        self.records.insert(record.cve_id.clone(), record);
    }

    pub fn len(&self) -> usize { self.records.len() }
    pub fn is_empty(&self) -> bool { self.records.is_empty() }

    /// Classify all functions against known CVE patterns.
    pub fn classify(&self, function_fingerprints: &[(u64, u64, Option<String>)]) -> Vec<CveClassification> {
        let mut results = Vec::new();
        for record in self.records.values() {
            for &(addr, fp, ref name) in function_fingerprints {
                if fp == record.vuln_fingerprint {
                    results.push(CveClassification {
                        cve: record.clone(),
                        matched_function_addr: addr,
                        matched_function_name: name.clone(),
                        confidence: 1.0,
                    });
                }
            }
        }
        results.sort_by(|a, b| a.cve.cve_id.cmp(&b.cve.cve_id));
        results
    }

    /// Get all CVEs above a given severity threshold.
    pub fn filter_by_severity(&self, min_severity: CvssSeverity) -> Vec<&CveRecord> {
        self.records.values().filter(|r| r.severity >= min_severity).collect()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn sample_cve() -> CveRecord {
        CveRecord {
            cve_id: "CVE-2024-1234".into(),
            cvss_score: 9.8,
            severity: CvssSeverity::Critical,
            cwe_id: Some("CWE-787".into()),
            description: "heap overflow in parser".into(),
            affected_versions: vec!["1.0..2.3".into()],
            vuln_fingerprint: 0xdeadbeef,
        }
    }

    #[test]
    fn severity_classification() {
        assert_eq!(CvssSeverity::from_score(0.0), CvssSeverity::None);
        assert_eq!(CvssSeverity::from_score(3.5), CvssSeverity::Low);
        assert_eq!(CvssSeverity::from_score(5.0), CvssSeverity::Medium);
        assert_eq!(CvssSeverity::from_score(8.0), CvssSeverity::High);
        assert_eq!(CvssSeverity::from_score(9.8), CvssSeverity::Critical);
    }

    #[test]
    fn classify_matching_fingerprint() {
        let mut db = CveDatabase::new();
        db.insert(sample_cve());
        let funcs = vec![(0x401000, 0xdeadbeef, Some("vuln_func".to_string()))];
        let results = db.classify(&funcs);
        assert_eq!(results.len(), 1);
        assert_eq!(results[0].cve.cve_id, "CVE-2024-1234");
        assert_eq!(results[0].matched_function_addr, 0x401000);
    }

    #[test]
    fn no_match_when_fingerprint_differs() {
        let mut db = CveDatabase::new();
        db.insert(sample_cve());
        let funcs = vec![(0x401000, 0xcafebabe, None)];
        assert!(db.classify(&funcs).is_empty());
    }

    #[test]
    fn severity_filter() {
        let mut db = CveDatabase::new();
        db.insert(sample_cve());
        db.insert(CveRecord { cve_id: "CVE-2024-5678".into(), cvss_score: 3.0, severity: CvssSeverity::Low, cwe_id: None, description: "info leak".into(), affected_versions: vec![], vuln_fingerprint: 0x1111 });
        assert_eq!(db.filter_by_severity(CvssSeverity::High).len(), 1);
    }
}
