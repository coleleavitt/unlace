/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_c_keyword
// Address: 0x00055AF4

//----- (00055AF4) --------------------------------------------------------
int __fastcall is_c_keyword(char *s2)
{
  unsigned int v2; // r5
  const char **v3; // r6
  int v4; // r1
  int result; // r0

  v2 = 0;
  v3 = (const char **)off_D9C28;
  do
  {
    if ( v2 != 38 )
    {
      v4 = strcmp(*v3, s2);
      result = 1;
      if ( !v4 )
        break;
    }
    ++v3;
    ++v2;
    result = 0;
  }
  while ( v2 < 0x84 );
  return result;
}
// D9C28: using guessed type char *off_D9C28[132];
