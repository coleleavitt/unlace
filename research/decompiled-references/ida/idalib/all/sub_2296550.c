void __fastcall sub_2296550(volatile __int64 *a1)
{
  void *v1; // rbp
  void *v2; // rdi

  v1 = (void *)_InterlockedExchange64(a1 + 1, 0);
  if ( v1 )
  {
    sub_2296550(v1);
    operator delete(v1, 0x10u);
  }
  v2 = (void *)_InterlockedExchange64(a1, 0);
  if ( v2 )
    free(v2);
}
