_QWORD *__fastcall sub_439830(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rcx
  unsigned __int64 v4; // r9
  _QWORD *v5; // rax
  __int64 v6; // r8

  if ( a1[3] )
  {
    v4 = a1[1];
    v2 = *(_QWORD **)(*a1 + 8 * (a2 % v4));
    if ( !v2 )
      return v2;
    v5 = (_QWORD *)*v2;
    if ( a2 != *(_QWORD *)(*v2 + 8LL) )
    {
      do
      {
        v6 = *v5;
        if ( !*v5 )
          return nullptr;
        v2 = v5;
        if ( a2 % v4 != *(_QWORD *)(v6 + 8) % v4 )
          return nullptr;
        v5 = (_QWORD *)*v5;
      }
      while ( a2 != *(_QWORD *)(v6 + 8) );
    }
    if ( !v2 )
      return v2;
    return (_QWORD *)*v2;
  }
  else
  {
    v2 = (_QWORD *)a1[2];
    if ( !v2 )
      return v2;
    while ( v2[1] != a2 )
    {
      v2 = (_QWORD *)*v2;
      if ( !v2 )
        return v2;
    }
    return v2;
  }
}
