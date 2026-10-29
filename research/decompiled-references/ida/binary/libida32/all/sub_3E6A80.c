unsigned __int64 __fastcall sub_3E6A80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 *v7; // rbp
  const char **v8; // r14
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rax
  const char *v14; // rbp
  unsigned __int64 v15; // rax
  size_t v16; // rax
  size_t v17; // r13
  size_t v18; // r14
  __int64 *v19; // rsi
  __int64 *v20; // r13
  __int64 v21; // r14
  char *v22; // rax
  __int64 *v23; // rbx
  char *v24; // r12
  char *v25; // r15
  __int64 *v26; // rbp
  const char *v27; // rsi
  const char *v28; // rdi
  int v29; // eax
  __int64 *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  const char *v33; // rsi
  __int64 v34; // rax
  char *v35; // rdx
  __int64 v36; // r13
  void *v37; // rdi
  unsigned __int64 v39; // rsi
  __int64 *v40; // rsi
  __int64 *v41; // r15
  __int64 v43; // [rsp+18h] [rbp-A0h]
  unsigned int v44; // [rsp+20h] [rbp-98h]
  unsigned int v45; // [rsp+24h] [rbp-94h]
  __int64 v46; // [rsp+28h] [rbp-90h]
  __int64 *v47; // [rsp+30h] [rbp-88h]
  char *v48; // [rsp+30h] [rbp-88h]
  const char *v49; // [rsp+38h] [rbp-80h]
  __int64 *v50; // [rsp+40h] [rbp-78h]
  __int64 v51; // [rsp+48h] [rbp-70h]
  char **p_s2; // [rsp+58h] [rbp-60h] BYREF
  char *s2; // [rsp+60h] [rbp-58h] BYREF
  __int128 v54; // [rsp+68h] [rbp-50h]
  unsigned __int64 v55; // [rsp+78h] [rbp-40h]

  v3 = a1;
  v4 = *(int *)(a1 + 8);
  v55 = __readfsqword(0x28u);
  switch_dbctx(v4);
  v6 = 3 * a3;
  v7 = *(__int64 **)(a2 + 40);
  v8 = (const char **)(**(_QWORD **)(v3 + 48) + 8 * v6);
  v9 = sub_3D80D0((__int64)(v7 + 3), (__int64)v8);
  if ( v9 == v7 + 4 )
    return v55 - __readfsqword(0x28u);
  v10 = *((unsigned int *)v9 + 14);
  v11 = *(__int64 **)(v3 + 40);
  v12 = 5 * v10;
  v45 = v10;
  v13 = *v7;
  v14 = haystack;
  v43 = v13 + 8 * v12;
  if ( v8[1] )
  {
    v15 = v11[1];
    v14 = *v8;
    v44 = v15;
    if ( (_DWORD)v15 )
    {
LABEL_4:
      if ( (unsigned int)v15 > 0x400 )
      {
        if ( !under_debugger )
          interr(2119);
        BUG();
      }
      v46 = (unsigned int)v15;
      if ( (unsigned int)v15 < v15 )
        goto LABEL_6;
      v39 = (unsigned int)(v15 + 1);
      if ( v15 == v39 )
        goto LABEL_6;
      goto LABEL_34;
    }
  }
  else
  {
    v15 = v11[1];
    v44 = v15;
    if ( (_DWORD)v15 )
      goto LABEL_4;
  }
  if ( v15 > 1 )
  {
    v46 = 1;
    v44 = 1;
    goto LABEL_6;
  }
  v46 = 1;
  v39 = 2;
  v44 = 1;
LABEL_34:
  sub_3E1240(v11, v39);
LABEL_6:
  s2 = nullptr;
  v54 = 0;
  if ( v14 )
  {
    v16 = strlen(v14);
    v17 = v16 + 1;
    v18 = v16;
    s2 = (char *)qvector_reserve(&s2, 0, v16 + 1, 1);
    *(_QWORD *)&v54 = v17;
    memmove(s2, v14, v18);
    s2[v18] = 0;
  }
  v19 = v11 + 4;
  v20 = v11 + 4;
  if ( !v11[5] )
    goto LABEL_25;
  v21 = v54;
  v47 = v11;
  v22 = (char *)haystack;
  v51 = v3;
  v23 = (__int64 *)v11[5];
  v49 = v14;
  v24 = s2;
  if ( (_QWORD)v54 )
    v22 = s2;
  v50 = v19;
  v25 = v22;
  while ( 1 )
  {
    v31 = v23[5];
    if ( !v21 )
      break;
    if ( v31 )
      goto LABEL_21;
    v26 = v23;
    v27 = v24;
    v28 = haystack;
LABEL_14:
    v29 = strcmp(v28, v27);
    v30 = (__int64 *)v23[2];
    v23 = (__int64 *)v23[3];
    if ( v29 >= 0 )
    {
      v20 = v26;
      v23 = v30;
    }
    if ( !v23 )
    {
      v35 = v24;
      v14 = v49;
      v40 = v50;
      v11 = v47;
      v3 = v51;
      goto LABEL_38;
    }
  }
  if ( v31 )
  {
LABEL_21:
    v28 = (const char *)v23[4];
    v26 = v23;
    v27 = v25;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v32 = v23[2];
    if ( !v32 )
      break;
    v20 = v23;
    v23 = (__int64 *)v23[2];
    if ( *(_QWORD *)(v32 + 40) )
      goto LABEL_21;
  }
  v41 = v23;
  v35 = v24;
  v14 = v49;
  v40 = v50;
  v11 = v47;
  v3 = v51;
  v20 = v41;
LABEL_38:
  if ( v40 == v20 )
    goto LABEL_25;
  if ( v20[5] )
  {
    v33 = (const char *)v20[4];
    if ( !v21 )
    {
      v48 = v35;
      if ( strcmp(haystack, v33) >= 0 )
      {
LABEL_42:
        v35 = v48;
        goto LABEL_26;
      }
LABEL_25:
      p_s2 = &s2;
      v34 = sub_3E54D0(v11 + 3, v20, (void ***)&p_s2);
      v35 = s2;
      v20 = (__int64 *)v34;
      goto LABEL_26;
    }
LABEL_24:
    v48 = v35;
    if ( strcmp(v35, v33) >= 0 )
      goto LABEL_42;
    goto LABEL_25;
  }
  if ( v21 )
  {
    v33 = haystack;
    goto LABEL_24;
  }
LABEL_26:
  *((_DWORD *)v20 + 14) = v44;
  if ( v35 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v35);
  }
  v36 = *v11 + 40 * v46;
  v37 = *(void **)(v36 + 16);
  *(_DWORD *)(v36 + 12) = *(_DWORD *)(v43 + 12);
  if ( v37 )
  {
    *(_QWORD *)(v36 + 24) = 0;
    qfree(v37);
    *(_QWORD *)(v36 + 16) = 0;
    *(_QWORD *)(v36 + 32) = 0;
  }
  *(_QWORD *)v36 = 0;
  LODWORD(p_s2) = -1;
  netnode_check(&p_s2, v11[11], 0, 1);
  *(_BYTE *)(v36 + 8) = 1;
  HIDWORD(s2) = v44;
  LODWORD(s2) = *(_DWORD *)(v36 + 12);
  netnode_hashset((unsigned int)p_s2, v14, &s2, 8, 72);
  sub_3D8760(*(_QWORD *)(v3 + 56), *(_DWORD *)(a2 + 12), *(_DWORD *)(v3 + 12), v45, v44, 1);
  return v55 - __readfsqword(0x28u);
}

