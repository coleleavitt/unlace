/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96E30
// Address: 0x00096E30

//----- (00096E30) --------------------------------------------------------
int __cdecl sub_96E30(int a1, int a2)
{
  int result; // eax

  result = a1;
  if ( *(_DWORD *)(a1 + 20) )
  {
    result = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(result + 4) += a2;
  }
  return result;
}
