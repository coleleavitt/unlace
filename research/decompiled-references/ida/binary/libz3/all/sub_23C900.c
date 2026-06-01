__int64 sub_23C900()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(v0, "scc", 1, "eliminate Boolean variables by computing strongly connected components", "true", "sat");
  sub_185D2A0(v0, "scc.tr", 1, "apply transitive reduction, eliminate redundant binary clauses", "true", "sat");
  return v0;
}

