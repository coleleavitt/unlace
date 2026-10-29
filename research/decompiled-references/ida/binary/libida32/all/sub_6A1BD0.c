unsigned __int64 __fastcall sub_6A1BD0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  __int64 *v4; // r12
  char *v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r13
  char *v9; // rax
  void *v10; // rdi
  void *v11; // rdi
  char *v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r15
  char *v15; // rax
  void *v16; // rdi
  const char *v18; // r14
  char *v19; // rax
  char v20; // r14
  const char *v21; // rdx
  char *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // r15
  const char *v26; // rdx
  size_t v27; // r15
  char *v28; // rdi
  const char *v29; // rcx
  const char *v30; // rsi
  int v31; // r14d
  __int64 v32; // rax
  __int64 v33; // rsi
  char *v34; // rax
  __int64 v35; // rdx
  void **v36; // r8
  size_t v37; // r15
  __int64 v38; // rdi
  const char *v39; // rsi
  __int64 v40; // rbx
  void *v41; // r14
  char *v42; // r12
  const char *v43; // rsi
  const char *v44; // rdi
  size_t v45; // r14
  __int64 v46; // rcx
  void *v47; // r14
  char *v48; // rax
  __int64 v49; // rax
  size_t v50; // r14
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 *v53; // [rsp+8h] [rbp-198h]
  char *v54; // [rsp+10h] [rbp-190h]
  void **v55; // [rsp+18h] [rbp-188h]
  char tinfo_details; // [rsp+2Fh] [rbp-171h]
  __int64 v58; // [rsp+30h] [rbp-170h]
  const char *v59; // [rsp+30h] [rbp-170h]
  unsigned int v60; // [rsp+38h] [rbp-168h]
  void **v61; // [rsp+38h] [rbp-168h]
  __int64 *v62; // [rsp+38h] [rbp-168h]
  char *v63; // [rsp+40h] [rbp-160h]
  __int64 *v64; // [rsp+48h] [rbp-158h]
  size_t n; // [rsp+58h] [rbp-148h]
  size_t nc; // [rsp+58h] [rbp-148h]
  char *na; // [rsp+58h] [rbp-148h]
  size_t nb; // [rsp+58h] [rbp-148h]
  __int64 v69; // [rsp+68h] [rbp-138h] BYREF
  __int64 v70; // [rsp+70h] [rbp-130h] BYREF
  const char *v71; // [rsp+78h] [rbp-128h] BYREF
  void *v72; // [rsp+80h] [rbp-120h] BYREF
  __int128 v73; // [rsp+88h] [rbp-118h]
  void *v74; // [rsp+A0h] [rbp-100h] BYREF
  __int128 v75; // [rsp+A8h] [rbp-F8h]
  char *s1; // [rsp+C0h] [rbp-E0h] BYREF
  size_t v77[3]; // [rsp+C8h] [rbp-D8h]
  void *ptr; // [rsp+E0h] [rbp-C0h] BYREF
  __int128 v79; // [rsp+E8h] [rbp-B8h]
  __int64 idati; // [rsp+100h] [rbp-A0h] BYREF
  char *s2; // [rsp+108h] [rbp-98h] BYREF
  __int128 v82; // [rsp+110h] [rbp-90h]
  void **v83; // [rsp+120h] [rbp-80h]
  void *v84; // [rsp+130h] [rbp-70h] BYREF
  __int128 v85; // [rsp+138h] [rbp-68h]
  void *v86; // [rsp+148h] [rbp-58h]
  __int128 v87; // [rsp+150h] [rbp-50h]
  int v88; // [rsp+160h] [rbp-40h]
  char v89; // [rsp+164h] [rbp-3Ch]
  unsigned __int64 v90; // [rsp+168h] [rbp-38h]

  v2 = 0;
  v64 = (__int64 *)a1;
  v90 = __readfsqword(0x28u);
  v73 = 0;
  v72 = nullptr;
  v3 = sub_699FB0(a1, 0);
  if ( !v3 )
    goto LABEL_18;
  do
  {
    v4 = &v69;
    v69 = 0;
    v74 = nullptr;
    v84 = nullptr;
    v86 = nullptr;
    v88 = 0;
    v89 = 0x80;
    LOWORD(v82) = 257;
    s2 = (char *)v3;
    v75 = 0;
    v85 = 0;
    v87 = 0;
    idati = get_idati(a1, v2);
    if ( !(unsigned __int8)create_tinfo(&v69, 61, 189, &idati) )
      goto LABEL_4;
    if ( (v69 & 0x100) == 0 )
      goto LABEL_4;
    if ( !get_tinfo_pdata(&v74, v69, 0) )
      goto LABEL_4;
    tinfo_details = get_tinfo_details(v69, 45, &v84);
    if ( !tinfo_details )
      goto LABEL_4;
    v18 = haystack;
    if ( (_QWORD)v75 )
      v18 = (const char *)v74;
    s2 = nullptr;
    v82 = 0;
    idati = *v64;
    if ( v18 )
    {
      nc = strlen(v18);
      v19 = (char *)qvector_reserve(&s2, 0, nc + 1, 1);
      *(_QWORD *)&v82 = nc + 1;
      s2 = v19;
      memmove(v19, v18, nc);
      s2[nc] = 0;
    }
    v20 = 0;
    v83 = &v72;
    na = (char *)v84;
    v63 = (char *)v84 + 56 * v85;
    if ( v84 == v63 )
    {
LABEL_58:
      v28 = s2;
      if ( !s2 )
        goto LABEL_4;
LABEL_59:
      *(_QWORD *)&v82 = 0;
      qfree(v28);
      goto LABEL_4;
    }
    while ( 2 )
    {
      s1 = nullptr;
      v21 = haystack;
      v70 = 0;
      *(_OWORD *)v77 = 0;
      if ( *((_QWORD *)na + 1) )
        v21 = *(const char **)na;
      if ( get_tinfo_by_edm_name(&v70, 0, v21) == -1 || (v70 & 0x100) == 0 || !get_tinfo_pdata(&s1, v70, 0) )
        goto LABEL_34;
      if ( !(_QWORD)v82 )
      {
        v22 = (char *)haystack;
        if ( !v77[0] )
          goto LABEL_34;
LABEL_55:
        if ( !strcmp(s1, v22) )
          goto LABEL_34;
        goto LABEL_45;
      }
      v22 = s2;
      if ( v77[0] )
        goto LABEL_55;
      if ( !strcmp(haystack, s2) )
        goto LABEL_34;
LABEL_45:
      v23 = 0;
      v24 = *(_QWORD *)(idati + 1480);
      while ( 1 )
      {
        ptr = nullptr;
        v79 = 0;
        v27 = *((_QWORD *)na + 1);
        if ( v27 )
        {
          v58 = v23;
          ptr = (void *)qalloc_or_throw(*((_QWORD *)na + 1), v22);
          *((_QWORD *)&v79 + 1) = v27;
          memcpy(ptr, *(const void **)na, v27);
          *(_QWORD *)&v79 = v27;
          v23 = v58;
        }
        v25 = v23 + 1;
        sub_357520((__int64 *)&ptr);
        v26 = haystack;
        if ( (_QWORD)v79 )
          v26 = (const char *)ptr;
        v22 = *(char **)(v24 + 8);
        if ( !(unsigned int)sub_632230(v24, (__int64)v22, v26, 2, &v71, 0, 0, 0, 0, nullptr) )
          break;
        if ( ptr )
        {
          *(_QWORD *)&v79 = 0;
          qfree(ptr);
        }
        v23 = v25;
      }
      v34 = *(char **)na;
      v35 = *((_QWORD *)na + 2);
      *(_QWORD *)na = ptr;
      *(_OWORD *)(na + 8) = v79;
      ptr = v34;
      *((_QWORD *)&v79 + 1) = v35;
      if ( v34 )
      {
        *(_QWORD *)&v79 = 0;
        qfree(v34);
      }
      v36 = v83;
      v37 = v77[0];
      v38 = (__int64)v83[1];
      v39 = (const char *)*v83;
      if ( *v83 == (char *)*v83 + 24 * v38 )
      {
LABEL_86:
        if ( v37 )
        {
          v61 = v36;
          v47 = (void *)qalloc_or_throw(v37, v39);
          memcpy(v47, s1, v37);
          v36 = v61;
          v38 = (__int64)v61[1];
          v39 = (const char *)*v61;
        }
        else
        {
LABEL_81:
          v47 = nullptr;
        }
        if ( (unsigned __int64)v36[2] < v38 + 1 )
        {
          v62 = (__int64 *)v36;
          v52 = qvector_reserve(v36, v39, v38 + 1, 24);
          v36 = (void **)v62;
          v39 = (const char *)v52;
          *v62 = v52;
          v38 = v62[1];
        }
        v48 = (char *)&v39[24 * v38];
        *(_QWORD *)v48 = v47;
        v20 = tinfo_details;
        *(__m128i *)(v48 + 8) = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
        v36[1] = (char *)v36[1] + 1;
        goto LABEL_34;
      }
      v60 = v3;
      v40 = (__int64)*v83 + 24 * v38;
      v41 = v83[1];
      v53 = v4;
      v59 = (const char *)*v83;
      v55 = v83;
      v42 = s1;
      v54 = na;
      nb = (size_t)*v83;
      while ( 1 )
      {
        if ( *(_QWORD *)(nb + 8) )
        {
          v43 = *(const char **)nb;
          v44 = haystack;
          if ( !v37 )
            goto LABEL_73;
        }
        else
        {
          if ( !v37 )
          {
            v38 = (__int64)v41;
            v45 = nb;
            v46 = v40;
            v39 = v59;
            v36 = v55;
            na = v54;
            v3 = v60;
            v4 = v53;
            if ( v46 == v45 )
              goto LABEL_81;
            v20 = tinfo_details;
            goto LABEL_34;
          }
          v43 = haystack;
        }
        v44 = v42;
LABEL_73:
        if ( !strcmp(v44, v43) )
          break;
        nb += 24LL;
        if ( v40 == nb )
        {
          v3 = v60;
          v38 = (__int64)v41;
          v39 = v59;
          v36 = v55;
          na = v54;
          v4 = v53;
          goto LABEL_86;
        }
      }
      v38 = (__int64)v41;
      v50 = nb;
      v51 = v40;
      v39 = v59;
      v36 = v55;
      na = v54;
      v3 = v60;
      v4 = v53;
      if ( v51 == v50 )
        goto LABEL_86;
      v20 = tinfo_details;
LABEL_34:
      clear_tinfo_t(&v70);
      if ( s1 )
      {
        v77[0] = 0;
        qfree(s1);
      }
      na += 56;
      if ( v63 != na )
        continue;
      break;
    }
    if ( !v20 )
      goto LABEL_58;
    create_tinfo(v4, 45, 45, &v84);
    v29 = haystack;
    if ( (_QWORD)v75 )
      v29 = (const char *)v74;
    save_tinfo(v4, 0, v3, v29, 5);
    v30 = haystack;
    if ( (_QWORD)v75 )
      v30 = (const char *)v74;
    v31 = sub_698F20(v64, v30, 1, 0);
    v32 = a2[1];
    v33 = *a2;
    if ( a2[2] < (unsigned __int64)(v32 + 1) )
    {
      v49 = qvector_reserve(a2, v33, v32 + 1, 4);
      *a2 = v49;
      v33 = v49;
      v32 = a2[1];
    }
    *(_DWORD *)(v33 + 4 * v32) = v31;
    v28 = s2;
    ++a2[1];
    if ( v28 )
      goto LABEL_59;
LABEL_4:
    if ( v86 )
    {
      *(_QWORD *)&v87 = 0;
      qfree(v86);
    }
    v5 = (char *)v84;
    if ( v84 )
    {
      v6 = v85;
      if ( (_QWORD)v85 )
      {
        v7 = 0;
        v8 = 0;
        do
        {
          v9 = &v5[v7];
          v10 = *(void **)&v5[v7 + 24];
          n = (size_t)v9;
          if ( v10 )
          {
            *((_QWORD *)v9 + 4) = 0;
            qfree(v10);
          }
          v11 = *(void **)n;
          if ( *(_QWORD *)n )
          {
            *(_QWORD *)(n + 8) = 0;
            qfree(v11);
          }
          ++v8;
          v5 = (char *)v84;
          v7 += 56;
        }
        while ( v6 != v8 );
      }
      *(_QWORD *)&v85 = 0;
      qfree(v5);
    }
    if ( v74 )
    {
      *(_QWORD *)&v75 = 0;
      qfree(v74);
    }
    clear_tinfo_t(v4);
    a1 = (__int64)v64;
    v2 = v3;
    v3 = sub_699FB0((__int64)v64, v3);
  }
  while ( v3 );
LABEL_18:
  v12 = (char *)v72;
  if ( v72 )
  {
    if ( (_QWORD)v73 )
    {
      v13 = 0;
      v14 = v73;
      do
      {
        v15 = &v12[24 * v13];
        v16 = *(void **)v15;
        if ( *(_QWORD *)v15 )
        {
          *((_QWORD *)v15 + 1) = 0;
          qfree(v16);
          v12 = (char *)v72;
        }
        ++v13;
      }
      while ( v14 != v13 );
    }
    *(_QWORD *)&v73 = 0;
    qfree(v12);
  }
  return v90 - __readfsqword(0x28u);
}

