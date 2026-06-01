/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: memrev
// Address: 0x0000000100075344

//----- (0000000100075344) ----------------------------------------------------
char *__fastcall memrev(char *result, __int64 a2)
{
  unsigned __int64 v2; // x8
  char *v3; // x9
  char *v4; // x10
  char v5; // w11

  if ( a2 >= 2 )
  {
    v2 = a2 + 2;
    v3 = &result[a2 - 1];
    v4 = result;
    do
    {
      v5 = *v4;
      *v4++ = *v3;
      *v3-- = v5;
      v2 -= 2LL;
    }
    while ( v2 > 3 );
  }
  return result;
}
