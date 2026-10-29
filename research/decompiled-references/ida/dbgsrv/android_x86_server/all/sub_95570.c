/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_95570
// Address: 0x00095570

//----- (00095570) --------------------------------------------------------
int __cdecl sub_95570(_DWORD *a1, int a2, unsigned __int8 a3, int a4)
{
  *a1 = a2;
  return (*(int (__cdecl **)(int, _DWORD, int))(*(_DWORD *)a2 + 64))(a2, a3, a4);
}
