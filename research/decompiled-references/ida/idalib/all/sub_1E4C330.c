_BYTE *__fastcall sub_1E4C330(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // rdx
  size_t v4; // rbx
  _BYTE *result; // rax

  if ( a3 && !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v3 = a3 - (_QWORD)a2;
  v4 = v3;
  if ( (unsigned __int64)v3 > 0xF )
  {
    if ( v3 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    result = (_BYTE *)operator new(v3 + 1);
    a1[2] = v4;
    *a1 = result;
  }
  else
  {
    result = (_BYTE *)*a1;
    if ( v3 == 1 )
    {
      *result = *a2;
      result = (_BYTE *)*a1;
      a1[1] = 1;
      result[1] = 0;
      return result;
    }
    if ( !v3 )
    {
      a1[1] = 0;
      *result = 0;
      return result;
    }
  }
  memcpy(result, a2, v4);
  result = (_BYTE *)*a1;
  a1[1] = v4;
  result[v4] = 0;
  return result;
}
