void __fastcall sub_1E98690(__int64 *a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  const void *v16; // r15
  __int64 v17; // r14
  __m128i *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbp
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  unsigned __int8 *v36; // rbp
  __int64 v37; // r14
  _BYTE *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r12
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // r13
  unsigned __int8 *v48; // r12
  _BYTE *v49; // rdx
  __int64 v50; // rax
  unsigned __int8 *v51; // rbp
  unsigned __int8 *v52; // rdx
  __int64 v53; // rax
  unsigned __int8 *v54; // r12
  unsigned __int8 *v55; // rdx
  __int64 v56; // rax
  unsigned __int8 *v57; // rbp
  unsigned __int8 *v58; // rdx
  __int64 v59; // rax
  _BOOL8 v60; // r13
  unsigned __int8 *v61; // rbp
  unsigned __int8 *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // r12
  __int64 v68; // r13
  __int64 v69; // r12
  void *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 *v73; // r8
  __int64 v74; // r9
  __int64 v75; // r14
  __int64 v76; // r15
  unsigned int v77; // ebp
  unsigned __int64 v78; // rsi
  unsigned int v79; // ecx
  __int64 *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // r12
  unsigned __int8 *v84; // rbp
  _BYTE *v85; // rdx
  __int64 v86; // rax
  unsigned __int64 v87; // rax
  __int64 v88; // rax
  _QWORD *v89; // rax
  _QWORD *k; // rdx
  __int64 *v91; // r13
  __int64 v92; // rcx
  int v93; // eax
  int v94; // esi
  unsigned int v95; // edx
  _QWORD *v96; // rax
  __int64 v97; // r8
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rdx
  _QWORD *v103; // rdi
  _QWORD *v104; // r14
  _QWORD *v105; // rbp
  unsigned __int64 v106; // rbx
  unsigned __int64 v107; // rax
  _QWORD *v108; // r15
  _QWORD *v109; // r12
  _QWORD *v110; // rdi
  void *v111; // rdi
  void **v112; // r15
  void **v113; // r12
  int v114; // eax
  int v115; // r10d
  unsigned int v116; // esi
  __int64 v117; // rdx
  __int64 v118; // rdx
  int v119; // eax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rbp
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rax
  _QWORD *v126; // rax
  __int64 v127; // rdx
  int v128; // eax
  __int64 v129; // rax
  __int64 v130; // r13
  __int64 v131; // r14
  __int64 v132; // r13
  void *v133; // rdi
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // r12
  __int64 v139; // rax
  _BOOL8 v140; // rbp
  _QWORD *v141; // rax
  __int64 v142; // rdx
  unsigned __int8 *v143; // r12
  __int64 v144; // r14
  _BYTE *v145; // rdx
  __int64 v146; // rax
  __int64 v147; // rdx
  int v148; // eax
  __int64 v149; // rdx
  int v150; // eax
  __int64 v151; // rax
  __int64 v152; // r12
  __int64 v153; // r13
  __int64 v154; // r12
  void *v155; // rdi
  __int64 v156; // rdx
  __int64 v157; // rdx
  int v158; // eax
  __int64 v159; // rdx
  int v160; // eax
  __int64 v161; // rdx
  int v162; // eax
  __int64 v163; // rax
  __int64 v164; // r13
  __int64 v165; // r14
  __int64 v166; // r13
  void *v167; // rdi
  __int64 v168; // rax
  __int64 v169; // r13
  __int64 v170; // r14
  __int64 v171; // r13
  void *v172; // rdi
  __int64 v173; // rdx
  int v174; // eax
  __int64 v175; // rdx
  int v176; // eax
  __int64 v177; // rax
  __int64 v178; // r12
  __int64 v179; // r14
  __int64 v180; // r12
  void *v181; // rdi
  __int64 v182; // rax
  __int64 v183; // r12
  __int64 v184; // r14
  __int64 v185; // r12
  void *v186; // rdi
  __int64 v187; // rax
  __int64 v188; // r14
  __int64 v189; // r15
  __int64 v190; // r14
  void *v191; // rdi
  int v192; // edi
  __int64 v193; // rax
  __int64 v194; // r13
  __int64 v195; // r15
  __int64 v196; // r13
  void *v197; // rdi
  __int64 v198; // rax
  __int64 v199; // r12
  __int64 v200; // r15
  __int64 v201; // r12
  void *v202; // rdi
  unsigned __int64 v203; // rax
  unsigned __int64 v204; // rax
  __int64 v205; // rax
  _QWORD *v206; // rax
  _QWORD *i; // rdx
  __int64 *v208; // r13
  __int64 v209; // rcx
  int v210; // eax
  int v211; // esi
  unsigned int v212; // edx
  _QWORD *v213; // rax
  __int64 v214; // r8
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // rdx
  _QWORD *v220; // rdi
  _QWORD *v221; // r14
  _QWORD *v222; // rbp
  unsigned __int64 v223; // r12
  unsigned __int64 v224; // rax
  _QWORD *v225; // r15
  _QWORD *v226; // rbx
  _QWORD *v227; // rdi
  void *v228; // rdi
  void **v229; // rbx
  void **v230; // r15
  int v231; // eax
  int v232; // r8d
  unsigned int v233; // r10d
  int v234; // edi
  __int64 *v235; // rsi
  __int64 v236; // rdx
  __int64 v237; // rdx
  _QWORD *m; // rdx
  __int64 v239; // rdx
  _QWORD *j; // rdx
  int v241; // r10d
  _QWORD *v242; // r9
  int v243; // r10d
  _QWORD *v244; // r9
  int v245; // r8d
  __int64 *v246; // rdi
  __int64 *v247; // [rsp+8h] [rbp-110h]
  unsigned int v248; // [rsp+10h] [rbp-108h]
  __int64 *v249; // [rsp+10h] [rbp-108h]
  __int64 v250; // [rsp+18h] [rbp-100h]
  __int64 v251; // [rsp+20h] [rbp-F8h]
  __int64 v252; // [rsp+20h] [rbp-F8h]
  __int64 v253; // [rsp+28h] [rbp-F0h]
  __int64 v254; // [rsp+28h] [rbp-F0h]
  __int64 v255; // [rsp+30h] [rbp-E8h]
  __int64 v256; // [rsp+48h] [rbp-D0h] BYREF
  const void *v257; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v258; // [rsp+58h] [rbp-C0h]
  __int64 v259; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v260; // [rsp+70h] [rbp-A8h]
  __int64 v261; // [rsp+78h] [rbp-A0h]
  char v262; // [rsp+C8h] [rbp-50h]
  unsigned int v263; // [rsp+D0h] [rbp-48h]
  char v264; // [rsp+D4h] [rbp-44h]

  v6 = (_QWORD *)sub_168B6C0((__int64)a1);
  if ( !sub_B8DC30(a2, 1) && (*(_BYTE *)(a2 + 28) & 0x7F) != 0x12 )
  {
    sub_168B9F0((__int64)&v257, a1, *(_DWORD *)(a2 + 24), 0x19C6u, 0);
    if ( v262 )
    {
      v57 = v260;
      if ( !v260 )
      {
        v159 = v261;
        v160 = *(_DWORD *)(v261 + 14976);
        if ( v160 )
        {
          v177 = (unsigned int)(v160 - 1);
          *(_DWORD *)(v261 + 14976) = v177;
          v57 = *(unsigned __int8 **)(v159 + 8 * v177 + 14848);
          v178 = *((unsigned int *)v57 + 134);
          *v57 = 0;
          v179 = *((_QWORD *)v57 + 66);
          *((_DWORD *)v57 + 106) = 0;
          v180 = v179 + (v178 << 6);
          while ( v179 != v180 )
          {
            while ( 1 )
            {
              v180 -= 64;
              v181 = *(void **)(v180 + 24);
              if ( v181 == (void *)(v180 + 40) )
                break;
              operator delete(v181);
              if ( v179 == v180 )
                goto LABEL_163;
            }
          }
LABEL_163:
          *((_DWORD *)v57 + 134) = 0;
        }
        else
        {
          v57 = (unsigned __int8 *)operator new(0x3A0u);
          *v57 = 0;
          *((_QWORD *)v57 + 12) = v57 + 112;
          *((_QWORD *)v57 + 16) = v57 + 144;
          *((_QWORD *)v57 + 20) = v57 + 176;
          *((_QWORD *)v57 + 24) = v57 + 208;
          *((_QWORD *)v57 + 28) = v57 + 240;
          *((_QWORD *)v57 + 32) = v57 + 272;
          *((_QWORD *)v57 + 36) = v57 + 304;
          *((_QWORD *)v57 + 40) = v57 + 336;
          *((_QWORD *)v57 + 44) = v57 + 368;
          *((_QWORD *)v57 + 48) = v57 + 400;
          *((_QWORD *)v57 + 52) = v57 + 432;
          *((_QWORD *)v57 + 13) = 0;
          v57[112] = 0;
          *((_QWORD *)v57 + 17) = 0;
          v57[144] = 0;
          *((_QWORD *)v57 + 21) = 0;
          v57[176] = 0;
          *((_QWORD *)v57 + 25) = 0;
          v57[208] = 0;
          *((_QWORD *)v57 + 29) = 0;
          v57[240] = 0;
          *((_QWORD *)v57 + 33) = 0;
          v57[272] = 0;
          *((_QWORD *)v57 + 37) = 0;
          v57[304] = 0;
          *((_QWORD *)v57 + 41) = 0;
          v57[336] = 0;
          *((_QWORD *)v57 + 45) = 0;
          v57[368] = 0;
          *((_QWORD *)v57 + 49) = 0;
          v57[400] = 0;
          *((_QWORD *)v57 + 53) = 0x800000000LL;
          *((_QWORD *)v57 + 66) = v57 + 544;
          *((_QWORD *)v57 + 67) = 0x600000000LL;
        }
        v260 = v57;
      }
      v57[*v57 + 1] = 16;
      v58 = v260;
      v59 = *v260;
      *v260 = v59 + 1;
      *(_QWORD *)&v58[8 * v59 + 16] = a3;
LABEL_39:
      v60 = (a3[2].m128i_i8[3] & 2) != 0;
      if ( v262 )
      {
        v61 = v260;
        if ( !v260 )
        {
          v157 = v261;
          v158 = *(_DWORD *)(v261 + 14976);
          if ( v158 )
          {
            v182 = (unsigned int)(v158 - 1);
            *(_DWORD *)(v261 + 14976) = v182;
            v61 = *(unsigned __int8 **)(v157 + 8 * v182 + 14848);
            v183 = *((unsigned int *)v61 + 134);
            *v61 = 0;
            v184 = *((_QWORD *)v61 + 66);
            *((_DWORD *)v61 + 106) = 0;
            v185 = v184 + (v183 << 6);
            while ( v184 != v185 )
            {
              while ( 1 )
              {
                v185 -= 64;
                v186 = *(void **)(v185 + 24);
                if ( v186 == (void *)(v185 + 40) )
                  break;
                operator delete(v186);
                if ( v184 == v185 )
                  goto LABEL_168;
              }
            }
LABEL_168:
            *((_DWORD *)v61 + 134) = 0;
          }
          else
          {
            v61 = (unsigned __int8 *)operator new(0x3A0u);
            *v61 = 0;
            *((_QWORD *)v61 + 12) = v61 + 112;
            *((_QWORD *)v61 + 16) = v61 + 144;
            *((_QWORD *)v61 + 20) = v61 + 176;
            *((_QWORD *)v61 + 24) = v61 + 208;
            *((_QWORD *)v61 + 28) = v61 + 240;
            *((_QWORD *)v61 + 32) = v61 + 272;
            *((_QWORD *)v61 + 36) = v61 + 304;
            *((_QWORD *)v61 + 40) = v61 + 336;
            *((_QWORD *)v61 + 44) = v61 + 368;
            *((_QWORD *)v61 + 48) = v61 + 400;
            *((_QWORD *)v61 + 52) = v61 + 432;
            *((_QWORD *)v61 + 13) = 0;
            v61[112] = 0;
            *((_QWORD *)v61 + 17) = 0;
            v61[144] = 0;
            *((_QWORD *)v61 + 21) = 0;
            v61[176] = 0;
            *((_QWORD *)v61 + 25) = 0;
            v61[208] = 0;
            *((_QWORD *)v61 + 29) = 0;
            v61[240] = 0;
            *((_QWORD *)v61 + 33) = 0;
            v61[272] = 0;
            *((_QWORD *)v61 + 37) = 0;
            v61[304] = 0;
            *((_QWORD *)v61 + 41) = 0;
            v61[336] = 0;
            *((_QWORD *)v61 + 45) = 0;
            v61[368] = 0;
            *((_QWORD *)v61 + 49) = 0;
            v61[400] = 0;
            *((_QWORD *)v61 + 53) = 0x800000000LL;
            *((_QWORD *)v61 + 66) = v61 + 544;
            *((_QWORD *)v61 + 67) = 0x600000000LL;
          }
          v260 = v61;
        }
        v61[*v61 + 1] = 2;
        v62 = v260;
        v63 = *v260;
        *v260 = v63 + 1;
        *(_QWORD *)&v62[8 * v63 + 16] = v60;
      }
      else
      {
        if ( !v264 )
          goto LABEL_6;
        v138 = sub_168B9E0(&v257);
        v139 = v259;
        if ( v259 )
          v139 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v259 + 32LL))(v259);
        v256 = v139;
        v140 = v60;
        v141 = sub_1587BC0(v138, &v256, v134, v135, v136, v137);
        v142 = *v141 + 32LL * v263;
        v143 = *(unsigned __int8 **)(v142 + 8);
        v144 = v142;
        if ( !v143 )
        {
          v175 = *(_QWORD *)(v142 + 16);
          v176 = *(_DWORD *)(v175 + 14976);
          if ( v176 )
          {
            v193 = (unsigned int)(v176 - 1);
            *(_DWORD *)(v175 + 14976) = v193;
            v143 = *(unsigned __int8 **)(v175 + 8 * v193 + 14848);
            v194 = *((unsigned int *)v143 + 134);
            v195 = *((_QWORD *)v143 + 66);
            *v143 = 0;
            *((_DWORD *)v143 + 106) = 0;
            v196 = v195 + (v194 << 6);
            while ( v195 != v196 )
            {
              while ( 1 )
              {
                v196 -= 64;
                v197 = *(void **)(v196 + 24);
                if ( v197 == (void *)(v196 + 40) )
                  break;
                operator delete(v197);
                if ( v195 == v196 )
                  goto LABEL_182;
              }
            }
LABEL_182:
            *((_DWORD *)v143 + 134) = 0;
          }
          else
          {
            v143 = (unsigned __int8 *)operator new(0x3A0u);
            *v143 = 0;
            *((_QWORD *)v143 + 12) = v143 + 112;
            *((_QWORD *)v143 + 16) = v143 + 144;
            *((_QWORD *)v143 + 20) = v143 + 176;
            *((_QWORD *)v143 + 24) = v143 + 208;
            *((_QWORD *)v143 + 28) = v143 + 240;
            *((_QWORD *)v143 + 32) = v143 + 272;
            *((_QWORD *)v143 + 36) = v143 + 304;
            *((_QWORD *)v143 + 40) = v143 + 336;
            *((_QWORD *)v143 + 44) = v143 + 368;
            *((_QWORD *)v143 + 48) = v143 + 400;
            *((_QWORD *)v143 + 52) = v143 + 432;
            *((_QWORD *)v143 + 13) = 0;
            v143[112] = 0;
            *((_QWORD *)v143 + 17) = 0;
            v143[144] = 0;
            *((_QWORD *)v143 + 21) = 0;
            v143[176] = 0;
            *((_QWORD *)v143 + 25) = 0;
            v143[208] = 0;
            *((_QWORD *)v143 + 29) = 0;
            v143[240] = 0;
            *((_QWORD *)v143 + 33) = 0;
            v143[272] = 0;
            *((_QWORD *)v143 + 37) = 0;
            v143[304] = 0;
            *((_QWORD *)v143 + 41) = 0;
            v143[336] = 0;
            *((_QWORD *)v143 + 45) = 0;
            v143[368] = 0;
            *((_QWORD *)v143 + 49) = 0;
            v143[400] = 0;
            *((_QWORD *)v143 + 53) = 0x800000000LL;
            *((_QWORD *)v143 + 66) = v143 + 544;
            *((_QWORD *)v143 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v144 + 8) = v143;
        }
        v143[*v143 + 1] = 2;
        v145 = *(_BYTE **)(v144 + 8);
        v146 = (unsigned __int8)*v145;
        *v145 = v146 + 1;
        *(_QWORD *)&v145[8 * v146 + 16] = v140;
      }
      if ( v262 )
      {
        v51 = v260;
        if ( !v260 )
        {
          v64 = v261;
          v65 = *(_DWORD *)(v261 + 14976);
          if ( v65 )
          {
            v66 = (unsigned int)(v65 - 1);
            *(_DWORD *)(v261 + 14976) = v66;
            v51 = *(unsigned __int8 **)(v64 + 8 * v66 + 14848);
            v67 = *((unsigned int *)v51 + 134);
            *v51 = 0;
            v68 = *((_QWORD *)v51 + 66);
            *((_DWORD *)v51 + 106) = 0;
            v69 = v68 + (v67 << 6);
            while ( v68 != v69 )
            {
              while ( 1 )
              {
                v69 -= 64;
                v70 = *(void **)(v69 + 24);
                if ( v70 == (void *)(v69 + 40) )
                  break;
                operator delete(v70);
                if ( v68 == v69 )
                  goto LABEL_49;
              }
            }
LABEL_49:
            *((_DWORD *)v51 + 134) = 0;
LABEL_50:
            v260 = v51;
            goto LABEL_34;
          }
          goto LABEL_134;
        }
        goto LABEL_34;
      }
      if ( !v264 )
        goto LABEL_6;
      v122 = sub_168B9E0(&v257);
      v125 = v259;
      if ( v259 )
        v125 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v259 + 32LL))(v259);
      v256 = v125;
      v126 = sub_1587BC0(v122, &v256, v120, v121, v123, v124);
      v83 = *v126 + 32LL * v263;
      v84 = *(unsigned __int8 **)(v83 + 8);
      if ( !v84 )
      {
        v127 = *(_QWORD *)(v83 + 16);
        v128 = *(_DWORD *)(v127 + 14976);
        if ( v128 )
        {
          v129 = (unsigned int)(v128 - 1);
          *(_DWORD *)(v127 + 14976) = v129;
          v84 = *(unsigned __int8 **)(v127 + 8 * v129 + 14848);
          v130 = *((unsigned int *)v84 + 134);
          *v84 = 0;
          v131 = *((_QWORD *)v84 + 66);
          *((_DWORD *)v84 + 106) = 0;
          v132 = v131 + (v130 << 6);
          while ( v131 != v132 )
          {
            while ( 1 )
            {
              v132 -= 64;
              v133 = *(void **)(v132 + 24);
              if ( v133 == (void *)(v132 + 40) )
                break;
              operator delete(v133);
              if ( v131 == v132 )
                goto LABEL_116;
            }
          }
LABEL_116:
          *((_DWORD *)v84 + 134) = 0;
LABEL_117:
          *(_QWORD *)(v83 + 8) = v84;
          goto LABEL_58;
        }
        goto LABEL_147;
      }
      goto LABEL_58;
    }
    if ( v264 )
    {
      v30 = sub_168B9E0(&v257);
      v33 = v259;
      if ( v259 )
        v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v259 + 32LL))(v259);
      v256 = v33;
      v34 = sub_1587BC0(v30, &v256, v28, v29, v31, v32);
      v35 = *v34 + 32LL * v263;
      v36 = *(unsigned __int8 **)(v35 + 8);
      v37 = v35;
      if ( !v36 )
      {
        v173 = *(_QWORD *)(v35 + 16);
        v174 = *(_DWORD *)(v173 + 14976);
        if ( v174 )
        {
          v198 = (unsigned int)(v174 - 1);
          *(_DWORD *)(v173 + 14976) = v198;
          v36 = *(unsigned __int8 **)(v173 + 8 * v198 + 14848);
          v199 = *((unsigned int *)v36 + 134);
          *v36 = 0;
          v200 = *((_QWORD *)v36 + 66);
          *((_DWORD *)v36 + 106) = 0;
          v201 = v200 + (v199 << 6);
          while ( v200 != v201 )
          {
            while ( 1 )
            {
              v201 -= 64;
              v202 = *(void **)(v201 + 24);
              if ( v202 == (void *)(v201 + 40) )
                break;
              operator delete(v202);
              if ( v200 == v201 )
                goto LABEL_187;
            }
          }
LABEL_187:
          *((_DWORD *)v36 + 134) = 0;
        }
        else
        {
          v36 = (unsigned __int8 *)operator new(0x3A0u);
          *v36 = 0;
          *((_QWORD *)v36 + 12) = v36 + 112;
          *((_QWORD *)v36 + 16) = v36 + 144;
          *((_QWORD *)v36 + 20) = v36 + 176;
          *((_QWORD *)v36 + 24) = v36 + 208;
          *((_QWORD *)v36 + 28) = v36 + 240;
          *((_QWORD *)v36 + 32) = v36 + 272;
          *((_QWORD *)v36 + 36) = v36 + 304;
          *((_QWORD *)v36 + 40) = v36 + 336;
          *((_QWORD *)v36 + 44) = v36 + 368;
          *((_QWORD *)v36 + 48) = v36 + 400;
          *((_QWORD *)v36 + 52) = v36 + 432;
          *((_QWORD *)v36 + 13) = 0;
          v36[112] = 0;
          *((_QWORD *)v36 + 17) = 0;
          v36[144] = 0;
          *((_QWORD *)v36 + 21) = 0;
          v36[176] = 0;
          *((_QWORD *)v36 + 25) = 0;
          v36[208] = 0;
          *((_QWORD *)v36 + 29) = 0;
          v36[240] = 0;
          *((_QWORD *)v36 + 33) = 0;
          v36[272] = 0;
          *((_QWORD *)v36 + 37) = 0;
          v36[304] = 0;
          *((_QWORD *)v36 + 41) = 0;
          v36[336] = 0;
          *((_QWORD *)v36 + 45) = 0;
          v36[368] = 0;
          *((_QWORD *)v36 + 49) = 0;
          v36[400] = 0;
          *((_QWORD *)v36 + 53) = 0x800000000LL;
          *((_QWORD *)v36 + 66) = v36 + 544;
          *((_QWORD *)v36 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v37 + 8) = v36;
      }
      v36[*v36 + 1] = 16;
      v38 = *(_BYTE **)(v37 + 8);
      v39 = (unsigned __int8)*v38;
      *v38 = v39 + 1;
      *(_QWORD *)&v38[8 * v39 + 16] = a3;
      goto LABEL_39;
    }
LABEL_6:
    sub_15F7200(&v257);
    return;
  }
  v10 = *(_QWORD *)(a2 + 80);
  if ( (*(_BYTE *)(a2 + 82) & 0x40) != 0 && (v10 & 0x2000000) == 0
    || (v10 & 0x2000000) != 0
    || (*(_BYTE *)(a2 + 83) & 8) == 0 && ((*(_BYTE *)(a2 + 128) & 1) != 0 || *(_QWORD *)(a2 + 128))
    || (*(_BYTE *)(a2 + 83) & 0x40) != 0
    || (v11 = HIDWORD(v10), (v11 & 0x20) != 0)
    || (v11 & 0x40) != 0
    || sub_B8CF80(a2, 1, *(_BYTE *)(a2 + 83) & 0x40, v7, v8, v9) )
  {
    sub_168B9F0((__int64)&v257, a1, *(_DWORD *)(a2 + 24), 0xB98u, 0);
    if ( v262 )
    {
      v54 = v260;
      if ( !v260 )
      {
        v147 = v261;
        v148 = *(_DWORD *)(v261 + 14976);
        if ( v148 )
        {
          v168 = (unsigned int)(v148 - 1);
          *(_DWORD *)(v261 + 14976) = v168;
          v54 = *(unsigned __int8 **)(v147 + 8 * v168 + 14848);
          v169 = *((unsigned int *)v54 + 134);
          v170 = *((_QWORD *)v54 + 66);
          *v54 = 0;
          *((_DWORD *)v54 + 106) = 0;
          v171 = v170 + (v169 << 6);
          while ( v170 != v171 )
          {
            while ( 1 )
            {
              v171 -= 64;
              v172 = *(void **)(v171 + 24);
              if ( v172 == (void *)(v171 + 40) )
                break;
              operator delete(v172);
              if ( v170 == v171 )
                goto LABEL_152;
            }
          }
LABEL_152:
          *((_DWORD *)v54 + 134) = 0;
        }
        else
        {
          v54 = (unsigned __int8 *)operator new(0x3A0u);
          *v54 = 0;
          *((_QWORD *)v54 + 12) = v54 + 112;
          *((_QWORD *)v54 + 16) = v54 + 144;
          *((_QWORD *)v54 + 20) = v54 + 176;
          *((_QWORD *)v54 + 24) = v54 + 208;
          *((_QWORD *)v54 + 28) = v54 + 240;
          *((_QWORD *)v54 + 32) = v54 + 272;
          *((_QWORD *)v54 + 36) = v54 + 304;
          *((_QWORD *)v54 + 40) = v54 + 336;
          *((_QWORD *)v54 + 44) = v54 + 368;
          *((_QWORD *)v54 + 48) = v54 + 400;
          *((_QWORD *)v54 + 52) = v54 + 432;
          *((_QWORD *)v54 + 13) = 0;
          v54[112] = 0;
          *((_QWORD *)v54 + 17) = 0;
          v54[144] = 0;
          *((_QWORD *)v54 + 21) = 0;
          v54[176] = 0;
          *((_QWORD *)v54 + 25) = 0;
          v54[208] = 0;
          *((_QWORD *)v54 + 29) = 0;
          v54[240] = 0;
          *((_QWORD *)v54 + 33) = 0;
          v54[272] = 0;
          *((_QWORD *)v54 + 37) = 0;
          v54[304] = 0;
          *((_QWORD *)v54 + 41) = 0;
          v54[336] = 0;
          *((_QWORD *)v54 + 45) = 0;
          v54[368] = 0;
          *((_QWORD *)v54 + 49) = 0;
          v54[400] = 0;
          *((_QWORD *)v54 + 53) = 0x800000000LL;
          *((_QWORD *)v54 + 66) = v54 + 544;
          *((_QWORD *)v54 + 67) = 0x600000000LL;
        }
        v260 = v54;
      }
      v54[*v54 + 1] = 10;
      v55 = v260;
      v56 = *v260;
      *v260 = v56 + 1;
      *(_QWORD *)&v55[8 * v56 + 16] = a2;
    }
    else
    {
      if ( !v264 )
        goto LABEL_6;
      v44 = sub_168B9E0(&v257);
      v45 = v259;
      if ( v259 )
        v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v259 + 32LL))(v259);
      v256 = v45;
      v46 = sub_1587BC0(v44, &v256, v40, v41, v42, v43);
      v47 = *v46 + 32LL * v263;
      v48 = *(unsigned __int8 **)(v47 + 8);
      if ( !v48 )
      {
        v118 = *(_QWORD *)(v47 + 16);
        v119 = *(_DWORD *)(v118 + 14976);
        if ( v119 )
        {
          v187 = (unsigned int)(v119 - 1);
          *(_DWORD *)(v118 + 14976) = v187;
          v48 = *(unsigned __int8 **)(v118 + 8 * v187 + 14848);
          v188 = *((unsigned int *)v48 + 134);
          v189 = *((_QWORD *)v48 + 66);
          *v48 = 0;
          *((_DWORD *)v48 + 106) = 0;
          v190 = v189 + (v188 << 6);
          while ( v189 != v190 )
          {
            while ( 1 )
            {
              v190 -= 64;
              v191 = *(void **)(v190 + 24);
              if ( v191 == (void *)(v190 + 40) )
                break;
              operator delete(v191);
              if ( v189 == v190 )
                goto LABEL_173;
            }
          }
LABEL_173:
          *((_DWORD *)v48 + 134) = 0;
        }
        else
        {
          v48 = (unsigned __int8 *)operator new(0x3A0u);
          *v48 = 0;
          *((_QWORD *)v48 + 12) = v48 + 112;
          *((_QWORD *)v48 + 16) = v48 + 144;
          *((_QWORD *)v48 + 20) = v48 + 176;
          *((_QWORD *)v48 + 24) = v48 + 208;
          *((_QWORD *)v48 + 28) = v48 + 240;
          *((_QWORD *)v48 + 32) = v48 + 272;
          *((_QWORD *)v48 + 36) = v48 + 304;
          *((_QWORD *)v48 + 40) = v48 + 336;
          *((_QWORD *)v48 + 44) = v48 + 368;
          *((_QWORD *)v48 + 48) = v48 + 400;
          *((_QWORD *)v48 + 52) = v48 + 432;
          *((_QWORD *)v48 + 13) = 0;
          v48[112] = 0;
          *((_QWORD *)v48 + 17) = 0;
          v48[144] = 0;
          *((_QWORD *)v48 + 21) = 0;
          v48[176] = 0;
          *((_QWORD *)v48 + 25) = 0;
          v48[208] = 0;
          *((_QWORD *)v48 + 29) = 0;
          v48[240] = 0;
          *((_QWORD *)v48 + 33) = 0;
          v48[272] = 0;
          *((_QWORD *)v48 + 37) = 0;
          v48[304] = 0;
          *((_QWORD *)v48 + 41) = 0;
          v48[336] = 0;
          *((_QWORD *)v48 + 45) = 0;
          v48[368] = 0;
          *((_QWORD *)v48 + 49) = 0;
          v48[400] = 0;
          *((_QWORD *)v48 + 53) = 0x800000000LL;
          *((_QWORD *)v48 + 66) = v48 + 544;
          *((_QWORD *)v48 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v47 + 8) = v48;
      }
      v48[*v48 + 1] = 10;
      v49 = *(_BYTE **)(v47 + 8);
      v50 = (unsigned __int8)*v49;
      *v49 = v50 + 1;
      *(_QWORD *)&v49[8 * v50 + 16] = a2;
    }
    if ( v262 )
    {
      v51 = v260;
      if ( !v260 )
      {
        v149 = v261;
        v150 = *(_DWORD *)(v261 + 14976);
        if ( v150 )
        {
          v151 = (unsigned int)(v150 - 1);
          *(_DWORD *)(v261 + 14976) = v151;
          v51 = *(unsigned __int8 **)(v149 + 8 * v151 + 14848);
          v152 = *((unsigned int *)v51 + 134);
          *v51 = 0;
          v153 = *((_QWORD *)v51 + 66);
          *((_DWORD *)v51 + 106) = 0;
          v154 = v153 + (v152 << 6);
          while ( v153 != v154 )
          {
            while ( 1 )
            {
              v154 -= 64;
              v155 = *(void **)(v154 + 24);
              if ( v155 == (void *)(v154 + 40) )
                break;
              operator delete(v155);
              if ( v153 == v154 )
                goto LABEL_49;
            }
          }
          goto LABEL_49;
        }
LABEL_134:
        v51 = (unsigned __int8 *)operator new(0x3A0u);
        *v51 = 0;
        *((_QWORD *)v51 + 12) = v51 + 112;
        *((_QWORD *)v51 + 16) = v51 + 144;
        *((_QWORD *)v51 + 20) = v51 + 176;
        *((_QWORD *)v51 + 24) = v51 + 208;
        *((_QWORD *)v51 + 28) = v51 + 240;
        *((_QWORD *)v51 + 32) = v51 + 272;
        *((_QWORD *)v51 + 36) = v51 + 304;
        *((_QWORD *)v51 + 40) = v51 + 336;
        *((_QWORD *)v51 + 44) = v51 + 368;
        *((_QWORD *)v51 + 48) = v51 + 400;
        *((_QWORD *)v51 + 52) = v51 + 432;
        *((_QWORD *)v51 + 13) = 0;
        v51[112] = 0;
        *((_QWORD *)v51 + 17) = 0;
        v51[144] = 0;
        *((_QWORD *)v51 + 21) = 0;
        v51[176] = 0;
        *((_QWORD *)v51 + 25) = 0;
        v51[208] = 0;
        *((_QWORD *)v51 + 29) = 0;
        v51[240] = 0;
        *((_QWORD *)v51 + 33) = 0;
        v51[272] = 0;
        *((_QWORD *)v51 + 37) = 0;
        v51[304] = 0;
        *((_QWORD *)v51 + 41) = 0;
        v51[336] = 0;
        *((_QWORD *)v51 + 45) = 0;
        v51[368] = 0;
        *((_QWORD *)v51 + 49) = 0;
        v51[400] = 0;
        *((_QWORD *)v51 + 53) = 0x800000000LL;
        *((_QWORD *)v51 + 66) = v51 + 544;
        *((_QWORD *)v51 + 67) = 0x600000000LL;
        goto LABEL_50;
      }
LABEL_34:
      v51[*v51 + 1] = 2;
      v52 = v260;
      v53 = *v260;
      *v260 = v53 + 1;
      *(_QWORD *)&v52[8 * v53 + 16] = 0;
      goto LABEL_6;
    }
    if ( !v264 )
      goto LABEL_6;
    v71 = sub_168B9E0(&v257);
    v75 = v259;
    v76 = v71;
    if ( v259 )
      v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v259 + 32LL))(v259);
    v77 = *(_DWORD *)(v76 + 16);
    v247 = *(__int64 **)v76;
    if ( !v77 )
      goto LABEL_59;
    v78 = v77 - 1;
    v248 = ((unsigned int)v75 >> 9) ^ ((unsigned int)v75 >> 4);
    v79 = v78 & v248;
    v80 = (__int64 *)(*(_QWORD *)v76 + 32LL * ((unsigned int)v78 & v248));
    v81 = *v80;
    if ( v75 == *v80 )
    {
LABEL_56:
      v82 = v80[1];
      goto LABEL_57;
    }
    v192 = 1;
    v73 = nullptr;
    if ( v81 != -4096 )
    {
      while ( 1 )
      {
        if ( v81 == -8192 && !v73 )
          v73 = v80;
        v74 = (unsigned int)(v192 + 1);
        v79 = v78 & (v192 + v79);
        v80 = &v247[4 * v79];
        v81 = *v80;
        if ( v75 == *v80 )
          goto LABEL_56;
        if ( v81 == -4096 )
          break;
        ++v192;
      }
      if ( v73 )
        v80 = v73;
    }
    v72 = (unsigned int)(*(_DWORD *)(v76 + 8) + 1);
    if ( 4 * (int)v72 < 3 * v77 )
    {
      if ( v77 - *(_DWORD *)(v76 + 12) - (unsigned int)v72 > v77 >> 3 )
      {
        v117 = *v80;
        goto LABEL_96;
      }
      v203 = (v78 >> 1) | v78 | (((v78 >> 1) | v78) >> 2);
      v204 = (((v203 >> 4) | v203) >> 8) | (v203 >> 4) | v203;
      v205 = ((v204 >> 16) | v204) + 1;
      if ( (unsigned int)v205 < 0x40 )
        LODWORD(v205) = 64;
      *(_DWORD *)(v76 + 16) = v205;
      v206 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v205, 8, 64, v72, v73, v74);
      *(_QWORD *)v76 = v206;
      if ( v247 )
      {
        *(_QWORD *)(v76 + 8) = 0;
        v254 = 4LL * v77;
        for ( i = &v206[4 * *(unsigned int *)(v76 + 16)]; i != v206; v206 += 4 )
          *v206 = -4096;
        v252 = v76;
        v208 = v247;
        v255 = v75;
        do
        {
          v209 = *v208;
          if ( *v208 != -4096 && v209 != -8192 )
          {
            v210 = *(_DWORD *)(v252 + 16);
            if ( !v210 )
            {
              *(_QWORD *)&dword_0 = *v208;
              BUG();
            }
            v211 = v210 - 1;
            v212 = (v210 - 1) & (((unsigned int)v209 >> 9) ^ ((unsigned int)v209 >> 4));
            v213 = (_QWORD *)(*(_QWORD *)v252 + 32LL * v212);
            v214 = *v213;
            if ( v209 != *v213 )
            {
              v243 = 1;
              v244 = nullptr;
              if ( v214 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v244 && v214 == -8192 )
                    v244 = v213;
                  v212 = v211 & (v243 + v212);
                  v213 = (_QWORD *)(*(_QWORD *)v252 + 32LL * v212);
                  v214 = *v213;
                  if ( v209 == *v213 )
                    break;
                  if ( v214 == -4096 )
                  {
                    if ( v244 )
                      v213 = v244;
                    break;
                  }
                  ++v243;
                }
              }
            }
            v215 = *v208;
            v213[1] = 0;
            v213[2] = 0;
            v213[3] = 0;
            *v213 = v215;
            v213[1] = v208[1];
            v216 = v208[2];
            v208[1] = 0;
            v217 = v213[2];
            v213[2] = v216;
            v218 = v208[3];
            v208[2] = v217;
            v219 = v213[3];
            v213[3] = v218;
            v220 = (_QWORD *)v208[1];
            v221 = (_QWORD *)v208[2];
            v208[3] = v219;
            ++*(_DWORD *)(v252 + 8);
            v222 = v220;
            if ( v221 != v220 )
            {
              do
              {
                v223 = v222[1];
                if ( v223 )
                {
                  v224 = v222[2];
                  if ( v224 )
                  {
                    if ( v223 < v224 || v223 > v224 + 14848 )
                    {
                      v225 = *(_QWORD **)(v223 + 528);
                      v226 = &v225[8 * (unsigned __int64)*(unsigned int *)(v223 + 536)];
                      if ( v225 != v226 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v226 -= 8;
                            v227 = (_QWORD *)v226[3];
                            if ( v227 == v226 + 5 )
                              break;
                            operator delete(v227);
                            if ( v225 == v226 )
                              goto LABEL_205;
                          }
                        }
                        while ( v225 != v226 );
LABEL_205:
                        v226 = *(_QWORD **)(v223 + 528);
                      }
                      if ( v226 != (_QWORD *)(v223 + 544) )
                        free(v226);
                      v228 = *(void **)(v223 + 416);
                      if ( v228 != (void *)(v223 + 432) )
                        free(v228);
                      v229 = (void **)(v223 + 384);
                      v230 = (void **)(v223 + 64);
                      do
                      {
                        while ( *v229 != v229 + 2 )
                        {
                          operator delete(*v229);
                          v229 -= 4;
                          if ( v229 == v230 )
                            goto LABEL_213;
                        }
                        v229 -= 4;
                      }
                      while ( v229 != v230 );
LABEL_213:
                      operator delete((void *)v223, 0x3A0u);
                    }
                    else
                    {
                      v236 = *(unsigned int *)(v224 + 14976);
                      *(_DWORD *)(v224 + 14976) = v236 + 1;
                      *(_QWORD *)(v224 + 8 * v236 + 14848) = v223;
                    }
                  }
                }
                v222 += 4;
              }
              while ( v221 != v222 );
              v220 = (_QWORD *)v208[1];
            }
            if ( v220 )
              operator delete(v220);
          }
          v208 += 4;
        }
        while ( &v247[v254] != v208 );
        v76 = v252;
        v75 = v255;
        operator delete(v247, v254 * 8, 8);
      }
      else
      {
        v239 = *(unsigned int *)(v76 + 16);
        *(_QWORD *)(v76 + 8) = 0;
        for ( j = &v206[4 * v239]; j != v206; v206 += 4 )
          *v206 = -4096;
      }
      v231 = *(_DWORD *)(v76 + 16);
      LODWORD(v72) = *(_DWORD *)(v76 + 8) + 1;
      if ( v231 )
      {
        v232 = v231 - 1;
        v233 = (v231 - 1) & v248;
        v80 = (__int64 *)(*(_QWORD *)v76 + 32LL * v233);
        v117 = *v80;
        if ( v75 == *v80 )
        {
LABEL_96:
          *(_DWORD *)(v76 + 8) = v72;
          if ( v117 != -4096 )
            --*(_DWORD *)(v76 + 12);
          goto LABEL_98;
        }
        v234 = 1;
        v235 = nullptr;
        if ( v117 != -4096 )
        {
          while ( 1 )
          {
            if ( v117 == -8192 && !v235 )
              v235 = v80;
            v233 = v232 & (v234 + v233);
            v80 = (__int64 *)(*(_QWORD *)v76 + 32LL * v233);
            v117 = *v80;
            if ( v75 == *v80 )
              goto LABEL_96;
            if ( v117 == -4096 )
            {
              if ( !v235 )
                break;
              v117 = *v235;
              v80 = v235;
              goto LABEL_96;
            }
            ++v234;
          }
        }
LABEL_223:
        *(_DWORD *)(v76 + 8) = v72;
LABEL_98:
        *v80 = v75;
        v80[1] = 0;
        v80[2] = 0;
        v80[3] = 0;
        v82 = 0;
LABEL_57:
        v83 = v82 + 32LL * v263;
        v84 = *(unsigned __int8 **)(v83 + 8);
        if ( !v84 )
        {
          v161 = *(_QWORD *)(v83 + 16);
          v162 = *(_DWORD *)(v161 + 14976);
          if ( v162 )
          {
            v163 = (unsigned int)(v162 - 1);
            *(_DWORD *)(v161 + 14976) = v163;
            v84 = *(unsigned __int8 **)(v161 + 8 * v163 + 14848);
            v164 = *((unsigned int *)v84 + 134);
            *v84 = 0;
            v165 = *((_QWORD *)v84 + 66);
            *((_DWORD *)v84 + 106) = 0;
            v166 = v165 + (v164 << 6);
            while ( v165 != v166 )
            {
              while ( 1 )
              {
                v166 -= 64;
                v167 = *(void **)(v166 + 24);
                if ( v167 == (void *)(v166 + 40) )
                  break;
                operator delete(v167);
                if ( v165 == v166 )
                  goto LABEL_116;
              }
            }
            goto LABEL_116;
          }
LABEL_147:
          v84 = (unsigned __int8 *)operator new(0x3A0u);
          *v84 = 0;
          *((_QWORD *)v84 + 12) = v84 + 112;
          *((_QWORD *)v84 + 16) = v84 + 144;
          *((_QWORD *)v84 + 20) = v84 + 176;
          *((_QWORD *)v84 + 24) = v84 + 208;
          *((_QWORD *)v84 + 28) = v84 + 240;
          *((_QWORD *)v84 + 32) = v84 + 272;
          *((_QWORD *)v84 + 36) = v84 + 304;
          *((_QWORD *)v84 + 40) = v84 + 336;
          *((_QWORD *)v84 + 44) = v84 + 368;
          *((_QWORD *)v84 + 48) = v84 + 400;
          *((_QWORD *)v84 + 52) = v84 + 432;
          *((_QWORD *)v84 + 13) = 0;
          v84[112] = 0;
          *((_QWORD *)v84 + 17) = 0;
          v84[144] = 0;
          *((_QWORD *)v84 + 21) = 0;
          v84[176] = 0;
          *((_QWORD *)v84 + 25) = 0;
          v84[208] = 0;
          *((_QWORD *)v84 + 29) = 0;
          v84[240] = 0;
          *((_QWORD *)v84 + 33) = 0;
          v84[272] = 0;
          *((_QWORD *)v84 + 37) = 0;
          v84[304] = 0;
          *((_QWORD *)v84 + 41) = 0;
          v84[336] = 0;
          *((_QWORD *)v84 + 45) = 0;
          v84[368] = 0;
          *((_QWORD *)v84 + 49) = 0;
          v84[400] = 0;
          *((_QWORD *)v84 + 53) = 0x800000000LL;
          *((_QWORD *)v84 + 66) = v84 + 544;
          *((_QWORD *)v84 + 67) = 0x600000000LL;
          goto LABEL_117;
        }
LABEL_58:
        v84[*v84 + 1] = 2;
        v85 = *(_BYTE **)(v83 + 8);
        v86 = (unsigned __int8)*v85;
        *v85 = v86 + 1;
        *(_QWORD *)&v85[8 * v86 + 16] = 0;
        goto LABEL_6;
      }
    }
    else
    {
LABEL_59:
      v87 = (((((((2 * v77 - 1) | ((unsigned __int64)(2 * v77 - 1) >> 1)) >> 2)
              | (2 * v77 - 1)
              | ((unsigned __int64)(2 * v77 - 1) >> 1)) >> 4)
            | (((2 * v77 - 1) | ((unsigned __int64)(2 * v77 - 1) >> 1)) >> 2)
            | (2 * v77 - 1)
            | ((unsigned __int64)(2 * v77 - 1) >> 1)) >> 8)
          | (((((2 * v77 - 1) | ((unsigned __int64)(2 * v77 - 1) >> 1)) >> 2)
            | (2 * v77 - 1)
            | ((unsigned __int64)(2 * v77 - 1) >> 1)) >> 4)
          | (((2 * v77 - 1) | ((unsigned __int64)(2 * v77 - 1) >> 1)) >> 2)
          | (2 * v77 - 1)
          | ((unsigned __int64)(2 * v77 - 1) >> 1);
      v88 = ((v87 >> 16) | v87) + 1;
      if ( (unsigned int)v88 < 0x40 )
        LODWORD(v88) = 64;
      *(_DWORD *)(v76 + 16) = v88;
      v89 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v88, 8, 64, v72, v73, v74);
      *(_QWORD *)v76 = v89;
      if ( v247 )
      {
        *(_QWORD *)(v76 + 8) = 0;
        v251 = 4LL * v77;
        v249 = &v247[v251];
        for ( k = &v89[4 * *(unsigned int *)(v76 + 16)]; k != v89; v89 += 4 )
          *v89 = -4096;
        if ( v247 != v249 )
        {
          v250 = v76;
          v91 = v247;
          v253 = v75;
          do
          {
            v92 = *v91;
            if ( *v91 != -8192 && v92 != -4096 )
            {
              v93 = *(_DWORD *)(v250 + 16);
              if ( !v93 )
              {
                *(_QWORD *)&dword_0 = *v91;
                BUG();
              }
              v94 = v93 - 1;
              v95 = (v93 - 1) & (((unsigned int)v92 >> 9) ^ ((unsigned int)v92 >> 4));
              v96 = (_QWORD *)(*(_QWORD *)v250 + 32LL * v95);
              v97 = *v96;
              if ( *v96 != v92 )
              {
                v241 = 1;
                v242 = nullptr;
                if ( v97 != -4096 )
                {
                  while ( 1 )
                  {
                    if ( !v242 && v97 == -8192 )
                      v242 = v96;
                    v95 = v94 & (v241 + v95);
                    v96 = (_QWORD *)(*(_QWORD *)v250 + 32LL * v95);
                    v97 = *v96;
                    if ( v92 == *v96 )
                      break;
                    if ( v97 == -4096 )
                    {
                      if ( v242 )
                        v96 = v242;
                      break;
                    }
                    ++v241;
                  }
                }
              }
              v98 = *v91;
              v96[1] = 0;
              v96[2] = 0;
              v96[3] = 0;
              *v96 = v98;
              v96[1] = v91[1];
              v99 = v91[2];
              v91[1] = 0;
              v100 = v96[2];
              v96[2] = v99;
              v101 = v91[3];
              v91[2] = v100;
              v102 = v96[3];
              v96[3] = v101;
              v103 = (_QWORD *)v91[1];
              v104 = (_QWORD *)v91[2];
              v91[3] = v102;
              ++*(_DWORD *)(v250 + 8);
              v105 = v103;
              if ( v104 != v103 )
              {
                do
                {
                  v106 = v105[1];
                  if ( v106 )
                  {
                    v107 = v105[2];
                    if ( v107 )
                    {
                      if ( v106 < v107 || v106 > v107 + 14848 )
                      {
                        v108 = *(_QWORD **)(v106 + 528);
                        v109 = &v108[8 * (unsigned __int64)*(unsigned int *)(v106 + 536)];
                        if ( v108 != v109 )
                        {
                          do
                          {
                            while ( 1 )
                            {
                              v109 -= 8;
                              v110 = (_QWORD *)v109[3];
                              if ( v110 == v109 + 5 )
                                break;
                              operator delete(v110);
                              if ( v108 == v109 )
                                goto LABEL_77;
                            }
                          }
                          while ( v108 != v109 );
LABEL_77:
                          v109 = *(_QWORD **)(v106 + 528);
                        }
                        if ( v109 != (_QWORD *)(v106 + 544) )
                          free(v109);
                        v111 = *(void **)(v106 + 416);
                        if ( v111 != (void *)(v106 + 432) )
                          free(v111);
                        v112 = (void **)(v106 + 384);
                        v113 = (void **)(v106 + 64);
                        do
                        {
                          while ( *v112 != v112 + 2 )
                          {
                            operator delete(*v112);
                            v112 -= 4;
                            if ( v112 == v113 )
                              goto LABEL_85;
                          }
                          v112 -= 4;
                        }
                        while ( v112 != v113 );
LABEL_85:
                        operator delete((void *)v106, 0x3A0u);
                      }
                      else
                      {
                        v156 = *(unsigned int *)(v107 + 14976);
                        *(_DWORD *)(v107 + 14976) = v156 + 1;
                        *(_QWORD *)(v107 + 8 * v156 + 14848) = v106;
                      }
                    }
                  }
                  v105 += 4;
                }
                while ( v104 != v105 );
                v103 = (_QWORD *)v91[1];
              }
              if ( v103 )
                operator delete(v103);
            }
            v91 += 4;
          }
          while ( v249 != v91 );
          v76 = v250;
          v75 = v253;
        }
        operator delete(v247, v251 * 8, 8);
      }
      else
      {
        v237 = *(unsigned int *)(v76 + 16);
        *(_QWORD *)(v76 + 8) = 0;
        for ( m = &v89[4 * v237]; m != v89; v89 += 4 )
          *v89 = -4096;
      }
      v114 = *(_DWORD *)(v76 + 16);
      LODWORD(v72) = *(_DWORD *)(v76 + 8) + 1;
      if ( v114 )
      {
        v115 = v114 - 1;
        v116 = (v114 - 1) & (((unsigned int)v75 >> 9) ^ ((unsigned int)v75 >> 4));
        v80 = (__int64 *)(*(_QWORD *)v76 + 32LL * v116);
        v117 = *v80;
        if ( *v80 == v75 )
        {
          v117 = v75;
          goto LABEL_96;
        }
        v245 = 1;
        v246 = nullptr;
        if ( v117 != -4096 )
        {
          while ( 1 )
          {
            if ( v117 == -8192 && !v246 )
              v246 = v80;
            v116 = v115 & (v245 + v116);
            v80 = (__int64 *)(*(_QWORD *)v76 + 32LL * v116);
            v117 = *v80;
            if ( v75 == *v80 )
              goto LABEL_96;
            if ( v117 == -4096 )
            {
              if ( !v246 )
                goto LABEL_223;
              v117 = *v246;
              v80 = v246;
              goto LABEL_96;
            }
            ++v245;
          }
        }
        goto LABEL_223;
      }
    }
    ++*(_DWORD *)(v76 + 8);
    BUG();
  }
  v12 = *a1;
  LODWORD(v256) = 0;
  v257 = nullptr;
  v258 = 0;
  if ( (unsigned __int8)sub_181EB00(v12, (__int64)a3, 0, &v257, &v256, a4, a5) )
  {
    v15 = v6[294];
    v16 = v257;
    v17 = v258;
    v6[304] += 56LL;
    v18 = (__m128i *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v6[295] >= (unsigned __int64)&v18[3].m128i_u64[1] && v15 )
      v6[294] = (char *)v18 + 56;
    else
      v18 = (__m128i *)sub_986170((__int64)(v6 + 294), 56, 56, 3, v13, v14);
    sub_B306C0(v18, (__int64)v6, a3, v16, v17);
    sub_B8CC60(a2, (__int64)v18, v19, v20, v21, v22);
    v23 = sub_B32850((__int64)v6, 0, 0);
    sub_B8CC60(a2, v23, v24, v25, v26, v27);
  }
}
