/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D30
// Address: 0x00043D30

//----- (00043D30) --------------------------------------------------------
void __cdecl sub_43D30(int a1, void **ptr)
{
  if ( ptr )
  {
    sub_43D30(a1, *ptr);
    sub_43D30(a1, ptr[1]);
    operator delete(ptr);
  }
}
