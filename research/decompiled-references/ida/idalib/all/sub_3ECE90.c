unsigned __int64 __fastcall sub_3ECE90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v6; // rdx
  _QWORD *v7; // rbp
  const char **v8; // r14
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 *v11; // r12
  const char *v12; // rbp
  unsigned __int64 v13; // rax
  size_t v14; // rax
  size_t v15; // r13
  size_t v16; // r14
  __int64 *v17; // rsi
  __int64 *v18; // r13
  __int64 v19; // r14
  char *v20; // rax
  __int64 *v21; // rbx
  char *v22; // r12
  char *v23; // r15
  __int64 *v24; // rbp
  const char *v25; // rsi
  const char *v26; // rdi
  int v27; // eax
  __int64 *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  const char *v31; // rsi
  __int64 *v32; // rax
  char *v33; // rdx
  _QWORD *v34; // r8
  void *v35; // rdi
  _QWORD *v36; // r13
  unsigned __int64 v38; // rsi
  __int64 *v39; // rsi
  __int64 *v40; // r15
  __int64 v42; // [rsp+18h] [rbp-A0h]
  unsigned int v43; // [rsp+20h] [rbp-98h]
  unsigned int v44; // [rsp+24h] [rbp-94h]
  __int64 v45; // [rsp+28h] [rbp-90h]
  __int64 *v46; // [rsp+30h] [rbp-88h]
  char *v47; // [rsp+30h] [rbp-88h]
  const char *v48; // [rsp+38h] [rbp-80h]
  __int64 *v49; // [rsp+40h] [rbp-78h]
  __int64 v50; // [rsp+48h] [rbp-70h]
  __int64 p_s2; // [rsp+58h] [rbp-60h] BYREF
  char *s2; // [rsp+60h] [rbp-58h] BYREF
  __int128 v53; // [rsp+68h] [rbp-50h]
  unsigned __int64 v54; // [rsp+78h] [rbp-40h]

  v3 = a1;
  v4 = *(int *)(a1 + 8);
  v54 = __readfsqword(0x28u);
  switch_dbctx(v4);
  v6 = 3 * a3;
  v7 = *(_QWORD **)(a2 + 40);
  v8 = (const char **)(**(_QWORD **)(v3 + 48) + 8 * v6);
  v9 = sub_3DDF90((__int64)(v7 + 3), (__int64)v8);
  if ( v9 == v7 + 4 )
    return v54 - __readfsqword(0x28u);
  v10 = *((unsigned int *)v9 + 14);
  v11 = *(__int64 **)(v3 + 40);
  v44 = v10;
  v42 = *v7 + 48 * v10;
  v12 = haystack;
  if ( v8[1] )
  {
    v13 = v11[1];
    v12 = *v8;
    v43 = v13;
    if ( (_DWORD)v13 )
    {
LABEL_4:
      if ( (unsigned int)v13 > 0x400 )
      {
        if ( !under_debugger )
          interr(2119);
        BUG();
      }
      v45 = (unsigned int)v13;
      if ( (unsigned int)v13 < v13 )
        goto LABEL_6;
      v38 = (unsigned int)(v13 + 1);
      if ( v13 == v38 )
        goto LABEL_6;
      goto LABEL_34;
    }
  }
  else
  {
    v13 = v11[1];
    v43 = v13;
    if ( (_DWORD)v13 )
      goto LABEL_4;
  }
  if ( v13 > 1 )
  {
    v45 = 1;
    v43 = 1;
    goto LABEL_6;
  }
  v45 = 1;
  v38 = 2;
  v43 = 1;
LABEL_34:
  sub_3E74C0(v11, v38);
LABEL_6:
  s2 = nullptr;
  v53 = 0;
  if ( v12 )
  {
    v14 = strlen(v12);
    v15 = v14 + 1;
    v16 = v14;
    s2 = (char *)qvector_reserve(&s2, 0, v14 + 1, 1);
    *(_QWORD *)&v53 = v15;
    memmove(s2, v12, v16);
    s2[v16] = 0;
  }
  v17 = v11 + 4;
  v18 = v11 + 4;
  if ( !v11[5] )
    goto LABEL_25;
  v19 = v53;
  v46 = v11;
  v20 = (char *)haystack;
  v50 = v3;
  v21 = (__int64 *)v11[5];
  v48 = v12;
  v22 = s2;
  if ( (_QWORD)v53 )
    v20 = s2;
  v49 = v17;
  v23 = v20;
  while ( 1 )
  {
    v29 = v21[5];
    if ( !v19 )
      break;
    if ( v29 )
      goto LABEL_21;
    v24 = v21;
    v25 = v22;
    v26 = haystack;
LABEL_14:
    v27 = strcmp(v26, v25);
    v28 = (__int64 *)v21[2];
    v21 = (__int64 *)v21[3];
    if ( v27 >= 0 )
    {
      v18 = v24;
      v21 = v28;
    }
    if ( !v21 )
    {
      v33 = v22;
      v12 = v48;
      v39 = v49;
      v11 = v46;
      v3 = v50;
      goto LABEL_38;
    }
  }
  if ( v29 )
  {
LABEL_21:
    v26 = (const char *)v21[4];
    v24 = v21;
    v25 = v23;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v30 = v21[2];
    if ( !v30 )
      break;
    v18 = v21;
    v21 = (__int64 *)v21[2];
    if ( *(_QWORD *)(v30 + 40) )
      goto LABEL_21;
  }
  v40 = v21;
  v33 = v22;
  v12 = v48;
  v39 = v49;
  v11 = v46;
  v3 = v50;
  v18 = v40;
LABEL_38:
  if ( v39 == v18 )
    goto LABEL_25;
  if ( v18[5] )
  {
    v31 = (const char *)v18[4];
    if ( !v19 )
    {
      v47 = v33;
      if ( strcmp(haystack, v31) >= 0 )
      {
LABEL_42:
        v33 = v47;
        goto LABEL_26;
      }
LABEL_25:
      p_s2 = (__int64)&s2;
      v32 = sub_3EB8C0(v11 + 3, v18, (void ***)&p_s2);
      v33 = s2;
      v18 = v32;
      goto LABEL_26;
    }
LABEL_24:
    v47 = v33;
    if ( strcmp(v33, v31) >= 0 )
      goto LABEL_42;
    goto LABEL_25;
  }
  if ( v19 )
  {
    v31 = haystack;
    goto LABEL_24;
  }
LABEL_26:
  *((_DWORD *)v18 + 14) = v43;
  if ( v33 )
  {
    *(_QWORD *)&v53 = 0;
    qfree(v33);
  }
  v34 = (_QWORD *)(*v11 + 48 * v45);
  v35 = (void *)v34[3];
  v36 = v34;
  v34[2] = *(_QWORD *)(v42 + 16);
  if ( v35 )
  {
    v34[4] = 0;
    qfree(v35);
    v36[3] = 0;
    v36[5] = 0;
  }
  *v36 = 0;
  p_s2 = -1;
  netnode_check(&p_s2, v11[11], 0, 1);
  *((_BYTE *)v36 + 8) = 1;
  *(_QWORD *)&v53 = v43;
  s2 = (char *)v36[2];
  netnode_hashset(p_s2, v12, &s2, 16, 72);
  sub_3DE620(*(_QWORD *)(v3 + 56), *(_DWORD *)(a2 + 12), *(_DWORD *)(v3 + 12), v44, v43, 1);
  return v54 - __readfsqword(0x28u);
}
