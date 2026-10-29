/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A5A00
// Address: 0x080A5A00

//----- (080A5A00) --------------------------------------------------------
void __cdecl sub_80A5A00(_DWORD *a1)
{
  void *v1; // edx

  *a1 = &off_811C184;
  v1 = (void *)a1[1];
  if ( v1 )
  {
    a1[2] = 0;
    sub_80CF780(v1);
  }
}
// 811C184: using guessed type int (__cdecl *off_811C184)(int, int, int);
