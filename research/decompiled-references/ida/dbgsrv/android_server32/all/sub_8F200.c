/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F200
// Address: 0x0008F200

//----- (0008F200) --------------------------------------------------------
FILE *__fastcall sub_8F200(int a1, char *filename, int a3)
{
  const char *v3; // r2
  FILE *result; // r0

  if ( (a3 & 3) == 1 )
  {
    v3 = "rb";
  }
  else if ( (a3 & 4) != 0 )
  {
    v3 = "r+b";
  }
  else
  {
    v3 = (const char *)((unsigned int)"wb" & (a3 << 28 >> 31));
  }
  result = nullptr;
  if ( filename )
  {
    if ( v3 )
      return fopen(filename, v3);
  }
  return result;
}
