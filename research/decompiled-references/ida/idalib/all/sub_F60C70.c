_QWORD *__fastcall sub_F60C70(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // r13
  char *v4; // rax
  __int64 v5; // rdx
  char *v6; // r14
  size_t v7; // rbp
  _BYTE *v8; // rax
  unsigned __int64 v9; // rax
  size_t v10; // rsi
  __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  _BYTE *v14; // rdi

  v3 = a1 + 2;
  v4 = sub_F5ED10((char *)a2);
  if ( v4 )
  {
    v6 = v4;
    v7 = v5;
    *a1 = v3;
    if ( (unsigned __int64)v5 > 0xF )
    {
      if ( v5 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v8 = (_BYTE *)operator new(v5 + 1);
      a1[2] = v7;
      *a1 = v8;
    }
    else
    {
      if ( v5 == 1 )
      {
        *((_BYTE *)a1 + 16) = *v4;
        v8 = a1 + 2;
LABEL_5:
        a1[1] = v7;
        v8[v7] = 0;
        goto LABEL_7;
      }
      v8 = a1 + 2;
      if ( !v5 )
        goto LABEL_5;
    }
    memcpy(v8, v6, v7);
    v8 = (_BYTE *)*a1;
    goto LABEL_5;
  }
  *a1 = v3;
  a1[1] = 0;
  *((_BYTE *)a1 + 16) = 0;
LABEL_7:
  if ( *(_QWORD *)(a2 + 8) )
  {
    v9 = j__strlen("(expr)");
    v10 = a1[1];
    if ( v9 > 0x7FFFFFFFFFFFFFFFLL - v10 )
      std::__throw_length_error("basic_string::append");
    v11 = *a1;
    v12 = v9 + v10;
    if ( (_QWORD *)*a1 == v3 )
      v13 = 15;
    else
      v13 = a1[2];
    if ( v12 > v13 )
    {
      sub_998B30((__int64)a1, v10, 0, "(expr)", v9);
      v11 = *a1;
    }
    else if ( v9 )
    {
      v14 = (_BYTE *)(v10 + v11);
      if ( v9 == 1 )
        *v14 = 40;
      else
        memcpy(v14, "(expr)", v9);
      v11 = *a1;
    }
    a1[1] = v12;
    *(_BYTE *)(v11 + v12) = 0;
  }
  return a1;
}
