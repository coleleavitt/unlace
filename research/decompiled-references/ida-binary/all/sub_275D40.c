void __fastcall sub_275D40(char *dest, char *a2, char *a3, __int64 a4, __int64 a5, char *a6, __int64 a7)
{
  char *v7; // r12
  char *v9; // rbx
  size_t v10; // r13
  _QWORD *v11; // r11
  unsigned __int64 v12; // rsi
  char *v13; // rdx
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  signed __int64 v17; // rdx
  char *v18; // rsi
  char *v19; // rdi
  signed __int64 v20; // rdx
  char *v21; // r13
  char *v22; // rax
  _QWORD *v23; // r14
  unsigned __int64 v24; // rsi
  char *v25; // rbx
  char *v26; // rdx
  char *i; // rdi
  __int64 v28; // rcx
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  signed __int64 v32; // [rsp+8h] [rbp-40h]

  v7 = dest;
  v9 = a2;
  if ( a4 <= a5 )
  {
    v10 = a2 - dest;
    if ( a2 - dest <= 8 )
    {
      if ( a2 - dest == 8 )
        *(_QWORD *)a6 = *(_QWORD *)dest;
    }
    else
    {
      a6 = (char *)memmove(a6, dest, v10);
    }
    v11 = *(_QWORD **)(a7 + 24);
    v12 = *(_QWORD *)(a7 + 32);
    v13 = &a6[v10];
    if ( v9 != a3 && a6 != v13 )
    {
      do
      {
        v15 = *(_QWORD *)v9;
        v16 = *(_QWORD *)a6;
        if ( *(_QWORD *)v9 >= v12 )
          goto LABEL_13;
        v14 = -1;
        if ( v16 < v12 )
          v14 = *(_QWORD *)(*v11 + 8 * v16);
        if ( *(_QWORD *)(*v11 + 8 * v15) >= v14 )
        {
LABEL_13:
          a6 += 8;
          v7 += 8;
          *((_QWORD *)v7 - 1) = v16;
          if ( a6 == v13 )
            break;
        }
        else
        {
          *(_QWORD *)v7 = v15;
          v9 += 8;
          v7 += 8;
          if ( a6 == v13 )
            break;
        }
      }
      while ( a3 != v9 );
    }
    if ( v13 != a6 )
    {
      v17 = v13 - a6;
      if ( v17 > 8 )
      {
        v18 = a6;
        v19 = v7;
        goto LABEL_17;
      }
      if ( v17 == 8 )
        *(_QWORD *)v7 = *(_QWORD *)a6;
    }
    return;
  }
  v20 = a3 - a2;
  v21 = &a6[v20];
  if ( v20 <= 8 )
  {
    if ( v20 == 8 )
    {
      v31 = *(_QWORD *)a2;
      *(_QWORD *)a6 = *(_QWORD *)a2;
      v23 = *(_QWORD **)(a7 + 24);
      v24 = *(_QWORD *)(a7 + 32);
      if ( v9 == dest )
      {
        *((_QWORD *)a3 - 1) = v31;
        return;
      }
    }
    else
    {
      v23 = *(_QWORD **)(a7 + 24);
      v24 = *(_QWORD *)(a7 + 32);
      if ( v9 == dest )
        return;
    }
  }
  else
  {
    v32 = v20;
    v22 = (char *)memmove(a6, a2, v20);
    v23 = *(_QWORD **)(a7 + 24);
    v24 = *(_QWORD *)(a7 + 32);
    v17 = v32;
    a6 = v22;
    if ( v9 == dest )
    {
      v18 = v22;
      v19 = v9;
LABEL_17:
      memmove(v19, v18, v17);
      return;
    }
  }
  if ( a6 == v21 )
    return;
  v25 = v9 - 8;
  v26 = v21 - 8;
  for ( i = a3 - 8; ; i -= 8 )
  {
    v30 = *(_QWORD *)v26;
    if ( *(_QWORD *)v26 < v24 )
    {
      v28 = *(_QWORD *)v25;
      v29 = -1;
      if ( *(_QWORD *)v25 < v24 )
        v29 = *(_QWORD *)(*v23 + 8 * v28);
      if ( *(_QWORD *)(*v23 + 8 * v30) < v29 )
        break;
    }
    *(_QWORD *)i = v30;
    if ( a6 == v26 )
      return;
    v26 -= 8;
LABEL_27:
    ;
  }
  *(_QWORD *)i = v28;
  if ( v7 != v25 )
  {
    v25 -= 8;
    goto LABEL_27;
  }
  v17 = v26 + 8 - a6;
  if ( v17 > 8 )
  {
    v19 = &i[-v17];
    v18 = a6;
    goto LABEL_17;
  }
  if ( v17 == 8 )
    *((_QWORD *)i - 1) = *(_QWORD *)a6;
}
