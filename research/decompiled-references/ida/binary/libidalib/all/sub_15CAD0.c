__int64 __fastcall sub_15CAD0(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  __int64 v6; // rax

  v3 = a1[1];
  if ( !v3 )
    return 0;
  v5 = *a1;
  v6 = *a1 + 80 * v3;
  if ( *a1 == v6 )
    return 0;
  while ( (*(_BYTE *)(v5 + 72) & 4) != 0 )
  {
    v5 += 80;
    if ( v6 == v5 )
      return 0;
  }
  if ( v5 )
    return sub_15C820((__int64)a1, v5, a2, a3);
  else
    return 0;
}

