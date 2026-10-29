__int64 __fastcall sub_5C8360(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int16 v5; // cx
  unsigned int *v6; // rax
  unsigned int v7; // edi
  __int64 result; // rax
  unsigned int *v9; // rsi
  bool v10; // zf
  unsigned int *v11; // rcx
  unsigned int *v12; // rsi
  unsigned int v13; // ecx
  __int16 v14; // ax
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // r12d
  __int64 v18; // r13
  __int64 v19; // r15
  unsigned int v20; // r14d
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int16 v23; // ax
  _QWORD *v24; // rdx
  _DWORD *v25; // rax
  _DWORD *v26; // rax

  if ( a1 == a2 )
    return 0;
  v3 = a2;
  v4 = a1;
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_WORD *)(a1 + 4) )
  {
    if ( v5 )
      goto LABEL_11;
    v9 = *(unsigned int **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v9 )
      return 0xFFFFFFFFLL;
    result = *v9;
    if ( (_DWORD)result )
      goto LABEL_15;
    v7 = -1;
LABEL_29:
    if ( v9[1] == 8 && *(_DWORD *)(v3 + 24) == 1 )
    {
      v3 = *(_QWORD *)(v3 + 32);
      result = v7;
      if ( v3 == v4 )
        return result;
      v14 = *(_WORD *)(v4 + 4);
      v5 = *(_WORD *)(v3 + 4);
    }
    else
    {
      if ( v3 == v4 )
        return result;
      v14 = *(_WORD *)(v4 + 4);
    }
    if ( !v14 )
    {
      result = 1;
      if ( v5 )
        return result;
      goto LABEL_16;
    }
    if ( v5 )
      goto LABEL_11;
    return 0xFFFFFFFFLL;
  }
  v6 = *(unsigned int **)(*(_QWORD *)(a1 + 16) + 24LL);
  if ( v6 && (v7 = *v6) == 0 && v6[1] == 8 && *(_DWORD *)(v4 + 24) == 1 )
  {
    v4 = *(_QWORD *)(v4 + 32);
    if ( v5 )
    {
      if ( v4 == a2 )
        return 1;
      goto LABEL_23;
    }
    result = 1;
  }
  else
  {
    v7 = -1;
    result = 0;
    if ( v5 )
    {
LABEL_23:
      if ( !*(_WORD *)(v4 + 4) )
        return 1;
      goto LABEL_11;
    }
  }
  v9 = *(unsigned int **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( v9 && !*v9 )
    goto LABEL_29;
  if ( v4 == v3 )
    return result;
LABEL_15:
  if ( *(_WORD *)(v4 + 4) )
    return 0xFFFFFFFFLL;
LABEL_16:
  v11 = *(unsigned int **)(v4 + 16);
  v12 = *(unsigned int **)(v3 + 16);
  if ( v11 != v12 )
  {
    v13 = *v11;
    result = 1;
    v10 = *v12 == v13;
    if ( *v12 < v13 )
      return result;
    return (unsigned int)-!v10;
  }
  v15 = *(unsigned int *)(v4 + 24);
  v16 = *(_DWORD *)(v3 + 24);
  if ( (_DWORD)v15 != v16 )
    return v16 < (unsigned int)v15 ? 1 : -1;
  if ( !a3 || !(_DWORD)v15 )
  {
LABEL_11:
    result = 1;
    v10 = *(_DWORD *)v3 == *(_DWORD *)v4;
    if ( *(_DWORD *)v3 < *(_DWORD *)v4 )
      return result;
    return (unsigned int)-!v10;
  }
  v17 = a3 - 1;
  v18 = 8 * v15 + 32;
  v19 = 32;
  v20 = 0;
  do
  {
    v21 = *(_QWORD *)(v4 + v19);
    v22 = *(_QWORD *)(v3 + v19);
    v23 = *(_WORD *)(v22 + 4);
    if ( !*(_WORD *)(v21 + 4)
      && (v24 = *(_QWORD **)(*(_QWORD *)(v21 + 16) + 24LL)) != nullptr
      && *v24 == 0x800000000LL
      && *(_DWORD *)(v21 + 24) == 1 )
    {
      v21 = *(_QWORD *)(v21 + 32);
      if ( !v23 )
      {
        v26 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL);
        if ( v26 )
        {
          if ( !*v26 )
          {
            if ( v26[1] != 8 )
            {
              if ( !v20 )
                v20 = -1;
              goto LABEL_49;
            }
            if ( *(_DWORD *)(v22 + 24) == 1 )
            {
              v22 = *(_QWORD *)(v22 + 32);
              goto LABEL_49;
            }
          }
        }
      }
      if ( !v20 )
        v20 = -1;
    }
    else if ( !v23 )
    {
      v25 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL);
      if ( v25 )
      {
        if ( !*v25 && v25[1] == 8 && *(_DWORD *)(v22 + 24) == 1 )
        {
          v22 = *(_QWORD *)(v22 + 32);
          if ( !v20 )
            v20 = 1;
        }
      }
    }
LABEL_49:
    result = sub_5C8360(v21, v22, v17);
    if ( (_DWORD)result )
      return result;
    v19 += 8;
  }
  while ( v19 != v18 );
  result = v20;
  if ( !v20 )
    goto LABEL_11;
  return result;
}

