/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2B830
// Address: 0x0002B830

//----- (0002B830) --------------------------------------------------------
void __cdecl sub_2B830(int a1, void **ptr)
{
  void *v2; // eax

  if ( ptr )
  {
    sub_2B830(a1, *ptr);
    sub_2B830(a1, ptr[1]);
    v2 = ptr[4];
    if ( v2 )
    {
      ptr[5] = nullptr;
      qfree(v2);
    }
    operator delete(ptr);
  }
}
