/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BD50
// Address: 0x0001BD50

//----- (0001BD50) --------------------------------------------------------
void __cdecl sub_1BD50(int a1, void **ptr)
{
  if ( ptr )
  {
    sub_1BD50(a1, *ptr);
    sub_1BD50(a1, ptr[1]);
    operator delete(ptr);
  }
}
