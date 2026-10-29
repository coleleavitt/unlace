/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C40
// Address: 0x00042C40

//----- (00042C40) --------------------------------------------------------
void __cdecl sub_42C40(int a1, void **ptr)
{
  if ( ptr )
  {
    sub_42C40(a1, *ptr);
    sub_42C40(a1, ptr[1]);
    operator delete(ptr);
  }
}
