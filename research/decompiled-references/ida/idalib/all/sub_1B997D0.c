__int64 __fastcall sub_1B997D0(__int64 *a1, const __m128i *a2, const __m128i *a3, __int64 a4)
{
  const __m128i *v5; // r15
  __int32 v7; // eax
  __m128 v8; // xmm0
  __m128 v9; // xmm1
  int v10; // r8d
  int v11; // r9d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __m128i v20; // xmm3
  _BYTE *v21; // rdi
  _BYTE *v23; // rdi
  int v25; // [rsp+18h] [rbp-130h]
  int v26; // [rsp+2Ch] [rbp-11Ch]
  __m128i v27; // [rsp+30h] [rbp-118h] BYREF
  __m128i v28; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v29; // [rsp+58h] [rbp-F0h] BYREF
  int v30; // [rsp+5Ch] [rbp-ECh] BYREF
  __m128i v31; // [rsp+60h] [rbp-E8h] BYREF
  __m128i v32; // [rsp+70h] [rbp-D8h]
  __m128 v33; // [rsp+80h] [rbp-C8h] BYREF
  __m128 v34; // [rsp+90h] [rbp-B8h]
  __m128i v35; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-98h]
  __int64 v37; // [rsp+B8h] [rbp-90h]
  __m128i v38; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v39; // [rsp+D0h] [rbp-78h]
  __int64 v40; // [rsp+D8h] [rbp-70h]
  void *ptr[2]; // [rsp+E0h] [rbp-68h] BYREF
  _BYTE v42[88]; // [rsp+F0h] [rbp-58h] BYREF

  if ( a3 == a2 )
    return 0;
  v5 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = v5->m128i_i32[0];
        v8 = (__m128)_mm_loadu_si128(v5);
        v9 = (__m128)_mm_loadu_si128(v5 + 1);
        v31 = (__m128i)(0xFFFFFFFE00000000LL & v31.m128i_u64[0]);
        v33 = v8;
        v32.m128i_i64[1] = 0;
        v34 = v9;
        if ( (v7 & 0x7FFFFFFF) != 9 )
          break;
        if ( (unsigned __int8)sub_1B986E0(
                                a1,
                                a1,
                                v33.m128_i64[1],
                                (__int64)a1,
                                v33.m128_u64[1] + 24LL * v33.m128_u32[1],
                                a4,
                                0) )
          return 1;
LABEL_11:
        v5 += 2;
        if ( a3 == v5 )
          return 0;
      }
      if ( sub_F1D570((__int64)&v33) )
        break;
      if ( (unsigned __int8)sub_1B981A0(a1, (const __m128i *)&v33, &v31, 0, v8, v9) )
        return 1;
      v5 += 2;
      sub_17429A0(a4, &v31);
      if ( a3 == v5 )
        return 0;
    }
    v29 = 0;
    v30 = 0;
    sub_1E4CF80(
      (unsigned int)&v35,
      *a1,
      (unsigned int)&v29,
      (unsigned int)&v30,
      v10,
      v11,
      v33.m128_i64[0],
      v33.m128_i64[1],
      v34.m128_i32[0],
      v34.m128_i64[1]);
    ptr[0] = v42;
    ptr[1] = (void *)0x200000000LL;
    *(double *)v8.m128_u64 = sub_1E4C910(
                               *a1,
                               (unsigned int)ptr,
                               v12,
                               v13,
                               v14,
                               v15,
                               v35.m128i_i64[0],
                               v35.m128i_i64[1],
                               v36,
                               v37);
    v16 = *a1;
    v26 = v30;
    v17 = *(_DWORD *)(*a1 + 12632);
    v38.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
    *(_DWORD *)(v16 + 12632) = 0;
    v25 = v17;
    v38.m128i_i64[1] = 0;
    v40 = 0;
    if ( (unsigned __int8)sub_1B981A0(a1, &v35, &v38, 0, v8, v9) )
      break;
    sub_1AE8500((__int64)&v27, a1, v29, v26, v18, v19, v38.m128i_i32[0], v38.m128i_i64[1], v39, v40);
    v20 = _mm_loadu_si128(&v28);
    v31 = _mm_loadu_si128(&v27);
    v32 = v20;
    if ( (v27.m128i_i32[0] & 0x7FFFFFFF) == 0 )
      break;
    sub_17429A0(a4, &v31);
    v23 = ptr[0];
    *(_DWORD *)(v16 + 12632) = v25;
    if ( v23 == v42 )
      goto LABEL_11;
    free(v23);
    v5 += 2;
    if ( a3 == v5 )
      return 0;
  }
  v21 = ptr[0];
  *(_DWORD *)(v16 + 12632) = v25;
  if ( v21 != v42 )
    free(v21);
  return 1;
}
