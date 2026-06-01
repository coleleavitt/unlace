/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DDF0
// Address: 0x0003DDF0

//----- (0003DDF0) --------------------------------------------------------
const char **__fastcall sub_3DDF0(char *s2)
{
  int v1; // r7
  const char **v3; // r4
  int v4; // r5

  v1 = dword_D2CC8;
  if ( !dword_D2CC8 )
    return nullptr;
  v3 = (const char **)off_D2CCC;
  v4 = 0;
  while ( 1 )
  {
    ++v4;
    if ( !strcmp(*v3, s2) )
      break;
    v3 += 6;
    if ( v4 == v1 )
      return nullptr;
  }
  return v3;
}
// D2CC8: using guessed type int dword_D2CC8;
// D2CCC: using guessed type _UNKNOWN **off_D2CCC;
