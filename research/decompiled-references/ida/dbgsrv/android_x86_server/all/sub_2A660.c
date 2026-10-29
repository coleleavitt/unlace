/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2A660
// Address: 0x0002A660

//----- (0002A660) --------------------------------------------------------
int __cdecl sub_2A660(int a1, int a2)
{
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(a2 + 8) = 0;
  return a2;
}
