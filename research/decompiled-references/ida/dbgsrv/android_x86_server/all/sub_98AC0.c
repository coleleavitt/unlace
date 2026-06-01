/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98AC0
// Address: 0x00098AC0

//----- (00098AC0) --------------------------------------------------------
void __cdecl sub_98AC0(_DWORD *a1)
{
  void *v1; // eax
  void *v2; // eax

  *a1 = &off_138B80;
  v1 = (void *)a1[8];
  if ( v1 )
  {
    a1[9] = 0;
    qfree(v1);
    a1[8] = 0;
    a1[10] = 0;
  }
  v2 = (void *)a1[4];
  if ( v2 )
  {
    a1[5] = 0;
    qfree(v2);
    a1[4] = 0;
    a1[6] = 0;
  }
}
// 138B80: using guessed type int (__cdecl *off_138B80)(int);
