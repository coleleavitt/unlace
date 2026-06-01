/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96E10
// Address: 0x00096E10

//----- (00096E10) --------------------------------------------------------
int __cdecl sub_96E10(int a1)
{
  int result; // eax
  int v2; // ecx

  result = a1;
  v2 = *(_DWORD *)(a1 + 20);
  if ( v2 )
    *(_DWORD *)(a1 + 20) = v2 - 1;
  return result;
}
