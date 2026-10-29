__int64 __fastcall clang_findReferencesInFile(
        __guard *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int128 a7,
        __m128i a8)
{
  unsigned __int64 v9; // rbx
  int v10; // r14d
  int v11; // ecx
  bool v12; // r13
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i si128; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  _WORD *v31; // rdx
  __int64 v32; // r13
  __m128i v33; // xmm0
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // rax
  __m128i *v39; // rdx
  bool v40; // zf
  unsigned int v41; // ebx
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  int v46; // r9d
  __m128i v47; // xmm0
  __int64 v48; // r13
  int v49; // edi
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r15
  unsigned __int64 v57; // rax
  __m128i v58; // xmm2
  _QWORD *v59; // rax
  int v60; // edi
  int v61; // eax
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __m128i v65; // xmm0
  __int64 v66; // rax
  int v67; // r10d
  __m128i v68; // xmm4
  __m128 v69; // xmm0
  int v70; // ebx
  _BYTE *v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rax
  _QWORD *v75; // r14
  int v76; // ebx
  int v77; // eax
  __int64 v78; // rax
  int v79; // eax
  __m128 v80; // xmm0
  char v81; // al
  void ***v82; // r15
  void ***v83; // rbp
  void **v84; // rbx
  __m128i v85; // xmm0
  int v86; // edx
  int v87; // ecx
  int v88; // r8d
  int v89; // r9d
  int v90; // edi
  int v91; // edx
  int v92; // ecx
  int v93; // r8d
  int v94; // r9d
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // r9
  __m128i v99; // xmm0
  __int64 v100; // rax
  char v101; // dl
  __int64 v102; // rax
  unsigned __int64 v103; // rbx
  __int64 v104; // rax
  _QWORD *v105; // rbp
  unsigned __int64 v106; // rbp
  __int64 v107; // rax
  _QWORD *v108; // r14
  char v109; // dl
  __int64 *v110; // rdi
  __int64 v111; // rsi
  _DWORD *v112; // rax
  _DWORD *v113; // rdx
  _QWORD *v114; // rdi
  __int64 v115; // rcx
  _DWORD *v116; // rax
  _DWORD *v117; // rdx
  __m128i v118; // [rsp+0h] [rbp-1F8h]
  __m128i v119; // [rsp+0h] [rbp-1F8h]
  __m128i v120; // [rsp+0h] [rbp-1F8h]
  __m128i v121; // [rsp+0h] [rbp-1F8h]
  __m128i v122; // [rsp+0h] [rbp-1F8h]
  __m128i v123; // [rsp+10h] [rbp-1E8h]
  __m128i v124; // [rsp+10h] [rbp-1E8h]
  __int64 v125; // [rsp+20h] [rbp-1D8h] BYREF
  _QWORD *v126; // [rsp+28h] [rbp-1D0h]
  __m128i v127; // [rsp+30h] [rbp-1C8h] BYREF
  _BYTE *v128; // [rsp+40h] [rbp-1B8h]
  __int32 v129; // [rsp+4Ch] [rbp-1ACh]
  __m128i v130; // [rsp+50h] [rbp-1A8h] BYREF
  __m128i v131; // [rsp+60h] [rbp-198h] BYREF
  __m128i v132; // [rsp+70h] [rbp-188h] BYREF
  __m256i v133; // [rsp+80h] [rbp-178h] BYREF
  _OWORD v134[2]; // [rsp+A0h] [rbp-158h] BYREF
  __int64 v135; // [rsp+C0h] [rbp-138h]
  _BYTE v136[24]; // [rsp+D0h] [rbp-128h] BYREF
  __int128 v137; // [rsp+E8h] [rbp-110h]
  __int128 v138; // [rsp+F8h] [rbp-100h]
  _BOOL8 (__fastcall *v139)(_QWORD *, __int64, __int64, __int64, __int64, __int64, __int128, const __m128i); // [rsp+108h] [rbp-F0h]
  __int64 v140; // [rsp+110h] [rbp-E8h]
  _OWORD *v141; // [rsp+118h] [rbp-E0h]
  __int16 v142; // [rsp+120h] [rbp-D8h]
  int v143; // [rsp+124h] [rbp-D4h]
  int v144; // [rsp+128h] [rbp-D0h]
  char v145; // [rsp+12Ch] [rbp-CCh]
  __int128 v146; // [rsp+130h] [rbp-C8h]
  __int64 v147; // [rsp+140h] [rbp-B8h]
  void *ptr; // [rsp+150h] [rbp-A8h]
  __int64 v149; // [rsp+158h] [rbp-A0h]
  _BYTE v150[40]; // [rsp+160h] [rbp-98h] BYREF
  void ***v151; // [rsp+188h] [rbp-70h]
  __int64 v152; // [rsp+190h] [rbp-68h]
  _BYTE v153[96]; // [rsp+198h] [rbp-60h] BYREF

  v9 = (unsigned __int64)a1;
  v125 = a2;
  v10 = a7;
  if ( !(_BYTE)qword_4AD21C0 )
  {
    a1 = &qword_4AD21C0;
    if ( __cxa_guard_acquire(&qword_4AD21C0) )
    {
      a1 = &qword_4AD21C0;
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
  }
  v11 = qword_4AD21C8;
  v12 = 0;
  if ( qword_4AD21C8
    && (v126 = (_QWORD *)qword_4AD21C8, LODWORD(a1) = qword_4AD21C8, strlen((const char *)qword_4AD21C8) == 1) )
  {
    v11 = (int)v126;
    v12 = *(_BYTE *)v126 == 50;
    if ( (_BYTE)qword_4AD21C0 )
      goto LABEL_5;
  }
  else if ( (_BYTE)qword_4AD21C0 )
  {
    goto LABEL_5;
  }
  a1 = &qword_4AD21C0;
  if ( !__cxa_guard_acquire(&qword_4AD21C0) )
  {
LABEL_5:
    v13 = qword_4AD21C8;
    if ( qword_4AD21C8 )
      goto LABEL_6;
    goto LABEL_18;
  }
  a1 = &qword_4AD21C0;
  qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
  __cxa_guard_release(&qword_4AD21C0);
  v13 = qword_4AD21C8;
  if ( qword_4AD21C8 )
  {
LABEL_6:
    *(_QWORD *)v136 = 26;
    v13 = operator new(0xC0u);
    *(_DWORD *)v13 = 0;
    *(_QWORD *)(v13 + 8) = v13 + 24;
    v14 = std::string::_M_create();
    v15 = *(_QWORD *)v136;
    a2 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E490);
    *(_QWORD *)(v13 + 8) = v14;
    *(_QWORD *)(v13 + 24) = v15;
    *(__m128i *)v14 = si128;
    *(__m128i *)(v14 + 10) = _mm_load_si128((const __m128i *)&xmmword_3C7E4A0);
    v17 = *(_QWORD *)v136;
    v18 = *(_QWORD *)(v13 + 8);
    v19 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
    *(_QWORD *)(v13 + 16) = *(_QWORD *)v136;
    *(_BYTE *)(v18 + v17) = 0;
    *(_QWORD *)(v13 + 48) = v13 + 72;
    *(_BYTE *)(v13 + 40) = v12;
    *(_DWORD *)(v13 + 144) = 2;
    *(_QWORD *)(v13 + 136) = &off_49DA340;
    *(_QWORD *)(v13 + 184) = v13 + 48;
    *(_BYTE *)(v13 + 176) = 0;
    *(_DWORD *)(v13 + 180) = 1;
    *(_QWORD *)(v13 + 168) = 0;
    *(__m128i *)(v13 + 56) = v19;
    *(_OWORD *)(v13 + 152) = 0;
    sub_2623850(v13 + 136, 0, 0, 0, v20, v21);
    ++*(_DWORD *)v13;
    if ( (unsigned int)clang_Cursor_isNull(
                         (int)v13 + 136,
                         0,
                         v22,
                         v23,
                         v24,
                         v25,
                         (__int128)_mm_loadu_si128((const __m128i *)&a7),
                         (__int128)_mm_loadu_si128(&a8)) )
    {
      v39 = *(__m128i **)(v13 + 168);
      if ( *(_QWORD *)(v13 + 160) - (_QWORD)v39 <= 0xAu )
      {
        a2 = (__int64)"Null cursor";
        sub_26240F0(v13 + 136, "Null cursor", 11);
      }
      else
      {
        qmemcpy(v39, "Null cursor", 11);
        *(_QWORD *)(v13 + 168) += 11LL;
      }
      goto LABEL_13;
    }
    if ( v10 == 71 )
    {
      v39 = *(__m128i **)(v13 + 168);
      if ( *(_QWORD *)(v13 + 160) - (_QWORD)v39 <= 0x17u )
      {
        a2 = (__int64)"Got CXCursor_NoDeclFound";
        sub_26240F0(v13 + 136, "Got CXCursor_NoDeclFound", 24);
      }
      else
      {
        v99 = _mm_load_si128((const __m128i *)&xmmword_3C7E4B0);
        v39[1].m128i_i64[0] = 0x646E756F466C6365LL;
        *v39 = v99;
        *(_QWORD *)(v13 + 168) += 24LL;
      }
      goto LABEL_13;
    }
    if ( !v9 )
    {
      v39 = *(__m128i **)(v13 + 168);
      if ( *(_QWORD *)(v13 + 160) - (_QWORD)v39 <= 8u )
      {
        a2 = (__int64)"Null file";
        sub_26240F0(v13 + 136, "Null file", 9);
      }
      else
      {
        v39->m128i_i8[8] = 101;
        v39->m128i_i64[0] = 0x6C6966206C6C754ELL;
        *(_QWORD *)(v13 + 168) += 9LL;
      }
      goto LABEL_13;
    }
    if ( !a3 )
    {
      v39 = *(__m128i **)(v13 + 168);
      if ( *(_QWORD *)(v13 + 160) - (_QWORD)v39 <= 0xBu )
      {
        a2 = (__int64)"Null visitor";
        sub_26240F0(v13 + 136, "Null visitor", 12);
      }
      else
      {
        qmemcpy(v39, "Null visitor", 12);
        *(_QWORD *)(v13 + 168) += 12LL;
      }
      goto LABEL_13;
    }
    v30 = sub_60DDE0(
            v13,
            0,
            v26,
            v27,
            v28,
            v29,
            (__int128)_mm_loadu_si128((const __m128i *)&a7),
            (__int128)_mm_loadu_si128(&a8));
    v31 = *(_WORD **)(v30 + 168);
    v32 = v30;
    if ( *(_QWORD *)(v30 + 160) - (_QWORD)v31 <= 1u )
    {
      sub_26240F0(v30 + 136, &byte_3B7789D, 2);
    }
    else
    {
      *v31 = 16416;
      *(_QWORD *)(v30 + 168) += 2LL;
    }
    a2 = v9;
    sub_60BE10(v32, v9);
    v118 = _mm_loadu_si128((const __m128i *)&a7);
    v33 = _mm_loadu_si128(&a8);
    v38 = sub_63A2F0(
            v32,
            v9,
            v34,
            v35,
            v36,
            v37,
            v118.m128i_i32[0],
            v118.m128i_i32[2],
            v33.m128i_i32[0],
            v33.m128i_i64[1]);
    if ( !v38 )
    {
LABEL_13:
      v40 = (*(_DWORD *)v13)-- == 1;
      v41 = 1;
      if ( !v40 )
        return v41;
LABEL_53:
      sub_60C330((pthread_mutex_t *)v13, (__int64 (*)())a2, (__int64)v39, v27);
      operator delete((void *)v13, 0xC0u);
      return v41;
    }
    goto LABEL_23;
  }
LABEL_18:
  if ( (unsigned int)clang_Cursor_isNull(
                       (int)a1,
                       a2,
                       a3,
                       v11,
                       a5,
                       a6,
                       (__int128)_mm_loadu_si128((const __m128i *)&a7),
                       (__int128)_mm_loadu_si128(&a8)) )
    return 1;
  if ( v10 == 71 )
    return 1;
  if ( !v9 )
    return 1;
  if ( !a3 )
    return 1;
  v119 = _mm_loadu_si128((const __m128i *)&a7);
  v47 = _mm_loadu_si128(&a8);
  v38 = sub_63A2F0(
          (_DWORD)a1,
          a2,
          v43,
          v44,
          v45,
          v46,
          v119.m128i_i32[0],
          v119.m128i_i32[2],
          v47.m128i_i32[0],
          v47.m128i_i64[1]);
  if ( !v38 )
    return 1;
LABEL_23:
  v48 = v38 + 2048;
  v49 = v38 + 2048;
  nullsub_173(v38 + 2048);
  if ( (unsigned int)(v10 - 501) > 1 )
  {
    sub_63A6B0(
      (unsigned int)&v131,
      a2,
      v50,
      v51,
      v52,
      v53,
      (__int128)_mm_loadu_si128((const __m128i *)&a7),
      (__int128)_mm_loadu_si128(&a8));
    v85 = _mm_loadu_si128(&v132);
    a7 = (__int128)_mm_loadu_si128(&v131);
    a8 = v85;
    clang_getCursorReferenced((int)v136, a2, v86, v87, v88, v89, a7, v85.m128i_i32[0], v85.m128i_i64[1]);
    v90 = *(_DWORD *)v136;
    if ( (unsigned int)clang_isDeclaration(*(unsigned int *)v136) )
    {
      while ( 1 )
      {
        v95 = *(_QWORD *)(v9 + 8);
        if ( !v95 )
          break;
        v9 = v95 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v95 & 4) == 0 || !v9 )
          goto LABEL_61;
      }
      v9 = 0;
LABEL_61:
      v121 = _mm_loadu_si128((const __m128i *)&a7);
      v124 = _mm_loadu_si128(&a8);
      v96 = sub_63A300(
              v90,
              a2,
              v91,
              v92,
              v93,
              v94,
              v121.m128i_i32[0],
              v121.m128i_i32[2],
              v124.m128i_i32[0],
              v124.m128i_i64[1]);
      a2 = v9;
      v41 = 2
          * (unsigned __int8)sub_632BB0(
                               v96,
                               v9,
                               v125,
                               a3,
                               v97,
                               v98,
                               (__int128)_mm_load_si128((const __m128i *)v136),
                               (__int128)_mm_load_si128((const __m128i *)&v136[16]));
      goto LABEL_51;
    }
    if ( v13 )
    {
      v102 = *(_QWORD *)(v13 + 168);
      if ( (unsigned __int64)(*(_QWORD *)(v13 + 160) - v102) <= 0x26 )
      {
        a2 = (__int64)"cursor is not referencing a declaration";
        sub_26240F0(v13 + 136, "cursor is not referencing a declaration", 39);
      }
      else
      {
        a2 = 0x6E6F69746172616CLL;
        *(__m128i *)v102 = _mm_load_si128((const __m128i *)&xmmword_3C7E4C0);
        *(__m128i *)(v102 + 16) = _mm_load_si128((const __m128i *)&xmmword_3C7E4D0);
        *(_QWORD *)(v102 + 31) = 0x6E6F69746172616CLL;
        *(_QWORD *)(v13 + 168) += 39LL;
      }
      nullsub_174(v48);
      goto LABEL_13;
    }
    nullsub_174(v48);
    return 1;
  }
  while ( 1 )
  {
    v54 = *(_QWORD *)(v9 + 8);
    if ( !v54 )
      break;
    v9 = v54 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v54 & 4) == 0 || !v9 )
      goto LABEL_27;
  }
  v9 = 0;
LABEL_27:
  v120 = _mm_loadu_si128((const __m128i *)&a7);
  v123 = _mm_loadu_si128(&a8);
  v55 = sub_63A300(
          v49,
          a2,
          v50,
          v51,
          v52,
          v53,
          v120.m128i_i32[0],
          v120.m128i_i32[2],
          v123.m128i_i32[0],
          v123.m128i_i64[1]);
  v56 = v55;
  *(__m128i *)v133.m256i_i8 = _mm_loadu_si128((const __m128i *)&a7);
  *(__m128i *)&v133.m256i_u64[2] = _mm_loadu_si128(&a8);
  if ( !v55 )
    BUG();
  v57 = *(_QWORD *)(v55 + 8);
  a2 = v9;
  v58 = (__m128i)v57;
  v59 = *(_QWORD **)(v57 + 32);
  v129 = DWORD1(a7);
  v128 = (_BYTE *)a8.m128i_i64[1];
  v60 = (int)v59;
  v127 = _mm_loadu_si128((const __m128i *)((char *)&a7 + 8));
  v126 = v59;
  v130 = _mm_unpacklo_epi64(v58, (__m128i)v9);
  v61 = sub_CAB500(v59, v9);
  v64 = (__int64)v128;
  v65 = _mm_load_si128(&v127);
  LODWORD(v128) = v61;
  if ( v10 == 501 )
  {
    v133.m256i_i32[1] = v129;
    *(__m128i *)&v133.m256i_u64[1] = v65;
    v133.m256i_i64[3] = v64;
    v122 = _mm_load_si128((const __m128i *)&v133);
    v100 = sub_639FD0(v60, v9, v64, v129, v62, v63, v122.m128i_i32[0], v122.m128i_i64[1]);
    v67 = (int)v128;
    v66 = *(_QWORD *)(v100 + 16);
  }
  else
  {
    *(_DWORD *)&v136[4] = v129;
    *(_QWORD *)&v137 = v64;
    *(_DWORD *)v136 = 502;
    *(__m128i *)&v136[8] = v65;
    v66 = sub_63A030(v136, v9, v64, v136, v62, v63);
    v67 = (int)v128;
  }
  v41 = 0;
  if ( v66 )
  {
    v68 = _mm_load_si128(&v130);
    v135 = a3;
    v69 = _mm_loadh_ps((const double *)&v125);
    v136[0] = 0;
    v70 = 0;
    v71 = v136;
    v134[0] = v68;
    v134[1] = v69;
    if ( (unsigned int)(v67 + 1) <= 1 )
      goto LABEL_80;
    if ( v67 >= 0 )
    {
      v72 = v67;
      v70 = 0;
      v71 = v136;
      v73 = v126[23];
      v74 = v73 + 24LL * v67;
      if ( *(char *)(v74 + 3) < 0 )
      {
LABEL_36:
        v78 = v73 + 24 * v72;
        goto LABEL_37;
      }
      goto LABEL_34;
    }
    v103 = (unsigned int)(-2 - v67);
    v104 = *(_QWORD *)(v126[32] + 8LL * ((unsigned int)(-2 - v67) >> 6));
    if ( _bittest64(&v104, v103) )
    {
      v105 = (_QWORD *)(v126[26] + 8 * ((unsigned __int64)(int)v103 >> 5));
      if ( *v105 )
      {
        v71 = v136;
        v74 = *v105 + 24LL * ((-2 - (_BYTE)v67) & 0x1F);
        if ( *(char *)(v74 + 3) < 0 )
        {
LABEL_91:
          v70 = 0;
          goto LABEL_92;
        }
        goto LABEL_34;
      }
      v125 = v126[28];
      v114 = (_QWORD *)(v125 & 0xFFFFFFFFFFFFFFF8LL);
      v115 = *(_QWORD *)(v125 & 0xFFFFFFFFFFFFFFF8LL);
      v114[10] += 768LL;
      v116 = (_DWORD *)((v115 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v114[1] >= (unsigned __int64)(v116 + 192) && v115 )
      {
        *v114 = v116 + 192;
      }
      else
      {
        LODWORD(v125) = v67;
        v116 = (_DWORD *)sub_632560((__int64)v114, 768, 3);
        v67 = v125;
      }
      *v105 = v116;
      v117 = v116 + 192;
      do
      {
        *v116 = 0;
        v116 += 6;
        *((_OWORD *)v116 - 1) = 0;
      }
      while ( v117 != v116 );
      v109 = v136[0];
      v71 = v136;
      v74 = *v105 + 24 * (v103 & 0x1F);
    }
    else
    {
      LODWORD(v128) = v67;
      v125 = (__int64)v136;
      v74 = sub_CA9380(v126, (unsigned int)v103, v136);
      v71 = (_BYTE *)v125;
      v67 = (int)v128;
      v109 = v136[0];
    }
    if ( v109 || !v74 || *(char *)(v74 + 3) < 0 )
    {
      v136[0] = 0;
      goto LABEL_91;
    }
LABEL_34:
    v75 = v126;
    v76 = *(_DWORD *)v74;
    v128 = v71;
    LODWORD(v125) = v67;
    v77 = sub_CACB30(v126, (unsigned int)v67);
    v67 = v125;
    v71 = v128;
    v136[0] = 0;
    v70 = v77 + (v76 & 0x7FFFFFFF);
    if ( (int)v125 >= 0 )
    {
      v73 = v75[23];
      v72 = (int)v125;
      goto LABEL_36;
    }
LABEL_92:
    v106 = (unsigned int)(-2 - v67);
    v107 = *(_QWORD *)(v126[32] + 8LL * ((unsigned int)(-2 - v67) >> 6));
    if ( _bittest64(&v107, v106) )
    {
      v108 = (_QWORD *)(v126[26] + 8 * ((unsigned __int64)(int)v106 >> 5));
      if ( *v108 )
      {
        v78 = *v108 + 24LL * ((-2 - (_BYTE)v67) & 0x1F);
LABEL_37:
        if ( *(char *)(v78 + 3) >= 0 )
        {
          v79 = *(_DWORD *)v78 & 0x7FFFFFFF;
LABEL_39:
          v140 = 0;
          v80 = _mm_loadh_ps((const double *)(v56 + 8));
          v143 = v79;
          a2 = (__int64)sub_633640;
          v126 = v150;
          ptr = v150;
          v141 = v134;
          *(__m128 *)v136 = v80;
          v139 = sub_633640;
          v142 = 0;
          v144 = v70;
          v145 = 0;
          v147 = 0;
          v149 = 0x500000000LL;
          v151 = (void ***)v153;
          v152 = 0x500000000LL;
          *(_DWORD *)&v136[16] = 71;
          v146 = 0;
          v137 = 0;
          v138 = 0;
          v81 = sub_61A680((__int64)v71);
          v82 = v151;
          LOBYTE(v125) = v81;
          v83 = &v151[(unsigned int)v152];
          if ( v151 != v83 )
          {
            do
            {
              v84 = *v82;
              if ( *v82 )
              {
                if ( *v84 != v84 + 2 )
                  free(*v84);
                a2 = 656;
                operator delete(v84, 0x290u);
              }
              ++v82;
            }
            while ( v83 != v82 );
            v83 = v151;
          }
          if ( v83 != (void ***)v153 )
            free(v83);
          if ( ptr != v126 )
            free(ptr);
          v41 = 2 * (unsigned __int8)v125;
          goto LABEL_51;
        }
LABEL_80:
        v79 = 0;
        goto LABEL_39;
      }
      v110 = (__int64 *)(v126[28] & 0xFFFFFFFFFFFFFFF8LL);
      v111 = *v110;
      v110[10] += 768;
      v112 = (_DWORD *)((v111 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v110[1] >= (unsigned __int64)(v112 + 192) && v111 )
      {
        *v110 = (__int64)(v112 + 192);
      }
      else
      {
        v125 = (__int64)v71;
        v112 = (_DWORD *)sub_632560((__int64)v110, 768, 3);
        v71 = (_BYTE *)v125;
      }
      *v108 = v112;
      v113 = v112 + 192;
      do
      {
        *v112 = 0;
        v112 += 6;
        *((_OWORD *)v112 - 1) = 0;
      }
      while ( v113 != v112 );
      v101 = v136[0];
      v78 = *v108 + 24 * (v106 & 0x1F);
    }
    else
    {
      v125 = (__int64)v71;
      v78 = sub_CA9380(v126, (unsigned int)v106, v71);
      v101 = v136[0];
      v71 = (_BYTE *)v125;
    }
    if ( v101 || !v78 )
      goto LABEL_80;
    goto LABEL_37;
  }
LABEL_51:
  nullsub_174(v48);
  if ( v13 )
  {
    v40 = (*(_DWORD *)v13)-- == 1;
    if ( v40 )
      goto LABEL_53;
  }
  return v41;
}

