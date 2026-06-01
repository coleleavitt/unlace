/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_86440
// Address: 0x00086440

//----- (00086440) --------------------------------------------------------
void __cdecl sub_86440(_DWORD *ptr)
{
  void *v1; // eax
  void *v2; // eax

  *ptr = &off_1383DC;
  v1 = (void *)ptr[7];
  if ( v1 )
  {
    ptr[8] = 0;
    qfree(v1);
    ptr[7] = 0;
    ptr[9] = 0;
  }
  v2 = (void *)ptr[4];
  if ( v2 )
  {
    ptr[5] = 0;
    qfree(v2);
  }
  operator delete(ptr);
}
// 1383DC: using guessed type int (__cdecl *off_1383DC)(int, int);
