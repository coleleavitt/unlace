__int64 __fastcall sub_1770BB0(__int64 *a1, _QWORD *a2, __int64 a3, _QWORD *a4, int a5, __int64 a6)
{
  unsigned int v7; // r12d
  __int64 v10; // rdx
  __int64 v11; // rdx
  const __m128i *v12; // roff
  __m128 v13; // xmm0
  __int64 v14; // rax
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
  __m128i v27; // xmm2
  _BYTE *v28; // rdi
  __int64 v30; // rax
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rdx
  __m128i *v33; // rax
  __m128i *v34; // r15
  __int64 v35; // rax
  unsigned __int64 v36; // r15
  __m128i *v37; // r8
  unsigned __int64 v38; // rdx
  __m128i *v39; // rax
  _BYTE *v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rsi
  int v45; // [rsp+20h] [rbp-128h]
  int v46; // [rsp+28h] [rbp-120h]
  __m128i v47; // [rsp+30h] [rbp-118h] BYREF
  __m128i v48; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v49; // [rsp+58h] [rbp-F0h] BYREF
  int v50; // [rsp+5Ch] [rbp-ECh] BYREF
  __m128i v51; // [rsp+60h] [rbp-E8h] BYREF
  __m128i v52; // [rsp+70h] [rbp-D8h]
  __m128 v53; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+90h] [rbp-B8h]
  __int64 v55; // [rsp+98h] [rbp-B0h]
  __m128i v56; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-98h]
  __int64 v58; // [rsp+B8h] [rbp-90h]
  __m128i v59; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-78h]
  __int64 v61; // [rsp+D8h] [rbp-70h]
  void *ptr[2]; // [rsp+E0h] [rbp-68h] BYREF
  _BYTE v63[88]; // [rsp+F0h] [rbp-58h] BYREF

  v7 = 0;
  if ( a2 == a4 )
    goto LABEL_12;
  do
  {
    do
    {
      v10 = a2[1];
      v51.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
      v52.m128i_i64[1] = 0;
      v51.m128i_i64[1] = 0;
      v11 = *(_QWORD *)(v10 + 8LL * v7 + 32);
      v12 = (const __m128i *)(*a2 + 24LL * v7 + 48);
      v13 = (__m128)_mm_loadu_si128(v12);
      v53 = v13;
      v14 = v12[1].m128i_i64[0];
      v55 = v11;
      v54 = v14;
      if ( (v13.m128_i32[0] & 0x7FFFFFFF) == 9 )
      {
        if ( (unsigned __int8)sub_176FBC0(
                                a1,
                                a1,
                                v53.m128_i64[1],
                                (__int64)a1,
                                v53.m128_u64[1] + 24LL * v53.m128_u32[1],
                                (__int64 *)a6,
                                0) )
          return 1;
LABEL_10:
        ++v7;
        continue;
      }
      if ( sub_F1D570((__int64)&v53) )
      {
        v49 = 0;
        v17 = *a1;
        v50 = 0;
        sub_1E4CF80(
          (unsigned int)&v56,
          v17,
          (unsigned int)&v49,
          (unsigned int)&v50,
          v15,
          v16,
          v53.m128_i64[0],
          v53.m128_i64[1],
          v54,
          v55);
        v18 = *a1;
        ptr[0] = v63;
        ptr[1] = (void *)0x200000000LL;
        *(double *)v13.m128_u64 = sub_1E4C910(
                                    v18,
                                    (unsigned int)ptr,
                                    v19,
                                    v20,
                                    v21,
                                    v22,
                                    v56.m128i_i64[0],
                                    v56.m128i_i64[1],
                                    v57,
                                    v58);
        v23 = *a1;
        v46 = v50;
        v59.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
        v24 = *(_DWORD *)(v23 + 12632);
        *(_DWORD *)(v23 + 12632) = 0;
        v59.m128i_i64[1] = 0;
        v61 = 0;
        v45 = v24;
        if ( (unsigned __int8)sub_176F680(a1, &v56, &v59, 0, v13)
          || (sub_17412E0((__int64)&v47, a1, v49, v46, v25, v26, v59.m128i_i32[0], v59.m128i_i64[1], v60, v61),
              v27 = _mm_loadu_si128(&v48),
              v51 = _mm_loadu_si128(&v47),
              v52 = v27,
              (v47.m128i_i32[0] & 0x7FFFFFFF) == 0) )
        {
          v28 = ptr[0];
          *(_DWORD *)(v23 + 12632) = v45;
          if ( v28 != v63 )
            free(v28);
          return 1;
        }
        v35 = *(unsigned int *)(a6 + 8);
        v36 = *(_QWORD *)a6;
        v37 = &v51;
        v38 = v35 + 1;
        v39 = (__m128i *)(*(_QWORD *)a6 + 32 * v35);
        if ( v38 > *(unsigned int *)(a6 + 12) )
        {
          v42 = a6 + 16;
          if ( v36 > (unsigned __int64)&v51 || v39 <= &v51 )
          {
            sub_2237220(a6, v42, v38, 32);
            v37 = &v51;
            v39 = (__m128i *)(*(_QWORD *)a6 + 32LL * *(unsigned int *)(a6 + 8));
          }
          else
          {
            sub_2237220(a6, v42, v38, 32);
            v37 = (__m128i *)((char *)&v51 + *(_QWORD *)a6 - v36);
            v39 = (__m128i *)(32LL * *(unsigned int *)(a6 + 8) + *(_QWORD *)a6);
          }
        }
        *v39 = _mm_loadu_si128(v37);
        v40 = ptr[0];
        v39[1] = _mm_loadu_si128(v37 + 1);
        ++*(_DWORD *)(a6 + 8);
        *(_DWORD *)(v23 + 12632) = v45;
        if ( v40 == v63 )
          goto LABEL_10;
        free(v40);
        ++v7;
      }
      else
      {
        if ( (unsigned __int8)sub_176F680(a1, (const __m128i *)&v53, &v51, 0, v13) )
          return 1;
        v30 = *(unsigned int *)(a6 + 8);
        v31 = *(_QWORD *)a6;
        v32 = v30 + 1;
        v33 = (__m128i *)(*(_QWORD *)a6 + 32 * v30);
        v34 = &v51;
        if ( v32 > *(unsigned int *)(a6 + 12) )
        {
          v41 = a6 + 16;
          if ( v31 > (unsigned __int64)&v51 || v33 <= &v51 )
          {
            sub_2237220(a6, v41, v32, 32);
            v34 = &v51;
            v33 = (__m128i *)(*(_QWORD *)a6 + 32LL * *(unsigned int *)(a6 + 8));
          }
          else
          {
            sub_2237220(a6, v41, v32, 32);
            v34 = (__m128i *)((char *)&v51 + *(_QWORD *)a6 - v31);
            v33 = (__m128i *)(*(_QWORD *)a6 + 32LL * *(unsigned int *)(a6 + 8));
          }
        }
        ++v7;
        *v33 = _mm_loadu_si128(v34);
        v33[1] = _mm_loadu_si128(v34 + 1);
        ++*(_DWORD *)(a6 + 8);
      }
    }
    while ( a2 != a4 );
LABEL_12:
    ;
  }
  while ( v7 != a5 );
  return 0;
}
