__int64 (__fastcall **__fastcall sub_BC500(_QWORD *a1))()
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 (__fastcall **result)(); // rax
  __int64 v6; // r12
  __int64 i; // rbx
  _QWORD *v8; // rax

  *a1 = &off_22FFC8;
  if ( a1[18] )
  {
    a1[19] = 0;
    qfree();
  }
  v2 = a1[15];
  *a1 = &off_22FEA0;
  if ( v2 )
  {
    a1[16] = 0;
    qfree();
  }
  v3 = a1[13];
  *a1 = &off_22FE80;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = a1[10];
  result = &off_22FDC0;
  a1[13] = 0;
  *a1 = &off_22FDC0;
  if ( v4 )
  {
    v6 = a1[11];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (_QWORD *)(v4 + 24 * i);
        if ( *v8 )
        {
          v8[1] = 0;
          qfree();
          v4 = a1[10];
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

