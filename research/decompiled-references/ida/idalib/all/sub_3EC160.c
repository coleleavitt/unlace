__int64 __fastcall sub_3EC160(__int64 a1, __int64 a2, _BYTE *a3)
{
  const void *v3; // r15
  __int64 v4; // rbp
  const char *v5; // rdi
  size_t v7; // r14
  _QWORD *v8; // r15
  _QWORD *v9; // r9
  unsigned int v10; // r15d
  __int64 v11; // r8
  unsigned int v12; // ebx
  bool v14; // zf
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  const char *v18; // r11
  size_t v19; // rbx
  _QWORD *v20; // rcx
  char *v21; // rax
  _QWORD *v22; // r15
  __int64 v23; // rbp
  _QWORD *v24; // r13
  char *v25; // r14
  char *v26; // r12
  _QWORD *v27; // rbx
  const char *v28; // rsi
  const char *v29; // rdi
  int v30; // eax
  _QWORD *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  _QWORD *v35; // r9
  char *v36; // r11
  const char *v37; // rax
  const char *v38; // rdi
  int v39; // eax
  _QWORD *v40; // rax
  __int64 v41; // rsi
  __int64 v43; // [rsp+8h] [rbp-A0h]
  __int64 v44; // [rsp+8h] [rbp-A0h]
  __int64 v45; // [rsp+10h] [rbp-98h]
  __int64 v46; // [rsp+10h] [rbp-98h]
  __int64 v47; // [rsp+10h] [rbp-98h]
  const char *srca; // [rsp+18h] [rbp-90h]
  unsigned int src; // [rsp+18h] [rbp-90h]
  _QWORD *srcb; // [rsp+18h] [rbp-90h]
  __int64 v51; // [rsp+20h] [rbp-88h]
  _QWORD *v52; // [rsp+20h] [rbp-88h]
  char *v53; // [rsp+20h] [rbp-88h]
  _QWORD *v54; // [rsp+28h] [rbp-80h]
  __int64 v55; // [rsp+28h] [rbp-80h]
  _BYTE *v56; // [rsp+30h] [rbp-78h]
  __int64 p_s2; // [rsp+48h] [rbp-60h] BYREF
  char *s2; // [rsp+50h] [rbp-58h] BYREF
  __int128 v59; // [rsp+58h] [rbp-50h]
  unsigned __int64 v60; // [rsp+68h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  if ( !a2 )
    return (unsigned int)-1;
  v3 = *(const void **)(a2 + 24);
  v4 = a2;
  if ( !v3 || !*(_BYTE *)(a1 + 80) )
    return (unsigned int)-1;
  v5 = *(const char **)(a2 + 24);
  s2 = nullptr;
  v59 = 0;
  v7 = strlen(v5);
  s2 = (char *)qvector_reserve(&s2, 0, v7 + 1, 1);
  *(_QWORD *)&v59 = v7 + 1;
  memmove(s2, v3, v7);
  s2[v7] = 0;
  v8 = sub_3DDF90(a1 + 24, (__int64)&s2);
  if ( s2 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(s2);
  }
  v9 = (_QWORD *)(a1 + 32);
  if ( (_QWORD *)(a1 + 32) != v8 )
  {
    v10 = *((_DWORD *)v8 + 14);
    if ( !v10 || (unsigned __int64)v10 >= *(_QWORD *)(a1 + 8) )
    {
      if ( !under_debugger )
        interr(1387);
      BUG();
    }
    v11 = *(_QWORD *)a1 + 48LL * v10;
    if ( *(_QWORD *)v11 )
    {
      v12 = -1;
      if ( a3 )
      {
        *a3 = 1;
        return v10;
      }
      return v12;
    }
    if ( *(_QWORD *)(v11 + 16) == *(_QWORD *)(a2 + 56) && v10 <= 0x400 )
      goto LABEL_15;
    return (unsigned int)-1;
  }
  v15 = *(_QWORD *)(a1 + 8);
  v10 = v15;
  if ( !(_DWORD)v15 )
  {
    if ( v15 <= 1 )
    {
      v16 = 48;
      v17 = 2;
      v10 = 1;
      goto LABEL_22;
    }
    v10 = 1;
    v11 = *(_QWORD *)a1 + 48LL;
LABEL_15:
    v14 = *(_BYTE *)(v11 + 8) == 0;
    *(_QWORD *)v11 = v4;
    v12 = v10;
    if ( !v14 )
      goto LABEL_16;
    goto LABEL_23;
  }
  if ( (unsigned int)v15 > 0x400 )
    return (unsigned int)-1;
  v16 = 48LL * (unsigned int)v15;
  if ( (unsigned int)v15 < v15 || (v17 = (unsigned int)(v15 + 1), v17 == v15) )
  {
    v11 = *(_QWORD *)a1 + 48LL * (unsigned int)v15;
    goto LABEL_15;
  }
LABEL_22:
  sub_3E74C0((__int64 *)a1, v17);
  v9 = (_QWORD *)(a1 + 32);
  v11 = *(_QWORD *)a1 + v16;
  v12 = v10;
  v14 = *(_BYTE *)(v11 + 8) == 0;
  *(_QWORD *)v11 = v4;
  if ( !v14 )
    goto LABEL_16;
LABEL_23:
  v18 = *(const char **)(v4 + 24);
  s2 = nullptr;
  v59 = 0;
  if ( v18 )
  {
    v54 = v9;
    v51 = v11;
    srca = v18;
    v19 = strlen(v18);
    s2 = (char *)qvector_reserve(&s2, 0, v19 + 1, 1);
    *(_QWORD *)&v59 = v19 + 1;
    memmove(s2, srca, v19);
    v9 = v54;
    v11 = v51;
    s2[v19] = 0;
  }
  v20 = v9;
  if ( !*(_QWORD *)(a1 + 40) )
    goto LABEL_46;
  src = v10;
  v21 = (char *)haystack;
  v55 = v4;
  v22 = v9;
  v56 = a3;
  v23 = v59;
  if ( (_QWORD)v59 )
    v21 = s2;
  v24 = *(_QWORD **)(a1 + 40);
  v25 = s2;
  v45 = v11;
  v52 = v9;
  v26 = v21;
  while ( 1 )
  {
    v32 = v24[5];
    if ( !v23 )
      break;
    if ( v32 )
      goto LABEL_38;
    v27 = v24;
    v28 = v25;
    v29 = haystack;
LABEL_31:
    v30 = strcmp(v29, v28);
    v31 = (_QWORD *)v24[2];
    v24 = (_QWORD *)v24[3];
    if ( v30 >= 0 )
    {
      v22 = v27;
      v24 = v31;
    }
    if ( !v24 )
    {
      v20 = v22;
      v34 = v23;
      v11 = v45;
      v10 = src;
      v35 = v52;
      v4 = v55;
      v36 = v25;
      a3 = v56;
      goto LABEL_42;
    }
  }
  if ( v32 )
  {
LABEL_38:
    v29 = (const char *)v24[4];
    v27 = v24;
    v28 = v26;
    goto LABEL_31;
  }
  while ( 1 )
  {
    v33 = v24[2];
    if ( !v33 )
      break;
    v22 = v24;
    v24 = (_QWORD *)v24[2];
    if ( *(_QWORD *)(v33 + 40) )
      goto LABEL_38;
  }
  v36 = v25;
  v34 = 0;
  v11 = v45;
  v10 = src;
  v35 = v52;
  v20 = v24;
  v4 = v55;
  a3 = v56;
LABEL_42:
  if ( v35 == v20 )
    goto LABEL_46;
  if ( v20[5] )
  {
    v37 = (const char *)v20[4];
    v38 = haystack;
    if ( !v34 )
      goto LABEL_45;
    goto LABEL_51;
  }
  v37 = haystack;
  if ( v34 )
  {
LABEL_51:
    v38 = v36;
LABEL_45:
    srcb = v20;
    v46 = v11;
    v53 = v36;
    v39 = strcmp(v38, v37);
    v11 = v46;
    v20 = srcb;
    if ( v39 >= 0 )
    {
      v36 = v53;
    }
    else
    {
LABEL_46:
      v47 = v11;
      p_s2 = (__int64)&s2;
      v40 = sub_3EB8C0((_QWORD *)(a1 + 24), v20, (void ***)&p_s2);
      v36 = s2;
      v11 = v47;
      v20 = v40;
    }
  }
  *((_DWORD *)v20 + 14) = v10;
  if ( v36 )
  {
    v43 = v11;
    *(_QWORD *)&v59 = 0;
    qfree(v36);
    v11 = v43;
  }
  v44 = v11;
  v12 = v10;
  *(_QWORD *)(v11 + 16) = *(_QWORD *)(v4 + 56);
  p_s2 = -1;
  netnode_check(&p_s2, *(_QWORD *)(a1 + 88), 0, 1);
  v41 = *(_QWORD *)(v4 + 24);
  *(_BYTE *)(v44 + 8) = 1;
  *(_QWORD *)&v59 = v10;
  s2 = *(char **)(v44 + 16);
  netnode_hashset(p_s2, v41, &s2, 16, 72);
LABEL_16:
  if ( a3 )
    *a3 = 0;
  return v12;
}
