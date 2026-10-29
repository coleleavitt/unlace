/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BD8A0
// Address: 0x080BD8A0

//----- (080BD8A0) --------------------------------------------------------
int __cdecl sub_80BD8A0(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 20);
  if ( result )
    *(_DWORD *)(a1 + 20) = --result;
  return result;
}
