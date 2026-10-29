/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BC210
// Address: 0x080BC210

//----- (080BC210) --------------------------------------------------------
int __cdecl sub_80BC210(_DWORD *a1, int a2, unsigned __int8 a3, int a4)
{
  *a1 = a2;
  return (*(int (__cdecl **)(int, _DWORD, int))(*(_DWORD *)a2 + 64))(a2, a3, a4);
}
