__int64 __fastcall sub_17F6B0(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdx
  unsigned __int64 v4; // r8
  _QWORD *v5; // r9
  _QWORD *v6; // rax
  _QWORD *v7; // rdi

  if ( a1[51] )
  {
    v4 = a1[49];
    v5 = *(_QWORD **)(a1[48] + 8 * (a2 % v4));
    if ( !v5 )
      return -1;
    v6 = (_QWORD *)*v5;
    if ( a2 != *(_QWORD *)(*v5 + 8LL) )
    {
      do
      {
        v7 = (_QWORD *)*v6;
        if ( !*v6 )
          return -1;
        v5 = v6;
        if ( a2 % v4 != v7[1] % v4 )
          return -1;
        v6 = (_QWORD *)*v6;
      }
      while ( a2 != v7[1] );
    }
    if ( !v5 || !*v5 )
      return -1;
    return *(_QWORD *)(*v5 + 16LL);
  }
  else
  {
    v2 = (_QWORD *)a1[50];
    if ( !v2 )
      return -1;
    while ( v2[1] != a2 )
    {
      v2 = (_QWORD *)*v2;
      if ( !v2 )
        return -1;
    }
    return v2[2];
  }
}

