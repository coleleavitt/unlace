char __fastcall sub_1E4C1A0(_BYTE *a1, __int64 a2)
{
  char result; // al

  if ( !a2 )
    return sub_BC7960(a1, a2);
  result = sub_B8BED0(a2);
  if ( !result )
    return sub_BC7960(a1, a2);
  return result;
}
