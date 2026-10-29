unsigned __int64 __fastcall sub_3E6F60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rbp
  char **v8; // r13
  _QWORD *v9; // rax
  _QWORD *v10; // rbp
  unsigned __int64 v11; // rax
  size_t v12; // rax
  size_t v13; // r12
  size_t v14; // r13
  _QWORD *v15; // r12
  __int64 v16; // r13
  char *v17; // r15
  const char *v18; // rax
  _QWORD *v19; // rbx
  const char *v20; // r14
  _QWORD *v21; // rbp
  const char *v22; // rsi
  const char *v23; // rdi
  int v24; // eax
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  const char *v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // r9
  _QWORD *v31; // r12
  unsigned __int64 v33; // r12
  __int64 v34; // rsi
  unsigned __int64 v35; // rcx
  _QWORD *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r14
  char v39; // r13
  __int64 v40; // rcx
  __int64 v41; // rax
  char *s; // [rsp+0h] [rbp-A8h]
  unsigned int v45; // [rsp+18h] [rbp-90h]
  unsigned int v46; // [rsp+1Ch] [rbp-8Ch]
  __int64 v47; // [rsp+20h] [rbp-88h]
  _QWORD *v48; // [rsp+28h] [rbp-80h]
  _QWORD *v49; // [rsp+30h] [rbp-78h]
  void **v50; // [rsp+48h] [rbp-60h] BYREF
  _BYTE s2[24]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v52; // [rsp+68h] [rbp-40h]

  v4 = *(int *)(a1 + 8);
  v52 = __readfsqword(0x28u);
  switch_dbctx(v4);
  v6 = 3 * a3;
  v7 = *(_QWORD *)(a2 + 40);
  v8 = (char **)(**(_QWORD **)(a1 + 48) + 8 * v6);
  v9 = sub_3D80D0(v7 + 24, (__int64)v8);
  if ( v9 == (_QWORD *)(v7 + 32) )
    return v52 - __readfsqword(0x28u);
  v10 = *(_QWORD **)(a1 + 40);
  v46 = *((_DWORD *)v9 + 14);
  s = (char *)haystack;
  if ( v8[1] )
  {
    s = *v8;
    v11 = v10[1];
    v45 = v11;
    if ( (_DWORD)v11 )
    {
LABEL_4:
      if ( (unsigned int)v11 > 0x400 )
      {
        if ( !under_debugger )
          interr(2119);
        BUG();
      }
      v47 = (unsigned int)v11;
      if ( (unsigned int)v11 < v11 )
        goto LABEL_6;
      v33 = (unsigned int)(v11 + 1);
      if ( v11 == v33 )
        goto LABEL_6;
      *(_QWORD *)s2 = 0;
      s2[8] = 0;
      if ( v33 < v11 )
        goto LABEL_52;
      v34 = *v10;
      v35 = v10[2];
      if ( (unsigned __int64)s2 < *v10 )
        goto LABEL_46;
      goto LABEL_55;
    }
  }
  else
  {
    v11 = v10[1];
    v45 = v11;
    if ( (_DWORD)v11 )
      goto LABEL_4;
  }
  if ( v11 <= 1 )
  {
    s2[8] = 0;
    v33 = 2;
    *(_QWORD *)s2 = 0;
    v34 = *v10;
    v35 = v10[2];
    if ( (unsigned __int64)s2 < *v10 )
    {
      if ( v35 > 1 )
      {
        v45 = 1;
        v11 = 0;
        v47 = 1;
        goto LABEL_49;
      }
      v45 = 1;
      v47 = 1;
      goto LABEL_62;
    }
    v45 = 1;
    v47 = 1;
LABEL_55:
    if ( (unsigned __int64)s2 < v34 + 16 * v35 )
    {
      v38 = *(_QWORD *)s2;
      v39 = s2[8];
      if ( v35 < v33 )
      {
        *v10 = qvector_reserve(v10, v34, v33, 16);
        v11 = v10[1];
      }
      v40 = 16 * v11;
      if ( v11 < v33 )
      {
        do
        {
          v41 = v40 + *v10;
          v40 += 16;
          *(_QWORD *)v41 = v38;
          *(_BYTE *)(v41 + 8) = v39;
        }
        while ( 16 * v33 != v40 );
      }
      goto LABEL_52;
    }
LABEL_46:
    if ( v35 >= v33 )
    {
LABEL_47:
      if ( v11 >= v33 )
      {
LABEL_52:
        v10[1] = v33;
        goto LABEL_6;
      }
      v34 = *v10;
LABEL_49:
      v37 = 16 * v11;
      while ( 1 )
      {
        *(__m128i *)(v34 + v37) = _mm_load_si128((const __m128i *)s2);
        v37 += 16;
        if ( v37 == 16 * v33 )
          break;
        v34 = *v10;
      }
      goto LABEL_52;
    }
LABEL_62:
    *v10 = qvector_reserve(v10, v34, v33, 16);
    v11 = v10[1];
    goto LABEL_47;
  }
  v47 = 1;
  v45 = 1;
LABEL_6:
  memset(s2, 0, sizeof(s2));
  if ( s )
  {
    v12 = strlen(s);
    v13 = v12 + 1;
    v14 = v12;
    *(_QWORD *)s2 = qvector_reserve(s2, 0, v12 + 1, 1);
    *(_QWORD *)&s2[8] = v13;
    memmove(*(void **)s2, s, v14);
    *(_BYTE *)(*(_QWORD *)s2 + v14) = 0;
  }
  v15 = v10 + 4;
  if ( !v10[5] )
    goto LABEL_25;
  v16 = *(_QWORD *)&s2[8];
  v17 = *(char **)s2;
  v18 = haystack;
  v19 = (_QWORD *)v10[5];
  v48 = v10;
  v49 = v10 + 4;
  if ( *(_QWORD *)&s2[8] )
    v18 = *(const char **)s2;
  v20 = v18;
  while ( 1 )
  {
    v26 = v19[5];
    if ( !v16 )
      break;
    if ( v26 )
      goto LABEL_21;
    v21 = v19;
    v22 = v17;
    v23 = haystack;
LABEL_14:
    v24 = strcmp(v23, v22);
    v25 = (_QWORD *)v19[2];
    v19 = (_QWORD *)v19[3];
    if ( v24 >= 0 )
    {
      v15 = v21;
      v19 = v25;
    }
    if ( !v19 )
    {
      v10 = v48;
      v36 = v49;
      goto LABEL_37;
    }
  }
  if ( v26 )
  {
LABEL_21:
    v23 = (const char *)v19[4];
    v21 = v19;
    v22 = v20;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v27 = v19[2];
    if ( !v27 )
      break;
    v15 = v19;
    v19 = (_QWORD *)v19[2];
    if ( *(_QWORD *)(v27 + 40) )
      goto LABEL_21;
  }
  v10 = v48;
  v36 = v49;
  v15 = v19;
LABEL_37:
  if ( v36 == v15 )
    goto LABEL_25;
  if ( !v15[5] )
  {
    if ( !v16 )
      goto LABEL_26;
    v28 = haystack;
LABEL_24:
    if ( strcmp(v17, v28) >= 0 )
      goto LABEL_26;
LABEL_25:
    v50 = (void **)s2;
    v29 = sub_3E54D0(v10 + 3, v15, &v50);
    v17 = *(char **)s2;
    v15 = (_QWORD *)v29;
    goto LABEL_26;
  }
  v28 = (const char *)v15[4];
  if ( v16 )
    goto LABEL_24;
  if ( strcmp(haystack, (const char *)v15[4]) < 0 )
    goto LABEL_25;
LABEL_26:
  *((_DWORD *)v15 + 14) = v45;
  if ( v17 )
  {
    *(_QWORD *)&s2[8] = 0;
    qfree(v17);
  }
  v30 = (_QWORD *)(*v10 + 16 * v47);
  *v30 = 0;
  v31 = v30;
  LODWORD(v50) = -1;
  netnode_check(&v50, v10[11], 0, 1);
  *(_DWORD *)s2 = v45;
  *((_BYTE *)v31 + 8) = 1;
  netnode_hashset((unsigned int)v50, s, s2, 4, 72);
  sub_3D8760(*(_QWORD *)(a1 + 56), *(_DWORD *)(a2 + 12), *(_DWORD *)(a1 + 12), v46, v45, 1);
  return v52 - __readfsqword(0x28u);
}

