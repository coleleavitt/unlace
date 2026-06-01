__int64 __fastcall sub_336920(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  void *v5; // r13
  void *v6; // r13
  void *v7; // r13
  void *v8; // r13
  void *v9; // r13
  void *v10; // r13
  void *v11; // rdi
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  char v14; // al
  std::ios_base *v15; // rdi
  unsigned int v16; // eax
  void *v17; // r15
  char v18; // al
  void *v19; // r14
  int *v20; // r13
  __int64 v21; // r12
  int v22; // eax
  int v23; // eax
  void *v24; // r14
  int v25; // eax
  int v26; // eax
  void *v27; // r14
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  unsigned int i; // r12d
  void *v32; // r14
  void *v33; // r14
  void *v34; // rdi
  __int64 v35; // rax
  int v36; // edx
  __int64 v37; // rdx
  char v38; // si
  char v39; // di
  __int64 v40; // rdx
  char v41; // si
  char v42; // di
  __int64 v43; // rdx
  char v44; // si
  char v45; // di
  __int64 v46; // rdx
  char v47; // si
  char v48; // di
  __int64 v49; // rdx
  char v50; // si
  char v51; // di
  __int64 v52; // rdx
  char v53; // di
  void *v54; // r14
  void *v55; // r14
  void *v56; // r14
  void *v57; // r14
  void *v58; // r14
  void *v59; // rbp
  void *v60; // rbp
  void *v61; // rbp
  void *v62; // rbx
  __int64 v63; // rsi
  __int64 v64; // rdi
  bool v65; // zf
  _QWORD *v67; // r14
  __int64 v68; // rdi
  __int64 v69; // rax
  void *v70; // r15
  __int64 v71; // r14
  int v72; // eax
  void *v73; // r15
  int v74; // eax
  void *v75; // r15
  int v76; // eax
  unsigned int v77; // eax
  __int64 v78; // r15
  void *v79; // r14
  void *v80; // r14
  void *v81; // r14
  void *v82; // r14
  void *v83; // r14
  void *v84; // r14
  void *v85; // rdi
  void *v86; // r14
  void *v87; // r14
  void *v88; // rdi
  void *v89; // r14
  void *v90; // r14
  void *v91; // rdi
  void *v92; // r14
  void *v93; // r14
  int v94; // r8d
  int v95; // r9d
  __int64 v96; // rsi
  __int64 v97; // rax
  __int64 v98; // rdi
  void *v99; // r14
  void *v100; // r14
  void *v101; // r14
  void *v102; // r14
  void *v103; // r14
  void *v104; // r14
  void *v105; // r14
  void *v106; // r14
  void *v107; // r14
  void *v108; // r14
  void *v109; // r14
  __int64 v110; // rax
  void *v111; // r14
  void *v112; // r14
  void *v113; // r14
  int v114; // edx
  void *v115; // r14
  __int64 v116; // rdx
  char v117; // cl
  __int64 v118; // rax
  void *v119; // r14
  bool v120; // al
  bool v121; // al
  void *v122; // r14
  bool v123; // al
  void *v124; // r14
  bool v126; // al
  char v127; // al
  char v128; // al
  char v129; // al
  void *v130; // rdi
  void *v131; // r14
  void *v132; // r14
  void *v133; // r14
  void *v134; // r14
  void *v135; // [rsp+0h] [rbp-348h]
  void *v136; // [rsp+0h] [rbp-348h]
  int v137; // [rsp+0h] [rbp-348h]
  int *v138; // [rsp+8h] [rbp-340h]
  void *v139; // [rsp+10h] [rbp-338h]
  int *v140; // [rsp+18h] [rbp-330h]
  int *v141; // [rsp+20h] [rbp-328h]
  char *v142; // [rsp+28h] [rbp-320h]
  int *v143; // [rsp+30h] [rbp-318h]
  int *v144; // [rsp+38h] [rbp-310h]
  int *v145; // [rsp+40h] [rbp-308h]
  int *v146; // [rsp+48h] [rbp-300h]
  int v147[2]; // [rsp+50h] [rbp-2F8h]
  __int64 *v148; // [rsp+58h] [rbp-2F0h]
  __int64 v149; // [rsp+60h] [rbp-2E8h]
  int v150[2]; // [rsp+68h] [rbp-2E0h]
  int v151[2]; // [rsp+70h] [rbp-2D8h]
  int v152[2]; // [rsp+78h] [rbp-2D0h]
  int v153; // [rsp+80h] [rbp-2C8h]
  void *v154; // [rsp+80h] [rbp-2C8h]
  void *v155; // [rsp+80h] [rbp-2C8h]
  void *v156; // [rsp+80h] [rbp-2C8h]
  unsigned int v157; // [rsp+88h] [rbp-2C0h]
  char v158; // [rsp+8Eh] [rbp-2BAh]
  char v159; // [rsp+8Fh] [rbp-2B9h]
  int *v160; // [rsp+90h] [rbp-2B8h]
  int *v161; // [rsp+98h] [rbp-2B0h]
  int v162[2]; // [rsp+A0h] [rbp-2A8h]
  int v163[2]; // [rsp+A8h] [rbp-2A0h]
  int v164; // [rsp+B0h] [rbp-298h] BYREF
  int v165; // [rsp+B8h] [rbp-290h]
  int v166[2]; // [rsp+C0h] [rbp-288h] BYREF
  char v167[8]; // [rsp+C8h] [rbp-280h]
  int v168[2]; // [rsp+D0h] [rbp-278h] BYREF
  int v169[2]; // [rsp+D8h] [rbp-270h]
  __int64 v170; // [rsp+E0h] [rbp-268h] BYREF
  char v171[8]; // [rsp+E8h] [rbp-260h]
  int v172[2]; // [rsp+F0h] [rbp-258h] BYREF
  __int64 v173; // [rsp+F8h] [rbp-250h]
  __int64 v174; // [rsp+100h] [rbp-248h] BYREF
  __int64 v175; // [rsp+108h] [rbp-240h]
  int v176[2]; // [rsp+110h] [rbp-238h] BYREF
  __int64 v177; // [rsp+118h] [rbp-230h]
  int v178[2]; // [rsp+120h] [rbp-228h] BYREF
  __int64 v179; // [rsp+128h] [rbp-220h]
  int v180[2]; // [rsp+130h] [rbp-218h] BYREF
  int v181[2]; // [rsp+138h] [rbp-210h]
  int v182[2]; // [rsp+140h] [rbp-208h] BYREF
  int v183[2]; // [rsp+148h] [rbp-200h]
  int v184[2]; // [rsp+150h] [rbp-1F8h] BYREF
  int v185[2]; // [rsp+158h] [rbp-1F0h]
  int v186[2]; // [rsp+160h] [rbp-1E8h] BYREF
  int v187[2]; // [rsp+168h] [rbp-1E0h]
  int v188[2]; // [rsp+170h] [rbp-1D8h] BYREF
  int v189[2]; // [rsp+178h] [rbp-1D0h]
  int v190[2]; // [rsp+180h] [rbp-1C8h] BYREF
  int v191[2]; // [rsp+188h] [rbp-1C0h]
  int v192[2]; // [rsp+190h] [rbp-1B8h] BYREF
  __int64 v193; // [rsp+198h] [rbp-1B0h]
  __int64 v194; // [rsp+1A0h] [rbp-1A8h] BYREF
  __int64 v195; // [rsp+1A8h] [rbp-1A0h]
  _QWORD v196[2]; // [rsp+1B0h] [rbp-198h] BYREF
  _QWORD v197[2]; // [rsp+1C0h] [rbp-188h] BYREF
  _QWORD v198[2]; // [rsp+1D0h] [rbp-178h] BYREF
  _QWORD v199[2]; // [rsp+1E0h] [rbp-168h] BYREF
  int v200[2]; // [rsp+1F0h] [rbp-158h] BYREF
  __int64 v201; // [rsp+1F8h] [rbp-150h]
  __int64 v202; // [rsp+200h] [rbp-148h] BYREF
  __int64 v203; // [rsp+208h] [rbp-140h]
  _QWORD v204[2]; // [rsp+210h] [rbp-138h] BYREF
  _QWORD v205[2]; // [rsp+220h] [rbp-128h] BYREF
  _QWORD v206[2]; // [rsp+230h] [rbp-118h] BYREF
  _QWORD v207[2]; // [rsp+240h] [rbp-108h] BYREF
  char v208[8]; // [rsp+250h] [rbp-F8h] BYREF
  __int64 v209; // [rsp+258h] [rbp-F0h]
  int v210[2]; // [rsp+260h] [rbp-E8h] BYREF
  __int64 v211; // [rsp+268h] [rbp-E0h]
  __int64 v212; // [rsp+270h] [rbp-D8h] BYREF
  __int64 v213; // [rsp+278h] [rbp-D0h]
  __int64 v214; // [rsp+280h] [rbp-C8h] BYREF
  __int64 v215; // [rsp+288h] [rbp-C0h]
  _QWORD v216[2]; // [rsp+290h] [rbp-B8h] BYREF
  _QWORD v217[2]; // [rsp+2A0h] [rbp-A8h] BYREF
  int v218[2]; // [rsp+2B0h] [rbp-98h] BYREF
  __int64 v219; // [rsp+2B8h] [rbp-90h]
  int v220[2]; // [rsp+2C0h] [rbp-88h] BYREF
  __int64 v221; // [rsp+2C8h] [rbp-80h]
  int v222[2]; // [rsp+2D0h] [rbp-78h] BYREF
  __int64 v223; // [rsp+2D8h] [rbp-70h]
  int v224[2]; // [rsp+2E0h] [rbp-68h] BYREF
  __int64 v225; // [rsp+2E8h] [rbp-60h]
  __int64 v226; // [rsp+2F0h] [rbp-58h] BYREF
  __int64 v227; // [rsp+2F8h] [rbp-50h]
  __int64 v228; // [rsp+300h] [rbp-48h] BYREF
  __int64 v229; // [rsp+308h] [rbp-40h]

  LODWORD(v135) = a2;
  sub_16669D0(&v164, *a1);
  sub_15D1F10(*(_QWORD *)(a1[6] + 8LL * a2));
  v3 = *a1;
  v4 = 0;
  *(_QWORD *)v166 = 0;
  *(_QWORD *)v163 = v3;
  *(_QWORD *)v167 = v3;
  if ( a2 )
  {
    do
      sub_32FF50(a1, v4++);
    while ( a2 != v4 );
  }
  *(_QWORD *)v168 = 1;
  *(_QWORD *)v169 = 0;
  v148 = &v170;
  v170 = 1;
  *(_QWORD *)v171 = 0;
  sub_182CBA0(qword_1C7F2C0, &v170);
  BYTE4(v170) &= ~1u;
  LODWORD(v170) = 1;
  *(_QWORD *)v218 = 0;
  v219 = 0;
  *(_QWORD *)v220 = 1;
  v221 = 0;
  v141 = v220;
  sub_182CBA0(qword_1C7F2C0, v220);
  LOBYTE(v220[1]) &= ~1u;
  *(_QWORD *)v208 = 0xFFFFFFFFLL;
  v220[0] = 1;
  *(_QWORD *)v222 = 0;
  v223 = 0;
  *(_QWORD *)v224 = 1;
  v225 = 0;
  v209 = 0;
  *(_QWORD *)v210 = 1;
  v211 = 0;
  v145 = v210;
  sub_182CBA0(qword_1C7F2C0, v210);
  LOBYTE(v210[1]) &= ~1u;
  v5 = qword_1C7F2C0;
  v210[0] = 1;
  *(_QWORD *)v180 = 0;
  *(_QWORD *)v181 = 0;
  *(_QWORD *)v182 = 1;
  *(_QWORD *)v183 = 0;
  if ( (v208[4] & 1) != 0 )
  {
    v142 = v208;
    sub_182C690(qword_1C7F2C0, v180, v208);
  }
  else
  {
    v180[0] = *(_DWORD *)v208;
    v142 = v208;
  }
  if ( (v210[1] & 1) != 0 )
  {
    sub_182C690(v5, v182, v210);
  }
  else
  {
    LOBYTE(v182[1]) &= ~1u;
    v182[0] = v210[0];
  }
  *(_QWORD *)v184 = 0;
  v6 = qword_1C7F2C0;
  *(_QWORD *)v185 = 0;
  *(_QWORD *)v186 = 1;
  *(_QWORD *)v187 = 0;
  if ( (v218[1] & 1) != 0 )
  {
    v140 = v218;
    sub_182C690(qword_1C7F2C0, v184, v218);
  }
  else
  {
    v184[0] = v218[0];
    v140 = v218;
  }
  if ( (v220[1] & 1) != 0 )
  {
    sub_182C690(v6, v186, v220);
  }
  else
  {
    LOBYTE(v186[1]) &= ~1u;
    v186[0] = v220[0];
  }
  *(_QWORD *)v188 = 0;
  v7 = qword_1C7F2C0;
  *(_QWORD *)v189 = 0;
  *(_QWORD *)v190 = 1;
  *(_QWORD *)v191 = 0;
  if ( (v222[1] & 1) != 0 )
  {
    v143 = v222;
    sub_182C690(qword_1C7F2C0, v188, v222);
  }
  else
  {
    v188[0] = v222[0];
    v143 = v222;
  }
  if ( (v224[1] & 1) != 0 )
  {
    v146 = v224;
    sub_182C690(v7, v190, v224);
  }
  else
  {
    LOBYTE(v190[1]) &= ~1u;
    v190[0] = v224[0];
    v146 = v224;
  }
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v208);
  sub_182CBA0(v8, v210);
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v222);
  sub_182CBA0(v9, v224);
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v218);
  v11 = v10;
  v12 = 0;
  sub_182CBA0(v11, v220);
  v149 = 0;
  v13 = 1;
  LODWORD(v139) = 0;
  *(_QWORD *)v162 = 96LL * a2;
  v161 = v180;
  v138 = v168;
  v157 = 0;
  v160 = v166;
  while ( 2 )
  {
    v14 = sub_18290A0(*a1);
    v15 = (std::ios_base *)a1[2];
    if ( !v14 )
      goto LABEL_26;
    while ( 1 )
    {
      v16 = sub_E60CB0(v15, 0, 0);
      v13 = v16;
      if ( v16 == 1 )
        break;
      if ( v16 != -1 )
        goto LABEL_229;
      if ( (qword_1C7F290 & 0x100000000LL) != 0
        || (_DWORD)qword_1C7F290 != 1
        || (v170 & 0x100000000LL) != 0
        || (_DWORD)v170 != 1 )
      {
        if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, &qword_1C7F280, v138) )
          goto LABEL_229;
      }
      else
      {
        if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) == 0 && (v168[1] & 1) == 0 )
        {
          if ( qword_1C7F280 >= v168[0] )
            goto LABEL_229;
          v168[0] = qword_1C7F280;
          LOBYTE(v168[1]) &= ~1u;
          goto LABEL_24;
        }
        if ( (int)sub_182C7B0(qword_1C7F2C0, &qword_1C7F280, v138) >= 0 )
        {
LABEL_229:
          v15 = (std::ios_base *)a1[2];
          goto LABEL_26;
        }
      }
      v17 = qword_1C7F2C0;
      if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v138, &qword_1C7F280);
        if ( (qword_1C7F290 & 0x100000000LL) != 0 )
        {
LABEL_65:
          sub_182C690(v17, v148, &qword_1C7F290);
          goto LABEL_25;
        }
      }
      else
      {
        LOBYTE(v168[1]) &= ~1u;
        v168[0] = qword_1C7F280;
        if ( (qword_1C7F290 & 0x100000000LL) != 0 )
          goto LABEL_65;
      }
LABEL_24:
      BYTE4(v170) &= ~1u;
      LODWORD(v170) = qword_1C7F290;
LABEL_25:
      --v12;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)a1[2] + 200LL))(a1[2], 1);
      LODWORD(v139) = 0;
      v157 = 0;
      v18 = sub_18290A0(*a1);
      v15 = (std::ios_base *)a1[2];
      if ( !v18 )
        goto LABEL_26;
    }
    sub_33EE60(
      a1[2],
      v135,
      (int)v138,
      (int)v139,
      (int)v140,
      (int)v141,
      v142,
      (int)v143,
      (int)v144,
      (int)v145,
      (int)v146,
      v147[0],
      (__int64)v148,
      v149,
      v150[0],
      v151[0],
      v152[0],
      v153,
      v157,
      (int)v160,
      (int)v161,
      v162[0],
      v163[0],
      v164,
      v165,
      v166[0],
      *(int *)v167,
      v168[0],
      v169[0],
      v170,
      *(int *)v171,
      v172[0],
      v173,
      v174,
      v175,
      v176[0],
      v177,
      v178[0],
      v179,
      v180[0],
      v181[0],
      v182[0],
      v183[0],
      v184[0],
      v185[0],
      v186[0],
      v187[0],
      v188[0],
      v189[0],
      v190[0],
      v191[0],
      v192[0],
      v193,
      v194,
      v195);
    v67 = (_QWORD *)a1[2];
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v67 + 32LL))(v67, a1 + 11);
    if ( a1[11] )
    {
      v68 = v67[7];
      if ( v68 )
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v68 + 32LL))(v68, a1 + 11);
    }
    v69 = sub_33DD50(a1[2], (unsigned int)v135);
    *(_QWORD *)v192 = 0;
    v70 = qword_1C7F2C0;
    v71 = v69;
    v193 = 0;
    v194 = 1;
    v195 = 0;
    if ( (*(_BYTE *)(v69 + 4) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v192, v69);
      if ( (*(_BYTE *)(v71 + 20) & 1) != 0 )
        goto LABEL_166;
LABEL_71:
      v72 = *(_DWORD *)(v71 + 16);
      BYTE4(v194) &= ~1u;
      LODWORD(v194) = v72;
    }
    else
    {
      v192[0] = *(_DWORD *)v69;
      if ( (*(_BYTE *)(v69 + 20) & 1) == 0 )
        goto LABEL_71;
LABEL_166:
      sub_182C690(v70, &v194, v71 + 16);
    }
    v196[0] = 0;
    v73 = qword_1C7F2C0;
    v196[1] = 0;
    v197[0] = 1;
    v197[1] = 0;
    if ( (*(_BYTE *)(v71 + 36) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v196, v71 + 32);
    else
      LODWORD(v196[0]) = *(_DWORD *)(v71 + 32);
    if ( (*(_BYTE *)(v71 + 52) & 1) != 0 )
    {
      sub_182C690(v73, v197, v71 + 48);
    }
    else
    {
      v74 = *(_DWORD *)(v71 + 48);
      BYTE4(v197[0]) &= ~1u;
      LODWORD(v197[0]) = v74;
    }
    v198[0] = 0;
    v75 = qword_1C7F2C0;
    v198[1] = 0;
    v199[0] = 1;
    v199[1] = 0;
    if ( (*(_BYTE *)(v71 + 68) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v198, v71 + 64);
    else
      LODWORD(v198[0]) = *(_DWORD *)(v71 + 64);
    if ( (*(_BYTE *)(v71 + 84) & 1) != 0 )
    {
      sub_182C690(v75, v199, v71 + 80);
    }
    else
    {
      v76 = *(_DWORD *)(v71 + 80);
      BYTE4(v199[0]) &= ~1u;
      LODWORD(v199[0]) = v76;
    }
    v144 = v192;
    sub_335B10((__int64)a1, (unsigned int)v135, (__int64)v192, v159);
    if ( !v158 || *(_DWORD *)(a1[3] + *(_QWORD *)v162) )
    {
      *(_QWORD *)v218 = 1;
      v219 = 0;
      *(_QWORD *)v220 = 1;
      v221 = 0;
      sub_182CBA0(qword_1C7F2C0, v141);
      v114 = v218[0];
      v115 = qword_1C7F2C0;
      v218[0] = v168[0];
      v168[0] = v114;
      v116 = v219;
      v219 = *(_QWORD *)v169;
      *(_QWORD *)v169 = v116;
      v117 = v218[1] & 1;
      LOBYTE(v116) = v168[1] & 0xFC | v218[1] & 2;
      LOBYTE(v218[1]) = v168[1] & 1 | v218[1] & 0xFC | v168[1] & 2;
      LOBYTE(v168[1]) = v117 | v116;
      v220[0] = v170;
      v118 = *(_QWORD *)v171;
      *(_QWORD *)v171 = v221;
      v221 = v118;
      LODWORD(v170) = 1;
      LOBYTE(v118) = BYTE4(v170) & 1 | BYTE4(v170) & 2 | v220[1] & 0xFC;
      BYTE4(v170) = BYTE4(v170) & 0xFC | v220[1] & 2;
      LOBYTE(v220[1]) = v118;
      sub_182CBA0(qword_1C7F2C0, v140);
      sub_182CBA0(v115, v141);
    }
    else if ( v157 < (unsigned int)v139 )
    {
      *(_QWORD *)v218 = 2;
      v219 = 0;
      *(_QWORD *)v220 = 1;
      v221 = 0;
      sub_182CBA0(qword_1C7F2C0, v141);
      v220[0] = 1;
      v130 = qword_1C7F2C0;
      LOBYTE(v220[1]) &= ~1u;
      if ( (v170 & 0x100000000LL) != 0 || (_DWORD)v170 != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, v138, v140);
      }
      else
      {
        HIDWORD(v139) = HIDWORD(qword_1C7F2C0);
        sub_1831650(qword_1C7F2C0, v138, v140);
        sub_182CBA0(v130, v148);
        BYTE4(v170) &= ~1u;
        LODWORD(v170) = 1;
      }
      v131 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v140);
      sub_182CBA0(v131, v141);
      ++v157;
      LODWORD(v139) = 0;
    }
    else
    {
      LODWORD(v139) = (_DWORD)v139 + 1;
    }
    if ( (qword_1C7F290 & 0x100000000LL) != 0
      || (_DWORD)qword_1C7F290 != 1
      || (v170 & 0x100000000LL) != 0
      || (_DWORD)v170 != 1 )
    {
      LOBYTE(v77) = sub_1848D40(qword_1C7F2C0, &qword_1C7F280, v138);
    }
    else if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 || (v168[1] & 1) != 0 )
    {
      v77 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &qword_1C7F280, v138) >> 31;
    }
    else
    {
      LOBYTE(v77) = qword_1C7F280 < v168[0];
    }
    if ( (_BYTE)v77 )
    {
LABEL_88:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1[2] + 192LL))(a1[2]);
      *(_QWORD *)v172 = 0;
      v78 = a1[2];
      ++v12;
      v173 = 0;
      v79 = qword_1C7F2C0;
      v174 = 1;
      v175 = 0;
      if ( (v168[1] & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v172, v138);
        if ( (v170 & 0x100000000LL) != 0 )
          goto LABEL_202;
LABEL_90:
        BYTE4(v174) &= ~1u;
        LODWORD(v174) = v170;
      }
      else
      {
        v172[0] = v168[0];
        if ( (v170 & 0x100000000LL) == 0 )
          goto LABEL_90;
LABEL_202:
        sub_182C690(v79, &v174, v148);
      }
      v80 = qword_1C7F2C0;
      *(_QWORD *)v176 = 0;
      v177 = 0;
      *(_QWORD *)v178 = 1;
      v179 = 0;
      sub_182CEF0(qword_1C7F2C0, v176);
      sub_182CBA0(v80, v178);
      LOBYTE(v178[1]) &= ~1u;
      v81 = qword_1C7F2C0;
      v178[0] = 1;
      *(_QWORD *)v200 = 0;
      v201 = 0;
      v202 = 1;
      v203 = 0;
      v204[0] = 0;
      v204[1] = 0;
      v205[0] = 1;
      v205[1] = 0;
      if ( (v172[1] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v204, v172);
      else
        LODWORD(v204[0]) = v172[0];
      if ( (v174 & 0x100000000LL) != 0 )
      {
        sub_182C690(v81, v205, &v174);
      }
      else
      {
        BYTE4(v205[0]) &= ~1u;
        LODWORD(v205[0]) = v174;
      }
      v206[0] = 0;
      v82 = qword_1C7F2C0;
      v206[1] = 0;
      v207[0] = 1;
      v207[1] = 0;
      if ( (v176[1] & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v206, v176);
        if ( (v178[1] & 1) != 0 )
          goto LABEL_204;
LABEL_97:
        BYTE4(v207[0]) &= ~1u;
        LODWORD(v207[0]) = v178[0];
      }
      else
      {
        LODWORD(v206[0]) = v176[0];
        if ( (v178[1] & 1) == 0 )
          goto LABEL_97;
LABEL_204:
        sub_182C690(v82, v207, v178);
      }
      *(_QWORD *)v218 = 0;
      v83 = qword_1C7F2C0;
      v219 = 0;
      *(_QWORD *)v220 = 1;
      v221 = 0;
      if ( (v192[1] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v140, v192);
      else
        v218[0] = v192[0];
      if ( (v194 & 0x100000000LL) != 0 )
      {
        sub_182C690(v83, v141, &v194);
      }
      else
      {
        LOBYTE(v220[1]) &= ~1u;
        v220[0] = v194;
      }
      *(_QWORD *)v222 = 0;
      v84 = qword_1C7F2C0;
      v223 = 0;
      *(_QWORD *)v224 = 1;
      v225 = 0;
      if ( (v196[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, v143, v196);
      else
        v222[0] = v196[0];
      if ( (v197[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v84, v146, v197);
      }
      else
      {
        LOBYTE(v224[1]) &= ~1u;
        v224[0] = v197[0];
      }
      v226 = 0;
      v85 = qword_1C7F2C0;
      v227 = 0;
      v228 = 1;
      v229 = 0;
      if ( (v198[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v226, v198);
      else
        LODWORD(v226) = v198[0];
      if ( (v199[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v85, &v228, v199);
      }
      else
      {
        BYTE4(v228) &= ~1u;
        LODWORD(v228) = v199[0];
      }
      v86 = qword_1C7F2C0;
      if ( v200[0] )
      {
        if ( v218[0] )
        {
          if ( (v220[1] & 1) != 0 || v220[0] != 1 || (v202 & 0x100000000LL) != 0 || (_DWORD)v202 != 1 )
          {
            sub_1851D20(qword_1C7F2C0, v140, v200, v140);
          }
          else
          {
            sub_1831A80(qword_1C7F2C0, v140, v200, v140);
            sub_182CBA0(v86, v141);
            LOBYTE(v220[1]) &= ~1u;
            v220[0] = 1;
          }
        }
        else
        {
          if ( (v200[1] & 1) != 0 )
          {
            sub_182C690(qword_1C7F2C0, v140, v200);
          }
          else
          {
            v218[0] = v200[0];
            LOBYTE(v218[1]) &= ~1u;
          }
          if ( (v202 & 0x100000000LL) != 0 )
          {
            sub_182C690(v86, v141, &v202);
          }
          else
          {
            LOBYTE(v220[1]) &= ~1u;
            v220[0] = v202;
          }
        }
LABEL_114:
        v87 = qword_1C7F2C0;
        if ( LODWORD(v204[0]) )
        {
          if ( v222[0] )
          {
            if ( (v224[1] & 1) != 0 || v224[0] != 1 || (v205[0] & 0x100000000LL) != 0 || LODWORD(v205[0]) != 1 )
            {
              sub_1851D20(qword_1C7F2C0, v143, v204, v143);
            }
            else
            {
              sub_1831A80(qword_1C7F2C0, v143, v204, v143);
              sub_182CBA0(v87, v146);
              LOBYTE(v224[1]) &= ~1u;
              v224[0] = 1;
            }
          }
          else
          {
            if ( (v204[0] & 0x100000000LL) != 0 )
            {
              sub_182C690(qword_1C7F2C0, v143, v204);
            }
            else
            {
              LOBYTE(v222[1]) &= ~1u;
              v222[0] = v204[0];
            }
            if ( (v205[0] & 0x100000000LL) != 0 )
            {
              sub_182C690(v87, v146, v205);
            }
            else
            {
              LOBYTE(v224[1]) &= ~1u;
              v224[0] = v205[0];
            }
          }
LABEL_118:
          v88 = qword_1C7F2C0;
          if ( LODWORD(v206[0]) )
          {
            if ( (_DWORD)v226 )
            {
              if ( (v228 & 0x100000000LL) != 0
                || (_DWORD)v228 != 1
                || (v207[0] & 0x100000000LL) != 0
                || LODWORD(v207[0]) != 1 )
              {
                sub_1851D20(qword_1C7F2C0, &v226, v206, &v226);
              }
              else
              {
                sub_1831A80(qword_1C7F2C0, &v226, v206, &v226);
                sub_182CBA0(v88, &v228);
                BYTE4(v228) &= ~1u;
                LODWORD(v228) = 1;
              }
            }
            else
            {
              if ( (v206[0] & 0x100000000LL) != 0 )
              {
                v156 = qword_1C7F2C0;
                sub_182C690(qword_1C7F2C0, &v226, v206);
                v88 = v156;
              }
              else
              {
                BYTE4(v226) &= ~1u;
                LODWORD(v226) = v206[0];
              }
              if ( (v207[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(v88, &v228, v207);
              }
              else
              {
                BYTE4(v228) &= ~1u;
                LODWORD(v228) = v207[0];
              }
            }
LABEL_122:
            *(_QWORD *)v208 = 0;
            v89 = qword_1C7F2C0;
            v209 = 0;
            *(_QWORD *)v210 = 1;
            v211 = 0;
            if ( (v218[1] & 1) != 0 )
              sub_182C690(qword_1C7F2C0, v142, v140);
            else
              *(_DWORD *)v208 = v218[0];
            if ( (v220[1] & 1) != 0 )
            {
              sub_182C690(v89, v145, v141);
            }
            else
            {
              LOBYTE(v210[1]) &= ~1u;
              v210[0] = v220[0];
            }
            v212 = 0;
            v90 = qword_1C7F2C0;
            v213 = 0;
            v214 = 1;
            v215 = 0;
            if ( (v222[1] & 1) != 0 )
              sub_182C690(qword_1C7F2C0, &v212, v143);
            else
              LODWORD(v212) = v222[0];
            if ( (v224[1] & 1) != 0 )
            {
              sub_182C690(v90, &v214, v146);
            }
            else
            {
              BYTE4(v214) &= ~1u;
              LODWORD(v214) = v224[0];
            }
            v216[0] = 0;
            v91 = qword_1C7F2C0;
            v216[1] = 0;
            v217[0] = 1;
            v217[1] = 0;
            if ( (v226 & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, v216, &v226);
            else
              LODWORD(v216[0]) = v226;
            if ( (v228 & 0x100000000LL) != 0 )
            {
              sub_182C690(v91, v217, &v228);
            }
            else
            {
              BYTE4(v217[0]) &= ~1u;
              LODWORD(v217[0]) = v228;
            }
            v154 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v226);
            sub_182CBA0(v154, &v228);
            v92 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v143);
            sub_182CBA0(v92, v146);
            v93 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v140);
            sub_182CBA0(v93, v141);
            sub_33DDB0(
              (int)v140,
              v78,
              (int)v135,
              (int)v142,
              v94,
              v95,
              v135,
              (int)v138,
              v139,
              (int)v140,
              (int)v141,
              (char)v142,
              (int)v143,
              (int)v192,
              (int)v145,
              (int)v146,
              (int)v200,
              (int)v148,
              v149,
              (int)v176,
              (int)v178,
              (int)v172,
              (int)v154,
              v157,
              (int)v160,
              (int)v161,
              v162[0],
              v163[0],
              v164,
              v165,
              v166[0],
              v167[0],
              v168[0],
              v169[0],
              v170,
              v171[0]);
            v96 = *(_QWORD *)v166;
            v97 = *(_QWORD *)v218;
            *(_QWORD *)v218 = *(_QWORD *)v166;
            *(_QWORD *)v166 = v97;
            if ( *(_QWORD *)v218 )
            {
              v98 = v219;
              v65 = (*(_DWORD *)(v96 + 8))-- == 1;
              if ( v65 )
                sub_15D7BC0(v98, v96);
            }
            v99 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v216);
            sub_182CBA0(v99, v217);
            v100 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v212);
            sub_182CBA0(v100, &v214);
            v101 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v142);
            sub_182CBA0(v101, v145);
            v102 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v206);
            sub_182CBA0(v102, v207);
            v103 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v204);
            sub_182CBA0(v103, v205);
            v104 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, *(_QWORD *)v147);
            sub_182CBA0(v104, &v202);
            v105 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, *(_QWORD *)v150);
            sub_182CBA0(v105, *(_QWORD *)v151);
            v106 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, *(_QWORD *)v152);
            sub_182CBA0(v106, &v174);
            goto LABEL_138;
          }
          if ( (v226 & 0x100000000LL) != 0 )
          {
            v155 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, &v226, &v226);
            v127 = BYTE4(v228);
            v88 = v155;
            if ( (v228 & 0x100000000LL) == 0 )
              goto LABEL_215;
          }
          else
          {
            BYTE4(v226) &= ~1u;
            v127 = BYTE4(v228);
            if ( (v228 & 0x100000000LL) == 0 )
            {
LABEL_215:
              BYTE4(v228) = v127 & 0xFE;
              goto LABEL_122;
            }
          }
          sub_182C690(v88, &v228, &v228);
          goto LABEL_122;
        }
        if ( (v222[1] & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, v143, v143);
          v128 = v224[1];
          if ( (v224[1] & 1) == 0 )
            goto LABEL_218;
        }
        else
        {
          LOBYTE(v222[1]) &= ~1u;
          v128 = v224[1];
          if ( (v224[1] & 1) == 0 )
          {
LABEL_218:
            LOBYTE(v224[1]) = v128 & 0xFE;
            goto LABEL_118;
          }
        }
        sub_182C690(v87, v146, v146);
        goto LABEL_118;
      }
      if ( (v218[1] & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v140, v140);
        v129 = v220[1];
        if ( (v220[1] & 1) == 0 )
          goto LABEL_221;
      }
      else
      {
        LOBYTE(v218[1]) &= ~1u;
        v129 = v220[1];
        if ( (v220[1] & 1) == 0 )
        {
LABEL_221:
          LOBYTE(v220[1]) = v129 & 0xFE;
          goto LABEL_114;
        }
      }
      sub_182C690(v86, v141, v141);
      goto LABEL_114;
    }
    v119 = qword_1C7F2C0;
    if ( (v192[1] & 1) != 0 || (v180[1] & 1) != 0 )
      v120 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v192, v161) == 0;
    else
      v120 = v192[0] == v180[0];
    if ( v120 )
    {
      v121 = (v194 & 0x100000000LL) != 0 || (v182[1] & 1) != 0
           ? (unsigned int)sub_182C7B0(v119, &v194, v182) == 0
           : (_DWORD)v194 == v182[0];
      v122 = qword_1C7F2C0;
      if ( v121 )
      {
        if ( (v196[0] & 0x100000000LL) != 0 || (v184[1] & 1) != 0 )
        {
          if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v196, v184) )
            goto LABEL_138;
        }
        else if ( LODWORD(v196[0]) != v184[0] )
        {
          goto LABEL_138;
        }
        if ( (v197[0] & 0x100000000LL) != 0 || (v186[1] & 1) != 0 )
          v123 = (unsigned int)sub_182C7B0(v122, v197, v186) == 0;
        else
          v123 = LODWORD(v197[0]) == v186[0];
        v124 = qword_1C7F2C0;
        if ( v123
          && ((v198[0] & 0x100000000LL) != 0 || (v188[1] & 1) != 0
            ? (unsigned int)sub_182C7B0(qword_1C7F2C0, v198, v188) == 0
            : LODWORD(v198[0]) == v188[0]) )
        {
          v126 = (v199[0] & 0x100000000LL) != 0 || (v190[1] & 1) != 0
               ? (unsigned int)sub_182C7B0(v124, v199, v190) == 0
               : LODWORD(v199[0]) == v190[0];
          if ( v126 && v158 )
            goto LABEL_88;
        }
      }
    }
LABEL_138:
    v107 = qword_1C7F2C0;
    if ( (v192[1] & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v161, v144);
    }
    else
    {
      LOBYTE(v180[1]) &= ~1u;
      v180[0] = v192[0];
    }
    if ( (v194 & 0x100000000LL) != 0 )
    {
      sub_182C690(v107, v182, &v194);
    }
    else
    {
      LOBYTE(v182[1]) &= ~1u;
      v182[0] = v194;
    }
    v108 = qword_1C7F2C0;
    if ( (v196[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v184, v196);
    }
    else
    {
      LOBYTE(v184[1]) &= ~1u;
      v184[0] = v196[0];
    }
    if ( (v197[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v108, v186, v197);
      v109 = qword_1C7F2C0;
      if ( (v198[0] & 0x100000000LL) != 0 )
        goto LABEL_168;
LABEL_146:
      LOBYTE(v188[1]) &= ~1u;
      v188[0] = v198[0];
      if ( (v199[0] & 0x100000000LL) == 0 )
        goto LABEL_147;
LABEL_169:
      sub_182C690(v109, v190, v199);
    }
    else
    {
      LOBYTE(v186[1]) &= ~1u;
      v109 = qword_1C7F2C0;
      v186[0] = v197[0];
      if ( (v198[0] & 0x100000000LL) == 0 )
        goto LABEL_146;
LABEL_168:
      sub_182C690(v109, v188, v198);
      if ( (v199[0] & 0x100000000LL) != 0 )
        goto LABEL_169;
LABEL_147:
      LOBYTE(v190[1]) &= ~1u;
      v190[0] = v199[0];
    }
    if ( *(_QWORD *)v166 != v149 )
    {
      sub_E5EBF0(a1[2], *(_QWORD *)v166);
      v110 = *(_QWORD *)v166;
      if ( *(_QWORD *)v166 != v149 )
      {
        if ( v149 )
        {
          v147[0] = *(_DWORD *)(v149 + 8);
          *(_DWORD *)(v149 + 8) = v147[0] - 1;
          if ( v147[0] == 1 )
          {
            sub_15D7BC0(*(_QWORD *)v163, v149);
            v110 = *(_QWORD *)v166;
          }
        }
        if ( v110 )
          ++*(_DWORD *)(v110 + 8);
        v149 = v110;
      }
      v111 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v198);
      sub_182CBA0(v111, v199);
      v112 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v196);
      sub_182CBA0(v112, v197);
      v113 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v144);
      sub_182CBA0(v113, &v194);
      continue;
    }
    break;
  }
  v132 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v198);
  sub_182CBA0(v132, v199);
  v133 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v196);
  sub_182CBA0(v133, v197);
  v134 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v144);
  sub_182CBA0(v134, &v194);
  v15 = (std::ios_base *)a1[2];
LABEL_26:
  (*(void (__fastcall **)(std::ios_base *, _QWORD))(*(_QWORD *)v15 + 200LL))(v15, v12);
  if ( v13 != -1 )
  {
    if ( (unsigned __int8)sub_18290A0(*a1) == 1 && v13 )
      goto LABEL_29;
    goto LABEL_251;
  }
  if ( !a1[11] )
    goto LABEL_57;
  if ( !(unsigned __int8)sub_18290A0(*a1) )
  {
LABEL_251:
    v13 = 0;
    goto LABEL_57;
  }
LABEL_29:
  v19 = qword_1C7F2C0;
  v20 = (int *)(*(_QWORD *)v162 + a1[3]);
  v21 = a1[4] + *(_QWORD *)v162;
  if ( (v20[1] & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, a1[4] + *(_QWORD *)v162, *(_QWORD *)v162 + a1[3]);
  }
  else
  {
    v22 = *v20;
    *(_BYTE *)(v21 + 4) &= ~1u;
    *(_DWORD *)v21 = v22;
  }
  if ( (v20[5] & 1) != 0 )
  {
    sub_182C690(v19, v21 + 16, v20 + 4);
  }
  else
  {
    v23 = v20[4];
    *(_BYTE *)(v21 + 20) &= ~1u;
    *(_DWORD *)(v21 + 16) = v23;
  }
  v24 = qword_1C7F2C0;
  if ( (v20[9] & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v21 + 32, v20 + 8);
  }
  else
  {
    v25 = v20[8];
    *(_BYTE *)(v21 + 36) &= ~1u;
    *(_DWORD *)(v21 + 32) = v25;
  }
  if ( (v20[13] & 1) != 0 )
  {
    sub_182C690(v24, v21 + 48, v20 + 12);
  }
  else
  {
    v26 = v20[12];
    *(_BYTE *)(v21 + 52) &= ~1u;
    *(_DWORD *)(v21 + 48) = v26;
  }
  v27 = qword_1C7F2C0;
  if ( (v20[17] & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v21 + 64, v20 + 16);
  }
  else
  {
    v28 = v20[16];
    *(_BYTE *)(v21 + 68) &= ~1u;
    *(_DWORD *)(v21 + 64) = v28;
  }
  if ( (v20[21] & 1) != 0 )
  {
    sub_182C690(v27, v21 + 80, v20 + 20);
  }
  else
  {
    v29 = v20[20];
    *(_BYTE *)(v21 + 84) &= ~1u;
    *(_DWORD *)(v21 + 80) = v29;
  }
  v30 = a1[3];
  for ( i = (_DWORD)v135 + 1; v30; v30 = a1[3] )
  {
    if ( i >= *(_DWORD *)(v30 - 4) )
      break;
    *(_QWORD *)v208 = 0;
    v209 = 0;
    *(_QWORD *)v210 = 1;
    v211 = 0;
    sub_182CBA0(qword_1C7F2C0, v145);
    LOBYTE(v210[1]) &= ~1u;
    v210[0] = 1;
    v212 = 0;
    v213 = 0;
    v214 = 1;
    v215 = 0;
    *(_QWORD *)v200 = 0xFFFFFFFFLL;
    v201 = 0;
    v202 = 1;
    v203 = 0;
    sub_182CBA0(qword_1C7F2C0, &v202);
    BYTE4(v202) &= ~1u;
    v32 = qword_1C7F2C0;
    LODWORD(v202) = 1;
    *(_QWORD *)v218 = 0;
    v219 = 0;
    *(_QWORD *)v220 = 1;
    v221 = 0;
    if ( (v200[1] & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v140, v200);
    else
      v218[0] = v200[0];
    if ( (v202 & 0x100000000LL) != 0 )
    {
      sub_182C690(v32, v141, &v202);
    }
    else
    {
      LOBYTE(v220[1]) &= ~1u;
      v220[0] = v202;
    }
    *(_QWORD *)v222 = 0;
    v33 = qword_1C7F2C0;
    v223 = 0;
    *(_QWORD *)v224 = 1;
    v225 = 0;
    if ( (v208[4] & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v143, v142);
    else
      v222[0] = *(_DWORD *)v208;
    if ( (v210[1] & 1) != 0 )
    {
      sub_182C690(v33, v146, v145);
    }
    else
    {
      LOBYTE(v224[1]) &= ~1u;
      v224[0] = v210[0];
    }
    v226 = 0;
    v34 = qword_1C7F2C0;
    v227 = 0;
    v228 = 1;
    v229 = 0;
    if ( (v212 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v226, &v212);
    else
      LODWORD(v226) = v212;
    if ( (v214 & 0x100000000LL) != 0 )
    {
      sub_182C690(v34, &v228, &v214);
    }
    else
    {
      BYTE4(v228) &= ~1u;
      LODWORD(v228) = v214;
    }
    v35 = a1[3] + 96LL * i;
    v36 = *(_DWORD *)v35;
    *(_DWORD *)v35 = v218[0];
    v218[0] = v36;
    v37 = *(_QWORD *)(v35 + 8);
    *(_QWORD *)(v35 + 8) = v219;
    v219 = v37;
    v38 = *(_BYTE *)(v35 + 4);
    *(_BYTE *)(v35 + 4) = v218[1] & 2 | v38 & 0xFD;
    LOBYTE(v218[1]) = v38 & 2 | v218[1] & 0xFD;
    v39 = *(_BYTE *)(v35 + 4);
    *(_BYTE *)(v35 + 4) = v218[1] & 1 | v39 & 0xFE;
    LOBYTE(v218[1]) = v39 & 1 | v218[1] & 0xFE;
    LODWORD(v37) = *(_DWORD *)(v35 + 16);
    *(_DWORD *)(v35 + 16) = v220[0];
    v220[0] = v37;
    v40 = *(_QWORD *)(v35 + 24);
    *(_QWORD *)(v35 + 24) = v221;
    v221 = v40;
    v41 = *(_BYTE *)(v35 + 20);
    *(_BYTE *)(v35 + 20) = v220[1] & 2 | v41 & 0xFD;
    LOBYTE(v220[1]) = v41 & 2 | v220[1] & 0xFD;
    v42 = *(_BYTE *)(v35 + 20);
    *(_BYTE *)(v35 + 20) = v220[1] & 1 | v42 & 0xFE;
    LOBYTE(v220[1]) = v42 & 1 | v220[1] & 0xFE;
    LODWORD(v40) = *(_DWORD *)(v35 + 32);
    *(_DWORD *)(v35 + 32) = v222[0];
    v222[0] = v40;
    v43 = *(_QWORD *)(v35 + 40);
    *(_QWORD *)(v35 + 40) = v223;
    v223 = v43;
    v44 = *(_BYTE *)(v35 + 36);
    *(_BYTE *)(v35 + 36) = v222[1] & 2 | v44 & 0xFD;
    LOBYTE(v222[1]) = v44 & 2 | v222[1] & 0xFD;
    v45 = *(_BYTE *)(v35 + 36) & 1;
    *(_BYTE *)(v35 + 36) = v222[1] & 1 | *(_BYTE *)(v35 + 36) & 0xFE;
    LOBYTE(v222[1]) = v45 | v222[1] & 0xFE;
    LODWORD(v43) = *(_DWORD *)(v35 + 48);
    *(_DWORD *)(v35 + 48) = v224[0];
    v224[0] = v43;
    v46 = *(_QWORD *)(v35 + 56);
    *(_QWORD *)(v35 + 56) = v225;
    v225 = v46;
    v47 = *(_BYTE *)(v35 + 52);
    *(_BYTE *)(v35 + 52) = v224[1] & 2 | v47 & 0xFD;
    LOBYTE(v224[1]) = v47 & 2 | v224[1] & 0xFD;
    v48 = *(_BYTE *)(v35 + 52);
    *(_BYTE *)(v35 + 52) = v224[1] & 1 | v48 & 0xFE;
    LOBYTE(v224[1]) = v48 & 1 | v224[1] & 0xFE;
    LODWORD(v46) = *(_DWORD *)(v35 + 64);
    *(_DWORD *)(v35 + 64) = v226;
    LODWORD(v226) = v46;
    v49 = *(_QWORD *)(v35 + 72);
    *(_QWORD *)(v35 + 72) = v227;
    v227 = v49;
    v50 = *(_BYTE *)(v35 + 68);
    *(_BYTE *)(v35 + 68) = BYTE4(v226) & 2 | v50 & 0xFD;
    BYTE4(v226) = v50 & 2 | BYTE4(v226) & 0xFD;
    v51 = *(_BYTE *)(v35 + 68);
    *(_BYTE *)(v35 + 68) = BYTE4(v226) & 1 | v51 & 0xFE;
    BYTE4(v226) = v51 & 1 | BYTE4(v226) & 0xFE;
    LODWORD(v49) = *(_DWORD *)(v35 + 80);
    *(_DWORD *)(v35 + 80) = v228;
    LODWORD(v228) = v49;
    v52 = *(_QWORD *)(v35 + 88);
    *(_QWORD *)(v35 + 88) = v229;
    v229 = v52;
    LOBYTE(v52) = *(_BYTE *)(v35 + 84) & 2;
    ++i;
    *(_BYTE *)(v35 + 84) = BYTE4(v228) & 2 | *(_BYTE *)(v35 + 84) & 0xFD;
    BYTE4(v228) = v52 | BYTE4(v228) & 0xFD;
    v53 = *(_BYTE *)(v35 + 84);
    *(_BYTE *)(v35 + 84) = BYTE4(v228) & 1 | v53 & 0xFE;
    BYTE4(v228) = v53 & 1 | BYTE4(v228) & 0xFE;
    v136 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v226);
    sub_182CBA0(v136, &v228);
    v54 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v143);
    sub_182CBA0(v54, v146);
    v55 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v140);
    sub_182CBA0(v55, v141);
    v56 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v200);
    sub_182CBA0(v56, &v202);
    v57 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v212);
    sub_182CBA0(v57, &v214);
    v58 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v142);
    sub_182CBA0(v58, v145);
  }
  v13 = 1;
LABEL_57:
  v59 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v188);
  sub_182CBA0(v59, v190);
  v60 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v184);
  sub_182CBA0(v60, v186);
  v61 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v161);
  sub_182CBA0(v61, v182);
  v62 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v138);
  sub_182CBA0(v62, v148);
  if ( v149 )
  {
    v137 = *(_DWORD *)(v149 + 8);
    *(_DWORD *)(v149 + 8) = v137 - 1;
    if ( v137 == 1 )
      sub_15D7BC0(*(_QWORD *)v163, v149);
  }
  v63 = *(_QWORD *)v166;
  if ( *(_QWORD *)v166 )
  {
    v64 = *(_QWORD *)v167;
    v65 = (*(_DWORD *)(*(_QWORD *)v166 + 8LL))-- == 1;
    if ( v65 )
      sub_15D7BC0(v64, v63);
  }
  return v13;
}

