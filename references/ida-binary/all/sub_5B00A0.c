void __fastcall sub_5B00A0(void **a1)
{
  volatile signed __int32 *v1; // rax
  void (__fastcall *v2)(void *); // rax

  v1 = (volatile signed __int32 *)*a1;
  if ( *a1 && !_InterlockedSub(v1 - 32, 1u) )
  {
    v2 = *((void (__fastcall **)(void *))v1 - 13);
    if ( v2 )
      v2(*a1);
    __cxa_free_exception(*a1);
    *a1 = nullptr;
  }
}
