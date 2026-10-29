/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807FC40
// Address: 0x0807FC40

//----- (0807FC40) --------------------------------------------------------
int __cdecl sub_807FC40(_DWORD *a1, int a2)
{
  if ( a1[3] - a2 <= 3 )
    sub_807E100();
  return *(_DWORD *)(*a1 + a2);
}
