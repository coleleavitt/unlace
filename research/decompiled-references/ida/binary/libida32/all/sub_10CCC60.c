__int64 __fastcall sub_10CCC60(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v4; // r13
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // r14
  size_t v8; // r13
  size_t v9; // r15
  size_t v10; // rdx
  int v11; // eax
  __int64 v12; // r13
  size_t v13; // r15
  size_t v14; // r14
  size_t v15; // r9
  signed __int64 v16; // rax
  const void *v17; // r8
  const void *v18; // rcx
  size_t v19; // r9
  int v20; // eax
  __int64 v21; // r14
  __int64 v22; // rbx
  unsigned __int64 v23; // rax
  size_t v24; // r13
  size_t v25; // r14
  const void *v26; // rsi
  size_t v27; // rdx
  int v28; // eax
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // r14
  size_t v32; // r13
  size_t v33; // r15
  size_t v34; // rdx
  int v35; // eax
  __int64 v36; // r13
  const void *v37; // [rsp+8h] [rbp-50h]
  const void *v38; // [rsp+10h] [rbp-48h]
  size_t v39; // [rsp+18h] [rbp-40h]

  if ( a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_10CCB00((__int64)a1, (unsigned __int64 *)a3);
    v22 = a1[4];
    v23 = *(_QWORD *)(v22 + 32);
    if ( *(_QWORD *)a3 > v23 )
      return 0;
    if ( *(_QWORD *)a3 != v23 )
      return sub_10CCB00((__int64)a1, (unsigned __int64 *)a3);
    v24 = *(_QWORD *)(v22 + 48);
    v26 = *(const void **)(a3 + 8);
    v27 = *(_QWORD *)(a3 + 16);
    v25 = v27;
    if ( v24 <= v27 )
      v27 = *(_QWORD *)(v22 + 48);
    v28 = sub_990B80(*(const void **)(v22 + 40), v26, v27);
    if ( !v28 )
    {
      v29 = v24 - v25;
      if ( v29 > 0x7FFFFFFF )
        return sub_10CCB00((__int64)a1, (unsigned __int64 *)a3);
      if ( v29 < (__int64)0xFFFFFFFF80000000LL )
        return 0;
      v28 = v29;
    }
    if ( v28 >= 0 )
      return sub_10CCB00((__int64)a1, (unsigned __int64 *)a3);
    return 0;
  }
  v4 = *(_QWORD *)a3;
  if ( a2[4] > *(_QWORD *)a3 )
    goto LABEL_3;
  if ( a2[4] == *(_QWORD *)a3 )
  {
    v13 = *(_QWORD *)(a3 + 16);
    v14 = a2[6];
    v15 = v14;
    if ( v13 <= v14 )
      v15 = *(_QWORD *)(a3 + 16);
    v38 = (const void *)a2[5];
    v37 = *(const void **)(a3 + 8);
    v39 = v15;
    LODWORD(v16) = sub_990B80(v37, v38, v15);
    v17 = v37;
    v18 = v38;
    v19 = v39;
    if ( !(_DWORD)v16 )
    {
      v16 = v13 - v14;
      if ( (__int64)(v13 - v14) > 0x7FFFFFFF )
        goto LABEL_21;
      if ( v16 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_3;
    }
    if ( (int)v16 < 0 )
    {
LABEL_3:
      result = (__int64)a2;
      if ( (_QWORD *)a1[3] == a2 )
        return result;
      v6 = std::_Rb_tree_decrement();
      v7 = v6;
      if ( v4 > *(_QWORD *)(v6 + 32) )
        goto LABEL_53;
      if ( v4 == *(_QWORD *)(v6 + 32) )
      {
        v8 = *(_QWORD *)(v6 + 48);
        v9 = *(_QWORD *)(a3 + 16);
        v10 = v9;
        if ( v8 <= v9 )
          v10 = *(_QWORD *)(v6 + 48);
        v11 = sub_990B80(*(const void **)(v6 + 40), *(const void **)(a3 + 8), v10);
        if ( v11 )
          goto LABEL_12;
        v12 = v8 - v9;
        if ( v12 <= 0x7FFFFFFF )
        {
          if ( v12 < (__int64)0xFFFFFFFF80000000LL )
          {
LABEL_53:
            result = 0;
            if ( *(_QWORD *)(v7 + 24) )
              return (__int64)a2;
            return result;
          }
          v11 = v12;
LABEL_12:
          if ( v11 >= 0 )
            return sub_10CCB00((__int64)a1, (unsigned __int64 *)a3);
          goto LABEL_53;
        }
      }
      return sub_10CCB00((__int64)a1, (unsigned __int64 *)a3);
    }
  }
  else
  {
    if ( a2[4] < *(_QWORD *)a3 )
      goto LABEL_40;
    v13 = *(_QWORD *)(a3 + 16);
    v14 = a2[6];
    v18 = (const void *)a2[5];
    v17 = *(const void **)(a3 + 8);
    v19 = v13;
    if ( v14 <= v13 )
      v19 = a2[6];
  }
LABEL_21:
  v20 = sub_990B80(v18, v17, v19);
  if ( v20 )
    goto LABEL_25;
  v21 = v14 - v13;
  if ( v21 > 0x7FFFFFFF )
    return (__int64)a2;
  if ( v21 >= (__int64)0xFFFFFFFF80000000LL )
  {
    v20 = v21;
LABEL_25:
    if ( v20 >= 0 )
      return (__int64)a2;
  }
LABEL_40:
  if ( (_QWORD *)a1[4] == a2 )
    return 0;
  v30 = std::_Rb_tree_increment();
  v31 = v30;
  if ( v4 >= *(_QWORD *)(v30 + 32) )
  {
    if ( v4 != *(_QWORD *)(v30 + 32) )
      return sub_10CCB00((__int64)a1, (unsigned __int64 *)a3);
    v32 = *(_QWORD *)(a3 + 16);
    v33 = *(_QWORD *)(v30 + 48);
    v34 = v33;
    if ( v32 <= v33 )
      v34 = *(_QWORD *)(a3 + 16);
    v35 = sub_990B80(*(const void **)(a3 + 8), *(const void **)(v30 + 40), v34);
    if ( !v35 )
    {
      v36 = v32 - v33;
      if ( v36 > 0x7FFFFFFF )
        return sub_10CCB00((__int64)a1, (unsigned __int64 *)a3);
      if ( v36 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_50;
      v35 = v36;
    }
    if ( v35 >= 0 )
      return sub_10CCB00((__int64)a1, (unsigned __int64 *)a3);
  }
LABEL_50:
  result = 0;
  if ( a2[3] )
    return v31;
  return result;
}

