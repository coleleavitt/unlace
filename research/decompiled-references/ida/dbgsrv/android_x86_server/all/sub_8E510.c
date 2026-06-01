/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E510
// Address: 0x0008E510

//----- (0008E510) --------------------------------------------------------
void __cdecl sub_8E510(int a1, void **ptr)
{
  void *v2; // eax

  if ( ptr )
  {
    sub_8E510(a1, *ptr);
    sub_8E510(a1, ptr[1]);
    if ( (int)ptr[5] >= -1 )
    {
      v2 = ptr[6];
      if ( v2 )
      {
        ptr[7] = nullptr;
        qfree(v2);
      }
    }
    operator delete(ptr);
  }
}
