/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70D84
// Address: 0x00070D84

//----- (00070D84) --------------------------------------------------------
unsigned int __fastcall sub_70D84(char *s2)
{
  const char **v2; // r6
  unsigned int v3; // r5
  unsigned int result; // r0

  v2 = (const char **)off_DB0A8;
  v3 = 1;
  while ( strcmp(*v2, s2) )
  {
    ++v2;
    ++v3;
    result = 0;
    if ( v3 >= 0x20 )
      return result;
  }
  return v3;
}
// DB0A8: using guessed type char *off_DB0A8[31];
