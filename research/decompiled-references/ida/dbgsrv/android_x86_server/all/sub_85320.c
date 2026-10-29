/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85320
// Address: 0x00085320

//----- (00085320) --------------------------------------------------------
void __cdecl sub_85320(_DWORD *ptr)
{
  void *v1; // eax
  void *v2; // eax

  *ptr = &off_138384;
  v1 = (void *)ptr[5];
  if ( v1 )
  {
    ptr[6] = 0;
    qfree(v1);
    ptr[5] = 0;
    ptr[7] = 0;
  }
  v2 = (void *)ptr[2];
  if ( v2 )
  {
    ptr[3] = 0;
    qfree(v2);
  }
  operator delete(ptr);
}
// 138384: using guessed type int (__cdecl *off_138384)(int);
