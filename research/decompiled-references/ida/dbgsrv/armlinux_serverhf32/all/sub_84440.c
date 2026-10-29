/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84440
// Address: 0x00084440

//----- (00084440) --------------------------------------------------------
int __fastcall sub_84440(int a1, int a2)
{
  _BYTE *v2; // r3
  int i; // r6
  _DWORD *v6; // r0
  int v7; // r0

  v2 = *(_BYTE **)(a1 + 12);
  for ( i = *(_DWORD *)(a1 + 44); *v2 == 66; a2 = v7 )
  {
    *(_DWORD *)(a1 + 12) = v2 + 1;
    v6 = sub_8437C(a1);
    v7 = sub_84094(a1, 75, __SPAIR64__((unsigned int)v6, a2));
    v2 = *(_BYTE **)(a1 + 12);
  }
  *(_DWORD *)(a1 + 44) = i;
  return a2;
}
