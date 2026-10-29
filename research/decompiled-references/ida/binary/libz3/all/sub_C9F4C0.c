__int64 __fastcall sub_C9F4C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp

  v2 = *(_QWORD *)(a1 + 16);
  sub_185D810(a2);
  sub_185D2A0(
    a2,
    "pb2bv_all_clauses_limit",
    0,
    "(default: 8) maximum number of literals for using equivalent CNF encoding of PB constraint.",
    0,
    0);
  sub_185D2A0(
    a2,
    "pb2bv_cardinality_limit",
    0,
    "(default: inf) limit for using arc-consistent cardinality constraint encoding.",
    0,
    0);
  sub_14DC360(a2);
  sub_1473F40(v2 + 352, a2);
  sub_1857D30(a2, "flat");
  return sub_1857D30(a2, "elim_and");
}

