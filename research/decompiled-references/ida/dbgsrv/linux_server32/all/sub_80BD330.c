/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BD330
// Address: 0x080BD330

//----- (080BD330) --------------------------------------------------------
void __cdecl sub_80BD330(_DWORD *a1)
{
  void *v1; // eax
  void *v2; // eax

  *a1 = &off_811C6CC;
  v1 = (void *)a1[8];
  if ( v1 )
  {
    a1[9] = 0;
    sub_80CF780(v1);
  }
  v2 = (void *)a1[4];
  if ( v2 )
  {
    a1[5] = 0;
    sub_80CF780(v2);
  }
}
// 811C6CC: using guessed type int (__cdecl *off_811C6CC)(int);
