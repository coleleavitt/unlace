__int64 __fastcall sub_D994F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rbp
  _QWORD *v8; // rdi
  __int64 (__fastcall *v9)(__int64); // rax
  _QWORD *v10; // rdi
  __int64 (*v11)(void); // rdx
  _QWORD **v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // r13
  __int64 v27; // rcx
  unsigned int v28; // ebp
  __int64 v29; // r12
  __int64 v30; // rax
  bool v31; // r15
  __int64 v32; // rax
  unsigned __int64 v33; // r15
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned __int64 v39; // rax
  int v40; // eax
  __int64 v41; // r8
  __int64 v42; // rcx
  int v43; // esi
  unsigned int v44; // eax
  unsigned __int64 v45; // rdx
  unsigned int v46; // ebx
  __int64 v48; // rax
  int v49; // edi
  int v50; // edx
  int v51; // r15d
  __int64 v52; // rax
  unsigned __int64 v53; // rdi
  int v54; // edx
  unsigned __int64 v55; // rax
  bool v56; // r12
  __int64 v57; // rcx
  unsigned __int64 v58; // r13
  __int64 v59; // rbp
  unsigned __int64 v60; // rsi
  char v61; // al
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r12
  unsigned int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rcx
  int v72; // edi
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned __int64 v75; // rbp
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rax
  unsigned __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  bool v83; // zf
  __int64 v84; // r12
  __int64 v85; // r13
  __int64 v86; // rbp
  unsigned int v87; // r15d
  __int64 *v88; // r14
  unsigned __int64 v89; // rdx
  unsigned int v90; // esi
  __int64 v91; // rax
  __int64 v92; // rbp
  unsigned int v93; // r15d
  __int64 *v94; // r14
  unsigned int v95; // edi
  unsigned int v96; // ecx
  __int64 v97; // rax
  __int64 v98; // rcx
  unsigned int v99; // ebp
  unsigned __int64 v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // r14
  __int64 v104; // rax
  unsigned __int64 v105; // rdx
  _DWORD *v106; // rax
  __int64 v107; // rdi
  int v108; // edx
  _QWORD *v109; // rdi
  __int64 v110; // r15
  unsigned __int64 v111; // rdx
  __int64 v112; // rax
  unsigned __int64 v113; // rdx
  unsigned __int64 v114; // rax
  __int64 v115; // r14
  __int64 v116; // rax
  _DWORD *v117; // rax
  __int64 v118; // rdi
  _QWORD *v119; // rdi
  __int64 v120; // r15
  unsigned __int64 v121; // rdx
  __int64 v122; // rax
  unsigned __int64 v123; // rdx
  unsigned __int64 v124; // rax
  int v125; // r14d
  __int64 v126; // rax
  __int64 v127; // rax
  unsigned int v128; // eax
  unsigned __int64 v129; // rax
  int v130; // esi
  int v131; // edi
  __int64 v132; // rdx
  unsigned __int64 v133; // rdi
  __int64 v134; // rdi
  __int64 v135; // rax
  __int64 v136; // rcx
  _QWORD *v137; // rdx
  int v138; // r9d
  __int64 v139; // r15
  __int64 *v140; // r8
  _QWORD *v141; // rcx
  __int64 *v142; // rdx
  int i; // r13d
  __int64 v144; // rcx
  unsigned int v145; // edi
  _QWORD *v146; // rsi
  __int64 v147; // r10
  int v148; // esi
  int v149; // r8d
  unsigned int v150; // edi
  unsigned __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // r15
  __int64 v155; // r9
  __int64 *v156; // rdi
  _QWORD *v157; // rcx
  _QWORD *v158; // rdx
  __int64 *v159; // rdx
  int j; // r13d
  __int64 v161; // rcx
  unsigned int v162; // esi
  __int64 v163; // r8
  __int64 v164; // r10
  __m128i v165; // xmm0
  int v166; // edi
  int v167; // r8d
  unsigned int v168; // edi
  unsigned int v169; // eax
  __int64 v170; // rax
  __int64 v171; // r15
  __int64 v172; // r9
  _QWORD *v173; // rcx
  _QWORD *v174; // rdx
  __int64 *v175; // rdx
  int v176; // r11d
  __int64 v177; // rcx
  unsigned int v178; // esi
  __int64 v179; // r8
  __int64 v180; // r10
  __m128i v181; // xmm1
  int v182; // edi
  int v183; // edi
  unsigned int v184; // r13d
  __int64 *v185; // r8
  int v186; // r9d
  unsigned __int64 v187; // rdi
  unsigned __int64 v188; // rdi
  __int64 v189; // rdi
  __int64 v190; // rax
  __int64 v191; // rcx
  _QWORD *v192; // rdx
  int v193; // r9d
  __int64 v194; // r15
  _QWORD *v195; // rcx
  __int64 *v196; // rdx
  int v197; // r11d
  __int64 v198; // rcx
  unsigned int v199; // edi
  _QWORD *v200; // rsi
  __int64 v201; // r10
  int v202; // esi
  int v203; // edi
  unsigned int v204; // r13d
  __int64 v205; // rdx
  _QWORD *v206; // rcx
  _QWORD *v207; // rdx
  __int64 v208; // rcx
  _QWORD *v209; // rcx
  _QWORD *v210; // rdx
  __int64 v211; // rcx
  _QWORD *v212; // rcx
  _QWORD *v213; // rdx
  __int64 v214; // rdx
  _QWORD *v215; // rcx
  _QWORD *v216; // rdx
  _QWORD *v217; // r11
  __int64 v218; // r11
  __int64 *v219; // r9
  int v220; // r10d
  __int64 *v221; // r9
  int v222; // r10d
  __int64 *v223; // r8
  int v224; // r9d
  int v225; // [rsp+14h] [rbp-144h]
  __int64 v226; // [rsp+20h] [rbp-138h]
  int v228; // [rsp+30h] [rbp-128h]
  __int64 v229; // [rsp+30h] [rbp-128h]
  int v230; // [rsp+30h] [rbp-128h]
  int v231; // [rsp+30h] [rbp-128h]
  _QWORD *v232; // [rsp+30h] [rbp-128h]
  __int64 v233; // [rsp+30h] [rbp-128h]
  __int64 v234; // [rsp+38h] [rbp-120h]
  __int64 v235; // [rsp+48h] [rbp-110h]
  __int64 v236; // [rsp+48h] [rbp-110h]
  int v237; // [rsp+48h] [rbp-110h]
  int v238; // [rsp+48h] [rbp-110h]
  _QWORD v240[3]; // [rsp+60h] [rbp-F8h] BYREF
  int v241; // [rsp+78h] [rbp-E0h]
  __int64 v242; // [rsp+80h] [rbp-D8h]
  __int64 v243; // [rsp+88h] [rbp-D0h]
  _QWORD v244[3]; // [rsp+90h] [rbp-C8h] BYREF
  int v245; // [rsp+A8h] [rbp-B0h]
  __int64 v246; // [rsp+B0h] [rbp-A8h]
  __int64 v247; // [rsp+B8h] [rbp-A0h]
  _BYTE v248[32]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v249; // [rsp+E0h] [rbp-78h]
  unsigned int v250; // [rsp+E8h] [rbp-70h]
  void *v251; // [rsp+F0h] [rbp-68h] BYREF
  unsigned int v252; // [rsp+F8h] [rbp-60h]
  char v253; // [rsp+FCh] [rbp-5Ch]

  v5 = 13;
  v6 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
  if ( (*(_BYTE *)(v6 + 1) & 6) == 0 )
    v5 = sub_CE6180(a1[23], *(_QWORD *)(v6 + 8), 13, a4, a5);
  sub_D8B1A0((__int64)&v251, a1[22], v5);
  if ( v252 > 0x40 && v251 )
    operator delete[](v251);
  v7 = a1[22];
  sub_E21760(v7, 48);
  sub_E23260(v240);
  sub_E21790(v7, 48);
  if ( !v241 )
  {
    if ( !v242 )
    {
LABEL_61:
      v46 = 0;
      goto LABEL_62;
    }
    v234 = v242;
    goto LABEL_9;
  }
  if ( v241 == 2 || v241 == 3 || !(v240[0] | v243) )
    goto LABEL_61;
  v234 = v242;
  if ( v241 != 1 )
LABEL_9:
    v234 = *(_QWORD *)(v234 + 32);
  if ( !v234 )
    goto LABEL_61;
  v8 = (_QWORD *)a1[3];
  v9 = *(__int64 (__fastcall **)(__int64))(*v8 + 104LL);
  if ( v9 != sub_D8A670 )
    goto LABEL_238;
  v10 = (_QWORD *)v8[3];
  v11 = *(__int64 (**)(void))(*v10 + 104LL);
  if ( (char *)v11 != (char *)v9 )
  {
    v226 = v11();
    goto LABEL_15;
  }
  v12 = (_QWORD **)v10[3];
  v9 = (__int64 (__fastcall *)(__int64))(*v12)[13];
  if ( (char *)v9 == (char *)v11 )
    v226 = (*(__int64 (__fastcall **)(_QWORD *))(*v12[3] + 104LL))(v12[3]);
  else
LABEL_238:
    v226 = ((__int64 (*)(void))v9)();
LABEL_15:
  v13 = (__int64)v240;
  sub_E231E0(v244, v240);
  v225 = 0;
  while ( !v245 )
  {
    while ( 1 )
    {
      v13 = v246;
      v14 = (unsigned int)v247;
      v15 = *(_QWORD *)(v246 + 32);
      if ( *(_DWORD *)(v15 + 24) != (_DWORD)v247 && (_DWORD)v247 )
      {
        if ( !*(_BYTE *)(*(_QWORD *)(v246 + (unsigned int)v247 + 32) + 60LL) )
          goto LABEL_100;
      }
      else if ( !*(_BYTE *)(v15 + 60) )
      {
        goto LABEL_100;
      }
      v16 = (unsigned int)v247;
      if ( (unsigned int)v247 != v244[0] )
      {
        if ( v244[0] != 0xFFFFFFFFLL )
          goto LABEL_22;
LABEL_115:
        if ( *(_DWORD *)(v15 + 24) != (_DWORD)v247 && (_DWORD)v247 )
LABEL_173:
          v73 = *(_QWORD *)(v246 + v16 + 32);
        else
          v73 = *(_QWORD *)(v246 + 32);
        if ( *(_QWORD *)(v73 + 40) || (v74 = 32, !*(_BYTE *)(v73 + 60)) )
          v74 = 16;
        if ( *(_DWORD *)(v15 + 24) != (_DWORD)v247 && (_DWORD)v247 )
          v15 = *(_QWORD *)(v246 + v16 + 32);
        sub_E23220(&v251, v246, (unsigned int)v247, v74 + v16 + *(unsigned int *)(v15 + 20));
        goto LABEL_23;
      }
LABEL_100:
      if ( (unsigned int)v247 <= 0xF || (v16 = (unsigned int)v247, *(char *)(v246 + (unsigned int)v247 + 28) >= 0) )
      {
        if ( *(_DWORD *)(v15 + 24) == (_DWORD)v247 )
          goto LABEL_51;
        if ( !(_DWORD)v247 )
          goto LABEL_51;
        v16 = (unsigned int)v247;
        v70 = **(_QWORD **)(v246 + (unsigned int)v247 + 32);
        if ( (v70 & 2) != 0 || (v70 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          goto LABEL_51;
        v71 = v244[0];
        if ( v244[0] == 0xFFFFFFFFLL )
          goto LABEL_173;
      }
      else
      {
        v71 = v244[0];
        if ( v244[0] == 0xFFFFFFFFLL )
          goto LABEL_115;
      }
      if ( v16 != v71 )
        goto LABEL_22;
      v72 = *(_DWORD *)(v15 + 24);
      if ( v72 != (_DWORD)v247 )
      {
        v14 = (unsigned int)(v247 - *(_DWORD *)(v246 + v71 + 24));
        if ( (_DWORD)v14 != v72 )
          v15 = *(_QWORD *)(v246 + (unsigned int)v14 + 32);
        if ( !*(_BYTE *)(v15 + 60) )
        {
LABEL_22:
          sub_E231E0(&v251, v244);
          goto LABEL_23;
        }
      }
      sub_E23220(&v251, v246, v14, v71);
LABEL_23:
      sub_E23400(v244, &v251);
      sub_E232A0(&v251);
      if ( v245 )
      {
        if ( v245 == 2 || v245 == 3 )
        {
          v21 = nullptr;
          v18 = (unsigned int)v247;
          v19 = v246;
          goto LABEL_28;
        }
        v19 = v246;
        v18 = (unsigned int)v247;
        v17 = v246;
      }
      else
      {
        v17 = v246;
        v18 = (unsigned int)v247;
        v19 = 0;
        if ( v246 )
        {
          v20 = *(_QWORD *)(v246 + 32);
          v19 = v246;
          if ( *(_DWORD *)(v20 + 24) != (_DWORD)v247 )
          {
            if ( (_DWORD)v247 )
            {
              v22 = (unsigned int)v247;
              v21 = *(_QWORD **)(v246 + (unsigned int)v247 + 32);
              goto LABEL_29;
            }
          }
        }
      }
      v21 = *(_QWORD **)(v17 + 32);
LABEL_28:
      v17 = v19;
      v20 = *(_QWORD *)(v19 + 32);
      v22 = (unsigned int)v18;
LABEL_29:
      v23 = *(_DWORD *)(v20 + 24) != (_DWORD)v18 && (_DWORD)v18 ? *(_QWORD *)(v17 + v22 + 32) : v20;
      if ( (!*(_BYTE *)(v23 + 60) || v22 == v244[0]) && ((unsigned int)v18 <= 0xF || *(char *)(v17 + v22 + 28) >= 0) )
        break;
      v24 = sub_CEF620((__int64)v21, v17, v18, v20, v23);
      v228 = sub_AAE980(v226, v24);
      if ( v245 )
      {
        v26 = v246;
        if ( v245 == 1 )
        {
          if ( v246 )
            v125 = LODWORD(v244[0]) * *(_DWORD *)(v246 + 16);
          else
            v125 = v244[0];
          v225 += v228 * (v247 + v125);
          v25 = (unsigned int)v247;
          v28 = v247;
          if ( v244[0] == 0xFFFFFFFFLL )
          {
            v29 = v246;
            v102 = 16;
LABEL_181:
            sub_E23220(v248, v26, v28, v102 + v25 + *(unsigned int *)(v29 + 20));
            goto LABEL_48;
          }
        }
        else
        {
          v225 += v228 * (v246 + LODWORD(v244[0]));
          v25 = (unsigned int)v247;
          v28 = v247;
          if ( v244[0] == 0xFFFFFFFFLL )
          {
            if ( (unsigned int)(v245 - 2) <= 1 )
              BUG();
            v128 = 16;
            goto LABEL_234;
          }
        }
        if ( v244[0] != v25 )
          goto LABEL_78;
        goto LABEL_47;
      }
      v25 = (unsigned int)v247;
      v26 = v246;
      v27 = v244[0];
      v28 = v247;
      if ( !v246 )
        goto LABEL_76;
      v29 = *(_QWORD *)(v246 + 32);
      v30 = v29;
      v31 = (_DWORD)v247 == 0 || *(_DWORD *)(v29 + 24) == (_DWORD)v247;
      if ( !v31 )
        v30 = *(_QWORD *)(v246 + (unsigned int)v247 + 32);
      if ( *(_DWORD *)(v30 + 20) == -1 )
        goto LABEL_69;
      if ( (unsigned __int64)*(unsigned int *)(v29 + 28) < v244[0] )
      {
        v32 = *(_QWORD *)(v246 + 32);
        if ( !v31 )
          goto LABEL_182;
        goto LABEL_41;
      }
      v236 = v244[0];
      v48 = sub_CFDF60((__int64)v244);
      v27 = v236;
      v49 = *(_DWORD *)(v48 + 20);
      if ( v28 != -1 )
      {
        v50 = 0;
        if ( v25 != v236 )
          v50 = *(_QWORD *)(v48 + 40) == 0 ? 32 : 16;
        if ( (_DWORD)v236 - v28 - v50 == v49 && v49 )
        {
          if ( v31 )
          {
            v33 = *(unsigned int *)(v29 + 20);
LABEL_42:
            v235 = v27;
            v34 = sub_CFDF60((__int64)v244);
            v27 = v235;
            v225 += v228 * (v33 / *(unsigned int *)(v34 + 16));
            if ( v235 == 0xFFFFFFFFLL )
              goto LABEL_176;
            if ( v25 != v235 )
              goto LABEL_78;
            goto LABEL_44;
          }
LABEL_182:
          v32 = *(_QWORD *)(v26 + v25 + 32);
LABEL_41:
          v33 = *(unsigned int *)(v32 + 20);
          if ( v28 == -1 )
          {
            v100 = *(unsigned int *)(v29 + 20);
            goto LABEL_175;
          }
          goto LABEL_42;
        }
LABEL_69:
        if ( v28 <= 0x10 )
        {
          v51 = v228;
          goto LABEL_71;
        }
        goto LABEL_221;
      }
      if ( v49 == (_DWORD)v236 && v49 )
      {
        if ( v31 )
        {
          v100 = *(unsigned int *)(v29 + 20);
          v33 = v100;
LABEL_175:
          v225 += v228 * (v33 / v100);
          if ( v27 == 0xFFFFFFFFLL )
          {
LABEL_176:
            v101 = sub_CFDF60((__int64)v244);
            if ( *(_QWORD *)(v101 + 40) )
              goto LABEL_228;
            v102 = 32;
            if ( !*(_BYTE *)(v101 + 60) )
              goto LABEL_228;
LABEL_178:
            if ( *(_DWORD *)(v29 + 24) != v28 && v28 )
              v29 = *(_QWORD *)(v26 + v25 + 32);
            goto LABEL_181;
          }
LABEL_78:
          sub_E231E0(v248, v244);
          goto LABEL_48;
        }
        goto LABEL_182;
      }
LABEL_221:
      if ( v25 != v27 )
      {
        v51 = v228;
        if ( v28 == -1 )
        {
          v53 = *(unsigned int *)(v29 + 20);
          if ( *(_DWORD *)(v29 + 20) )
          {
            v55 = (unsigned int)v27;
            goto LABEL_75;
          }
LABEL_76:
          if ( v27 == 0xFFFFFFFFLL )
          {
            v127 = sub_CFDF60((__int64)v244);
            if ( !*(_QWORD *)(v127 + 40) && *(_BYTE *)(v127 + 60) )
              goto LABEL_231;
            v102 = 16;
            v128 = 16;
            goto LABEL_233;
          }
          if ( v25 != v27 )
            goto LABEL_78;
          if ( !v26 )
            goto LABEL_47;
          v29 = *(_QWORD *)(v26 + 32);
          goto LABEL_45;
        }
LABEL_71:
        v229 = v27;
        v52 = sub_CFDF60((__int64)v244);
        v27 = v229;
        v53 = *(unsigned int *)(v52 + 16);
        if ( *(_DWORD *)(v52 + 16) )
        {
          v54 = 0;
          if ( v25 != v229 )
            v54 = *(_QWORD *)(v52 + 40) == 0 ? 32 : 16;
          v55 = (unsigned int)v229 - v28 - v54;
LABEL_75:
          v225 += v51 * (v55 / v53);
        }
        goto LABEL_76;
      }
      if ( v25 == 0xFFFFFFFFLL )
      {
        v126 = sub_CFDF60((__int64)v244);
        if ( *(_QWORD *)(v126 + 40) || !*(_BYTE *)(v126 + 60) )
        {
LABEL_228:
          v102 = 16;
          goto LABEL_178;
        }
LABEL_231:
        v102 = 32;
        v128 = 32;
LABEL_233:
        if ( v26 )
        {
          v29 = *(_QWORD *)(v26 + 32);
          goto LABEL_178;
        }
LABEL_234:
        v29 = *(_QWORD *)(v26 + 32);
        v102 = v128;
        goto LABEL_181;
      }
LABEL_44:
      v25 = v27;
LABEL_45:
      v35 = *(_DWORD *)(v29 + 24);
      if ( v35 != v28 && v28 )
      {
        v99 = v28 - *(_DWORD *)(v26 + v25 + 24);
        if ( v99 != v35 )
          v29 = *(_QWORD *)(v26 + v99 + 32);
        if ( *(_BYTE *)(v29 + 60) )
        {
          sub_E23220(v248, v26, v99, v27);
          goto LABEL_48;
        }
        goto LABEL_78;
      }
LABEL_47:
      sub_E23220(v248, v26, v28, v25);
LABEL_48:
      if ( v250 == -1 )
        sub_E23220(&v251, v249, 0xFFFFFFFFLL, 0);
      else
        sub_E23220(&v251, v249, v250, v250);
      v13 = (__int64)&v251;
      sub_E23400(v244, &v251);
      sub_E232A0(&v251);
      sub_E232A0(v248);
      if ( v245 )
        goto LABEL_51;
    }
    v56 = (_DWORD)v18 == 0 || *(_DWORD *)(v20 + 24) == (_DWORD)v18;
    if ( v56 )
      goto LABEL_85;
    v57 = **(_QWORD **)(v17 + v22 + 32);
    v58 = v57 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v57 & 2) != 0 )
    {
LABEL_86:
      if ( (v57 & 2) != 0 || (v59 = v58, (*(_BYTE *)(v58 + 28) & 0x7Fu) - 49 > 2) )
        BUG();
      v60 = *(_QWORD *)(v58 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v58 + 16) & 4) != 0 )
        v60 = *(_QWORD *)v60;
      v61 = *(_BYTE *)(v60 + 8);
      v62 = v60 - 64;
      if ( (v61 & 0x7Fu) - 58 >= 4 )
        v62 = 0;
      v67 = sub_EDE580(v226, v62);
      if ( *(char *)(v58 + 29) < 0 )
        v59 = sub_B72720(v58);
      v68 = *(_DWORD *)(v59 + 68);
      if ( (v68 & 0xFFFFFFF0) == 0 )
      {
        sub_B7EAB0(v59, v62, v63, v64, v65, v66);
        v68 = *(_DWORD *)(v59 + 68);
      }
      v225 += sub_A97FF0(v226, *(_QWORD *)(*(_QWORD *)(v67 + 48) + 8LL * ((v68 >> 4) - 1)));
      if ( (_DWORD)v247 == -1 )
      {
        sub_E23220(&v251, v246, 0xFFFFFFFFLL, 0);
      }
      else
      {
        v69 = (unsigned int)(v247 - *(_DWORD *)(v246 + (unsigned int)v247 + 24));
        sub_E23220(&v251, v246, v69, (unsigned int)v69);
      }
      v13 = (__int64)&v251;
      sub_E23400(v244, &v251);
      sub_E232A0(&v251);
    }
    else
    {
      if ( !v58 )
      {
LABEL_85:
        v57 = **(_QWORD **)(v17 + v22 + 32);
        v58 = v57 & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_86;
      }
      if ( (*(_BYTE *)(v17 + v22 + 28) & 4) == 0 )
        goto LABEL_86;
      v75 = *v21 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*v21 & 2) != 0 )
        v75 = **(_QWORD **)(v17 + v22 + 32) & 2LL;
      if ( !v241 )
      {
        if ( v242 )
        {
          if ( (_DWORD)v243 != 0 && *(_DWORD *)(*(_QWORD *)(v242 + 32) + 24LL) != (_DWORD)v243 )
          {
            v98 = **(_QWORD **)(v242 + (unsigned int)v243 + 32);
            if ( (v98 & 2) == 0 && (v98 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
              v56 = (*(_BYTE *)(v242 + (unsigned int)v243 + 28) & 8) != 0;
          }
        }
      }
      if ( (_DWORD)v18 == -1 )
        sub_E23220(&v251, v17, v18, 0);
      else
        sub_E23220(
          &v251,
          v17,
          (unsigned int)(v18 - *(_DWORD *)(v17 + v22 + 24)),
          (unsigned int)(v18 - *(_DWORD *)(v17 + v22 + 24)));
      sub_E23400(v244, &v251);
      sub_E232A0(&v251);
      if ( v245 == 1 )
      {
        v77 = v246;
      }
      else if ( v245 )
      {
        if ( v245 == 2 || v245 == 3 )
          BUG();
        v76 = v246;
LABEL_144:
        v77 = *(_QWORD *)(v76 + 32);
      }
      else
      {
        v76 = v246;
        if ( !v246 || *(_DWORD *)(*(_QWORD *)(v246 + 32) + 24LL) == (_DWORD)v247 || !(_DWORD)v247 )
          goto LABEL_144;
        v77 = *(_QWORD *)(v246 + (unsigned int)v247 + 32);
      }
      v78 = sub_EDE580(v226, **(_QWORD **)(v77 + 32));
      v83 = !v56;
      v84 = *(_QWORD *)(v75 + 128);
      v85 = v78;
      if ( v83 )
      {
        if ( v84 )
          goto LABEL_155;
        v115 = *(_QWORD *)(v75 + 104);
        v116 = *(_QWORD *)(v115 + 96);
        v79 = v116 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v116 & 1) == 0 )
        {
          v119 = (_QWORD *)(v116 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v116 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            if ( (v116 & 2) == 0 )
              goto LABEL_156;
            v120 = v119[2295];
            v121 = v115 & 0xFFFFFFFFFFFFFFFBLL;
            if ( v120 )
            {
              v122 = v119[294];
              v119[304] += 24LL;
              v123 = (v122 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              v80 = v123 + 24;
              if ( v119[295] >= v123 + 24 && v122 )
              {
                v119[294] = v80;
                v124 = (v122 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                v124 = sub_986170((__int64)(v119 + 294), 24, 24, 3, v81, v82);
                v123 = v124 & 0xFFFFFFFFFFFFFFFBLL;
              }
              *(_QWORD *)v124 = v120;
              v121 = v123 | 4;
              *(_DWORD *)(v124 + 8) = 0;
              *(_QWORD *)(v124 + 16) = v115;
            }
            v79 = v121 & 0xFFFFFFFFFFFFFFFELL;
            v116 = v79 | 1;
            *(_QWORD *)(v115 + 96) = v79 | 1;
          }
        }
        if ( v79 )
        {
          v79 &= 4u;
          if ( (_DWORD)v79 )
          {
            v117 = (_DWORD *)(v116 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v117 )
            {
              v118 = *(_QWORD *)v117;
              v79 = *(unsigned int *)(*(_QWORD *)v117 + 12LL);
              if ( v117[2] != (_DWORD)v79 )
              {
                v117[2] = v79;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v118 + 152LL))(v118, v115);
              }
            }
          }
        }
        if ( *(_QWORD *)(v75 + 128) )
        {
          v84 = *(_QWORD *)(v75 + 128);
LABEL_155:
          v84 = *(_QWORD *)(v84 + 88);
        }
LABEL_156:
        v92 = *(_QWORD *)(v85 + 72);
        v93 = *(_DWORD *)(v92 + 80);
        v94 = *(__int64 **)(v92 + 64);
        if ( !v93 )
          goto LABEL_253;
        v95 = v93 - 1;
        v96 = (v93 - 1) & (((unsigned int)v84 >> 9) ^ ((unsigned int)v84 >> 4));
        v79 = (unsigned __int64)&v94[2 * v96];
        v97 = *(_QWORD *)v79;
        if ( *(_QWORD *)v79 == v84 )
        {
LABEL_158:
          v13 = *(unsigned int *)(v79 + 8);
          v225 += v13;
        }
        else
        {
          v130 = 1;
          v81 = 0;
          if ( v97 != -4096 )
          {
            while ( 1 )
            {
              if ( !v81 && v97 == -8192 )
                v81 = v79;
              v82 = (unsigned int)(v130 + 1);
              v96 = v95 & (v130 + v96);
              v79 = (unsigned __int64)&v94[2 * v96];
              v97 = *(_QWORD *)v79;
              if ( v84 == *(_QWORD *)v79 )
                goto LABEL_158;
              if ( v97 == -4096 )
                break;
              ++v130;
            }
            if ( v81 )
              v79 = v81;
          }
          v80 = (unsigned int)(*(_DWORD *)(v92 + 72) + 1);
          if ( 4 * (int)v80 < 3 * v93 )
          {
            if ( v93 - *(_DWORD *)(v92 + 76) - (unsigned int)v80 > v93 >> 3 )
              goto LABEL_242;
            v187 = ((v95 | ((unsigned __int64)v95 >> 1)) >> 2) | v95 | ((unsigned __int64)v95 >> 1);
            v188 = (((v187 >> 4) | v187) >> 8) | (v187 >> 4) | v187;
            v189 = ((v188 >> 16) | v188) + 1;
            if ( (unsigned int)v189 < 0x40 )
              LODWORD(v189) = 64;
            *(_DWORD *)(v92 + 80) = v189;
            v190 = sub_22300B0(16LL * (unsigned int)v189, 8, v79, v80, v81, v82);
            *(_QWORD *)(v92 + 64) = v190;
            if ( v94 )
            {
              v191 = *(unsigned int *)(v92 + 80);
              *(_QWORD *)(v92 + 72) = 0;
              v192 = (_QWORD *)v190;
              v193 = v191;
              v194 = 2LL * v93;
              v195 = (_QWORD *)(v190 + 16 * v191);
              if ( (_QWORD *)v190 != v195 )
              {
                do
                {
                  *v192 = -4096;
                  v192 += 2;
                }
                while ( v195 != v192 );
              }
              v196 = v94;
              v197 = v193 - 1;
              do
              {
                v198 = *v196;
                if ( *v196 != -8192 && v198 != -4096 )
                {
                  if ( !v193 )
                  {
                    *(_QWORD *)&dword_0 = *v196;
                    BUG();
                  }
                  v199 = v197 & (((unsigned int)v198 >> 9) ^ ((unsigned int)v198 >> 4));
                  v200 = (_QWORD *)(v190 + 16LL * v199);
                  v201 = *v200;
                  if ( *v200 != v198 && v201 != -4096 )
                  {
                    v237 = 1;
                    v232 = nullptr;
                    while ( 1 )
                    {
                      if ( !v232 )
                      {
                        if ( v201 != -8192 )
                          v200 = nullptr;
                        v232 = v200;
                      }
                      v199 = v197 & (v237 + v199);
                      v200 = (_QWORD *)(v190 + 16LL * v199);
                      v201 = *v200;
                      if ( v198 == *v200 )
                        break;
                      if ( v201 == -4096 )
                      {
                        if ( v232 )
                          v200 = v232;
                        break;
                      }
                      ++v237;
                    }
                  }
                  *v200 = v198;
                  v200[1] = v196[1];
                  ++*(_DWORD *)(v92 + 72);
                }
                v196 += 2;
              }
              while ( &v94[v194] != v196 );
              operator delete(v94, v194 * 8, 8);
              v190 = *(_QWORD *)(v92 + 64);
              v202 = *(_DWORD *)(v92 + 80);
              LODWORD(v80) = *(_DWORD *)(v92 + 72) + 1;
            }
            else
            {
              v211 = *(unsigned int *)(v92 + 80);
              *(_QWORD *)(v92 + 72) = 0;
              v202 = v211;
              v212 = (_QWORD *)(v190 + 16 * v211);
              if ( (_QWORD *)v190 != v212 )
              {
                v213 = (_QWORD *)v190;
                do
                {
                  *v213 = -4096;
                  v213 += 2;
                }
                while ( v212 != v213 );
              }
              LODWORD(v80) = 1;
            }
            if ( !v202 )
              goto LABEL_462;
            v203 = v202 - 1;
            v204 = (v202 - 1) & (((unsigned int)v84 >> 9) ^ ((unsigned int)v84 >> 4));
            v79 = v190 + 16LL * v204;
            v13 = *(_QWORD *)v79;
            if ( *(_QWORD *)v79 != v84 )
            {
              if ( v13 == -4096 )
                goto LABEL_326;
              v223 = (__int64 *)(v190 + 16LL * v204);
              v224 = 1;
              v79 = 0;
              while ( 1 )
              {
                if ( v13 == -8192 && !v79 )
                  v79 = (unsigned __int64)v223;
                v204 = v203 & (v224 + v204);
                v223 = (__int64 *)(v190 + 16LL * v204);
                v13 = *v223;
                if ( v84 == *v223 )
                {
                  v79 = v190 + 16LL * v204;
                  goto LABEL_243;
                }
                if ( v13 == -4096 )
                  break;
                ++v224;
              }
              if ( !v79 )
              {
                v79 = v190 + 16LL * v204;
                goto LABEL_326;
              }
LABEL_242:
              v13 = *(_QWORD *)v79;
              goto LABEL_243;
            }
            goto LABEL_268;
          }
LABEL_253:
          v133 = (((((((2 * v93 - 1) | ((unsigned __int64)(2 * v93 - 1) >> 1)) >> 2)
                   | (2 * v93 - 1)
                   | ((unsigned __int64)(2 * v93 - 1) >> 1)) >> 4)
                 | (((2 * v93 - 1) | ((unsigned __int64)(2 * v93 - 1) >> 1)) >> 2)
                 | (2 * v93 - 1)
                 | ((unsigned __int64)(2 * v93 - 1) >> 1)) >> 8)
               | (((((2 * v93 - 1) | ((unsigned __int64)(2 * v93 - 1) >> 1)) >> 2)
                 | (2 * v93 - 1)
                 | ((unsigned __int64)(2 * v93 - 1) >> 1)) >> 4)
               | (((2 * v93 - 1) | ((unsigned __int64)(2 * v93 - 1) >> 1)) >> 2)
               | (2 * v93 - 1)
               | ((unsigned __int64)(2 * v93 - 1) >> 1);
          v134 = ((v133 >> 16) | v133) + 1;
          if ( (unsigned int)v134 < 0x40 )
            LODWORD(v134) = 64;
          *(_DWORD *)(v92 + 80) = v134;
          v135 = sub_22300B0(16LL * (unsigned int)v134, 8, v79, v80, v81, v82);
          *(_QWORD *)(v92 + 64) = v135;
          if ( v94 )
          {
            v136 = *(unsigned int *)(v92 + 80);
            *(_QWORD *)(v92 + 72) = 0;
            v137 = (_QWORD *)v135;
            v138 = v136;
            v139 = 2LL * v93;
            v140 = &v94[v139];
            v141 = (_QWORD *)(v135 + 16 * v136);
            if ( (_QWORD *)v135 != v141 )
            {
              do
              {
                *v137 = -4096;
                v137 += 2;
              }
              while ( v141 != v137 );
            }
            v142 = v94;
            for ( i = v138 - 1; v140 != v142; v142 += 2 )
            {
              v144 = *v142;
              if ( *v142 != -4096 && v144 != -8192 )
              {
                if ( !v138 )
                {
                  *(_QWORD *)&dword_0 = *v142;
                  BUG();
                }
                v145 = i & (((unsigned int)v144 >> 9) ^ ((unsigned int)v144 >> 4));
                v146 = (_QWORD *)(v135 + 16LL * v145);
                v147 = *v146;
                if ( *v146 != v144 && v147 != -4096 )
                {
                  v230 = 1;
                  v217 = nullptr;
                  while ( 1 )
                  {
                    if ( v147 == -8192 && !v217 )
                      v217 = v146;
                    v145 = i & (v230 + v145);
                    v146 = (_QWORD *)(v135 + 16LL * v145);
                    v147 = *v146;
                    if ( v144 == *v146 )
                      break;
                    if ( v147 == -4096 )
                    {
                      if ( v217 )
                        v146 = v217;
                      break;
                    }
                    ++v230;
                  }
                }
                *v146 = v144;
                v146[1] = v142[1];
                ++*(_DWORD *)(v92 + 72);
              }
            }
            operator delete(v94, v139 * 8, 8);
            v135 = *(_QWORD *)(v92 + 64);
            v148 = *(_DWORD *)(v92 + 80);
            LODWORD(v80) = *(_DWORD *)(v92 + 72) + 1;
          }
          else
          {
            v208 = *(unsigned int *)(v92 + 80);
            *(_QWORD *)(v92 + 72) = 0;
            v148 = v208;
            v209 = (_QWORD *)(v135 + 16 * v208);
            if ( (_QWORD *)v135 != v209 )
            {
              v210 = (_QWORD *)v135;
              do
              {
                *v210 = -4096;
                v210 += 2;
              }
              while ( v209 != v210 );
            }
            LODWORD(v80) = 1;
          }
          if ( !v148 )
          {
LABEL_462:
            ++*(_DWORD *)(v92 + 72);
            BUG();
          }
          v149 = v148 - 1;
          v150 = (v148 - 1) & (((unsigned int)v84 >> 9) ^ ((unsigned int)v84 >> 4));
          v79 = v135 + 16LL * v150;
          v13 = *(_QWORD *)v79;
          if ( *(_QWORD *)v79 != v84 )
          {
            if ( v13 == -4096 )
              goto LABEL_326;
            v219 = (__int64 *)(v135 + 16LL * (v149 & (((unsigned int)v84 >> 9) ^ ((unsigned int)v84 >> 4))));
            v220 = 1;
            v79 = 0;
            while ( 1 )
            {
              if ( v13 == -8192 && !v79 )
                v79 = (unsigned __int64)v219;
              v150 = v149 & (v220 + v150);
              v219 = (__int64 *)(v135 + 16LL * v150);
              v13 = *v219;
              if ( v84 == *v219 )
              {
                v79 = v135 + 16LL * v150;
                goto LABEL_243;
              }
              if ( v13 == -4096 )
                break;
              ++v220;
            }
            if ( !v79 )
            {
              v79 = v135 + 16LL * v150;
LABEL_326:
              *(_DWORD *)(v92 + 72) = v80;
              goto LABEL_245;
            }
            goto LABEL_242;
          }
LABEL_268:
          v13 = v84;
LABEL_243:
          *(_DWORD *)(v92 + 72) = v80;
          if ( v13 != -4096 )
            --*(_DWORD *)(v92 + 76);
LABEL_245:
          *(_QWORD *)v79 = v84;
          *(_QWORD *)(v79 + 8) = 0;
        }
      }
      else
      {
        if ( v84 )
          goto LABEL_147;
        v103 = *(_QWORD *)(v75 + 104);
        v104 = *(_QWORD *)(v103 + 96);
        v105 = v104 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v104 & 1) != 0 )
          goto LABEL_184;
        v109 = (_QWORD *)(v104 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v104 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          goto LABEL_184;
        if ( (v104 & 2) != 0 )
        {
          v110 = v109[2295];
          v111 = v103 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v110 )
          {
            v112 = v109[294];
            v109[304] += 24LL;
            v113 = (v112 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            v80 = v113 + 24;
            if ( v109[295] >= v113 + 24 && v112 )
            {
              v109[294] = v80;
              v114 = (v112 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v114 = sub_986170((__int64)(v109 + 294), 24, 24, 3, v81, v82);
              v113 = v114 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v114 = v110;
            v111 = v113 | 4;
            *(_DWORD *)(v114 + 8) = 0;
            *(_QWORD *)(v114 + 16) = v103;
          }
          v105 = v111 & 0xFFFFFFFFFFFFFFFELL;
          v104 = v105 | 1;
          *(_QWORD *)(v103 + 96) = v105 | 1;
LABEL_184:
          if ( v105 )
          {
            if ( (v105 & 4) != 0 )
            {
              v106 = (_DWORD *)(v104 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v106 )
              {
                v107 = *(_QWORD *)v106;
                v108 = *(_DWORD *)(*(_QWORD *)v106 + 12LL);
                if ( v106[2] != v108 )
                {
                  v106[2] = v108;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v107 + 152LL))(v107, v103);
                }
              }
            }
          }
          if ( *(_QWORD *)(v75 + 128) )
          {
            v84 = *(_QWORD *)(v75 + 128);
LABEL_147:
            v84 = *(_QWORD *)(v84 + 88);
          }
        }
        v86 = *(_QWORD *)(v85 + 72);
        v87 = *(_DWORD *)(v86 + 104);
        v88 = *(__int64 **)(v86 + 88);
        if ( !v87 )
        {
LABEL_269:
          v151 = (((((((2 * v87 - 1) | ((unsigned __int64)(2 * v87 - 1) >> 1)) >> 2)
                   | (2 * v87 - 1)
                   | ((unsigned __int64)(2 * v87 - 1) >> 1)) >> 4)
                 | (((2 * v87 - 1) | ((unsigned __int64)(2 * v87 - 1) >> 1)) >> 2)
                 | (2 * v87 - 1)
                 | ((unsigned __int64)(2 * v87 - 1) >> 1)) >> 8)
               | (((((2 * v87 - 1) | ((unsigned __int64)(2 * v87 - 1) >> 1)) >> 2)
                 | (2 * v87 - 1)
                 | ((unsigned __int64)(2 * v87 - 1) >> 1)) >> 4)
               | (((2 * v87 - 1) | ((unsigned __int64)(2 * v87 - 1) >> 1)) >> 2)
               | (2 * v87 - 1)
               | ((unsigned __int64)(2 * v87 - 1) >> 1);
          v152 = ((v151 >> 16) | v151) + 1;
          if ( (unsigned int)v152 < 0x40 )
            LODWORD(v152) = 64;
          *(_DWORD *)(v86 + 104) = v152;
          v153 = sub_22300B0(24LL * (unsigned int)v152, 8, 64, v80, v81, v82);
          *(_QWORD *)(v86 + 88) = v153;
          if ( v88 )
          {
            *(_QWORD *)(v86 + 96) = 0;
            v154 = 3LL * v87;
            v155 = *(unsigned int *)(v86 + 104);
            v156 = &v88[v154];
            v157 = (_QWORD *)(v153 + 24 * v155);
            v158 = (_QWORD *)v153;
            if ( (_QWORD *)v153 != v157 )
            {
              do
              {
                *v158 = -4096;
                v158 += 3;
              }
              while ( v157 != v158 );
            }
            v159 = v88;
            for ( j = v155 - 1; v156 != v159; v159 += 3 )
            {
              v161 = *v159;
              if ( *v159 != -8192 && v161 != -4096 )
              {
                if ( !(_DWORD)v155 )
                {
                  *(_QWORD *)&dword_0 = *v159;
                  BUG();
                }
                v162 = j & (((unsigned int)v161 >> 9) ^ ((unsigned int)v161 >> 4));
                v163 = v153 + 24LL * v162;
                v164 = *(_QWORD *)v163;
                if ( v161 != *(_QWORD *)v163 && v164 != -4096 )
                {
                  v231 = 1;
                  v218 = 0;
                  while ( 1 )
                  {
                    if ( !v218 && v164 == -8192 )
                      v218 = v163;
                    v162 = j & (v231 + v162);
                    v163 = v153 + 24LL * v162;
                    v164 = *(_QWORD *)v163;
                    if ( v161 == *(_QWORD *)v163 )
                      break;
                    if ( v164 == -4096 )
                    {
                      if ( v218 )
                        v163 = v218;
                      break;
                    }
                    ++v231;
                  }
                }
                v165 = _mm_loadu_si128((const __m128i *)(v159 + 1));
                *(_QWORD *)v163 = v161;
                *(__m128i *)(v163 + 8) = v165;
                ++*(_DWORD *)(v86 + 96);
              }
            }
            operator delete(v88, v154 * 8, 8);
            v153 = *(_QWORD *)(v86 + 88);
            v166 = *(_DWORD *)(v86 + 104);
            v13 = (unsigned int)(*(_DWORD *)(v86 + 96) + 1);
          }
          else
          {
            v205 = *(unsigned int *)(v86 + 104);
            *(_QWORD *)(v86 + 96) = 0;
            v166 = v205;
            v206 = (_QWORD *)(v153 + 24 * v205);
            if ( (_QWORD *)v153 != v206 )
            {
              v207 = (_QWORD *)v153;
              do
              {
                *v207 = -4096;
                v207 += 3;
              }
              while ( v206 != v207 );
            }
            v13 = 1;
          }
          if ( !v166 )
          {
LABEL_465:
            ++*(_DWORD *)(v86 + 96);
            BUG();
          }
          v167 = v166 - 1;
          v168 = (v166 - 1) & (((unsigned int)v84 >> 9) ^ ((unsigned int)v84 >> 4));
          v80 = v153 + 24LL * v168;
          v132 = *(_QWORD *)v80;
          if ( v84 == *(_QWORD *)v80 )
            goto LABEL_250;
          if ( v132 == -4096 )
            goto LABEL_285;
          v221 = (__int64 *)(v153 + 24LL * (v167 & (((unsigned int)v84 >> 9) ^ ((unsigned int)v84 >> 4))));
          v222 = 1;
          v80 = 0;
          while ( 1 )
          {
            if ( v132 == -8192 && !v80 )
              v80 = (__int64)v221;
            v168 = v167 & (v222 + v168);
            v221 = (__int64 *)(v153 + 24LL * v168);
            v132 = *v221;
            if ( v84 == *v221 )
            {
              v80 = v153 + 24LL * v168;
              goto LABEL_250;
            }
            if ( v132 == -4096 )
              break;
            ++v222;
          }
          if ( !v80 )
          {
            v80 = v153 + 24LL * v168;
            goto LABEL_285;
          }
          goto LABEL_249;
        }
        v89 = v87 - 1;
        v90 = v89 & (((unsigned int)v84 >> 9) ^ ((unsigned int)v84 >> 4));
        v80 = (__int64)&v88[3 * v90];
        v91 = *(_QWORD *)v80;
        if ( *(_QWORD *)v80 == v84 )
        {
LABEL_150:
          v13 = *(unsigned int *)(v80 + 8);
          v225 += v13;
        }
        else
        {
          v131 = 1;
          v81 = 0;
          if ( v91 != -4096 )
          {
            while ( 1 )
            {
              if ( !v81 && v91 == -8192 )
                v81 = v80;
              v82 = (unsigned int)(v131 + 1);
              v90 = v89 & (v131 + v90);
              v80 = (__int64)&v88[3 * v90];
              v91 = *(_QWORD *)v80;
              if ( v84 == *(_QWORD *)v80 )
                goto LABEL_150;
              if ( v91 == -4096 )
                break;
              ++v131;
            }
            if ( v81 )
              v80 = v81;
          }
          v13 = (unsigned int)(*(_DWORD *)(v86 + 96) + 1);
          if ( 4 * (int)v13 >= 3 * v87 )
            goto LABEL_269;
          if ( v87 - *(_DWORD *)(v86 + 100) - (unsigned int)v13 <= v87 >> 3 )
          {
            v169 = (((((((((v89 | (v89 >> 1)) >> 2) | v89 | (v89 >> 1)) >> 4)
                      | ((v89 | (v89 >> 1)) >> 2)
                      | v89
                      | (v89 >> 1)) >> 8)
                    | ((((v89 | (v89 >> 1)) >> 2) | v89 | (v89 >> 1)) >> 4)
                    | ((v89 | (v89 >> 1)) >> 2)
                    | v89
                    | (v89 >> 1)) >> 16)
                  | ((((((v89 | (v89 >> 1)) >> 2) | v89 | (v89 >> 1)) >> 4)
                    | ((v89 | (v89 >> 1)) >> 2)
                    | v89
                    | (v89 >> 1)) >> 8)
                  | ((((v89 | (v89 >> 1)) >> 2) | v89 | (v89 >> 1)) >> 4)
                  | ((v89 | (v89 >> 1)) >> 2)
                  | v89
                  | (v89 >> 1))
                 + 1;
            if ( v169 < 0x40 )
              v169 = 64;
            *(_DWORD *)(v86 + 104) = v169;
            v170 = sub_22300B0(24LL * v169, 8, 64, v80, v81, v82);
            *(_QWORD *)(v86 + 88) = v170;
            if ( v88 )
            {
              *(_QWORD *)(v86 + 96) = 0;
              v171 = 3LL * v87;
              v172 = *(unsigned int *)(v86 + 104);
              v173 = (_QWORD *)(v170 + 24 * v172);
              v174 = (_QWORD *)v170;
              if ( (_QWORD *)v170 != v173 )
              {
                do
                {
                  *v174 = -4096;
                  v174 += 3;
                }
                while ( v173 != v174 );
              }
              v175 = v88;
              v176 = v172 - 1;
              do
              {
                v177 = *v175;
                if ( *v175 != -4096 && v177 != -8192 )
                {
                  if ( !(_DWORD)v172 )
                  {
                    *(_QWORD *)&dword_0 = *v175;
                    BUG();
                  }
                  v178 = v176 & (((unsigned int)v177 >> 9) ^ ((unsigned int)v177 >> 4));
                  v179 = v170 + 24LL * v178;
                  v180 = *(_QWORD *)v179;
                  if ( v177 != *(_QWORD *)v179 && v180 != -4096 )
                  {
                    v238 = 1;
                    v233 = 0;
                    while ( 1 )
                    {
                      if ( !v233 )
                      {
                        if ( v180 != -8192 )
                          v179 = 0;
                        v233 = v179;
                      }
                      v178 = v176 & (v238 + v178);
                      v179 = v170 + 24LL * v178;
                      v180 = *(_QWORD *)v179;
                      if ( v177 == *(_QWORD *)v179 )
                        break;
                      if ( v180 == -4096 )
                      {
                        if ( v233 )
                          v179 = v233;
                        break;
                      }
                      ++v238;
                    }
                  }
                  v181 = _mm_loadu_si128((const __m128i *)(v175 + 1));
                  *(_QWORD *)v179 = v177;
                  *(__m128i *)(v179 + 8) = v181;
                  ++*(_DWORD *)(v86 + 96);
                }
                v175 += 3;
              }
              while ( &v88[v171] != v175 );
              operator delete(v88, v171 * 8, 8);
              v170 = *(_QWORD *)(v86 + 88);
              v182 = *(_DWORD *)(v86 + 104);
              v13 = (unsigned int)(*(_DWORD *)(v86 + 96) + 1);
            }
            else
            {
              v214 = *(unsigned int *)(v86 + 104);
              *(_QWORD *)(v86 + 96) = 0;
              v182 = v214;
              v215 = (_QWORD *)(v170 + 24 * v214);
              if ( (_QWORD *)v170 != v215 )
              {
                v216 = (_QWORD *)v170;
                do
                {
                  *v216 = -4096;
                  v216 += 3;
                }
                while ( v215 != v216 );
              }
              v13 = 1;
            }
            if ( !v182 )
              goto LABEL_465;
            v183 = v182 - 1;
            v184 = v183 & (((unsigned int)v84 >> 9) ^ ((unsigned int)v84 >> 4));
            v80 = v170 + 24LL * v184;
            v132 = *(_QWORD *)v80;
            if ( v84 == *(_QWORD *)v80 )
              goto LABEL_250;
            if ( v132 == -4096 )
              goto LABEL_285;
            v185 = (__int64 *)(v170 + 24LL * v184);
            v186 = 1;
            v80 = 0;
            while ( 1 )
            {
              if ( v132 == -8192 && !v80 )
                v80 = (__int64)v185;
              v184 = v183 & (v186 + v184);
              v185 = (__int64 *)(v170 + 24LL * v184);
              v132 = *v185;
              if ( v84 == *v185 )
              {
                v80 = v170 + 24LL * v184;
                goto LABEL_250;
              }
              if ( v132 == -4096 )
                break;
              ++v186;
            }
            if ( !v80 )
            {
              v80 = v170 + 24LL * v184;
LABEL_285:
              *(_DWORD *)(v86 + 96) = v13;
              goto LABEL_252;
            }
          }
LABEL_249:
          v132 = *(_QWORD *)v80;
LABEL_250:
          *(_DWORD *)(v86 + 96) = v13;
          if ( v132 != -4096 )
            --*(_DWORD *)(v86 + 100);
LABEL_252:
          *(_QWORD *)v80 = v84;
          *(_QWORD *)(v80 + 8) = 0;
          *(_BYTE *)(v80 + 16) = 0;
        }
      }
    }
  }
LABEL_51:
  sub_E232A0(v244);
  if ( *(_BYTE *)(v234 + 60) )
  {
    v39 = sub_CEF620(v234, v13, v36, v37, v38);
    v40 = sub_AAE980(v226, v39);
    v42 = 0;
    v43 = v40;
    v44 = *(_DWORD *)(v234 + 20);
    if ( v44 != -1 )
      v42 = v43 * (v44 / *(_DWORD *)(v234 + 16));
  }
  else
  {
    v129 = sub_CEF5A0((__int64 *)v234);
    v42 = (unsigned int)sub_AAE980(v226, v129);
  }
  v252 = 32;
  v253 = 1;
  v45 = *(_QWORD *)(a2 + 8);
  v251 = (void *)(unsigned int)(v42 - v225);
  sub_D8FFE0(a1, (__int64)&v251, v45, v42, v41);
  if ( v252 > 0x40 && v251 )
    operator delete[](v251);
  v46 = 1;
LABEL_62:
  sub_E232A0(v240);
  return v46;
}
