__int64 __fastcall sub_CD1620(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 v5; // rbp
  int v6; // r13d
  __int64 v7; // rbp
  int v8; // r14d
  __int64 v9; // rbx
  __int64 v10; // rsi
  char v11; // bp

  v5 = *(_QWORD *)(a1 + 176);
  v6 = *(_DWORD *)sub_DFDA20(v5, 8);
  sub_DFDA50(v5, 8);
  v7 = *(_QWORD *)(a1 + 176);
  v8 = *(_DWORD *)sub_DFDA20(v7, 8);
  sub_DFDA50(v7, 8);
  v9 = *(_QWORD *)(a1 + 176);
  v10 = 2;
  if ( v8 >= v6 )
  {
    LOBYTE(v10) = v8 > v6;
    v10 = (unsigned int)(3 * v10);
  }
  v11 = a2(a3, v10);
  *(_BYTE *)sub_DFD980(v9, 8) = v11;
  return 1;
}

