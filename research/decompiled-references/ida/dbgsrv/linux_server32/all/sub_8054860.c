/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8054860
// Address: 0x08054860

//----- (08054860) --------------------------------------------------------
int __cdecl sub_8054860(int a1, int a2)
{
  int v3; // ecx

  v3 = *(_DWORD *)(a1 + 132);
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 4) = v3;
  return a2;
}
