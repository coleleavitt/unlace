__int64 __fastcall sub_15C210(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  __int64 v6; // rax

  v3 = a1[1];
  if ( !v3 )
    return 0;
  v5 = *a1;
  v6 = *a1 + 72 * v3;
  if ( *a1 == v6 )
    return 0;
  while ( (*(_BYTE *)(v5 + 64) & 4) != 0 )
  {
    v5 += 72;
    if ( v6 == v5 )
      return 0;
  }
  if ( v5 )
    return sub_15BF60((__int64)a1, v5, a2, a3);
  else
    return 0;
}

