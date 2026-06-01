_QWORD *__fastcall sub_9EE7C0(_QWORD *a1, char *a2)
{
  unsigned __int64 v4; // rax
  size_t v5; // rsi
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  char *v9; // rdi
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi

  v4 = strlen(a2);
  v5 = a1[1];
  if ( 0x7FFFFFFFFFFFFFFFLL - v5 < v4 )
    std::__throw_length_error("basic_string::append");
  v6 = (_QWORD *)*a1;
  v7 = v5 + v4;
  if ( (_QWORD *)*a1 == a1 + 2 )
    v8 = 15;
  else
    v8 = a1[2];
  if ( v7 > v8 )
  {
    sub_998B30((__int64)a1, v5, 0, a2, v4);
    v11 = (_QWORD *)*a1;
    a1[1] = v7;
    *((_BYTE *)v11 + v7) = 0;
    return a1;
  }
  else
  {
    if ( !v4 )
    {
LABEL_8:
      a1[1] = v7;
      *((_BYTE *)v6 + v7) = 0;
      return a1;
    }
    v9 = (char *)v6 + v5;
    if ( v4 != 1 )
    {
      memcpy(v9, a2, v4);
      v6 = (_QWORD *)*a1;
      goto LABEL_8;
    }
    *v9 = *a2;
    v12 = (_QWORD *)*a1;
    a1[1] = v7;
    *((_BYTE *)v12 + v7) = 0;
    return a1;
  }
}
