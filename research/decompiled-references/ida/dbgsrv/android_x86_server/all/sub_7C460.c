/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C460
// Address: 0x0007C460

//----- (0007C460) --------------------------------------------------------
void __cdecl sub_7C460(_DWORD *a1)
{
  void *v1; // eax
  void *v2; // eax

  *a1 = &off_138B5C;
  v1 = (void *)a1[10];
  if ( v1 )
  {
    a1[11] = 0;
    qfree(v1);
    a1[10] = 0;
    a1[12] = 0;
  }
  v2 = (void *)a1[2];
  if ( v2 )
  {
    a1[3] = 0;
    qfree(v2);
    a1[2] = 0;
    a1[4] = 0;
  }
}
// 138B5C: using guessed type int (__cdecl *off_138B5C)(int);
