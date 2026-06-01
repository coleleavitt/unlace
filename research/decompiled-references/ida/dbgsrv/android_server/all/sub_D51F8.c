/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D51F8
// Address: 0x00000000000D51F8

//----- (00000000000D51F8) ----------------------------------------------------
FILE *__fastcall sub_D51F8(int a1, char *filename, char a3)
{
  const char *v3; // x8

  if ( (a3 & 3) == 1 )
  {
    v3 = "rb";
    if ( !filename )
      return nullptr;
  }
  else if ( (a3 & 4) != 0 )
  {
    v3 = "r+b";
    if ( !filename )
      return nullptr;
  }
  else
  {
    v3 = "wb";
    if ( (a3 & 8) == 0 )
      v3 = nullptr;
    if ( !filename )
      return nullptr;
  }
  if ( v3 )
    return fopen(filename, v3);
  return nullptr;
}
