bool __fastcall sub_7B8660(__int64 a1)
{
  bool result; // al
  unsigned __int64 *v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx

  result = *(_BYTE *)(a1 + 29) & 1;
  if ( result )
  {
    v2 = sub_79A2B0(a1);
    v3 = *v2;
    v4 = *v2 + 8LL * *((unsigned int *)v2 + 2);
    if ( v3 < v4 )
    {
      while ( *(_WORD *)(*(_QWORD *)v3 + 32LL) != 421 )
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
      while ( *(_WORD *)(*(_QWORD *)v4 + 32LL) != 421 )
      {
        v4 += 8LL;
        if ( v3 == v4 )
          return 0;
      }
    }
    return v4 != v3;
  }
  return result;
}

