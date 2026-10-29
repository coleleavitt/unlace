/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_690A0
// Address: 0x000690A0

//----- (000690A0) --------------------------------------------------------
int __cdecl sub_690A0(int a1, int a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 276);
  *(_DWORD *)(a1 + 276) = a2;
  return result;
}
