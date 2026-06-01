/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A0FC
// Address: 0x0009A0FC

//----- (0009A0FC) --------------------------------------------------------
_DWORD *__fastcall sub_9A0FC(_DWORD *a1, int a2, int a3, _DWORD *a4, int a5, int a6, int a7, _DWORD *a8)
{
  unsigned int v8; // lr
  unsigned int v9; // r4
  int v10; // r5

  v8 = a5 - a2;
  while ( v8 )
  {
    v9 = v8;
    v10 = a2 + (v8 >> 1);
    v8 >>= 1;
    if ( *a8 >= *a4 + 8 * v10 + (*(_DWORD *)(*a4 + 8 * v10) | (2 * (*(_DWORD *)(*a4 + 8 * v10) & 0x40000000u))) )
    {
      v8 = v9 + ~v8;
      a2 = v10 + 1;
    }
  }
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return a1 + 3;
}
