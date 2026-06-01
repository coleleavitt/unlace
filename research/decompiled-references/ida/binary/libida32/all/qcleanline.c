unsigned __int64 __fastcall qcleanline(char **a1, char a2, unsigned int a3)
{
  unsigned __int64 v3; // r15
  char v5; // r10
  int v6; // r14d
  bool v7; // r13
  char *v8; // r9
  char v9; // r12
  unsigned __int64 v10; // rbx
  const unsigned __int16 **v11; // rax
  char *v12; // rdi
  char *v13; // r9
  unsigned __int64 v14; // rdx
  char *v15; // r12
  char *v16; // rax
  signed __int64 v17; // r12
  char *v18; // r13
  unsigned __int64 result; // rax
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // r13
  __int64 v22; // rax
  char *v23; // rax
  __int64 v24; // rax
  const unsigned __int16 **v25; // rax
  __int64 v26; // rax
  char *v27; // [rsp+0h] [rbp-58h]
  char v28; // [rsp+0h] [rbp-58h]
  char v29; // [rsp+0h] [rbp-58h]
  char *v30; // [rsp+8h] [rbp-50h]
  char v31; // [rsp+8h] [rbp-50h]
  char *v32; // [rsp+8h] [rbp-50h]
  char v33; // [rsp+10h] [rbp-48h]
  char v34; // [rsp+10h] [rbp-48h]
  __int64 v35; // [rsp+10h] [rbp-48h]
  char *ptr; // [rsp+18h] [rbp-40h]

  v3 = (unsigned __int64)a1[1];
  if ( v3 <= 1 )
    goto LABEL_30;
  v5 = a3;
  v6 = (a3 >> 1) & 1;
  v7 = (a3 & 2) != 0 || a2 != 0;
  if ( !v7 )
  {
    if ( (a3 & 1) == 0 )
      return v3 - 1;
    goto LABEL_41;
  }
  v8 = *a1;
  v27 = *a1;
  v9 = **a1;
  if ( (unsigned int)v9 > 0x7F )
  {
    if ( a2 )
    {
      v10 = 0;
LABEL_20:
      if ( a2 == v9 )
        goto LABEL_50;
      if ( (v5 & 4) == 0 )
        goto LABEL_37;
      v34 = v5;
      v30 = v8;
      v16 = strchr(&v8[v10], a2);
      v8 = v30;
      v5 = v34;
      if ( !v16 )
        goto LABEL_37;
      v17 = v16 - v30;
      if ( v16 - v30 == -1 )
        goto LABEL_37;
      if ( !v17 )
      {
LABEL_50:
        if ( !v8 )
          goto LABEL_37;
        a1[1] = nullptr;
        v28 = v5;
        qfree(v8);
        *a1 = nullptr;
        v5 = v28;
        a1[2] = nullptr;
      }
      else
      {
        v18 = (char *)(v17 + 1);
        if ( v3 < v17 + 1 )
        {
          if ( a1[2] < v18 )
          {
            v24 = qvector_reserve(a1, v30, v17 + 1, 1);
            v3 = (unsigned __int64)a1[1];
            v5 = v34;
            v27 = (char *)v24;
            *a1 = (char *)v24;
          }
          v31 = v5;
          memset(&v27[v3], 0, (size_t)&v18[-v3]);
          v23 = *a1;
          a1[1] = v18;
          v5 = v31;
          v16 = &v23[v17];
        }
        else if ( v3 != v17 + 1 )
        {
          a1[1] = v18;
        }
        *v16 = 0;
      }
      v3 = (unsigned __int64)a1[1];
      if ( v3 <= 1 )
        goto LABEL_30;
LABEL_37:
      v7 = v10 != 0;
      if ( (v5 & 1) == 0 )
        goto LABEL_42;
LABEL_9:
      if ( v3 > 1 )
      {
LABEL_13:
        v13 = *a1;
        v14 = v3 - 1;
        v15 = *a1;
        while ( (unsigned int)v13[v3 - 2] <= 0x7F )
        {
          v35 = v14;
          v32 = v13;
          v29 = v13[v3 - 2];
          v25 = __ctype_b_loc();
          v13 = v32;
          v14 = v35;
          if ( ((*v25)[v29] & 0x2000) == 0 )
            break;
          if ( v35 > 1 )
          {
            if ( (unsigned __int64)a1[2] < v35 )
            {
              v26 = qvector_reserve(a1, v32, v35, 1);
              v14 = v35;
              *a1 = (char *)v26;
              v15 = (char *)v26;
            }
            a1[1] = (char *)v14;
            v15[v3 - 2] = 0;
            v3 = (unsigned __int64)a1[1];
            goto LABEL_9;
          }
          v12 = v32;
          if ( v32 )
            goto LABEL_12;
        }
        if ( (_BYTE)v6 && v7 )
          goto LABEL_45;
        return v14;
      }
      while ( (**__ctype_b_loc() & 0x2000) != 0 )
      {
        v12 = *a1;
        if ( !*a1 )
          goto LABEL_9;
LABEL_12:
        a1[1] = nullptr;
        qfree(v12);
        v3 = (unsigned __int64)a1[1];
        *a1 = nullptr;
        a1[2] = nullptr;
        if ( v3 > 1 )
          goto LABEL_13;
      }
      goto LABEL_30;
    }
    if ( (a3 & 1) == 0 )
      return v3 - 1;
    v7 = 0;
LABEL_41:
    v10 = 0;
    goto LABEL_9;
  }
  ptr = *a1;
  v10 = 0;
  v33 = a3;
  v11 = __ctype_b_loc();
  v8 = ptr;
  v5 = v33;
  do
  {
    if ( ((*v11)[v9] & 0x2000) == 0 )
    {
      if ( !a2 )
        goto LABEL_37;
      goto LABEL_7;
    }
    v9 = ptr[++v10];
  }
  while ( (unsigned int)v9 <= 0x7F );
  if ( !a2 )
    goto LABEL_37;
LABEL_7:
  if ( v10 < v3 - 1 )
    goto LABEL_20;
  if ( (v33 & 1) != 0 )
    goto LABEL_9;
LABEL_42:
  if ( !(_BYTE)v6 || !v7 )
    return v3 - 1;
  v13 = *a1;
  v14 = v3 - 1;
LABEL_45:
  v20 = 1;
  v21 = 0;
  if ( v10 < v14 )
  {
    v21 = v14 - v10;
    memmove(v13, &v13[v10], v14 - v10);
    v20 = v21 + 1;
    v13 = *a1;
  }
  if ( (unsigned __int64)a1[2] < v20 )
  {
    v22 = qvector_reserve(a1, v13, v20, 1);
    *a1 = (char *)v22;
    v13 = (char *)v22;
  }
  a1[1] = (char *)v20;
  v13[v21] = 0;
  v3 = (unsigned __int64)a1[1];
LABEL_30:
  result = 0;
  if ( v3 )
    return v3 - 1;
  return result;
}

