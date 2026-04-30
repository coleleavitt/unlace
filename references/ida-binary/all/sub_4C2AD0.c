__int64 __fastcall sub_4C2AD0(__int64 a1, __int64 a2, __int64 a3)
{
  QT::QWidget *v3; // rbp
  char *v4; // rax
  __m128i *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  _WORD *v8; // rax
  __int128 v9; // rax
  const char *v10; // rsi
  unsigned __int64 v11; // rdi
  __m128i v12; // xmm0
  char *v13; // rax
  unsigned __int64 v14; // rsi
  int *v15; // rsi
  const char *v16; // rsi
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rbx
  _QWORD *v20; // rax
  _QWORD *v21; // r13
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r9
  _QWORD *v27; // r15
  _QWORD *v28; // rax
  const char *v29; // rsi
  __int64 v30; // r13
  __int64 v31; // r15
  __int64 v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // rdi
  const char *v35; // rdx
  __int64 v36; // r13
  __int64 v37; // rbx
  const char *v38; // rax
  __int64 v39; // rdi
  __m128i *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // r9d
  const char *v44; // rsi
  double v45; // xmm0_8
  unsigned int v46; // ebp
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // r12
  __int64 v50; // rbx
  __int64 *v51; // rax
  __int64 v52; // rdi
  _QWORD *v53; // rbx
  _QWORD *v54; // r12
  __int64 v55; // rdx
  __int64 v56; // r12
  __int64 v57; // rbx
  __int64 *v58; // rax
  __int64 v59; // rdi
  int v61; // eax
  __int64 v62; // r13
  __int64 v63; // rax
  size_t v64; // r15
  const char *v65; // rbx
  __int64 v66; // r13
  void *v67; // r13
  __m128i v68; // xmm0
  __m128i v69; // xmm1
  char *v70; // rax
  unsigned __int64 v71; // r8
  _QWORD *v72; // rsi
  unsigned __int64 v73; // r9
  _QWORD *v74; // rcx
  unsigned __int64 v75; // rdx
  _QWORD **v76; // rax
  __int64 v77; // rsi
  void *v78; // rdi
  __int64 v79; // rax
  size_t v80; // rbx
  void *v81; // rax
  __int64 v82; // rbx
  __int64 *v83; // rax
  __int64 v84; // rdi
  void *v85; // rax
  char *v86; // rax
  __m128i v87; // [rsp+8h] [rbp-2B0h] BYREF
  __m128i v88; // [rsp+18h] [rbp-2A0h] BYREF
  size_t n; // [rsp+28h] [rbp-290h]
  unsigned __int64 v90; // [rsp+30h] [rbp-288h]
  __int64 v91; // [rsp+38h] [rbp-280h]
  __int64 v92; // [rsp+40h] [rbp-278h] BYREF
  __int64 v93; // [rsp+48h] [rbp-270h] BYREF
  int v94; // [rsp+5Ch] [rbp-25Ch] BYREF
  void *src; // [rsp+60h] [rbp-258h] BYREF
  size_t v96[2]; // [rsp+68h] [rbp-250h] BYREF
  const char *v97; // [rsp+80h] [rbp-238h] BYREF
  __int128 v98; // [rsp+88h] [rbp-230h]
  _BYTE v99[24]; // [rsp+98h] [rbp-220h] BYREF
  unsigned __int64 v100; // [rsp+B0h] [rbp-208h] BYREF
  __int128 v101; // [rsp+B8h] [rbp-200h]
  int *v102; // [rsp+C8h] [rbp-1F0h] BYREF
  __int128 v103; // [rsp+D0h] [rbp-1E8h]
  int v104; // [rsp+E0h] [rbp-1D8h]
  __m128i v105; // [rsp+F0h] [rbp-1C8h] BYREF
  __m128i v106; // [rsp+100h] [rbp-1B8h]
  __int64 (__fastcall **v107)(); // [rsp+110h] [rbp-1A8h] BYREF
  __int128 v108; // [rsp+118h] [rbp-1A0h]
  unsigned __int64 v109; // [rsp+128h] [rbp-190h]
  char v110; // [rsp+130h] [rbp-188h] BYREF
  __int64 v111; // [rsp+148h] [rbp-170h]
  __int64 v112; // [rsp+150h] [rbp-168h]
  __int64 v113; // [rsp+160h] [rbp-158h]
  __int64 v114; // [rsp+168h] [rbp-150h]
  __int64 v115; // [rsp+178h] [rbp-140h]
  __int64 v116; // [rsp+188h] [rbp-130h]
  __int64 v117; // [rsp+190h] [rbp-128h]
  _QWORD v118[4]; // [rsp+1A0h] [rbp-118h] BYREF
  _QWORD *v119; // [rsp+1C0h] [rbp-F8h]
  __int64 v120; // [rsp+1C8h] [rbp-F0h]
  char v121; // [rsp+1D8h] [rbp-E0h] BYREF
  __int64 v122; // [rsp+1E0h] [rbp-D8h]
  __int64 v123; // [rsp+1E8h] [rbp-D0h]
  __int64 v124; // [rsp+1F8h] [rbp-C0h]
  __int64 v125; // [rsp+200h] [rbp-B8h]
  __int64 v126; // [rsp+210h] [rbp-A8h]
  __int64 v127; // [rsp+218h] [rbp-A0h]
  _BYTE v128[16]; // [rsp+238h] [rbp-80h] BYREF
  void (__fastcall *v129)(_BYTE *, _BYTE *, __int64, double); // [rsp+248h] [rbp-70h]
  __int64 v130; // [rsp+258h] [rbp-60h]
  __int64 v131; // [rsp+260h] [rbp-58h]
  unsigned __int64 v132; // [rsp+278h] [rbp-40h]

  v93 = a1;
  v87.m128i_i64[1] = a2;
  v92 = a3;
  v132 = __readfsqword(0x28u);
  v107 = nullptr;
  v3 = (QT::QWidget *)operator new(0x990u);
  v108 = 0;
  v109 = 0xFFFFFFFF00000000LL;
  v4 = &v110;
  do
  {
    *(_QWORD *)v4 = 0;
    v4 += 56;
    *((_OWORD *)v4 - 3) = 0;
    *((_QWORD *)v4 - 4) = 0;
    *(_OWORD *)(v4 - 24) = 0;
    *((_DWORD *)v4 - 2) = -1;
  }
  while ( v4 != &v121 );
  sub_520610(v3);
  v5 = (__m128i *)v118;
  do
  {
    v6 = v5[1].m128i_i64[1];
    if ( v6 )
    {
      v5[2].m128i_i64[0] = 0;
      qfree(v6, "Please choose a folder");
    }
    v7 = v5->m128i_i64[0];
    if ( v5->m128i_i64[0] )
    {
      v5->m128i_i64[1] = 0;
      qfree(v7, "Please choose a folder");
    }
    v5 = (__m128i *)((char *)v5 - 56);
  }
  while ( &v105.m128i_u64[1] != (unsigned __int64 *)v5 );
  if ( v107 )
  {
    *(_QWORD *)&v108 = 0;
    qfree(v107, "Please choose a folder");
  }
  v97 = nullptr;
  memset(v99, 0, sizeof(v99));
  v100 = 0;
  v102 = nullptr;
  v104 = 384;
  src = nullptr;
  v98 = 0;
  v101 = 0;
  v103 = 0;
  *(_OWORD *)v96 = 0;
  v8 = (_WORD *)qvector_reserve(&src, 0, 7, 1);
  src = v8;
  v96[0] = 7;
  *(_DWORD *)v8 = 1684827974;
  v8[2] = 29285;
  *((_BYTE *)src + 6) = 0;
  v9 = v98;
  v10 = v97;
  v11 = v98 + 1;
  if ( &src >= (void **)v97 && &src < (void **)&v97[24 * *((_QWORD *)&v98 + 1)] )
  {
    v67 = src;
    v68 = _mm_loadl_epi64((const __m128i *)v96);
    src = nullptr;
    v69 = _mm_loadl_epi64((const __m128i *)&v96[1]);
    *(_OWORD *)v96 = 0;
    if ( *((_QWORD *)&v98 + 1) < v11 )
    {
      v88.m128i_i64[0] = v69.m128i_i64[0];
      v87.m128i_i64[0] = v68.m128i_i64[0];
      v97 = (const char *)qvector_reserve(&v97, v97, v98 + 1, 24);
      v10 = v97;
      v69 = _mm_loadl_epi64(&v88);
      *(_QWORD *)&v9 = v98;
      v68 = _mm_loadl_epi64(&v87);
    }
    v70 = (char *)&v10[24 * v9];
    *(_QWORD *)v70 = v67;
    *(__m128i *)(v70 + 8) = _mm_unpacklo_epi64(v68, v69);
    *(_QWORD *)&v98 = v98 + 1;
    if ( src )
    {
      v96[0] = 0;
      qfree(src, v10, *((_QWORD *)&v9 + 1));
    }
  }
  else
  {
    if ( *((_QWORD *)&v98 + 1) < v11 )
    {
      v97 = (const char *)qvector_reserve(&v97, v97, v98 + 1, 24);
      v10 = v97;
      *(_QWORD *)&v9 = v98;
    }
    v12 = _mm_loadu_si128((const __m128i *)v96);
    v13 = (char *)&v10[24 * v9];
    *(_QWORD *)v13 = src;
    *(__m128i *)(v13 + 8) = v12;
    *(_QWORD *)&v98 = v98 + 1;
  }
  LODWORD(src) = -1;
  BYTE4(src) = 0;
  v14 = v100;
  if ( (unsigned __int64)v101 > 1 )
    goto LABEL_22;
  if ( (_QWORD)v101 )
    goto LABEL_23;
  if ( (unsigned __int64)&src >= v100 && (unsigned __int64)&src < v100 + 8LL * *((_QWORD *)&v101 + 1) )
  {
    if ( *((_QWORD *)&v101 + 1) || (v100 = qvector_reserve(&v100, v100, 1, 8), v14 = v100, !(_QWORD)v101) )
    {
      *(_DWORD *)v14 = -1;
      *(_BYTE *)(v14 + 4) = 0;
      v14 = v100;
    }
    goto LABEL_22;
  }
  if ( !*((_QWORD *)&v101 + 1) )
  {
    v100 = qvector_reserve(&v100, v100, 1, 8);
    v14 = v100;
    if ( (_QWORD)v101 )
    {
LABEL_22:
      *(_QWORD *)&v101 = 1;
      goto LABEL_23;
    }
  }
  *(_QWORD *)v14 = src;
  v14 = v100;
  *(_QWORD *)&v101 = 1;
LABEL_23:
  v91 = 45;
  *(_DWORD *)v14 = 45;
  *(_BYTE *)(v14 + 4) = BYTE4(v91);
  v94 = 0;
  v15 = v102;
  if ( (unsigned __int64)v103 > 1 )
    goto LABEL_97;
  if ( (_QWORD)v103 )
    goto LABEL_25;
  if ( &v94 < v102 || &v94 >= &v102[*((_QWORD *)&v103 + 1)] )
  {
    v61 = 0;
    if ( !*((_QWORD *)&v103 + 1) )
    {
      v102 = (int *)qvector_reserve(&v102, v102, 1, 4);
      v15 = v102;
      if ( (_QWORD)v103 )
        goto LABEL_97;
      v61 = v94;
    }
    *v15 = v61;
    v15 = v102;
LABEL_97:
    *(_QWORD *)&v103 = 1;
    goto LABEL_25;
  }
  if ( !*((_QWORD *)&v103 + 1) )
  {
    v102 = (int *)qvector_reserve(&v102, v102, 1, 4);
    v15 = v102;
    if ( (_QWORD)v103 )
      goto LABEL_97;
  }
  *v15 = 0;
  v15 = v102;
  *(_QWORD *)&v103 = 1;
LABEL_25:
  *v15 = 0;
  v16 = nullptr;
  *(_OWORD *)v96 = 0;
  src = nullptr;
  src = (void *)qvector_reserve(&src, 0, 1, 1);
  v96[0] = 1;
  *(_BYTE *)src = 0;
  v17 = *(_QWORD *)&v99[8];
  if ( *(_QWORD *)&v99[8] > 1u )
  {
    v82 = 1;
    do
    {
      v83 = (__int64 *)(*(_QWORD *)v99 + 24 * v82);
      v84 = *v83;
      if ( *v83 )
      {
        v83[1] = 0;
        qfree(v84, nullptr);
      }
      ++v82;
    }
    while ( v17 != v82 );
    goto LABEL_129;
  }
  if ( *(_QWORD *)&v99[8] )
    goto LABEL_27;
  v62 = *(_QWORD *)v99;
  v63 = *(_QWORD *)&v99[16];
  if ( (unsigned __int64)&src < *(_QWORD *)v99 || (unsigned __int64)&src >= *(_QWORD *)v99 + 24LL * *(_QWORD *)&v99[16] )
  {
    if ( *(_QWORD *)&v99[16]
      || (v16 = *(const char **)v99,
          *(_QWORD *)v99 = qvector_reserve(v99, *(_QWORD *)v99, 1, 24),
          v62 = *(_QWORD *)v99,
          !*(_QWORD *)&v99[8]) )
    {
      *(_QWORD *)v62 = 0;
      *(_OWORD *)(v62 + 8) = 0;
      v80 = v96[0];
      if ( v96[0] )
      {
        v81 = (void *)qalloc_or_throw(v96[0]);
        *(_QWORD *)v62 = v81;
        *(_QWORD *)(v62 + 16) = v80;
        v16 = (const char *)src;
        memcpy(v81, src, v80);
        *(_QWORD *)(v62 + 8) = v80;
      }
    }
LABEL_129:
    *(_QWORD *)&v99[8] = 1;
    goto LABEL_27;
  }
  v64 = v96[0];
  v65 = nullptr;
  if ( v96[0] )
  {
    v86 = (char *)qalloc_or_throw(v96[0]);
    v16 = (const char *)src;
    v65 = v86;
    memcpy(v86, src, v64);
    v63 = *(_QWORD *)&v99[16];
  }
  if ( !v63 )
  {
    v16 = *(const char **)v99;
    *(_QWORD *)v99 = qvector_reserve(v99, *(_QWORD *)v99, 1, 24);
  }
  if ( !*(_QWORD *)&v99[8] )
  {
    v66 = *(_QWORD *)v99;
    **(_QWORD **)v99 = 0;
    *(_OWORD *)(v66 + 8) = 0;
    if ( v64 )
    {
      v85 = (void *)qalloc_or_throw(v64);
      *(_QWORD *)v66 = v85;
      v16 = v65;
      *(_QWORD *)(v66 + 16) = v64;
      memcpy(v85, v65, v64);
      *(_QWORD *)(v66 + 8) = v64;
    }
  }
  *(_QWORD *)&v99[8] = 1;
  if ( v65 )
    qfree(v65, v16);
LABEL_27:
  if ( src )
  {
    v96[0] = 0;
    qfree(src, v16);
  }
  *(_QWORD *)(*(_QWORD *)v99 + 8LL) = 0;
  v18 = *(_QWORD *)v3;
  v104 |= 1u;
  v87.m128i_i64[0] = *(_QWORD *)(v18 + 456);
  v19 = operator new(0x138u);
  v88.m128i_i64[0] = (__int64)&v97;
  sub_497880(v19, v93, (__int64)&v97);
  *(_QWORD *)(v19 + 240) = 1;
  *(_QWORD *)(v19 + 248) = 0;
  *(_QWORD *)(v19 + 256) = 0;
  *(_QWORD *)v19 = &standalone_dirtree_item_model_t___vtable;
  *(_QWORD *)(v19 + 224) = &off_86FDF8;
  *(_QWORD *)(v19 + 232) = v19 + 280;
  *(_DWORD *)(v19 + 264) = 1065353216;
  *(_QWORD *)(v19 + 272) = 0;
  *(_BYTE *)(v19 + 288) = 0;
  *(_QWORD *)(v19 + 296) = v19;
  *(_QWORD *)(v19 + 280) = 0;
  v88.m128i_i64[1] = v19 + 280;
  v20 = (_QWORD *)operator new(0x10u);
  *v20 = 0;
  v21 = v20;
  v22 = *(_QWORD *)(v19 + 256);
  v20[1] = 0;
  v23 = *(_QWORD *)(v19 + 240);
  if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                          (std::__detail::_Prime_rehash_policy *)(v19 + 264),
                          v23,
                          v22,
                          1u) )
  {
    v71 = v24;
    if ( v24 == 1 )
    {
      *(_QWORD *)(v19 + 280) = 0;
      v27 = (_QWORD *)v88.m128i_i64[1];
    }
    else
    {
      if ( v24 >> 60 )
      {
        if ( v24 >> 61 )
          sub_162118(v19 + 264, v23, v24, v25, v24 >> 61, v26);
        std::__throw_bad_alloc();
      }
      v90 = v24;
      n = 8 * v24;
      v27 = (_QWORD *)operator new(8 * v24);
      memset(v27, 0, n);
      v71 = v90;
    }
    v72 = *(_QWORD **)(v19 + 248);
    v73 = 0;
    *(_QWORD *)(v19 + 248) = 0;
    while ( v72 )
    {
      while ( 1 )
      {
        v74 = v72;
        v72 = (_QWORD *)*v72;
        v75 = v74[1] % v71;
        v76 = (_QWORD **)&v27[v75];
        if ( !*v76 )
          break;
        *v74 = **v76;
        **v76 = v74;
        if ( !v72 )
          goto LABEL_120;
      }
      *v74 = *(_QWORD *)(v19 + 248);
      *(_QWORD *)(v19 + 248) = v74;
      *v76 = (_QWORD *)(v19 + 248);
      if ( *v74 )
        v27[v73] = v74;
      v73 = v75;
    }
LABEL_120:
    v77 = *(_QWORD *)(v19 + 240);
    v78 = *(void **)(v19 + 232);
    if ( (void *)v88.m128i_i64[1] != v78 )
    {
      v88.m128i_i64[1] = v71;
      operator delete(v78, 8 * v77);
      v71 = v88.m128i_u64[1];
    }
    *(_QWORD *)(v19 + 240) = v71;
    *(_QWORD *)(v19 + 232) = v27;
    v28 = (_QWORD *)*v27;
    if ( *v27 )
      goto LABEL_31;
  }
  else
  {
    v27 = *(_QWORD **)(v19 + 232);
    v28 = (_QWORD *)*v27;
    if ( *v27 )
    {
LABEL_31:
      *v21 = *v28;
      *(_QWORD *)*v27 = v21;
      goto LABEL_32;
    }
  }
  v79 = *(_QWORD *)(v19 + 248);
  *(_QWORD *)(v19 + 248) = v21;
  *v21 = v79;
  if ( v79 )
  {
    v27[*(_QWORD *)(v79 + 8) % *(_QWORD *)(v19 + 240)] = v21;
    v27 = *(_QWORD **)(v19 + 232);
  }
  *v27 = v19 + 248;
LABEL_32:
  ++*(_QWORD *)(v19 + 256);
  v29 = (const char *)v19;
  *(_QWORD *)(v19 + 224) = standalone_dirtree_item_model_t::lazy_loader_t___vtable;
  ((void (__fastcall *)(QT::QWidget *, __int64))v87.m128i_i64[0])(v3, v19);
  if ( v102 )
  {
    *(_QWORD *)&v103 = 0;
    qfree(v102, (const char *)v19);
  }
  if ( v100 )
  {
    *(_QWORD *)&v101 = 0;
    qfree(v100, (const char *)v19);
  }
  v30 = *(_QWORD *)v99;
  if ( *(_QWORD *)v99 )
  {
    v31 = *(_QWORD *)&v99[8];
    if ( *(_QWORD *)&v99[8] )
    {
      v32 = 0;
      do
      {
        v33 = (__int64 *)(v30 + 24 * v32);
        v34 = *v33;
        if ( *v33 )
        {
          v33[1] = 0;
          qfree(v34, v29);
          v30 = *(_QWORD *)v99;
        }
        ++v32;
      }
      while ( v31 != v32 );
    }
    *(_QWORD *)&v99[8] = 0;
    qfree(v30, v29);
  }
  v35 = v97;
  if ( v97 )
  {
    v36 = v98;
    if ( (_QWORD)v98 )
    {
      v37 = 0;
      do
      {
        v38 = &v35[24 * v37];
        v39 = *(_QWORD *)v38;
        if ( *(_QWORD *)v38 )
        {
          *((_QWORD *)v38 + 1) = 0;
          qfree(v39, v29);
          v35 = v97;
        }
        ++v37;
      }
      while ( v36 != v37 );
    }
    *(_QWORD *)&v98 = 0;
    qfree(v35, v29);
  }
  LOBYTE(v94) = 0;
  v98 = 0;
  *(_OWORD *)v96 = 0;
  v97 = nullptr;
  src = nullptr;
  v106 = 0u;
  *(_OWORD *)v99 = -1;
  v105 = 0;
  v40 = (__m128i *)operator new(0x28u);
  v40[1].m128i_i64[0] = (__int64)&v107;
  v41 = v87.m128i_i64[1];
  v40[2].m128i_i64[0] = (__int64)&v92;
  v40[1].m128i_i64[1] = v41;
  v42 = v88.m128i_i64[0];
  *v40 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v93, (__m128i)(unsigned __int64)&v94);
  v105.m128i_i64[0] = (__int64)v40;
  v106 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_86D2C8), (__m128i)(unsigned __int64)sub_4C1A30);
  sub_4C2510((__int64)&v107, "Please choose a folder", v3, v42, &v105);
  if ( v106.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v106.m128i_i64[0])(&v105, &v105, 3);
  v44 = nullptr;
  v45 = callui(203, 0, (unsigned int)&v107, (unsigned int)&src, (unsigned int)&callui, v43);
  v46 = 2;
  if ( v47 == 1 )
    v46 = (unsigned __int8)v94;
  v107 = &move_to_folder_dialog_t___vtable;
  if ( v130 )
  {
    v131 = 0;
    v45 = qfree(v130, nullptr, v45);
  }
  v107 = &standalone_dirtree_widget_dialog_t___vtable;
  if ( v129 )
  {
    v44 = v128;
    v129(v128, v128, 3, v45);
  }
  if ( v126 )
  {
    v127 = 0;
    v45 = qfree(v126, v44, v45);
  }
  v48 = v124;
  v107 = &forms::dialog_desc_t___vtable;
  if ( v124 )
  {
    v49 = v125;
    if ( v125 )
    {
      v50 = 0;
      do
      {
        v51 = (__int64 *)(v48 + 24 * v50);
        v52 = *v51;
        if ( *v51 )
        {
          v51[1] = 0;
          v45 = qfree(v52, v44, v45);
          v48 = v124;
        }
        ++v50;
      }
      while ( v49 != v50 );
    }
    v125 = 0;
    v45 = qfree(v48, v44, v45);
  }
  if ( v122 )
  {
    v123 = 0;
    v45 = qfree(v122, v44, v45);
  }
  v53 = v119;
  v54 = &v119[v120];
  if ( v119 != v54 )
  {
    do
    {
      if ( *v53 )
        (*(void (__fastcall **)(_QWORD, double))(*(_QWORD *)*v53 + 8LL))(*v53, v45);
      ++v53;
    }
    while ( v54 != v53 );
    v54 = v119;
  }
  if ( v54 )
  {
    v120 = 0;
    v45 = qfree(v54, v44, v45);
  }
  v107 = &forms::abstract_form_desc_t___vtable;
  if ( v118[0] )
  {
    v118[1] = 0;
    v45 = qfree(v118[0], v44, v45);
  }
  v107 = &forms::container_t___vtable;
  if ( v116 )
  {
    v117 = 0;
    v45 = qfree(v116, v44, v45);
  }
  v107 = &forms::abstract_container_t___vtable;
  if ( v115 )
    (*(void (__fastcall **)(__int64, double))(*(_QWORD *)v115 + 8LL))(v115, v45);
  v55 = v113;
  v115 = 0;
  v107 = &forms::element_t___vtable;
  if ( v113 )
  {
    v56 = v114;
    if ( v114 )
    {
      v57 = 0;
      do
      {
        v58 = (__int64 *)(v55 + 24 * v57);
        v59 = *v58;
        if ( *v58 )
        {
          v58[1] = 0;
          v45 = qfree(v59, v44, v45);
          v55 = v113;
        }
        ++v57;
      }
      while ( v56 != v57 );
    }
    v114 = 0;
    v45 = qfree(v55, v44, v45);
  }
  if ( v111 )
  {
    v112 = 0;
    v45 = qfree(v111, v44, v45);
  }
  if ( src )
  {
    v96[0] = 0;
    qfree(src, v44, v45);
  }
  return v46;
}
