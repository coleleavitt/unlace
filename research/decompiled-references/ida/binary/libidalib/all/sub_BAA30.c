__int64 (__fastcall **__fastcall sub_BAA30(_QWORD *a1))()
{
  __int64 v1; // rdx
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // r12
  __int64 i; // rbx
  _QWORD *v5; // rax

  *a1 = &off_22FF28;
  if ( a1[14] )
  {
    a1[15] = 0;
    qfree();
  }
  v1 = a1[10];
  result = &off_22FDC0;
  *a1 = &off_22FDC0;
  if ( v1 )
  {
    v3 = a1[11];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v1 + 24 * i);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v1 = a1[10];
        }
      }
    }
    a1[11] = 0;
    result = (__int64 (__fastcall **)())qfree();
  }
  if ( a1[7] )
  {
    a1[8] = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}

