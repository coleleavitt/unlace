__int64 __fastcall sub_3B5190(__int64 a1, __int64 *a2, double a3)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  int v8; // edx
  unsigned int v9; // edx

  v4 = *a2;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *a2;
  v7 = sub_3822F0(v5, v6);
  if ( !v7 )
    return 6;
  v8 = *(_DWORD *)(a1 + 24);
  if ( !v8 )
    return 2;
  if ( v8 != 1 )
    sub_3B30D0(a3, v5, v6);
  v9 = 6;
  if ( v4 == *(_QWORD *)(v7 + 8) )
    return 2;
  return v9;
}
