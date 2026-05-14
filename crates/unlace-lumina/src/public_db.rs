//! Public annotation database for OSS binaries (t453).
//!
//! A curated, high-signal annotation database for open-source binaries.
//! Annotations are indexed by a canonical function identifier (library
//! name + version + function offset) and undergo quality moderation.

use serde::{Deserialize, Serialize};
use std::collections::BTreeMap;

/// Quality level of an annotation (for moderation).
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Serialize, Deserialize)]
pub enum QualityLevel {
    /// Unreviewed submission.
    Pending,
    /// Reviewed and approved by a moderator.
    Approved,
    /// Machine-verified (e.g. from debug info extraction).
    Verified,
    /// Rejected / spam.
    Rejected,
}

/// A canonical function identifier in the public DB.
#[derive(Debug, Clone, PartialEq, Eq, PartialOrd, Ord, Serialize, Deserialize)]
pub struct CanonicalId {
    /// Library name (e.g. "glibc", "openssl").
    pub library: String,
    /// Library version (e.g. "2.39", "3.2.0").
    pub version: String,
    /// Function offset within the library.
    pub offset: u64,
}

/// A public annotation entry.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct PublicAnnotation {
    pub id: CanonicalId,
    pub function_name: String,
    pub signature: Option<String>,
    pub comment: Option<String>,
    pub quality: QualityLevel,
    pub contributor: String,
}

/// The public annotation database.
#[derive(Debug, Default, Clone)]
pub struct PublicAnnotationDb {
    entries: BTreeMap<CanonicalId, PublicAnnotation>,
}

impl PublicAnnotationDb {
    pub fn new() -> Self { Self::default() }

    /// Insert or update an annotation.
    pub fn insert(&mut self, ann: PublicAnnotation) {
        self.entries.insert(ann.id.clone(), ann);
    }

    /// Look up by canonical ID.
    pub fn lookup(&self, id: &CanonicalId) -> Option<&PublicAnnotation> {
        self.entries.get(id)
    }

    /// Look up by library and offset (any version).
    pub fn lookup_any_version(&self, library: &str, offset: u64) -> Vec<&PublicAnnotation> {
        self.entries.values()
            .filter(|a| a.id.library == library && a.id.offset == offset)
            .collect()
    }

    /// Get all approved annotations.
    pub fn approved(&self) -> Vec<&PublicAnnotation> {
        self.entries.values().filter(|a| a.quality >= QualityLevel::Approved).collect()
    }

    /// Count of all entries.
    pub fn len(&self) -> usize { self.entries.len() }
    pub fn is_empty(&self) -> bool { self.entries.is_empty() }

    /// Submit for moderation (starts as Pending).
    pub fn submit(&mut self, library: &str, version: &str, offset: u64, name: &str, contributor: &str) {
        let id = CanonicalId { library: library.into(), version: version.into(), offset };
        let ann = PublicAnnotation {
            id: id.clone(), function_name: name.into(), signature: None,
            comment: None, quality: QualityLevel::Pending, contributor: contributor.into(),
        };
        self.entries.insert(id, ann);
    }

    /// Moderate: approve or reject an entry.
    pub fn moderate(&mut self, id: &CanonicalId, approve: bool) -> bool {
        if let Some(entry) = self.entries.get_mut(id) {
            entry.quality = if approve { QualityLevel::Approved } else { QualityLevel::Rejected };
            true
        } else {
            false
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn sample_id() -> CanonicalId {
        CanonicalId { library: "glibc".into(), version: "2.39".into(), offset: 0x1000 }
    }

    #[test]
    fn insert_and_lookup() {
        let mut db = PublicAnnotationDb::new();
        db.insert(PublicAnnotation {
            id: sample_id(), function_name: "strlen".into(), signature: Some("size_t(const char*)".into()),
            comment: None, quality: QualityLevel::Verified, contributor: "bot".into(),
        });
        let found = db.lookup(&sample_id()).unwrap();
        assert_eq!(found.function_name, "strlen");
    }

    #[test]
    fn moderation_flow() {
        let mut db = PublicAnnotationDb::new();
        db.submit("openssl", "3.2.0", 0x2000, "EVP_DigestInit", "alice");
        assert_eq!(db.lookup(&CanonicalId { library: "openssl".into(), version: "3.2.0".into(), offset: 0x2000 }).unwrap().quality, QualityLevel::Pending);
        db.moderate(&CanonicalId { library: "openssl".into(), version: "3.2.0".into(), offset: 0x2000 }, true);
        assert_eq!(db.approved().len(), 1);
    }

    #[test]
    fn any_version_lookup() {
        let mut db = PublicAnnotationDb::new();
        db.insert(PublicAnnotation { id: CanonicalId { library: "lib".into(), version: "1.0".into(), offset: 0x100 }, function_name: "f".into(), signature: None, comment: None, quality: QualityLevel::Approved, contributor: "x".into() });
        db.insert(PublicAnnotation { id: CanonicalId { library: "lib".into(), version: "2.0".into(), offset: 0x100 }, function_name: "f_v2".into(), signature: None, comment: None, quality: QualityLevel::Approved, contributor: "x".into() });
        let results = db.lookup_any_version("lib", 0x100);
        assert_eq!(results.len(), 2);
    }
}
