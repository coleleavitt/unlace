/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79DF0
// Address: 0x00079DF0

//----- (00079DF0) --------------------------------------------------------
int __cdecl sub_79DF0(int a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 100);
  if ( v1 < 0 )
    return 0;
  else
    return *(_DWORD *)(a1 + 52) + 100 * v1;
}
