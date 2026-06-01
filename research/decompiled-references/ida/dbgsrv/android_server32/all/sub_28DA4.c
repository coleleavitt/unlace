/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28DA4
// Address: 0x00028DA4

//----- (00028DA4) --------------------------------------------------------
const char *__fastcall sub_28DA4(unsigned int a1)
{
  if ( a1 > 0x33 )
    return "Unknown";
  else
    return off_D6E30[a1];
}
// D6E30: using guessed type char *off_D6E30[110];
