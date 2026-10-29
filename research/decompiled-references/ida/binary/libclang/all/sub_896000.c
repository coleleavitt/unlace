__int64 __fastcall sub_896000(
        _DWORD *a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v10; // eax
  unsigned int v11; // ebp
  unsigned int v12; // ebx
  __int64 v13; // r15
  __int64 v14; // rax
  _QWORD *v15; // r8
  __int64 v16; // rsi
  __int64 v17; // rdi
  _QWORD *v18; // r8
  int v19; // ebp
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  int v22; // eax
  __m128i si128; // xmm1
  _QWORD *v24; // rbp
  __m128i *v25; // rax
  _QWORD *v26; // r8
  char v27; // al
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rdx
  __int64 v31; // rax
  _BYTE *v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdi
  unsigned int v35; // ebx
  unsigned __int64 v36; // rbp
  __int64 v37; // rax
  const __m128i *v38; // r15
  __m128i v39; // xmm0
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rdi
  __int32 v43; // r11d
  unsigned int v44; // r8d
  __int64 v45; // rax
  char v46; // si
  char v47; // cl
  unsigned __int8 v48; // dl
  unsigned __int8 v49; // al
  unsigned __int8 v50; // si
  unsigned __int8 v51; // cl
  __m128i v52; // xmm0
  int v53; // edx
  __int64 v54; // rax
  __int16 v55; // r9
  __int64 v56; // rdi
  __int16 v57; // ax
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rax
  _BYTE *v61; // r14
  __int64 v62; // r12
  unsigned __int64 v63; // r13
  __int64 v64; // rbx
  __int64 v65; // rax
  int v66; // edx
  int v67; // ecx
  unsigned __int64 v68; // rsi
  int v69; // r8d
  __int64 v70; // rcx
  int v71; // r13d
  __int64 v72; // r15
  unsigned __int64 v73; // rax
  int v74; // eax
  unsigned __int64 v75; // rax
  unsigned __int16 *v76; // rax
  unsigned int v77; // eax
  unsigned int v78; // ebx
  unsigned __int8 **v80; // rbx
  __int64 v81; // rax
  __int64 v82; // rbx
  __m128i v83; // rax
  __m128i v84; // rax
  _QWORD *v85; // rbp
  __int64 v86; // rdx
  __int64 v87; // rdx
  _QWORD *v88; // rax
  _QWORD *v89; // rcx
  _QWORD *v90; // rdx
  unsigned int v91; // ebx
  int v92; // ebx
  __int64 v93; // r13
  unsigned __int64 v94; // rax
  int v95; // eax
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // r9
  __int64 v98; // rcx
  __int64 v99; // rax
  char **v100; // r13
  unsigned __int64 v101; // r14
  __int64 v102; // rbx
  char *v103; // rbp
  unsigned __int64 v104; // rbx
  char v105; // al
  __int64 v106; // rbx
  unsigned __int64 v107; // rax
  __m128i v108; // xmm0
  __int16 v109; // dx
  unsigned __int64 v110; // rax
  __int64 v111; // rbx
  __int64 v112; // rax
  unsigned int v113; // ebx
  int v114; // r12d
  __int64 v115; // rbx
  unsigned __int64 v116; // rax
  __int64 v117; // rbx
  unsigned __int64 v118; // rax
  unsigned __int8 **v119; // rax
  __int16 v120; // dx
  unsigned __int8 v121; // dl
  char v122; // al
  char v123; // si
  char v124; // cl
  const __m128i *v125; // r12
  __int8 *v126; // rdi
  __m128i *v127; // rbp
  __m128i v128; // rax
  __m128i v129; // xmm1
  __int64 v130; // rax
  char v131; // dl
  char v132; // cl
  _BYTE *v133; // rax
  unsigned __int64 v134; // rax
  int v135; // ecx
  unsigned __int64 v136; // rdx
  int v137; // ebx
  int v138; // esi
  unsigned __int64 v139; // rax
  _QWORD *v140; // rax
  __int64 v141; // rcx
  _QWORD *v142; // rdx
  char v143; // al
  unsigned __int64 v144; // rax
  unsigned __int64 v145; // rax
  __int64 v146; // rdi
  char v147; // al
  unsigned __int64 v148; // rax
  _BYTE **v149; // rax
  _BYTE *v150; // rax
  __int64 v151; // rbp
  unsigned __int16 *v152; // rax
  __int64 v153; // rax
  int v154; // ecx
  char v155; // al
  unsigned __int64 v156; // rax
  _QWORD *v157; // rax
  _QWORD *v158; // rcx
  _QWORD *v159; // rdx
  __int64 v161; // [rsp+0h] [rbp-438h]
  _BYTE *v164; // [rsp+10h] [rbp-428h]
  __int64 v165; // [rsp+10h] [rbp-428h]
  char **v166; // [rsp+10h] [rbp-428h]
  _QWORD *v167; // [rsp+10h] [rbp-428h]
  _QWORD *v168; // [rsp+10h] [rbp-428h]
  _QWORD *v169; // [rsp+10h] [rbp-428h]
  _QWORD *v170; // [rsp+18h] [rbp-420h]
  _QWORD *v171; // [rsp+18h] [rbp-420h]
  _QWORD *v172; // [rsp+18h] [rbp-420h]
  unsigned int v173; // [rsp+18h] [rbp-420h]
  __int64 v174; // [rsp+18h] [rbp-420h]
  _QWORD *v175; // [rsp+20h] [rbp-418h]
  char **v176; // [rsp+20h] [rbp-418h]
  int v177; // [rsp+20h] [rbp-418h]
  __int64 v178; // [rsp+28h] [rbp-410h]
  _QWORD *v179; // [rsp+28h] [rbp-410h]
  int v180; // [rsp+30h] [rbp-408h]
  char **v181; // [rsp+30h] [rbp-408h]
  int v182; // [rsp+38h] [rbp-400h]
  __int64 v183; // [rsp+38h] [rbp-400h]
  __int64 v184; // [rsp+38h] [rbp-400h]
  __int64 *v185; // [rsp+40h] [rbp-3F8h]
  unsigned __int8 v186; // [rsp+57h] [rbp-3E1h]
  __int64 v187; // [rsp+68h] [rbp-3D0h]
  _QWORD *v188; // [rsp+70h] [rbp-3C8h]
  __int64 v189; // [rsp+80h] [rbp-3B8h]
  __int64 m128i_i64; // [rsp+88h] [rbp-3B0h]
  __int64 v191; // [rsp+98h] [rbp-3A0h]
  unsigned int v192; // [rsp+A8h] [rbp-390h]
  unsigned int v193; // [rsp+ACh] [rbp-38Ch]
  __int64 v194[2]; // [rsp+B0h] [rbp-388h] BYREF
  __int64 v195; // [rsp+C0h] [rbp-378h] BYREF
  int v196; // [rsp+C8h] [rbp-370h]
  __m128i v197; // [rsp+D0h] [rbp-368h]
  unsigned __int128 v198; // [rsp+E0h] [rbp-358h] BYREF
  const __m128i *v199; // [rsp+F0h] [rbp-348h]
  _OWORD v200[2]; // [rsp+F8h] [rbp-340h] BYREF
  char v201; // [rsp+118h] [rbp-320h]
  unsigned int v202; // [rsp+120h] [rbp-318h] BYREF
  char v203; // [rsp+124h] [rbp-314h]
  unsigned int v204; // [rsp+160h] [rbp-2D8h] BYREF
  char v205; // [rsp+164h] [rbp-2D4h]
  _OWORD v206[4]; // [rsp+1A0h] [rbp-298h] BYREF
  __m128i v207; // [rsp+1E0h] [rbp-258h] BYREF
  __int64 v208; // [rsp+1F0h] [rbp-248h]
  __int64 v209; // [rsp+1F8h] [rbp-240h]
  __int64 v210; // [rsp+200h] [rbp-238h]
  __int64 v211; // [rsp+208h] [rbp-230h]
  void *v212[2]; // [rsp+210h] [rbp-228h] BYREF
  _BYTE v213[64]; // [rsp+220h] [rbp-218h] BYREF
  __int16 v214; // [rsp+260h] [rbp-1D8h]
  __m128i v215; // [rsp+270h] [rbp-1C8h] BYREF
  __m128i v216; // [rsp+280h] [rbp-1B8h] BYREF
  __int64 v217; // [rsp+290h] [rbp-1A8h]
  __int64 v218; // [rsp+298h] [rbp-1A0h]
  void *ptr[2]; // [rsp+2A0h] [rbp-198h] BYREF
  _BYTE v220[64]; // [rsp+2B0h] [rbp-188h] BYREF
  __int16 v221; // [rsp+2F0h] [rbp-148h]
  __m128i v222; // [rsp+300h] [rbp-138h] BYREF
  __m128i v223; // [rsp+310h] [rbp-128h] BYREF
  const __m128i *v224; // [rsp+320h] [rbp-118h]
  _DWORD *v225; // [rsp+328h] [rbp-110h]
  __int64 v226; // [rsp+330h] [rbp-108h]
  __int64 v227; // [rsp+338h] [rbp-100h]
  __int64 v228; // [rsp+340h] [rbp-F8h]
  int v229; // [rsp+350h] [rbp-E8h] BYREF
  __int64 v230; // [rsp+358h] [rbp-E0h]
  int *v231; // [rsp+360h] [rbp-D8h]
  int *v232; // [rsp+368h] [rbp-D0h]
  __int64 v233; // [rsp+370h] [rbp-C8h]
  int v234; // [rsp+380h] [rbp-B8h] BYREF
  __int64 v235; // [rsp+388h] [rbp-B0h]
  int *v236; // [rsp+390h] [rbp-A8h]
  int *v237; // [rsp+398h] [rbp-A0h]
  __int64 v238; // [rsp+3A0h] [rbp-98h]
  __int64 v239; // [rsp+3A8h] [rbp-90h]
  int v240; // [rsp+3B0h] [rbp-88h]
  _DWORD *v241; // [rsp+3B8h] [rbp-80h]
  __int64 v242; // [rsp+3C0h] [rbp-78h]
  _DWORD v243[4]; // [rsp+3C8h] [rbp-70h] BYREF
  __int64 v244; // [rsp+3D8h] [rbp-60h]
  __int64 v245; // [rsp+3E0h] [rbp-58h]
  int v246; // [rsp+3E8h] [rbp-50h]
  __int64 v247; // [rsp+3F0h] [rbp-48h]
  char v248; // [rsp+3F8h] [rbp-40h]

  v10 = sub_8124E0((__int64)a1);
  v11 = v10;
  if ( *(_BYTE *)(a6 + 962) && *(_DWORD *)(a6 + 40) > 1u )
    return 0;
  if ( !*(_DWORD *)(a6 + 44) )
  {
    sub_A2E1A0(a6, v10, 2191, 0);
    return 0;
  }
  v12 = *(_DWORD *)(a6 + 40);
  if ( *(_DWORD *)(sub_A2CB40(a6) + 132) < v12 )
  {
    v80 = (unsigned __int8 **)sub_A2E1A0(a6, v11, 2200, 0);
    v81 = sub_A2CB40(a6);
    if ( v80 )
      sub_8356A0(v80, *(unsigned int *)(v81 + 132), 3u);
    return 0;
  }
  v13 = a5 + 72;
  v14 = *(_QWORD *)(sub_79A2E0(a5 + 72) + 16);
  v15 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v14 & 4) != 0 )
    v15 = (_QWORD *)*v15;
  if ( !v15 )
    BUG();
  v170 = v15;
  v187 = (__int64)(v15 - 8);
  sub_8226C0((__int64 *)(v15[5] + 96LL), v15[5]);
  v192 = *(_DWORD *)(v170[8] + 20LL);
  if ( v192 )
  {
    v119 = (unsigned __int8 **)sub_A2E1A0(a6, v11, 2302, 0);
    if ( v119 )
      sub_8356A0(v119, v187, 0xAu);
    return 0;
  }
  v16 = v170[5];
  v17 = v16 + 96;
  sub_8226C0((__int64 *)(v16 + 96), v16);
  v18 = v170;
  v199 = (const __m128i *)a6;
  v19 = *(_DWORD *)(a6 + 888);
  v20 = a2[3].m128i_i64[0];
  v21 = a2[3].m128i_u32[2];
  v22 = *(_DWORD *)(v170[8] + 16LL);
  v197 = _mm_loadu_si128(a2);
  v198 = __PAIR128__(v21, v20);
  si128 = _mm_load_si128((const __m128i *)&v198);
  v206[0] = v197;
  LODWORD(v224) = (v22 == 0) + 1;
  v206[1] = si128;
  v200[0] = v197;
  v200[1] = si128;
  v222 = v197;
  v223 = si128;
  if ( v19 )
  {
    v175 = v170;
    v82 = *(_QWORD *)(a6 + 872);
    v83.m128i_i64[0] = sub_69F620(v17, v16);
    v208 = 0;
    v207 = v83;
    v209 = 0;
    v84.m128i_i64[0] = sub_69F630(v17, v16);
    v216 = 0u;
    v215 = v84;
    v180 = 1;
    v182 = v19 - 1;
    v173 = (v19 - 1) & sub_84A6B0(v222.m128i_i64, (__int64)&v223);
    v179 = nullptr;
    while ( 1 )
    {
      v85 = (_QWORD *)(v82 + 40LL * v173);
      if ( (unsigned __int8)sub_69F550(&v222, v85) && v223.m128i_i64[1] == v85[3] )
      {
        v140 = (_QWORD *)v223.m128i_i64[0];
        v141 = v223.m128i_i64[0] + 8 * v223.m128i_i64[1];
        if ( v223.m128i_i64[0] == v141 )
        {
LABEL_185:
          v26 = v175;
          v27 = 0;
          goto LABEL_12;
        }
        v142 = (_QWORD *)v85[2];
        while ( *v140 == *v142 )
        {
          ++v140;
          ++v142;
          if ( (_QWORD *)v141 == v140 )
            goto LABEL_185;
        }
      }
      if ( (unsigned __int8)sub_69F550(v85, &v207) )
      {
        v86 = v85[3];
        if ( v86 == v209 )
        {
          v157 = (_QWORD *)v85[2];
          v158 = &v157[v86];
          if ( v157 == v158 )
          {
LABEL_230:
            v24 = v179;
            v18 = v175;
            if ( !v179 )
              v24 = (_QWORD *)(v82 + 40LL * v173);
            goto LABEL_11;
          }
          v159 = (_QWORD *)v208;
          while ( *v157 == *v159 )
          {
            ++v157;
            ++v159;
            if ( v158 == v157 )
              goto LABEL_230;
          }
        }
      }
      if ( (unsigned __int8)sub_69F550(v85, &v215) )
      {
        v87 = v85[3];
        if ( v87 == v216.m128i_i64[1] )
        {
          v88 = (_QWORD *)v85[2];
          v89 = &v88[v87];
          if ( v88 == v89 )
          {
LABEL_239:
            if ( v179 )
              v85 = v179;
            v179 = v85;
          }
          else
          {
            v90 = (_QWORD *)v216.m128i_i64[0];
            while ( *v88 == *v90 )
            {
              ++v88;
              ++v90;
              if ( v89 == v88 )
                goto LABEL_239;
            }
          }
        }
      }
      v173 = (v180 + v173) & v182;
      ++v180;
    }
  }
  v24 = nullptr;
LABEL_11:
  v171 = v18;
  v25 = (__m128i *)sub_84B5E0(a6 + 872, v222.m128i_i64, v24);
  v26 = v171;
  *v25 = _mm_load_si128(&v222);
  v25[1] = _mm_load_si128(&v223);
  v25[2].m128i_i32[0] = (int)v224;
  v27 = 1;
LABEL_12:
  v172 = v26;
  v201 = v27;
  v28 = sub_AC7B80(a1);
  v29 = _mm_loadl_epi64((const __m128i *)(a6 + 40));
  v227 = a4;
  v30 = v28;
  v222.m128i_i64[1] = a6;
  v222.m128i_i64[0] = (__int64)&off_47DA9F0;
  v31 = *(_QWORD *)(a6 + 32);
  v223.m128i_i64[1] = a5;
  v223.m128i_i64[0] = v31;
  v225 = a1;
  v224 = a2;
  v228 = 0;
  v226 = a3;
  v231 = &v229;
  v232 = &v229;
  v236 = &v234;
  v237 = &v234;
  LODWORD(v31) = *(_DWORD *)(a6 + 44);
  v229 = 0;
  v240 = v31;
  v241 = v243;
  v230 = 0;
  v233 = 0;
  v234 = 0;
  v235 = 0;
  v238 = 0;
  v239 = v30;
  v243[0] = 1;
  v242 = 0x200000001LL;
  *(_QWORD *)(a6 + 40) = _mm_add_epi32(v29, _mm_loadl_epi64((const __m128i *)&qword_3C86E78)).m128i_u64[0];
  v32 = v172;
  *(_QWORD *)(a6 + 32) = &v222;
  LODWORD(v31) = *(_DWORD *)(a5 + 84);
  v203 &= ~1u;
  v243[2] = 1;
  v246 = 0;
  v244 = 0;
  v245 = 0;
  v247 = 0;
  v248 = 0;
  v202 = 0;
  v194[1] = 0;
  v194[0] = (__int64)&v202;
  if ( (unsigned __int16)((unsigned int)v31 >> 13) != 1
    || (v78 = a5, v149 = (_BYTE **)sub_7A62D0(a5), v32 = v172, v150 = *v149, (*v150 & 6) != 0)
    || (v150[28] & 1) == 0 )
  {
    if ( (*(_BYTE *)(a5 + 83) & 2) != 0 )
    {
      v168 = v32;
      v143 = sub_7A63A0(a5, &v215);
      v32 = v168;
      if ( v143 )
      {
        v144 = sub_79A330(v13);
        if ( !v144 )
          BUG();
        v32 = v168;
        if ( *(_BYTE *)(v144 + 9) >> 5 == 2 )
          goto LABEL_193;
        if ( *(char *)(a5 + 82) < 0 )
        {
          v145 = sub_79A330(v13);
          if ( !v145 )
            BUG();
          v146 = v145 - 64;
          if ( *(_BYTE *)(v145 + 9) >> 5 == 2 )
          {
            if ( sub_7868A0(v146) )
              goto LABEL_193;
            v32 = v168;
          }
          else
          {
            v147 = sub_830C00(v146, (__int64)&v215);
            v32 = v168;
            if ( v147 )
            {
LABEL_193:
              v148 = sub_79A330(v13);
              if ( !v148 )
                BUG();
              v78 = sub_8682D0(a6, **(_QWORD **)(a5 + 120), a1, a7, *(_BYTE *)(v148 + 9) >> 5 == 2);
              goto LABEL_155;
            }
          }
        }
      }
    }
    if ( *(_DWORD *)a7 <= 1u )
    {
      v167 = v32;
      if ( v32[9] >> 5 == 2 )
      {
        v207.m128i_i8[4] &= ~1u;
        v215.m128i_i8[4] &= ~1u;
        v207.m128i_i32[0] = 0;
        v215.m128i_i32[0] = 0;
        sub_69F6D0(&v215.m128i_i64[1]);
        v215.m128i_i32[0] = 11;
        sub_6A6470((__int64)&v215, 0, (__int64)&v207);
        sub_6A01B0(a7, (__int64)&v215);
        v32 = v167;
        if ( v215.m128i_i32[0] > 1u )
        {
          sub_69F740((__int64)&v215);
          v32 = v167;
        }
        if ( v207.m128i_i32[0] > 1u )
        {
          v169 = v32;
          sub_69F740((__int64)&v207);
          v32 = v169;
        }
      }
      else
      {
        v134 = sub_7868A0(v187);
        if ( v134 )
        {
          v135 = 0;
          while ( 1 )
          {
            v136 = *(_QWORD *)(v134 + 8);
            v134 = v136 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v136 <= 7 )
              break;
            if ( (*(_BYTE *)(v134 + 28) & 0x7Fu) - 47 <= 2 )
              ++v135;
          }
          v137 = v135 + 1;
        }
        else
        {
          v137 = 0;
        }
        sub_8226C0((__int64 *)(v167[5] + 96LL), v167[5]);
        v138 = *(_DWORD *)(v167[8] + 16LL);
        v215.m128i_i8[4] &= ~1u;
        v215.m128i_i32[0] = 0;
        sub_69F640((__int64)&v215.m128i_i64[1], v138, v137);
        v215.m128i_i32[0] = 10;
        sub_6A01B0(a7, (__int64)&v215);
        v32 = v167;
        if ( v215.m128i_i32[0] > 1u )
        {
          sub_69F740((__int64)&v215);
          v32 = v167;
        }
      }
    }
    v164 = v32;
    if ( (char)*(v32 - 36) < 0 )
      goto LABEL_161;
    v33 = sub_AB4240(*(_QWORD *)(a6 + 16), v187);
    v34 = *(_QWORD *)(a6 + 32);
    v35 = *(_DWORD *)(a6 + 320);
    v195 = a6;
    v191 = v33;
    LODWORD(v33) = *(_DWORD *)(v34 + 208);
    v34 += 184;
    v196 = v35;
    *(_DWORD *)(v34 + 24) = v33 + 1;
    sub_847EC0(v34, v33 + 1);
    v36 = sub_7868A0(v187);
    v189 = sub_7A62D0(a5) + 8LL * (unsigned __int16)(*(_DWORD *)(a5 + 84) >> 13);
    v37 = sub_7A62D0(a5);
    if ( v189 == v37 )
    {
      if ( v164[9] >> 5 != 2 && v36 )
      {
        v72 = a7;
        v71 = 1;
        goto LABEL_45;
      }
      *(_DWORD *)sub_84AAC0((__int64)&v199[54].m128i_i64[1], (__int64 *)v200) = 3;
LABEL_53:
      v76 = (unsigned __int16 *)sub_78BC30((_QWORD *)a5, (unsigned __int64 *)&v215);
      if ( (unsigned int)sub_88E980(v194, a6, v76, nullptr) )
      {
        v77 = sub_8931F0(a6, 1, v35);
        v196 = -1;
        v78 = v77;
      }
      else
      {
LABEL_153:
        v78 = 0;
      }
      sub_893480((__int64)&v195);
      goto LABEL_155;
    }
    v38 = a2;
    v185 = (__int64 *)v37;
    v186 = 1;
    m128i_i64 = (__int64)a2[3].m128i_i64;
    v193 = v35;
    v188 = v164;
    v161 = a6;
    while ( 1 )
    {
      v39 = _mm_loadu_si128(v38);
      v40 = v38[2].m128i_i64[0];
      v41 = *v185;
      LODWORD(v209) = v38[1].m128i_i32[2];
      v42 = v38[2].m128i_i64[1];
      v43 = v38[3].m128i_i32[2];
      v44 = (unsigned int)v209 >> 4;
      v210 = v40;
      v178 = v41;
      v45 = v38[1].m128i_i64[0];
      v211 = v42;
      v208 = v45;
      LOBYTE(v45) = v38[1].m128i_i8[8];
      v212[0] = v213;
      v46 = v45;
      v47 = v45;
      v48 = v45 & 1;
      v49 = (v45 & 8) != 0;
      v212[1] = (void *)0x800000000LL;
      v50 = (v46 & 2) != 0;
      v51 = (v47 & 4) != 0;
      v207 = v39;
      if ( v43 )
      {
        sub_820650((__int64)v212, m128i_i64);
        v40 = v38[2].m128i_i64[0];
        v43 = v38[3].m128i_i32[2];
        v121 = v38[1].m128i_u8[8];
        v122 = v121 >> 3;
        v123 = v121 >> 1;
        v124 = v121 >> 2;
        v48 = v121 & 1;
        v49 = v122 & 1;
        v50 = v123 & 1;
        v51 = v124 & 1;
        v44 = (unsigned __int32)v38[1].m128i_i32[2] >> 4;
      }
      v55 = v38[8].m128i_i16[0];
      v52 = _mm_loadu_si128(v38);
      v217 = v40;
      v53 = (8 * v49) | (4 * v51) | (2 * v50) | v48;
      v54 = v38[2].m128i_i64[1];
      LOBYTE(v55) = v55 & 3;
      v215 = v52;
      v218 = v54;
      v214 = v55 | v214 & 0xFC;
      v56 = v38[1].m128i_i64[0];
      ptr[0] = v220;
      v216.m128i_i64[0] = v56;
      v216.m128i_i32[2] = (16 * v44) | v53;
      ptr[1] = (void *)0x800000000LL;
      if ( v43 )
      {
        sub_820650((__int64)ptr, m128i_i64);
        v120 = v38[8].m128i_i16[0];
        LOBYTE(v120) = v120 & 3;
        v57 = v120 | v221 & 0xFC;
      }
      else
      {
        v57 = v55 | v221 & 0xFC;
      }
      v221 = v57;
      v58 = *(_QWORD *)v178;
      if ( (*(_QWORD *)v178 & 6) == 0 )
      {
        v59 = sub_7A5E50(v178);
        v60 = sub_B0E910(*(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0LL));
        if ( (unsigned __int8)sub_829EC0(v161, *(_QWORD *)(v178 + 8), (__int64)&v207, v187, v60, v191) )
        {
          v61 = nullptr;
          v62 = *(_QWORD *)(a7 + 8) + 56LL * v192++;
          goto LABEL_25;
        }
LABEL_149:
        if ( ptr[0] != v220 )
          free(ptr[0]);
        if ( v212[0] != v213 )
          free(v212[0]);
        goto LABEL_153;
      }
      if ( (*(_QWORD *)v178 & 6LL) != 2 )
        break;
      v61 = (_BYTE *)(v58 & 0xFFFFFFFFFFFFFFF8LL);
      if ( !(unsigned __int8)sub_825EA0(v161, *(_QWORD *)(v178 + 8), (__int64)&v207, v58 & 0xFFFFFFFFFFFFFFF8LL, v191) )
        goto LABEL_149;
      if ( *((_BYTE *)v188 + 9) >> 5 == 2 )
      {
        v205 &= ~1u;
        BYTE4(v206[0]) &= ~1u;
        v204 = 0;
        LODWORD(v206[0]) = 0;
        sub_69F6D0((_QWORD *)v206 + 1);
        LODWORD(v206[0]) = 11;
        sub_6A6470((__int64)v206, (__int64)v61, (__int64)&v204);
        sub_6A01B0(a7, (__int64)v206);
        if ( LODWORD(v206[0]) > 1 )
          sub_69F740((__int64)v206);
        if ( v204 > 1 )
          sub_69F740((__int64)&v204);
        v62 = *(_QWORD *)(a7 + 16);
      }
      else
      {
        if ( v36 )
        {
          v91 = sub_83D880(v36);
          if ( (unsigned int)sub_83D880((__int64)v61) >= v91 )
          {
            v92 = v186;
LABEL_77:
            if ( !v36
              || (_BYTE *)v36 != v61
              && (v93 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v36 + 32LL))(v36),
                  v93 != (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v61 + 32LL))(v61)) )
            {
              while ( 1 )
              {
                if ( (*(_BYTE *)(v36 + 68) & 1) == 0 || (v94 = *(_QWORD *)(v36 + 40), v94 > 7) || (_DWORD)v94 )
                {
                  v95 = sub_83D880(v36);
                  v92 &= sub_8312C0(
                           *(_QWORD *)(v36 + 48),
                           *(_QWORD *)(a7 + 8) + 56LL * (unsigned int)(*(_DWORD *)(a7 + 16) + v95));
                }
                while ( 1 )
                {
                  v96 = *(_QWORD *)(v36 + 8);
                  v36 = v96 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v96 <= 7 )
                    break;
                  if ( (*(_BYTE *)(v36 + 28) & 0x7Fu) - 47 <= 2 )
                    goto LABEL_77;
                }
                v36 = 0;
              }
            }
            v186 = v92;
            while ( 1 )
            {
              v156 = *(_QWORD *)(v36 + 8);
              v36 = v156 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v156 <= 7 )
                break;
              if ( (*(_BYTE *)(v36 + 28) & 0x7Fu) - 47 <= 2 )
                goto LABEL_218;
            }
            v36 = 0;
          }
        }
LABEL_218:
        v62 = *(_QWORD *)(a7 + 8) + 56LL * (*(_DWORD *)(a7 + 16) + (unsigned int)sub_83D880((__int64)v61));
      }
LABEL_25:
      v63 = *(_QWORD *)(v178 + 8);
      if ( (*(_BYTE *)(v63 + 2) & 2) != 0 )
      {
        **(_BYTE **)(v161 + 24) = 1;
        if ( *(_DWORD *)(v161 + 964) <= 2u && !*(_BYTE *)(v161 + 962) && !*(_BYTE *)(v161 + 963) )
          goto LABEL_149;
        goto LABEL_34;
      }
      v64 = *(_QWORD *)(v161 + 32);
      v165 = *(_QWORD *)(v64 + 32);
      v65 = v64;
      if ( (*(_WORD *)v63 & 0x1FF) == 0x70 )
      {
        *(_QWORD *)(v64 + 32) = &v215;
        v65 = *(_QWORD *)(v161 + 32);
      }
      v66 = *(_DWORD *)(v161 + 320);
      *(_QWORD *)&v206[0] = v161;
      v67 = *(_DWORD *)(v65 + 208);
      DWORD2(v206[0]) = v66;
      v68 = *(unsigned int *)(v65 + 196);
      v69 = v67 + 1;
      v70 = *(unsigned int *)(v65 + 192);
      *(_DWORD *)(v65 + 208) = v69;
      if ( v68 < v70 + 1 )
      {
        v177 = v69;
        v174 = v65;
        sub_25D6060(v65 + 184, v65 + 200, v70 + 1, 4);
        v65 = v174;
        v69 = v177;
        v70 = *(unsigned int *)(v174 + 192);
      }
      *(_DWORD *)(*(_QWORD *)(v65 + 184) + 4 * v70) = v69;
      ++*(_DWORD *)(v65 + 192);
      if ( !(unsigned __int8)sub_88A010(v62, v161, &v207, v63, 0) )
      {
        v130 = v161;
        if ( !*(_DWORD *)(v161 + 48) )
          goto LABEL_219;
        v131 = *(_BYTE *)(v161 + 962);
        v132 = *(_BYTE *)(v161 + 963);
LABEL_164:
        v133 = *(_BYTE **)(v130 + 24);
        if ( v131 )
        {
          *v133 = 1;
        }
        else
        {
          *v133 |= v132;
          if ( !v132 )
            goto LABEL_219;
        }
        v186 = 0;
        goto LABEL_33;
      }
      if ( v61 && (v61[68] & 1) != 0 && !(unsigned __int8)sub_824FF0(v161, v63, v62, (__int64)v61) )
      {
        if ( !*(_DWORD *)(v161 + 48) )
        {
LABEL_219:
          sub_894600((__int64)v206);
          *(_QWORD *)(v64 + 32) = v165;
          goto LABEL_149;
        }
        v131 = *(_BYTE *)(v161 + 962);
        v132 = *(_BYTE *)(v161 + 963);
        v130 = v161;
        goto LABEL_164;
      }
LABEL_33:
      sub_894600((__int64)v206);
      *(_QWORD *)(v64 + 32) = v165;
LABEL_34:
      if ( (*(_BYTE *)v178 & 6) == 0 && (*(_BYTE *)(v178 + 28) & 1) == 0 )
      {
        sub_8226C0((__int64 *)(v188[5] + 96LL), v188[5]);
        if ( v192 == *(_DWORD *)(v188[8] + 16LL) )
          *(_DWORD *)sub_84AAC0((__int64)&v199[54].m128i_i64[1], (__int64 *)v200) = 2;
      }
      if ( ptr[0] != v220 )
        free(ptr[0]);
      if ( v212[0] == v213 )
      {
        if ( (__int64 *)v189 == ++v185 )
        {
LABEL_42:
          v35 = v193;
          a6 = v161;
          if ( *((_BYTE *)v188 + 9) >> 5 != 2 && v36 )
          {
            v71 = v186;
            v72 = a7;
LABEL_45:
            if ( (*(_BYTE *)(v36 + 68) & 1) == 0 || (v73 = *(_QWORD *)(v36 + 40), v73 > 7) || (_DWORD)v73 )
            {
              v74 = sub_83D880(v36);
              v71 &= sub_8312C0(
                       *(_QWORD *)(v36 + 48),
                       *(_QWORD *)(v72 + 8) + 56LL * (unsigned int)(*(_DWORD *)(v72 + 16) + v74));
            }
            while ( 1 )
            {
              v75 = *(_QWORD *)(v36 + 8);
              v36 = v75 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v75 <= 7 )
                break;
              if ( (*(_BYTE *)(v36 + 28) & 0x7Fu) - 47 <= 2 )
                goto LABEL_45;
            }
            v186 = v71;
          }
          *(_DWORD *)sub_84AAC0((__int64)&v199[54].m128i_i64[1], (__int64 *)v200) = 3;
          if ( v186 )
            goto LABEL_53;
          goto LABEL_153;
        }
      }
      else
      {
        free(v212[0]);
        if ( (__int64 *)v189 == ++v185 )
          goto LABEL_42;
      }
    }
    v97 = v58 & 0xFFFFFFFFFFFFFFF8LL;
    v98 = *(_QWORD *)(v97 + 56);
    v99 = 8LL * *(unsigned int *)(v97 + 64);
    if ( v98 + v99 == v98 )
    {
      v62 = a7;
      v61 = nullptr;
      goto LABEL_25;
    }
    v176 = (char **)(v98 + v99);
    v100 = *(char ***)(v97 + 56);
    v101 = v36;
    v62 = a7;
    v166 = (char **)(v98 + v99 - 8);
    v181 = v100;
    while ( 1 )
    {
      v103 = *v100;
      v104 = *((_QWORD *)*v100 + 2) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*((_QWORD *)*v100 + 2) & 4) != 0 )
        v104 = *(_QWORD *)v104;
      v105 = *(_BYTE *)(v104 + 8);
      v106 = v104 - 64;
      if ( (v105 & 0x7Fu) - 56 >= 4 )
        v106 = 0;
      if ( *(_DWORD *)v62 > 1u )
      {
        if ( *(_DWORD *)v62 != 11 || v103 == *(char **)(v62 + 8) )
          goto LABEL_90;
        if ( *(_BYTE *)(v106 + 73) >> 5 == 2 )
        {
LABEL_111:
          v205 &= ~1u;
          BYTE4(v206[0]) &= ~1u;
          v204 = 0;
          LODWORD(v206[0]) = 0;
          sub_69F6D0((_QWORD *)v206 + 1);
          LODWORD(v206[0]) = 11;
          sub_6A6470((__int64)v206, (__int64)v103, (__int64)&v204);
          sub_6A01B0(v62, (__int64)v206);
          if ( LODWORD(v206[0]) > 1 )
            sub_69F740((__int64)v206);
          if ( v204 > 1 )
            sub_69F740((__int64)&v204);
LABEL_90:
          if ( *v166 == v103 )
            goto LABEL_106;
          goto LABEL_91;
        }
      }
      else if ( *(_BYTE *)(v106 + 73) >> 5 == 2 )
      {
        goto LABEL_111;
      }
      v107 = sub_6E8B00(*(_QWORD *)(v161 + 16), v106);
      v186 &= sub_8312C0(v107, v62);
      if ( *v166 == v103 )
      {
LABEL_106:
        v108 = _mm_load_si128(&v207);
        v216.m128i_i64[0] = v208;
        v215 = v108;
        v216.m128i_i32[2] = v209;
        v217 = v210;
        v218 = v211;
        sub_820650((__int64)ptr, (__int64)v212);
        HIBYTE(v109) = HIBYTE(v214);
        LOBYTE(v109) = v214 & 3;
        v221 = v109 | v221 & 0xFC;
      }
LABEL_91:
      if ( !(unsigned __int8)sub_825C70(v161, *(_QWORD *)(v178 + 8), (__int64)&v207, (__int64)v103) )
        goto LABEL_149;
      if ( *(_BYTE *)(v106 + 73) >> 5 == 2 )
      {
        v62 = *(_QWORD *)(v62 + 16);
        if ( v176 == ++v100 )
          goto LABEL_108;
      }
      else
      {
        if ( *v181 == v103 && *((_BYTE *)v188 + 9) >> 5 != 2 && v101 )
        {
          v111 = v101;
          if ( *(char *)(v101 + 29) < 0 )
            v111 = sub_77A0C0(v101);
          if ( *(_DWORD *)(v111 + 68) <= 0xFu )
            sub_78B660(v111);
          v112 = (__int64)v103;
          v113 = (*(_DWORD *)(v111 + 68) >> 4) - 1;
          if ( v103[29] < 0 )
            v112 = sub_77A0C0((__int64)v103);
          if ( *(_DWORD *)(v112 + 68) <= 0xFu )
          {
            v184 = v112;
            sub_78B660(v112);
            v112 = v184;
          }
          if ( (*(_DWORD *)(v112 + 68) >> 4) - 1 >= v113 )
          {
            v183 = v62;
            v114 = v186;
LABEL_127:
            if ( !v101
              || v103 != (char *)v101
              && (v115 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v101 + 32LL))(v101),
                  v115 != (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v103 + 32LL))(v103)) )
            {
              while ( 1 )
              {
                if ( (*(_BYTE *)(v101 + 68) & 1) == 0 || (v116 = *(_QWORD *)(v101 + 40), v116 > 7) || (_DWORD)v116 )
                {
                  v117 = v101;
                  if ( *(char *)(v101 + 29) < 0 )
                    v117 = sub_77A0C0(v101);
                  if ( *(_DWORD *)(v117 + 68) <= 0xFu )
                    sub_78B660(v117);
                  v114 &= sub_8312C0(
                            *(_QWORD *)(v101 + 48),
                            *(_QWORD *)(a7 + 8)
                          + 56LL * (unsigned int)((*(_DWORD *)(v117 + 68) >> 4) + *(_DWORD *)(a7 + 16) - 1));
                }
                while ( 1 )
                {
                  v118 = *(_QWORD *)(v101 + 8);
                  v101 = v118 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v118 <= 7 )
                    break;
                  if ( (*(_BYTE *)(v101 + 28) & 0x7Fu) - 47 <= 2 )
                    goto LABEL_127;
                }
                v101 = 0;
              }
            }
            v186 = v114;
            v62 = v183;
            while ( 1 )
            {
              v139 = *(_QWORD *)(v101 + 8);
              v101 = v139 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v139 <= 7 )
                break;
              if ( (*(_BYTE *)(v101 + 28) & 0x7Fu) - 47 <= 2 )
                goto LABEL_94;
            }
            v101 = 0;
          }
        }
LABEL_94:
        v102 = (__int64)v103;
        if ( v103[29] < 0 )
          v102 = sub_77A0C0((__int64)v103);
        if ( *(_DWORD *)(v102 + 68) <= 0xFu )
          sub_78B660(v102);
        ++v100;
        v62 = *(_QWORD *)(v62 + 8) + 56LL * (unsigned int)((*(_DWORD *)(v102 + 68) >> 4) + *(_DWORD *)(v62 + 16) - 1);
        if ( v176 == v100 )
        {
LABEL_108:
          v110 = v101;
          v61 = v103;
          v36 = v110;
          goto LABEL_25;
        }
      }
    }
  }
  v151 = sub_7A62D0(a5);
  if ( (**(_DWORD **)(*(_QWORD *)v151 + 8LL) & 0x20000) != 0 )
  {
    **(_BYTE **)(a6 + 24) = 1;
    if ( *(_DWORD *)(a6 + 964) > 2u || *(_BYTE *)(a6 + 962) || *(_BYTE *)(a6 + 963) )
      goto LABEL_201;
  }
  else
  {
    v153 = *(_QWORD *)(a6 + 32);
    v78 = *(_DWORD *)(a6 + 320);
    v215.m128i_i64[0] = a6;
    v154 = *(_DWORD *)(v153 + 208);
    v215.m128i_i32[2] = v78;
    *(_DWORD *)(v153 + 208) = v154 + 1;
    sub_847EC0(v153 + 184, v154 + 1);
    if ( (unsigned __int8)sub_88A010(a7, a6, a2, *(_QWORD *)(*(_QWORD *)v151 + 8LL), 0) )
    {
      v155 = sub_8941C0(a6, 1, v78);
      v215.m128i_i32[2] = -1;
      if ( v155 )
      {
        --*(_DWORD *)(*(_QWORD *)(a6 + 32) + 192LL);
LABEL_201:
        v152 = (unsigned __int16 *)sub_78BC30((_QWORD *)a5, (unsigned __int64 *)&v215);
        LOBYTE(v78) = (unsigned int)sub_88E980(v194, a6, v152, nullptr) != 0;
        goto LABEL_155;
      }
    }
    sub_894600((__int64)&v215);
  }
LABEL_161:
  v78 = 0;
LABEL_155:
  if ( v202 > 1 )
    sub_69F740((__int64)&v202);
  sub_822100((__int64)&v222);
  if ( v201 )
  {
    v125 = v199;
    v126 = &v199[54].m128i_i8[8];
    v127 = (__m128i *)sub_84A740(&v199[54].m128i_i64[1], (__int64 *)v200);
    if ( v127 )
    {
      v128.m128i_i64[0] = sub_69F630(v126, v200);
      v216 = 0u;
      v129 = _mm_loadl_epi64((const __m128i *)&qword_3C86F78);
      v215 = v128;
      *v127 = v128;
      v127[1] = _mm_load_si128(&v216);
      v125[55].m128i_i64[0] = _mm_add_epi32(_mm_loadl_epi64(v125 + 55), v129).m128i_u64[0];
    }
  }
  return v78;
}

