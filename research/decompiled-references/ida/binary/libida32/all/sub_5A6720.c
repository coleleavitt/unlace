unsigned __int64 __fastcall sub_5A6720(
        const __m128i *a1,
        __m128i *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rsi
  __int64 i; // r13
  __m128i v10; // xmm0
  void (__fastcall *v11)(__int128 *, __int64, __int64); // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __m128i v14; // xmm0
  void (__fastcall *v15)(__int128 *, __int64, __int64); // rax
  __m128i *v17; // [rsp+38h] [rbp-88h]
  __m128i v18; // [rsp+40h] [rbp-80h] BYREF
  __m128i v19; // [rsp+50h] [rbp-70h] BYREF
  __int128 v20; // [rsp+60h] [rbp-60h] BYREF
  __m128i v21; // [rsp+70h] [rbp-50h]
  unsigned __int64 v22; // [rsp+88h] [rbp-38h]

  v17 = a2;
  v7 = (char *)a2 - (char *)a1;
  v22 = __readfsqword(0x28u);
  if ( v7 > 32 )
  {
    for ( i = ((v7 >> 5) - 2) / 2; ; --i )
    {
      v21 = 0u;
      v10 = _mm_loadu_si128(&a1[2 * i]);
      v20 = 0;
      v18 = v10;
      v11 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a4 + 16);
      v19 = _mm_loadu_si128(&a1[2 * i + 1]);
      if ( v11 )
      {
        v11(&v20, a4, 2);
        v21 = _mm_loadu_si128((const __m128i *)(a4 + 16));
      }
      sub_5A6420(
        (__int64)a1,
        i,
        v7 >> 5,
        (__int64)&v20,
        a5,
        a6,
        (__int128)_mm_load_si128(&v18),
        (__int128)_mm_load_si128(&v19));
      if ( v21.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v21.m128i_i64[0])(&v20, &v20, 3);
      if ( !i )
        break;
    }
  }
  for ( ; (unsigned __int64)v17 < a3; v17 += 2 )
  {
    if ( !*(_QWORD *)(a4 + 16) )
      std::__throw_bad_function_call();
    if ( (*(int (__fastcall **)(__int64, __m128i *, const __m128i *))(a4 + 24))(a4, v17, a1) < 0 )
    {
      v21 = 0u;
      v14 = _mm_loadu_si128(v17);
      v20 = 0;
      v18 = v14;
      v19 = _mm_loadu_si128(v17 + 1);
      *v17 = _mm_loadu_si128(a1);
      v17[1] = _mm_loadu_si128(a1 + 1);
      v15 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a4 + 16);
      if ( v15 )
      {
        v15(&v20, a4, 2);
        v21 = _mm_loadu_si128((const __m128i *)(a4 + 16));
      }
      sub_5A6420(
        (__int64)a1,
        0,
        v7 >> 5,
        (__int64)&v20,
        v12,
        v13,
        (__int128)_mm_load_si128(&v18),
        (__int128)_mm_load_si128(&v19));
      if ( v21.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v21.m128i_i64[0])(&v20, &v20, 3);
    }
  }
  return v22 - __readfsqword(0x28u);
}

