/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140007A70
// Address: 0x0000000140007A70

//----- (0000000140007A70) ----------------------------------------------------
const char *__fastcall sub_140007A70(DWORD dwMessageId)
{
  if ( dwMessageId == -2147418113 )
    return "Data source has already been prepared.";
  if ( dwMessageId == -2147024809 )
    return "Invalid parameter.";
  if ( (int)dwMessageId < -2140340223 || dwMessageId + 2140340223 >= 0x19 )
    return (const char *)sub_14005A890(dwMessageId);
  return off_140091880[(int)dwMessageId + 2140340223];
}
// 140091880: using guessed type char *off_140091880[25];
