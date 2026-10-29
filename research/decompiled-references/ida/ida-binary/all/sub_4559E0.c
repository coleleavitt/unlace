__int64 __fastcall users_chooser_t__::vfunc_10(
        _QWORD *a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10)
{
  const char **v10; // rbp
  unsigned int v11; // r12d
  __int64 v13; // rdx
  char *v14; // rax
  __m128i v15; // xmm7
  __m128i v16; // xmm6
  __m128i v17; // xmm5
  __m128i v18; // xmm4
  __m128i v19; // xmm3
  __m128i v20; // xmm2
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rbx
  const char *v25; // rdi
  __int64 v26; // rbx
  const char *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __m128i v30[2]; // [rsp+8h] [rbp-138h] BYREF
  __m128i v31; // [rsp+28h] [rbp-118h] BYREF
  __m128i v32[2]; // [rsp+38h] [rbp-108h] BYREF
  __m128i v33; // [rsp+58h] [rbp-E8h] BYREF
  __m128i v34[2]; // [rsp+68h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+88h] [rbp-B8h]
  __m128i v36; // [rsp+98h] [rbp-A8h]
  __m128i v37; // [rsp+A8h] [rbp-98h]
  __m128i v38; // [rsp+B8h] [rbp-88h]
  __m128i v39; // [rsp+C8h] [rbp-78h]
  __m128i v40; // [rsp+D8h] [rbp-68h]
  __m128i v41; // [rsp+E8h] [rbp-58h]
  __m128i v42; // [rsp+F8h] [rbp-48h]
  __m128i v43; // [rsp+108h] [rbp-38h]
  __int64 v44; // [rsp+118h] [rbp-28h]
  unsigned __int64 v45; // [rsp+120h] [rbp-20h]

  v45 = __readfsqword(0x28u);
  v10 = (const char **)a2;
  LOBYTE(v35) = 0;
  memset(v30, 0, sizeof(v30));
  memset(v32, 0, sizeof(v32));
  memset(v34, 0, sizeof(v34));
  v31 = 0;
  v33 = 0;
  v11 = 0;
  if ( (unsigned __int8)sub_455520((__int64)v30, 0.0, a4, a5, a6, a7, a8, a9, a10) )
  {
    v13 = a1[43];
    a2 = (const char *)a1[42];
    if ( a1[44] < (unsigned __int64)(v13 + 1) )
    {
      v29 = qvector_reserve(a1 + 42, a2, v13 + 1, 136);
      a1[42] = v29;
      v13 = a1[43];
      a2 = (const char *)v29;
    }
    v14 = (char *)&a2[136 * v13];
    *(_OWORD *)(v14 + 8) = 0;
    *(_OWORD *)(v14 + 56) = 0;
    *((_OWORD *)v14 + 2) = 0;
    *((_OWORD *)v14 + 5) = 0;
    *(_OWORD *)(v14 + 104) = 0;
    *(_QWORD *)v14 = 0;
    *((_QWORD *)v14 + 3) = 0;
    *((_QWORD *)v14 + 6) = 0;
    *((_QWORD *)v14 + 9) = 0;
    *((_QWORD *)v14 + 12) = 0;
    *((_QWORD *)v14 + 15) = 0;
    v14[128] = 0;
    ++a1[43];
    v15 = _mm_loadu_si128((const __m128i *)v14);
    v16 = _mm_loadu_si128((const __m128i *)v14 + 1);
    v17 = _mm_loadu_si128((const __m128i *)v14 + 2);
    v18 = _mm_loadu_si128((const __m128i *)v14 + 3);
    v19 = _mm_loadu_si128((const __m128i *)v14 + 4);
    v36 = v15;
    v20 = _mm_loadu_si128((const __m128i *)v14 + 5);
    v21 = _mm_loadu_si128((const __m128i *)v14 + 6);
    v37 = v16;
    v22 = _mm_loadu_si128((const __m128i *)v14 + 7);
    v23 = *((_QWORD *)v14 + 16);
    v38 = v17;
    v39 = v18;
    v44 = v23;
    v40 = v19;
    v41 = v20;
    v42 = v21;
    v43 = v22;
    *(__m128i *)v14 = _mm_load_si128(v30);
    *((__m128i *)v14 + 1) = _mm_load_si128(&v30[1]);
    *((__m128i *)v14 + 2) = _mm_load_si128(&v31);
    *((__m128i *)v14 + 3) = _mm_load_si128(v32);
    *((__m128i *)v14 + 4) = _mm_load_si128(&v32[1]);
    *((__m128i *)v14 + 5) = _mm_load_si128(&v33);
    *((__m128i *)v14 + 6) = _mm_load_si128(v34);
    *((__m128i *)v14 + 7) = _mm_load_si128(&v34[1]);
    *((_QWORD *)v14 + 16) = v35;
    v24 = a1[43];
    v25 = *v10;
    v35 = v23;
    v30[0] = v15;
    v26 = v24 - 1;
    v30[1] = v16;
    v31 = v17;
    v32[0] = v18;
    v32[1] = v19;
    v33 = v20;
    v34[0] = v21;
    v34[1] = v22;
    if ( v25 )
    {
      v10[1] = nullptr;
      qfree(v25, a2);
      *v10 = nullptr;
      v10[2] = nullptr;
    }
    if ( v26 >= 0 )
    {
      v27 = v10[1];
      a2 = *v10;
      if ( v10[2] < v27 + 1 )
      {
        v28 = qvector_reserve(v10, a2, v27 + 1, 8);
        *v10 = (const char *)v28;
        a2 = (const char *)v28;
        v27 = v10[1];
      }
      *(_QWORD *)&a2[8 * (_QWORD)v27] = v26;
      ++v10[1];
    }
    v11 = 1;
  }
  if ( v34[0].m128i_i64[0] )
  {
    v34[0].m128i_i64[1] = 0;
    qfree(v34[0].m128i_i64[0], a2);
  }
  if ( v32[1].m128i_i64[1] )
  {
    v33.m128i_i64[0] = 0;
    qfree(v32[1].m128i_i64[1], a2);
  }
  if ( v32[0].m128i_i64[0] )
  {
    v32[0].m128i_i64[1] = 0;
    qfree(v32[0].m128i_i64[0], a2);
  }
  if ( v30[1].m128i_i64[1] )
  {
    v31.m128i_i64[0] = 0;
    qfree(v30[1].m128i_i64[1], a2);
  }
  if ( v30[0].m128i_i64[0] )
  {
    v30[0].m128i_i64[1] = 0;
    qfree(v30[0].m128i_i64[0], a2);
  }
  return v11;
}
