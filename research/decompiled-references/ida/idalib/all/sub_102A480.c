__int64 __fastcall sub_102A480(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  size_t v4; // rbp
  size_t v5; // r14
  _QWORD *v6; // rbx
  _QWORD *v7; // r15
  const void *v8; // r8
  size_t v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  size_t v13; // rdx
  void *v14; // rcx
  __int64 v15; // r14
  int v16; // eax
  __int64 result; // rax
  __int64 v18; // rbx
  size_t v19; // r14
  size_t v20; // rbp
  size_t v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  size_t v24; // rdx
  size_t v25; // r14
  _QWORD *v26; // rcx
  int v27; // eax
  void *s1; // [rsp+0h] [rbp-48h]
  void *s1a; // [rsp+0h] [rbp-48h]
  _QWORD *s1b; // [rsp+0h] [rbp-48h]
  size_t n; // [rsp+8h] [rbp-40h]

  if ( a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v18 = a1[4];
      v19 = *(_QWORD *)(a3 + 8);
      v20 = *(_QWORD *)(v18 + 40);
      v21 = v20;
      if ( v19 <= v20 )
        v21 = v19;
      if ( v21 && (v22 = memcmp(*(const void **)(v18 + 32), *(const void **)a3, v21)) != 0 )
      {
        if ( v22 < 0 )
          return 0;
      }
      else if ( v19 != v20 && v19 > v20 )
      {
        return 0;
      }
    }
    return sub_102A380((__int64)a1, a3);
  }
  v4 = *(_QWORD *)(a3 + 8);
  v5 = a2[5];
  v6 = a2;
  v7 = *(_QWORD **)a3;
  v8 = (const void *)a2[4];
  v9 = v5;
  if ( v4 <= v5 )
    v9 = *(_QWORD *)(a3 + 8);
  if ( !v9 || (a2 = (_QWORD *)a2[4], n = v9, s1 = (void *)v8, v10 = memcmp(v7, a2, v9), v8 = s1, v9 = n, !v10) )
  {
    if ( v4 == v5 )
    {
      if ( !v4 )
        return (__int64)v6;
      a2 = v7;
      v11 = memcmp(v8, v7, v4);
      if ( !v11 )
        return (__int64)v6;
      goto LABEL_22;
    }
    if ( v4 >= v5 )
    {
      if ( !v9 || (a2 = v7, (v11 = memcmp(v8, v7, v9)) == 0) )
      {
LABEL_10:
        if ( v4 > v5 )
          goto LABEL_11;
        return (__int64)v6;
      }
      goto LABEL_22;
    }
LABEL_35:
    if ( (_QWORD *)a1[3] != v6 )
    {
      v23 = std::_Rb_tree_decrement(v6);
      v24 = v4;
      v25 = *(_QWORD *)(v23 + 40);
      v26 = (_QWORD *)v23;
      if ( v25 <= v4 )
        v24 = *(_QWORD *)(v23 + 40);
      if ( v24 && (s1b = (_QWORD *)v23, v27 = memcmp(*(const void **)(v23 + 32), v7, v24), v26 = s1b, v27) )
      {
        if ( v27 >= 0 )
          return sub_102A380((__int64)a1, a3);
      }
      else if ( v25 == v4 || v25 >= v4 )
      {
        return sub_102A380((__int64)a1, a3);
      }
      if ( !v26[3] )
        return 0;
    }
    return (__int64)v6;
  }
  if ( v10 < 0 )
    goto LABEL_35;
  a2 = v7;
  v11 = memcmp(s1, v7, n);
  if ( !v11 )
  {
    if ( v4 == v5 )
      return (__int64)v6;
    goto LABEL_10;
  }
LABEL_22:
  if ( v11 >= 0 )
    return (__int64)v6;
LABEL_11:
  if ( (_QWORD *)a1[4] == v6 )
    return 0;
  v12 = std::_Rb_tree_increment(v6, (const char *)a2, a3, v9, v8);
  v13 = v4;
  v14 = *(void **)(v12 + 40);
  v15 = v12;
  if ( (unsigned __int64)v14 <= v4 )
    v13 = *(_QWORD *)(v12 + 40);
  if ( v13 )
  {
    s1a = *(void **)(v12 + 40);
    v16 = memcmp(v7, *(const void **)(v12 + 32), v13);
    v14 = s1a;
    if ( v16 )
    {
      if ( v16 < 0 )
        goto LABEL_18;
      return sub_102A380((__int64)a1, a3);
    }
  }
  if ( v14 == (void *)v4 || (unsigned __int64)v14 <= v4 )
    return sub_102A380((__int64)a1, a3);
LABEL_18:
  result = v15;
  if ( !v6[3] )
    return 0;
  return result;
}
