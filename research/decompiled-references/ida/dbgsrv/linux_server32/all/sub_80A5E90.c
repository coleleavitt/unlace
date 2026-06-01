/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A5E90
// Address: 0x080A5E90

//----- (080A5E90) --------------------------------------------------------
void __cdecl sub_80A5E90(_DWORD *a1)
{
  void *v1; // eax

  *a1 = &off_811C184;
  v1 = (void *)a1[1];
  if ( v1 )
  {
    a1[2] = 0;
    sub_80CF780(v1);
  }
  operator delete(a1, 0x244u);
}
// 811C184: using guessed type int (__cdecl *off_811C184)(int, int, int);
