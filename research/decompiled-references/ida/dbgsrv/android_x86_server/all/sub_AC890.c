/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AC890
// Address: 0x000AC890

//----- (000AC890) --------------------------------------------------------
void __cdecl sub_AC890(_DWORD *ptr)
{
  void *v1; // eax

  *ptr = &off_139338;
  v1 = (void *)ptr[4];
  if ( v1 )
  {
    ptr[5] = 0;
    qfree(v1);
  }
  operator delete(ptr);
}
// 139338: using guessed type int (__cdecl *off_139338)(int, int, int, void *dest, int);
