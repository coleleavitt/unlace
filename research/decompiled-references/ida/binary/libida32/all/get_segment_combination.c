const char *__fastcall get_segment_combination(unsigned __int8 a1)
{
  const char *result; // rax

  result = &byte_22CD811;
  if ( a1 <= 7u )
    return (const char *)*(&off_2B03840 + a1);
  return result;
}

