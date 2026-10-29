/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_492FC8
// Address: 0x0000000000492FC8

//----- (0000000000492FC8) ----------------------------------------------------
char *__fastcall sub_492FC8(char *result, __int64 a2)
{
  unsigned __int64 v2; // x3
  char *v3; // x2
  char *v4; // x1
  char *v5; // x3
  char v6; // w4

  if ( a2 > 1 )
  {
    v2 = a2 - 2;
    v3 = &result[a2 - 1];
    v4 = result;
    v5 = &result[(v2 >> 1) + 1];
    do
    {
      v6 = *v4;
      *v4++ = *v3;
      *v3-- = v6;
    }
    while ( v4 != v5 );
  }
  return result;
}
