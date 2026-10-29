__int64 __fastcall sub_194AFD0(
        __int64 *a1,
        _QWORD *a2,
        unsigned int a3,
        _QWORD *a4,
        int a5,
        __int64 a6,
        double a7,
        __m128 a8,
        char a9)
{
  __int64 v12; // rdx
  __int64 v13; // rdx
  const __m128i *v14; // roff
  __m128 v15; // xmm0
  __int64 v16; // rax
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rsi
  __int64 v20; // rdi
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // r14
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  __m128i v29; // xmm2
  _BYTE *v30; // rdi
  _BYTE *v32; // rdi
  int v36; // [rsp+38h] [rbp-120h]
  int v37; // [rsp+3Ch] [rbp-11Ch]
  __m128i v38; // [rsp+40h] [rbp-118h] BYREF
  __m128i v39; // [rsp+50h] [rbp-108h] BYREF
  unsigned int v40; // [rsp+68h] [rbp-F0h] BYREF
  int v41; // [rsp+6Ch] [rbp-ECh] BYREF
  __m128i v42; // [rsp+70h] [rbp-E8h] BYREF
  __m128i v43; // [rsp+80h] [rbp-D8h]
  __m128 v44; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-B8h]
  __int64 v46; // [rsp+A8h] [rbp-B0h]
  __m128i v47; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+C0h] [rbp-98h]
  __int64 v49; // [rsp+C8h] [rbp-90h]
  __m128i v50; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v51; // [rsp+E0h] [rbp-78h]
  __int64 v52; // [rsp+E8h] [rbp-70h]
  void *ptr[2]; // [rsp+F0h] [rbp-68h] BYREF
  _BYTE v54[88]; // [rsp+100h] [rbp-58h] BYREF

  if ( a2 == a4 )
    goto LABEL_12;
  do
  {
    do
    {
      v12 = a2[1];
      v42 = (__m128i)(0xFFFFFFFE00000000LL & v42.m128i_u64[0]);
      v43.m128i_i64[1] = 0;
      v13 = *(_QWORD *)(v12 + 8LL * a3 + 32);
      v14 = (const __m128i *)(*a2 + 24LL * a3 + 48);
      v15 = (__m128)_mm_loadu_si128(v14);
      v44 = v15;
      v16 = v14[1].m128i_i64[0];
      v46 = v13;
      v45 = v16;
      if ( (v15.m128_i32[0] & 0x7FFFFFFF) == 9 )
      {
        if ( (unsigned __int8)sub_194A2E0(
                                a1,
                                a1,
                                v44.m128_i64[1],
                                (__int64)a1,
                                v44.m128_u64[1] + 24LL * v44.m128_u32[1],
                                a6,
                                a9) )
          return 1;
LABEL_10:
        ++a3;
        continue;
      }
      if ( sub_F1D570((__int64)&v44) )
      {
        v40 = 0;
        v19 = *a1;
        v41 = 0;
        sub_1E4CF80(
          (unsigned int)&v47,
          v19,
          (unsigned int)&v40,
          (unsigned int)&v41,
          v17,
          v18,
          v44.m128_i64[0],
          v44.m128_i64[1],
          v45,
          v46);
        v20 = *a1;
        ptr[0] = v54;
        ptr[1] = (void *)0x200000000LL;
        *(double *)v15.m128_u64 = sub_1E4C910(
                                    v20,
                                    (unsigned int)ptr,
                                    v21,
                                    v22,
                                    v23,
                                    v24,
                                    v47.m128i_i64[0],
                                    v47.m128i_i64[1],
                                    v48,
                                    v49);
        v25 = *a1;
        v37 = v41;
        v26 = *(_DWORD *)(*a1 + 12632);
        v50.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
        *(_DWORD *)(v25 + 12632) = 0;
        v36 = v26;
        v50.m128i_i64[1] = 0;
        v52 = 0;
        if ( (unsigned __int8)sub_1949D50(a1, &v47, &v50, a9, v15, a8)
          || (sub_18CB8A0((__int64)&v38, a1, v40, v37, v27, v28, v50.m128i_i32[0], v50.m128i_i64[1], v51, v52),
              a8 = (__m128)_mm_loadu_si128(&v38),
              v29 = _mm_loadu_si128(&v39),
              v42 = (__m128i)a8,
              v43 = v29,
              (v38.m128i_i32[0] & 0x7FFFFFFF) == 0) )
        {
          v30 = ptr[0];
          *(_DWORD *)(v25 + 12632) = v36;
          if ( v30 != v54 )
            free(v30);
          return 1;
        }
        sub_17429A0(a6, &v42);
        v32 = ptr[0];
        *(_DWORD *)(v25 + 12632) = v36;
        if ( v32 == v54 )
          goto LABEL_10;
        free(v32);
        ++a3;
      }
      else
      {
        if ( (unsigned __int8)sub_1949D50(a1, (const __m128i *)&v44, &v42, a9, v15, a8) )
          return 1;
        ++a3;
        sub_17429A0(a6, &v42);
      }
    }
    while ( a2 != a4 );
LABEL_12:
    ;
  }
  while ( a3 != a5 );
  return 0;
}
