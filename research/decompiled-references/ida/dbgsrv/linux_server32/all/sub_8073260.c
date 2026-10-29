/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8073260
// Address: 0x08073260

//----- (08073260) --------------------------------------------------------
int __cdecl sub_8073260(int a1, int a2)
{
  int *v2; // eax

  if ( *(_DWORD *)(a1 + 8) )
    v2 = *(int **)(a1 + 4);
  else
    v2 = &dword_80DDFD8;
  *(_DWORD *)(a2 + 4) = sub_80D3C50((int)v2);
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
