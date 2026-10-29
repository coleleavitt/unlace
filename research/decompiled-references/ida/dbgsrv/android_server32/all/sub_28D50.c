/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28D50
// Address: 0x00028D50

//----- (00028D50) --------------------------------------------------------
const char *__fastcall sub_28D50(unsigned int a1)
{
  if ( a1 > 0x3E )
    return "Unknown";
  else
    return off_D6600[a1];
}
// D6600: using guessed type char *off_D6600[63];
