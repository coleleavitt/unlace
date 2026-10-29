__int64 __fastcall sub_7B69E0(__int64 a1)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v2 = sub_79A2B0(a1);
  v3 = *v2;
  v4 = *v2 + 8LL * *((unsigned int *)v2 + 2);
  if ( v3 < v4 )
  {
    while ( *(_WORD *)(*(_QWORD *)v3 + 32LL) != 418 )
    {
      v3 += 8LL;
      if ( v4 == v3 )
        return 0;
    }
  }
  else
  {
    if ( v3 == v4 )
      return 0;
    while ( *(_WORD *)(*(_QWORD *)v4 + 32LL) != 418 )
    {
      v4 += 8LL;
      if ( v3 == v4 )
        return 0;
    }
  }
  if ( v3 != v4 )
    return (unsigned int)~*(unsigned __int8 *)(*(_QWORD *)(sub_798D40(a1) + 2160) + 107LL) >> 7;
  return 0;
}

