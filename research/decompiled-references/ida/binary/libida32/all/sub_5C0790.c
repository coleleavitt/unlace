unsigned __int64 __fastcall sub_5C0790(__int64 *a1, const char *a2)
{
  void *v3; // r12
  __int64 v4; // rax
  const char *v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  __m128i v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __m128i v15; // xmm0
  size_t v17; // rbx
  void *v18; // rax
  __int64 v19; // r13
  __int64 v20; // rax
  char *v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rbp
  __int128 v24; // xmm1
  __int64 v25; // rsi
  __m128i v26; // xmm0
  __int64 v27; // rsi
  __m128i v28; // xmm0
  void *v29; // rdi
  __int64 v31; // rax
  size_t v32; // rbx
  void *v33; // rax
  const void *v34; // rsi
  __m128i v35; // [rsp+0h] [rbp-98h] BYREF
  __m128i v36; // [rsp+10h] [rbp-88h] BYREF
  __int64 v37; // [rsp+20h] [rbp-78h]
  unsigned __int64 v38; // [rsp+58h] [rbp-40h]

  v3 = nullptr;
  v4 = *(_QWORD *)a2;
  v38 = __readfsqword(0x28u);
  v5 = a2;
  v37 = v4;
  v6 = *((_QWORD *)a2 + 2);
  v36.m128i_i64[0] = v6;
  if ( v6 )
  {
    v17 = 4 * v6;
    v18 = (void *)qalloc_or_throw(4 * v6, a2);
    a2 = *((const char **)a2 + 1);
    v3 = v18;
    memcpy(v18, a2, v17);
  }
  v7 = *((_QWORD *)v5 + 5);
  v35 = (__m128i)v7;
  if ( v7 )
  {
    v32 = 4 * v7;
    v33 = (void *)qalloc_or_throw(4 * v7, a2);
    v34 = *((const void **)v5 + 4);
    v35.m128i_i64[1] = (__int64)v33;
    memcpy(v33, v34, v32);
  }
  v8 = a1[1];
  v9 = a1[2];
  if ( v9 < v8 + 1 )
  {
    v10 = qvector_reserve(a1, 0, v8 + 1, 56);
    v19 = a1[1];
    v20 = a1[2];
    a1[2] = v9;
    v21 = (char *)*a1;
    v36.m128i_i64[1] = v20;
    v22 = v19 - 1;
    if ( v22 >= 0 )
    {
      v23 = v10;
      v24 = 0;
      do
      {
        *(_QWORD *)v23 = *(_QWORD *)v21;
        v25 = *((_QWORD *)v21 + 1);
        v26 = _mm_loadu_si128((const __m128i *)v21 + 1);
        *((_QWORD *)v21 + 1) = 0;
        *(_QWORD *)(v23 + 8) = v25;
        *(__m128i *)(v23 + 16) = v26;
        v27 = *((_QWORD *)v21 + 4);
        v28 = _mm_loadu_si128((const __m128i *)(v21 + 40));
        *((_OWORD *)v21 + 1) = v24;
        *(_QWORD *)(v23 + 32) = v27;
        *(__m128i *)(v23 + 40) = v28;
        v29 = *((void **)v21 + 1);
        *((_QWORD *)v21 + 4) = 0;
        *((_QWORD *)v21 + 6) = 0;
        if ( v29 )
        {
          *((_QWORD *)v21 + 2) = 0;
          qfree(v29);
          v24 = 0;
        }
        v21 += 56;
        v23 += 56;
      }
      while ( v22-- != 0 );
      v21 = (char *)*a1;
    }
    qfree(v21);
    v31 = v36.m128i_i64[1];
    *a1 = v10;
    a1[2] = v31;
    v8 = a1[1];
  }
  else
  {
    v10 = *a1;
  }
  v11 = _mm_loadl_epi64(&v36);
  v12 = v35.m128i_i64[1];
  v13 = v10 + 56 * v8;
  v14 = v37;
  *(__m128i *)(v13 + 16) = _mm_unpacklo_epi64(v11, v11);
  v15 = _mm_loadl_epi64(&v35);
  *(_QWORD *)v13 = v14;
  *(_QWORD *)(v13 + 8) = v3;
  *(_QWORD *)(v13 + 32) = v12;
  *(__m128i *)(v13 + 40) = _mm_unpacklo_epi64(v15, v15);
  ++a1[1];
  return v38 - __readfsqword(0x28u);
}

