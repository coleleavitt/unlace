void __fastcall sub_8041D0(char *dest, char *a2, char *a3, __int64 a4, __int64 a5, char *a6)
{
  char *v6; // r12
  char *v8; // rbx
  size_t v9; // r13
  char *v10; // rdx
  unsigned int v11; // r8d
  unsigned int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int16 v15; // si
  __int16 v16; // di
  size_t v17; // r13
  char *v18; // rax
  char *v19; // rsi
  char *v20; // rax
  char *v21; // rsi
  char *i; // rdi
  unsigned int v23; // r11d
  unsigned int v24; // r10d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int16 v27; // r10
  __int16 v28; // r8
  signed __int64 v29; // rdx
  char *v30; // rsi
  char *v31; // rdi
  __int64 v32; // rax

  v6 = dest;
  v8 = a2;
  if ( a4 > a5 )
  {
    v17 = a3 - a2;
    if ( a3 - a2 <= 8 )
    {
      if ( a3 - a2 == 8 )
      {
        v32 = *(_QWORD *)a2;
        v19 = a6 + 8;
        *(_QWORD *)a6 = v32;
        if ( v8 == dest )
        {
          *((_QWORD *)a3 - 1) = v32;
          return;
        }
      }
      else
      {
        v19 = &a6[v17];
        if ( v8 == dest )
          return;
      }
    }
    else
    {
      v18 = (char *)memmove(a6, a2, a3 - a2);
      a6 = v18;
      v19 = &v18[v17];
      if ( v8 == dest )
      {
        memmove(v8, v18, v17);
        return;
      }
    }
    if ( v19 == a6 )
      return;
    v20 = v8 - 8;
    v21 = v19 - 8;
    for ( i = a3 - 8; ; i -= 8 )
    {
      v25 = *(_QWORD *)v21;
      v26 = *(_QWORD *)v20;
      v27 = *(_WORD *)(*(_QWORD *)v21 + 4LL);
      v28 = *(_WORD *)(*(_QWORD *)v20 + 4LL);
      if ( v27 )
      {
        if ( v27 != 2 )
        {
          if ( v28 )
          {
            if ( v28 != 2 )
            {
LABEL_36:
              *(_QWORD *)i = v25;
              if ( a6 == v21 )
                return;
              v21 -= 8;
              continue;
            }
            v23 = 1;
LABEL_26:
            v24 = *(_DWORD *)(v26 + 40);
            goto LABEL_27;
          }
          v23 = 1;
          goto LABEL_39;
        }
        v23 = *(_DWORD *)(v25 + 40);
      }
      else
      {
        v23 = *(unsigned __int16 *)(v25 + 28);
      }
      if ( v28 )
      {
        v24 = 1;
        if ( v28 != 2 )
          goto LABEL_27;
        goto LABEL_26;
      }
LABEL_39:
      v24 = *(unsigned __int16 *)(v26 + 28);
LABEL_27:
      if ( v23 >= v24 )
        goto LABEL_36;
      *(_QWORD *)i = v26;
      if ( v6 == v20 )
      {
        v29 = v21 + 8 - a6;
        if ( v29 <= 8 )
        {
          if ( v29 == 8 )
            *((_QWORD *)i - 1) = *(_QWORD *)a6;
        }
        else
        {
          v31 = &i[-v29];
          v30 = a6;
LABEL_49:
          memmove(v31, v30, v29);
        }
        return;
      }
      v20 -= 8;
    }
  }
  v9 = a2 - dest;
  if ( a2 - dest <= 8 )
  {
    if ( a2 - dest == 8 )
      *(_QWORD *)a6 = *(_QWORD *)dest;
  }
  else
  {
    a6 = (char *)memmove(a6, dest, v9);
  }
  v10 = &a6[v9];
  if ( a2 != a3 && a6 != v10 )
  {
    do
    {
      v13 = *(_QWORD *)v8;
      v14 = *(_QWORD *)a6;
      v15 = *(_WORD *)(*(_QWORD *)v8 + 4LL);
      v16 = *(_WORD *)(*(_QWORD *)a6 + 4LL);
      if ( v15 )
      {
        if ( v15 != 2 )
        {
          if ( v16 )
          {
            if ( v16 != 2 )
              goto LABEL_40;
            v11 = 1;
LABEL_10:
            v12 = *(_DWORD *)(v14 + 40);
            goto LABEL_11;
          }
          v11 = 1;
          goto LABEL_43;
        }
        v11 = *(_DWORD *)(v13 + 40);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v13 + 28);
      }
      if ( v16 )
      {
        v12 = 1;
        if ( v16 != 2 )
          goto LABEL_11;
        goto LABEL_10;
      }
LABEL_43:
      v12 = *(unsigned __int16 *)(v14 + 28);
LABEL_11:
      if ( v11 < v12 )
      {
        *(_QWORD *)v6 = v13;
        v8 += 8;
        v6 += 8;
        if ( v10 == a6 )
          return;
        continue;
      }
LABEL_40:
      a6 += 8;
      v6 += 8;
      *((_QWORD *)v6 - 1) = v14;
      if ( v10 == a6 )
        return;
    }
    while ( a3 != v8 );
  }
  if ( v10 != a6 )
  {
    v29 = v10 - a6;
    if ( v29 > 8 )
    {
      v30 = a6;
      v31 = v6;
      goto LABEL_49;
    }
    if ( v29 == 8 )
      *(_QWORD *)v6 = *(_QWORD *)a6;
  }
}

