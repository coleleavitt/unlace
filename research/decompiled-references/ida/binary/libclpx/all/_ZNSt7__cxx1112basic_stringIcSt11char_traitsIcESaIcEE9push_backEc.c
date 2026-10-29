_QWORD *__fastcall std::string::push_back(_QWORD *a1, char a2)
{
  unsigned __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // rbp
  unsigned __int64 v5; // r12
  _QWORD *result; // rax

  v2 = 15;
  v3 = (_QWORD *)*a1;
  v4 = a1[1];
  v5 = v4 + 1;
  if ( (_QWORD *)*a1 != a1 + 2 )
    v2 = a1[2];
  if ( v5 > v2 )
  {
    std::string::_M_mutate();
    v3 = (_QWORD *)*a1;
  }
  *((_BYTE *)v3 + v4) = a2;
  result = (_QWORD *)*a1;
  a1[1] = v5;
  *((_BYTE *)result + v4 + 1) = 0;
  return result;
}

