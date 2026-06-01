/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A5840
// Address: 0x080A5840

//----- (080A5840) --------------------------------------------------------
int __cdecl sub_80A5840(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 244);
  if ( result )
    return (*(int (__cdecl **)(int, _DWORD))(*(_DWORD *)result + 80))(result, 0);
  return result;
}
