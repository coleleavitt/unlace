__int64 __fastcall sub_26640(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx

  v2 = *a2;
  v3 = *(unsigned __int16 *)(*a2 + 16LL);
  if ( (_WORD)v3 == 1 )
  {
    v5 = v2 + 24;
    v6 = 24LL * a2[1];
    v7 = v6 + v2;
    if ( v6 == 24 )
      return v3;
    while ( 1 )
    {
      v3 = *(unsigned __int16 *)(v5 + 16);
      if ( (_WORD)v3 != 1 )
        break;
      v5 += 24;
      if ( v5 == v7 )
        return v3;
    }
    return 0;
  }
  if ( (_WORD)v3 != 2 )
    return 0;
  return 2 * (unsigned int)(a2[1] == 1);
}
