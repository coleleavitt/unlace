unsigned __int64 *__fastcall std::string::_M_replace(unsigned __int64 *a1, __int64 a2, size_t a3, _BYTE *a4, size_t a5)
{
  size_t v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  _QWORD *v9; // r9
  size_t v10; // r15
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r12
  _BYTE *v14; // r9
  size_t v15; // r13
  bool v16; // r14
  _BYTE *v17; // rsi
  _BYTE *v18; // rdi
  unsigned __int64 v19; // rax
  _BYTE *v21; // rsi
  _BYTE *v22; // rdi
  _BYTE *v23; // rbp
  _BYTE *v24; // rsi
  size_t v25; // rbp
  _BYTE *v26; // rsi
  _BYTE *v27; // rdi
  size_t v28; // rdx
  _BYTE *v29; // rax
  _BYTE *dest; // [rsp+8h] [rbp-50h]
  _BYTE *desta; // [rsp+8h] [rbp-50h]
  _BYTE *destb; // [rsp+8h] [rbp-50h]
  void *destc; // [rsp+8h] [rbp-50h]
  _BYTE *src; // [rsp+10h] [rbp-48h]
  void *srca; // [rsp+10h] [rbp-48h]
  _BYTE *srcb; // [rsp+10h] [rbp-48h]
  size_t n; // [rsp+18h] [rbp-40h]
  size_t na; // [rsp+18h] [rbp-40h]

  v6 = a3 + 0x7FFFFFFFFFFFFFFFLL;
  v7 = a1[1];
  if ( a5 > v6 - v7 )
    std::__throw_length_error("basic_string::_M_replace");
  v8 = *a1;
  v9 = a1 + 2;
  v10 = a5 - a3;
  v12 = 15;
  v13 = v7 + a5 - a3;
  if ( (_QWORD *)v8 != v9 )
    v12 = a1[2];
  if ( v12 < v13 )
  {
    std::string::_M_mutate();
    goto LABEL_12;
  }
  v14 = (_BYTE *)(v8 + a2);
  v15 = v7 - a2 - a3;
  v16 = v7 - a2 != a3 && a3 != a5;
  if ( (unsigned __int64)a4 >= v8 && (unsigned __int64)a4 <= v7 + v8 )
  {
    if ( a5 && a3 >= a5 )
    {
      if ( a5 != 1 )
      {
        srca = (void *)a5;
        desta = a4;
        v14 = memmove(v14, a4, a5);
        a4 = desta;
        a5 = (size_t)srca;
        if ( !v16 )
          goto LABEL_12;
        goto LABEL_18;
      }
      *v14 = *a4;
    }
    if ( !v16 )
    {
LABEL_20:
      if ( a3 >= a5 )
        goto LABEL_12;
      v23 = &v14[a3];
      if ( v23 < &a4[a5] )
      {
        if ( v23 > a4 )
        {
          v25 = v23 - a4;
          if ( v25 == 1 )
          {
            *v14 = *a4;
          }
          else if ( v25 )
          {
            destc = (void *)a5;
            v29 = memmove(v14, a4, v25);
            a5 = (size_t)destc;
            v14 = v29;
          }
          v26 = &v14[a5];
          v27 = &v14[v25];
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
            *v14 = *v24;
          else
            memcpy(v14, v24, a5);
        }
        goto LABEL_12;
      }
      if ( a5 != 1 )
      {
        memmove(v14, a4, a5);
        goto LABEL_12;
      }
LABEL_11:
      *v14 = *a4;
      goto LABEL_12;
    }
LABEL_18:
    v21 = &v14[a3];
    v22 = &v14[a5];
    if ( v15 == 1 )
    {
      *v22 = *v21;
    }
    else
    {
      na = a5;
      srcb = a4;
      destb = v14;
      memmove(v22, v21, v15);
      a5 = na;
      a4 = srcb;
      v14 = destb;
    }
    goto LABEL_20;
  }
  if ( v16 )
  {
    v17 = &v14[a3];
    v18 = &v14[a5];
    if ( v15 == 1 )
    {
      *v18 = *v17;
    }
    else
    {
      n = a5;
      src = a4;
      dest = v14;
      memmove(v18, v17, v15);
      a5 = n;
      a4 = src;
      v14 = dest;
    }
  }
  if ( a5 )
  {
    if ( a5 != 1 )
    {
      memcpy(v14, a4, a5);
      goto LABEL_12;
    }
    goto LABEL_11;
  }
LABEL_12:
  v19 = *a1;
  a1[1] = v13;
  *(_BYTE *)(v19 + v13) = 0;
  return a1;
}

