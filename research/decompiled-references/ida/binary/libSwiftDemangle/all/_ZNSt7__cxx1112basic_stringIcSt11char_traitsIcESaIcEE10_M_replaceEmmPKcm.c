_QWORD *__fastcall std::string::_M_replace(_QWORD *a1, size_t a2, unsigned __int64 a3, _BYTE *a4, size_t a5)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  size_t v10; // r15
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  _BYTE *v14; // r9
  unsigned __int64 v15; // rsi
  size_t v16; // r10
  bool v17; // bp
  _BYTE *v18; // rsi
  _BYTE *v19; // rdi
  size_t v21; // rdx
  _BYTE *v22; // rsi
  _BYTE *v23; // rdi
  _BYTE *v24; // rsi
  _BYTE *v25; // rdi
  _BYTE *v26; // r13
  _BYTE *v27; // rsi
  _BYTE *v28; // rax
  size_t v29; // r13
  _BYTE *v30; // rax
  _BYTE *v31; // [rsp+0h] [rbp-48h]
  _BYTE *v32; // [rsp+0h] [rbp-48h]
  size_t v33; // [rsp+0h] [rbp-48h]
  size_t v34; // [rsp+0h] [rbp-48h]
  size_t v35; // [rsp+8h] [rbp-40h]
  size_t v36; // [rsp+8h] [rbp-40h]
  size_t v37; // [rsp+8h] [rbp-40h]

  v6 = a3 + 0x3FFFFFFFFFFFFFFFLL;
  v7 = a1[1];
  if ( a5 > v6 - v7 )
    std::__throw_length_error("basic_string::_M_replace");
  v8 = (_QWORD *)*a1;
  v10 = a5 - a3;
  v12 = v7 + a5 - a3;
  if ( (_QWORD *)*a1 == a1 + 2 )
    v13 = 15;
  else
    v13 = a1[2];
  if ( v13 < v12 )
  {
    std::string::_M_mutate((__int64)a1, a2, a3, a4, a5);
    goto LABEL_10;
  }
  v14 = (char *)v8 + a2;
  v15 = a3 + a2;
  v16 = v7 - v15;
  v17 = v7 != v15 && a3 != a5;
  if ( v8 > (_QWORD *)a4 || a4 > (_BYTE *)v8 + v7 )
  {
    if ( v17 )
    {
      v18 = &v14[a3];
      v19 = &v14[a5];
      if ( v16 == 1 )
      {
        *v19 = *v18;
      }
      else
      {
        v35 = a5;
        v31 = v14;
        memmove(v19, v18, v16);
        a5 = v35;
        v14 = v31;
      }
    }
    if ( !a5 )
      goto LABEL_10;
    if ( a5 != 1 )
    {
      v21 = a5;
      v22 = a4;
      v23 = v14;
LABEL_20:
      memcpy(v23, v22, v21);
      goto LABEL_10;
    }
LABEL_22:
    *v14 = *a4;
    v8 = (_QWORD *)*a1;
    goto LABEL_11;
  }
  if ( a3 <= a5 - 1 )
  {
LABEL_26:
    if ( !v17 )
      goto LABEL_29;
    goto LABEL_27;
  }
  if ( a5 == 1 )
  {
    *v14 = *a4;
    goto LABEL_26;
  }
  if ( a5 )
  {
    v37 = v7 - v15;
    v33 = a5;
    v28 = memmove(v14, a4, a5);
    v16 = v37;
    a5 = v33;
    v14 = v28;
    goto LABEL_26;
  }
  if ( !v17 )
    goto LABEL_11;
LABEL_27:
  v24 = &v14[a3];
  v25 = &v14[a5];
  if ( v16 == 1 )
  {
    *v25 = *v24;
  }
  else
  {
    v36 = a5;
    v32 = v14;
    memmove(v25, v24, v16);
    a5 = v36;
    v14 = v32;
  }
LABEL_29:
  if ( a3 >= a5 )
    goto LABEL_10;
  v26 = &v14[a3];
  if ( v26 >= &a4[a5] )
  {
    if ( a5 != 1 )
    {
      if ( a5 )
      {
        memmove(v14, a4, a5);
        v8 = (_QWORD *)*a1;
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    goto LABEL_22;
  }
  if ( v26 <= a4 )
  {
    v27 = &a4[v10];
    if ( a5 == 1 )
    {
      *v14 = *v27;
      v8 = (_QWORD *)*a1;
      goto LABEL_11;
    }
    if ( a5 )
    {
      memcpy(v14, v27, a5);
      v8 = (_QWORD *)*a1;
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v29 = v26 - a4;
  if ( v29 == 1 )
  {
    *v14 = *a4;
  }
  else if ( v29 )
  {
    v34 = a5;
    v30 = memmove(v14, a4, v29);
    a5 = v34;
    v14 = v30;
  }
  v22 = &v14[a5];
  v23 = &v14[v29];
  v21 = a5 - v29;
  if ( a5 - v29 == 1 )
  {
    *v23 = *v22;
    v8 = (_QWORD *)*a1;
    goto LABEL_11;
  }
  if ( v21 )
    goto LABEL_20;
LABEL_10:
  v8 = (_QWORD *)*a1;
LABEL_11:
  a1[1] = v12;
  *((_BYTE *)v8 + v12) = 0;
  return a1;
}

