unsigned __int64 __fastcall sub_37C180(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // r14
  unsigned int v4; // r15d
  int v5; // eax
  bool v6; // r12
  int v7; // ebp
  int v8; // r15d
  __int64 v9; // r13
  int v10; // r11d
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // r15
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // r15
  int v19; // eax
  __int64 v21; // rdi
  __int64 v22; // r12
  unsigned int v23; // ebp
  char v24; // al
  __int64 v25; // rdx
  char tinfo_details; // r12
  __int64 v27; // rdi
  __int64 v28; // r14
  __int64 v29; // rbp
  _QWORD *v30; // r13
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // rdi
  int v36; // r14d
  int v37; // ebp
  __int64 v38; // r15
  __int64 v39; // r13
  __int64 v40; // r12
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  bool v43; // al
  unsigned int v44; // eax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rsi
  __int64 *v48; // rcx
  __int64 v49; // rcx
  int v50; // r13d
  __int64 v51; // rax
  int v52; // r15d
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rsi
  unsigned int v58; // eax
  int *v59; // rbp
  int *v60; // r13
  _DWORD *v61; // r15
  char v62; // cl
  unsigned int v63; // edx
  bool v64; // al
  int v65; // eax
  signed int v66; // edi
  bool v67; // al
  int v68; // eax
  __int64 v69; // rax
  __int64 v70; // rbp
  __int64 v71; // r13
  char v72; // al
  int v73; // edx
  __int64 v74; // rax
  __int64 v75; // r14
  __int64 v76; // rsi
  __int64 v77; // rcx
  unsigned int v78; // r8d
  int v79; // r10d
  char v80; // al
  unsigned int v81; // eax
  int v82; // eax
  int v83; // r14d
  __int64 v84; // rax
  __int64 v85; // r8
  int v86; // ecx
  _DWORD *v87; // rdi
  _DWORD *v88; // rsi
  _DWORD *v89; // rax
  __int64 v90; // rax
  __int64 v91; // r12
  __int64 v92; // rax
  __int64 v93; // rsi
  unsigned __int64 v94; // rdi
  int *v95; // r14
  int *v96; // r13
  _DWORD *v97; // rdx
  int v98; // r12d
  _DWORD *v99; // rax
  __m128 v100; // xmm1
  __int64 v101; // rdi
  unsigned __int64 v102; // rdi
  int v103; // r13d
  __int64 v104; // rbp
  __int64 v105; // rax
  char v106; // al
  __int64 v107; // rbp
  __int64 v108; // r13
  _DWORD *v109; // rsi
  _DWORD *v110; // rax
  _DWORD *v111; // r12
  char v112; // al
  int v113; // edx
  char v114; // al
  int v115; // ecx
  __int64 v116; // rax
  int v117; // edx
  __int64 v118; // rdi
  __int64 v119; // r14
  __int64 v120; // rbp
  _QWORD *v121; // r12
  __int64 v122; // rdi
  __int64 v123; // rdi
  int *v124; // rbp
  int *v125; // r13
  _DWORD *v126; // rsi
  int v127; // edx
  _DWORD *v128; // r8
  _DWORD *v129; // rdi
  _DWORD *v130; // rax
  int v131; // edi
  int v132; // eax
  char v133; // al
  unsigned __int64 v134; // rcx
  unsigned __int64 v135; // rdx
  __int64 *v136; // r12
  int v137; // ebp
  __int64 v138; // rdx
  _DWORD *v139; // rcx
  int v140; // r14d
  _DWORD *v141; // rdx
  _DWORD *v142; // r8
  _DWORD *v143; // rdi
  _DWORD *v144; // rax
  int v145; // edx
  char v146; // al
  unsigned int v147; // eax
  __int64 v148; // rsi
  __int64 v149; // rdx
  __int64 v150; // rdi
  __int64 v151; // rax
  int v152; // eax
  int v153; // eax
  unsigned int v154; // ebp
  int v155; // ebp
  int v156; // eax
  char v157; // al
  _DWORD *v158; // rdi
  __int64 v159; // rcx
  _DWORD *v160; // r10
  _DWORD *v161; // rax
  int v162; // r10d
  int v163; // eax
  int v164; // r10d
  int v165; // eax
  int v166; // eax
  unsigned __int64 v167; // rax
  __int64 v168; // rdx
  unsigned int v169; // eax
  unsigned int v170; // [rsp+8h] [rbp-2C0h]
  unsigned int v171; // [rsp+8h] [rbp-2C0h]
  int v172; // [rsp+10h] [rbp-2B8h]
  int v173; // [rsp+10h] [rbp-2B8h]
  bool v174; // [rsp+18h] [rbp-2B0h]
  int v175; // [rsp+18h] [rbp-2B0h]
  int v176; // [rsp+18h] [rbp-2B0h]
  unsigned int v177; // [rsp+18h] [rbp-2B0h]
  int v178; // [rsp+18h] [rbp-2B0h]
  int v179; // [rsp+18h] [rbp-2B0h]
  int v180; // [rsp+18h] [rbp-2B0h]
  int v181; // [rsp+18h] [rbp-2B0h]
  __int64 *v182; // [rsp+20h] [rbp-2A8h]
  _QWORD *v183; // [rsp+28h] [rbp-2A0h]
  unsigned __int8 v184; // [rsp+28h] [rbp-2A0h]
  __int64 v185; // [rsp+28h] [rbp-2A0h]
  __int64 v186; // [rsp+28h] [rbp-2A0h]
  __int64 v187; // [rsp+28h] [rbp-2A0h]
  bool v188; // [rsp+28h] [rbp-2A0h]
  __int64 v189; // [rsp+28h] [rbp-2A0h]
  int v190; // [rsp+30h] [rbp-298h]
  char v191; // [rsp+30h] [rbp-298h]
  int v192; // [rsp+30h] [rbp-298h]
  __int64 v193; // [rsp+30h] [rbp-298h]
  __int64 v194; // [rsp+38h] [rbp-290h]
  unsigned int v195; // [rsp+38h] [rbp-290h]
  int v196; // [rsp+38h] [rbp-290h]
  char v197; // [rsp+43h] [rbp-285h]
  unsigned int v198; // [rsp+44h] [rbp-284h]
  int v199; // [rsp+44h] [rbp-284h]
  __int64 v200; // [rsp+48h] [rbp-280h]
  int v201; // [rsp+58h] [rbp-270h]
  int v202; // [rsp+5Ch] [rbp-26Ch]
  __int64 *v203; // [rsp+60h] [rbp-268h] BYREF
  __int64 v204; // [rsp+68h] [rbp-260h] BYREF
  __m128 v205; // [rsp+70h] [rbp-258h] BYREF
  __int64 v206; // [rsp+80h] [rbp-248h]
  int v207; // [rsp+88h] [rbp-240h]
  __int64 v208; // [rsp+90h] [rbp-238h] BYREF
  __int128 v209; // [rsp+98h] [rbp-230h]
  __int64 v210; // [rsp+A8h] [rbp-220h]
  __int64 v211; // [rsp+B0h] [rbp-218h]
  __int64 v212; // [rsp+B8h] [rbp-210h]
  __int128 v213; // [rsp+C0h] [rbp-208h]
  __int64 v214; // [rsp+D0h] [rbp-1F8h]
  __int128 v215; // [rsp+D8h] [rbp-1F0h]
  char v216; // [rsp+E8h] [rbp-1E0h]
  __int64 (__fastcall **v217)(); // [rsp+F0h] [rbp-1D8h] BYREF
  int v218; // [rsp+F8h] [rbp-1D0h]
  __int64 v219; // [rsp+100h] [rbp-1C8h]
  __int128 v220; // [rsp+108h] [rbp-1C0h]
  __int64 v221; // [rsp+118h] [rbp-1B0h]
  __int128 v222; // [rsp+120h] [rbp-1A8h]
  __int64 v223[2]; // [rsp+130h] [rbp-198h] BYREF
  __int64 v224; // [rsp+140h] [rbp-188h]
  __int128 v225; // [rsp+148h] [rbp-180h]
  char v226; // [rsp+158h] [rbp-170h]
  int *v227; // [rsp+160h] [rbp-168h] BYREF
  __int128 v228; // [rsp+168h] [rbp-160h]
  __int64 v229; // [rsp+180h] [rbp-148h]
  __int64 v230; // [rsp+188h] [rbp-140h]
  __int64 v231; // [rsp+1B8h] [rbp-110h]
  __int64 v232; // [rsp+1C0h] [rbp-108h]
  __int64 v233; // [rsp+1D0h] [rbp-F8h]
  __int64 v234; // [rsp+1D8h] [rbp-F0h]
  __int64 v235[6]; // [rsp+1E8h] [rbp-E0h] BYREF
  __int64 v236; // [rsp+218h] [rbp-B0h] BYREF
  __int128 v237; // [rsp+220h] [rbp-A8h]
  __int64 v238; // [rsp+230h] [rbp-98h] BYREF
  __int128 v239; // [rsp+238h] [rbp-90h]
  __int64 v240; // [rsp+248h] [rbp-80h]
  __int128 v241; // [rsp+250h] [rbp-78h]
  __int64 v242; // [rsp+260h] [rbp-68h]
  __int64 v243; // [rsp+268h] [rbp-60h]
  __int64 v244; // [rsp+270h] [rbp-58h]
  __int64 v245; // [rsp+278h] [rbp-50h]
  char v246; // [rsp+280h] [rbp-48h]
  unsigned __int64 v247; // [rsp+288h] [rbp-40h]

  v247 = __readfsqword(0x28u);
  v1 = a1[1];
  v197 = *(_BYTE *)(v1 + 320);
  if ( v197 || (*(_BYTE *)(v1 + 5) & 4) != 0 )
    return v247 - __readfsqword(0x28u);
  v200 = *(_QWORD *)(v1 + 1504);
  if ( *(_DWORD *)(v1 + 72) == 48 && (*(_BYTE *)(*(_QWORD *)(v1 + 1504) + 48LL) & 8) == 0 )
  {
    if ( !under_debugger )
      sub_383060(51802);
    goto LABEL_442;
  }
  v201 = sub_19F880(*(_QWORD *)(v1 + 936));
  v217 = off_4E62C8;
  v218 = 0;
  v219 = 0;
  v221 = 0;
  v223[0] = 0;
  v223[1] = 0;
  v224 = 0;
  v226 = 0;
  v220 = 0;
  v222 = 0;
  v225 = 0;
  sub_255A80((__int64 *)&v217, (__int64)(a1 + 2), 0);
  v182 = v223;
  if ( v226 )
    v182 = nullptr;
  v3 = a1[1];
  v4 = *(_DWORD *)(v3 + 72);
  v183 = *(_QWORD **)(v3 + 1504);
  v198 = v4;
  if ( sub_36F620((__int64)v183, v4) )
    goto LABEL_56;
  v202 = *(_DWORD *)(*(_QWORD *)(v3 + 1504) + 80LL);
  v5 = *(_DWORD *)(v3 + 68);
  if ( v4 == 48 )
  {
    v6 = 0;
    v227 = nullptr;
    v228 = 0;
    if ( v5 > 0 )
    {
      v174 = 0;
      goto LABEL_10;
    }
LABEL_169:
    v174 = v4 == 48 || v4 == 144;
    goto LABEL_10;
  }
  v174 = 0;
  v228 = 0;
  v227 = nullptr;
  v6 = v4 - 208 > 0x2F;
  if ( v5 <= 0 )
  {
    if ( ((v4 - 112) & 0xFFFFFFEF) == 0 )
    {
      v174 = 1;
      v6 = 1;
      goto LABEL_10;
    }
    goto LABEL_169;
  }
LABEL_10:
  v7 = *(_DWORD *)(v3 + 464) - 1;
  if ( v7 < 0 )
    goto LABEL_56;
  v172 = -1;
  v8 = *(_DWORD *)(v3 + 464) - 1;
  v9 = 4LL * (unsigned int)v7;
  do
  {
    if ( !v8 )
    {
      if ( (unsigned __int8)sub_36E1B0(v3) )
        break;
      v58 = *(_DWORD *)(v3 + 72) & 0xFFFFFFF0;
      if ( (v58 == 64 || v58 == 208) && *(_QWORD *)(v3 + 464) == 1 )
        break;
    }
    v10 = *(_DWORD *)(*(_QWORD *)(v3 + 456) + v9);
    v11 = *(_QWORD *)(v3 + 432) + 104LL * v10;
    if ( (*(_BYTE *)(v11 + 26) & 8) != 0
      || v182 != nullptr
      && v198 - 208 <= 0x2F
      && (v194 = *(_QWORD *)(v3 + 432) + 104LL * *(int *)(*(_QWORD *)(v3 + 456) + v9),
          v190 = *(_DWORD *)(*(_QWORD *)(v3 + 456) + v9),
          v67 = sub_64930(v182, v10),
          v10 = v190,
          v11 = v194,
          !v67) )
    {
      if ( (unsigned int)(*(_DWORD *)v11 - 3) <= 1 || v7 == v8 && v174 )
      {
        v12 = *(_DWORD *)(v11 + 24);
        --v7;
        BYTE1(v12) &= 0x7Eu;
        *(_DWORD *)(v11 + 24) = v12 | 0x100000;
        memmove(
          (void *)(v9 + *(_QWORD *)(v3 + 456)),
          (const void *)(v9 + *(_QWORD *)(v3 + 456) + 4),
          4LL * *(_QWORD *)(v3 + 464) - 4 - v9);
        --*(_QWORD *)(v3 + 464);
        goto LABEL_16;
      }
      if ( v6 )
      {
        if ( *(_DWORD *)v11 == 1 )
        {
          v56 = v228;
          v57 = (__int64)v227;
          if ( *((_QWORD *)&v228 + 1) < (unsigned __int64)(v228 + 1) )
          {
            v192 = v10;
            v227 = (int *)qvector_reserve((__int64)&v227, (__int64)v227, v228 + 1, 4);
            v57 = (__int64)v227;
            v10 = v192;
            v56 = v228;
          }
          *(_DWORD *)(v57 + 4 * v56) = v10;
          *(_QWORD *)&v228 = v228 + 1;
        }
        goto LABEL_16;
      }
      goto LABEL_15;
    }
    if ( *(_DWORD *)v11 == 1 )
    {
      if ( v6 )
      {
        v68 = (get_tinfo_property() & 0xF) == 9;
        if ( v172 == -1 )
          v172 = v68;
        else
          v6 = v68 == v172;
        goto LABEL_16;
      }
LABEL_15:
      v6 = 0;
    }
LABEL_16:
    --v8;
    v9 -= 4;
  }
  while ( v8 != -1 );
  v21 = (__int64)v227;
  if ( v172 == -1 )
    goto LABEL_54;
  if ( !v6 )
    goto LABEL_54;
  v59 = &v227[v228];
  if ( v59 == v227 )
    goto LABEL_54;
  v60 = v227;
  while ( 2 )
  {
    v61 = (_DWORD *)(*(_QWORD *)(v3 + 432) + 104LL * *v60);
    if ( (v172 & 1) != ((get_tinfo_property() & 0xF) == 9) )
    {
      v62 = 0;
      v63 = v61[22];
      if ( v172 != 1 || (v170 = v61[22], v64 = sub_11CB40(v63), v63 = v170, v62 = 1, v64) )
      {
LABEL_137:
        sub_1EF680(v61, v183, v63, v62);
      }
      else
      {
        v65 = v198;
        if ( v198 <= 0x10 )
        {
          v65 = getinf();
          v63 = v170;
        }
        v171 = v63;
        if ( v65 != 176 && v65 != 256 && !(unsigned __int8)getinf_flag() )
        {
          v66 = v171 & -v202;
          if ( v66 <= 0 )
            v66 = 1;
          v63 = sub_11CB60(v66, -v202 & (v202 + v171 - 1));
          if ( v63 != -1 )
          {
            v62 = 1;
            goto LABEL_137;
          }
        }
      }
    }
    if ( v59 != ++v60 )
      continue;
    break;
  }
  v21 = (__int64)v227;
LABEL_54:
  if ( v21 )
  {
    *(_QWORD *)&v228 = 0;
    qfree(v21);
  }
LABEL_56:
  sub_1A5BE0(*(_QWORD **)(a1[1] + 936));
  sub_37BF90(a1[1], ((*(_BYTE *)(a1[27] + 606) & 0x10) != 0) + 2);
  v22 = a1[1];
  v23 = *(_DWORD *)(v22 + 72);
  sub_D10B0((__int64)&v227, *(_QWORD *)(v22 + 1496), 0x10u);
  memset(v235, 0, sizeof(v235));
  v236 = 0;
  v238 = 0;
  v240 = 0;
  v242 = 0;
  v243 = 0;
  v244 = 0;
  v237 = 0;
  v239 = 0;
  v241 = 0;
  v245 = sub_369E90((__int64)&v227, v22, v23);
  v24 = sub_D81C0(v245, v235, v22);
  v18 = a1[1];
  v246 = v24;
  if ( (unsigned int)(*(_DWORD *)(v18 + 72) - 208) <= 0x2F )
  {
    if ( v24 )
    {
      v25 = v245;
      goto LABEL_59;
    }
LABEL_36:
    v19 = sub_13D300((_QWORD *)v18, 3);
    goto LABEL_37;
  }
  v25 = v245;
  if ( !*(_DWORD *)(v245 + 4) )
  {
    sub_1990E0(v235);
    if ( v233 )
    {
      v234 = 0;
      qfree(v233);
    }
    if ( v231 )
    {
      v232 = 0;
      qfree(v231);
    }
    if ( v229 )
    {
      v230 = 0;
      qfree(v229);
    }
    if ( (_QWORD)v228 )
    {
      *((_QWORD *)&v228 + 1) = 0;
      qfree(v228);
    }
    v217 = off_4E62C8;
    if ( v224 )
    {
      *(_QWORD *)&v225 = 0;
      qfree(v224);
    }
    qfree(v223[0]);
    v217 = off_4DBCF8;
    if ( v221 )
    {
      *(_QWORD *)&v222 = 0;
      qfree(v221);
    }
    if ( v219 )
    {
      *(_QWORD *)&v220 = 0;
      qfree(v219);
    }
    return v247 - __readfsqword(0x28u);
  }
  if ( !v24 )
  {
    if ( !under_debugger )
      sub_383060(52080);
    goto LABEL_442;
  }
LABEL_59:
  tinfo_details = sub_36F620(*(_QWORD *)(v18 + 1504), *(_DWORD *)(v25 + 72));
  if ( tinfo_details )
  {
    tinfo_details = 0;
    goto LABEL_74;
  }
  if ( *(_QWORD *)(v245 + 96) && *(_QWORD *)(v245 + 120) )
  {
    v204 = 0;
    v206 = 0;
    v203 = (__int64 *)&v227;
    v207 = 0;
    v208 = 0;
    v210 = 0;
    v211 = 0;
    v212 = 0;
    v214 = 0;
    v216 = 16;
    v205 = 0;
    v209 = 0;
    v213 = 0;
    v215 = 0;
    if ( *(_DWORD *)v245 == 5 )
      goto LABEL_63;
    tinfo_details = get_tinfo_details();
    if ( tinfo_details )
    {
      if ( (_QWORD)v209 )
      {
        v83 = 0;
        v84 = 0;
        while ( 1 )
        {
          v85 = v208 + 80 * v84;
          if ( (unsigned int)(*(_DWORD *)v85 - 3) > 1 )
            goto LABEL_233;
          v86 = *(unsigned __int16 *)(v85 + 8);
          v87 = *(_DWORD **)(v245 + 8);
          v88 = &v87[*(_QWORD *)(v245 + 16)];
          if ( v87 == v88 )
            break;
          v89 = *(_DWORD **)(v245 + 8);
          while ( v86 != *v89 )
          {
            if ( v88 == ++v89 )
              goto LABEL_263;
          }
          if ( v88 == v89 )
            break;
          v90 = v89 - v87;
          LODWORD(v91) = v90;
          if ( (_DWORD)v90 == -1 )
            break;
          if ( *(_DWORD *)v245 == 3 )
          {
            v103 = v90;
            goto LABEL_250;
          }
          if ( (int)v90 < (unsigned __int64)v237
            && !(unsigned __int8)sub_36B7F0((__int64)&v203, (_QWORD *)v18, v90, 0, (_DWORD *)v85) )
          {
            goto LABEL_233;
          }
LABEL_232:
          v84 = ++v83;
          if ( v83 >= (unsigned __int64)v209 )
            goto LABEL_233;
        }
LABEL_263:
        v109 = *(_DWORD **)(v245 + 32);
        v110 = &v109[*(_QWORD *)(v245 + 40)];
        if ( v109 == v110 )
          goto LABEL_233;
        v111 = *(_DWORD **)(v245 + 32);
        while ( v86 != *v111 )
        {
          if ( v110 == ++v111 )
            goto LABEL_233;
        }
        if ( v110 == v111 )
          goto LABEL_233;
        v91 = v111 - v109;
        v103 = v91;
        if ( (_DWORD)v91 == -1 )
          goto LABEL_233;
        if ( *(_DWORD *)v245 != 3 )
          LODWORD(v91) = -1;
LABEL_250:
        v104 = v203[35];
        v105 = *(_QWORD *)(v104 + 80);
        if ( *(_DWORD *)(*(_QWORD *)(v105 + 8) + 4LL) != 13 && *(_QWORD *)(v104 + 120) )
        {
          v185 = v85;
          v106 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v105 + 112) + 200LL))(
                   *(_QWORD *)(v105 + 112),
                   **(unsigned int **)(v104 + 112));
          v85 = v185;
          if ( v106 )
          {
            v156 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v104 + 80) + 112LL) + 32LL))(
                     *(_QWORD *)(*(_QWORD *)(v104 + 80) + 112LL),
                     **(unsigned int **)(v104 + 112));
            v85 = v185;
            if ( *(_QWORD *)(v104 + 120) > 1u
              && *(_DWORD *)(*(_QWORD *)(v104 + 112) + 4LL) - **(_DWORD **)(v104 + 112) < (unsigned int)v156 )
            {
              goto LABEL_377;
            }
          }
          else
          {
            if ( *(_QWORD *)(v104 + 120) <= 1u
              || (unsigned int)(*(_DWORD *)(*(_QWORD *)(v104 + 112) + 4LL) - **(_DWORD **)(v104 + 112)) > 7 )
            {
              goto LABEL_255;
            }
LABEL_377:
            v189 = v85;
            v156 = round_down_power2();
            v85 = v189;
          }
          if ( v156 <= 7 && (v206 & 0x100000000LL) != 0 )
            ++HIDWORD(v206);
        }
LABEL_255:
        v107 = v103;
        if ( v103 < (unsigned __int64)v239 )
        {
          if ( *(_DWORD *)v245 != 4
            || (v187 = v85, v146 = sub_369A00((__int64)&v203, (_QWORD *)v18, v103), v85 = v187, v146) )
          {
            v186 = v85;
            if ( !(unsigned __int8)sub_36B7F0((__int64)&v203, (_QWORD *)v18, v103, 1, (_DWORD *)v85) )
              goto LABEL_233;
            if ( (_DWORD)v91 != -1 )
            {
              if ( *(_DWORD *)v245 != 3 || v103 != (_DWORD)v91 )
              {
                if ( !under_debugger )
                  sub_383060(52066);
                goto LABEL_442;
              }
              v108 = sub_13D280((_QWORD *)v18, *(_DWORD *)(v236 + 4LL * (int)v91));
              if ( (*(_BYTE *)(v108 + 26) & 8) != 0 )
              {
                v193 = v186;
                v188 = (get_tinfo_property() & 0xF) == 9;
                if ( v188 != ((get_tinfo_property() & 0xF) == 9) )
                {
                  if ( *(_DWORD *)v108 != 3 )
                  {
                    if ( !under_debugger )
                      sub_383060(52067);
                    goto LABEL_442;
                  }
                  if ( *(_DWORD *)v193 != 3 )
                  {
                    if ( !under_debugger )
                      sub_383060(52068);
                    goto LABEL_442;
                  }
                  if ( *(_DWORD *)(v238 + 4LL * (int)v91) != *(_DWORD *)(v236 + 4 * v107) )
                  {
                    if ( !under_debugger )
                      sub_383060(52069);
                    goto LABEL_442;
                  }
                  v155 = *(_DWORD *)(*(_QWORD *)(v245 + 88) + 4LL * (int)v91);
                  cleanup_argloc();
                  *(_DWORD *)(v108 + 8) = v155;
                  *(_DWORD *)v108 = 3;
                  sub_1EF8F0(v108, *(_QWORD *)(v18 + 1504), (_BYTE *)(v193 + 64), 0);
                }
              }
              LODWORD(v206) = HIDWORD(v206);
            }
          }
        }
        goto LABEL_232;
      }
LABEL_233:
      v92 = *(_QWORD *)(v18 + 456);
      v93 = v204;
      v94 = v205.m128_u64[0];
LABEL_234:
      v95 = (int *)(v92 + 4LL * *(_QWORD *)(v18 + 464));
      if ( v95 != (int *)v92 )
      {
        v96 = (int *)v92;
        do
        {
          v97 = (_DWORD *)(v93 + 4 * v94);
          v98 = *v96;
          if ( (_DWORD *)v93 == v97 )
            goto LABEL_246;
          v99 = (_DWORD *)v93;
          while ( v98 != *v99 )
          {
            if ( v97 == ++v99 )
              goto LABEL_246;
          }
          if ( v97 == v99 )
          {
LABEL_246:
            v102 = v94 + 1;
            if ( v205.m128_u64[1] < v102 )
            {
              v204 = qvector_reserve((__int64)&v204, v93, v102, 4);
              v97 = (_DWORD *)(v204 + 4 * v205.m128_u64[0]);
            }
            *v97 = v98;
            v93 = v204;
            v94 = ++v205.m128_u64[0];
          }
          ++v96;
        }
        while ( v95 != v96 );
        v92 = *(_QWORD *)(v18 + 456);
      }
      *(_QWORD *)(v18 + 456) = v93;
      tinfo_details = 1;
      v100 = _mm_loadh_ps((const double *)(v18 + 472));
      *(__m128 *)(v18 + 464) = _mm_loadh_ps((const double *)&v205.m128_u64[1]);
      v101 = v214;
      v204 = v92;
      v205 = v100;
LABEL_244:
      if ( v101 )
      {
        *(_QWORD *)&v215 = 0;
        qfree(v101);
      }
LABEL_63:
      cleanup_argloc();
      clear_tinfo_t();
      v27 = v208;
      if ( v208 )
      {
        v28 = v209;
        if ( (_QWORD)v209 )
        {
          v29 = 0;
          do
          {
            v30 = (_QWORD *)(v27 + 80 * v29);
            clear_tinfo_t();
            v31 = v30[5];
            if ( v31 )
            {
              v30[6] = 0;
              qfree(v31);
            }
            v32 = v30[2];
            if ( v32 )
            {
              v30[3] = 0;
              qfree(v32);
            }
            ++v29;
            cleanup_argloc();
            v27 = v208;
          }
          while ( v28 != v29 );
        }
        *(_QWORD *)&v209 = 0;
        qfree(v27);
      }
      if ( v204 )
      {
        v205.m128_u64[0] = 0;
        qfree(v204);
      }
      goto LABEL_74;
    }
    if ( ((*(_DWORD *)v245 - 3) & 0xFFFFFFFD) == 0 )
    {
      v101 = v214;
      goto LABEL_244;
    }
    v92 = *(_QWORD *)(v18 + 456);
    v124 = (int *)(v92 + 4LL * *(_QWORD *)(v18 + 464));
    if ( (int *)v92 == v124 )
    {
LABEL_320:
      v134 = v237;
      v135 = (int)v206;
      v136 = &v236;
      v137 = v206;
      if ( (__int64)v237 - SHIDWORD(v206) < (unsigned __int64)(v237 - (int)v206) )
      {
        v134 = v239;
        v135 = SHIDWORD(v206);
        v137 = HIDWORD(v206);
        v136 = &v238;
      }
      v93 = v204;
      v94 = v205.m128_u64[0];
      if ( v135 < v134 )
      {
        do
        {
          v138 = *(int *)(*v136 + 4 * v135);
          if ( (_DWORD)v138 == -1 )
            break;
          v139 = (_DWORD *)(v93 + 4 * v94);
          v140 = *(_DWORD *)(v92 + 4 * v138);
          if ( v139 == (_DWORD *)v93 )
            goto LABEL_334;
          v141 = (_DWORD *)v93;
          while ( v140 != *v141 )
          {
            if ( v139 == ++v141 )
              goto LABEL_334;
          }
          if ( v139 == v141 )
          {
LABEL_334:
            if ( v205.m128_u64[1] < v94 + 1 )
            {
              v204 = qvector_reserve((__int64)&v204, v93, v94 + 1, 4);
              v139 = (_DWORD *)(v204 + 4 * v205.m128_u64[0]);
            }
            *v139 = v140;
            v93 = v204;
            v94 = ++v205.m128_u64[0];
            v92 = *(_QWORD *)(v18 + 456);
          }
          v135 = ++v137;
        }
        while ( v137 < (unsigned __int64)v136[1] );
      }
      goto LABEL_234;
    }
    v125 = *(int **)(v18 + 456);
    while ( 2 )
    {
      v126 = (_DWORD *)(*(_QWORD *)(v18 + 432) + 104LL * *v125);
      if ( (unsigned int)(*v126 - 3) > 1 )
      {
LABEL_319:
        v92 = *(_QWORD *)(v18 + 456);
        goto LABEL_320;
      }
      v127 = v126[2];
      v128 = *(_DWORD **)(v245 + 88);
      if ( *v126 == 4 )
        v127 = (unsigned __int16)v127;
      v129 = &v128[*(_QWORD *)(v245 + 96)];
      if ( v128 == v129 )
        goto LABEL_337;
      v130 = *(_DWORD **)(v245 + 88);
      while ( v127 != *v130 )
      {
        if ( v129 == ++v130 )
          goto LABEL_337;
      }
      if ( v130 == v129 || (v131 = v130 - v128, v131 == -1) )
      {
LABEL_337:
        v142 = *(_DWORD **)(v245 + 112);
        v143 = &v142[*(_QWORD *)(v245 + 120)];
        if ( v142 == v143 )
          goto LABEL_319;
        v144 = *(_DWORD **)(v245 + 112);
        while ( v127 != *v144 )
        {
          if ( v143 == ++v144 )
            goto LABEL_319;
        }
        if ( v143 == v144 )
          goto LABEL_319;
        v145 = v144 - v142;
        if ( v145 == -1 )
          goto LABEL_319;
        v132 = v126[6] & 0x80000;
        if ( *(_DWORD *)v245 != 3 )
        {
          if ( !v132 )
          {
            if ( *(_DWORD *)v245 != 4
              || (v181 = v145, v157 = sub_369A00((__int64)&v203, (_QWORD *)v18, v145), v145 = v181, v157) )
            {
              v133 = sub_36B7F0((__int64)&v203, (_QWORD *)v18, v145, 1, nullptr);
              goto LABEL_317;
            }
          }
LABEL_318:
          if ( v124 == ++v125 )
            goto LABEL_319;
          continue;
        }
      }
      else
      {
        v132 = v126[6] & 0x80000;
        if ( *(_DWORD *)v245 != 3 )
        {
          if ( !v132 )
          {
            v133 = sub_36B7F0((__int64)&v203, (_QWORD *)v18, v131, 0, nullptr);
LABEL_317:
            if ( !v133 )
            {
              if ( !under_debugger )
                sub_383060(52071);
              goto LABEL_442;
            }
          }
          goto LABEL_318;
        }
      }
      break;
    }
    if ( !v132 )
    {
      if ( !under_debugger )
        sub_383060(52070);
      goto LABEL_442;
    }
    goto LABEL_318;
  }
LABEL_74:
  v33 = a1[1];
  v17 = *(_DWORD *)(v33 + 72);
  v16 = v33;
  if ( v17 <= 0x10 )
  {
    v13 = getinf();
    if ( v13 != 256 && v13 != 176 )
    {
      if ( (unsigned __int8)getinf_flag() )
      {
        v14 = getinf();
        if ( v14 != 176 && v14 != 256 )
          goto LABEL_185;
      }
    }
LABEL_28:
    v15 = a1[1];
    goto LABEL_29;
  }
  if ( v17 == 176 || v17 == 256 )
  {
    if ( tinfo_details )
      goto LABEL_30;
    goto LABEL_34;
  }
  if ( !(unsigned __int8)getinf_flag() )
    goto LABEL_28;
LABEL_185:
  v191 = getinf_flag();
  if ( v191 )
    goto LABEL_28;
  v70 = *(_QWORD *)(v33 + 464);
  if ( !v70 )
    goto LABEL_28;
  v71 = sub_13D280((_QWORD *)v33, (int)v70 - 1);
  LODWORD(v70) = v70 - 2;
  if ( (int)v70 < 0 )
    goto LABEL_28;
  v70 = (int)v70;
  while ( 2 )
  {
    v74 = sub_13D280((_QWORD *)v33, v70);
    v75 = v74;
    if ( !v71 || (*(_BYTE *)(v74 + 26) & 8) == 0 && sub_64930(v223, *(_DWORD *)(*(_QWORD *)(v33 + 456) + 4 * v70)) )
      goto LABEL_199;
    v177 = *(_DWORD *)(v245 + 72);
    v173 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v245 + 80) + 112LL) + 80LL);
    v76 = *(_QWORD *)(v71 + 80);
    LODWORD(v203) = 0;
    get_tinfo_size();
    v73 = (int)v203;
    v78 = v177;
    if ( ((unsigned int)v203 & ((_DWORD)v203 - 1)) != 0 )
    {
      sub_369DE0(&v203, v76, (unsigned int)v203, v77, v177);
LABEL_427:
      if ( !under_debugger )
        sub_383060(52095);
      goto LABEL_442;
    }
    v79 = 2 * v173;
    if ( (int)v203 <= 2 * v173 )
    {
      if ( v173 <= (int)v203 )
      {
        if ( v177 > 0x10 )
        {
LABEL_273:
          if ( v78 != 176 && v78 != 256 )
            goto LABEL_193;
          goto LABEL_199;
        }
LABEL_355:
        v180 = v73;
        v147 = getinf();
        v73 = v180;
        v78 = v147;
        goto LABEL_273;
      }
      if ( v177 > 0x10 )
      {
LABEL_191:
        if ( v78 != 176 && v78 != 256 )
          goto LABEL_193;
        goto LABEL_194;
      }
LABEL_213:
      v179 = v73;
      v81 = getinf();
      v73 = v179;
      v78 = v81;
      goto LABEL_191;
    }
    if ( v177 <= 0x10 )
    {
      v196 = (int)v203;
      v153 = getinf();
      v79 = 2 * v173;
      if ( v153 != 176 && v153 != 256 )
      {
        v73 = v196;
        v78 = v177;
        goto LABEL_209;
      }
      if ( v173 <= v79 )
      {
LABEL_354:
        v73 = v79;
        goto LABEL_355;
      }
LABEL_212:
      v73 = v79;
      goto LABEL_213;
    }
    if ( v177 == 176 || v177 == 256 )
      goto LABEL_199;
LABEL_209:
    v199 = v79;
    v195 = v78;
    v178 = v73;
    v80 = getinf_flag();
    v73 = v178;
    if ( v80 )
      goto LABEL_194;
    v79 = v199;
    if ( v173 <= v199 )
    {
      v73 = v199;
      if ( v195 > 0x10 )
        goto LABEL_193;
      goto LABEL_354;
    }
    v73 = v199;
    if ( v195 <= 0x10 )
      goto LABEL_212;
LABEL_193:
    v176 = v73;
    v72 = getinf_flag();
    v73 = v176;
    if ( !v72 )
      goto LABEL_199;
LABEL_194:
    if ( v173 != *(_DWORD *)(v75 + 88) || v173 >= v73 )
      goto LABEL_199;
    if ( *(_DWORD *)v75 == 1 )
    {
      if ( *(_DWORD *)v71 != 1 )
        goto LABEL_199;
      v148 = v73;
      v149 = *(_QWORD *)(v75 + 8) % v73;
      if ( (*(_BYTE *)(v75 + 26) & 8) == 0 )
      {
        if ( v149 && !(*(_QWORD *)(v71 + 8) % v148) )
          goto LABEL_360;
        goto LABEL_199;
      }
      if ( !v149 )
        goto LABEL_427;
      if ( *(_QWORD *)(v71 + 8) % v148 )
      {
        if ( !under_debugger )
          sub_383060(52096);
        goto LABEL_442;
      }
LABEL_360:
      v150 = *(_QWORD *)(v33 + 456) + 4 * v70;
      v151 = *(_QWORD *)(v33 + 464) - v70--;
      memmove((void *)v150, (const void *)(v150 + 4), 4 * v151 - 4);
      --*(_QWORD *)(v33 + 464);
      v152 = *(_DWORD *)(v75 + 24);
      BYTE1(v152) &= 0x7Eu;
      *(_DWORD *)(v75 + 24) = v152 | 0x100000;
      if ( (int)v70 < 0 )
      {
        v16 = a1[1];
        goto LABEL_30;
      }
      v191 = 1;
      v71 = sub_13D280((_QWORD *)v33, v70);
    }
    else
    {
      if ( *(_DWORD *)v75 == 3 && (unsigned int)(*(_DWORD *)v71 - 3) <= 1 )
      {
        v158 = *(_DWORD **)(v245 + 88);
        v159 = *(_QWORD *)(v245 + 96);
        v160 = &v158[v159];
        if ( v158 != v160 )
        {
          v161 = *(_DWORD **)(v245 + 88);
          while ( *(_DWORD *)(v75 + 8) != *v161 )
          {
            if ( v160 == ++v161 )
              goto LABEL_199;
          }
          if ( v160 != v161 )
          {
            v162 = v161 - v158;
            if ( v162 != -1 && *(_DWORD *)v245 != 3 && v162 % (v73 / v173) )
            {
              v163 = v159 - 1;
              if ( (_DWORD)v159 - 1 == v162 )
              {
                if ( (v163 & 1) != 0 )
                {
                  v169 = *(_DWORD *)(v245 + 72) & 0xFFFFFFF0;
                  if ( v169 != 64 && v169 != 208 && (unsigned __int8)sub_64880(v235) )
                    goto LABEL_360;
                }
              }
              else
              {
                if ( v163 <= v162 )
                {
                  if ( !under_debugger )
                    sub_383060(52473);
                  goto LABEL_442;
                }
                v164 = v162 + 1;
                if ( !(v164 % (v73 / v173)) )
                {
                  v165 = *(_DWORD *)(v71 + 8);
                  if ( *(_DWORD *)v71 == 4 )
                    v165 = (unsigned __int16)v165;
                  if ( v165 == v158[v164] )
                    goto LABEL_360;
                }
              }
            }
          }
        }
      }
LABEL_199:
      v71 = v75;
    }
    if ( (int)--v70 >= 0 )
      continue;
    break;
  }
  v15 = a1[1];
  v16 = v15;
  if ( v191 )
    goto LABEL_30;
LABEL_29:
  v16 = v15;
  if ( tinfo_details )
  {
LABEL_30:
    if ( !(unsigned __int8)sub_D81C0(v245, v235, v16) )
    {
      if ( !under_debugger )
        sub_383060(52075);
      goto LABEL_442;
    }
    v15 = a1[1];
  }
  v17 = *(_DWORD *)(v15 + 72);
  if ( v17 <= 0x10 )
    v17 = getinf();
LABEL_34:
  if ( v17 != 176 )
  {
    v18 = a1[1];
    goto LABEL_36;
  }
  if ( (unsigned __int64)getinf() > 0x397 )
  {
    v18 = a1[1];
    goto LABEL_158;
  }
  v184 = getinf_flag();
  if ( v184 )
  {
    netnode_check();
    v154 = netnode_altval();
    if ( v154 > 0x74 )
    {
      v166 = *(_DWORD *)(get_ph() + 4);
      v18 = a1[1];
      if ( !v166 )
        goto LABEL_158;
      v167 = (unsigned int)(v166 - 13);
      if ( (unsigned int)v167 <= 0x3B )
      {
        v168 = 0x800000000000005LL;
        v184 = _bittest64(&v168, v167);
        if ( !v184 )
        {
          v82 = sub_13D300((_QWORD *)v18, 3);
          goto LABEL_217;
        }
        if ( v154 != 117 )
        {
LABEL_158:
          v69 = *(int *)(v18 + 480);
          if ( (_DWORD)v69 != -1 )
          {
            v184 = sub_369E00(*(_QWORD *)(v18 + 432) + 104 * v69);
            v175 = sub_13D300((_QWORD *)a1[1], 3);
            if ( !v175 )
            {
              if ( v184 )
                goto LABEL_106;
              goto LABEL_38;
            }
            goto LABEL_84;
          }
        }
      }
      goto LABEL_36;
    }
    v19 = sub_13D300((_QWORD *)a1[1], 3);
LABEL_37:
    v175 = v19;
    if ( !v19 )
      goto LABEL_38;
    v184 = 0;
    goto LABEL_84;
  }
  v82 = sub_13D300((_QWORD *)a1[1], 3);
LABEL_217:
  v175 = v82;
  if ( !v82 )
    goto LABEL_38;
LABEL_84:
  v34 = a1[6];
  v35 = a1[1];
  v36 = *(_DWORD *)(v34 + 8) - 1;
  if ( v36 < 0 )
    goto LABEL_107;
  v37 = v175;
  v38 = 4LL * (unsigned int)v36;
  while ( 2 )
  {
    v39 = *(int *)(*(_QWORD *)v34 + v38);
    v40 = *(_QWORD *)(v35 + 432) + 104 * v39;
    if ( (unsigned int)(*(_DWORD *)v40 - 3) > 1 )
    {
LABEL_88:
      --v36;
      v38 -= 4;
      if ( v36 == -1 )
        goto LABEL_94;
      v34 = a1[6];
      continue;
    }
    break;
  }
  if ( !v36 && (unsigned __int8)sub_36E1B0(v35) )
    goto LABEL_93;
  if ( !sub_64930(v223, v39) )
  {
    v35 = a1[1];
    --v37;
    goto LABEL_88;
  }
  if ( (*(_BYTE *)(v40 + 26) & 8) != 0 && v201 != (_DWORD)v39 )
  {
    if ( !under_debugger )
      sub_383060(52081);
    goto LABEL_442;
  }
LABEL_93:
  v35 = a1[1];
LABEL_94:
  if ( v175 != v37 )
  {
    v41 = (unsigned int)(*(_DWORD *)(v35 + 72) - 112);
    if ( (unsigned int)v41 > 0x20 || (v42 = 0x100010001LL, !_bittest64(&v42, v41)) )
    {
      if ( !v184 )
      {
        v43 = v37 == 0;
        goto LABEL_99;
      }
    }
    v50 = sub_13D300((_QWORD *)v35, 1);
    if ( v50 )
    {
      v51 = a1[6];
      v208 = 0;
      v210 = 0;
      v211 = 0;
      v212 = 0;
      v214 = 0;
      v216 = 16;
      v209 = 0;
      v213 = 0;
      v215 = 0;
      if ( *(_QWORD *)(v51 + 8) )
      {
        v52 = 0;
        do
        {
          if ( (unsigned int)(*(_DWORD *)sub_13D280((_QWORD *)a1[1], v52) - 3) > 1 )
          {
            v53 = v209;
            v54 = v208;
            if ( *((_QWORD *)&v209 + 1) < (unsigned __int64)(v209 + 1) )
            {
              v208 = qvector_reserve((__int64)&v208, v208, v209 + 1, 80);
              v54 = v208;
              v53 = v209;
            }
            v55 = 80 * v53 + v54;
            *(_DWORD *)v55 = 0;
            *(_QWORD *)(v55 + 8) = 0;
            *(_QWORD *)(v55 + 16) = 0;
            *(_QWORD *)(v55 + 40) = 0;
            *(_QWORD *)(v55 + 64) = 0;
            *(_DWORD *)(v55 + 72) = 0;
            *(_OWORD *)(v55 + 24) = 0;
            *(_OWORD *)(v55 + 48) = 0;
            *(_QWORD *)&v209 = v209 + 1;
            copy_tinfo_t();
          }
          ++v52;
        }
        while ( (unsigned __int64)v52 < *(_QWORD *)(a1[6] + 8) );
        v112 = v216 & 0xF;
      }
      else
      {
        v112 = 0;
      }
      v113 = *(_DWORD *)(a1[1] + 72);
      if ( (v113 & 0xFFFFFF0F) != 0 || v113 == 192 )
      {
        v114 = v112 | 0xC0;
      }
      else
      {
        v114 = v113 | v112;
        v113 = 0;
      }
      HIDWORD(v210) = v113;
      v216 = v114;
      v203 = (_QWORD *)&byte_1;
      copy_tinfo_t();
      clear_tinfo_t();
      if ( !(unsigned __int8)calc_arglocs() || !(_QWORD)v209 )
        goto LABEL_287;
      v115 = 0;
      v116 = 0;
      do
      {
        v117 = *(_DWORD *)(v208 + 80 * v116);
        if ( (unsigned int)(v117 - 3) <= 1 )
          break;
        ++v115;
        v50 -= v117 == 1;
        v116 = v115;
      }
      while ( v115 < (unsigned __int64)v209 );
      if ( (_QWORD)v209 == v116 && !v50 )
        sub_D6C60(a1[1], v37);
      else
LABEL_287:
        v197 = v37 == 0;
      if ( v214 )
      {
        *(_QWORD *)&v215 = 0;
        qfree(v214);
      }
      cleanup_argloc();
      clear_tinfo_t();
      v118 = v208;
      if ( v208 )
      {
        v119 = v209;
        if ( (_QWORD)v209 )
        {
          v120 = 0;
          do
          {
            v121 = (_QWORD *)(v118 + 80 * v120);
            clear_tinfo_t();
            v122 = v121[5];
            if ( v122 )
            {
              v121[6] = 0;
              qfree(v122);
            }
            v123 = v121[2];
            if ( v123 )
            {
              v121[3] = 0;
              qfree(v123);
            }
            ++v120;
            cleanup_argloc();
            v118 = v208;
          }
          while ( v119 != v120 );
        }
        *(_QWORD *)&v209 = 0;
        qfree(v118);
      }
      v35 = a1[1];
      if ( !v197 )
        goto LABEL_107;
LABEL_100:
      if ( (*(_BYTE *)(v200 + 48) & 8) == 0 && !v184 )
        goto LABEL_107;
      if ( (unsigned __int8)sub_36E1B0(v35)
        || ((v44 = *(_DWORD *)(v35 + 72) & 0xFFFFFFF0, v44 == 64) || v44 == 208) && *(_QWORD *)(v35 + 464) == v175 )
      {
        v35 = a1[1];
        goto LABEL_107;
      }
      sub_D6C60(a1[1], 0);
LABEL_106:
      *(_DWORD *)(a1[1] + 72) = 0;
      sub_37BF90(a1[1], (*(_BYTE *)(a1[27] + 606) & 0x10) != 0);
      v35 = a1[1];
      goto LABEL_107;
    }
    v35 = a1[1];
    v43 = v37 == 0;
LABEL_99:
    if ( v43 )
      goto LABEL_100;
  }
LABEL_107:
  v45 = sub_19F880(*(_QWORD *)(v35 + 936));
  if ( v201 != v45 )
  {
    v46 = v224;
    v47 = v224 + 8 * v225;
    if ( v47 != v224 )
    {
      while ( 1 )
      {
        v48 = *(__int64 **)(*(_QWORD *)v46 + 32LL);
        if ( v48[1] != 2 )
          break;
        v49 = *v48;
        if ( *(_DWORD *)(v49 + 80) != 65 )
        {
          if ( !under_debugger )
            sub_383060(52083);
          goto LABEL_442;
        }
        if ( *(_DWORD *)(v49 + 104) != v201 )
        {
          if ( !under_debugger )
            sub_383060(52084);
          goto LABEL_442;
        }
        v46 += 8;
        *(_DWORD *)(v49 + 104) = v45;
        if ( v47 == v46 )
          goto LABEL_38;
      }
      if ( !under_debugger )
        sub_383060(52082);
LABEL_442:
      BUG();
    }
  }
LABEL_38:
  sub_1990E0(v235);
  if ( v233 )
  {
    v234 = 0;
    qfree(v233);
  }
  if ( v231 )
  {
    v232 = 0;
    qfree(v231);
  }
  if ( v229 )
  {
    v230 = 0;
    qfree(v229);
  }
  if ( (_QWORD)v228 )
  {
    *((_QWORD *)&v228 + 1) = 0;
    qfree(v228);
  }
  v217 = off_4E62C8;
  if ( v224 )
  {
    *(_QWORD *)&v225 = 0;
    qfree(v224);
  }
  qfree(v223[0]);
  v217 = off_4DBCF8;
  if ( v221 )
  {
    *(_QWORD *)&v222 = 0;
    qfree(v221);
  }
  if ( v219 )
  {
    *(_QWORD *)&v220 = 0;
    qfree(v219);
  }
  return v247 - __readfsqword(0x28u);
}
