__int64 __fastcall sub_98D840(_BYTE *a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rsi
  __int64 result; // rax

  if ( !*a1 )
    return 0;
  v2 = sub_BFBE70(a2);
  if ( v2 < 0x21D )
    return 0;
  if ( v2 > 0x21E )
  {
    if ( v2 == 1443 )
    {
      v3 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
      return sub_98CDA0(a1, v3);
    }
    return 0;
  }
  result = sub_98CDA0(a1, *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32));
  if ( !result )
  {
    v3 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
    return sub_98CDA0(a1, v3);
  }
  return result;
}
