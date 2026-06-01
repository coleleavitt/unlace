double __fastcall sub_2F24B0(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  double result; // xmm0_8

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v3 + v5);
        v8 = *(_QWORD *)(v3 + v5 + 144);
        if ( v8 )
        {
          v7[19] = 0;
          qfree(v8, a2);
        }
        v9 = v7[14];
        if ( v9 )
        {
          v7[15] = 0;
          qfree(v9, a2);
        }
        v10 = v7[10];
        if ( v10 )
        {
          v7[11] = 0;
          qfree(v10, a2);
        }
        clear_tinfo_t(v7 + 9);
        v11 = v7[5];
        if ( v11 )
        {
          v7[6] = 0;
          qfree(v11, a2);
        }
        v12 = v7[1];
        if ( v12 )
        {
          v7[2] = 0;
          qfree(v12, a2);
        }
        ++v6;
        v5 += 200;
        clear_tinfo_t(v7);
        v3 = *a1;
      }
      while ( v4 != v6 );
    }
    a1[1] = 0;
    return qfree(v3, a2);
  }
  return result;
}
