/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80842D0
// Address: 0x080842D0

//----- (080842D0) --------------------------------------------------------
int __cdecl sub_80842D0(int a1)
{
  int result; // eax

  result = sub_807FC40(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
  *(_DWORD *)(a1 + 60) += 4;
  return result;
}
