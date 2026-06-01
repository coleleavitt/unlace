__int64 __fastcall sub_D8F1A0(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // rbx

  v1 = *a1;
  v2 = *(_QWORD *)sub_DFDA20(*a1, 8);
  sub_DFDA50(v1, 8);
  v3 = *a1;
  v4 = *(_QWORD *)sub_DFDA20(*a1, 8);
  sub_DFDA50(v3, 8);
  *(_QWORD *)sub_DFD980(*a1, 8) = v4 - v2;
  return 1;
}

