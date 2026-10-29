__int64 sub_23D800()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(
    v0,
    "expand_select_store",
    1,
    "conservatively replace a (select (store ...) ...) term by an if-then-else term",
    "false",
    "rewriter");
  sub_185D2A0(
    v0,
    "blast_select_store",
    1,
    "eagerly replace all (select (store ..) ..) term by an if-then-else term",
    "false",
    "rewriter");
  sub_185D2A0(v0, "expand_nested_stores", 1, "replace nested stores by a lambda expression", "false", "rewriter");
  sub_185D2A0(v0, "expand_select_ite", 1, "expand select over ite expressions", "false", "rewriter");
  sub_185D2A0(
    v0,
    "expand_store_eq",
    1,
    "reduce (store ...) = (store ...) with a common base into selects",
    "false",
    "rewriter");
  sub_185D2A0(v0, "sort_store", 1, "sort nested stores when the indices are known to be different", "false", "rewriter");
  return v0;
}

