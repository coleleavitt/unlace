_BYTE *__fastcall std::string::erase(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  _BYTE *v3; // rbx

  v3 = &a2[-*a1];
  if ( a3 == a1[1] + *a1 )
  {
    a1[1] = v3;
    *a2 = 0;
  }
  else
  {
    std::string::_M_erase(a1, &a2[-*a1], a3 - (_QWORD)a2);
  }
  return &v3[*a1];
}

