//! Textual pass-pipeline parser.

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct ParsedPipeline {
    pub passes: Vec<String>,
}

pub fn parse_pipeline(input: &str) -> ParsedPipeline {
    ParsedPipeline {
        passes: input
            .split(',')
            .map(str::trim)
            .filter(|s| !s.is_empty())
            .map(ToOwned::to_owned)
            .collect(),
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn parses_comma_separated_pipeline() {
        assert_eq!(
            parse_pipeline("sroa, simplify-cfg ,gvn").passes,
            vec!["sroa", "simplify-cfg", "gvn"]
        );
    }
}
