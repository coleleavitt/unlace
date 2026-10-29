void __fastcall sub_7A35B0(__int64 a1, unsigned int a2, int *a3, const __m128i *a4)
{
  __int64 v4; // r13
  __m128i v7; // xmm0
  __int64 v8; // rdx
  bool v9; // zf
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // [rsp+0h] [rbp-78h] BYREF
  __int64 v17; // [rsp+8h] [rbp-70h]
  __m128i v18; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+28h] [rbp-50h]
  __m128i v21; // [rsp+30h] [rbp-48h]

  v4 = a1 - 64;
  v7 = _mm_loadl_epi64(a4);
  v8 = a4->m128i_i64[1];
  v9 = *(_BYTE *)(a1 + 1466) == 0;
  v17 = v8;
  v10 = _mm_cvtsi128_si32(v7);
  v16 = v7.m128i_i64[0];
  if ( v9 || (unsigned int)(v10 - 1) > 1 )
  {
    v15 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v7, 229));
  }
  else
  {
    sub_7A0960(a1 - 64, &std::cout, a2, a3);
    v19 = a1 - 64;
    v20 = 0;
    v21 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C548A0), (__m128i)(unsigned __int64)sub_7A0040);
    if ( HIDWORD(v16) != -1 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v16, (__m128i)(unsigned __int64)&v19);
      ((void (__fastcall *)(void *, __m128i *, __int64, __int64, __int64, __int64, __int64, __int64))sub_11EE460)(
        &std::cout,
        &v18,
        v11,
        v12,
        v13,
        v14,
        v16,
        v17);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_7A0C30(v4, (__int64)&std::cout, a2, a3);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v21.m128i_i64[0] )
      ((void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))v21.m128i_i64[0])(&v19, &v19, 3);
    v10 = a4->m128i_i32[0];
    v15 = a4->m128i_i32[1];
    v8 = a4->m128i_i64[1];
  }
  v19 = __PAIR64__(v15, v10);
  v20 = v8;
  sub_7A1340(v4, a2, a3, (int *)&v19);
  v19 = a4->m128i_i64[0];
  v20 = a4->m128i_i64[1];
  sub_7A3040(v4, a2, a3, (__int64 *)&v19);
  v19 = a4->m128i_i64[0];
  v20 = a4->m128i_i64[1];
  sub_7A1BF0(v4, a2, a3, (__int64 *)&v19);
}

