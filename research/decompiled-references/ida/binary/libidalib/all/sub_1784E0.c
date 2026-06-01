__int64 __fastcall sub_1784E0(__int64 *a1, const char *a2)
{
  size_t v3; // rax
  unsigned __int64 v4; // r12
  size_t v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r13
  int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // r15
  size_t v12; // rbp
  _BYTE *v13; // rdi
  void *v15; // rbx
  const char *v16; // rsi
  _BYTE *v17; // [rsp+0h] [rbp-58h]
  unsigned __int64 v18; // [rsp+8h] [rbp-50h]

  v17 = nullptr;
  v18 = 0;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3 + 1;
    v5 = v3;
    v17 = (_BYTE *)qvector_reserve();
    v18 = v4;
    memmove(v17, a2, v5);
    v17[v5] = 0;
    if ( v4 > 1 )
      qstrupr();
  }
  v6 = a1[1];
  v7 = *a1;
  v8 = *a1;
  if ( !(48 * v6) )
  {
LABEL_21:
    v8 = 0;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v9 = 0;
    v10 = 0;
    if ( *(_QWORD *)(v8 + 32) )
      break;
LABEL_20:
    v8 += 48;
    if ( v8 == v7 + 48 * v6 )
      goto LABEL_21;
  }
  while ( 1 )
  {
    v11 = *(_QWORD *)(v8 + 24) + 24 * v10;
    v12 = *(_QWORD *)(v11 + 8);
    if ( !v12 )
    {
      v13 = v17;
      if ( !v18 || !*v17 )
        goto LABEL_8;
      goto LABEL_18;
    }
    v15 = (void *)qalloc_or_throw();
    memcpy(v15, *(const void **)v11, v12);
    if ( v12 != 1 )
      qstrupr();
    v16 = v17;
    if ( !v18 )
      v16 = s1;
    if ( !strcmp((const char *)v15, v16) )
      break;
    if ( v15 )
      qfree();
LABEL_18:
    v10 = ++v9;
    if ( (unsigned __int64)v9 >= *(_QWORD *)(v8 + 32) )
    {
      v7 = *a1;
      v6 = a1[1];
      goto LABEL_20;
    }
  }
  if ( !v15 )
  {
LABEL_22:
    v13 = v17;
    goto LABEL_8;
  }
  qfree();
  v13 = v17;
LABEL_8:
  if ( v13 )
    qfree();
  return v8;
}

