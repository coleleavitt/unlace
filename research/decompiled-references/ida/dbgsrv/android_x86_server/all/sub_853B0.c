/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_853B0
// Address: 0x000853B0

//----- (000853B0) --------------------------------------------------------
void __cdecl sub_853B0(_DWORD *ptr)
{
  void *v1; // eax

  *ptr = &off_13839C;
  v1 = (void *)ptr[1];
  if ( v1 )
  {
    ptr[2] = 0;
    qfree(v1);
  }
  operator delete(ptr);
}
// 13839C: using guessed type int (__cdecl *off_13839C)(int, int, int off);
