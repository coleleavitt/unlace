void *__fastcall std::string::_S_assign(_BYTE *a1, size_t a2, char a3)
{
  void *result; // rax

  if ( a2 == 1 )
  {
    *a1 = a3;
  }
  else if ( a2 )
  {
    return memset(a1, a3, a2);
  }
  return result;
}
