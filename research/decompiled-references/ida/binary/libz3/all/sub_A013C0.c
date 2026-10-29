size_t *__fastcall sub_A013C0(size_t *a1, size_t a2, __int64 a3, char *a4, size_t a5)
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
  __int64 v21; // r14
  size_t v22; // r13
  unsigned __int64 v23; // rdi
  _BYTE *v24; // rax
  size_t v25; // r9
  char *v26; // r8
  char *v27; // rcx
  _BYTE *v28; // rsi
  size_t v29; // rdx
  char *v30; // rdi
  char *v31; // rcx
  char *v32; // rdi
  char *v33; // rsi
  char *v34; // [rsp+0h] [rbp-58h]
  size_t v35; // [rsp+0h] [rbp-58h]
  size_t v36; // [rsp+0h] [rbp-58h]
  char *v37; // [rsp+0h] [rbp-58h]
  char *v38; // [rsp+0h] [rbp-58h]
  size_t n; // [rsp+8h] [rbp-50h]
  size_t na; // [rsp+8h] [rbp-50h]
  size_t nb; // [rsp+8h] [rbp-50h]
  size_t nc; // [rsp+8h] [rbp-50h]
  char *src; // [rsp+10h] [rbp-48h]
  size_t v44; // [rsp+18h] [rbp-40h]

  v6 = a1[1];
  if ( a3 + 0x7FFFFFFFFFFFFFFFLL - v6 < a5 )
    std::__throw_length_error("basic_string::_M_replace");
  v8 = (char *)*a1;
  v10 = a5 - a3;
  v11 = a1 + 2;
  v13 = v6 + v10;
  if ( a1 + 2 == (size_t *)*a1 )
  {
    if ( (unsigned __int64)v13 <= 0xF )
      goto LABEL_4;
    if ( v13 >= 0 )
    {
      v44 = a2 + a3;
      v22 = v6 - (a2 + a3);
      if ( (unsigned __int64)v13 <= 0x1D )
      {
        v23 = 31;
        v21 = 30;
        goto LABEL_20;
      }
      goto LABEL_19;
    }
LABEL_45:
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
        if ( !a5 )
          goto LABEL_13;
LABEL_10:
        if ( a5 != 1 )
        {
          memcpy(v15, a4, a5);
          v19 = (_BYTE *)*a1;
          goto LABEL_14;
        }
        *v15 = *a4;
LABEL_13:
        v19 = (_BYTE *)*a1;
        goto LABEL_14;
      }
      v34 = a4;
      memmove(v18, v17, v16);
      a4 = v34;
    }
    if ( !a5 )
      goto LABEL_13;
    goto LABEL_10;
  }
  if ( v13 < 0 )
    goto LABEL_45;
  v21 = 2 * v14;
  v44 = a2 + a3;
  v22 = v6 - (a2 + a3);
  if ( v13 < (unsigned __int64)v21 )
  {
    v23 = v21 + 1;
    if ( v21 >= 0 )
      goto LABEL_20;
LABEL_34:
    std::__throw_bad_alloc();
  }
LABEL_19:
  v21 = v13;
  v23 = v13 + 1;
  if ( v13 + 1 < 0 )
    goto LABEL_34;
LABEL_20:
  src = a4;
  n = a2;
  v35 = (size_t)v11;
  v24 = (_BYTE *)operator new(v23);
  v25 = n;
  v26 = (char *)v35;
  v27 = src;
  v19 = v24;
  if ( n )
  {
    v28 = (_BYTE *)*a1;
    if ( n == 1 )
    {
      *v24 = *v28;
    }
    else
    {
      v29 = n;
      na = v35;
      v36 = v25;
      memcpy(v24, v28, v29);
      v27 = src;
      v26 = (char *)na;
      v25 = v36;
    }
  }
  if ( v27 && a5 )
  {
    v30 = &v19[v25];
    if ( a5 == 1 )
    {
      *v30 = *v27;
    }
    else
    {
      nb = v25;
      v37 = v26;
      memcpy(v30, v27, a5);
      v25 = nb;
      v26 = v37;
    }
  }
  v31 = (char *)*a1;
  if ( v22 )
  {
    v32 = &v19[a5 + v25];
    v33 = &v31[v44];
    if ( v22 == 1 )
    {
      *v32 = *v33;
    }
    else
    {
      nc = *a1;
      v38 = v26;
      memcpy(v32, v33, v22);
      v31 = (char *)nc;
      v26 = v38;
    }
  }
  if ( v26 != v31 )
    operator delete(v31, a1[2] + 1);
  *a1 = (size_t)v19;
  a1[2] = v21;
LABEL_14:
  a1[1] = v13;
  v19[v13] = 0;
  return a1;
}

