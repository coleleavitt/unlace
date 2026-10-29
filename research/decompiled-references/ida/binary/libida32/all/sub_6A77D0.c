__int64 __fastcall sub_6A77D0(char *a1, __int64 a2, unsigned __int64 a3)
{
  bool v3; // zf
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rax
  const char *v9; // rsi
  char *v10; // r12
  char *v11; // rbp
  char *v12; // r15
  __int64 v13; // r13
  char *v14; // rbx
  const char *v15; // rdi
  const char *v16; // rsi
  int v17; // eax
  char *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rsi
  const char *v21; // rsi
  const char *v23; // rdi
  unsigned __int64 v24; // rbx
  __int64 v25; // r14
  __int64 v26; // r15
  char *v27; // rbp
  const char *v28; // rsi
  char *v29; // r13
  const char *v30; // rdi
  int v31; // eax
  char *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 v36; // r15
  char *v37; // rbp
  const char *v38; // rsi
  char *v39; // r13
  const char *v40; // rdi
  int v41; // eax
  char *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  const char *v45; // rsi
  const char *v46; // rdi
  __int64 v47; // rax
  const char *v48; // rsi
  const char *v49; // rdi
  int v50; // eax
  const char *v51; // rsi
  const char *v52; // rdi
  __int64 v53; // rax
  const char *v54; // rsi
  const char *v55; // rdi
  int v56; // eax
  __int64 v57; // [rsp+0h] [rbp-78h]
  __int64 v59; // [rsp+10h] [rbp-68h]
  char *v60; // [rsp+18h] [rbp-60h]
  unsigned __int64 v61; // [rsp+20h] [rbp-58h]
  __int64 v62[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = (*(_BYTE *)(a2 + 28) & 0x2F) == 13;
  v62[1] = __readfsqword(0x28u);
  v4 = a3;
  if ( v3 )
    v5 = *(_QWORD *)(a2 + 136) + (a3 << 7) + 16;
  else
    v5 = *(_QWORD *)(a2 + 32) + 32 * a3;
  v57 = v5;
  v6 = *(_QWORD *)a1;
  v59 = *(_QWORD *)a1;
  v61 = *(_QWORD *)(*(_QWORD *)a1 + 40LL);
  if ( v4 >= v61 )
    goto LABEL_8;
  if ( (*(_BYTE *)(v6 + 28) & 0x2F) == 0xD )
  {
    v7 = *(_QWORD *)(v5 + 8);
    v8 = *(_QWORD *)(v59 + 136) + (v4 << 7) + 16;
    if ( *(_QWORD *)(*(_QWORD *)(v59 + 136) + (v4 << 7) + 24) )
      goto LABEL_6;
LABEL_26:
    v9 = haystack;
    if ( !v7 )
      return v4;
LABEL_27:
    if ( !strcmp(*(const char **)v57, v9) )
      return v4;
    goto LABEL_8;
  }
  v8 = *(_QWORD *)(v6 + 32) + 32 * v4;
  v7 = *(_QWORD *)(v57 + 8);
  if ( !*(_QWORD *)(v8 + 8) )
    goto LABEL_26;
LABEL_6:
  v9 = *(const char **)v8;
  if ( v7 )
    goto LABEL_27;
  if ( !strcmp(haystack, v9) )
    return v4;
LABEL_8:
  v10 = *((char **)a1 + 3);
  v11 = a1 + 16;
  v60 = a1 + 16;
  if ( !v10 )
    goto LABEL_31;
  v12 = *((char **)a1 + 3);
  v13 = *(_QWORD *)(v57 + 8);
  while ( 1 )
  {
    v19 = *((_QWORD *)v12 + 5);
    if ( !v13 )
      break;
    v14 = v12;
    v15 = haystack;
    v16 = *(const char **)v57;
    if ( v19 )
      goto LABEL_11;
LABEL_12:
    v17 = strcmp(v15, v16);
    v18 = *((char **)v12 + 2);
    v12 = *((char **)v12 + 3);
    if ( v17 >= 0 )
    {
      v11 = v14;
      v12 = v18;
    }
    if ( !v12 )
      goto LABEL_21;
  }
  if ( v19 )
  {
LABEL_19:
    v16 = haystack;
LABEL_11:
    v15 = *((const char **)v12 + 4);
    v14 = v12;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v20 = *((_QWORD *)v12 + 2);
    if ( !v20 )
      break;
    v11 = v12;
    v12 = *((char **)v12 + 2);
    if ( *(_QWORD *)(v20 + 40) )
      goto LABEL_19;
  }
  v11 = v12;
LABEL_21:
  if ( v60 != v11 )
  {
    if ( *((_QWORD *)v11 + 5) )
    {
      v21 = *((const char **)v11 + 4);
      v23 = haystack;
      if ( v13 )
        goto LABEL_45;
    }
    else
    {
      v21 = haystack;
      if ( !v13 )
        return *((_QWORD *)v11 + 7);
LABEL_45:
      v23 = *(const char **)v57;
    }
    if ( strcmp(v23, v21) >= 0 )
      return *((_QWORD *)v11 + 7);
  }
LABEL_31:
  v24 = *((_QWORD *)a1 + 7);
  if ( (*(_BYTE *)(v59 + 28) & 0x2F) != 0xD )
  {
    if ( v24 >= v61 )
      return -1;
    while ( 1 )
    {
      v35 = *(_QWORD *)(v59 + 32) + 32 * v24;
      if ( !v10 )
      {
        v37 = a1 + 16;
        goto LABEL_80;
      }
      v36 = *(_QWORD *)(*(_QWORD *)(v59 + 32) + 32 * v24 + 8);
      v37 = a1 + 16;
      while ( 1 )
      {
        v43 = *((_QWORD *)v10 + 5);
        if ( !v36 )
          break;
        v38 = *(const char **)v35;
        v39 = v10;
        v40 = haystack;
        if ( v43 )
          goto LABEL_53;
LABEL_54:
        v41 = strcmp(v40, v38);
        v42 = *((char **)v10 + 2);
        v10 = *((char **)v10 + 3);
        if ( v41 >= 0 )
        {
          v37 = v39;
          v10 = v42;
        }
        if ( !v10 )
          goto LABEL_75;
      }
      if ( v43 )
        break;
      while ( 1 )
      {
        v44 = *((_QWORD *)v10 + 2);
        if ( !v44 )
          break;
        v37 = v10;
        v10 = *((char **)v10 + 2);
        if ( *(_QWORD *)(v44 + 40) )
          goto LABEL_61;
      }
      v37 = v10;
LABEL_75:
      if ( v60 == v37 )
        goto LABEL_80;
      if ( *((_QWORD *)v37 + 5) )
      {
        v51 = *((const char **)v37 + 4);
        v52 = haystack;
        if ( v36 )
          goto LABEL_78;
LABEL_79:
        if ( strcmp(v52, v51) < 0 )
        {
LABEL_80:
          v62[0] = v35;
          v37 = (char *)sub_6A7670((_QWORD *)a1 + 1, v37, v62);
        }
      }
      else
      {
        v51 = haystack;
        if ( v36 )
        {
LABEL_78:
          v52 = *(const char **)v35;
          goto LABEL_79;
        }
      }
      *((_QWORD *)v37 + 7) = v24;
      v53 = *(_QWORD *)(v35 + 8);
      if ( *(_QWORD *)(v57 + 8) )
      {
        v54 = *(const char **)v57;
        v55 = haystack;
        if ( !v53 )
          goto LABEL_83;
        goto LABEL_93;
      }
      if ( !v53 )
        return *((_QWORD *)a1 + 7);
      v54 = haystack;
LABEL_93:
      v55 = *(const char **)v35;
LABEL_83:
      v56 = strcmp(v55, v54);
      v4 = *((_QWORD *)a1 + 7);
      if ( !v56 )
        return v4;
      v24 = v4 + 1;
      *((_QWORD *)a1 + 7) = v24;
      if ( v24 >= *(_QWORD *)(v59 + 40) )
        return -1;
      v10 = *((char **)a1 + 3);
    }
LABEL_61:
    v38 = haystack;
LABEL_53:
    v40 = *((const char **)v10 + 4);
    v39 = v10;
    goto LABEL_54;
  }
  if ( v24 >= *(_QWORD *)(v59 + 144) )
    return -1;
  while ( 2 )
  {
    v25 = *(_QWORD *)(v59 + 136) + (v24 << 7);
    if ( !v10 )
    {
      v27 = a1 + 16;
      goto LABEL_68;
    }
    v26 = *(_QWORD *)(v25 + 24);
    v27 = a1 + 16;
    while ( 2 )
    {
      v33 = *((_QWORD *)v10 + 5);
      if ( v26 )
      {
        v28 = *(const char **)(v25 + 16);
        v29 = v10;
        v30 = haystack;
        if ( !v33 )
          goto LABEL_37;
        goto LABEL_36;
      }
      if ( v33 )
      {
LABEL_44:
        v28 = haystack;
LABEL_36:
        v30 = *((const char **)v10 + 4);
        v29 = v10;
LABEL_37:
        v31 = strcmp(v30, v28);
        v32 = *((char **)v10 + 2);
        v10 = *((char **)v10 + 3);
        if ( v31 >= 0 )
        {
          v27 = v29;
          v10 = v32;
        }
        if ( !v10 )
          goto LABEL_63;
        continue;
      }
      break;
    }
    while ( 1 )
    {
      v34 = *((_QWORD *)v10 + 2);
      if ( !v34 )
        break;
      v27 = v10;
      v10 = *((char **)v10 + 2);
      if ( *(_QWORD *)(v34 + 40) )
        goto LABEL_44;
    }
    v27 = v10;
LABEL_63:
    if ( v60 == v27 )
      goto LABEL_68;
    if ( *((_QWORD *)v27 + 5) )
    {
      v45 = *((const char **)v27 + 4);
      v46 = haystack;
      if ( v26 )
        goto LABEL_66;
LABEL_67:
      if ( strcmp(v46, v45) < 0 )
      {
LABEL_68:
        v62[0] = v25 + 16;
        v27 = (char *)sub_6A7670((_QWORD *)a1 + 1, v27, v62);
      }
    }
    else
    {
      v45 = haystack;
      if ( v26 )
      {
LABEL_66:
        v46 = *(const char **)(v25 + 16);
        goto LABEL_67;
      }
    }
    *((_QWORD *)v27 + 7) = v24;
    v47 = *(_QWORD *)(v25 + 24);
    if ( *(_QWORD *)(v57 + 8) )
    {
      v48 = *(const char **)v57;
      v49 = haystack;
      if ( !v47 )
        goto LABEL_71;
      goto LABEL_88;
    }
    if ( !v47 )
      return *((_QWORD *)a1 + 7);
    v48 = haystack;
LABEL_88:
    v49 = *(const char **)(v25 + 16);
LABEL_71:
    v50 = strcmp(v49, v48);
    v4 = *((_QWORD *)a1 + 7);
    if ( !v50 )
      return v4;
    v24 = v4 + 1;
    *((_QWORD *)a1 + 7) = v24;
    if ( v24 < *(_QWORD *)(v59 + 144) )
    {
      v10 = *((char **)a1 + 3);
      continue;
    }
    return -1;
  }
}

