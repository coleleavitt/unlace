/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_406DA0
// Address: 0x00406DA0

//----- (00406DA0) --------------------------------------------------------
const char *__usercall sub_406DA0@<eax>(__m128i a1@<xmm0>, int dwMessageId)
{
  if ( dwMessageId == -2147418113 )
    return "Data source has already been prepared.";
  if ( dwMessageId == -2147024809 )
    return "Invalid parameter.";
  if ( dwMessageId < -2140340223 || (unsigned int)(dwMessageId + 2140340223) >= 0x19 )
    return (const char *)sub_453860(a1, dwMessageId);
  return *(const char **)(4 * dwMessageId - 23817268);
}
