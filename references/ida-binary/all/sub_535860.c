__int64 __fastcall sub_535860(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 i; // r12
  __int64 *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  const char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // rsi
  __m128i v24; // xmm0
  __int64 v25; // rsi
  __m128i v26; // xmm0
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v31; // [rsp+10h] [rbp-48h]
  __int64 v32; // [rsp+18h] [rbp-40h]

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = (__int64 *)(v3 + v5);
        v8 = *(_QWORD *)(v3 + v5 + 24);
        if ( v8 )
        {
          v7[4] = 0;
          qfree(v8, (const char *)a2);
        }
        v9 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v9, (const char *)a2);
        }
        v3 = *a1;
        v5 += 56;
      }
    }
    a1[1] = 0;
    qfree(v3, (const char *)a2);
    *a1 = 0;
    a1[2] = 0;
  }
  result = *(_QWORD *)(a2 + 16);
  if ( (int)result > 0 )
  {
    v11 = 0;
    v31 = 8 * (3LL * (unsigned int)(result - 1) + 3);
    do
    {
      v15 = a1[1];
      v16 = a1[2];
      if ( v16 >= v15 + 1 )
      {
        v12 = *a1;
      }
      else
      {
        v17 = nullptr;
        v18 = qvector_reserve(a1, 0, v15 + 1, 56);
        v19 = *a1;
        v12 = v18;
        v20 = a1[2];
        a1[2] = v16;
        v32 = v20;
        v21 = a1[1] - 1;
        if ( v21 >= 0 )
        {
          v22 = v12;
          do
          {
            v23 = *(_QWORD *)v19;
            v24 = _mm_loadu_si128((const __m128i *)(v19 + 8));
            *(_QWORD *)v19 = 0;
            *(_OWORD *)(v19 + 8) = 0;
            *(_QWORD *)v22 = v23;
            *(__m128i *)(v22 + 8) = v24;
            v25 = *(_QWORD *)(v19 + 24);
            v26 = _mm_loadu_si128((const __m128i *)(v19 + 32));
            *(_QWORD *)(v19 + 24) = 0;
            *(_QWORD *)(v22 + 24) = v25;
            *(__m128i *)(v22 + 32) = v26;
            v17 = (const char *)*(unsigned int *)(v19 + 48);
            *(_QWORD *)(v19 + 40) = 0;
            *(_DWORD *)(v22 + 48) = (_DWORD)v17;
            v27 = *(_QWORD *)(v19 + 24);
            if ( v27 )
            {
              *(_QWORD *)(v19 + 32) = 0;
              *(double *)v26.m128i_i64 = qfree(v27, v17);
            }
            v28 = *(_QWORD *)v19;
            if ( *(_QWORD *)v19 )
            {
              *(_QWORD *)(v19 + 8) = 0;
              qfree(v28, v17, *(double *)v26.m128i_i64);
            }
            v19 += 56;
            v22 += 56;
          }
          while ( v21-- != 0 );
          v19 = *a1;
        }
        qfree(v19, v17);
        *a1 = v12;
        a1[2] = v32;
        v15 = a1[1];
      }
      v13 = v12 + 56 * v15;
      *(_QWORD *)v13 = 0;
      *(_QWORD *)(v13 + 24) = 0;
      *(_OWORD *)(v13 + 8) = 0;
      *(_OWORD *)(v13 + 32) = 0;
      ++a1[1];
      v14 = v11 + *(_QWORD *)(a2 + 8);
      v11 += 24;
      sub_535520(v13, v14);
      result = v31;
    }
    while ( v11 != v31 );
  }
  return result;
}
