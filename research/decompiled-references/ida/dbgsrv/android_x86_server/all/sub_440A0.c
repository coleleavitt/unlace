/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_440A0
// Address: 0x000440A0

//----- (000440A0) --------------------------------------------------------
void __cdecl sub_440A0(_DWORD *ptr)
{
  void *v1; // eax

  *ptr = &off_134874;
  v1 = (void *)ptr[7];
  if ( v1 )
  {
    ptr[8] = 0;
    qfree(v1);
  }
  operator delete(ptr);
}
// 134874: using guessed type int (__cdecl *off_134874)(int);
