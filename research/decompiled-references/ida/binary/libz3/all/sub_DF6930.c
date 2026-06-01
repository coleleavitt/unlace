__int64 __fastcall sub_DF6930(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rdi
  _QWORD *v7; // rax

  v2 = *a1;
  v3 = *a1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*a1 & 7) == 0 )
  {
    LOBYTE(v2) = v2 > 7;
    LOBYTE(v3) = a2 == v3;
    return (unsigned int)v3 & (unsigned int)v2;
  }
  v5 = *(_QWORD **)v3;
  v6 = *(_QWORD *)v3 + 8LL * *(unsigned int *)(v3 + 8);
  if ( *(_QWORD *)v3 == v6 )
    return 0;
  while ( *v5 <= 1u )
  {
    if ( (_QWORD *)v6 == ++v5 )
      return 0;
  }
  if ( (_QWORD *)v6 == v5 )
    return 0;
  if ( a2 != *v5 )
  {
    while ( 1 )
    {
      v7 = v5 + 1;
      if ( (_QWORD *)v6 == v5 + 1 )
        break;
      while ( 1 )
      {
        v5 = v7;
        if ( *v7 > 1u )
          break;
        if ( (_QWORD *)v6 == ++v7 )
          return 0;
      }
      if ( (_QWORD *)v6 == v7 )
        break;
      if ( a2 == *v7 )
        return 1;
    }
    return 0;
  }
  return 1;
}

