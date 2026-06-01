/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C02C0
// Address: 0x080C02C0

//----- (080C02C0) --------------------------------------------------------
int __cdecl sub_80C02C0(int a1)
{
  int v1; // eax

  v1 = (*(int (__cdecl **)(int, int))(*(_DWORD *)dword_811E820 + 92))(dword_811E820, a1);
  sub_80BC010((int *)(v1 + 16), -1);
  return 1;
}
// 811E820: using guessed type int dword_811E820;
