__int64 sub_23D650()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(
    v0,
    "ite_extra_rules",
    1,
    "extra ite simplifications, these additional simplifications may reduce size locally but increase globally",
    "true",
    "rewriter");
  sub_185D2A0(v0, "flat", 1, "create nary applications for +,*,bvadd,bvmul,bvand,bvor,bvxor", "true", "rewriter");
  sub_185D2A0(v0, "flat_and_or", 1, "create nary applications for and,or", "true", "rewriter");
  sub_185D2A0(v0, "sort_disjunctions", 1, "sort subterms in disjunctions", "true", "rewriter");
  sub_185D2A0(v0, "elim_and", 1, "conjunctions are rewritten using negation and disjunctions", "false", "rewriter");
  sub_185D2A0(v0, "elim_ite", 1, "eliminate ite in favor of and/or", "true", "rewriter");
  sub_185D2A0(v0, "local_ctx", 1, "perform local (i.e., cheap) context simplifications", "false", "rewriter");
  sub_185D2A0(v0, "local_ctx_limit", 0, "limit for applying local context simplifier", "4294967295", "rewriter");
  sub_185D2A0(
    v0,
    "blast_distinct",
    1,
    "expand a distinct predicate into a quadratic number of disequalities",
    "false",
    "rewriter");
  sub_185D2A0(
    v0,
    "blast_distinct_threshold",
    0,
    "when blast_distinct is true, only distinct expressions with less than this number of arguments are blasted",
    "4294967295",
    "rewriter");
  return v0;
}

