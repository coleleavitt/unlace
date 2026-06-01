__int64 __fastcall sub_FCEA40(_QWORD *a1, __int64 a2, int *a3)
{
  int v4; // r13d
  _QWORD *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rdx
  __int64 v10; // rbx
  int v11; // r8d
  __int64 v12; // rax
  char v13; // di
  int v14; // ecx
  _QWORD *v15; // rbp
  _QWORD *v16; // rax
  char v17; // si
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rbx
  _QWORD *v22; // rax
  char v23; // si
  int v24; // ecx
  __int64 v25; // rax

  if ( a1 + 1 == (_QWORD *)a2 )
  {
    if ( a1[5] && *a3 > *(_DWORD *)(a1[4] + 32LL) )
      return 0;
    v10 = a1[2];
    if ( !v10 )
    {
      v10 = a2;
      goto LABEL_36;
    }
    v11 = *a3;
    while ( 1 )
    {
      v14 = *(_DWORD *)(v10 + 32);
      if ( v11 < v14 )
      {
        v12 = *(_QWORD *)(v10 + 16);
        v13 = 1;
        if ( !v12 )
          goto LABEL_22;
      }
      else
      {
        v12 = *(_QWORD *)(v10 + 24);
        v13 = 0;
        if ( !v12 )
        {
LABEL_22:
          if ( !v13 )
          {
LABEL_23:
            if ( v14 < v11 )
              return 0;
            return v10;
          }
LABEL_36:
          if ( a1[3] != v10 )
          {
            v19 = std::_Rb_tree_decrement(v10);
            v14 = *(_DWORD *)(v19 + 32);
            v10 = v19;
            v11 = *a3;
            goto LABEL_23;
          }
          return 0;
        }
      }
      v10 = v12;
    }
  }
  v4 = *a3;
  if ( *(_DWORD *)(a2 + 32) > *a3 )
  {
    v5 = (_QWORD *)a1[3];
    result = (__int64)v5;
    if ( v5 == (_QWORD *)a2 )
      return result;
    v7 = std::_Rb_tree_decrement(a2);
    if ( *(_DWORD *)(v7 + 32) < v4 )
    {
      v8 = *(_QWORD *)(v7 + 24) == 0;
      result = 0;
      if ( !v8 )
        return a2;
      return result;
    }
    v15 = (_QWORD *)a1[2];
    if ( v15 )
    {
      while ( 1 )
      {
        v18 = *((_DWORD *)v15 + 8);
        if ( v4 < v18 )
        {
          v16 = (_QWORD *)v15[2];
          v17 = 1;
        }
        else
        {
          v16 = (_QWORD *)v15[3];
          v17 = 0;
        }
        if ( !v16 )
          break;
        v15 = v16;
      }
      if ( !v17 )
        goto LABEL_39;
    }
    else
    {
      v15 = a1 + 1;
    }
    if ( v5 == v15 )
      return 0;
    v20 = std::_Rb_tree_decrement(v15);
    v18 = *(_DWORD *)(v20 + 32);
    v15 = (_QWORD *)v20;
LABEL_39:
    if ( v4 > v18 )
      return 0;
    return (__int64)v15;
  }
  if ( *(_DWORD *)(a2 + 32) >= v4 )
    return a2;
  result = 0;
  if ( a1[4] != a2 )
  {
    v9 = std::_Rb_tree_increment(a2, (const char *)a2);
    if ( v4 < *(_DWORD *)(v9 + 32) )
    {
      result = 0;
      if ( *(_QWORD *)(a2 + 24) )
        return v9;
      return result;
    }
    v21 = (_QWORD *)a1[2];
    if ( v21 )
    {
      while ( 1 )
      {
        v24 = *((_DWORD *)v21 + 8);
        if ( v4 < v24 )
        {
          v22 = (_QWORD *)v21[2];
          v23 = 1;
        }
        else
        {
          v22 = (_QWORD *)v21[3];
          v23 = 0;
        }
        if ( !v22 )
          break;
        v21 = v22;
      }
      if ( !v23 )
        goto LABEL_52;
    }
    else
    {
      v21 = a1 + 1;
    }
    if ( (_QWORD *)a1[3] == v21 )
      return 0;
    v25 = std::_Rb_tree_decrement(v21);
    v24 = *(_DWORD *)(v25 + 32);
    v21 = (_QWORD *)v25;
LABEL_52:
    if ( v4 > v24 )
      return 0;
    return (__int64)v21;
  }
  return result;
}
