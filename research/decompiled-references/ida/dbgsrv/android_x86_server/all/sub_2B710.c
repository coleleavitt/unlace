/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2B710
// Address: 0x0002B710

//----- (0002B710) --------------------------------------------------------
void __cdecl sub_2B710(int a1, void **ptr)
{
  void *v2; // eax

  if ( ptr )
  {
    sub_2B710(a1, *ptr);
    sub_2B710(a1, ptr[1]);
    v2 = ptr[13];
    if ( v2 )
    {
      ptr[14] = nullptr;
      qfree(v2);
    }
    operator delete(ptr);
  }
}
