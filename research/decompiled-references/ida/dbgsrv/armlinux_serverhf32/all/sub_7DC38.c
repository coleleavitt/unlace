/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7DC38
// Address: 0x0007DC38

//----- (0007DC38) --------------------------------------------------------
_DWORD *__fastcall sub_7DC38(_DWORD *a1, unsigned int a2)
{
  _DWORD *result; // r0
  int v3; // r4
  int i; // r4
  int v5; // r2
  unsigned int *v6; // r5
  int v7; // r3

  v3 = a1[1];
  result = (_DWORD *)*a1;
  for ( i = (8 * v3) >> 3; i > 0; i = v5 - 1 - v7 )
  {
    v5 = i >> 1;
    v6 = &result[2 * (i >> 1)];
    if ( a2 < *v6 )
    {
      while ( 1 )
      {
        v7 = v5 >> 1;
        if ( !v5 )
          return result;
        v6 = &result[2 * v7];
        if ( a2 >= *v6 )
          goto LABEL_10;
        v5 >>= 1;
      }
    }
    v7 = i >> 1;
    v5 = i;
LABEL_10:
    result = v6 + 2;
  }
  return result;
}
