__int64 __fastcall sub_2C23C0(
        __m128i *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 result; // rax

  if ( a1[24].m128i_i32[0] )
  {
    do
    {
      sub_2C2100(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
      result = a1[24].m128i_u32[0];
    }
    while ( (_DWORD)result );
  }
  return result;
}
