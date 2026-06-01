/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BD00
// Address: 0x0001BD00

//----- (0001BD00) --------------------------------------------------------
void __cdecl sub_1BD00(int a1, void **ptr)
{
  if ( ptr )
  {
    sub_1BD00(a1, *ptr);
    sub_1BD00(a1, ptr[1]);
    operator delete(ptr);
  }
}
