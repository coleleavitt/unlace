void __fastcall sub_53D850(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx

  if ( *a1 && !_InterlockedSub(*a1, 1u) )
  {
    v1 = *a1;
    if ( *a1 )
    {
      sub_53BE30(*((void **)v1 + 3));
      operator delete((void *)v1, 0x38u);
    }
  }
}
