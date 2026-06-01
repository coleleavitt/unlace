/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23AE2
// Address: 0x00023AE2

//----- (00023AE2) --------------------------------------------------------
int __fastcall sub_23AE2(int a1, int a2)
{
  _DWORD *v3; // r5
  int v4; // r2
  int result; // r0
  _DWORD *v6; // r4
  int v7; // r6
  _DWORD *v8; // r7

  v3 = *(_DWORD **)(a1 + 916);
  v4 = a1 + 916;
  result = -1;
  if ( v3 )
  {
    v6 = (_DWORD *)v4;
    do
    {
      v7 = v3[4];
      if ( v7 >= a2 )
        v6 = v3;
      v8 = v3 + 1;
      if ( v7 >= a2 )
        v8 = v3;
      v3 = (_DWORD *)*v8;
    }
    while ( *v8 );
    if ( v6 != (_DWORD *)v4 && v6[4] <= a2 )
    {
      sub_1CD58(a1, a2, 0);
      ++v6[7];
      return 1;
    }
  }
  return result;
}
