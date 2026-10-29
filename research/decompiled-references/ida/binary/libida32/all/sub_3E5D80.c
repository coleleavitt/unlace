__int64 __fastcall sub_3E5D80(__int64 a1, __int64 a2, _BYTE *a3)
{
  const void *v3; // r15
  __int64 v4; // rbp
  const char *v5; // rdi
  size_t v7; // r14
  _QWORD *v8; // r15
  _QWORD *v9; // r9
  unsigned int v10; // r15d
  __int64 v11; // r14
  unsigned int v12; // ebx
  bool v14; // zf
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  const char *v18; // r11
  size_t v19; // rbx
  _QWORD *v20; // rcx
  char *v21; // rax
  _QWORD *v22; // r14
  char *v23; // r15
  __int64 v24; // rbp
  _QWORD *v25; // r13
  char *v26; // r12
  _QWORD *v27; // rbx
  const char *v28; // rsi
  const char *v29; // rdi
  int v30; // eax
  _QWORD *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  char *v35; // r11
  _QWORD *v36; // r9
  const char *v37; // rax
  const char *v38; // rdi
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v43; // [rsp+10h] [rbp-98h]
  _QWORD *v44; // [rsp+10h] [rbp-98h]
  const char *srcb; // [rsp+18h] [rbp-90h]
  unsigned int src; // [rsp+18h] [rbp-90h]
  char *srca; // [rsp+18h] [rbp-90h]
  _QWORD *v48; // [rsp+20h] [rbp-88h]
  _QWORD *v49; // [rsp+20h] [rbp-88h]
  __int64 v50; // [rsp+28h] [rbp-80h]
  _BYTE *v51; // [rsp+30h] [rbp-78h]
  char **p_s2; // [rsp+48h] [rbp-60h] BYREF
  char *s2; // [rsp+50h] [rbp-58h] BYREF
  __int128 v54; // [rsp+58h] [rbp-50h]
  unsigned __int64 v55; // [rsp+68h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  if ( !a2 )
    return (unsigned int)-1;
  v3 = *(const void **)(a2 + 24);
  v4 = a2;
  if ( !v3 || !*(_BYTE *)(a1 + 80) )
    return (unsigned int)-1;
  v5 = *(const char **)(a2 + 24);
  s2 = nullptr;
  v54 = 0;
  v7 = strlen(v5);
  s2 = (char *)qvector_reserve(&s2, 0, v7 + 1, 1);
  *(_QWORD *)&v54 = v7 + 1;
  memmove(s2, v3, v7);
  s2[v7] = 0;
  v8 = sub_3D80D0(a1 + 24, (__int64)&s2);
  if ( s2 )
  {
    *(_QWORD *)&v54 = 0;
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
    v11 = *(_QWORD *)a1 + 40LL * v10;
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
    if ( *(_DWORD *)(v11 + 12) == *(_DWORD *)(a2 + 56) && v10 <= 0x400 )
      goto LABEL_15;
    return (unsigned int)-1;
  }
  v15 = *(_QWORD *)(a1 + 8);
  v10 = v15;
  if ( !(_DWORD)v15 )
  {
    if ( v15 <= 1 )
    {
      v16 = 40;
      v17 = 2;
      v10 = 1;
      goto LABEL_22;
    }
    v10 = 1;
    v11 = *(_QWORD *)a1 + 40LL;
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
  v16 = 40LL * (unsigned int)v15;
  if ( (unsigned int)v15 < v15 || (v17 = (unsigned int)(v15 + 1), v17 == v15) )
  {
    v11 = *(_QWORD *)a1 + 40LL * (unsigned int)v15;
    goto LABEL_15;
  }
LABEL_22:
  sub_3E1240((__int64 *)a1, v17);
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
  v54 = 0;
  if ( v18 )
  {
    v48 = v9;
    srcb = v18;
    v19 = strlen(v18);
    s2 = (char *)qvector_reserve(&s2, 0, v19 + 1, 1);
    *(_QWORD *)&v54 = v19 + 1;
    memmove(s2, srcb, v19);
    v9 = v48;
    s2[v19] = 0;
  }
  v20 = v9;
  if ( !*(_QWORD *)(a1 + 40) )
    goto LABEL_46;
  v43 = v11;
  v21 = (char *)haystack;
  src = v10;
  v22 = v9;
  v50 = v4;
  v23 = s2;
  v24 = v54;
  if ( (_QWORD)v54 )
    v21 = s2;
  v51 = a3;
  v25 = *(_QWORD **)(a1 + 40);
  v49 = v9;
  v26 = v21;
  while ( 1 )
  {
    v32 = v25[5];
    if ( !v24 )
      break;
    if ( v32 )
      goto LABEL_38;
    v27 = v25;
    v28 = v23;
    v29 = haystack;
LABEL_31:
    v30 = strcmp(v29, v28);
    v31 = (_QWORD *)v25[2];
    v25 = (_QWORD *)v25[3];
    if ( v30 >= 0 )
    {
      v22 = v27;
      v25 = v31;
    }
    if ( !v25 )
    {
      v20 = v22;
      v34 = v24;
      v35 = v23;
      v11 = v43;
      v36 = v49;
      v10 = src;
      v4 = v50;
      a3 = v51;
      goto LABEL_42;
    }
  }
  if ( v32 )
  {
LABEL_38:
    v29 = (const char *)v25[4];
    v27 = v25;
    v28 = v26;
    goto LABEL_31;
  }
  while ( 1 )
  {
    v33 = v25[2];
    if ( !v33 )
      break;
    v22 = v25;
    v25 = (_QWORD *)v25[2];
    if ( *(_QWORD *)(v33 + 40) )
      goto LABEL_38;
  }
  v34 = 0;
  v35 = v23;
  v11 = v43;
  v36 = v49;
  v10 = src;
  v20 = v25;
  v4 = v50;
  a3 = v51;
LABEL_42:
  if ( v36 == v20 )
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
    v38 = v35;
LABEL_45:
    v44 = v20;
    srca = v35;
    v39 = strcmp(v38, v37);
    v20 = v44;
    if ( v39 >= 0 )
    {
      v35 = srca;
    }
    else
    {
LABEL_46:
      p_s2 = &s2;
      v40 = sub_3E54D0((_QWORD *)(a1 + 24), v20, (void ***)&p_s2);
      v35 = s2;
      v20 = (_QWORD *)v40;
    }
  }
  *((_DWORD *)v20 + 14) = v10;
  if ( v35 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v35);
  }
  v12 = v10;
  *(_DWORD *)(v11 + 12) = *(_DWORD *)(v4 + 56);
  LODWORD(p_s2) = -1;
  netnode_check(&p_s2, *(_QWORD *)(a1 + 88), 0, 1);
  v41 = *(_QWORD *)(v4 + 24);
  *(_BYTE *)(v11 + 8) = 1;
  HIDWORD(s2) = v10;
  LODWORD(s2) = *(_DWORD *)(v11 + 12);
  netnode_hashset((unsigned int)p_s2, v41, &s2, 8, 72);
LABEL_16:
  if ( a3 )
    *a3 = 0;
  return v12;
}

