/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43790
// Address: 0x00043790

//----- (00043790) --------------------------------------------------------
void __cdecl sub_43790(_DWORD *ptr)
{
  void *v1; // eax

  *ptr = &off_134860;
  v1 = (void *)ptr[7];
  if ( v1 )
  {
    ptr[8] = 0;
    qfree(v1);
  }
  operator delete(ptr);
}
// 134860: using guessed type int (__cdecl *off_134860)(int);
