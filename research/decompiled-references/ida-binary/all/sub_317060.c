void __fastcall sub_317060(int **a1, int *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int *v7; // rax
  int *v9; // rsi
  __int64 v10; // r14
  int *v11; // rdx
  _BOOL4 v12; // r12d
  int *v13; // rax
  int *v14; // rdi
  __int64 v15; // rcx
  int *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  char *v19; // rcx
  char *v20; // rax
  char *v21; // r13
  int *v22; // rcx
  unsigned __int64 v23; // rsi
  int *v24; // rdi
  __int64 v25; // rsi

  v7 = *a1;
  if ( !*a1 )
  {
    v10 = *a3;
    v12 = a1[2] != nullptr && a2 == nullptr;
    goto LABEL_25;
  }
  v9 = a1[2];
  v10 = *a3;
  if ( *v7 > 1 )
  {
    if ( !v9 || a2 )
    {
      v11 = *a1;
LABEL_6:
      if ( v11 )
        goto LABEL_7;
      v12 = 0;
LABEL_25:
      sub_178660((__int64)a1, v12, 1, 0, a5, a6);
      v19 = (char *)a1[1];
      v16 = a1[2];
      v21 = &v19[8 * (_QWORD)a2];
      if ( !v12 )
        goto LABEL_26;
LABEL_19:
      v21 -= 8;
      a1[1] = (int *)(v19 - 8);
LABEL_28:
      a1[2] = (int *)((char *)v16 + 1);
      *(_QWORD *)v21 = v10;
      return;
    }
LABEL_35:
    v12 = 1;
    if ( *v7 <= 1 )
    {
      v24 = *a1;
      if ( *a1 )
      {
        v19 = (char *)a1[1];
        v16 = v9;
        if ( (__int64)&v19[-(((unsigned __int64)v24 + 31) & 0xFFFFFFFFFFFFFFF0LL)] > 0 )
        {
          v21 = (char *)a1[1];
          goto LABEL_19;
        }
        a5 = *((_QWORD *)v24 + 1);
        v17 = (__int64)((__int64)a1[1] - (((unsigned __int64)v24 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3;
        if ( a5 - (__int64)v9 - v17 > 0 && 3 * (__int64)v9 < a5 )
        {
          v25 = (a5 - (__int64)v9 - 1) / 2;
          if ( v25 < 0 )
            v25 = 0;
          v14 = a1[1];
          v18 = v25 + 1;
LABEL_13:
          v19 = (char *)&v14[2 * (v18 - v17)];
          if ( v16 && v19 != (char *)v14 && v14 && v19 )
          {
            v20 = (char *)memmove(v19, v14, 8LL * (_QWORD)v16);
            v16 = a1[2];
            v19 = v20;
          }
          a1[1] = (int *)v19;
          v21 = &v19[8 * (_QWORD)a2];
          if ( v12 )
            goto LABEL_19;
LABEL_26:
          if ( (__int64)a2 < (__int64)v16 )
          {
            memmove(v21 + 8, v21, 8 * ((char *)v16 - (char *)a2));
            v16 = a1[2];
          }
          goto LABEL_28;
        }
      }
    }
    goto LABEL_25;
  }
  v11 = *a1;
  if ( a2 != v9 )
  {
    if ( a2 )
      goto LABEL_6;
    v22 = a1[1];
    if ( v22 == (int *)(((unsigned __int64)v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) )
    {
      if ( !v9 )
      {
LABEL_7:
        v12 = 0;
        if ( *v11 <= 1 )
        {
          v13 = *a1;
          if ( *a1 )
          {
            v14 = a1[1];
            v15 = *((_QWORD *)v13 + 1);
            v16 = a1[2];
            a5 = (__int64)a1[1] - (((unsigned __int64)v13 + 31) & 0xFFFFFFFFFFFFFFF0LL);
            v17 = a5 >> 3;
            if ( v15 - (__int64)v16 - (a5 >> 3) > 0 )
            {
              v21 = (char *)&v14[2 * (_QWORD)a2];
              goto LABEL_26;
            }
            if ( a5 > 0 && 3 * (__int64)v16 < 2 * v15 )
            {
              v18 = 0;
              goto LABEL_13;
            }
          }
        }
        goto LABEL_25;
      }
      goto LABEL_35;
    }
LABEL_23:
    *((_QWORD *)v22 - 1) = v10;
    a1[1] -= 2;
    a1[2] = (int *)((char *)a1[2] + 1);
    return;
  }
  v22 = a1[1];
  v23 = ((unsigned __int64)v7 + 31) & 0xFFFFFFFFFFFFFFF0LL;
  if ( (int *)(*((_QWORD *)v7 + 1) - ((__int64)((__int64)v22 - v23) >> 3)) == a2 )
  {
    if ( a2 || v22 == (int *)v23 )
      goto LABEL_7;
    goto LABEL_23;
  }
  *(_QWORD *)&v22[2 * (_QWORD)a2] = v10;
  a1[2] = (int *)((char *)a1[2] + 1);
}
