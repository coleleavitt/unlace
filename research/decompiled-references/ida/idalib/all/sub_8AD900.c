unsigned __int64 __fastcall sub_8AD900(__int64 *a1, int *a2)
{
  int v3; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  __m128i v8; // xmm0
  __int64 v9; // r8
  void *v10; // r13
  size_t v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __m128i v16; // xmm1
  int v17; // edx
  __int64 v18; // rax
  int v19; // ecx
  __m128i v20; // xmm1
  int v21; // ecx
  __int64 v22; // rcx
  size_t v24; // r15
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 i; // r12
  __int64 v28; // rdx
  __int64 v29; // rsi
  size_t v30; // r15
  __int64 v31; // rdi
  void *v32; // rax
  const void **v33; // rsi
  size_t v34; // rbp
  void *ptr; // [rsp+8h] [rbp-130h]
  void *v36; // [rsp+10h] [rbp-128h]
  __m128i v37; // [rsp+18h] [rbp-120h] BYREF
  __int64 v38; // [rsp+28h] [rbp-110h]
  int v39; // [rsp+30h] [rbp-108h]
  int v40; // [rsp+34h] [rbp-104h]
  __int64 v41; // [rsp+38h] [rbp-100h]
  __m128i v42; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v43; // [rsp+50h] [rbp-E8h]
  __int64 v44; // [rsp+58h] [rbp-E0h]
  int v45; // [rsp+60h] [rbp-D8h]
  __int16 v46; // [rsp+64h] [rbp-D4h]
  __int64 v47; // [rsp+68h] [rbp-D0h]
  int v48; // [rsp+70h] [rbp-C8h]
  int v49; // [rsp+74h] [rbp-C4h]
  __int64 v50; // [rsp+78h] [rbp-C0h]
  __m128i v51; // [rsp+C8h] [rbp-70h]
  __int64 v52; // [rsp+D8h] [rbp-60h]
  unsigned __int64 v53; // [rsp+F8h] [rbp-40h]

  v3 = *a2;
  v53 = __readfsqword(0x28u);
  v45 = v3;
  v46 = *((_WORD *)a2 + 2);
  v43 = *((_QWORD *)a2 + 1);
  v47 = v43;
  v39 = a2[4];
  v48 = v39;
  v40 = a2[5];
  v49 = v40;
  v41 = *((_QWORD *)a2 + 3);
  v50 = v41;
  v5 = *((_QWORD *)a2 + 5);
  v36 = nullptr;
  v37.m128i_i64[1] = v5;
  if ( v5 )
  {
    v24 = v5;
    v36 = (void *)qalloc_or_throw(v5);
    memcpy(v36, *((const void **)a2 + 4), v24);
  }
  ptr = nullptr;
  v6 = *((_QWORD *)a2 + 8);
  v37.m128i_i64[0] = v6;
  if ( v6 )
  {
    v34 = 40 * v6;
    ptr = (void *)qalloc_or_throw(40 * v6);
    memcpy(ptr, *((const void **)a2 + 7), v34);
  }
  v38 = 0;
  v7 = *((_QWORD *)a2 + 11);
  if ( v7 )
  {
    v38 = qalloc_or_throw(24 * v7);
    v26 = v38;
    for ( i = 0; i != v7; ++i )
    {
      v28 = *((_QWORD *)a2 + 10);
      *(_QWORD *)v26 = 0;
      *(_OWORD *)(v26 + 8) = 0;
      v29 = v28 + 24 * i;
      v30 = *(_QWORD *)(v29 + 8);
      if ( v30 )
      {
        v31 = *(_QWORD *)(v29 + 8);
        v42.m128i_i64[0] = v28 + 24 * i;
        v32 = (void *)qalloc_or_throw(v31);
        v33 = (const void **)v42.m128i_i64[0];
        *(_QWORD *)v26 = v32;
        *(_QWORD *)(v26 + 16) = v30;
        memcpy(v32, *v33, v30);
        *(_QWORD *)(v26 + 8) = v30;
      }
      v26 += 24;
    }
  }
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 26));
  v9 = *((_QWORD *)a2 + 15);
  v10 = nullptr;
  v11 = *((_QWORD *)a2 + 17);
  v52 = v9;
  v51 = v8;
  if ( v11 )
  {
    v44 = v9;
    v42 = v8;
    v10 = (void *)qalloc_or_throw(v11);
    memcpy(v10, *((const void **)a2 + 16), v11);
    v9 = v44;
    v8 = _mm_load_si128(&v42);
  }
  v12 = a1[1];
  v13 = *a1;
  if ( a1[2] < (unsigned __int64)(v12 + 1) )
  {
    v44 = v9;
    v42 = v8;
    v25 = qvector_reserve(a1, v13, v12 + 1, 152);
    v12 = a1[1];
    v9 = v44;
    *a1 = v25;
    v13 = v25;
    v8 = _mm_load_si128(&v42);
  }
  v14 = v38;
  v15 = 19 * v12;
  v16 = _mm_loadl_epi64((const __m128i *)&v37.m128i_u64[1]);
  v17 = v45;
  v18 = v13 + 8 * v15;
  *(_QWORD *)(v18 + 8) = v43;
  v19 = v39;
  *(__m128i *)(v18 + 40) = _mm_unpacklo_epi64(v16, v16);
  v20 = _mm_loadl_epi64(&v37);
  *(_DWORD *)(v18 + 16) = v19;
  v21 = v40;
  *(_DWORD *)v18 = v17;
  LOWORD(v17) = v46;
  *(_DWORD *)(v18 + 20) = v21;
  v22 = v41;
  *(__m128i *)(v18 + 64) = _mm_unpacklo_epi64(v20, v20);
  *(_QWORD *)(v18 + 24) = v22;
  *(__m128i *)(v18 + 104) = v8;
  *(_QWORD *)(v18 + 32) = v36;
  *(_WORD *)(v18 + 4) = v17;
  *(_QWORD *)(v18 + 56) = ptr;
  *(_QWORD *)(v18 + 80) = v14;
  *(_QWORD *)(v18 + 120) = v9;
  *(_QWORD *)(v18 + 128) = v10;
  *(__m128i *)(v18 + 88) = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  *(__m128i *)(v18 + 136) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  ++a1[1];
  return v53 - __readfsqword(0x28u);
}
