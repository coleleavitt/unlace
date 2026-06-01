__m128i *__fastcall sub_8C32C0(
        _QWORD *a1,
        __int64 a2,
        __int16 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10,
        __int64 a11)
{
  int v14; // ebp
  __int64 v15; // rdx
  __int32 v16; // r12d
  __int64 v17; // rsi
  __int64 v18; // rax
  __m128i *v19; // rbx
  __int64 v20; // rdx
  __int16 v21; // ax
  __int32 v22; // eax
  __int64 v23; // rcx
  unsigned __int8 v24; // al
  __int64 *v25; // rsi
  size_t v26; // rdx
  __int64 v28; // rax
  __m128i v29; // [rsp+0h] [rbp-68h] BYREF
  __int64 v30; // [rsp+18h] [rbp-50h]
  __int64 v31; // [rsp+20h] [rbp-48h]
  __int64 v32; // [rsp+28h] [rbp-40h]

  v14 = a4;
  if ( a6 )
  {
    v15 = *(unsigned int *)(a6 + 8);
    v16 = *(_DWORD *)(a6 + 8);
  }
  else
  {
    v15 = 0;
    v16 = 0;
  }
  LOBYTE(a4) = HIDWORD(a8) != 0;
  v17 = 8 * (v15 + (HIDWORD(a8) != 0)) + 48;
  v18 = a1[274];
  a1[284] += v17;
  v19 = (__m128i *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v20 = (__int64)v19->m128i_i64 + v17;
  if ( a1[275] >= (unsigned __int64)v19->m128i_u64 + v17 && v18 )
  {
    a1[274] = v20;
  }
  else
  {
    v31 = a5;
    v30 = a2;
    v29.m128i_i8[0] = HIDWORD(a8) != 0;
    v28 = sub_8C1090((__int64)(a1 + 274), v17, 3);
    a5 = v31;
    a2 = v30;
    a4 = HIDWORD(a8) != 0;
    v19 = (__m128i *)v28;
  }
  v21 = v19->m128i_i16[0] & 0xFE00 | 0x52;
  v29 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a9), _mm_cvtsi32_si128(a10)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a11), _mm_cvtsi32_si128(HIDWORD(a11))));
  v19->m128i_i16[0] = v21;
  if ( byte_4AD234C )
  {
    v32 = a5;
    v31 = a2;
    LOBYTE(v30) = a4;
    sub_AC4570(82);
    a5 = v32;
    a2 = v31;
    a4 = (unsigned __int8)v30;
  }
  v22 = v19->m128i_i32[0];
  v19->m128i_i64[1] = a2;
  v23 = (unsigned int)(a4 << 27);
  v19[1].m128i_i64[0] = a5;
  v19->m128i_i32[1] = v16;
  v19->m128i_i32[0] = v22 & 0xF00001FF | v23 | (a3 << 9) & 0x600 | (v14 << 19) & 0x3F80000;
  v19[1].m128i_i64[1] = a7;
  v24 = sub_76B330((__int64)v19, v17, v20, v23, a5, a6);
  v19->m128i_i8[1] = (v24 << 6) | v19->m128i_i8[1] & 0x3F;
  v19->m128i_i8[2] = v19->m128i_i8[2] & 0xF8 | (v24 >> 2) & 7;
  v19[2] = _mm_load_si128(&v29);
  if ( (v19->m128i_i8[3] & 8) != 0 )
    *(_QWORD *)sub_80C800((__int64)v19) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a8), _mm_cvtsi32_si128(HIDWORD(a8))).m128i_u64[0];
  if ( v16 )
  {
    v25 = *(__int64 **)a6;
    v26 = 8LL * *(unsigned int *)(a6 + 8);
    if ( v26 <= 8 )
    {
      if ( v26 == 8 )
        v19[3].m128i_i64[0] = *v25;
    }
    else
    {
      memmove(&v19[3], v25, v26);
    }
  }
  return v19;
}

