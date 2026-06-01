/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A1070
// Address: 0x080A1070

//----- (080A1070) --------------------------------------------------------
int __cdecl sub_80A1070(int a1, int a2)
{
  int result; // eax

  result = (*(int (__cdecl **)(int, _DWORD, int))(*(_DWORD *)a1 + 108))(a1, *(_DWORD *)(a2 + 4), 1);
  if ( result > 0 )
    return sub_80A0FE0(a1, a2);
  return result;
}
