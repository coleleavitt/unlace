_QWORD *__fastcall sub_99BDC0(_QWORD *a1, size_t a2, unsigned __int64 a3, _BYTE *a4, size_t a5)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  size_t v10; // r14
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rdi
  _BYTE *v13; // r15
  unsigned __int64 v14; // rsi
  size_t v15; // r9
  bool v16; // r13
  _BYTE *v17; // rsi
  _BYTE *v18; // rdi
  _QWORD *v19; // rax
  _BYTE *v21; // rsi
  _BYTE *v22; // rdi
  _BYTE *v23; // rbp
  _BYTE *v24; // rsi
  size_t v25; // rbp
  _BYTE *v26; // rsi
  _BYTE *v27; // rdi
  size_t v28; // rdx
  _BYTE *src; // [rsp+8h] [rbp-50h]
  _BYTE *srca; // [rsp+8h] [rbp-50h]
  _BYTE *srcb; // [rsp+8h] [rbp-50h]
  void *srcc; // [rsp+8h] [rbp-50h]
  size_t v33; // [rsp+10h] [rbp-48h]
  size_t v34; // [rsp+10h] [rbp-48h]
  size_t v35; // [rsp+10h] [rbp-48h]
  size_t n; // [rsp+18h] [rbp-40h]

  v6 = a3 + 0x7FFFFFFFFFFFFFFFLL;
  v7 = a1[1];
  if ( a5 > v6 - v7 )
    std::__throw_length_error("basic_string::_M_replace");
  v8 = (_QWORD *)*a1;
  v10 = a5 - a3;
  v11 = v7 + a5 - a3;
  if ( (_QWORD *)*a1 == a1 + 2 )
    v12 = 15;
  else
    v12 = a1[2];
  if ( v12 < v11 )
  {
    sub_998B30((__int64)a1, a2, a3, a4, a5);
    goto LABEL_12;
  }
  v13 = (char *)v8 + a2;
  v14 = a3 + a2;
  v15 = v7 - v14;
  v16 = v7 != v14 && a3 != a5;
  if ( v8 <= (_QWORD *)a4 && a4 <= (_BYTE *)v8 + v7 )
  {
    if ( a5 && a3 >= a5 )
    {
      if ( a5 != 1 )
      {
        n = v7 - v14;
        v34 = a5;
        srca = a4;
        memmove(v13, a4, a5);
        a4 = srca;
        a5 = v34;
        v15 = n;
        if ( !v16 )
          goto LABEL_12;
        goto LABEL_18;
      }
      *v13 = *a4;
    }
    if ( !v16 )
    {
LABEL_20:
      if ( a3 >= a5 )
        goto LABEL_12;
      v23 = &v13[a3];
      if ( v23 < &a4[a5] )
      {
        if ( v23 > a4 )
        {
          v25 = v23 - a4;
          if ( v25 == 1 )
          {
            *v13 = *a4;
          }
          else if ( v25 )
          {
            srcc = (void *)a5;
            memmove(v13, a4, v25);
            a5 = (size_t)srcc;
          }
          v26 = &v13[a5];
          v27 = &v13[v25];
          v28 = a5 - v25;
          if ( a5 - v25 == 1 )
          {
            *v27 = *v26;
          }
          else if ( v28 )
          {
            memcpy(v27, v26, v28);
          }
        }
        else
        {
          v24 = &a4[v10];
          if ( a5 == 1 )
            *v13 = *v24;
          else
            memcpy(v13, v24, a5);
        }
        goto LABEL_12;
      }
      if ( a5 != 1 )
      {
        memmove(v13, a4, a5);
        goto LABEL_12;
      }
LABEL_26:
      *v13 = *a4;
      goto LABEL_12;
    }
LABEL_18:
    v21 = &v13[a3];
    v22 = &v13[a5];
    if ( v15 == 1 )
    {
      *v22 = *v21;
    }
    else
    {
      v35 = a5;
      srcb = a4;
      memmove(v22, v21, v15);
      a5 = v35;
      a4 = srcb;
    }
    goto LABEL_20;
  }
  if ( v16 )
  {
    v17 = &v13[a3];
    v18 = &v13[a5];
    if ( v15 == 1 )
    {
      *v18 = *v17;
    }
    else
    {
      v33 = a5;
      src = a4;
      memmove(v18, v17, v15);
      a5 = v33;
      a4 = src;
    }
  }
  if ( a5 )
  {
    if ( a5 != 1 )
    {
      memcpy(v13, a4, a5);
      goto LABEL_12;
    }
    goto LABEL_26;
  }
LABEL_12:
  v19 = (_QWORD *)*a1;
  a1[1] = v11;
  *((_BYTE *)v19 + v11) = 0;
  return a1;
}
