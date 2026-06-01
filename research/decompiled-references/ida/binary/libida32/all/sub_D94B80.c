__int64 __fastcall sub_D94B80(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 v5; // rbp
  char v6; // r13
  __int64 v7; // rbp
  char v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rsi
  char v11; // bp

  v5 = *(_QWORD *)(a1 + 176);
  v6 = *(_BYTE *)sub_DFDA20(v5, 8);
  sub_DFDA50(v5, 8);
  v7 = *(_QWORD *)(a1 + 176);
  v8 = *(_BYTE *)sub_DFDA20(v7, 8);
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

