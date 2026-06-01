__int64 __fastcall sub_1D56F30(
        __int64 **a1,
        _QWORD *a2,
        double a3,
        __m128 a4,
        __int64 a5,
        _QWORD *a6,
        int a7,
        __int64 a8)
{
  unsigned int v10; // ebp
  __int64 v12; // rdx
  __int64 v13; // rdx
  const __m128i *v14; // roff
  __m128 v15; // xmm0
  __int64 v16; // rax
  int v17; // r8d
  int v18; // r9d
  __int64 *v19; // rsi
  __int64 *v20; // rdi
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 *v25; // r14
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  __m128i v29; // xmm2
  _BYTE *v30; // rdi
  __m128i *v32; // r13
  __int64 v33; // rax
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rdx
  __m128i *v36; // rax
  _BYTE *v37; // rdi
  __int64 v38; // rsi
  int v41; // [rsp+28h] [rbp-120h]
  int v42; // [rsp+2Ch] [rbp-11Ch]
  __m128i v43; // [rsp+30h] [rbp-118h] BYREF
  __m128i v44; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v45; // [rsp+58h] [rbp-F0h] BYREF
  int v46; // [rsp+5Ch] [rbp-ECh] BYREF
  __m128i v47; // [rsp+60h] [rbp-E8h] BYREF
  __m128i v48; // [rsp+70h] [rbp-D8h]
  __m128 v49; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+90h] [rbp-B8h]
  __int64 v51; // [rsp+98h] [rbp-B0h]
  __m128i v52; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-98h]
  __int64 v54; // [rsp+B8h] [rbp-90h]
  __m128i v55; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v56; // [rsp+D0h] [rbp-78h]
  __int64 v57; // [rsp+D8h] [rbp-70h]
  void *ptr[2]; // [rsp+E0h] [rbp-68h] BYREF
  _BYTE v59[88]; // [rsp+F0h] [rbp-58h] BYREF

  v10 = 0;
  if ( a2 == a6 )
    goto LABEL_12;
  do
  {
    do
    {
      v12 = a2[1];
      v47.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v48.m128i_i64[1] = 0;
      v47.m128i_i64[1] = 0;
      v13 = *(_QWORD *)(v12 + 8LL * v10 + 32);
      v14 = (const __m128i *)(*a2 + 24LL * v10 + 48);
      v15 = (__m128)_mm_loadu_si128(v14);
      v49 = v15;
      v16 = v14[1].m128i_i64[0];
      v51 = v13;
      v50 = v16;
      if ( (v15.m128_i32[0] & 0x7FFFFFFF) == 9 )
      {
        if ( (unsigned __int8)sub_1D56710(
                                a1,
                                (__int64 *)a1,
                                (const __m128i *)v49.m128_u64[1],
                                v15,
                                a4,
                                (__int64)a1,
                                (const __m128i *)(v49.m128_u64[1] + 24LL * v49.m128_u32[1]),
                                a8,
                                0) )
          return 1;
LABEL_10:
        ++v10;
        continue;
      }
      if ( sub_F1D570((__int64)&v49) )
      {
        v45 = 0;
        v19 = *a1;
        v46 = 0;
        sub_1E4CF80(
          (unsigned int)&v52,
          (_DWORD)v19,
          (unsigned int)&v45,
          (unsigned int)&v46,
          v17,
          v18,
          v49.m128_i64[0],
          v49.m128_i64[1],
          v50,
          v51);
        v20 = *a1;
        ptr[0] = v59;
        ptr[1] = (void *)0x200000000LL;
        *(double *)v15.m128_u64 = sub_1E4C910(
                                    (_DWORD)v20,
                                    (unsigned int)ptr,
                                    v21,
                                    v22,
                                    v23,
                                    v24,
                                    v52.m128i_i64[0],
                                    v52.m128i_i64[1],
                                    v53,
                                    v54);
        v25 = *a1;
        v42 = v46;
        v55.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
        v26 = *((_DWORD *)v25 + 3158);
        *((_DWORD *)v25 + 3158) = 0;
        v55.m128i_i64[1] = 0;
        v57 = 0;
        v41 = v26;
        if ( (unsigned __int8)sub_1D56220(a1, &v52, &v55, 0, v15, a4)
          || (sub_1D372C0((__int64)&v43, a1, v45, v42, v27, v28, v55.m128i_i32[0], v55.m128i_i64[1], v56, v57),
              a4 = (__m128)_mm_loadu_si128(&v43),
              v29 = _mm_loadu_si128(&v44),
              v47 = (__m128i)a4,
              v48 = v29,
              (v43.m128i_i32[0] & 0x7FFFFFFF) == 0) )
        {
          v30 = ptr[0];
          *((_DWORD *)v25 + 3158) = v41;
          if ( v30 != v59 )
            free(v30);
          return 1;
        }
        sub_17429A0(a8, &v47);
        v37 = ptr[0];
        *((_DWORD *)v25 + 3158) = v41;
        if ( v37 == v59 )
          goto LABEL_10;
        free(v37);
        ++v10;
      }
      else
      {
        v32 = &v47;
        if ( (unsigned __int8)sub_1D56220(a1, (const __m128i *)&v49, &v47, 0, v15, a4) )
          return 1;
        v33 = *(unsigned int *)(a8 + 8);
        v34 = *(_QWORD *)a8;
        v35 = v33 + 1;
        v36 = (__m128i *)(*(_QWORD *)a8 + 32 * v33);
        if ( v35 > *(unsigned int *)(a8 + 12) )
        {
          v38 = a8 + 16;
          if ( v34 > (unsigned __int64)&v47 || v36 <= &v47 )
          {
            sub_2237220(a8, v38, v35, 32);
            v36 = (__m128i *)(*(_QWORD *)a8 + 32LL * *(unsigned int *)(a8 + 8));
          }
          else
          {
            sub_2237220(a8, v38, v35, 32);
            v32 = (__m128i *)((char *)&v47 + *(_QWORD *)a8 - v34);
            v36 = (__m128i *)(*(_QWORD *)a8 + 32LL * *(unsigned int *)(a8 + 8));
          }
        }
        ++v10;
        *v36 = _mm_loadu_si128(v32);
        v36[1] = _mm_loadu_si128(v32 + 1);
        ++*(_DWORD *)(a8 + 8);
      }
    }
    while ( a2 != a6 );
LABEL_12:
    ;
  }
  while ( v10 != a7 );
  return 0;
}
