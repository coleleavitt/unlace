void __fastcall sub_7AD000(char *dest, char *a2, char *a3, __int64 a4, __int64 a5, char *a6)
{
  char *v6; // r12
  char *v8; // rbx
  size_t v9; // r13
  char *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // edi
  size_t v14; // r13
  char *v15; // rax
  char *v16; // rcx
  char *v17; // rax
  char *v18; // rcx
  char *i; // rdi
  __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned int v22; // ebx
  unsigned int v23; // ebx
  unsigned int v24; // esi
  signed __int64 v25; // rdx
  char *v26; // rsi
  char *v27; // rdi
  __int64 v28; // rax

  v6 = dest;
  v8 = a2;
  if ( a4 > a5 )
  {
    v14 = a3 - a2;
    if ( a3 - a2 <= 8 )
    {
      if ( a3 - a2 == 8 )
      {
        v28 = *(_QWORD *)a2;
        v16 = a6 + 8;
        *(_QWORD *)a6 = *(_QWORD *)a2;
        if ( a2 == dest )
        {
          *((_QWORD *)a3 - 1) = v28;
          return;
        }
      }
      else
      {
        v16 = &a6[v14];
        if ( a2 == dest )
          return;
      }
    }
    else
    {
      v15 = (char *)memmove(a6, a2, a3 - a2);
      a6 = v15;
      v16 = &v15[v14];
      if ( a2 == dest )
      {
        memmove(a2, v15, v14);
        return;
      }
    }
    if ( a6 == v16 )
      return;
    v17 = a2 - 8;
    v18 = v16 - 8;
    for ( i = a3 - 8; ; i -= 8 )
    {
      v20 = *(_QWORD *)v17;
      v21 = *(_QWORD *)v18;
      v22 = *(_DWORD *)(*(_QWORD *)v17 + 24LL);
      if ( *(_DWORD *)(*(_QWORD *)v18 + 24LL) < v22
        || *(_DWORD *)(*(_QWORD *)v18 + 24LL) == v22
        && ((v23 = *(_DWORD *)(v20 + 28), *(_DWORD *)(v21 + 28) < v23)
         || *(_DWORD *)(v21 + 28) == v23 && *(_DWORD *)(v21 + 32) < *(_DWORD *)(v20 + 32)) )
      {
        *(_QWORD *)i = v20;
        if ( v6 == v17 )
        {
          v25 = v18 + 8 - a6;
          if ( v25 <= 8 )
          {
            if ( v25 == 8 )
              *((_QWORD *)i - 1) = *(_QWORD *)a6;
          }
          else
          {
            v27 = &i[-v25];
            v26 = a6;
LABEL_35:
            memmove(v27, v26, v25);
          }
          return;
        }
        v17 -= 8;
      }
      else
      {
        *(_QWORD *)i = v21;
        if ( a6 == v18 )
          return;
        v18 -= 8;
      }
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
      v11 = *(_QWORD *)a6;
      v12 = *(_QWORD *)v8;
      v13 = *(_DWORD *)(*(_QWORD *)a6 + 24LL);
      if ( *(_DWORD *)(*(_QWORD *)v8 + 24LL) < v13
        || *(_DWORD *)(*(_QWORD *)v8 + 24LL) == v13
        && ((v24 = *(_DWORD *)(v11 + 28), *(_DWORD *)(v12 + 28) < v24)
         || *(_DWORD *)(v12 + 28) == v24 && *(_DWORD *)(v12 + 32) < *(_DWORD *)(v11 + 32)) )
      {
        *(_QWORD *)v6 = v12;
        v8 += 8;
        v6 += 8;
        if ( v10 == a6 )
          return;
      }
      else
      {
        a6 += 8;
        v6 += 8;
        *((_QWORD *)v6 - 1) = v11;
        if ( v10 == a6 )
          return;
      }
    }
    while ( a3 != v8 );
  }
  if ( v10 != a6 )
  {
    v25 = v10 - a6;
    if ( v25 > 8 )
    {
      v26 = a6;
      v27 = v6;
      goto LABEL_35;
    }
    if ( v25 == 8 )
      *(_QWORD *)v6 = *(_QWORD *)a6;
  }
}

