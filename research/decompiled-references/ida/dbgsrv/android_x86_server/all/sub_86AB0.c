/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_86AB0
// Address: 0x00086AB0

//----- (00086AB0) --------------------------------------------------------
void __cdecl sub_86AB0(int a1, void **ptr)
{
  void *v2; // eax
  void *v3; // eax

  if ( ptr )
  {
    sub_86AB0(a1, *ptr);
    sub_86AB0(a1, ptr[1]);
    v2 = ptr[7];
    if ( v2 )
    {
      ptr[8] = nullptr;
      qfree(v2);
      ptr[7] = nullptr;
      ptr[9] = nullptr;
    }
    v3 = ptr[4];
    if ( v3 )
    {
      ptr[5] = nullptr;
      qfree(v3);
    }
    operator delete(ptr);
  }
}
