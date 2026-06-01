void __fastcall sub_4C7D00(void **a1)
{
  if ( *a1 )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)*a1, 1u) )
      free(*a1);
  }
}
