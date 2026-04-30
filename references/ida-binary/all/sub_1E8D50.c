_BYTE *__fastcall sub_1E8D50(__int64 a1)
{
  _BYTE *result; // rax

  if ( !a1 )
    return nullptr;
  result = (_BYTE *)skip_spaces(a1);
  if ( !*result )
    return nullptr;
  return result;
}
