/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28DC0
// Address: 0x00028DC0

//----- (00028DC0) --------------------------------------------------------
const char *__fastcall sub_28DC0(unsigned int a1)
{
  if ( a1 > 0x39 )
    return "Unknown";
  else
    return off_D6F00[a1];
}
// D6F00: using guessed type char *off_D6F00[58];
