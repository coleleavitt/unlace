__int64 __fastcall sub_1006740(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  size_t v4; // rbp
  size_t v5; // r14
  const void *v6; // r15
  const void *v7; // r8
  size_t v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  size_t v12; // rdx
  void *v13; // rcx
  __int64 v14; // r14
  int v15; // eax
  __int64 result; // rax
  __int64 v17; // rbx
  size_t v18; // r14
  size_t v19; // rbp
  size_t v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  size_t v23; // rdx
  size_t v24; // r14
  _QWORD *v25; // rcx
  int v26; // eax
  void *s1; // [rsp+0h] [rbp-48h]
  void *s1a; // [rsp+0h] [rbp-48h]
  _QWORD *s1b; // [rsp+0h] [rbp-48h]
  size_t n; // [rsp+8h] [rbp-40h]

  if ( a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v17 = a1[4];
      v18 = *(_QWORD *)(a3 + 8);
      v19 = *(_QWORD *)(v17 + 40);
      v20 = v19;
      if ( v18 <= v19 )
        v20 = v18;
      if ( v20 && (v21 = memcmp(*(const void **)(v17 + 32), *(const void **)a3, v20)) != 0 )
      {
        if ( v21 < 0 )
          return 0;
      }
      else if ( v18 != v19 && v18 > v19 )
      {
        return 0;
      }
    }
    return sub_1006640((__int64)a1, a3);
  }
  v4 = *(_QWORD *)(a3 + 8);
  v5 = a2[5];
  v6 = *(const void **)a3;
  v7 = (const void *)a2[4];
  v8 = v5;
  if ( v4 <= v5 )
    v8 = *(_QWORD *)(a3 + 8);
  if ( !v8 || (n = v8, s1 = (void *)a2[4], v9 = memcmp(v6, s1, v8), v7 = s1, v8 = n, !v9) )
  {
    if ( v4 == v5 )
    {
      if ( !v4 )
        return (__int64)a2;
      v10 = memcmp(v7, v6, v4);
      if ( !v10 )
        return (__int64)a2;
      goto LABEL_22;
    }
    if ( v4 >= v5 )
    {
      if ( !v8 || (v10 = memcmp(v7, v6, v8)) == 0 )
      {
LABEL_10:
        if ( v4 > v5 )
          goto LABEL_11;
        return (__int64)a2;
      }
      goto LABEL_22;
    }
LABEL_35:
    if ( (_QWORD *)a1[3] != a2 )
    {
      v22 = std::_Rb_tree_decrement();
      v23 = v4;
      v24 = *(_QWORD *)(v22 + 40);
      v25 = (_QWORD *)v22;
      if ( v24 <= v4 )
        v23 = *(_QWORD *)(v22 + 40);
      if ( v23 && (s1b = (_QWORD *)v22, v26 = memcmp(*(const void **)(v22 + 32), v6, v23), v25 = s1b, v26) )
      {
        if ( v26 >= 0 )
          return sub_1006640((__int64)a1, a3);
      }
      else if ( v24 == v4 || v24 >= v4 )
      {
        return sub_1006640((__int64)a1, a3);
      }
      if ( !v25[3] )
        return 0;
    }
    return (__int64)a2;
  }
  if ( v9 < 0 )
    goto LABEL_35;
  v10 = memcmp(s1, v6, n);
  if ( !v10 )
  {
    if ( v4 == v5 )
      return (__int64)a2;
    goto LABEL_10;
  }
LABEL_22:
  if ( v10 >= 0 )
    return (__int64)a2;
LABEL_11:
  if ( (_QWORD *)a1[4] == a2 )
    return 0;
  v11 = std::_Rb_tree_increment();
  v12 = v4;
  v13 = *(void **)(v11 + 40);
  v14 = v11;
  if ( (unsigned __int64)v13 <= v4 )
    v12 = *(_QWORD *)(v11 + 40);
  if ( v12 )
  {
    s1a = *(void **)(v11 + 40);
    v15 = memcmp(v6, *(const void **)(v11 + 32), v12);
    v13 = s1a;
    if ( v15 )
    {
      if ( v15 < 0 )
        goto LABEL_18;
      return sub_1006640((__int64)a1, a3);
    }
  }
  if ( v13 == (void *)v4 || (unsigned __int64)v13 <= v4 )
    return sub_1006640((__int64)a1, a3);
LABEL_18:
  result = v14;
  if ( !a2[3] )
    return 0;
  return result;
}

