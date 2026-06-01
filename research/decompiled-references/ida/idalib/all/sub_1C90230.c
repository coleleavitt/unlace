__int64 __fastcall sub_1C90230(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        unsigned __int8 a7)
{
  __int64 v10; // rbx
  __int64 v11; // rsi
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  int v14; // r8d
  int v15; // r9d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // r15
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  __m128i v24; // xmm3
  _BYTE *v25; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __m128i *v29; // rax
  __m128i *v30; // r9
  __int64 v31; // rax
  __m128i *v32; // r9
  unsigned __int64 v33; // rdx
  __m128i *v34; // rax
  _BYTE *v35; // rdi
  __int64 *v36; // rsi
  __int64 *v37; // rsi
  __int64 v39; // [rsp+28h] [rbp-130h]
  __int64 v40; // [rsp+28h] [rbp-130h]
  int v41; // [rsp+30h] [rbp-128h]
  int v42; // [rsp+38h] [rbp-120h]
  __m128i v43; // [rsp+40h] [rbp-118h] BYREF
  __m128i v44; // [rsp+50h] [rbp-108h] BYREF
  unsigned int v45; // [rsp+68h] [rbp-F0h] BYREF
  int v46; // [rsp+6Ch] [rbp-ECh] BYREF
  __m128i v47; // [rsp+70h] [rbp-E8h] BYREF
  __m128i v48; // [rsp+80h] [rbp-D8h]
  __m128 v49; // [rsp+90h] [rbp-C8h] BYREF
  __m128 v50; // [rsp+A0h] [rbp-B8h]
  __m128i v51; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-98h]
  __int64 v53; // [rsp+C8h] [rbp-90h]
  __m128i v54; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v55; // [rsp+E0h] [rbp-78h]
  __int64 v56; // [rsp+E8h] [rbp-70h]
  void *ptr[2]; // [rsp+F0h] [rbp-68h] BYREF
  _BYTE v58[88]; // [rsp+100h] [rbp-58h] BYREF

  if ( a5 == a3 )
    return 0;
  v10 = a3;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *a2;
        v47 = (__m128i)(0xFFFFFFFE00000000LL & v47.m128i_u64[0]);
        v48.m128i_i64[1] = 0;
        sub_1D3AAD0(&v43, v11, v10, 0, 0, 0);
        v12 = (__m128)_mm_loadu_si128(&v43);
        v13 = (__m128)_mm_loadu_si128(&v44);
        v49 = v12;
        v50 = v13;
        if ( (v43.m128i_i32[0] & 0x7FFFFFFF) != 9 )
          break;
        if ( (unsigned __int8)sub_1C90230(
                                (_DWORD)a1,
                                (_DWORD)a1,
                                v49.m128_i32[2],
                                (_DWORD)a1,
                                v49.m128_i32[2] + 24 * v49.m128_i32[1],
                                (_DWORD)a6,
                                a7) )
          return 1;
LABEL_11:
        v10 += 24;
        if ( a5 == v10 )
          return 0;
      }
      if ( sub_F1D570((__int64)&v49) )
        break;
      if ( (unsigned __int8)sub_1C8FCF0(a1, (const __m128i *)&v49, &v47, a7, v12, v13) )
        return 1;
      v27 = *((unsigned int *)a6 + 2);
      v28 = v27 + 1;
      v29 = (__m128i *)(*a6 + 32 * v27);
      v30 = &v47;
      if ( v28 > *((unsigned int *)a6 + 3) )
      {
        v36 = a6 + 2;
        v39 = *a6;
        if ( *a6 > (unsigned __int64)&v47 || v29 <= &v47 )
        {
          sub_2237220(a6, v36, v28, 32);
          v30 = &v47;
          v29 = (__m128i *)(*a6 + 32LL * *((unsigned int *)a6 + 2));
        }
        else
        {
          sub_2237220(a6, v36, v28, 32);
          v30 = (__m128i *)((char *)&v47 + *a6 - v39);
          v29 = (__m128i *)(*a6 + 32LL * *((unsigned int *)a6 + 2));
        }
      }
      v10 += 24;
      *v29 = _mm_loadu_si128(v30);
      v29[1] = _mm_loadu_si128(v30 + 1);
      ++*((_DWORD *)a6 + 2);
      if ( a5 == v10 )
        return 0;
    }
    v45 = 0;
    v46 = 0;
    sub_1E4CF80(
      (unsigned int)&v51,
      *a1,
      (unsigned int)&v45,
      (unsigned int)&v46,
      v14,
      v15,
      v49.m128_i64[0],
      v49.m128_i64[1],
      v50.m128_i32[0],
      v50.m128_i64[1]);
    ptr[0] = v58;
    ptr[1] = (void *)0x200000000LL;
    *(double *)v12.m128_u64 = sub_1E4C910(
                                *a1,
                                (unsigned int)ptr,
                                v16,
                                v17,
                                v18,
                                v19,
                                v51.m128i_i64[0],
                                v51.m128i_i64[1],
                                v52,
                                v53);
    v20 = *a1;
    v42 = v46;
    v21 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(*a1 + 12632) = 0;
    v54.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
    v41 = v21;
    v54.m128i_i64[1] = 0;
    v56 = 0;
    if ( (unsigned __int8)sub_1C8FCF0(a1, &v51, &v54, a7, v12, v13) )
      break;
    sub_1C735A0((__int64)&v43, a1, v45, v42, v22, v23, v54.m128i_i32[0], v54.m128i_i64[1], v55, v56);
    v24 = _mm_loadu_si128(&v44);
    v47 = _mm_loadu_si128(&v43);
    v48 = v24;
    if ( (v43.m128i_i32[0] & 0x7FFFFFFF) == 0 )
      break;
    v31 = *((unsigned int *)a6 + 2);
    v32 = &v47;
    v33 = v31 + 1;
    v34 = (__m128i *)(*a6 + 32 * v31);
    if ( v33 > *((unsigned int *)a6 + 3) )
    {
      v37 = a6 + 2;
      if ( *a6 > (unsigned __int64)&v47 || v34 <= &v47 )
      {
        sub_2237220(a6, v37, v33, 32);
        v32 = &v47;
        v34 = (__m128i *)(*a6 + 32LL * *((unsigned int *)a6 + 2));
      }
      else
      {
        v40 = *a6;
        sub_2237220(a6, v37, v33, 32);
        v32 = (__m128i *)((char *)&v47 + *a6 - v40);
        v34 = (__m128i *)(32LL * *((unsigned int *)a6 + 2) + *a6);
      }
    }
    *v34 = _mm_loadu_si128(v32);
    v35 = ptr[0];
    v34[1] = _mm_loadu_si128(v32 + 1);
    ++*((_DWORD *)a6 + 2);
    *(_DWORD *)(v20 + 12632) = v41;
    if ( v35 == v58 )
      goto LABEL_11;
    free(v35);
    v10 += 24;
    if ( a5 == v10 )
      return 0;
  }
  v25 = ptr[0];
  *(_DWORD *)(v20 + 12632) = v41;
  if ( v25 != v58 )
    free(v25);
  return 1;
}
