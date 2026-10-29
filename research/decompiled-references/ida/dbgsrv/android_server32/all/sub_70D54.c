/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70D54
// Address: 0x00070D54

//----- (00070D54) --------------------------------------------------------
unsigned int __fastcall sub_70D54(char *s2)
{
  const char **v2; // r6
  unsigned int v3; // r5
  unsigned int result; // r0

  v2 = (const char **)off_DAB88;
  v3 = 1;
  while ( strcmp(*v2, s2) )
  {
    ++v2;
    ++v3;
    result = 0;
    if ( v3 >> 3 >= 0x29 )
      return result;
  }
  return v3;
}
// DAB88: using guessed type char *off_DAB88[359];
