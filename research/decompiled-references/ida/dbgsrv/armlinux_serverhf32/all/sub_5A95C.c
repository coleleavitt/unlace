/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A95C
// Address: 0x0005A95C

//----- (0005A95C) --------------------------------------------------------
unsigned int __fastcall sub_5A95C(int a1, int a2, unsigned int a3)
{
  int v3; // r0

  v3 = *(_DWORD *)(a1 + 248);
  if ( v3 )
    v3 -= 100;
  return sub_5A204(v3, a2, a3);
}
