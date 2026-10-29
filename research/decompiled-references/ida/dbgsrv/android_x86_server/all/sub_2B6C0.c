/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2B6C0
// Address: 0x0002B6C0

//----- (0002B6C0) --------------------------------------------------------
void __cdecl sub_2B6C0(int a1, void **ptr)
{
  if ( ptr )
  {
    sub_2B6C0(a1, *ptr);
    sub_2B6C0(a1, ptr[1]);
    operator delete(ptr);
  }
}
