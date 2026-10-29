__int64 (__fastcall **__fastcall sub_BA1A0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  _QWORD *v5; // rax

  result = &off_22FDC0;
  v2 = a1[10];
  *a1 = &off_22FDC0;
  if ( v2 )
  {
    v3 = a1[11];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 24 * i);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v2 = a1[10];
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

