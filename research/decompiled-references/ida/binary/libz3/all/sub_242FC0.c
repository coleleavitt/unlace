__int64 __fastcall sub_242FC0(__int64 a1)
{
  sub_185D2A0(a1, "bce", 1, "eliminate blocked clauses", "false", "sat");
  sub_185D2A0(a1, "abce", 1, "eliminate blocked clauses using asymmetric literals", "false", "sat");
  sub_185D2A0(a1, "cce", 1, "eliminate covered clauses", "false", "sat");
  sub_185D2A0(a1, "ate", 1, "asymmetric tautology elimination", "true", "sat");
  sub_185D2A0(a1, "acce", 1, "eliminate covered clauses using asymmetric added literals", "false", "sat");
  sub_185D2A0(a1, "bce_at", 0, "eliminate blocked clauses only once at the given simplification round", "2", "sat");
  sub_185D2A0(a1, "bca", 1, "blocked clause addition - add blocked binary clauses", "false", "sat");
  sub_185D2A0(a1, "bce_delay", 0, "delay eliminate blocked clauses until simplification round", "2", "sat");
  sub_185D2A0(a1, "retain_blocked_clauses", 1, "retain blocked clauses as lemmas", "true", "sat");
  sub_185D2A0(
    a1,
    "blocked_clause_limit",
    0,
    "maximum number of literals visited during blocked clause elimination",
    "100000000",
    "sat");
  sub_185D2A0(
    a1,
    "override_incremental",
    1,
    "override incremental safety gaps. Enable elimination of blocked clauses and variables even if solver is reused",
    "false",
    "sat");
  sub_185D2A0(
    a1,
    "resolution.limit",
    0,
    "approx. maximum number of literals visited during variable elimination",
    "500000000",
    "sat");
  sub_185D2A0(
    a1,
    "resolution.occ_cutoff",
    0,
    "first cutoff (on number of positive/negative occurrences) for Boolean variable elimination",
    "10",
    "sat");
  sub_185D2A0(
    a1,
    "resolution.occ_cutoff_range1",
    0,
    "second cutoff (number of positive/negative occurrences) for Boolean variable elimination, for problems containing le"
    "ss than res_cls_cutoff1 clauses",
    "8",
    "sat");
  sub_185D2A0(
    a1,
    "resolution.occ_cutoff_range2",
    0,
    "second cutoff (number of positive/negative occurrences) for Boolean variable elimination, for problems containing mo"
    "re than res_cls_cutoff1 and less than res_cls_cutoff2",
    "5",
    "sat");
  sub_185D2A0(
    a1,
    "resolution.occ_cutoff_range3",
    0,
    "second cutoff (number of positive/negative occurrences) for Boolean variable elimination, for problems containing mo"
    "re than res_cls_cutoff2",
    "3",
    "sat");
  sub_185D2A0(
    a1,
    "resolution.lit_cutoff_range1",
    0,
    "second cutoff (total number of literals) for Boolean variable elimination, for problems containing less than res_cls"
    "_cutoff1 clauses",
    "700",
    "sat");
  sub_185D2A0(
    a1,
    "resolution.lit_cutoff_range2",
    0,
    "second cutoff (total number of literals) for Boolean variable elimination, for problems containing more than res_cls"
    "_cutoff1 and less than res_cls_cutoff2",
    "400",
    "sat");
  sub_185D2A0(
    a1,
    "resolution.lit_cutoff_range3",
    0,
    "second cutoff (total number of literals) for Boolean variable elimination, for problems containing more than res_cls_cutoff2",
    "300",
    "sat");
  sub_185D2A0(
    a1,
    "resolution.cls_cutoff1",
    0,
    "limit1 - total number of problems clauses for the second cutoff of Boolean variable elimination",
    "100000000",
    "sat");
  sub_185D2A0(
    a1,
    "resolution.cls_cutoff2",
    0,
    "limit2 - total number of problems clauses for the second cutoff of Boolean variable elimination",
    "700000000",
    "sat");
  sub_185D2A0(a1, "elim_vars", 1, "enable variable elimination using resolution during simplification", "true", "sat");
  sub_185D2A0(a1, "probing", 1, "apply failed literal detection during simplification", "true", "sat");
  sub_185D2A0(a1, "probing_limit", 0, "limit to the number of probe calls", "5000000", "sat");
  sub_185D2A0(a1, "probing_cache", 1, "add binary literals as lemmas", "true", "sat");
  sub_185D2A0(
    a1,
    "probing_cache_limit",
    0,
    "cache binaries unless overall memory usage exceeds cache limit",
    "1024",
    "sat");
  sub_185D2A0(a1, "probing_binary", 1, "probe binary clauses", "true", "sat");
  sub_185D2A0(a1, "subsumption", 1, "eliminate subsumed clauses", "true", "sat");
  return sub_185D2A0(
           a1,
           "subsumption.limit",
           0,
           "approx. maximum number of literals visited during subsumption (and subsumption resolution)",
           "100000000",
           "sat");
}

