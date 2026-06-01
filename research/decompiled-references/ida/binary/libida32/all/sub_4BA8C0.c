unsigned __int64 __fastcall sub_4BA8C0(__int64 *a1, _QWORD *a2)
{
  void *v2; // r13
  __int64 v4; // rax
  _QWORD *v5; // r15
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // r15
  __m128i v11; // xmm0
  __int64 v12; // rax
  void *v13; // rcx
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  size_t v17; // r14
  void *v18; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  char *v21; // rbp
  __int64 v22; // r12
  __int64 v23; // r14
  __int64 v24; // rsi
  __m128i v25; // xmm0
  __int64 v26; // rsi
  __m128i v27; // xmm0
  __int64 v28; // rsi
  __m128i v29; // xmm0
  void *v30; // rdi
  void *v31; // rdi
  __int64 v33; // rax
  size_t v34; // r14
  void *v35; // rax
  const void *v36; // rsi
  size_t v37; // r14
  void *v38; // rax
  void *ptr; // [rsp+0h] [rbp-B8h]
  __m128i v40; // [rsp+8h] [rbp-B0h] BYREF
  void *v41; // [rsp+18h] [rbp-A0h]
  __m128i v42; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-40h]

  v2 = nullptr;
  v4 = a2[1];
  v43 = __readfsqword(0x28u);
  v5 = a2;
  v40.m128i_i64[1] = v4;
  if ( v4 )
  {
    v17 = v4;
    v18 = (void *)qalloc_or_throw(v4, (const char *)a2);
    a2 = (_QWORD *)*a2;
    v2 = v18;
    memcpy(v18, a2, v17);
  }
  v6 = v5[4];
  ptr = nullptr;
  v40.m128i_i64[0] = v6;
  if ( v6 )
  {
    v37 = v6;
    v38 = (void *)qalloc_or_throw(v6, (const char *)a2);
    a2 = (_QWORD *)v5[3];
    ptr = v38;
    memcpy(v38, a2, v37);
  }
  v41 = nullptr;
  v7 = v5[7];
  v42.m128i_i64[0] = v7;
  if ( v7 )
  {
    v34 = v7;
    v35 = (void *)qalloc_or_throw(v7, (const char *)a2);
    v36 = (const void *)v5[6];
    v41 = v35;
    memcpy(v35, v36, v34);
  }
  v8 = a1[1];
  v9 = a1[2];
  if ( v9 < v8 + 1 )
  {
    v10 = qvector_reserve(a1, 0, v8 + 1, 72);
    v19 = a1[1];
    v20 = a1[2];
    a1[2] = v9;
    v21 = (char *)*a1;
    v42.m128i_i64[1] = v20;
    v22 = v19 - 1;
    if ( v22 >= 0 )
    {
      v23 = v10;
      do
      {
        v24 = *(_QWORD *)v21;
        v25 = _mm_loadu_si128((const __m128i *)(v21 + 8));
        *(_QWORD *)v21 = 0;
        *(_OWORD *)(v21 + 8) = 0;
        *(_QWORD *)v23 = v24;
        *(__m128i *)(v23 + 8) = v25;
        v26 = *((_QWORD *)v21 + 3);
        v27 = _mm_loadu_si128((const __m128i *)v21 + 2);
        *((_QWORD *)v21 + 3) = 0;
        *(_QWORD *)(v23 + 24) = v26;
        *(__m128i *)(v23 + 32) = v27;
        v28 = *((_QWORD *)v21 + 6);
        v29 = _mm_loadu_si128((const __m128i *)(v21 + 56));
        *((_OWORD *)v21 + 2) = 0;
        *(_QWORD *)(v23 + 48) = v28;
        *(__m128i *)(v23 + 56) = v29;
        v30 = *((void **)v21 + 3);
        *((_QWORD *)v21 + 6) = 0;
        *((_QWORD *)v21 + 8) = 0;
        if ( v30 )
        {
          *((_QWORD *)v21 + 4) = 0;
          qfree(v30);
        }
        v31 = *(void **)v21;
        if ( *(_QWORD *)v21 )
        {
          *((_QWORD *)v21 + 1) = 0;
          qfree(v31);
        }
        v21 += 72;
        v23 += 72;
      }
      while ( v22-- != 0 );
      v21 = (char *)*a1;
    }
    qfree(v21);
    v33 = v42.m128i_i64[1];
    *a1 = v10;
    a1[2] = v33;
    v8 = a1[1];
  }
  else
  {
    v10 = *a1;
  }
  v11 = _mm_loadl_epi64((const __m128i *)&v40.m128i_u64[1]);
  v12 = v10 + 72 * v8;
  *(_QWORD *)(v12 + 24) = ptr;
  v13 = v41;
  *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64(v11, v11);
  v14 = _mm_loadl_epi64(&v40);
  *(_QWORD *)v12 = v2;
  *(_QWORD *)(v12 + 48) = v13;
  *(__m128i *)(v12 + 32) = _mm_unpacklo_epi64(v14, v14);
  v15 = _mm_loadl_epi64(&v42);
  *(__m128i *)(v12 + 56) = _mm_unpacklo_epi64(v15, v15);
  ++a1[1];
  return v43 - __readfsqword(0x28u);
}

