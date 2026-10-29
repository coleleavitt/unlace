bool __fastcall sub_113D7A0(_DWORD *a1)
{
  bool result; // al

  result = (unsigned int)(a1[8] - 35) > 1 && (unsigned int)(a1[8] - 1) > 1;
  if ( result )
    return 0;
  if ( !a1[10] && !a1[11] )
    return (unsigned int)(a1[12] - 15) <= 1;
  return result;
}
