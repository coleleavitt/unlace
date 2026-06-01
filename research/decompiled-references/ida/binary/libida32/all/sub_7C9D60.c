unsigned __int64 __fastcall sub_7C9D60(const char **a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  __m128i v7; // xmm2
  __int64 v8; // rbx
  unsigned __int64 v10; // r15
  const char *v11; // rbx
  void *v12; // rdi
  void *v13; // rdi
  __m128i v14; // xmm0
  const char *v15; // rsi
  void *v16; // r15
  size_t v17; // rbp
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  unsigned __int64 v20; // rcx
  void *v21; // rdi
  __m128i v22; // xmm1
  void *v23; // rax
  __m128i v24; // xmm6
  __m128i v25; // xmm4
  __int64 v26; // rbx
  __int64 v27; // rax
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
  if ( a1[1] == (const char *)a2 )
    return v56 - __readfsqword(0x28u);
  v30 = &v33[0].m128i_i64[1];
  sub_7C7AD0((__int64)&v33[0].m128i_i64[1], nullptr, nullptr, nullptr);
  v29 = &v36;
  v36 = nullptr;
  v37 = 0;
  sub_7B9AC0(&v36, (__int64)&v33[0].m128i_i64[1]);
  v38 = nullptr;
  v39 = 0;
  sub_7B9AC0(&v38, (__int64)v34);
  v40 = 0;
  v41 = 0;
  sub_7B9AC0(&v40, (__int64)v35);
  v42 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  ptr = nullptr;
  v43 = 0;
  v47 = 0;
  v49 = 0;
  sub_7BF110((__int64)v50, (__int64)&v36);
  v4 = (unsigned __int64)a1[1];
  if ( a2 < v4 )
  {
    v10 = a2;
    do
    {
      v11 = &(*a1)[160 * v10];
      v12 = *((void **)v11 + 14);
      if ( v12 )
      {
        *((_QWORD *)v11 + 15) = 0;
        qfree(v12);
      }
      sub_7B13E0((__int64)(v11 + 40));
      v13 = *((void **)v11 + 2);
      if ( v13 )
      {
        *((_QWORD *)v11 + 3) = 0;
        qfree(v13);
      }
      ++v10;
    }
    while ( v4 != v10 );
LABEL_9:
    a1[1] = (const char *)a2;
    goto LABEL_10;
  }
  if ( v4 < a2 )
  {
    v5 = (unsigned __int64)*a1;
    v6 = (unsigned __int64)a1[2];
    v32 = &v47;
    if ( (unsigned __int64)&v47 >= v5 && (unsigned __int64)&v47 < v5 + 160 * v6 )
    {
      v14 = _mm_load_si128(&v47);
      src = nullptr;
      v51 = v14;
      *(_OWORD *)n = 0;
      sub_7B9AC0(&src, (__int64)&ptr);
      v15 = v50;
      v31.m128i_i64[1] = (__int64)v54;
      sub_7BF110((__int64)v54, (__int64)v50);
      v16 = src;
      v17 = n[0];
      v18 = _mm_loadl_epi64(&v51);
      v19 = _mm_loadl_epi64((const __m128i *)&v51.m128i_u64[1]);
      if ( (unsigned __int64)a1[2] < a2 )
      {
        v15 = *a1;
        v33[0].m128i_i64[0] = v18.m128i_i64[0];
        v31.m128i_i64[0] = v19.m128i_i64[0];
        v28 = _mm_unpacklo_epi64(v18, v19);
        *a1 = (const char *)qvector_reserve(a1, v15, a2, 160);
        v18 = _mm_loadl_epi64(v33);
        v19 = _mm_loadl_epi64(&v31);
      }
      v20 = (unsigned __int64)a1[1];
      v28 = _mm_unpacklo_epi64(v18, v19);
      if ( v20 < a2 )
      {
        do
        {
          v25 = _mm_load_si128(&v28);
          v26 = (__int64)&(*a1)[160 * v20];
          *(_QWORD *)(v26 + 16) = 0;
          *(__m128i *)v26 = v25;
          *(_OWORD *)(v26 + 24) = 0;
          if ( v17 )
          {
            v31.m128i_i64[0] = v20;
            v23 = (void *)qalloc_or_throw(v17, v15);
            *(_QWORD *)(v26 + 16) = v23;
            *(_QWORD *)(v26 + 32) = v17;
            memcpy(v23, v16, v17);
            *(_QWORD *)(v26 + 24) = v17;
            v20 = v31.m128i_i64[0];
          }
          v24 = _mm_load_si128(&v28);
          v15 = (const char *)v31.m128i_i64[1];
          v31.m128i_i64[0] = v20;
          src = v16;
          n[0] = v17;
          v51 = v24;
          sub_7BF110(v26 + 40, v31.m128i_i64[1]);
          v20 = v31.m128i_i64[0] + 1;
        }
        while ( a2 != v31.m128i_i64[0] + 1 );
      }
      v21 = v55;
      a1[1] = (const char *)a2;
      if ( v21 )
        qfree(v21);
      v22 = _mm_load_si128(&v28);
      src = v16;
      n[0] = v17;
      v51 = v22;
      sub_7B13E0(v31.m128i_i64[1]);
      if ( src )
        qfree(src);
      goto LABEL_10;
    }
    if ( v6 >= a2
      || (v27 = qvector_reserve(a1, v5, a2, 160),
          v4 = (unsigned __int64)a1[1],
          *a1 = (const char *)v27,
          v5 = v27,
          v4 < a2) )
    {
      v28 = _mm_load_si128(&v47);
      while ( 1 )
      {
        v7 = _mm_load_si128(&v28);
        v8 = 160 * v4 + v5;
        *(_QWORD *)(v8 + 16) = 0;
        *(__m128i *)v8 = v7;
        *(_OWORD *)(v8 + 24) = 0;
        sub_7B9AC0((_QWORD *)(v8 + 16), (__int64)&ptr);
        sub_7BF110(v8 + 40, (__int64)v50);
        if ( ++v4 >= a2 )
          break;
        v5 = (unsigned __int64)*a1;
      }
    }
    goto LABEL_9;
  }
LABEL_10:
  sub_7BF0B0((__int64)v50);
  if ( ptr )
    qfree(ptr);
  sub_7BF0B0((__int64)v29);
  sub_7B13E0((__int64)v30);
  return v56 - __readfsqword(0x28u);
}

