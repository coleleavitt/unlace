__int64 __fastcall sub_D8E860(_QWORD *a1)
{
  __int64 v1; // r12
  char v2; // bl

  v1 = *a1;
  v2 = *(_BYTE *)sub_DFDA20(*a1, 8);
  sub_DFDA50(v1, 8);
  *(_BYTE *)sub_DFD980(*a1, 8) = ~v2;
  return 1;
}

