_BYTE *__fastcall sub_A20E20(__int64 a1, __int64 a2)
{
  _BYTE *result; // rax

  result = sub_A20D90(a1, a2);
  *(_BYTE *)(a1 + 104) = 0;
  if ( !*(_BYTE *)(a2 + 104) )
  {
    *(_BYTE *)(a1 + 144) = 0;
    if ( !*(_BYTE *)(a2 + 144) )
      return result;
    return sub_A1ED90(a1 + 112, a2 + 112);
  }
  result = sub_A1ED90(a1 + 72, a2 + 72);
  *(_BYTE *)(a1 + 144) = 0;
  if ( *(_BYTE *)(a2 + 144) )
    return sub_A1ED90(a1 + 112, a2 + 112);
  return result;
}
