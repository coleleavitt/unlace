/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A24E0
// Address: 0x000A24E0

//----- (000A24E0) --------------------------------------------------------
void __cdecl sub_A24E0(int a1, void **ptr)
{
  if ( ptr )
  {
    sub_A24E0(a1, *ptr);
    sub_A24E0(a1, ptr[1]);
    operator delete(ptr);
  }
}
