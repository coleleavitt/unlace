__int64 __fastcall sub_6E6C20(__m128i *a1, _QWORD *a2, unsigned int a3, unsigned int a4, _QWORD *a5)
{
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // r15
  bool v14; // cf
  __int64 v15; // rax
  _QWORD *v16; // rbx
  __int64 v17; // r13
  unsigned int v18; // ecx
  size_t v19; // rsi
  unsigned int v20; // r14d
  unsigned int *v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // r13
  __int64 v25; // rdx
  __int64 v26; // r14
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // r14
  __int64 v34; // rax
  __m128i v35; // xmm0
  struct _Unwind_Exception *v36; // rax
  unsigned int **v37; // r14
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  _DWORD *v42; // rcx
  _Unwind_Exception_Cleanup_Fn v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  _DWORD *v47; // rcx
  __int64 *v48; // rsi
  __int64 v49; // rax
  __m128i v50; // xmm0
  unsigned int **v51; // rcx
  int v52; // eax
  unsigned int **v53; // r14
  unsigned int **v54; // r13
  void (*v55)(_Unwind_Reason_Code, struct _Unwind_Exception *); // rdx
  unsigned int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  _DWORD *v59; // rcx
  _Unwind_Exception_Cleanup_Fn v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // rcx
  int v63; // eax
  _DWORD *v64; // rcx
  __int64 *v65; // rsi
  _QWORD *v66; // r13
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 *v69; // rsi
  _QWORD *v70; // rdi
  _QWORD *v71; // r13
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 *v74; // rsi
  _QWORD *v75; // rdi
  __int64 v77; // rbx
  __int64 *v78; // rbx
  unsigned int v79; // r13d
  size_t v80; // rsi
  unsigned int *v81; // rax
  struct _Unwind_Exception *v82; // rcx
  unsigned int v83; // r14d
  size_t v84; // rsi
  unsigned int *v85; // rax
  __int64 v86; // rcx
  struct _Unwind_Exception *v87; // rsi
  unsigned int v88; // r14d
  size_t v89; // rsi
  unsigned int *v90; // rax
  struct _Unwind_Exception *v91; // rcx
  unsigned int v92; // ecx
  size_t v93; // rsi
  __int64 v94; // rax
  unsigned __int64 v95; // rcx
  __int64 *v96; // r13
  __int64 v97; // rsi
  __int64 v99; // rbx
  __int64 *v100; // rdx
  _QWORD *v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  char **v106; // r13
  __int64 *v107; // r14
  __int64 *v108; // rsi
  char **v109; // r13
  __int64 *v110; // r14
  __int64 *v111; // rsi
  char **v112; // r13
  __int64 *v113; // r14
  __int64 *v114; // rsi
  char **v115; // r13
  __int64 *v116; // r14
  __int64 *v117; // rsi
  char **exception; // r14
  unsigned int v119; // [rsp+Ch] [rbp-174h]
  __int64 v120; // [rsp+10h] [rbp-170h]
  __int64 v121; // [rsp+20h] [rbp-160h]
  __int64 v122; // [rsp+30h] [rbp-150h]
  __int64 v123; // [rsp+38h] [rbp-148h]
  __int64 v124; // [rsp+40h] [rbp-140h]
  unsigned __int64 v125; // [rsp+40h] [rbp-140h]
  __int64 v126; // [rsp+48h] [rbp-138h]
  __int64 v127; // [rsp+50h] [rbp-130h]
  __int64 *v128; // [rsp+60h] [rbp-120h] BYREF
  _QWORD *v129; // [rsp+68h] [rbp-118h]
  __int64 *v130; // [rsp+70h] [rbp-110h]
  struct _Unwind_Exception *v131; // [rsp+78h] [rbp-108h]
  unsigned int v132; // [rsp+8Ch] [rbp-F4h] BYREF
  __int64 *v133; // [rsp+90h] [rbp-F0h] BYREF
  __int64 v134; // [rsp+98h] [rbp-E8h] BYREF
  __int64 v135; // [rsp+A0h] [rbp-E0h] BYREF
  __int64 v136; // [rsp+A8h] [rbp-D8h] BYREF
  __int64 v137; // [rsp+B0h] [rbp-D0h] BYREF
  __int64 v138; // [rsp+B8h] [rbp-C8h]
  __int64 *v139; // [rsp+C0h] [rbp-C0h] BYREF
  __int64 v140; // [rsp+C8h] [rbp-B8h]
  __int64 v141; // [rsp+D0h] [rbp-B0h] BYREF
  __int64 v142; // [rsp+D8h] [rbp-A8h]
  __int64 v143; // [rsp+E0h] [rbp-A0h] BYREF
  _QWORD *v144; // [rsp+E8h] [rbp-98h]
  __int64 v145; // [rsp+F0h] [rbp-90h] BYREF
  __int64 v146; // [rsp+F8h] [rbp-88h]
  __int64 v147; // [rsp+100h] [rbp-80h] BYREF
  __int64 v148; // [rsp+108h] [rbp-78h]
  _QWORD v149[4]; // [rsp+110h] [rbp-70h] BYREF
  _OWORD v150[5]; // [rsp+130h] [rbp-50h] BYREF

  v7 = a2[7];
  v129 = a5;
  v8 = a2[6];
  v130 = (__int64 *)(v7 + 16LL * a3);
  v9 = *(_QWORD *)(v8 + 8LL * a3);
  v128 = (__int64 *)(v7 + 16LL * a4);
  v127 = v9;
  v126 = *(_QWORD *)(v8 + 8LL * a4);
  v10 = v130[1];
  if ( v10 )
    v11 = *(_DWORD *)(v10 - 4);
  else
    v11 = 0;
  v12 = *(_QWORD *)(v7 + 16LL * a4 + 8);
  if ( v12 )
  {
    v13 = a1->m128i_i64[0];
    v14 = v11 < *(_DWORD *)(v12 - 4);
    v148 = 0;
    v146 = 0;
    v145 = v13;
    v147 = v13;
    if ( !v14 )
    {
      v77 = v127;
      v127 = v126;
      v126 = v77;
      v78 = v130;
      v130 = v128;
      v10 = v12;
      v128 = v78;
      goto LABEL_6;
    }
    if ( v10 )
    {
LABEL_6:
      LODWORD(v131) = *(_DWORD *)(v10 - 4) - 1;
      goto LABEL_7;
    }
    LODWORD(v131) = -1;
  }
  else
  {
    v13 = a1->m128i_i64[0];
    v146 = 0;
    v99 = v127;
    v148 = 0;
    v127 = v126;
    v100 = v128;
    v126 = v99;
    v145 = v13;
    v147 = v13;
    v128 = v130;
    v130 = v100;
    LODWORD(v131) = -1;
  }
LABEL_7:
  v15 = a2[4];
  v149[1] = a1;
  v149[0] = off_1C53298;
  v149[2] = v15;
  v143 = v13;
  v144 = nullptr;
  sub_41D160(&v143);
  sub_3EE030((__int64)&v143, (__int64)v130);
  v16 = v144;
  v120 = v143;
  if ( v144 )
  {
    v17 = *((unsigned int *)v144 - 1);
    if ( (unsigned int)v131 < (unsigned int)v17 )
    {
      v95 = (unsigned __int64)&v144[v17];
      v96 = &v144[(unsigned int)v131];
      if ( (unsigned __int64)v96 >= v95 )
        goto LABEL_60;
      do
      {
        while ( 1 )
        {
          v97 = *v96;
          if ( *v96 )
          {
            if ( (*(_DWORD *)(v97 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v96 >= v95 )
            goto LABEL_67;
        }
        v125 = v95;
        sub_15D7BC0(v120, v97);
        v95 = v125;
        ++v96;
      }
      while ( (unsigned __int64)v96 < v125 );
LABEL_67:
      v17 = *((unsigned int *)v16 - 1);
    }
    if ( (unsigned int)v17 >= (unsigned int)v131 )
    {
LABEL_60:
      *((_DWORD *)v16 - 1) = (_DWORD)v131;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !(_DWORD)v131 )
      goto LABEL_17;
    v101 = (_QWORD *)sub_186B270(0x18u);
    *v101 = 2;
    v16 = v101 + 1;
    v17 = 0;
  }
  while ( 1 )
  {
    v22 = *((_DWORD *)v16 - 2);
    v23 = (unsigned int)v131;
    if ( v22 >= (unsigned int)v131 )
      break;
    v18 = (3 * v22 + 1) >> 1;
    v19 = 8 * v18 + 8;
    v20 = v18;
    if ( 8 * v22 + 8 >= (unsigned int)v19 || v22 >= v18 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v150, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v150);
      sub_233E40((__int64)v150);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v21 = (unsigned int *)sub_186B300(v16 - 1, v19);
    *v21 = v20;
    v16 = v21 + 2;
  }
  v24 = 8 * v17;
  *((_DWORD *)v16 - 1) = (_DWORD)v131;
  v25 = 8LL * v23;
  if ( v24 != v25 )
    memset(&v16[(unsigned __int64)v24 / 8], 0, v25 - v24);
LABEL_17:
  v137 = 0;
  v138 = v13;
  sub_6E5B50(a1->m128i_i64, (__int64)v128, (__int64)v130, &v145, &v147, &v137, &v132);
  v26 = v137;
  v122 = v138;
  v31 = sub_6E15B0((_DWORD)a1, 0, v27, v28, v29, v30);
  v124 = v31;
  if ( v31 )
    ++*(_DWORD *)(v31 + 8);
  sub_6DE2A0(v26, v122);
  v144 = v16;
  v140 = v13;
  v139 = nullptr;
  sub_6E27D0((__int64)v149, (__int64)&v143, (__int64 *)&v139);
  v141 = 0;
  v128 = v139;
  v142 = v13;
  v121 = v140;
  sub_6E27D0((__int64)v149, (__int64)&v147, &v141);
  v32 = v142;
  v123 = v141;
  v33 = sub_186B270(0x30u);
  v131 = (struct _Unwind_Exception *)v33;
  v130 = (__int64 *)v150;
  v150[0] = _mm_loadh_ps((const double *)&v128);
  v34 = sub_6E3580(a1, 2, v150);
  v35 = _mm_loadl_epi64(a1);
  *(__m128i *)(v33 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, v35);
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  v36 = v131;
  v131[1].exception_class = 0;
  v36[1].exception_cleanup = nullptr;
  v36->exception_class = (_Unwind_Exception_Class)&off_1C53448;
  v36->private_2 = v35.m128i_i64[0];
  v133 = v128;
  if ( v128 )
    ++*((_DWORD *)v128 + 2);
  v37 = (unsigned int **)&v131[1];
  sub_6DE970((unsigned int **)&v131[1], &v133);
  exception_cleanup = v131[1].exception_cleanup;
  if ( exception_cleanup )
  {
    v39 = *((_DWORD *)exception_cleanup - 1);
    if ( v39 == *((_DWORD *)exception_cleanup - 2) )
    {
      v92 = (3 * v39 + 1) >> 1;
      v93 = 4 * v92 + 8;
      if ( 4 * v39 + 8 >= (unsigned int)v93 || v39 >= v92 )
      {
        v109 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v130, "Overflow encountered when expanding vector");
        v110 = v130;
        v111 = v130;
        *v109 = (char *)off_1C63128;
        sub_2333C0(v109 + 1, v111);
        sub_233E40((__int64)v110);
        __cxa_throw(v109, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v119 = (3 * v39 + 1) >> 1;
      v94 = sub_186B300((char *)exception_cleanup - 8, v93);
      exception_cleanup = (_Unwind_Exception_Cleanup_Fn)(v94 + 8);
      v131[1].exception_cleanup = (_Unwind_Exception_Cleanup_Fn)(v94 + 8);
      *(_DWORD *)v94 = v119;
      LODWORD(v94) = *(_DWORD *)(v94 + 4);
      v42 = (_DWORD *)((char *)exception_cleanup + 4 * (unsigned int)v94);
      v41 = v94 + 1;
    }
    else
    {
      v40 = v39;
      v41 = v39 + 1;
      v42 = (_DWORD *)((char *)exception_cleanup + 4 * v40);
    }
  }
  else
  {
    v104 = sub_186B270(0x10u);
    exception_cleanup = (_Unwind_Exception_Cleanup_Fn)(v104 + 8);
    *(_QWORD *)v104 = 2;
    v42 = (_DWORD *)(v104 + 8);
    v131[1].exception_cleanup = (_Unwind_Exception_Cleanup_Fn)(v104 + 8);
    v41 = 1;
  }
  *v42 = 0;
  *((_DWORD *)exception_cleanup - 1) = v41;
  v134 = v127;
  if ( v127 )
    ++*(_DWORD *)(v127 + 8);
  sub_6DE970(v37, &v134);
  v43 = v131[1].exception_cleanup;
  if ( v43 )
  {
    v44 = *((_DWORD *)v43 - 1);
    if ( v44 == *((_DWORD *)v43 - 2) )
    {
      v88 = (3 * v44 + 1) >> 1;
      v89 = 4 * v88 + 8;
      if ( 4 * v44 + 8 >= (unsigned int)v89 || v44 >= v88 )
      {
        v106 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v130, "Overflow encountered when expanding vector");
        v107 = v130;
        v108 = v130;
        *v106 = (char *)off_1C63128;
        sub_2333C0(v106 + 1, v108);
        sub_233E40((__int64)v107);
        __cxa_throw(v106, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v90 = (unsigned int *)sub_186B300((char *)v43 - 8, v89);
      v91 = v131;
      v43 = (_Unwind_Exception_Cleanup_Fn)(v90 + 2);
      *v90 = v88;
      v91[1].exception_cleanup = (_Unwind_Exception_Cleanup_Fn)(v90 + 2);
      LODWORD(v90) = v90[1];
      v47 = (_DWORD *)((char *)v43 + 4 * (unsigned int)v90);
      v46 = (_DWORD)v90 + 1;
    }
    else
    {
      v45 = v44;
      v46 = v44 + 1;
      v47 = (_DWORD *)((char *)v43 + 4 * v45);
    }
  }
  else
  {
    v102 = sub_186B270(0x10u);
    v43 = (_Unwind_Exception_Cleanup_Fn)(v102 + 8);
    *(_QWORD *)v102 = 2;
    v47 = (_DWORD *)(v102 + 8);
    v131[1].exception_cleanup = (_Unwind_Exception_Cleanup_Fn)(v102 + 8);
    v46 = 1;
  }
  *v47 = 1;
  v48 = v130;
  *((_DWORD *)v43 - 1) = v46;
  *(_QWORD *)&v150[0] = v131;
  sub_6DE5F0(v129, v48);
  v49 = sub_186B270(0x30u);
  v50 = _mm_loadl_epi64(a1);
  v131 = (struct _Unwind_Exception *)v49;
  v51 = (unsigned int **)v49;
  *(__m128i *)(v49 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v123, v50);
  if ( v123 )
  {
    v52 = *(_DWORD *)(v123 + 8);
    v135 = v123;
    v53 = v51;
    v51[4] = nullptr;
    v51[5] = nullptr;
    *v51 = (unsigned int *)&off_1C53448;
    v51[3] = (unsigned int *)v50.m128i_i64[0];
    *(_DWORD *)(v123 + 8) = v52 + 2;
  }
  else
  {
    *(_QWORD *)(v49 + 32) = 0;
    v53 = (unsigned int **)v49;
    *(_QWORD *)(v49 + 40) = 0;
    *(_QWORD *)v49 = &off_1C53448;
    v135 = 0;
    *(_QWORD *)(v49 + 24) = v50.m128i_i64[0];
  }
  v54 = v53 + 4;
  sub_6DE970(v53 + 4, &v135);
  v55 = (void (*)(_Unwind_Reason_Code, struct _Unwind_Exception *))v53[5];
  if ( v55 )
  {
    v56 = *((_DWORD *)v55 - 1);
    if ( v56 == *((_DWORD *)v55 - 2) )
    {
      v83 = (3 * v56 + 1) >> 1;
      v84 = 4 * v83 + 8;
      if ( 4 * v56 + 8 >= (unsigned int)v84 || v56 >= v83 )
      {
        v115 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v130, "Overflow encountered when expanding vector");
        v116 = v130;
        v117 = v130;
        *v115 = (char *)off_1C63128;
        sub_2333C0(v115 + 1, v117);
        sub_233E40((__int64)v116);
        __cxa_throw(v115, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v85 = (unsigned int *)sub_186B300((char *)v55 - 8, v84);
      v86 = v85[1];
      v87 = v131;
      v55 = (void (*)(_Unwind_Reason_Code, struct _Unwind_Exception *))(v85 + 2);
      *v85 = v83;
      LODWORD(v85) = v86;
      v87[1].exception_cleanup = v55;
      v59 = (_DWORD *)((char *)v55 + 4 * v86);
      v58 = (_DWORD)v85 + 1;
    }
    else
    {
      v57 = v56;
      v58 = v56 + 1;
      v59 = (_DWORD *)((char *)v55 + 4 * v57);
    }
  }
  else
  {
    v103 = sub_186B270(0x10u);
    v55 = (void (*)(_Unwind_Reason_Code, struct _Unwind_Exception *))(v103 + 8);
    *(_QWORD *)v103 = 2;
    v59 = (_DWORD *)(v103 + 8);
    v131[1].exception_cleanup = (_Unwind_Exception_Cleanup_Fn)(v103 + 8);
    v58 = 1;
  }
  *v59 = 0;
  *((_DWORD *)v55 - 1) = v58;
  v136 = v126;
  if ( v126 )
    ++*(_DWORD *)(v126 + 8);
  sub_6DE970(v54, &v136);
  v60 = v131[1].exception_cleanup;
  if ( v60 )
  {
    v61 = *((_DWORD *)v60 - 1);
    if ( v61 == *((_DWORD *)v60 - 2) )
    {
      v79 = (3 * v61 + 1) >> 1;
      v80 = 4 * v79 + 8;
      if ( 4 * v61 + 8 >= (unsigned int)v80 || v61 >= v79 )
      {
        v112 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v130, "Overflow encountered when expanding vector");
        v113 = v130;
        v114 = v130;
        *v112 = (char *)off_1C63128;
        sub_2333C0(v112 + 1, v114);
        sub_233E40((__int64)v113);
        __cxa_throw(v112, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v81 = (unsigned int *)sub_186B300((char *)v60 - 8, v80);
      v82 = v131;
      v60 = (_Unwind_Exception_Cleanup_Fn)(v81 + 2);
      *v81 = v79;
      v82[1].exception_cleanup = (_Unwind_Exception_Cleanup_Fn)(v81 + 2);
      LODWORD(v81) = v81[1];
      v64 = (_DWORD *)((char *)v60 + 4 * (unsigned int)v81);
      v63 = (_DWORD)v81 + 1;
    }
    else
    {
      v62 = v61;
      v63 = v61 + 1;
      v64 = (_DWORD *)((char *)v60 + 4 * v62);
    }
  }
  else
  {
    v105 = sub_186B270(0x10u);
    v60 = (_Unwind_Exception_Cleanup_Fn)(v105 + 8);
    *(_QWORD *)v105 = 2;
    v64 = (_DWORD *)(v105 + 8);
    v131[1].exception_cleanup = (_Unwind_Exception_Cleanup_Fn)(v105 + 8);
    v63 = 1;
  }
  *v64 = 1;
  v65 = v130;
  *((_DWORD *)v60 - 1) = v63;
  *(_QWORD *)&v150[0] = v131;
  sub_6DE5F0(v129, v65);
  v66 = (_QWORD *)sub_186B270(0x30u);
  v67 = sub_15E1A70(a1->m128i_i64[0]);
  v68 = a1->m128i_i64[0];
  v66[1] = v67;
  *v66 = &off_1C53418;
  v66[2] = v68;
  if ( v67 )
    ++*(_DWORD *)(v67 + 8);
  v66[3] = v68;
  v69 = v130;
  v66[4] = 0;
  v70 = v129;
  v66[5] = 0;
  *(_QWORD *)&v150[0] = v66;
  sub_6DE5F0(v70, v69);
  v71 = (_QWORD *)sub_186B270(0x30u);
  v72 = sub_15E1A70(a1->m128i_i64[0]);
  v73 = a1->m128i_i64[0];
  v71[1] = v72;
  *v71 = &off_1C53418;
  v71[2] = v73;
  if ( v72 )
    ++*(_DWORD *)(v72 + 8);
  v71[3] = v73;
  v74 = v130;
  v71[4] = 0;
  v75 = v129;
  v71[5] = 0;
  *(_QWORD *)&v150[0] = v71;
  sub_6DE5F0(v75, v74);
  sub_2B4F40(&v147);
  sub_2B4F40(&v145);
  sub_2B4F40(&v143);
  sub_6DE2A0(v123, v32);
  sub_6DE2A0((__int64)v128, v121);
  return sub_6DE2A0(v124, v122);
}

