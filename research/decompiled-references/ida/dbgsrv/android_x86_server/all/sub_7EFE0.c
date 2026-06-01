/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EFE0
// Address: 0x0007EFE0

//----- (0007EFE0) --------------------------------------------------------
int __cdecl sub_7EFE0(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 244);
  if ( result )
    return (*(int (__cdecl **)(int, _DWORD))(*(_DWORD *)result + 80))(result, 0);
  return result;
}
