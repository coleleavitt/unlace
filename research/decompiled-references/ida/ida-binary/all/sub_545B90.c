void __fastcall sub_545B90(__int64 a1, void **a2)
{
  if ( *a2 )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)*a2, 1u) )
      free(*a2);
  }
}
