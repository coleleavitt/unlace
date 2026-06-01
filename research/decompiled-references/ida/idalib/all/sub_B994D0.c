bool __fastcall sub_B994D0(__int64 a1, __int64 a2)
{
  if ( !a2 )
  {
    a2 = *(_QWORD *)(a1 + 168);
    if ( !a2 )
      return 1;
  }
  if ( sub_B74C20(a2) )
    return sub_AED5B0(a1);
  return 1;
}
