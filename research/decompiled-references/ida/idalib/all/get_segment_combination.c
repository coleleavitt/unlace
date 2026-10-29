const char *__fastcall get_segment_combination(unsigned __int8 a1)
{
  const char *result; // rax

  result = &byte_22F0C30;
  if ( a1 <= 7u )
    return (const char *)*(&off_2B2D800 + a1);
  return result;
}
