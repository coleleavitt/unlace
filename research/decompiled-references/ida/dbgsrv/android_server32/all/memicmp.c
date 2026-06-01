/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: memicmp
// Address: 0x00080106

//----- (00080106) --------------------------------------------------------
int __fastcall memicmp(int a1, int a2, int a3)
{
  int result; // r0
  int i; // r5
  int v7; // r7

  result = 0;
  if ( a3 >= 1 )
  {
    for ( i = 0; i < a3; ++i )
    {
      v7 = tolower(*(unsigned __int8 *)(a1 + i));
      result = v7 - tolower(*(unsigned __int8 *)(a2 + i));
      if ( result )
        break;
      result = 0;
    }
  }
  return result;
}
