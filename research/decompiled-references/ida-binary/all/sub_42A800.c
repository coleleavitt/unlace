__int64 __fastcall vault_files_dirspec_t__::vfunc_3(__int64 a1, const char *a2, const char *a3)
{
  _BYTE *v3; // rbp
  size_t v5; // rax
  size_t v6; // r15
  size_t v7; // rbx
  size_t v8; // rbx
  size_t v9; // rax
  size_t v10; // r8
  size_t v11; // r15
  size_t v12; // rdx
  __int64 v13; // rbp
  _QWORD *v14; // r15
  const char *v15; // r13
  char v16; // al
  const char *v17; // r14
  _QWORD *v18; // r12
  _QWORD *v19; // rbp
  const char *v20; // rdi
  int v21; // eax
  _QWORD *v22; // rcx
  __int64 v23; // rax
  const char *v24; // rdi
  __int64 v25; // rbx
  char *v27; // rax
  _QWORD *v28; // [rsp+0h] [rbp-68h]
  size_t v29; // [rsp+0h] [rbp-68h]
  size_t v30; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-50h]
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]

  v3 = a2;
  v33 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  if ( !a2 )
  {
    if ( !a3 )
    {
      v13 = *(_QWORD *)(a1 + 40);
LABEL_8:
      v14 = *(_QWORD **)(v13 + 368);
      v8 = 0;
      v15 = nullptr;
      v28 = (_QWORD *)(v13 + 360);
      v16 = 1;
      if ( !v14 )
        goto LABEL_30;
      goto LABEL_9;
    }
    v8 = 0;
    v11 = strlen(a3);
    v12 = v11 + 1;
    v10 = v11;
LABEL_42:
    v30 = v10;
    v29 = v12;
    src = (void *)qvector_reserve(&src, v3, v12, 1);
    v10 = v30;
    v3 = src;
    v12 = v29;
    goto LABEL_6;
  }
  v5 = strlen(a2);
  v6 = v5 + 1;
  v7 = v5;
  src = (void *)qvector_reserve(&src, 0, v5 + 1, 1);
  n[0] = v6;
  memmove(src, a2, v7);
  *((_BYTE *)src + v7) = 0;
  v8 = n[0];
  if ( !a3 )
    goto LABEL_7;
  v9 = strlen(a3);
  v3 = src;
  v10 = v9;
  if ( v8 )
  {
    --v8;
    v11 = v9 + v8;
  }
  else
  {
    v11 = v9;
  }
  v12 = v11 + 1;
  if ( n[1] < v11 + 1 )
    goto LABEL_42;
LABEL_6:
  n[0] = v12;
  a2 = a3;
  v3[v11] = 0;
  memmove((char *)src + v8, a3, v10);
  v8 = n[0];
LABEL_7:
  v13 = *(_QWORD *)(a1 + 40);
  if ( !v8 )
    goto LABEL_8;
  v27 = (char *)qalloc_or_throw(v8);
  a2 = (const char *)src;
  v15 = v27;
  memcpy(v27, src, v8);
  v14 = *(_QWORD **)(v13 + 368);
  v28 = (_QWORD *)(v13 + 360);
  if ( !v14 )
    goto LABEL_28;
  v16 = 0;
LABEL_9:
  v17 = &s1;
  v18 = v28;
  if ( !v16 )
    v17 = v15;
  while ( 1 )
  {
    v23 = v14[5];
    if ( !v8 )
      break;
    if ( v23 )
      goto LABEL_21;
    v19 = v14;
    a2 = v15;
    v20 = &s1;
LABEL_14:
    v21 = strcmp(v20, a2);
    v22 = (_QWORD *)v14[2];
    v14 = (_QWORD *)v14[3];
    if ( v21 >= 0 )
    {
      v18 = v19;
      v14 = v22;
    }
    if ( !v14 )
      goto LABEL_23;
  }
  if ( v23 )
  {
LABEL_21:
    v20 = (const char *)v14[4];
    v19 = v14;
    a2 = v17;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v22 = (_QWORD *)v14[2];
    if ( !v22 )
      break;
    v18 = v14;
    v14 = (_QWORD *)v14[2];
    if ( v22[5] )
      goto LABEL_21;
  }
  v18 = v14;
LABEL_23:
  if ( v28 == v18 )
    goto LABEL_28;
  if ( !v18[5] )
  {
    v24 = v15;
    a2 = &s1;
    if ( v8 )
      goto LABEL_27;
LABEL_32:
    if ( v15 )
      qfree(v15, a2);
    v25 = v18[9];
    goto LABEL_35;
  }
  v24 = &s1;
  a2 = (const char *)v18[4];
  if ( v8 )
    v24 = v15;
LABEL_27:
  if ( strcmp(v24, a2) >= 0 )
    goto LABEL_32;
LABEL_28:
  if ( v15 )
    qfree(v15, a2, a3, v22);
LABEL_30:
  v25 = -1;
LABEL_35:
  if ( src )
  {
    n[0] = 0;
    qfree(src, a2);
  }
  return v25;
}
