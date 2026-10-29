/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85230
// Address: 0x00085230

//----- (00085230) --------------------------------------------------------
void __cdecl sub_85230(_DWORD *ptr)
{
  void *v1; // eax

  *ptr = &off_13836C;
  v1 = (void *)ptr[2];
  if ( v1 )
  {
    ptr[3] = 0;
    qfree(v1);
  }
  operator delete(ptr);
}
// 13836C: using guessed type int (__cdecl *off_13836C)(int);
