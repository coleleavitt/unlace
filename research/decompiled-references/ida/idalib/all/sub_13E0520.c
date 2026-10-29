bool __fastcall sub_13E0520(__int64 a1, char *a2)
{
  __int16 v2; // dx
  bool result; // al

  v2 = *(_WORD *)(a1 + 16);
  result = (unsigned __int16)(v2 - 17) <= 2u || (unsigned __int16)(v2 - 14) <= 1u;
  if ( !result && *a2 < 0 )
  {
    result = v2 == 214 || v2 == 209;
    if ( !result )
      return v2 == 215 || (unsigned __int16)(v2 - 212) <= 1u;
  }
  return result;
}
