__int64 __fastcall sub_194A6C0(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, int a5, __int64 a6, char a7)
{
  __int64 v11; // rax
  const __m128i *v12; // rax
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rsi
  __int64 v18; // rdi
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // r14
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  __m128i v27; // xmm3
  _BYTE *v28; // rdi
  __int64 v30; // rax
  unsigned __int64 v31; // r13
  unsigned __int64 v32; // rdx
  __m128i *v33; // rax
  __m128i *v34; // r14
  _BYTE *v35; // rdi
  __int64 v36; // rsi
  int v39; // [rsp+38h] [rbp-120h]
  int v40; // [rsp+3Ch] [rbp-11Ch]
  __m128i v41; // [rsp+40h] [rbp-118h] BYREF
  __m128i v42; // [rsp+50h] [rbp-108h] BYREF
  unsigned int v43; // [rsp+68h] [rbp-F0h] BYREF
  int v44; // [rsp+6Ch] [rbp-ECh] BYREF
  __m128i v45; // [rsp+70h] [rbp-E8h] BYREF
  __m128i v46; // [rsp+80h] [rbp-D8h]
  __m128 v47; // [rsp+90h] [rbp-C8h] BYREF
  __m128 v48; // [rsp+A0h] [rbp-B8h]
  __m128i v49; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-98h]
  __int64 v51; // [rsp+C8h] [rbp-90h]
  __m128i v52; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v53; // [rsp+E0h] [rbp-78h]
  __int64 v54; // [rsp+E8h] [rbp-70h]
  void *ptr[2]; // [rsp+F0h] [rbp-68h] BYREF
  _BYTE v56[88]; // [rsp+100h] [rbp-58h] BYREF

  if ( a2 == a4 )
    goto LABEL_12;
  do
  {
    do
    {
      v45.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v11 = *(_QWORD *)(a2 + 8);
      v45.m128i_i64[1] = 0;
      v46.m128i_i64[1] = 0;
      v12 = (const __m128i *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 64LL) + 32LL * a3);
      v13 = (__m128)_mm_loadu_si128(v12 + 1);
      v47 = v13;
      v14 = (__m128)_mm_loadu_si128(v12 + 2);
      v48 = v14;
      if ( (v13.m128_i32[0] & 0x7FFFFFFF) == 9 )
      {
        if ( (unsigned __int8)sub_194A2E0(
                                a1,
                                a1,
                                v47.m128_i64[1],
                                (__int64)a1,
                                v47.m128_u64[1] + 24LL * v47.m128_u32[1],
                                a6,
                                a7) )
          return 1;
LABEL_10:
        ++a3;
        continue;
      }
      if ( sub_F1D570((__int64)&v47) )
      {
        v43 = 0;
        v17 = *a1;
        v44 = 0;
        sub_1E4CF80(
          (unsigned int)&v49,
          v17,
          (unsigned int)&v43,
          (unsigned int)&v44,
          v15,
          v16,
          v47.m128_i64[0],
          v47.m128_i64[1],
          v48.m128_i32[0],
          v48.m128_i64[1]);
        v18 = *a1;
        ptr[0] = v56;
        ptr[1] = (void *)0x200000000LL;
        *(double *)v13.m128_u64 = sub_1E4C910(
                                    v18,
                                    (unsigned int)ptr,
                                    v19,
                                    v20,
                                    v21,
                                    v22,
                                    v49.m128i_i64[0],
                                    v49.m128i_i64[1],
                                    v50,
                                    v51);
        v23 = *a1;
        v40 = v44;
        v52.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
        v24 = *(_DWORD *)(v23 + 12632);
        *(_DWORD *)(v23 + 12632) = 0;
        v39 = v24;
        v52.m128i_i64[1] = 0;
        v54 = 0;
        if ( (unsigned __int8)sub_1949D50(a1, &v49, &v52, a7, v13, v14)
          || (sub_18CB8A0((__int64)&v41, a1, v43, v40, v25, v26, v52.m128i_i32[0], v52.m128i_i64[1], v53, v54),
              v27 = _mm_loadu_si128(&v42),
              v45 = _mm_loadu_si128(&v41),
              v46 = v27,
              (v41.m128i_i32[0] & 0x7FFFFFFF) == 0) )
        {
          v28 = ptr[0];
          *(_DWORD *)(v23 + 12632) = v39;
          if ( v28 != v56 )
            free(v28);
          return 1;
        }
        sub_17429A0(a6, &v45);
        v35 = ptr[0];
        *(_DWORD *)(v23 + 12632) = v39;
        if ( v35 == v56 )
          goto LABEL_10;
        free(v35);
        ++a3;
      }
      else
      {
        if ( (unsigned __int8)sub_1949D50(a1, (const __m128i *)&v47, &v45, a7, v13, v14) )
          return 1;
        v30 = *(unsigned int *)(a6 + 8);
        v31 = *(_QWORD *)a6;
        v32 = v30 + 1;
        v33 = (__m128i *)(*(_QWORD *)a6 + 32 * v30);
        v34 = &v45;
        if ( v32 > *(unsigned int *)(a6 + 12) )
        {
          v36 = a6 + 16;
          if ( v31 > (unsigned __int64)&v45 || v33 <= &v45 )
          {
            sub_2237220(a6, v36, v32, 32);
            v33 = (__m128i *)(*(_QWORD *)a6 + 32LL * *(unsigned int *)(a6 + 8));
          }
          else
          {
            sub_2237220(a6, v36, v32, 32);
            v34 = (__m128i *)((char *)&v45 + *(_QWORD *)a6 - v31);
            v33 = (__m128i *)(*(_QWORD *)a6 + 32LL * *(unsigned int *)(a6 + 8));
          }
        }
        ++a3;
        *v33 = _mm_loadu_si128(v34);
        v33[1] = _mm_loadu_si128(v34 + 1);
        ++*(_DWORD *)(a6 + 8);
      }
    }
    while ( a2 != a4 );
LABEL_12:
    ;
  }
  while ( a3 != a5 );
  return 0;
}
