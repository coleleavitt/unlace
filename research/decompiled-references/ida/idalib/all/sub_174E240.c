unsigned __int64 __fastcall sub_174E240(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        __int64 a6,
        double a7)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  unsigned __int16 v10; // ax
  int v11; // eax
  unsigned __int64 v12; // r13
  int v13; // r15d
  int v14; // r12d
  __int64 v15; // rbp
  char v16; // al
  unsigned __int64 result; // rax
  __m128i si128; // xmm0
  __int64 v19; // rbp
  unsigned int v20; // eax
  unsigned __int8 *v21; // r14
  unsigned __int8 *v22; // rbp
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rax
  _QWORD *v25; // r15
  _QWORD *v26; // r12
  _QWORD *v27; // rdi
  void *v28; // rdi
  void **v29; // r12
  void **v30; // r15
  unsigned __int64 v31; // rbp
  __int64 v32; // rdx
  int v33; // r8d
  int v34; // r9d
  unsigned int v35; // ebp
  bool v36; // al
  bool v37; // al
  __int64 v38; // rax
  size_t *v39; // r15
  size_t *v40; // r12
  __int64 v41; // r14
  unsigned __int64 v42; // rbp
  unsigned __int64 v43; // rax
  _QWORD *v44; // rbx
  _QWORD *v45; // r13
  _QWORD *v46; // rdi
  void *v47; // rdi
  void **v48; // rbx
  void **v49; // r13
  __int64 v50; // r14
  void *v51; // rsi
  __int64 v53; // rbx
  __int64 v54; // r14
  __int64 v55; // rbp
  __int64 v56; // r13
  __int64 v57; // rdi
  __int64 v58; // r8
  void **v59; // r13
  __int64 v60; // rdx
  __int64 v61; // rax
  void **v62; // r14
  void **v63; // rbp
  void *v64; // rax
  void **v65; // r14
  unsigned __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rbp
  __int64 v69; // r13
  __int64 v70; // rax
  int v71; // r10d
  char v72; // dl
  unsigned __int8 *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rbp
  __int64 v76; // rdx
  unsigned __int8 *v77; // rbp
  unsigned __int8 *v78; // r14
  unsigned __int64 v79; // r12
  unsigned __int64 v80; // rax
  _QWORD *v81; // rbx
  _QWORD *v82; // r13
  _QWORD *v83; // rdi
  void *v84; // rdi
  void **v85; // rbx
  void **v86; // r13
  __int64 v87; // rsi
  size_t v88; // rbp
  void *v89; // r13
  size_t v90; // rax
  unsigned __int64 v91; // rax
  int v92; // edx
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rsi
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rax
  int v98; // ebp
  _DWORD *v99; // rsi
  __int64 v100; // rax
  unsigned __int64 v101; // rdx
  __int64 v102; // rax
  int v103; // edx
  __int64 v104; // r8
  __int64 v105; // r9
  unsigned __int8 *v106; // r15
  unsigned __int8 *v107; // rbp
  unsigned __int64 v108; // r13
  unsigned __int64 v109; // rax
  _QWORD *v110; // r14
  _QWORD *v111; // r12
  _QWORD *v112; // rdi
  void *v113; // rdi
  void **v114; // r12
  void **v115; // r14
  unsigned __int64 v116; // rbp
  __m128i v117; // xmm0
  __int64 v118; // rsi
  size_t v119; // r12
  void *v120; // r14
  size_t v121; // rax
  __int64 v122; // rsi
  int v123; // ebp
  unsigned __int64 v124; // rax
  unsigned __int64 v125; // rcx
  unsigned __int64 v126; // rsi
  __int64 v127; // rax
  int v128; // edx
  int v129; // r13d
  __int64 v130; // r12
  char v131; // al
  __int64 v132; // rdx
  __int64 v133; // rdx
  __int64 v134; // rdx
  unsigned int v135; // eax
  unsigned int *v136; // r13
  unsigned int *v137; // rbp
  unsigned int v138; // edx
  __int64 v139; // rcx
  int v140; // r13d
  char v141; // dl
  _DWORD *v142; // r15
  int v143; // edx
  int v144; // eax
  unsigned __int64 v145; // rsi
  int v146; // r15d
  __int64 v147; // rax
  int v148; // r15d
  unsigned __int64 v149; // r13
  int v150; // eax
  _DWORD *v151; // rdi
  char v152; // r11
  unsigned __int64 v153; // rax
  __int64 v154; // rsi
  unsigned int v155; // eax
  __int64 v156; // rax
  __int64 v157; // rax
  void *v158; // rdi
  unsigned int v159; // eax
  __int64 v160; // rsi
  __int64 v161; // rax
  __int64 v162; // rax
  void *v163; // rdi
  __int64 v164; // rax
  int v165; // ebp
  __int64 v166; // rax
  __int64 *v167; // rbp
  __int64 v168; // r13
  __int64 *v169; // r14
  __int64 *v170; // rbp
  __int64 v171; // rax
  int v172; // r11d
  __int64 *v173; // r13
  __int64 *v174; // rdi
  int v175; // r13d
  void *v176; // rdi
  unsigned __int64 v177; // rax
  unsigned __int64 v178; // rcx
  __int64 v179; // rbx
  _DWORD *v180; // rax
  __int64 v181; // rbp
  int v182; // eax
  _DWORD *v183; // rdi
  unsigned int v184; // eax
  unsigned int v185; // ebp
  _DWORD *v186; // rdi
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  __int64 v191; // r13
  __int64 v192; // rax
  _QWORD *v193; // rax
  void *v194; // rax
  __int64 v195; // rbp
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // r8
  __int64 v199; // r9
  void *v200; // rax
  _QWORD *v201; // rax
  unsigned int v202; // eax
  __int64 v203; // rdx
  __int64 v204; // rcx
  __int64 v205; // r8
  __int64 v206; // r9
  void *v207; // rax
  _QWORD *v208; // rax
  __int64 v210; // [rsp+8h] [rbp-410h]
  __int64 v211; // [rsp+8h] [rbp-410h]
  __int64 v212; // [rsp+8h] [rbp-410h]
  __int64 v213; // [rsp+8h] [rbp-410h]
  unsigned __int64 v214; // [rsp+8h] [rbp-410h]
  unsigned __int64 v216; // [rsp+10h] [rbp-408h]
  __int64 v217; // [rsp+10h] [rbp-408h]
  __int64 v218; // [rsp+10h] [rbp-408h]
  __int64 v220; // [rsp+20h] [rbp-3F8h]
  int v221; // [rsp+20h] [rbp-3F8h]
  int v222; // [rsp+20h] [rbp-3F8h]
  char v223; // [rsp+28h] [rbp-3F0h]
  unsigned __int64 v224; // [rsp+30h] [rbp-3E8h]
  char v225; // [rsp+38h] [rbp-3E0h]
  int v226; // [rsp+38h] [rbp-3E0h]
  int v227; // [rsp+38h] [rbp-3E0h]
  __int64 v228; // [rsp+40h] [rbp-3D8h]
  unsigned int v229; // [rsp+40h] [rbp-3D8h]
  int v230; // [rsp+40h] [rbp-3D8h]
  char v231; // [rsp+40h] [rbp-3D8h]
  char v232; // [rsp+40h] [rbp-3D8h]
  char v233; // [rsp+48h] [rbp-3D0h]
  char v234; // [rsp+48h] [rbp-3D0h]
  unsigned __int64 v235; // [rsp+48h] [rbp-3D0h]
  char v236; // [rsp+50h] [rbp-3C8h]
  unsigned __int64 v237; // [rsp+50h] [rbp-3C8h]
  int v238; // [rsp+58h] [rbp-3C0h]
  char v239; // [rsp+58h] [rbp-3C0h]
  int v240; // [rsp+58h] [rbp-3C0h]
  unsigned int v241; // [rsp+5Ch] [rbp-3BCh]
  unsigned int v242; // [rsp+5Ch] [rbp-3BCh]
  __int64 v243; // [rsp+68h] [rbp-3B0h]
  __int64 v244; // [rsp+68h] [rbp-3B0h]
  char v245; // [rsp+7Fh] [rbp-399h] BYREF
  __int64 v246; // [rsp+80h] [rbp-398h] BYREF
  char v247; // [rsp+88h] [rbp-390h]
  __int64 v248; // [rsp+90h] [rbp-388h] BYREF
  __int128 v249; // [rsp+98h] [rbp-380h] BYREF
  int v250; // [rsp+A8h] [rbp-370h]
  void *v251; // [rsp+B0h] [rbp-368h] BYREF
  __int64 p_src; // [rsp+B8h] [rbp-360h]
  unsigned int v253; // [rsp+C0h] [rbp-358h] BYREF
  char v254; // [rsp+C4h] [rbp-354h]
  __int64 v255; // [rsp+C8h] [rbp-350h] BYREF
  unsigned int v256; // [rsp+D0h] [rbp-348h]
  void *src; // [rsp+140h] [rbp-2D8h] BYREF
  size_t n[2]; // [rsp+148h] [rbp-2D0h] BYREF
  __int16 v259; // [rsp+158h] [rbp-2C0h] BYREF
  unsigned __int8 *v260; // [rsp+160h] [rbp-2B8h] BYREF
  char v261; // [rsp+1B8h] [rbp-260h]
  unsigned int v262; // [rsp+1C0h] [rbp-258h]
  char v263; // [rsp+1C4h] [rbp-254h]
  size_t v264[2]; // [rsp+1E0h] [rbp-238h] BYREF
  size_t v265; // [rsp+1F0h] [rbp-228h]
  __int64 v266; // [rsp+1F8h] [rbp-220h] BYREF
  unsigned __int8 *v267; // [rsp+200h] [rbp-218h] BYREF
  __int64 v268; // [rsp+208h] [rbp-210h]
  _BYTE v269[72]; // [rsp+210h] [rbp-208h] BYREF
  char v270; // [rsp+258h] [rbp-1C0h]
  unsigned int v271; // [rsp+260h] [rbp-1B8h]
  char v272; // [rsp+264h] [rbp-1B4h]
  __int64 v273; // [rsp+290h] [rbp-188h]
  __int64 v274; // [rsp+298h] [rbp-180h]
  __int64 v275; // [rsp+2A0h] [rbp-178h]
  __int64 v276; // [rsp+2B0h] [rbp-168h]
  __int64 v277; // [rsp+2B8h] [rbp-160h]
  int v278; // [rsp+2C8h] [rbp-150h]
  char v279; // [rsp+2CCh] [rbp-14Ch]
  void *v280; // [rsp+2D0h] [rbp-148h]
  __int64 v281; // [rsp+2D8h] [rbp-140h]
  _BYTE v282[64]; // [rsp+2E0h] [rbp-138h] BYREF
  __int64 v283; // [rsp+320h] [rbp-F8h]
  __int64 v284; // [rsp+328h] [rbp-F0h]
  void *v285; // [rsp+330h] [rbp-E8h]
  __int64 v286; // [rsp+338h] [rbp-E0h]
  _BYTE v287[96]; // [rsp+340h] [rbp-D8h] BYREF
  __int16 v288; // [rsp+3A0h] [rbp-78h]
  void *ptr; // [rsp+3A8h] [rbp-70h]
  __int64 v290; // [rsp+3B0h] [rbp-68h]
  _BYTE v291[96]; // [rsp+3B8h] [rbp-60h] BYREF

  v8 = a1;
  v9 = sub_BFBAE0(a2);
  v10 = *(_WORD *)v9 & 0x1FF;
  if ( v10 <= 0x75u )
  {
    if ( v10 != 91 )
      goto LABEL_74;
    if ( *(_DWORD *)(v9 + 16) != 2 )
      goto LABEL_12;
    v13 = (*(_BYTE *)(v9 + 3) >> 1) & 0x3F;
    v97 = 8 * (((*(_BYTE *)(v9 + 2) & 8) != 0) + 1LL);
    v12 = *(_QWORD *)(v9 + v97 + 32);
    v220 = *(_QWORD *)(v9 + v97 + 40);
  }
  else
  {
    if ( v10 > 0x77u )
      goto LABEL_12;
    v11 = sub_BFAD70((*(_WORD *)(v9 + 2) >> 3) & 0x3F);
    v12 = *(_QWORD *)(v9 + 16);
    v13 = v11;
    v220 = *(_QWORD *)(v9 + 24);
  }
  if ( (unsigned int)(v13 - 35) <= 1 )
  {
    v14 = *(_DWORD *)(a6 + 144);
    v15 = sub_174E240(a1, v12, a3, a4, a5);
    if ( v15 != 1 )
    {
      v16 = *(_BYTE *)(a6 + 128);
      if ( v16 && v13 == 36 || v13 == 35 && v16 != 1 )
        return v15;
      v50 = sub_174E240(a1, v220, a3, a4, a5);
      if ( v50 != 1 )
      {
        if ( *(_BYTE *)(a6 + 128) && v13 == 36 )
          *(_DWORD *)(a6 + 144) = v14;
        if ( !v50 || !v15 )
          return 0;
        v129 = sub_EEB7E0(v12, v220, a7);
        v130 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18640LL);
        v131 = sub_BFAB60(v13);
        return sub_C09F10(
                 *(_QWORD **)(a1 + 248),
                 v15 & 0xFFFFFFFFFFFFFFFELL,
                 v50 & 0xFFFFFFFFFFFFFFFELL,
                 v131,
                 v130,
                 0,
                 0,
                 v129,
                 0);
      }
    }
    return 1;
  }
  v10 = *(_WORD *)v9 & 0x1FF;
LABEL_74:
  if ( v10 == 60 )
    return sub_174E240(a1, *(_QWORD *)(v9 + 16), a3, a4, a5);
  if ( v10 == 108 && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 2LL) & 2) != 0 )
  {
    v98 = *(_DWORD *)(v9 + 4);
    if ( (unsigned int)(v98 - 19) <= 1 )
    {
      v99 = *(_DWORD **)(v9 + 40);
      v223 = v98 == 19;
      v230 = *(_DWORD *)(a6 + 144);
      if ( !v99 || (*v99 & 0x4000) != 0 )
      {
        v237 = 0;
      }
      else
      {
        v100 = sub_174E240(a1, v99, a3, a4, a5);
        v101 = v100;
        if ( v100 == 1 )
          return 1;
        if ( v223 != *(_BYTE *)(a6 + 128) )
          return v101;
        v237 = v100;
      }
      v226 = *(_DWORD *)(a1 + 11200);
      v239 = *(_BYTE *)(a1 + 12592);
      v234 = *(_BYTE *)(a1 + 11248);
      v140 = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 204LL);
      sub_1DBADC0(a1);
      if ( !v141 )
        *(_BYTE *)(a1 + 12592) = 1;
      *(_BYTE *)(a1 + 11248) = 0;
      v142 = *(_DWORD **)(v9 + 40);
      if ( !v142 || (*v142 & 0x4000) == 0 )
        v142 = *(_DWORD **)(v9 + 48);
      src = &n[1];
      n[0] = 0x200000000LL;
      sub_1E4CA90(v142);
      LOBYTE(v246) = 0;
      v143 = *(_DWORD *)(v9 + 28);
      v245 = 1;
      LODWORD(v248) = v143;
      v221 = n[0];
      v144 = sub_EEC8C0((unsigned __int64)v142, (__int64)&src, a7);
      v145 = *(unsigned int *)(v9 + 20);
      if ( (unsigned __int8)sub_1E54D70(
                              a1,
                              v145,
                              v144,
                              (_DWORD)src,
                              v221,
                              (_DWORD)a5,
                              (__int64)&v245,
                              (__int64)&v246,
                              (__int64)&v248)
        || !v245
        || (_BYTE)v246 )
      {
        goto LABEL_283;
      }
      v146 = v248;
      if ( !(_DWORD)v248 || *(_DWORD *)(*(_QWORD *)(a1 + 232) + 144LL) >= (unsigned int)(v248 - 1) )
      {
LABEL_254:
        if ( src != &n[1] )
          free(src);
        *(_DWORD *)(a1 + 11200) = v226;
        *(_BYTE *)(a1 + 12592) = v239;
        *(_BYTE *)(a1 + 11248) = v234;
        v147 = *(_QWORD *)(a1 + 264);
        if ( *(_DWORD *)(v147 + 204) == 5 )
          *(_BYTE *)(v147 + 194) = 1;
        if ( v140 )
          v140 = 3;
        *(_DWORD *)(v147 + 204) = v140;
        if ( v146 )
        {
          v227 = v146 - 1;
          if ( v146 != 1 )
          {
            v148 = 0;
            v149 = v237;
            v240 = v230;
            v222 = *(_DWORD *)(a1 + 12632);
            do
            {
              *(_DWORD *)(v8 + 12632) = ++v148;
              v145 = *(_QWORD *)(v9 + 40);
              if ( !v145 || (*(_DWORD *)v145 & 0x4000) == 0 )
                v145 = *(_QWORD *)(v9 + 48);
              v101 = sub_174E240(v8, v145, a3, a4, a5);
              if ( v101 == 1 )
                goto LABEL_299;
              v152 = *(_BYTE *)(a6 + 128);
              if ( v98 != 19 && v152 )
                *(_DWORD *)(a6 + 144) = v240;
              if ( v149 )
              {
                if ( v101 )
                {
                  v150 = *(_DWORD *)(v9 + 16);
                  if ( !v150 )
                  {
                    v151 = *(_DWORD **)(v9 + 40);
                    if ( v151 && (*v151 & 0x4000) != 0 )
                    {
                      v235 = v101;
                      v231 = v152;
                      v150 = sub_EEB7E0((unsigned __int64)v151, v145, a7);
                      v152 = v231;
                      v101 = v235;
                    }
                    else
                    {
                      v150 = *(_DWORD *)(v9 + 20);
                    }
                  }
                  v232 = v152;
                  v145 = v149 & 0xFFFFFFFFFFFFFFFELL;
                  v153 = sub_C09F10(
                           *(_QWORD **)(v8 + 248),
                           v149 & 0xFFFFFFFFFFFFFFFELL,
                           v101 & 0xFFFFFFFFFFFFFFFELL,
                           *(_DWORD *)(v9 + 4),
                           *(_QWORD *)(*(_QWORD *)(v8 + 248) + 18640LL),
                           0,
                           0,
                           v150,
                           0);
                  v152 = v232;
                  v149 = v153;
                }
              }
              else
              {
                v149 = v101;
              }
              if ( v223 != v152 )
              {
                v101 = v149;
LABEL_299:
                *(_DWORD *)(v8 + 12632) = v222;
                return v101;
              }
              *(_DWORD *)(v8 + 12632) = v222;
            }
            while ( v148 != v227 );
            v237 = v149;
          }
          v180 = *(_DWORD **)(v9 + 40);
          if ( !v180 || (*v180 & 0x4000) == 0 || (v145 = *(_QWORD *)(v9 + 48)) == 0 )
          {
            v101 = v237;
            goto LABEL_336;
          }
          v181 = sub_174E240(v8, v145, a3, a4, a5);
          if ( v237 != 1 )
          {
            v101 = v181;
            if ( v237 )
            {
              v101 = v237;
              if ( !v181 )
                return v101;
              v182 = *(_DWORD *)(v9 + 16);
              if ( !v182 )
              {
                v183 = *(_DWORD **)(v9 + 40);
                if ( v183 && (*v183 & 0x4000) != 0 )
                  v182 = sub_EEB7E0((unsigned __int64)v183, v145, a7);
                else
                  v182 = *(_DWORD *)(v9 + 20);
              }
              v145 = v237 & 0xFFFFFFFFFFFFFFFELL;
              v101 = sub_C09F10(
                       *(_QWORD **)(v8 + 248),
                       v237 & 0xFFFFFFFFFFFFFFFELL,
                       v181 & 0xFFFFFFFFFFFFFFFELL,
                       *(_DWORD *)(v9 + 4),
                       *(_QWORD *)(*(_QWORD *)(v8 + 248) + 18640LL),
                       0,
                       0,
                       v182,
                       0);
            }
LABEL_336:
            if ( !v101 )
            {
              *(_BYTE *)(a6 + 128) = v223;
              v184 = *(_DWORD *)(v9 + 16);
              v185 = *(_DWORD *)(v9 + 4);
              if ( !v184 )
              {
                v186 = *(_DWORD **)(v9 + 40);
                if ( v186 && (*v186 & 0x4000) != 0 )
                  v184 = sub_EEB7E0((unsigned __int64)v186, v145, a7);
                else
                  v184 = *(_DWORD *)(v9 + 20);
              }
              return sub_1E4E540(v8, v184, v185);
            }
            return v101;
          }
        }
        return 1;
      }
      v154 = a1 + 8;
      sub_168B9F0((__int64)v264, (__int64 *)(a1 + 8), *(_DWORD *)(v9 + 20), 0xEF7u, 0);
      v155 = v248 - 1;
      v241 = v248 - 1;
      if ( v270 )
      {
        v154 = v155;
        sub_AE9DF0(&v267, v155, 3u);
      }
      else
      {
        if ( !v272 )
        {
LABEL_282:
          v251 = (void *)sub_EEC8C0(v9, v154, a7);
          sub_1587DB0((__int64)v264, (__int64 *)&v251);
          sub_15F7200(v264);
          v145 = a1 + 8;
          sub_168B9F0((__int64)v264, (__int64 *)(a1 + 8), *(_DWORD *)(v9 + 20), 0x7ECu, 0);
          sub_15F7200(v264);
LABEL_283:
          v146 = 0;
          goto LABEL_254;
        }
        v243 = sub_168B9E0(v264);
        v200 = (void *)v265;
        if ( v265 )
          v200 = (void *)(*(__int64 (__fastcall **)(size_t))(*(_QWORD *)v265 + 32LL))(v265);
        v251 = v200;
        v201 = sub_1587BC0(v243, (__int64 *)&v251, v196, v197, v198, v199);
        v154 = v241;
        sub_AE9DF0((unsigned __int8 **)(*v201 + 32LL * v271 + 8), v241, 3u);
      }
      v202 = *(_DWORD *)(*(_QWORD *)(a1 + 232) + 144LL);
      v242 = v202;
      if ( v270 )
      {
        v154 = v202;
        sub_AE9DF0(&v267, v202, 3u);
      }
      else if ( v272 )
      {
        v244 = sub_168B9E0(v264);
        v207 = (void *)v265;
        if ( v265 )
          v207 = (void *)(*(__int64 (__fastcall **)(size_t))(*(_QWORD *)v265 + 32LL))(v265);
        v251 = v207;
        v208 = sub_1587BC0(v244, (__int64 *)&v251, v203, v204, v205, v206);
        v154 = v242;
        sub_AE9DF0((unsigned __int8 **)(*v208 + 32LL * v271 + 8), v242, 3u);
      }
      goto LABEL_282;
    }
  }
LABEL_12:
  sub_18C79B0(a1, 4, 0, 4);
  si128.m128i_i64[0] = 0;
  LODWORD(v265) = a4;
  v274 &= 0xFFFFFFFE00000000LL;
  v276 &= 0xFFFFFFFE00000000LL;
  v280 = v282;
  WORD2(v265) = 0;
  v267 = v269;
  v285 = v287;
  *(_OWORD *)v264 = 0;
  v281 = 0x800000000LL;
  ptr = v291;
  v266 = 0;
  v268 = 0x400000000LL;
  v273 = 0;
  v275 = 0;
  v277 = 0;
  v278 = 0;
  v279 = 0;
  v283 = 0;
  v284 = 0;
  v286 = 0x400000000LL;
  v288 = 0;
  v290 = 0x400000000LL;
  v19 = sub_EEC8C0(v9, 4, 0.0);
  v20 = sub_EEB7E0(v9, 4, 0.0);
  sub_1DC3820(&v246, a1, v20, a3, v264, v19);
  v225 = v247;
  if ( v247 )
  {
    v216 = 1;
LABEL_14:
    sub_1DBADA0(&v246);
    if ( ptr != v291 )
      free(ptr);
    if ( v285 != v287 )
      free(v285);
    if ( v280 != v282 )
      free(v280);
    v21 = v267;
    v22 = &v267[32 * (unsigned int)v268];
    if ( v267 != v22 )
    {
      do
      {
        v22 -= 32;
        v23 = *((_QWORD *)v22 + 1);
        if ( v23 )
        {
          v24 = *((_QWORD *)v22 + 2);
          if ( v24 )
          {
            if ( v23 < v24 || v23 > v24 + 14848 )
            {
              v25 = *(_QWORD **)(v23 + 528);
              v26 = &v25[8 * (unsigned __int64)*(unsigned int *)(v23 + 536)];
              if ( v25 != v26 )
              {
                do
                {
                  while ( 1 )
                  {
                    v26 -= 8;
                    v27 = (_QWORD *)v26[3];
                    if ( v27 == v26 + 5 )
                      break;
                    operator delete(v27);
                    if ( v25 == v26 )
                      goto LABEL_27;
                  }
                }
                while ( v25 != v26 );
LABEL_27:
                v26 = *(_QWORD **)(v23 + 528);
              }
              if ( v26 != (_QWORD *)(v23 + 544) )
                free(v26);
              v28 = *(void **)(v23 + 416);
              if ( v28 != (void *)(v23 + 432) )
                free(v28);
              v29 = (void **)(v23 + 384);
              v30 = (void **)(v23 + 64);
              do
              {
                while ( *v29 != v29 + 2 )
                {
                  operator delete(*v29);
                  v29 -= 4;
                  if ( v29 == v30 )
                    goto LABEL_35;
                }
                v29 -= 4;
              }
              while ( v30 != v29 );
LABEL_35:
              operator delete((void *)v23, 0x3A0u);
            }
            else
            {
              v96 = *(unsigned int *)(v24 + 14976);
              *(_DWORD *)(v24 + 14976) = v96 + 1;
              *(_QWORD *)(v24 + 8 * v96 + 14848) = v23;
            }
          }
        }
      }
      while ( v21 != v22 );
      v22 = v267;
    }
    if ( v22 != v269 )
      free(v22);
LABEL_40:
    sub_190D5E0(v8);
    if ( v216 != 1 )
      goto LABEL_41;
    return 1;
  }
  v251 = &v253;
  p_src = 0x2000000000LL;
  if ( !a3 )
    goto LABEL_107;
  v51 = &v251;
  sub_F1A490(v9, (__int64)&v251, *(_QWORD *)(a1 + 248), 1, 0);
  if ( *a5 != *a5 + 24LL * *((unsigned int *)a5 + 2) )
  {
    v224 = v9;
    v53 = *a5;
    v54 = *a5 + 24LL * *((unsigned int *)a5 + 2);
    do
    {
      v55 = *(_QWORD *)(v53 + 8);
      v56 = v55 + 24LL * *(_QWORD *)(v53 + 16);
      while ( v56 != v55 )
      {
        v57 = v55;
        v51 = &v251;
        v55 += 24;
        sub_F1D660(v57, (__int64)&v251, *(_QWORD *)(a1 + 248));
      }
      v53 += 24;
    }
    while ( v54 != v53 );
    v8 = a1;
    v9 = v224;
  }
  src = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3);
  n[0] = (size_t)&v259;
  n[1] = 0x2000000000LL;
  if ( (_DWORD)p_src )
  {
    v51 = &v251;
    sub_A6DB70((void **)n, (char **)&v251);
  }
  v59 = *(void ***)(v8 + 15760);
  v60 = 0x86BCA1AF286BCA1BLL;
  v228 = 19LL * *(unsigned int *)(v8 + 15768);
  v61 = (__int64)*(unsigned int *)(v8 + 15768) >> 2;
  if ( v61 )
  {
    v60 = 9 * v61;
    v62 = *(void ***)(v8 + 15760);
    v63 = &v59[76 * v61];
    while ( 1 )
    {
      v64 = src;
      if ( *v59 == src )
      {
        v51 = n;
        if ( (unsigned __int8)sub_2222ED0(v59 + 1, n) )
        {
          v65 = v59;
          goto LABEL_100;
        }
        v64 = src;
      }
      if ( v59[19] == v64 )
      {
        v51 = n;
        if ( (unsigned __int8)sub_2222ED0(v59 + 20, n) )
        {
          v65 = v59 + 19;
          goto LABEL_100;
        }
        v64 = src;
      }
      if ( v59[38] == v64 )
      {
        v51 = n;
        if ( (unsigned __int8)sub_2222ED0(v59 + 39, n) )
        {
          v65 = v59 + 38;
          goto LABEL_100;
        }
        v64 = src;
      }
      if ( v59[57] == v64 )
      {
        v51 = n;
        if ( (unsigned __int8)sub_2222ED0(v59 + 58, n) )
        {
          v65 = v59 + 57;
          goto LABEL_100;
        }
      }
      v59 += 76;
      if ( v63 == v59 )
      {
        v59 = v62;
        goto LABEL_97;
      }
    }
  }
  v63 = *(void ***)(v8 + 15760);
LABEL_97:
  v65 = &v59[v228];
  v66 = 0x86BCA1AF286BCA1BLL * (&v59[v228] - v63);
  if ( v66 == 2 )
  {
LABEL_350:
    v194 = src;
    if ( *v63 == src )
    {
      v51 = n;
      if ( (unsigned __int8)sub_2222ED0(v63 + 1, n) )
        goto LABEL_367;
      v194 = src;
    }
    v63 += 19;
LABEL_352:
    if ( *v63 == v194 )
    {
      v51 = n;
      if ( (unsigned __int8)sub_2222ED0(v63 + 1, n) )
        v65 = v63;
    }
    goto LABEL_100;
  }
  if ( v66 != 3 )
  {
    if ( v66 != 1 )
      goto LABEL_100;
    v194 = src;
    goto LABEL_352;
  }
  if ( *v63 != src || (v51 = n, !(unsigned __int8)sub_2222ED0(v63 + 1, n)) )
  {
    v63 += 19;
    goto LABEL_350;
  }
LABEL_367:
  v65 = v63;
LABEL_100:
  v67 = 19LL * *(unsigned int *)(v8 + 15768);
  v68 = *(_QWORD *)(v8 + 15760) + 152LL * *(unsigned int *)(v8 + 15768);
  if ( (__int16 *)n[0] != &v259 )
    free((void *)n[0]);
  if ( (void **)v68 != v65 )
  {
    v159 = sub_C00A40(v9, (__int64)v51, v60, v67, v58);
    v160 = v8 + 8;
    sub_168B9F0((__int64)&src, (__int64 *)(v8 + 8), v159, 0xDABu, 0);
    if ( v261 )
    {
      v160 = v9;
      sub_AE9DF0(&v260, v9, 0xFu);
    }
    else if ( v263 )
    {
      v191 = sub_168B9E0(&src);
      v192 = n[1];
      if ( n[1] )
        v192 = (*(__int64 (__fastcall **)(size_t))(*(_QWORD *)n[1] + 32LL))(n[1]);
      v248 = v192;
      v193 = sub_1587BC0(v191, &v248, v187, v188, v189, v190);
      v160 = v9;
      sub_AE9DF0((unsigned __int8 **)(*v193 + 32LL * v262 + 8), v9, 0xFu);
    }
    v248 = sub_EEC8C0(v9, v160, 0.0);
    sub_1587DB0((__int64)&src, &v248);
    sub_15F7200(&src);
    v216 = 0;
    *(_WORD *)(a6 + 128) = 256;
    goto LABEL_211;
  }
  v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3);
  if ( *(_DWORD *)(v8 + 15772) <= *(_DWORD *)(v8 + 15768) )
  {
    v218 = sub_2237400(v8 + 15760, v8 + 15776, 0, 152, &src);
    v164 = v218 + 152LL * *(unsigned int *)(v8 + 15768);
    *(_QWORD *)v164 = v69;
    *(_QWORD *)(v164 + 16) = 0x2000000000LL;
    v165 = p_src;
    *(_QWORD *)(v164 + 8) = v164 + 24;
    if ( v165 )
      sub_A6DB70((void **)(v164 + 8), (char **)&v251);
    v166 = *(unsigned int *)(v8 + 15768);
    v167 = *(__int64 **)(v8 + 15760);
    v168 = v218;
    v169 = v167;
    if ( v167 != &v167[19 * v166] )
    {
      v170 = &v167[19 * v166];
      do
      {
        v171 = *v169;
        *(_DWORD *)(v168 + 16) = 0;
        *(_DWORD *)(v168 + 20) = 32;
        *(_QWORD *)v168 = v171;
        v172 = *((_DWORD *)v169 + 4);
        *(_QWORD *)(v168 + 8) = v168 + 24;
        if ( v172 )
          sub_1744C20((char ***)(v168 + 8), (char ***)v169 + 1);
        v169 += 19;
        v168 += 152;
      }
      while ( v170 != v169 );
      v167 = *(__int64 **)(v8 + 15760);
      v166 = *(unsigned int *)(v8 + 15768);
    }
    v173 = &v167[19 * v166];
    while ( v167 != v173 )
    {
      while ( 1 )
      {
        v173 -= 19;
        v174 = (__int64 *)v173[1];
        if ( v174 == v173 + 3 )
          break;
        free(v174);
        if ( v167 == v173 )
          goto LABEL_311;
      }
    }
LABEL_311:
    v175 = (int)src;
    v176 = *(void **)(v8 + 15760);
    if ( (void *)(v8 + 15776) != v176 )
      free(v176);
    *(_DWORD *)(v8 + 15772) = v175;
    ++*(_DWORD *)(v8 + 15768);
    *(_QWORD *)(v8 + 15760) = v218;
    v225 = 1;
  }
  else
  {
    v70 = *(_QWORD *)(v8 + 15760) + 152LL * *(unsigned int *)(v8 + 15768);
    *(_QWORD *)v70 = v69;
    *(_QWORD *)(v70 + 16) = 0x2000000000LL;
    v71 = p_src;
    *(_QWORD *)(v70 + 8) = v70 + 24;
    if ( v71 )
      sub_A6DB70((void **)(v70 + 8), (char **)&v251);
    ++*(_DWORD *)(v8 + 15768);
    v225 = 1;
  }
LABEL_107:
  v229 = *(_DWORD *)(v8 + 11200);
  v233 = *(_BYTE *)(v8 + 12592);
  v236 = *(_BYTE *)(v8 + 11248);
  v238 = *(_DWORD *)(*(_QWORD *)(v8 + 264) + 204LL);
  sub_1DBADC0(v8);
  if ( !v72 )
    *(_BYTE *)(v8 + 12592) = 1;
  *(_BYTE *)(v8 + 11248) = 0;
  v216 = sub_1DCD760(v8, v9, a5);
  if ( v216 == 1 )
  {
    if ( *(_DWORD *)(v8 + 11200) <= v229 )
    {
LABEL_206:
      *(_DWORD *)(v8 + 11200) = v229;
      *(_BYTE *)(v8 + 12592) = v233;
      *(_BYTE *)(v8 + 11248) = v236;
      v127 = *(_QWORD *)(v8 + 264);
      if ( *(_DWORD *)(v127 + 204) == 5 )
        *(_BYTE *)(v127 + 194) = 1;
      v128 = 3;
      if ( !v238 )
        v128 = 0;
      *(_DWORD *)(v127 + 204) = v128;
      if ( v225 )
      {
        v156 = (unsigned int)(*(_DWORD *)(v8 + 15768) - 1);
        *(_DWORD *)(v8 + 15768) = v156;
        v157 = *(_QWORD *)(v8 + 15760) + 152 * v156;
        v158 = *(void **)(v157 + 8);
        if ( v158 != (void *)(v157 + 24) )
          free(v158);
      }
LABEL_211:
      if ( v251 != &v253 )
        free(v251);
      goto LABEL_14;
    }
LABEL_111:
    v73 = v267;
    LODWORD(v248) = 0;
    v249 = 0;
    v250 = 0;
    LODWORD(v248) = *(_DWORD *)v267;
    v250 = *((_DWORD *)v267 + 6);
    v74 = *((_QWORD *)v267 + 1);
    *((_DWORD *)v267 + 6) = 0;
    v75 = (unsigned int)v268;
    *(_QWORD *)&v249 = v74;
    v76 = *((_QWORD *)v73 + 2);
    *((_QWORD *)v73 + 1) = 0;
    *((_QWORD *)&v249 + 1) = v76;
    *((_QWORD *)v73 + 2) = 0;
    v77 = &v267[32 * v75];
    if ( v267 != v77 )
    {
      v217 = v8;
      v78 = v267;
      do
      {
        v77 -= 32;
        v79 = *((_QWORD *)v77 + 1);
        if ( v79 )
        {
          v80 = *((_QWORD *)v77 + 2);
          if ( v80 )
          {
            if ( v79 < v80 || v79 > v80 + 14848 )
            {
              v81 = *(_QWORD **)(v79 + 528);
              v82 = &v81[8 * (unsigned __int64)*(unsigned int *)(v79 + 536)];
              if ( v81 != v82 )
              {
                do
                {
                  while ( 1 )
                  {
                    v82 -= 8;
                    v83 = (_QWORD *)v82[3];
                    if ( v83 == v82 + 5 )
                      break;
                    operator delete(v83);
                    if ( v81 == v82 )
                      goto LABEL_119;
                  }
                }
                while ( v81 != v82 );
LABEL_119:
                v82 = *(_QWORD **)(v79 + 528);
              }
              if ( v82 != (_QWORD *)(v79 + 544) )
                free(v82);
              v84 = *(void **)(v79 + 416);
              v85 = (void **)(v79 + 416);
              if ( v84 != (void *)(v79 + 432) )
                free(v84);
              v86 = (void **)(v79 + 96);
              do
              {
                while ( 1 )
                {
                  v85 -= 4;
                  if ( *v85 == v85 + 2 )
                    break;
                  operator delete(*v85);
                  if ( v85 == v86 )
                    goto LABEL_127;
                }
              }
              while ( v85 != v86 );
LABEL_127:
              operator delete((void *)v79, 0x3A0u);
            }
            else
            {
              v133 = *(unsigned int *)(v80 + 14976);
              *(_DWORD *)(v80 + 14976) = v133 + 1;
              *(_QWORD *)(v80 + 8 * v133 + 14848) = v79;
            }
          }
        }
      }
      while ( v78 != v77 );
      v8 = v217;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v87 = *(_QWORD *)(v8 + 264);
    n[1] = si128.m128i_u64[1];
    v259 = 8250;
    LODWORD(v268) = 0;
    BYTE4(v265) = 0;
    src = &v259;
    n[0] = 2;
    sub_1746250((unsigned __int8 **)&v249, v87, &src);
    v88 = LODWORD(n[0]);
    v89 = (void *)sub_1744E40((__int64 *)(*(_QWORD *)(v8 + 248) + 2352LL), LODWORD(n[0]), 3u);
    v90 = n[0];
    if ( n[0] + 1 > n[1] )
    {
      sub_2236E10(&src, &v259, n[0] + 1, 1);
      v90 = n[0];
    }
    *((_BYTE *)src + v90) = 0;
    memcpy(v89, src, v88);
    v91 = sub_1744E40((__int64 *)(*(_QWORD *)(v8 + 248) + 2352LL), 24, 3u);
    v92 = v248;
    *(_QWORD *)(v91 + 8) = v89;
    *(_DWORD *)v91 = v92;
    *(_QWORD *)(v91 + 16) = v88;
    v93 = *(unsigned int *)(a6 + 144);
    v94 = *(unsigned int *)(a6 + 148);
    if ( v93 >= v94 )
    {
      v195 = v91 | 2;
      if ( v94 < v93 + 1 )
      {
        sub_2237220(a6 + 136, a6 + 152, v93 + 1, 8);
        v93 = *(unsigned int *)(a6 + 144);
      }
      *(_QWORD *)(*(_QWORD *)(a6 + 136) + 8 * v93) = v195;
      v95 = a6;
      ++*(_DWORD *)(a6 + 144);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a6 + 136) + 8 * v93) = v91 | 2;
      v95 = a6;
      ++*(_DWORD *)(a6 + 144);
    }
    *(_BYTE *)(v95 + 128) = 0;
    if ( src != &v259 )
      free(src);
    if ( (_QWORD)v249 )
    {
      v216 = 0;
      if ( *((_QWORD *)&v249 + 1) )
        sub_1580C40(*((unsigned __int64 *)&v249 + 1), v249);
    }
    else
    {
      v216 = 0;
    }
    goto LABEL_206;
  }
  if ( *(_DWORD *)(v8 + 11200) > v229 )
    goto LABEL_111;
  *(_DWORD *)(v8 + 11200) = v229;
  *(_BYTE *)(v8 + 12592) = v233;
  *(_BYTE *)(v8 + 11248) = v236;
  v102 = *(_QWORD *)(v8 + 264);
  if ( *(_DWORD *)(v102 + 204) == 5 )
    *(_BYTE *)(v102 + 194) = 1;
  v103 = 3;
  if ( !v238 )
    v103 = 0;
  *(_DWORD *)(v102 + 204) = v103;
  if ( v225 )
  {
    v161 = (unsigned int)(*(_DWORD *)(v8 + 15768) - 1);
    *(_DWORD *)(v8 + 15768) = v161;
    v162 = *(_QWORD *)(v8 + 15760) + 152 * v161;
    v163 = *(void **)(v162 + 8);
    if ( v163 != (void *)(v162 + 24) )
      free(v163);
  }
  if ( v251 != &v253 )
    free(v251);
  sub_1DBADA0(&v246);
  if ( ptr != v291 )
    free(ptr);
  if ( v285 != v287 )
    free(v285);
  if ( v280 != v282 )
    free(v280);
  v106 = v267;
  v107 = &v267[32 * (unsigned int)v268];
  if ( v267 != v107 )
  {
    do
    {
      v107 -= 32;
      v108 = *((_QWORD *)v107 + 1);
      if ( v108 )
      {
        v109 = *((_QWORD *)v107 + 2);
        if ( v109 )
        {
          if ( v108 < v109 || v108 > v109 + 14848 )
          {
            v110 = *(_QWORD **)(v108 + 528);
            v111 = &v110[8 * (unsigned __int64)*(unsigned int *)(v108 + 536)];
            if ( v110 != v111 )
            {
              do
              {
                while ( 1 )
                {
                  v111 -= 8;
                  v112 = (_QWORD *)v111[3];
                  if ( v112 == v111 + 5 )
                    break;
                  operator delete(v112);
                  if ( v110 == v111 )
                    goto LABEL_174;
                }
              }
              while ( v110 != v111 );
LABEL_174:
              v111 = *(_QWORD **)(v108 + 528);
            }
            if ( v111 != (_QWORD *)(v108 + 544) )
              free(v111);
            v113 = *(void **)(v108 + 416);
            if ( v113 != (void *)(v108 + 432) )
              free(v113);
            v114 = (void **)(v108 + 384);
            v115 = (void **)(v108 + 64);
            do
            {
              while ( *v114 != v114 + 2 )
              {
                operator delete(*v114);
                v114 -= 4;
                if ( v114 == v115 )
                  goto LABEL_182;
              }
              v114 -= 4;
            }
            while ( v115 != v114 );
LABEL_182:
            operator delete((void *)v108, 0x3A0u);
          }
          else
          {
            v134 = *(unsigned int *)(v109 + 14976);
            *(_DWORD *)(v109 + 14976) = v134 + 1;
            *(_QWORD *)(v109 + 8 * v134 + 14848) = v108;
          }
        }
      }
    }
    while ( v106 != v107 );
    v107 = v267;
  }
  if ( v107 != v269 )
    free(v107);
  v248 = 0;
  *(_QWORD *)&v249 = 0;
  v116 = v216 & 0xFFFFFFFFFFFFFFFELL;
  DWORD2(v249) = 0;
  if ( !(unsigned __int8)sub_174DEF0(
                           v8,
                           v216 & 0xFFFFFFFFFFFFFFFELL,
                           nullptr,
                           0,
                           0.0,
                           v104,
                           v105,
                           0,
                           0,
                           *((__int64 *)&v249 + 1)) )
  {
    sub_190D5E0(v8);
    return 1;
  }
  if ( (*(_BYTE *)(v116 + 1) & 6) != 0 )
  {
    v216 = sub_C0A3E0(*(_QWORD **)(v8 + 248), *(_QWORD *)(v116 + 8), 4, v116, 0, 0, 0);
    goto LABEL_40;
  }
  sub_190D5E0(v8);
LABEL_41:
  result = 0;
  if ( v216 )
  {
    v31 = v216 & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(_DWORD *)(v216 & 0xFFFFFFFFFFFFFFFELL) & 0x40000) != 0 )
    {
      *(_WORD *)(a6 + 128) = 256;
      sub_168B9B0((__int64)&src, v8 + 8, 5850);
      v117 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      LOWORD(v266) = 8250;
      v118 = *(_QWORD *)(v8 + 264);
      v265 = v117.m128i_u64[1];
      v264[0] = (size_t)&v266;
      v264[1] = 2;
      sub_1746250((unsigned __int8 **)&src, v118, v264);
      v119 = LODWORD(v264[1]);
      v120 = (void *)sub_1744E40((__int64 *)(*(_QWORD *)(v8 + 248) + 2352LL), LODWORD(v264[1]), 3u);
      v121 = v264[1];
      if ( v264[1] + 1 > v265 )
      {
        sub_2236E10(v264, &v266, v264[1] + 1, 1);
        v121 = v264[1];
      }
      *(_BYTE *)(v264[0] + v121) = 0;
      v122 = v264[0];
      memcpy(v120, (const void *)v264[0], v119);
      v123 = sub_EEB7E0(v31, v122, *(double *)v117.m128i_i64);
      v124 = sub_1744E40((__int64 *)(*(_QWORD *)(v8 + 248) + 2352LL), 24, 3u);
      *(_DWORD *)v124 = v123;
      *(_QWORD *)(v124 + 8) = v120;
      *(_QWORD *)(v124 + 16) = v119;
      v125 = *(unsigned int *)(a6 + 144);
      v126 = *(unsigned int *)(a6 + 148);
      if ( v125 >= v126 )
      {
        v179 = v124 | 2;
        if ( v126 < v125 + 1 )
        {
          sub_2237220(a6 + 136, a6 + 152, v125 + 1, 8);
          v125 = *(unsigned int *)(a6 + 144);
        }
        *(_QWORD *)(*(_QWORD *)(a6 + 136) + 8 * v125) = v179;
        ++*(_DWORD *)(a6 + 144);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a6 + 136) + 8 * v125) = v124 | 2;
        ++*(_DWORD *)(a6 + 144);
      }
      result = v216;
      if ( (__int64 *)v264[0] != &v266 )
      {
        free((void *)v264[0]);
        result = v216;
      }
      if ( src && n[0] )
      {
        v214 = result;
        sub_1580C40(n[0], (unsigned __int64)src);
        return v214;
      }
    }
    else
    {
      sub_18C74E0(v8, 4, 0, 4);
      LOWORD(v251) = 0;
      v32 = *(_QWORD *)(v8 + 248);
      src = &n[1];
      p_src = (__int64)&src;
      v254 &= ~1u;
      n[0] = 0x200000000LL;
      v253 = 0;
      if ( !(unsigned __int8)sub_C82410(v31, (__int64)&v251, v32, 0, v33, v34) || LODWORD(n[0]) )
      {
        v135 = sub_EEB7E0(v31, (__int64)&v251, *(double *)si128.m128i_i64);
        sub_168B9F0((__int64)v264, (__int64 *)(v8 + 8), v135, 0x10C4u, 0);
        v246 = sub_EEC8C0(v31, v8 + 8, *(double *)si128.m128i_i64);
        sub_1587DB0((__int64)v264, &v246);
        sub_15F7200(v264);
        v136 = (unsigned int *)src;
        v137 = (unsigned int *)((char *)src + 32 * LODWORD(n[0]));
        if ( src != v137 )
        {
          do
          {
            v138 = *v136;
            v139 = (__int64)(v136 + 2);
            v136 += 8;
            sub_168CDE0((__int64)v264, (__int64 *)(v8 + 8), v138, v139, 0);
            sub_15F7200(v264);
          }
          while ( v137 != v136 );
        }
        v38 = 1;
      }
      else
      {
        v35 = v256;
        if ( v256 <= 0x40 )
          v36 = v255 == 0;
        else
          v36 = v35 == (unsigned int)sub_2206780(&v255);
        v37 = !v36;
        *(_BYTE *)(a6 + 128) = v37;
        if ( !v37 )
        {
          v177 = *(unsigned int *)(a6 + 144);
          v178 = *(unsigned int *)(a6 + 148);
          if ( v177 >= v178 && v178 < v177 + 1 )
          {
            sub_2237220(a6 + 136, a6 + 152, v177 + 1, 8);
            v177 = *(unsigned int *)(a6 + 144);
          }
          *(_QWORD *)(*(_QWORD *)(a6 + 136) + 8 * v177) = v216 & 0xFFFFFFFFFFFFFFFCLL;
          ++*(_DWORD *)(a6 + 144);
        }
        v38 = v216;
      }
      if ( v253 > 1 )
      {
        v210 = v38;
        sub_A4F8E0((int *)&v253);
        v38 = v210;
      }
      v39 = (size_t *)src;
      v40 = (size_t *)((char *)src + 32 * LODWORD(n[0]));
      if ( src != v40 )
      {
        v211 = v8;
        v41 = v38;
        do
        {
          v40 -= 4;
          v42 = v40[1];
          if ( v42 )
          {
            v43 = v40[2];
            if ( v43 )
            {
              if ( v42 < v43 || v42 > v43 + 14848 )
              {
                v44 = *(_QWORD **)(v42 + 528);
                v45 = &v44[8 * (unsigned __int64)*(unsigned int *)(v42 + 536)];
                if ( v44 != v45 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v45 -= 8;
                      v46 = (_QWORD *)v45[3];
                      if ( v46 == v45 + 5 )
                        break;
                      operator delete(v46);
                      if ( v44 == v45 )
                        goto LABEL_59;
                    }
                  }
                  while ( v44 != v45 );
LABEL_59:
                  v45 = *(_QWORD **)(v42 + 528);
                }
                if ( v45 != (_QWORD *)(v42 + 544) )
                  free(v45);
                v47 = *(void **)(v42 + 416);
                v48 = (void **)(v42 + 416);
                if ( v47 != (void *)(v42 + 432) )
                  free(v47);
                v49 = (void **)(v42 + 96);
                do
                {
                  while ( 1 )
                  {
                    v48 -= 4;
                    if ( *v48 == v48 + 2 )
                      break;
                    operator delete(*v48);
                    if ( v48 == v49 )
                      goto LABEL_67;
                  }
                }
                while ( v48 != v49 );
LABEL_67:
                operator delete((void *)v42, 0x3A0u);
              }
              else
              {
                v132 = *(unsigned int *)(v43 + 14976);
                *(_DWORD *)(v43 + 14976) = v132 + 1;
                *(_QWORD *)(v43 + 8 * v132 + 14848) = v42;
              }
            }
          }
        }
        while ( v39 != v40 );
        v8 = v211;
        v40 = (size_t *)src;
        v38 = v41;
      }
      if ( v40 != &n[1] )
      {
        v212 = v38;
        free(v40);
        v38 = v212;
      }
      v213 = v38;
      sub_190D5E0(v8);
      return v213;
    }
  }
  return result;
}
