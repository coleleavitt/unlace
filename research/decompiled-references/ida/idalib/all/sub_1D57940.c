__int64 __fastcall sub_1D57940(__int64 **a1, const __m128i *a2, const __m128i *a3, __int64 a4)
{
  const __m128i *v5; // r14
  __int32 v7; // eax
  __m128 v8; // xmm0
  __m128 v9; // xmm1
  int v10; // r8d
  int v11; // r9d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 *v16; // r15
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __m128i v20; // xmm3
  _BYTE *v21; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __m128i *v25; // rax
  __m128i *v26; // r15
  _BYTE *v27; // rdi
  __int64 v28; // rsi
  int v30; // [rsp+18h] [rbp-130h]
  __int64 v31; // [rsp+18h] [rbp-130h]
  int v32; // [rsp+2Ch] [rbp-11Ch]
  __m128i v33; // [rsp+30h] [rbp-118h] BYREF
  __m128i v34; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v35; // [rsp+58h] [rbp-F0h] BYREF
  int v36; // [rsp+5Ch] [rbp-ECh] BYREF
  __m128i v37; // [rsp+60h] [rbp-E8h] BYREF
  __m128i v38; // [rsp+70h] [rbp-D8h]
  __m128 v39; // [rsp+80h] [rbp-C8h] BYREF
  __m128 v40; // [rsp+90h] [rbp-B8h]
  __m128i v41; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-98h]
  __int64 v43; // [rsp+B8h] [rbp-90h]
  __m128i v44; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-78h]
  __int64 v46; // [rsp+D8h] [rbp-70h]
  void *ptr[2]; // [rsp+E0h] [rbp-68h] BYREF
  _BYTE v48[88]; // [rsp+F0h] [rbp-58h] BYREF

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
        v37 = (__m128i)(0xFFFFFFFE00000000LL & v37.m128i_u64[0]);
        v39 = v8;
        v38.m128i_i64[1] = 0;
        v40 = v9;
        if ( (v7 & 0x7FFFFFFF) != 9 )
          break;
        if ( (unsigned __int8)sub_1D56710(
                                a1,
                                (__int64 *)a1,
                                (const __m128i *)v39.m128_u64[1],
                                v8,
                                v9,
                                (__int64)a1,
                                (const __m128i *)(v39.m128_u64[1] + 24LL * v39.m128_u32[1]),
                                a4,
                                0) )
          return 1;
LABEL_11:
        v5 += 2;
        if ( a3 == v5 )
          return 0;
      }
      if ( sub_F1D570((__int64)&v39) )
        break;
      if ( (unsigned __int8)sub_1D56220(a1, (const __m128i *)&v39, &v37, 0, v8, v9) )
        return 1;
      v23 = *(unsigned int *)(a4 + 8);
      v24 = v23 + 1;
      v25 = (__m128i *)(*(_QWORD *)a4 + 32 * v23);
      v26 = &v37;
      if ( v24 > *(unsigned int *)(a4 + 12) )
      {
        v28 = a4 + 16;
        if ( *(_QWORD *)a4 > (unsigned __int64)&v37 || v25 <= &v37 )
        {
          sub_2237220(a4, v28, v24, 32);
          v25 = (__m128i *)(*(_QWORD *)a4 + 32LL * *(unsigned int *)(a4 + 8));
        }
        else
        {
          v31 = *(_QWORD *)a4;
          sub_2237220(a4, v28, v24, 32);
          v26 = (__m128i *)((char *)&v37 + *(_QWORD *)a4 - v31);
          v25 = (__m128i *)(*(_QWORD *)a4 + 32LL * *(unsigned int *)(a4 + 8));
        }
      }
      v5 += 2;
      *v25 = _mm_loadu_si128(v26);
      v25[1] = _mm_loadu_si128(v26 + 1);
      ++*(_DWORD *)(a4 + 8);
      if ( a3 == v5 )
        return 0;
    }
    v35 = 0;
    v36 = 0;
    sub_1E4CF80(
      (unsigned int)&v41,
      (unsigned int)*a1,
      (unsigned int)&v35,
      (unsigned int)&v36,
      v10,
      v11,
      v39.m128_i64[0],
      v39.m128_i64[1],
      v40.m128_i32[0],
      v40.m128_i64[1]);
    ptr[0] = v48;
    ptr[1] = (void *)0x200000000LL;
    *(double *)v8.m128_u64 = sub_1E4C910(
                               (unsigned int)*a1,
                               (unsigned int)ptr,
                               v12,
                               v13,
                               v14,
                               v15,
                               v41.m128i_i64[0],
                               v41.m128i_i64[1],
                               v42,
                               v43);
    v16 = *a1;
    v32 = v36;
    v17 = *((_DWORD *)*a1 + 3158);
    v44.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
    *((_DWORD *)v16 + 3158) = 0;
    v30 = v17;
    v44.m128i_i64[1] = 0;
    v46 = 0;
    if ( (unsigned __int8)sub_1D56220(a1, &v41, &v44, 0, v8, v9) )
      break;
    sub_1D372C0((__int64)&v33, a1, v35, v32, v18, v19, v44.m128i_i32[0], v44.m128i_i64[1], v45, v46);
    v20 = _mm_loadu_si128(&v34);
    v37 = _mm_loadu_si128(&v33);
    v38 = v20;
    if ( (v33.m128i_i32[0] & 0x7FFFFFFF) == 0 )
      break;
    sub_17429A0(a4, &v37);
    v27 = ptr[0];
    *((_DWORD *)v16 + 3158) = v30;
    if ( v27 == v48 )
      goto LABEL_11;
    free(v27);
    v5 += 2;
    if ( a3 == v5 )
      return 0;
  }
  v21 = ptr[0];
  *((_DWORD *)v16 + 3158) = v30;
  if ( v21 != v48 )
    free(v21);
  return 1;
}
