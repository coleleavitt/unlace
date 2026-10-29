/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C3D4
// Address: 0x0005C3D4

//----- (0005C3D4) --------------------------------------------------------
int __fastcall sub_5C3D4(int a1, _BYTE *a2)
{
  int v2; // r1

  *a2 = *(_BYTE *)(a1 + 153);
  v2 = 0;
  if ( *(_BYTE *)(a1 + 153) )
    return sub_5C3F0(a1, 40);
  return v2;
}
