__int64 __fastcall sub_172250(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        __int64 a13)
{
  __int64 v13; // rbx
  __m128i v14; // xmm0
  __m128i v16; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+10h] [rbp-B8h]
  char v18; // [rsp+18h] [rbp-B0h]
  __int64 v19; // [rsp+20h] [rbp-A8h] BYREF
  char v20; // [rsp+28h] [rbp-A0h]
  char v21; // [rsp+29h] [rbp-9Fh]
  __m128i v22; // [rsp+30h] [rbp-98h] BYREF
  __int64 v23; // [rsp+40h] [rbp-88h]
  __int64 v24; // [rsp+48h] [rbp-80h]
  __int64 v25; // [rsp+58h] [rbp-70h]
  __int64 v26; // [rsp+60h] [rbp-68h]
  __int64 v27; // [rsp+78h] [rbp-50h]
  __int64 v28; // [rsp+80h] [rbp-48h]
  unsigned __int64 v29; // [rsp+A8h] [rbp-20h]

  v29 = __readfsqword(0x28u);
  v16 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a5), _mm_cvtsi32_si128(a6)));
  v22.m128i_i64[0] = a1;
  v13 = qalloc_or_throw();
  v22.m128i_i64[1] = a2;
  sub_171EC0(v13, &v22);
  v14 = _mm_load_si128(&v16);
  v17 = -1;
  v18 = 0;
  *(__m128i *)(v13 + 16) = v14;
  get_xrefpos();
  v20 = 0;
  v19 = v17;
  v21 = v18;
  sub_1960F0(&v22, v13, 0, 0);
  v22.m128i_i64[1] = v13 + 184;
  sub_1987C0(v13, &v19, &v22);
  if ( v27 )
  {
    v28 = 0;
    qfree();
  }
  if ( v25 )
  {
    v26 = 0;
    qfree();
  }
  if ( v23 )
  {
    v24 = 0;
    qfree();
  }
  return sub_1942A0(*(void **)(v13 + 40), a7, a8, a9, a10, a11, a12, a13);
}

