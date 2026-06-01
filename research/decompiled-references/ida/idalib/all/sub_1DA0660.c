__int64 __fastcall sub_1DA0660(
        __int64 *a1,
        __int64 *a2,
        const __m128i *a3,
        __m128 a4,
        __m128 a5,
        __int64 a6,
        const __m128i *a7,
        __int64 *a8,
        unsigned __int8 a9)
{
  const __m128i *v12; // rbx
  __int64 v13; // rsi
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
  __m128i v49; // [rsp+90h] [rbp-C8h] BYREF
  __m128 v50; // [rsp+A0h] [rbp-B8h]
  __m128i v51; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-98h]
  __int64 v53; // [rsp+C8h] [rbp-90h]
  __m128i v54; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v55; // [rsp+E0h] [rbp-78h]
  __int64 v56; // [rsp+E8h] [rbp-70h]
  void *ptr[2]; // [rsp+F0h] [rbp-68h] BYREF
  _BYTE v58[88]; // [rsp+100h] [rbp-58h] BYREF

  if ( a7 == a3 )
    return 0;
  v12 = a3;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = *a2;
        v47 = (__m128i)(0xFFFFFFFE00000000LL & v47.m128i_u64[0]);
        v48.m128i_i64[1] = 0;
        sub_1D3AAD0(&v43, v13, v12, 0, 0, 0, *(double *)a4.m128_u64, a5);
        a4 = (__m128)_mm_loadu_si128(&v43);
        a5 = (__m128)_mm_loadu_si128(&v44);
        v49 = (__m128i)a4;
        v50 = a5;
        if ( (v43.m128i_i32[0] & 0x7FFFFFFF) != 9 )
          break;
        if ( (unsigned __int8)sub_1DA0660(
                                (_DWORD)a1,
                                (_DWORD)a1,
                                v49.m128i_i32[2],
                                (_DWORD)a1,
                                v49.m128i_i32[2] + 24 * v49.m128i_i32[1],
                                (_DWORD)a8,
                                a9) )
          return 1;
LABEL_11:
        v12 = (const __m128i *)((char *)v12 + 24);
        if ( a7 == v12 )
          return 0;
      }
      if ( sub_F1D570((__int64)&v49) )
        break;
      if ( (unsigned __int8)sub_1DA0120(a1, &v49, &v47, a9, a4, a5) )
        return 1;
      v27 = *((unsigned int *)a8 + 2);
      v28 = v27 + 1;
      v29 = (__m128i *)(*a8 + 32 * v27);
      v30 = &v47;
      if ( v28 > *((unsigned int *)a8 + 3) )
      {
        v36 = a8 + 2;
        v39 = *a8;
        if ( *a8 > (unsigned __int64)&v47 || v29 <= &v47 )
        {
          sub_2237220(a8, v36, v28, 32);
          v30 = &v47;
          v29 = (__m128i *)(*a8 + 32LL * *((unsigned int *)a8 + 2));
        }
        else
        {
          sub_2237220(a8, v36, v28, 32);
          v30 = (__m128i *)((char *)&v47 + *a8 - v39);
          v29 = (__m128i *)(*a8 + 32LL * *((unsigned int *)a8 + 2));
        }
      }
      v12 = (const __m128i *)((char *)v12 + 24);
      *v29 = _mm_loadu_si128(v30);
      v29[1] = _mm_loadu_si128(v30 + 1);
      ++*((_DWORD *)a8 + 2);
      if ( a7 == v12 )
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
      v49.m128i_i64[0],
      v49.m128i_i64[1],
      v50.m128_i32[0],
      v50.m128_i64[1]);
    ptr[0] = v58;
    ptr[1] = (void *)0x200000000LL;
    *(double *)a4.m128_u64 = sub_1E4C910(
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
    if ( (unsigned __int8)sub_1DA0120(a1, &v51, &v54, a9, a4, a5) )
      break;
    sub_1D81DB0((__int64)&v43, a1, v45, v42, v22, v23, v54.m128i_i32[0], v54.m128i_i64[1], v55, v56);
    v24 = _mm_loadu_si128(&v44);
    v47 = _mm_loadu_si128(&v43);
    v48 = v24;
    if ( (v43.m128i_i32[0] & 0x7FFFFFFF) == 0 )
      break;
    v31 = *((unsigned int *)a8 + 2);
    v32 = &v47;
    v33 = v31 + 1;
    v34 = (__m128i *)(*a8 + 32 * v31);
    if ( v33 > *((unsigned int *)a8 + 3) )
    {
      v37 = a8 + 2;
      if ( *a8 > (unsigned __int64)&v47 || v34 <= &v47 )
      {
        sub_2237220(a8, v37, v33, 32);
        v32 = &v47;
        v34 = (__m128i *)(*a8 + 32LL * *((unsigned int *)a8 + 2));
      }
      else
      {
        v40 = *a8;
        sub_2237220(a8, v37, v33, 32);
        v32 = (__m128i *)((char *)&v47 + *a8 - v40);
        v34 = (__m128i *)(32LL * *((unsigned int *)a8 + 2) + *a8);
      }
    }
    *v34 = _mm_loadu_si128(v32);
    v35 = ptr[0];
    v34[1] = _mm_loadu_si128(v32 + 1);
    ++*((_DWORD *)a8 + 2);
    *(_DWORD *)(v20 + 12632) = v41;
    if ( v35 == v58 )
      goto LABEL_11;
    free(v35);
    v12 = (const __m128i *)((char *)v12 + 24);
    if ( a7 == v12 )
      return 0;
  }
  v25 = ptr[0];
  *(_DWORD *)(v20 + 12632) = v41;
  if ( v25 != v58 )
    free(v25);
  return 1;
}
