/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A310
// Address: 0x0001A310

//----- (0001A310) --------------------------------------------------------
int (*__fastcall sub_1A310(int (*result)(void)))(void)
{
  if ( result )
    return (int (*)(void))result();
  return result;
}
