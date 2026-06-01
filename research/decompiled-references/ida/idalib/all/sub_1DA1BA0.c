__int64 __fastcall sub_1DA1BA0(
        __int64 *a1,
        _QWORD *a2,
        double a3,
        __m128 a4,
        __int64 a5,
        _QWORD *a6,
        int a7,
        __int64 a8)
{
  unsigned int v9; // r12d
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
  __int64 v32; // rax
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rdx
  __m128i *v35; // rax
  __m128i *v36; // r15
  __int64 v37; // rax
  unsigned __int64 v38; // r15
  __m128i *v39; // r8
  unsigned __int64 v40; // rdx
  __m128i *v41; // rax
  _BYTE *v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rsi
  int v47; // [rsp+20h] [rbp-128h]
  int v48; // [rsp+28h] [rbp-120h]
  __m128i v49; // [rsp+30h] [rbp-118h] BYREF
  __m128i v50; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v51; // [rsp+58h] [rbp-F0h] BYREF
  int v52; // [rsp+5Ch] [rbp-ECh] BYREF
  __m128i v53; // [rsp+60h] [rbp-E8h] BYREF
  __m128i v54; // [rsp+70h] [rbp-D8h]
  __m128 v55; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+90h] [rbp-B8h]
  __int64 v57; // [rsp+98h] [rbp-B0h]
  __m128i v58; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-98h]
  __int64 v60; // [rsp+B8h] [rbp-90h]
  __m128i v61; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-78h]
  __int64 v63; // [rsp+D8h] [rbp-70h]
  void *ptr[2]; // [rsp+E0h] [rbp-68h] BYREF
  _BYTE v65[88]; // [rsp+F0h] [rbp-58h] BYREF

  v9 = 0;
  if ( a2 == a6 )
    goto LABEL_12;
  do
  {
    do
    {
      v12 = a2[1];
      v53.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v54.m128i_i64[1] = 0;
      v53.m128i_i64[1] = 0;
      v13 = *(_QWORD *)(v12 + 8LL * v9 + 32);
      v14 = (const __m128i *)(*a2 + 24LL * v9 + 48);
      v15 = (__m128)_mm_loadu_si128(v14);
      v55 = v15;
      v16 = v14[1].m128i_i64[0];
      v57 = v13;
      v56 = v16;
      if ( (v15.m128_i32[0] & 0x7FFFFFFF) == 9 )
      {
        if ( (unsigned __int8)sub_1DA0660(
                                a1,
                                a1,
                                (const __m128i *)v55.m128_u64[1],
                                v15,
                                a4,
                                (__int64)a1,
                                (const __m128i *)(v55.m128_u64[1] + 24LL * v55.m128_u32[1]),
                                (__int64 *)a8,
                                0) )
          return 1;
LABEL_10:
        ++v9;
        continue;
      }
      if ( sub_F1D570((__int64)&v55) )
      {
        v51 = 0;
        v19 = *a1;
        v52 = 0;
        sub_1E4CF80(
          (unsigned int)&v58,
          v19,
          (unsigned int)&v51,
          (unsigned int)&v52,
          v17,
          v18,
          v55.m128_i64[0],
          v55.m128_i64[1],
          v56,
          v57);
        v20 = *a1;
        ptr[0] = v65;
        ptr[1] = (void *)0x200000000LL;
        *(double *)v15.m128_u64 = sub_1E4C910(
                                    v20,
                                    (unsigned int)ptr,
                                    v21,
                                    v22,
                                    v23,
                                    v24,
                                    v58.m128i_i64[0],
                                    v58.m128i_i64[1],
                                    v59,
                                    v60);
        v25 = *a1;
        v48 = v52;
        v61.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
        v26 = *(_DWORD *)(v25 + 12632);
        *(_DWORD *)(v25 + 12632) = 0;
        v61.m128i_i64[1] = 0;
        v63 = 0;
        v47 = v26;
        if ( (unsigned __int8)sub_1DA0120(a1, &v58, &v61, 0, v15, a4)
          || (sub_1D81DB0((__int64)&v49, a1, v51, v48, v27, v28, v61.m128i_i32[0], v61.m128i_i64[1], v62, v63),
              a4 = (__m128)_mm_loadu_si128(&v49),
              v29 = _mm_loadu_si128(&v50),
              v53 = (__m128i)a4,
              v54 = v29,
              (v49.m128i_i32[0] & 0x7FFFFFFF) == 0) )
        {
          v30 = ptr[0];
          *(_DWORD *)(v25 + 12632) = v47;
          if ( v30 != v65 )
            free(v30);
          return 1;
        }
        v37 = *(unsigned int *)(a8 + 8);
        v38 = *(_QWORD *)a8;
        v39 = &v53;
        v40 = v37 + 1;
        v41 = (__m128i *)(*(_QWORD *)a8 + 32 * v37);
        if ( v40 > *(unsigned int *)(a8 + 12) )
        {
          v44 = a8 + 16;
          if ( v38 > (unsigned __int64)&v53 || v41 <= &v53 )
          {
            sub_2237220(a8, v44, v40, 32);
            v39 = &v53;
            v41 = (__m128i *)(*(_QWORD *)a8 + 32LL * *(unsigned int *)(a8 + 8));
          }
          else
          {
            sub_2237220(a8, v44, v40, 32);
            v39 = (__m128i *)((char *)&v53 + *(_QWORD *)a8 - v38);
            v41 = (__m128i *)(32LL * *(unsigned int *)(a8 + 8) + *(_QWORD *)a8);
          }
        }
        *v41 = _mm_loadu_si128(v39);
        v42 = ptr[0];
        v41[1] = _mm_loadu_si128(v39 + 1);
        ++*(_DWORD *)(a8 + 8);
        *(_DWORD *)(v25 + 12632) = v47;
        if ( v42 == v65 )
          goto LABEL_10;
        free(v42);
        ++v9;
      }
      else
      {
        if ( (unsigned __int8)sub_1DA0120(a1, (const __m128i *)&v55, &v53, 0, v15, a4) )
          return 1;
        v32 = *(unsigned int *)(a8 + 8);
        v33 = *(_QWORD *)a8;
        v34 = v32 + 1;
        v35 = (__m128i *)(*(_QWORD *)a8 + 32 * v32);
        v36 = &v53;
        if ( v34 > *(unsigned int *)(a8 + 12) )
        {
          v43 = a8 + 16;
          if ( v33 > (unsigned __int64)&v53 || v35 <= &v53 )
          {
            sub_2237220(a8, v43, v34, 32);
            v36 = &v53;
            v35 = (__m128i *)(*(_QWORD *)a8 + 32LL * *(unsigned int *)(a8 + 8));
          }
          else
          {
            sub_2237220(a8, v43, v34, 32);
            v36 = (__m128i *)((char *)&v53 + *(_QWORD *)a8 - v33);
            v35 = (__m128i *)(*(_QWORD *)a8 + 32LL * *(unsigned int *)(a8 + 8));
          }
        }
        ++v9;
        *v35 = _mm_loadu_si128(v36);
        v35[1] = _mm_loadu_si128(v36 + 1);
        ++*(_DWORD *)(a8 + 8);
      }
    }
    while ( a2 != a6 );
LABEL_12:
    ;
  }
  while ( v9 != a7 );
  return 0;
}
