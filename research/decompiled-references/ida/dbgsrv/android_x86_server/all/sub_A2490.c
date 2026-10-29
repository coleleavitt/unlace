/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A2490
// Address: 0x000A2490

//----- (000A2490) --------------------------------------------------------
void __cdecl sub_A2490(int a1, void **ptr)
{
  if ( ptr )
  {
    sub_A2490(a1, *ptr);
    sub_A2490(a1, ptr[1]);
    operator delete(ptr);
  }
}
