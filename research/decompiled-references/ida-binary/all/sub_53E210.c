__int64 __fastcall sub_53E210(__int64 a1, int a2)
{
  if ( a2 == 1 )
    return sub_53DC50(a1, "Default:Search");
  if ( a2 == 2 )
    return sub_53DC50(a1, "Default:Jump");
  if ( a2 )
    return 0;
  return sub_53DC50(a1, "Default:Edit");
}
