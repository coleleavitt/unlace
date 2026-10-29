bool __fastcall sub_6BF300(__int64 a1, __int64 a2)
{
  bool result; // al
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  result = *(_BYTE *)(a2 + 29) & 1;
  if ( result )
  {
    v3 = sub_79A2B0(a2);
    v4 = *(_QWORD *)v3;
    v5 = *(_QWORD *)v3 + 8LL * *(unsigned int *)(v3 + 8);
    if ( v4 < v5 )
    {
      while ( *(_WORD *)(*(_QWORD *)v4 + 32LL) != 316 )
      {
        v4 += 8LL;
        if ( v5 == v4 )
          return 0;
      }
    }
    else
    {
      if ( v4 == v5 )
        return 0;
      while ( *(_WORD *)(*(_QWORD *)v5 + 32LL) != 316 )
      {
        v5 += 8LL;
        if ( v4 == v5 )
          return 0;
      }
    }
    return v5 != v4;
  }
  return result;
}

