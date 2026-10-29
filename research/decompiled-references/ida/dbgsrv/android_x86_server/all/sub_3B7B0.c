/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B7B0
// Address: 0x0003B7B0

//----- (0003B7B0) --------------------------------------------------------
void __cdecl sub_3B7B0(_DWORD *a1)
{
  void *v1; // eax

  *a1 = &off_134874;
  v1 = (void *)a1[7];
  if ( v1 )
  {
    a1[8] = 0;
    qfree(v1);
    a1[7] = 0;
    a1[9] = 0;
  }
}
// 134874: using guessed type int (__cdecl *off_134874)(int);
