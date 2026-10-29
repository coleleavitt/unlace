void __fastcall sub_8E5180(char *dest, char *a2, char *a3, __int64 a4, __int64 a5, char *a6)
{
  char *v6; // r12
  char *v7; // rbp
  char *v8; // rbx
  size_t v9; // r13
  char *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  size_t v13; // r13
  char *v14; // rax
  char *v15; // r10
  char *v16; // rax
  char *v17; // r10
  signed __int64 v18; // rdx
  char *v19; // rsi
  char *v20; // rdi
  __int64 v21; // rax

  v6 = dest;
  v7 = a3;
  v8 = a2;
  if ( a4 > a5 )
  {
    v13 = a3 - a2;
    if ( a3 - a2 <= 8 )
    {
      if ( a3 - a2 == 8 )
      {
        v21 = *(_QWORD *)a2;
        v15 = a6 + 8;
        *(_QWORD *)a6 = *(_QWORD *)a2;
        if ( a2 == dest )
        {
          *((_QWORD *)a3 - 1) = v21;
          return;
        }
      }
      else
      {
        v15 = &a6[v13];
        if ( a2 == dest )
          return;
      }
    }
    else
    {
      v14 = (char *)memmove(a6, a2, a3 - a2);
      a6 = v14;
      v15 = &v14[v13];
      if ( a2 == dest )
      {
        memmove(a2, v14, v13);
        return;
      }
    }
    if ( a6 == v15 )
      return;
    v16 = a2 - 8;
    v17 = v15 - 8;
    while ( 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)v16 + 4LL * (*(_DWORD *)(*(_QWORD *)v16 + 4LL) & 0xFFFFFF) + 8) < *(_DWORD *)(*(_QWORD *)v17 + 4LL * (*(_DWORD *)(*(_QWORD *)v17 + 4LL) & 0xFFFFFF) + 8) )
      {
        *((_QWORD *)v7 - 1) = *(_QWORD *)v16;
        if ( dest == v16 )
        {
          v18 = v17 + 8 - a6;
          if ( v18 <= 8 )
          {
            if ( v18 == 8 )
              *((_QWORD *)v7 - 2) = *(_QWORD *)a6;
          }
          else
          {
            v20 = &v7[-v18 - 8];
            v19 = a6;
LABEL_25:
            memmove(v20, v19, v18);
          }
          return;
        }
        v16 -= 8;
      }
      else
      {
        *((_QWORD *)v7 - 1) = *(_QWORD *)v17;
        if ( a6 == v17 )
          return;
        v17 -= 8;
      }
      v7 -= 8;
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
  if ( a2 != v7 && a6 != v10 )
  {
    do
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)v8;
        v12 = *(_QWORD *)a6;
        if ( *(_DWORD *)(*(_QWORD *)a6 + 4LL * (*(_DWORD *)(*(_QWORD *)a6 + 4LL) & 0xFFFFFF) + 8) >= *(_DWORD *)(*(_QWORD *)v8 + 4LL * (*(_DWORD *)(*(_QWORD *)v8 + 4LL) & 0xFFFFFF) + 8) )
          break;
        v8 += 8;
        *(_QWORD *)v6 = v11;
        v6 += 8;
        if ( v7 == v8 )
          goto LABEL_22;
        if ( v10 == a6 )
          return;
      }
      a6 += 8;
      *(_QWORD *)v6 = v12;
      v6 += 8;
      if ( v10 == a6 )
        return;
    }
    while ( v7 != v8 );
  }
LABEL_22:
  if ( v10 != a6 )
  {
    v18 = v10 - a6;
    if ( v18 > 8 )
    {
      v19 = a6;
      v20 = v6;
      goto LABEL_25;
    }
    if ( v18 == 8 )
      *(_QWORD *)v6 = *(_QWORD *)a6;
  }
}

