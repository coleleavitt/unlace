__int64 __fastcall sub_62E0C0(__int64 a1, char *a2, __int32 a3, __int32 a4, __int64 a5, __int64 a6, unsigned int a7)
{
  __int64 v7; // rbx
  unsigned int v8; // r15d
  __m128 v9; // xmm1
  __m128 v10; // xmm2
  _QWORD *v11; // rbp
  char *v12; // rax
  bool v13; // zf
  _BYTE *v14; // r12
  __int64 v15; // r13
  const char *v16; // r15
  void *v17; // r14
  char *v18; // rax
  size_t v19; // rcx
  void *v20; // rdx
  void **v21; // rdx
  _QWORD *v22; // rsi
  void **v23; // rax
  char *v24; // rdi
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rax
  __int64 v28; // rbx
  _DWORD *v29; // rbp
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rdx
  __m128i v33; // xmm0
  _DWORD *v34; // r12
  _DWORD *v35; // rax
  _DWORD *v36; // r13
  void *v37; // r12
  _QWORD *v38; // r13
  _DWORD *v39; // rbp
  __int64 v40; // rax
  char *v41; // r9
  __m128 v42; // xmm0
  unsigned __int64 v43; // xmm6_8
  __int64 *v44; // r13
  __int64 *v45; // r8
  char *v46; // rbp
  char *v47; // r15
  _BYTE *v48; // r14
  __int64 *v49; // rbx
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rsi
  bool v53; // cf
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rdi
  char *v56; // rax
  void *v57; // r12
  __int64 v58; // r13
  __m128i v59; // xmm7
  __m128i v60; // xmm6
  __m128i v61; // xmm5
  __m128i v62; // xmm7
  char *v63; // r14
  __m128 v64; // xmm0
  __int64 v65; // rax
  unsigned __int64 v66; // xmm1_8
  __int64 v67; // r15
  __int64 v68; // r14
  __int32 v69; // r8d
  int v70; // edx
  char *v71; // r10
  int v72; // eax
  __int32 v73; // ecx
  int v74; // r9d
  char *v75; // rsi
  volatile signed __int32 *v76; // r13
  volatile signed __int32 *v77; // rdx
  signed __int32 v78; // eax
  unsigned __int64 v79; // rsi
  unsigned __int64 v80; // rax
  int v81; // r15d
  __int64 v82; // rdx
  __int64 v83; // rax
  __m128 v84; // xmm0
  unsigned __int64 v85; // xmm2_8
  volatile signed __int32 *v86; // r13
  volatile signed __int32 *v87; // rdx
  signed __int32 v88; // eax
  __int64 *v89; // rbp
  __int64 v90; // rdx
  void *v91; // rsi
  volatile signed __int32 *v92; // rbp
  volatile signed __int32 *v93; // rdx
  signed __int32 v94; // eax
  __int64 v95; // rsi
  _BYTE *v96; // r12
  _BYTE *v97; // rbp
  void *v99; // rax
  void *v100; // rdi
  __int64 v101; // rcx
  unsigned __int64 v102; // r15
  __int64 v103; // r8
  _BYTE *v104; // r14
  char *v105; // rax
  _QWORD *v106; // rdx
  unsigned __int64 v107; // rsi
  __int64 v108; // rcx
  __int64 v109; // rcx
  char *v110; // rcx
  unsigned int v111; // edi
  _BYTE *v112; // r13
  _BYTE *v113; // r14
  __int64 v114; // rbp
  int v115; // eax
  unsigned __int64 v116; // r8
  char *v117; // rsi
  char *v118; // r9
  unsigned int v119; // ecx
  unsigned int v120; // ecx
  unsigned int v121; // esi
  __int64 v122; // r10
  unsigned __int64 v123; // rcx
  unsigned int v124; // edi
  unsigned int v125; // edi
  unsigned int v126; // r9d
  __int64 v127; // r11
  __int64 v128; // r14
  __int64 v129; // r12
  __int64 v130; // r14
  __int64 v131; // r12
  __int64 v132; // r14
  __int64 v133; // r12
  __int64 v134; // r14
  __int64 v135; // r12
  __int64 v136; // r14
  __int64 v137; // r12
  char *v138; // rdi
  char *v139; // rdi
  char *v140; // rdi
  __int64 v141; // r13
  __int64 v142; // rax
  _QWORD *v143; // r14
  _QWORD *v144; // r13
  _QWORD *v145; // rbx
  void (__fastcall *v146)(_QWORD *); // rax
  _BYTE *v147; // r12
  bool v148; // r13
  __int64 v149; // rax
  __int64 v150; // rbx
  __int64 v151; // rax
  void *v152; // rdx
  __m128i si128; // xmm0
  _BYTE *v154; // rax
  __int64 v155; // rdx
  __m128i v156; // xmm0
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rdx
  __int64 v160; // rax
  __int64 (*v161)(); // rsi
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // rax
  __int64 v165; // rax
  void *v166; // rdi
  __int64 v167; // rax
  unsigned __int64 v168; // rdi
  __int64 v169; // [rsp+10h] [rbp-408h]
  __int64 v170; // [rsp+10h] [rbp-408h]
  __int64 v171; // [rsp+18h] [rbp-400h]
  size_t na; // [rsp+20h] [rbp-3F8h]
  char n; // [rsp+20h] [rbp-3F8h]
  size_t nb; // [rsp+20h] [rbp-3F8h]
  const __m128i *v175; // [rsp+28h] [rbp-3F0h]
  __int64 v176; // [rsp+38h] [rbp-3E0h]
  __int64 v178; // [rsp+40h] [rbp-3D8h]
  bool v180; // [rsp+54h] [rbp-3C4h]
  __int64 v181; // [rsp+58h] [rbp-3C0h]
  __m128 v182; // [rsp+60h] [rbp-3B8h] BYREF
  __m128 v183; // [rsp+70h] [rbp-3A8h] BYREF
  __m128i v184; // [rsp+80h] [rbp-398h] BYREF
  __m128i v185; // [rsp+90h] [rbp-388h] BYREF
  char *v186; // [rsp+A0h] [rbp-378h]
  __int64 v187; // [rsp+A8h] [rbp-370h]
  const __m128i *v188; // [rsp+B0h] [rbp-368h]
  __int64 v189; // [rsp+B8h] [rbp-360h]
  _BYTE *v190; // [rsp+C0h] [rbp-358h]
  __int64 v191; // [rsp+C8h] [rbp-350h]
  _QWORD *v192; // [rsp+D0h] [rbp-348h]
  __int32 v193; // [rsp+D8h] [rbp-340h] BYREF
  __int32 v194; // [rsp+DCh] [rbp-33Ch] BYREF
  char *s; // [rsp+E0h] [rbp-338h] BYREF
  __int64 v196; // [rsp+E8h] [rbp-330h] BYREF
  __int64 v197; // [rsp+F8h] [rbp-320h] BYREF
  void *v198[2]; // [rsp+100h] [rbp-318h] BYREF
  _QWORD v199[2]; // [rsp+110h] [rbp-308h] BYREF
  void *v200[2]; // [rsp+120h] [rbp-2F8h] BYREF
  __int128 v201; // [rsp+130h] [rbp-2E8h]
  __int64 v202; // [rsp+140h] [rbp-2D8h]
  char v203; // [rsp+148h] [rbp-2D0h]
  int v204; // [rsp+14Ch] [rbp-2CCh]
  void **v205; // [rsp+150h] [rbp-2C8h]
  _QWORD v206[4]; // [rsp+160h] [rbp-2B8h] BYREF
  char v207; // [rsp+180h] [rbp-298h]
  __m128i v208; // [rsp+188h] [rbp-290h] BYREF
  __m128i v209; // [rsp+198h] [rbp-280h] BYREF
  __m128i v210; // [rsp+1A8h] [rbp-270h] BYREF
  __m128i v211; // [rsp+1B8h] [rbp-260h] BYREF
  __m128i *v212; // [rsp+1C8h] [rbp-250h]
  _BYTE *v213; // [rsp+1D0h] [rbp-248h] BYREF
  __int64 v214; // [rsp+1D8h] [rbp-240h]
  _BYTE v215[160]; // [rsp+1E0h] [rbp-238h] BYREF
  void *v216; // [rsp+280h] [rbp-198h] BYREF
  char *v217; // [rsp+288h] [rbp-190h]
  _QWORD v218[2]; // [rsp+290h] [rbp-188h] BYREF
  void *v219; // [rsp+2A0h] [rbp-178h]
  unsigned int v220; // [rsp+2A8h] [rbp-170h]
  __m128 v221; // [rsp+2B0h] [rbp-168h]
  void *src; // [rsp+2C0h] [rbp-158h]
  __int64 v223; // [rsp+2C8h] [rbp-150h]
  _BYTE v224[256]; // [rsp+2D0h] [rbp-148h] BYREF
  __int64 *v225; // [rsp+3D0h] [rbp-48h]

  v7 = a5;
  v194 = a3;
  v196 = a1;
  s = a2;
  v8 = a7 & 8;
  v9 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)off_49F4A00, (__m128i)(unsigned __int64)&v193);
  v193 = a4;
  v10 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)off_49F4A00, (__m128i)(unsigned __int64)&v194);
  v182 = v9;
  v183 = v10;
  v184 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_49F49D0, (__m128i)(unsigned __int64)&s);
  v185 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v210, (__m128i)(unsigned __int64)&v209);
  v180 = (a7 & 4) != 0;
  getenv("LIBCLANG_CODE_COMPLETION_LOGGING");
  if ( !v196 )
  {
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    v147 = (_BYTE *)qword_4AD21C8;
    v148 = 0;
    if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
      v148 = *v147 == 50;
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    if ( qword_4AD21C8 )
    {
      v149 = operator new(0xC0u);
      v216 = &qword_18 + 1;
      v150 = v149;
      *(_DWORD *)v149 = 0;
      *(_QWORD *)(v149 + 8) = v149 + 24;
      v151 = std::string::_M_create();
      v152 = v216;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E430);
      *(_QWORD *)(v150 + 8) = v151;
      *(_QWORD *)(v150 + 24) = v152;
      *(__m128i *)v151 = si128;
      *(__m128i *)(v151 + 9) = _mm_load_si128((const __m128i *)&xmmword_3C7E440);
      v154 = v216;
      v155 = *(_QWORD *)(v150 + 8);
      v156 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
      *(_QWORD *)(v150 + 16) = v216;
      v154[v155] = 0;
      *(_QWORD *)(v150 + 48) = v150 + 72;
      *(_BYTE *)(v150 + 40) = v148;
      *(__m128i *)(v150 + 56) = v156;
      *(_QWORD *)(v150 + 136) = &off_49DA340;
      *(_QWORD *)(v150 + 184) = v150 + 48;
      *(_DWORD *)(v150 + 144) = 2;
      *(_BYTE *)(v150 + 176) = 0;
      *(_DWORD *)(v150 + 180) = 1;
      *(_QWORD *)(v150 + 168) = 0;
      *(_OWORD *)(v150 + 152) = 0;
      sub_2623850(v150 + 136, 0, 0, 0, v157, v158);
      v159 = *(_QWORD *)(v150 + 168);
      v160 = *(_QWORD *)(v150 + 160);
      ++*(_DWORD *)v150;
      if ( (unsigned __int64)(v160 - v159) <= 0x15 )
      {
        sub_26240F0(v150 + 136, "called with a bad TU: ", 22);
      }
      else
      {
        *(__m128i *)v159 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
        *(_QWORD *)(v159 + 14) = 0x203A555420646162LL;
        *(_QWORD *)(v150 + 168) += 22LL;
      }
      v161 = (__int64 (*)())v196;
      sub_60BBA0(v150, v196);
      v13 = (*(_DWORD *)v150)-- == 1;
      if ( v13 )
      {
        sub_60C330((pthread_mutex_t *)v150, v161, v162, v163);
        operator delete((void *)v150, 0xC0u);
      }
    }
    return 0;
  }
  v175 = *(const __m128i **)(v196 + 8);
  if ( !v175 )
    return 0;
  v186 = *(char **)v196;
  if ( (v186[4] & 2) != 0 )
    sub_60B480();
  v188 = v175 + 128;
  nullsub_173(&v175[128]);
  v213 = v215;
  v214 = 0x400000000LL;
  v171 = v7 + 24 * a6;
  if ( v171 != v7 )
  {
    LODWORD(v189) = a7 & 8;
    v11 = v218;
    while ( 1 )
    {
      v12 = *(char **)v7;
      v13 = **(_BYTE **)v7 == 0;
      LOWORD(v219) = 257;
      if ( !v13 )
      {
        v216 = v12;
        LOBYTE(v219) = 3;
      }
      v14 = *(_BYTE **)(v7 + 8);
      v15 = *(_QWORD *)(v7 + 16);
      sub_25CCFD0(v198, v14, v15, &v216);
      v16 = *(const char **)v7;
      v17 = v198[0];
      v216 = v11;
      v198[0] = nullptr;
      if ( !v16 )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      v18 = (char *)strlen(v16);
      v200[0] = v18;
      v19 = (size_t)v18;
      if ( (unsigned __int64)v18 > 0xF )
        break;
      if ( v18 == (_BYTE *)&dword_0 + 1 )
      {
        LOBYTE(v218[0]) = *v16;
      }
      else if ( v18 )
      {
        v100 = v11;
        goto LABEL_104;
      }
      v20 = v11;
LABEL_14:
      v217 = v18;
      v18[(_QWORD)v20] = 0;
      v219 = v17;
      v21 = (void **)&v213[40 * (unsigned int)v214];
      if ( HIDWORD(v214) >= (unsigned __int64)(unsigned int)v214 + 1 )
      {
        v22 = v21 + 2;
        v23 = &v216;
        v24 = (char *)v11;
        *v21 = v21 + 2;
        v25 = v216;
        if ( v216 == v11 )
        {
          LODWORD(v101) = (_DWORD)v217 + 1;
          if ( (unsigned int)((_DWORD)v217 + 1) < 8 )
            goto LABEL_108;
LABEL_138:
          *v22 = *(_QWORD *)v24;
          *(_QWORD *)((char *)v22 + (unsigned int)v101 - 8) = *(_QWORD *)&v24[(unsigned int)v101 - 8];
          v116 = (unsigned __int64)(v22 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v117 = (char *)v22 - v116;
          v118 = (char *)(v24 - v117);
          v119 = ((_DWORD)v117 + v101) & 0xFFFFFFF8;
          if ( v119 >= 8 )
          {
            v120 = v119 & 0xFFFFFFF8;
            v121 = 0;
            do
            {
              v122 = v121;
              v121 += 8;
              *(_QWORD *)(v116 + v122) = *(_QWORD *)&v118[v122];
            }
            while ( v121 < v120 );
          }
          goto LABEL_17;
        }
LABEL_16:
        *v21 = v25;
        v21[2] = v23[2];
        goto LABEL_17;
      }
      if ( &v216 < (void **)v213 || &v216 >= v21 )
      {
        n = 0;
        v102 = -1;
      }
      else
      {
        n = 1;
        v102 = 0xCCCCCCCCCCCCCCCDLL * (((char *)&v216 - v213) >> 3);
      }
      v103 = sub_25D5F70(&v213, v215, (unsigned int)v214 + 1LL, 40, v200);
      v104 = &v213[40 * (unsigned int)v214];
      if ( v213 == v104 )
        goto LABEL_132;
      v105 = v213 + 16;
      v106 = (_QWORD *)(v103 + 16);
      v107 = (unsigned __int64)&v213[((40LL * (unsigned int)v214 - 40) & 0xFFFFFFFFFFFFFFF8LL) + 56];
      do
      {
        *(v106 - 2) = v106;
        v110 = *((char **)v105 - 2);
        if ( v105 != v110 )
        {
          *(v106 - 2) = v110;
          *v106 = *(_QWORD *)v105;
LABEL_118:
          v108 = *((_QWORD *)v105 - 1);
          goto LABEL_119;
        }
        v108 = *((_QWORD *)v105 - 1);
        v111 = v108 + 1;
        if ( (unsigned int)(v108 + 1) >= 8 )
        {
          *v106 = *(_QWORD *)v105;
          *(_QWORD *)((char *)v106 + v111 - 8) = *(_QWORD *)&v105[v111 - 8];
          v123 = (unsigned __int64)(v106 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v124 = ((_DWORD)v106 - v123 + v111) & 0xFFFFFFF8;
          if ( v124 >= 8 )
          {
            v125 = v124 & 0xFFFFFFF8;
            v126 = 0;
            do
            {
              v127 = v126;
              v126 += 8;
              *(_QWORD *)(v123 + v127) = *(_QWORD *)(v105 - ((char *)v106 - v123) + v127);
            }
            while ( v126 < v125 );
          }
          goto LABEL_118;
        }
        if ( (v111 & 4) != 0 )
        {
          *(_DWORD *)v106 = *(_DWORD *)v105;
          *(_DWORD *)((char *)v106 + v111 - 4) = *(_DWORD *)&v105[v111 - 4];
          v108 = *((_QWORD *)v105 - 1);
        }
        else if ( (_DWORD)v108 != -1 )
        {
          *(_BYTE *)v106 = *v105;
          if ( (v111 & 2) == 0 )
            goto LABEL_118;
          *(_WORD *)((char *)v106 + v111 - 2) = *(_WORD *)&v105[v111 - 2];
          v108 = *((_QWORD *)v105 - 1);
        }
LABEL_119:
        *(v106 - 1) = v108;
        v109 = *((_QWORD *)v105 + 2);
        v106 += 5;
        *((_QWORD *)v105 - 2) = v105;
        v105 += 40;
        *((_QWORD *)v105 - 6) = 0;
        *(v105 - 40) = 0;
        *(v106 - 3) = v109;
      }
      while ( (char *)v107 != v105 );
      v104 = &v213[40 * (unsigned int)v214];
      if ( v213 != v104 )
      {
        v190 = v14;
        v191 = v15;
        v112 = &v213[40 * (unsigned int)v214];
        v113 = v213;
        v192 = v11;
        v114 = v103;
        do
        {
          v112 -= 40;
          if ( *(_BYTE **)v112 != v112 + 16 )
            operator delete(*(void **)v112, *((_QWORD *)v112 + 2) + 1LL);
        }
        while ( v113 != v112 );
        v103 = v114;
        v104 = v213;
        v11 = v192;
      }
LABEL_132:
      v115 = (int)v200[0];
      if ( v104 != v215 )
      {
        v192 = v200[0];
        v190 = (_BYTE *)v103;
        free(v104);
        v115 = (int)v192;
        v103 = (__int64)v190;
      }
      HIDWORD(v214) = v115;
      v213 = (_BYTE *)v103;
      v23 = &v216;
      if ( n )
        v23 = (void **)(v103 + 40 * v102);
      v24 = (char *)(v23 + 2);
      v21 = (void **)(v103 + 40LL * (unsigned int)v214);
      v22 = v21 + 2;
      *v21 = v21 + 2;
      v25 = *v23;
      if ( *v23 != v23 + 2 )
        goto LABEL_16;
      v101 = (__int64)v23[1] + 1;
      if ( (unsigned int)v101 >= 8 )
        goto LABEL_138;
LABEL_108:
      if ( (v101 & 4) != 0 )
      {
        *(_DWORD *)v22 = *(_DWORD *)v24;
        *(_DWORD *)((char *)v22 + (unsigned int)v101 - 4) = *(_DWORD *)&v24[(unsigned int)v101 - 4];
      }
      else if ( (_DWORD)v101 )
      {
        *(_BYTE *)v22 = *v24;
        if ( (v101 & 2) != 0 )
          *(_WORD *)((char *)v22 + (unsigned int)v101 - 2) = *(_WORD *)&v24[(unsigned int)v101 - 2];
      }
LABEL_17:
      v26 = v23[1];
      *v23 = v24;
      v23[1] = nullptr;
      v21[1] = v26;
      *((_BYTE *)v23 + 16) = 0;
      v27 = v23[4];
      LODWORD(v214) = v214 + 1;
      v21[4] = v27;
      if ( v216 != v11 )
        operator delete(v216, v218[0] + 1LL);
      if ( v198[0] )
      {
        v7 += 24;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v198[0] + 8LL))(v198[0]);
        if ( v171 == v7 )
          goto LABEL_21;
        continue;
      }
      v7 += 24;
      if ( v171 == v7 )
      {
LABEL_21:
        v8 = v189;
        goto LABEL_22;
      }
    }
    na = (size_t)v18;
    v99 = (void *)std::string::_M_create();
    v19 = na;
    v216 = v99;
    v100 = v99;
    v218[0] = v200[0];
LABEL_104:
    memcpy(v100, v16, v19);
    v18 = (char *)v200[0];
    v20 = v216;
    goto LABEL_14;
  }
LABEL_22:
  v28 = operator new(0x7D8u);
  v29 = (_DWORD *)v175[1].m128i_i64[1];
  if ( v29 )
    ++*v29;
  *(_QWORD *)v28 = 0;
  *(_QWORD *)(v28 + 16) = v28 + 32;
  *(_QWORD *)(v28 + 864) = v28 + 880;
  *(_DWORD *)(v28 + 8) = 0;
  *(_QWORD *)(v28 + 24) = 0x800000000LL;
  *(_QWORD *)(v28 + 872) = 0x800000000LL;
  v30 = operator new(0x108u);
  *(_OWORD *)(v30 + 144) = 0;
  *(_QWORD *)(v30 + 48) = v30 + 64;
  *(_QWORD *)(v30 + 80) = v30 + 96;
  *(_QWORD *)(v30 + 112) = v30 + 128;
  v31 = *(_QWORD *)v30 & 0xFF80000000000000LL | 0x6F000000001LL;
  *(_OWORD *)(v30 + 160) = 0;
  *(_QWORD *)v30 = v31;
  *(_OWORD *)(v30 + 176) = 0;
  *(_QWORD *)(v30 + 24) = 0x1000000032LL;
  v32 = *(_QWORD *)(v30 + 32);
  *(_OWORD *)(v30 + 192) = 0;
  *(_OWORD *)(v30 + 208) = 0;
  *(_OWORD *)(v30 + 224) = 0;
  *(_OWORD *)(v30 + 240) = 0;
  v33 = _mm_load_si128((const __m128i *)&xmmword_3C7E380);
  *(_QWORD *)(v30 + 56) = 0;
  *(_BYTE *)(v30 + 64) = 0;
  *(_QWORD *)(v30 + 88) = 0;
  *(_BYTE *)(v30 + 96) = 0;
  *(_QWORD *)(v30 + 120) = 0;
  *(_BYTE *)(v30 + 128) = 0;
  *(_QWORD *)(v30 + 256) = 0;
  *(_QWORD *)(v28 + 944) = v30;
  *(_QWORD *)(v30 + 32) = (unsigned int)v32 & 0xFFFFFFFE | 0x800000001LL;
  *(_DWORD *)(v30 + 40) = 0;
  *(_BYTE *)(v30 + 44) = 0;
  *(__m128i *)(v30 + 8) = v33;
  v34 = (_DWORD *)operator new(0x3B90u);
  v35 = *(_DWORD **)(v28 + 944);
  v216 = v35;
  if ( v35 )
    ++*v35;
  v36 = (_DWORD *)operator new(0x18u);
  sub_C73470(v36);
  ++*v36;
  v200[0] = v36;
  sub_C680A0(v34, v200, &v216, 0, 1);
  ++*v34;
  *(_QWORD *)(v28 + 952) = v34;
  v37 = v200[0];
  if ( v200[0] && (v13 = *(_DWORD *)v200[0] == 1, --*(_DWORD *)v200[0], v13) )
  {
    sub_C73B10(v37);
    operator delete(v37, 0x18u);
    v38 = v216;
    if ( !v216 )
      goto LABEL_30;
  }
  else
  {
    v38 = v216;
    if ( !v216 )
      goto LABEL_30;
  }
  v13 = (*(_DWORD *)v38)-- == 1;
  if ( v13 )
  {
    v128 = v38[31];
    v129 = v38[30];
    if ( v128 != v129 )
    {
      do
      {
        if ( *(_QWORD *)v129 != v129 + 16 )
          operator delete(*(void **)v129, *(_QWORD *)(v129 + 16) + 1LL);
        v129 += 32;
      }
      while ( v128 != v129 );
      v129 = v38[30];
    }
    if ( v129 )
      operator delete((void *)v129, v38[32] - v129);
    v130 = v38[28];
    v131 = v38[27];
    if ( v130 != v131 )
    {
      do
      {
        if ( *(_QWORD *)v131 != v131 + 16 )
          operator delete(*(void **)v131, *(_QWORD *)(v131 + 16) + 1LL);
        v131 += 32;
      }
      while ( v130 != v131 );
      v131 = v38[27];
    }
    if ( v131 )
      operator delete((void *)v131, v38[29] - v131);
    v132 = v38[25];
    v133 = v38[24];
    if ( v132 != v133 )
    {
      do
      {
        if ( *(_QWORD *)v133 != v133 + 16 )
          operator delete(*(void **)v133, *(_QWORD *)(v133 + 16) + 1LL);
        v133 += 32;
      }
      while ( v132 != v133 );
      v133 = v38[24];
    }
    if ( v133 )
      operator delete((void *)v133, v38[26] - v133);
    v134 = v38[22];
    v135 = v38[21];
    if ( v134 != v135 )
    {
      do
      {
        if ( *(_QWORD *)v135 != v135 + 16 )
          operator delete(*(void **)v135, *(_QWORD *)(v135 + 16) + 1LL);
        v135 += 32;
      }
      while ( v134 != v135 );
      v135 = v38[21];
    }
    if ( v135 )
      operator delete((void *)v135, v38[23] - v135);
    v136 = v38[19];
    v137 = v38[18];
    if ( v136 != v137 )
    {
      do
      {
        if ( *(_QWORD *)v137 != v137 + 16 )
          operator delete(*(void **)v137, *(_QWORD *)(v137 + 16) + 1LL);
        v137 += 32;
      }
      while ( v136 != v137 );
      v137 = v38[18];
    }
    if ( v137 )
      operator delete((void *)v137, v38[20] - v137);
    v138 = (char *)v38[14];
    if ( v138 != (char *)(v38 + 16) )
      operator delete(v138, v38[16] + 1LL);
    v139 = (char *)v38[10];
    if ( v139 != (char *)(v38 + 12) )
      operator delete(v139, v38[12] + 1LL);
    v140 = (char *)v38[6];
    if ( v140 != (char *)(v38 + 8) )
      operator delete(v140, v38[8] + 1LL);
    operator delete(v38, 0x108u);
  }
LABEL_30:
  v189 = v28 + 960;
  sub_C8D5A0(v28 + 960);
  *(_QWORD *)(v28 + 1816) = v29;
  v39 = (_DWORD *)operator new(0x2B8u);
  sub_CAA760(v39, *(_QWORD *)(v28 + 952), *(_QWORD *)(v28 + 1816), 0);
  ++*v39;
  *(_QWORD *)(v28 + 1832) = v28 + 1848;
  *(_QWORD *)(v28 + 1824) = v39;
  *(_QWORD *)(v28 + 1840) = 0x100000000LL;
  *(_QWORD *)(v28 + 1872) = 0;
  *(_OWORD *)(v28 + 1856) = 0;
  v40 = operator new(0x70u);
  *(_BYTE *)(v28 + 1928) = 0;
  *(_QWORD *)(v28 + 1896) = 0x7FFFFF;
  *(_QWORD *)(v28 + 1880) = v40;
  *(_QWORD *)(v40 + 8) = 0x100000001LL;
  *(_DWORD *)(v28 + 1904) = 73;
  *(_QWORD *)(v28 + 1920) = 0;
  *(_QWORD *)v40 = off_47CFF50;
  memset((void *)(v40 + 16), 0, 0x60u);
  *(_DWORD *)(v40 + 44) = 4;
  *(_QWORD *)(v40 + 32) = v40 + 48;
  *(_QWORD *)(v40 + 80) = v40 + 96;
  *(_QWORD *)(v28 + 1872) = v40 + 16;
  *(_QWORD *)(v28 + 1912) = v28 + 1928;
  *(_QWORD *)(v40 + 104) = 1;
  *(_DWORD *)(v28 + 1944) = 1;
  *(_QWORD *)(v28 + 1952) = v28 + 1968;
  *(_QWORD *)(v28 + 1960) = 0;
  *(_BYTE *)(v28 + 1968) = 0;
  *(_QWORD *)(v28 + 2000) = 0;
  *(_OWORD *)(v28 + 1984) = 0;
  if ( getenv("LIBCLANG_OBJTRACKING") )
    fprintf(stderr, "+++ %u completion results\n", _InterlockedIncrement(&dword_4AD21D0));
  v42 = (__m128)_mm_loadu_si128((const __m128i *)(v28 + 1872));
  *(_QWORD *)v28 = 0;
  *(_DWORD *)(v28 + 8) = 0;
  v43 = _mm_movehl_ps((__m128)(unsigned __int64)&v194, v42).m128_u64[0];
  v218[0] = v28;
  LOBYTE(v217) = (unsigned __int8)v217 & 0x80 | (((a7 & 0x10) != 0) << 6) | (16 * v180) | 0xC | (32 * ((v8 >> 3) ^ 1));
  v216 = &off_47CFF08;
  if ( v43 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v43 + 8), 1u);
    else
      ++*(_DWORD *)(v43 + 8);
  }
  v220 = 0;
  src = v224;
  v190 = v224;
  v218[1] = 0;
  v223 = 0x1000000000LL;
  v225 = &v196;
  v219 = nullptr;
  v221 = v42;
  v44 = *(__int64 **)(v196 + 56);
  v45 = *(__int64 **)(v196 + 64);
  if ( v45 != v44 )
  {
    v176 = v28;
    v46 = nullptr;
    v47 = nullptr;
    v48 = nullptr;
    v49 = *(__int64 **)(v196 + 64);
    while ( 1 )
    {
      while ( 1 )
      {
        v50 = *v44;
        if ( v46 == v47 )
          break;
        v44 += 4;
        *(_QWORD *)v47 = v50;
        v47 += 8;
        if ( v49 == v44 )
          goto LABEL_49;
      }
      v51 = (v46 - v48) >> 3;
      if ( v51 == 0xFFFFFFFFFFFFFFFLL )
        std::__throw_length_error("vector::_M_realloc_append");
      v52 = 1;
      if ( v51 )
        v52 = (v46 - v48) >> 3;
      v53 = __CFADD__(v52, v51);
      v54 = v52 + v51;
      if ( v53 )
      {
        v169 = 0x7FFFFFFFFFFFFFF8LL;
        v55 = 0x7FFFFFFFFFFFFFF8LL;
      }
      else
      {
        if ( v54 > 0xFFFFFFFFFFFFFFFLL )
          v54 = 0xFFFFFFFFFFFFFFFLL;
        v169 = 8 * v54;
        v55 = 8 * v54;
      }
      v56 = (char *)operator new(v55);
      v41 = v56;
      *(_QWORD *)&v56[v46 - v48] = v50;
      v47 = &v56[v46 - v48 + 8];
      if ( v46 - v48 > 0 )
        break;
      if ( v48 )
        goto LABEL_143;
LABEL_48:
      v44 += 4;
      v48 = v41;
      v46 = &v41[v169];
      if ( v49 == v44 )
      {
LABEL_49:
        v28 = v176;
        v57 = v48;
        v58 = (v47 - v48) >> 3;
        goto LABEL_50;
      }
    }
    v41 = (char *)memcpy(v56, v48, v46 - v48);
LABEL_143:
    nb = (size_t)v41;
    operator delete(v48, v46 - v48);
    v41 = (char *)nb;
    goto LABEL_48;
  }
  LODWORD(v58) = 0;
  v46 = nullptr;
  v57 = nullptr;
LABEL_50:
  v59 = _mm_load_si128((const __m128i *)&v182);
  v60 = _mm_load_si128((const __m128i *)&v183);
  v206[0] = "-code-completion-at={0}:{1}:{2}";
  v61 = _mm_load_si128(&v185);
  v206[2] = &v211;
  v208 = v59;
  v62 = _mm_load_si128(&v184);
  v212 = &v208;
  v183.m128_u64[0] = (unsigned __int64)v199;
  v198[0] = v199;
  v205 = v198;
  v200[0] = &off_49DA2C8;
  v209 = v60;
  v210 = v62;
  v211 = v61;
  v201 = 0;
  v206[1] = 31;
  v206[3] = 3;
  v207 = 1;
  v198[1] = nullptr;
  LOBYTE(v199[0]) = 0;
  LODWORD(v200[1]) = 0;
  v203 = 0;
  v204 = 1;
  v202 = 0;
  sub_2623850(v200, 0, 0, 0, v45, v41);
  sub_2624AA0(v200, v206);
  if ( v202 != (_QWORD)v201 )
    sub_26239B0(v200);
  v200[0] = &off_49DA2C8;
  sub_2623770(v200);
  v63 = v186;
  sub_636FA0((unsigned int)v206, (_DWORD)v186, 1, *(_DWORD *)(v196 + 48), (_DWORD)v57, v58, (__int64)v198, 1, a5, a6);
  v64 = (__m128)_mm_loadu_si128((const __m128i *)(v63 + 40));
  v197 = 0;
  v65 = *(_QWORD *)(v28 + 1816);
  v66 = _mm_movehl_ps(v9, v64).m128_u64[0];
  *(__m128 *)v200 = v64;
  v182.m128_u64[0] = v65;
  v181 = *(_QWORD *)(v28 + 1824);
  v178 = *(_QWORD *)(v28 + 952);
  if ( v66 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v66 + 8), 1u);
    else
      ++*(_DWORD *)(v66 + 8);
  }
  v67 = (unsigned int)v214;
  v68 = (__int64)v213;
  v69 = v193;
  v70 = (a7 >> 1) & 1;
  v71 = s;
  v72 = 0;
  v73 = v194;
  v74 = a7 & 1;
  if ( s )
  {
    LODWORD(v192) = (a7 >> 1) & 1;
    v185.m128i_i32[0] = v194;
    v184.m128i_i32[0] = v193;
    v186 = s;
    v187 = 0;
    v72 = strlen(s);
    v70 = (int)v192;
    v71 = v186;
    v73 = v185.m128i_i32[0];
    v69 = v184.m128i_i32[0];
    v74 = a7 & 1;
  }
  v75 = v71;
  sub_FF9460(
    (_DWORD)v175,
    (_DWORD)v71,
    v72,
    v73,
    v69,
    v74,
    v68,
    v67,
    v70,
    v180,
    (__int64)&v216,
    (__int64)v200,
    v178,
    v189,
    v181,
    v182.m128_i64[0],
    v28 + 16,
    v28 + 1832,
    (__int64)&v197);
  v76 = (volatile signed __int32 *)v200[1];
  if ( v200[1] )
  {
    v77 = (volatile signed __int32 *)((char *)v200[1] + 8);
    if ( *((_QWORD *)v200[1] + 1) == 0x100000001LL )
    {
      v165 = *(_QWORD *)v200[1];
      v166 = v200[1];
      *((_QWORD *)v200[1] + 1) = 0;
      (*(void (__fastcall **)(void *, char *, volatile signed __int32 *))(v165 + 16))(v166, v75, v77);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v76 + 24LL))(v76);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v78 = _InterlockedExchangeAdd(v77, 0xFFFFFFFF);
      }
      else
      {
        v78 = *((_DWORD *)v200[1] + 2);
        *((_DWORD *)v200[1] + 2) = v78 - 1;
      }
      if ( v78 == 1 )
        sub_6111C0(v76);
    }
  }
  if ( v197 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v197 + 64LL))(v197);
  v79 = *(unsigned int *)(v28 + 24);
  v80 = *(unsigned int *)(v28 + 872);
  v81 = *(_DWORD *)(v28 + 24);
  if ( v79 == v80 )
    goto LABEL_72;
  v82 = 8 * v79;
  if ( v79 < v80 )
  {
    v141 = *(_QWORD *)(v28 + 864);
    v142 = 8 * v80;
    v143 = (_QWORD *)(v141 + v142);
    v144 = (_QWORD *)(v82 + v141);
    if ( v142 == v82 )
      goto LABEL_71;
    v170 = v28;
    while ( 1 )
    {
      v145 = (_QWORD *)*--v143;
      if ( !v145 )
        goto LABEL_204;
      v79 = (unsigned __int64)sub_629640;
      v146 = *(void (__fastcall **)(_QWORD *))(*v145 + 8LL);
      if ( v146 == sub_629640 )
      {
        *v145 = &off_47D0298;
        sub_62FED0(v145);
        v79 = 72;
        operator delete(v145, 0x48u);
LABEL_204:
        *v143 = 0;
        if ( v144 == v143 )
          goto LABEL_208;
      }
      else
      {
        v146(v145);
        *v143 = 0;
        if ( v144 == v143 )
        {
LABEL_208:
          v28 = v170;
          goto LABEL_71;
        }
      }
    }
  }
  if ( *(unsigned int *)(v28 + 876) < v79 )
  {
    sub_62DF80(v28 + 864, v79);
    v80 = *(unsigned int *)(v28 + 872);
    v82 = 8 * v79;
  }
  v83 = 8 * v80;
  if ( v83 != v82 )
  {
    v79 = 0;
    memset((void *)(v83 + *(_QWORD *)(v28 + 864)), 0, v82 - v83);
  }
LABEL_71:
  *(_DWORD *)(v28 + 872) = v81;
LABEL_72:
  v84 = (__m128)_mm_loadu_si128(v175 + 122);
  v85 = _mm_movehl_ps(v10, v84).m128_u64[0];
  if ( v85 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v85 + 8), 1u);
    else
      ++*(_DWORD *)(v85 + 8);
  }
  v86 = *(volatile signed __int32 **)(v28 + 1864);
  *(__m128 *)(v28 + 1856) = v84;
  if ( v86 )
  {
    v87 = v86 + 2;
    if ( *((_QWORD *)v86 + 1) == 0x100000001LL )
    {
      v164 = *(_QWORD *)v86;
      *((_QWORD *)v86 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, unsigned __int64, volatile signed __int32 *))(v164 + 16))(
        v86,
        v79,
        v87);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v86 + 24LL))(v86);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v88 = _InterlockedExchangeAdd(v87, 0xFFFFFFFF);
      }
      else
      {
        v88 = *((_DWORD *)v86 + 2);
        *((_DWORD *)v86 + 2) = v88 - 1;
      }
      if ( v88 == 1 )
        sub_6111C0(v86);
    }
  }
  sub_636F40(v206);
  if ( v198[0] != (void *)v183.m128_u64[0] )
    operator delete(v198[0], v199[0] + 1LL);
  if ( v57 )
    operator delete(v57, v46 - (_BYTE *)v57);
  v89 = (__int64 *)v218[0];
  v216 = &off_47CFF08;
  *v89 = operator new[](16LL * (unsigned int)v223);
  v90 = (unsigned int)v223;
  *(_DWORD *)(v218[0] + 8LL) = v223;
  v91 = src;
  memcpy(*(void **)v218[0], src, 16 * v90);
  LODWORD(v223) = 0;
  if ( src != v190 )
    free(src);
  v92 = (volatile signed __int32 *)v221.m128_u64[1];
  if ( v221.m128_u64[1] )
  {
    v93 = (volatile signed __int32 *)(v221.m128_u64[1] + 8);
    if ( *(_QWORD *)(v221.m128_u64[1] + 8) == 0x100000001LL )
    {
      v167 = *(_QWORD *)v221.m128_u64[1];
      v168 = v221.m128_u64[1];
      *(_QWORD *)(v221.m128_u64[1] + 8) = 0;
      (*(void (__fastcall **)(unsigned __int64, void *, volatile signed __int32 *))(v167 + 16))(v168, v91, v93);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v92 + 24LL))(v92);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v94 = _InterlockedExchangeAdd(v93, 0xFFFFFFFF);
      }
      else
      {
        v94 = *(_DWORD *)(v221.m128_u64[1] + 8);
        *(_DWORD *)(v221.m128_u64[1] + 8) = v94 - 1;
      }
      if ( v94 == 1 )
        sub_6111C0(v92);
    }
  }
  v95 = 24LL * v220;
  operator delete();
  sub_120E040(&v216, v95);
  v96 = v213;
  v97 = &v213[40 * (unsigned int)v214];
  if ( v213 != v97 )
  {
    do
    {
      v97 -= 40;
      if ( *(_BYTE **)v97 != v97 + 16 )
        operator delete(*(void **)v97, *((_QWORD *)v97 + 2) + 1LL);
    }
    while ( v96 != v97 );
    v97 = v213;
  }
  if ( v97 != v215 )
    free(v97);
  nullsub_174(v188);
  return v28;
}

