/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A4990
// Address: 0x080A4990

//----- (080A4990) --------------------------------------------------------
void __cdecl sub_80A4990(_DWORD *a1)
{
  void *v1; // eax

  *a1 = &off_811C11C;
  v1 = (void *)a1[15];
  if ( v1 )
  {
    a1[16] = 0;
    sub_80CF780(v1);
  }
  sub_80BAE70(a1);
}
// 811C11C: using guessed type int (__cdecl *off_811C11C)(int);
