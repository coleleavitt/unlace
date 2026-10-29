__int64 __fastcall sub_1D56710(
        __int64 **a1,
        __int64 *a2,
        const __m128i *a3,
        __m128 a4,
        __m128 a5,
        __int64 a6,
        const __m128i *a7,
        __int64 a8,
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
  __int64 *v20; // r14
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  __m128i v24; // xmm3
  _BYTE *v25; // rdi
  __m128i *v27; // r14
  __int64 v28; // rax
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rdx
  __m128i *v31; // rax
  _BYTE *v32; // rdi
  __int64 v33; // rsi
  int v35; // [rsp+28h] [rbp-120h]
  int v36; // [rsp+2Ch] [rbp-11Ch]
  __m128i v37; // [rsp+30h] [rbp-118h] BYREF
  __m128i v38; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v39; // [rsp+58h] [rbp-F0h] BYREF
  int v40; // [rsp+5Ch] [rbp-ECh] BYREF
  __m128i v41; // [rsp+60h] [rbp-E8h] BYREF
  __m128i v42; // [rsp+70h] [rbp-D8h]
  __m128i v43; // [rsp+80h] [rbp-C8h] BYREF
  __m128 v44; // [rsp+90h] [rbp-B8h]
  __m128i v45; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-98h]
  __int64 v47; // [rsp+B8h] [rbp-90h]
  __m128i v48; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-78h]
  __int64 v50; // [rsp+D8h] [rbp-70h]
  void *ptr[2]; // [rsp+E0h] [rbp-68h] BYREF
  _BYTE v52[88]; // [rsp+F0h] [rbp-58h] BYREF

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
        v41.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
        v41.m128i_i64[1] = 0;
        v42.m128i_i64[1] = 0;
        sub_1D37A30(&v37, v13, v12, 0, 0, 0, *(double *)a4.m128_u64, a5);
        a4 = (__m128)_mm_loadu_si128(&v37);
        a5 = (__m128)_mm_loadu_si128(&v38);
        v43 = (__m128i)a4;
        v44 = a5;
        if ( (v37.m128i_i32[0] & 0x7FFFFFFF) != 9 )
          break;
        if ( (unsigned __int8)sub_1D56710(
                                (_DWORD)a1,
                                (_DWORD)a1,
                                v43.m128i_i32[2],
                                (_DWORD)a1,
                                v43.m128i_i32[2] + 24 * v43.m128i_i32[1],
                                a8,
                                a9) )
          return 1;
LABEL_11:
        v12 = (const __m128i *)((char *)v12 + 24);
        if ( a7 == v12 )
          return 0;
      }
      if ( sub_F1D570((__int64)&v43) )
        break;
      v27 = &v41;
      if ( (unsigned __int8)sub_1D56220(a1, &v43, &v41, a9, a4, a5) )
        return 1;
      v28 = *(unsigned int *)(a8 + 8);
      v29 = *(_QWORD *)a8;
      v30 = v28 + 1;
      v31 = (__m128i *)(*(_QWORD *)a8 + 32 * v28);
      if ( v30 > *(unsigned int *)(a8 + 12) )
      {
        v33 = a8 + 16;
        if ( v29 > (unsigned __int64)&v41 || v31 <= &v41 )
        {
          sub_2237220(a8, v33, v30, 32);
          v31 = (__m128i *)(*(_QWORD *)a8 + 32LL * *(unsigned int *)(a8 + 8));
        }
        else
        {
          sub_2237220(a8, v33, v30, 32);
          v27 = (__m128i *)((char *)&v41 + *(_QWORD *)a8 - v29);
          v31 = (__m128i *)(*(_QWORD *)a8 + 32LL * *(unsigned int *)(a8 + 8));
        }
      }
      v12 = (const __m128i *)((char *)v12 + 24);
      *v31 = _mm_loadu_si128(v27);
      v31[1] = _mm_loadu_si128(v27 + 1);
      ++*(_DWORD *)(a8 + 8);
      if ( a7 == v12 )
        return 0;
    }
    v39 = 0;
    v40 = 0;
    sub_1E4CF80(
      (unsigned int)&v45,
      (unsigned int)*a1,
      (unsigned int)&v39,
      (unsigned int)&v40,
      v14,
      v15,
      v43.m128i_i64[0],
      v43.m128i_i64[1],
      v44.m128_i32[0],
      v44.m128_i64[1]);
    ptr[0] = v52;
    ptr[1] = (void *)0x200000000LL;
    *(double *)a4.m128_u64 = sub_1E4C910(
                               (unsigned int)*a1,
                               (unsigned int)ptr,
                               v16,
                               v17,
                               v18,
                               v19,
                               v45.m128i_i64[0],
                               v45.m128i_i64[1],
                               v46,
                               v47);
    v20 = *a1;
    v36 = v40;
    v48.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
    v21 = *((_DWORD *)v20 + 3158);
    *((_DWORD *)v20 + 3158) = 0;
    v48.m128i_i64[1] = 0;
    v50 = 0;
    v35 = v21;
    if ( (unsigned __int8)sub_1D56220(a1, &v45, &v48, a9, a4, a5) )
      break;
    sub_1D372C0((__int64)&v37, a1, v39, v36, v22, v23, v48.m128i_i32[0], v48.m128i_i64[1], v49, v50);
    v24 = _mm_loadu_si128(&v38);
    v41 = _mm_loadu_si128(&v37);
    v42 = v24;
    if ( (v37.m128i_i32[0] & 0x7FFFFFFF) == 0 )
      break;
    sub_17429A0(a8, &v41);
    v32 = ptr[0];
    *((_DWORD *)v20 + 3158) = v35;
    if ( v32 == v52 )
      goto LABEL_11;
    free(v32);
    v12 = (const __m128i *)((char *)v12 + 24);
    if ( a7 == v12 )
      return 0;
  }
  v25 = ptr[0];
  *((_DWORD *)v20 + 3158) = v35;
  if ( v25 != v52 )
    free(v25);
  return 1;
}
