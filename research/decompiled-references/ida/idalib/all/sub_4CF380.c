__int64 __fastcall sub_4CF380(__int64 a1, __int64 *a2, unsigned __int64 *a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r12
  _QWORD *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 *v15; // rbx
  unsigned __int64 v16; // r12
  _QWORD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rdx
  const void *v25; // r14
  void *v26; // rdi
  __int64 v27; // rax

  result = 0;
  if ( !a3 )
    return result;
  v7 = *a3;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 1720LL);
  if ( a4 == 2 )
  {
    v9 = v8 + 104;
    v24 = *(_QWORD **)(v8 + 112);
    v11 = v9;
    if ( !v24 )
      return result;
    do
    {
      if ( v7 < v24[4] )
      {
        v11 = (__int64)v24;
        v24 = (_QWORD *)v24[2];
      }
      else
      {
        v24 = (_QWORD *)v24[3];
      }
    }
    while ( v24 );
    goto LABEL_10;
  }
  if ( a4 > 2 )
  {
    if ( a4 != 3 )
      return result;
    v17 = *(_QWORD **)(v8 + 112);
    v9 = v8 + 104;
    v11 = v8 + 104;
    if ( v17 )
    {
      do
      {
        while ( 1 )
        {
          v18 = v17[2];
          v19 = v17[3];
          if ( v17[4] < v7 )
            break;
          v11 = (__int64)v17;
          v17 = (_QWORD *)v17[2];
          if ( !v18 )
            goto LABEL_23;
        }
        v17 = (_QWORD *)v17[3];
      }
      while ( v19 );
LABEL_23:
      if ( v9 != v11 )
      {
        v14 = *(_QWORD *)(v11 + 32);
        if ( v7 >= v14 )
          goto LABEL_12;
      }
    }
    if ( *(_QWORD *)(v8 + 120) == v11 )
      return 0;
    v11 = std::_Rb_tree_decrement(v11);
    goto LABEL_10;
  }
  if ( a4 )
  {
    v9 = v8 + 104;
    v10 = *(_QWORD **)(v8 + 112);
    v11 = v9;
    if ( !v10 )
      return result;
    do
    {
      while ( 1 )
      {
        v12 = v10[2];
        v13 = v10[3];
        if ( v10[4] < v7 )
          break;
        v11 = (__int64)v10;
        v10 = (_QWORD *)v10[2];
        if ( !v12 )
          goto LABEL_10;
      }
      v10 = (_QWORD *)v10[3];
    }
    while ( v13 );
LABEL_10:
    result = 0;
    if ( v11 == v9 )
      return result;
    goto LABEL_11;
  }
  v20 = v8 + 104;
  v21 = *(_QWORD **)(v8 + 112);
  if ( v21 )
  {
    v11 = v20;
    do
    {
      while ( 1 )
      {
        v22 = v21[2];
        v23 = v21[3];
        if ( v21[4] < v7 )
          break;
        v11 = (__int64)v21;
        v21 = (_QWORD *)v21[2];
        if ( !v22 )
          goto LABEL_33;
      }
      v21 = (_QWORD *)v21[3];
    }
    while ( v23 );
LABEL_33:
    result = 0;
    if ( v20 != v11 && v7 >= *(_QWORD *)(v11 + 32) )
    {
LABEL_11:
      v14 = *(_QWORD *)(v11 + 32);
LABEL_12:
      *a3 = v14;
      v15 = *(__int64 **)(v11 + 40);
      if ( a2 && a2 != v15 )
      {
        v16 = v15[1];
        if ( v16 > 1 )
        {
          v25 = (const void *)*v15;
          v26 = (void *)*a2;
          if ( a2[2] < v16 )
          {
            v27 = qvector_reserve(a2, *a2, v15[1], 1);
            *a2 = v27;
            v26 = (void *)v27;
          }
          a2[1] = v16;
          memmove(v26, v25, v16 - 1);
          *(_BYTE *)(*a2 + v16 - 1) = 0;
        }
        else
        {
          a2[1] = 0;
        }
      }
      return (v15[1] == 0) + v15[1] - 1;
    }
  }
  return result;
}
