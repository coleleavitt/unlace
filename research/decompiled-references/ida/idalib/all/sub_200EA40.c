__int64 __fastcall sub_200EA40(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  size_t v4; // rbp
  size_t v5; // r12
  _QWORD *v6; // rbx
  void *v7; // r8
  const void *v8; // r14
  size_t v9; // rcx
  int v10; // eax
  signed __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rax
  size_t v14; // r12
  _QWORD *v15; // rcx
  size_t v16; // rdx
  int v17; // eax
  __int64 v18; // r12
  int v19; // eax
  __int64 v20; // r12
  __int64 v21; // rax
  size_t v22; // rcx
  __int64 v23; // r12
  size_t v24; // rdx
  int v25; // eax
  __int64 v26; // rbp
  __int64 v27; // rbx
  size_t v28; // r12
  size_t v29; // rbp
  size_t v30; // rdx
  int v31; // eax
  __int64 v32; // rbp
  void *s1; // [rsp+0h] [rbp-48h]
  _QWORD *s1a; // [rsp+0h] [rbp-48h]
  void *s1b; // [rsp+0h] [rbp-48h]
  size_t n; // [rsp+8h] [rbp-40h]

  if ( a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_200E8C0((__int64)a1, a3);
    v27 = a1[4];
    v28 = *(_QWORD *)(a3 + 8);
    v29 = *(_QWORD *)(v27 + 40);
    v30 = v28;
    if ( v29 <= v28 )
      v30 = *(_QWORD *)(v27 + 40);
    if ( !v30 || (v31 = memcmp(*(const void **)(v27 + 32), *(const void **)a3, v30)) == 0 )
    {
      v32 = v29 - v28;
      if ( v32 > 0x7FFFFFFF )
        return sub_200E8C0((__int64)a1, a3);
      if ( v32 < (__int64)0xFFFFFFFF80000000LL )
        return 0;
      v31 = v32;
    }
    if ( v31 >= 0 )
      return sub_200E8C0((__int64)a1, a3);
    return 0;
  }
  v4 = *(_QWORD *)(a3 + 8);
  v5 = a2[5];
  v6 = a2;
  v7 = (void *)a2[4];
  v8 = *(const void **)a3;
  v9 = v5;
  if ( v4 <= v5 )
    v9 = *(_QWORD *)(a3 + 8);
  if ( v9 )
  {
    a2 = (_QWORD *)a2[4];
    n = v9;
    s1 = v7;
    v10 = memcmp(v8, a2, v9);
    v7 = s1;
    v9 = n;
    if ( v10 )
    {
      if ( v10 < 0 )
        goto LABEL_9;
      goto LABEL_24;
    }
    v11 = v4 - v5;
    if ( (__int64)(v4 - v5) > 0x7FFFFFFF )
      goto LABEL_24;
  }
  else
  {
    v11 = v4 - v5;
    if ( (__int64)(v4 - v5) > 0x7FFFFFFF )
      goto LABEL_25;
  }
  if ( v11 < (__int64)0xFFFFFFFF80000000LL || (int)v11 < 0 )
  {
LABEL_9:
    result = (__int64)v6;
    if ( (_QWORD *)a1[3] == v6 )
      return result;
    v13 = std::_Rb_tree_decrement(v6);
    v14 = *(_QWORD *)(v13 + 40);
    v15 = (_QWORD *)v13;
    v16 = v14;
    if ( v4 <= v14 )
      v16 = v4;
    if ( !v16 || (s1a = (_QWORD *)v13, v17 = memcmp(*(const void **)(v13 + 32), v8, v16), v15 = s1a, !v17) )
    {
      v18 = v14 - v4;
      if ( v18 > 0x7FFFFFFF )
        return sub_200E8C0((__int64)a1, a3);
      if ( v18 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_18;
      v17 = v18;
    }
    if ( v17 < 0 )
    {
LABEL_18:
      result = 0;
      if ( v15[3] )
        return (__int64)v6;
      return result;
    }
    return sub_200E8C0((__int64)a1, a3);
  }
  if ( v9 )
  {
LABEL_24:
    a2 = v8;
    v19 = memcmp(v7, v8, v9);
    if ( v19 )
      goto LABEL_28;
  }
LABEL_25:
  v20 = v5 - v4;
  if ( v20 > 0x7FFFFFFF )
    return (__int64)v6;
  if ( v20 < (__int64)0xFFFFFFFF80000000LL )
    goto LABEL_29;
  v19 = v20;
LABEL_28:
  if ( v19 >= 0 )
    return (__int64)v6;
LABEL_29:
  if ( (_QWORD *)a1[4] == v6 )
    return 0;
  v21 = std::_Rb_tree_increment(v6, (const char *)a2, a3, v9, v7);
  v22 = *(_QWORD *)(v21 + 40);
  v23 = v21;
  v24 = v22;
  if ( v4 <= v22 )
    v24 = v4;
  if ( v24 )
  {
    s1b = *(void **)(v21 + 40);
    v25 = memcmp(v8, *(const void **)(v21 + 32), v24);
    v22 = (size_t)s1b;
    if ( v25 )
    {
LABEL_37:
      if ( v25 >= 0 )
        return sub_200E8C0((__int64)a1, a3);
      goto LABEL_38;
    }
  }
  v26 = v4 - v22;
  if ( v26 > 0x7FFFFFFF )
    return sub_200E8C0((__int64)a1, a3);
  if ( v26 >= (__int64)0xFFFFFFFF80000000LL )
  {
    v25 = v26;
    goto LABEL_37;
  }
LABEL_38:
  result = 0;
  if ( v6[3] )
    return v23;
  return result;
}
