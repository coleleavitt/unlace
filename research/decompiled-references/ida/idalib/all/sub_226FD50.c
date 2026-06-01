void *__fastcall sub_226FD50(void *a1, size_t a2, __int64 *a3, unsigned __int8 *a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rax
  size_t v10; // r12
  char v11; // r15
  void *v12; // rax
  char v13; // dl
  size_t v14; // r15
  __int64 v15; // rdi
  size_t v16; // rax
  size_t v17; // rdx
  bool v18; // zf
  void *v19; // rax
  size_t v20; // rdx
  char v21; // dl
  unsigned __int64 v22; // rax
  size_t v23; // r15
  size_t v24; // rax
  void *v25; // r9
  __int64 v26; // rdi
  __int64 v27; // r15
  size_t v28; // rdx
  size_t v29; // rax
  char *v30; // rcx
  size_t v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  size_t v34; // rcx
  unsigned __int64 v36; // rcx
  void *v38; // [rsp+18h] [rbp-60h]
  void *v39; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  size_t n; // [rsp+28h] [rbp-50h]
  char *v42; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-40h]

  src = a1;
  n = a2;
  v9 = sub_2246EC0((__int64 *)&src, a4, a5, 0);
  if ( v9 == -1 )
    return src;
  v10 = v9;
  a3[1] = 0;
  if ( a3[2] < n )
    sub_2236E10((__int64)a3, a3 + 3, n, 1);
  v11 = 0;
  while ( 1 )
  {
    v12 = src;
    v13 = *((_BYTE *)src + v10);
    if ( v13 != 10 && v13 != 13 )
      break;
    v22 = sub_2247130(&src, (unsigned __int8 *)" \t", 2, v10);
    if ( v22 == -1 )
    {
      if ( v11 == 10 )
      {
        sub_FC8050(a3, 10);
        v29 = n;
        v30 = (char *)src;
        v28 = v10 + 1;
        if ( n < v10 )
        {
          if ( n < v28 )
            goto LABEL_41;
LABEL_32:
          v31 = v29 - v28;
          goto LABEL_33;
        }
LABEL_29:
        if ( v29 - v10 > 1 )
          v28 += *(_WORD *)&v30[v10] == 2573;
        if ( v28 <= v29 )
          goto LABEL_32;
        v28 = v29;
        v31 = 0;
LABEL_33:
        v43 = v31;
        v42 = &v30[v28];
      }
      else
      {
        if ( v11 == 32 )
        {
          v11 = 10;
          *(_BYTE *)(*a3 + a3[1] - 1) = 10;
          v29 = n;
          v28 = v10 + 1;
          v30 = (char *)src;
          if ( n >= v10 )
            goto LABEL_29;
          if ( n >= v28 )
            goto LABEL_32;
        }
        else
        {
LABEL_50:
          v11 = 32;
          sub_FC8050(a3, 32);
          v29 = n;
          v30 = (char *)src;
          v28 = v10 + 1;
          if ( n >= v10 )
            goto LABEL_29;
          if ( v28 <= n )
            goto LABEL_32;
        }
LABEL_41:
        v43 = 0;
        v42 = &v30[v29];
      }
      v32 = sub_2246FB0((__int64 *)&v42, (unsigned __int8 *)" \t", 2, 0);
      v33 = v43;
      v34 = 0;
      if ( v32 < v43 )
        goto LABEL_45;
      goto LABEL_35;
    }
LABEL_20:
    v23 = n;
    v24 = v22 + 1;
    v25 = src;
    if ( v24 < n )
      v23 = v24;
    v26 = a3[1];
    if ( v23 + v26 > a3[2] )
    {
      v39 = src;
      sub_2236E10((__int64)a3, a3 + 3, v23 + v26, 1);
      v26 = a3[1];
      v25 = v39;
    }
    if ( v23 )
    {
      memcpy((void *)(*a3 + v26), v25, v23);
      v26 = a3[1];
    }
    v27 = v26 + v23;
    a3[1] = v27;
    if ( v27 + 1 > (unsigned __int64)a3[2] )
    {
      sub_2236E10((__int64)a3, a3 + 3, v27 + 1, 1);
      v27 = a3[1];
    }
    v28 = v10 + 1;
    *(_BYTE *)(*a3 + v27) = 32;
    v29 = n;
    v11 = 32;
    ++a3[1];
    v30 = (char *)src;
    if ( v29 >= v10 )
      goto LABEL_29;
    if ( v29 >= v28 )
      goto LABEL_32;
    v42 = (char *)src + v29;
    v43 = 0;
    v32 = sub_2246FB0((__int64 *)&v42, (unsigned __int8 *)" \t", 2, 0);
    v33 = v43;
    v34 = 0;
    if ( v43 > v32 )
    {
LABEL_45:
      v36 = v33;
      v33 = v32;
      v34 = v36 - v32;
    }
LABEL_35:
    n = v34;
    src = &v42[v33];
    v10 = sub_2246EC0((__int64 *)&src, a4, a5, 0);
    if ( v10 == -1 )
      goto LABEL_36;
  }
  while ( 1 )
  {
    v14 = n;
    v15 = a3[1];
    if ( n > v10 )
      v14 = v10;
    if ( v14 + v15 > a3[2] )
    {
      v38 = v12;
      sub_2236E10((__int64)a3, a3 + 3, v14 + v15, 1);
      v15 = a3[1];
      v12 = v38;
    }
    if ( v14 )
    {
      memcpy((void *)(*a3 + v15), v12, v14);
      v15 = a3[1];
    }
    v16 = n;
    v17 = 0;
    a3[1] = v15 + v14;
    if ( v16 >= v10 )
    {
      v17 = v16 - v10;
      v16 = v10;
    }
    v18 = *(_QWORD *)(a6 + 16) == 0;
    v43 = v17;
    v42 = (char *)src + v16;
    if ( v18 )
      std::__throw_bad_function_call();
    v19 = (void *)(*(__int64 (__fastcall **)(__int64, char **, __int64 *))(a6 + 24))(a6, &v42, a3);
    n = v20;
    src = v19;
    v10 = sub_2246EC0((__int64 *)&src, a4, a5, 0);
    if ( v10 == -1 )
      break;
    v12 = src;
    v21 = *((_BYTE *)src + v10);
    if ( v21 == 13 || v21 == 10 )
    {
      v22 = sub_2247130(&src, (unsigned __int8 *)" \t", 2, v10);
      if ( v22 == -1 )
        goto LABEL_50;
      goto LABEL_20;
    }
  }
LABEL_36:
  sub_13C13C0(a3, (char *)(*a3 + a3[1]), (char *)src, (_BYTE *)src + n);
  return (void *)*a3;
}
