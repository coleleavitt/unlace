QT::QObject *__fastcall sub_2E4380(const char *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  __m128i *v11; // r14
  __int64 v12; // rax
  __int64 *v13; // r13
  __int64 dirtree; // rax
  __int64 v15; // r12
  bool v16; // zf
  __int64 v17; // rbx
  size_t v18; // r14
  char *v19; // rbx
  char *v20; // r15
  char *v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // r14
  __int64 v24; // r15
  _BYTE *v25; // r8
  char *v26; // rax
  __int64 v27; // r14
  __int64 v28; // r11
  __int64 v29; // rdx
  char *v30; // rdi
  size_t v31; // rdx
  char *v32; // rsi
  __int64 v33; // r14
  size_t v34; // rbx
  char *v35; // rdx
  __int64 v36; // rsi
  char *v37; // rsi
  __int64 v38; // rbp
  _QWORD *v39; // rax
  _QWORD *v40; // rbx
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _QWORD *v47; // r13
  _QWORD *v48; // rax
  __int64 *v49; // rbx
  _QWORD *v50; // rax
  __int64 v51; // rax
  __m128i si128; // xmm0
  QT::QObject *v53; // r13
  const char *v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rbp
  __int64 v59; // rbx
  __int64 *v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rbp
  __int64 v64; // rbx
  __int64 *v65; // rax
  __int64 v66; // rdi
  char *v68; // rsi
  char *v69; // rax
  __int64 v70; // rbx
  size_t v71; // rax
  size_t v72; // r14
  size_t v73; // r9
  __int64 v74; // rdx
  unsigned __int64 v75; // r14
  _QWORD *v76; // rsi
  unsigned __int64 v77; // r8
  _QWORD *v78; // rcx
  unsigned __int64 v79; // rdx
  _QWORD **v80; // rax
  void *v81; // rdi
  __int64 v82; // rax
  __int64 n; // [rsp+0h] [rbp-1D8h]
  char *src; // [rsp+8h] [rbp-1D0h]
  void *srca; // [rsp+8h] [rbp-1D0h]
  int v86; // [rsp+14h] [rbp-1C4h]
  __int64 v87; // [rsp+18h] [rbp-1C0h]
  __int64 v88; // [rsp+20h] [rbp-1B8h]
  size_t v89; // [rsp+20h] [rbp-1B8h]
  __int64 v90; // [rsp+28h] [rbp-1B0h]
  unsigned int v91; // [rsp+30h] [rbp-1A8h]
  unsigned int v92; // [rsp+34h] [rbp-1A4h]
  char *s; // [rsp+40h] [rbp-198h] BYREF
  __m128i v95; // [rsp+48h] [rbp-190h]
  __int64 v96; // [rsp+60h] [rbp-178h] BYREF
  __m128i v97; // [rsp+68h] [rbp-170h] BYREF
  __int64 v98; // [rsp+78h] [rbp-160h]
  __int128 v99; // [rsp+80h] [rbp-158h]
  __int64 v100; // [rsp+90h] [rbp-148h]
  __int128 v101; // [rsp+98h] [rbp-140h]
  __int64 v102; // [rsp+A8h] [rbp-130h]
  __int128 v103; // [rsp+B0h] [rbp-128h]
  int v104; // [rsp+C0h] [rbp-118h]
  __int64 v105; // [rsp+D0h] [rbp-108h] BYREF
  __int128 v106; // [rsp+D8h] [rbp-100h]
  unsigned __int64 v107; // [rsp+E8h] [rbp-F0h]
  _BYTE v108[168]; // [rsp+F0h] [rbp-E8h] BYREF
  _QWORD v109[8]; // [rsp+198h] [rbp-40h] BYREF

  v2 = a2[1];
  v3 = *a2;
  v109[0] = __readfsqword(0x28u);
  v5 = v3 + 96 * v2;
  if ( v3 == v5 )
  {
    v92 = 0;
    v91 = 0;
  }
  else
  {
    LODWORD(v6) = 0;
    LODWORD(v7) = 0;
    do
    {
      if ( (int)v7 < (unsigned __int64)(*(_QWORD *)(v3 + 32) == 0) + *(_QWORD *)(v3 + 32) - 1 )
        v7 = (*(_QWORD *)(v3 + 32) == 0) + *(_QWORD *)(v3 + 32) - 1LL;
      if ( (int)v6 < (unsigned __int64)(*(_QWORD *)(v3 + 56) == 0) + *(_QWORD *)(v3 + 56) - 1 )
        v6 = (*(_QWORD *)(v3 + 56) == 0) + *(_QWORD *)(v3 + 56) - 1LL;
      v3 += 96;
    }
    while ( v5 != v3 );
    v91 = v7;
    v92 = v6;
  }
  v8 = operator new(0x40u);
  v9.m128i_i64[0] = 0;
  v10 = _mm_loadu_si128((const __m128i *)(a2 + 1));
  *(_DWORD *)(v8 + 8) = 0;
  v11 = (__m128i *)v8;
  *(_QWORD *)(v8 + 16) = 0;
  *(_OWORD *)(v8 + 24) = 0;
  v87 = v8;
  *(_QWORD *)v8 = &idp_dirspec_t___vtable;
  v12 = *a2;
  *a2 = 0;
  v11[2].m128i_i64[1] = v12;
  v11[3] = v10;
  *(_OWORD *)(a2 + 1) = 0;
  v13 = (__int64 *)operator new(8u);
  dirtree = create_dirtree(v13, v11);
  v15 = 0;
  v16 = v11[3].m128i_i64[0] == 0;
  *v13 = dirtree;
  v86 = 0;
  if ( v16 )
    goto LABEL_44;
  do
  {
    s = nullptr;
    v95 = 0;
    v17 = *(_QWORD *)(v87 + 40) + 96 * v15;
    v18 = *(_QWORD *)(v17 + 8);
    if ( v18 )
    {
      v69 = (char *)qalloc_or_throw(*(_QWORD *)(v17 + 8));
      v95.m128i_i64[1] = v18;
      s = v69;
      memcpy(v69, *(const void **)v17, v18);
      v95.m128i_i64[0] = v18;
      src = s;
      v96 = 0;
      v97 = 0;
      v19 = strchr(s, 47);
    }
    else
    {
      v97 = 0;
      v19 = nullptr;
      v96 = 0;
      src = (char *)&s1;
    }
    v20 = src;
    v21 = nullptr;
    while ( v19 )
    {
      if ( v19 != v20 )
      {
        v27 = v97.m128i_i64[0];
        v28 = v19 - v20;
        if ( v97.m128i_i64[0] )
        {
          v27 = v97.m128i_i64[0] - 1;
          v28 = v19 - v20 + v97.m128i_i64[0] - 1;
        }
        v29 = v28 + 1;
        if ( v97.m128i_i64[1] < (unsigned __int64)(v28 + 1) )
        {
          v90 = v28;
          v88 = v28 + 1;
          v96 = qvector_reserve(&v96, v21, v29, 1);
          v28 = v90;
          v21 = (char *)v96;
          v29 = v88;
        }
        v97.m128i_i64[0] = v29;
        v21[v28] = 0;
        memmove((void *)(v27 + v96), v20, v19 - v20);
        v21 = (char *)v96;
      }
      v24 = v97.m128i_i64[0];
      if ( v97.m128i_i64[0] )
      {
        v22 = v97.m128i_i64[0] + 1;
        v23 = v97.m128i_i64[0];
        v24 = v97.m128i_i64[0] - 1;
        if ( v97.m128i_i64[1] >= (unsigned __int64)(v97.m128i_i64[0] + 1) )
          goto LABEL_14;
      }
      else
      {
        v22 = 2;
        v23 = 1;
        if ( v97.m128i_i64[1] >= 2uLL )
          goto LABEL_14;
      }
      v96 = qvector_reserve(&v96, v21, v22, 1);
      v21 = (char *)v96;
LABEL_14:
      v97.m128i_i64[0] = v22;
      v21[v23] = 0;
      v25 = (_BYTE *)(v24 + v96);
      v20 = v19 + 1;
      *v25 = 32;
      v26 = strchr(v19 + 1, 47);
      v21 = (char *)v96;
      v19 = v26;
    }
    if ( v20 == src )
    {
      v30 = v21;
    }
    else
    {
      if ( *v20 && v20 )
      {
        v70 = v97.m128i_i64[0];
        v71 = strlen(v20);
        v72 = v71;
        v73 = v71;
        if ( v70 )
        {
          --v70;
          v73 = v71 + v70;
        }
        v74 = v73 + 1;
        if ( v97.m128i_i64[1] < v73 + 1 )
        {
          v89 = v73;
          srca = (void *)(v73 + 1);
          v96 = qvector_reserve(&v96, v21, v74, 1);
          v73 = v89;
          v21 = (char *)v96;
          v74 = (__int64)srca;
        }
        v97.m128i_i64[0] = v74;
        v21[v73] = 0;
        memmove((void *)(v96 + v70), v20, v72);
        v21 = (char *)v96;
      }
      v30 = s;
      s = v21;
      v9 = _mm_loadu_si128(&v97);
      v96 = (__int64)v30;
      v97.m128i_i64[1] = v95.m128i_i64[1];
      v95 = v9;
    }
    if ( v30 )
    {
      v97.m128i_i64[0] = 0;
      *(double *)v9.m128i_i64 = qfree(v30, v21);
    }
    v31 = v95.m128i_i64[0];
    v32 = s;
    if ( !v95.m128i_i64[0] )
    {
      if ( v95.m128i_i64[1] > 1uLL )
      {
        v95.m128i_i64[0] = 2;
        s[1] = 0;
        goto LABEL_35;
      }
      v34 = 0;
      v33 = 2;
LABEL_85:
      s = (char *)qvector_reserve(&s, s, v33, 1);
      v32 = s;
      v31 = v34 + 1;
      goto LABEL_33;
    }
    v33 = v95.m128i_i64[0] + 1;
    v34 = v95.m128i_i64[0] - 1;
    if ( v95.m128i_i64[1] < (unsigned __int64)(v95.m128i_i64[0] + 1) )
      goto LABEL_85;
LABEL_33:
    v95.m128i_i64[0] = v33;
    v32[v31] = 0;
    if ( v34 )
      memmove(s + 1, s, v34);
LABEL_35:
    v35 = (char *)&s1;
    *s = 47;
    if ( v95.m128i_i64[0] )
      v35 = s;
    v36 = *v13;
    v97.m128i_i8[0] = 0;
    v96 = -1;
    dirtree_resolve_path(&v96, v36, v35, *(double *)v9.m128i_i64);
    if ( v96 == -1 || !v97.m128i_i8[0] )
    {
      v68 = (char *)&s1;
      if ( v95.m128i_i64[0] )
        v68 = s;
      dirtree_mkdir(*v13, v68);
    }
    v37 = (char *)&s1;
    if ( v95.m128i_i64[0] )
      v37 = s;
    dirtree_chdir(*v13, v37);
    if ( s )
    {
      v95.m128i_i64[0] = 0;
      *(double *)v9.m128i_i64 = qfree(s, v37);
    }
    dirtree_link_inode(*v13, v15, 1, *(double *)v9.m128i_i64);
    v15 = ++v86;
  }
  while ( (unsigned __int64)v86 < *(_QWORD *)(v87 + 48) );
LABEL_44:
  v96 = 0;
  v98 = 0;
  v100 = 0;
  v102 = 0;
  v104 = 0;
  v97 = 0;
  v99 = 0;
  v101 = 0;
  v103 = 0;
  sub_197020(&v96, "Name", v91, 0, nullptr);
  sub_197020(&v96, "Short name", v92, 0, nullptr);
  v38 = operator new(0x138u);
  sub_497880(v38, v13, &v96);
  *(_QWORD *)(v38 + 240) = 1;
  *(_QWORD *)(v38 + 232) = v38 + 280;
  *(_QWORD *)(v38 + 248) = 0;
  *(_QWORD *)v38 = &standalone_dirtree_item_model_t___vtable;
  *(_QWORD *)(v38 + 224) = &off_86FDF8;
  *(_QWORD *)(v38 + 256) = 0;
  *(_DWORD *)(v38 + 264) = 1065353216;
  *(_QWORD *)(v38 + 272) = 0;
  *(_BYTE *)(v38 + 288) = 0;
  *(_QWORD *)(v38 + 296) = v38;
  *(_QWORD *)(v38 + 280) = 0;
  v39 = (_QWORD *)operator new(0x10u);
  *v39 = 0;
  v40 = v39;
  v41 = *(_QWORD *)(v38 + 256);
  v39[1] = 0;
  v42 = *(_QWORD *)(v38 + 240);
  if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                          (std::__detail::_Prime_rehash_policy *)(v38 + 264),
                          v42,
                          v41,
                          1u) )
  {
    v75 = v43;
    if ( v43 == 1 )
    {
      *(_QWORD *)(v38 + 280) = 0;
      v47 = (_QWORD *)(v38 + 280);
    }
    else
    {
      if ( v43 >> 60 )
      {
        if ( v43 >> 61 )
          sub_162118(v38 + 264, v42, v43, v44, v45, v46);
        std::__throw_bad_alloc();
      }
      n = 8 * v43;
      v47 = (_QWORD *)operator new(8 * v43);
      memset(v47, 0, n);
    }
    v76 = *(_QWORD **)(v38 + 248);
    v77 = 0;
    *(_QWORD *)(v38 + 248) = 0;
    while ( v76 )
    {
      while ( 1 )
      {
        v78 = v76;
        v76 = (_QWORD *)*v76;
        v79 = v78[1] % v75;
        v80 = (_QWORD **)&v47[v79];
        if ( !*v80 )
          break;
        *v78 = **v80;
        **v80 = v78;
        if ( !v76 )
          goto LABEL_99;
      }
      *v78 = *(_QWORD *)(v38 + 248);
      *(_QWORD *)(v38 + 248) = v78;
      *v80 = (_QWORD *)(v38 + 248);
      if ( *v78 )
        v47[v77] = v78;
      v77 = v79;
    }
LABEL_99:
    v81 = *(void **)(v38 + 232);
    if ( (void *)(v38 + 280) != v81 )
      operator delete(v81, 8LL * *(_QWORD *)(v38 + 240));
    *(_QWORD *)(v38 + 240) = v75;
    *(_QWORD *)(v38 + 232) = v47;
    v48 = (_QWORD *)*v47;
    if ( !*v47 )
      goto LABEL_102;
LABEL_46:
    *v40 = *v48;
    *(_QWORD *)*v47 = v40;
  }
  else
  {
    v47 = *(_QWORD **)(v38 + 232);
    v48 = (_QWORD *)*v47;
    if ( *v47 )
      goto LABEL_46;
LABEL_102:
    v82 = *(_QWORD *)(v38 + 248);
    *(_QWORD *)(v38 + 248) = v40;
    *v40 = v82;
    if ( v82 )
    {
      v47[*(_QWORD *)(v82 + 8) % *(_QWORD *)(v38 + 240)] = v40;
      v47 = *(_QWORD **)(v38 + 232);
    }
    *v47 = v38 + 248;
  }
  ++*(_QWORD *)(v38 + 256);
  v106 = 0;
  v49 = v109;
  v105 = 0;
  *(_QWORD *)(v38 + 224) = standalone_dirtree_item_model_t::lazy_loader_t___vtable;
  v107 = 0xFFFFFFFF00000000LL;
  v50 = v108;
  do
  {
    *v50 = 0;
    v50 += 7;
    *((_OWORD *)v50 - 3) = 0;
    *(v50 - 4) = 0;
    *(_OWORD *)(v50 - 3) = 0;
    *((_DWORD *)v50 - 2) = -1;
  }
  while ( v109 != v50 );
  LODWORD(v107) = v107 | 8;
  if ( *((_QWORD *)&v106 + 1) <= 0x36u )
  {
    v51 = qvector_reserve(&v105, 0, 55, 1);
    v105 = v51;
  }
  else
  {
    v51 = v105;
  }
  *(_QWORD *)&v106 = 55;
  *(__m128i *)v51 = _mm_load_si128((const __m128i *)&xmmword_5DC4D0);
  *(__m128i *)(v51 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DC4E0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC4F0);
  *(__m128i *)(v51 + 32) = si128;
  *(_QWORD *)(v51 + 46) = 0x7377656976627573LL;
  *(_BYTE *)(v105 + 54) = 0;
  v53 = (QT::QObject *)operator new(0x9C0u);
  sub_2DB930((__int64)v53, -1, a1, 0, (__int64)&v105);
  v54 = (const char *)v38;
  *(_QWORD *)v53 = &idp_dirtree_widget_t___vtable;
  *((_QWORD *)v53 + 2) = idp_dirtree_widget_t___vtable_at__16;
  *((_QWORD *)v53 + 38) = idp_dirtree_widget_t___vtable_at__304;
  *((_QWORD *)v53 + 30) = idp_dirtree_widget_t___vtable_at__240;
  *((_QWORD *)v53 + 311) = v87;
  sub_2DC890(v53, (QT::QObject *)v38);
  do
  {
    v55 = *(v49 - 4);
    v49 -= 7;
    if ( v55 )
    {
      v49[4] = 0;
      *(double *)si128.m128i_i64 = qfree(v55, (const char *)v38);
    }
    v56 = *v49;
    if ( *v49 )
    {
      v49[1] = 0;
      *(double *)si128.m128i_i64 = qfree(v56, (const char *)v38, *(double *)si128.m128i_i64);
    }
  }
  while ( v49 != (__int64 *)v108 );
  if ( v105 )
  {
    *(_QWORD *)&v106 = 0;
    *(double *)si128.m128i_i64 = qfree(v105, (const char *)v38, *(double *)si128.m128i_i64);
  }
  if ( v102 )
  {
    *(_QWORD *)&v103 = 0;
    *(double *)si128.m128i_i64 = qfree(v102, (const char *)v38, *(double *)si128.m128i_i64);
  }
  if ( v100 )
  {
    *(_QWORD *)&v101 = 0;
    *(double *)si128.m128i_i64 = qfree(v100, (const char *)v38, *(double *)si128.m128i_i64);
  }
  v57 = v98;
  if ( v98 )
  {
    v58 = v99;
    if ( (_QWORD)v99 )
    {
      v59 = 0;
      do
      {
        v60 = (__int64 *)(v57 + 24 * v59);
        v61 = *v60;
        if ( *v60 )
        {
          v60[1] = 0;
          *(double *)si128.m128i_i64 = qfree(v61, v54, *(double *)si128.m128i_i64);
          v57 = v98;
        }
        ++v59;
      }
      while ( v58 != v59 );
    }
    *(_QWORD *)&v99 = 0;
    *(double *)si128.m128i_i64 = qfree(v57, v54, *(double *)si128.m128i_i64);
  }
  v62 = v96;
  if ( v96 )
  {
    v63 = v97.m128i_i64[0];
    if ( v97.m128i_i64[0] )
    {
      v64 = 0;
      do
      {
        v65 = (__int64 *)(v62 + 24 * v64);
        v66 = *v65;
        if ( *v65 )
        {
          v65[1] = 0;
          *(double *)si128.m128i_i64 = qfree(v66, v54, *(double *)si128.m128i_i64);
          v62 = v96;
        }
        ++v64;
      }
      while ( v63 != v64 );
    }
    v97.m128i_i64[0] = 0;
    qfree(v62, v54, *(double *)si128.m128i_i64);
  }
  return v53;
}
