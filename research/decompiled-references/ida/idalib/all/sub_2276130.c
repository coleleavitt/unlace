__int64 __fastcall sub_2276130(_QWORD *a1, _QWORD *a2, const void **a3)
{
  size_t v4; // rbp
  size_t v5; // r14
  const void *v7; // r15
  const void *v8; // rcx
  size_t v9; // rdx
  int v10; // eax
  _QWORD *v11; // r14
  const void *v12; // rdx
  __int64 result; // rax
  __int64 v14; // rbx
  const void *v15; // rsi
  size_t v16; // rdx
  const void *v17; // rcx
  __int64 v18; // rax
  const void *v19; // rsi
  size_t v20; // rdx
  const void *v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+8h] [rbp-50h]
  const void *v23; // [rsp+10h] [rbp-48h] BYREF
  size_t v24; // [rsp+18h] [rbp-40h]

  if ( a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_2276030((__int64)a1, (__int64)a3);
    v14 = a1[4];
    v15 = *a3;
    v16 = (size_t)a3[1];
    v17 = *(const void **)(v14 + 32);
    v24 = *(_QWORD *)(v14 + 40);
    v23 = v17;
    if ( (int)sub_9C4B00((__int64)&v23, v15, v16) >= 0 )
      return sub_2276030((__int64)a1, (__int64)a3);
    return 0;
  }
  v4 = (size_t)a3[1];
  v5 = a2[5];
  v7 = *a3;
  v8 = (const void *)a2[4];
  v9 = v5;
  if ( v4 <= v5 )
    v9 = v4;
  if ( v9 && (v21 = (const void *)a2[4], v10 = memcmp(v7, v21, v9), v8 = v21, v10) )
  {
    if ( v10 < 0 )
      goto LABEL_8;
  }
  else if ( v4 != v5 && v4 < v5 )
  {
LABEL_8:
    if ( (_QWORD *)a1[3] == a2 )
      return (__int64)a2;
    v11 = (_QWORD *)std::_Rb_tree_decrement(a2);
    v12 = (const void *)v11[4];
    v24 = v11[5];
    v23 = v12;
    if ( (int)sub_9C4B00((__int64)&v23, v7, v4) < 0 )
    {
      result = 0;
      if ( v11[3] )
        return (__int64)a2;
      return result;
    }
    return sub_2276030((__int64)a1, (__int64)a3);
  }
  v24 = v5;
  v23 = v8;
  if ( (int)sub_9C4B00((__int64)&v23, v7, v4) >= 0 )
    return (__int64)a2;
  if ( (_QWORD *)a1[4] == a2 )
    return 0;
  v18 = std::_Rb_tree_increment(a2, (const char *)v7);
  v23 = v7;
  v19 = *(const void **)(v18 + 32);
  v20 = *(_QWORD *)(v18 + 40);
  v22 = v18;
  v24 = v4;
  if ( (int)sub_9C4B00((__int64)&v23, v19, v20) >= 0 )
    return sub_2276030((__int64)a1, (__int64)a3);
  result = 0;
  if ( a2[3] )
    return v22;
  return result;
}
