__int64 __fastcall sub_4B76C0(__int64 a1, const char *a2, __int64 a3, __int64 a4, double a5)
{
  int v6; // eax
  __int64 *v7; // rax
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 *v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // r12
  const char *v15; // rdi
  __int64 result; // rax
  __int64 *v17; // r14
  __int64 v18; // r15
  __int64 v19; // rbx
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 *v22; // r13
  __int64 v23; // r12
  __int64 v24; // r15
  _QWORD *v25; // rbx
  const char *v26; // rdi
  _QWORD *v27; // rbx
  __int64 v28; // rax
  size_t v29; // rax
  size_t v30; // r12
  char *v31; // rsi
  void *v32; // rdi
  size_t v33; // r13
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // [rsp+8h] [rbp-40h]
  __int64 v39; // [rsp+8h] [rbp-40h]
  __int64 v40; // [rsp+8h] [rbp-40h]

  v6 = *(_DWORD *)a1;
  if ( !(_BYTE)a3 )
  {
    if ( v6 == 3 )
    {
      v7 = *(__int64 **)(a1 + 8);
      v8 = v7[1];
      if ( !v8 )
        return 0;
      v9 = *v7;
      v10 = 0;
      while ( !*(_QWORD *)(v9 + 8) || strcmp(*(const char **)v9, "widgets_config") )
      {
        ++v10;
        v9 += 40;
        if ( v8 == v10 )
          return 0;
      }
      if ( *(_DWORD *)(v9 + 24) != 3 )
        return 0;
      v11 = *(__int64 **)(v9 + 32);
      v12 = v11[1];
      if ( !v12 )
        return 0;
      v13 = *v11;
      v14 = 0;
      while ( 1 )
      {
        v15 = &s1;
        if ( *(_QWORD *)(v13 + 8) )
          v15 = *(const char **)v13;
        if ( !strcmp(v15, a2) )
          break;
        ++v14;
        v13 += 40;
        if ( v12 == v14 )
          return 0;
      }
      if ( *(_DWORD *)(v13 + 24) == 3 )
        return *(_QWORD *)(v13 + 32);
      else
        return 0;
    }
LABEL_53:
    sub_4B56A0(a5, a1, (__int64)a2, a3, a4);
    return sub_4B7B20(a1, a2);
  }
  if ( v6 != 3 )
    goto LABEL_53;
  v17 = *(__int64 **)(a1 + 8);
  v18 = v17[1];
  v38 = *v17;
  if ( v18 )
  {
    v19 = *v17;
    v20 = 0;
    while ( !*(_QWORD *)(v19 + 8) || strcmp(*(const char **)v19, "widgets_config") )
    {
      ++v20;
      v19 += 40;
      if ( v18 == v20 )
        goto LABEL_45;
    }
  }
  else
  {
LABEL_45:
    if ( v17[2] < (unsigned __int64)(v18 + 1) )
    {
      v36 = qvector_reserve(v17, v38, v18 + 1, 40);
      v18 = v17[1];
      v38 = v36;
      *v17 = v36;
    }
    v19 = v38 + 40 * v18;
    *(_QWORD *)v19 = 0;
    *(_OWORD *)(v19 + 8) = 0;
    *(_DWORD *)(v19 + 24) = 0;
    *(_QWORD *)(v19 + 32) = 0;
    ++v17[1];
    v31 = *(char **)v19;
    if ( *(_QWORD *)(v19 + 16) <= 0xEu )
    {
      v35 = qvector_reserve(v19, v31, 15, 1);
      *(_QWORD *)v19 = v35;
      v31 = (char *)v35;
    }
    *(_QWORD *)(v19 + 8) = 15;
    qmemcpy(v31, "widgets_config", 14);
    *(_BYTE *)(*(_QWORD *)v19 + 14LL) = 0;
  }
  v21 = v19 + 24;
  if ( *(_DWORD *)v21 == 3 )
  {
    v22 = *(__int64 **)(v21 + 8);
  }
  else
  {
    v28 = qalloc_or_throw(24);
    *(_QWORD *)v28 = 0;
    v22 = (__int64 *)v28;
    *(_OWORD *)(v28 + 8) = 0;
    if ( *(_DWORD *)v21 )
      jvalue_t_clear(v21);
    *(_DWORD *)v21 = 3;
    *(_QWORD *)(v21 + 8) = v22;
  }
  v23 = v22[1];
  v24 = 0;
  v39 = *v22;
  v25 = (_QWORD *)*v22;
  if ( v23 )
  {
    while ( 1 )
    {
      v26 = &s1;
      if ( v25[1] )
        v26 = (const char *)*v25;
      if ( !strcmp(v26, a2) )
        break;
      ++v24;
      v25 += 5;
      if ( v23 == v24 )
        goto LABEL_40;
    }
  }
  else
  {
LABEL_40:
    if ( v22[2] < (unsigned __int64)(v23 + 1) )
    {
      v34 = qvector_reserve(v22, v39, v23 + 1, 40);
      v23 = v22[1];
      v39 = v34;
      *v22 = v34;
    }
    v25 = (_QWORD *)(v39 + 40 * v23);
    *v25 = 0;
    *((_DWORD *)v25 + 6) = 0;
    v25[4] = 0;
    *(_OWORD *)(v25 + 1) = 0;
    ++v22[1];
    if ( a2 && (v29 = strlen(a2), (v30 = v29) != 0) )
    {
      v32 = (void *)*v25;
      v33 = v29 + 1;
      if ( v25[2] < v29 + 1 )
      {
        v37 = qvector_reserve(v25, *v25, v29 + 1, 1);
        *v25 = v37;
        v32 = (void *)v37;
      }
      v25[1] = v33;
      memmove(v32, a2, v30);
      *(_BYTE *)(*v25 + v30) = 0;
    }
    else
    {
      v25[1] = 0;
    }
  }
  v27 = v25 + 3;
  if ( *(_DWORD *)v27 == 3 )
    return v27[1];
  result = qalloc_or_throw(24);
  *(_QWORD *)result = 0;
  *(_OWORD *)(result + 8) = 0;
  if ( *(_DWORD *)v27 )
  {
    v40 = result;
    jvalue_t_clear(v27);
    result = v40;
  }
  *(_DWORD *)v27 = 3;
  v27[1] = result;
  return result;
}
