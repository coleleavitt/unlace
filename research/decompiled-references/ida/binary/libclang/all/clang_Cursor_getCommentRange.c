__m128i *__fastcall clang_Cursor_getCommentRange(
        __m128i *a1,
        int a2,
        double a3,
        double a4,
        double a5,
        __m128 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        __int128 a11,
        __int128 a12)
{
  __int64 v13; // r12
  __m128i v14; // xmm0
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rbp
  unsigned int *v20; // rax
  unsigned int v21; // r12d
  __m128i v22; // xmm0
  __m128 si128; // xmm1
  __int64 v24; // rbp
  unsigned int v25; // r13d
  int v26; // eax
  char v27; // al
  unsigned int v28; // eax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  char v31; // dl
  __m128i v32; // [rsp+0h] [rbp-78h]
  __m128i v33; // [rsp+0h] [rbp-78h]
  __m128 v34; // [rsp+20h] [rbp-58h] BYREF
  __m128i v35[4]; // [rsp+30h] [rbp-48h] BYREF

  if ( (unsigned int)(a11 - 1) > 0x26 && (unsigned int)(a11 - 600) > 4
    || (v32 = _mm_loadu_si128((const __m128i *)&a11),
        v13 = sub_63A250((_DWORD)a1, a2, (int)a11 - 1, a8, a9, a10, v32.m128i_i32[0], v32.m128i_i64[1]),
        v33 = _mm_loadu_si128((const __m128i *)&a11),
        v14 = _mm_loadu_si128((const __m128i *)&a12),
        v19 = sub_63A2D0(
                (_DWORD)a1,
                a2,
                v15,
                v16,
                v17,
                v18,
                v33.m128i_i32[0],
                v33.m128i_i32[2],
                v14.m128i_i32[0],
                v14.m128i_i64[1]),
        (v20 = (unsigned int *)sub_6F4910(v19, v13, 0)) == nullptr) )
  {
    clang_getNullRange(a1);
    return a1;
  }
  v21 = v20[1];
  v22 = _mm_cvtsi32_si128(*v20);
  si128 = (__m128)_mm_loadu_si128((const __m128i *)(v19 + 2152));
  if ( !v21 )
    goto LABEL_8;
  v24 = si128.m128_u64[0];
  v25 = v20[1];
  if ( (v21 & 0x80000000) != 0 )
  {
    v35[0] = (__m128i)si128;
    v34.m128_i32[0] = _mm_cvtsi128_si32(v22);
    v27 = sub_CAC7C0(si128.m128_u64[0], v21, 0);
    v22 = _mm_cvtsi32_si128(v34.m128_u32[0]);
    si128 = (__m128)_mm_load_si128(v35);
    if ( v27 )
    {
LABEL_11:
      v35[0] = (__m128i)si128;
      v25 = v21;
      v28 = sub_CAB1A0(v24, v21);
      si128 = (__m128)_mm_load_si128(v35);
      v22 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v22));
      v21 = v28;
      goto LABEL_7;
    }
    v29 = sub_CACEA0(v24, v21);
    v22 = _mm_cvtsi32_si128(v34.m128_u32[0]);
    si128 = (__m128)_mm_load_si128(v35);
    v30 = HIDWORD(v29);
    v21 = v30;
    if ( !v31 )
      goto LABEL_9;
    if ( (_DWORD)v30 )
    {
      v25 = v30;
      if ( (v30 & 0x80000000) == 0LL )
        goto LABEL_7;
      goto LABEL_11;
    }
LABEL_8:
    v21 = 0;
    goto LABEL_9;
  }
LABEL_7:
  v35[0].m128i_i32[0] = _mm_cvtsi128_si32(v22);
  v34 = si128;
  v26 = sub_1169590(v21, v24, _mm_movehl_ps(a6, si128).m128_u64[0]);
  v22 = _mm_cvtsi32_si128(v35[0].m128i_u32[0]);
  si128 = (__m128)_mm_load_si128((const __m128i *)&v34);
  v21 = v26 + v25;
LABEL_9:
  *a1 = (__m128i)si128;
  a1[1].m128i_i64[0] = _mm_unpacklo_epi32(v22, _mm_cvtsi32_si128(v21)).m128i_u64[0];
  return a1;
}

