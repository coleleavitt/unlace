/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_414A0
// Address: 0x000414A0

//----- (000414A0) --------------------------------------------------------
void __cdecl sub_414A0(_DWORD *a1)
{
  void *v1; // eax

  *a1 = &off_134860;
  v1 = (void *)a1[7];
  if ( v1 )
  {
    a1[8] = 0;
    qfree(v1);
    a1[7] = 0;
    a1[9] = 0;
  }
}
// 134860: using guessed type int (__cdecl *off_134860)(int);
