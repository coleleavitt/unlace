_QWORD *__fastcall sub_3A9970(_QWORD *a1, char *a2, size_t a3)
{
  size_t v4; // rsi
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  char *v9; // rdi

  v4 = a1[1];
  if ( 0x7FFFFFFFFFFFFFFFLL - v4 < a3 )
    std::__throw_length_error("basic_string::append");
  v6 = (_QWORD *)*a1;
  v7 = a3 + v4;
  if ( v6 == a1 + 2 )
    v8 = 15;
  else
    v8 = a1[2];
  if ( v8 < v7 )
  {
    sub_23A830(a1, v4, 0, a2, a3);
    v6 = (_QWORD *)*a1;
  }
  else if ( a3 )
  {
    v9 = (char *)v6 + v4;
    if ( a3 == 1 )
      *v9 = *a2;
    else
      memcpy(v9, a2, a3);
    v6 = (_QWORD *)*a1;
  }
  a1[1] = v7;
  *((_BYTE *)v6 + v7) = 0;
  return a1;
}

