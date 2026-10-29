bool __fastcall sub_F5E2E0(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( (((*(_WORD *)(a1 + 18) >> 3) + 8135) & 0x1FFFu) <= 0x21 )
    return ((1LL << ((unsigned __int8)(*(_WORD *)(a1 + 18) >> 3) - 57)) & 0x2ECFF3393LL) != 0;
  return result;
}
