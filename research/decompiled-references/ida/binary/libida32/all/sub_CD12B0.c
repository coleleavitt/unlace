__int64 __fastcall sub_CD12B0(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 v5; // rbp
  unsigned __int8 v6; // r13
  __int64 v7; // rbp
  unsigned __int8 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rsi
  char v11; // bl

  v5 = *(_QWORD *)(a1 + 176);
  v6 = *(_BYTE *)sub_DFDA20(v5, 8);
  sub_DFDA50(v5, 8);
  v7 = *(_QWORD *)(a1 + 176);
  v8 = *(_BYTE *)sub_DFDA20(v7, 8);
  sub_DFDA50(v7, 8);
  v9 = *(_QWORD *)(a1 + 176);
  v10 = 2;
  if ( v8 >= v6 )
    v10 = v6 < v8 ? 3 : 0;
  v11 = a2(a3, v10);
  *(_BYTE *)sub_DFD980(v9, 8) = v11;
  return 1;
}

