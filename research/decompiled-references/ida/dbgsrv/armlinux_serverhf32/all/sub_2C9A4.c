/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2C9A4
// Address: 0x0002C9A4

//----- (0002C9A4) --------------------------------------------------------
int __fastcall sub_2C9A4(unsigned int *a1, int *a2, _DWORD *a3, int a4)
{
  int v4; // r4
  int v5; // r5
  unsigned int v6; // r2
  unsigned int v7; // r4

  v4 = *a2;
  if ( (unsigned int)*a2 > 0xFFFFFFFB )
    return 0;
  v5 = v4 + 4;
  if ( (unsigned int)(v4 + 4) > a3[1] )
    return 0;
  if ( a1 )
  {
    v6 = *(_DWORD *)(*a3 + v4);
    v7 = bswap32(v6);
    if ( a4 )
      v6 = v7;
    *a1 = v6;
    v5 = *a2 + 4;
  }
  *a2 = v5;
  return 1;
}
