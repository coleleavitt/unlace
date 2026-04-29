__int64 __fastcall sub_3EB1C0(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rsi
  char v6; // r8
  __int64 v7; // rax
  int v9; // r10d
  int v10; // edx

  v4 = *(_QWORD *)(a1 + 688);
  v6 = *(_BYTE *)(v4 + 8);
  if ( !v6 )
  {
LABEL_7:
    v7 = 0;
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
      return a2;
LABEL_8:
    if ( *(_DWORD *)(a1 + 80) == 8 )
      return a2;
    if ( a2 - 8 > 0x3F )
      return a2;
    v9 = *(__int16 *)(v7 + 12);
    v10 = a2 + a3 - *(_DWORD *)(v7 + 16);
    if ( v10 <= v9 )
      return a2;
    a2 -= v10 - 1 - (v10 - 1) % v9;
    if ( v6 )
    {
      while ( (signed int)a2 >= *(_DWORD *)(v4 + 40) )
      {
        v4 += 24;
        if ( !*(_BYTE *)(v4 + 8) )
          goto LABEL_17;
      }
      if ( *(__int16 *)(v4 + 14) >= a3 )
        return a2;
    }
    else
    {
LABEL_17:
      if ( a3 <= 0 )
        return a2;
    }
    return (unsigned int)-1;
  }
  v7 = *(_QWORD *)(a1 + 688);
  while ( (signed int)a2 >= *(_DWORD *)(v7 + 40) )
  {
    v7 += 24;
    if ( !*(_BYTE *)(v7 + 8) )
      goto LABEL_7;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
    goto LABEL_8;
  return a2;
}
