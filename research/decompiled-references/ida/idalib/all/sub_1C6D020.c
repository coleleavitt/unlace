_BOOL8 __fastcall sub_1C6D020(__int64 *a1, unsigned __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  bool v20; // dl
  unsigned int v21; // eax
  __int64 v22; // rbp
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 *v29; // rsi
  unsigned __int64 v30; // rax
  unsigned int v31; // r12d
  unsigned __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbx
  __int64 v39; // rbp
  unsigned int v40; // esi
  unsigned int v41; // r14d
  __int64 v42; // rcx
  __int64 *v43; // rdx
  __int64 v44; // r10
  __int64 v45; // rdx
  __int64 v46; // rbp
  unsigned __int8 *v47; // rbx
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rbp
  char v54; // al
  __int64 v55; // rdx
  unsigned int v56; // eax
  unsigned __int64 v57; // rax
  unsigned int v58; // r14d
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  unsigned int *v62; // r12
  unsigned int *v63; // r14
  unsigned int v64; // edx
  __int64 v65; // rcx
  unsigned int *v66; // r14
  unsigned int *v67; // rbx
  unsigned __int64 v68; // rbp
  unsigned __int64 v69; // rax
  _QWORD *v70; // r12
  _QWORD *v71; // r13
  _QWORD *v72; // rdi
  void *v73; // rdi
  void **v74; // r12
  void **v75; // r13
  unsigned __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // r8
  __int64 v79; // rcx
  unsigned __int64 v80; // rbx
  unsigned __int64 v81; // rdx
  __int64 v82; // rsi
  __int64 v83; // rbp
  unsigned __int64 v84; // rbx
  __int64 v85; // rdx
  unsigned __int64 v86; // rsi
  unsigned __int64 v87; // rax
  unsigned __int8 *v88; // r14
  unsigned __int8 *v89; // rdx
  __int64 v90; // rax
  char v91; // dl
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rbp
  unsigned __int8 *v94; // r8
  __int64 v95; // rax
  unsigned __int64 v96; // rcx
  unsigned __int64 v97; // rdx
  __int64 v98; // rax
  unsigned __int8 *v99; // rbx
  unsigned __int8 *v100; // rdx
  __int64 v101; // rax
  char v102; // bp
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // rbx
  unsigned __int8 *v105; // rbp
  __int64 v106; // rax
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rbx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rax
  _QWORD *v116; // rax
  __int64 v117; // r13
  __int64 v118; // rdx
  int v119; // eax
  unsigned __int8 *v120; // rax
  __int64 v121; // rax
  __int64 *v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rbp
  __int64 v126; // rdx
  __int64 v127; // rax
  unsigned int v128; // esi
  __int64 *v129; // rax
  __int64 v130; // rdi
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rbp
  unsigned __int64 v134; // rdi
  unsigned __int64 v135; // rdx
  __int64 v136; // rdx
  __int64 v137; // rdx
  int v138; // eax
  unsigned __int8 *v139; // rax
  __int64 v140; // rax
  __int64 v141; // r13
  __int64 v142; // r14
  __int64 v143; // r13
  void *v144; // rdi
  __int64 v145; // rax
  __int64 v146; // r14
  __int64 v147; // r15
  __int64 v148; // r14
  void *v149; // rdi
  __int64 v150; // rdx
  int v151; // eax
  unsigned __int8 *v152; // rax
  __int64 v153; // rdx
  int v154; // eax
  __int64 v155; // rdx
  int v156; // eax
  __int64 v157; // rdx
  int v158; // eax
  unsigned __int8 *v159; // rax
  __int64 v160; // rdx
  int v161; // eax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rax
  __int64 v166; // rbp
  unsigned __int64 v167; // r13
  unsigned __int8 *v168; // r12
  __int64 v169; // rbx
  void *v170; // rdi
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rdx
  __int64 v174; // rax
  unsigned __int64 v175; // r13
  unsigned __int64 v176; // r12
  __int64 v177; // rbp
  __int64 v178; // rbx
  void *v179; // rdi
  __int64 v180; // rdx
  int v181; // eax
  __int64 v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rax
  __int64 v185; // rdx
  unsigned __int64 v186; // r13
  __int64 v187; // r12
  __int64 v188; // rbp
  __int64 v189; // rbx
  void *v190; // rdi
  __int64 v191; // rax
  __int64 v192; // rbp
  __int64 v193; // r13
  __int64 v194; // rbp
  void *v195; // rdi
  int v196; // r8d
  int v197; // eax
  __int64 v198; // r8
  bool v199; // zf
  __int64 v200; // rax
  __int64 v201; // r13
  __int64 v202; // r14
  __int64 v203; // r13
  void *v204; // rdi
  int v205; // r9d
  int v206; // r9d
  int v207; // edi
  __int64 *v208; // rsi
  unsigned int j; // eax
  __int64 v210; // r8
  int v211; // r9d
  int v212; // r9d
  int v213; // edi
  unsigned int i; // eax
  __int64 v215; // r8
  __int64 v216; // rax
  __int64 v217; // r14
  __int64 v218; // r15
  __int64 v219; // r14
  void *v220; // rdi
  int v221; // r11d
  __int64 *v222; // rax
  __int64 v223; // rcx
  int v224; // edx
  int v225; // edx
  int v226; // esi
  __int64 *v227; // rcx
  unsigned int k; // r14d
  __int64 v229; // rdi
  int v230; // esi
  int v231; // esi
  int v232; // edi
  unsigned int m; // edx
  __int64 v234; // r8
  unsigned int v235; // eax
  unsigned int v236; // edx
  unsigned int v237; // r14d
  unsigned int v238; // eax
  bool v239; // [rsp+0h] [rbp-268h]
  __int64 *v240; // [rsp+0h] [rbp-268h]
  unsigned __int64 v241; // [rsp+10h] [rbp-258h]
  unsigned __int64 v242; // [rsp+10h] [rbp-258h]
  int v243; // [rsp+10h] [rbp-258h]
  unsigned __int8 *v244; // [rsp+10h] [rbp-258h]
  int v245; // [rsp+10h] [rbp-258h]
  unsigned __int64 v246; // [rsp+18h] [rbp-250h]
  char v247; // [rsp+18h] [rbp-250h]
  __int64 v248; // [rsp+18h] [rbp-250h]
  __int64 v249; // [rsp+18h] [rbp-250h]
  __int64 v250; // [rsp+18h] [rbp-250h]
  __int64 v251; // [rsp+18h] [rbp-250h]
  __int64 v252; // [rsp+20h] [rbp-248h]
  int v253; // [rsp+30h] [rbp-238h] BYREF
  unsigned __int64 v254; // [rsp+34h] [rbp-234h]
  int v255; // [rsp+3Ch] [rbp-22Ch]
  __int64 v256[2]; // [rsp+40h] [rbp-228h] BYREF
  unsigned int v257; // [rsp+50h] [rbp-218h] BYREF
  char v258; // [rsp+54h] [rbp-214h]
  __int64 v259; // [rsp+58h] [rbp-210h]
  unsigned int v260; // [rsp+60h] [rbp-208h]
  unsigned __int64 v261; // [rsp+90h] [rbp-1D8h] BYREF
  int v262; // [rsp+98h] [rbp-1D0h]
  __int64 v263; // [rsp+A0h] [rbp-1C8h]
  unsigned __int8 *v264; // [rsp+B0h] [rbp-1B8h]
  __int64 v265; // [rsp+B8h] [rbp-1B0h]
  char v266; // [rsp+108h] [rbp-160h]
  unsigned int v267; // [rsp+110h] [rbp-158h]
  char v268; // [rsp+114h] [rbp-154h]
  unsigned int *v269; // [rsp+120h] [rbp-148h] BYREF
  __int64 v270; // [rsp+128h] [rbp-140h]
  _QWORD v271[2]; // [rsp+130h] [rbp-138h] BYREF
  unsigned __int8 *v272; // [rsp+140h] [rbp-128h]
  __int64 v273; // [rsp+148h] [rbp-120h]
  char v274; // [rsp+198h] [rbp-D0h]
  unsigned int v275; // [rsp+1A0h] [rbp-C8h]
  char v276; // [rsp+1A4h] [rbp-C4h]

  v5 = a2;
  if ( (unsigned __int8)sub_16EC930((__int64)a1, a2, 2u, *(double *)a3.m128_u64) )
    return 1;
  v10 = *(_QWORD **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  v11 = sub_19179A0((__int64)a1, v10, 1u, v6, v7, v8, a3, a4);
  if ( v11 == 1 )
    return 1;
  v15 = v11 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD *)(v5 + 8 * (((*(_BYTE *)(v5 + 2) & 8) != 0) + 1LL) + 32) = v11 & 0xFFFFFFFFFFFFFFFELL;
  v16 = *(_QWORD *)(*(_QWORD *)((v11 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v16 + 16) != 42 )
  {
    v52 = *(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v52 + 16) != 42 )
      goto LABEL_11;
    v16 = sub_F63050(v16, v10, v52, v12);
    if ( !v16 )
      goto LABEL_11;
  }
  v17 = *(_QWORD *)&byte_8[*(_QWORD *)(v16 + 32) & 0xFFFFFFFFFFFFFFF0LL];
  LODWORD(v16) = 0;
  if ( (v17 & 8) != 0 )
    v16 = *(__int64 *)((char *)&qword_18 + (v17 & 0xFFFFFFFFFFFFFFF0LL));
  v18 = a1[29];
  v19 = (unsigned int)v16 >> 9;
  v20 = v19 != 0;
  if ( (*(_BYTE *)(v18 + 47) & 0x20) != 0 )
    v20 = v19 != 5;
  if ( v20 )
  {
LABEL_11:
    v21 = sub_EEB7E0(v15, (__int64)v10, *(double *)a3.m128_u64);
    sub_168B9F0((__int64)&v269, a1 + 1, v21, 0x138Eu, 0);
    v22 = sub_EEC8C0(v5, (__int64)(a1 + 1), *(double *)a3.m128_u64);
    if ( v274 )
    {
      v47 = v272;
      if ( !v272 )
      {
        v137 = v273;
        v138 = *(_DWORD *)(v273 + 14976);
        if ( v138 )
        {
          v140 = (unsigned int)(v138 - 1);
          *(_DWORD *)(v273 + 14976) = v140;
          v47 = *(unsigned __int8 **)(v137 + 8 * v140 + 14848);
          v141 = *((unsigned int *)v47 + 134);
          *v47 = 0;
          v142 = *((_QWORD *)v47 + 66);
          *((_DWORD *)v47 + 106) = 0;
          v143 = v142 + (v141 << 6);
          while ( v142 != v143 )
          {
            while ( 1 )
            {
              v143 -= 64;
              v144 = *(void **)(v143 + 24);
              if ( v144 == (void *)(v143 + 40) )
                break;
              operator delete(v144);
              if ( v142 == v143 )
                goto LABEL_130;
            }
          }
LABEL_130:
          v48 = *((unsigned int *)v47 + 106);
          v50 = *((unsigned int *)v47 + 107);
          *((_DWORD *)v47 + 134) = 0;
          v49 = v48 + 1;
        }
        else
        {
          v139 = (unsigned __int8 *)operator new(0x3A0u);
          v50 = 8;
          v49 = 1;
          v47 = v139;
          *v139 = 0;
          *((_QWORD *)v139 + 12) = v139 + 112;
          *((_QWORD *)v139 + 16) = v139 + 144;
          *((_QWORD *)v139 + 20) = v139 + 176;
          *((_QWORD *)v139 + 24) = v139 + 208;
          *((_QWORD *)v139 + 28) = v139 + 240;
          *((_QWORD *)v139 + 32) = v139 + 272;
          *((_QWORD *)v139 + 36) = v139 + 304;
          *((_QWORD *)v139 + 40) = v139 + 336;
          *((_QWORD *)v139 + 44) = v139 + 368;
          *((_QWORD *)v139 + 48) = v139 + 400;
          *((_QWORD *)v139 + 52) = v139 + 432;
          *((_QWORD *)v139 + 13) = 0;
          v139[112] = 0;
          *((_QWORD *)v139 + 17) = 0;
          v139[144] = 0;
          *((_QWORD *)v139 + 21) = 0;
          v139[176] = 0;
          *((_QWORD *)v139 + 25) = 0;
          v139[208] = 0;
          *((_QWORD *)v139 + 29) = 0;
          v139[240] = 0;
          *((_QWORD *)v139 + 33) = 0;
          v139[272] = 0;
          *((_QWORD *)v139 + 37) = 0;
          v139[304] = 0;
          *((_QWORD *)v139 + 41) = 0;
          v139[336] = 0;
          *((_QWORD *)v139 + 45) = 0;
          v139[368] = 0;
          *((_QWORD *)v139 + 49) = 0;
          v139[400] = 0;
          *((_QWORD *)v139 + 53) = 0x800000000LL;
          *((_QWORD *)v139 + 66) = v139 + 544;
          *((_QWORD *)v139 + 67) = 0x600000000LL;
          v48 = 0;
        }
        v272 = v47;
LABEL_30:
        v261 = v22;
        LOBYTE(v262) = 1;
        if ( v49 <= v50 )
          goto LABEL_31;
        goto LABEL_27;
      }
    }
    else
    {
      if ( !v276 )
      {
LABEL_13:
        sub_15F7200(&v269);
        return 1;
      }
      v112 = sub_168B9E0(&v269);
      v115 = v271[0];
      if ( v271[0] )
        v115 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v271[0] + 32LL))(v271[0]);
      v256[0] = v115;
      v116 = sub_1587BC0(v112, v256, v110, v111, v113, v114);
      v117 = *v116 + 32LL * v275;
      v47 = *(unsigned __int8 **)(v117 + 8);
      if ( !v47 )
      {
        v118 = *(_QWORD *)(v117 + 16);
        v119 = *(_DWORD *)(v118 + 14976);
        if ( v119 )
        {
          v145 = (unsigned int)(v119 - 1);
          *(_DWORD *)(v118 + 14976) = v145;
          v47 = *(unsigned __int8 **)(v118 + 8 * v145 + 14848);
          v146 = *((unsigned int *)v47 + 134);
          *v47 = 0;
          v147 = *((_QWORD *)v47 + 66);
          *((_DWORD *)v47 + 106) = 0;
          v148 = v147 + (v146 << 6);
          while ( v147 != v148 )
          {
            while ( 1 )
            {
              v148 -= 64;
              v149 = *(void **)(v148 + 24);
              if ( v149 == (void *)(v148 + 40) )
                break;
              operator delete(v149);
              if ( v147 == v148 )
                goto LABEL_135;
            }
          }
LABEL_135:
          v48 = *((unsigned int *)v47 + 106);
          v50 = *((unsigned int *)v47 + 107);
          *((_DWORD *)v47 + 134) = 0;
          v49 = v48 + 1;
        }
        else
        {
          v120 = (unsigned __int8 *)operator new(0x3A0u);
          v50 = 8;
          v49 = 1;
          v47 = v120;
          *v120 = 0;
          *((_QWORD *)v120 + 12) = v120 + 112;
          *((_QWORD *)v120 + 16) = v120 + 144;
          *((_QWORD *)v120 + 20) = v120 + 176;
          *((_QWORD *)v120 + 24) = v120 + 208;
          *((_QWORD *)v120 + 28) = v120 + 240;
          *((_QWORD *)v120 + 32) = v120 + 272;
          *((_QWORD *)v120 + 36) = v120 + 304;
          *((_QWORD *)v120 + 40) = v120 + 336;
          *((_QWORD *)v120 + 44) = v120 + 368;
          *((_QWORD *)v120 + 48) = v120 + 400;
          *((_QWORD *)v120 + 52) = v120 + 432;
          *((_QWORD *)v120 + 13) = 0;
          v120[112] = 0;
          *((_QWORD *)v120 + 17) = 0;
          v120[144] = 0;
          *((_QWORD *)v120 + 21) = 0;
          v120[176] = 0;
          *((_QWORD *)v120 + 25) = 0;
          v120[208] = 0;
          *((_QWORD *)v120 + 29) = 0;
          v120[240] = 0;
          *((_QWORD *)v120 + 33) = 0;
          v120[272] = 0;
          *((_QWORD *)v120 + 37) = 0;
          v120[304] = 0;
          *((_QWORD *)v120 + 41) = 0;
          v120[336] = 0;
          *((_QWORD *)v120 + 45) = 0;
          v120[368] = 0;
          *((_QWORD *)v120 + 49) = 0;
          v120[400] = 0;
          *((_QWORD *)v120 + 53) = 0x800000000LL;
          *((_QWORD *)v120 + 66) = v120 + 544;
          *((_QWORD *)v120 + 67) = 0x600000000LL;
          v48 = 0;
        }
        *(_QWORD *)(v117 + 8) = v47;
        goto LABEL_30;
      }
    }
    v48 = *((unsigned int *)v47 + 106);
    v50 = *((unsigned int *)v47 + 107);
    v49 = v48 + 1;
    goto LABEL_30;
  }
  v23 = *(_QWORD *)(v5 + 8 * (((*(_BYTE *)(v5 + 2) & 8) != 0) + 1LL) + 40);
  v24 = sub_19179A0((__int64)a1, (_QWORD *)v23, 1u, v18, v13, v14, a3, a4);
  if ( v24 == 1 )
  {
    v27 = 8 * (((*(_BYTE *)(v5 + 2) & 8) != 0) + 1LL);
    goto LABEL_16;
  }
  v258 &= ~1u;
  v53 = v24 & 0xFFFFFFFFFFFFFFFELL;
  v54 = *(_BYTE *)(v5 + 2);
  v23 = (__int64)v256;
  v256[1] = (__int64)&v269;
  v257 = 0;
  *(_QWORD *)(v5 + 8 * (((v54 & 8) != 0) + 1LL) + 40) = v53;
  v55 = a1[31];
  v269 = (unsigned int *)v271;
  v270 = 0x800000000LL;
  LOWORD(v256[0]) = 0;
  if ( !(unsigned __int8)sub_C82410(v53, (__int64)v256, v55, 0, v25, v26) || v257 != 2 || v260 > 0x20 )
  {
    v240 = a1 + 1;
    v56 = sub_EEB7E0(v53, (__int64)v256, *(double *)a3.m128_u64);
    v23 = (__int64)(a1 + 1);
    sub_168B9F0((__int64)&v261, a1 + 1, v56, 0x138Fu, 0);
    v253 = 0;
    if ( v266 )
    {
      v88 = v264;
      if ( !v264 )
      {
        v153 = v265;
        v154 = *(_DWORD *)(v265 + 14976);
        if ( v154 )
        {
          v171 = (unsigned int)(v154 - 1);
          *(_DWORD *)(v265 + 14976) = v171;
          v88 = *(unsigned __int8 **)(v153 + 8 * v171 + 14848);
          v172 = *((unsigned int *)v88 + 134);
          *v88 = 0;
          v173 = *((_QWORD *)v88 + 66);
          *((_DWORD *)v88 + 106) = 0;
          v174 = v172 << 6;
          if ( v173 != v173 + v174 )
          {
            v175 = v5;
            v176 = v53;
            v177 = v173;
            v178 = v173 + v174;
            do
            {
              while ( 1 )
              {
                v178 -= 64;
                v179 = *(void **)(v178 + 24);
                if ( v179 == (void *)(v178 + 40) )
                  break;
                operator delete(v179);
                if ( v177 == v178 )
                  goto LABEL_163;
              }
            }
            while ( v177 != v178 );
LABEL_163:
            v53 = v176;
            v5 = v175;
          }
          *((_DWORD *)v88 + 134) = 0;
        }
        else
        {
          v88 = (unsigned __int8 *)operator new(0x3A0u);
          *v88 = 0;
          *((_QWORD *)v88 + 12) = v88 + 112;
          *((_QWORD *)v88 + 16) = v88 + 144;
          *((_QWORD *)v88 + 20) = v88 + 176;
          *((_QWORD *)v88 + 24) = v88 + 208;
          *((_QWORD *)v88 + 28) = v88 + 240;
          *((_QWORD *)v88 + 32) = v88 + 272;
          *((_QWORD *)v88 + 36) = v88 + 304;
          *((_QWORD *)v88 + 40) = v88 + 336;
          *((_QWORD *)v88 + 44) = v88 + 368;
          *((_QWORD *)v88 + 48) = v88 + 400;
          *((_QWORD *)v88 + 52) = v88 + 432;
          *((_QWORD *)v88 + 13) = 0;
          v88[112] = 0;
          *((_QWORD *)v88 + 17) = 0;
          v88[144] = 0;
          *((_QWORD *)v88 + 21) = 0;
          v88[176] = 0;
          *((_QWORD *)v88 + 25) = 0;
          v88[208] = 0;
          *((_QWORD *)v88 + 29) = 0;
          v88[240] = 0;
          *((_QWORD *)v88 + 33) = 0;
          v88[272] = 0;
          *((_QWORD *)v88 + 37) = 0;
          v88[304] = 0;
          *((_QWORD *)v88 + 41) = 0;
          v88[336] = 0;
          *((_QWORD *)v88 + 45) = 0;
          v88[368] = 0;
          *((_QWORD *)v88 + 49) = 0;
          v88[400] = 0;
          *((_QWORD *)v88 + 53) = 0x800000000LL;
          *((_QWORD *)v88 + 66) = v88 + 544;
          *((_QWORD *)v88 + 67) = 0x600000000LL;
        }
        v264 = v88;
      }
      v88[*v88 + 1] = 2;
      v89 = v264;
      v90 = *v264;
      *v264 = v90 + 1;
      *(_QWORD *)&v89[8 * v90 + 16] = 0;
      v91 = v266;
    }
    else
    {
      if ( !v268 )
      {
        v57 = sub_EEC8C0(v53, v23, *(double *)a3.m128_u64);
        v58 = v57;
        v241 = HIDWORD(v57);
LABEL_40:
        if ( !v268 )
          goto LABEL_41;
        v121 = sub_168B9E0(&v261);
        v125 = v263;
        v126 = v121;
        if ( v263 )
        {
          v248 = v121;
          v127 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v263 + 32LL))(v263, v23, v121);
          v126 = v248;
          v125 = v127;
        }
        v128 = *(_DWORD *)(v126 + 16);
        if ( !v128 )
          goto LABEL_195;
        v124 = (v128 - 1) & (((unsigned int)v125 >> 9) ^ ((unsigned int)v125 >> 4));
        v129 = (__int64 *)(*(_QWORD *)v126 + 32 * v124);
        v130 = *v129;
        if ( v125 == *v129 )
        {
LABEL_116:
          v131 = v129[1];
LABEL_117:
          v132 = v131 + 32LL * v267;
          v133 = *(_QWORD *)(v132 + 8);
          if ( v133 )
          {
            v23 = *(unsigned int *)(v133 + 424);
            v134 = *(unsigned int *)(v133 + 428);
            v135 = v23 + 1;
          }
          else
          {
            v155 = *(_QWORD *)(v132 + 16);
            v156 = *(_DWORD *)(v155 + 14976);
            if ( v156 )
            {
              v182 = (unsigned int)(v156 - 1);
              *(_DWORD *)(v155 + 14976) = v182;
              v133 = *(_QWORD *)(v155 + 8 * v182 + 14848);
              v183 = *(unsigned int *)(v133 + 536);
              *(_BYTE *)v133 = 0;
              v184 = *(_QWORD *)(v133 + 528);
              *(_DWORD *)(v133 + 424) = 0;
              v185 = v184 + (v183 << 6);
              v250 = v184;
              if ( v184 != v185 )
              {
                v186 = v5;
                v187 = v133;
                v188 = v132;
                v189 = v185;
                do
                {
                  while ( 1 )
                  {
                    v189 -= 64;
                    v190 = *(void **)(v189 + 24);
                    if ( v190 == (void *)(v189 + 40) )
                      break;
                    operator delete(v190);
                    if ( v250 == v189 )
                      goto LABEL_174;
                  }
                }
                while ( v250 != v189 );
LABEL_174:
                v132 = v188;
                v133 = v187;
                v5 = v186;
              }
              v23 = *(unsigned int *)(v133 + 424);
              v134 = *(unsigned int *)(v133 + 428);
              *(_DWORD *)(v133 + 536) = 0;
              v135 = v23 + 1;
            }
            else
            {
              v249 = v132;
              v134 = 8;
              v23 = 0;
              v133 = operator new(0x3A0u);
              *(_BYTE *)v133 = 0;
              *(_QWORD *)(v133 + 96) = v133 + 112;
              *(_QWORD *)(v133 + 128) = v133 + 144;
              *(_QWORD *)(v133 + 160) = v133 + 176;
              *(_QWORD *)(v133 + 192) = v133 + 208;
              *(_QWORD *)(v133 + 224) = v133 + 240;
              *(_QWORD *)(v133 + 256) = v133 + 272;
              *(_QWORD *)(v133 + 288) = v133 + 304;
              *(_QWORD *)(v133 + 320) = v133 + 336;
              *(_QWORD *)(v133 + 352) = v133 + 368;
              *(_QWORD *)(v133 + 384) = v133 + 400;
              *(_QWORD *)(v133 + 416) = v133 + 432;
              *(_QWORD *)(v133 + 104) = 0;
              *(_BYTE *)(v133 + 112) = 0;
              *(_QWORD *)(v133 + 136) = 0;
              *(_BYTE *)(v133 + 144) = 0;
              *(_QWORD *)(v133 + 168) = 0;
              *(_BYTE *)(v133 + 176) = 0;
              *(_QWORD *)(v133 + 200) = 0;
              *(_BYTE *)(v133 + 208) = 0;
              *(_QWORD *)(v133 + 232) = 0;
              *(_BYTE *)(v133 + 240) = 0;
              *(_QWORD *)(v133 + 264) = 0;
              *(_BYTE *)(v133 + 272) = 0;
              *(_QWORD *)(v133 + 296) = 0;
              *(_BYTE *)(v133 + 304) = 0;
              *(_QWORD *)(v133 + 328) = 0;
              *(_BYTE *)(v133 + 336) = 0;
              *(_QWORD *)(v133 + 360) = 0;
              *(_BYTE *)(v133 + 368) = 0;
              *(_QWORD *)(v133 + 392) = 0;
              *(_BYTE *)(v133 + 400) = 0;
              *(_QWORD *)(v133 + 424) = 0x800000000LL;
              v132 = v249;
              *(_QWORD *)(v133 + 536) = 0x600000000LL;
              *(_QWORD *)(v133 + 528) = v133 + 544;
              v135 = 1;
            }
            *(_QWORD *)(v132 + 8) = v133;
          }
          v254 = __PAIR64__(v241, v58);
          LOBYTE(v255) = 1;
          if ( v135 > v134 )
          {
            sub_2237220(v133 + 416, v133 + 432, v135, 12);
            v23 = *(unsigned int *)(v133 + 424);
          }
          v136 = *(_QWORD *)(v133 + 416) + 12 * v23;
          *(_QWORD *)v136 = v254;
          *(_DWORD *)(v136 + 8) = v255;
          ++*(_DWORD *)(v133 + 424);
          goto LABEL_41;
        }
        v196 = 1;
        v122 = nullptr;
        if ( v130 == -4096 )
          goto LABEL_184;
        while ( 1 )
        {
          if ( !v122 && v130 == -8192 )
            v122 = v129;
          v124 = (v128 - 1) & (v196 + (_DWORD)v124);
          v129 = (__int64 *)(*(_QWORD *)v126 + 32LL * (unsigned int)v124);
          v130 = *v129;
          if ( v125 == *v129 )
            goto LABEL_116;
          if ( v130 == -4096 )
            break;
          ++v196;
        }
        if ( !v122 )
LABEL_184:
          v122 = v129;
        v197 = *(_DWORD *)(v126 + 8) + 1;
        v123 = (unsigned int)(4 * v197);
        if ( (unsigned int)v123 < 3 * v128 )
        {
          v198 = v128 >> 3;
          if ( v128 - *(_DWORD *)(v126 + 12) - v197 > (unsigned int)v198 )
          {
LABEL_187:
            v199 = *v122 == -4096;
            *(_DWORD *)(v126 + 8) = v197;
            if ( !v199 )
              --*(_DWORD *)(v126 + 12);
            *v122 = v125;
            v131 = 0;
            v122[1] = 0;
            v122[2] = 0;
            v122[3] = 0;
            goto LABEL_117;
          }
          v252 = v126;
          sub_1587800(v126, v128, v126, (__int64)v122, v198, v124);
          v126 = v252;
          v211 = *(_DWORD *)(v252 + 16);
          if ( v211 )
          {
            v212 = v211 - 1;
            v213 = 1;
            v208 = nullptr;
            for ( i = v212 & (((unsigned int)v125 >> 9) ^ ((unsigned int)v125 >> 4)); ; i = v212 & v238 )
            {
              v122 = (__int64 *)(*(_QWORD *)v252 + 32LL * i);
              v215 = *v122;
              if ( v125 == *v122 )
                break;
              if ( v215 == -4096 )
                goto LABEL_203;
              if ( v215 != -8192 || v208 )
                v122 = v208;
              v238 = v213 + i;
              v208 = v122;
              ++v213;
            }
LABEL_198:
            v197 = *(_DWORD *)(v126 + 8) + 1;
            goto LABEL_187;
          }
        }
        else
        {
LABEL_195:
          v251 = v126;
          sub_1587800(v126, 2 * v128, v126, (__int64)v122, v123, v124);
          v126 = v251;
          v205 = *(_DWORD *)(v251 + 16);
          if ( v205 )
          {
            v206 = v205 - 1;
            v207 = 1;
            v208 = nullptr;
            for ( j = v206 & (((unsigned int)v125 >> 9) ^ ((unsigned int)v125 >> 4)); ; j = v206 & v235 )
            {
              v122 = (__int64 *)(*(_QWORD *)v251 + 32LL * j);
              v210 = *v122;
              if ( v125 == *v122 )
                break;
              if ( v210 == -4096 )
              {
LABEL_203:
                v197 = *(_DWORD *)(v126 + 8) + 1;
                if ( v208 )
                  v122 = v208;
                goto LABEL_187;
              }
              if ( v210 != -8192 || v208 )
                v122 = v208;
              v235 = v207 + j;
              v208 = v122;
              ++v207;
            }
            goto LABEL_198;
          }
        }
        ++*(_DWORD *)(v126 + 8);
        BUG();
      }
      v23 = (__int64)&v253;
      sub_1C6B330(&v261, &v253);
      v91 = v266;
    }
    v247 = v91;
    v92 = sub_EEC8C0(v53, v23, *(double *)a3.m128_u64);
    v58 = v92;
    v93 = HIDWORD(v92);
    LODWORD(v241) = HIDWORD(v92);
    if ( v247 )
    {
      v94 = v264;
      if ( v264 )
      {
        v95 = *((unsigned int *)v264 + 106);
        v96 = *((unsigned int *)v264 + 107);
        v97 = v95 + 1;
      }
      else
      {
        v150 = v265;
        v151 = *(_DWORD *)(v265 + 14976);
        if ( v151 )
        {
          v162 = (unsigned int)(v151 - 1);
          *(_DWORD *)(v265 + 14976) = v162;
          v94 = *(unsigned __int8 **)(v150 + 8 * v162 + 14848);
          v163 = *((unsigned int *)v94 + 134);
          *v94 = 0;
          v164 = *((_QWORD *)v94 + 66);
          *((_DWORD *)v94 + 106) = 0;
          v165 = v164 + (v163 << 6);
          if ( v164 != v165 )
          {
            v245 = v93;
            v166 = v164;
            v167 = v5;
            v168 = v94;
            v169 = v165;
            do
            {
              while ( 1 )
              {
                v169 -= 64;
                v170 = *(void **)(v169 + 24);
                if ( v170 == (void *)(v169 + 40) )
                  break;
                operator delete(v170);
                if ( v166 == v169 )
                  goto LABEL_155;
              }
            }
            while ( v166 != v169 );
LABEL_155:
            v94 = v168;
            LODWORD(v93) = v245;
            v5 = v167;
          }
          v95 = *((unsigned int *)v94 + 106);
          v96 = *((unsigned int *)v94 + 107);
          *((_DWORD *)v94 + 134) = 0;
          v97 = v95 + 1;
        }
        else
        {
          v152 = (unsigned __int8 *)operator new(0x3A0u);
          v96 = 8;
          v97 = 1;
          v94 = v152;
          *v152 = 0;
          *((_QWORD *)v152 + 12) = v152 + 112;
          *((_QWORD *)v152 + 16) = v152 + 144;
          *((_QWORD *)v152 + 20) = v152 + 176;
          *((_QWORD *)v152 + 24) = v152 + 208;
          *((_QWORD *)v152 + 28) = v152 + 240;
          *((_QWORD *)v152 + 32) = v152 + 272;
          *((_QWORD *)v152 + 36) = v152 + 304;
          *((_QWORD *)v152 + 40) = v152 + 336;
          *((_QWORD *)v152 + 44) = v152 + 368;
          *((_QWORD *)v152 + 48) = v152 + 400;
          *((_QWORD *)v152 + 52) = v152 + 432;
          *((_QWORD *)v152 + 13) = 0;
          v152[112] = 0;
          *((_QWORD *)v152 + 17) = 0;
          v152[144] = 0;
          *((_QWORD *)v152 + 21) = 0;
          v152[176] = 0;
          *((_QWORD *)v152 + 25) = 0;
          v152[208] = 0;
          *((_QWORD *)v152 + 29) = 0;
          v152[240] = 0;
          *((_QWORD *)v152 + 33) = 0;
          v152[272] = 0;
          *((_QWORD *)v152 + 37) = 0;
          v152[304] = 0;
          *((_QWORD *)v152 + 41) = 0;
          v152[336] = 0;
          *((_QWORD *)v152 + 45) = 0;
          v152[368] = 0;
          *((_QWORD *)v152 + 49) = 0;
          v152[400] = 0;
          *((_QWORD *)v152 + 53) = 0x800000000LL;
          *((_QWORD *)v152 + 66) = v152 + 544;
          *((_QWORD *)v152 + 67) = 0x600000000LL;
          v95 = 0;
        }
        v264 = v94;
      }
      v254 = __PAIR64__(v93, v58);
      LOBYTE(v255) = 1;
      if ( v97 > v96 )
      {
        v23 = (__int64)(v94 + 432);
        v244 = v94;
        sub_2237220(v94 + 416, v94 + 432, v97, 12);
        v94 = v244;
        v95 = *((unsigned int *)v244 + 106);
      }
      v98 = *((_QWORD *)v94 + 52) + 12 * v95;
      *(_QWORD *)v98 = v254;
      *(_DWORD *)(v98 + 8) = v255;
      ++*((_DWORD *)v94 + 106);
LABEL_41:
      sub_15F7200(&v261);
      if ( v269 != &v269[8 * (unsigned int)v270] )
      {
        v242 = v5;
        v62 = v269;
        v63 = &v269[8 * (unsigned int)v270];
        do
        {
          v64 = *v62;
          v65 = (__int64)(v62 + 2);
          v23 = (__int64)v240;
          v62 += 8;
          sub_168CDE0((__int64)&v261, v240, v64, v65, 0);
          sub_15F7200(&v261);
        }
        while ( v63 != v62 );
        v5 = v242;
      }
      v239 = 1;
      v243 = 1;
      if ( v257 <= 1 )
        goto LABEL_46;
      goto LABEL_87;
    }
    goto LABEL_40;
  }
  v243 = v259;
  v239 = (_DWORD)v259 != 7 && (unsigned int)(v259 - 4) > 1;
LABEL_87:
  sub_A4F8E0((int *)&v257);
LABEL_46:
  v66 = v269;
  v67 = &v269[8 * (unsigned int)v270];
  if ( v269 != v67 )
  {
    v246 = v5;
    do
    {
      v67 -= 8;
      v68 = *((_QWORD *)v67 + 1);
      if ( v68 )
      {
        v69 = *((_QWORD *)v67 + 2);
        if ( v69 )
        {
          if ( v68 < v69 || v68 > v69 + 14848 )
          {
            v70 = *(_QWORD **)(v68 + 528);
            v71 = &v70[8 * (unsigned __int64)*(unsigned int *)(v68 + 536)];
            if ( v70 != v71 )
            {
              do
              {
                while ( 1 )
                {
                  v71 -= 8;
                  v72 = (_QWORD *)v71[3];
                  if ( v72 == v71 + 5 )
                    break;
                  operator delete(v72);
                  if ( v70 == v71 )
                    goto LABEL_54;
                }
              }
              while ( v70 != v71 );
LABEL_54:
              v71 = *(_QWORD **)(v68 + 528);
            }
            if ( v71 != (_QWORD *)(v68 + 544) )
              free(v71);
            v73 = *(void **)(v68 + 416);
            if ( v73 != (void *)(v68 + 432) )
              free(v73);
            v74 = (void **)(v68 + 384);
            v75 = (void **)(v68 + 64);
            do
            {
              while ( *v74 != v74 + 2 )
              {
                operator delete(*v74);
                v74 -= 4;
                if ( v75 == v74 )
                  goto LABEL_62;
              }
              v74 -= 4;
            }
            while ( v74 != v75 );
LABEL_62:
            v23 = 928;
            operator delete((void *)v68, 0x3A0u);
          }
          else
          {
            v59 = *(unsigned int *)(v69 + 14976);
            v60 = (unsigned int)(v59 + 1);
            *(_DWORD *)(v69 + 14976) = v60;
            *(_QWORD *)(v69 + 8 * v59 + 14848) = v68;
          }
        }
      }
    }
    while ( v66 != v67 );
    v5 = v246;
    v67 = v269;
  }
  if ( v67 != (unsigned int *)v271 )
    free(v67);
  v27 = 8 * (((*(_BYTE *)(v5 + 2) & 8) != 0) + 1LL);
  if ( v239 )
  {
LABEL_16:
    v28 = sub_EEB7E0(*(_QWORD *)(v5 + v27 + 40), v23, *(double *)a3.m128_u64);
    v29 = a1 + 1;
    sub_168B9F0((__int64)&v269, a1 + 1, v28, 0x1390u, 0);
    LODWORD(v256[0]) = 0;
    if ( v274 )
    {
      v99 = v272;
      if ( !v272 )
      {
        v160 = v273;
        v161 = *(_DWORD *)(v273 + 14976);
        if ( v161 )
        {
          v191 = (unsigned int)(v161 - 1);
          *(_DWORD *)(v273 + 14976) = v191;
          v99 = *(unsigned __int8 **)(v160 + 8 * v191 + 14848);
          v192 = *((unsigned int *)v99 + 134);
          *v99 = 0;
          v193 = *((_QWORD *)v99 + 66);
          *((_DWORD *)v99 + 106) = 0;
          v194 = v193 + (v192 << 6);
          while ( v193 != v194 )
          {
            while ( 1 )
            {
              v194 -= 64;
              v195 = *(void **)(v194 + 24);
              if ( v195 == (void *)(v194 + 40) )
                break;
              operator delete(v195);
              if ( v193 == v194 )
                goto LABEL_182;
            }
          }
LABEL_182:
          *((_DWORD *)v99 + 134) = 0;
        }
        else
        {
          v99 = (unsigned __int8 *)operator new(0x3A0u);
          *v99 = 0;
          *((_QWORD *)v99 + 12) = v99 + 112;
          *((_QWORD *)v99 + 16) = v99 + 144;
          *((_QWORD *)v99 + 20) = v99 + 176;
          *((_QWORD *)v99 + 24) = v99 + 208;
          *((_QWORD *)v99 + 28) = v99 + 240;
          *((_QWORD *)v99 + 32) = v99 + 272;
          *((_QWORD *)v99 + 36) = v99 + 304;
          *((_QWORD *)v99 + 40) = v99 + 336;
          *((_QWORD *)v99 + 44) = v99 + 368;
          *((_QWORD *)v99 + 48) = v99 + 400;
          *((_QWORD *)v99 + 52) = v99 + 432;
          *((_QWORD *)v99 + 13) = 0;
          v99[112] = 0;
          *((_QWORD *)v99 + 17) = 0;
          v99[144] = 0;
          *((_QWORD *)v99 + 21) = 0;
          v99[176] = 0;
          *((_QWORD *)v99 + 25) = 0;
          v99[208] = 0;
          *((_QWORD *)v99 + 29) = 0;
          v99[240] = 0;
          *((_QWORD *)v99 + 33) = 0;
          v99[272] = 0;
          *((_QWORD *)v99 + 37) = 0;
          v99[304] = 0;
          *((_QWORD *)v99 + 41) = 0;
          v99[336] = 0;
          *((_QWORD *)v99 + 45) = 0;
          v99[368] = 0;
          *((_QWORD *)v99 + 49) = 0;
          v99[400] = 0;
          *((_QWORD *)v99 + 53) = 0x800000000LL;
          *((_QWORD *)v99 + 66) = v99 + 544;
          *((_QWORD *)v99 + 67) = 0x600000000LL;
        }
        v272 = v99;
      }
      v99[*v99 + 1] = 2;
      v100 = v272;
      v101 = *v272;
      *v272 = v101 + 1;
      *(_QWORD *)&v100[8 * v101 + 16] = 0;
      v102 = v274;
    }
    else
    {
      if ( !v276 )
      {
        v30 = sub_EEC8C0(
                *(_QWORD *)(v5 + 8 * (((*(_BYTE *)(v5 + 2) & 8) != 0) + 1LL) + 40),
                (__int64)v29,
                *(double *)a3.m128_u64);
        v31 = v30;
        v32 = HIDWORD(v30);
LABEL_19:
        if ( !v276 )
          goto LABEL_13;
        v33 = sub_168B9E0(&v269);
        v38 = v271[0];
        v39 = v33;
        if ( v271[0] )
          v38 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v271[0] + 32LL))(v271[0]);
        v40 = *(_DWORD *)(v39 + 16);
        if ( !v40 )
          goto LABEL_222;
        v36 = v40 - 1;
        v41 = ((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4);
        LODWORD(v42) = v36 & v41;
        v43 = (__int64 *)(*(_QWORD *)v39 + 32LL * ((unsigned int)v36 & v41));
        v44 = *v43;
        if ( *v43 == v38 )
        {
LABEL_24:
          v45 = v43[1];
          goto LABEL_25;
        }
        v221 = 1;
        v222 = nullptr;
        if ( v44 == -4096 )
          goto LABEL_212;
        while ( 1 )
        {
          if ( !v222 && v44 == -8192 )
            v222 = v43;
          v37 = (unsigned int)(v221 + 1);
          v42 = (unsigned int)v36 & ((_DWORD)v42 + v221);
          v43 = (__int64 *)(*(_QWORD *)v39 + 32 * v42);
          v44 = *v43;
          if ( v38 == *v43 )
            goto LABEL_24;
          if ( v44 == -4096 )
            break;
          ++v221;
        }
        if ( !v222 )
LABEL_212:
          v222 = v43;
        v34 = (unsigned int)(*(_DWORD *)(v39 + 8) + 1);
        v35 = 3 * v40;
        if ( 4 * (int)v34 < (unsigned int)v35 )
        {
          v223 = v40 - *(_DWORD *)(v39 + 12) - (unsigned int)v34;
          if ( (unsigned int)v223 > v40 >> 3 )
          {
LABEL_215:
            v199 = *v222 == -4096;
            *(_DWORD *)(v39 + 8) = v34;
            if ( !v199 )
              --*(_DWORD *)(v39 + 12);
            *v222 = v38;
            v45 = 0;
            v222[1] = 0;
            v222[2] = 0;
            v222[3] = 0;
LABEL_25:
            v46 = v45 + 32LL * v275;
            v47 = *(unsigned __int8 **)(v46 + 8);
            if ( !v47 )
            {
              v180 = *(_QWORD *)(v46 + 16);
              v181 = *(_DWORD *)(v180 + 14976);
              if ( v181 )
              {
                v216 = (unsigned int)(v181 - 1);
                *(_DWORD *)(v180 + 14976) = v216;
                v47 = *(unsigned __int8 **)(v180 + 8 * v216 + 14848);
                v217 = *((unsigned int *)v47 + 134);
                *v47 = 0;
                v218 = *((_QWORD *)v47 + 66);
                *((_DWORD *)v47 + 106) = 0;
                v219 = v218 + (v217 << 6);
                while ( v218 != v219 )
                {
                  while ( 1 )
                  {
                    v219 -= 64;
                    v220 = *(void **)(v219 + 24);
                    if ( v220 == (void *)(v219 + 40) )
                      break;
                    operator delete(v220);
                    if ( v218 == v219 )
                      goto LABEL_210;
                  }
                }
LABEL_210:
                *((_DWORD *)v47 + 134) = 0;
              }
              else
              {
                v47 = (unsigned __int8 *)operator new(0x3A0u);
                *v47 = 0;
                *((_QWORD *)v47 + 12) = v47 + 112;
                *((_QWORD *)v47 + 16) = v47 + 144;
                *((_QWORD *)v47 + 20) = v47 + 176;
                *((_QWORD *)v47 + 24) = v47 + 208;
                *((_QWORD *)v47 + 28) = v47 + 240;
                *((_QWORD *)v47 + 32) = v47 + 272;
                *((_QWORD *)v47 + 36) = v47 + 304;
                *((_QWORD *)v47 + 40) = v47 + 336;
                *((_QWORD *)v47 + 44) = v47 + 368;
                *((_QWORD *)v47 + 48) = v47 + 400;
                *((_QWORD *)v47 + 52) = v47 + 432;
                v47[112] = 0;
                *((_QWORD *)v47 + 13) = 0;
                *((_QWORD *)v47 + 17) = 0;
                v47[144] = 0;
                *((_QWORD *)v47 + 21) = 0;
                v47[176] = 0;
                *((_QWORD *)v47 + 25) = 0;
                v47[208] = 0;
                *((_QWORD *)v47 + 29) = 0;
                v47[240] = 0;
                *((_QWORD *)v47 + 33) = 0;
                v47[272] = 0;
                *((_QWORD *)v47 + 37) = 0;
                v47[304] = 0;
                *((_QWORD *)v47 + 41) = 0;
                v47[336] = 0;
                *((_QWORD *)v47 + 45) = 0;
                v47[368] = 0;
                *((_QWORD *)v47 + 49) = 0;
                v47[400] = 0;
                *((_QWORD *)v47 + 53) = 0x800000000LL;
                *((_QWORD *)v47 + 66) = v47 + 544;
                *((_QWORD *)v47 + 67) = 0x600000000LL;
              }
              *(_QWORD *)(v46 + 8) = v47;
            }
            v261 = __PAIR64__(v32, v31);
            LOBYTE(v262) = 1;
            v48 = *((unsigned int *)v47 + 106);
            v49 = v48 + 1;
            if ( v48 + 1 <= (unsigned __int64)*((unsigned int *)v47 + 107) )
              goto LABEL_31;
LABEL_27:
            sub_2237220(v47 + 416, v47 + 432, v49, 12);
            v48 = *((unsigned int *)v47 + 106);
LABEL_31:
            v51 = *((_QWORD *)v47 + 52) + 12 * v48;
            *(_QWORD *)v51 = v261;
            *(_DWORD *)(v51 + 8) = v262;
            ++*((_DWORD *)v47 + 106);
            goto LABEL_13;
          }
          sub_1587800(v39, v40, v34, v223, v36, v37);
          v224 = *(_DWORD *)(v39 + 16);
          if ( v224 )
          {
            v225 = v224 - 1;
            v226 = 1;
            v227 = nullptr;
            for ( k = v225 & v41; ; k = v225 & v237 )
            {
              v222 = (__int64 *)(*(_QWORD *)v39 + 32LL * k);
              v229 = *v222;
              if ( v38 == *v222 )
                break;
              if ( v229 == -4096 )
                goto LABEL_226;
              if ( v227 || v229 != -8192 )
                v222 = v227;
              v237 = v226 + k;
              v227 = v222;
              ++v226;
            }
LABEL_221:
            LODWORD(v34) = *(_DWORD *)(v39 + 8) + 1;
            goto LABEL_215;
          }
        }
        else
        {
LABEL_222:
          sub_1587800(v39, 2 * v40, v34, v35, v36, v37);
          v230 = *(_DWORD *)(v39 + 16);
          if ( v230 )
          {
            v231 = v230 - 1;
            v232 = 1;
            v227 = nullptr;
            for ( m = v231 & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4)); ; m = v231 & v236 )
            {
              v222 = (__int64 *)(*(_QWORD *)v39 + 32LL * m);
              v234 = *v222;
              if ( v38 == *v222 )
                break;
              if ( v234 == -4096 )
              {
LABEL_226:
                if ( v227 )
                  v222 = v227;
                LODWORD(v34) = *(_DWORD *)(v39 + 8) + 1;
                goto LABEL_215;
              }
              if ( v227 || v234 != -8192 )
                v222 = v227;
              v236 = v232 + m;
              v227 = v222;
              ++v232;
            }
            goto LABEL_221;
          }
        }
        ++*(_DWORD *)(v39 + 8);
        BUG();
      }
      v29 = v256;
      sub_1C6B330(&v269, (int *)v256);
      v102 = v274;
    }
    v103 = sub_EEC8C0(
             *(_QWORD *)(v5 + 8 * (((*(_BYTE *)(v5 + 2) & 8) != 0) + 1LL) + 40),
             (__int64)v29,
             *(double *)a3.m128_u64);
    v31 = v103;
    v104 = HIDWORD(v103);
    LODWORD(v32) = HIDWORD(v103);
    if ( v102 )
    {
      v105 = v272;
      if ( v272 )
      {
        v106 = *((unsigned int *)v272 + 106);
        v107 = *((unsigned int *)v272 + 107);
        v108 = v106 + 1;
      }
      else
      {
        v157 = v273;
        v158 = *(_DWORD *)(v273 + 14976);
        if ( v158 )
        {
          v200 = (unsigned int)(v158 - 1);
          *(_DWORD *)(v273 + 14976) = v200;
          v105 = *(unsigned __int8 **)(v157 + 8 * v200 + 14848);
          v201 = *((unsigned int *)v105 + 134);
          *v105 = 0;
          v202 = *((_QWORD *)v105 + 66);
          *((_DWORD *)v105 + 106) = 0;
          v203 = v202 + (v201 << 6);
          while ( v202 != v203 )
          {
            while ( 1 )
            {
              v203 -= 64;
              v204 = *(void **)(v203 + 24);
              if ( v204 == (void *)(v203 + 40) )
                break;
              operator delete(v204);
              if ( v202 == v203 )
                goto LABEL_194;
            }
          }
LABEL_194:
          v106 = *((unsigned int *)v105 + 106);
          v107 = *((unsigned int *)v105 + 107);
          *((_DWORD *)v105 + 134) = 0;
          v108 = v106 + 1;
        }
        else
        {
          v159 = (unsigned __int8 *)operator new(0x3A0u);
          v107 = 8;
          v108 = 1;
          v105 = v159;
          *v159 = 0;
          *((_QWORD *)v159 + 12) = v159 + 112;
          *((_QWORD *)v159 + 16) = v159 + 144;
          *((_QWORD *)v159 + 20) = v159 + 176;
          *((_QWORD *)v159 + 24) = v159 + 208;
          *((_QWORD *)v159 + 28) = v159 + 240;
          *((_QWORD *)v159 + 32) = v159 + 272;
          *((_QWORD *)v159 + 36) = v159 + 304;
          *((_QWORD *)v159 + 40) = v159 + 336;
          *((_QWORD *)v159 + 44) = v159 + 368;
          *((_QWORD *)v159 + 48) = v159 + 400;
          *((_QWORD *)v159 + 52) = v159 + 432;
          *((_QWORD *)v159 + 13) = 0;
          v159[112] = 0;
          *((_QWORD *)v159 + 17) = 0;
          v159[144] = 0;
          *((_QWORD *)v159 + 21) = 0;
          v159[176] = 0;
          *((_QWORD *)v159 + 25) = 0;
          v159[208] = 0;
          *((_QWORD *)v159 + 29) = 0;
          v159[240] = 0;
          *((_QWORD *)v159 + 33) = 0;
          v159[272] = 0;
          *((_QWORD *)v159 + 37) = 0;
          v159[304] = 0;
          *((_QWORD *)v159 + 41) = 0;
          v159[336] = 0;
          *((_QWORD *)v159 + 45) = 0;
          v159[368] = 0;
          *((_QWORD *)v159 + 49) = 0;
          v159[400] = 0;
          *((_QWORD *)v159 + 53) = 0x800000000LL;
          *((_QWORD *)v159 + 66) = v159 + 544;
          *((_QWORD *)v159 + 67) = 0x600000000LL;
          v106 = 0;
        }
        v272 = v105;
      }
      v261 = __PAIR64__(v104, v31);
      LOBYTE(v262) = 1;
      if ( v108 > v107 )
      {
        sub_2237220(v105 + 416, v105 + 432, v108, 12);
        v106 = *((unsigned int *)v105 + 106);
      }
      v109 = *((_QWORD *)v105 + 52) + 12 * v106;
      *(_QWORD *)v109 = v261;
      *(_DWORD *)(v109 + 8) = v262;
      ++*((_DWORD *)v105 + 106);
      goto LABEL_13;
    }
    goto LABEL_19;
  }
  v76 = 0;
  v77 = sub_F68450(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + v27 + 32) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
          v23,
          v59,
          v60,
          v61);
  v79 = *(_QWORD *)&byte_8[v77 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v79 & 8) != 0 )
    v76 = *(__int64 *)((char *)&qword_18 + (v79 & 0xFFFFFFFFFFFFFFF0LL));
  v80 = ((unsigned __int8)v77 | (unsigned __int8)v79) & 7 | v76;
  if ( v243 == 5 )
  {
    v81 = (-(__int64)((*(_BYTE *)(a1[29] + 96) & 0x30) == 0) & 0xFFFFFFFFFFFFEC00LL) + 5632;
  }
  else if ( v243 == 7 )
  {
    v81 = (-(__int64)((*(_BYTE *)(a1[29] + 96) & 0x30) == 0) & 0xFFFFFFFFFFFFEA00LL) + 7680;
  }
  else
  {
    v81 = 0;
    if ( v243 == 4 )
      v81 = (-(__int64)((*(_BYTE *)(a1[29] + 96) & 0x30) == 0) & 0xFFFFFFFFFFFFE800LL) + 7168;
  }
  v82 = *(_QWORD *)(v77 & 0xFFFFFFFFFFFFFFF0LL);
  v83 = a1[31];
  v84 = v81 | v80 & 0xFFFFFFFF000001FFLL;
  v85 = *(_QWORD *)(v82 + 8) & 7LL;
  if ( v85 | (*(__int64 *)(v82 + 8) >> 3) & 1 )
    v86 = sub_F64F00(v77, v82, v85, v85 | (*(__int64 *)(v82 + 8) >> 3) & 1, v78) & 0xFFFFFFFFFFFFFFF0LL;
  else
    v86 = v82 & 0xFFFFFFFFFFFFFFF0LL;
  v87 = sub_A70C40(v83, v86, v84);
  *(_QWORD *)(v5 + 8) = sub_A70010(v83, v87);
  return v239;
}
