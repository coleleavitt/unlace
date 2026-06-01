void __fastcall sub_156A330(const __m128i *a1, __int64 a2, __m128i a3, __m128 a4)
{
  int v5; // edx
  __int64 v6; // rax
  int v7; // ebp
  char *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rbp
  void *v12; // rdi
  void *v13; // rdi
  char *v14; // r12
  __int64 v15; // rbp
  char *v16; // r13
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int i; // r12d
  __int64 v20; // rax
  void **v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r14
  void **v25; // rbx
  void *v26; // r12
  __int64 v27; // r12
  void *v28; // rdi
  void *v29; // rdi
  char v30; // al
  char *v31; // rbp
  char *v32; // rdi
  __int32 v33; // eax
  __int64 *v34; // rdi
  __int64 v35; // rax
  char *v36; // rbp
  char *v37; // r12
  signed __int64 v38; // r8
  signed __int64 v39; // rcx
  char *v40; // r9
  char *v41; // r10
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // rdx
  __int64 v44; // r11
  unsigned int v45; // r14d
  __int64 v46; // rax
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  char *v51; // r12
  void *v52; // rdi
  void **v53; // r12
  __int64 v54; // rsi
  __int64 v55; // rbp
  void *v56; // rdi
  void *v57; // rdi
  int v58; // esi
  _QWORD *v59; // rdi
  _QWORD *v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // r14
  unsigned __int8 *v63; // rbp
  unsigned __int8 *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // r12
  __int64 v67; // rbp
  void *v68; // rdi
  void *v69; // rdi
  char *v70; // r13
  __int64 v71; // rbp
  __int64 v72; // r12
  char *v73; // r14
  int v74; // eax
  unsigned int v75; // ecx
  unsigned int m; // r13d
  __int64 v77; // rax
  void **v78; // rbx
  __int64 v79; // rdi
  __int64 v80; // rsi
  __int64 v81; // rbx
  void **v82; // r13
  void *v83; // r13
  __int64 v84; // r13
  void *v85; // rdi
  void *v86; // rdi
  char v87; // al
  char *v88; // rbp
  char *v89; // rdi
  char *v90; // r12
  char *v91; // rbp
  char *v92; // rdi
  __int64 v93; // rbp
  __int64 v94; // rbx
  void *v95; // rdi
  void *v96; // rdi
  _QWORD *v97; // rdx
  int v98; // eax
  __int64 v99; // rax
  __int64 v100; // r12
  __int64 v101; // rdx
  __int64 v102; // r12
  __int64 v103; // r13
  void *v104; // rdi
  void *v105; // rdi
  char *v106; // rdi
  char *v107; // r14
  size_t v108; // r11
  __int64 v109; // r13
  unsigned __int64 v110; // rdx
  __int64 *v111; // rdi
  void **v112; // r13
  __int64 v113; // rsi
  int v114; // edx
  __int64 v115; // r12
  __int64 v116; // rbp
  void *v117; // rdi
  void *v118; // rdi
  char *v119; // r13
  __int64 v120; // rbp
  __int64 v121; // r12
  char *v122; // r14
  int v123; // eax
  unsigned int v124; // ecx
  unsigned int k; // r13d
  __int64 v126; // rax
  void **v127; // rbx
  __int64 v128; // rdi
  __int64 v129; // rsi
  __int64 v130; // rbx
  void **v131; // r13
  void *v132; // r13
  __int64 v133; // r13
  void *v134; // rdi
  void *v135; // rdi
  char v136; // al
  char *v137; // rbp
  char *v138; // rdi
  char *v139; // r12
  char *v140; // rbp
  char *v141; // rdi
  __int64 v142; // rbx
  void *v143; // rdi
  void *v144; // rdi
  void *v145; // rdi
  __int64 v146; // rax
  __int64 v147; // rbp
  void *v148; // rdi
  void *v149; // rdi
  __int64 v150; // rax
  __int64 v151; // rbx
  void *v152; // rdi
  void *v153; // rdi
  void **v154; // r13
  __int64 j; // rax
  __int64 *v156; // rdi
  _QWORD *v157; // rdx
  int v158; // eax
  __int64 v159; // rax
  __int64 v160; // r12
  __int64 v161; // rdx
  __int64 v162; // r12
  __int64 v163; // r13
  void *v164; // rdi
  void *v165; // rdi
  void *v166; // rdi
  __int64 v167; // rax
  __int64 v168; // rbp
  void *v169; // rdi
  void *v170; // rdi
  _DWORD *v171; // rax
  __int64 v172; // rdx
  _DWORD *v173; // rdi
  __int64 v174; // rbx
  size_t n; // [rsp+0h] [rbp-CB8h]
  size_t nb; // [rsp+0h] [rbp-CB8h]
  size_t nc; // [rsp+0h] [rbp-CB8h]
  size_t na; // [rsp+0h] [rbp-CB8h]
  size_t nd; // [rsp+0h] [rbp-CB8h]
  char *v180; // [rsp+8h] [rbp-CB0h]
  char *v181; // [rsp+8h] [rbp-CB0h]
  char *v182; // [rsp+8h] [rbp-CB0h]
  char *v183; // [rsp+8h] [rbp-CB0h]
  signed __int64 v184; // [rsp+8h] [rbp-CB0h]
  signed __int64 v185; // [rsp+8h] [rbp-CB0h]
  char *v186; // [rsp+8h] [rbp-CB0h]
  char *v187; // [rsp+8h] [rbp-CB0h]
  signed __int64 v188; // [rsp+8h] [rbp-CB0h]
  _DWORD *v189; // [rsp+38h] [rbp-C80h]
  char *v190; // [rsp+40h] [rbp-C78h]
  char *v191; // [rsp+40h] [rbp-C78h]
  char *v192; // [rsp+40h] [rbp-C78h]
  char *v193; // [rsp+40h] [rbp-C78h]
  __int64 v194; // [rsp+48h] [rbp-C70h]
  char *v195; // [rsp+48h] [rbp-C70h]
  size_t v197; // [rsp+58h] [rbp-C60h]
  __int64 v198; // [rsp+68h] [rbp-C50h] BYREF
  int v199; // [rsp+70h] [rbp-C48h] BYREF
  __int64 v200; // [rsp+78h] [rbp-C40h]
  __int64 v201; // [rsp+80h] [rbp-C38h]
  unsigned __int8 *v202; // [rsp+90h] [rbp-C28h] BYREF
  void *v203; // [rsp+98h] [rbp-C20h]
  __int64 v204; // [rsp+A0h] [rbp-C18h]
  _BYTE v205[16]; // [rsp+A8h] [rbp-C10h] BYREF
  __int8 *v206; // [rsp+B8h] [rbp-C00h] BYREF
  void *ptr; // [rsp+C0h] [rbp-BF8h]
  __int64 v208; // [rsp+C8h] [rbp-BF0h]
  _BYTE v209[16]; // [rsp+D0h] [rbp-BE8h] BYREF
  _QWORD v210[5]; // [rsp+E0h] [rbp-BD8h] BYREF
  void *v211; // [rsp+108h] [rbp-BB0h]
  __int64 v212; // [rsp+110h] [rbp-BA8h]
  _BYTE v213[16]; // [rsp+118h] [rbp-BA0h] BYREF
  __int8 *v214; // [rsp+128h] [rbp-B90h] BYREF
  void *v215; // [rsp+130h] [rbp-B88h]
  __int64 v216; // [rsp+138h] [rbp-B80h]
  _QWORD v217[4]; // [rsp+140h] [rbp-B78h] BYREF
  void *v218; // [rsp+160h] [rbp-B58h]
  __int64 v219; // [rsp+168h] [rbp-B50h]
  __int64 v220; // [rsp+170h] [rbp-B48h]
  __int64 v221; // [rsp+178h] [rbp-B40h]
  __int64 v222; // [rsp+180h] [rbp-B38h]
  __int64 v223; // [rsp+188h] [rbp-B30h]
  __int64 v224; // [rsp+190h] [rbp-B28h]
  __int64 v225; // [rsp+198h] [rbp-B20h]
  __int64 v226; // [rsp+1A0h] [rbp-B18h]
  __int64 v227; // [rsp+1A8h] [rbp-B10h]
  __int64 v228; // [rsp+1B0h] [rbp-B08h]
  __int64 v229; // [rsp+1B8h] [rbp-B00h]
  __int64 v230; // [rsp+1C0h] [rbp-AF8h]
  __int64 v231; // [rsp+1C8h] [rbp-AF0h]
  __int64 v232; // [rsp+1D0h] [rbp-AE8h]
  __int64 v233; // [rsp+1D8h] [rbp-AE0h]
  __int64 v234; // [rsp+1E0h] [rbp-AD8h]
  __int64 v235; // [rsp+1E8h] [rbp-AD0h]
  __int64 v236; // [rsp+1F0h] [rbp-AC8h]
  __int16 v237; // [rsp+1F8h] [rbp-AC0h]
  __int64 v238; // [rsp+200h] [rbp-AB8h]
  _QWORD *v239; // [rsp+210h] [rbp-AA8h] BYREF
  __int64 v240; // [rsp+218h] [rbp-AA0h]
  void *v241[2]; // [rsp+220h] [rbp-A98h]
  __int64 v242; // [rsp+230h] [rbp-A88h]
  __int64 v243; // [rsp+238h] [rbp-A80h]
  __int64 v244; // [rsp+240h] [rbp-A78h]
  int v245; // [rsp+248h] [rbp-A70h]
  __int64 v246; // [rsp+250h] [rbp-A68h]
  __int64 v247; // [rsp+260h] [rbp-A58h]
  __int64 v248; // [rsp+268h] [rbp-A50h]
  int v249; // [rsp+270h] [rbp-A48h]
  __int64 v250; // [rsp+278h] [rbp-A40h]
  __int64 v251; // [rsp+280h] [rbp-A38h]
  int v252; // [rsp+288h] [rbp-A30h]
  char *v253; // [rsp+290h] [rbp-A28h]
  __int64 v254; // [rsp+298h] [rbp-A20h]
  __int64 v255; // [rsp+2A0h] [rbp-A18h] BYREF
  __int16 v256; // [rsp+4E0h] [rbp-7D8h]
  __int64 v257; // [rsp+4E8h] [rbp-7D0h]
  void *src; // [rsp+4F0h] [rbp-7C8h]
  __int64 v259; // [rsp+4F8h] [rbp-7C0h]
  __int64 v260; // [rsp+500h] [rbp-7B8h] BYREF
  __int8 *v261; // [rsp+510h] [rbp-7A8h]
  void *v262; // [rsp+518h] [rbp-7A0h]
  __int64 v263; // [rsp+520h] [rbp-798h]
  _QWORD v264[3]; // [rsp+528h] [rbp-790h] BYREF
  __int64 v265; // [rsp+540h] [rbp-778h]
  __int64 v266; // [rsp+548h] [rbp-770h]
  __int64 v267; // [rsp+550h] [rbp-768h]
  __int64 v268; // [rsp+558h] [rbp-760h]
  __int64 v269; // [rsp+560h] [rbp-758h]
  __int64 v270; // [rsp+C68h] [rbp-50h]
  __int64 v271; // [rsp+C70h] [rbp-48h]

  v5 = *(_DWORD *)(a2 + 136);
  v189 = *(_DWORD **)(a2 + 128);
  if ( v5 )
  {
    v6 = 1LL << **(_DWORD **)(a2 + 128);
    if ( (v6 & 0xB7) == 0 && (v6 & 0x40) != 0 )
    {
      v171 = v189 + 36;
      v172 = (__int64)&v189[36 * (v5 - 1) + 36];
      while ( (_DWORD *)v172 != v171 )
      {
        v173 = v171;
        v174 = 1LL << *v171;
        if ( (v174 & 0xB7) != 0 )
          break;
        v171 += 36;
        if ( (v174 & 0x40) == 0 )
        {
          v189 = v173;
          break;
        }
      }
    }
  }
  sub_146B5E0(&v198, (__int64)a1, 0x308u, 1, 0);
  while ( 2 )
  {
    if ( !sub_147EA80((__int64)a1, 0, 0) )
      goto LABEL_201;
LABEL_6:
    v7 = a1[1].m128i_i32[0];
    v210[0] &= 0xFFFFFFC000000000LL;
    v211 = v213;
    v214 = &a1[31].m128i_i8[8];
    v215 = v217;
    memset(&v210[2], 0, 24);
    v212 = 0x200000000LL;
    v216 = 0x200000000LL;
    v217[2] = 0;
    v217[3] = 0;
    v218 = nullptr;
    v219 = 0;
    v220 = 0;
    v221 = 0;
    v222 = 0;
    v223 = 0;
    v224 = 0;
    v225 = 0;
    v226 = 0;
    v227 = 0;
    v228 = 0;
    v229 = 0;
    v230 = 0;
    v231 = 0;
    v232 = 0;
    v233 = 0;
    v234 = 0;
    v235 = 0;
    v236 = 0;
    v238 = 0;
    v199 = 0;
    v200 = 0;
    v201 = 0;
    v237 &= 0xF000u;
    sub_1487580((__int64)a1, (__int64)v210, (__int64)&v199, 3u, 0, 0, a3, a4, 0);
    if ( a1[2].m128i_i16[0] == 63 )
    {
      v111 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v111, a1[1].m128i_i32);
      sub_FC70B0((__int64)&v239, a1[6].m128i_i64[1], v7, 1582);
      sub_AEA040((__int64)&v239);
      if ( !HIDWORD(v219) )
        goto LABEL_197;
      goto LABEL_231;
    }
    if ( (v210[0] & 7) != 5 && (v210[0] & 7) != 0 )
    {
      v113 = a1[6].m128i_i64[1];
      v8 = (char *)&v239;
      v114 = v223;
      goto LABEL_240;
    }
    v8 = (char *)&v239;
    if ( (v210[0] & 0x18) != 0 )
    {
      v113 = a1[6].m128i_i64[1];
      v114 = HIDWORD(v223);
LABEL_240:
      sub_FC70B0((__int64)&v239, v113, v114, 28);
      sub_AEA040((__int64)&v239);
      LOBYTE(v210[0]) &= 0xC0u;
      v223 = 0;
    }
    if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
    {
      qword_2CD8AE0[0] = 0;
      qword_2CD8AE0[1] = &qword_2CD8AE0[3];
      qword_2CD8AE0[2] = 0x200000000LL;
      __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
      __cxa_guard_release(&qword_2CD8AC8);
    }
    a3 = 0;
    *(_OWORD *)v241 = 0;
    v239 = v210;
    v240 = 0;
    v248 = v222;
    v253 = (char *)&v255;
    v254 = 0x400000000LL;
    v242 = 0;
    v243 = 0;
    v244 = 0;
    v245 = 0;
    v246 = 0;
    v247 = 0;
    v249 = 4;
    LOBYTE(v256) = (((LODWORD(v210[0]) >> 12) & 0x7F) == 69) | v256 & 0xFE;
    src = &v260;
    v256 &= 0xFC01u;
    v261 = v214;
    v262 = v264;
    v250 = 0;
    v251 = 0;
    v252 = 0;
    v257 = 0;
    v259 = 0x200000000LL;
    v263 = 0x200000000LL;
    v264[2] = qword_2CD8AE0;
    v265 = 0;
    v266 = 0;
    v267 = 0;
    v268 = 0;
    v269 = 0;
    v270 = 0;
    sub_147E3E0((__int64)a1, (__int64)&v239);
    if ( a1[2].m128i_i16[0] == 189 )
      goto LABEL_69;
    while ( 1 )
    {
      v9 = sub_17D1A30(a1[6].m128i_i64[0], *(_QWORD *)(a1[6].m128i_i64[0] + 608), v8, 0);
      if ( !v9 || v245 || !v246 )
        goto LABEL_15;
      v58 = v189[18];
      if ( !v58 )
        goto LABEL_115;
      v59 = *((_QWORD **)v189 + 12);
      if ( v246 != *v59 )
      {
        v60 = v59 + 4;
        v61 = (__int64)&v59[4 * (unsigned int)(v58 - 1) + 4];
        while ( (_QWORD *)v61 != v60 )
        {
          v59 = v60;
          v60 += 4;
          if ( *(v60 - 4) == v246 )
            goto LABEL_204;
        }
LABEL_115:
        v62 = 0;
        sub_FC70B0((__int64)&v202, a1[6].m128i_i64[1], v247, 1754);
        if ( !v245 )
          v62 = v246;
        v63 = v202;
        if ( !v202 )
        {
          v157 = v203;
          v158 = *((_DWORD *)v203 + 3744);
          if ( v158 )
          {
            v159 = (unsigned int)(v158 - 1);
            *((_DWORD *)v203 + 3744) = v159;
            v63 = (unsigned __int8 *)v157[v159 + 1856];
            v160 = *((unsigned int *)v63 + 134);
            *v63 = 0;
            v161 = *((_QWORD *)v63 + 66);
            *((_DWORD *)v63 + 106) = 0;
            v162 = v161 + (v160 << 6);
            v163 = v161;
            if ( v161 == v162 )
              goto LABEL_212;
            do
            {
              while ( 1 )
              {
                v162 -= 64;
                v164 = *(void **)(v162 + 24);
                if ( v164 == (void *)(v162 + 40) )
                  break;
                operator delete(v164);
                if ( v163 == v162 )
                  goto LABEL_212;
              }
            }
            while ( v163 != v162 );
            *((_DWORD *)v63 + 134) = 0;
            goto LABEL_214;
          }
          goto LABEL_213;
        }
        goto LABEL_118;
      }
LABEL_204:
      if ( !v59[2] )
      {
        v59[2] = v9;
LABEL_15:
        if ( a1[2].m128i_i16[0] != 66 )
          break;
        goto LABEL_16;
      }
      v62 = 0;
      sub_FC70B0((__int64)&v202, a1[6].m128i_i64[1], v247, 55);
      if ( !v245 )
        v62 = v246;
      v63 = v202;
      if ( !v202 )
      {
        v97 = v203;
        v98 = *((_DWORD *)v203 + 3744);
        if ( v98 )
        {
          v99 = (unsigned int)(v98 - 1);
          *((_DWORD *)v203 + 3744) = v99;
          v63 = (unsigned __int8 *)v97[v99 + 1856];
          v100 = *((unsigned int *)v63 + 134);
          *v63 = 0;
          v101 = *((_QWORD *)v63 + 66);
          *((_DWORD *)v63 + 106) = 0;
          v102 = v101 + (v100 << 6);
          v103 = v101;
          if ( v101 != v102 )
          {
            do
            {
              while ( 1 )
              {
                v102 -= 64;
                v104 = *(void **)(v102 + 24);
                if ( v104 == (void *)(v102 + 40) )
                  break;
                operator delete(v104);
                if ( v103 == v102 )
                  goto LABEL_212;
              }
            }
            while ( v103 != v102 );
            *((_DWORD *)v63 + 134) = 0;
            goto LABEL_214;
          }
LABEL_212:
          *((_DWORD *)v63 + 134) = 0;
LABEL_214:
          v202 = v63;
          goto LABEL_118;
        }
LABEL_213:
        v63 = (unsigned __int8 *)operator new(0x3A0u);
        *v63 = 0;
        *((_QWORD *)v63 + 12) = v63 + 112;
        *((_QWORD *)v63 + 16) = v63 + 144;
        *((_QWORD *)v63 + 20) = v63 + 176;
        *((_QWORD *)v63 + 24) = v63 + 208;
        *((_QWORD *)v63 + 28) = v63 + 240;
        *((_QWORD *)v63 + 32) = v63 + 272;
        *((_QWORD *)v63 + 36) = v63 + 304;
        *((_QWORD *)v63 + 40) = v63 + 336;
        *((_QWORD *)v63 + 44) = v63 + 368;
        *((_QWORD *)v63 + 48) = v63 + 400;
        *((_QWORD *)v63 + 52) = v63 + 432;
        *((_QWORD *)v63 + 13) = 0;
        v63[112] = 0;
        *((_QWORD *)v63 + 17) = 0;
        v63[144] = 0;
        *((_QWORD *)v63 + 21) = 0;
        v63[176] = 0;
        *((_QWORD *)v63 + 25) = 0;
        v63[208] = 0;
        *((_QWORD *)v63 + 29) = 0;
        v63[240] = 0;
        *((_QWORD *)v63 + 33) = 0;
        v63[272] = 0;
        *((_QWORD *)v63 + 37) = 0;
        v63[304] = 0;
        *((_QWORD *)v63 + 41) = 0;
        v63[336] = 0;
        *((_QWORD *)v63 + 45) = 0;
        v63[368] = 0;
        *((_QWORD *)v63 + 49) = 0;
        v63[400] = 0;
        *((_QWORD *)v63 + 53) = 0x800000000LL;
        *((_QWORD *)v63 + 66) = v63 + 544;
        *((_QWORD *)v63 + 67) = 0x600000000LL;
        goto LABEL_214;
      }
LABEL_118:
      v63[*v63 + 1] = 5;
      v64 = v202;
      v65 = *v202;
      *v202 = v65 + 1;
      *(_QWORD *)&v64[8 * v65 + 16] = v62;
      sub_AEA040((__int64)&v202);
      if ( a1[2].m128i_i16[0] != 66 )
        break;
LABEL_16:
      v240 = 0;
      v241[0] = nullptr;
      LODWORD(v242) = 0;
      v10 = v251;
      v245 = 0;
      v246 = 0;
      v247 = 0;
      v248 = v239[20];
      v250 = 0;
      if ( v252 < 0 )
      {
        if ( v251 )
        {
          v54 = 112LL * *(_QWORD *)(v251 - 8);
          v55 = v251 + v54;
          if ( v251 + v54 != v251 )
          {
            while ( 1 )
            {
              v10 = v55 - 112;
              if ( !*(_BYTE *)(v55 - 16) )
                goto LABEL_101;
              sub_15DCED0(*(_QWORD *)(v55 - 56), v10 + 56);
              v56 = *(void **)(v55 - 48);
              if ( v56 != (void *)(v10 + 80) )
                free(v56);
              v57 = *(void **)(v10 + 24);
              if ( v57 == (void *)(v10 + 40) )
              {
LABEL_101:
                if ( v251 == v10 )
                  goto LABEL_108;
              }
              else
              {
                free(v57);
                if ( v251 == v10 )
                {
LABEL_108:
                  v54 = 112LL * *(_QWORD *)(v55 - 120);
                  break;
                }
              }
              v55 -= 112;
            }
          }
          operator delete[]((void *)(v10 - 8), v54 + 8);
        }
      }
      else
      {
        v11 = v251 + 112LL * (v252 & 0x7FFFFFFF);
        if ( v11 != v251 )
        {
          do
          {
            while ( 1 )
            {
              if ( *(_BYTE *)(v10 + 96) )
              {
                *(_BYTE *)(v10 + 96) = 0;
                sub_15DCED0(*(_QWORD *)(v10 + 56), v10 + 56);
                v12 = *(void **)(v10 + 64);
                if ( v12 != (void *)(v10 + 80) )
                  free(v12);
                v13 = *(void **)(v10 + 24);
                if ( v13 != (void *)(v10 + 40) )
                  break;
              }
              v10 += 112;
              if ( v11 == v10 )
                goto LABEL_25;
            }
            free(v13);
            v10 += 112;
          }
          while ( v11 != v10 );
        }
      }
LABEL_25:
      v251 = 0;
      v252 = 0;
      if ( !(_DWORD)v254 )
        goto LABEL_68;
      v14 = v253;
      v15 = 0;
      v180 = v8;
      n = 16 * (9LL * (unsigned int)(v254 - 1) + 9);
      do
      {
        while ( 1 )
        {
          v16 = &v14[v15];
          v17 = *(_DWORD *)&v14[v15];
          if ( v17 != 3 )
          {
            if ( v17 != 5 || !*((_DWORD *)v16 + 23) )
              goto LABEL_29;
            free(*((void **)v16 + 10));
            goto LABEL_63;
          }
          v18 = *((_DWORD *)v16 + 18);
          for ( i = 0; i < v18; ++i )
          {
            v20 = *((_QWORD *)v16 + 12) + 32LL * i;
            v21 = *(void ***)(v20 + 24);
            *(_QWORD *)(v20 + 24) = 0;
            if ( v21 )
            {
              if ( *v21 != v21 + 2 )
                free(*v21);
              operator delete(v21, 0x70u);
              v18 = *((_DWORD *)v16 + 18);
            }
          }
          if ( (v16[57] & 1) != 0 )
          {
            v22 = *((_QWORD *)v16 + 12);
            if ( v22 )
            {
              v23 = 32LL * *(_QWORD *)(v22 - 8);
              v24 = v22 + v23;
              if ( v22 != v22 + v23 )
              {
                while ( 1 )
                {
                  v25 = *(void ***)(v24 - 8);
                  if ( v25 )
                  {
                    if ( *v25 != v25 + 2 )
                      free(*v25);
                    operator delete(v25, 0x70u);
                    v22 = *((_QWORD *)v16 + 12);
                  }
                  if ( v24 - 32 == v22 )
                    break;
                  v24 -= 32;
                }
                v23 = 32LL * *(_QWORD *)(v24 - 40);
              }
              operator delete[]((void *)(v22 - 8), v23 + 8);
            }
            v16[57] &= ~1u;
          }
          v26 = *((void **)v16 + 14);
          *((_DWORD *)v16 + 18) = 0;
          if ( v26 )
          {
            sub_15D7C30(v26);
            operator delete(v26, 0x520u);
          }
          v27 = *((_QWORD *)v16 + 13);
          if ( v27 )
          {
            if ( *(_DWORD *)(v27 + 140) )
              free(*(void **)(v27 + 128));
            sub_15DCED0(*(_QWORD *)(v27 + 72), v27 + 72);
            v28 = *(void **)(v27 + 80);
            if ( v28 != (void *)(v27 + 96) )
              free(v28);
            v29 = *(void **)(v27 + 40);
            if ( v29 != (void *)(v27 + 56) )
              free(v29);
            operator delete((void *)v27, 0x128u);
          }
          v30 = (unsigned __int8)v16[56] >> 4;
          if ( v30 != 2 )
            break;
LABEL_91:
          v52 = *((void **)v16 + 15);
          if ( !v52 )
            goto LABEL_63;
          operator delete[](v52);
          v14 = v253;
LABEL_29:
          v15 += 144;
          if ( n == v15 )
            goto LABEL_64;
        }
        if ( v30 == 11 )
        {
          v53 = *((void ***)v16 + 15);
          if ( v53 )
          {
            if ( *v53 != v53 + 2 )
              free(*v53);
            operator delete(v53, 0x70u);
            v14 = v253;
            goto LABEL_29;
          }
        }
        else if ( !v30 && *((_DWORD *)v16 + 19) )
        {
          goto LABEL_91;
        }
LABEL_63:
        v14 = v253;
        v15 += 144;
      }
      while ( n != v15 );
LABEL_64:
      v8 = v180;
      v31 = &v14[144 * (unsigned int)v254];
      while ( v31 != v14 )
      {
        while ( 1 )
        {
          v31 -= 144;
          v32 = *((char **)v31 + 3);
          if ( v32 == v31 + 40 )
            break;
          free(v32);
          if ( v31 == v14 )
            goto LABEL_68;
        }
      }
LABEL_68:
      LODWORD(v254) = 0;
      LODWORD(v259) = 0;
      sub_15DCED0(v261, v8 + 768);
      v33 = a1[1].m128i_i32[0];
      v34 = (__int64 *)a1->m128i_i64[1];
      v256 &= 0xFC3Fu;
      a1[2].m128i_i32[2] = v33;
      LODWORD(v263) = 0;
      v257 = 0;
      v265 = 0;
      v270 = 0;
      v271 = 0;
      sub_14634E0(v34, a1[1].m128i_i32);
      LODWORD(v270) = a1[2].m128i_i32[2];
      sub_147E3E0((__int64)a1, (__int64)v8);
      if ( a1[2].m128i_i16[0] == 189 )
      {
LABEL_69:
        v202 = nullptr;
        v203 = v205;
        v204 = 0x200000000LL;
        v206 = &a1[31].m128i_i8[8];
        v208 = 0x200000000LL;
        ptr = v209;
        sub_1490230(a1, (__int64)&v202, 0, (__int64)v8, (__m128i)0LL, a4);
        v35 = (unsigned int)v259;
        v36 = (char *)v203;
        v37 = (char *)src;
        v38 = 8LL * (unsigned int)v204;
        v39 = 8LL * (unsigned int)v259;
        v40 = (char *)v203 + v38;
        v41 = (char *)src + v39;
        v42 = v38 >> 3;
        v43 = (unsigned int)v259 + (v38 >> 3);
        if ( v39 )
        {
          if ( v43 > HIDWORD(v259) )
          {
            v183 = (char *)v203 + v38;
            nc = 8LL * (unsigned int)v204;
            sub_2237220(v8 + 736, v8 + 752, v43, 8);
            v35 = (unsigned int)v259;
            v40 = v183;
            v37 = (char *)src;
            v38 = nc;
            v39 = 8LL * (unsigned int)v259;
            v41 = (char *)src + v39;
            v44 = v39 >> 3;
            if ( v39 >> 3 >= v42 )
              goto LABEL_222;
LABEL_72:
            v45 = v35 + v42;
            LODWORD(v259) = v45;
            if ( v37 != v41 )
            {
              v194 = v44;
              v190 = v41;
              v181 = v40;
              nb = v39;
              memcpy(&v37[8 * v45 - v39], v37, v39);
              v44 = v194;
              v41 = v190;
              v40 = v181;
              v39 = nb;
            }
            if ( v44 )
            {
              if ( (v37 >= v36 + 16 || v36 >= v37 + 16) && (unsigned __int64)(v44 - 1) > 3 )
              {
                v46 = 0;
                v47 = 0;
                v48 = ((unsigned __int64)(v44 - 2) >> 1) + 1;
                do
                {
                  a4 = (__m128)_mm_loadu_si128((const __m128i *)&v36[v46]);
                  ++v47;
                  *(__m128 *)&v37[v46] = a4;
                  v46 += 16;
                }
                while ( v47 < v48 );
                v49 = 2 * v48;
                v50 = 16 * v48;
                v51 = &v37[v50];
                if ( v44 != v49 )
                  *(_QWORD *)v51 = *(_QWORD *)&v36[v50];
              }
              else
              {
                for ( j = 0; j != v44; ++j )
                  *(_QWORD *)&v37[8 * j] = *(_QWORD *)&v36[8 * j];
              }
              v36 += v39;
            }
            if ( v40 != v36 )
              memcpy(v41, v36, v40 - v36);
          }
          else
          {
            v44 = v39 >> 3;
            if ( v39 >> 3 < v42 )
              goto LABEL_72;
LABEL_222:
            v106 = v41;
            na = v39 - v38;
            v107 = &v37[v39 - v38];
            v108 = v38;
            v109 = v38 >> 3;
            v110 = (v38 >> 3) + v35;
            if ( v110 > HIDWORD(v259) )
            {
              v197 = v38;
              v195 = v41;
              v193 = v40;
              v188 = v38;
              sub_2237220(v8 + 736, v8 + 752, v110, 8);
              v108 = v197;
              v41 = v195;
              LODWORD(v35) = v259;
              v40 = v193;
              v38 = v188;
              v106 = (char *)src + 8 * (unsigned int)v259;
            }
            if ( v107 != v41 )
            {
              v191 = v40;
              v184 = v38;
              memmove(v106, v107, v108);
              v40 = v191;
              v38 = v184;
              LODWORD(v35) = v259;
            }
            LODWORD(v259) = v109 + v35;
            if ( v107 != v37 )
            {
              v192 = v40;
              v185 = v38;
              memmove(&v37[v38], v37, na);
              v40 = v192;
              v38 = v185;
            }
            if ( v36 != v40 )
              memmove(v37, v36, v38);
          }
        }
        else
        {
          if ( v43 > HIDWORD(v259) )
          {
            v187 = (char *)v203 + v38;
            nd = 8LL * (unsigned int)v204;
            sub_2237220(v8 + 736, v8 + 752, v43, 8);
            LODWORD(v35) = v259;
            v40 = v187;
            v38 = nd;
            v41 = (char *)src + 8 * (unsigned int)v259;
          }
          if ( v36 != v40 )
          {
            memcpy(v41, v36, v38);
            LODWORD(v35) = v259;
          }
          LODWORD(v259) = v35 + v42;
        }
        LODWORD(v204) = 0;
        sub_15D8C50(v8 + 768, &v206);
        LODWORD(v208) = 0;
        if ( HIDWORD(v202) )
          HIDWORD(v248) = HIDWORD(v202);
        sub_15DCED0(v206, &v206);
        if ( ptr != v209 )
          free(ptr);
        if ( v203 != v205 )
          free(v203);
      }
    }
    if ( !(unsigned __int8)sub_156A150((__int64)a1, 1648, &byte_22F0C30, 0, (__m128i)0LL, *(double *)a4.m128_u64) )
    {
      v240 = 0;
      v241[0] = nullptr;
      LODWORD(v242) = 0;
      v115 = v251;
      v245 = 0;
      v246 = 0;
      v247 = 0;
      v248 = v239[20];
      v250 = 0;
      if ( v252 < 0 )
      {
        if ( v251 )
        {
          v167 = 112LL * *(_QWORD *)(v251 - 8);
          v168 = v251 + v167;
          if ( v251 + v167 != v251 )
          {
            while ( 1 )
            {
              v115 = v168 - 112;
              if ( !*(_BYTE *)(v168 - 16) )
                goto LABEL_375;
              sub_15DCED0(*(_QWORD *)(v168 - 56), v115 + 56);
              v169 = *(void **)(v168 - 48);
              if ( v169 != (void *)(v115 + 80) )
                free(v169);
              v170 = *(void **)(v115 + 24);
              if ( v170 == (void *)(v115 + 40) )
              {
LABEL_375:
                if ( v251 == v115 )
                  goto LABEL_382;
              }
              else
              {
                free(v170);
                if ( v251 == v115 )
                {
LABEL_382:
                  v167 = 112LL * *(_QWORD *)(v168 - 120);
                  break;
                }
              }
              v168 -= 112;
            }
          }
          operator delete[]((void *)(v115 - 8), v167 + 8);
        }
      }
      else
      {
        v116 = v251 + 112LL * (v252 & 0x7FFFFFFF);
        if ( v116 != v251 )
        {
          do
          {
            while ( 1 )
            {
              if ( *(_BYTE *)(v115 + 96) )
              {
                *(_BYTE *)(v115 + 96) = 0;
                sub_15DCED0(*(_QWORD *)(v115 + 56), v115 + 56);
                v117 = *(void **)(v115 + 64);
                if ( v117 != (void *)(v115 + 80) )
                  free(v117);
                v118 = *(void **)(v115 + 24);
                if ( v118 != (void *)(v115 + 40) )
                  break;
              }
              v115 += 112;
              if ( v116 == v115 )
                goto LABEL_250;
            }
            free(v118);
            v115 += 112;
          }
          while ( v116 != v115 );
        }
      }
LABEL_250:
      v251 = 0;
      v252 = 0;
      if ( !(_DWORD)v254 )
        goto LABEL_293;
      v119 = v253;
      v120 = 0;
      v186 = v8;
      v121 = 16 * (9LL * (unsigned int)(v254 - 1) + 9);
      while ( 1 )
      {
        while ( 1 )
        {
          v122 = &v119[v120];
          v123 = *(_DWORD *)&v119[v120];
          if ( v123 == 3 )
            break;
          if ( v123 != 5 || !*((_DWORD *)v122 + 23) )
            goto LABEL_254;
          free(*((void **)v122 + 10));
LABEL_288:
          v120 += 144;
          v119 = v253;
          if ( v121 == v120 )
          {
LABEL_289:
            v8 = v186;
            v137 = &v119[144 * (unsigned int)v254];
            while ( v137 != v119 )
            {
              while ( 1 )
              {
                v137 -= 144;
                v138 = *((char **)v137 + 3);
                if ( v138 == v137 + 40 )
                  break;
                free(v138);
                if ( v137 == v119 )
                  goto LABEL_293;
              }
            }
LABEL_293:
            LODWORD(v254) = 0;
            LODWORD(v259) = 0;
            sub_15DCED0(v261, v8 + 768);
            LODWORD(v263) = 0;
            v257 = 0;
            v265 = 0;
            v256 &= 0xFC3Fu;
            v270 = 0;
            v271 = 0;
            sub_15DCED0(v261, v8 + 768);
            if ( v262 != v8 + 792 )
              free(v262);
            if ( src != v8 + 752 )
              free(src);
            v139 = v253;
            v140 = &v253[144 * (unsigned int)v254];
            if ( v253 != v140 )
            {
              do
              {
                while ( 1 )
                {
                  v140 -= 144;
                  v141 = *((char **)v140 + 3);
                  if ( v141 == v140 + 40 )
                    break;
                  free(v141);
                  if ( v139 == v140 )
                    goto LABEL_300;
                }
              }
              while ( v139 != v140 );
LABEL_300:
              v140 = v253;
            }
            if ( v140 != v8 + 144 )
              free(v140);
            v93 = v251;
            v250 = 0;
            if ( v252 >= 0 )
            {
              v142 = v251 + 112LL * (v252 & 0x7FFFFFFF);
              if ( v142 != v251 )
              {
                do
                {
                  if ( *(_BYTE *)(v93 + 96) )
                  {
                    *(_BYTE *)(v93 + 96) = 0;
                    sub_15DCED0(*(_QWORD *)(v93 + 56), v93 + 56);
                    v143 = *(void **)(v93 + 64);
                    if ( v143 != (void *)(v93 + 80) )
                      free(v143);
                    v144 = *(void **)(v93 + 24);
                    if ( v144 != (void *)(v93 + 40) )
                      free(v144);
                  }
                  v93 += 112;
                }
                while ( v142 != v93 );
              }
              goto LABEL_194;
            }
            if ( !v251 )
              goto LABEL_194;
            v150 = 112LL * *(_QWORD *)(v251 - 8);
            v151 = v251 + v150;
            if ( v251 + v150 != v251 )
            {
              while ( 1 )
              {
                v93 = v151 - 112;
                if ( *(_BYTE *)(v151 - 16) )
                {
                  sub_15DCED0(*(_QWORD *)(v151 - 56), v93 + 56);
                  v165 = *(void **)(v151 - 48);
                  if ( v165 != (void *)(v93 + 80) )
                    free(v165);
                  v166 = *(void **)(v93 + 24);
                  if ( v166 != (void *)(v93 + 40) )
                    free(v166);
                }
                if ( v251 == v93 )
                  break;
                v151 -= 112;
              }
LABEL_345:
              v150 = 112LL * *(_QWORD *)(v151 - 120);
            }
LABEL_346:
            operator delete[]((void *)(v93 - 8), v150 + 8);
            goto LABEL_194;
          }
        }
        v124 = *((_DWORD *)v122 + 18);
        for ( k = 0; k < v124; ++k )
        {
          v126 = *((_QWORD *)v122 + 12) + 32LL * k;
          v127 = *(void ***)(v126 + 24);
          *(_QWORD *)(v126 + 24) = 0;
          if ( v127 )
          {
            if ( *v127 != v127 + 2 )
              free(*v127);
            operator delete(v127, 0x70u);
            v124 = *((_DWORD *)v122 + 18);
          }
        }
        if ( (v122[57] & 1) != 0 )
        {
          v128 = *((_QWORD *)v122 + 12);
          if ( v128 )
          {
            v129 = 32LL * *(_QWORD *)(v128 - 8);
            v130 = v128 + v129;
            if ( v128 != v128 + v129 )
            {
              while ( 1 )
              {
                v131 = *(void ***)(v130 - 8);
                if ( v131 )
                {
                  if ( *v131 != v131 + 2 )
                    free(*v131);
                  operator delete(v131, 0x70u);
                  v128 = *((_QWORD *)v122 + 12);
                }
                if ( v130 - 32 == v128 )
                  break;
                v130 -= 32;
              }
              v129 = 32LL * *(_QWORD *)(v130 - 40);
            }
            operator delete[]((void *)(v128 - 8), v129 + 8);
          }
          v122[57] &= ~1u;
        }
        v132 = *((void **)v122 + 14);
        *((_DWORD *)v122 + 18) = 0;
        if ( v132 )
        {
          sub_15D7C30(v132);
          operator delete(v132, 0x520u);
        }
        v133 = *((_QWORD *)v122 + 13);
        if ( v133 )
        {
          if ( *(_DWORD *)(v133 + 140) )
            free(*(void **)(v133 + 128));
          sub_15DCED0(*(_QWORD *)(v133 + 72), v133 + 72);
          v134 = *(void **)(v133 + 80);
          if ( v134 != (void *)(v133 + 96) )
            free(v134);
          v135 = *(void **)(v133 + 40);
          if ( v135 != (void *)(v133 + 56) )
            free(v135);
          operator delete((void *)v133, 0x128u);
        }
        v136 = (unsigned __int8)v122[56] >> 4;
        if ( v136 == 2 )
          goto LABEL_313;
        if ( v136 == 11 )
        {
          v154 = *((void ***)v122 + 15);
          if ( v154 )
          {
            if ( *v154 != v154 + 2 )
              free(*v154);
            operator delete(v154, 0x70u);
            v119 = v253;
            goto LABEL_254;
          }
          goto LABEL_288;
        }
        if ( v136 || !*((_DWORD *)v122 + 19) )
          goto LABEL_288;
LABEL_313:
        v145 = *((void **)v122 + 15);
        if ( !v145 )
          goto LABEL_288;
        operator delete[](v145);
        v119 = v253;
LABEL_254:
        v120 += 144;
        if ( v121 == v120 )
          goto LABEL_289;
      }
    }
    LOWORD(v202) = 24;
    if ( !(unsigned __int8)sub_1566E40((__int64)a1, &v202, 1, 3) )
    {
      if ( a1[2].m128i_i16[0] == 63 )
      {
        v156 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v156, a1[1].m128i_i32);
      }
      v240 = 0;
      v241[0] = nullptr;
      LODWORD(v242) = 0;
      v66 = v251;
      v245 = 0;
      v246 = 0;
      v247 = 0;
      v248 = v239[20];
      v250 = 0;
      if ( v252 < 0 )
      {
        if ( v251 )
        {
          v146 = 112LL * *(_QWORD *)(v251 - 8);
          v147 = v251 + v146;
          if ( v251 + v146 != v251 )
          {
            while ( 1 )
            {
              v66 = v147 - 112;
              if ( !*(_BYTE *)(v147 - 16) )
                goto LABEL_326;
              sub_15DCED0(*(_QWORD *)(v147 - 56), v66 + 56);
              v148 = *(void **)(v147 - 48);
              if ( v148 != (void *)(v66 + 80) )
                free(v148);
              v149 = *(void **)(v66 + 24);
              if ( v149 == (void *)(v66 + 40) )
              {
LABEL_326:
                if ( v251 == v66 )
                  goto LABEL_333;
              }
              else
              {
                free(v149);
                if ( v251 == v66 )
                {
LABEL_333:
                  v146 = 112LL * *(_QWORD *)(v147 - 120);
                  break;
                }
              }
              v147 -= 112;
            }
          }
          operator delete[]((void *)(v66 - 8), v146 + 8);
        }
      }
      else
      {
        v67 = v251 + 112LL * (v252 & 0x7FFFFFFF);
        if ( v67 != v251 )
        {
          do
          {
            while ( 1 )
            {
              if ( *(_BYTE *)(v66 + 96) )
              {
                *(_BYTE *)(v66 + 96) = 0;
                sub_15DCED0(*(_QWORD *)(v66 + 56), v66 + 56);
                v68 = *(void **)(v66 + 64);
                if ( v68 != (void *)(v66 + 80) )
                  free(v68);
                v69 = *(void **)(v66 + 24);
                if ( v69 != (void *)(v66 + 40) )
                  break;
              }
              v66 += 112;
              if ( v67 == v66 )
                goto LABEL_132;
            }
            free(v69);
            v66 += 112;
          }
          while ( v67 != v66 );
        }
      }
LABEL_132:
      v251 = 0;
      v252 = 0;
      if ( !(_DWORD)v254 )
        goto LABEL_175;
      v70 = v253;
      v71 = 0;
      v182 = v8;
      v72 = 16 * (9LL * (unsigned int)(v254 - 1) + 9);
      while ( 2 )
      {
        while ( 2 )
        {
          v73 = &v70[v71];
          v74 = *(_DWORD *)&v70[v71];
          if ( v74 == 3 )
          {
            v75 = *((_DWORD *)v73 + 18);
            for ( m = 0; m < v75; ++m )
            {
              v77 = *((_QWORD *)v73 + 12) + 32LL * m;
              v78 = *(void ***)(v77 + 24);
              *(_QWORD *)(v77 + 24) = 0;
              if ( v78 )
              {
                if ( *v78 != v78 + 2 )
                  free(*v78);
                operator delete(v78, 0x70u);
                v75 = *((_DWORD *)v73 + 18);
              }
            }
            if ( (v73[57] & 1) != 0 )
            {
              v79 = *((_QWORD *)v73 + 12);
              if ( v79 )
              {
                v80 = 32LL * *(_QWORD *)(v79 - 8);
                v81 = v79 + v80;
                if ( v79 != v79 + v80 )
                {
                  while ( 1 )
                  {
                    v82 = *(void ***)(v81 - 8);
                    if ( v82 )
                    {
                      if ( *v82 != v82 + 2 )
                        free(*v82);
                      operator delete(v82, 0x70u);
                      v79 = *((_QWORD *)v73 + 12);
                    }
                    if ( v81 - 32 == v79 )
                      break;
                    v81 -= 32;
                  }
                  v80 = 32LL * *(_QWORD *)(v81 - 40);
                }
                operator delete[]((void *)(v79 - 8), v80 + 8);
              }
              v73[57] &= ~1u;
            }
            v83 = *((void **)v73 + 14);
            *((_DWORD *)v73 + 18) = 0;
            if ( v83 )
            {
              sub_15D7C30(v83);
              operator delete(v83, 0x520u);
            }
            v84 = *((_QWORD *)v73 + 13);
            if ( v84 )
            {
              if ( *(_DWORD *)(v84 + 140) )
                free(*(void **)(v84 + 128));
              sub_15DCED0(*(_QWORD *)(v84 + 72), v84 + 72);
              v85 = *(void **)(v84 + 80);
              if ( v85 != (void *)(v84 + 96) )
                free(v85);
              v86 = *(void **)(v84 + 40);
              if ( v86 != (void *)(v84 + 56) )
                free(v86);
              operator delete((void *)v84, 0x128u);
            }
            v87 = (unsigned __int8)v73[56] >> 4;
            if ( v87 == 2 )
              goto LABEL_216;
            if ( v87 == 11 )
            {
              v112 = *((void ***)v73 + 15);
              if ( !v112 )
                goto LABEL_170;
              if ( *v112 != v112 + 2 )
                free(*v112);
              operator delete(v112, 0x70u);
              v70 = v253;
            }
            else
            {
              if ( v87 || !*((_DWORD *)v73 + 19) )
                goto LABEL_170;
LABEL_216:
              v105 = *((void **)v73 + 15);
              if ( !v105 )
                goto LABEL_170;
              operator delete[](v105);
              v70 = v253;
            }
LABEL_136:
            v71 += 144;
            if ( v72 == v71 )
              goto LABEL_171;
            continue;
          }
          break;
        }
        if ( v74 != 5 || !*((_DWORD *)v73 + 23) )
          goto LABEL_136;
        free(*((void **)v73 + 10));
LABEL_170:
        v71 += 144;
        v70 = v253;
        if ( v72 != v71 )
          continue;
        break;
      }
LABEL_171:
      v8 = v182;
      v88 = &v70[144 * (unsigned int)v254];
      while ( v88 != v70 )
      {
        while ( 1 )
        {
          v88 -= 144;
          v89 = *((char **)v88 + 3);
          if ( v89 == v88 + 40 )
            break;
          free(v89);
          if ( v88 == v70 )
            goto LABEL_175;
        }
      }
LABEL_175:
      LODWORD(v254) = 0;
      LODWORD(v259) = 0;
      sub_15DCED0(v261, v8 + 768);
      LODWORD(v263) = 0;
      v257 = 0;
      v265 = 0;
      v256 &= 0xFC3Fu;
      v270 = 0;
      v271 = 0;
      sub_15DCED0(v261, v8 + 768);
      if ( v262 != v8 + 792 )
        free(v262);
      if ( src != v8 + 752 )
        free(src);
      v90 = v253;
      v91 = &v253[144 * (unsigned int)v254];
      if ( v253 != v91 )
      {
        do
        {
          while ( 1 )
          {
            v91 -= 144;
            v92 = *((char **)v91 + 3);
            if ( v92 == v91 + 40 )
              break;
            free(v92);
            if ( v90 == v91 )
              goto LABEL_182;
          }
        }
        while ( v90 != v91 );
LABEL_182:
        v91 = v253;
      }
      if ( v91 != v8 + 144 )
        free(v91);
      v93 = v251;
      v250 = 0;
      if ( v252 < 0 )
      {
        if ( !v251 )
          goto LABEL_194;
        v150 = 112LL * *(_QWORD *)(v251 - 8);
        v151 = v251 + v150;
        if ( v251 + v150 != v251 )
        {
          while ( 1 )
          {
            v93 = v151 - 112;
            if ( !*(_BYTE *)(v151 - 16) )
              goto LABEL_338;
            sub_15DCED0(*(_QWORD *)(v151 - 56), v93 + 56);
            v152 = *(void **)(v151 - 48);
            if ( v152 != (void *)(v93 + 80) )
              free(v152);
            v153 = *(void **)(v93 + 24);
            if ( v153 == (void *)(v93 + 40) )
            {
LABEL_338:
              if ( v251 == v93 )
                goto LABEL_345;
            }
            else
            {
              free(v153);
              if ( v251 == v93 )
                goto LABEL_345;
            }
            v151 -= 112;
          }
        }
        goto LABEL_346;
      }
      v94 = v251 + 112LL * (v252 & 0x7FFFFFFF);
      if ( v94 != v251 )
      {
        do
        {
          while ( 1 )
          {
            if ( *(_BYTE *)(v93 + 96) )
            {
              *(_BYTE *)(v93 + 96) = 0;
              sub_15DCED0(*(_QWORD *)(v93 + 56), v93 + 56);
              v95 = *(void **)(v93 + 64);
              if ( v95 != (void *)(v93 + 80) )
                free(v95);
              v96 = *(void **)(v93 + 24);
              if ( v96 != (void *)(v93 + 40) )
                break;
            }
            v93 += 112;
            if ( v94 == v93 )
              goto LABEL_194;
          }
          free(v96);
          v93 += 112;
        }
        while ( v94 != v93 );
      }
LABEL_194:
      if ( HIDWORD(v242) )
        free(v241[1]);
      if ( !HIDWORD(v219) )
      {
LABEL_197:
        sub_15DCED0(v214, &v214);
        if ( v215 != v217 )
          free(v215);
        if ( v211 == v213 )
          continue;
        free(v211);
        if ( !sub_147EA80((__int64)a1, 0, 0) )
          goto LABEL_201;
        goto LABEL_6;
      }
LABEL_231:
      free(v218);
      goto LABEL_197;
    }
    break;
  }
  sub_147A7A0(v8);
  if ( HIDWORD(v219) )
    free(v218);
  sub_15DCED0(v214, &v214);
  if ( v215 != v217 )
    free(v215);
  if ( v211 != v213 )
    free(v211);
LABEL_201:
  sub_17DCC80(a1[6].m128i_i64[0], *(_QWORD *)(a1[6].m128i_i64[0] + 608), a2, a1[1].m128i_u32[0]);
  if ( v198 )
    sub_1564F70(v198);
}
