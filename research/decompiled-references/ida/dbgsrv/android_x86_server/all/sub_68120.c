/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68120
// Address: 0x00068120

//----- (00068120) --------------------------------------------------------
void __cdecl sub_68120(int a1, void **ptr)
{
  if ( ptr )
  {
    sub_68120(a1, *ptr);
    sub_68120(a1, ptr[1]);
    operator delete(ptr);
  }
}
