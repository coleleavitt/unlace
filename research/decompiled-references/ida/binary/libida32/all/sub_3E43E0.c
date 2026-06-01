unsigned __int64 __fastcall sub_3E43E0(_QWORD **a1)
{
  _QWORD *v2; // rsi
  char **p_s2; // rbx
  __int64 v4; // r9
  int *v5; // r12
  char *v6; // r14
  __int64 v7; // rdi
  unsigned int v8; // ebp
  unsigned __int64 v9; // rsi
  _QWORD *v10; // r9
  _QWORD *v11; // r13
  __int64 v12; // r15
  char *v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // r14
  char *v16; // r13
  char *v17; // r12
  _QWORD *v18; // rbp
  const char *v19; // rsi
  const char *v20; // rdi
  int v21; // eax
  _QWORD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r14
  char *v26; // rdx
  bool v27; // cc
  __int64 v28; // r12
  unsigned __int64 v29; // rsi
  char *v30; // rbp
  __int64 v31; // r13
  char *v32; // r14
  char *v33; // r15
  char *v34; // rax
  char *v35; // rbp
  char *v36; // r12
  const char *v37; // rsi
  const char *v38; // rdi
  int v39; // eax
  char *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  const char *v43; // r8
  const char *v44; // rax
  int v45; // eax
  _QWORD *v46; // rax
  __int64 v47; // r14
  int v48; // eax
  void *v49; // rdi
  __int64 v50; // r15
  unsigned __int64 v51; // rax
  char *v52; // r15
  const char *v53; // r8
  const char *v54; // rsi
  size_t v55; // rcx
  __int64 v56; // r14
  __int64 v57; // rbp
  _QWORD *v58; // r13
  unsigned __int64 v59; // r15
  void *v60; // rdi
  __m128i v61; // xmm0
  __int64 v62; // r13
  void *v63; // rdi
  char *v64; // rsi
  _QWORD *v65; // rbp
  _QWORD *v66; // r13
  _QWORD *v67; // rax
  void *v68; // rax
  char *v69; // rbp
  char *v70; // rbp
  char *v71; // rdi
  __m128i v73; // [rsp+10h] [rbp-D8h] BYREF
  size_t n; // [rsp+20h] [rbp-C8h]
  _QWORD **v75; // [rsp+28h] [rbp-C0h]
  _QWORD *v76; // [rsp+30h] [rbp-B8h]
  char **v77; // [rsp+38h] [rbp-B0h]
  int *v78; // [rsp+40h] [rbp-A8h]
  unsigned int *v79; // [rsp+48h] [rbp-A0h]
  unsigned int v80; // [rsp+54h] [rbp-94h] BYREF
  char **v81; // [rsp+58h] [rbp-90h] BYREF
  char **v82; // [rsp+60h] [rbp-88h] BYREF
  int v83; // [rsp+68h] [rbp-80h] BYREF
  unsigned int v84; // [rsp+6Ch] [rbp-7Ch]
  char *v85; // [rsp+70h] [rbp-78h] BYREF
  __int128 v86; // [rsp+78h] [rbp-70h]
  char *s2; // [rsp+90h] [rbp-58h] BYREF
  __int128 v88; // [rsp+98h] [rbp-50h]
  unsigned __int64 v89; // [rsp+A8h] [rbp-40h]

  v89 = __readfsqword(0x28u);
  if ( *((_BYTE *)a1 + 80) )
    return v89 - __readfsqword(0x28u);
  v2 = a1[11];
  v80 = -1;
  p_s2 = &s2;
  v79 = &v80;
  netnode_check(&v80, v2, 0, 1);
  v86 = 0;
  v85 = nullptr;
  s2 = nullptr;
  v88 = 0;
  v5 = &v83;
  v73.m128i_i64[0] = (__int64)(a1 + 4);
  if ( netnode_qhashfirst(v80, &s2, 72) <= 0 )
    goto LABEL_30;
  do
  {
    v6 = (char *)haystack;
    if ( (_QWORD)v88 )
      v6 = s2;
    v7 = v80;
    *(_QWORD *)v5 = 0;
    if ( netnode_hashval(v7, v6, v5, 8, 72) <= 0 )
    {
LABEL_26:
      v25 = v88;
      goto LABEL_27;
    }
    v8 = v84;
    LODWORD(n) = v83;
    if ( v84 )
    {
      if ( v84 > 0x400 )
        goto LABEL_26;
      v10 = (_QWORD *)(int)v84;
      v51 = (unsigned __int64)a1[1];
      if ( (int)v84 >= v51 )
      {
        v9 = v84 + 1;
        if ( v9 != v51 )
          goto LABEL_65;
        goto LABEL_12;
      }
    }
    else
    {
      if ( !a1[13] )
        goto LABEL_26;
      v9 = 1;
      v10 = a1[1];
      if ( !v10 )
        goto LABEL_65;
      v10 = nullptr;
    }
    if ( LOBYTE((*a1)[5 * (_QWORD)v10 + 1]) )
    {
      v75 = (_QWORD **)v10;
      if ( (unsigned __int8)sub_3E2FA0(a1 + 3, v84, v6, v79) )
        goto LABEL_26;
      v67 = a1[1];
      v10 = v75;
      if ( v75 >= v67 )
      {
        v9 = v8 + 1;
        if ( (_QWORD *)v9 != v67 )
        {
LABEL_65:
          v75 = (_QWORD **)v10;
          sub_3E1240((__int64 *)a1, v9);
          v10 = v75;
          v11 = a1[5];
          if ( !v11 )
          {
LABEL_66:
            v15 = v73.m128i_i64[0];
            goto LABEL_53;
          }
          goto LABEL_13;
        }
      }
    }
LABEL_12:
    v11 = a1[5];
    if ( !v11 )
      goto LABEL_66;
LABEL_13:
    v12 = v88;
    v13 = (char *)haystack;
    v77 = p_s2;
    v14 = v11;
    v15 = v73.m128i_i64[0];
    v78 = v5;
    LODWORD(v75) = v8;
    if ( (_QWORD)v88 )
      v13 = s2;
    v76 = v10;
    v16 = s2;
    v17 = v13;
    while ( 1 )
    {
      v23 = v14[5];
      if ( !v12 )
        break;
      v18 = v14;
      v19 = v16;
      v20 = haystack;
      if ( v23 )
        goto LABEL_17;
LABEL_18:
      v21 = strcmp(v20, v19);
      v22 = (_QWORD *)v14[2];
      v14 = (_QWORD *)v14[3];
      if ( v21 >= 0 )
      {
        v15 = (__int64)v18;
        v14 = v22;
      }
      if ( !v14 )
      {
        v8 = (unsigned int)v75;
        v10 = v76;
        v43 = v16;
        p_s2 = v77;
        v5 = v78;
        goto LABEL_48;
      }
    }
    if ( v23 )
    {
LABEL_25:
      v18 = v14;
LABEL_17:
      v20 = (const char *)v14[4];
      v19 = v17;
      goto LABEL_18;
    }
    while ( 1 )
    {
      v24 = v14[2];
      if ( !v24 )
        break;
      v15 = (__int64)v14;
      v14 = (_QWORD *)v14[2];
      if ( *(_QWORD *)(v24 + 40) )
        goto LABEL_25;
    }
    v43 = v16;
    v66 = v14;
    v8 = (unsigned int)v75;
    v10 = v76;
    p_s2 = v77;
    v5 = v78;
    v15 = (__int64)v66;
LABEL_48:
    if ( v73.m128i_i64[0] == v15 )
      goto LABEL_53;
    if ( *(_QWORD *)(v15 + 40) )
    {
      v44 = *(const char **)(v15 + 32);
      if ( !v12 )
        v43 = haystack;
LABEL_52:
      v75 = (_QWORD **)v10;
      v45 = strcmp(v43, v44);
      v10 = v75;
      if ( v45 < 0 )
      {
LABEL_53:
        v75 = (_QWORD **)v10;
        v81 = p_s2;
        v46 = sub_3E4280(a1 + 3, (_QWORD *)v15, (__int64 *)&v81);
        v10 = v75;
        v15 = (__int64)v46;
      }
    }
    else
    {
      v44 = haystack;
      if ( v12 )
        goto LABEL_52;
    }
    *(_DWORD *)(v15 + 56) = v8;
    v47 = (__int64)&(*a1)[5 * (_QWORD)v10];
    v48 = n;
    v49 = *(void **)(v47 + 16);
    *(_QWORD *)v47 = 0;
    *(_BYTE *)(v47 + 8) = 1;
    *(_DWORD *)(v47 + 12) = v48;
    if ( v49 )
    {
      *(_QWORD *)(v47 + 24) = 0;
      qfree(v49);
    }
    *(_QWORD *)(v47 + 16) = 0;
    *(_OWORD *)(v47 + 24) = 0;
    v25 = v88;
    if ( v8 || !a1[13] )
      goto LABEL_27;
    if ( !(_QWORD)v88 )
    {
      *(_QWORD *)&v86 = 0;
LABEL_28:
      v26 = (char *)haystack;
      continue;
    }
    v50 = v88 - 1;
    if ( (_QWORD)v88 != 1 )
    {
      v70 = s2;
      v71 = v85;
      if ( *((_QWORD *)&v86 + 1) < (unsigned __int64)v88 )
      {
        v85 = (char *)qvector_reserve(&v85, v85, v88, 1);
        v71 = v85;
      }
      *(_QWORD *)&v86 = v25;
      memmove(v71, v70, v25 - 1);
      v85[v50] = 0;
      v25 = v88;
LABEL_27:
      if ( v25 )
        goto LABEL_61;
      goto LABEL_28;
    }
    *(_QWORD *)&v86 = 0;
LABEL_61:
    v26 = s2;
  }
  while ( netnode_qhashnext(v80, p_s2, v26, 72) > 0 );
LABEL_30:
  v27 = (unsigned __int64)v86 <= 1;
  *((_BYTE *)a1 + 80) = 1;
  if ( v27 )
    goto LABEL_83;
  v28 = (__int64)a1[1];
  v29 = (unsigned int)(v28 + 1);
  if ( v29 != v28 )
    sub_3E1240((__int64 *)a1, v29);
  v30 = (char *)a1[5];
  if ( !v30 )
  {
    v32 = (char *)(a1 + 4);
    goto LABEL_73;
  }
  v31 = v86;
  v75 = a1 + 4;
  v32 = (char *)(a1 + 4);
  v33 = v30;
  v73.m128i_i64[0] = v28;
  v34 = (char *)haystack;
  v35 = v85;
  if ( (_QWORD)v86 )
    v34 = v85;
  n = (size_t)v34;
  while ( 2 )
  {
    v41 = *((_QWORD *)v33 + 5);
    if ( v31 )
    {
      if ( !v41 )
      {
        v36 = v33;
        v37 = v35;
        v38 = haystack;
        goto LABEL_39;
      }
LABEL_46:
      v38 = *((const char **)v33 + 4);
      v37 = (const char *)n;
      v36 = v33;
LABEL_39:
      v39 = strcmp(v38, v37);
      v40 = *((char **)v33 + 2);
      v33 = *((char **)v33 + 3);
      if ( v39 >= 0 )
      {
        v32 = v36;
        v33 = v40;
      }
      if ( !v33 )
      {
        LODWORD(v28) = v73.m128i_i32[0];
        v52 = (char *)v75;
        v53 = v35;
        goto LABEL_68;
      }
      continue;
    }
    break;
  }
  if ( v41 )
    goto LABEL_46;
  while ( 1 )
  {
    v42 = *((_QWORD *)v33 + 2);
    if ( !v42 )
      break;
    v32 = v33;
    v33 = *((char **)v33 + 2);
    if ( *(_QWORD *)(v42 + 40) )
      goto LABEL_46;
  }
  v53 = v35;
  v69 = v33;
  LODWORD(v28) = v73.m128i_i32[0];
  v52 = (char *)v75;
  v32 = v69;
LABEL_68:
  if ( v52 == v32 )
    goto LABEL_73;
  if ( *((_QWORD *)v32 + 5) )
  {
    v54 = *((const char **)v32 + 4);
    if ( !v31 )
      v53 = haystack;
LABEL_72:
    if ( strcmp(v53, v54) < 0 )
    {
LABEL_73:
      v54 = v32;
      v82 = &v85;
      v32 = (char *)sub_3E4280(a1 + 3, v32, (__int64 *)&v82);
    }
  }
  else
  {
    v54 = haystack;
    if ( v31 )
      goto LABEL_72;
  }
  *((_DWORD *)v32 + 14) = v28;
  v55 = 0;
  v56 = (__int64)*a1;
  v57 = 5LL * (unsigned int)v28;
  v58 = &(*a1)[v57];
  *v58 = **a1;
  *((_BYTE *)v58 + 8) = *(_BYTE *)(v56 + 8);
  *((_DWORD *)v58 + 3) = *(_DWORD *)(v56 + 12);
  v59 = *(_QWORD *)(v56 + 24);
  if ( v59 )
  {
    n = 4 * v59;
    v68 = (void *)qalloc_or_throw(4 * v59, v54, 4 * v59, 0, v53, v4);
    v55 = (size_t)memcpy(v68, *(const void **)(v56 + 16), 4 * v59);
  }
  v60 = (void *)v58[2];
  v61 = _mm_unpacklo_epi64((__m128i)v59, (__m128i)v59);
  if ( v60 )
  {
    v58[3] = 0;
    n = v55;
    v73 = v61;
    qfree(v60);
    v61 = _mm_load_si128(&v73);
    v55 = n;
  }
  v58[2] = v55;
  *(__m128i *)(v58 + 3) = v61;
  v62 = (__int64)*a1;
  v63 = (void *)(*a1)[2];
  *(_QWORD *)v62 = 0;
  *(_BYTE *)(v62 + 8) = 0;
  *(_DWORD *)(v62 + 12) = 0;
  if ( v63 )
  {
    *(_QWORD *)(v62 + 24) = 0;
    qfree(v63);
  }
  *(_QWORD *)(v62 + 16) = 0;
  v64 = (char *)haystack;
  *(_OWORD *)(v62 + 24) = 0;
  v65 = &(*a1)[v57];
  if ( (_QWORD)v86 )
    v64 = v85;
  *((_BYTE *)v65 + 8) = 1;
  v84 = v28;
  v83 = *((_DWORD *)v65 + 3);
  netnode_hashset(v80, v64, &v83, 8, 72);
  *(_DWORD *)a1[13] = v28;
LABEL_83:
  if ( s2 )
  {
    *(_QWORD *)&v88 = 0;
    qfree(s2);
  }
  if ( v85 )
  {
    *(_QWORD *)&v86 = 0;
    qfree(v85);
  }
  return v89 - __readfsqword(0x28u);
}

