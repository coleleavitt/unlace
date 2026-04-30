void __fastcall sub_3F97C0(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx

  if ( *a1 && !_InterlockedSub(*a1, 1u) )
  {
    v1 = *a1;
    if ( *a1 )
    {
      sub_3EF0C0(*((void **)v1 + 3));
      operator delete((void *)v1, 0x38u);
    }
  }
}
