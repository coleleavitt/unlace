/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28CCC
// Address: 0x00028CCC

//----- (00028CCC) --------------------------------------------------------
const char *__fastcall sub_28CCC(unsigned int a1)
{
  if ( a1 > 0x3A )
    return "Unknown";
  else
    return off_D6510[a1];
}
// D6510: using guessed type char *off_D6510[59];
