/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28D6C
// Address: 0x00028D6C

//----- (00028D6C) --------------------------------------------------------
const char *__fastcall sub_28D6C(unsigned int a1)
{
  if ( a1 > 0xDD )
    return "Unknown";
  else
    return off_D6700[a1];
}
// D6700: using guessed type char *off_D6700[222];
