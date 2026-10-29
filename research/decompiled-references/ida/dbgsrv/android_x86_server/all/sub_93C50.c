/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93C50
// Address: 0x00093C50

//----- (00093C50) --------------------------------------------------------
int __cdecl sub_93C50(int a1)
{
  _DWORD *v1; // esi

  v1 = operator new(8u);
  sub_99F10(v1);
  *v1 = &off_138B48;
  v1[1] = a1;
  return sub_99FB0();
}
// 138B48: using guessed type int (__cdecl *off_138B48)(int, int);
