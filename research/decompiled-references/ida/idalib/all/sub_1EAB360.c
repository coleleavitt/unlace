bool __fastcall sub_1EAB360(__int64 a1, unsigned __int64 a2, _DWORD *a3)
{
  bool result; // al

  result = 0;
  if ( a2 > 0x13 )
    return HIDWORD(a2) - 1 == *a3;
  return result;
}
