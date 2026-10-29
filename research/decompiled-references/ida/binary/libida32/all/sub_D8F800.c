__int64 __fastcall sub_D8F800(_QWORD *a1)
{
  __int64 v1; // r12
  int v2; // r13d
  __int64 v3; // r12
  int v4; // ebx

  v1 = *a1;
  v2 = *(_DWORD *)sub_DFDA20(*a1, 8);
  sub_DFDA50(v1, 8);
  v3 = *a1;
  v4 = *(_DWORD *)sub_DFDA20(*a1, 8);
  sub_DFDA50(v3, 8);
  *(_DWORD *)sub_DFD980(*a1, 8) = v2 | v4;
  return 1;
}

