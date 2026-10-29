/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BFE60
// Address: 0x000BFE60

//----- (000BFE60) --------------------------------------------------------
int __cdecl sub_BFE60(int a1, int a2, int a3, int a4)
{
  int result; // eax

  result = a2;
  if ( *(_DWORD *)(a2 + 4) == a3 && *(_DWORD *)(a2 + 28) != 1 )
    *(_DWORD *)(a2 + 28) = a4;
  return result;
}
