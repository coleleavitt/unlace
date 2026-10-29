/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A5960
// Address: 0x080A5960

//----- (080A5960) --------------------------------------------------------
void __cdecl sub_80A5960(_DWORD *a1)
{
  void *v1; // edx

  *a1 = &off_811C1B0;
  v1 = (void *)a1[2];
  if ( v1 )
  {
    a1[3] = 0;
    sub_80CF780(v1);
  }
}
// 811C1B0: using guessed type int (__cdecl *off_811C1B0)(int);
