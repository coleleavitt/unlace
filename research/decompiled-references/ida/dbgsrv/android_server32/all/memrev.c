/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: memrev
// Address: 0x000800E4

//----- (000800E4) --------------------------------------------------------
char *__fastcall memrev(char *result, int a2)
{
  char *v2; // r2
  int v3; // r1
  char *v4; // r3
  char v5; // r4

  if ( a2 >= 2 )
  {
    v2 = &result[a2 - 1];
    v3 = a2 + 2;
    v4 = result;
    do
    {
      v5 = *v4;
      *v4 = *v2;
      *v2-- = v5;
      v3 -= 2;
      ++v4;
    }
    while ( v3 > 3 );
  }
  return result;
}
