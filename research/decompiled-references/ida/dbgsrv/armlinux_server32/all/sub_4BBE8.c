/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4BBE8
// Address: 0x0004BBE8

//----- (0004BBE8) --------------------------------------------------------
int __fastcall sub_4BBE8(_DWORD *a1, _DWORD *a2, int **a3, int a4)
{
  int v4; // r6
  int *v5; // r5
  int v6; // r4
  int v7; // r4
  int *v8; // r0

  v4 = a1[39];
  if ( a1[41] )
    v5 = (int *)a1[40];
  else
    v5 = &dword_8DB98;
  v6 = a1[38];
  if ( a4 > 0 )
  {
    v7 = a1[35] - a4;
    if ( v7 < 0 )
      return 0;
    v8 = (int *)(a1[34] + 24 * v7);
    v6 = *v8;
    v4 = v8[4];
    v5 = (int *)"#include ...";
  }
  if ( a2 )
    *a2 = v4;
  if ( a3 )
    *a3 = v5;
  return v6;
}
// 8DB98: using guessed type int dword_8DB98;
