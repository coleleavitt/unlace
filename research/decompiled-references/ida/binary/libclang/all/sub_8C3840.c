__m128i *__fastcall sub_8C3840(
        _QWORD *a1,
        __int64 a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        unsigned int a9,
        __int64 a10)
{
  int v13; // ebp
  __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rax
  __m128i *v17; // rbx
  __int64 v18; // rdx
  __int16 v19; // ax
  __int32 v20; // eax
  unsigned __int8 v21; // al
  __int64 *v22; // rsi
  size_t v23; // rdx
  __int64 v25; // rax
  __m128i v26; // [rsp+0h] [rbp-58h] BYREF
  __int64 v27; // [rsp+18h] [rbp-40h]

  v13 = a4;
  if ( a6 )
  {
    v14 = *(unsigned int *)(a6 + 8);
    v15 = 8 * v14 + 48;
  }
  else
  {
    v15 = 48;
    LODWORD(v14) = 0;
  }
  v16 = a1[274];
  a1[284] += v15;
  v17 = (__m128i *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v18 = (__int64)v17->m128i_i64 + v15;
  if ( a1[275] >= (unsigned __int64)v17->m128i_u64 + v15 && v16 )
  {
    a1[274] = v18;
  }
  else
  {
    v26.m128i_i64[0] = a5;
    v25 = sub_8C1090((__int64)(a1 + 274), v15, 3);
    a5 = v26.m128i_i64[0];
    v17 = (__m128i *)v25;
  }
  v19 = v17->m128i_i16[0] & 0xFE00 | 0x53;
  v26 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a8), _mm_cvtsi32_si128(a9)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a10), _mm_cvtsi32_si128(HIDWORD(a10))));
  v17->m128i_i16[0] = v19;
  if ( byte_4AD234C )
  {
    v27 = a5;
    sub_AC4570(83);
    a5 = v27;
  }
  v20 = v17->m128i_i32[0];
  v17->m128i_i64[1] = a2;
  v17[1].m128i_i64[0] = a5;
  v17->m128i_i32[1] = v14;
  v17->m128i_i32[0] = v20 & 0xF00001FF | (a3 << 9) & 0x600 | (v13 << 19) & 0x3F80000;
  v17[1].m128i_i64[1] = a7;
  v21 = sub_76B330((__int64)v17, v15, v18, a4, a5, a6);
  v17->m128i_i8[1] = (v21 << 6) | v17->m128i_i8[1] & 0x3F;
  v17->m128i_i8[2] = v17->m128i_i8[2] & 0xF8 | (v21 >> 2) & 7;
  v17[2] = _mm_load_si128(&v26);
  if ( (_DWORD)v14 )
  {
    v22 = *(__int64 **)a6;
    v23 = 8LL * *(unsigned int *)(a6 + 8);
    if ( v23 <= 8 )
    {
      if ( v23 == 8 )
        v17[3].m128i_i64[0] = *v22;
    }
    else
    {
      memmove(&v17[3], v22, v23);
    }
  }
  return v17;
}

