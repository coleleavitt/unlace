_QWORD *__fastcall std::string::_M_append(_QWORD *a1, _BYTE *a2, size_t a3)
{
  _QWORD *v4; // r8
  unsigned __int64 v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rbp
  _BYTE *v9; // rdi

  v4 = a1 + 2;
  v5 = 15;
  v6 = a1[1];
  v7 = (_QWORD *)*a1;
  v8 = v6 + a3;
  if ( v7 != v4 )
    v5 = a1[2];
  if ( v8 > v5 )
  {
    std::string::_M_mutate();
    v7 = (_QWORD *)*a1;
  }
  else if ( a3 )
  {
    v9 = (char *)v7 + v6;
    if ( a3 == 1 )
      *v9 = *a2;
    else
      memcpy(v9, a2, a3);
    v7 = (_QWORD *)*a1;
  }
  a1[1] = v8;
  *((_BYTE *)v7 + v8) = 0;
  return a1;
}

