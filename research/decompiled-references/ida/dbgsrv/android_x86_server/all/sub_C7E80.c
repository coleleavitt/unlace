/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C7E80
// Address: 0x000C7E80

//----- (000C7E80) --------------------------------------------------------
int __cdecl sub_C7E80(int a1, int a2)
{
  int result; // eax

  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 1;
    result = (*(int (__cdecl **)(_DWORD, int))(**(_DWORD **)(a1 + 12) + 12))(*(_DWORD *)(a1 + 12), a2);
    *(_BYTE *)(a1 + 16) = 0;
  }
  return result;
}
