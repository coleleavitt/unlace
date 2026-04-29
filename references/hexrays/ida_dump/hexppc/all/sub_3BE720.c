__int64 __fastcall sub_3BE720(
        _QWORD *a1,
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
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rdi
  __int64 v20; // rdx
  __m128i v21; // xmm1
  __int64 v22; // r13
  __int64 i; // rbx
  __int64 v24; // rax
  __int64 v25; // rdi
  __m128i v26; // xmm2
  __m128i v27; // [rsp+0h] [rbp-68h] BYREF
  __int64 v28; // [rsp+10h] [rbp-58h] BYREF
  __int128 v29; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v10 = (const char *)a1[32];
  v30 = __readfsqword(0x28u);
  v12 = a1[31];
  v28 = 0;
  v29 = 0;
  v13 = sub_3BE3C0(&v28, v12, v10, 0.0, a4, a5, a6, a7, a8, a9);
  v14 = v28;
  v15 = v29;
  if ( v13 )
  {
    v20 = a1[28];
    v21 = (__m128i)_mm_loadh_ps((const double *)&v29 + 1);
    v27 = v21;
    if ( v20 )
    {
      v22 = a1[29];
      if ( v22 )
      {
        for ( i = 0; i != v22; ++i )
        {
          v24 = v20 + 40 * i;
          v25 = *(_QWORD *)(v24 + 16);
          if ( v25 )
          {
            *(_QWORD *)(v24 + 24) = 0;
            qfree(v25);
            v20 = a1[28];
          }
        }
      }
      a1[29] = 0;
      qfree(v20);
      v26 = _mm_load_si128(&v27);
      a1[28] = v14;
      *(__m128i *)(a1 + 29) = v26;
    }
    else
    {
      a1[28] = v28;
      *(__m128i *)(a1 + 29) = v21;
    }
  }
  else
  {
    a2 = -1;
    if ( v28 )
    {
      v16 = v28;
      v17 = 0;
      if ( (_QWORD)v29 )
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
          v16 += 40;
        }
        while ( v15 != v17 );
      }
      qfree(v14);
    }
  }
  return a2;
}
