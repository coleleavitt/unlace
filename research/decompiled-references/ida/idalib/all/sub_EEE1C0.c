_WORD *__fastcall sub_EEE1C0(__int64 a1)
{
  _WORD *result; // rax

  result = *(_WORD **)(a1 + 24);
  if ( (*result & 0x1FF) != 0x8A )
    return nullptr;
  return result;
}
