const __m128i *__fastcall sub_CB8A0(__int8 a1)
{
  const __m128i *result; // rax

  result = (const __m128i *)&dword_2530D8;
  if ( dword_2530D8 )
  {
    result = (const __m128i *)get_module_data();
    if ( result )
    {
      result = (const __m128i *)sub_B7CA0();
      if ( a1 != result[12].m128i_i8[8] )
        return (const __m128i *)sub_CB7B0(result, a1);
    }
  }
  return result;
}

