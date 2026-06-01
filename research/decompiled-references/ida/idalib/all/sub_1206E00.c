void __fastcall sub_1206E00(__int64 a1, __int64 a2, __int64 a3, char **a4, __int64 a5, char **a6, double a7, double a8)
{
  char **v8; // rbx
  _DWORD *v9; // r13
  _BYTE *v10; // rbp
  char **v11; // rax
  unsigned __int64 v12; // rax
  char *v13; // rdx
  char *v14; // r12
  char *v15; // r15
  __int64 v16; // rax
  void **v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  char *v22; // rdx
  char *v23; // r15
  char *v24; // r14
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  int v37; // eax
  unsigned __int64 v38; // rax
  char *v39; // rdx
  char *v40; // r14
  char *v41; // r15
  unsigned __int64 v42; // rax
  char *v43; // rdx
  char *v44; // r15
  char **v45; // rdx
  __m128i v46; // xmm0
  char **v47; // rbp
  char *v48; // rbx
  _BYTE *v49; // r14
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  char *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  void **v59; // rdx
  char **v60; // rbp
  char **v61; // rbx
  char **v62; // rax
  char **v63; // rdi
  char v64; // al
  char **v65; // r8
  __int64 v66; // r14
  size_t v67; // rax
  const char *v68; // rdi
  char *v69; // rax
  char **v70; // rax
  __int64 v71; // rax
  char **v72; // r8
  __int64 v73; // r14
  __int64 v74; // rcx
  unsigned __int64 v75; // rdx
  char **v76; // rax
  __int64 v77; // rax
  unsigned __int64 v78; // rdx
  char **v79; // rcx
  char *v80; // r14
  __int64 v81; // rax
  char **v82; // rdx
  char **v83; // rcx
  char **v84; // r8
  char ***v85; // rbx
  char *v86; // rax
  char ***v87; // r15
  _BYTE *v88; // rbp
  char **v89; // r14
  __int64 v90; // rsi
  char v91; // al
  __int64 v92; // rcx
  __int64 v93; // r8
  int v94; // eax
  unsigned __int64 v95; // rax
  char *v96; // rdx
  char *v97; // r15
  char *v98; // r14
  __int64 v99; // rax
  unsigned __int64 v100; // rax
  char *v101; // rcx
  char *v102; // r15
  char **v103; // rcx
  char **v104; // rbp
  char *v105; // rbx
  _BYTE *v106; // r14
  __int64 v107; // rsi
  __int64 v108; // rax
  char v109; // r8
  __int64 v110; // rax
  __int64 v111; // rsi
  unsigned __int64 v112; // rdx
  __int64 v113; // rax
  unsigned __int64 v114; // rdx
  __int64 v115; // rax
  unsigned __int64 v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  unsigned __int64 v120; // rdx
  char **v121; // rcx
  char **v122; // r8
  char **v123; // rax
  char ***v124; // rbx
  char **v125; // rcx
  char *v126; // rax
  char ***v127; // r15
  char **v128; // rbp
  char **v129; // r14
  __int64 v130; // rsi
  char v131; // al
  unsigned __int64 v132; // rax
  char *v133; // rdx
  char *v134; // r15
  char **v135; // rdx
  __m128 v136; // xmm0
  char **v137; // rbp
  char *v138; // rbx
  char **v139; // r14
  __int64 v140; // rsi
  char *v141; // rdx
  char **v142; // rax
  __int64 v143; // rcx
  unsigned __int64 v144; // rdx
  char **v145; // rax
  __int64 v146; // rcx
  unsigned __int64 v147; // rdx
  char **v148; // rdx
  char **v149; // rcx
  void **v150; // r8
  char ***v151; // rbx
  char *v152; // rax
  char ***v153; // r15
  char **v154; // rbp
  char **v155; // r14
  __int64 v156; // rsi
  char v157; // al
  __int64 v158; // rbx
  const __m128i *v159; // r13
  __int64 v160; // r14
  __int64 v161; // r15
  __int64 v162; // rdx
  __int64 v163; // rsi
  int v164; // eax
  __int64 v165; // rcx
  __int64 v166; // rsi
  _QWORD *v167; // rbx
  void (__fastcall *v168)(_QWORD *); // rax
  __int64 v169; // r13
  __int64 v170; // rbp
  void *v171; // rdi
  _QWORD *v172; // rdi
  _QWORD *v173; // rdi
  void **v174; // r13
  void **v175; // rbp
  void *v176; // rdi
  _QWORD *v177; // rdi
  __int64 v178; // rax
  unsigned __int64 v179; // rdx
  __int64 v180; // rax
  unsigned __int64 v181; // rdx
  __int64 v182; // rax
  __int64 v183; // rcx
  unsigned __int64 v184; // rdx
  unsigned __int64 v185; // rdx
  unsigned __int64 v186; // rdx
  unsigned __int64 v187; // rdx
  unsigned __int64 v188; // rdx
  unsigned __int64 v189; // rdx
  unsigned __int64 v190; // rdx
  unsigned __int64 v191; // rdx
  unsigned __int64 v192; // rdx
  unsigned __int64 v193; // rdx
  unsigned __int64 v194; // rdx
  unsigned __int64 v195; // rdx
  unsigned __int64 v196; // rdx
  unsigned __int64 v197; // rdx
  unsigned __int64 v198; // rdx
  __int64 v199; // r14
  unsigned __int64 v200; // rbx
  __int64 v201; // rdi
  __int64 v202; // rax
  unsigned __int64 v203; // rdx
  __int64 v204; // rax
  unsigned __int64 v205; // rdx
  __int64 v206; // rax
  __int64 v207; // rax
  char *v208; // rdx
  __int64 v209; // rax
  unsigned __int64 v210; // rax
  char *v211; // rsi
  __int64 v212; // rdx
  char **v213; // rax
  char **v214; // rdx
  char **v215; // r15
  char **v216; // r14
  char *v217; // rbx
  char **v218; // r15
  char *v219; // rax
  char **v220; // r14
  char *v221; // rbx
  char **v222; // [rsp+0h] [rbp-278h] BYREF
  __int64 v223; // [rsp+8h] [rbp-270h]
  char **v224; // [rsp+10h] [rbp-268h]
  __int64 v225; // [rsp+18h] [rbp-260h]
  __int64 v226; // [rsp+20h] [rbp-258h]
  __int64 v227; // [rsp+28h] [rbp-250h]
  __int64 v228; // [rsp+30h] [rbp-248h]
  void **v229; // [rsp+38h] [rbp-240h]
  char **v230; // [rsp+40h] [rbp-238h] BYREF
  char **v231; // [rsp+48h] [rbp-230h]
  _BYTE *v232; // [rsp+50h] [rbp-228h]
  bool v233; // [rsp+5Dh] [rbp-21Bh]
  char v234; // [rsp+5Eh] [rbp-21Ah]
  char v235; // [rsp+5Fh] [rbp-219h]
  void *v236[2]; // [rsp+60h] [rbp-218h] BYREF
  _QWORD v237[2]; // [rsp+70h] [rbp-208h] BYREF
  __int16 v238; // [rsp+80h] [rbp-1F8h]
  void *v239; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v240; // [rsp+98h] [rbp-1E0h]
  _BYTE v241[128]; // [rsp+A0h] [rbp-1D8h] BYREF
  _BYTE ptr[24]; // [rsp+120h] [rbp-158h] BYREF
  int v243; // [rsp+138h] [rbp-140h] BYREF
  __int16 v244; // [rsp+140h] [rbp-138h]

  v8 = a6;
  v9 = *(_DWORD **)(a1 + 24);
  v10 = ptr;
  v227 = a1;
  v11 = *((char ***)v9 + 1);
  v225 = a2;
  v228 = a3;
  v222 = v11;
  LODWORD(v11) = v9[12];
  v224 = a4;
  v226 = a5;
  LODWORD(v230) = (_DWORD)v11;
  *(_DWORD *)ptr = 3264;
  v12 = sub_21B6DA0(a6, ptr, 1);
  v13 = v8[1];
  v14 = &v13[8 * (unsigned int)v12];
  v15 = &v13[8 * HIDWORD(v12)];
  if ( v14 == v15 )
    goto LABEL_5;
  while ( !*(_QWORD *)v14 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v14, 3264) )
  {
    v14 += 8;
    if ( v15 == v14 )
      goto LABEL_5;
  }
  if ( v15 == v14 )
  {
LABEL_5:
    LOBYTE(v229) = 1;
    if ( !sub_10DCD30((__int64)v8, 0xC3Cu) )
      LOBYTE(v229) = (*(__int64 (__fastcall **)(_DWORD *, char **))(*(_QWORD *)v9 + 368LL))(v9, v8);
  }
  else
  {
    do
    {
      v16 = *(_QWORD *)v14;
      if ( *(_QWORD *)(*(_QWORD *)v14 + 16LL) )
        v16 = *(_QWORD *)(*(_QWORD *)v14 + 16LL);
      v14 += 8;
      *(_BYTE *)(v16 + 44) |= 1u;
      if ( v14 == v15 )
        break;
      while ( !*(_QWORD *)v14 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v14, 3264) )
      {
        v14 += 8;
        if ( v15 == v14 )
          goto LABEL_14;
      }
    }
    while ( v15 != v14 );
LABEL_14:
    LOBYTE(v229) = 0;
  }
  v17 = &v239;
  v240 = 0x1000000000LL;
  v239 = v241;
  sub_21B7CF0(v8, 36);
  sub_21B7CF0(v8, 345);
  sub_21B7CF0(v8, 3480);
  if ( v222[62] )
  {
    sub_C05100((__int64)ptr, "--sysroot=", (__int64)(v222 + 61));
    v182 = (*((__int64 (__fastcall **)(char **, _QWORD, _QWORD))*v8 + 2))(v8, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
    v183 = (unsigned int)v240;
    v184 = (unsigned int)v240 + 1LL;
    if ( v184 > HIDWORD(v240) )
    {
      v231 = (char **)v182;
      sub_2237220(&v239, v241, v184, 8);
      v183 = (unsigned int)v240;
      v182 = (__int64)v231;
    }
    *((_QWORD *)v239 + v183) = v182;
    v18 = (unsigned int)(v240 + 1);
    LODWORD(v240) = v240 + 1;
    if ( *(_BYTE **)ptr == &ptr[16] )
      goto LABEL_17;
    operator delete(*(void **)ptr);
  }
  v18 = (unsigned int)v240;
LABEL_17:
  v19 = v18 + 1;
  v20 = HIDWORD(v240);
  if ( (_BYTE)v229 )
  {
    if ( HIDWORD(v240) < v19 )
    {
      sub_2237220(&v239, v241, v19, 8);
      v18 = (unsigned int)v240;
    }
    *((_QWORD *)v239 + v18) = "-pie";
    v20 = HIDWORD(v240);
    LODWORD(v240) = v240 + 1;
    v18 = (unsigned int)v240;
    v19 = (unsigned int)v240 + 1LL;
  }
  if ( v20 < v19 )
  {
    sub_2237220(&v239, v241, v19, 8);
    v18 = (unsigned int)v240;
  }
  *((_QWORD *)v239 + v18) = "--eh-frame-hdr";
  LODWORD(v240) = v240 + 1;
  *(_DWORD *)ptr = 3299;
  v21 = sub_21B6DA0(v8, ptr, 1);
  v22 = v8[1];
  v23 = &v22[8 * (unsigned int)v21];
  v24 = &v22[8 * HIDWORD(v21)];
  if ( v23 == v24 )
    goto LABEL_24;
  while ( !*(_QWORD *)v23 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v23, 3299) )
  {
    v23 += 8;
    if ( v24 == v23 )
      goto LABEL_24;
  }
  if ( v24 == v23 )
  {
LABEL_24:
    if ( sub_10DCD30((__int64)v8, 0xC83u) )
    {
      v25 = (unsigned int)v240;
      v26 = (unsigned int)v240 + 1LL;
      if ( v26 > HIDWORD(v240) )
      {
        sub_2237220(&v239, v241, v26, 8);
        v25 = (unsigned int)v240;
      }
      *((_QWORD *)v239 + v25) = "-export-dynamic";
      LODWORD(v240) = v240 + 1;
    }
    if ( sub_10DCD30((__int64)v8, 0xCC0u) )
    {
      v27 = (unsigned int)v240;
      v28 = (unsigned int)v240 + 1LL;
      if ( v28 > HIDWORD(v240) )
      {
        sub_2237220(&v239, v241, v28, 8);
        v27 = (unsigned int)v240;
      }
      *((_QWORD *)v239 + v27) = "-shared";
      v29 = (unsigned int)(v240 + 1);
      LODWORD(v240) = v240 + 1;
    }
    else
    {
      if ( !sub_10DCD30((__int64)v8, 0xCA4u) )
      {
        sub_10DC5D0((__int64)&v239, (__int64)"-dynamic-linker");
        sub_10DC5D0((__int64)&v239, (__int64)"/libexec/ld-elf.so.1");
      }
      v29 = (unsigned int)v240;
    }
    if ( (_DWORD)v230 == 1 || (unsigned int)(v9[12] - 37) <= 1 )
    {
      if ( v29 + 1 > (unsigned __int64)HIDWORD(v240) )
      {
        sub_2237220(&v239, v241, v29 + 1, 8);
        v29 = (unsigned int)v240;
      }
      *((_QWORD *)v239 + v29) = "--hash-style=both";
      v29 = (unsigned int)(v240 + 1);
      LODWORD(v240) = v240 + 1;
    }
    if ( v29 + 1 > (unsigned __int64)HIDWORD(v240) )
    {
      sub_2237220(&v239, v241, v29 + 1, 8);
      v29 = (unsigned int)v240;
    }
    *((_QWORD *)v239 + v29) = "--enable-new-dtags";
    v30 = (unsigned int)(v240 + 1);
    LODWORD(v240) = v240 + 1;
  }
  else
  {
    do
    {
      v31 = *(_QWORD *)v23;
      if ( *(_QWORD *)(*(_QWORD *)v23 + 16LL) )
        v31 = *(_QWORD *)(*(_QWORD *)v23 + 16LL);
      v23 += 8;
      *(_BYTE *)(v31 + 44) |= 1u;
      if ( v23 == v24 )
        break;
      while ( !*(_QWORD *)v23 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v23, 3299) )
      {
        v23 += 8;
        if ( v24 == v23 )
          goto LABEL_49;
      }
    }
    while ( v24 != v23 );
LABEL_49:
    v32 = (unsigned int)v240;
    v33 = (unsigned int)v240 + 1LL;
    if ( v33 > HIDWORD(v240) )
    {
      sub_2237220(&v239, v241, v33, 8);
      v32 = (unsigned int)v240;
    }
    *((_QWORD *)v239 + v32) = "-Bstatic";
    v30 = (unsigned int)(v240 + 1);
    LODWORD(v240) = v240 + 1;
  }
  switch ( (int)v230 )
  {
    case 14:
      v185 = v30 + 1;
      if ( v185 > HIDWORD(v240) )
        sub_2237220(&v239, v241, v185, 8);
      *((_QWORD *)v239 + (unsigned int)v240) = "-m";
      LODWORD(v240) = v240 + 1;
      v186 = (unsigned int)v240 + 1LL;
      if ( v186 > HIDWORD(v240) )
        sub_2237220(&v239, v241, v186, 8);
      *((_QWORD *)v239 + (unsigned int)v240) = "elf64loongarch";
      LODWORD(v240) = v240 + 1;
      break;
    case 16:
      v187 = v30 + 1;
      if ( v187 > HIDWORD(v240) )
        sub_2237220(&v239, v241, v187, 8);
      *((_QWORD *)v239 + (unsigned int)v240) = "-m";
      LODWORD(v240) = v240 + 1;
      v188 = (unsigned int)v240 + 1LL;
      if ( v188 > HIDWORD(v240) )
        sub_2237220(&v239, v241, v188, 8);
      *((_QWORD *)v239 + (unsigned int)v240) = "elf32btsmip_fbsd";
      LODWORD(v240) = v240 + 1;
      break;
    case 17:
      v189 = v30 + 1;
      if ( v189 > HIDWORD(v240) )
        sub_2237220(&v239, v241, v189, 8);
      *((_QWORD *)v239 + (unsigned int)v240) = "-m";
      LODWORD(v240) = v240 + 1;
      v190 = (unsigned int)v240 + 1LL;
      if ( v190 > HIDWORD(v240) )
        sub_2237220(&v239, v241, v190, 8);
      *((_QWORD *)v239 + (unsigned int)v240) = "elf32ltsmip_fbsd";
      LODWORD(v240) = v240 + 1;
      break;
    case 18:
      v191 = v30 + 1;
      if ( v191 > HIDWORD(v240) )
        sub_2237220(&v239, v241, v191, 8);
      *((_QWORD *)v239 + (unsigned int)v240) = "-m";
      LODWORD(v240) = v240 + 1;
      if ( (unsigned __int8)sub_11543B0((__int64)v8, "n32") )
        sub_10DC5D0((__int64)&v239, (__int64)"elf32btsmipn32_fbsd");
      else
        sub_10DC5D0((__int64)&v239, (__int64)"elf64btsmip_fbsd");
      break;
    case 19:
      v192 = v30 + 1;
      if ( v192 > HIDWORD(v240) )
        sub_2237220(&v239, v241, v192, 8);
      *((_QWORD *)v239 + (unsigned int)v240) = "-m";
      LODWORD(v240) = v240 + 1;
      if ( (unsigned __int8)sub_11543B0((__int64)v8, "n32") )
        sub_10DC5D0((__int64)&v239, (__int64)"elf32ltsmipn32_fbsd");
      else
        sub_10DC5D0((__int64)&v239, (__int64)"elf64ltsmip_fbsd");
      break;
    case 21:
      v193 = v30 + 1;
      if ( v193 > HIDWORD(v240) )
        sub_2237220(&v239, v241, v193, 8);
      *((_QWORD *)v239 + (unsigned int)v240) = "-m";
      LODWORD(v240) = v240 + 1;
      v194 = (unsigned int)v240 + 1LL;
      if ( v194 > HIDWORD(v240) )
        sub_2237220(&v239, v241, v194, 8);
      *((_QWORD *)v239 + (unsigned int)v240) = "elf32ppc_fbsd";
      LODWORD(v240) = v240 + 1;
      break;
    case 22:
      v195 = v30 + 1;
      if ( v195 > HIDWORD(v240) )
        sub_2237220(&v239, v241, v195, 8);
      *((_QWORD *)v239 + (unsigned int)v240) = "-m";
      LODWORD(v240) = v240 + 1;
      v196 = (unsigned int)v240 + 1LL;
      if ( v196 > HIDWORD(v240) )
        sub_2237220(&v239, v241, v196, 8);
      *((_QWORD *)v239 + (unsigned int)v240) = "elf32lppc";
      LODWORD(v240) = v240 + 1;
      break;
    case 28:
      v197 = v30 + 1;
      if ( v197 > HIDWORD(v240) )
        sub_2237220(&v239, v241, v197, 8);
      *((_QWORD *)v239 + (unsigned int)v240) = "-m";
      LODWORD(v240) = v240 + 1;
      v198 = (unsigned int)v240 + 1LL;
      if ( v198 > HIDWORD(v240) )
        sub_2237220(&v239, v241, v198, 8);
      *((_QWORD *)v239 + (unsigned int)v240) = "elf64lriscv";
      LODWORD(v240) = v240 + 1;
      break;
    case 37:
      v34 = (unsigned int)v30;
      v35 = (unsigned int)v30 + 1LL;
      if ( v35 > HIDWORD(v240) )
      {
        sub_2237220(&v239, v241, v35, 8);
        v34 = (unsigned int)v240;
      }
      *((_QWORD *)v239 + v34) = "-m";
      LODWORD(v240) = v240 + 1;
      v36 = (unsigned int)v240;
      if ( (unsigned __int64)(unsigned int)v240 + 1 > HIDWORD(v240) )
      {
        sub_2237220(&v239, v241, (unsigned int)v240 + 1LL, 8);
        v36 = (unsigned int)v240;
      }
      *((_QWORD *)v239 + v36) = "elf_i386_fbsd";
      LODWORD(v240) = v240 + 1;
      break;
    default:
      break;
  }
  v37 = v9[12];
  if ( v37 == 28 || v37 == 14 )
  {
    v178 = (unsigned int)v240;
    v179 = (unsigned int)v240 + 1LL;
    if ( v179 > HIDWORD(v240) )
    {
      sub_2237220(&v239, v241, v179, 8);
      v178 = (unsigned int)v240;
    }
    *((_QWORD *)v239 + v178) = "-X";
    LODWORD(v240) = v240 + 1;
    if ( sub_10DCD30((__int64)v8, 0xA8Cu) )
    {
      v180 = (unsigned int)v240;
      v181 = (unsigned int)v240 + 1LL;
      if ( v181 > HIDWORD(v240) )
      {
        sub_2237220(&v239, v241, v181, 8);
        v180 = (unsigned int)v240;
      }
      *((_QWORD *)v239 + v180) = "--no-relax";
      LODWORD(v240) = v240 + 1;
    }
  }
  *(_DWORD *)ptr = 2096;
  v38 = sub_21B6DA0(v8, ptr, 1);
  v39 = v8[1];
  v40 = &v39[8 * (unsigned int)v38];
  v41 = &v39[8 * HIDWORD(v38)];
  if ( v40 == v41 )
    goto LABEL_64;
  while ( !*(_QWORD *)v40 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v40, 2096) )
  {
    v40 += 8;
    if ( v41 == v40 )
      goto LABEL_64;
  }
  if ( v41 == v40 )
    goto LABEL_64;
  v59 = &v239;
  v60 = v8;
  do
  {
    v61 = *(char ***)v40;
    v62 = *(char ***)(*(_QWORD *)v40 + 16LL);
    if ( !v62 )
      v62 = *(char ***)v40;
    v40 += 8;
    *((_BYTE *)v62 + 44) |= 1u;
    if ( v40 == v41 )
      break;
    while ( 1 )
    {
      v63 = *(char ***)v40;
      if ( *(_QWORD *)v40 )
      {
        v230 = (char **)v59;
        v64 = sub_21B9810(v63, 2096);
        v59 = (void **)v230;
        if ( v64 )
          break;
      }
      v40 += 8;
      if ( v41 == v40 )
        goto LABEL_93;
    }
  }
  while ( v41 != v40 );
LABEL_93:
  v65 = v61;
  v8 = v60;
  v10 = ptr;
  v17 = v59;
  if ( (unsigned int)(v9[12] - 16) > 3 )
  {
LABEL_64:
    if ( *((_DWORD *)v224 + 2) != 1 )
      goto LABEL_65;
    goto LABEL_103;
  }
  v66 = *(_QWORD *)v65[6];
  v67 = 0;
  if ( v66 )
  {
    v68 = *(const char **)v65[6];
    v230 = v65;
    v67 = strlen(v68);
    v65 = v230;
  }
  v237[1] = v67;
  v69 = *v8;
  v237[0] = v66;
  *(_QWORD *)ptr = &v243;
  v70 = *((char ***)v69 + 2);
  v231 = v65;
  v236[0] = "-G";
  v238 = 1283;
  *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v230 = v70;
  sub_22538C0(v236, ptr);
  v71 = ((__int64 (__fastcall *)(char **, _QWORD, _QWORD))v230)(v8, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
  v72 = v231;
  v73 = v71;
  if ( *(int **)ptr != &v243 )
  {
    v230 = v231;
    free(*(void **)ptr);
    v72 = v231;
  }
  v74 = (unsigned int)v240;
  v75 = (unsigned int)v240 + 1LL;
  if ( v75 > HIDWORD(v240) )
  {
    v230 = v72;
    sub_2237220(v17, v17 + 2, v75, 8);
    v74 = (unsigned int)v240;
    v72 = v230;
  }
  *((_QWORD *)v239 + v74) = v73;
  v76 = (char **)v72[2];
  LODWORD(v240) = v240 + 1;
  if ( !v76 )
    v76 = v72;
  *((_BYTE *)v76 + 44) |= 1u;
  if ( *((_DWORD *)v224 + 2) == 1 )
  {
LABEL_103:
    v77 = (unsigned int)v240;
    v78 = (unsigned int)v240 + 1LL;
    if ( v78 > HIDWORD(v240) )
    {
      sub_2237220(v17, v17 + 2, v78, 8);
      v77 = (unsigned int)v240;
    }
    v79 = v224;
    *((_QWORD *)v239 + v77) = "-o";
    v80 = *v79;
    LODWORD(v240) = v240 + 1;
    v81 = (unsigned int)v240;
    if ( (unsigned __int64)(unsigned int)v240 + 1 > HIDWORD(v240) )
    {
      sub_2237220(v17, v17 + 2, (unsigned int)v240 + 1LL, 8);
      v81 = (unsigned int)v240;
    }
    *((_QWORD *)v239 + v81) = v80;
    LODWORD(v240) = v240 + 1;
  }
LABEL_65:
  *(_QWORD *)ptr = 0xBEB00000BF0LL;
  *(_DWORD *)&ptr[8] = 3236;
  v42 = sub_21B6DA0(v8, ptr, 3);
  v43 = v8[1];
  *(_QWORD *)&ptr[16] = 0xBEB00000BF0LL;
  v243 = 3236;
  v44 = &v43[8 * (unsigned int)v42];
  v45 = (char **)&v43[8 * HIDWORD(v42)];
  v230 = v45;
  v46 = (__m128i)_mm_loadh_ps((const double *)&v230);
  *(__m128i *)ptr = v46;
  if ( v44 != (char *)v45 )
  {
    v230 = v8;
    v232 = &ptr[12];
    v231 = (char **)v17;
    v47 = v45;
    do
    {
      v48 = *(char **)v44;
      v49 = ptr;
      if ( *(_QWORD *)v44 )
      {
        do
        {
          v50 = *((unsigned int *)v49 + 4);
          if ( !(_DWORD)v50 )
            break;
          if ( (unsigned __int8)sub_21B9810(v48, v50) )
          {
            v82 = v47;
            v8 = v230;
            v230 = v47;
            v10 = ptr;
            *(_QWORD *)&ptr[16] = 0xBEB00000BF0LL;
            v17 = (void **)v231;
            v243 = 3236;
            v46 = (__m128i)_mm_loadh_ps((const double *)&v230);
            *(__m128i *)ptr = v46;
            if ( v44 == (char *)v230 )
              goto LABEL_73;
            v83 = v8;
            v84 = v231;
            v85 = (char ***)v82;
            v232 = &ptr[12];
            do
            {
              v86 = *(char **)v44;
              if ( *(_QWORD *)(*(_QWORD *)v44 + 16LL) )
                v86 = *(char **)(*(_QWORD *)v44 + 16LL);
              v87 = (char ***)(v44 + 8);
              v86[44] |= 1u;
              *(_QWORD *)ptr = v87;
              if ( v87 == v85 )
                break;
              while ( 1 )
              {
                v88 = ptr;
                if ( *v87 )
                  break;
LABEL_121:
                *(_QWORD *)ptr = ++v87;
                if ( v85 == v87 )
                  goto LABEL_122;
              }
              v230 = *v87;
              v89 = v83;
              while ( 1 )
              {
                v90 = *((unsigned int *)v88 + 4);
                if ( !(_DWORD)v90 )
                {
LABEL_120:
                  v83 = v89;
                  goto LABEL_121;
                }
                v231 = v84;
                v91 = sub_21B9810(v230, v90);
                v84 = v231;
                if ( v91 )
                  break;
                v88 += 4;
                if ( v88 == v232 )
                  goto LABEL_120;
              }
              v44 = *(char **)ptr;
              v83 = v89;
            }
            while ( v85 != *(char ****)ptr );
LABEL_122:
            v10 = ptr;
            v8 = v83;
            v17 = (void **)v84;
            goto LABEL_123;
          }
          v49 += 4;
        }
        while ( v232 != v49 );
      }
      v44 += 8;
      *(_QWORD *)ptr = v44;
    }
    while ( v47 != (char **)v44 );
    v10 = ptr;
    v8 = v230;
    v17 = (void **)v231;
  }
LABEL_73:
  if ( !sub_10DCD30((__int64)v8, 0xCC0u) )
  {
    v207 = sub_10DCD30((__int64)v8, 0xC39u);
    v208 = "gcrt1.o";
    if ( !v207 )
    {
      v208 = "Scrt1.o";
      if ( !(_BYTE)v229 )
        v208 = "crt1.o";
    }
    sub_112D4E0(v236, (__int64)v9, v208);
    *(_QWORD *)ptr = v236;
    v244 = 260;
    v209 = sub_10DA6C0((__int64)v8, (__int64)ptr);
    sub_10DC5D0((__int64)v17, v209);
    if ( v236[0] != v237 )
      operator delete(v236[0]);
  }
  sub_112D4E0(v236, (__int64)v9, "crti.o");
  *(_QWORD *)ptr = v236;
  v244 = 260;
  v51 = sub_10DA6C0((__int64)v8, (__int64)ptr);
  v52 = (unsigned int)v240;
  v53 = (unsigned int)v240 + 1LL;
  if ( v53 > HIDWORD(v240) )
  {
    v230 = (char **)v51;
    sub_2237220(v17, v17 + 2, v53, 8);
    v52 = (unsigned int)v240;
    v51 = (__int64)v230;
  }
  *((_QWORD *)v239 + v52) = v51;
  LODWORD(v240) = v240 + 1;
  if ( v236[0] != v237 )
    operator delete(v236[0]);
  v54 = sub_10DCD30((__int64)v8, 0xCE3u);
  v55 = "crtbeginT.o";
  if ( !v54 )
  {
    if ( sub_10DCD30((__int64)v8, 0xCC0u) || (v55 = (char *)"crtbegin.o", (_BYTE)v229) )
      v55 = "crtbeginS.o";
  }
  sub_112D4E0(ptr, (__int64)v9, v55);
  v56 = (*((__int64 (__fastcall **)(char **, _QWORD, _QWORD))*v8 + 2))(v8, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
  v57 = (unsigned int)v240;
  v58 = (unsigned int)v240 + 1LL;
  if ( v58 > HIDWORD(v240) )
  {
    v230 = (char **)v56;
    sub_2237220(v17, v17 + 2, v58, 8);
    v57 = (unsigned int)v240;
    v56 = (__int64)v230;
  }
  *((_QWORD *)v239 + v57) = v56;
  LODWORD(v240) = v240 + 1;
  if ( *(_BYTE **)ptr != &ptr[16] )
    operator delete(*(void **)ptr);
LABEL_123:
  sub_21B7F70(v8, v17, 2204);
  sub_112D940((__int64)v9, (__int64)v8, (__int64)v17, v92, v93);
  *(_QWORD *)ptr = 0xCF90000000FLL;
  *(_DWORD *)&ptr[8] = 3351;
  sub_21B6650(v8, v17, ptr, 3);
  v94 = *((_DWORD *)v222 + 10);
  if ( v94 )
    sub_11C8A90(v9, (__int64)v8, (__int64)v17, v224, v226, v94 == 2, v46);
  v234 = sub_11C3BD0((__int64 **)v9, (__int64)v8, (__int64)v17);
  v235 = sub_11BDB50((__int64)v9, (__int64)v8, (__int64)v17);
  sub_11BD3E0((__int64)v9, (__int64)v8, (__int64)v17);
  sub_11C3660((__int64)v9, v226, (__int64)v8, (__int64)v17, v228);
  v230 = (char **)sub_22B7B00(v9 + 4);
  *(_DWORD *)ptr = 3129;
  v95 = sub_21B6DA0(v8, ptr, 1);
  v96 = v8[1];
  v97 = &v96[8 * (unsigned int)v95];
  v98 = &v96[8 * HIDWORD(v95)];
  if ( v97 == v98 )
    goto LABEL_129;
  while ( !*(_QWORD *)v97 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v97, 3129) )
  {
    v97 += 8;
    if ( v98 == v97 )
      goto LABEL_129;
  }
  if ( v98 == v97 )
  {
LABEL_129:
    v233 = 0;
  }
  else
  {
    do
    {
      v99 = *(_QWORD *)v97;
      if ( *(_QWORD *)(*(_QWORD *)v97 + 16LL) )
        v99 = *(_QWORD *)(*(_QWORD *)v97 + 16LL);
      v97 += 8;
      *(_BYTE *)(v99 + 44) |= 1u;
      if ( v97 == v98 )
        break;
      while ( !*(_QWORD *)v97 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v97, 3129) )
      {
        v97 += 8;
        if ( v98 == v97 )
          goto LABEL_139;
      }
    }
    while ( v98 != v97 );
LABEL_139:
    v233 = (unsigned int)((_DWORD)v230 - 1) <= 0xC;
  }
  *(_QWORD *)ptr = 0xBDD00000BF0LL;
  *(_DWORD *)&ptr[8] = 3236;
  v100 = sub_21B6DA0(v8, ptr, 3);
  v101 = v8[1];
  *(_QWORD *)&ptr[16] = 0xBDD00000BF0LL;
  v243 = 3236;
  v102 = &v101[8 * (unsigned int)v100];
  v103 = (char **)&v101[8 * HIDWORD(v100)];
  v230 = v103;
  *(__m128 *)ptr = _mm_loadh_ps((const double *)&v230);
  if ( v102 != (char *)v103 )
  {
    v230 = v8;
    v232 = &ptr[12];
    v231 = (char **)v17;
    v104 = v103;
    do
    {
      v105 = *(char **)v102;
      v106 = ptr;
      if ( *(_QWORD *)v102 )
      {
        do
        {
          v107 = *((unsigned int *)v106 + 4);
          if ( !(_DWORD)v107 )
            break;
          if ( (unsigned __int8)sub_21B9810(v105, v107) )
          {
            v121 = v104;
            v8 = v230;
            v230 = v104;
            v10 = ptr;
            *(_QWORD *)&ptr[16] = 0xBDD00000BF0LL;
            v17 = (void **)v231;
            v243 = 3236;
            *(__m128 *)ptr = _mm_loadh_ps((const double *)&v230);
            if ( v230 == (char **)v102 )
              goto LABEL_148;
            v122 = v231;
            v231 = (char **)&ptr[12];
            v123 = v8;
            v124 = (char ***)v121;
            v125 = v123;
            do
            {
              v126 = *(char **)v102;
              if ( *(_QWORD *)(*(_QWORD *)v102 + 16LL) )
                v126 = *(char **)(*(_QWORD *)v102 + 16LL);
              v127 = (char ***)(v102 + 8);
              v126[44] |= 1u;
              *(_QWORD *)ptr = v127;
              if ( v127 == v124 )
                break;
              while ( 1 )
              {
                v128 = (char **)ptr;
                if ( *v127 )
                  break;
LABEL_188:
                *(_QWORD *)ptr = ++v127;
                if ( v124 == v127 )
                  goto LABEL_189;
              }
              v222 = *v127;
              v129 = v125;
              while ( 1 )
              {
                v130 = *((unsigned int *)v128 + 4);
                if ( !(_DWORD)v130 )
                {
LABEL_187:
                  v125 = v129;
                  goto LABEL_188;
                }
                v230 = v122;
                v131 = sub_21B9810(v222, v130);
                v122 = v230;
                if ( v131 )
                  break;
                v128 = (char **)((char *)v128 + 4);
                if ( v128 == v231 )
                  goto LABEL_187;
              }
              v102 = *(char **)ptr;
              v125 = v129;
            }
            while ( v124 != *(char ****)ptr );
LABEL_189:
            v10 = ptr;
            v8 = v125;
            v17 = (void **)v122;
            goto LABEL_190;
          }
          v106 += 4;
        }
        while ( v106 != v232 );
      }
      v102 += 8;
      *(_QWORD *)ptr = v102;
    }
    while ( v104 != (char **)v102 );
    v10 = ptr;
    v8 = v230;
    v17 = (void **)v231;
  }
LABEL_148:
  v108 = sub_10DCD30((__int64)v8, 0xCE1u);
  v109 = 0;
  if ( v108 )
    v109 = sub_10DCD30((__int64)v8, 0xCE3u) == 0;
  sub_11C50B0(v225, (__int64)v17, (__int64)v9, (__int64)v8, v109, 0, 0);
  if ( *((_DWORD *)v222 + 4) == 1 )
  {
    if ( sub_112D7B0((__int64)v9, (__int64)v8) )
      (*(void (__fastcall **)(_DWORD *, char **, void **))(*(_QWORD *)v9 + 640LL))(v9, v8, v17);
    if ( v233 )
      sub_10DC5D0((__int64)v17, (__int64)"-lm_p");
    else
      sub_10DC5D0((__int64)v17, (__int64)"-lm");
  }
  sub_21B7CF0(v8, 3306);
  if ( *((_DWORD *)v222 + 4) == 4 )
  {
    *(_QWORD *)ptr = 0xBDD00000BF0LL;
    v210 = sub_21B6DA0(v8, ptr, 2);
    v211 = v8[1];
    v212 = (unsigned int)v210;
    *(_QWORD *)&ptr[16] = 0xBDD00000BF0LL;
    v213 = (char **)&v211[8 * HIDWORD(v210)];
    v214 = (char **)&v211[8 * v212];
    v222 = v213;
    v230 = v213;
    *(__m128 *)ptr = _mm_loadh_ps((const double *)&v222);
    if ( v214 == v213 )
      goto LABEL_358;
    v222 = v8;
    v215 = v213;
    v216 = v214;
    while ( 1 )
    {
      v217 = *v216;
      if ( *v216 )
      {
        if ( (unsigned __int8)sub_21B9810(*v216, 3056) || (unsigned __int8)sub_21B9810(v217, 3037) )
          break;
      }
      *(_QWORD *)ptr = ++v216;
      if ( v215 == v216 )
      {
        v8 = v222;
        goto LABEL_358;
      }
    }
    v218 = v230;
    v8 = v222;
    *(_QWORD *)&ptr[16] = 0xBDD00000BF0LL;
    v222 = v230;
    *(__m128 *)ptr = _mm_loadh_ps((const double *)&v222);
    if ( v230 == v216 )
    {
LABEL_358:
      (*(void (__fastcall **)(_DWORD *, char **, void **))(*(_QWORD *)v9 + 320LL))(v9, v8, v17);
      (*(void (__fastcall **)(_DWORD *, char **, void **))(*(_QWORD *)v9 + 312LL))(v9, v8, v17);
      if ( v233 )
        sub_10DC5D0((__int64)v17, (__int64)"-lm_p");
      else
        sub_10DC5D0((__int64)v17, (__int64)"-lm");
    }
    else
    {
      v222 = v8;
      do
      {
        v219 = *((char **)*v216 + 2);
        if ( !v219 )
          v219 = *v216;
        v220 = v216 + 1;
        v219[44] |= 1u;
        *(_QWORD *)ptr = v220;
        if ( v220 == v218 )
          break;
        while ( 1 )
        {
          v221 = *v220;
          if ( *v220 )
          {
            if ( (unsigned __int8)sub_21B9810(*v220, 3056) || (unsigned __int8)sub_21B9810(v221, 3037) )
              break;
          }
          *(_QWORD *)ptr = ++v220;
          if ( v218 == v220 )
            goto LABEL_369;
        }
        v216 = *(char ***)ptr;
      }
      while ( v218 != *(char ***)ptr );
LABEL_369:
      v8 = v222;
    }
  }
  if ( v234 )
    sub_11BC1D0((__int64)v9, (__int64)v8, (__int64)v17);
  if ( v235 )
    sub_11BC020((__int64)v9, (__int64)v8, (__int64)v17);
  v110 = (unsigned int)v240;
  v111 = (unsigned int)v240;
  v112 = (unsigned int)v240 + 1LL;
  if ( v233 )
  {
    if ( HIDWORD(v240) < v112 )
    {
      sub_2237220(v17, v17 + 2, v112, 8);
      v110 = (unsigned int)v240;
    }
    *((_QWORD *)v239 + v110) = "-lgcc_p";
    LODWORD(v240) = v240 + 1;
    if ( !sub_10DCD30((__int64)v8, 0xCE3u) )
    {
      sub_10DC5D0((__int64)v17, (__int64)"-lgcc_eh_p");
      if ( !sub_10DCD30((__int64)v8, 0xC6Au) )
        goto LABEL_333;
      goto LABEL_330;
    }
  }
  else
  {
    if ( HIDWORD(v240) < v112 )
    {
      sub_2237220(v17, v17 + 2, v112, 8);
      v111 = (unsigned int)v240;
    }
    *((_QWORD *)v239 + v111) = "-lgcc";
    LODWORD(v240) = v240 + 1;
    if ( !sub_10DCD30((__int64)v8, 0xCE3u) )
    {
      sub_10DC5D0((__int64)v17, (__int64)"--as-needed");
      sub_10DC5D0((__int64)v17, (__int64)"-lgcc_s");
      sub_10DC5D0((__int64)v17, (__int64)"--no-as-needed");
      if ( !sub_10DCD30((__int64)v8, 0xC6Au) )
      {
        v117 = (unsigned int)v240;
        goto LABEL_167;
      }
      goto LABEL_164;
    }
  }
  v113 = (unsigned int)v240;
  v114 = (unsigned int)v240 + 1LL;
  if ( v114 > HIDWORD(v240) )
  {
    sub_2237220(v17, v17 + 2, v114, 8);
    v113 = (unsigned int)v240;
  }
  *((_QWORD *)v239 + v113) = "-lgcc_eh";
  LODWORD(v240) = v240 + 1;
  if ( sub_10DCD30((__int64)v8, 0xC6Au) )
  {
    if ( !v233 )
    {
LABEL_164:
      v115 = (unsigned int)v240;
      v116 = (unsigned int)v240 + 1LL;
      if ( v116 > HIDWORD(v240) )
      {
        sub_2237220(v17, v17 + 2, v116, 8);
        v115 = (unsigned int)v240;
      }
      *((_QWORD *)v239 + v115) = "-lpthread";
      v117 = (unsigned int)(v240 + 1);
      LODWORD(v240) = v240 + 1;
LABEL_167:
      if ( v117 + 1 > (unsigned __int64)HIDWORD(v240) )
      {
        sub_2237220(v17, v17 + 2, v117 + 1, 8);
        v117 = (unsigned int)v240;
      }
      *((_QWORD *)v239 + v117) = "-lc";
      LODWORD(v240) = v240 + 1;
      v118 = (unsigned int)v240;
      if ( (unsigned __int64)(unsigned int)v240 + 1 > HIDWORD(v240) )
      {
        sub_2237220(v17, v17 + 2, (unsigned int)v240 + 1LL, 8);
        v118 = (unsigned int)v240;
      }
      *((_QWORD *)v239 + v118) = "-lgcc";
      LODWORD(v240) = v240 + 1;
      if ( !sub_10DCD30((__int64)v8, 0xCE3u) )
      {
        sub_10DC5D0((__int64)v17, (__int64)"--as-needed");
        sub_10DC5D0((__int64)v17, (__int64)"-lgcc_s");
        sub_10DC5D0((__int64)v17, (__int64)"--no-as-needed");
        goto LABEL_190;
      }
      goto LABEL_172;
    }
LABEL_330:
    v202 = (unsigned int)v240;
    v203 = (unsigned int)v240 + 1LL;
    if ( v203 > HIDWORD(v240) )
    {
      sub_2237220(v17, v17 + 2, v203, 8);
      v202 = (unsigned int)v240;
    }
    *((_QWORD *)v239 + v202) = "-lpthread_p";
    LODWORD(v240) = v240 + 1;
    goto LABEL_333;
  }
  if ( !v233 )
  {
    v117 = (unsigned int)v240;
    goto LABEL_167;
  }
LABEL_333:
  if ( sub_10DCD30((__int64)v8, 0xCC0u) )
  {
    v204 = (unsigned int)v240;
    v205 = (unsigned int)v240 + 1LL;
    if ( v205 > HIDWORD(v240) )
    {
      sub_2237220(v17, v17 + 2, v205, 8);
      v204 = (unsigned int)v240;
    }
    *((_QWORD *)v239 + v204) = "-lc";
    v206 = (unsigned int)(v240 + 1);
    LODWORD(v240) = v240 + 1;
  }
  else
  {
    sub_10DC5D0((__int64)v17, (__int64)"-lc_p");
    v206 = (unsigned int)v240;
  }
  if ( v206 + 1 > (unsigned __int64)HIDWORD(v240) )
  {
    sub_2237220(v17, v17 + 2, v206 + 1, 8);
    v206 = (unsigned int)v240;
  }
  *((_QWORD *)v239 + v206) = "-lgcc_p";
  LODWORD(v240) = v240 + 1;
  if ( !sub_10DCD30((__int64)v8, 0xCE3u) )
  {
    sub_10DC5D0((__int64)v17, (__int64)"-lgcc_eh_p");
    goto LABEL_190;
  }
LABEL_172:
  v119 = (unsigned int)v240;
  v120 = (unsigned int)v240 + 1LL;
  if ( v120 > HIDWORD(v240) )
  {
    sub_2237220(v17, v17 + 2, v120, 8);
    v119 = (unsigned int)v240;
  }
  *((_QWORD *)v239 + v119) = "-lgcc_eh";
  LODWORD(v240) = v240 + 1;
LABEL_190:
  *(_QWORD *)ptr = 0xBEB00000BF0LL;
  *(_DWORD *)&ptr[8] = 3236;
  v132 = sub_21B6DA0(v8, ptr, 3);
  v133 = v8[1];
  *(_QWORD *)&ptr[16] = 0xBEB00000BF0LL;
  v243 = 3236;
  v134 = &v133[8 * (unsigned int)v132];
  v135 = (char **)&v133[8 * HIDWORD(v132)];
  v222 = v135;
  v136 = _mm_loadh_ps((const double *)&v222);
  *(__m128 *)ptr = v136;
  if ( v134 != (char *)v135 )
  {
    v222 = v8;
    v231 = (char **)&ptr[12];
    v230 = (char **)v17;
    v137 = v135;
    do
    {
      v138 = *(char **)v134;
      v139 = (char **)ptr;
      if ( *(_QWORD *)v134 )
      {
        do
        {
          v140 = *((unsigned int *)v139 + 4);
          if ( !(_DWORD)v140 )
            break;
          if ( (unsigned __int8)sub_21B9810(v138, v140) )
          {
            v148 = v137;
            v8 = v222;
            v222 = v137;
            v10 = ptr;
            *(_QWORD *)&ptr[16] = 0xBEB00000BF0LL;
            v17 = (void **)v230;
            v243 = 3236;
            v136 = _mm_loadh_ps((const double *)&v222);
            *(__m128 *)ptr = v136;
            if ( v134 == (char *)v222 )
              goto LABEL_198;
            v149 = v8;
            v150 = (void **)v230;
            v151 = (char ***)v148;
            v230 = (char **)&ptr[12];
            do
            {
              v152 = *(char **)v134;
              if ( *(_QWORD *)(*(_QWORD *)v134 + 16LL) )
                v152 = *(char **)(*(_QWORD *)v134 + 16LL);
              v153 = (char ***)(v134 + 8);
              v152[44] |= 1u;
              *(_QWORD *)ptr = v153;
              if ( v153 == v151 )
                break;
              while ( 1 )
              {
                v154 = (char **)ptr;
                if ( *v153 )
                  break;
LABEL_221:
                *(_QWORD *)ptr = ++v153;
                if ( v151 == v153 )
                  goto LABEL_222;
              }
              v222 = *v153;
              v155 = v149;
              while ( 1 )
              {
                v156 = *((unsigned int *)v154 + 4);
                if ( !(_DWORD)v156 )
                {
LABEL_220:
                  v149 = v155;
                  goto LABEL_221;
                }
                v229 = v150;
                v157 = sub_21B9810(v222, v156);
                v150 = v229;
                if ( v157 )
                  break;
                v154 = (char **)((char *)v154 + 4);
                if ( v230 == v154 )
                  goto LABEL_220;
              }
              v134 = *(char **)ptr;
              v149 = v155;
            }
            while ( v151 != *(char ****)ptr );
LABEL_222:
            v10 = ptr;
            v8 = v149;
            v17 = v150;
            goto LABEL_223;
          }
          v139 = (char **)((char *)v139 + 4);
        }
        while ( v231 != v139 );
      }
      v134 += 8;
      *(_QWORD *)ptr = v134;
    }
    while ( v137 != (char **)v134 );
    v10 = ptr;
    v8 = v222;
    v17 = (void **)v230;
  }
LABEL_198:
  if ( sub_10DCD30((__int64)v8, 0xCC0u) || (v141 = "crtend.o", (_BYTE)v229) )
    v141 = "crtendS.o";
  sub_112D4E0(ptr, (__int64)v9, v141);
  v142 = (char **)(*((__int64 (__fastcall **)(char **, _QWORD, _QWORD))*v8 + 2))(v8, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
  v143 = (unsigned int)v240;
  v144 = (unsigned int)v240 + 1LL;
  if ( v144 > HIDWORD(v240) )
  {
    v222 = v142;
    sub_2237220(v17, v17 + 2, v144, 8);
    v143 = (unsigned int)v240;
    v142 = v222;
  }
  *((_QWORD *)v239 + v143) = v142;
  LODWORD(v240) = v240 + 1;
  if ( *(_BYTE **)ptr != &ptr[16] )
    operator delete(*(void **)ptr);
  sub_112D4E0(v236, (__int64)v9, "crtn.o");
  v244 = 260;
  *(_QWORD *)ptr = v236;
  v145 = (char **)sub_10DA6C0((__int64)v8, (__int64)ptr);
  v146 = (unsigned int)v240;
  v147 = (unsigned int)v240 + 1LL;
  if ( v147 > HIDWORD(v240) )
  {
    v222 = v145;
    sub_2237220(v17, v17 + 2, v147, 8);
    v146 = (unsigned int)v240;
    v145 = v222;
  }
  *((_QWORD *)v239 + v146) = v145;
  LODWORD(v240) = v240 + 1;
  if ( v236[0] != v237 )
    operator delete(v236[0]);
LABEL_223:
  (*(void (__fastcall **)(_DWORD *, char **, void **))(*(_QWORD *)v9 + 672LL))(v9, v8, v17);
  sub_1132E50((__m128i *)ptr, *(_QWORD *)(v227 + 24), nullptr);
  v158 = (*((__int64 (__fastcall **)(char **, _QWORD, _QWORD))*v8 + 2))(v8, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
  if ( *(_BYTE **)ptr != &ptr[16] )
    operator delete(*(void **)ptr);
  v223 = 1;
  v159 = *(const __m128i **)v226;
  v160 = *(unsigned int *)(v226 + 8);
  v222 = v224;
  v161 = operator new(0x208u);
  sub_1106AE0(v161, v228, v227, 0x100000000LL, (__int64)"@", v158, (__int64)v17, v159, v160, (__int64)v222, v223, 0);
  *(_QWORD *)ptr = v161;
  v162 = *(unsigned int *)(v225 + 160);
  v163 = v162 + 1;
  v164 = *(_DWORD *)(v225 + 160);
  if ( v162 + 1 > (unsigned __int64)*(unsigned int *)(v225 + 164) )
  {
    v199 = v225;
    v200 = *(_QWORD *)(v225 + 152);
    v201 = v225 + 152;
    if ( v200 > (unsigned __int64)ptr )
    {
      sub_11673D0(v201, v163, v136, a8);
      v162 = *(unsigned int *)(v199 + 160);
      v165 = *(_QWORD *)(v199 + 152);
      v164 = *(_DWORD *)(v199 + 160);
    }
    else
    {
      if ( (unsigned __int64)ptr < v200 + 8 * v162 )
      {
        sub_11673D0(v201, v163, v136, a8);
        v165 = *(_QWORD *)(v225 + 152);
        v162 = *(unsigned int *)(v225 + 160);
        v10 = &ptr[v165 - v200];
      }
      else
      {
        sub_11673D0(v201, v163, v136, a8);
        v162 = *(unsigned int *)(v225 + 160);
        v165 = *(_QWORD *)(v225 + 152);
      }
      v164 = *(_DWORD *)(v225 + 160);
    }
  }
  else
  {
    v165 = *(_QWORD *)(v225 + 152);
  }
  v166 = *(_QWORD *)v10;
  *(_QWORD *)v10 = 0;
  *(_QWORD *)(v165 + 8 * v162) = v166;
  v167 = *(_QWORD **)ptr;
  *(_DWORD *)(v225 + 160) = v164 + 1;
  if ( v167 )
  {
    v168 = *(void (__fastcall **)(_QWORD *))(*v167 + 8LL);
    if ( v168 == sub_10D4290 )
    {
      v169 = v167[58];
      v170 = v167[57];
      *v167 = &off_2BA8F30;
      if ( v169 != v170 )
      {
        do
        {
          if ( *(_BYTE *)(v170 + 32) && *(_QWORD *)v170 != v170 + 16 )
            operator delete(*(void **)v170);
          v170 += 40;
        }
        while ( v169 != v170 );
        v170 = v167[57];
      }
      if ( v170 )
        operator delete((void *)v170);
      v171 = (void *)v167[54];
      if ( v171 )
        operator delete(v171);
      v172 = (_QWORD *)v167[50];
      if ( v172 != v167 + 52 )
        operator delete(v172);
      v173 = (_QWORD *)v167[32];
      if ( v173 != v167 + 34 )
        free(v173);
      v174 = (void **)v167[29];
      v175 = (void **)v167[28];
      if ( v174 != v175 )
      {
        do
        {
          while ( *v175 != v175 + 2 )
          {
            operator delete(*v175);
            v175 += 4;
            if ( v175 == v174 )
            {
              v175 = (void **)v167[28];
              goto LABEL_247;
            }
          }
          v175 += 4;
        }
        while ( v174 != v175 );
        v175 = (void **)v167[28];
      }
LABEL_247:
      if ( v175 )
        operator delete(v175);
      v176 = (void *)v167[25];
      if ( v176 )
        operator delete(v176);
      v177 = (_QWORD *)v167[7];
      if ( v177 != v167 + 9 )
        free(v177);
      operator delete(v167, 0x208u);
    }
    else
    {
      v168(v167);
    }
  }
  if ( v239 != v17 + 2 )
    free(v239);
}
