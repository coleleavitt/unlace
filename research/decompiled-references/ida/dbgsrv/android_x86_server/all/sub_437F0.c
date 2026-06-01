/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437F0
// Address: 0x000437F0

//----- (000437F0) --------------------------------------------------------
void __cdecl sub_437F0(int a1, void *ptr)
{
  if ( ptr )
  {
    sub_437F0(a1, *(void **)ptr);
    sub_437F0(a1, *((void **)ptr + 1));
    sub_42C40((int)ptr + 20, *((void ***)ptr + 6));
    operator delete(ptr);
  }
}
