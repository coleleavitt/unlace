bool __fastcall sub_969020(__int64 a1, int a2, int a3)
{
  __int64 v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rdx
  _DWORD *v9; // rdi
  _DWORD *i; // rax
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r13
  _DWORD *v17; // rsi
  _DWORD *v18; // rax
  int v19; // edx
  __int64 v20; // rbx
  __int64 v21; // r12
  __int64 v22; // r13
  int v24; // edx
  int v25; // eax
  __int64 v26; // [rsp+0h] [rbp-48h]
  unsigned int v27; // [rsp+Ch] [rbp-3Ch]

  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(_DWORD **)a1;
  v6 = 24 * v4;
  v27 = v4 - 1;
  v7 = *(_QWORD *)a1 + 24 * v4;
  v8 = 6LL * (a2 & (unsigned int)(v4 - 1));
  v9 = (_DWORD *)(*(_QWORD *)a1 + v8 * 4);
  if ( v8 == 6 * v4 )
  {
LABEL_24:
    if ( v5 != v9 )
    {
      for ( i = v5; v9 != i; i += 6 )
      {
        v24 = i[1];
        if ( v24 == 2 )
        {
          if ( a2 == *i && a2 == i[2] )
            goto LABEL_8;
        }
        else if ( !v24 )
        {
          break;
        }
      }
    }
LABEL_42:
    BUG();
  }
  i = &v5[v8];
  while ( 1 )
  {
    v11 = i[1];
    if ( v11 != 2 )
    {
      if ( !v11 )
        goto LABEL_42;
      goto LABEL_4;
    }
    if ( a2 == *i && a2 == i[2] )
      break;
LABEL_4:
    i += 6;
    if ( (_DWORD *)v7 == i )
      goto LABEL_24;
  }
LABEL_8:
  v12 = *((_QWORD *)i + 2);
  if ( v12 )
  {
    v13 = *(unsigned int *)(v12 - 4);
    if ( (_DWORD)v13 )
    {
      v14 = v12 + 4 * v13;
      v15 = v12;
      LODWORD(v13) = 0;
      v26 = v14;
      do
      {
        v15 += 4;
        LODWORD(v13) = __popcountdi2() + v13;
      }
      while ( v15 != v26 );
    }
  }
  else
  {
    LODWORD(v13) = 0;
  }
  v16 = a3 & v27;
  v17 = &v5[6 * v16];
  if ( v6 == 24 * v16 )
  {
LABEL_32:
    if ( v5 != v17 )
    {
      while ( 1 )
      {
        v25 = v5[1];
        if ( v25 == 2 )
        {
          if ( a3 == *v5 && a3 == v5[2] )
          {
            v18 = v5;
            goto LABEL_19;
          }
        }
        else if ( !v25 )
        {
          goto LABEL_42;
        }
        v5 += 6;
        if ( v17 == v5 )
          goto LABEL_42;
      }
    }
    goto LABEL_42;
  }
  v18 = &v5[6 * v16];
  while ( 1 )
  {
    v19 = v18[1];
    if ( v19 != 2 )
    {
      if ( !v19 )
        goto LABEL_42;
      goto LABEL_15;
    }
    if ( a3 == *v18 && a3 == v18[2] )
      break;
LABEL_15:
    v18 += 6;
    if ( (_DWORD *)v7 == v18 )
      goto LABEL_32;
  }
LABEL_19:
  v20 = *((_QWORD *)v18 + 2);
  if ( !v20 )
    return 0;
  v21 = *(unsigned int *)(v20 - 4);
  if ( (_DWORD)v21 )
  {
    v22 = v20 + 4 * v21;
    LODWORD(v21) = 0;
    do
    {
      v20 += 4;
      LODWORD(v21) = __popcountdi2() + v21;
    }
    while ( v22 != v20 );
  }
  return (unsigned int)v13 < (unsigned int)v21;
}

