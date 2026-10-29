/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: memrev
// Address: 0x00000000000C0698

//----- (00000000000C0698) ----------------------------------------------------
char *__fastcall memrev(char *result, __int64 a2)
{
  __int64 v2; // x8
  char *v3; // x9
  char *v4; // x10
  char v5; // w12

  if ( a2 >= 2 )
  {
    v2 = a2 + 2;
    v3 = &result[a2 - 1];
    v4 = result;
    do
    {
      v5 = *v4;
      v2 -= 2;
      *v4++ = *v3;
      *v3-- = v5;
    }
    while ( v2 > 3 );
  }
  return result;
}
