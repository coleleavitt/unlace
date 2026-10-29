/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FB66
// Address: 0x0005FB66

//----- (0005FB66) --------------------------------------------------------
int __fastcall sub_5FB66(int a1, int a2, unsigned int a3)
{
  int v3; // r3
  int v4; // r0

  v3 = *(_DWORD *)(a1 + 208);
  v4 = v3 - 100;
  if ( !v3 )
    v4 = 0;
  return sub_5FA78(v4, a2, a3);
}
