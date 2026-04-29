__int64 __fastcall sub_3F05E0(__int64 a1, _QWORD *a2)
{
  __int64 v5; // rax
  __int64 func; // r14
  __int64 v7; // rax
  char v8; // al
  int v9; // edx
  __int64 v10; // rax
  bool v11; // sf
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r15

  if ( sub_CFF70() != 1 )
    return 4294967283LL;
  if ( *(_DWORD *)(a2[188] + 84LL) != 8 )
    return 0;
  v5 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)v5 & 0x10) == 0 )
    return 0;
  if ( !*(_DWORD *)(v5 + 128) || !*(_QWORD *)(v5 + 56) )
  {
    *(_DWORD *)v5 &= ~0x10u;
    return 4294967283LL;
  }
  func = get_func();
  sub_CFF70();
  v7 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 40) = -*(_DWORD *)(v7 + 132);
  *(_DWORD *)(a1 + 64) = -*(_DWORD *)(v7 + 128);
  v8 = getinf();
  v9 = *(_DWORD *)(a1 + 40);
  if ( (v8 & 0xF) != 6 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11 = -*(_DWORD *)(v10 + 128) < 0;
    *(_DWORD *)(a1 + 64) = -*(_DWORD *)(v10 + 128);
    if ( !v11 )
    {
      if ( v9 < 0 )
        return 4294967283LL;
      goto LABEL_10;
    }
    *(_DWORD *)(a1 + 64) = 8 - *(_DWORD *)(v10 + 128);
  }
  if ( v9 < 0 || *(int *)(a1 + 64) < 0 )
    return 4294967283LL;
  v10 = *(_QWORD *)(a1 + 8);
LABEL_10:
  v12 = a2[11];
  if ( (*(_BYTE *)v10 & 0x20) != 0 )
  {
    v13 = *(_QWORD *)(func + 56) + v12;
  }
  else
  {
    v24 = *(unsigned __int16 *)(func + 40) + v12;
    v13 = v24 + get_spd();
  }
  v14 = sub_1CFDD0((__int64)a2, v13);
  v15 = *(_QWORD *)(a1 + 8);
  v16 = v14 + *(_QWORD *)(v15 + 120);
  if ( *(_DWORD *)(*(_QWORD *)(a2[187] + 24LL) + 24LL) != 8 )
    v16 = (int)v16;
  if ( v16 < 0 )
    return 4294967283LL;
  v17 = *(_DWORD *)(a2[188] + 80LL);
  v18 = v17 * *(_DWORD *)(a1 + 40);
  v19 = v16 - v18;
  v20 = 2 * v17 * *(_DWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 32) = v19;
  v21 = *(_QWORD *)(v15 + 112) + v14;
  v22 = v21 - v20;
  *(_QWORD *)(a1 + 56) = v22;
  if ( *(_DWORD *)(v15 + 132) )
  {
    if ( v22 != v19 )
      return 4294967283LL;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v22;
    if ( *(_DWORD *)(v15 + 132) && v18 + v22 < 0 )
      return 4294967283LL;
  }
  if ( !*(_DWORD *)(v15 + 128) || v21 >= 0 )
  {
    v23 = a2[17];
    if ( *(_QWORD *)(a1 + 32) <= v23 && v23 >= v22 )
      return 0;
  }
  return 4294967283LL;
}
