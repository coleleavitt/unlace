signed __int64 __fastcall sub_2A49E0(
        const __m128i *a1,
        const __m128i *a2,
        unsigned __int64 a3,
        __int64 (__fastcall *a4)(__int64, __int64),
        __int64 a5,
        __int64 a6)
{
  signed __int64 result; // rax
  const __m128i *v9; // rbx
  __int64 v10; // r15
  __int64 i; // r14
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 v14; // xmm0
  __int32 v15; // eax

  result = (char *)a2 - (char *)a1;
  v9 = a2;
  if ( (char *)a2 - (char *)a1 > 20 )
  {
    v10 = 0xCCCCCCCCCCCCCCCDLL * (result >> 2);
    for ( i = (v10 - 2) / 2; ; --i )
    {
      result = sub_2A47D0(
                 (__int64)a1,
                 i,
                 v10,
                 a4,
                 a5,
                 a6,
                 (__int128)_mm_loadu_si128((const __m128i *)((char *)a1 + 20 * i)),
                 a1[1].m128i_i32[5 * i]);
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
        result = a4((__int64)v9, (__int64)a1);
        if ( (_BYTE)result )
          break;
        v9 = (const __m128i *)((char *)v9 + 20);
        if ( (unsigned __int64)v9 >= a3 )
          return result;
      }
      v14 = (__int128)_mm_loadu_si128(v9);
      v15 = v9[1].m128i_i32[0];
      v9 = (const __m128i *)((char *)v9 + 20);
      *(const __m128i *)((char *)&v9[-2] + 12) = _mm_loadu_si128(a1);
      v9[-1].m128i_i32[3] = a1[1].m128i_i32[0];
      result = sub_2A47D0(
                 (__int64)a1,
                 0,
                 0xCCCCCCCCCCCCCCCDLL * (((char *)a2 - (char *)a1) >> 2),
                 a4,
                 v12,
                 v13,
                 v14,
                 v15);
    }
    while ( (unsigned __int64)v9 < a3 );
  }
  return result;
}
