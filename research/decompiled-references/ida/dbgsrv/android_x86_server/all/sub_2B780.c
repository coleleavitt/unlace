/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2B780
// Address: 0x0002B780

//----- (0002B780) --------------------------------------------------------
void __cdecl sub_2B780(int a1, void **ptr)
{
  if ( ptr )
  {
    sub_2B780(a1, *ptr);
    sub_2B780(a1, ptr[1]);
    sub_25060((int)(ptr + 5));
    operator delete(ptr);
  }
}
