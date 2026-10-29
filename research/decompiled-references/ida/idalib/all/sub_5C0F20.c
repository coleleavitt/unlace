unsigned __int64 __fastcall sub_5C0F20(const __m128i *a1, __m128i *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __m128i *v6; // rbx
  __int64 v7; // r9
  __int64 i; // r15
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  void (__fastcall *v11)(__int128 *, __int64, __int64); // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __m128i v14; // xmm0
  __int64 v15; // rax
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  void (__fastcall *v18)(__int128 *, __int64, __int64); // rax
  __m128i v21; // [rsp+50h] [rbp-90h] BYREF
  __m128i v22; // [rsp+60h] [rbp-80h] BYREF
  __int64 v23; // [rsp+70h] [rbp-70h]
  __int128 v24; // [rsp+80h] [rbp-60h] BYREF
  __m128i v25; // [rsp+90h] [rbp-50h]
  unsigned __int64 v26; // [rsp+A8h] [rbp-38h]

  v6 = a2;
  v26 = __readfsqword(0x28u);
  if ( (char *)a2 - (char *)a1 > 40 )
  {
    v7 = (__int64)(0xCCCCCCCCCCCCCCCDLL * (((char *)a2 - (char *)a1) >> 3) - 2) / 2;
    for ( i = v7; ; --i )
    {
      v25 = 0u;
      v9 = _mm_loadu_si128((const __m128i *)((char *)a1 + 40 * i));
      v24 = 0;
      v21 = v9;
      v10 = _mm_loadu_si128((const __m128i *)((char *)a1 + 40 * i + 16));
      v23 = a1[2].m128i_i64[5 * i];
      v11 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a4 + 16);
      v22 = v10;
      if ( v11 )
      {
        v11(&v24, a4, 2);
        v25 = _mm_loadu_si128((const __m128i *)(a4 + 16));
      }
      sub_5C0BE0(
        (__int64)a1,
        i,
        0xCCCCCCCCCCCCCCCDLL * (((char *)a2 - (char *)a1) >> 3),
        (__int64)&v24,
        a5,
        v7,
        (__int128)_mm_load_si128(&v21),
        (__int128)_mm_load_si128(&v22),
        v23);
      if ( v25.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v25.m128i_i64[0])(&v24, &v24, 3);
      if ( !i )
        break;
    }
  }
  if ( (unsigned __int64)a2 < a3 )
  {
    do
    {
      while ( 1 )
      {
        if ( !*(_QWORD *)(a4 + 16) )
          std::__throw_bad_function_call();
        if ( (*(int (__fastcall **)(__int64, __m128i *, const __m128i *))(a4 + 24))(a4, v6, a1) < 0 )
        {
          v14 = _mm_loadu_si128(v6);
          v15 = v6[2].m128i_i64[0];
          v25 = 0u;
          v21 = v14;
          v16 = _mm_loadu_si128(v6 + 1);
          v23 = v15;
          v22 = v16;
          *v6 = _mm_loadu_si128(a1);
          v17 = _mm_loadu_si128(a1 + 1);
          v24 = 0;
          v6[1] = v17;
          v6[2].m128i_i64[0] = a1[2].m128i_i64[0];
          v18 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a4 + 16);
          if ( v18 )
          {
            v18(&v24, a4, 2);
            v25 = _mm_loadu_si128((const __m128i *)(a4 + 16));
          }
          sub_5C0BE0(
            (__int64)a1,
            0,
            0xCCCCCCCCCCCCCCCDLL * (((char *)a2 - (char *)a1) >> 3),
            (__int64)&v24,
            v12,
            v13,
            (__int128)_mm_load_si128(&v21),
            (__int128)_mm_load_si128(&v22),
            v23);
          if ( v25.m128i_i64[0] )
            break;
        }
        v6 = (__m128i *)((char *)v6 + 40);
        if ( (unsigned __int64)v6 >= a3 )
          return v26 - __readfsqword(0x28u);
      }
      v6 = (__m128i *)((char *)v6 + 40);
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v25.m128i_i64[0])(&v24, &v24, 3);
    }
    while ( (unsigned __int64)v6 < a3 );
  }
  return v26 - __readfsqword(0x28u);
}
