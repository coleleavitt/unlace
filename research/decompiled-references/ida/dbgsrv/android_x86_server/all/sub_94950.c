/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_94950
// Address: 0x00094950

//----- (00094950) --------------------------------------------------------
void __cdecl sub_94950(int a1, void **ptr)
{
  if ( ptr )
  {
    sub_94950(a1, *ptr);
    sub_94950(a1, ptr[1]);
    operator delete(ptr);
  }
}
