__int64 __fastcall sub_154D400(
        __m128i *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int32 *a5,
        __int64 *a6,
        __m128i a7,
        __m128 a8,
        unsigned int a9)
{
  __m128i *v9; // rbx
  __int16 v10; // ax
  __int16 v12; // ax
  __int64 v13; // rax
  unsigned int v14; // r15d
  __int64 v15; // rax
  const void *v16; // rsi
  unsigned int v17; // eax
  __int64 v18; // r10
  unsigned __int64 v19; // rdi
  __int64 v20; // rdx
  signed __int64 v21; // r10
  char *v22; // r14
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  signed __int64 v27; // rcx
  char *v28; // r15
  char *v29; // r11
  __int64 v30; // r9
  unsigned int v31; // r8d
  __int64 v32; // rax
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  char *v37; // r15
  int v38; // eax
  __int64 v39; // r15
  _BYTE *v40; // rbx
  _BYTE *v41; // r14
  _BYTE *v42; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // r15d
  unsigned int v47; // r13d
  _QWORD *v48; // rbp
  __int64 v49; // rax
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  void **v53; // r12
  unsigned __int64 v54; // rax
  void **v55; // r13
  void **v56; // rbp
  void **v57; // rdi
  void **v58; // rdi
  void **v59; // rbp
  void **v60; // r13
  __int64 v61; // rbp
  __int64 v62; // rax
  __int64 *v63; // rdi
  __int32 v64; // eax
  __int64 v65; // r15
  __int64 v66; // rax
  _BOOL4 v67; // r14d
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // r10
  __int64 v71; // r9
  _QWORD *v72; // r8
  __int64 v73; // r14
  char *v74; // rdi
  size_t v75; // r9
  size_t v76; // rax
  char *v77; // r8
  unsigned __int64 v78; // rdx
  __int64 v79; // rdx
  _BYTE *v80; // rdi
  size_t v81; // rdx
  __int64 i; // rax
  int v83; // eax
  unsigned __int64 v84; // rdx
  int v85; // eax
  _BYTE *v86; // rax
  __int64 v87; // rax
  __int64 v88; // r14
  __int64 v89; // rdx
  __int64 v90; // r14
  __int64 v92; // rbx
  void *v93; // rdi
  __int64 v95; // [rsp+0h] [rbp-3E8h]
  __int64 v96; // [rsp+8h] [rbp-3E0h]
  char *v99; // [rsp+28h] [rbp-3C0h]
  int v100; // [rsp+28h] [rbp-3C0h]
  signed __int64 v101; // [rsp+30h] [rbp-3B8h]
  signed __int64 v102; // [rsp+30h] [rbp-3B8h]
  __int64 v103; // [rsp+30h] [rbp-3B8h]
  signed __int64 v104; // [rsp+30h] [rbp-3B8h]
  signed __int64 v105; // [rsp+30h] [rbp-3B8h]
  char *v106; // [rsp+38h] [rbp-3B0h]
  __int64 v107; // [rsp+38h] [rbp-3B0h]
  char *v108; // [rsp+38h] [rbp-3B0h]
  __int64 v109; // [rsp+38h] [rbp-3B0h]
  signed __int64 v110; // [rsp+38h] [rbp-3B0h]
  __int64 v111; // [rsp+40h] [rbp-3A8h]
  signed __int64 v112; // [rsp+40h] [rbp-3A8h]
  char *v113; // [rsp+40h] [rbp-3A8h]
  size_t v114; // [rsp+48h] [rbp-3A0h]
  size_t v115; // [rsp+48h] [rbp-3A0h]
  char *v116; // [rsp+50h] [rbp-398h]
  size_t v117; // [rsp+58h] [rbp-390h]
  __int64 v118; // [rsp+68h] [rbp-380h] BYREF
  __int64 v119; // [rsp+70h] [rbp-378h] BYREF
  void *v120; // [rsp+78h] [rbp-370h]
  __int64 v121; // [rsp+80h] [rbp-368h]
  _BYTE v122[16]; // [rsp+88h] [rbp-360h] BYREF
  __int8 *v123; // [rsp+98h] [rbp-350h] BYREF
  void *v124; // [rsp+A0h] [rbp-348h]
  __int64 v125; // [rsp+A8h] [rbp-340h]
  _BYTE v126[16]; // [rsp+B0h] [rbp-338h] BYREF
  unsigned __int64 v127; // [rsp+C0h] [rbp-328h] BYREF
  void *v128; // [rsp+C8h] [rbp-320h]
  __int64 v129; // [rsp+D0h] [rbp-318h]
  _BYTE v130[16]; // [rsp+D8h] [rbp-310h] BYREF
  __int8 *v131; // [rsp+E8h] [rbp-300h] BYREF
  void *v132; // [rsp+F0h] [rbp-2F8h]
  __int64 v133; // [rsp+F8h] [rbp-2F0h]
  _BYTE v134[16]; // [rsp+100h] [rbp-2E8h] BYREF
  void *v135; // [rsp+110h] [rbp-2D8h] BYREF
  unsigned __int64 v136; // [rsp+118h] [rbp-2D0h]
  __int64 v137; // [rsp+120h] [rbp-2C8h]
  __int64 v138; // [rsp+128h] [rbp-2C0h]
  void *v139; // [rsp+130h] [rbp-2B8h]
  void *src; // [rsp+138h] [rbp-2B0h] BYREF
  __int64 v141; // [rsp+140h] [rbp-2A8h] BYREF
  __int64 v142; // [rsp+148h] [rbp-2A0h] BYREF
  __int16 v143; // [rsp+150h] [rbp-298h]
  __int8 *v144; // [rsp+158h] [rbp-290h] BYREF
  void *ptr; // [rsp+160h] [rbp-288h]
  __int64 v146; // [rsp+168h] [rbp-280h]
  _QWORD v147[4]; // [rsp+170h] [rbp-278h] BYREF
  void *v148; // [rsp+190h] [rbp-258h]
  __int64 v149; // [rsp+198h] [rbp-250h]
  __int64 v150; // [rsp+1A0h] [rbp-248h]
  __int64 v151; // [rsp+1A8h] [rbp-240h]
  unsigned __int64 v152; // [rsp+1B0h] [rbp-238h]
  __int64 v153; // [rsp+1B8h] [rbp-230h]
  __int64 v154; // [rsp+1C0h] [rbp-228h]
  __int64 v155; // [rsp+1C8h] [rbp-220h]
  __int64 v156; // [rsp+1D0h] [rbp-218h]
  __int64 v157; // [rsp+1D8h] [rbp-210h]
  __int64 v158; // [rsp+1E0h] [rbp-208h]
  __int64 v159; // [rsp+1E8h] [rbp-200h]
  __int64 v160; // [rsp+1F0h] [rbp-1F8h]
  __int64 v161; // [rsp+1F8h] [rbp-1F0h]
  __int64 v162; // [rsp+200h] [rbp-1E8h]
  __int64 v163; // [rsp+208h] [rbp-1E0h]
  __int64 v164; // [rsp+210h] [rbp-1D8h]
  __int64 v165; // [rsp+218h] [rbp-1D0h]
  __int64 v166; // [rsp+220h] [rbp-1C8h]
  __int16 v167; // [rsp+228h] [rbp-1C0h]
  __int64 v168; // [rsp+230h] [rbp-1B8h]
  __int64 v169; // [rsp+238h] [rbp-1B0h]
  __int64 v170; // [rsp+240h] [rbp-1A8h] BYREF
  _BYTE *v171; // [rsp+248h] [rbp-1A0h] BYREF
  unsigned __int64 v172; // [rsp+250h] [rbp-198h]
  _BYTE v173[320]; // [rsp+258h] [rbp-190h] BYREF
  __int64 v174; // [rsp+398h] [rbp-50h]
  char v175; // [rsp+3A0h] [rbp-48h]

  v9 = a1;
  v10 = a1[2].m128i_i16[0];
  if ( v10 != 166 )
  {
    if ( a2 == 7 )
      return sub_14AF050(a1, a9, a6, (int *)a3, a4, a7, a8);
    v119 = 0;
    v123 = &a1[31].m128i_i8[8];
    v124 = v126;
    v120 = v122;
    v128 = v130;
    v121 = 0x200000000LL;
    v125 = 0x200000000LL;
    v127 = 0;
    v129 = 0x200000000LL;
    v131 = &a1[31].m128i_i8[8];
    v132 = v134;
    v133 = 0x200000000LL;
    while ( 1 )
    {
      while ( (unsigned __int16)(v10 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
      {
        sub_14AB020((__int64)a1, (unsigned int *)&v119, a7, a8);
        v10 = a1[2].m128i_i16[0];
      }
      v12 = a1[2].m128i_i16[0];
      if ( v12 != 189 )
        break;
      sub_1490230(a1, (__int64)&v127, 0, 0, a7, a8);
      v10 = a1[2].m128i_i16[0];
    }
    if ( v12 == 153 )
    {
      v39 = sub_14AEAE0(a1, a2, (int *)a3, a5, (__int64)&v119, a7, a8);
LABEL_48:
      sub_15DCED0(v131, &v131);
      if ( v132 != v134 )
        free(v132);
      if ( v128 != v130 )
        free(v128);
      sub_15DCED0(v123, &v123);
      if ( v124 != v126 )
        free(v124);
      if ( v120 != v122 )
        free(v120);
      return v39;
    }
    v135 = (void *)((unsigned __int64)v135 & 0xFFFFFFC000000000LL);
    v144 = &a1[31].m128i_i8[8];
    src = &v142;
    v141 = 0x200000000LL;
    v146 = 0x200000000LL;
    v137 = 0;
    v138 = 0;
    v139 = nullptr;
    ptr = v147;
    v147[2] = 0;
    v147[3] = 0;
    v148 = nullptr;
    v149 = 0;
    v150 = 0;
    v151 = 0;
    v152 = 0;
    v153 = 0;
    v154 = 0;
    v155 = 0;
    v156 = 0;
    v157 = 0;
    v158 = 0;
    v159 = 0;
    v160 = 0;
    v161 = 0;
    v162 = 0;
    v163 = 0;
    v164 = 0;
    v165 = 0;
    v166 = 0;
    v167 &= 0xF000u;
    v13 = a1[6].m128i_i64[0];
    v14 = *(_DWORD *)(a4 + 24);
    v168 = 0;
    v169 = v13;
    v15 = *(_QWORD *)(a4 + 8);
    v172 = 0x400000000LL;
    v170 = v15;
    v171 = v173;
    v174 = 0;
    if ( !v14 )
    {
LABEL_13:
      if ( !*(_BYTE *)(a4 + 360) )
      {
        sub_1818070(*(_QWORD *)a4, *(_QWORD *)(a4 + 352), 0);
        *(_BYTE *)(a4 + 360) = 1;
      }
      v18 = (unsigned int)v129;
      v19 = HIDWORD(v141);
      v20 = *(_QWORD *)(v169 + 512);
      *(_QWORD *)(v169 + 512) = &v170;
      v21 = 8 * v18;
      v22 = (char *)v128;
      v175 = 0;
      v23 = v21 >> 3;
      v174 = v20;
      v152 = v127;
      v99 = (char *)v128 + v21;
      v24 = (unsigned int)v141;
      v25 = (unsigned int)v141;
      v26 = (v21 >> 3) + (unsigned int)v141;
      v27 = 8LL * (unsigned int)v141;
      if ( v27 )
      {
        if ( v26 > v19 )
        {
          v107 = v21 >> 3;
          v102 = v21;
          sub_2237220(&src, &v142, v26, 8);
          v23 = v107;
          v21 = v102;
          v25 = (unsigned int)v141;
          v28 = (char *)src;
          v27 = 8LL * (unsigned int)v141;
        }
        else
        {
          v28 = (char *)src;
        }
        v29 = (char *)src + v27;
        v30 = v27 >> 3;
        if ( v23 <= v27 >> 3 )
        {
          v74 = (char *)src + v27;
          v75 = v27 - v21;
          v76 = v21;
          v77 = &v28[v27 - v21];
          v103 = v21 >> 3;
          v78 = (v21 >> 3) + v25;
          if ( v78 > HIDWORD(v141) )
          {
            v117 = v21;
            v116 = &v28[v27 - v21];
            v115 = v27 - v21;
            v113 = (char *)src + v27;
            v110 = v21;
            sub_2237220(&src, &v142, v78, 8);
            v76 = v117;
            v77 = v116;
            LODWORD(v25) = v141;
            v75 = v115;
            v29 = v113;
            v74 = (char *)src + 8 * (unsigned int)v141;
            v21 = v110;
          }
          if ( v77 != v29 )
          {
            v114 = v75;
            v112 = v21;
            v108 = v77;
            memmove(v74, v77, v76);
            v75 = v114;
            v21 = v112;
            LODWORD(v25) = v141;
            v77 = v108;
          }
          LODWORD(v141) = v103 + v25;
          if ( v77 != v28 )
          {
            v104 = v21;
            memmove(&v28[v21], v28, v75);
            v21 = v104;
          }
          if ( v22 != v99 )
            memmove(v28, v22, v21);
        }
        else
        {
          v31 = v25 + v23;
          LODWORD(v141) = v31;
          if ( v28 != v29 )
          {
            v111 = v27 >> 3;
            v106 = (char *)src + v27;
            v101 = v27;
            memcpy(&v28[8 * v31 - v27], v28, v27);
            v30 = v111;
            v29 = v106;
            v27 = v101;
          }
          if ( v30 )
          {
            if ( (v28 >= v22 + 16 || v22 >= v28 + 16) && (unsigned __int64)(v30 - 1) > 3 )
            {
              v32 = 0;
              v33 = 0;
              v34 = ((unsigned __int64)(v30 - 2) >> 1) + 1;
              do
              {
                a7 = _mm_loadu_si128((const __m128i *)&v22[v32]);
                ++v33;
                *(__m128i *)&v28[v32] = a7;
                v32 += 16;
              }
              while ( v33 < v34 );
              v35 = 2 * v34;
              v36 = 16 * v34;
              v37 = &v28[v36];
              if ( v30 != v35 )
                *(_QWORD *)v37 = *(_QWORD *)&v22[v36];
            }
            else
            {
              for ( i = 0; i != v30; ++i )
                *(_QWORD *)&v28[8 * i] = *(_QWORD *)&v22[8 * i];
            }
            v22 += v27;
          }
          if ( v22 != v99 )
            memcpy(v29, v22, v99 - v22);
        }
      }
      else
      {
        if ( v26 > v19 )
        {
          v109 = v21 >> 3;
          v105 = v21;
          sub_2237220(&src, &v142, v26, 8);
          LODWORD(v23) = v109;
          v21 = v105;
          v24 = (unsigned int)v141;
        }
        if ( v22 != v99 )
        {
          v100 = v23;
          memcpy((char *)src + 8 * v24, v22, v21);
          LODWORD(v24) = v141;
          LODWORD(v23) = v100;
        }
        LODWORD(v141) = v23 + v24;
      }
      LODWORD(v129) = 0;
      sub_15D8C50(&v144, &v131);
      LODWORD(v133) = 0;
      v38 = sub_147E190((__int64)v9, a2);
      sub_1487580((__int64)v9, (__int64)&v135, a3, a9, v38, 0, a7, a8, ((1LL << v38) & 0x22DE) != 0);
      if ( v9[2].m128i_i16[0] == 63 )
      {
        if ( (_DWORD)v119 && HIDWORD(v119) )
        {
          sub_1481BE0((__int64)v9, (unsigned int *)&v119, 0);
          LODWORD(v121) = 0;
          sub_15DCED0(v123, &v123);
          LODWORD(v125) = 0;
          v119 = 0;
        }
        v63 = (__int64 *)v9->m128i_i64[1];
        v9[2].m128i_i32[2] = v9[1].m128i_i32[0];
        sub_14634E0(v63, v9[1].m128i_i32);
        v64 = v9[2].m128i_i32[2];
        v118 = 0;
        *a5 = v64;
        v65 = v9[6].m128i_i64[0];
        v66 = *(_QWORD *)(a3 + 8);
        v67 = *(_DWORD *)a3 == 3;
        if ( v66 )
        {
          v68 = *(_QWORD *)v66;
          v69 = *(unsigned int *)(v66 + 8);
        }
        else
        {
          v68 = 0;
          v69 = 0;
        }
        v70 = v69;
        v71 = v68;
        if ( (_BYTE)qword_2CD8AC8
          || (v96 = v69, v95 = v68, v83 = __cxa_guard_acquire(&qword_2CD8AC8), v71 = v95, v70 = v96, !v83) )
        {
          v72 = qword_2CD8AE0;
        }
        else
        {
          qword_2CD8AE0[0] = 0;
          qword_2CD8AE0[1] = &qword_2CD8AE0[3];
          qword_2CD8AE0[2] = 0x200000000LL;
          __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
          __cxa_guard_release(&qword_2CD8AC8);
          v71 = v95;
          v70 = v96;
          LODWORD(v72) = (unsigned int)qword_2CD8AE0;
        }
        v73 = sub_17D7F00(
                v65,
                *(_QWORD *)(v9[6].m128i_i64[0] + 608),
                a9,
                (unsigned int)&v135,
                (_DWORD)v72,
                v67,
                v71,
                v70,
                (__int64)&v118,
                0);
        sub_17A3F10(v9[6].m128i_i64[0], v73);
        if ( !v175 )
        {
          sub_1818070(v169, v174, v73);
          v175 = 1;
        }
        v39 = sub_17A2530(v9[6].m128i_i64[0], v73, 0);
        if ( v175 )
          goto LABEL_36;
      }
      else
      {
        if ( (unsigned __int8)sub_15AC7C0(&v135) )
          sub_17A3F10(v9[6].m128i_i64[0], v136);
        if ( *(_DWORD *)a3 == 3 && (_DWORD)v119 && HIDWORD(v119) )
        {
          sub_1481BE0((__int64)v9, (unsigned int *)&v119, 0);
          LODWORD(v121) = 0;
          sub_15DCED0(v123, &v123);
          LODWORD(v125) = 0;
          v119 = 0;
        }
        v39 = sub_14922F0(v9, (__int64)&v135, a2, (__int64)&v119, (int *)a3, a5, a7, a8, 0);
        if ( v175 )
          goto LABEL_36;
      }
      sub_1818070(v169, v174, 0);
      v175 = 1;
LABEL_36:
      v40 = v171;
      v41 = &v171[80 * (unsigned int)v172];
      if ( v171 != v41 )
      {
        do
        {
          v42 = v40;
          v40 += 80;
          sub_15B6850(v42);
        }
        while ( v41 != v40 );
        v41 = v171;
      }
      if ( v41 != v173 )
        free(v41);
      if ( HIDWORD(v149) )
        free(v148);
      sub_15DCED0(v144, &v144);
      if ( ptr != v147 )
        free(ptr);
      if ( src != &v142 )
        free(src);
      goto LABEL_48;
    }
    v16 = (const void *)(a4 + 32);
    if ( *(_QWORD *)(a4 + 16) != a4 + 32 )
    {
      v17 = *(_DWORD *)(a4 + 28);
      v171 = *(_BYTE **)(a4 + 16);
      v172 = __PAIR64__(v17, v14);
      *(_QWORD *)(a4 + 16) = v16;
      *(_DWORD *)(a4 + 28) = 0;
LABEL_12:
      *(_DWORD *)(a4 + 24) = 0;
      goto LABEL_13;
    }
    if ( v14 > 4uLL )
    {
      sub_2237220(&v171, v173, v14, 80);
      v16 = *(const void **)(a4 + 16);
      v80 = v171;
      v81 = 80LL * *(unsigned int *)(a4 + 24);
      if ( !v81 )
        goto LABEL_125;
    }
    else
    {
      v80 = v173;
      v81 = 80LL * v14;
    }
    memcpy(v80, v16, v81);
LABEL_125:
    LODWORD(v172) = v14;
    goto LABEL_12;
  }
  sub_1564820(&v135, a1, a1[1].m128i_u32[0], 1896);
  v44 = *(_QWORD *)(a3 + 8);
  if ( v44 )
  {
    v45 = sub_1CB3C60(*(_QWORD *)v44, *(unsigned int *)(v44 + 8));
    v46 = v45;
    v47 = HIDWORD(v45);
  }
  else
  {
    v46 = *(_DWORD *)(a3 + 16);
    v47 = *(_DWORD *)(a3 + 20);
    if ( !v46 )
      v46 = *(_DWORD *)(a3 + 20);
  }
  v48 = v135;
  if ( v135 )
  {
    v49 = *((unsigned int *)v135 + 106);
    v50 = *((unsigned int *)v135 + 107);
    v51 = v49 + 1;
  }
  else
  {
    v84 = v136;
    v85 = *(_DWORD *)(v136 + 14976);
    if ( v85 )
    {
      v87 = (unsigned int)(v85 - 1);
      *(_DWORD *)(v136 + 14976) = v87;
      v48 = *(_QWORD **)(v84 + 8 * v87 + 14848);
      v88 = *((unsigned int *)v48 + 134);
      *(_BYTE *)v48 = 0;
      v89 = v48[66];
      *((_DWORD *)v48 + 106) = 0;
      v90 = v89 + (v88 << 6);
      if ( v89 == v90 )
      {
        v51 = 1;
        v49 = 0;
      }
      else
      {
        v92 = v89;
        do
        {
          while ( 1 )
          {
            v90 -= 64;
            v93 = *(void **)(v90 + 24);
            if ( v93 == (void *)(v90 + 40) )
              break;
            operator delete(v93);
            if ( v92 == v90 )
              goto LABEL_139;
          }
        }
        while ( v92 != v90 );
LABEL_139:
        v49 = *((unsigned int *)v48 + 106);
        v9 = a1;
        v51 = v49 + 1;
      }
      *((_DWORD *)v48 + 134) = 0;
      v50 = *((unsigned int *)v48 + 107);
    }
    else
    {
      v86 = (_BYTE *)operator new(0x3A0u);
      v50 = 8;
      v51 = 1;
      v48 = v86;
      *v86 = 0;
      *((_QWORD *)v86 + 12) = v86 + 112;
      *((_QWORD *)v86 + 16) = v86 + 144;
      *((_QWORD *)v86 + 20) = v86 + 176;
      *((_QWORD *)v86 + 24) = v86 + 208;
      *((_QWORD *)v86 + 28) = v86 + 240;
      *((_QWORD *)v86 + 32) = v86 + 272;
      *((_QWORD *)v86 + 36) = v86 + 304;
      *((_QWORD *)v86 + 40) = v86 + 336;
      *((_QWORD *)v86 + 44) = v86 + 368;
      *((_QWORD *)v86 + 48) = v86 + 400;
      *((_QWORD *)v86 + 52) = v86 + 432;
      *((_QWORD *)v86 + 13) = 0;
      v86[112] = 0;
      *((_QWORD *)v86 + 17) = 0;
      v86[144] = 0;
      *((_QWORD *)v86 + 21) = 0;
      v86[176] = 0;
      *((_QWORD *)v86 + 25) = 0;
      v86[208] = 0;
      *((_QWORD *)v86 + 29) = 0;
      v86[240] = 0;
      *((_QWORD *)v86 + 33) = 0;
      v86[272] = 0;
      *((_QWORD *)v86 + 37) = 0;
      v86[304] = 0;
      *((_QWORD *)v86 + 41) = 0;
      v86[336] = 0;
      *((_QWORD *)v86 + 45) = 0;
      v86[368] = 0;
      *((_QWORD *)v86 + 49) = 0;
      v86[400] = 0;
      *((_QWORD *)v86 + 53) = 0x800000000LL;
      *((_QWORD *)v86 + 66) = v86 + 544;
      *((_QWORD *)v86 + 67) = 0x600000000LL;
      v49 = 0;
    }
    v135 = v48;
  }
  v127 = __PAIR64__(v47, v46);
  LOBYTE(v128) = 1;
  if ( v51 > v50 )
  {
    sub_2237220(v48 + 52, v48 + 54, v51, 12);
    v49 = *((unsigned int *)v48 + 106);
  }
  v52 = v48[52] + 12 * v49;
  *(_QWORD *)v52 = v127;
  *(_DWORD *)(v52 + 8) = (_DWORD)v128;
  ++*((_DWORD *)v48 + 106);
  if ( (_BYTE)v143 )
  {
    sub_FC7790(v137, (__int64 *)&v135, SHIBYTE(v143));
    v143 = 0;
    v137 = 0;
  }
  if ( v139 != &v141 )
    operator delete(v139);
  v53 = (void **)v135;
  if ( v135 )
  {
    v54 = v136;
    if ( v136 )
    {
      if ( (unsigned __int64)v135 < v136 || (unsigned __int64)v135 > v136 + 14848 )
      {
        v55 = *((void ***)v135 + 66);
        v56 = &v55[8 * (unsigned __int64)*((unsigned int *)v135 + 134)];
        if ( v55 != v56 )
        {
          do
          {
            while ( 1 )
            {
              v56 -= 8;
              v57 = (void **)v56[3];
              if ( v57 == v56 + 5 )
                break;
              operator delete(v57);
              if ( v55 == v56 )
                goto LABEL_73;
            }
          }
          while ( v55 != v56 );
LABEL_73:
          v56 = (void **)v53[66];
        }
        if ( v56 != v53 + 68 )
          free(v56);
        v58 = (void **)v53[52];
        if ( v58 != v53 + 54 )
          free(v58);
        v59 = v53 + 48;
        v60 = v53 + 8;
        do
        {
          while ( *v59 != v59 + 2 )
          {
            operator delete(*v59);
            v59 -= 4;
            if ( v60 == v59 )
              goto LABEL_81;
          }
          v59 -= 4;
        }
        while ( v60 != v59 );
LABEL_81:
        operator delete(v53, 0x3A0u);
      }
      else
      {
        v79 = *(unsigned int *)(v136 + 14976);
        *(_DWORD *)(v136 + 14976) = v79 + 1;
        *(_QWORD *)(v54 + 8 * v79 + 14848) = v53;
      }
    }
  }
  v61 = v9[6].m128i_i64[0];
  v62 = sub_14A4C70((__int64)v9, a5);
  return sub_17A2530(v61, v62, 0);
}
