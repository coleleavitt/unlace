__int64 __fastcall sub_1D7FC00(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        unsigned int a4,
        __int64 *a5,
        __m128 *a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        char a10,
        int a11,
        char a12,
        void **a13,
        unsigned __int64 a14)
{
  __int64 v14; // r15
  int v18; // r13d
  char v19; // dl
  const __m128i *v20; // rax
  char *v21; // rsi
  __int64 v22; // rdx
  const __m128i *v23; // r11
  __int64 v24; // r9
  int v25; // edx
  _BYTE *v26; // r8
  int v27; // r9d
  __int32 v28; // edx
  __int64 v29; // rax
  const __m128i *v30; // rcx
  __int64 v31; // rdi
  int v32; // ecx
  __int64 v33; // rdx
  int v34; // eax
  int v35; // edi
  int v36; // eax
  char *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  int *v43; // r14
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int *v47; // rax
  __int64 v48; // r14
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // r14
  __int64 v51; // r12
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // r12
  char v60; // al
  unsigned __int64 *v61; // r14
  int v62; // eax
  unsigned int *v63; // r12
  __int64 *v64; // rbx
  __int64 v65; // rdx
  unsigned int v66; // eax
  __int64 v67; // rdi
  const __m128i *v68; // rax
  __int8 v69; // r13
  unsigned int v70; // ebp
  int v71; // eax
  int v72; // r14d
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  bool v77; // zf
  __int64 v78; // rax
  __int64 v79; // rdx
  unsigned int v80; // esi
  __int64 v81; // rdx
  __int64 *v82; // r13
  char v83; // al
  __int64 v84; // rax
  unsigned __int64 v85; // rax
  __int64 v86; // rax
  unsigned __int8 *v87; // r9
  _QWORD *v88; // rcx
  __int64 v89; // r8
  __int64 (__fastcall *v90)(__int64); // rax
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdi
  __int64 v96; // r9
  __int64 (__fastcall *v97)(__int64); // rax
  __int64 v98; // rax
  __int64 *v99; // r10
  void **v100; // r14
  int v101; // eax
  __int64 v102; // rdi
  int v103; // r10d
  __int64 v104; // r8
  unsigned int v105; // eax
  __int64 v106; // rax
  int v107; // r10d
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rdx
  _QWORD *v112; // rsi
  int v113; // eax
  __int64 v114; // r8
  __int64 v115; // rcx
  __int64 v116; // rdx
  unsigned __int64 v117; // r12
  __int64 v118; // rbx
  __int64 v119; // rax
  unsigned __int64 v120; // rdx
  __int64 v121; // rbx
  unsigned __int64 v122; // rsi
  __int64 v123; // rdx
  _QWORD *v124; // rbp
  __int64 v125; // r12
  int v126; // eax
  __int64 v127; // rax
  int v128; // edx
  __m128 *v129; // r15
  __m128 *v130; // r14
  unsigned __int64 v131; // rax
  unsigned __int64 v132; // rax
  __m128 *v133; // r12
  __m128 *v134; // r13
  unsigned __int64 v135; // rax
  unsigned __int64 v136; // rax
  __m128 *v137; // rbp
  _BYTE *v138; // rsi
  unsigned int *v139; // rax
  size_t v140; // r14
  unsigned __int64 v141; // rbx
  __int64 v142; // rbx
  unsigned __int64 v143; // rdi
  _BYTE *v144; // rdi
  unsigned __int8 *v145; // r15
  unsigned __int8 *v146; // r13
  int *v147; // r14
  unsigned __int8 *v148; // rdi
  unsigned __int64 v149; // rdx
  unsigned __int64 v150; // rax
  int v151; // ebx
  _BYTE *v152; // rdi
  char *v153; // rcx
  __int64 v154; // rsi
  __int64 v155; // rax
  __int64 v156; // rsi
  __int64 v157; // r9
  char *v158; // rsi
  __int64 v159; // rdx
  __int64 v160; // rdx
  __int64 v161; // rbx
  unsigned __int64 v162; // r13
  unsigned __int64 v163; // rbx
  void *v164; // rdi
  unsigned __int64 v165; // rsi
  __int64 v166; // rcx
  __int64 v167; // rax
  __int64 v168; // rax
  char v169; // dl
  unsigned __int8 *v170; // r14
  int v171; // eax
  __int64 *v172; // r10
  char v173; // dl
  __int64 v174; // rcx
  int v175; // r12d
  __int64 v176; // rax
  int v177; // edx
  __int64 v178; // rdi
  unsigned __int64 v179; // r14
  __int64 v180; // rax
  int v181; // [rsp+0h] [rbp-3B8h]
  unsigned int v183; // [rsp+10h] [rbp-3A8h]
  unsigned int v184; // [rsp+10h] [rbp-3A8h]
  unsigned int v185; // [rsp+14h] [rbp-3A4h]
  const __m128i *v186; // [rsp+18h] [rbp-3A0h]
  unsigned int *v187; // [rsp+20h] [rbp-398h] BYREF
  void **v188; // [rsp+28h] [rbp-390h]
  unsigned __int64 v189; // [rsp+30h] [rbp-388h]
  const __m128i *v190; // [rsp+38h] [rbp-380h]
  char v191; // [rsp+42h] [rbp-376h]
  char v192; // [rsp+43h] [rbp-375h]
  int v193; // [rsp+44h] [rbp-374h]
  __int64 v194; // [rsp+48h] [rbp-370h]
  __int64 *v195; // [rsp+50h] [rbp-368h]
  __int64 v196; // [rsp+58h] [rbp-360h]
  __int64 *v197; // [rsp+60h] [rbp-358h]
  __m128 *v198; // [rsp+68h] [rbp-350h]
  __int64 *v199; // [rsp+70h] [rbp-348h]
  __int64 v200; // [rsp+78h] [rbp-340h]
  __int64 v201; // [rsp+80h] [rbp-338h]
  __int64 v202; // [rsp+88h] [rbp-330h]
  int v203; // [rsp+90h] [rbp-328h]
  int v204; // [rsp+94h] [rbp-324h]
  __int64 *v205; // [rsp+98h] [rbp-320h]
  char v206; // [rsp+AFh] [rbp-309h] BYREF
  __int64 v207; // [rsp+B0h] [rbp-308h] BYREF
  __int64 v208; // [rsp+B8h] [rbp-300h] BYREF
  _BYTE v209[16]; // [rsp+C0h] [rbp-2F8h] BYREF
  __int64 v210; // [rsp+D0h] [rbp-2E8h] BYREF
  __int64 v211; // [rsp+D8h] [rbp-2E0h]
  __m128i v212; // [rsp+E0h] [rbp-2D8h] BYREF
  __int64 v213; // [rsp+F0h] [rbp-2C8h]
  __int64 v214; // [rsp+118h] [rbp-2A0h]
  __m128 v215; // [rsp+130h] [rbp-288h] BYREF
  unsigned int v216; // [rsp+140h] [rbp-278h]
  char v217; // [rsp+198h] [rbp-220h] BYREF
  void *v218; // [rsp+1A0h] [rbp-218h] BYREF
  __int64 v219; // [rsp+1A8h] [rbp-210h]
  _BYTE v220[96]; // [rsp+1B0h] [rbp-208h] BYREF
  void *v221[2]; // [rsp+210h] [rbp-1A8h] BYREF
  _DWORD v222[25]; // [rsp+220h] [rbp-198h] BYREF
  char v223; // [rsp+284h] [rbp-134h]
  void *v224; // [rsp+290h] [rbp-128h] BYREF
  __int64 v225; // [rsp+298h] [rbp-120h]
  _BYTE v226[96]; // [rsp+2A0h] [rbp-118h] BYREF
  void *ptr; // [rsp+300h] [rbp-B8h]
  __int64 v228; // [rsp+308h] [rbp-B0h]
  _BYTE v229[97]; // [rsp+310h] [rbp-A8h] BYREF
  __int16 v230; // [rsp+371h] [rbp-47h]

  v14 = a1;
  v195 = a5;
  LODWORD(v187) = a11;
  v188 = a13;
  v189 = a14;
  LOBYTE(v196) = a12;
  sub_18C74E0(a1, 0, 0, 4);
  v185 = *(_DWORD *)(a1 + 11200);
  v191 = *(_BYTE *)(a1 + 12592);
  v192 = *(_BYTE *)(a1 + 11248);
  v18 = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 204LL);
  sub_1DBADC0(a1);
  if ( !v19 )
    *(_BYTE *)(a1 + 12592) = 1;
  *(_BYTE *)(a1 + 11248) = 0;
  v20 = (const __m128i *)a3->m128i_i64[0];
  v21 = v220;
  v22 = 2LL * a3->m128i_u32[2];
  v218 = v220;
  v23 = &v20[v22];
  v219 = 0x400000000LL;
  v24 = (v22 * 16) >> 5;
  if ( (unsigned __int64)v22 > 8 )
  {
    v190 = v20;
    v186 = &v20[v22];
    v181 = (v22 * 16) >> 5;
    sub_2237220(&v218, v220, (v22 * 16) >> 5, 24);
    v25 = v219;
    LODWORD(v24) = v181;
    LODWORD(v26) = (_DWORD)v218;
    v23 = v186;
    v20 = v190;
    v21 = (char *)v218 + 24 * (unsigned int)v219;
  }
  else
  {
    v25 = 0;
    v26 = v220;
  }
  if ( v23 != v20 )
  {
    do
    {
      a8 = (__m128)_mm_loadu_si128(v20);
      v20 += 2;
      v21 += 24;
      *(__m128 *)(v21 - 24) = a8;
      *((_QWORD *)v21 - 1) = v20[-1].m128i_i64[0];
    }
    while ( v23 != v20 );
    LODWORD(v26) = (_DWORD)v218;
    v25 = v219;
  }
  v27 = v25 + v24;
  v28 = a6[1].m128_i32[0];
  LODWORD(v219) = v27;
  sub_1DC39D0((unsigned int)v209, a1, v28, a2, (_DWORD)v26, v27, 4, (__int64)a6, 0);
  if ( v209[8] )
  {
    v183 = 2;
    goto LABEL_20;
  }
  v29 = *(_QWORD *)(a2 + 48);
  v30 = *(const __m128i **)(a1 + 544);
  v31 = *(_QWORD *)(a1 + 512);
  v206 = 0;
  *(_QWORD *)(v14 + 512) = 0;
  if ( v29 )
    v29 += 72;
  v190 = v30;
  v32 = *(_DWORD *)(v14 + 80);
  v194 = v31;
  v33 = *(_QWORD *)(v14 + 9944);
  *(_QWORD *)(v14 + 544) = v29;
  v34 = *(_DWORD *)(v14 + 40);
  v35 = *(_DWORD *)(v14 + 2632);
  v214 = v33;
  *(_DWORD *)(v14 + 80) = v34;
  v36 = *(_DWORD *)(v14 + 3688);
  ptr = v229;
  *(_DWORD *)(v14 + 2632) = v36;
  v224 = v226;
  v225 = 0x400000000LL;
  v228 = 0x400000000LL;
  v230 = 0;
  v229[96] = (_BYTE)v187;
  v37 = &v206;
  if ( !a10 )
    v37 = nullptr;
  v193 = v35;
  v203 = v32;
  *(_QWORD *)(v14 + 9944) = 0;
  v183 = sub_1D67A60(
           v14,
           a2,
           *(_QWORD *)(a2 + 56),
           1,
           a3,
           a6,
           a7,
           a8,
           (__int64)&v224,
           *(_QWORD *)(v14 + 11280),
           a4,
           v37);
  if ( !v183 )
  {
    v43 = sub_BC1D90(*(_QWORD **)(v14 + 248), (const __m128i *)v224, (unsigned int)v225, v38, v39, v40);
    v47 = sub_BC1D90(*(_QWORD **)(v14 + 248), (const __m128i *)ptr, (unsigned int)v228, v44, v45, v46);
    v197 = (__int64 *)v43;
    v187 = v47;
    a7 = _mm_loadh_ps((const double *)&v187);
    *a6 = a7;
    v48 = *(_QWORD *)(a2 + 16);
    if ( (v48 & 4) != 0 )
    {
      v49 = v48 & 0xFFFFFFFFFFFFFFF8LL;
      v50 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_WORD *)(a2 + 30) & 0x180) != 0 )
        v50 = *(_QWORD *)(v49 + 8);
    }
    else
    {
      v50 = v48 & 0xFFFFFFFFFFFFFFF8LL;
    }
    v51 = *(_QWORD *)(a2 + 48);
    LOBYTE(v197) = ((__int64 (__fastcall *)(unsigned __int64, __int64))v188)(v189, 1);
    if ( (_BYTE)v197 )
      goto LABEL_91;
    if ( !v51 )
      goto LABEL_80;
    if ( (*(_BYTE *)(v51 + 80) & 0x7Fu) - 35 <= 3 )
    {
      v52 = *(_QWORD *)(sub_B8C1B0(v51 + 72) + 16);
      v53 = (v52 & 4) != 0 ? *(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFF8LL) : v52 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v53 )
      {
        if ( v53 != 64 )
        {
          v54 = *(_QWORD *)(v53 + 64);
          if ( v54 )
          {
            if ( (*(_BYTE *)(v54 + 10) & 0x20) != 0 && (unsigned int)sub_B77890(v51) == 42 )
            {
LABEL_40:
              LOBYTE(v197) = 1;
              goto LABEL_41;
            }
          }
        }
      }
    }
    v83 = *(_BYTE *)(v51 + 28) & 0x7F;
    if ( v83 == 37 )
    {
      v84 = *(_QWORD *)(sub_B8C1B0(v51 + 72) + 16);
      if ( (v84 & 4) != 0 )
      {
LABEL_76:
        v85 = *(_QWORD *)(v84 & 0xFFFFFFFFFFFFFFF8LL);
        goto LABEL_77;
      }
    }
    else
    {
      if ( v83 != 71 )
        goto LABEL_80;
      v95 = *(_QWORD *)(v51 + 48);
      if ( !v95 || (*(_BYTE *)(v95 + 28) & 0x7F) != 0x25 )
        goto LABEL_80;
      v84 = *(_QWORD *)(sub_B8C1B0(v95 + 72) + 16);
      if ( (v84 & 4) != 0 )
        goto LABEL_76;
    }
    v85 = v84 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_77:
    if ( !v85 )
      BUG();
    v86 = *(_QWORD *)(v85 + 64);
    if ( v86 && (*(_BYTE *)(v86 + 10) & 0x20) != 0 )
      goto LABEL_40;
LABEL_80:
    if ( !v206 )
    {
      v87 = (unsigned __int8 *)&a6[20];
      v88 = ptr;
      v89 = (unsigned int)v228;
      v90 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
      if ( v90 == sub_6EE8E0 )
      {
        v91 = *(_QWORD *)(a2 + 72);
      }
      else
      {
        v200 = (unsigned int)v228;
        v199 = (__int64 *)ptr;
        v198 = a6 + 20;
        v91 = v90(a2);
        v89 = v200;
        v88 = v199;
        v87 = (unsigned __int8 *)v198;
      }
      if ( (unsigned __int8)sub_17526D0(
                              v14,
                              a6[1].m128_u32[0],
                              *(_QWORD *)(v91 + 48),
                              v88,
                              v89,
                              (__int64)v87,
                              *(double *)a7.m128_u64) )
      {
        v183 = 16;
        goto LABEL_14;
      }
      if ( !a6[28].m128_i8[0] )
      {
        v183 = 15;
        a6->m128_u64[1] = (unsigned __int64)sub_BC1D90(
                                              *(_QWORD **)(v14 + 248),
                                              (const __m128i *)ptr,
                                              (unsigned int)v228,
                                              v92,
                                              v93,
                                              v94);
        goto LABEL_14;
      }
    }
LABEL_41:
    if ( !((unsigned __int8 (__fastcall *)(unsigned __int64, _QWORD))v188)(v189, 0) )
    {
      v188 = v221;
      v55 = *v187;
      v222[24] = 0;
      v221[0] = v222;
      v221[1] = (void *)0x400000000LL;
      v223 = 0;
      sub_1CB3AC0((__int64)v221, a2, (__int64)(v187 + 2), v55, 0);
      v56 = v51;
      v57 = sub_1E02D80(v14, v51, v50, v188);
      if ( !v57 )
      {
        v183 = 7;
        *v195 = 0;
        goto LABEL_94;
      }
      *v195 = v57;
      if ( *(char *)(v57 + 28) < 0 )
        goto LABEL_93;
      v58 = sub_B77B50(v57);
      v59 = *v195;
      if ( (unsigned int *)v58 == v187 )
      {
        if ( *(_DWORD *)(v14 + 11200) > v185 )
          goto LABEL_92;
        a6->m128_u64[1] = 0;
      }
      if ( *(_DWORD *)(v14 + 11200) <= v185 )
      {
        if ( (_BYTE)v197 && !v206 )
        {
          v56 = a6[1].m128_u32[0];
          if ( (unsigned __int8)sub_17526D0(
                                  v14,
                                  v56,
                                  v59,
                                  ptr,
                                  (unsigned int)v228,
                                  (__int64)&a6[20],
                                  *(double *)a7.m128_u64) )
          {
            v183 = 16;
            goto LABEL_94;
          }
          if ( !a6[28].m128_i8[0] )
          {
            v183 = 15;
            a6->m128_u64[1] = (unsigned __int64)sub_BC1D90(
                                                  *(_QWORD **)(v14 + 248),
                                                  (const __m128i *)ptr,
                                                  (unsigned int)v228,
                                                  v108,
                                                  v109,
                                                  v110);
            goto LABEL_94;
          }
          v59 = *v195;
        }
        v60 = *(_BYTE *)(v59 + 28) & 0x7F;
        if ( v60 == 38 )
        {
          v187 = (unsigned int *)v218;
          v189 = (unsigned int)v219;
          v168 = sub_B709C0(v59);
          v169 = *(_BYTE *)(v168 + 87);
          if ( (v169 & 0x40) == 0 )
            goto LABEL_50;
          v99 = *(__int64 **)(v168 + 16LL * ((v169 & 0x20) != 0) + 176);
        }
        else
        {
          if ( v60 != 37 )
            goto LABEL_50;
          v187 = (unsigned int *)v218;
          v189 = (unsigned int)v219;
          v97 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 32LL);
          if ( v97 == sub_B94CE0 )
            v98 = sub_B709C0(v59);
          else
            v98 = v97(v59);
          v99 = *(__int64 **)(v98 + 168);
        }
        v197 = v99;
        if ( ((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFFCLL) == 0
          || (*(_DWORD *)((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFFCLL) & 0x20000) == 0 )
        {
          goto LABEL_50;
        }
        sub_1DC39D0((unsigned int)&v215, v14, a6[1].m128_i32[0], a2, (_DWORD)v187, v189, 4, (__int64)a6, 0);
        if ( v215.m128_i8[8] )
        {
          sub_1DBADA0(&v215);
          v183 = 7;
          goto LABEL_94;
        }
        v171 = *(_DWORD *)(v14 + 11200);
        v199 = v197;
        LODWORD(v187) = v171;
        LOBYTE(v197) = *(_BYTE *)(v14 + 12592);
        LOBYTE(v198) = *(_BYTE *)(v14 + 11248);
        LODWORD(v189) = *(_DWORD *)(*(_QWORD *)(v14 + 264) + 204LL);
        sub_1DBADC0(v14);
        v172 = v199;
        if ( !v173 )
          *(_BYTE *)(v14 + 12592) = 1;
        *(_BYTE *)(v14 + 11248) = 0;
        v56 = (__int64)v188;
        v174 = sub_1E01710(v14, v188, v172);
        if ( (v174 & 3) == 2 && (v174 & 0xFFFFFFFFFFFFFFFCLL) == 0 || *(_DWORD *)(v14 + 11200) > (unsigned int)v187 )
        {
          v178 = v59;
          v56 = 1;
          v175 = 7;
          sub_B88650(v178, 1);
        }
        else
        {
          if ( (*(_BYTE *)(v59 + 28) & 0x7F) == 0x26 )
          {
            if ( (v174 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            {
              v199 = (__int64 *)v174;
              v180 = sub_B709C0(v59);
              *(_QWORD *)(v180 + 16LL * ((*(_BYTE *)(v180 + 87) & 0x20) != 0) + 176) = v199;
            }
            else
            {
              *(_BYTE *)(v59 + 87) = (((_DWORD)v174 == 1) << 7) | *(_BYTE *)(v59 + 87) & 0x7F;
            }
          }
          else
          {
            *(_QWORD *)(v59 + 168) = v174;
          }
          v175 = 0;
        }
        *(_DWORD *)(v14 + 11200) = (_DWORD)v187;
        *(_BYTE *)(v14 + 12592) = (_BYTE)v197;
        *(_BYTE *)(v14 + 11248) = (_BYTE)v198;
        v176 = *(_QWORD *)(v14 + 264);
        if ( *(_DWORD *)(v176 + 204) == 5 )
          *(_BYTE *)(v176 + 194) = 1;
        v177 = 3;
        if ( !(_DWORD)v189 )
          v177 = 0;
        *(_DWORD *)(v176 + 204) = v177;
        sub_1DBADA0(&v215);
        if ( !v175 )
        {
LABEL_50:
          if ( a9 )
          {
            v61 = &v215.m128_u64[1];
            v215.m128_u64[0] = 1;
            do
            {
              *(_DWORD *)v61 = -1;
              v61 += 3;
              *(v61 - 2) = 0;
            }
            while ( v61 != (unsigned __int64 *)&v217 );
            v62 = *(_DWORD *)(a9 + 8);
            if ( v62 )
            {
              v201 = a2;
              v63 = nullptr;
              v64 = v195;
              LODWORD(v200) = v18;
              v189 = (unsigned __int64)a6;
              v187 = (unsigned int *)(8 * (3LL * (unsigned int)(v62 - 1) + 3));
              v199 = &v207;
              v197 = &v210;
              v198 = &v215;
              v205 = &v208;
              while ( 1 )
              {
                v67 = *v64;
                v68 = (const __m128i *)((char *)v63 + *(_QWORD *)a9);
                v212 = _mm_loadu_si128(v68);
                v213 = v68[1].m128i_i64[0];
                v69 = v68->m128i_i8[8];
                v70 = v68->m128i_u32[3];
                v71 = sub_B771C0(v67, v56, v213, a9) ^ 1;
                v72 = (unsigned __int8)(v71 | v196) ^ 1;
                if ( (unsigned int)sub_B76070(*v64, v56, (v71 | (unsigned __int8)v196) ^ 1u, v73) - v72 <= v70 )
                  goto LABEL_57;
                if ( !v69 )
                {
                  v65 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v64 + 120) + 8LL * (v70 + v72)) + 48LL);
                  goto LABEL_56;
                }
                LODWORD(v210) = v70;
                v211 = v212.m128i_i64[0];
                v77 = (unsigned __int8)sub_1D3C880((__int64)v198, (int *)v197, v199) == 0;
                v78 = v207;
                if ( v77 )
                  break;
LABEL_68:
                v82 = (__int64 *)(v78 + 16);
                if ( (*(_QWORD *)(v78 + 16) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
                {
                  v100 = v188;
                  v101 = sub_1D36A50(v14, v201, (__int64)v188, v70);
                  v102 = *v64;
                  v103 = *(_DWORD *)(v14 + 12632);
                  *(_DWORD *)(v14 + 12632) = v101;
                  v104 = *(_QWORD *)(v102 + 40);
                  v204 = v103;
                  v202 = v104;
                  v105 = sub_B72FF0(v102);
                  v106 = sub_1DD1D30(v14, v212.m128i_i64[0], v100, v105, v202, 0);
                  v107 = v204;
                  *v82 = v106;
                  *(_DWORD *)(v14 + 12632) = v107;
                }
                v65 = *v82;
LABEL_56:
                v56 = v189;
                v66 = sub_1D39840(v14, v189, v65, v74, v75, v76, v212.m128i_i64[0], v212.m128i_i64[1], v213);
                if ( v66 )
                {
                  v18 = v200;
                  if ( (v215.m128_i8[0] & 1) == 0 )
                  {
                    v184 = v66;
                    operator delete(v215.m128_u64[1], 24LL * v216, 8);
                    v66 = v184;
                  }
                  v183 = v66;
                  goto LABEL_94;
                }
LABEL_57:
                v63 += 6;
                if ( v187 == v63 )
                {
                  v18 = v200;
                  a6 = (__m128 *)v189;
                  goto LABEL_101;
                }
              }
              v208 = v207;
              v79 = ((unsigned __int32)v215.m128_i32[0] >> 1) + 1;
              if ( (v215.m128_i8[0] & 1) != 0 )
              {
                v75 = 12;
                v80 = 4;
              }
              else
              {
                v80 = v216;
                v75 = 3 * v216;
              }
              if ( (unsigned int)v75 <= 4 * (int)v79 )
              {
                v80 *= 2;
              }
              else
              {
                v75 = v80 - ((_DWORD)v79 + v215.m128_i32[1]);
                if ( (unsigned int)v75 > v80 >> 3 )
                  goto LABEL_65;
              }
              v170 = (unsigned __int8 *)v198;
              sub_1D3D700((unsigned __int8 *)v198, v80, v79, v74, v75, v76);
              sub_1D3C880((__int64)v170, (int *)v197, v205);
              v78 = v208;
              LODWORD(v79) = ((unsigned __int32)v215.m128_i32[0] >> 1) + 1;
LABEL_65:
              v215.m128_i32[0] = v215.m128_i8[0] & 1 | (2 * v79);
              if ( *(_DWORD *)v78 != -1 || *(_QWORD *)(v78 + 8) )
                --v215.m128_i32[1];
              *(_DWORD *)v78 = v210;
              v81 = v211;
              *(_QWORD *)(v78 + 16) = 0;
              *(_QWORD *)(v78 + 8) = v81;
              goto LABEL_68;
            }
LABEL_101:
            if ( (v215.m128_i8[0] & 1) == 0 )
              operator delete(v215.m128_u64[1], 24LL * v216, 8);
          }
          if ( !a6[2].m128_i32[2] )
            goto LABEL_94;
          v210 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v195 + 32LL))(*v195);
          if ( (unsigned __int8)sub_1D3C960((__int64 *)(v14 + 11256), &v210, &v212) )
          {
            sub_18C7040(
              &v215,
              v212.m128i_i64[0],
              (_QWORD *)(*(_QWORD *)(v14 + 11256) + 56LL * *(unsigned int *)(v14 + 11272)),
              v14 + 11256,
              1);
            goto LABEL_94;
          }
          v111 = *(unsigned int *)(v14 + 11272);
          v112 = (_QWORD *)v212.m128i_i64[0];
          v113 = *(_DWORD *)(v14 + 11264) + 1;
          v114 = (unsigned int)(4 * v113);
          v215.m128_u64[0] = v212.m128i_i64[0];
          if ( (unsigned int)v114 >= 3 * (int)v111 )
          {
            sub_1D7F810((__int64 **)(v14 + 11256), 2 * v111, v111, (unsigned int)(2 * v111), v114, v96);
          }
          else
          {
            v115 = (unsigned int)(v111 - *(_DWORD *)(v14 + 11268) - v113);
            if ( (unsigned int)v115 > (unsigned int)v111 >> 3 )
              goto LABEL_126;
            sub_1D7F810((__int64 **)(v14 + 11256), v111, v111, v115, v114, v96);
          }
          sub_1D3C960((__int64 *)(v14 + 11256), &v210, &v215);
          v112 = (_QWORD *)v215.m128_u64[0];
          v113 = *(_DWORD *)(v14 + 11264) + 1;
LABEL_126:
          v77 = *v112 == -4096;
          *(_DWORD *)(v14 + 11264) = v113;
          if ( !v77 )
            --*(_DWORD *)(v14 + 11268);
          *v112 = v210;
          v112[1] = v112 + 3;
          v112[2] = 0x100000000LL;
          v116 = *(unsigned int *)(v14 + 11272);
          v212.m128i_i64[0] = (__int64)v112;
          sub_18C7040(&v215, v112, (_QWORD *)(*(_QWORD *)(v14 + 11256) + 56 * v116), v14 + 11256, 1);
          v117 = a6[2].m128_u64[0];
          v118 = a6[2].m128_u32[2];
          v199 = (__int64 *)v215.m128_u64[0];
          v119 = *(unsigned int *)(v215.m128_u64[0] + 16);
          v120 = *(unsigned int *)(v215.m128_u64[0] + 20);
          v121 = 32 * v118;
          v200 = v121 >> 5;
          v122 = v119 + (v121 >> 5);
          if ( v122 > v120 )
          {
            v179 = v215.m128_u64[0];
            sub_E32370(v215.m128_u64[0] + 8, v122);
            v119 = *(unsigned int *)(v179 + 16);
          }
          v189 = v117 + v121;
          v123 = v199[1] + 32 * v119;
          if ( v117 != v117 + v121 )
          {
            LODWORD(v201) = v18;
            v124 = (_QWORD *)v117;
            v125 = v123;
            v202 = v14;
            do
            {
              v126 = *(_DWORD *)v124;
              *(_QWORD *)(v125 + 16) = 0;
              *(_QWORD *)(v125 + 8) = 0;
              v77 = v124[1] == 0;
              *(_DWORD *)v125 = v126;
              *(_DWORD *)(v125 + 24) = *((_DWORD *)v124 + 6);
              v127 = v124[2];
              *(_QWORD *)(v125 + 16) = v127;
              if ( !v77 )
              {
                v128 = *(_DWORD *)(v127 + 14976);
                if ( v128 )
                {
                  v160 = (unsigned int)(v128 - 1);
                  *(_DWORD *)(v127 + 14976) = v160;
                  v129 = *(__m128 **)(v127 + 8 * v160 + 14848);
                  v161 = v129[33].m128_u32[2];
                  v129->m128_i8[0] = 0;
                  v162 = v129[33].m128_u64[0];
                  v129[26].m128_i32[2] = 0;
                  v163 = v162 + (v161 << 6);
                  while ( v162 != v163 )
                  {
                    while ( 1 )
                    {
                      v163 -= 64LL;
                      v164 = *(void **)(v163 + 24);
                      if ( v164 == (void *)(v163 + 40) )
                        break;
                      operator delete(v164);
                      if ( v162 == v163 )
                        goto LABEL_174;
                    }
                  }
LABEL_174:
                  v129[33].m128_i32[2] = 0;
                }
                else
                {
                  v129 = (__m128 *)operator new(0x3A0u);
                  v129->m128_i8[0] = 0;
                  v129[6].m128_u64[0] = (unsigned __int64)&v129[7];
                  v129[8].m128_u64[0] = (unsigned __int64)&v129[9];
                  v129[10].m128_u64[0] = (unsigned __int64)&v129[11];
                  v129[12].m128_u64[0] = (unsigned __int64)&v129[13];
                  v129[14].m128_u64[0] = (unsigned __int64)&v129[15];
                  v129[16].m128_u64[0] = (unsigned __int64)&v129[17];
                  v129[18].m128_u64[0] = (unsigned __int64)&v129[19];
                  v129[20].m128_u64[0] = (unsigned __int64)&v129[21];
                  v129[22].m128_u64[0] = (unsigned __int64)&v129[23];
                  v129[24].m128_u64[0] = (unsigned __int64)&v129[25];
                  v129[26].m128_u64[0] = (unsigned __int64)&v129[27];
                  v129[6].m128_u64[1] = 0;
                  v129[7].m128_i8[0] = 0;
                  v129[8].m128_u64[1] = 0;
                  v129[9].m128_i8[0] = 0;
                  v129[10].m128_u64[1] = 0;
                  v129[11].m128_i8[0] = 0;
                  v129[12].m128_u64[1] = 0;
                  v129[13].m128_i8[0] = 0;
                  v129[14].m128_u64[1] = 0;
                  v129[15].m128_i8[0] = 0;
                  v129[16].m128_u64[1] = 0;
                  v129[17].m128_i8[0] = 0;
                  v129[18].m128_u64[1] = 0;
                  v129[19].m128_i8[0] = 0;
                  v129[20].m128_u64[1] = 0;
                  v129[21].m128_i8[0] = 0;
                  v129[22].m128_u64[1] = 0;
                  v129[23].m128_i8[0] = 0;
                  v129[24].m128_u64[1] = 0;
                  v129[25].m128_i8[0] = 0;
                  v129[26].m128_u64[1] = 0x800000000LL;
                  v129[33].m128_u64[0] = (unsigned __int64)&v129[34];
                  v129[33].m128_u64[1] = 0x600000000LL;
                }
                *(_QWORD *)(v125 + 8) = v129;
                v130 = (__m128 *)v124[1];
                v129->m128_i8[0] = v130->m128_i8[0];
                v129->m128_i8[1] = v130->m128_i8[1];
                v129->m128_i8[2] = v130->m128_i8[2];
                v129->m128_i8[3] = v130->m128_i8[3];
                v129->m128_i8[4] = v130->m128_i8[4];
                v129->m128_i8[5] = v130->m128_i8[5];
                v129->m128_i8[6] = v130->m128_i8[6];
                v129->m128_i8[7] = v130->m128_i8[7];
                v129->m128_i8[8] = v130->m128_i8[8];
                v129->m128_i8[9] = v130->m128_i8[9];
                v129->m128_i8[10] = v130->m128_i8[10];
                v129[1].m128_u64[0] = v130[1].m128_u64[0];
                v129[1].m128_u64[1] = v130[1].m128_u64[1];
                v129[2].m128_u64[0] = v130[2].m128_u64[0];
                v129[2].m128_u64[1] = v130[2].m128_u64[1];
                v131 = v130[3].m128_u64[0];
                v195 = v124;
                v129[3].m128_u64[0] = v131;
                v132 = v130[3].m128_u64[1];
                v196 = v125;
                v133 = v130 + 6;
                v134 = v129 + 6;
                v129[3].m128_u64[1] = v132;
                v135 = v130[4].m128_u64[0];
                v197 = (__int64 *)v130;
                v129[4].m128_u64[0] = v135;
                v136 = v130[4].m128_u64[1];
                v198 = v129;
                v129[4].m128_u64[1] = v136;
                v129[5].m128_u64[0] = v130[5].m128_u64[0];
                v129[5].m128_u64[1] = v130[5].m128_u64[1];
                v137 = v130 + 26;
                do
                {
                  if ( v134 != v133 )
                  {
                    v139 = (unsigned int *)v134->m128_u64[0];
                    v140 = v133->m128_u64[1];
                    if ( (__m128 *)v134->m128_u64[0] == &v134[1] )
                      v141 = 15;
                    else
                      v141 = v134[1].m128_u64[0];
                    if ( v140 > v141 )
                    {
                      if ( (v140 & 0x8000000000000000LL) != 0LL )
                        std::__throw_length_error("basic_string::_M_create");
                      v142 = 2 * v141;
                      if ( v140 < v142 )
                      {
                        v143 = v142 + 1;
                        if ( v142 < 0 )
                        {
                          v143 = 0x8000000000000000LL;
                          v142 = 0x7FFFFFFFFFFFFFFFLL;
                        }
                      }
                      else
                      {
                        v143 = v140 + 1;
                        v142 = v133->m128_i64[1];
                      }
                      v139 = (unsigned int *)operator new(v143);
                      v144 = (_BYTE *)v134->m128_u64[0];
                      if ( (__m128 *)v134->m128_u64[0] != &v134[1] )
                      {
                        v187 = v139;
                        operator delete(v144);
                        v139 = v187;
                      }
                      v134->m128_u64[0] = (unsigned __int64)v139;
                      v134[1].m128_u64[0] = v142;
                    }
                    if ( v140 )
                    {
                      v138 = (_BYTE *)v133->m128_u64[0];
                      if ( v140 == 1 )
                        *(_BYTE *)v139 = *v138;
                      else
                        memcpy(v139, v138, v140);
                      v139 = (unsigned int *)v134->m128_u64[0];
                    }
                    v134->m128_u64[1] = v140;
                    *((_BYTE *)v139 + v140) = 0;
                  }
                  v133 += 2;
                  v134 += 2;
                }
                while ( v133 != v137 );
                v145 = (unsigned __int8 *)v198;
                v146 = (unsigned __int8 *)v133;
                v124 = v195;
                v147 = (int *)v197;
                v125 = v196;
                v148 = (unsigned __int8 *)&v198[26];
                if ( &v198[26] != (__m128 *)v146 )
                {
                  v149 = *((unsigned int *)v197 + 106);
                  v150 = v198[26].m128_u32[2];
                  v151 = *((_DWORD *)v197 + 106);
                  if ( v149 <= v150 )
                  {
                    if ( *((_DWORD *)v197 + 106) )
                    {
                      v165 = v198[26].m128_u64[0];
                      v166 = v197[52];
                      v167 = 0;
                      do
                      {
                        *(_QWORD *)(v165 + v167) = *(_QWORD *)(v166 + v167);
                        *(_BYTE *)(v165 + v167 + 8) = *(_BYTE *)(v166 + v167 + 8);
                        v167 += 12;
                      }
                      while ( v167 != 12 * v149 );
                    }
                  }
                  else
                  {
                    if ( v149 > v198[26].m128_u32[3] )
                    {
                      v198[26].m128_i32[2] = 0;
                      sub_2237220(v148, v145 + 432, v149, 12);
                      v153 = *((char **)v147 + 52);
                      v152 = *((_BYTE **)v145 + 52);
                      v157 = 0;
                      v149 = (unsigned int)v147[106];
                      v158 = v153;
                    }
                    else
                    {
                      v152 = (_BYTE *)v198[26].m128_u64[0];
                      v153 = (char *)v197[52];
                      if ( v198[26].m128_i32[2] )
                      {
                        v154 = 3 * v150;
                        v155 = 0;
                        v156 = 4 * v154;
                        v157 = v156;
                        do
                        {
                          *(_QWORD *)&v152[v155] = *(_QWORD *)&v153[v155];
                          v152[v155 + 8] = v153[v155 + 8];
                          v155 += 12;
                        }
                        while ( v156 != v155 );
                        v149 = (unsigned int)v147[106];
                        v152 += v156;
                        v158 = &v153[v156];
                      }
                      else
                      {
                        v158 = (char *)v197[52];
                        v157 = 0;
                      }
                    }
                    v159 = 12 * v149;
                    if ( v158 != &v153[v159] )
                      memcpy(v152, v158, v159 - v157);
                  }
                  *((_DWORD *)v145 + 106) = v151;
                }
                sub_9EED30((__int64)(v145 + 528), (__int64 *)v147 + 66);
              }
              v124 += 4;
              v125 += 32;
            }
            while ( (_QWORD *)v189 != v124 );
            v18 = v201;
            v14 = v202;
            LODWORD(v119) = *((_DWORD *)v199 + 4);
          }
          *((_DWORD *)v199 + 4) = v200 + v119;
LABEL_94:
          if ( v221[0] != v188 + 2 )
            free(v221[0]);
          goto LABEL_14;
        }
LABEL_93:
        v183 = 7;
        goto LABEL_94;
      }
LABEL_92:
      sub_B88650(v59, 1);
      goto LABEL_93;
    }
LABEL_91:
    v183 = 14;
  }
LABEL_14:
  if ( ptr != v229 )
    free(ptr);
  if ( v224 != v226 )
    free(v224);
  if ( v190 )
  {
    *(_QWORD *)(v14 + 544) = v190;
    *(_QWORD *)(v14 + 512) = v194;
    *(_QWORD *)(v14 + 9944) = v214;
    *(_DWORD *)(v14 + 80) = v203;
    *(_DWORD *)(v14 + 2632) = v193;
  }
LABEL_20:
  sub_1DBADA0(v209);
  if ( v218 != v220 )
    free(v218);
  *(_DWORD *)(v14 + 11200) = v185;
  *(_BYTE *)(v14 + 12592) = v191;
  *(_BYTE *)(v14 + 11248) = v192;
  v41 = *(_QWORD *)(v14 + 264);
  if ( *(_DWORD *)(v41 + 204) == 5 )
    *(_BYTE *)(v41 + 194) = 1;
  if ( v18 )
    v18 = 3;
  *(_DWORD *)(v41 + 204) = v18;
  sub_190D5E0(v14, a7);
  return v183;
}
