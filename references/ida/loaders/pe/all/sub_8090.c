_UNKNOWN **__fastcall sub_8090(_QWORD *a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx

  result = &off_325A8;
  *a1 = &off_325A8;
  v3 = a1[12];
  if ( v3 )
  {
    v4 = a1[13];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + (i << 6));
        if ( v6[3] )
        {
          v6[4] = 0;
          qfree();
        }
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
        }
        v3 = a1[12];
      }
    }
    a1[13] = 0;
    return (_UNKNOWN **)qfree();
  }
  return result;
}
