double __fastcall sub_2B49E0(_QWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // rdi
  double result; // xmm0_8
  __int64 v9; // rax
  const char *v10; // rsi
  const char *i; // r12
  __int64 v12; // rdx
  __int64 *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 *v18; // rdi

  *a1 = &unk_871DF0;
  v6 = a1[1];
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = a1[5];
  a1[1] = 0;
  if ( v7 )
  {
    a1[6] = 0;
    result = qfree(v7, a2);
  }
  v9 = a1[2];
  if ( v9 )
  {
    v10 = (const char *)a1[3];
    if ( v10 )
    {
      for ( i = nullptr; i != v10; ++i )
      {
        v12 = 3LL * (_QWORD)i;
        v13 = (__int64 *)(v9 + 24LL * (_QWORD)i);
        v14 = *v13;
        if ( *v13 )
        {
          v15 = v13[1];
          if ( v15 )
          {
            v16 = 0;
            v17 = 0;
            do
            {
              v18 = (__int64 *)(v16 + v14);
              ++v17;
              v16 += 272;
              sub_174D10(v18, (__int64)v10, v12, a4, a5);
              v14 = *v13;
            }
            while ( v15 != v17 );
          }
          v13[1] = 0;
          qfree(v14, v10);
          v9 = a1[2];
        }
      }
    }
    a1[3] = 0;
    return qfree(v9, v10);
  }
  return result;
}
