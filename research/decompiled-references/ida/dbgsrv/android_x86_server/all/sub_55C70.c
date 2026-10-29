/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55C70
// Address: 0x00055C70

//----- (00055C70) --------------------------------------------------------
void __cdecl sub_55C70(int a1, void **ptr)
{
  void *v2; // eax

  if ( ptr )
  {
    sub_55C70(a1, (void **)*ptr);
    sub_55C70(a1, (void **)ptr[1]);
    free_idcv((char *)ptr + 28);
    v2 = ptr[4];
    if ( v2 )
    {
      ptr[5] = nullptr;
      qfree(v2);
    }
    operator delete(ptr);
  }
}
