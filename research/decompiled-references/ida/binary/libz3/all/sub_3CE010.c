void __fastcall sub_3CE010(
        char *dest,
        char *a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        unsigned __int8 (__fastcall *a7)(_QWORD, _QWORD))
{
  char *v7; // r13
  char *v8; // r12
  char *v9; // rbp
  char *v10; // rbx
  size_t v11; // r15
  char *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  signed __int64 v15; // rdx
  signed __int64 v16; // rdx
  char *v17; // r15
  char *v18; // rbx
  char *v19; // r15
  char *v20; // rsi
  char *v21; // rdi
  __int64 v22; // rax
  signed __int64 v23; // [rsp+8h] [rbp-40h]

  v7 = dest;
  v8 = a6;
  v9 = a3;
  v10 = a2;
  if ( a4 <= a5 )
  {
    v11 = a2 - dest;
    if ( a2 - dest <= 8 )
    {
      if ( a2 - dest == 8 )
        *(_QWORD *)a6 = *(_QWORD *)dest;
    }
    else
    {
      memmove(a6, dest, v11);
    }
    v12 = &v8[v11];
    if ( a2 != v9 && v8 != v12 )
    {
      do
      {
        if ( a7(*(_QWORD *)v10, *(_QWORD *)v8) )
        {
          v13 = *(_QWORD *)v10;
          v7 += 8;
          v10 += 8;
          *((_QWORD *)v7 - 1) = v13;
          if ( v12 == v8 )
            return;
        }
        else
        {
          v14 = *(_QWORD *)v8;
          v8 += 8;
          v7 += 8;
          *((_QWORD *)v7 - 1) = v14;
          if ( v12 == v8 )
            return;
        }
      }
      while ( v9 != v10 );
    }
    if ( v12 != v8 )
    {
      v16 = v12 - v8;
      if ( v12 - v8 > 8 )
      {
        v20 = v8;
        v21 = v7;
        goto LABEL_25;
      }
      if ( v12 - v8 == 8 )
        *(_QWORD *)v7 = *(_QWORD *)v8;
    }
    return;
  }
  v15 = a3 - a2;
  if ( v15 <= 8 )
  {
    if ( v15 == 8 )
    {
      v22 = *(_QWORD *)a2;
      v17 = a6 + 8;
      *(_QWORD *)a6 = *(_QWORD *)a2;
      if ( a2 == dest )
      {
        *((_QWORD *)v9 - 1) = v22;
        return;
      }
    }
    else
    {
      v17 = &a6[v15];
      if ( a2 == dest )
        return;
    }
  }
  else
  {
    v23 = v15;
    memmove(a6, a2, v15);
    v16 = v23;
    v17 = &v8[v23];
    if ( a2 == dest )
    {
      v20 = v8;
      v21 = v10;
LABEL_25:
      memmove(v21, v20, v16);
      return;
    }
  }
  if ( v8 == v17 )
    return;
  v18 = a2 - 8;
  v19 = v17 - 8;
  while ( !a7(*(_QWORD *)v19, *(_QWORD *)v18) )
  {
    *((_QWORD *)v9 - 1) = *(_QWORD *)v19;
    if ( v8 == v19 )
      return;
    v19 -= 8;
LABEL_18:
    v9 -= 8;
  }
  *((_QWORD *)v9 - 1) = *(_QWORD *)v18;
  if ( dest != v18 )
  {
    v18 -= 8;
    goto LABEL_18;
  }
  v16 = v19 + 8 - v8;
  if ( v16 > 8 )
  {
    v21 = &v9[-v16 - 8];
    v20 = v8;
    goto LABEL_25;
  }
  if ( v16 == 8 )
    *((_QWORD *)v9 - 2) = *(_QWORD *)v8;
}

