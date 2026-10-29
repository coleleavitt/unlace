const char *__fastcall get_segment_alignment(unsigned __int8 a1)
{
  const char *result; // rax

  result = &byte_22F0C30;
  if ( a1 <= 0xEu )
    return (const char *)*(&off_2B2D840 + a1);
  return result;
}
