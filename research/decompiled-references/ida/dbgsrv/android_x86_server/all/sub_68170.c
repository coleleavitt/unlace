/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68170
// Address: 0x00068170

//----- (00068170) --------------------------------------------------------
void __cdecl sub_68170(int a1, void **ptr)
{
  if ( ptr )
  {
    sub_68170(a1, (void **)*ptr);
    sub_68170(a1, (void **)ptr[1]);
    free_idcv((char *)ptr + 20);
    operator delete(ptr);
  }
}
