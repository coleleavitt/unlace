/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28D88
// Address: 0x00028D88

//----- (00028D88) --------------------------------------------------------
const char *__fastcall sub_28D88(unsigned int a1)
{
  if ( a1 > 0xE9 )
    return "Unknown";
  else
    return off_D6A80[a1];
}
// D6A80: using guessed type char *off_D6A80[234];
