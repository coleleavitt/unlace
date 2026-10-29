/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32E8C
// Address: 0x00032E8C

//----- (00032E8C) --------------------------------------------------------
int __fastcall sub_32E8C(int *a1, int *a2, _DWORD *a3, int a4)
{
  int v4; // r5
  int v5; // r4
  int v6; // r6
  unsigned int v7; // r2
  int v8; // r4

  v4 = *a2;
  v5 = 0;
  if ( (unsigned int)*a2 <= 0xFFFFFFFB )
  {
    v6 = v4 + 4;
    if ( (unsigned int)(v4 + 4) <= a3[1] )
    {
      if ( a1 )
      {
        v7 = *(_DWORD *)(*a3 + v4);
        v8 = (v7 << 24) + ((v7 << 8) & 0xFF0000) + ((v7 >> 8) & 0xFF00) + HIBYTE(v7);
        if ( !a4 )
          v8 = v7;
        *a1 = v8;
        v6 = *a2 + 4;
      }
      *a2 = v6;
      return 1;
    }
  }
  return v5;
}
