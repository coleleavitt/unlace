/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80842A0
// Address: 0x080842A0

//----- (080842A0) --------------------------------------------------------
int __cdecl sub_80842A0(int a1)
{
  int result; // eax

  result = sub_807FC10(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
  *(_DWORD *)(a1 + 60) += 2;
  return result;
}
