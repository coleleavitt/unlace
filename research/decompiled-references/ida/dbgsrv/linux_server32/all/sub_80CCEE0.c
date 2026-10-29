/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CCEE0
// Address: 0x080CCEE0

//----- (080CCEE0) --------------------------------------------------------
void __cdecl sub_80CCEE0(_DWORD *a1)
{
  int v1; // ecx

  v1 = a1[16];
  *a1 = &off_811C8D8;
  if ( v1 )
    sub_80D69C0(a1 + 9);
  sub_80CD8D0((int)a1);
  operator delete(a1, 0x8060u);
}
// 811C8D8: using guessed type int (__cdecl *off_811C8D8)(int, int, int, int, int);
