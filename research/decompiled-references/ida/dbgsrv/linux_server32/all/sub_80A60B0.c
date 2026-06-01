/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A60B0
// Address: 0x080A60B0

//----- (080A60B0) --------------------------------------------------------
void __cdecl sub_80A60B0(_DWORD *a1)
{
  void *v1; // eax
  void *v2; // eax

  *a1 = &off_811C1DC;
  v1 = (void *)a1[7];
  if ( v1 )
  {
    a1[8] = 0;
    sub_80CF780(v1);
  }
  v2 = (void *)a1[4];
  if ( v2 )
  {
    a1[5] = 0;
    sub_80CF780(v2);
  }
  operator delete(a1, 0x28u);
}
// 811C1DC: using guessed type int (__cdecl *off_811C1DC)(int, int);
