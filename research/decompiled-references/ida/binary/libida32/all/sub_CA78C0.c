__int64 __fastcall sub_CA78C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // r13
  unsigned __int64 v7; // rbp
  unsigned __int64 v9[8]; // [rsp+8h] [rbp-40h] BYREF

  if ( (*(_BYTE *)(sub_CC2430(*(_QWORD *)(a1 + 488)) + 164) & 0x10) == 0 )
    return sub_CA5C60(a1, *(_QWORD *)(a2 + 8), v2, v3, v4);
  if ( (*(_BYTE *)sub_CC2430(*(_QWORD *)(a1 + 488)) & 0x20) != 0 )
    return sub_CA5C60(a1, *(_QWORD *)(a2 + 8), v2, v3, v4);
  v5 = a2 + 16;
  v6 = a2 + 16 + 8LL * (*(_DWORD *)a2 >> 9);
  if ( a2 + 16 == v6 )
    return sub_CA5C60(a1, *(_QWORD *)(a2 + 8), v2, v3, v4);
  while ( 1 )
  {
    if ( *(_WORD *)(*(_QWORD *)v5 + 36LL) == 44 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)v5 + 40LL);
      if ( (*(_DWORD *)v7 & 0x20000) != 0 )
        break;
      if ( !(unsigned __int8)sub_BDD420(v7, **(_QWORD **)(a1 + 488), 1, v3, v4) )
      {
        if ( !(unsigned __int8)sub_C8E450((_QWORD *)a1, v7) )
          break;
        v9[0] = v7 | 4;
        if ( !(unsigned __int8)sub_C87620(a1, (__int64 *)v9) )
          break;
      }
    }
    v5 += 8;
    if ( v6 == v5 )
      return sub_CA5C60(a1, *(_QWORD *)(a2 + 8), v2, v3, v4);
  }
  return 0;
}

