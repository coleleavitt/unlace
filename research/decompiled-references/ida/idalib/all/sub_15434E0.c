bool __fastcall sub_15434E0(__int64 a1, __int64 a2)
{
  __int16 v2; // dx
  bool result; // al

  v2 = *(_WORD *)(a2 + 16);
  result = 1;
  if ( v2 != 109 && v2 != 157 )
    return v2 == 90;
  return result;
}
