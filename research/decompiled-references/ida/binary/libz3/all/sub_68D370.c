char *__fastcall sub_68D370(char **a1, size_t a2, __int64 a3, char *a4, size_t a5)
{
  char *v6; // rcx
  char *v7; // rax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rdi
  char *v11; // r14
  size_t v12; // r9
  char *v13; // rsi
  char *v14; // rdi
  char *result; // rax
  size_t v16; // [rsp+8h] [rbp-30h]

  v6 = a1[1];
  if ( a3 + 0x7FFFFFFFFFFFFFFFLL - (__int64)v6 < a5 )
    std::__throw_length_error("basic_string::_M_replace");
  v7 = *a1;
  v9 = (unsigned __int64)&v6[a5 - a3];
  if ( *a1 == (char *)(a1 + 2) )
    v10 = 15;
  else
    v10 = (unsigned __int64)a1[2];
  if ( v10 < v9 )
  {
    sub_23A830(a1, a2, a3, a4, a5);
    goto LABEL_13;
  }
  v11 = &v7[a2];
  v12 = (size_t)&v6[-a3 - a2];
  if ( a4 >= v7 && &v7[(_QWORD)v6] >= a4 )
  {
    std::string::_M_replace_cold();
    goto LABEL_13;
  }
  if ( !v12 || a3 == a5 )
  {
LABEL_10:
    if ( !a5 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v13 = &v11[a3];
  v14 = &v11[a5];
  if ( v12 != 1 )
  {
    v16 = a5;
    memmove(v14, v13, v12);
    a5 = v16;
    goto LABEL_10;
  }
  *v14 = *v13;
  if ( !a5 )
    goto LABEL_13;
LABEL_11:
  if ( a5 == 1 )
    *v11 = *a4;
  else
    memcpy(v11, a4, a5);
LABEL_13:
  result = *a1;
  a1[1] = (char *)v9;
  result[v9] = 0;
  return result;
}

