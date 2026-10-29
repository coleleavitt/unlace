const __m128i *__fastcall sub_23C5D0(
        unsigned __int8 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const __m128i *result; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  double v15; // xmm4_8
  double v16; // xmm5_8

  result = (const __m128i *)&dword_8CD7F0;
  v12 = (unsigned int)dword_8CD7F0;
  if ( dword_8CD7F0 )
  {
    result = (const __m128i *)get_module_data((unsigned int)dword_8CD7F0);
    if ( result )
    {
      result = (const __m128i *)sub_227580(*(double *)a3.m128_u64, v12, a2, v13, v14);
      if ( a1 != result[12].m128i_i8[8] )
        return (const __m128i *)sub_23C4E0(result, (const char *)a1, a3, a4, a5, a6, v15, v16, a9, a10);
    }
  }
  return result;
}
