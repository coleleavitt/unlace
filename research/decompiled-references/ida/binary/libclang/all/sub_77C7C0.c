_BOOL8 __fastcall sub_77C7C0(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v2 = sub_79A2B0(a1);
  v3 = *(_QWORD *)v2;
  v4 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8);
  if ( v3 < v4 )
  {
    while ( *(_WORD *)(*(_QWORD *)v3 + 32LL) != 142 )
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
    while ( *(_WORD *)(*(_QWORD *)v4 + 32LL) != 142 )
    {
      v4 += 8LL;
      if ( v3 == v4 )
        return 0;
    }
  }
  if ( v3 != v4 )
    return (*(_BYTE *)(a1 + 98) & 0x20) != 0;
  return 0;
}

