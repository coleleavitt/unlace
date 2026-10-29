__int64 __fastcall sub_37E8A0(_QWORD *a1, unsigned int **a2, __int64 a3)
{
  unsigned int *v5; // rdx
  __int64 v6; // rsi
  __int64 *v7; // r14
  __int64 v8; // rcx
  __int64 *v9; // r13
  __int64 v10; // rdx
  _QWORD *v11; // rax
  unsigned int *v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // r15d
  _QWORD *v15; // r12
  __int64 *v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // r8d
  size_t v19; // rsi
  unsigned int v20; // r15d
  unsigned int *v21; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // r13
  __int64 *v24; // r14
  __int64 v25; // rsi
  bool v26; // zf
  unsigned int *v27; // r12
  unsigned int v28; // edx
  unsigned int v29; // ebp
  __int64 v30; // rbx
  char *v31; // rdi
  __int64 v33; // rsi
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  unsigned int *v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rcx
  char j; // al
  int v41; // r13d
  __int64 v42; // r14
  unsigned int v43; // r15d
  __int64 v44; // rax
  int v45; // edx
  unsigned int **v46; // rax
  unsigned int *v47; // rcx
  _QWORD *v48; // rdx
  unsigned int v49; // eax
  __int64 v50; // rsi
  int v51; // eax
  unsigned int **v52; // rsi
  __int64 v53; // rdi
  unsigned int *v54; // rcx
  _QWORD *v55; // rdx
  unsigned int v56; // eax
  __int64 v57; // rsi
  int v58; // eax
  unsigned int **v59; // rsi
  unsigned int *v60; // r10
  unsigned int *v61; // rdx
  __int64 v62; // rcx
  char v63; // al
  unsigned int v64; // eax
  int v65; // eax
  unsigned int **v66; // rdx
  _QWORD *v67; // rcx
  unsigned int v68; // eax
  __int64 v69; // rsi
  int v70; // eax
  unsigned int **v71; // rsi
  unsigned int *v72; // r10
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned int v77; // r10d
  size_t v78; // rsi
  unsigned int *v79; // rax
  __int64 v80; // rsi
  unsigned int v81; // r10d
  size_t v82; // rsi
  unsigned int *v83; // rax
  __int64 v84; // rsi
  unsigned int v85; // r10d
  size_t v86; // rsi
  unsigned int *v87; // rax
  __int64 v88; // rsi
  __int64 v89; // rax
  int v90; // ecx
  unsigned int **v91; // rax
  _QWORD *v92; // rax
  char v93; // bp
  unsigned int v94; // ebp
  int v95; // r8d
  int v96; // r9d
  __m128i *v97; // r13
  __int64 v98; // rax
  int v99; // ecx
  __int64 v100; // rdx
  int v101; // r15d
  int v102; // ebp
  int v103; // eax
  int v104; // ecx
  int v105; // r8d
  int v106; // r9d
  __int64 v107; // rsi
  __int64 v108; // rdi
  unsigned int *v109; // r14
  __int64 v110; // rax
  __int64 v111; // rbp
  void (__fastcall ***v112)(void *); // r13
  unsigned int *v113; // rcx
  unsigned int *v114; // r14
  unsigned int v115; // ecx
  unsigned int v116; // ebx
  __int64 v117; // r13
  unsigned int **v118; // rbx
  unsigned int **v119; // r13
  unsigned int *v120; // r12
  _QWORD *v121; // r14
  unsigned int v122; // eax
  _DWORD *v123; // rdx
  __int64 v124; // rax
  int v125; // ecx
  __int64 v126; // rsi
  __int64 v127; // r12
  unsigned int v128; // eax
  unsigned int *v129; // r15
  unsigned int v130; // esi
  unsigned int *v131; // r15
  unsigned int v132; // eax
  _DWORD *v133; // rcx
  __int64 *v134; // rbx
  unsigned __int64 v135; // r12
  __int64 v136; // rsi
  __int64 *v137; // rbx
  unsigned __int64 v138; // r12
  __int64 v139; // rsi
  __m128i si128; // xmm4
  __int64 v141; // rcx
  __int64 v142; // rax
  __int64 *v143; // rbx
  unsigned __int64 v144; // rbp
  __int64 v145; // rsi
  __int64 v146; // rdi
  __int64 *v147; // rbx
  unsigned __int64 v148; // rbp
  __int64 v149; // rsi
  __int64 v150; // rdi
  __int64 *v151; // rbx
  unsigned __int64 v152; // rbp
  __int64 v153; // rsi
  __int64 v154; // rdi
  _QWORD *v155; // rax
  unsigned int v156; // r13d
  _DWORD *v157; // rcx
  __int64 v158; // rbp
  _QWORD *v159; // rdi
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rsi
  __int64 v163; // rdi
  unsigned int v164; // r15d
  unsigned int v165; // ecx
  unsigned int *v166; // rax
  __int64 v167; // rsi
  __int64 v168; // rbx
  _QWORD *v169; // rdi
  __int64 v170; // rax
  __int64 v171; // rax
  _QWORD *v172; // rax
  __int64 v173; // rcx
  unsigned int v174; // edx
  int v175; // esi
  unsigned int **v176; // rdx
  __int64 v177; // rax
  unsigned int v178; // edx
  __int64 v179; // rax
  __int64 i; // rax
  __int64 k; // rax
  unsigned int v182; // ecx
  size_t v183; // rsi
  __int64 v184; // rax
  int v185; // ecx
  _DWORD *v186; // rdx
  __int64 v187; // rdx
  unsigned int v188; // r8d
  size_t v189; // rsi
  __int64 v190; // rax
  int v191; // r8d
  _DWORD *v192; // rdx
  _QWORD *v193; // rax
  char **exception; // rbp
  __int64 v195; // rdx
  char **v196; // rbp
  __int64 v197; // rdx
  char **v198; // rbp
  __int64 v199; // rdx
  char **v200; // rbx
  __int64 v201; // rdx
  char **v202; // rbp
  __int64 v203; // rdx
  struct _Unwind_Exception *v204; // [rsp+0h] [rbp-578h]
  __int64 v205; // [rsp+0h] [rbp-578h]
  int v206[2]; // [rsp+8h] [rbp-570h]
  int v207[2]; // [rsp+8h] [rbp-570h]
  int v208[4]; // [rsp+10h] [rbp-568h] BYREF
  int *v209; // [rsp+20h] [rbp-558h]
  __int64 v210; // [rsp+28h] [rbp-550h]
  unsigned int *v211; // [rsp+30h] [rbp-548h]
  char *v212; // [rsp+38h] [rbp-540h]
  unsigned int v213; // [rsp+40h] [rbp-538h]
  char v214; // [rsp+47h] [rbp-531h]
  char v215[8]; // [rsp+58h] [rbp-520h] BYREF
  __int64 v216; // [rsp+60h] [rbp-518h]
  _QWORD *v217; // [rsp+68h] [rbp-510h]
  __int64 v218; // [rsp+70h] [rbp-508h]
  _QWORD *v219; // [rsp+78h] [rbp-500h]
  int v220[2]; // [rsp+80h] [rbp-4F8h] BYREF
  _DWORD **v221; // [rsp+88h] [rbp-4F0h]
  char v222[16]; // [rsp+90h] [rbp-4E8h] BYREF
  __int64 v223; // [rsp+A0h] [rbp-4D8h]
  int v224[2]; // [rsp+B0h] [rbp-4C8h] BYREF
  __int64 v225; // [rsp+B8h] [rbp-4C0h]
  _BYTE v226[16]; // [rsp+D0h] [rbp-4A8h] BYREF
  char v227[16]; // [rsp+E0h] [rbp-498h] BYREF
  void *v228; // [rsp+F0h] [rbp-488h]
  __int64 v229; // [rsp+108h] [rbp-470h]
  __int64 v230; // [rsp+110h] [rbp-468h]
  __int64 v231; // [rsp+118h] [rbp-460h]
  __int64 *v232; // [rsp+120h] [rbp-458h]
  __int64 v233; // [rsp+128h] [rbp-450h]
  __int64 *v234; // [rsp+130h] [rbp-448h]
  __int64 v235; // [rsp+138h] [rbp-440h]
  __int64 *v236; // [rsp+140h] [rbp-438h]
  _QWORD v237[2]; // [rsp+148h] [rbp-430h]
  __m128i v238; // [rsp+158h] [rbp-420h]
  char v239[16]; // [rsp+198h] [rbp-3E0h] BYREF
  void *v240; // [rsp+1A8h] [rbp-3D0h]
  __int64 v241; // [rsp+1B8h] [rbp-3C0h] BYREF
  char *v242; // [rsp+1C8h] [rbp-3B0h] BYREF
  void *v243; // [rsp+2E0h] [rbp-298h]
  void *ptr; // [rsp+2F8h] [rbp-280h]
  __int64 v245[79]; // [rsp+300h] [rbp-278h] BYREF

  v210 = a3;
  v5 = *a2;
  v212 = v215;
  sub_EE4940(v215, "quasi-macros", v5);
  v6 = *a1;
  v214 = *((_BYTE *)*a2 + 123);
  sub_162A710(v222, v6);
  v7 = *(__int64 **)(v223 + 32);
  *(_QWORD *)v208 = *(_QWORD *)(v223 + 8);
  v8 = 2LL * *(unsigned int *)(v223 + 40);
  v9 = &v7[v8];
  if ( v7 != &v7[v8] )
  {
    while ( (unsigned __int64)*v7 <= 1 )
    {
      v7 += 2;
      if ( v9 == v7 )
        goto LABEL_31;
    }
    if ( v7 != v9 )
    {
      v10 = *v7;
      if ( *v7 )
        ++*(_DWORD *)(v10 + 8);
      *(_QWORD *)v206 = v10;
      v11 = (_QWORD *)sub_186B270(0x18u);
      *v11 = 2;
      v12 = (unsigned int *)(v11 + 1);
      v13 = *(_QWORD *)v206;
      v14 = 1;
      v15 = v11 + 1;
      while ( 1 )
      {
        v16 = v7 + 2;
        *(_QWORD *)v12 = v13;
        *((_DWORD *)v15 - 1) = v14;
        if ( v9 == v7 + 2 )
          break;
        while ( 1 )
        {
          v13 = *v16;
          v7 = v16;
          if ( (unsigned __int64)*v16 > 1 )
            break;
          v16 += 2;
          if ( v9 == v16 )
            goto LABEL_19;
        }
        if ( v16 == v9 )
          break;
        ++*(_DWORD *)(v13 + 8);
        v17 = *((_DWORD *)v15 - 1);
        if ( v17 == *((_DWORD *)v15 - 2) )
        {
          v18 = (3 * v17 + 1) >> 1;
          v19 = 8 * v18 + 8;
          v20 = v18;
          if ( 8 * v17 + 8 >= (unsigned int)v19 || v17 >= v18 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_C2B8E(v245, "Overflow encountered when expanding vector", v195);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v245);
            sub_233E40((__int64)v245);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          *(_QWORD *)v207 = v13;
          v21 = (unsigned int *)sub_186B300(v15 - 1, v19);
          v22 = v21[1];
          v15 = v21 + 2;
          v13 = *(_QWORD *)v207;
          *v21 = v20;
          v12 = &v21[2 * v22 + 2];
          v14 = v22 + 1;
        }
        else
        {
          v14 = v17 + 1;
          v12 = (unsigned int *)&v15[v17];
        }
      }
LABEL_19:
      v23 = (unsigned __int64)&v15[v14];
      if ( (unsigned __int64)v15 < v23 )
      {
        v24 = v15;
        do
        {
          while ( 1 )
          {
            v25 = *v24;
            if ( *v24 )
            {
              v26 = (*(_DWORD *)(v25 + 8))-- == 1;
              if ( v26 )
                break;
            }
            if ( (unsigned __int64)++v24 >= v23 )
              goto LABEL_25;
          }
          ++v24;
          sub_15D7BC0(*(_QWORD *)v208, v25);
        }
        while ( (unsigned __int64)v24 < v23 );
      }
LABEL_25:
      sub_186B220(v15 - 1);
      if ( v14 )
      {
        v27 = *a2;
        if ( *a2 )
          ++v27[8];
        v28 = *(_DWORD *)(v210 + 8);
        v29 = *(_DWORD *)(v210 + 12);
        if ( v28 >= v29 )
        {
          v158 = 2 * v29;
          v30 = sub_186B270(8 * v158);
          v28 = *(_DWORD *)(v210 + 8);
          v159 = *(_QWORD **)v210;
          if ( v28 )
          {
            if ( v28 - 1 <= 2 || (_QWORD *)v30 == v159 + 1 )
            {
              for ( i = 0; i != v28; ++i )
                *(_QWORD *)(v30 + i * 8) = v159[i];
            }
            else
            {
              v160 = 0;
              do
              {
                *(__m128i *)(v30 + v160 * 8) = _mm_loadu_si128((const __m128i *)&v159[v160]);
                v160 += 2;
              }
              while ( v160 != 2LL * (v28 >> 1) );
              if ( (v28 & 1) != 0 )
                *(_QWORD *)(v30 + 8LL * (v28 & 0xFFFFFFFE)) = v159[v28 & 0xFFFFFFFE];
            }
          }
          if ( v159 != (_QWORD *)(v210 + 16) && v159 )
          {
            sub_186B220(v159);
            v28 = *(_DWORD *)(v210 + 8);
          }
          v161 = v210;
          *(_QWORD *)v210 = v30;
          *(_DWORD *)(v161 + 12) = v158;
        }
        else
        {
          v30 = *(_QWORD *)v210;
        }
        v31 = v212;
        *(_QWORD *)(v30 + 8LL * v28) = v27;
        *(_DWORD *)(v210 + 8) = v28 + 1;
        return sub_EE4A00(v31);
      }
    }
  }
LABEL_31:
  sub_1380990(v245, *a1);
  v33 = *a1;
  *(_QWORD *)v208 = v226;
  sub_138E280((unsigned int)v226, v33, (unsigned int)v245, v34, v35, v36);
  v37 = *a2;
  v38 = *a1;
  v217 = nullptr;
  v219 = nullptr;
  v39 = *((_QWORD *)v37 + 9);
  v216 = v38;
  v218 = v38;
  *(_QWORD *)v220 = v38;
  v221 = nullptr;
  if ( !v39 )
    goto LABEL_106;
  for ( j = *(_BYTE *)(v39 + 3) >> 6; !j; j = *(_BYTE *)(v39 + 3) >> 6 )
    v39 = *(_QWORD *)(v39 + 16);
  if ( j == 1 )
    v41 = *(_DWORD *)(v39 + 4) + 1;
  else
    v41 = j == 2 ? *(_DWORD *)(v39 + 4) - 1 : *(_DWORD *)(v39 + 4);
  if ( !v41 )
    goto LABEL_106;
  v42 = 0;
  v43 = 0;
  v209 = v220;
  while ( 2 )
  {
    v53 = *(_QWORD *)v37;
    if ( (*((_BYTE *)v37 + 123) & 0x20) != 0 )
    {
      v54 = *(unsigned int **)(v53 + 864);
      goto LABEL_51;
    }
    v89 = *((_QWORD *)v37 + 9);
    v90 = 17;
    while ( 1 )
    {
      if ( *(char *)(v89 + 3) < 0 )
      {
        if ( *(_BYTE *)(v89 + 3) >> 6 != 2 )
        {
          v91 = (unsigned int **)(v42 + *(_QWORD *)(v89 + 16));
          goto LABEL_98;
        }
        goto LABEL_100;
      }
      if ( v43 == *(_DWORD *)(v89 + 4) )
        break;
LABEL_100:
      v89 = *(_QWORD *)(v89 + 16);
      if ( !--v90 )
      {
        v211 = v37;
        sub_233F80((__int64 *)(v53 + 616), v37 + 18);
        v91 = (unsigned int **)(v42 + *(_QWORD *)(*((_QWORD *)v211 + 9) + 16LL));
        goto LABEL_98;
      }
    }
    v91 = (unsigned int **)(v89 + 8);
LABEL_98:
    v54 = *v91;
LABEL_51:
    if ( v54 )
      ++v54[2];
    v55 = v217;
    if ( v217 )
    {
      v56 = *((_DWORD *)v217 - 1);
      if ( v56 == *((_DWORD *)v217 - 2) )
      {
        v85 = (3 * v56 + 1) >> 1;
        v86 = 8 * v85 + 8;
        if ( 8 * v56 + 8 >= (unsigned int)v86 || v56 >= v85 )
        {
          v198 = (char **)__cxa_allocate_exception(0x28u);
          sub_C2B8E((__int64 *)v224, "Overflow encountered when expanding vector", v199);
          *v198 = (char *)off_1C63128;
          sub_2333C0(v198 + 1, v224);
          sub_233E40((__int64)v224);
          __cxa_throw(v198, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v213 = (3 * v56 + 1) >> 1;
        v211 = v54;
        v87 = (unsigned int *)sub_186B300(v217 - 1, v86);
        v88 = v87[1];
        v55 = v87 + 2;
        v217 = v87 + 2;
        v54 = v211;
        *v87 = v213;
        LODWORD(v87) = v88;
        v59 = (unsigned int **)&v55[v88];
        v58 = (_DWORD)v87 + 1;
      }
      else
      {
        v57 = v56;
        v58 = v56 + 1;
        v59 = (unsigned int **)&v217[v57];
      }
    }
    else
    {
      v211 = v54;
      v155 = (_QWORD *)sub_186B270(0x18u);
      v55 = v155 + 1;
      *v155 = 2;
      v54 = v211;
      v58 = 1;
      v217 = v55;
      v59 = (unsigned int **)v55;
    }
    v60 = *a2;
    *v59 = v54;
    *((_DWORD *)v55 - 1) = v58;
    v61 = *((unsigned int **)v60 + 11);
    if ( !v61 )
      goto LABEL_68;
    v62 = *((_QWORD *)v60 + 11);
    v63 = *((_BYTE *)v61 + 3) >> 6;
    if ( !v63 )
    {
      do
      {
        v62 = *(_QWORD *)(v62 + 16);
        v63 = *(_BYTE *)(v62 + 3) >> 6;
      }
      while ( !v63 );
      if ( v63 == 1 )
        goto LABEL_76;
LABEL_59:
      if ( v63 == 2 )
        v64 = *(_DWORD *)(v62 + 4) - 1;
      else
        v64 = *(_DWORD *)(v62 + 4);
      if ( v43 < v64 )
        goto LABEL_62;
LABEL_77:
      v67 = v219;
      v61 = nullptr;
      if ( v219 )
        goto LABEL_69;
      goto LABEL_78;
    }
    if ( v63 != 1 )
      goto LABEL_59;
LABEL_76:
    if ( v43 >= *(_DWORD *)(v62 + 4) + 1 )
      goto LABEL_77;
LABEL_62:
    v65 = 17;
    while ( 2 )
    {
      if ( *((char *)v61 + 3) < 0 )
      {
        if ( *((_BYTE *)v61 + 3) >> 6 != 2 )
        {
          v66 = (unsigned int **)(v42 + *((_QWORD *)v61 + 2));
          goto LABEL_66;
        }
LABEL_83:
        v61 = *((unsigned int **)v61 + 2);
        if ( !--v65 )
        {
          v76 = *(_QWORD *)v60;
          v211 = v60;
          sub_233F80((__int64 *)(v76 + 616), v60 + 22);
          v66 = (unsigned int **)(v42 + *(_QWORD *)(*((_QWORD *)v211 + 11) + 16LL));
          goto LABEL_66;
        }
        continue;
      }
      break;
    }
    if ( v43 != v61[1] )
      goto LABEL_83;
    v66 = (unsigned int **)(v61 + 2);
LABEL_66:
    v61 = *v66;
    if ( v61 )
      ++v61[2];
LABEL_68:
    v67 = v219;
    if ( !v219 )
    {
LABEL_78:
      v211 = v61;
      v74 = (_QWORD *)sub_186B270(0x18u);
      v67 = v74 + 1;
      *v74 = 2;
      v61 = v211;
      v70 = 1;
      v219 = v67;
      v71 = (unsigned int **)v67;
      goto LABEL_71;
    }
LABEL_69:
    v68 = *((_DWORD *)v67 - 1);
    if ( v68 == *((_DWORD *)v67 - 2) )
    {
      v81 = (3 * v68 + 1) >> 1;
      v82 = 8 * v81 + 8;
      if ( 8 * v68 + 8 >= (unsigned int)v82 || v68 >= v81 )
      {
        v196 = (char **)__cxa_allocate_exception(0x28u);
        sub_C2B8E((__int64 *)v224, "Overflow encountered when expanding vector", v197);
        *v196 = (char *)off_1C63128;
        sub_2333C0(v196 + 1, v224);
        sub_233E40((__int64)v224);
        __cxa_throw(v196, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v213 = (3 * v68 + 1) >> 1;
      v211 = v61;
      v83 = (unsigned int *)sub_186B300(v67 - 1, v82);
      v84 = v83[1];
      v67 = v83 + 2;
      v219 = v83 + 2;
      v61 = v211;
      *v83 = v213;
      LODWORD(v83) = v84;
      v71 = (unsigned int **)&v67[v84];
      v70 = (_DWORD)v83 + 1;
    }
    else
    {
      v69 = v68;
      v70 = v68 + 1;
      v71 = (unsigned int **)&v67[v69];
    }
LABEL_71:
    v72 = *a2;
    *v71 = v61;
    *((_DWORD *)v67 - 1) = v70;
    if ( (*((_BYTE *)v72 + 123) & 0x10) == 0 )
    {
      v48 = v221;
      v47 = nullptr;
      if ( v221 )
        goto LABEL_45;
      goto LABEL_73;
    }
    v44 = *((_QWORD *)v72 + 13);
    v45 = 17;
    while ( 2 )
    {
      if ( *(char *)(v44 + 3) < 0 )
      {
        if ( *(_BYTE *)(v44 + 3) >> 6 != 2 )
        {
          v46 = (unsigned int **)(v42 + *(_QWORD *)(v44 + 16));
          goto LABEL_42;
        }
LABEL_80:
        v44 = *(_QWORD *)(v44 + 16);
        if ( !--v45 )
        {
          v75 = *(_QWORD *)v72;
          v211 = v72;
          sub_236900((_QWORD *)(v75 + 672), (__int64 *)v72 + 13);
          v46 = (unsigned int **)(v42 + *(_QWORD *)(*((_QWORD *)v211 + 13) + 16LL));
          goto LABEL_42;
        }
        continue;
      }
      break;
    }
    if ( v43 != *(_DWORD *)(v44 + 4) )
      goto LABEL_80;
    v46 = (unsigned int **)(v44 + 8);
LABEL_42:
    v47 = *v46;
    if ( *v46 )
      *v47 = (*v47 + 1) & 0x3FFFFFFF | *v47 & 0xC0000000;
    v48 = v221;
    if ( !v221 )
    {
LABEL_73:
      v211 = v47;
      v73 = (_QWORD *)sub_186B270(0x18u);
      v48 = v73 + 1;
      *v73 = 2;
      v47 = v211;
      v51 = 1;
      v221 = (_DWORD **)v48;
      v52 = (unsigned int **)v48;
      goto LABEL_47;
    }
LABEL_45:
    v49 = *((_DWORD *)v48 - 1);
    if ( v49 == *((_DWORD *)v48 - 2) )
    {
      v77 = (3 * v49 + 1) >> 1;
      v78 = 8 * v77 + 8;
      if ( 8 * v49 + 8 >= (unsigned int)v78 || v49 >= v77 )
      {
        v202 = (char **)__cxa_allocate_exception(0x28u);
        sub_C2B8E((__int64 *)v224, "Overflow encountered when expanding vector", v203);
        *v202 = (char *)off_1C63128;
        sub_2333C0(v202 + 1, v224);
        sub_233E40((__int64)v224);
        __cxa_throw(v202, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v213 = (3 * v49 + 1) >> 1;
      v211 = v47;
      v79 = (unsigned int *)sub_186B300(v48 - 1, v78);
      v80 = v79[1];
      v48 = v79 + 2;
      v221 = (_DWORD **)(v79 + 2);
      v47 = v211;
      *v79 = v213;
      LODWORD(v79) = v80;
      v52 = (unsigned int **)&v48[v80];
      v51 = (_DWORD)v79 + 1;
    }
    else
    {
      v50 = v49;
      v51 = v49 + 1;
      v52 = (unsigned int **)&v48[v50];
    }
LABEL_47:
    ++v43;
    *v52 = v47;
    v42 += 8;
    *((_DWORD *)v48 - 1) = v51;
    if ( v43 != v41 )
    {
      v37 = *a2;
      continue;
    }
    break;
  }
  v38 = *a1;
LABEL_106:
  while ( 1 )
  {
    sub_EE4F40(v38);
    if ( !(unsigned __int8)sub_1391D70(v208[0]) )
      break;
    v38 = *a1;
  }
  sub_ED2DA0(*a2);
  v92 = v217;
  if ( v217 )
  {
    v93 = v214 & 0x10;
    if ( (v214 & 8) != 0 )
    {
      v156 = 0;
      do
      {
        if ( v156 >= *((_DWORD *)v92 - 1) )
          break;
        v157 = nullptr;
        if ( v93 )
        {
          v157 = v221;
          if ( v221 )
          {
            if ( v156 >= *((_DWORD *)v221 - 1) )
              v157 = nullptr;
            else
              v157 = v221[v156];
          }
        }
        sub_EDB570(*a2, v92[v156], v219[v156], v157);
        v92 = v217;
        ++v156;
      }
      while ( v217 );
    }
    else
    {
      v26 = v93 == 0;
      v94 = 0;
      if ( v26 )
      {
        do
        {
          if ( v94 >= *((_DWORD *)v92 - 1) )
            break;
          sub_EDB570(*a2, v92[v94], 0, 0);
          v92 = v217;
          ++v94;
        }
        while ( v217 );
      }
      else
      {
        do
        {
          if ( v94 >= *((_DWORD *)v92 - 1) )
            break;
          v133 = v221;
          if ( v221 )
          {
            if ( v94 < *((_DWORD *)v221 - 1) )
              v133 = v221[v94];
            else
              v133 = nullptr;
          }
          sub_EDB570(*a2, v92[v94], 0, v133);
          v92 = v217;
          ++v94;
        }
        while ( v217 );
      }
    }
  }
  v97 = (__m128i *)sub_186B270(0x50u);
  v98 = v245[0];
  v99 = 1935766897;
  v97->m128i_i32[2] = 0;
  v97[1].m128i_i8[8] = 1;
  v97->m128i_i64[0] = (__int64)&off_1C60CE8;
  v100 = v245[51];
  v97[1].m128i_i64[0] = 0;
  strcpy(&v97[3].m128i_i8[8], "quasi_macros");
  v97[3].m128i_i64[0] = 12;
  v97[4].m128i_i64[1] = 0;
  v97[2] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v98, (__m128i)(unsigned __int64)&v97[3].m128i_u64[1]);
  if ( v100 )
  {
    v101 = *(_DWORD *)(v100 - 4);
    if ( v101 )
    {
      v102 = 0;
      while ( 1 )
      {
        *(_QWORD *)v224 = 0;
        v225 = v98;
        v103 = sub_1380690((int)v245, v102, (int)v224, v99, v95, v96, v204);
        sub_13333D0((_DWORD)v97, v103, v224[0], v104, v105, v106, v205);
        v107 = *(_QWORD *)v224;
        if ( *(_QWORD *)v224
          && (v108 = v225, v26 = *(_DWORD *)(*(_QWORD *)v224 + 8LL) == 1, --*(_DWORD *)(*(_QWORD *)v224 + 8LL), v26) )
        {
          sub_15D7BC0(v108, v107);
          if ( ++v102 == v101 )
            break;
        }
        else if ( ++v102 == v101 )
        {
          break;
        }
        v98 = v245[0];
      }
    }
  }
  v109 = *a2;
  v110 = sub_1336AB0(*((_QWORD *)*a2 + 1), v97);
  v111 = v110;
  if ( v110 )
    ++*(_DWORD *)(v110 + 8);
  v112 = *((void (__fastcall ****)(void *))v109 + 1);
  if ( v112 )
  {
    v26 = (*((_DWORD *)v112 + 2))-- == 1;
    if ( v26 )
    {
      (**v112)(v112);
      sub_186B220(v112);
    }
  }
  v113 = *a2;
  *((_QWORD *)v109 + 1) = v111;
  v113[30] = (v113[30] + 1) & 0x3FFFFFF | v113[30] & 0xFC000000;
  v114 = *a2;
  if ( *a2 )
    ++v114[8];
  v115 = *(_DWORD *)(v210 + 8);
  v116 = *(_DWORD *)(v210 + 12);
  if ( v115 >= v116 )
  {
    v168 = 2 * v116;
    v117 = sub_186B270(8 * v168);
    v115 = *(_DWORD *)(v210 + 8);
    v169 = *(_QWORD **)v210;
    if ( v115 )
    {
      if ( v115 - 1 <= 2 || (_QWORD *)v117 == v169 + 1 )
      {
        for ( k = 0; k != v115; ++k )
          *(_QWORD *)(v117 + k * 8) = v169[k];
      }
      else
      {
        v170 = 0;
        do
        {
          *(__m128i *)(v117 + v170 * 8) = _mm_loadu_si128((const __m128i *)&v169[v170]);
          v170 += 2;
        }
        while ( v170 != 2LL * (v115 >> 1) );
        if ( (v115 & 1) != 0 )
          *(_QWORD *)(v117 + 8LL * (v115 & 0xFFFFFFFE)) = v169[v115 & 0xFFFFFFFE];
      }
    }
    if ( v169 != (_QWORD *)(v210 + 16) && v169 )
    {
      sub_186B220(v169);
      v115 = *(_DWORD *)(v210 + 8);
    }
    v171 = v210;
    *(_QWORD *)v210 = v117;
    *(_DWORD *)(v171 + 12) = v168;
  }
  else
  {
    v117 = *(_QWORD *)v210;
  }
  v118 = v221;
  *(_QWORD *)(v117 + 8LL * v115) = v114;
  *(__m128i *)v208 = _mm_unpacklo_epi64(
                       (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                               + 64),
                       (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  *(_DWORD *)(v210 + 8) = v115 + 1;
  if ( v118 )
  {
    v119 = &v118[*((unsigned int *)v118 - 1)];
    if ( v118 >= v119 )
      goto LABEL_152;
    do
    {
      v120 = *v118;
      if ( *v118 )
      {
        v121 = *(_QWORD **)v220;
        v122 = (*v120 + 0x3FFFFFFF) & 0x3FFFFFFF | *v120 & 0xC0000000;
        *v120 = v122;
        if ( (v122 & 0x3FFFFFFF) == 0 )
        {
          v123 = (_DWORD *)v121[83];
          if ( v123 )
          {
            v124 = (unsigned int)*(v123 - 1);
            if ( (_DWORD)v124 != *(v123 - 2) )
            {
              v125 = v124 + 1;
              *(_QWORD *)&v123[2 * v124] = v120;
              *(v123 - 1) = v124 + 1;
              goto LABEL_138;
            }
            v164 = (unsigned int)(3 * v124 + 1) >> 1;
            v165 = 8 * v164 + 8;
            if ( 8 * (int)v124 + 8 < v165 && (unsigned int)v124 < v164 )
            {
              v166 = (unsigned int *)sub_186B300(v123 - 2, v165);
              v167 = v166[1];
              v123 = v166 + 2;
              v121[83] = v166 + 2;
              v125 = v167 + 1;
              *v166 = v164;
              *(_QWORD *)&v166[2 * v167 + 2] = v120;
              v166[1] = v167 + 1;
              goto LABEL_138;
            }
LABEL_281:
            v200 = (char **)__cxa_allocate_exception(0x28u);
            sub_C2B8E((__int64 *)v224, "Overflow encountered when expanding vector", v201);
            *v200 = (char *)off_1C63128;
            sub_2333C0(v200 + 1, v224);
            sub_233E40((__int64)v224);
            __cxa_throw(v200, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v179 = sub_186B270(0x18u);
          v125 = 1;
          v123 = (_DWORD *)(v179 + 8);
          *(_QWORD *)v179 = 2;
          v121[83] = v179 + 8;
          *(_QWORD *)(v179 + 8) = v120;
          *(_DWORD *)(v179 + 4) = 1;
LABEL_138:
          while ( v125 )
          {
            v126 = (unsigned int)(v125 - 1);
            v127 = *(_QWORD *)&v123[2 * v126];
            v128 = v125 - 1;
            *(v123 - 1) = v126;
            if ( *(char *)(v127 + 3) < 0 )
            {
              v162 = *(_QWORD *)(v127 + 8);
              if ( v162 )
              {
                v163 = v121[81];
                v26 = (*(_DWORD *)(v162 + 8))-- == 1;
                if ( v26 )
                  sub_15D7BC0(v163, v162);
              }
              sub_17E9C40(v121[82], 16, v127);
            }
            else
            {
              v129 = *(unsigned int **)(v127 + 8);
              v130 = (*v129 + 0x3FFFFFFF) & 0x3FFFFFFF | *v129 & 0xC0000000;
              *v129 = v130;
              if ( (v130 & 0x3FFFFFFF) == 0 )
              {
                if ( v128 == *(v123 - 2) )
                {
                  v188 = (3 * v128 + 1) >> 1;
                  v189 = 8 * v188 + 8;
                  if ( 8 * v125 >= (unsigned int)v189 )
                    goto LABEL_281;
                  LODWORD(v209) = (3 * v128 + 1) >> 1;
                  if ( v128 >= v188 )
                    goto LABEL_281;
                  v190 = sub_186B300(v123 - 2, v189);
                  v191 = (int)v209;
                  v192 = (_DWORD *)v190;
                  v177 = v190 + 8;
                  v121[83] = v177;
                  *v192 = v191;
                }
                else
                {
                  v177 = v121[83];
                }
                v178 = *(_DWORD *)(v177 - 4);
                *(_QWORD *)(v177 + 8LL * v178) = v129;
                *(_DWORD *)(v177 - 4) = v178 + 1;
              }
              v131 = *(unsigned int **)(v127 + 16);
              v132 = (*v131 + 0x3FFFFFFF) & 0x3FFFFFFF | *v131 & 0xC0000000;
              *v131 = v132;
              if ( (v132 & 0x3FFFFFFF) == 0 )
              {
                v172 = (_QWORD *)v121[83];
                if ( v172 )
                {
                  v173 = *((unsigned int *)v172 - 1);
                  v174 = *((_DWORD *)v172 - 2);
                  if ( v174 == (_DWORD)v173 )
                  {
                    v182 = (3 * v174 + 1) >> 1;
                    v183 = 8 * v182 + 8;
                    if ( 8 * v174 + 8 >= (unsigned int)v183 )
                      goto LABEL_281;
                    LODWORD(v209) = (3 * v174 + 1) >> 1;
                    if ( v174 >= v182 )
                      goto LABEL_281;
                    v184 = sub_186B300(v172 - 1, v183);
                    v185 = (int)v209;
                    v186 = (_DWORD *)v184;
                    v172 = (_QWORD *)(v184 + 8);
                    v121[83] = v172;
                    *v186 = v185;
                    v187 = (unsigned int)v186[1];
                    v175 = v187 + 1;
                    v176 = (unsigned int **)&v172[v187];
                  }
                  else
                  {
                    v175 = v173 + 1;
                    v176 = (unsigned int **)&v172[v173];
                  }
                }
                else
                {
                  v193 = (_QWORD *)sub_186B270(0x18u);
                  v175 = 1;
                  *v193 = 2;
                  v172 = v193 + 1;
                  v121[83] = v172;
                  v176 = (unsigned int **)v172;
                }
                *v176 = v131;
                *((_DWORD *)v172 - 1) = v175;
              }
              sub_17E9C40(v121[82], 24, v127);
            }
            v123 = (_DWORD *)v121[83];
            if ( !v123 )
              break;
            v125 = *(v123 - 1);
          }
        }
      }
      ++v118;
    }
    while ( v118 < v119 );
    v118 = v221;
    if ( v221 )
LABEL_152:
      sub_186B220(v118 - 1);
  }
  v134 = v219;
  if ( v219 )
  {
    v135 = (unsigned __int64)&v219[*((unsigned int *)v219 - 1)];
    if ( (unsigned __int64)v219 >= v135 )
      goto LABEL_161;
    do
    {
      while ( 1 )
      {
        v136 = *v134;
        if ( *v134 )
        {
          v26 = (*(_DWORD *)(v136 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( (unsigned __int64)++v134 >= v135 )
          goto LABEL_160;
      }
      sub_15D7BC0(v218, v136);
      ++v134;
    }
    while ( (unsigned __int64)v134 < v135 );
LABEL_160:
    v134 = v219;
    if ( v219 )
LABEL_161:
      sub_186B220(v134 - 1);
  }
  v137 = v217;
  if ( v217 )
  {
    v138 = (unsigned __int64)&v217[*((unsigned int *)v217 - 1)];
    if ( (unsigned __int64)v217 >= v138 )
      goto LABEL_170;
    do
    {
      while ( 1 )
      {
        v139 = *v137;
        if ( *v137 )
        {
          v26 = (*(_DWORD *)(v139 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( (unsigned __int64)++v137 >= v138 )
          goto LABEL_169;
      }
      sub_15D7BC0(v216, v139);
      ++v137;
    }
    while ( (unsigned __int64)v137 < v138 );
LABEL_169:
    v137 = v217;
    if ( v217 )
LABEL_170:
      sub_186B220(v137 - 1);
  }
  if ( ptr )
    sub_186B220(ptr);
  if ( v243 )
    sub_186B220(v243);
  si128 = _mm_load_si128((const __m128i *)v208);
  v237[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v242 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v238 = si128;
  if ( v240 != &v241 )
    operator delete(v240, v241 + 1);
  v238.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v239);
  *(_QWORD *)((char *)v237
            + *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL)) = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  v141 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  v238.m128i_i64[0] = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  *(__int64 *)((char *)v238.m128i_i64 + *(_QWORD *)(v238.m128i_i64[0] - 24)) = v141;
  v142 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v237[0] = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  *(_QWORD *)((char *)v237 + *(_QWORD *)(v237[0] - 24LL)) = v142;
  v237[1] = 0;
  v242 = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)&v242);
  v143 = v236;
  if ( v236 )
  {
    v144 = (unsigned __int64)&v236[*((unsigned int *)v236 - 1)];
    if ( (unsigned __int64)v236 >= v144 )
      goto LABEL_185;
    do
    {
      while ( 1 )
      {
        v145 = *v143;
        if ( *v143 )
        {
          v146 = v235;
          v26 = (*(_DWORD *)(v145 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( (unsigned __int64)++v143 >= v144 )
          goto LABEL_184;
      }
      sub_15D7BC0(v146, v145);
      ++v143;
    }
    while ( (unsigned __int64)v143 < v144 );
LABEL_184:
    v143 = v236;
    if ( v236 )
LABEL_185:
      sub_186B220(v143 - 1);
  }
  v147 = v234;
  if ( v234 )
  {
    v148 = (unsigned __int64)&v234[*((unsigned int *)v234 - 1)];
    if ( (unsigned __int64)v234 >= v148 )
      goto LABEL_194;
    do
    {
      while ( 1 )
      {
        v149 = *v147;
        if ( *v147 )
        {
          v150 = v233;
          v26 = (*(_DWORD *)(v149 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( (unsigned __int64)++v147 >= v148 )
          goto LABEL_193;
      }
      sub_15D7BC0(v150, v149);
      ++v147;
    }
    while ( (unsigned __int64)v147 < v148 );
LABEL_193:
    v147 = v234;
    if ( v234 )
LABEL_194:
      sub_186B220(v147 - 1);
  }
  v151 = v232;
  if ( v232 )
  {
    v152 = (unsigned __int64)&v232[*((unsigned int *)v232 - 1)];
    if ( (unsigned __int64)v232 >= v152 )
      goto LABEL_203;
    do
    {
      while ( 1 )
      {
        v153 = *v151;
        if ( *v151 )
        {
          v154 = v231;
          v26 = (*(_DWORD *)(v153 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( (unsigned __int64)++v151 >= v152 )
          goto LABEL_202;
      }
      sub_15D7BC0(v154, v153);
      ++v151;
    }
    while ( (unsigned __int64)v151 < v152 );
LABEL_202:
    v151 = v232;
    if ( v232 )
LABEL_203:
      sub_186B220(v151 - 1);
  }
  if ( v230 )
    sub_186B220((void *)(v230 - 8));
  if ( v229 )
    sub_186B220((void *)(v229 - 8));
  if ( v228 )
    sub_186B220(v228);
  sub_14B63F0(v227);
  sub_37E1C0(v245);
  return sub_EE4A00(v212);
}

