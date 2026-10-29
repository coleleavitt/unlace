__int64 __fastcall sub_1DA1000(__int64 *a1, const __m128i *a2, const __m128i *a3, __int64 a4)
{
  const __m128i *v5; // r12
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
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rdx
  __m128i *v26; // rax
  __m128i *v27; // r15
  __int64 v28; // rax
  unsigned __int64 v29; // r15
  __m128i *v30; // r8
  unsigned __int64 v31; // rdx
  __m128i *v32; // rax
  _BYTE *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rsi
  int v37; // [rsp+20h] [rbp-128h]
  int v38; // [rsp+28h] [rbp-120h]
  __m128i v39; // [rsp+30h] [rbp-118h] BYREF
  __m128i v40; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v41; // [rsp+58h] [rbp-F0h] BYREF
  int v42; // [rsp+5Ch] [rbp-ECh] BYREF
  __m128i v43; // [rsp+60h] [rbp-E8h] BYREF
  __m128i v44; // [rsp+70h] [rbp-D8h]
  __m128 v45; // [rsp+80h] [rbp-C8h] BYREF
  __m128 v46; // [rsp+90h] [rbp-B8h]
  __m128i v47; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-98h]
  __int64 v49; // [rsp+B8h] [rbp-90h]
  __m128i v50; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v51; // [rsp+D0h] [rbp-78h]
  __int64 v52; // [rsp+D8h] [rbp-70h]
  void *ptr[2]; // [rsp+E0h] [rbp-68h] BYREF
  _BYTE v54[88]; // [rsp+F0h] [rbp-58h] BYREF

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
        v43 = (__m128i)(0xFFFFFFFE00000000LL & v43.m128i_u64[0]);
        v45 = v8;
        v44.m128i_i64[1] = 0;
        v46 = v9;
        if ( (v7 & 0x7FFFFFFF) != 9 )
          break;
        if ( (unsigned __int8)sub_1DA0660(
                                a1,
                                a1,
                                (const __m128i *)v45.m128_u64[1],
                                v8,
                                v9,
                                (__int64)a1,
                                (const __m128i *)(v45.m128_u64[1] + 24LL * v45.m128_u32[1]),
                                (__int64 *)a4,
                                0) )
          return 1;
LABEL_11:
        v5 += 2;
        if ( a3 == v5 )
          return 0;
      }
      if ( sub_F1D570((__int64)&v45) )
        break;
      if ( (unsigned __int8)sub_1DA0120(a1, (const __m128i *)&v45, &v43, 0, v8, v9) )
        return 1;
      v23 = *(unsigned int *)(a4 + 8);
      v24 = *(_QWORD *)a4;
      v25 = v23 + 1;
      v26 = (__m128i *)(*(_QWORD *)a4 + 32 * v23);
      v27 = &v43;
      if ( v25 > *(unsigned int *)(a4 + 12) )
      {
        v34 = a4 + 16;
        if ( v24 > (unsigned __int64)&v43 || v26 <= &v43 )
        {
          sub_2237220(a4, v34, v25, 32);
          v27 = &v43;
          v26 = (__m128i *)(*(_QWORD *)a4 + 32LL * *(unsigned int *)(a4 + 8));
        }
        else
        {
          sub_2237220(a4, v34, v25, 32);
          v27 = (__m128i *)((char *)&v43 + *(_QWORD *)a4 - v24);
          v26 = (__m128i *)(*(_QWORD *)a4 + 32LL * *(unsigned int *)(a4 + 8));
        }
      }
      v5 += 2;
      *v26 = _mm_loadu_si128(v27);
      v26[1] = _mm_loadu_si128(v27 + 1);
      ++*(_DWORD *)(a4 + 8);
      if ( a3 == v5 )
        return 0;
    }
    v41 = 0;
    v42 = 0;
    sub_1E4CF80(
      (unsigned int)&v47,
      *a1,
      (unsigned int)&v41,
      (unsigned int)&v42,
      v10,
      v11,
      v45.m128_i64[0],
      v45.m128_i64[1],
      v46.m128_i32[0],
      v46.m128_i64[1]);
    ptr[0] = v54;
    ptr[1] = (void *)0x200000000LL;
    *(double *)v8.m128_u64 = sub_1E4C910(
                               *a1,
                               (unsigned int)ptr,
                               v12,
                               v13,
                               v14,
                               v15,
                               v47.m128i_i64[0],
                               v47.m128i_i64[1],
                               v48,
                               v49);
    v16 = *a1;
    v38 = v42;
    v17 = *(_DWORD *)(*a1 + 12632);
    v50.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
    *(_DWORD *)(v16 + 12632) = 0;
    v50.m128i_i64[1] = 0;
    v52 = 0;
    v37 = v17;
    if ( (unsigned __int8)sub_1DA0120(a1, &v47, &v50, 0, v8, v9) )
      break;
    sub_1D81DB0((__int64)&v39, a1, v41, v38, v18, v19, v50.m128i_i32[0], v50.m128i_i64[1], v51, v52);
    v20 = _mm_loadu_si128(&v40);
    v43 = _mm_loadu_si128(&v39);
    v44 = v20;
    if ( (v39.m128i_i32[0] & 0x7FFFFFFF) == 0 )
      break;
    v28 = *(unsigned int *)(a4 + 8);
    v29 = *(_QWORD *)a4;
    v30 = &v43;
    v31 = v28 + 1;
    v32 = (__m128i *)(*(_QWORD *)a4 + 32 * v28);
    if ( v31 > *(unsigned int *)(a4 + 12) )
    {
      v35 = a4 + 16;
      if ( v29 > (unsigned __int64)&v43 || v32 <= &v43 )
      {
        sub_2237220(a4, v35, v31, 32);
        v30 = &v43;
        v32 = (__m128i *)(*(_QWORD *)a4 + 32LL * *(unsigned int *)(a4 + 8));
      }
      else
      {
        sub_2237220(a4, v35, v31, 32);
        v30 = (__m128i *)((char *)&v43 + *(_QWORD *)a4 - v29);
        v32 = (__m128i *)(32LL * *(unsigned int *)(a4 + 8) + *(_QWORD *)a4);
      }
    }
    *v32 = _mm_loadu_si128(v30);
    v33 = ptr[0];
    v32[1] = _mm_loadu_si128(v30 + 1);
    ++*(_DWORD *)(a4 + 8);
    *(_DWORD *)(v16 + 12632) = v37;
    if ( v33 == v54 )
      goto LABEL_11;
    free(v33);
    v5 += 2;
    if ( a3 == v5 )
      return 0;
  }
  v21 = ptr[0];
  *(_DWORD *)(v16 + 12632) = v37;
  if ( v21 != v54 )
    free(v21);
  return 1;
}
