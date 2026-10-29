unsigned __int64 __fastcall sub_889F80(__int64 *a1, int *a2)
{
  int v3; // eax
  int *v4; // r14
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
  void *v25; // rax
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 i; // r12
  __int64 v29; // rdx
  size_t v30; // r15
  __int64 v31; // rdi
  void *v32; // rax
  int **v33; // rsi
  size_t v34; // rbp
  void *v35; // rax
  void *ptr; // [rsp+8h] [rbp-130h]
  void *v37; // [rsp+10h] [rbp-128h]
  __m128i v38; // [rsp+18h] [rbp-120h] BYREF
  __int64 v39; // [rsp+28h] [rbp-110h]
  int v40; // [rsp+30h] [rbp-108h]
  int v41; // [rsp+34h] [rbp-104h]
  __int64 v42; // [rsp+38h] [rbp-100h]
  __m128i v43; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v44; // [rsp+50h] [rbp-E8h]
  __int64 v45; // [rsp+58h] [rbp-E0h]
  int v46; // [rsp+60h] [rbp-D8h]
  __int16 v47; // [rsp+64h] [rbp-D4h]
  __int64 v48; // [rsp+68h] [rbp-D0h]
  int v49; // [rsp+70h] [rbp-C8h]
  int v50; // [rsp+74h] [rbp-C4h]
  __int64 v51; // [rsp+78h] [rbp-C0h]
  __m128i v52; // [rsp+C8h] [rbp-70h]
  __int64 v53; // [rsp+D8h] [rbp-60h]
  unsigned __int64 v54; // [rsp+F8h] [rbp-40h]

  v3 = *a2;
  v54 = __readfsqword(0x28u);
  v4 = a2;
  v46 = v3;
  v47 = *((_WORD *)a2 + 2);
  v44 = *((_QWORD *)a2 + 1);
  v48 = v44;
  v40 = a2[4];
  v49 = v40;
  v41 = a2[5];
  v50 = v41;
  v42 = *((_QWORD *)a2 + 3);
  v51 = v42;
  v5 = *((_QWORD *)a2 + 5);
  v37 = nullptr;
  v38.m128i_i64[1] = v5;
  if ( v5 )
  {
    v24 = v5;
    v25 = (void *)qalloc_or_throw(v5, (const char *)a2);
    a2 = *((int **)a2 + 4);
    v37 = v25;
    memcpy(v25, a2, v24);
  }
  ptr = nullptr;
  v6 = *((_QWORD *)v4 + 8);
  v38.m128i_i64[0] = v6;
  if ( v6 )
  {
    v34 = 40 * v6;
    v35 = (void *)qalloc_or_throw(40 * v6, (const char *)a2);
    a2 = *((int **)v4 + 7);
    ptr = v35;
    memcpy(v35, a2, v34);
  }
  v39 = 0;
  v7 = *((_QWORD *)v4 + 11);
  if ( v7 )
  {
    v39 = qalloc_or_throw(24 * v7, (const char *)a2);
    v27 = v39;
    for ( i = 0; i != v7; ++i )
    {
      v29 = *((_QWORD *)v4 + 10);
      *(_QWORD *)v27 = 0;
      *(_OWORD *)(v27 + 8) = 0;
      a2 = (int *)(v29 + 24 * i);
      v30 = *((_QWORD *)a2 + 1);
      if ( v30 )
      {
        v31 = *((_QWORD *)a2 + 1);
        v43.m128i_i64[0] = v29 + 24 * i;
        v32 = (void *)qalloc_or_throw(v31, (const char *)a2);
        v33 = (int **)v43.m128i_i64[0];
        *(_QWORD *)v27 = v32;
        *(_QWORD *)(v27 + 16) = v30;
        a2 = *v33;
        memcpy(v32, a2, v30);
        *(_QWORD *)(v27 + 8) = v30;
      }
      v27 += 24;
    }
  }
  v8 = _mm_loadu_si128((const __m128i *)(v4 + 26));
  v9 = *((_QWORD *)v4 + 15);
  v10 = nullptr;
  v11 = *((_QWORD *)v4 + 17);
  v53 = v9;
  v52 = v8;
  if ( v11 )
  {
    v45 = v9;
    v43 = v8;
    v10 = (void *)qalloc_or_throw(v11, (const char *)a2);
    memcpy(v10, *((const void **)v4 + 16), v11);
    v9 = v45;
    v8 = _mm_load_si128(&v43);
  }
  v12 = a1[1];
  v13 = *a1;
  if ( a1[2] < (unsigned __int64)(v12 + 1) )
  {
    v45 = v9;
    v43 = v8;
    v26 = qvector_reserve(a1, v13, v12 + 1, 152);
    v12 = a1[1];
    v9 = v45;
    *a1 = v26;
    v13 = v26;
    v8 = _mm_load_si128(&v43);
  }
  v14 = v39;
  v15 = 19 * v12;
  v16 = _mm_loadl_epi64((const __m128i *)&v38.m128i_u64[1]);
  v17 = v46;
  v18 = v13 + 8 * v15;
  *(_QWORD *)(v18 + 8) = v44;
  v19 = v40;
  *(__m128i *)(v18 + 40) = _mm_unpacklo_epi64(v16, v16);
  v20 = _mm_loadl_epi64(&v38);
  *(_DWORD *)(v18 + 16) = v19;
  v21 = v41;
  *(_DWORD *)v18 = v17;
  LOWORD(v17) = v47;
  *(_DWORD *)(v18 + 20) = v21;
  v22 = v42;
  *(__m128i *)(v18 + 64) = _mm_unpacklo_epi64(v20, v20);
  *(_QWORD *)(v18 + 24) = v22;
  *(__m128i *)(v18 + 104) = v8;
  *(_QWORD *)(v18 + 32) = v37;
  *(_WORD *)(v18 + 4) = v17;
  *(_QWORD *)(v18 + 56) = ptr;
  *(_QWORD *)(v18 + 80) = v14;
  *(_QWORD *)(v18 + 120) = v9;
  *(_QWORD *)(v18 + 128) = v10;
  *(__m128i *)(v18 + 88) = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  *(__m128i *)(v18 + 136) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  ++a1[1];
  return v54 - __readfsqword(0x28u);
}

