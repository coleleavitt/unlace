unsigned __int64 __fastcall sub_3EA680(__int64 a1)
{
  __int64 v2; // rsi
  __int64 *v3; // rbx
  __int64 v4; // rdi
  char **p_s2; // rsi
  __int64 v6; // rdx
  char *v7; // rbp
  char v8; // al
  __int64 v9; // rdi
  char *v10; // rsi
  __int64 v11; // rdx
  unsigned int v12; // r12d
  __int64 v13; // r9
  unsigned __int64 v14; // rsi
  _QWORD *v15; // r14
  __int64 v16; // r13
  char *v17; // rax
  _QWORD *v18; // r12
  _QWORD *v19; // r15
  char *v20; // r14
  char *v21; // rbx
  _QWORD *v22; // rbp
  const char *v23; // rsi
  const char *v24; // rdi
  int v25; // eax
  _QWORD *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rbp
  char *v30; // rdx
  bool v31; // cc
  size_t v32; // r12
  unsigned __int64 v33; // rsi
  char **v34; // rbp
  __int64 v35; // r13
  char *v36; // rax
  char **v37; // r14
  char **v38; // r15
  char *v39; // rbp
  char *v40; // rbx
  char **v41; // r12
  const char *v42; // rsi
  const char *v43; // rdi
  int v44; // eax
  char **v45; // rcx
  char *v46; // rax
  char *v47; // rcx
  const char *v48; // r8
  const char *v49; // rsi
  int v50; // eax
  _QWORD *v51; // rax
  __int64 *v52; // rax
  __int64 v53; // rbp
  void *v54; // rdi
  __int64 v55; // r12
  unsigned __int64 v56; // rax
  char **v57; // r15
  const char *v58; // r8
  const char *v59; // rsi
  __int64 v60; // r14
  char **v61; // rcx
  __int64 v62; // rbp
  __m128i *v63; // r13
  unsigned __int64 v64; // r15
  void *v65; // rdi
  __m128i si128; // xmm0
  __int64 v67; // r13
  void *v68; // rdi
  char *v69; // rsi
  _QWORD *v70; // rbp
  _QWORD *v71; // r14
  _QWORD *v72; // rax
  void *v73; // rax
  char **v74; // rbp
  char *v75; // r15
  char *v76; // rdi
  size_t n[2]; // [rsp+0h] [rbp-108h] BYREF
  char **v78; // [rsp+18h] [rbp-F0h]
  __int64 *v79; // [rsp+20h] [rbp-E8h]
  _QWORD **v80; // [rsp+28h] [rbp-E0h]
  _QWORD *v81; // [rsp+30h] [rbp-D8h]
  unsigned int v82; // [rsp+3Ch] [rbp-CCh]
  __int64 *v83; // [rsp+40h] [rbp-C8h]
  __int64 *v84; // [rsp+48h] [rbp-C0h]
  __int64 v85; // [rsp+58h] [rbp-B0h] BYREF
  char **v86; // [rsp+60h] [rbp-A8h] BYREF
  char **v87; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v88; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v89; // [rsp+78h] [rbp-90h]
  int v90; // [rsp+7Ch] [rbp-8Ch]
  __int64 *v91; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v92; // [rsp+88h] [rbp-80h]
  int v93; // [rsp+8Ch] [rbp-7Ch]
  char *v94; // [rsp+90h] [rbp-78h] BYREF
  __int128 v95; // [rsp+98h] [rbp-70h]
  char *s2; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v97; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v98; // [rsp+C8h] [rbp-40h]

  v98 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 80) )
    return v98 - __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 88);
  v3 = (__int64 *)a1;
  v84 = &v85;
  v85 = -1;
  netnode_check(&v85, v2, 0, 1);
  v4 = v85;
  p_s2 = &s2;
  v94 = nullptr;
  s2 = nullptr;
  v78 = &s2;
  v95 = 0;
  v97 = 0;
  n[0] = (size_t)&v91;
  v80 = (_QWORD **)(v3 + 4);
  if ( netnode_qhashfirst(v85, &s2, 72) <= 0 )
    goto LABEL_36;
  do
  {
    v7 = (char *)haystack;
    if ( (_QWORD)v97 )
      v7 = s2;
    *(_OWORD *)n[0] = 0;
    v8 = is_cvt64(v4, p_s2, v6);
    v9 = v85;
    if ( v8 )
    {
      v10 = v7;
      if ( netnode_hashval(v85, v7, &v88, 8, 72) <= 0 )
        goto LABEL_32;
      v12 = HIDWORD(v88);
      v79 = (__int64 *)(unsigned int)v88;
    }
    else
    {
      v10 = v7;
      if ( netnode_hashval(v85, v7, n[0], 16, 72) <= 0 )
        goto LABEL_32;
      v12 = v92;
      v79 = v91;
    }
    if ( (unsigned __int8)is_cvt64(v9, v10, v11) )
    {
      v89 = v12;
      v90 = 0;
      v88 = v79;
      netnode_hashset(v85, v7, &v88, 16, 72);
    }
    if ( !v12 )
    {
      if ( !v3[13] )
        goto LABEL_32;
      v13 = v3[1];
      v14 = 1;
      if ( v13 )
      {
        v13 = 0;
LABEL_15:
        if ( !*(_BYTE *)(*v3 + 48 * v13 + 8) )
          goto LABEL_16;
        v81 = (_QWORD *)v13;
        if ( (unsigned __int8)sub_3E9220(v3 + 3, (const char *)v12, v7, v84) )
        {
LABEL_32:
          v29 = v97;
          goto LABEL_33;
        }
        v72 = (_QWORD *)v3[1];
        v13 = (__int64)v81;
        if ( v81 < v72 )
          goto LABEL_16;
        v14 = v12 + 1;
        if ( (_QWORD *)v14 == v72 )
          goto LABEL_16;
      }
LABEL_71:
      v81 = (_QWORD *)v13;
      sub_3E74C0(v3, v14);
      v13 = (__int64)v81;
      goto LABEL_16;
    }
    if ( v12 > 0x400 )
      goto LABEL_32;
    v56 = v3[1];
    v13 = (int)v12;
    if ( (int)v12 < v56 )
      goto LABEL_15;
    v14 = v12 + 1;
    if ( v14 != v56 )
      goto LABEL_71;
LABEL_16:
    v15 = (_QWORD *)v3[5];
    if ( !v15 )
    {
      v19 = v80;
      goto LABEL_59;
    }
    v16 = v97;
    v82 = v12;
    v17 = (char *)haystack;
    v83 = v3;
    v18 = v15;
    v19 = v80;
    v81 = (_QWORD *)v13;
    v20 = s2;
    if ( (_QWORD)v97 )
      v17 = s2;
    v21 = v17;
    while ( 1 )
    {
      v27 = v18[5];
      if ( !v16 )
        break;
      v22 = v18;
      v23 = v20;
      v24 = haystack;
      if ( v27 )
        goto LABEL_21;
LABEL_22:
      v25 = strcmp(v24, v23);
      v26 = (_QWORD *)v18[2];
      v18 = (_QWORD *)v18[3];
      if ( v25 >= 0 )
      {
        v19 = v22;
        v18 = v26;
      }
      if ( !v18 )
      {
        v13 = (__int64)v81;
        v12 = v82;
        v48 = v20;
        v3 = v83;
        goto LABEL_54;
      }
    }
    if ( v27 )
    {
LABEL_29:
      v22 = v18;
LABEL_21:
      v24 = (const char *)v18[4];
      v23 = v21;
      goto LABEL_22;
    }
    while ( 1 )
    {
      v28 = v18[2];
      if ( !v28 )
        break;
      v19 = v18;
      v18 = (_QWORD *)v18[2];
      if ( *(_QWORD *)(v28 + 40) )
        goto LABEL_29;
    }
    v48 = v20;
    v71 = v18;
    v13 = (__int64)v81;
    v12 = v82;
    v3 = v83;
    v19 = v71;
LABEL_54:
    if ( v80 == v19 )
      goto LABEL_59;
    if ( v19[5] )
    {
      v49 = (const char *)v19[4];
      if ( !v16 )
        v48 = haystack;
LABEL_58:
      v81 = (_QWORD *)v13;
      v50 = strcmp(v48, v49);
      v13 = (__int64)v81;
      if ( v50 < 0 )
      {
LABEL_59:
        v81 = (_QWORD *)v13;
        v86 = v78;
        v51 = sub_3EA520(v3 + 3, v19, (__int64 *)&v86);
        v13 = (__int64)v81;
        v19 = v51;
      }
    }
    else
    {
      v49 = haystack;
      if ( v16 )
        goto LABEL_58;
    }
    *((_DWORD *)v19 + 14) = v12;
    v52 = v79;
    v53 = *v3 + 48 * v13;
    v54 = *(void **)(v53 + 24);
    *(_QWORD *)v53 = 0;
    *(_BYTE *)(v53 + 8) = 1;
    *(_QWORD *)(v53 + 16) = v52;
    if ( v54 )
    {
      *(_QWORD *)(v53 + 32) = 0;
      qfree(v54);
    }
    *(_QWORD *)(v53 + 24) = 0;
    *(_OWORD *)(v53 + 32) = 0;
    v29 = v97;
    if ( v12 || !v3[13] )
      goto LABEL_33;
    if ( !(_QWORD)v97 )
    {
      *(_QWORD *)&v95 = 0;
LABEL_34:
      v30 = (char *)haystack;
      goto LABEL_35;
    }
    v55 = v97 - 1;
    if ( (_QWORD)v97 != 1 )
    {
      v75 = s2;
      v76 = v94;
      if ( *((_QWORD *)&v95 + 1) < (unsigned __int64)v97 )
      {
        v94 = (char *)qvector_reserve(&v94, v94, v97, 1);
        v76 = v94;
      }
      *(_QWORD *)&v95 = v29;
      memmove(v76, v75, v29 - 1);
      v94[v55] = 0;
      v29 = v97;
LABEL_33:
      if ( v29 )
        goto LABEL_67;
      goto LABEL_34;
    }
    *(_QWORD *)&v95 = 0;
LABEL_67:
    v30 = s2;
LABEL_35:
    p_s2 = v78;
    v4 = v85;
  }
  while ( netnode_qhashnext(v85, v78, v30, 72) > 0 );
LABEL_36:
  v31 = (unsigned __int64)v95 <= 1;
  *((_BYTE *)v3 + 80) = 1;
  if ( v31 )
    goto LABEL_88;
  v32 = v3[1];
  v33 = (unsigned int)(v32 + 1);
  if ( v33 != v32 )
    sub_3E74C0(v3, v33);
  v34 = (char **)v3[5];
  if ( !v34 )
  {
    v37 = (char **)(v3 + 4);
    goto LABEL_78;
  }
  v35 = v95;
  v78 = (char **)(v3 + 4);
  v36 = (char *)haystack;
  v79 = v3;
  v37 = (char **)(v3 + 4);
  v38 = v34;
  n[0] = v32;
  v39 = v94;
  if ( (_QWORD)v95 )
    v36 = v94;
  v40 = v36;
  while ( 2 )
  {
    v46 = v38[5];
    if ( v35 )
    {
      if ( !v46 )
      {
        v41 = v38;
        v42 = v39;
        v43 = haystack;
        goto LABEL_45;
      }
LABEL_52:
      v43 = v38[4];
      v41 = v38;
      v42 = v40;
LABEL_45:
      v44 = strcmp(v43, v42);
      v45 = (char **)v38[2];
      v38 = (char **)v38[3];
      if ( v44 >= 0 )
      {
        v37 = v41;
        v38 = v45;
      }
      if ( !v38 )
      {
        LODWORD(v32) = n[0];
        v57 = v78;
        v58 = v39;
        v3 = v79;
        goto LABEL_73;
      }
      continue;
    }
    break;
  }
  if ( v46 )
    goto LABEL_52;
  while ( 1 )
  {
    v47 = v38[2];
    if ( !v47 )
      break;
    v37 = v38;
    v38 = (char **)v38[2];
    if ( *((_QWORD *)v47 + 5) )
      goto LABEL_52;
  }
  v58 = v39;
  v74 = v38;
  LODWORD(v32) = n[0];
  v57 = v78;
  v3 = v79;
  v37 = v74;
LABEL_73:
  if ( v57 == v37 )
    goto LABEL_78;
  if ( v37[5] )
  {
    v59 = v37[4];
    if ( !v35 )
      v58 = haystack;
LABEL_77:
    if ( strcmp(v58, v59) < 0 )
    {
LABEL_78:
      v87 = &v94;
      v37 = (char **)sub_3EA520(v3 + 3, v37, (__int64 *)&v87);
    }
  }
  else
  {
    v59 = haystack;
    if ( v35 )
      goto LABEL_77;
  }
  *((_DWORD *)v37 + 14) = v32;
  v60 = *v3;
  v61 = nullptr;
  v62 = 48LL * (unsigned int)v32;
  v63 = (__m128i *)(*v3 + v62);
  v63->m128i_i64[0] = *(_QWORD *)*v3;
  v63->m128i_i8[8] = *(_BYTE *)(v60 + 8);
  v63[1].m128i_i64[0] = *(_QWORD *)(v60 + 16);
  v64 = *(_QWORD *)(v60 + 32);
  if ( v64 )
  {
    n[0] = 4 * v64;
    v73 = (void *)qalloc_or_throw(4 * v64);
    v61 = (char **)memcpy(v73, *(const void **)(v60 + 24), 4 * v64);
  }
  v65 = (void *)v63[1].m128i_i64[1];
  si128 = _mm_unpacklo_epi64((__m128i)v64, (__m128i)v64);
  if ( v65 )
  {
    v63[2].m128i_i64[0] = 0;
    v78 = v61;
    *(__m128i *)n = si128;
    qfree(v65);
    v61 = v78;
    si128 = _mm_load_si128((const __m128i *)n);
  }
  v63[1].m128i_i64[1] = (__int64)v61;
  v63[2] = si128;
  v67 = *v3;
  v68 = *(void **)(*v3 + 24);
  *(_QWORD *)v67 = 0;
  *(_BYTE *)(v67 + 8) = 0;
  *(_QWORD *)(v67 + 16) = 0;
  if ( v68 )
  {
    *(_QWORD *)(v67 + 32) = 0;
    qfree(v68);
  }
  *(_QWORD *)(v67 + 24) = 0;
  v69 = (char *)haystack;
  *(_OWORD *)(v67 + 32) = 0;
  v70 = (_QWORD *)(*v3 + v62);
  if ( (_QWORD)v95 )
    v69 = v94;
  *((_BYTE *)v70 + 8) = 1;
  v92 = v32;
  v93 = 0;
  v91 = (__int64 *)v70[2];
  netnode_hashset(v85, v69, &v91, 16, 72);
  *(_DWORD *)v3[13] = v32;
LABEL_88:
  if ( s2 )
  {
    *(_QWORD *)&v97 = 0;
    qfree(s2);
  }
  if ( v94 )
  {
    *(_QWORD *)&v95 = 0;
    qfree(v94);
  }
  return v98 - __readfsqword(0x28u);
}
