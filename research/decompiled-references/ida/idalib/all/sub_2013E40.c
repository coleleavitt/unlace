char __fastcall sub_2013E40(__int64 a1, __int64 a2)
{
  char result; // al

  result = *(_BYTE *)(a2 + 16);
  if ( result )
  {
    result = *(_BYTE *)(a1 + 16);
    if ( result )
      return *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8);
  }
  return result;
}
