void *__fastcall std::string::_S_copy_chars(_BYTE *a1, unsigned __int8 *a2, __int64 a3)
{
  size_t v3; // rdx
  void *result; // rax

  v3 = a3 - (_QWORD)a2;
  if ( v3 == 1 )
  {
    result = (void *)*a2;
    *a1 = (_BYTE)result;
  }
  else if ( v3 )
  {
    return memcpy(a1, a2, v3);
  }
  return result;
}

