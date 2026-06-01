/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71500
// Address: 0x00071500

//----- (00071500) --------------------------------------------------------
int __cdecl sub_71500(int a1, int a2)
{
  int v3; // edx

  v3 = ~*(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = ~*(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 4) = v3;
  *(_BYTE *)a1 = *(_BYTE *)a2;
  return a1;
}
