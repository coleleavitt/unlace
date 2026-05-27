//! Optimization remark collection.

#[derive(Clone, Debug, PartialEq, Eq)]
pub enum RemarkKind {
    Passed,
    Missed,
    Analysis,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct OptimizationRemark {
    pub pass: String,
    pub function: String,
    pub kind: RemarkKind,
    pub message: String,
}

#[derive(Clone, Debug, Default)]
pub struct RemarkSink {
    remarks: Vec<OptimizationRemark>,
}

impl RemarkSink {
    pub fn push(&mut self, remark: OptimizationRemark) {
        self.remarks.push(remark);
    }

    pub fn remarks(&self) -> &[OptimizationRemark] {
        &self.remarks
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn stores_remarks_in_order() {
        let mut sink = RemarkSink::default();
        sink.push(OptimizationRemark {
            pass: "sroa".into(),
            function: "f".into(),
            kind: RemarkKind::Missed,
            message: "overlap".into(),
        });
        assert_eq!(sink.remarks()[0].pass, "sroa");
    }
}
