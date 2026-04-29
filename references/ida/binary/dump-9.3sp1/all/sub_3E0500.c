__int64 __fastcall sub_3E0500(double a1, double a2, double a3, __m128 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // r13
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rcx
  _DWORD *v18; // rsi
  int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // r9
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // r12
  __int64 *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdi
  int *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rbp
  __int64 v34; // rbx
  __int64 *v35; // rax
  __int64 v36; // rdi
  _QWORD *v38; // r12
  __int64 v39; // rsi
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned __int64 v42; // rbp
  __int64 v43; // r14
  _DWORD *v44; // rsi
  int v45; // r13d
  __int64 v46; // rax
  __int64 v47; // rdi
  _DWORD *v48; // rsi
  int v49; // r13d
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rdi
  _DWORD *v54; // rsi
  int v55; // ebp
  __int64 v56; // rax
  int *v57; // r12
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r12
  __int64 v63; // r13
  __int128 v64; // xmm0
  __int64 v65; // r12
  __int64 v66; // rax
  void *v67; // rax
  size_t v68; // r10
  __int64 v69; // r13
  __int64 v70; // r8
  __int64 v71; // r11
  unsigned __int64 v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rax
  __int64 v75; // r13
  unsigned __int64 v76; // rdx
  __int64 v77; // rsi
  __int64 v78; // r12
  __int64 v79; // rax
  size_t na; // [rsp+8h] [rbp-1F0h]
  size_t nb; // [rsp+8h] [rbp-1F0h]
  size_t n; // [rsp+8h] [rbp-1F0h]
  size_t nc; // [rsp+8h] [rbp-1F0h]
  size_t nd; // [rsp+8h] [rbp-1F0h]
  const void **v85; // [rsp+10h] [rbp-1E8h]
  size_t v87; // [rsp+28h] [rbp-1D0h]
  __int64 v88; // [rsp+30h] [rbp-1C8h]
  __int64 v89; // [rsp+38h] [rbp-1C0h]
  __int64 v90; // [rsp+40h] [rbp-1B8h] BYREF
  __int128 v91; // [rsp+48h] [rbp-1B0h]
  void *src; // [rsp+60h] [rbp-198h] BYREF
  __int128 v93; // [rsp+68h] [rbp-190h]
  _QWORD v94[5]; // [rsp+80h] [rbp-178h] BYREF
  __int128 v95; // [rsp+A8h] [rbp-150h]
  __int128 v96; // [rsp+B8h] [rbp-140h]
  __int64 (__fastcall **v97)(); // [rsp+D0h] [rbp-128h] BYREF
  __int64 v98; // [rsp+D8h] [rbp-120h]
  __int128 v99; // [rsp+E0h] [rbp-118h]
  __int64 v100; // [rsp+F0h] [rbp-108h]
  const char *v101; // [rsp+F8h] [rbp-100h]
  int v102; // [rsp+100h] [rbp-F8h]
  __m128i v103; // [rsp+108h] [rbp-F0h]
  int v104; // [rsp+118h] [rbp-E0h]
  _BYTE v105[96]; // [rsp+120h] [rbp-D8h] BYREF
  int v106; // [rsp+180h] [rbp-78h] BYREF
  __int64 v107; // [rsp+188h] [rbp-70h]
  __int128 v108; // [rsp+190h] [rbp-68h]
  void *v109; // [rsp+1A0h] [rbp-58h]
  __int128 v110; // [rsp+1A8h] [rbp-50h]
  unsigned __int64 v111; // [rsp+1B8h] [rbp-40h]

  v111 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a6 + 64);
  if ( !v7 )
    return 0;
  if ( (unsigned int)(*(_DWORD *)(v7 + 60) - 1) > 1 )
    return 0;
  v8 = sub_3D2B20(v7, *(_DWORD *)(a7 + 20), a1);
  v9 = v8;
  if ( !v8 )
    return 0;
  v10 = *(_QWORD *)(v8 + 376);
  if ( !(_DWORD)v10 )
    return 0;
  v90 = 0;
  v11 = *(_DWORD *)(v9 + 76);
  src = nullptr;
  v91 = 0;
  v93 = 0;
  if ( v11 == 4 )
  {
    v90 = qvector_reserve((__int64)&v90, 0, 1, 24);
    v47 = v90 + 24 * v91;
    *(_QWORD *)v47 = 0;
    *(_OWORD *)(v47 + 8) = 0;
    *(_QWORD *)&v91 = v91 + 1;
    sub_6B870((__int64 *)v47);
    v48 = src;
    v49 = **(_DWORD **)(v9 + 368);
    v50 = v93;
    LODWORD(v94[0]) = v49;
    if ( *((_QWORD *)&v93 + 1) < (unsigned __int64)(v93 + 1) )
    {
      src = (void *)qvector_reserve((__int64)&src, (__int64)src, v93 + 1, 4);
      v48 = src;
      v50 = v93;
    }
    v48[v50] = v49;
    v51 = v91;
    *(_QWORD *)&v93 = v93 + 1;
    v52 = v90;
    if ( *((_QWORD *)&v91 + 1) < (unsigned __int64)(v91 + 1) )
    {
      v90 = qvector_reserve((__int64)&v90, v90, v91 + 1, 24);
      v51 = v91;
      v52 = v90;
    }
    v53 = v52 + 24 * v51;
    *(_QWORD *)v53 = 0;
    *(_OWORD *)(v53 + 8) = 0;
    *(_QWORD *)&v91 = v91 + 1;
    sub_6B870((__int64 *)v53);
    v54 = src;
    v55 = *(_DWORD *)(*(_QWORD *)(v9 + 368) + 4LL);
    v56 = v93;
    LODWORD(v94[0]) = v55;
    if ( *((_QWORD *)&v93 + 1) < (unsigned __int64)(v93 + 1) )
    {
      src = (void *)qvector_reserve((__int64)&src, (__int64)src, v93 + 1, 4);
      v54 = src;
      v56 = v93;
    }
    v54[v56] = v55;
    v21 = v91;
    *(_QWORD *)&v93 = v93 + 1;
LABEL_60:
    if ( !v21 )
    {
LABEL_33:
      if ( src )
      {
        *(_QWORD *)&v93 = 0;
        qfree((__int64)src);
      }
      goto LABEL_35;
    }
    v100 = 0;
    v97 = (__int64 (__fastcall **)())&unk_4EBE48;
    v57 = (int *)v105;
    v31 = &v106;
    v98 = 0x3FF000004LL;
    v101 = "Select target block";
    v99 = -1;
    v102 = 1;
    v104 = -1;
    v103 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E9758), (__m128i)(unsigned __int64)&off_4E9628);
    do
    {
      *(_QWORD *)v57 = 0;
      v57 += 6;
      *((_OWORD *)v57 - 1) = 0;
    }
    while ( v57 != &v106 );
    v58 = HIDWORD(v98);
    v106 = 0;
    v59 = ((HIDWORD(v98) >> 19) & 0x3F) - 1;
    if ( ((HIDWORD(v98) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v98) != 0xFF )
      {
        if ( !under_debugger )
          interr();
        goto LABEL_88;
      }
      v58 = HIDWORD(v98) & 0xFE07FFFF;
      BYTE3(v98) = ((HIDWORD(v98) >> 19) & 0x3F) - 1;
      HIDWORD(v98) &= 0xFE07FFFF;
    }
    v107 = 0;
    v97 = off_4E9440;
    v108 = 0;
    v107 = qalloc_or_throw(24 * v21, v59, v58, v17);
    v62 = v107;
    v63 = 0;
    v64 = 0;
    *((_QWORD *)&v108 + 1) = v21;
    while ( 1 )
    {
      v65 = 24 * v63 + v62;
      v66 = v90 + 24 * v63;
      *(_OWORD *)(v65 + 8) = v64;
      *(_QWORD *)v65 = 0;
      if ( *(_QWORD *)(v66 + 8) )
      {
        v85 = (const void **)v66;
        na = *(_QWORD *)(v66 + 8);
        v67 = (void *)qalloc_or_throw(na, v59, v60, v61);
        *(_QWORD *)v65 = v67;
        *(_QWORD *)(v65 + 16) = na;
        v59 = (__int64)*v85;
        memcpy(v67, *v85, na);
        v64 = 0;
        *(_QWORD *)(v65 + 8) = na;
      }
      if ( v21 == ++v63 )
        break;
      v62 = v107;
    }
    v78 = v93;
    *(_QWORD *)&v108 = v21;
    v109 = nullptr;
    v110 = 0;
    if ( (_QWORD)v93 )
    {
      v109 = (void *)qalloc_or_throw(4 * v93, v59, v60, v61);
      *((_QWORD *)&v110 + 1) = v78;
      memcpy(v109, src, 4 * v78);
      *(_QWORD *)&v110 = v78;
      if ( (_QWORD)v108 == v78 )
      {
        v94[0] = 0;
        v23 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                16,
                0,
                &v97,
                v94,
                &callui,
                v22);
        if ( v23 >= 0 && v23 < (unsigned __int64)v93 )
        {
          v24 = *((_DWORD *)src + v23);
          v94[0] = off_4E90B0;
          *(_QWORD *)((char *)&v94[3] + 4) = 0x4900000000LL;
          *(_QWORD *)((char *)&v94[1] + 4) = 3;
          *(_QWORD *)((char *)&v94[2] + 4) = 0;
          v95 = -1;
          v96 = -1;
          if ( (unsigned __int8)sub_3D5310(a6, v94, v7, v24, 0, NAN) )
            sub_3DFE80(a6, v94, 4u, *(_DWORD *)(a6 + 56), NAN, COERCE_DOUBLE(&off_4E9628), a3, a4);
        }
        v97 = off_4E9440;
        if ( v109 )
        {
          *(_QWORD *)&v110 = 0;
          qfree((__int64)v109);
        }
        v25 = v107;
        if ( v107 )
        {
          v26 = v108;
          if ( (_QWORD)v108 )
          {
            v27 = 0;
            do
            {
              v28 = (__int64 *)(v25 + 24 * v27);
              v29 = *v28;
              if ( *v28 )
              {
                v28[1] = 0;
                qfree(v29);
                v25 = v107;
              }
              ++v27;
            }
            while ( v26 != v27 );
          }
          *(_QWORD *)&v108 = 0;
          qfree(v25);
        }
        v97 = (__int64 (__fastcall **)())&unk_4EBE48;
        do
        {
          v30 = *((_QWORD *)v31 - 3);
          v31 -= 6;
          if ( v30 )
          {
            *((_QWORD *)v31 + 1) = 0;
            qfree(v30);
          }
        }
        while ( v31 != (int *)v105 );
        goto LABEL_33;
      }
    }
    if ( !under_debugger )
      sub_383060(0, 0.0);
LABEL_88:
    BUG();
  }
  if ( v11 == 5 )
  {
    v38 = *(_QWORD **)(*(_QWORD *)(v9 + 56) + 56LL);
    if ( !v38[4] )
      goto LABEL_35;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    while ( 1 )
    {
      if ( v40 < v41 + 1 )
      {
        v90 = qvector_reserve((__int64)&v90, v39, v41 + 1, 24);
        v41 = v91;
        v39 = v90;
      }
      v43 = v39 + 24 * v41;
      *(_QWORD *)v43 = 0;
      *(_OWORD *)(v43 + 8) = 0;
      *(_QWORD *)&v91 = v91 + 1;
      if ( *(_QWORD *)(*v38 + 24 * v42 + 8) <= 1u )
      {
        sub_6B870((__int64 *)v43);
        goto LABEL_47;
      }
      nb = *v38 + 24 * v42;
      sub_6B870((__int64 *)v43);
      v68 = nb;
      v69 = 0;
      if ( *(_QWORD *)(nb + 8) )
        break;
LABEL_78:
      v75 = *(_QWORD *)(v43 + 8);
      v76 = 2;
      if ( v75 )
        v76 = v75-- + 1;
      v77 = *(_QWORD *)v43;
      if ( *(_QWORD *)(v43 + 16) < v76 )
      {
        nd = v76;
        v79 = qvector_reserve(v43, v77, v76, 1);
        *(_QWORD *)v43 = v79;
        v76 = nd;
        v77 = v79;
      }
      *(_QWORD *)(v43 + 8) = v76;
      *(_BYTE *)(v77 + v75) = 41;
      *(_BYTE *)(*(_QWORD *)v43 + v75 + 1) = 0;
LABEL_47:
      v17 = 4 * v42;
      v44 = src;
      v45 = *(_DWORD *)(v38[3] + 4 * v42);
      v46 = v93;
      if ( *((_QWORD *)&v93 + 1) < (unsigned __int64)(v93 + 1) )
      {
        src = (void *)qvector_reserve((__int64)&src, (__int64)src, v93 + 1, 4);
        v44 = src;
        v46 = v93;
      }
      v44[v46] = v45;
      v41 = v91;
      ++v42;
      *(_QWORD *)&v93 = v93 + 1;
      v21 = v91;
      if ( v42 >= v38[4] )
        goto LABEL_60;
      v40 = *((_QWORD *)&v91 + 1);
      v39 = v90;
    }
    while ( 1 )
    {
      n = v68;
      sub_FAAD0((__int64 *)v43);
      v68 = n;
      if ( (unsigned __int64)++v69 >= *(_QWORD *)(n + 8) )
        goto LABEL_78;
      v70 = *(_QWORD *)(v43 + 8);
      if ( v70 )
      {
        v71 = v70 + 1;
        v72 = v70 + 2;
        v73 = *(_QWORD *)v43;
        --v70;
        if ( *(_QWORD *)(v43 + 16) >= v72 )
          goto LABEL_75;
      }
      else
      {
        v73 = *(_QWORD *)v43;
        v72 = 3;
        v71 = 2;
        if ( *(_QWORD *)(v43 + 16) >= 3u )
          goto LABEL_75;
      }
      v89 = v71;
      v88 = v70;
      v87 = n;
      nc = v72;
      v74 = qvector_reserve(v43, v73, v72, 1);
      v71 = v89;
      v70 = v88;
      *(_QWORD *)v43 = v74;
      v73 = v74;
      v68 = v87;
      v72 = nc;
LABEL_75:
      *(_QWORD *)(v43 + 8) = v72;
      *(_BYTE *)(v73 + v71) = 0;
      *(_WORD *)(*(_QWORD *)v43 + v70) = 8236;
    }
  }
  if ( (int)v10 > 0 )
  {
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      if ( v14 < v15 + 1 )
      {
        v90 = qvector_reserve((__int64)&v90, v13, v15 + 1, 24);
        v15 = v91;
        v13 = v90;
      }
      v16 = v13 + 24 * v15;
      *(_QWORD *)v16 = 0;
      *(_OWORD *)(v16 + 8) = 0;
      *(_QWORD *)&v91 = v91 + 1;
      sub_6B870((__int64 *)v16);
      v18 = src;
      v19 = *(_DWORD *)(*(_QWORD *)(v9 + 368) + 4 * v12);
      v20 = v93;
      LODWORD(v94[0]) = v19;
      if ( *((_QWORD *)&v93 + 1) < (unsigned __int64)(v93 + 1) )
      {
        src = (void *)qvector_reserve((__int64)&src, (__int64)src, v93 + 1, 4);
        v18 = src;
        v20 = v93;
      }
      v18[v20] = v19;
      v15 = v91;
      ++v12;
      *(_QWORD *)&v93 = v93 + 1;
      v21 = v91;
      if ( *(_DWORD *)(v9 + 376) <= (int)v12 )
        break;
      v14 = *((_QWORD *)&v91 + 1);
      v13 = v90;
    }
    goto LABEL_60;
  }
LABEL_35:
  v32 = v90;
  if ( v90 )
  {
    v33 = v91;
    if ( (_QWORD)v91 )
    {
      v34 = 0;
      do
      {
        v35 = (__int64 *)(v32 + 24 * v34);
        v36 = *v35;
        if ( *v35 )
        {
          v35[1] = 0;
          qfree(v36);
          v32 = v90;
        }
        ++v34;
      }
      while ( v33 != v34 );
    }
    *(_QWORD *)&v91 = 0;
    qfree(v32);
  }
  return 0;
}
