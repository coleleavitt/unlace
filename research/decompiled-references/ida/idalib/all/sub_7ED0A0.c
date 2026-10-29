unsigned __int64 __fastcall sub_7ED0A0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  __m128i v7; // xmm2
  __int64 v8; // rbx
  unsigned __int64 v10; // r15
  _QWORD *v11; // rbx
  void *v12; // rdi
  void *v13; // rdi
  __m128i v14; // xmm0
  void *v15; // r15
  size_t v16; // rbp
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  unsigned __int64 v19; // rcx
  void *v20; // rdi
  __m128i v21; // xmm1
  void *v22; // rax
  __m128i v23; // xmm6
  __m128i v24; // xmm4
  __int64 v25; // rbx
  __int64 v26; // rax
  unsigned __int64 v27; // rsi
  __m128i v28; // [rsp+0h] [rbp-298h] BYREF
  void **v29; // [rsp+10h] [rbp-288h]
  __int64 *v30; // [rsp+18h] [rbp-280h]
  __m128i v31; // [rsp+20h] [rbp-278h] BYREF
  __m128i *v32; // [rsp+30h] [rbp-268h]
  __m128i v33[2]; // [rsp+38h] [rbp-260h] BYREF
  char v34[24]; // [rsp+58h] [rbp-240h] BYREF
  char v35[32]; // [rsp+70h] [rbp-228h] BYREF
  void *v36; // [rsp+90h] [rbp-208h] BYREF
  __int128 v37; // [rsp+98h] [rbp-200h]
  void *v38; // [rsp+A8h] [rbp-1F0h] BYREF
  __int128 v39; // [rsp+B0h] [rbp-1E8h]
  __int64 v40; // [rsp+C0h] [rbp-1D8h] BYREF
  __int128 v41; // [rsp+C8h] [rbp-1D0h]
  __int64 v42; // [rsp+D8h] [rbp-1C0h]
  __int128 v43; // [rsp+E0h] [rbp-1B8h]
  int v44; // [rsp+F0h] [rbp-1A8h]
  __int64 v45; // [rsp+F8h] [rbp-1A0h]
  int v46; // [rsp+100h] [rbp-198h]
  __m128i v47; // [rsp+110h] [rbp-188h] BYREF
  void *ptr; // [rsp+120h] [rbp-178h] BYREF
  __int128 v49; // [rsp+128h] [rbp-170h]
  _BYTE v50[120]; // [rsp+138h] [rbp-160h] BYREF
  __m128i v51; // [rsp+1B0h] [rbp-E8h] BYREF
  void *src; // [rsp+1C0h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+1C8h] [rbp-D0h]
  _BYTE v54[72]; // [rsp+1D8h] [rbp-C0h] BYREF
  void *v55; // [rsp+220h] [rbp-78h]
  unsigned __int64 v56; // [rsp+258h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  if ( a1[1] == a2 )
    return v56 - __readfsqword(0x28u);
  v30 = &v33[0].m128i_i64[1];
  sub_7EAE70((__int64)&v33[0].m128i_i64[1], nullptr, nullptr, nullptr);
  v29 = &v36;
  v36 = nullptr;
  v37 = 0;
  sub_7DCEA0(&v36, (__int64)&v33[0].m128i_i64[1]);
  v38 = nullptr;
  v39 = 0;
  sub_7DCEA0(&v38, (__int64)v34);
  v40 = 0;
  v41 = 0;
  sub_7DCEA0(&v40, (__int64)v35);
  v42 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  ptr = nullptr;
  v43 = 0;
  v47 = 0;
  v49 = 0;
  sub_7E2450((__int64)v50, (__int64)&v36);
  v4 = a1[1];
  if ( a2 < v4 )
  {
    v10 = a2;
    do
    {
      v11 = (_QWORD *)(*a1 + 160 * v10);
      v12 = (void *)v11[14];
      if ( v12 )
      {
        v11[15] = 0;
        qfree(v12);
      }
      sub_7D48C0((__int64)(v11 + 5));
      v13 = (void *)v11[2];
      if ( v13 )
      {
        v11[3] = 0;
        qfree(v13);
      }
      ++v10;
    }
    while ( v4 != v10 );
LABEL_9:
    a1[1] = a2;
    goto LABEL_10;
  }
  if ( v4 < a2 )
  {
    v5 = *a1;
    v6 = a1[2];
    v32 = &v47;
    if ( (unsigned __int64)&v47 >= v5 && (unsigned __int64)&v47 < v5 + 160 * v6 )
    {
      v14 = _mm_load_si128(&v47);
      src = nullptr;
      v51 = v14;
      *(_OWORD *)n = 0;
      sub_7DCEA0(&src, (__int64)&ptr);
      v31.m128i_i64[1] = (__int64)v54;
      sub_7E2450((__int64)v54, (__int64)v50);
      v15 = src;
      v16 = n[0];
      v17 = _mm_loadl_epi64(&v51);
      v18 = _mm_loadl_epi64((const __m128i *)&v51.m128i_u64[1]);
      if ( a1[2] < a2 )
      {
        v27 = *a1;
        v33[0].m128i_i64[0] = v17.m128i_i64[0];
        v31.m128i_i64[0] = v18.m128i_i64[0];
        v28 = _mm_unpacklo_epi64(v17, v18);
        *a1 = qvector_reserve(a1, v27, a2, 160);
        v17 = _mm_loadl_epi64(v33);
        v18 = _mm_loadl_epi64(&v31);
      }
      v19 = a1[1];
      v28 = _mm_unpacklo_epi64(v17, v18);
      if ( v19 < a2 )
      {
        do
        {
          v24 = _mm_load_si128(&v28);
          v25 = *a1 + 160 * v19;
          *(_QWORD *)(v25 + 16) = 0;
          *(__m128i *)v25 = v24;
          *(_OWORD *)(v25 + 24) = 0;
          if ( v16 )
          {
            v31.m128i_i64[0] = v19;
            v22 = (void *)qalloc_or_throw(v16);
            *(_QWORD *)(v25 + 16) = v22;
            *(_QWORD *)(v25 + 32) = v16;
            memcpy(v22, v15, v16);
            *(_QWORD *)(v25 + 24) = v16;
            v19 = v31.m128i_i64[0];
          }
          v23 = _mm_load_si128(&v28);
          v31.m128i_i64[0] = v19;
          src = v15;
          n[0] = v16;
          v51 = v23;
          sub_7E2450(v25 + 40, v31.m128i_i64[1]);
          v19 = v31.m128i_i64[0] + 1;
        }
        while ( a2 != v31.m128i_i64[0] + 1 );
      }
      v20 = v55;
      a1[1] = a2;
      if ( v20 )
        qfree(v20);
      v21 = _mm_load_si128(&v28);
      src = v15;
      n[0] = v16;
      v51 = v21;
      sub_7D48C0(v31.m128i_i64[1]);
      if ( src )
        qfree(src);
      goto LABEL_10;
    }
    if ( v6 >= a2 || (v26 = qvector_reserve(a1, v5, a2, 160), v4 = a1[1], *a1 = v26, v5 = v26, v4 < a2) )
    {
      v28 = _mm_load_si128(&v47);
      while ( 1 )
      {
        v7 = _mm_load_si128(&v28);
        v8 = 160 * v4 + v5;
        *(_QWORD *)(v8 + 16) = 0;
        *(__m128i *)v8 = v7;
        *(_OWORD *)(v8 + 24) = 0;
        sub_7DCEA0((_QWORD *)(v8 + 16), (__int64)&ptr);
        sub_7E2450(v8 + 40, (__int64)v50);
        if ( ++v4 >= a2 )
          break;
        v5 = *a1;
      }
    }
    goto LABEL_9;
  }
LABEL_10:
  sub_7E23F0((__int64)v50);
  if ( ptr )
    qfree(ptr);
  sub_7E23F0((__int64)v29);
  sub_7D48C0((__int64)v30);
  return v56 - __readfsqword(0x28u);
}
