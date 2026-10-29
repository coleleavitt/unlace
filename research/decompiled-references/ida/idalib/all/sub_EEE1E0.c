_WORD *__fastcall sub_EEE1E0(__int64 a1)
{
  _WORD *result; // rax

  result = *(_WORD **)(a1 + 24);
  if ( (*result & 0x1FF) != 0x89 )
    return nullptr;
  return result;
}
