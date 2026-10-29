/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7DD5C
// Address: 0x0007DD5C

//----- (0007DD5C) --------------------------------------------------------
int __fastcall sub_7DD5C(int *a1, unsigned int a2)
{
  int result; // r0
  int v3; // r5
  int i; // r5
  int v5; // r3
  int v6; // r4
  int v7; // r2

  v3 = a1[1];
  result = *a1;
  for ( i = (8 * v3) >> 3; i > 0; i = v5 - 1 - v7 )
  {
    v5 = i >> 1;
    v6 = result + 8 * (i >> 1);
    if ( a2 < *(_DWORD *)(v6 + 4) )
    {
      while ( 1 )
      {
        v7 = v5 >> 1;
        if ( !v5 )
          return result;
        v6 = result + 8 * v7;
        if ( a2 >= *(_DWORD *)(v6 + 4) )
          goto LABEL_10;
        v5 >>= 1;
      }
    }
    v7 = i >> 1;
    v5 = i;
LABEL_10:
    result = v6 + 8;
  }
  return result;
}
