/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: strarray
// Address: 0x00084458

//----- (00084458) --------------------------------------------------------
char *__fastcall strarray(_DWORD *a1, int a2, int a3)
{
  char *result; // r0
  unsigned int v5; // r5
  _DWORD *v6; // r4
  int v7; // r1

  result = &byte_A0742;
  if ( a1 && a2 >= 1 )
  {
    v5 = 0;
    v6 = a1;
    do
    {
      if ( *v6 == a3 )
        return (char *)v6[1];
      v6 += 2;
      ++v5;
    }
    while ( v5 < a2 );
    v7 = 2 * (a2 - 1);
    if ( !a1[v7] )
      return (char *)a1[v7 + 1];
  }
  return result;
}
// A0742: using guessed type char byte_A0742;
