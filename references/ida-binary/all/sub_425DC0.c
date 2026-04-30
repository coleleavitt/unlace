bool __fastcall sub_425DC0(_QWORD *a1)
{
  bool result; // al

  result = 0;
  if ( a1[1] )
  {
    if ( *(_BYTE *)*a1 == 47 )
      return *(_BYTE *)(*a1 + 1LL) == 47;
  }
  return result;
}
