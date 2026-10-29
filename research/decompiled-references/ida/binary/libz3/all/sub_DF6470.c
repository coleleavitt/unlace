void __fastcall sub_DF6470(size_t *a1, size_t a2, __int64 a3, char *a4, size_t a5)
{
  size_t v6; // r13
  char *v8; // rsi
  size_t v10; // r15
  _QWORD *v11; // r8
  __int64 v13; // r15
  unsigned __int64 v14; // r14
  char *v15; // r12
  size_t v16; // rdx
  char *v17; // rsi
  char *v18; // rdi
  _BYTE *v19; // r12
  __int64 v20; // r14
  size_t v21; // r13
  unsigned __int64 v22; // rdi
  _BYTE *v23; // rax
  size_t v24; // r9
  char *v25; // r8
  char *v26; // rcx
  _BYTE *v27; // rsi
  size_t v28; // rdx
  char *v29; // rdi
  char *v30; // rcx
  char *v31; // rdi
  char *v32; // rsi
  char *v33; // [rsp+0h] [rbp-58h]
  size_t v34; // [rsp+0h] [rbp-58h]
  size_t v35; // [rsp+0h] [rbp-58h]
  char *v36; // [rsp+0h] [rbp-58h]
  char *v37; // [rsp+0h] [rbp-58h]
  size_t n; // [rsp+8h] [rbp-50h]
  size_t na; // [rsp+8h] [rbp-50h]
  size_t nb; // [rsp+8h] [rbp-50h]
  size_t nc; // [rsp+8h] [rbp-50h]
  char *src; // [rsp+10h] [rbp-48h]
  size_t v43; // [rsp+18h] [rbp-40h]

  v6 = a1[1];
  if ( a3 + 0x7FFFFFFFFFFFFFFFLL - v6 < a5 )
    std::__throw_length_error("basic_string::_M_replace");
  v8 = (char *)*a1;
  v10 = a5 - a3;
  v11 = a1 + 2;
  v13 = v6 + v10;
  if ( (size_t *)*a1 == a1 + 2 )
  {
    if ( (unsigned __int64)v13 <= 0xF )
      goto LABEL_4;
    if ( v13 >= 0 )
    {
      v43 = a2 + a3;
      v21 = v6 - (a2 + a3);
      if ( (unsigned __int64)v13 <= 0x1D )
      {
        v22 = 31;
        v20 = 30;
        goto LABEL_20;
      }
      goto LABEL_19;
    }
LABEL_48:
    std::__throw_length_error("basic_string::_M_create");
  }
  v14 = a1[2];
  if ( v14 >= v13 )
  {
LABEL_4:
    v15 = &v8[a2];
    v16 = v6 - (a3 + a2);
    if ( a4 >= v8 && &v8[v6] >= a4 )
    {
      std::string::_M_replace_cold();
      v19 = (_BYTE *)*a1;
      goto LABEL_14;
    }
    if ( v16 && a3 != a5 )
    {
      v17 = &v15[a3];
      v18 = &v15[a5];
      if ( v16 == 1 )
      {
        *v18 = *v17;
        if ( a5 )
          goto LABEL_10;
        goto LABEL_13;
      }
      v33 = a4;
      memmove(v18, v17, v16);
      a4 = v33;
    }
    if ( a5 )
    {
LABEL_10:
      if ( a5 == 1 )
        *v15 = *a4;
      else
        memcpy(v15, a4, a5);
      v19 = (_BYTE *)*a1;
      goto LABEL_14;
    }
LABEL_13:
    v19 = (_BYTE *)*a1;
    goto LABEL_14;
  }
  if ( v13 < 0 )
    goto LABEL_48;
  v20 = 2 * v14;
  v43 = a2 + a3;
  v21 = v6 - (a2 + a3);
  if ( v13 < (unsigned __int64)v20 )
  {
    v22 = v20 + 1;
    if ( v20 >= 0 )
      goto LABEL_20;
LABEL_34:
    std::__throw_bad_alloc();
  }
LABEL_19:
  v20 = v13;
  v22 = v13 + 1;
  if ( v13 + 1 < 0 )
    goto LABEL_34;
LABEL_20:
  src = a4;
  n = a2;
  v34 = (size_t)v11;
  v23 = (_BYTE *)operator new(v22);
  v24 = n;
  v25 = (char *)v34;
  v26 = src;
  v19 = v23;
  if ( n )
  {
    v27 = (_BYTE *)*a1;
    if ( n == 1 )
    {
      *v23 = *v27;
    }
    else
    {
      v28 = n;
      na = v34;
      v35 = v24;
      memcpy(v23, v27, v28);
      v26 = src;
      v25 = (char *)na;
      v24 = v35;
    }
  }
  if ( v26 && a5 )
  {
    v29 = &v19[v24];
    if ( a5 == 1 )
    {
      *v29 = *v26;
    }
    else
    {
      nb = v24;
      v36 = v25;
      memcpy(v29, v26, a5);
      v24 = nb;
      v25 = v36;
    }
  }
  v30 = (char *)*a1;
  if ( v21 )
  {
    v31 = &v19[a5 + v24];
    v32 = &v30[v43];
    if ( v21 == 1 )
    {
      *v31 = *v32;
    }
    else
    {
      nc = *a1;
      v37 = v25;
      memcpy(v31, v32, v21);
      v30 = (char *)nc;
      v25 = v37;
    }
  }
  if ( v25 != v30 )
    operator delete(v30, a1[2] + 1);
  *a1 = (size_t)v19;
  a1[2] = v20;
LABEL_14:
  a1[1] = v13;
  v19[v13] = 0;
}

