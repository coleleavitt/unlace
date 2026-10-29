__int64 __fastcall sub_375570(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp

  sub_1863170(a1 + 24, a2);
  v2 = sub_1859960(a1 + 24, "max_conflicts", 2);
  sub_1862370(a1 + 24, "sat.max_conflicts", v2);
  return sub_1862370(a1 + 24, "smt.max_conflicts", v2);
}

