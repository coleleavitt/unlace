__int64 __fastcall sub_D8E810(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx

  v1 = *a1;
  v2 = *(_QWORD *)sub_DFDA20(*a1, 8);
  sub_DFDA50(v1, 8);
  *(_QWORD *)sub_DFD980(*a1, 8) = ~v2;
  return 1;
}

