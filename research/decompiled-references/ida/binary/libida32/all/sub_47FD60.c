void __fastcall sub_47FD60(__int64 *a1, __m128i *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // r15
  __m128i *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int8 *v10; // r8
  const char *v11; // rsi
  size_t v12; // r12
  __int64 v13; // rax
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  size_t v17; // r12
  void *v18; // rax
  void *v19; // rax
  __int64 v20; // rax
  __int8 *v21; // [rsp+8h] [rbp-40h]

  v4 = a4 - a3;
  v5 = (a4 - a3) >> 7;
  if ( v5 )
  {
    v6 = a2;
    v7 = a3;
    v8 = a1[1];
    v10 = &a2->m128i_i8[-*a1];
    if ( a1[2] < (unsigned __int64)(v5 + v8) )
    {
      v21 = &a2->m128i_i8[-*a1];
      v20 = qvector_reserve(a1, *a1, v5 + v8, 128);
      v10 = v21;
      v8 = a1[1];
      *a1 = v20;
      v6 = (__m128i *)&v21[v20];
    }
    v11 = (const char *)v6;
    memmove(&v6->m128i_i8[v4], v6, (v8 << 7) - (_QWORD)v10);
    for ( ; a4 != v7; v6[-1].m128i_i8[8] = *(_BYTE *)(v7 - 8) )
    {
      v16 = _mm_loadu_si128((const __m128i *)v7);
      v6[1].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v6[1] + 8) = 0;
      *v6 = v16;
      v17 = *(_QWORD *)(v7 + 24);
      if ( v17 )
      {
        v18 = (void *)qalloc_or_throw(*(_QWORD *)(v7 + 24), v11);
        v6[2].m128i_i64[0] = v17;
        v6[1].m128i_i64[0] = (__int64)v18;
        v11 = *(const char **)(v7 + 16);
        memcpy(v18, v11, v17);
        v6[1].m128i_i64[1] = v17;
      }
      v6[2].m128i_i64[1] = 0;
      v6[3] = 0;
      v12 = *(_QWORD *)(v7 + 48);
      if ( v12 )
      {
        v19 = (void *)qalloc_or_throw(*(_QWORD *)(v7 + 48), v11);
        v6[2].m128i_i64[1] = (__int64)v19;
        v6[3].m128i_i64[1] = v12;
        memcpy(v19, *(const void **)(v7 + 40), v12);
        v6[3].m128i_i64[0] = v12;
      }
      v6[4].m128i_i64[0] = 0;
      v11 = (const char *)(v7 + 64);
      copy_tinfo_t(&v6[4]);
      v13 = *(_QWORD *)(v7 + 104);
      v14 = _mm_loadu_si128((const __m128i *)(v7 + 72));
      v7 += 128;
      v6 += 8;
      v6[-2].m128i_i64[1] = v13;
      LODWORD(v13) = *(_DWORD *)(v7 - 16);
      *(__m128i *)((char *)v6 - 56) = v14;
      v15 = _mm_loadu_si128((const __m128i *)(v7 - 40));
      v6[-1].m128i_i32[0] = v13;
      LODWORD(v13) = *(_DWORD *)(v7 - 12);
      *(__m128i *)((char *)v6 - 40) = v15;
      v6[-1].m128i_i32[1] = v13;
    }
    a1[1] += v5;
  }
}

