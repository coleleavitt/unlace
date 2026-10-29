/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D50C4
// Address: 0x00000000000D50C4

//----- (00000000000D50C4) ----------------------------------------------------
FILE *__fastcall sub_D50C4(__int64 a1, const char *a2, char a3)
{
  const char *v3; // x8

  if ( (a3 & 3) == 1 )
  {
    v3 = "rb";
    if ( !a2 )
      return nullptr;
  }
  else if ( (a3 & 4) != 0 )
  {
    v3 = "r+b";
    if ( !a2 )
      return nullptr;
  }
  else
  {
    v3 = "wb";
    if ( (a3 & 8) == 0 )
      v3 = nullptr;
    if ( !a2 )
      return nullptr;
  }
  if ( v3 )
    return fopen(a2, v3);
  return nullptr;
}
