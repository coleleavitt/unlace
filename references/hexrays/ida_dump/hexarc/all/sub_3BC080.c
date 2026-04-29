__int64 __fastcall sub_3BC080(
        __m128 *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9)
{
  const char *v10; // rdx
  __int64 v12; // rsi
  char v13; // al
  unsigned __int64 v14; // r13
  __int64 v15; // r12
  unsigned __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rbp
  __int64 i; // r14
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // [rsp+0h] [rbp-60h] BYREF
  unsigned __int64 v26; // [rsp+8h] [rbp-58h] BYREF
  __int128 v27; // [rsp+10h] [rbp-50h]
  unsigned __int64 v28; // [rsp+20h] [rbp-40h]

  v10 = (const char *)a1[2].m128_u64[1];
  v28 = __readfsqword(0x28u);
  v12 = a1[2].m128_i64[0];
  v27 = 0;
  v26 = 0;
  v13 = sub_3BBB30(&v26, v12, v10, 0.0, a4, a5, a6, a7, a8, a9);
  v14 = v26;
  v15 = v27;
  if ( v13 )
  {
    v20 = a1->m128_u64[1];
    v25 = *((_QWORD *)&v27 + 1);
    if ( v20 )
    {
      v21 = a1[1].m128_u64[0];
      if ( v21 )
      {
        for ( i = 0; i != v21; ++i )
        {
          v23 = v20 + 48 * i;
          v24 = *(_QWORD *)(v23 + 16);
          if ( v24 )
          {
            *(_QWORD *)(v23 + 24) = 0;
            qfree(v24);
            v20 = a1->m128_u64[1];
          }
        }
      }
      a1[1].m128_u64[0] = 0;
      qfree(v20);
    }
    a1->m128_u64[1] = v14;
    a1[1] = _mm_loadh_ps((const double *)&v25);
  }
  else
  {
    if ( v26 )
    {
      v16 = v26;
      v17 = 0;
      if ( (_QWORD)v27 )
      {
        do
        {
          v18 = *(_QWORD *)(v16 + 16);
          if ( v18 )
          {
            *(_QWORD *)(v16 + 24) = 0;
            qfree(v18);
          }
          ++v17;
          v16 += 48LL;
        }
        while ( v15 != v17 );
      }
      qfree(v14);
    }
    return -1;
  }
  return a2;
}
