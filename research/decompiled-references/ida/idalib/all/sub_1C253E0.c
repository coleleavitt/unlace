bool __fastcall sub_1C253E0(__int64 a1, _BYTE *a2, __int64 a3)
{
  bool result; // al

  result = 0;
  if ( a3 )
  {
    if ( *a2 == 43 )
      return (unsigned __int64)sub_22A9800(a2 + 1, a3 - 1) >> 32 != -1;
  }
  return result;
}
