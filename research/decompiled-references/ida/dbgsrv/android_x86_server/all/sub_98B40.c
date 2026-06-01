/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98B40
// Address: 0x00098B40

//----- (00098B40) --------------------------------------------------------
void __cdecl sub_98B40(_DWORD *ptr)
{
  void *v1; // eax
  void *v2; // eax

  *ptr = &off_138B80;
  v1 = (void *)ptr[8];
  if ( v1 )
  {
    ptr[9] = 0;
    qfree(v1);
    ptr[8] = 0;
    ptr[10] = 0;
  }
  v2 = (void *)ptr[4];
  if ( v2 )
  {
    ptr[5] = 0;
    qfree(v2);
  }
  operator delete(ptr);
}
// 138B80: using guessed type int (__cdecl *off_138B80)(int);
