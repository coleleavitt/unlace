__m128i *__fastcall clang_getCursor(
        __m128i *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int128 a9,
        __int64 a10)
{
  __int64 v11; // rbp
  int v12; // r14d
  bool v13; // r13
  __int64 v14; // rax
  __m128i si128; // xmm0
  pthread_mutex_t *v16; // r15
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  __m128i v21; // kr00_16
  int v22; // ecx
  __int128 v23; // rax
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  int v28; // r8d
  int v29; // r9d
  unsigned int *v30; // rsi
  size_t **v31; // rdi
  __m128i v32; // xmm0
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rdx
  __int64 v36; // rcx
  size_t *v37; // rax
  size_t i; // rdx
  unsigned __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 MappedSourcePath_0; // r12
  __int64 v43; // rax
  size_t *v44; // rax
  size_t j; // rdx
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rax
  int v50; // edi
  __int64 v51; // rdx
  __int64 v52; // r14
  int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  __int64 CursorUSR; // rax
  __int64 v57; // rdx
  __int64 CString; // r14
  __int64 v59; // rax
  __int64 v60; // r14
  __int64 v61; // rax
  int v62; // edx
  int v63; // ecx
  int v64; // r8d
  int v65; // r9d
  int v66; // r12d
  __int64 (*v67)(); // rsi
  int v68; // r8d
  int v69; // r9d
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  bool v76; // zf
  _BYTE *v78; // rbp
  bool v79; // r13
  __int64 v80; // rax
  __m128i v81; // xmm0
  __int64 v82; // rbp
  __int64 v83; // r12
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 (*v90)(); // rdx
  __int64 (*v91)(); // r12
  __m128i v92; // xmm0
  int v93; // r8d
  int v94; // r9d
  __int64 v95; // rdx
  __int64 v96; // rcx
  size_t *v97; // rax
  size_t k; // rdx
  unsigned __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rdx
  __m128i v103; // [rsp+0h] [rbp-1F8h]
  __m128i v104; // [rsp+0h] [rbp-1F8h]
  __m128i v105; // [rsp+10h] [rbp-1E8h]
  __m128i v106; // [rsp+10h] [rbp-1E8h]
  __m128i v107; // [rsp+20h] [rbp-1D8h]
  __m128i v108; // [rsp+20h] [rbp-1D8h]
  __m128i v109; // [rsp+20h] [rbp-1D8h]
  __m128i v110; // [rsp+30h] [rbp-1C8h]
  __m128i v111; // [rsp+30h] [rbp-1C8h]
  _BYTE *v112; // [rsp+48h] [rbp-1B0h]
  __int64 v113; // [rsp+48h] [rbp-1B0h]
  __int64 v114; // [rsp+48h] [rbp-1B0h]
  __int64 v115; // [rsp+50h] [rbp-1A8h]
  __int64 v116; // [rsp+50h] [rbp-1A8h]
  __int64 v117; // [rsp+58h] [rbp-1A0h]
  __int64 v118; // [rsp+58h] [rbp-1A0h]
  __int64 CursorKindSpelling; // [rsp+60h] [rbp-198h]
  __int64 v120; // [rsp+60h] [rbp-198h]
  __int64 v121; // [rsp+68h] [rbp-190h]
  __int64 v122; // [rsp+70h] [rbp-188h]
  __int64 v123; // [rsp+78h] [rbp-180h]
  const char *v124; // [rsp+80h] [rbp-178h]
  unsigned int v125; // [rsp+90h] [rbp-168h] BYREF
  unsigned int v126; // [rsp+94h] [rbp-164h] BYREF
  unsigned int v127; // [rsp+98h] [rbp-160h] BYREF
  unsigned int v128; // [rsp+9Ch] [rbp-15Ch] BYREF
  unsigned int v129; // [rsp+A0h] [rbp-158h] BYREF
  unsigned int v130; // [rsp+A4h] [rbp-154h] BYREF
  size_t *v131; // [rsp+A8h] [rbp-150h] BYREF
  size_t *v132; // [rsp+B0h] [rbp-148h] BYREF
  size_t *v133; // [rsp+B8h] [rbp-140h] BYREF
  __m128i v134; // [rsp+C0h] [rbp-138h] BYREF
  __int64 v135; // [rsp+D0h] [rbp-128h]
  __m128i v136; // [rsp+E0h] [rbp-118h] BYREF
  __int128 v137; // [rsp+F0h] [rbp-108h] BYREF
  __m128i v138; // [rsp+100h] [rbp-F8h] BYREF
  __m128i v139; // [rsp+110h] [rbp-E8h] BYREF
  __m128i v140; // [rsp+120h] [rbp-D8h] BYREF
  __m128i v141; // [rsp+130h] [rbp-C8h] BYREF
  __m128i v142; // [rsp+140h] [rbp-B8h] BYREF
  __m128i v143; // [rsp+150h] [rbp-A8h] BYREF
  __m128i v144; // [rsp+160h] [rbp-98h] BYREF
  __m128i v145; // [rsp+170h] [rbp-88h] BYREF
  __int64 v146; // [rsp+180h] [rbp-78h]
  __m128i v147; // [rsp+190h] [rbp-68h] BYREF
  __int128 v148; // [rsp+1A0h] [rbp-58h] BYREF
  __int64 v149; // [rsp+1B0h] [rbp-48h]
  __int64 v150; // [rsp+1B8h] [rbp-40h]

  if ( a2 )
  {
    v11 = *(_QWORD *)(a2 + 8) + 2048LL;
    nullsub_173(v11);
    sub_620580(&v136, a2, a10);
    v12 = v136.m128i_i32[0];
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    v13 = 0;
    if ( qword_4AD21C8 )
    {
      v112 = (_BYTE *)qword_4AD21C8;
      if ( strlen((const char *)qword_4AD21C8) == 1 )
        v13 = *v112 == 50;
    }
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    if ( !qword_4AD21C8 )
      goto LABEL_33;
    v14 = operator new(0xC0u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
    v16 = (pthread_mutex_t *)v14;
    *(_DWORD *)v14 = 0;
    *(_QWORD *)(v14 + 8) = v14 + 24;
    *(_QWORD *)(v14 + 48) = v14 + 72;
    strcpy((char *)(v14 + 24), "clang_getCursor");
    *(_QWORD *)(v14 + 136) = &off_49DA340;
    *(_BYTE *)(v14 + 40) = v13;
    *(_QWORD *)(v14 + 184) = v14 + 48;
    *(_QWORD *)(v14 + 16) = 15;
    *(_DWORD *)(v14 + 144) = 2;
    *(_BYTE *)(v14 + 176) = 0;
    *(_DWORD *)(v14 + 180) = 1;
    *(_QWORD *)(v14 + 168) = 0;
    *(__m128i *)(v14 + 56) = si128;
    *(_OWORD *)(v14 + 152) = 0;
    sub_2623850(v14 + 136, 0, 0, 0, v17, v18);
    v21 = v136;
    v22 = v12 - 1;
    v23 = v137;
    ++v16->__lock;
    v147 = v21;
    v148 = v23;
    if ( (unsigned int)(v12 - 1) <= 0x26 || (v22 = v12 - 600, (unsigned int)(v12 - 600) <= 4) )
    {
      v147.m128i_i32[0] = v12;
      clang_getCursorDefinition(
        &v142,
        v21.m128i_i32[0],
        SDWORD2(v23),
        v22,
        v19,
        v20,
        _mm_load_si128((const __m128i *)&v148),
        a4);
      v107 = _mm_load_si128(&v147);
      v110 = _mm_load_si128((const __m128i *)&v148);
      v103 = _mm_load_si128(&v142);
      v105 = _mm_load_si128(&v143);
      if ( (unsigned __int8)sub_63A900(
                              (unsigned int)&v142,
                              v21.m128i_i32[0],
                              v24,
                              v25,
                              v26,
                              v27,
                              v103.m128i_i32[0],
                              v103.m128i_i64[1],
                              v105.m128i_i64[0],
                              v105.m128i_i64[1],
                              v107.m128i_i32[0],
                              v107.m128i_i64[1],
                              v110.m128i_i64[0],
                              v110.m128i_i64[1]) )
      {
        v124 = " (Definition)";
        v23 = v137;
        v21 = v136;
        goto LABEL_13;
      }
      v23 = v137;
      v21 = v136;
    }
    v124 = &byte_3B9466E;
LABEL_13:
    clang_getCursorLocation(
      &v134,
      v21.m128i_i64[0],
      *((__int64 *)&v23 + 1),
      (__int64)&v134,
      v19,
      v20,
      (__int128)v21,
      v23);
    v108 = _mm_loadu_si128((const __m128i *)&a9);
    clang_getFileLocation((int)&v131, (int)&v125, (int)&v126, 0, v28, v29, v108.m128i_i64[0], v108.m128i_i32[2], a10);
    v30 = &v127;
    v31 = &v132;
    v32 = _mm_load_si128(&v134);
    clang_getFileLocation((int)&v132, (int)&v127, (int)&v128, 0, v33, v34, v32.m128i_i64[0], v32.m128i_i32[2], v135);
    v37 = v131;
    if ( v131 )
    {
      for ( i = v131[1]; i; i = *(_QWORD *)(v39 + 8) )
      {
        if ( (i & 4) == 0 )
          break;
        v39 = i & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v39 )
          break;
        v37 = (size_t *)v39;
      }
      v31 = (size_t **)(v37 + 4);
      v30 = (unsigned int *)*v37;
      MappedSourcePath_0 = sub_690520(v37 + 4, *v37);
      v43 = v40;
    }
    else
    {
      MappedSourcePath_0 = clang_CompileCommand_getMappedSourcePath_0(&v132, &v127, v35, v36);
      v43 = v40;
    }
    v113 = v43;
    v44 = v132;
    if ( v132 )
    {
      for ( j = v132[1]; j; j = *(_QWORD *)(v46 + 8) )
      {
        if ( (j & 4) == 0 )
          break;
        v46 = j & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v46 )
          break;
        v44 = (size_t *)v46;
      }
      v30 = (unsigned int *)*v44;
      v47 = sub_690520(v44 + 4, *v44);
      v49 = v48;
    }
    else
    {
      v47 = clang_CompileCommand_getMappedSourcePath_0(v31, v30, v40, v41);
      v49 = v102;
    }
    v50 = v12;
    v115 = v47;
    v117 = v49;
    CursorKindSpelling = clang_getCursorKindSpelling(v12);
    v52 = v51;
    CursorUSR = clang_getCursorUSR(
                  v50,
                  (int)v30,
                  v51,
                  v53,
                  v54,
                  v55,
                  (__int128)_mm_load_si128(&v136),
                  (__int128)_mm_load_si128((const __m128i *)&v137));
    v123 = v57;
    v122 = CursorUSR;
    v121 = v52;
    CString = clang_getCString(CursorKindSpelling, v52);
    v59 = clang_getCString(MappedSourcePath_0, v113);
    v145.m128i_i64[0] = CString;
    v146 = v59;
    v144 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_49F4898, (__m128i)(unsigned __int64)"(%s:%d:%d) = %s");
    v145.m128i_i64[1] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v126), _mm_cvtsi32_si128(v125)).m128i_u64[0];
    sub_26248B0(&v16[3].__align + 2, &v144);
    v60 = clang_getCString(v122, v123);
    v61 = clang_getCString(v115, v117);
    *((_QWORD *)&v148 + 1) = v60;
    v150 = v61;
    v147 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_49F48B8, (__m128i)(unsigned __int64)"(%s:%d:%d):%s%s");
    *(_QWORD *)&v148 = v124;
    v149 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v128), _mm_cvtsi32_si128(v127)).m128i_u64[0];
    sub_26248B0(&v16[3].__align + 2, &v147);
    clang_disposeString(MappedSourcePath_0, v113);
    clang_disposeString(v115, v117);
    clang_disposeString(CursorKindSpelling, v121);
    clang_disposeString(v122, v123);
    clang_getCursorDefinition(
      &v138,
      v123,
      v62,
      v63,
      v64,
      v65,
      _mm_load_si128((const __m128i *)&v137),
      (__m128i)(unsigned __int64)"(%s:%d:%d) = %s");
    v66 = v138.m128i_i32[0];
    v67 = (__int64 (*)())(&dword_44 + 2);
    sub_638F50(&v140, 70, 0);
    v70 = v139.m128i_i64[0];
    v144 = _mm_load_si128(&v138);
    v145 = _mm_load_si128(&v139);
    v147 = _mm_load_si128(&v140);
    v148 = (__int128)_mm_load_si128(&v141);
    if ( (unsigned int)(v66 - 1) <= 0x26 || (unsigned int)(v66 - 600) <= 4 )
      v70 = 0;
    if ( (unsigned int)(v140.m128i_i32[0] - 1) <= 0x26 || (unsigned int)(v140.m128i_i32[0] - 600) <= 4 )
      v71 = 0;
    else
      v71 = v141.m128i_i64[0];
    v145.m128i_i64[0] = v70;
    *(_QWORD *)&v148 = v71;
    v109 = _mm_load_si128(&v147);
    v111 = _mm_load_si128((const __m128i *)&v148);
    v104 = _mm_load_si128(&v144);
    v106 = _mm_load_si128(&v145);
    if ( !(unsigned __int8)sub_63A900(
                             (unsigned int)&v140,
                             70,
                             v70,
                             v140.m128i_i32[0] - 1,
                             v68,
                             v69,
                             v104.m128i_i32[0],
                             v104.m128i_i64[1],
                             v106.m128i_i64[0],
                             v106.m128i_i64[1],
                             v109.m128i_i32[0],
                             v109.m128i_i64[1],
                             v111.m128i_i64[0],
                             v111.m128i_i64[1]) )
    {
      clang_getCursorLocation(
        &v144,
        70,
        v72,
        v73,
        v74,
        v75,
        (__int128)_mm_load_si128(&v138),
        (__int128)_mm_load_si128(&v139));
      v114 = clang_getCursorKindSpelling(v66);
      v91 = v90;
      v92 = _mm_load_si128(&v144);
      clang_getFileLocation(
        (int)&v133,
        (int)&v129,
        (int)&v130,
        0,
        v93,
        v94,
        v92.m128i_i64[0],
        v92.m128i_i32[2],
        v145.m128i_i32[0]);
      v97 = v133;
      if ( v133 )
      {
        for ( k = v133[1]; k; k = *(_QWORD *)(v99 + 8) )
        {
          if ( (k & 4) == 0 )
            break;
          v99 = k & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v99 )
            break;
          v97 = (size_t *)v99;
        }
        v101 = sub_690520(v97 + 4, *v97);
      }
      else
      {
        v101 = clang_CompileCommand_getMappedSourcePath_0(&v133, &v129, v95, v96);
      }
      v118 = v100;
      v120 = v101;
      v116 = clang_getCString(v101, v100);
      v149 = clang_getCString(v114, v91);
      *((_QWORD *)&v148 + 1) = v116;
      v147 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_49F48D8, (__m128i)(unsigned __int64)"  -> %s(%s:%d:%d)");
      *(_QWORD *)&v148 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v130), _mm_cvtsi32_si128(v129)).m128i_u64[0];
      sub_26248B0(&v16[3].__align + 2, &v147);
      clang_disposeString(v120, v118);
      v67 = v91;
      clang_disposeString(v114, v91);
    }
    v76 = v16->__lock-- == 1;
    if ( v76 )
    {
      sub_60C330(v16, v67, v72, v73);
      operator delete(v16, 0xC0u);
    }
LABEL_33:
    *a1 = _mm_load_si128(&v136);
    a1[1] = _mm_load_si128((const __m128i *)&v137);
    nullsub_174(v11);
    return a1;
  }
  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v78 = (_BYTE *)qword_4AD21C8;
  v79 = 0;
  if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
    v79 = *v78 == 50;
  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  if ( qword_4AD21C8 )
  {
    v80 = operator new(0xC0u);
    v81 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
    v82 = v80;
    *(_DWORD *)v80 = 0;
    *(_QWORD *)(v80 + 8) = v80 + 24;
    v83 = v80 + 136;
    *(_QWORD *)(v80 + 48) = v80 + 72;
    strcpy((char *)(v80 + 24), "clang_getCursor");
    *(_QWORD *)(v80 + 136) = &off_49DA340;
    *(_QWORD *)(v80 + 184) = v80 + 48;
    *(_QWORD *)(v80 + 16) = 15;
    *(_BYTE *)(v80 + 40) = v79;
    *(_DWORD *)(v80 + 144) = 2;
    *(_BYTE *)(v80 + 176) = 0;
    *(_DWORD *)(v80 + 180) = 1;
    *(_QWORD *)(v80 + 168) = 0;
    *(__m128i *)(v80 + 56) = v81;
    *(_OWORD *)(v80 + 152) = 0;
    sub_2623850(v80 + 136, 0, 0, 0, v84, v85);
    v86 = *(_QWORD *)(v82 + 168);
    v87 = *(_QWORD *)(v82 + 160);
    ++*(_DWORD *)v82;
    if ( (unsigned __int64)(v87 - v86) <= 0x15 )
    {
      sub_26240F0(v83, "called with a bad TU: ", 22);
    }
    else
    {
      *(__m128i *)v86 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
      *(_QWORD *)(v86 + 14) = 0x203A555420646162LL;
      *(_QWORD *)(v82 + 168) += 22LL;
    }
    sub_5FF0F0(v83, "<NULL TU>");
    v76 = (*(_DWORD *)v82)-- == 1;
    if ( v76 )
    {
      sub_60C330((pthread_mutex_t *)v82, (__int64 (*)())"<NULL TU>", v88, v89);
      operator delete((void *)v82, 0xC0u);
    }
  }
  sub_638F50(a1, 70, 0);
  return a1;
}

