__int64 __fastcall sub_1BB8310(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  __int64 v9; // rbx
  __int64 v10; // rsi
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  int v13; // r8d
  int v14; // r9d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  __m128i v23; // xmm3
  _BYTE *v24; // rdi
  _BYTE *v26; // rdi
  int v29; // [rsp+38h] [rbp-120h]
  int v30; // [rsp+3Ch] [rbp-11Ch]
  __m128i v31; // [rsp+40h] [rbp-118h] BYREF
  __m128i v32; // [rsp+50h] [rbp-108h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-F0h] BYREF
  int v34; // [rsp+6Ch] [rbp-ECh] BYREF
  __m128i v35; // [rsp+70h] [rbp-E8h] BYREF
  __m128i v36; // [rsp+80h] [rbp-D8h]
  __m128 v37; // [rsp+90h] [rbp-C8h] BYREF
  __m128 v38; // [rsp+A0h] [rbp-B8h]
  __m128i v39; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+C0h] [rbp-98h]
  __int64 v41; // [rsp+C8h] [rbp-90h]
  __m128i v42; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v43; // [rsp+E0h] [rbp-78h]
  __int64 v44; // [rsp+E8h] [rbp-70h]
  void *ptr[2]; // [rsp+F0h] [rbp-68h] BYREF
  _BYTE v46[88]; // [rsp+100h] [rbp-58h] BYREF

  if ( a5 == a3 )
    return 0;
  v9 = a3;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *a2;
        v35 = (__m128i)(0xFFFFFFFE00000000LL & v35.m128i_u64[0]);
        v36.m128i_i64[1] = 0;
        sub_1D3AAD0(&v31, v10, v9, 0, 0, 0);
        v11 = (__m128)_mm_loadu_si128(&v31);
        v12 = (__m128)_mm_loadu_si128(&v32);
        v37 = v11;
        v38 = v12;
        if ( (v31.m128i_i32[0] & 0x7FFFFFFF) != 9 )
          break;
        if ( (unsigned __int8)sub_1BB8310(
                                (_DWORD)a1,
                                (_DWORD)a1,
                                v37.m128_i32[2],
                                (_DWORD)a1,
                                v37.m128_i32[2] + 24 * v37.m128_i32[1],
                                a6,
                                a7) )
          return 1;
LABEL_11:
        v9 += 24;
        if ( a5 == v9 )
          return 0;
      }
      if ( sub_F1D570((__int64)&v37) )
        break;
      if ( (unsigned __int8)sub_1BB7DD0(a1, (const __m128i *)&v37, &v35, a7, v11, v12) )
        return 1;
      v9 += 24;
      sub_17429A0(a6, &v35);
      if ( a5 == v9 )
        return 0;
    }
    v33 = 0;
    v34 = 0;
    sub_1E4CF80(
      (unsigned int)&v39,
      *a1,
      (unsigned int)&v33,
      (unsigned int)&v34,
      v13,
      v14,
      v37.m128_i64[0],
      v37.m128_i64[1],
      v38.m128_i32[0],
      v38.m128_i64[1]);
    ptr[0] = v46;
    ptr[1] = (void *)0x200000000LL;
    *(double *)v11.m128_u64 = sub_1E4C910(
                                *a1,
                                (unsigned int)ptr,
                                v15,
                                v16,
                                v17,
                                v18,
                                v39.m128i_i64[0],
                                v39.m128i_i64[1],
                                v40,
                                v41);
    v19 = *a1;
    v30 = v34;
    v20 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(*a1 + 12632) = 0;
    v42.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
    v29 = v20;
    v42.m128i_i64[1] = 0;
    v44 = 0;
    if ( (unsigned __int8)sub_1BB7DD0(a1, &v39, &v42, a7, v11, v12) )
      break;
    sub_1AE9860((__int64)&v31, a1, v33, v30, v21, v22, v42.m128i_i32[0], v42.m128i_i64[1], v43, v44);
    v23 = _mm_loadu_si128(&v32);
    v35 = _mm_loadu_si128(&v31);
    v36 = v23;
    if ( (v31.m128i_i32[0] & 0x7FFFFFFF) == 0 )
      break;
    sub_17429A0(a6, &v35);
    v26 = ptr[0];
    *(_DWORD *)(v19 + 12632) = v29;
    if ( v26 == v46 )
      goto LABEL_11;
    free(v26);
    v9 += 24;
    if ( a5 == v9 )
      return 0;
  }
  v24 = ptr[0];
  *(_DWORD *)(v19 + 12632) = v29;
  if ( v24 != v46 )
    free(v24);
  return 1;
}
