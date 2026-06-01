__int64 __fastcall sub_5CC4C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int16 v4; // dx
  unsigned int *v5; // rax
  unsigned int v6; // esi
  __int64 result; // rax
  unsigned int *v8; // rcx
  bool v9; // zf
  _DWORD *v10; // rdx
  _DWORD *v11; // rcx
  __int16 v12; // ax
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rbx
  __int64 v16; // r11
  unsigned int v17; // ebp
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int16 v20; // ax
  _DWORD *v21; // rdx
  _DWORD *v22; // rax
  __int64 v23; // r11
  _DWORD *v24; // rax

  if ( a1 == a2 )
    return 0;
  v2 = a1;
  v3 = a2;
  v4 = *(_WORD *)(a2 + 4);
  if ( *(_WORD *)(a1 + 4) )
  {
    if ( v4 )
      goto LABEL_11;
    v8 = *(unsigned int **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v8 )
      return 0xFFFFFFFFLL;
    result = *v8;
    if ( (_DWORD)result )
      goto LABEL_15;
    v6 = -1;
  }
  else
  {
    v5 = *(unsigned int **)(*(_QWORD *)(a1 + 16) + 24LL);
    if ( v5 && (v6 = *v5) == 0 && v5[1] == 8 && *(_DWORD *)(a1 + 24) == 1 )
    {
      v2 = *(_QWORD *)(a1 + 32);
      if ( v4 )
      {
        if ( v2 == v3 )
          return 1;
        goto LABEL_23;
      }
      result = 1;
    }
    else
    {
      v6 = -1;
      result = 0;
      if ( v4 )
      {
LABEL_23:
        if ( !*(_WORD *)(v2 + 4) )
          return 1;
LABEL_11:
        result = 1;
        v9 = *(_DWORD *)v3 == *(_DWORD *)v2;
        if ( *(_DWORD *)v3 >= *(_DWORD *)v2 )
          return (unsigned int)-!v9;
        return result;
      }
    }
    v8 = *(unsigned int **)(*(_QWORD *)(v3 + 16) + 24LL);
    if ( !v8 || *v8 )
    {
      if ( v3 == v2 )
        return result;
LABEL_15:
      if ( !*(_WORD *)(v2 + 4) )
        goto LABEL_16;
      return 0xFFFFFFFFLL;
    }
  }
  if ( v8[1] == 8 && *(_DWORD *)(v3 + 24) == 1 )
  {
    v3 = *(_QWORD *)(v3 + 32);
    result = v6;
    if ( v3 == v2 )
      return result;
    v12 = *(_WORD *)(v2 + 4);
    v4 = *(_WORD *)(v3 + 4);
  }
  else
  {
    if ( v3 == v2 )
      return result;
    v12 = *(_WORD *)(v2 + 4);
  }
  if ( v12 )
  {
    if ( v4 )
      goto LABEL_11;
    return 0xFFFFFFFFLL;
  }
  result = 1;
  if ( v4 )
    return result;
LABEL_16:
  v10 = *(_DWORD **)(v2 + 16);
  v11 = *(_DWORD **)(v3 + 16);
  if ( v10 == v11 )
  {
    v13 = *(unsigned int *)(v2 + 24);
    v14 = *(_DWORD *)(v3 + 24);
    if ( (_DWORD)v13 != v14 )
      return v14 < (unsigned int)v13 ? 1 : -1;
    if ( (_DWORD)v13 )
    {
      v15 = 8 * v13 + 32;
      v16 = 32;
      v17 = 0;
      while ( 1 )
      {
        v18 = *(_QWORD *)(v2 + v16);
        v19 = *(_QWORD *)(v3 + v16);
        v20 = *(_WORD *)(v19 + 4);
        if ( !*(_WORD *)(v18 + 4)
          && (v21 = *(_DWORD **)(*(_QWORD *)(v18 + 16) + 24LL)) != nullptr
          && !*v21
          && v21[1] == 8
          && *(_DWORD *)(v18 + 24) == 1 )
        {
          v18 = *(_QWORD *)(v18 + 32);
          if ( !v20
            && (v24 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL)) != nullptr
            && !*v24
            && v24[1] == 8
            && *(_DWORD *)(v19 + 24) == 1 )
          {
            v19 = *(_QWORD *)(v19 + 32);
          }
          else if ( !v17 )
          {
            v17 = -1;
          }
        }
        else if ( !v20 )
        {
          v22 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL);
          if ( v22 )
          {
            if ( !*v22 && v22[1] == 8 && *(_DWORD *)(v19 + 24) == 1 )
            {
              v19 = *(_QWORD *)(v19 + 32);
              if ( !v17 )
                v17 = 1;
            }
          }
        }
        result = sub_5C8360(v18, v19, 3);
        if ( (_DWORD)result )
          return result;
        v16 = v23 + 8;
        if ( v16 == v15 )
        {
          result = v17;
          if ( !v17 )
            goto LABEL_11;
          return result;
        }
      }
    }
    goto LABEL_11;
  }
  result = 1;
  v9 = *v11 == *v10;
  if ( *v11 >= *v10 )
    return (unsigned int)-!v9;
  return result;
}

