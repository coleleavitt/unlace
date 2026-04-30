void __fastcall sub_17C8C0(void **a1)
{
  if ( *a1 )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)*a1, 1u) )
      free(*a1);
  }
}
