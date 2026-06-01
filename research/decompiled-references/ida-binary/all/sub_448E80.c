unsigned __int64 __fastcall sub_448E80(__int64 a1, const char *a2)
{
  __m128i *v2; // rax
  void *v3; // rsi
  void *v4; // r14
  _QWORD *v5; // rbp
  void *v6; // r13
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rax
  char *v11; // r10
  const char *v12; // rsi
  __m128i v13; // xmm0
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbp
  int v21; // eax
  _QWORD *v22; // rax
  __int64 v24; // rax
  size_t v25; // rbx
  size_t v26; // rbx
  __m128i v27; // [rsp+8h] [rbp-120h] BYREF
  __m128i v28; // [rsp+18h] [rbp-110h] BYREF
  char *v29; // [rsp+28h] [rbp-100h]
  void *v30; // [rsp+30h] [rbp-F8h]
  size_t v31[2]; // [rsp+38h] [rbp-F0h]
  void *v32; // [rsp+48h] [rbp-E0h] BYREF
  size_t v33[2]; // [rsp+50h] [rbp-D8h]
  void *src; // [rsp+60h] [rbp-C8h] BYREF
  size_t n[2]; // [rsp+68h] [rbp-C0h]
  __int64 v36; // [rsp+78h] [rbp-B0h]
  __int64 v37; // [rsp+80h] [rbp-A8h]
  __int64 v38; // [rsp+D8h] [rbp-50h]
  __int64 v39; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v40; // [rsp+E8h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  sub_444370(a1, a2);
  v30 = nullptr;
  v32 = nullptr;
  src = nullptr;
  v36 = 0;
  v37 = 0;
  *(_OWORD *)v31 = 0;
  *(_OWORD *)v33 = 0;
  *(_OWORD *)n = 0;
  v2 = (__m128i *)qvector_reserve(&src, 0, 30, 1);
  src = v2;
  n[0] = 30;
  *v2 = _mm_load_si128((const __m128i *)&xmmword_5DDC00);
  *(__m128i *)((char *)v2 + 13) = _mm_load_si128((const __m128i *)&xmmword_5DDC10);
  *((_BYTE *)src + 29) = 0;
  v3 = v32;
  if ( v33[1] <= 0xC )
  {
    v32 = (void *)qvector_reserve(&v32, v32, 13, 1);
    v3 = v32;
  }
  v4 = nullptr;
  v33[0] = 13;
  qmemcpy(v3, "New worklist", 12);
  *((_BYTE *)v32 + 12) = 0;
  HIDWORD(v37) = -2;
  v5 = *(_QWORD **)(a1 + 400);
  v27.m128i_i64[0] = v31[0];
  if ( v31[0] )
  {
    v4 = (void *)qalloc_or_throw(v31[0]);
    memcpy(v4, v30, v31[0]);
  }
  v6 = nullptr;
  v27.m128i_i64[1] = v33[0];
  if ( v33[0] )
  {
    v26 = v33[0];
    v6 = (void *)qalloc_or_throw(v33[0]);
    memcpy(v6, v32, v26);
  }
  v28 = (__m128i)n[0];
  if ( n[0] )
  {
    v25 = n[0];
    v28.m128i_i64[1] = qalloc_or_throw(n[0]);
    memcpy((void *)v28.m128i_i64[1], src, v25);
  }
  v7 = v36;
  v8 = v37;
  v9 = *(_QWORD *)(a1 + 400);
  v10 = *(_QWORD *)(a1 + 408);
  v38 = v36;
  v39 = v37;
  v11 = (char *)v5 - v9;
  if ( *(_QWORD *)(a1 + 416) < (unsigned __int64)(v10 + 1) )
  {
    v29 = (char *)v5 - v9;
    v24 = qvector_reserve(a1 + 400, v9, v10 + 1, 88);
    v11 = (char *)v5 - v9;
    *(_QWORD *)(a1 + 400) = v24;
    v5 = (_QWORD *)((char *)v5 + v24 - v9);
    v10 = *(_QWORD *)(a1 + 408);
  }
  v12 = (const char *)v5;
  memmove(v5 + 11, v5, 88 * v10 - (_QWORD)v11);
  v13 = _mm_loadl_epi64(&v27);
  v14 = v28.m128i_i64[1];
  v5[10] = v8;
  *v5 = v4;
  v5[3] = v6;
  *(__m128i *)(v5 + 1) = _mm_unpacklo_epi64(v13, v13);
  v15 = _mm_loadl_epi64((const __m128i *)&v27.m128i_u64[1]);
  v5[6] = v14;
  v5[9] = v7;
  *((__m128i *)v5 + 2) = _mm_unpacklo_epi64(v15, v15);
  v16 = _mm_loadl_epi64(&v28);
  v17 = _mm_unpacklo_epi64(v16, v16);
  *(__m128i *)(v5 + 7) = v17;
  v18 = *(_QWORD *)(a1 + 400);
  v19 = *(_QWORD *)(a1 + 408) + 1LL;
  *(_QWORD *)(a1 + 408) = v19;
  v20 = v18 + 88 * v19;
  if ( v20 != v18 )
  {
    while ( 1 )
    {
      v21 = *(_DWORD *)(v18 + 84);
      if ( v21 == *(_DWORD *)(a1 + 504) )
        goto LABEL_14;
      if ( v21 == -2 )
      {
        v22 = *(_QWORD **)(a1 + 216);
        if ( !v22 )
          v22 = *(_QWORD **)(a1 + 208);
        v12 = &s1;
        if ( *(_QWORD *)(v18 + 32) )
          v12 = *(const char **)(v18 + 24);
        dirtree_mkdir(*v22, v12);
        v18 += 88;
        if ( v20 == v18 )
          break;
      }
      else
      {
        v12 = (const char *)v18;
        sub_448890((_QWORD *)a1, v18);
LABEL_14:
        v18 += 88;
        if ( v20 == v18 )
          break;
      }
    }
  }
  if ( src )
  {
    n[0] = 0;
    *(double *)v17.m128i_i64 = qfree(src, v12);
  }
  if ( v32 )
  {
    v33[0] = 0;
    *(double *)v17.m128i_i64 = qfree(v32, v12, *(double *)v17.m128i_i64);
  }
  if ( v30 )
  {
    v31[0] = 0;
    qfree(v30, v12, *(double *)v17.m128i_i64);
  }
  return v40 - __readfsqword(0x28u);
}
