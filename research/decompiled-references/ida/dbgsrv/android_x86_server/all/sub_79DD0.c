/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79DD0
// Address: 0x00079DD0

//----- (00079DD0) --------------------------------------------------------
int __cdecl sub_79DD0(int a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 96);
  if ( v1 < 0 )
    return 0;
  else
    return *(_DWORD *)(a1 + 52) + 100 * v1;
}
