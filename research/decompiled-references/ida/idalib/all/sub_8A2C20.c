char *__fastcall sub_8A2C20(char **a1)
{
  char *v1; // rax
  unsigned __int64 v2; // rbx
  char *v3; // rsi
  __int64 v5; // rax
  char *v6; // rdx
  char *v7; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rax
  __m128i v13; // xmm0
  char *v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 i; // rbx
  char *v18; // r13
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  __int64 v23; // [rsp+0h] [rbp-58h]
  char *v25; // [rsp+10h] [rbp-48h]
  char *v26; // [rsp+18h] [rbp-40h]

  v1 = a1[1];
  v2 = (unsigned __int64)a1[2];
  if ( v2 < (unsigned __int64)(v1 + 1) )
  {
    v5 = qvector_reserve(a1, 0, v1 + 1, 280);
    v6 = a1[2];
    a1[2] = (char *)v2;
    v25 = (char *)v5;
    v7 = *a1;
    v26 = v6;
    v23 = (__int64)(a1[1] - 1);
    if ( v23 >= 0 )
    {
      v8 = v5;
      do
      {
        v9 = *(_QWORD *)v7;
        v10 = _mm_loadu_si128((const __m128i *)(v7 + 8));
        *(_QWORD *)v7 = 0;
        *(_OWORD *)(v7 + 8) = 0;
        *(_QWORD *)v8 = v9;
        *(__m128i *)(v8 + 8) = v10;
        *(__m128i *)(v8 + 24) = _mm_loadu_si128((const __m128i *)(v7 + 24));
        *(__m128i *)(v8 + 40) = _mm_loadu_si128((const __m128i *)(v7 + 40));
        *(__m128i *)(v8 + 56) = _mm_loadu_si128((const __m128i *)(v7 + 56));
        *(__m128i *)(v8 + 72) = _mm_loadu_si128((const __m128i *)(v7 + 72));
        *(__m128i *)(v8 + 88) = _mm_loadu_si128((const __m128i *)(v7 + 88));
        *(__m128i *)(v8 + 104) = _mm_loadu_si128((const __m128i *)(v7 + 104));
        *(__m128i *)(v8 + 120) = _mm_loadu_si128((const __m128i *)(v7 + 120));
        *(__m128i *)(v8 + 136) = _mm_loadu_si128((const __m128i *)(v7 + 136));
        *(__m128i *)(v8 + 152) = _mm_loadu_si128((const __m128i *)(v7 + 152));
        *(__m128i *)(v8 + 168) = _mm_loadu_si128((const __m128i *)(v7 + 168));
        *(__m128i *)(v8 + 184) = _mm_loadu_si128((const __m128i *)(v7 + 184));
        *(__m128i *)(v8 + 200) = _mm_loadu_si128((const __m128i *)(v7 + 200));
        *(__m128i *)(v8 + 216) = _mm_loadu_si128((const __m128i *)(v7 + 216));
        v11 = *(_QWORD *)(v7 + 246);
        *(__m128i *)(v8 + 232) = _mm_loadu_si128((const __m128i *)(v7 + 232));
        *(_QWORD *)(v8 + 246) = v11;
        v12 = *((_QWORD *)v7 + 32);
        v13 = _mm_loadu_si128((const __m128i *)(v7 + 264));
        *((_QWORD *)v7 + 32) = 0;
        *(_QWORD *)(v8 + 256) = v12;
        *(__m128i *)(v8 + 264) = v13;
        v14 = *(char **)v7;
        *((_QWORD *)v7 + 34) = 0;
        if ( v14 )
        {
          v15 = *((_QWORD *)v7 + 1);
          if ( v15 )
          {
            v16 = 0;
            for ( i = 0; i != v15; ++i )
            {
              v18 = &v14[v16];
              v19 = *(void **)&v14[v16 + 88];
              if ( v19 )
              {
                *((_QWORD *)v18 + 12) = 0;
                qfree(v19);
              }
              v20 = *((void **)v18 + 7);
              if ( v20 )
              {
                *((_QWORD *)v18 + 8) = 0;
                qfree(v20);
              }
              v21 = *((void **)v18 + 4);
              if ( v21 )
              {
                *((_QWORD *)v18 + 5) = 0;
                qfree(v21);
              }
              v22 = *((void **)v18 + 1);
              if ( v22 )
              {
                *((_QWORD *)v18 + 2) = 0;
                qfree(v22);
              }
              v14 = *(char **)v7;
              v16 += 112;
            }
          }
          *((_QWORD *)v7 + 1) = 0;
          qfree(v14);
        }
        --v23;
        v7 += 280;
        v8 += 280;
      }
      while ( v23 != -1 );
      v7 = *a1;
    }
    qfree(v7);
    *a1 = v25;
    a1[2] = v26;
    v1 = a1[1];
  }
  else
  {
    v25 = *a1;
  }
  v3 = &v25[280 * (_QWORD)v1];
  *(_QWORD *)v3 = 0;
  *((_QWORD *)v3 + 32) = 0;
  *(_OWORD *)(v3 + 8) = 0;
  *(_OWORD *)(v3 + 264) = 0;
  ++a1[1];
  return v3;
}
