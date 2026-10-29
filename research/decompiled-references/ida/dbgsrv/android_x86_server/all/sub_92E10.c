/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92E10
// Address: 0x00092E10

//----- (00092E10) --------------------------------------------------------
void __cdecl sub_92E10(_DWORD *a1)
{
  void *v1; // eax

  *a1 = &off_138A64;
  sub_94D80(a1 + 17, -1);
  v1 = (void *)a1[18];
  if ( v1 )
  {
    a1[19] = 0;
    qfree(v1);
    a1[18] = 0;
    a1[20] = 0;
  }
}
// 138A64: using guessed type int (__cdecl *off_138A64)(int);
