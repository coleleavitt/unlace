__int64 __fastcall sub_D8E430(__int64 a1)
{
  __int64 v1; // rbp
  char v2; // r12

  v1 = *(_QWORD *)(a1 + 176);
  v2 = *(_BYTE *)sub_DFDA20(v1, 8);
  sub_DFDA50(v1, 8);
  *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v2;
  return 1;
}

