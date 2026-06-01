/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A59A0
// Address: 0x080A59A0

//----- (080A59A0) --------------------------------------------------------
void __cdecl sub_80A59A0(_DWORD *a1)
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
}
// 811C1DC: using guessed type int (__cdecl *off_811C1DC)(int, int);
