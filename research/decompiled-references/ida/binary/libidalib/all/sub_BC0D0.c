__int64 (__fastcall **__fastcall sub_BC0D0(_QWORD *a1))()
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // r12
  __int64 i; // rbx
  _QWORD *v7; // rax

  *a1 = &off_22FEA0;
  if ( a1[15] )
  {
    a1[16] = 0;
    qfree();
  }
  v2 = a1[13];
  *a1 = &off_22FE80;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = a1[10];
  result = &off_22FDC0;
  a1[13] = 0;
  *a1 = &off_22FDC0;
  if ( v3 )
  {
    v5 = a1[11];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v3 + 24 * i);
        if ( *v7 )
        {
          v7[1] = 0;
          qfree();
          v3 = a1[10];
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

