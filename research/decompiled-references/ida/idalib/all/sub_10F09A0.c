__int64 __fastcall sub_10F09A0(_QWORD *a1, const char *a2, __int64 a3)
{
  const char *v4; // rbx
  unsigned __int64 v5; // r13
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  size_t v9; // r13
  size_t v10; // r15
  size_t v11; // rdx
  int v12; // eax
  __int64 v13; // r13
  size_t v14; // r15
  size_t v15; // r14
  size_t v16; // r9
  signed __int64 v17; // rax
  const char *v18; // r8
  const void *v19; // rcx
  size_t v20; // r9
  int v21; // eax
  __int64 v22; // r14
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  size_t v25; // r13
  size_t v26; // r14
  const void *v27; // rsi
  size_t v28; // rdx
  int v29; // eax
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // r14
  size_t v33; // r13
  size_t v34; // r15
  size_t v35; // rdx
  int v36; // eax
  __int64 v37; // r13
  const void *v38; // [rsp+8h] [rbp-50h]
  const void *v39; // [rsp+10h] [rbp-48h]
  size_t v40; // [rsp+18h] [rbp-40h]

  if ( a2 == (const char *)(a1 + 1) )
  {
    if ( !a1[5] )
      return sub_10F0840((__int64)a1, (unsigned __int64 *)a3);
    v23 = a1[4];
    v24 = *(_QWORD *)(v23 + 32);
    if ( *(_QWORD *)a3 > v24 )
      return 0;
    if ( *(_QWORD *)a3 != v24 )
      return sub_10F0840((__int64)a1, (unsigned __int64 *)a3);
    v25 = *(_QWORD *)(v23 + 48);
    v27 = *(const void **)(a3 + 8);
    v28 = *(_QWORD *)(a3 + 16);
    v26 = v28;
    if ( v25 <= v28 )
      v28 = *(_QWORD *)(v23 + 48);
    v29 = sub_9B48C0(*(const void **)(v23 + 40), v27, v28);
    if ( !v29 )
    {
      v30 = v25 - v26;
      if ( v30 > 0x7FFFFFFF )
        return sub_10F0840((__int64)a1, (unsigned __int64 *)a3);
      if ( v30 < (__int64)0xFFFFFFFF80000000LL )
        return 0;
      v29 = v30;
    }
    if ( v29 >= 0 )
      return sub_10F0840((__int64)a1, (unsigned __int64 *)a3);
    return 0;
  }
  v4 = a2;
  v5 = *(_QWORD *)a3;
  if ( *((_QWORD *)a2 + 4) > *(_QWORD *)a3 )
    goto LABEL_3;
  if ( *((_QWORD *)a2 + 4) == *(_QWORD *)a3 )
  {
    v14 = *(_QWORD *)(a3 + 16);
    v15 = *((_QWORD *)a2 + 6);
    v16 = v15;
    if ( v14 <= v15 )
      v16 = *(_QWORD *)(a3 + 16);
    v39 = *((const void **)a2 + 5);
    v38 = *(const void **)(a3 + 8);
    v40 = v16;
    LODWORD(v17) = sub_9B48C0(v38, v39, v16);
    v18 = (const char *)v38;
    v19 = v39;
    v20 = v40;
    if ( !(_DWORD)v17 )
    {
      v17 = v14 - v15;
      if ( (__int64)(v14 - v15) > 0x7FFFFFFF )
        goto LABEL_21;
      if ( v17 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_3;
    }
    if ( (int)v17 < 0 )
    {
LABEL_3:
      result = (__int64)a2;
      if ( (const char *)a1[3] == a2 )
        return result;
      v7 = std::_Rb_tree_decrement(a2);
      v8 = v7;
      if ( v5 > *(_QWORD *)(v7 + 32) )
        goto LABEL_53;
      if ( v5 == *(_QWORD *)(v7 + 32) )
      {
        v9 = *(_QWORD *)(v7 + 48);
        v10 = *(_QWORD *)(a3 + 16);
        v11 = v10;
        if ( v9 <= v10 )
          v11 = *(_QWORD *)(v7 + 48);
        v12 = sub_9B48C0(*(const void **)(v7 + 40), *(const void **)(a3 + 8), v11);
        if ( v12 )
          goto LABEL_12;
        v13 = v9 - v10;
        if ( v13 <= 0x7FFFFFFF )
        {
          if ( v13 < (__int64)0xFFFFFFFF80000000LL )
          {
LABEL_53:
            result = 0;
            if ( *(_QWORD *)(v8 + 24) )
              return (__int64)a2;
            return result;
          }
          v12 = v13;
LABEL_12:
          if ( v12 >= 0 )
            return sub_10F0840((__int64)a1, (unsigned __int64 *)a3);
          goto LABEL_53;
        }
      }
      return sub_10F0840((__int64)a1, (unsigned __int64 *)a3);
    }
  }
  else
  {
    if ( *((_QWORD *)a2 + 4) < *(_QWORD *)a3 )
      goto LABEL_40;
    v14 = *(_QWORD *)(a3 + 16);
    v15 = *((_QWORD *)a2 + 6);
    v19 = *((const void **)a2 + 5);
    v18 = *(const char **)(a3 + 8);
    v20 = v14;
    if ( v15 <= v14 )
      v20 = *((_QWORD *)a2 + 6);
  }
LABEL_21:
  a2 = v18;
  v21 = sub_9B48C0(v19, v18, v20);
  if ( v21 )
    goto LABEL_25;
  v22 = v15 - v14;
  if ( v22 > 0x7FFFFFFF )
    return (__int64)v4;
  if ( v22 >= (__int64)0xFFFFFFFF80000000LL )
  {
    v21 = v22;
LABEL_25:
    if ( v21 >= 0 )
      return (__int64)v4;
  }
LABEL_40:
  if ( (const char *)a1[4] == v4 )
    return 0;
  v31 = std::_Rb_tree_increment(v4, a2);
  v32 = v31;
  if ( v5 >= *(_QWORD *)(v31 + 32) )
  {
    if ( v5 != *(_QWORD *)(v31 + 32) )
      return sub_10F0840((__int64)a1, (unsigned __int64 *)a3);
    v33 = *(_QWORD *)(a3 + 16);
    v34 = *(_QWORD *)(v31 + 48);
    v35 = v34;
    if ( v33 <= v34 )
      v35 = *(_QWORD *)(a3 + 16);
    v36 = sub_9B48C0(*(const void **)(a3 + 8), *(const void **)(v31 + 40), v35);
    if ( !v36 )
    {
      v37 = v33 - v34;
      if ( v37 > 0x7FFFFFFF )
        return sub_10F0840((__int64)a1, (unsigned __int64 *)a3);
      if ( v37 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_50;
      v36 = v37;
    }
    if ( v36 >= 0 )
      return sub_10F0840((__int64)a1, (unsigned __int64 *)a3);
  }
LABEL_50:
  result = 0;
  if ( *((_QWORD *)v4 + 3) )
    return v32;
  return result;
}
