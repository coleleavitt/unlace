const __m128i *__fastcall sub_CCE20(__int8 a1)
{
  const __m128i *result; // rax

  result = (const __m128i *)&dword_254298;
  if ( dword_254298 )
  {
    result = (const __m128i *)get_module_data();
    if ( result )
    {
      result = (const __m128i *)sub_B8210();
      if ( a1 != result[12].m128i_i8[8] )
        return (const __m128i *)sub_CCD30(result, a1);
    }
  }
  return result;
}

