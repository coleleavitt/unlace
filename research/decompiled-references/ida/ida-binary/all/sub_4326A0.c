__int64 __fastcall file_assoc_chooser_t__::vfunc_12(
        __int64 a1,
        unsigned __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // r14
  __int64 v12; // r10
  size_t v13; // rbx
  __int64 v14; // r15
  const char *v15; // r13
  const char *v16; // rcx
  const char *v17; // rsi
  const char *v18; // rsi
  const char *v19; // rsi
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  size_t v22; // r14
  size_t v23; // r14
  size_t v24; // r14
  size_t v25; // r14
  size_t v26; // r14
  size_t v27; // r14
  double v28; // xmm0_8
  const char *v29; // rdi
  char *v30; // rsi
  int v31; // ecx
  __int64 v32; // rdx
  void *v33; // rax
  const char *v34; // rax
  void *v35; // rax
  const void *v36; // rsi
  void *v37; // rax
  const void *v38; // rsi
  void *v39; // rax
  const void *v40; // rsi
  void *v41; // rax
  const void *v42; // rsi
  size_t v43; // rax
  size_t v44; // r8
  size_t v45; // rax
  size_t v46; // r12
  size_t v47; // rax
  __int64 v48; // rbx
  char *v49; // r12
  void *v50; // rax
  __int64 v51; // rbx
  char *v52; // r12
  void *v53; // rax
  __int64 v54; // rbx
  char *v55; // r12
  void *v56; // rax
  __int64 v57; // rbx
  char *v58; // r12
  void *v59; // rax
  __int64 v60; // rbx
  char *v61; // r12
  void *v62; // rax
  __int64 v63; // rbx
  char *v64; // r12
  void *v65; // rax
  void *v66; // rax
  const void *v67; // rsi
  void *v68; // rax
  const void *v69; // rsi
  void *v70; // rdi
  size_t v71; // rdx
  void *v72; // rdi
  size_t v73; // r12
  void *v74; // rdi
  size_t v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  size_t v79; // [rsp+0h] [rbp-3160h]
  size_t v80; // [rsp+8h] [rbp-3158h]
  size_t v81; // [rsp+8h] [rbp-3158h]
  size_t v82; // [rsp+8h] [rbp-3158h]
  size_t n; // [rsp+38h] [rbp-3128h]
  size_t na; // [rsp+38h] [rbp-3128h]
  size_t nb; // [rsp+38h] [rbp-3128h]
  size_t nc; // [rsp+38h] [rbp-3128h]
  __int64 v87; // [rsp+40h] [rbp-3120h] BYREF
  __int128 v88; // [rsp+48h] [rbp-3118h]
  void *src; // [rsp+60h] [rbp-3100h] BYREF
  __int128 v90; // [rsp+68h] [rbp-30F8h]
  void *v91; // [rsp+80h] [rbp-30E0h] BYREF
  __int128 v92; // [rsp+88h] [rbp-30D8h]
  void *v93; // [rsp+A0h] [rbp-30C0h] BYREF
  __int128 v94; // [rsp+A8h] [rbp-30B8h]
  void *v95; // [rsp+C0h] [rbp-30A0h] BYREF
  __int128 v96; // [rsp+C8h] [rbp-3098h]
  void *v97; // [rsp+E0h] [rbp-3080h] BYREF
  __int128 v98; // [rsp+E8h] [rbp-3078h]
  void *v99; // [rsp+100h] [rbp-3060h] BYREF
  __int128 v100; // [rsp+108h] [rbp-3058h]
  char s[4096]; // [rsp+120h] [rbp-3040h] BYREF
  char v102[4096]; // [rsp+1120h] [rbp-2040h] BYREF
  char v103[4104]; // [rsp+2120h] [rbp-1040h] BYREF
  unsigned __int64 v104; // [rsp+3128h] [rbp-38h]

  v104 = __readfsqword(0x28u);
  if ( a2 >= *(_QWORD *)(a1 + 192) )
    return -1;
  v12 = *(_QWORD *)(a1 + 184) + 240 * a2;
  v13 = *(_QWORD *)(v12 + 8);
  v14 = v12;
  if ( v13 )
  {
    v33 = (void *)qalloc_or_throw(*(_QWORD *)(v12 + 8));
    v34 = (const char *)memcpy(v33, *(const void **)v14, v13);
    v87 = 0;
    v16 = v34;
    v88 = 0;
    v15 = v34;
  }
  else
  {
    v15 = nullptr;
    v87 = 0;
    v16 = &s1;
    v88 = 0;
  }
  sub_169A50(
    &v87,
    (__int64)"BUTTON YES ~S~ave\n"
             "Edit file extension '%s' association\n"
             "\n"
             "<#absolute path#~V~iew tool path      :f:0:80::>\n"
             "<#\"%%l\" will be replaced by the filename#A~r~guments           :q:0:80::>\n"
             "<#absolute path#~D~iff tool path      :f:0:80::>\n"
             "<#\"%%l\" will be replaced by the filename#Ar~g~uments           :q:0:80::>\n"
             "<#absolute path#~M~erge tool path     :f:0:80::>\n"
             "<#\"%%l\" will be replaced by the filename#Args (~a~uto)         :q:0:80::>\n"
             "<#\"%%l\" will be replaced by the filename#Args (~l~ocal)        :q:0:80::>\n"
             "<#\"%%l\" will be replaced by the filename#Args (~r~emote)       :q:0:80::>\n"
             "<#\"%%l\" will be replaced by the filename#Args (ma~n~ual)       :q:0:80::>\n",
    v16);
  v17 = &s1;
  if ( *(_QWORD *)(v14 + 32) )
    v17 = *(const char **)(v14 + 24);
  qstrncpy(s, v17, 4096);
  v18 = &s1;
  if ( *(_QWORD *)(v14 + 80) )
    v18 = *(const char **)(v14 + 72);
  qstrncpy(v102, v18, 4096);
  v19 = &s1;
  if ( *(_QWORD *)(v14 + 128) )
    v19 = *(const char **)(v14 + 120);
  qstrncpy(v103, v19, 4096);
  v22 = *(_QWORD *)(v14 + 56);
  src = nullptr;
  v90 = 0;
  if ( v22 )
  {
    v68 = (void *)qalloc_or_throw(v22);
    v69 = *(const void **)(v14 + 48);
    src = v68;
    *((_QWORD *)&v90 + 1) = v22;
    memcpy(v68, v69, v22);
    *(_QWORD *)&v90 = v22;
  }
  v23 = *(_QWORD *)(v14 + 104);
  v91 = nullptr;
  v92 = 0;
  if ( v23 )
  {
    v66 = (void *)qalloc_or_throw(v23);
    v67 = *(const void **)(v14 + 96);
    v91 = v66;
    *((_QWORD *)&v92 + 1) = v23;
    memcpy(v66, v67, v23);
    *(_QWORD *)&v92 = v23;
  }
  v24 = *(_QWORD *)(v14 + 152);
  v93 = nullptr;
  v94 = 0;
  if ( v24 )
  {
    v41 = (void *)qalloc_or_throw(v24);
    v42 = *(const void **)(v14 + 144);
    v93 = v41;
    *((_QWORD *)&v94 + 1) = v24;
    memcpy(v41, v42, v24);
    *(_QWORD *)&v94 = v24;
  }
  v25 = *(_QWORD *)(v14 + 176);
  v95 = nullptr;
  v96 = 0;
  if ( v25 )
  {
    v39 = (void *)qalloc_or_throw(v25);
    v40 = *(const void **)(v14 + 168);
    v95 = v39;
    *((_QWORD *)&v96 + 1) = v25;
    memcpy(v39, v40, v25);
    *(_QWORD *)&v96 = v25;
  }
  v26 = *(_QWORD *)(v14 + 200);
  v97 = nullptr;
  v98 = 0;
  if ( v26 )
  {
    v37 = (void *)qalloc_or_throw(v26);
    v38 = *(const void **)(v14 + 192);
    v97 = v37;
    *((_QWORD *)&v98 + 1) = v26;
    memcpy(v37, v38, v26);
    *(_QWORD *)&v98 = v26;
  }
  v27 = *(_QWORD *)(v14 + 224);
  v28 = 0.0;
  v99 = nullptr;
  v100 = 0;
  if ( v27 )
  {
    v35 = (void *)qalloc_or_throw(v27);
    v36 = *(const void **)(v14 + 216);
    v99 = v35;
    *((_QWORD *)&v100 + 1) = v27;
    memcpy(v35, v36, v27);
    *(_QWORD *)&v100 = v27;
  }
  v29 = &s1;
  if ( (_QWORD)v88 )
    LODWORD(v29) = v87;
  v30 = s;
  v31 = sub_1697D0(
          (int)v29,
          (__int64)s,
          (__int64)&src,
          (__int64)v102,
          (__int64)&v91,
          (__int64)v103,
          (__m128)0LL,
          a4,
          a5,
          a6,
          v20,
          v21,
          a9,
          a10,
          (char)&v93);
  v32 = -1;
  if ( v31 )
  {
    v43 = strlen(s);
    v44 = v43;
    if ( v43 )
    {
      v74 = *(void **)(v14 + 24);
      v75 = v43 + 1;
      if ( *(_QWORD *)(v14 + 40) < v43 + 1 )
      {
        v79 = v43;
        v82 = v43 + 1;
        v78 = qvector_reserve(v14 + 24, v74, v75, 1);
        *(_QWORD *)(v14 + 24) = v78;
        v44 = v79;
        v74 = (void *)v78;
        v75 = v82;
      }
      *(_QWORD *)(v14 + 32) = v75;
      v30 = s;
      v80 = v44;
      memmove(v74, s, v44);
      *(_BYTE *)(*(_QWORD *)(v14 + 24) + v80) = 0;
    }
    else
    {
      *(_QWORD *)(v14 + 32) = 0;
    }
    v45 = strlen(v102);
    v46 = v45;
    if ( v45 )
    {
      v70 = *(void **)(v14 + 72);
      v71 = v45 + 1;
      if ( *(_QWORD *)(v14 + 88) < v45 + 1 )
      {
        v81 = v45 + 1;
        v76 = qvector_reserve(v14 + 72, *(_QWORD *)(v14 + 72), v71, 1);
        *(_QWORD *)(v14 + 72) = v76;
        v71 = v81;
        v70 = (void *)v76;
      }
      *(_QWORD *)(v14 + 80) = v71;
      v30 = v102;
      memmove(v70, v102, v46);
      *(_BYTE *)(*(_QWORD *)(v14 + 72) + v46) = 0;
    }
    else
    {
      *(_QWORD *)(v14 + 80) = 0;
    }
    v47 = strlen(v103);
    n = v47;
    if ( v47 )
    {
      v72 = *(void **)(v14 + 120);
      v73 = v47 + 1;
      if ( *(_QWORD *)(v14 + 136) < v47 + 1 )
      {
        v77 = qvector_reserve(v14 + 120, *(_QWORD *)(v14 + 120), v73, 1);
        *(_QWORD *)(v14 + 120) = v77;
        v72 = (void *)v77;
      }
      *(_QWORD *)(v14 + 128) = v73;
      v30 = v103;
      memmove(v72, v103, n);
      *(_BYTE *)(*(_QWORD *)(v14 + 120) + n) = 0;
    }
    else
    {
      *(_QWORD *)(v14 + 128) = 0;
    }
    if ( (void **)(v14 + 48) != &src )
    {
      v48 = v90;
      if ( !(_QWORD)v90 || (na = v90 - 1, (_QWORD)v90 == 1) )
      {
        *(_QWORD *)(v14 + 56) = 0;
      }
      else
      {
        v49 = (char *)src;
        v50 = *(void **)(v14 + 48);
        if ( *(_QWORD *)(v14 + 64) < (unsigned __int64)v90 )
        {
          v50 = (void *)qvector_reserve(v14 + 48, *(_QWORD *)(v14 + 48), v90, 1);
          *(_QWORD *)(v14 + 48) = v50;
        }
        *(_QWORD *)(v14 + 56) = v48;
        v30 = v49;
        memmove(v50, v49, na);
        *(_BYTE *)(*(_QWORD *)(v14 + 48) + v48 - 1) = 0;
      }
    }
    if ( (void **)(v14 + 96) != &v91 )
    {
      v51 = v92;
      if ( !(_QWORD)v92 || (nb = v92 - 1, (_QWORD)v92 == 1) )
      {
        *(_QWORD *)(v14 + 104) = 0;
      }
      else
      {
        v52 = (char *)v91;
        v53 = *(void **)(v14 + 96);
        if ( *(_QWORD *)(v14 + 112) < (unsigned __int64)v92 )
        {
          v53 = (void *)qvector_reserve(v14 + 96, *(_QWORD *)(v14 + 96), v92, 1);
          *(_QWORD *)(v14 + 96) = v53;
        }
        *(_QWORD *)(v14 + 104) = v51;
        v30 = v52;
        memmove(v53, v52, nb);
        *(_BYTE *)(*(_QWORD *)(v14 + 96) + v51 - 1) = 0;
      }
    }
    if ( (void **)(v14 + 144) != &v93 )
    {
      v54 = v94;
      if ( !(_QWORD)v94 || (nc = v94 - 1, (_QWORD)v94 == 1) )
      {
        *(_QWORD *)(v14 + 152) = 0;
      }
      else
      {
        v55 = (char *)v93;
        v56 = *(void **)(v14 + 144);
        if ( *(_QWORD *)(v14 + 160) < (unsigned __int64)v94 )
        {
          v56 = (void *)qvector_reserve(v14 + 144, *(_QWORD *)(v14 + 144), v94, 1);
          *(_QWORD *)(v14 + 144) = v56;
        }
        *(_QWORD *)(v14 + 152) = v54;
        v30 = v55;
        memmove(v56, v55, nc);
        *(_BYTE *)(*(_QWORD *)(v14 + 144) + v54 - 1) = 0;
      }
    }
    if ( (void **)(v14 + 168) != &v95 )
    {
      v57 = v96;
      if ( (unsigned __int64)v96 < 2 )
      {
        *(_QWORD *)(v14 + 176) = 0;
      }
      else
      {
        v58 = (char *)v95;
        v59 = *(void **)(v14 + 168);
        if ( *(_QWORD *)(v14 + 184) < (unsigned __int64)v96 )
        {
          v59 = (void *)qvector_reserve(v14 + 168, *(_QWORD *)(v14 + 168), v96, 1);
          *(_QWORD *)(v14 + 168) = v59;
        }
        *(_QWORD *)(v14 + 176) = v57;
        v30 = v58;
        memmove(v59, v58, v57 - 1);
        *(_BYTE *)(*(_QWORD *)(v14 + 168) + v57 - 1) = 0;
      }
    }
    if ( (void **)(v14 + 192) != &v97 )
    {
      v60 = v98;
      if ( (unsigned __int64)v98 < 2 )
      {
        *(_QWORD *)(v14 + 200) = 0;
      }
      else
      {
        v61 = (char *)v97;
        v62 = *(void **)(v14 + 192);
        if ( *(_QWORD *)(v14 + 208) < (unsigned __int64)v98 )
        {
          v62 = (void *)qvector_reserve(v14 + 192, *(_QWORD *)(v14 + 192), v98, 1);
          *(_QWORD *)(v14 + 192) = v62;
        }
        *(_QWORD *)(v14 + 200) = v60;
        v30 = v61;
        memmove(v62, v61, v60 - 1);
        *(_BYTE *)(*(_QWORD *)(v14 + 192) + v60 - 1) = 0;
      }
    }
    if ( (void **)(v14 + 216) != &v99 )
    {
      v63 = v100;
      if ( (unsigned __int64)v100 < 2 )
      {
        *(_QWORD *)(v14 + 224) = 0;
      }
      else
      {
        v64 = (char *)v99;
        v65 = *(void **)(v14 + 216);
        if ( *(_QWORD *)(v14 + 232) < (unsigned __int64)v100 )
        {
          v65 = (void *)qvector_reserve(v14 + 216, *(_QWORD *)(v14 + 216), v100, 1);
          *(_QWORD *)(v14 + 216) = v65;
        }
        *(_QWORD *)(v14 + 224) = v63;
        v30 = v64;
        memmove(v65, v64, v63 - 1);
        *(_BYTE *)(*(_QWORD *)(v14 + 216) + v63 - 1) = 0;
      }
    }
    v32 = 1;
  }
  v10 = v32;
  if ( v99 )
  {
    *(_QWORD *)&v100 = 0;
    v28 = qfree(v99, v30);
  }
  if ( v97 )
  {
    *(_QWORD *)&v98 = 0;
    v28 = qfree(v97, v30, v28);
  }
  if ( v95 )
  {
    *(_QWORD *)&v96 = 0;
    v28 = qfree(v95, v30, v28);
  }
  if ( v93 )
  {
    *(_QWORD *)&v94 = 0;
    v28 = qfree(v93, v30, v28);
  }
  if ( v91 )
  {
    *(_QWORD *)&v92 = 0;
    v28 = qfree(v91, v30, v28);
  }
  if ( src )
  {
    *(_QWORD *)&v90 = 0;
    v28 = qfree(src, v30, v28);
  }
  if ( v87 )
  {
    *(_QWORD *)&v88 = 0;
    v28 = qfree(v87, v30, v28);
  }
  if ( v15 )
    qfree(v15, v30, v28);
  return v10;
}
