/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C2800
// Address: 0x080C2800

//----- (080C2800) --------------------------------------------------------
void __cdecl sub_80C2800(int *a1)
{
  void *v1; // eax

  a1[8] = 0;
  a1[11] = 0;
  *a1 = (int)&off_811C810;
  sub_80C2700(a1, -1);
  v1 = (void *)a1[5];
  if ( v1 )
  {
    a1[6] = 0;
    sub_80CF780(v1);
  }
  operator delete(a1, 0x38u);
}
// 811C810: using guessed type int (__cdecl *off_811C810)(int);
