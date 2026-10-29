/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96AF0
// Address: 0x00096AF0

//----- (00096AF0) --------------------------------------------------------
void __cdecl sub_96AF0(int a1, void **ptr)
{
  if ( ptr )
  {
    sub_96AF0(a1, *ptr);
    sub_96AF0(a1, ptr[1]);
    operator delete(ptr);
  }
}
