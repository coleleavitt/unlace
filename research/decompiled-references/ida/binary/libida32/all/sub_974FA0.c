_QWORD *__fastcall sub_974FA0(_QWORD *a1, size_t a2, __int64 a3, size_t a4, char a5)
{
  __int64 v6; // rcx
  _QWORD *v8; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  size_t v13; // rcx
  size_t v14; // rdi
  _BYTE *v15; // rsi
  _BYTE *v16; // rdi
  _BYTE *v17; // rdi

  v6 = a1[1];
  if ( a4 > a3 + 0x7FFFFFFFFFFFFFFFLL - v6 )
    std::__throw_length_error("basic_string::_M_replace_aux");
  v8 = (_QWORD *)*a1;
  v11 = v6 + a4 - a3;
  if ( v8 == a1 + 2 )
    v12 = 15;
  else
    v12 = a1[2];
  if ( v12 < v11 )
  {
    sub_974DF0((__int64)a1, a2, a3, nullptr, a4);
    v8 = (_QWORD *)*a1;
    if ( !a4 )
      goto LABEL_13;
  }
  else
  {
    v13 = v6 - (a3 + a2);
    if ( !v13 || a3 == a4 )
    {
LABEL_9:
      if ( !a4 )
        goto LABEL_13;
      goto LABEL_10;
    }
    v14 = (size_t)v8 + a2;
    v15 = (_BYTE *)(v14 + a3);
    v16 = (_BYTE *)(a4 + v14);
    if ( v13 != 1 )
    {
      memmove(v16, v15, v13);
      v8 = (_QWORD *)*a1;
      goto LABEL_9;
    }
    *v16 = *v15;
    v8 = (_QWORD *)*a1;
    if ( !a4 )
      goto LABEL_13;
  }
LABEL_10:
  v17 = (char *)v8 + a2;
  if ( a4 == 1 )
    *v17 = a5;
  else
    memset(v17, a5, a4);
  v8 = (_QWORD *)*a1;
LABEL_13:
  a1[1] = v11;
  *((_BYTE *)v8 + v11) = 0;
  return a1;
}

