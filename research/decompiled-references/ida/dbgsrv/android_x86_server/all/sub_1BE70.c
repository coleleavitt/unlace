/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BE70
// Address: 0x0001BE70

//----- (0001BE70) --------------------------------------------------------
void __cdecl sub_1BE70(int a1, void **ptr)
{
  void *v2; // eax
  void *v3; // eax

  if ( ptr )
  {
    sub_1BE70(a1, *ptr);
    sub_1BE70(a1, ptr[1]);
    v2 = ptr[10];
    if ( v2 )
    {
      ptr[11] = nullptr;
      qfree(v2);
      ptr[10] = nullptr;
      ptr[12] = nullptr;
    }
    v3 = ptr[6];
    if ( v3 )
    {
      ptr[7] = nullptr;
      qfree(v3);
    }
    operator delete(ptr);
  }
}
