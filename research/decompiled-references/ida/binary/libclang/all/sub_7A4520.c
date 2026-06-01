__int64 __fastcall sub_7A4520(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 i; // rdx
  __int64 v9; // rsi

  v1 = *(_QWORD *)(a1 + 128);
  if ( !v1 || (*(_BYTE *)(v1 + 10) & 0x20) == 0 || (*(_BYTE *)(v1 + 104) & 4) == 0 )
    return 0;
  v2 = sub_7A2060(a1);
  if ( (*(_BYTE *)(v2 + 28) & 0x7F) == 0x45 )
    v2 = *(_QWORD *)(v2 + 48);
  v3 = sub_780E20(v2);
  if ( !v3 )
    return 0;
  v4 = *(_QWORD *)(v3 + 56);
  if ( !v4 )
    return 0;
  v5 = *(_DWORD *)(v4 + 20);
  v6 = v4 + 24;
  v7 = v4 + 24;
  for ( i = v5 & 0x1FFFFFFF; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v9 = v7 + 8 * (i >> 1);
      if ( (*(_BYTE *)(*(_QWORD *)v9 + 29LL) & 2) != 0 )
        break;
      v7 = v9 + 8;
      i = i - (i >> 1) - 1;
      if ( i <= 0 )
        return v6;
    }
  }
  return v6;
}

