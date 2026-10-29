/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2CEE0
// Address: 0x0002CEE0

//----- (0002CEE0) --------------------------------------------------------
void __cdecl sub_2CEE0(int a1, void **ptr)
{
  void *v2; // eax

  if ( ptr )
  {
    sub_2CEE0(a1, *ptr);
    sub_2CEE0(a1, ptr[1]);
    v2 = ptr[5];
    if ( v2 )
    {
      ptr[6] = nullptr;
      qfree(v2);
    }
    operator delete(ptr);
  }
}
