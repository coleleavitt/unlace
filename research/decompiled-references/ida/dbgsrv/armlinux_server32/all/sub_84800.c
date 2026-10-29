/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84800
// Address: 0x00084800

//----- (00084800) --------------------------------------------------------
_DWORD *__fastcall sub_84800(int a1, int *a2)
{
  _DWORD *v2; // r3
  int v3; // r1

  v2 = *(_DWORD **)(a1 + 272);
  if ( v2 )
  {
    v3 = *a2;
    v2 = *(_DWORD **)(v2[1] + 12);
    if ( v3 >= 0 )
      return sub_847D4(v2, v3);
  }
  else
  {
    *(_DWORD *)(a1 + 280) = 1;
  }
  return v2;
}
