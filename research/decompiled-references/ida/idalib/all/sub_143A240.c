_QWORD *__fastcall sub_143A240(_QWORD *a1, _QWORD *a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // r13
  _QWORD *v5; // rbx
  _QWORD *result; // rax
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  unsigned __int64 v11; // r8
  _QWORD *v12; // rax
  char v13; // di
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rbp
  _QWORD *v16; // rax
  char v17; // si
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rbx
  _QWORD *v22; // rax
  char v23; // si
  unsigned __int64 v24; // rcx
  __int64 v25; // rax

  if ( a1 + 1 == a2 )
  {
    if ( a1[5] && *a3 > *(_QWORD *)(a1[4] + 32LL) )
      return nullptr;
    v10 = (_QWORD *)a1[2];
    if ( !v10 )
    {
      v10 = a2;
      goto LABEL_36;
    }
    v11 = *a3;
    while ( 1 )
    {
      v14 = v10[4];
      if ( v11 < v14 )
      {
        v12 = (_QWORD *)v10[2];
        v13 = 1;
        if ( !v12 )
          goto LABEL_22;
      }
      else
      {
        v12 = (_QWORD *)v10[3];
        v13 = 0;
        if ( !v12 )
        {
LABEL_22:
          if ( !v13 )
          {
LABEL_23:
            if ( v11 > v14 )
              return nullptr;
            return v10;
          }
LABEL_36:
          if ( (_QWORD *)a1[3] != v10 )
          {
            v19 = std::_Rb_tree_decrement(v10);
            v14 = *(_QWORD *)(v19 + 32);
            v10 = (_QWORD *)v19;
            v11 = *a3;
            goto LABEL_23;
          }
          return nullptr;
        }
      }
      v10 = v12;
    }
  }
  v4 = *a3;
  if ( a2[4] > *a3 )
  {
    v5 = (_QWORD *)a1[3];
    result = v5;
    if ( v5 == a2 )
      return result;
    v7 = std::_Rb_tree_decrement(a2);
    if ( *(_QWORD *)(v7 + 32) < v4 )
    {
      v8 = *(_QWORD *)(v7 + 24) == 0;
      result = nullptr;
      if ( !v8 )
        return a2;
      return result;
    }
    v15 = (_QWORD *)a1[2];
    if ( v15 )
    {
      while ( 1 )
      {
        v18 = v15[4];
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
      return nullptr;
    v20 = std::_Rb_tree_decrement(v15);
    v18 = *(_QWORD *)(v20 + 32);
    v15 = (_QWORD *)v20;
LABEL_39:
    if ( v4 > v18 )
      return nullptr;
    return v15;
  }
  if ( a2[4] >= *a3 )
    return a2;
  result = nullptr;
  if ( (_QWORD *)a1[4] != a2 )
  {
    v9 = std::_Rb_tree_increment(a2, (const char *)a2);
    if ( *(_QWORD *)(v9 + 32) > v4 )
    {
      result = nullptr;
      if ( a2[3] )
        return (_QWORD *)v9;
      return result;
    }
    v21 = (_QWORD *)a1[2];
    if ( v21 )
    {
      while ( 1 )
      {
        v24 = v21[4];
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
      return nullptr;
    v25 = std::_Rb_tree_decrement(v21);
    v24 = *(_QWORD *)(v25 + 32);
    v21 = (_QWORD *)v25;
LABEL_52:
    if ( v4 > v24 )
      return nullptr;
    return v21;
  }
  return result;
}
