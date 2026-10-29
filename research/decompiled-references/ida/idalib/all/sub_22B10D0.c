__int64 __fastcall sub_22B10D0(
        __int64 a1,
        const void *a2,
        size_t a3,
        const char **a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  const char **v10; // r12
  __int64 v11; // rbx
  size_t v12; // rax
  size_t v13; // rdx
  size_t v14; // r8
  size_t v15; // r11
  int v16; // eax
  const char **v17; // r13
  const char *v18; // rbx
  const __m128i *v19; // r8
  __m128i *v20; // r9
  __m128i v21; // xmm5
  __m128i v22; // xmm6
  const __m128i *v23; // rbx
  __int64 v24; // r15
  __int64 *v25; // rax
  const char *v26; // rbp
  size_t v27; // r12
  unsigned int v28; // eax
  unsigned int v29; // r13d
  __int64 *v30; // r10
  __int64 v31; // rax
  _QWORD *v32; // r10
  _BYTE *v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rax
  __m128i v36; // xmm0
  __m128i v37; // xmm2
  __m128i v38; // xmm1
  __m128i v39; // xmm3
  size_t v40; // [rsp+8h] [rbp-D0h]
  size_t v41; // [rsp+10h] [rbp-C8h]
  _QWORD *v42; // [rsp+10h] [rbp-C8h]
  const char *s1; // [rsp+18h] [rbp-C0h]
  _BYTE *s2; // [rsp+20h] [rbp-B8h]
  const char **v45; // [rsp+38h] [rbp-A0h]
  __int64 *v46; // [rsp+48h] [rbp-90h] BYREF
  __int64 v47; // [rsp+50h] [rbp-88h] BYREF
  __m128i si128; // [rsp+58h] [rbp-80h]
  _OWORD v49[6]; // [rsp+70h] [rbp-68h] BYREF

  if ( !a3 )
    goto LABEL_2;
  v10 = a4;
  v45 = &a4[7 * a5];
  v11 = 0x6DB6DB6DB6DB6DB7LL * ((56 * a5) >> 3);
  if ( 56 * a5 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v17 = &v10[7 * (v11 >> 1)];
        if ( !*v17 )
          goto LABEL_12;
        s1 = *v17;
        v12 = strlen(*v17);
        v13 = a3;
        v14 = v12;
        v15 = v12;
        if ( v12 <= a3 )
          v13 = v12;
        if ( v13 )
        {
          v41 = v12;
          v40 = v12;
          v16 = memcmp(s1, a2, v13);
          v15 = v40;
          v14 = v41;
          if ( v16 )
            break;
        }
        if ( v14 != a3 && v15 < a3 )
          goto LABEL_12;
        v11 >>= 1;
LABEL_16:
        if ( v11 <= 0 )
          goto LABEL_17;
      }
      if ( v16 >= 0 )
      {
        v11 >>= 1;
        goto LABEL_16;
      }
LABEL_12:
      v10 = v17 + 7;
      v11 = v11 - (v11 >> 1) - 1;
    }
    while ( v11 > 0 );
  }
LABEL_17:
  if ( v45 == v10 || (v18 = *v10) == nullptr || strlen(*v10) != a3 || memcmp(v18, a2, a3) )
  {
LABEL_2:
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
  v19 = (const __m128i *)a7;
  v47 = 0;
  v20 = (__m128i *)v49;
  v21 = _mm_loadu_si128((const __m128i *)(v10 + 3));
  v22 = _mm_loadu_si128((const __m128i *)(v10 + 5));
  v23 = (const __m128i *)(a7 + (a8 << 6));
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  v49[0] = _mm_loadu_si128((const __m128i *)(v10 + 1));
  v49[1] = v21;
  v49[2] = v22;
  if ( v23 != (const __m128i *)a7 )
  {
    do
    {
      if ( ((1LL << v19->m128i_i32[2]) & (unsigned __int64)v10[((unsigned __int32)v19->m128i_i32[2] >> 6) + 1]) != 0 )
        sub_22B0920(v20, v19 + 1, a7, a8);
      v19 += 4;
    }
    while ( v23 != v19 );
    v24 = a7;
    while ( 1 )
    {
      if ( ((1LL << *(_DWORD *)(v24 + 8)) & *((_QWORD *)v49 + (*(_DWORD *)(v24 + 8) >> 6))) == 0 )
        goto LABEL_28;
      v26 = *(const char **)v24;
      v27 = 0;
      if ( *(_QWORD *)v24 )
        v27 = strlen(*(const char **)v24);
      v28 = sub_2244B30((__int64)v26, v27);
      v29 = sub_2244CB0((__int64)&v47, v26, v27, v28);
      v30 = (__int64 *)(v47 + 8LL * v29);
      if ( !*v30 )
        goto LABEL_35;
      if ( *v30 == -8 )
        break;
      sub_10298F0(&v46, v30, 0);
      v25 = v46;
LABEL_27:
      *(_BYTE *)(*v25 + 8) = 1;
LABEL_28:
      v24 += 64;
      if ( v23 == (const __m128i *)v24 )
      {
        v35 = v47;
        v36 = _mm_cvtsi32_si128(si128.m128i_u32[0]);
        v37 = _mm_cvtsi32_si128(si128.m128i_u32[1]);
        v38 = _mm_cvtsi32_si128(si128.m128i_u32[2]);
        v39 = _mm_cvtsi32_si128(si128.m128i_u32[3]);
        goto LABEL_41;
      }
    }
    --si128.m128i_i32[2];
LABEL_35:
    v42 = (_QWORD *)(v47 + 8LL * v29);
    v31 = sub_22300B0(v27 + 17, 8);
    v32 = v42;
    v33 = (_BYTE *)v31;
    if ( v27 )
    {
      s2 = (_BYTE *)v31;
      memcpy((void *)(v31 + 16), v26, v27);
      v33 = s2;
      v32 = v42;
    }
    v33[v27 + 16] = 0;
    *(_QWORD *)v33 = v27;
    v33[8] = 0;
    *v32 = v33;
    ++si128.m128i_i32[1];
    v34 = sub_22450D0((__int64)&v47, v29);
    sub_10298F0(&v46, (__int64 *)(v47 + 8LL * v34), 0);
    v25 = v46;
    goto LABEL_27;
  }
  v38 = 0;
  v37 = 0;
  v36 = 0;
  v35 = 0;
  v39 = _mm_cvtsi32_si128(0x10u);
LABEL_41:
  *(_QWORD *)a1 = v35;
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v36, v37), _mm_unpacklo_epi32(v38, v39));
  return a1;
}
