__int64 __fastcall sub_6C86E0(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  char v3; // al
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  const char *v8; // rsi
  _QWORD *v9; // r13
  _QWORD *v10; // rbp
  _QWORD *v11; // r15
  __int64 v12; // r12
  _QWORD *v13; // rbx
  const char *v14; // rdi
  const char *v15; // rsi
  int v16; // eax
  _QWORD *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rsi
  const char *v20; // rsi
  const char *v22; // rdi
  unsigned __int64 v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // r15
  _QWORD *v26; // r12
  const char *v27; // rsi
  _QWORD *v28; // r14
  const char *v29; // rdi
  int v30; // eax
  _QWORD *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r14
  __int64 v35; // r15
  _QWORD *v36; // rbp
  const char *v37; // rsi
  _QWORD *v38; // r12
  const char *v39; // rdi
  int v40; // eax
  _QWORD *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  const char *v44; // rsi
  const char *v45; // rdi
  __int64 v46; // rax
  const char *v47; // rsi
  const char *v48; // rdi
  int v49; // eax
  const char *v50; // rsi
  const char *v51; // rdi
  __int64 v52; // rax
  const char *v53; // rsi
  const char *v54; // rdi
  int v55; // eax
  __int64 v56; // [rsp+0h] [rbp-78h]
  __int64 v58; // [rsp+10h] [rbp-68h]
  _QWORD *v59; // [rsp+18h] [rbp-60h]
  unsigned __int64 v60; // [rsp+20h] [rbp-58h]
  __int64 v61[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = *(_BYTE *)(a2 + 32) & 0x2F;
  v61[1] = __readfsqword(0x28u);
  v4 = a3;
  if ( v3 == 13 )
    v56 = *(_QWORD *)(a2 + 144) + 144 * a3 + 16;
  else
    v56 = *(_QWORD *)(a2 + 40) + 32 * a3;
  v5 = *a1;
  v58 = *a1;
  v60 = *(_QWORD *)(*a1 + 48LL);
  if ( v4 >= v60 )
    goto LABEL_8;
  if ( (*(_BYTE *)(v5 + 32) & 0x2F) == 0xD )
  {
    v6 = *(_QWORD *)(v56 + 8);
    v7 = *(_QWORD *)(v58 + 144) + 144 * v4 + 16;
    if ( *(_QWORD *)(*(_QWORD *)(v58 + 144) + 144 * v4 + 24) )
      goto LABEL_6;
LABEL_26:
    v8 = haystack;
    if ( !v6 )
      return v4;
LABEL_27:
    if ( !strcmp(*(const char **)v56, v8) )
      return v4;
    goto LABEL_8;
  }
  v7 = *(_QWORD *)(v5 + 40) + 32 * v4;
  v6 = *(_QWORD *)(v56 + 8);
  if ( !*(_QWORD *)(v7 + 8) )
    goto LABEL_26;
LABEL_6:
  v8 = *(const char **)v7;
  if ( v6 )
    goto LABEL_27;
  if ( !strcmp(haystack, v8) )
    return v4;
LABEL_8:
  v9 = (_QWORD *)a1[3];
  v10 = a1 + 2;
  v59 = a1 + 2;
  if ( !v9 )
    goto LABEL_31;
  v11 = (_QWORD *)a1[3];
  v12 = *(_QWORD *)(v56 + 8);
  while ( 1 )
  {
    v18 = v11[5];
    if ( !v12 )
      break;
    v13 = v11;
    v14 = haystack;
    v15 = *(const char **)v56;
    if ( v18 )
      goto LABEL_11;
LABEL_12:
    v16 = strcmp(v14, v15);
    v17 = (_QWORD *)v11[2];
    v11 = (_QWORD *)v11[3];
    if ( v16 >= 0 )
    {
      v10 = v13;
      v11 = v17;
    }
    if ( !v11 )
      goto LABEL_21;
  }
  if ( v18 )
  {
LABEL_19:
    v15 = haystack;
LABEL_11:
    v14 = (const char *)v11[4];
    v13 = v11;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v19 = v11[2];
    if ( !v19 )
      break;
    v10 = v11;
    v11 = (_QWORD *)v11[2];
    if ( *(_QWORD *)(v19 + 40) )
      goto LABEL_19;
  }
  v10 = v11;
LABEL_21:
  if ( v59 != v10 )
  {
    if ( v10[5] )
    {
      v20 = (const char *)v10[4];
      v22 = haystack;
      if ( v12 )
        goto LABEL_45;
    }
    else
    {
      v20 = haystack;
      if ( !v12 )
        return v10[7];
LABEL_45:
      v22 = *(const char **)v56;
    }
    if ( strcmp(v22, v20) >= 0 )
      return v10[7];
  }
LABEL_31:
  v23 = a1[7];
  if ( (*(_BYTE *)(v58 + 32) & 0x2F) != 0xD )
  {
    if ( v23 >= v60 )
      return -1;
    while ( 1 )
    {
      v34 = *(_QWORD *)(v58 + 40) + 32 * v23;
      if ( !v9 )
      {
        v36 = a1 + 2;
        goto LABEL_80;
      }
      v35 = *(_QWORD *)(*(_QWORD *)(v58 + 40) + 32 * v23 + 8);
      v36 = a1 + 2;
      while ( 1 )
      {
        v42 = v9[5];
        if ( !v35 )
          break;
        v37 = *(const char **)v34;
        v38 = v9;
        v39 = haystack;
        if ( v42 )
          goto LABEL_53;
LABEL_54:
        v40 = strcmp(v39, v37);
        v41 = (_QWORD *)v9[2];
        v9 = (_QWORD *)v9[3];
        if ( v40 >= 0 )
        {
          v36 = v38;
          v9 = v41;
        }
        if ( !v9 )
          goto LABEL_75;
      }
      if ( v42 )
        break;
      while ( 1 )
      {
        v43 = v9[2];
        if ( !v43 )
          break;
        v36 = v9;
        v9 = (_QWORD *)v9[2];
        if ( *(_QWORD *)(v43 + 40) )
          goto LABEL_61;
      }
      v36 = v9;
LABEL_75:
      if ( v59 == v36 )
        goto LABEL_80;
      if ( v36[5] )
      {
        v50 = (const char *)v36[4];
        v51 = haystack;
        if ( v35 )
          goto LABEL_78;
LABEL_79:
        if ( strcmp(v51, v50) < 0 )
        {
LABEL_80:
          v61[0] = v34;
          v36 = sub_6C8580(a1 + 1, v36, v61);
        }
      }
      else
      {
        v50 = haystack;
        if ( v35 )
        {
LABEL_78:
          v51 = *(const char **)v34;
          goto LABEL_79;
        }
      }
      v36[7] = v23;
      v52 = *(_QWORD *)(v34 + 8);
      if ( *(_QWORD *)(v56 + 8) )
      {
        v53 = *(const char **)v56;
        v54 = haystack;
        if ( !v52 )
          goto LABEL_83;
        goto LABEL_93;
      }
      if ( !v52 )
        return a1[7];
      v53 = haystack;
LABEL_93:
      v54 = *(const char **)v34;
LABEL_83:
      v55 = strcmp(v54, v53);
      v4 = a1[7];
      if ( !v55 )
        return v4;
      v23 = v4 + 1;
      a1[7] = v23;
      if ( v23 >= *(_QWORD *)(v58 + 48) )
        return -1;
      v9 = (_QWORD *)a1[3];
    }
LABEL_61:
    v37 = haystack;
LABEL_53:
    v39 = (const char *)v9[4];
    v38 = v9;
    goto LABEL_54;
  }
  if ( v23 >= *(_QWORD *)(v58 + 152) )
    return -1;
  while ( 2 )
  {
    v24 = *(_QWORD *)(v58 + 144) + 144 * v23;
    if ( !v9 )
    {
      v26 = a1 + 2;
      goto LABEL_68;
    }
    v25 = *(_QWORD *)(v24 + 24);
    v26 = a1 + 2;
    while ( 2 )
    {
      v32 = v9[5];
      if ( v25 )
      {
        v27 = *(const char **)(v24 + 16);
        v28 = v9;
        v29 = haystack;
        if ( !v32 )
          goto LABEL_37;
        goto LABEL_36;
      }
      if ( v32 )
      {
LABEL_44:
        v27 = haystack;
LABEL_36:
        v29 = (const char *)v9[4];
        v28 = v9;
LABEL_37:
        v30 = strcmp(v29, v27);
        v31 = (_QWORD *)v9[2];
        v9 = (_QWORD *)v9[3];
        if ( v30 >= 0 )
        {
          v26 = v28;
          v9 = v31;
        }
        if ( !v9 )
          goto LABEL_63;
        continue;
      }
      break;
    }
    while ( 1 )
    {
      v33 = v9[2];
      if ( !v33 )
        break;
      v26 = v9;
      v9 = (_QWORD *)v9[2];
      if ( *(_QWORD *)(v33 + 40) )
        goto LABEL_44;
    }
    v26 = v9;
LABEL_63:
    if ( v59 == v26 )
      goto LABEL_68;
    if ( v26[5] )
    {
      v44 = (const char *)v26[4];
      v45 = haystack;
      if ( v25 )
        goto LABEL_66;
LABEL_67:
      if ( strcmp(v45, v44) < 0 )
      {
LABEL_68:
        v61[0] = v24 + 16;
        v26 = sub_6C8580(a1 + 1, v26, v61);
      }
    }
    else
    {
      v44 = haystack;
      if ( v25 )
      {
LABEL_66:
        v45 = *(const char **)(v24 + 16);
        goto LABEL_67;
      }
    }
    v26[7] = v23;
    v46 = *(_QWORD *)(v24 + 24);
    if ( *(_QWORD *)(v56 + 8) )
    {
      v47 = *(const char **)v56;
      v48 = haystack;
      if ( !v46 )
        goto LABEL_71;
      goto LABEL_88;
    }
    if ( !v46 )
      return a1[7];
    v47 = haystack;
LABEL_88:
    v48 = *(const char **)(v24 + 16);
LABEL_71:
    v49 = strcmp(v48, v47);
    v4 = a1[7];
    if ( !v49 )
      return v4;
    v23 = v4 + 1;
    a1[7] = v23;
    if ( v23 < *(_QWORD *)(v58 + 152) )
    {
      v9 = (_QWORD *)a1[3];
      continue;
    }
    return -1;
  }
}
