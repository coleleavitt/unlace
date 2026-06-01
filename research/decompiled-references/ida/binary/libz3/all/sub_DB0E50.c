char __fastcall sub_DB0E50(_QWORD **a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // esi
  _QWORD *v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // r11d
  __int64 v9; // r10
  _QWORD *v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rdi
  _QWORD *i; // rax
  _QWORD *v14; // rbp
  int v15; // esi
  __int64 v16; // rax
  _QWORD *v17; // rdi
  _QWORD *j; // rax
  _QWORD *v19; // rbx
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // r15
  unsigned int v27; // r14d
  char result; // al

  v5 = *(_DWORD *)(a2 + 12);
  v6 = (_QWORD *)**a1;
  v7 = *((unsigned int *)*a1 + 2);
  v8 = v7 - 1;
  v9 = 24 * v7;
  v10 = &v6[3 * v7];
  v11 = 3LL * (((_DWORD)v7 - 1) & v5);
  v12 = &v6[v11];
  if ( v11 != 3 * v7 )
  {
    for ( i = &v6[v11]; v10 != i; i += 3 )
    {
      v14 = (_QWORD *)*i;
      if ( *i > 1u )
      {
        if ( *((_DWORD *)v14 + 3) == v5 && (_QWORD *)a2 == v14 )
        {
LABEL_50:
          v14 = i;
          goto LABEL_8;
        }
      }
      else if ( !v14 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v6 != v12 )
  {
    i = v6;
    do
    {
      while ( 1 )
      {
        v14 = (_QWORD *)*i;
        if ( *i <= 1u )
          break;
        if ( *((_DWORD *)v14 + 3) == v5 && (_QWORD *)a2 == v14 )
          goto LABEL_50;
        i += 3;
        if ( v12 == i )
          goto LABEL_45;
      }
      if ( !v14 )
        goto LABEL_8;
      i += 3;
    }
    while ( v12 != i );
  }
LABEL_45:
  v14 = nullptr;
LABEL_8:
  v15 = *(_DWORD *)(a3 + 12);
  v16 = 24LL * (v15 & v8);
  v17 = &v6[(unsigned __int64)v16 / 8];
  if ( v16 != v9 )
  {
    for ( j = &v6[(unsigned __int64)v16 / 8]; j != v10; j += 3 )
    {
      v19 = (_QWORD *)*j;
      if ( *j > 1u )
      {
        if ( *((_DWORD *)v19 + 3) == v15 && (_QWORD *)a3 == v19 )
        {
          v19 = j;
          goto LABEL_15;
        }
      }
      else if ( !v19 )
      {
        goto LABEL_15;
      }
    }
  }
  if ( v6 == v17 )
  {
LABEL_33:
    v20 = v14[1];
    v19 = nullptr;
    v21 = 0;
    if ( !v20 )
      goto LABEL_34;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = (_QWORD *)*v6;
        if ( *v6 > 1u )
          break;
        if ( !v19 )
          goto LABEL_15;
        v6 += 3;
        if ( v17 == v6 )
          goto LABEL_33;
      }
      if ( *((_DWORD *)v19 + 3) == v15 && (_QWORD *)a3 == v19 )
        break;
      v6 += 3;
      if ( v17 == v6 )
        goto LABEL_33;
    }
    v19 = v6;
LABEL_15:
    v20 = v14[1];
    v21 = v19[1];
    if ( !v20 )
    {
LABEL_34:
      if ( !v21 )
        return *((_DWORD *)v14 + 4) < *((_DWORD *)v19 + 4);
      v24 = *(unsigned int *)(v21 - 4);
      LODWORD(v22) = 0;
      if ( !(_DWORD)v24 )
        return *((_DWORD *)v14 + 4) < *((_DWORD *)v19 + 4);
      goto LABEL_21;
    }
  }
  v22 = *(unsigned int *)(v20 - 4);
  if ( (_DWORD)v22 )
  {
    v23 = v20 + 4 * v22;
    LODWORD(v22) = 0;
    do
    {
      v20 += 4;
      LODWORD(v22) = __popcountdi2() + v22;
    }
    while ( v23 != v20 );
    if ( !v21 || (v24 = *(unsigned int *)(v21 - 4), !(_DWORD)v24) )
    {
      result = 1;
      if ( (_DWORD)v22 )
        return result;
      return *((_DWORD *)v14 + 4) < *((_DWORD *)v19 + 4);
    }
  }
  else
  {
    if ( !v21 )
      return *((_DWORD *)v14 + 4) < *((_DWORD *)v19 + 4);
    v24 = *(unsigned int *)(v21 - 4);
    if ( !(_DWORD)v24 )
      return *((_DWORD *)v14 + 4) < *((_DWORD *)v19 + 4);
  }
LABEL_21:
  v25 = v21;
  v26 = v21 + 4 * v24;
  v27 = 0;
  do
  {
    v25 += 4;
    v27 += __popcountdi2();
  }
  while ( v26 != v25 );
  result = 1;
  if ( v27 >= (unsigned int)v22 )
  {
    result = 0;
    if ( v27 == (_DWORD)v22 )
      return *((_DWORD *)v14 + 4) < *((_DWORD *)v19 + 4);
  }
  return result;
}

