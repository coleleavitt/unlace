_QWORD *__fastcall std::string::_M_replace_aux(_QWORD *a1, __int64 a2, __int64 a3, size_t a4, char a5)
{
  __int64 v6; // rax
  _QWORD *v8; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbp
  size_t v13; // rax
  char *v14; // rdi
  char *v15; // rsi
  char *v16; // rdi
  _BYTE *v17; // rdi

  v6 = a1[1];
  if ( a4 > a3 + 0x7FFFFFFFFFFFFFFFLL - v6 )
    std::__throw_length_error("basic_string::_M_replace_aux");
  v8 = (_QWORD *)*a1;
  v11 = 15;
  v12 = v6 + a4 - a3;
  if ( v8 != a1 + 2 )
    v11 = a1[2];
  if ( v11 < v12 )
  {
    std::string::_M_mutate();
    v8 = (_QWORD *)*a1;
  }
  else
  {
    v13 = v6 - a2 - a3;
    if ( v13 && a3 != a4 )
    {
      v14 = (char *)v8 + a2;
      v15 = &v14[a3];
      v16 = &v14[a4];
      if ( v13 == 1 )
        *v16 = *v15;
      else
        memmove(v16, v15, v13);
      v8 = (_QWORD *)*a1;
    }
  }
  if ( a4 )
  {
    v17 = (char *)v8 + a2;
    if ( a4 == 1 )
      *v17 = a5;
    else
      memset(v17, a5, a4);
    v8 = (_QWORD *)*a1;
  }
  a1[1] = v12;
  *((_BYTE *)v8 + v12) = 0;
  return a1;
}

