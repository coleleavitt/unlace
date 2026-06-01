double __fastcall sub_551F10(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi

  v3 = a1[16];
  if ( v3 )
  {
    a1[17] = 0;
    result = qfree(v3, a2);
  }
  v5 = a1[10];
  if ( v5 )
  {
    v6 = a1[11];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (__int64 *)(v5 + 24 * i);
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v9, a2);
          v5 = a1[10];
        }
      }
    }
    a1[11] = 0;
    result = qfree(v5, a2);
  }
  v10 = a1[7];
  if ( v10 )
  {
    a1[8] = 0;
    result = qfree(v10, a2);
  }
  v11 = a1[4];
  if ( v11 )
  {
    a1[5] = 0;
    return qfree(v11, a2);
  }
  return result;
}
