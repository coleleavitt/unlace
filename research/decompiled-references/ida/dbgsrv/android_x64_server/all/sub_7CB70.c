/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7CB70
// Address: 0x000000000007CB70

//----- (000000000007CB70) ----------------------------------------------------
__int64 __fastcall sub_7CB70(__int64 a1, char *a2, const char *a3, int a4, double a5, __m128 a6)
{
  __int128 v8; // xmm0
  const char *v9; // r14
  pthread_mutex_t *v10; // rbx
  __int64 v11; // rax
  int *v12; // r14
  __int64 v13; // rbx
  _QWORD *v14; // rax
  char v15; // bl
  __int64 v16; // rbp
  __int64 v17; // rax
  int v18; // r14d
  int v19; // esi
  int v20; // ecx
  bool v21; // cc
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rbx
  int v25; // ecx
  __int64 v26; // r12
  char *v27; // rbx
  __int64 v28; // r15
  char *v29; // rsi
  const char *v30; // rbx
  int v31; // ebp
  __int64 v32; // rax
  char **v33; // r15
  __int64 v34; // rbp
  char **v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rbx
  int v39; // r12d
  __int64 v40; // rcx
  char *v41; // r14
  __int64 v42; // r12
  char *v43; // r14
  __int64 v44; // r15
  char *v45; // rsi
  __int64 i; // rbx
  int v47; // eax
  int v48; // r8d
  int v49; // r9d
  char **v50; // rdi
  __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  char *v53; // rax
  int v54; // eax
  char *v55; // r14
  int v56; // r12d
  int v57; // eax
  int v58; // eax
  __int64 v59; // r12
  __int64 v60; // r14
  int v61; // ebp
  char v62; // al
  const char *v63; // rsi
  unsigned int v64; // eax
  char *v65; // rsi
  unsigned __int8 v66; // r15
  __int64 v67; // rcx
  const char *v68; // rsi
  char **v69; // rdi
  __int64 v70; // rcx
  char *v71; // rax
  char *v72; // rdi
  __int64 v73; // rax
  int v74; // eax
  int v75; // ebp
  int v76; // ebp
  unsigned __int64 v77; // rax
  int v78; // ebp
  int v79; // ebp
  char v80; // al
  int v81; // ebp
  int v82; // ebp
  char **v83; // rdi
  __int64 v84; // rcx
  unsigned __int64 v85; // rdx
  char *v86; // rax
  int v87; // ebp
  void *v88; // rax
  int v89; // ebp
  __int64 v90; // rcx
  char **v91; // rdi
  __int64 v92; // rcx
  char *v93; // rax
  char *v94; // rdi
  __int64 *v95; // rdi
  int v97; // eax
  __int64 v98; // rsi
  int v99; // eax
  int v100; // ebp
  char *v101; // rax
  char v102; // dl
  int v103; // ebx
  int v104; // ebp
  char **v105; // rdi
  __int64 v106; // rcx
  char *v107; // rax
  int v108; // r14d
  __int64 v109; // rbp
  char *v110; // rdi
  __int64 v111; // rdi
  __int64 v112; // rdi
  void *v113; // rdi
  __int64 v114; // rsi
  _QWORD *v115; // rdi
  void *v116; // rax
  char v117; // cl
  __int64 v118; // rbp
  __int64 v119; // rbx
  __int64 v120; // rbp
  char *v121; // rsi
  __int64 v122; // rdi
  __int64 v123; // rdi
  unsigned __int16 v124; // ax
  int v125; // eax
  __int64 v126; // rdi
  __int64 v127; // rbp
  __int64 v128; // rbx
  __int64 v129; // rbp
  char *v130; // rsi
  __int64 v131; // rdi
  __int64 v132; // rdi
  unsigned __int16 v133; // ax
  __int64 v134; // rax
  int *v135; // rax
  int v136; // ebx
  char *v137; // rax
  unsigned __int8 v138; // al
  int v139; // esi
  unsigned __int16 v140; // ax
  char *v141; // rax
  __int64 v142; // rax
  __int64 v143; // r12
  char *v144; // rbp
  _QWORD *v145; // rax
  _QWORD *v146; // r15
  _QWORD *v147; // r14
  _QWORD *v148; // rcx
  _QWORD *v149; // rax
  __int64 v150; // r15
  bool v151; // zf
  unsigned __int8 v152; // al
  int v153; // eax
  unsigned __int16 v154; // ax
  int v155; // eax
  char *v156; // rdi
  char v157; // al
  __int64 v158; // rbp
  __int64 v159; // rsi
  unsigned __int16 v160; // ax
  unsigned __int16 v161; // ax
  int v162; // eax
  __int64 v163; // rdi
  __int64 v164; // rax
  __int64 v165; // rdi
  __int64 v166; // rdi
  unsigned __int8 v167; // al
  int v168; // esi
  unsigned __int8 v169; // al
  unsigned __int16 v170; // ax
  unsigned __int8 v171; // al
  unsigned __int16 v172; // ax
  int v173; // eax
  unsigned __int8 v174; // al
  unsigned __int8 v175; // al
  unsigned __int16 v176; // ax
  unsigned __int8 v177; // al
  unsigned __int16 v178; // ax
  unsigned __int16 v179; // ax
  unsigned __int16 v180; // ax
  unsigned __int16 v181; // ax
  unsigned __int8 v182; // al
  unsigned __int16 v183; // ax
  __int64 v184; // rax
  unsigned __int8 v185; // al
  char *v186; // rdi
  __int64 v187; // rdi
  __int64 v188; // rdi
  unsigned __int16 v189; // ax
  int v190; // esi
  unsigned __int8 v191; // al
  char *v192; // rax
  unsigned __int16 v193; // ax
  unsigned __int8 v194; // al
  unsigned __int8 v195; // al
  int v196; // eax
  unsigned __int8 v197; // al
  int v198; // eax
  int v199; // eax
  signed __int64 v200; // rbp
  void *v201; // r14
  void *v202; // rax
  unsigned __int8 v203; // al
  unsigned __int8 v204; // al
  char *v205; // rdi
  unsigned __int16 v206; // ax
  unsigned __int8 v207; // al
  unsigned __int8 v208; // al
  int v209; // eax
  char *v210; // rax
  char v211; // cl
  unsigned __int16 v212; // ax
  int v213; // ebp
  int *v214; // rbx
  unsigned __int64 v215; // rdi
  __int64 v216; // rsi
  int v217; // eax
  unsigned __int16 v218; // ax
  int v219; // eax
  char *v220; // rax
  char v221; // cl
  unsigned __int16 v222; // ax
  char *v223; // rax
  __int64 v224; // rbp
  __int64 v225; // rbp
  char *v226; // rsi
  __int64 v227; // rdi
  __int64 v228; // rdi
  char *v229; // rbp
  __int64 v230; // rax
  __int64 v231; // rsi
  unsigned __int64 v232; // r12
  __int64 v233; // rcx
  __int64 v234; // rdi
  __int64 v235; // rdi
  __int64 v236; // rcx
  __int64 v237; // rax
  char *v238; // rsi
  __int64 v239; // rdi
  __int64 v240; // rdi
  pthread_mutex_t *v241; // rbp
  __int64 (__fastcall ***v242)(_QWORD, const char *); // rdi
  char *v243; // rsi
  __int64 v244; // rdi
  __int64 v245; // rdi
  unsigned __int64 v246; // rdx
  char *v247; // rsi
  __int64 v248; // rdi
  __int64 v249; // rdi
  __int64 v250; // rdi
  __int64 v251; // rdi
  char *v252; // rsi
  __int64 v253; // rdi
  __int64 v254; // rdi
  char *v255; // rdi
  char *v256; // rsi
  __int64 v257; // rdi
  __int64 v258; // rdi
  char v259; // [rsp+0h] [rbp-C8h]
  __int64 v260; // [rsp+8h] [rbp-C0h]
  int v261; // [rsp+10h] [rbp-B8h]
  int v262; // [rsp+10h] [rbp-B8h]
  __int64 v263; // [rsp+10h] [rbp-B8h]
  int v264; // [rsp+18h] [rbp-B0h]
  char *v265; // [rsp+18h] [rbp-B0h]
  const char **v266; // [rsp+20h] [rbp-A8h]
  _QWORD *v267; // [rsp+20h] [rbp-A8h]
  __int64 v268; // [rsp+28h] [rbp-A0h]
  char **v269; // [rsp+30h] [rbp-98h]
  int *v270; // [rsp+30h] [rbp-98h]
  __int64 v272; // [rsp+40h] [rbp-88h]
  char *v273; // [rsp+48h] [rbp-80h] BYREF
  char v274[8]; // [rsp+50h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+58h] [rbp-70h] BYREF
  void *v276; // [rsp+68h] [rbp-60h]
  _DWORD v277[2]; // [rsp+70h] [rbp-58h] BYREF
  void *v278[2]; // [rsp+78h] [rbp-50h]
  __int64 v279; // [rsp+88h] [rbp-40h]
  unsigned __int64 v280; // [rsp+90h] [rbp-38h]

  v280 = __readfsqword(0x28u);
  v274[0] = 2;
  *(_QWORD *)&v8 = 0;
  *(_OWORD *)ptr = 0;
  v276 = nullptr;
  v272 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 128) = 0;
  if ( !a3
    || (v9 = a3,
        v10 = (pthread_mutex_t *)qword_1557E8,
        qmutex_lock((pthread_mutex_t *)qword_1557E8),
        a4 = sub_6DD10(*(_QWORD **)(a1 + 8), v9),
        qmutex_unlock(v10),
        v11 = 0,
        a4 != 0x7FFFFFFF) )
  {
    v12 = (int *)(a1 + 120);
    *(_DWORD *)(a1 + 120) = a4;
    v13 = 0;
    goto LABEL_5;
  }
LABEL_3:
  v260 = v11;
  set_qerrno(0x58u);
  set_error_string(0, v9);
LABEL_155:
  if ( (unsigned int)get_qerrno() != 90 )
    sub_75FD0((__int64)v274, *(double *)&v8, a6);
  v91 = (char **)(a1 + 24);
  v92 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 40) >= (unsigned __int64)(v92 + 1) )
  {
    v93 = *v91;
  }
  else
  {
    v93 = (char *)qvector_reserve((__int64)v91, *v91, v92 + 1, 0x20u);
    *(_QWORD *)(a1 + 24) = v93;
    v92 = *(_QWORD *)(a1 + 32);
  }
  v94 = &v93[32 * v92];
  *v94 = 2;
  *(_QWORD *)&v8 = 0;
  *(_OWORD *)(v94 + 8) = 0;
  *((_QWORD *)v94 + 3) = 0;
  *((_QWORD *)v94 + 1) = 0;
  ++*(_QWORD *)(a1 + 32);
  move_idcv(v94, v274, 0.0, a6);
LABEL_161:
  v273 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
  sub_75B90(a1, (__int64)v273, *(double *)&v8, a6);
LABEL_162:
  v95 = *(__int64 **)(a1 + 128);
  if ( !v95 )
  {
LABEL_168:
    LODWORD(i) = 0;
    goto LABEL_169;
  }
  i = (__int64)v277;
  while ( !sub_6C2E0(v95, *(_QWORD *)(a1 + 112) - 1LL, v277) )
  {
    if ( *(_QWORD *)(a1 + 56) > (unsigned __int64)(int)v272 )
    {
      if ( !sub_790E0(a1, *(double *)&v8, a6) )
      {
        if ( !(_BYTE)under_debugger )
          interr(301);
        goto LABEL_542;
      }
      v95 = *(__int64 **)(a1 + 128);
      if ( v95 )
        continue;
    }
    goto LABEL_168;
  }
  *(_QWORD *)(a1 + 112) = v277[1];
  if ( LODWORD(v278[0]) == 1 )
  {
    v99 = HIDWORD(v278[0]) + *(_DWORD *)(a1 + 100);
    if ( v99 < 0 || (v98 = v99, *(_QWORD *)(a1 + 32) <= (unsigned __int64)v99) )
    {
      if ( !(_BYTE)under_debugger )
        interr(286);
LABEL_542:
      BUG();
    }
LABEL_185:
    v65 = (char *)(*(_QWORD *)(a1 + 24) + 32 * v98);
    goto LABEL_186;
  }
  if ( LODWORD(v278[0]) == 2 )
  {
    v97 = HIDWORD(v278[0]) + *(_DWORD *)(a1 + 96);
    if ( v97 < 0 || (v98 = v97, *(_QWORD *)(a1 + 32) <= (unsigned __int64)v97) )
    {
      if ( !(_BYTE)under_debugger )
        interr(287);
      goto LABEL_542;
    }
    goto LABEL_185;
  }
  if ( LODWORD(v278[0]) != 3 )
  {
    if ( !(_BYTE)under_debugger )
      interr(300);
    goto LABEL_542;
  }
  v65 = (char *)sub_71A80(*(_QWORD *)(a1 + 8), SHIDWORD(v278[0]));
LABEL_186:
  v273 = v65;
  sub_7C770((_QWORD *)(a1 + 24), v65, *(double *)&v8, a6);
  while ( 1 )
  {
    if ( !*(_BYTE *)(a1 + 144) && (callui(27, (_DWORD)v65, v52, (unsigned int)&callui, v48, v49, v259) & 1) != 0 )
    {
      set_qerrno(0x5CFu);
      goto LABEL_155;
    }
    v65 = *(char **)(a1 + 112);
    v66 = sub_6BF80(*(_QWORD **)(a1 + 128), (__int64)v65);
    ++*(_QWORD *)(a1 + 112);
    v73 = *(_QWORD *)(a1 + 8);
    if ( !*(_BYTE *)(v73 + 124) )
    {
      if ( (int)v260 + 1 < 101 )
      {
        v260 = (unsigned int)(v260 + 1);
      }
      else
      {
        v260 = 0;
        if ( *(_QWORD *)(v73 + 112) != -1 && is_main_thread() )
        {
          v260 = 0;
          if ( time(nullptr) - *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) >= 3 )
          {
            v260 = 0;
            sub_7FAF0((int)"Running IDC script", *(double *)&v8, *(double *)a6.m128_u64);
            *(_BYTE *)(*(_QWORD *)(a1 + 8) + 124LL) = 1;
          }
        }
      }
    }
LABEL_121:
    v31 = v66;
    switch ( v66 )
    {
      case 0x80u:
        v177 = sub_6BF80(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v31 = v177;
        goto LABEL_315;
      case 0x81u:
        v179 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v31 = v179;
        goto LABEL_315;
      case 0x82u:
        v194 = sub_6BF80(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        a4 = v194;
        goto LABEL_128;
      case 0x83u:
        v181 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        a4 = v181;
        goto LABEL_128;
      case 0x84u:
        v182 = sub_6BF80(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v78 = v182;
        goto LABEL_131;
      case 0x85u:
        v193 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v78 = v193;
        goto LABEL_131;
      case 0x86u:
        v174 = sub_6BF80(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v100 = v174;
        goto LABEL_188;
      case 0x87u:
        v180 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v100 = v180;
        goto LABEL_188;
      case 0x88u:
        v175 = sub_6BF80(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v75 = v175;
        goto LABEL_124;
      case 0x89u:
        v178 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v75 = v178;
        goto LABEL_124;
      case 0x8Au:
        v203 = sub_6BF80(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v89 = v203;
        goto LABEL_151;
      case 0x8Bu:
        v176 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v89 = v176;
        goto LABEL_151;
      case 0x8Cu:
        v171 = sub_6BF80(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v81 = v171;
        goto LABEL_137;
      case 0x8Du:
        v172 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v81 = v172;
        goto LABEL_137;
      case 0x8Eu:
        v169 = sub_6BF80(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v87 = v169;
        goto LABEL_145;
      case 0x8Fu:
        v170 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v87 = v170;
        goto LABEL_145;
      case 0x90u:
      case 0x91u:
      case 0x92u:
      case 0x93u:
      case 0x94u:
      case 0x95u:
      case 0x96u:
      case 0x97u:
      case 0x98u:
      case 0x99u:
      case 0x9Au:
      case 0x9Bu:
      case 0x9Cu:
      case 0x9Du:
      case 0x9Eu:
      case 0x9Fu:
      case 0xCFu:
        if ( !(_BYTE)under_debugger )
          interr(299);
        goto LABEL_542;
      case 0xA0u:
        LOBYTE(v88) = sub_6BF80(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v88 = (void *)(char)v88;
        goto LABEL_149;
      case 0xA1u:
        LOWORD(v88) = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v88 = (void *)(__int16)v88;
        goto LABEL_149;
      case 0xA2u:
        v207 = sub_6BF80(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        LODWORD(v65) = v207;
        goto LABEL_355;
      case 0xA3u:
        v206 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        LODWORD(v65) = v206;
LABEL_355:
        *(_DWORD *)(a1 + 120) = (_DWORD)v65;
        sub_78A30(a1, (int)v65, *(double *)&v8, a6);
        continue;
      case 0xA4u:
        v156 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        v273 = v156;
        v157 = *v156;
        if ( *v156 != 10 )
          goto LABEL_274;
        if ( !deref_idcv(v156, 2, *(double *)&v8, a6) )
          goto LABEL_155;
        v156 = v273;
        v157 = *v273;
LABEL_274:
        if ( v157 != 9 && v157 != 2 || *((_QWORD *)v156 + 1) == -1 || SLODWORD(qword_154A68[1]) <= 0 )
          goto LABEL_440;
        sub_7C770((_QWORD *)(a1 + 24), v274, *(double *)&v8, a6);
        v158 = 32LL * *(int *)(*(_QWORD *)(a1 + 72) + 4LL * *(_QWORD *)(a1 + 80) - 4);
        sub_7FBD0(a1 + 24, v158 + *(_QWORD *)(a1 + 24), v274, *(double *)&v8, a6);
        v159 = *(_QWORD *)(a1 + 24) + v158 + 32;
        LOBYTE(v277[0]) = 2;
        *(_QWORD *)&v8 = 0;
        *(_OWORD *)v278 = 0;
        v279 = 0;
        sub_7FD70(a1 + 24, v159, (char *)v277, 0.0, a6);
        v13 = v260;
        if ( SLOBYTE(v277[0]) == 5 )
        {
          sub_72DD0((_DWORD *)v278[0], (char *)v277, 0.0, a6);
        }
        else if ( SLOBYTE(v277[0]) == 7 && v278[0] )
        {
          v278[1] = nullptr;
          qfree(v278[0]);
          v278[0] = nullptr;
          v279 = 0;
        }
        a4 = -LODWORD(qword_154A68[1]);
        v12 = (int *)(a1 + 120);
        *(_DWORD *)(a1 + 120) = -LODWORD(qword_154A68[1]);
        goto LABEL_5;
      case 0xA5u:
        v160 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        *(_DWORD *)(a1 + 120) = v160;
        v274[0] = 2;
        ptr[0] = nullptr;
        v65 = (char *)(*(_QWORD *)(a1 + 32) + v160);
        sub_68BE0(a1 + 24, (unsigned __int64)v65, v274);
        continue;
      case 0xA6u:
        continue;
      case 0xA7u:
        LODWORD(v88) = sub_6BFE0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 4LL;
        v88 = (void *)(int)v88;
        goto LABEL_149;
      case 0xA8u:
        v199 = sub_6BFE0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 4LL;
        v200 = v199;
        v201 = (void *)(v199 + 1LL);
        v202 = qalloc((signed __int64)v201);
        LODWORD(i) = (_DWORD)v202;
        if ( !v202 )
          goto LABEL_155;
        sub_6BF40(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112), v202, v200);
        *(_QWORD *)(a1 + 112) += v200;
        *((_BYTE *)v202 + v200) = 0;
        v274[0] = 7;
        ptr[0] = v202;
        v276 = v201;
        ptr[1] = v201;
        v83 = (char **)(a1 + 24);
        v84 = *(_QWORD *)(a1 + 32);
        v85 = v84 + 1;
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v84 + 1) )
          goto LABEL_143;
        v86 = *v83;
        goto LABEL_500;
      case 0xA9u:
        v65 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        LOBYTE(v277[0]) = 2;
        *(_QWORD *)&v8 = 0;
        *(_OWORD *)v278 = 0;
        v279 = 0;
        copy_idcv((char *)v277, v65, 0.0, a6);
        v187 = *(_QWORD *)(a1 + 32);
        if ( v187 )
        {
          v188 = v187 - 1;
          *(_QWORD *)(a1 + 32) = v188;
          free_idcv((char *)(*(_QWORD *)(a1 + 24) + 32 * v188), 0.0, a6);
        }
        if ( SLOBYTE(v277[0]) == 5 )
          goto LABEL_495;
        if ( SLOBYTE(v277[0]) == 7 )
        {
          v113 = v278[0];
          if ( v278[0] )
            goto LABEL_427;
        }
        continue;
      case 0xAAu:
      case 0xD4u:
        v103 = *(_DWORD *)(a1 + 32);
        v104 = 0;
        v105 = (char **)(a1 + 72);
        v106 = *(_QWORD *)(a1 + 80);
        v52 = v106 + 1;
        if ( *(_QWORD *)(a1 + 88) >= (unsigned __int64)(v106 + 1) )
        {
          v107 = *v105;
        }
        else
        {
          v65 = *v105;
          v107 = (char *)qvector_reserve((__int64)v105, *v105, v52, 4u);
          *(_QWORD *)(a1 + 72) = v107;
          v106 = *(_QWORD *)(a1 + 80);
        }
        LOBYTE(v104) = v66 == 0xD4;
        LODWORD(i) = v103 - v104;
        *(_DWORD *)&v107[4 * v106] = i;
        ++*(_QWORD *)(a1 + 80);
        continue;
      case 0xABu:
        v173 = sub_6BFE0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 4LL;
        LODWORD(v65) = v173;
        sub_6CB70(a1, v173);
        continue;
      case 0xACu:
      case 0xADu:
        v108 = sub_6BFE0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 4LL;
        v109 = *(_QWORD *)(a1 + 24);
        i = 32 * (*(_QWORD *)(a1 + 32) - 1LL);
        v110 = (char *)(i + v109);
        v273 = (char *)(i + v109);
        switch ( *(_BYTE *)(v109 + i) )
        {
          case 2:
            goto LABEL_418;
          case 5:
            free_idcv(v110, *(double *)&v8, a6);
            *(_QWORD *)(v109 + i + 8) = 1;
            goto LABEL_418;
          case 7:
            v232 = *(_QWORD *)(v109 + i + 16);
            free_idcv(v110, *(double *)&v8, a6);
            *(_QWORD *)(i + v109 + 8) = v232 > 1;
            goto LABEL_418;
          case 9:
            *(_QWORD *)(v109 + i + 8) = *(_QWORD *)(v109 + i + 8) != 0;
            *v110 = 2;
LABEL_418:
            v233 = *((_QWORD *)v273 + 1);
            if ( v66 == 0xAD )
            {
              *((_QWORD *)v273 + 1) = v233 == 0;
              v233 = v233 == 0;
            }
            if ( v233 )
              sub_6CB70(a1, v108);
            v65 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
            LOBYTE(v277[0]) = 2;
            *(_QWORD *)&v8 = 0;
            *(_OWORD *)v278 = 0;
            v279 = 0;
            copy_idcv((char *)v277, v65, 0.0, a6);
            v234 = *(_QWORD *)(a1 + 32);
            if ( v234 )
            {
              v235 = v234 - 1;
              *(_QWORD *)(a1 + 32) = v235;
              free_idcv((char *)(*(_QWORD *)(a1 + 24) + 32 * v235), 0.0, a6);
            }
            if ( SLOBYTE(v277[0]) == 5 )
              goto LABEL_495;
            if ( SLOBYTE(v277[0]) == 7 )
            {
              v113 = v278[0];
              if ( v278[0] )
                goto LABEL_427;
            }
            continue;
          default:
            goto LABEL_459;
        }
      case 0xAEu:
        v273 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        if ( (unsigned int)idcv_string((__int64)v273, *(double *)&v8, a6) )
          goto LABEL_155;
        if ( *((_QWORD *)v273 + 2) )
          v9 = *((const char **)v273 + 1);
        else
          v9 = s1;
        v241 = (pthread_mutex_t *)qword_1557E8;
        qmutex_lock((pthread_mutex_t *)qword_1557E8);
        LODWORD(v65) = (_DWORD)v9;
        *(_DWORD *)(a1 + 120) = sub_6DD10(*(_QWORD **)(a1 + 8), v9);
        qmutex_unlock(v241);
        if ( *(_DWORD *)(a1 + 120) != 0x7FFFFFFF )
        {
          free_idcv(v273, *(double *)&v8, a6);
          *v273 = 6;
          *((_DWORD *)v273 + 2) = *(_DWORD *)(a1 + 120);
          continue;
        }
        v242 = *(__int64 (__fastcall ****)(_QWORD, const char *))(a1 + 136);
        if ( v242 )
        {
          ptr[0] = (void *)(**v242)(v242, v9);
          if ( ptr[0] != (void *)-1LL )
          {
            v65 = v274;
            copy_idcv(v273, v274, *(double *)&v8, a6);
            continue;
          }
        }
        v11 = v260;
        goto LABEL_3;
      case 0xAFu:
        if ( !sub_790E0(a1, *(double *)&v8, a6) )
          goto LABEL_155;
        if ( *(_QWORD *)(a1 + 56) > (unsigned __int64)(int)v272 )
          continue;
        if ( a2 )
        {
          if ( sub_7C770((_QWORD *)(a1 + 24), a2, *(double *)&v8, a6) )
            goto LABEL_97;
          goto LABEL_155;
        }
        v256 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        LOBYTE(v277[0]) = 2;
        *(_QWORD *)&v8 = 0;
        *(_OWORD *)v278 = 0;
        v279 = 0;
        copy_idcv((char *)v277, v256, 0.0, a6);
        v257 = *(_QWORD *)(a1 + 32);
        if ( v257 )
        {
          v258 = v257 - 1;
          *(_QWORD *)(a1 + 32) = v258;
          free_idcv((char *)(*(_QWORD *)(a1 + 24) + 32 * v258), 0.0, a6);
        }
        if ( SLOBYTE(v277[0]) == 5 )
        {
          sub_72DD0((_DWORD *)v278[0], (char *)v277, 0.0, a6);
LABEL_97:
          LOBYTE(i) = 1;
          goto LABEL_169;
        }
        if ( SLOBYTE(v277[0]) != 7 || !v278[0] )
          goto LABEL_97;
        v278[1] = nullptr;
        qfree(v278[0]);
        v278[0] = nullptr;
        v279 = 0;
        LOBYTE(i) = 1;
LABEL_169:
        if ( v274[0] == 5 )
        {
          sub_72DD0((_DWORD *)ptr[0], v274, *(double *)&v8, a6);
        }
        else if ( v274[0] == 7 && ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v276 = nullptr;
        }
        return (unsigned int)i;
      case 0xB0u:
      case 0xB1u:
      case 0xB2u:
      case 0xB3u:
      case 0xB4u:
      case 0xB5u:
      case 0xB6u:
      case 0xB7u:
      case 0xB8u:
      case 0xB9u:
      case 0xBAu:
      case 0xBBu:
      case 0xBCu:
      case 0xBDu:
      case 0xBEu:
      case 0xBFu:
      case 0xC8u:
      case 0xC9u:
      case 0xCAu:
      case 0xCBu:
      case 0xCCu:
      case 0xCDu:
      case 0xCEu:
      case 0xD0u:
      case 0xD1u:
        LODWORD(v65) = v66;
        v74 = sub_799A0((__int64 *)(a1 + 24), v66, *(double *)&v8, a6);
        goto LABEL_154;
      case 0xC0u:
        v152 = sub_6BF80(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v153 = *(_DWORD *)(a1 + 100) + v152;
        if ( v153 >= 0 )
        {
          v126 = v153;
          if ( *(_QWORD *)(a1 + 32) > (unsigned __int64)v153 )
            goto LABEL_358;
        }
        if ( !(_BYTE)under_debugger )
          interr(286);
        goto LABEL_542;
      case 0xC1u:
        v154 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v155 = *(_DWORD *)(a1 + 100) + v154;
        if ( v155 >= 0 )
        {
          v126 = v155;
          if ( *(_QWORD *)(a1 + 32) > (unsigned __int64)v155 )
            goto LABEL_358;
        }
        if ( !(_BYTE)under_debugger )
          interr(286);
        goto LABEL_542;
      case 0xC2u:
        v208 = sub_6BF80(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v209 = *(_DWORD *)(a1 + 96) + v208;
        if ( v209 >= 0 )
        {
          v126 = v209;
          if ( *(_QWORD *)(a1 + 32) > (unsigned __int64)v209 )
            goto LABEL_358;
        }
        if ( !(_BYTE)under_debugger )
          interr(287);
        goto LABEL_542;
      case 0xC3u:
        v124 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v125 = *(_DWORD *)(a1 + 96) + v124;
        if ( v125 < 0 || (v126 = v125, *(_QWORD *)(a1 + 32) <= (unsigned __int64)v125) )
        {
          if ( !(_BYTE)under_debugger )
            interr(287);
          goto LABEL_542;
        }
LABEL_358:
        v186 = (char *)(*(_QWORD *)(a1 + 24) + 32 * v126);
LABEL_359:
        v273 = v186;
        LODWORD(v65) = 0;
        v210 = deref_idcv(v186, 0, *(double *)&v8, a6);
        if ( !v210 )
          goto LABEL_155;
        v211 = *v210;
        if ( *v210 == 9 )
          goto LABEL_363;
        if ( v211 == 3 )
        {
          v65 = (char *)&xmmword_116174;
          eadd((_WORD *)v210 + 4, &xmmword_116174, (_WORD *)v210 + 4, 0, *(double *)&v8, a6);
        }
        else
        {
          if ( v211 != 2 )
            goto LABEL_459;
LABEL_363:
          ++*((_QWORD *)v210 + 1);
        }
        continue;
      case 0xC4u:
        v197 = sub_6BF80(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v198 = *(_DWORD *)(a1 + 100) + v197;
        if ( v198 >= 0 )
        {
          v163 = v198;
          if ( *(_QWORD *)(a1 + 32) > (unsigned __int64)v198 )
            goto LABEL_371;
        }
        if ( !(_BYTE)under_debugger )
          interr(286);
        goto LABEL_542;
      case 0xC5u:
        v161 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v162 = *(_DWORD *)(a1 + 100) + v161;
        if ( v162 >= 0 )
        {
          v163 = v162;
          if ( *(_QWORD *)(a1 + 32) > (unsigned __int64)v162 )
            goto LABEL_371;
        }
        if ( !(_BYTE)under_debugger )
          interr(286);
        goto LABEL_542;
      case 0xC6u:
        v195 = sub_6BF80(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v196 = *(_DWORD *)(a1 + 96) + v195;
        if ( v196 >= 0 )
        {
          v163 = v196;
          if ( *(_QWORD *)(a1 + 32) > (unsigned __int64)v196 )
            goto LABEL_371;
        }
        if ( !(_BYTE)under_debugger )
          interr(287);
        goto LABEL_542;
      case 0xC7u:
        v218 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v219 = *(_DWORD *)(a1 + 96) + v218;
        if ( v219 < 0 || (v163 = v219, *(_QWORD *)(a1 + 32) <= (unsigned __int64)v219) )
        {
          if ( !(_BYTE)under_debugger )
            interr(287);
          goto LABEL_542;
        }
LABEL_371:
        v205 = (char *)(*(_QWORD *)(a1 + 24) + 32 * v163);
LABEL_372:
        v273 = v205;
        LODWORD(v65) = 0;
        v220 = deref_idcv(v205, 0, *(double *)&v8, a6);
        if ( !v220 )
          goto LABEL_155;
        v221 = *v220;
        if ( *v220 == 9 )
          goto LABEL_376;
        if ( v221 == 3 )
        {
          v65 = (char *)&xmmword_116174;
          eadd((_WORD *)v220 + 4, &xmmword_116174, (_WORD *)v220 + 4, 1, *(double *)&v8, a6);
        }
        else
        {
          if ( v221 != 2 )
          {
LABEL_459:
            set_qerrno(0x3Du);
            goto LABEL_155;
          }
LABEL_376:
          --*((_QWORD *)v220 + 1);
        }
        continue;
      case 0xD2u:
        v274[0] = 3;
        sub_6BF40(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112), ptr, 16);
        *(_QWORD *)(a1 + 112) += 16LL;
        v65 = v274;
        sub_688B0(a1 + 24, v274);
        continue;
      case 0xD3u:
        v114 = *(_QWORD *)(a1 + 112);
        v115 = *(_QWORD **)(a1 + 128);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) == 4 )
        {
          v116 = (void *)sub_6C010(v115, v114);
          v117 = 9;
        }
        else
        {
          v116 = (void *)sub_6C010(v115, v114);
          v117 = 2;
        }
        *(_QWORD *)(a1 + 112) += 8LL;
        v274[0] = v117;
        ptr[0] = v116;
        v65 = v274;
        sub_688B0(a1 + 24, v274);
        continue;
      case 0xD5u:
        v191 = sub_6BF80(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v190 = v191;
        goto LABEL_335;
      case 0xD6u:
        v189 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v190 = v189;
LABEL_335:
        *(_DWORD *)(a1 + 120) = v190;
        v192 = (char *)sub_71A80(*(_QWORD *)(a1 + 8), v190);
        copy_idcv(v274, v192, *(double *)&v8, a6);
        goto LABEL_140;
      case 0xD7u:
        v138 = sub_6BF80(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v139 = v138;
        goto LABEL_252;
      case 0xD8u:
        v140 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v139 = v140;
LABEL_252:
        *(_DWORD *)(a1 + 120) = v139;
        v141 = (char *)sub_71A80(*(_QWORD *)(a1 + 8), v139);
        LODWORD(v65) = (_DWORD)v141;
        v80 = sub_7C770((_QWORD *)(a1 + 24), v141, *(double *)&v8, a6);
        goto LABEL_134;
      case 0xD9u:
        v167 = sub_6BF80(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v168 = v167;
        goto LABEL_379;
      case 0xDAu:
        v222 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v168 = v222;
LABEL_379:
        *(_DWORD *)(a1 + 120) = v168;
        v223 = (char *)sub_71A80(*(_QWORD *)(a1 + 8), v168);
        v65 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        v74 = copy_idcv(v223, v65, *(double *)&v8, a6);
        goto LABEL_154;
      case 0xDBu:
        i = *(_QWORD *)(a1 + 8);
        v185 = sub_6BF80(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v184 = sub_71A80(i, v185);
        goto LABEL_321;
      case 0xDCu:
        i = *(_QWORD *)(a1 + 8);
        v183 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v184 = sub_71A80(i, v183);
LABEL_321:
        v186 = (char *)v184;
        goto LABEL_359;
      case 0xDDu:
        i = *(_QWORD *)(a1 + 8);
        v204 = sub_6BF80(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        ++*(_QWORD *)(a1 + 112);
        v134 = sub_71A80(i, v204);
        goto LABEL_352;
      case 0xDEu:
        i = *(_QWORD *)(a1 + 8);
        v133 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v134 = sub_71A80(i, v133);
LABEL_352:
        v205 = (char *)v134;
        goto LABEL_372;
      case 0xDFu:
        set_qerrno(0x5Au);
        goto LABEL_161;
      case 0xE0u:
      case 0xE1u:
      case 0xE2u:
      case 0xE3u:
      case 0xE4u:
      case 0xE5u:
      case 0xE6u:
      case 0xE7u:
      case 0xE8u:
      case 0xE9u:
      case 0xEAu:
      case 0xEBu:
      case 0xECu:
      case 0xEDu:
      case 0xEEu:
      case 0xEFu:
        v88 = (void *)(v66 - 224);
LABEL_149:
        ptr[0] = v88;
        v274[0] = 2;
        v65 = v274;
        sub_688B0(a1 + 24, v274);
        continue;
      case 0xF0u:
        v212 = sub_6BFB0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112));
        *(_QWORD *)(a1 + 112) += 2LL;
        v213 = v212;
        *(_DWORD *)(a1 + 120) = v212;
        v274[0] = 5;
        v214 = (int *)operator new(0x20u);
        sub_6B170((__int64)v214, v213);
        ptr[0] = v214;
        v215 = v214[7];
        v216 = *(int *)(a1 + 120);
        if ( (_DWORD)v215 != (_DWORD)v216 )
        {
          set_error_data(0, v216);
          set_qerrno(0x5FFu);
          goto LABEL_155;
        }
        for ( i = sub_6D420(v215); ; i = sub_6D4B0(*(_QWORD *)(a1 + 8), *(int *)(i + 24)) )
        {
          v217 = sub_75750(i, i + 32);
          *(_DWORD *)(a1 + 120) = v217;
          if ( v217 != -1 || !*(_DWORD *)(i + 24) )
            break;
        }
LABEL_405:
        v231 = *(_QWORD *)(a1 + 24) + 32LL * *(int *)(*(_QWORD *)(a1 + 72) + 4LL * *(_QWORD *)(a1 + 80) - 4);
        LOBYTE(v277[0]) = 2;
        *(_QWORD *)&v8 = 0;
        *(_OWORD *)v278 = 0;
        v279 = 0;
        v273 = sub_7FD70(a1 + 24, v231, (char *)v277, 0.0, a6);
        if ( SLOBYTE(v277[0]) == 5 )
        {
          sub_72DD0((_DWORD *)v278[0], (char *)v277, 0.0, a6);
        }
        else if ( SLOBYTE(v277[0]) == 7 && v278[0] )
        {
          v278[1] = nullptr;
          qfree(v278[0]);
          v278[0] = nullptr;
          v279 = 0;
        }
        v65 = v274;
        if ( (unsigned int)move_idcv(v273, v274, 0.0, a6) )
          goto LABEL_155;
        a4 = *(_DWORD *)(a1 + 120);
        if ( a4 == -1 )
        {
          v236 = *(_QWORD *)(a1 + 80);
          v237 = *(int *)(*(_QWORD *)(a1 + 72) + 4 * v236 - 4);
          if ( v236 )
            *(_QWORD *)(a1 + 80) = v236 - 1;
          if ( *(_QWORD *)(a1 + 32) - 1LL != v237 )
          {
            set_qerrno(0x38u);
            goto LABEL_155;
          }
        }
        else
        {
          v12 = (int *)(a1 + 120);
LABEL_129:
          v13 = v260;
LABEL_5:
          v260 = v13;
          if ( a4 < 0 )
          {
            v31 = -a4;
            *v12 = v31;
LABEL_23:
            v260 = (unsigned int)(v260 + 200);
            v32 = v31;
            if ( (unsigned __int64)off_154A20 <= v31
              || (v274[0] = 2,
                  ptr[0] = nullptr,
                  v33 = off_154A28,
                  v34 = 5LL * v31,
                  (v35 = &off_154A28[5 * v32]) == nullptr) )
            {
              set_qerrno(0x57u);
              goto LABEL_155;
            }
            v266 = (const char **)v35;
            v36 = sub_6E3B0(off_154A28[v34 + 2], (char *)v277);
            v37 = *(_QWORD *)(a1 + 80);
            v38 = *(int *)(*(_QWORD *)(a1 + 72) + 4 * v37 - 4);
            if ( v37 )
              *(_QWORD *)(a1 + 80) = --v37;
            v39 = *(_DWORD *)(a1 + 32) - v38;
            v261 = v36;
            v40 = (unsigned int)(v39 - v36);
            if ( v39 < v36 )
            {
              v41 = v33[v34 + 3];
              if ( v41 )
              {
                v42 = SLODWORD(v33[v34 + 4]);
                v40 = (unsigned int)(v42 + v40);
                if ( (int)v40 < 0 )
                {
                  v39 = v36;
                }
                else
                {
                  v269 = v33;
                  v43 = &v41[32 * (int)v40];
                  v44 = (int)v40 - 1LL;
                  while ( ++v44 < v42 )
                  {
                    v45 = v43;
                    v43 += 32;
                    sub_688B0(a1 + 24, v45);
                  }
                  v39 = v261;
                  v33 = v269;
                }
              }
            }
            if ( !LOBYTE(v277[0]) )
            {
              if ( v261 == v39 )
                goto LABEL_46;
              set_error_string(0, *v266);
              set_qerrno(0x38u);
              goto LABEL_155;
            }
            ptr[0] = (void *)v39;
LABEL_46:
            v270 = (int *)&v33[v34 + 4] + 1;
            v54 = *v270;
            if ( (*v270 & 1) != 0 )
            {
              v40 = qword_154A40[2];
              if ( qword_154A40[2] )
              {
                if ( ((unsigned __int8 (__fastcall *)(double, double))qword_154A40[2])(
                       *(double *)&v8,
                       *(double *)a6.m128_u64) )
                {
                  v54 = *v270;
                  goto LABEL_50;
                }
                set_qerrno(0x5D1u);
                goto LABEL_155;
              }
            }
LABEL_50:
            if ( (v54 & 4) == 0 && !is_main_thread() )
            {
              set_error_string(0, *v266);
              set_qerrno(0x8Fu);
              goto LABEL_155;
            }
            i = *(_QWORD *)(a1 + 24) + 32 * v38;
            v55 = v33[v34 + 2];
            v262 = v39;
            v268 = i;
            if ( v39 <= 0 )
            {
LABEL_68:
              v62 = *v55 | 4;
              v59 = v34;
              v60 = v268;
              v61 = v262;
              if ( v62 == 4 )
                goto LABEL_78;
              v58 = set_qerrno(0x38u);
            }
            else
            {
              v56 = 0;
              while ( 1 )
              {
                v40 = (unsigned int)*v55;
                if ( *(_BYTE *)i != *v55 )
                  break;
LABEL_63:
                ++v56;
                i += 32;
                ++v55;
                if ( v56 >= v262 )
                  goto LABEL_68;
              }
              v40 = (unsigned int)(v40 - 2);
              switch ( v40 )
              {
                case 0LL:
                  v57 = idcv_long(i, *(double *)&v8, a6);
                  goto LABEL_62;
                case 1LL:
                  v57 = idcv_float(i, *(double *)&v8, a6);
                  goto LABEL_62;
                case 2LL:
                  if ( !v55[1] )
                    --v55;
                  goto LABEL_63;
                case 3LL:
                case 6LL:
                  v58 = set_qerrno(0x5FCu);
                  v59 = v34;
                  v60 = v268;
                  v61 = v262;
                  break;
                case 4LL:
                  v58 = set_qerrno(0x612u);
                  v59 = v34;
                  v60 = v268;
                  v61 = v262;
                  break;
                case 5LL:
                  v57 = idcv_string(i, *(double *)&v8, a6);
                  goto LABEL_62;
                case 7LL:
                  v57 = idcv_int64(i, *(double *)&v8, a6);
LABEL_62:
                  if ( !v57 )
                    goto LABEL_63;
                  goto LABEL_155;
                case 8LL:
                  if ( *(_BYTE *)i == 2 && !*(_QWORD *)(i + 8) )
                    goto LABEL_63;
                  v58 = set_qerrno(0x61Eu);
                  v59 = v34;
                  v60 = v268;
                  v61 = v262;
                  break;
                default:
                  if ( !(_BYTE)under_debugger )
                    interr(289);
                  goto LABEL_542;
              }
            }
            if ( v58 )
              goto LABEL_155;
LABEL_78:
            if ( (*(_BYTE *)v270 & 2) != 0 )
              sub_79560(a1, (__int64)v266, v60, v61, *(double *)&v8, a6);
            v64 = ((__int64 (__fastcall *)(__int64, char *, __int64, __int64, double, double))v33[v59 + 1])(
                    v60,
                    v274,
                    v37,
                    v40,
                    *(double *)&v8,
                    *(double *)a6.m128_u64);
            if ( v64 )
            {
              set_qerrno(v64);
              goto LABEL_155;
            }
            sub_78A30(a1, v61, *(double *)&v8, a6);
            if ( *(_QWORD *)(a1 + 56) <= (unsigned __int64)(int)v272 )
            {
              if ( !a2 || !(unsigned int)move_idcv(a2, v274, *(double *)&v8, a6) )
                goto LABEL_97;
              goto LABEL_155;
            }
            set_qerrno(0);
            v65 = *(char **)(a1 + 112);
            v66 = sub_6BF80(*(_QWORD **)(a1 + 128), (__int64)v65);
            ++*(_QWORD *)(a1 + 112);
            if ( v66 != 0xA9 )
            {
              v69 = (char **)(a1 + 24);
              v70 = *(_QWORD *)(a1 + 32);
              if ( *(_QWORD *)(a1 + 40) >= (unsigned __int64)(v70 + 1) )
              {
                v71 = *v69;
              }
              else
              {
                v71 = (char *)qvector_reserve((__int64)v69, *v69, v70 + 1, 0x20u);
                *(_QWORD *)(a1 + 24) = v71;
                v70 = *(_QWORD *)(a1 + 32);
              }
              v72 = &v71[32 * v70];
              *v72 = 2;
              *(_QWORD *)&v8 = 0;
              *(_OWORD *)(v72 + 8) = 0;
              *((_QWORD *)v72 + 3) = 0;
              *((_QWORD *)v72 + 1) = 0;
              ++*(_QWORD *)(a1 + 32);
              v65 = v274;
              move_idcv(v72, v274, 0.0, a6);
              goto LABEL_121;
            }
            if ( v274[0] == 5 )
            {
              v65 = v274;
              sub_72DD0((_DWORD *)ptr[0], v274, *(double *)&v8, a6);
            }
            else if ( v274[0] == 7 && ptr[0] )
            {
              ptr[1] = nullptr;
              qfree(ptr[0]);
              ptr[0] = nullptr;
              v276 = nullptr;
            }
            v274[0] = 2;
            ptr[0] = nullptr;
          }
          else
          {
            v14 = *(_QWORD **)(a1 + 8);
            v15 = 1;
            if ( v14[1] <= (unsigned __int64)a4 || (v16 = *(_QWORD *)(*v14 + 8LL * a4)) == 0 )
            {
              v16 = 0;
LABEL_19:
              set_qerrno(0x58u);
              if ( v15 || *(_QWORD *)(v16 + 8) <= 1u )
              {
                v30 = (const char *)v277;
                qsnprintf((char *)v277, 20, "#%d", *v12);
              }
              else
              {
                v30 = *(const char **)v16;
              }
              set_error_string(0, v30);
              goto LABEL_155;
            }
            if ( !*(_QWORD *)(v16 + 40) )
            {
              v15 = 0;
              goto LABEL_19;
            }
            v17 = *(_QWORD *)(a1 + 80);
            v18 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v17 - 4);
            if ( v17 )
              *(_QWORD *)(a1 + 80) = v17 - 1;
            v19 = *(_DWORD *)(v16 + 24);
            v20 = *(_DWORD *)(a1 + 32) - v18;
            v21 = v20 < v19;
            v22 = v20 - v19;
            if ( v21 )
            {
              v23 = *(_QWORD *)(v16 + 72);
              if ( v23 )
              {
                v24 = *(_QWORD *)(v16 + 64);
                if ( v24 )
                {
                  v25 = v23 + v22;
                  if ( v25 < 0 )
                    goto LABEL_37;
                  v264 = *(_DWORD *)(v16 + 24);
                  v26 = (int)v23;
                  v27 = (char *)(32LL * v25 + v24);
                  v28 = v25 - 1LL;
                  while ( ++v28 < v26 )
                  {
                    v29 = v27;
                    v27 += 32;
                    sub_688B0(a1 + 24, v29);
                  }
                  if ( *(_DWORD *)(v16 + 24) == v264 )
                    goto LABEL_37;
LABEL_90:
                  set_qerrno(0x38u);
                  if ( *(_QWORD *)(v16 + 8) )
                    v68 = *(const char **)v16;
                  else
                    v68 = s1;
                  set_error_string(0, v68);
                  goto LABEL_155;
                }
              }
            }
            if ( v19 != *(_DWORD *)(a1 + 32) - v18 )
              goto LABEL_90;
LABEL_37:
            i = (__int64)qword_1557E8;
            qmutex_lock((pthread_mutex_t *)qword_1557E8);
            v47 = *(_DWORD *)(v16 + 136);
            if ( v47 == -1 )
            {
              if ( *(_QWORD *)(v16 + 8) )
                v63 = *(const char **)v16;
              else
                v63 = s1;
              set_error_string(0, v63);
              set_qerrno(0x28u);
              qmutex_unlock((pthread_mutex_t *)i);
              goto LABEL_155;
            }
            *(_DWORD *)(v16 + 136) = v47 + 1;
            qmutex_unlock((pthread_mutex_t *)i);
            v50 = (char **)(a1 + 48);
            v51 = *(_QWORD *)(a1 + 56);
            v52 = v51 + 1;
            if ( *(_QWORD *)(a1 + 64) >= (unsigned __int64)(v51 + 1) )
            {
              v53 = *v50;
            }
            else
            {
              v53 = (char *)qvector_reserve((__int64)v50, *v50, v52, 0x18u);
              *(_QWORD *)(a1 + 48) = v53;
              v51 = *(_QWORD *)(a1 + 56);
              v52 = v51 + 1;
            }
            LODWORD(v65) = v16 + 32;
            v67 = 3 * v51;
            *(_QWORD *)(a1 + 56) = v52;
            *(_DWORD *)&v53[8 * v67 + 8] = *(_DWORD *)(a1 + 112);
            *(_QWORD *)&v53[8 * v67] = *(_QWORD *)(a1 + 104);
            *(_DWORD *)&v53[8 * v67 + 12] = *(_DWORD *)(a1 + 96);
            LODWORD(v52) = *(_DWORD *)(a1 + 100);
            *(_DWORD *)&v53[8 * v67 + 16] = v52;
            *(_DWORD *)(a1 + 96) = v18;
            *(_DWORD *)(a1 + 100) = *(_DWORD *)(a1 + 32);
            *(_QWORD *)(a1 + 128) = v16 + 32;
            *(_QWORD *)(a1 + 104) = v16;
            *(_QWORD *)(a1 + 112) = 0;
          }
        }
        break;
      case 0xF1u:
        v142 = *(_QWORD *)(a1 + 24);
        v143 = 32 * (*(_QWORD *)(a1 + 32) - 1LL);
        v273 = (char *)(v142 + v143);
        if ( *(_BYTE *)(v142 + v143) == 5 )
        {
          v265 = (char *)(v142 + v143);
          v263 = v142;
          v144 = (char *)operator new(0x20u);
          v145 = *(_QWORD **)(v263 + v143 + 8);
          LODWORD(i) = (_DWORD)v144 + 8;
          *(_QWORD *)&v8 = 0;
          *(_OWORD *)(v144 + 8) = 0;
          *(_QWORD *)v144 = v144 + 8;
          v146 = (_QWORD *)*v145;
          v267 = v145;
          v147 = v145 + 1;
          if ( (_QWORD *)*v145 != v145 + 1 )
          {
            do
            {
              LODWORD(v65) = (_DWORD)v144 + 8;
              sub_80350((_QWORD **)v144, (_QWORD *)v144 + 1, (__int64)(v146 + 4), (__int64)(v146 + 4), 0.0, a6);
              v148 = (_QWORD *)v146[1];
              if ( v148 )
              {
                do
                {
                  v149 = v148;
                  v148 = (_QWORD *)*v148;
                }
                while ( v148 );
              }
              else
              {
                v149 = (_QWORD *)v146[2];
                if ( (_QWORD *)*v149 != v146 )
                {
                  v150 = (__int64)(v146 + 2);
                  do
                  {
                    v149 = *(_QWORD **)(*(_QWORD *)v150 + 16LL);
                    v151 = *v149 == *(_QWORD *)v150;
                    v150 = *(_QWORD *)v150 + 16LL;
                  }
                  while ( !v151 );
                }
              }
              v146 = v149;
            }
            while ( v149 != v147 );
          }
          *((_DWORD *)v144 + 6) = 1;
          *((_DWORD *)v144 + 7) = *((_DWORD *)v267 + 7);
          free_idcv(v265, 0.0, a6);
          *v265 = 5;
          *(_QWORD *)(v143 + v263 + 8) = v144;
          v74 = 0;
        }
        else
        {
          LODWORD(v65) = v142 + v143;
          v74 = copy_idcv((char *)(v142 + v143), (char *)(v142 + v143), *(double *)&v8, a6);
        }
        goto LABEL_154;
      case 0xF2u:
        v273 = v274;
        if ( (unsigned __int8)sub_78040((_QWORD *)a1, &v273, *(double *)&v8, a6) )
          goto LABEL_243;
        goto LABEL_162;
      case 0xF3u:
        if ( !(unsigned __int8)sub_785C0((_QWORD *)a1, *(double *)&v8, a6) )
          goto LABEL_162;
        continue;
      case 0xF4u:
        if ( !(unsigned __int8)sub_785C0((_QWORD *)a1, *(double *)&v8, a6) )
          goto LABEL_162;
        v65 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        LOBYTE(v277[0]) = 2;
        *(_QWORD *)&v8 = 0;
        *(_OWORD *)v278 = 0;
        v279 = 0;
        copy_idcv((char *)v277, v65, 0.0, a6);
        v111 = *(_QWORD *)(a1 + 32);
        if ( v111 )
        {
          v112 = v111 - 1;
          *(_QWORD *)(a1 + 32) = v112;
          free_idcv((char *)(*(_QWORD *)(a1 + 24) + 32 * v112), 0.0, a6);
        }
        if ( SLOBYTE(v277[0]) == 5 )
          goto LABEL_495;
        if ( SLOBYTE(v277[0]) == 7 )
        {
          v113 = v278[0];
          if ( v278[0] )
            goto LABEL_427;
        }
        continue;
      case 0xF5u:
      case 0xF6u:
        v273 = v274;
        if ( !(unsigned __int8)sub_78040((_QWORD *)a1, &v273, *(double *)&v8, a6) )
          goto LABEL_162;
        if ( !v273 )
        {
          set_qerrno(0x5FEu);
          goto LABEL_155;
        }
        LODWORD(i) = 0;
        v101 = deref_idcv(v273, 0, *(double *)&v8, a6);
        if ( !v101 )
          goto LABEL_155;
        v102 = *v101;
        if ( *v101 != 9 )
        {
          if ( v102 == 3 )
          {
            eadd((_WORD *)v101 + 4, &xmmword_116174, (_WORD *)v101 + 4, v66 != 0xF5, *(double *)&v8, a6);
            goto LABEL_243;
          }
          if ( v102 != 2 )
            goto LABEL_459;
        }
        LOBYTE(i) = v66 == 0xF5;
        *((_QWORD *)v101 + 1) += 2 * (int)i - 1;
LABEL_243:
        v65 = v274;
        v74 = move_idcv((char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32), v274, *(double *)&v8, a6);
LABEL_154:
        if ( v74 )
          goto LABEL_155;
        continue;
      case 0xF7u:
        v273 = v274;
        i = a1 + 120;
        if ( !(unsigned __int8)sub_78770((_QWORD *)a1, (_DWORD *)(a1 + 120), &v273, *(double *)&v8, a6) )
          goto LABEL_155;
        if ( *(_DWORD *)i != -1 )
        {
          sub_7C770((_QWORD *)(a1 + 24), v274, *(double *)&v8, a6);
          goto LABEL_405;
        }
        v156 = v273;
        v157 = *v273;
LABEL_440:
        if ( v157 == 6 )
        {
          *(_DWORD *)(a1 + 120) = *((_DWORD *)v156 + 2);
          v238 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
          LOBYTE(v277[0]) = 2;
          *(_QWORD *)&v8 = 0;
          *(_OWORD *)v278 = 0;
          v279 = 0;
          copy_idcv((char *)v277, v238, 0.0, a6);
          v239 = *(_QWORD *)(a1 + 32);
          if ( v239 )
          {
            v240 = v239 - 1;
            *(_QWORD *)(a1 + 32) = v240;
            free_idcv((char *)(*(_QWORD *)(a1 + 24) + 32 * v240), 0.0, a6);
          }
          if ( SLOBYTE(v277[0]) == 5 )
          {
            sub_72DD0((_DWORD *)v278[0], (char *)v277, 0.0, a6);
            v13 = v260;
          }
          else
          {
            v13 = v260;
            if ( SLOBYTE(v277[0]) == 7 && v278[0] )
            {
              v278[1] = nullptr;
              qfree(v278[0]);
              v278[0] = nullptr;
              v279 = 0;
            }
          }
          v12 = (int *)(a1 + 120);
          a4 = *(_DWORD *)(a1 + 120);
          goto LABEL_5;
        }
        set_qerrno(0x605u);
        goto LABEL_155;
      case 0xF8u:
        v135 = (int *)(a1 + 96);
        goto LABEL_246;
      case 0xF9u:
        v135 = (int *)(a1 + 100);
LABEL_246:
        v136 = *v135;
        v273 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        if ( (unsigned int)idcv_long((__int64)v273, *(double *)&v8, a6) )
          goto LABEL_155;
        v137 = v273;
        i = (unsigned int)(*((_DWORD *)v273 + 2) + v136);
        if ( *(_QWORD *)(a1 + 32) > (unsigned __int64)i )
          goto LABEL_395;
        if ( !(_BYTE)under_debugger )
          interr(292);
        goto LABEL_542;
      case 0xFAu:
        v273 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        if ( (unsigned int)idcv_long((__int64)v273, *(double *)&v8, a6) )
          goto LABEL_155;
        v137 = v273;
        i = *((_QWORD *)v273 + 1);
        if ( i < 0 || (unsigned __int64)i >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL) )
        {
          if ( !(_BYTE)under_debugger )
            interr(294);
          goto LABEL_542;
        }
        LODWORD(i) = ~(_DWORD)i;
LABEL_395:
        *v137 = 10;
        v229 = v273;
        *((_QWORD *)v273 + 1) = a1;
        *((_DWORD *)v229 + 4) = i;
        if ( (int)i < 0 )
        {
          LODWORD(i) = ~(_DWORD)i;
          LODWORD(v65) = i;
          v230 = sub_71A80(*(_QWORD *)(a1 + 8), i);
        }
        else if ( !a1
               || *(_DWORD *)a1 != 289621065
               || *(_QWORD *)(a1 + 32) <= (unsigned __int64)(int)i
               || (v230 = *(_QWORD *)(a1 + 24) + 32LL * (int)i) == 0 )
        {
          if ( !(_BYTE)under_debugger )
            interr(293);
          goto LABEL_542;
        }
        if ( *(_BYTE *)v230 == 10 )
        {
          v8 = *(_OWORD *)(v230 + 8);
          *(_OWORD *)(v229 + 8) = v8;
        }
        continue;
      case 0xFBu:
        v118 = *(_QWORD *)(a1 + 32) - 4LL;
        if ( v118 < 0 )
        {
          if ( !(_BYTE)under_debugger )
            interr(296);
          goto LABEL_542;
        }
        v119 = *(_QWORD *)(a1 + 24);
        v120 = 32 * v118;
        v273 = (char *)(v119 + v120 + 32);
        if ( (unsigned int)idcv_long(v119 + v120 + 64, *(double *)&v8, a6)
          || (unsigned int)idcv_long(v119 + v120 + 96, *(double *)&v8, a6)
          || (unsigned int)set_idcv_slice(
                             v273,
                             *(_QWORD *)(v120 + v119 + 72),
                             *(_QWORD *)(v120 + v119 + 104),
                             (void ***)(v120 + v119),
                             0,
                             *(double *)&v8,
                             a6) )
        {
          goto LABEL_155;
        }
        v121 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        LOBYTE(v277[0]) = 2;
        *(_OWORD *)v278 = 0;
        v279 = 0;
        copy_idcv((char *)v277, v121, 0.0, a6);
        v122 = *(_QWORD *)(a1 + 32);
        if ( v122 )
        {
          v123 = v122 - 1;
          *(_QWORD *)(a1 + 32) = v123;
          free_idcv((char *)(*(_QWORD *)(a1 + 24) + 32 * v123), 0.0, a6);
        }
        if ( SLOBYTE(v277[0]) == 5 )
        {
          sub_72DD0((_DWORD *)v278[0], (char *)v277, 0.0, a6);
        }
        else if ( SLOBYTE(v277[0]) == 7 && v278[0] )
        {
          v278[1] = nullptr;
          qfree(v278[0]);
          v278[0] = nullptr;
          v279 = 0;
        }
        v247 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        LOBYTE(v277[0]) = 2;
        *(_OWORD *)v278 = 0;
        v279 = 0;
        copy_idcv((char *)v277, v247, 0.0, a6);
        v248 = *(_QWORD *)(a1 + 32);
        if ( v248 )
        {
          v249 = v248 - 1;
          *(_QWORD *)(a1 + 32) = v249;
          free_idcv((char *)(*(_QWORD *)(a1 + 24) + 32 * v249), 0.0, a6);
        }
        if ( SLOBYTE(v277[0]) == 5 )
        {
          sub_72DD0((_DWORD *)v278[0], (char *)v277, 0.0, a6);
        }
        else if ( SLOBYTE(v277[0]) == 7 && v278[0] )
        {
          v278[1] = nullptr;
          qfree(v278[0]);
          v278[0] = nullptr;
          v279 = 0;
        }
        i = a1 + 24;
        sub_7C770((_QWORD *)(a1 + 24), v274, 0.0, a6);
        v252 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        LOBYTE(v277[0]) = 2;
        *(_OWORD *)v278 = 0;
        v279 = 0;
        copy_idcv((char *)v277, v252, 0.0, a6);
        v253 = *(_QWORD *)(a1 + 32);
        if ( v253 )
        {
          v254 = v253 - 1;
          *(_QWORD *)(a1 + 32) = v254;
          free_idcv((char *)(*(_QWORD *)(a1 + 24) + 32 * v254), 0.0, a6);
        }
        if ( SLOBYTE(v277[0]) == 5 )
        {
          sub_72DD0((_DWORD *)v278[0], (char *)v277, 0.0, a6);
        }
        else if ( SLOBYTE(v277[0]) == 7 && v278[0] )
        {
          v278[1] = nullptr;
          qfree(v278[0]);
          v278[0] = nullptr;
          v279 = 0;
        }
        v84 = *(_QWORD *)(a1 + 32);
        v246 = v84 + 1;
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v84 + 1) )
          goto LABEL_498;
        v86 = *(char **)i;
LABEL_500:
        v255 = &v86[32 * v84];
        *v255 = 2;
        *(_QWORD *)&v8 = 0;
        *(_OWORD *)(v255 + 8) = 0;
        *((_QWORD *)v255 + 3) = 0;
        *((_QWORD *)v255 + 1) = 0;
        ++*(_QWORD *)(a1 + 32);
        v65 = v274;
        move_idcv(v255, v274, 0.0, a6);
        continue;
      case 0xFCu:
        v224 = *(_QWORD *)(a1 + 32) - 3LL;
        if ( v224 < 0 )
        {
          if ( !(_BYTE)under_debugger )
            interr(295);
          goto LABEL_542;
        }
        i = *(_QWORD *)(a1 + 24);
        v225 = 32 * v224;
        v273 = (char *)(i + v225);
        if ( (unsigned int)idcv_long(i + v225 + 32, *(double *)&v8, a6)
          || (unsigned int)idcv_long(i + v225 + 64, *(double *)&v8, a6)
          || (unsigned int)get_idcv_slice(
                             (__int128 *)v273,
                             v273,
                             *(char **)(i + v225 + 40),
                             *(char **)(i + v225 + 72),
                             0,
                             *(double *)&v8,
                             a6) )
        {
          goto LABEL_155;
        }
        v226 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        LOBYTE(v277[0]) = 2;
        *(_OWORD *)v278 = 0;
        v279 = 0;
        copy_idcv((char *)v277, v226, 0.0, a6);
        v227 = *(_QWORD *)(a1 + 32);
        if ( v227 )
        {
          v228 = v227 - 1;
          *(_QWORD *)(a1 + 32) = v228;
          free_idcv((char *)(*(_QWORD *)(a1 + 24) + 32 * v228), 0.0, a6);
        }
        if ( SLOBYTE(v277[0]) == 5 )
        {
          sub_72DD0((_DWORD *)v278[0], (char *)v277, 0.0, a6);
        }
        else if ( SLOBYTE(v277[0]) == 7 && v278[0] )
        {
          v278[1] = nullptr;
          qfree(v278[0]);
          v278[0] = nullptr;
          v279 = 0;
        }
        v65 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        LOBYTE(v277[0]) = 2;
        *(_QWORD *)&v8 = 0;
        *(_OWORD *)v278 = 0;
        v279 = 0;
        copy_idcv((char *)v277, v65, 0.0, a6);
        v250 = *(_QWORD *)(a1 + 32);
        if ( v250 )
        {
          v251 = v250 - 1;
          *(_QWORD *)(a1 + 32) = v251;
          free_idcv((char *)(*(_QWORD *)(a1 + 24) + 32 * v251), 0.0, a6);
        }
        if ( SLOBYTE(v277[0]) == 5 )
          goto LABEL_495;
        if ( SLOBYTE(v277[0]) == 7 )
        {
          v113 = v278[0];
          if ( v278[0] )
            goto LABEL_427;
        }
        continue;
      case 0xFDu:
        copy_idcv(v274, (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32), *(double *)&v8, a6);
        goto LABEL_140;
      case 0xFEu:
        v164 = *(_QWORD *)(a1 + 32) - 2LL;
        if ( v164 < 0 )
        {
          if ( !(_BYTE)under_debugger )
            interr(297);
          goto LABEL_542;
        }
        i = *(_QWORD *)(a1 + 24) + 32 * v164;
        v273 = (char *)i;
        if ( (unsigned int)idcv_long(i + 32, *(double *)&v8, a6)
          || (unsigned int)get_idcv_slice((__int128 *)v273, v273, *(char **)(i + 40), nullptr, 1, *(double *)&v8, a6) )
        {
          goto LABEL_155;
        }
        v65 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        LOBYTE(v277[0]) = 2;
        *(_QWORD *)&v8 = 0;
        *(_OWORD *)v278 = 0;
        v279 = 0;
        copy_idcv((char *)v277, v65, 0.0, a6);
        v165 = *(_QWORD *)(a1 + 32);
        if ( v165 )
        {
          v166 = v165 - 1;
          *(_QWORD *)(a1 + 32) = v166;
          free_idcv((char *)(*(_QWORD *)(a1 + 24) + 32 * v166), 0.0, a6);
        }
        if ( SLOBYTE(v277[0]) == 5 )
        {
LABEL_495:
          v65 = (char *)v277;
          sub_72DD0((_DWORD *)v278[0], (char *)v277, 0.0, a6);
        }
        else if ( SLOBYTE(v277[0]) == 7 )
        {
          v113 = v278[0];
          if ( v278[0] )
          {
LABEL_427:
            v278[1] = nullptr;
            qfree(v113);
            v278[0] = nullptr;
            v279 = 0;
          }
        }
        continue;
      case 0xFFu:
        v127 = *(_QWORD *)(a1 + 32) - 3LL;
        if ( v127 >= 0 )
        {
          v128 = *(_QWORD *)(a1 + 24);
          v129 = 32 * v127;
          v273 = (char *)(v128 + v129 + 32);
          if ( (unsigned int)idcv_long(v128 + v129 + 64, *(double *)&v8, a6)
            || (unsigned int)set_idcv_slice(
                               v273,
                               *(_QWORD *)(v129 + v128 + 72),
                               0,
                               (void ***)(v129 + v128),
                               1,
                               *(double *)&v8,
                               a6) )
          {
            goto LABEL_155;
          }
          v130 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
          LOBYTE(v277[0]) = 2;
          *(_OWORD *)v278 = 0;
          v279 = 0;
          copy_idcv((char *)v277, v130, 0.0, a6);
          v131 = *(_QWORD *)(a1 + 32);
          if ( v131 )
          {
            v132 = v131 - 1;
            *(_QWORD *)(a1 + 32) = v132;
            free_idcv((char *)(*(_QWORD *)(a1 + 24) + 32 * v132), 0.0, a6);
          }
          if ( SLOBYTE(v277[0]) == 5 )
          {
            sub_72DD0((_DWORD *)v278[0], (char *)v277, 0.0, a6);
          }
          else if ( SLOBYTE(v277[0]) == 7 && v278[0] )
          {
            v278[1] = nullptr;
            qfree(v278[0]);
            v278[0] = nullptr;
            v279 = 0;
          }
          i = a1 + 24;
          sub_7C770((_QWORD *)(a1 + 24), v274, 0.0, a6);
          v243 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
          LOBYTE(v277[0]) = 2;
          *(_OWORD *)v278 = 0;
          v279 = 0;
          copy_idcv((char *)v277, v243, 0.0, a6);
          v244 = *(_QWORD *)(a1 + 32);
          if ( v244 )
          {
            v245 = v244 - 1;
            *(_QWORD *)(a1 + 32) = v245;
            free_idcv((char *)(*(_QWORD *)(a1 + 24) + 32 * v245), 0.0, a6);
          }
          if ( SLOBYTE(v277[0]) == 5 )
          {
            sub_72DD0((_DWORD *)v278[0], (char *)v277, 0.0, a6);
          }
          else if ( SLOBYTE(v277[0]) == 7 && v278[0] )
          {
            v278[1] = nullptr;
            qfree(v278[0]);
            v278[0] = nullptr;
            v279 = 0;
          }
          v84 = *(_QWORD *)(a1 + 32);
          v246 = v84 + 1;
          if ( *(_QWORD *)(a1 + 40) >= (unsigned __int64)(v84 + 1) )
          {
            v86 = *(char **)i;
            goto LABEL_500;
          }
LABEL_498:
          v86 = (char *)qvector_reserve(a1 + 24, *(char **)i, v246, 0x20u);
          *(_QWORD *)(a1 + 24) = v86;
          v84 = *(_QWORD *)(a1 + 32);
          goto LABEL_500;
        }
        if ( !(_BYTE)under_debugger )
          interr(298);
        goto LABEL_542;
      case 0u:
      case 1u:
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 8u:
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
      case 0xDu:
      case 0xEu:
      case 0xFu:
LABEL_315:
        *(_DWORD *)(a1 + 120) = v31;
        goto LABEL_23;
      case 0x10u:
      case 0x11u:
      case 0x12u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x16u:
      case 0x17u:
      case 0x18u:
      case 0x19u:
      case 0x1Au:
      case 0x1Bu:
      case 0x1Cu:
      case 0x1Du:
      case 0x1Eu:
      case 0x1Fu:
        a4 = v66 - 16;
LABEL_128:
        v12 = (int *)(a1 + 120);
        *(_DWORD *)(a1 + 120) = a4;
        goto LABEL_129;
      case 0x20u:
      case 0x21u:
      case 0x22u:
      case 0x23u:
      case 0x24u:
      case 0x25u:
      case 0x26u:
      case 0x27u:
      case 0x28u:
      case 0x29u:
      case 0x2Au:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Eu:
      case 0x2Fu:
        v78 = v66 - 32;
LABEL_131:
        *(_DWORD *)(a1 + 120) = v78;
        v79 = *(_DWORD *)(a1 + 100) + v78;
        if ( v79 >= 0 && *(_QWORD *)(a1 + 32) > (unsigned __int64)v79 )
          goto LABEL_133;
        if ( !(_BYTE)under_debugger )
          interr(286);
        goto LABEL_542;
      case 0x30u:
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x34u:
      case 0x35u:
      case 0x36u:
      case 0x37u:
      case 0x38u:
      case 0x39u:
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
      case 0x3Du:
      case 0x3Eu:
      case 0x3Fu:
        v100 = v66 - 48;
LABEL_188:
        *(_DWORD *)(a1 + 120) = v100;
        v79 = *(_DWORD *)(a1 + 96) + v100;
        if ( v79 < 0 || *(_QWORD *)(a1 + 32) <= (unsigned __int64)v79 )
        {
          if ( !(_BYTE)under_debugger )
            interr(287);
          goto LABEL_542;
        }
LABEL_133:
        v65 = (char *)(*(_QWORD *)(a1 + 24) + 32LL * v79);
        v80 = sub_7C770((_QWORD *)(a1 + 24), v65, *(double *)&v8, a6);
LABEL_134:
        if ( !v80 )
          goto LABEL_155;
        continue;
      case 0x40u:
      case 0x41u:
      case 0x42u:
      case 0x43u:
      case 0x44u:
      case 0x45u:
      case 0x46u:
      case 0x47u:
      case 0x48u:
      case 0x49u:
      case 0x4Au:
      case 0x4Bu:
      case 0x4Cu:
      case 0x4Du:
      case 0x4Eu:
      case 0x4Fu:
        v75 = v66 - 64;
LABEL_124:
        *(_DWORD *)(a1 + 120) = v75;
        v76 = *(_DWORD *)(a1 + 100) + v75;
        if ( v76 >= 0 )
        {
          v77 = *(_QWORD *)(a1 + 32);
          if ( v77 > v76 )
            goto LABEL_153;
        }
        if ( !(_BYTE)under_debugger )
          interr(286);
        goto LABEL_542;
      case 0x50u:
      case 0x51u:
      case 0x52u:
      case 0x53u:
      case 0x54u:
      case 0x55u:
      case 0x56u:
      case 0x57u:
      case 0x58u:
      case 0x59u:
      case 0x5Au:
      case 0x5Bu:
      case 0x5Cu:
      case 0x5Du:
      case 0x5Eu:
      case 0x5Fu:
        v89 = v66 - 80;
LABEL_151:
        *(_DWORD *)(a1 + 120) = v89;
        v76 = *(_DWORD *)(a1 + 96) + v89;
        if ( v76 < 0 || (v77 = *(_QWORD *)(a1 + 32), v77 <= v76) )
        {
          if ( !(_BYTE)under_debugger )
            interr(287);
          goto LABEL_542;
        }
LABEL_153:
        v90 = *(_QWORD *)(a1 + 24);
        v65 = (char *)(v90 + 32 * v77 - 32);
        v74 = copy_idcv((char *)(v90 + 32LL * v76), v65, *(double *)&v8, a6);
        goto LABEL_154;
      case 0x60u:
      case 0x61u:
      case 0x62u:
      case 0x63u:
      case 0x64u:
      case 0x65u:
      case 0x66u:
      case 0x67u:
      case 0x68u:
      case 0x69u:
      case 0x6Au:
      case 0x6Bu:
      case 0x6Cu:
      case 0x6Du:
      case 0x6Eu:
      case 0x6Fu:
        v81 = v66 - 96;
LABEL_137:
        *(_DWORD *)(a1 + 120) = v81;
        v82 = *(_DWORD *)(a1 + 100) + v81;
        if ( v82 >= 0 && *(_QWORD *)(a1 + 32) > (unsigned __int64)v82 )
          goto LABEL_139;
        if ( !(_BYTE)under_debugger )
          interr(286);
        goto LABEL_542;
      case 0x70u:
      case 0x71u:
      case 0x72u:
      case 0x73u:
      case 0x74u:
      case 0x75u:
      case 0x76u:
      case 0x77u:
      case 0x78u:
      case 0x79u:
      case 0x7Au:
      case 0x7Bu:
      case 0x7Cu:
      case 0x7Du:
      case 0x7Eu:
      case 0x7Fu:
        v87 = v66 - 112;
LABEL_145:
        *(_DWORD *)(a1 + 120) = v87;
        v82 = *(_DWORD *)(a1 + 96) + v87;
        if ( v82 < 0 || *(_QWORD *)(a1 + 32) <= (unsigned __int64)v82 )
        {
          if ( !(_BYTE)under_debugger )
            interr(287);
          goto LABEL_542;
        }
LABEL_139:
        copy_idcv(v274, (char *)(*(_QWORD *)(a1 + 24) + 32LL * v82), *(double *)&v8, a6);
LABEL_140:
        if ( v274[0] == 10 && !deref_idcv(v274, 2, *(double *)&v8, a6) )
          goto LABEL_155;
        v83 = (char **)(a1 + 24);
        v84 = *(_QWORD *)(a1 + 32);
        v85 = v84 + 1;
        if ( *(_QWORD *)(a1 + 40) >= (unsigned __int64)(v84 + 1) )
        {
          v86 = *v83;
        }
        else
        {
LABEL_143:
          v86 = (char *)qvector_reserve((__int64)v83, *v83, v85, 0x20u);
          *(_QWORD *)(a1 + 24) = v86;
          v84 = *(_QWORD *)(a1 + 32);
        }
        goto LABEL_500;
    }
  }
}
// 7D0F0: variable 'v37' is possibly undefined
// 7D0F0: variable 'v40' is possibly undefined
// 7D412: variable 'v52' is possibly undefined
// 7D412: variable 'v48' is possibly undefined
// 7D412: variable 'v49' is possibly undefined
// 7D412: variable 'v259' is possibly undefined
// 116174: using guessed type __int128 xmmword_116174;
// 154A20: using guessed type int *off_154A20;
// 154A28: using guessed type char **off_154A28;
// 154A40: using guessed type __int64 qword_154A40[4];
// 154A50: using guessed type __int64 (__fastcall *)(double, double);
// 154A68: using guessed type __int64 qword_154A68[3];
// 155620: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
// 158B40: using guessed type __int64 under_debugger;
