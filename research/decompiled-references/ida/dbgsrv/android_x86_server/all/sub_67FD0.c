/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67FD0
// Address: 0x00067FD0

//----- (00067FD0) --------------------------------------------------------
void __cdecl sub_67FD0(int a1, void **ptr)
{
  void *v2; // eax

  if ( ptr )
  {
    sub_67FD0(a1, *ptr);
    sub_67FD0(a1, ptr[1]);
    v2 = ptr[4];
    if ( v2 )
    {
      ptr[5] = nullptr;
      qfree(v2);
    }
    operator delete(ptr);
  }
}
