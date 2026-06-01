void *__fastcall std::string::_S_copy(_BYTE *a1, unsigned __int8 *a2, size_t a3)
{
  void *result; // rax

  if ( a3 == 1 )
  {
    result = (void *)*a2;
    *a1 = (_BYTE)result;
  }
  else if ( a3 )
  {
    return memcpy(a1, a2, a3);
  }
  return result;
}
