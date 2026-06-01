bool __fastcall sub_6F41D0(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdx
  unsigned __int64 v4; // r8
  _QWORD *v5; // r9
  _QWORD *v6; // rax
  _QWORD *v7; // rdi

  if ( a1[26] )
  {
    v4 = a1[24];
    v5 = *(_QWORD **)(a1[23] + 8 * (a2 % v4));
    if ( !v5 )
      return 0;
    v6 = (_QWORD *)*v5;
    if ( *(_QWORD *)(*v5 + 8LL) != a2 )
    {
      do
      {
        v7 = (_QWORD *)*v6;
        if ( !*v6 )
          return 0;
        v5 = v6;
        if ( a2 % v4 != v7[1] % v4 )
          return 0;
        v6 = (_QWORD *)*v6;
      }
      while ( v7[1] != a2 );
    }
    if ( !v5 )
      return 0;
    return *v5 != 0;
  }
  else
  {
    v2 = (_QWORD *)a1[25];
    if ( !v2 )
      return 0;
    while ( v2[1] != a2 )
    {
      v2 = (_QWORD *)*v2;
      if ( !v2 )
        return 0;
    }
    return 1;
  }
}
