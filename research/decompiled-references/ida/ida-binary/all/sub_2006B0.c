__int64 __fastcall sub_2006B0(
        const __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // rax
  __m128i v13; // xmm0
  __m128i v15; // [rsp+0h] [rbp-38h] BYREF
  __m128i v16; // [rsp+10h] [rbp-28h]
  __int64 v17; // [rsp+20h] [rbp-18h]
  unsigned __int64 v18; // [rsp+28h] [rbp-10h]

  v18 = __readfsqword(0x28u);
  if ( !(a2 | a3) )
  {
    if ( !under_debugger )
      interr(40474, a2, a3, a4, a5);
    BUG();
  }
  if ( !a1[26].m128i_i64[1] )
    sub_1E69C0(a5, (__int64)a1, a2, a3, a4);
  v12 = a1[26].m128i_i64[0];
  v15 = _mm_loadu_si128(a1 + 24);
  v13 = _mm_loadu_si128(a1 + 25);
  v17 = v12;
  v16 = v13;
  if ( a2 )
    v16.m128i_i16[6] = *(_DWORD *)a2;
  if ( a3 )
    v16.m128i_i16[7] = *(_DWORD *)a3;
  sub_2004D0((__int64)a1, v15.m128i_i8, 0, a4, *(double *)v13.m128i_i64, a6, a7, a8, a9, a10, a11, a12);
  return 1;
}
