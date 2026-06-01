_QWORD *__fastcall std::string::resize(_QWORD *a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r9
  _QWORD *result; // rax

  v3 = a1[1];
  if ( v3 < a2 )
    return std::string::_M_replace_aux(a1, a1[1], 0, a2 - v3, a3);
  if ( v3 > a2 )
  {
    result = (_QWORD *)*a1;
    a1[1] = a2;
    *((_BYTE *)result + a2) = 0;
  }
  return result;
}

