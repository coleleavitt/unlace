__int64 sub_23EB50()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(v0, "max_memory", 0, "maximum amount of memory in megabytes", "4294967295", "nnf");
  sub_185D2A0(v0, "sk_hack", 1, "hack for VCC", "false", "nnf");
  sub_185D2A0(
    v0,
    "mode",
    8,
    "NNF translation mode: skolem (skolem normal form), quantifiers (skolem normal form + quantifiers in NNF), full",
    "skolem",
    "nnf");
  sub_185D2A0(
    v0,
    "ignore_labels",
    1,
    "remove/ignore labels in the input formula, this option is ignored if proofs are enabled",
    "false",
    "nnf");
  return v0;
}

