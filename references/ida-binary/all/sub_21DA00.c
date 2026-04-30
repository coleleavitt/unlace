__int64 __fastcall sub_21DA00(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  const char *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __m128 v12; // xmm4
  __m128 v13; // xmm5
  const char *v14; // rbx
  const char *v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rbp
  __int64 i; // rbx
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v25[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v26; // [rsp+10h] [rbp-58h]
  __int64 v27; // [rsp+18h] [rbp-50h]
  const char *v28; // [rsp+28h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-38h]
  unsigned __int64 v30; // [rsp+48h] [rbp-20h]

  v30 = __readfsqword(0x28u);
  sub_213CE0((__int64)v25);
  v8 = "*.txt";
  v14 = (const char *)sub_17CD60(
                        1u,
                        (int)"*.txt",
                        (int)"Select file name to save trace information",
                        v9,
                        v10,
                        v11,
                        a1,
                        a2,
                        a3,
                        a4,
                        v12,
                        v13,
                        a7,
                        a8,
                        v25[0]);
  if ( v14 )
  {
    if ( v25[0] )
    {
      qfclose(v25[0]);
      v25[0] = 0;
    }
    v8 = v14;
    sub_20B400((__int64 *)&v28, v14);
    v15 = &s1;
    if ( v29 )
      v15 = v28;
    v25[0] = fopenA(v15);
    v16 = v25[0];
    if ( v25[0] )
    {
      v17 = 16 * ((qword_8CBB18 == 0) + ((qword_8CBB18 - qword_8CBAF8) >> 3) - 1)
          + ((qword_8CBAF0 - qword_8CBAE0) >> 5)
          + ((qword_8CBB00 - qword_8CBB08) >> 5);
      if ( v17 == -1 )
        goto LABEL_23;
      for ( i = 0; ; ++i )
      {
        v8 = (const char *)(unsigned int)i;
        sub_21D700(v25, i, *(double *)a1.m128_u64);
        if ( v17 == i )
          break;
      }
      v16 = v25[0];
      if ( v25[0] )
      {
LABEL_23:
        qfclose(v16);
        v25[0] = 0;
      }
      else
      {
        v25[0] = 0;
      }
    }
  }
  if ( v28 )
  {
    v29 = 0;
    *(double *)a1.m128_u64 = qfree(v28, v8);
  }
  v19 = v26;
  if ( v26 )
  {
    v20 = v27;
    if ( v27 )
    {
      v21 = 0;
      do
      {
        v22 = (__int64 *)(v19 + 24 * v21);
        v23 = *v22;
        if ( *v22 )
        {
          v22[1] = 0;
          *(double *)a1.m128_u64 = qfree(v23, v8, *(double *)a1.m128_u64);
          v19 = v26;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    v27 = 0;
    qfree(v19, v8, *(double *)a1.m128_u64);
  }
  return 1;
}
