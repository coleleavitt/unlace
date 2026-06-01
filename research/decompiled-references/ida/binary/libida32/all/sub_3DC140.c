__int64 __fastcall sub_3DC140(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // r12d
  unsigned int v4; // ebp
  unsigned int v5; // ebx

  v3 = a3;
  sub_3FEAB0(a1, a2, a3, 0);
  v4 = sub_3B90A0(a1, a2);
  v5 = sub_3B90A0(a1, v3);
  netnode_supdel(v4, v5, 120);
  return netnode_supdel(v5, v4, 88);
}

