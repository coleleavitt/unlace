__int64 __fastcall sub_194B950(__int64 *a1, const __m128i *a2, const __m128i *a3, __int64 a4, char a5)
{
  const __m128i *v6; // r15
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
  int v17; // r13d
  __int64 v18; // r8
  __int64 v19; // r9
  __m128i v20; // xmm3
  _BYTE *v21; // rdi
  __m128i *v23; // r13
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rdx
  __m128i *v27; // rax
  __int64 v28; // rsi
  int v31; // [rsp+2Ch] [rbp-11Ch]
  __m128i v32; // [rsp+30h] [rbp-118h] BYREF
  __m128i v33; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v34; // [rsp+58h] [rbp-F0h] BYREF
  int v35; // [rsp+5Ch] [rbp-ECh] BYREF
  __m128i v36; // [rsp+60h] [rbp-E8h] BYREF
  __m128i v37; // [rsp+70h] [rbp-D8h]
  __m128 v38; // [rsp+80h] [rbp-C8h] BYREF
  __m128 v39; // [rsp+90h] [rbp-B8h]
  __m128i v40; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-98h]
  __int64 v42; // [rsp+B8h] [rbp-90h]
  __m128i v43; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v44; // [rsp+D0h] [rbp-78h]
  __int64 v45; // [rsp+D8h] [rbp-70h]
  void *ptr[2]; // [rsp+E0h] [rbp-68h] BYREF
  _BYTE v47[88]; // [rsp+F0h] [rbp-58h] BYREF

  if ( a2 == a3 )
    return 0;
  v6 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = v6->m128i_i32[0];
        v8 = (__m128)_mm_loadu_si128(v6);
        v9 = (__m128)_mm_loadu_si128(v6 + 1);
        v36 = (__m128i)(0xFFFFFFFE00000000LL & v36.m128i_u64[0]);
        v38 = v8;
        v37.m128i_i64[1] = 0;
        v39 = v9;
        if ( (v7 & 0x7FFFFFFF) != 9 )
          break;
        if ( (unsigned __int8)sub_194A2E0(
                                a1,
                                a1,
                                v38.m128_i64[1],
                                (__int64)a1,
                                v38.m128_u64[1] + 24LL * v38.m128_u32[1],
                                a4,
                                a5) )
          return 1;
LABEL_11:
        v6 += 2;
        if ( a3 == v6 )
          return 0;
      }
      if ( sub_F1D570((__int64)&v38) )
        break;
      v23 = &v36;
      if ( (unsigned __int8)sub_1949D50(a1, (const __m128i *)&v38, &v36, a5, v8, v9) )
        return 1;
      v24 = *(unsigned int *)(a4 + 8);
      v25 = *(_QWORD *)a4;
      v26 = v24 + 1;
      v27 = (__m128i *)(*(_QWORD *)a4 + 32 * v24);
      if ( v26 > *(unsigned int *)(a4 + 12) )
      {
        v28 = a4 + 16;
        if ( v25 > (unsigned __int64)&v36 || v27 <= &v36 )
        {
          sub_2237220(a4, v28, v26, 32);
          v27 = (__m128i *)(*(_QWORD *)a4 + 32LL * *(unsigned int *)(a4 + 8));
        }
        else
        {
          sub_2237220(a4, v28, v26, 32);
          v23 = (__m128i *)((char *)&v36 + *(_QWORD *)a4 - v25);
          v27 = (__m128i *)(*(_QWORD *)a4 + 32LL * *(unsigned int *)(a4 + 8));
        }
      }
      v6 += 2;
      *v27 = _mm_loadu_si128(v23);
      v27[1] = _mm_loadu_si128(v23 + 1);
      ++*(_DWORD *)(a4 + 8);
      if ( a3 == v6 )
        return 0;
    }
    v34 = 0;
    v35 = 0;
    sub_1E4CF80(
      (unsigned int)&v40,
      *a1,
      (unsigned int)&v34,
      (unsigned int)&v35,
      v10,
      v11,
      v38.m128_i64[0],
      v38.m128_i64[1],
      v39.m128_i32[0],
      v39.m128_i64[1]);
    ptr[0] = v47;
    ptr[1] = (void *)0x200000000LL;
    *(double *)v8.m128_u64 = sub_1E4C910(
                               *a1,
                               (unsigned int)ptr,
                               v12,
                               v13,
                               v14,
                               v15,
                               v40.m128i_i64[0],
                               v40.m128i_i64[1],
                               v41,
                               v42);
    v16 = *a1;
    v31 = v35;
    v17 = *(_DWORD *)(*a1 + 12632);
    *(_DWORD *)(*a1 + 12632) = 0;
    v43.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
    v43.m128i_i64[1] = 0;
    v45 = 0;
    if ( (unsigned __int8)sub_1949D50(a1, &v40, &v43, a5, v8, v9) )
      break;
    sub_18CB8A0((__int64)&v32, a1, v34, v31, v18, v19, v43.m128i_i32[0], v43.m128i_i64[1], v44, v45);
    v20 = _mm_loadu_si128(&v33);
    v36 = _mm_loadu_si128(&v32);
    v37 = v20;
    if ( (v32.m128i_i32[0] & 0x7FFFFFFF) == 0 )
      break;
    sub_17429A0(a4, &v36);
    *(_DWORD *)(v16 + 12632) = v17;
    if ( ptr[0] == v47 )
      goto LABEL_11;
    free(ptr[0]);
    v6 += 2;
    if ( a3 == v6 )
      return 0;
  }
  v21 = ptr[0];
  *(_DWORD *)(v16 + 12632) = v17;
  if ( v21 != v47 )
    free(v21);
  return 1;
}
