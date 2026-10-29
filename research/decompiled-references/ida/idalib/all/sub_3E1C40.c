__int64 __fastcall sub_3E1C40(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbx

  sub_411DC0(a1, a2, a3, 0);
  v4 = sub_3BDD60(a1, a2);
  v5 = sub_3BDD60(a1, a3);
  netnode_supdel(v4, v5, 120);
  return netnode_supdel(v5, v4, 88);
}
