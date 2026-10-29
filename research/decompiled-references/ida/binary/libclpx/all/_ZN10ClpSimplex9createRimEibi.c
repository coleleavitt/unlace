__int64 __fastcall ClpSimplex::createRim(ClpSimplex *this, int a2, char a3, int a4)
{
  __int64 v6; // rax
  __int64 (*v7)(void); // rax
  char v8; // r13
  int v9; // eax
  int v10; // r14d
  char v11; // bp
  int v12; // edx
  int v13; // r15d
  void *v14; // rdi
  int v15; // r14d
  int v16; // ebp
  int v17; // ebp
  unsigned __int64 v18; // rbp
  __int64 v19; // rax
  void *v20; // rdi
  void *v21; // rdi
  __int64 v22; // rax
  void *v23; // rdi
  __int64 v24; // rax
  void *v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  __int64 v28; // rbp
  int v29; // edx
  void *v30; // rdi
  int v31; // eax
  __int64 v32; // rbp
  int v33; // edx
  void *v34; // rdi
  int v35; // edx
  __int64 (__fastcall ***v36)(_QWORD, _QWORD, _QWORD, double *, _QWORD, __int64); // rdi
  __int64 v37; // r12
  double v38; // xmm1_8
  __int64 v39; // rdi
  __int64 v40; // rdx
  int v41; // esi
  __int64 v42; // r13
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rax
  int v46; // ecx
  unsigned int v47; // r14d
  int *v48; // rdi
  unsigned __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v53; // rdi
  double v54; // xmm5_8
  __int64 v55; // r8
  __int64 v56; // rax
  int v57; // ecx
  __int64 v58; // rsi
  double v59; // xmm1_8
  double v60; // xmm4_8
  double v61; // xmm0_8
  double *v62; // rsi
  __int64 v63; // rbp
  __int64 v64; // rdx
  __int64 v65; // rax
  int v66; // r13d
  int v67; // r13d
  CoinIndexedVector *v68; // r12
  __int64 v69; // r12
  CoinIndexedVector *v70; // rbp
  int v71; // eax
  ClpPackedMatrix *v72; // r14
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdi
  int v76; // ecx
  char v77; // r10
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  CoinFactorization *v82; // rdi
  char v83; // cl
  __int64 v84; // rdx
  int v85; // eax
  unsigned int v86; // r14d
  __int64 v87; // r15
  void *v88; // rdi
  double v89; // xmm1_8
  int v90; // edx
  int v91; // ecx
  __int64 v92; // rax
  _BYTE *v93; // rdx
  __int64 (__fastcall ***v94)(_QWORD, _QWORD, _QWORD, double *, _QWORD, __int64); // rdi
  __int64 v95; // rax
  double v96; // xmm9_8
  __int64 v97; // rdi
  double v98; // xmm6_8
  __int64 v99; // rdx
  __int64 v100; // rsi
  double v101; // xmm0_8
  __int64 v102; // rcx
  double v103; // xmm0_8
  double v104; // xmm1_8
  double v105; // xmm1_8
  double v106; // xmm12_8
  char v107; // al
  __int64 v108; // rbp
  unsigned __int64 v109; // rax
  _QWORD *v110; // rbp
  int v111; // esi
  __int64 v112; // r12
  void *v113; // rdi
  __int64 v114; // rax
  unsigned __int64 v115; // rax
  _QWORD *v116; // rbp
  int v117; // esi
  void *v118; // rdi
  __int64 v119; // rax
  __int64 v120; // rcx
  int j; // eax
  double *v122; // rdx
  __int64 v123; // rdx
  int v124; // eax
  double *v125; // rcx
  __int64 v126; // rax
  int v127; // ecx
  __int64 v128; // rsi
  double v129; // xmm1_8
  double v130; // xmm4_8
  double v131; // xmm0_8
  double *v132; // rsi
  double *v133; // rsi
  double *v134; // r8
  double v135; // xmm4_8
  double v136; // xmm1_8
  double *v137; // rsi
  double *v138; // r8
  double v139; // xmm13_8
  double v140; // xmm12_8
  double *v141; // rsi
  double *v142; // r9
  double v143; // xmm4_8
  double v144; // xmm1_8
  __int64 v145; // rdi
  __int64 v146; // rax
  int v147; // edx
  double v148; // xmm0_8
  _BYTE *v149; // rcx
  int v150; // eax
  unsigned __int64 v151; // rax
  CoinMessageHandler *v152; // rdi
  int v153; // esi
  __int64 v154; // rax
  __int64 v155; // rdi
  int v156; // eax
  __int64 v157; // rax
  __int64 (__fastcall ***v158)(_QWORD, _QWORD, _QWORD, double *, _QWORD, __int64); // rdi
  __int64 v159; // rax
  int v160; // edx
  __int64 v161; // rsi
  __int64 v162; // rdx
  double v163; // xmm2_8
  double v164; // xmm3_8
  double v165; // xmm6_8
  double v166; // xmm0_8
  double v167; // xmm7_8
  double v168; // xmm1_8
  double v169; // xmm0_8
  int v170; // eax
  __int64 v171; // rax
  int v172; // ecx
  __int64 v173; // rsi
  double v174; // xmm0_8
  double v175; // xmm1_8
  double *v176; // rsi
  __int64 v177; // rax
  int v178; // ecx
  __int64 v179; // rax
  int v180; // ecx
  _QWORD *v181; // rax
  _QWORD *v182; // rax
  _QWORD *v183; // rax
  _QWORD *v184; // rax
  int v185; // esi
  double *v186; // rsi
  double *v187; // rdi
  double v188; // xmm11_8
  double v189; // xmm1_8
  __int64 v190; // rax
  double v191; // xmm0_8
  __int64 v192; // rax
  int v193; // edx
  double v194; // xmm0_8
  _BYTE *v195; // rcx
  __int64 v196; // rcx
  double v197; // xmm0_8
  __int64 v198; // rax
  int v199; // esi
  double v200; // xmm0_8
  _BYTE *v201; // rdx
  CoinIndexedVector **v202; // r15
  CoinIndexedVector **v203; // r14
  CoinIndexedVector *v204; // rdi
  __int64 v205; // rax
  __int64 v206; // r9
  int *v207; // rdx
  int v208; // esi
  __int64 v209; // rax
  char *v210; // rdi
  char v211; // dl
  char v212; // cl
  double v213; // xmm1_8
  double v214; // xmm0_8
  double v215; // xmm6_8
  char v216; // dl
  double v217; // xmm5_8
  __int64 v218; // rax
  int v219; // ecx
  __int64 v220; // rsi
  double v221; // xmm0_8
  double v222; // xmm1_8
  double *v223; // rsi
  double *v224; // rsi
  double *v225; // rdi
  double v226; // xmm7_8
  double v227; // xmm1_8
  __int64 v228; // rax
  int v229; // ecx
  __int64 v230; // rsi
  double v231; // xmm0_8
  double v232; // xmm1_8
  double *v233; // rsi
  double *v234; // rsi
  double *v235; // rdi
  double v236; // xmm7_8
  double v237; // xmm1_8
  __int64 v238; // rax
  int v239; // ecx
  __int64 v240; // rsi
  double v241; // xmm0_8
  double v242; // xmm1_8
  double *v243; // rsi
  double *v244; // rsi
  double *v245; // rdi
  double v246; // xmm11_8
  double v247; // xmm1_8
  unsigned __int64 v248; // rax
  const void *v249; // rdi
  ClpPackedMatrix *v250; // rax
  char *v251; // rdi
  unsigned __int64 v252; // rdi
  __int64 v253; // rax
  void *v254; // rdi
  void *v255; // rdi
  unsigned __int64 v256; // r12
  __int64 v257; // rax
  void *v258; // rdi
  __int64 v259; // rax
  void *v260; // rdi
  __int64 v261; // rax
  __int64 v262; // rcx
  __int64 v263; // rsi
  __int64 v264; // rax
  __int64 v265; // rsi
  __int64 v266; // rax
  char v267; // di
  char v268; // di
  void *v269; // rdi
  void *v270; // rdi
  int v271; // eax
  __int64 v272; // rcx
  __int64 i; // rax
  double v274; // xmm1_8
  double v275; // xmm7_8
  double v276; // xmm0_8
  double v277; // xmm0_8
  double v278; // xmm4_8
  double v279; // xmm1_8
  CoinMessageHandler *v280; // rax
  CoinMessageHandler *v281; // rax
  double v282; // xmm0_8
  __int64 v283; // rax
  char v284; // dl
  __int64 v285; // rax
  __int64 v286; // rdx
  double v287; // xmm5_8
  char v288; // al
  bool v289; // zf
  double v290; // xmm5_8
  char v291; // [rsp+8h] [rbp-A0h]
  int v292; // [rsp+8h] [rbp-A0h]
  unsigned int v293; // [rsp+Ch] [rbp-9Ch]
  char v294; // [rsp+Ch] [rbp-9Ch]
  char v295; // [rsp+Ch] [rbp-9Ch]
  char v296; // [rsp+Ch] [rbp-9Ch]
  int v297; // [rsp+10h] [rbp-98h]
  char v298; // [rsp+10h] [rbp-98h]
  int v299; // [rsp+14h] [rbp-94h]
  char v300; // [rsp+18h] [rbp-90h]
  char v301; // [rsp+18h] [rbp-90h]
  char v302; // [rsp+18h] [rbp-90h]
  ClpPackedMatrix *v303; // [rsp+18h] [rbp-90h]
  char v304; // [rsp+4Ah] [rbp-5Eh]
  char v305; // [rsp+4Bh] [rbp-5Dh]
  int v306; // [rsp+4Ch] [rbp-5Ch] BYREF
  double v307; // [rsp+50h] [rbp-58h] BYREF
  double v308; // [rsp+58h] [rbp-50h] BYREF
  double v309; // [rsp+60h] [rbp-48h] BYREF
  double v310[8]; // [rsp+68h] [rbp-40h] BYREF

  v6 = *((_QWORD *)this + 43);
  v306 = a2;
  LODWORD(v6) = *(_DWORD *)(v6 + 104);
  *((_DWORD *)this + 431) = 0;
  v299 = v6;
  v7 = *(__int64 (**)(void))(**((_QWORD **)this + 24) + 168LL);
  if ( (char *)v7 != (char *)ClpMatrixBase::canGetRowCopy )
  {
    v292 = a4;
    v107 = v7();
    a4 = v292;
    if ( !v107 )
      a3 = 0;
  }
  if ( a4 == -1 )
  {
    v291 = 0;
    v304 = 1;
    LOBYTE(a4) = 0;
    v8 = 0;
  }
  else
  {
    v291 = 1;
    v304 = 0;
    if ( (a4 & 4) != 0 )
      v8 = *((_BYTE *)this + 316) & 1;
    else
      v8 = 0;
  }
  if ( v306 != 63 )
  {
    v9 = *((_DWORD *)this + 338);
    v10 = *((_DWORD *)this + 26);
    v11 = 0;
    v12 = *((_DWORD *)this + 27);
    goto LABEL_7;
  }
  v289 = *((_QWORD *)this + 33) == 0;
  *((_DWORD *)this + 292) = -1;
  if ( v289 )
  {
    v296 = a4;
    ClpSimplex::createStatus(this);
    LOBYTE(a4) = v296;
  }
  v11 = v8 ^ 1;
  if ( *((_DWORD *)this + 80) == 10 )
  {
    v202 = (CoinIndexedVector **)((char *)this + 1056);
    v203 = (CoinIndexedVector **)((char *)this + 1088);
    CoinMessageHandler::setLogLevel(*((CoinMessageHandler **)this + 43), 0);
    if ( *((_QWORD *)this + 132) )
    {
      do
      {
        v204 = *v202++;
        CoinIndexedVector::clear(v204);
      }
      while ( v203 != v202 );
      v8 = 1;
      v11 = 0;
      CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
      CoinIndexedVector::clear(*((CoinIndexedVector **)this + 139));
      v9 = (*(__int64 (__fastcall **)(_QWORD, ClpSimplex *, __int64, char *))(**((_QWORD **)this + 24) + 320LL))(
             *((_QWORD *)this + 24),
             this,
             2,
             (char *)this + 1356);
      v10 = *((_DWORD *)this + 26);
      *((_DWORD *)this + 338) = v9;
      v12 = *((_DWORD *)this + 27);
      v291 = 0;
      v304 = 1;
      goto LABEL_7;
    }
    goto LABEL_131;
  }
  v81 = *((_QWORD *)this + 158);
  if ( !v81 )
    goto LABEL_131;
  v82 = *(CoinFactorization **)(v81 + 8);
  if ( *(int *)(*((_QWORD *)this + 43) + 104LL) <= 2 )
  {
    if ( v82 )
    {
      v294 = a4;
      CoinFactorization::messageLevel(v82, 0);
      v83 = v294;
      goto LABEL_127;
    }
LABEL_332:
    if ( (a4 & 2) != 0 )
      goto LABEL_333;
    goto LABEL_131;
  }
  if ( !v82 )
    goto LABEL_332;
  v185 = 3;
  v295 = a4;
  if ( *((int *)v82 + 124) >= 3 )
    v185 = *((_DWORD *)v82 + 124);
  CoinFactorization::messageLevel(v82, v185);
  v83 = v295;
LABEL_127:
  if ( (v83 & 2) != 0 )
  {
    v81 = *((_QWORD *)this + 158);
    v84 = *(_QWORD *)(v81 + 8);
    if ( v84 )
    {
      v85 = *(_DWORD *)(v84 + 32);
      goto LABEL_130;
    }
LABEL_333:
    v85 = *(_DWORD *)(*(_QWORD *)(v81 + 16) + 36LL);
LABEL_130:
    if ( *((_DWORD *)this + 26) == v85 )
    {
      v267 = v291;
      if ( *((_QWORD *)this + 33) )
        v267 = 0;
      v291 = v267;
      v268 = v304;
      if ( *((_QWORD *)this + 33) )
        v268 = 1;
      v304 = v268;
    }
  }
LABEL_131:
  v9 = (*(__int64 (__fastcall **)(_QWORD, ClpSimplex *, __int64, char *))(**((_QWORD **)this + 24) + 320LL))(
         *((_QWORD *)this + 24),
         this,
         2,
         (char *)this + 1356);
  *((_DWORD *)this + 338) = v9;
  v10 = *((_DWORD *)this + 26);
  v12 = *((_DWORD *)this + 27);
  if ( v9 && v11 )
  {
    v86 = v12 + v10;
    v87 = operator new[]((int)(v86 + v9));
    memset((void *)(v87 + (int)v86), 0, *((int *)this + 338));
    CoinMemcpyN<unsigned char>(*((_QWORD *)this + 33), v86, v87);
    v88 = *((void **)this + 33);
    if ( v88 )
      operator delete[](v88);
    *((_QWORD *)this + 33) = v87;
    v9 = *((_DWORD *)this + 338);
    v10 = *((_DWORD *)this + 26);
    v12 = *((_DWORD *)this + 27);
  }
LABEL_7:
  v13 = v9 + v10;
  v293 = v9 + v10 + v12;
  if ( (*((_BYTE *)this + 338) & 1) == 0 )
    goto LABEL_33;
  v14 = *((void **)this + 129);
  v15 = *((_DWORD *)this + 122);
  v297 = *((_DWORD *)this + 123);
  if ( v14 )
  {
    if ( v13 > *((_DWORD *)this + 123) )
    {
      *((_DWORD *)this + 123) = v13;
      v16 = v13;
      if ( v15 >= v12 )
      {
        v12 = v15;
        goto LABEL_13;
      }
    }
    else
    {
      if ( v15 >= v12 )
        goto LABEL_33;
      v16 = *((_DWORD *)this + 123);
    }
    *((_DWORD *)this + 122) = v12;
LABEL_13:
    v17 = 2 * (v12 + v16);
    operator delete[](v14);
    goto LABEL_14;
  }
  *((_DWORD *)this + 123) = v13;
  *((_DWORD *)this + 122) = v12;
  v17 = 2 * v293;
LABEL_14:
  if ( (unsigned __int64)v17 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_537;
  v18 = 8LL * v17;
  v19 = operator new[](v18);
  v20 = *((void **)this + 123);
  *((_QWORD *)this + 129) = v19;
  if ( v20 )
    operator delete[](v20);
  v21 = *((void **)this + 126);
  if ( v21 )
    operator delete[](v21);
  *((_QWORD *)this + 123) = operator new[](v18);
  v22 = operator new[](v18);
  v23 = *((void **)this + 147);
  *((_QWORD *)this + 126) = v22;
  if ( v23 )
    operator delete[](v23);
  v24 = operator new[](v18);
  v25 = *((void **)this + 150);
  *((_QWORD *)this + 147) = v24;
  if ( v25 )
    operator delete[](v25);
  v26 = operator new[](v18);
  v289 = *((_QWORD *)this + 84) == 0;
  *((_QWORD *)this + 150) = v26;
  if ( v289 )
  {
    v291 = 1;
    v304 = 0;
    v11 = 1;
  }
  else
  {
    v27 = 4 * *((_DWORD *)this + 121);
    if ( v27 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_537;
    v28 = operator new[](8 * v27);
    v29 = 4 * *((_DWORD *)this + 121);
    if ( v29 )
    {
      if ( v29 / 8 <= 0 )
      {
        v182 = (_QWORD *)v28;
      }
      else
      {
        v181 = (_QWORD *)v28;
        do
        {
          *v181 = 0x3FF0000000000000LL;
          v181 += 8;
          *(v181 - 7) = 0x3FF0000000000000LL;
          *(v181 - 6) = 0x3FF0000000000000LL;
          *(v181 - 5) = 0x3FF0000000000000LL;
          *(v181 - 4) = 0x3FF0000000000000LL;
          *(v181 - 3) = 0x3FF0000000000000LL;
          *(v181 - 2) = 0x3FF0000000000000LL;
          *(v181 - 1) = 0x3FF0000000000000LL;
        }
        while ( v181 != (_QWORD *)(v28 + (((unsigned int)(v29 / 8 - 1) + 1LL) << 6)) );
        v182 = (_QWORD *)(v28 + ((v29 / 8 - 1 + 1LL) << 6));
      }
      switch ( v29 % 8 )
      {
        case 1:
          goto LABEL_449;
        case 2:
          goto LABEL_448;
        case 3:
          goto LABEL_447;
        case 4:
          goto LABEL_446;
        case 5:
          goto LABEL_445;
        case 6:
          goto LABEL_444;
        case 7:
          v182[6] = 0x3FF0000000000000LL;
LABEL_444:
          v182[5] = 0x3FF0000000000000LL;
LABEL_445:
          v182[4] = 0x3FF0000000000000LL;
LABEL_446:
          v182[3] = 0x3FF0000000000000LL;
LABEL_447:
          v182[2] = 0x3FF0000000000000LL;
LABEL_448:
          v182[1] = 0x3FF0000000000000LL;
LABEL_449:
          *v182 = 0x3FF0000000000000LL;
          break;
        default:
          break;
      }
    }
    CoinMemcpyN<double>(*((_QWORD *)this + 84), *((unsigned int *)this + 26), v28);
    CoinMemcpyN<double>(
      *((_QWORD *)this + 84) + 8LL * v297,
      *((unsigned int *)this + 26),
      v28 + 8LL * *((int *)this + 121));
    CoinMemcpyN<double>(
      *((_QWORD *)this + 84) + 16LL * v297,
      *((unsigned int *)this + 26),
      v28 + 16LL * *((_DWORD *)this + 121));
    CoinMemcpyN<double>(
      *((_QWORD *)this + 84) + 24LL * v297,
      *((unsigned int *)this + 26),
      v28 + 24LL * *((_DWORD *)this + 121));
    v30 = *((void **)this + 84);
    if ( v30 )
      operator delete[](v30);
    v31 = *((_DWORD *)this + 120);
    *((_QWORD *)this + 84) = v28;
    if ( (unsigned __int64)(4 * v31) > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_537;
    v32 = operator new[](32LL * v31);
    v33 = 4 * *((_DWORD *)this + 120);
    if ( v33 )
    {
      if ( v33 / 8 <= 0 )
      {
        v184 = (_QWORD *)v32;
      }
      else
      {
        v183 = (_QWORD *)v32;
        do
        {
          *v183 = 0x3FF0000000000000LL;
          v183 += 8;
          *(v183 - 7) = 0x3FF0000000000000LL;
          *(v183 - 6) = 0x3FF0000000000000LL;
          *(v183 - 5) = 0x3FF0000000000000LL;
          *(v183 - 4) = 0x3FF0000000000000LL;
          *(v183 - 3) = 0x3FF0000000000000LL;
          *(v183 - 2) = 0x3FF0000000000000LL;
          *(v183 - 1) = 0x3FF0000000000000LL;
        }
        while ( v183 != (_QWORD *)(v32 + (((unsigned int)(v33 / 8 - 1) + 1LL) << 6)) );
        v184 = (_QWORD *)(v32 + ((v33 / 8 - 1 + 1LL) << 6));
      }
      switch ( v33 % 8 )
      {
        case 1:
          goto LABEL_452;
        case 2:
          goto LABEL_451;
        case 3:
          goto LABEL_457;
        case 4:
          goto LABEL_456;
        case 5:
          goto LABEL_455;
        case 6:
          goto LABEL_454;
        case 7:
          v184[6] = 0x3FF0000000000000LL;
LABEL_454:
          v184[5] = 0x3FF0000000000000LL;
LABEL_455:
          v184[4] = 0x3FF0000000000000LL;
LABEL_456:
          v184[3] = 0x3FF0000000000000LL;
LABEL_457:
          v184[2] = 0x3FF0000000000000LL;
LABEL_451:
          v184[1] = 0x3FF0000000000000LL;
LABEL_452:
          *v184 = 0x3FF0000000000000LL;
          break;
        default:
          break;
      }
    }
    CoinMemcpyN<double>(*((_QWORD *)this + 85), *((unsigned int *)this + 27), v32);
    CoinMemcpyN<double>(
      *((_QWORD *)this + 85) + 8LL * v15,
      *((unsigned int *)this + 27),
      v32 + 8LL * *((int *)this + 120));
    CoinMemcpyN<double>(
      *((_QWORD *)this + 85) + 16LL * v15,
      *((unsigned int *)this + 27),
      v32 + 16LL * *((_DWORD *)this + 120));
    CoinMemcpyN<double>(
      *((_QWORD *)this + 85) + 24LL * v15,
      *((unsigned int *)this + 27),
      v32 + 24LL * *((_DWORD *)this + 120));
    v34 = *((void **)this + 85);
    if ( v34 )
      operator delete[](v34);
    *((_QWORD *)this + 85) = v32;
    v291 = 1;
    v11 = 1;
    v304 = 0;
  }
LABEL_33:
  v35 = v306;
  v298 = 1;
  if ( v306 == 63 )
  {
    v71 = *((_DWORD *)this + 84);
    v72 = *((ClpPackedMatrix **)this + 24);
    if ( (v71 & 0x100) != 0 )
      a3 = 0;
    if ( (v71 & 0x80u) != 0 )
    {
      if ( !v72 )
      {
        v72 = (ClpPackedMatrix *)operator new(0x78u);
        ClpPackedMatrix::ClpPackedMatrix(v72);
        *((_QWORD *)this + 24) = v72;
        v71 = *((_DWORD *)this + 84);
      }
      v73 = 10;
      v298 = 0;
      v74 = 14;
    }
    else
    {
      if ( v72 )
      {
        v73 = 11;
      }
      else
      {
        v72 = (ClpPackedMatrix *)operator new(0x78u);
        ClpPackedMatrix::ClpPackedMatrix(v72);
        *((_QWORD *)this + 24) = v72;
        v71 = *((_DWORD *)this + 84);
        v73 = 11;
        v298 = 1;
      }
      v74 = 15;
    }
    if ( v8 )
    {
      v73 = 10;
      v74 = 14;
    }
    if ( (v71 & 0x3000000) == 0 )
      v73 = (unsigned int)v74;
    v47 = (*(__int64 (__fastcall **)(ClpPackedMatrix *, ClpSimplex *, __int64, __int64, double, double))(*(_QWORD *)v72 + 184LL))(
            v72,
            this,
            v73,
            v74,
            *((double *)this + 10),
            1.0e20);
    if ( !(_BYTE)v47 )
    {
      *((_QWORD *)this + 40) = 0x800000004LL;
      return v47;
    }
    if ( a3 )
    {
      v75 = *((_QWORD *)this + 25);
      if ( v8 )
      {
        if ( v75 )
        {
          v76 = *((_DWORD *)this + 64);
          v77 = 0;
          *((_QWORD *)this + 30) = 0;
          *((_QWORD *)this + 31) = 0;
          v78 = *((_QWORD *)this + 28);
          if ( v76 <= 0 )
          {
            if ( !v78 || *((_QWORD *)this + 84) )
              goto LABEL_410;
LABEL_119:
            v79 = v78 + 8LL * v13;
            v80 = *((int *)this + 27);
            *((_QWORD *)this + 30) = v79;
            *((_QWORD *)this + 31) = *((_QWORD *)this + 29) + 8 * v80;
LABEL_404:
            if ( v77 )
            {
              v249 = *((const void **)this + 24);
              if ( v249 )
              {
                v250 = (ClpPackedMatrix *)__dynamic_cast(
                                            v249,
                                            (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
                                            (const struct __class_type_info *)&`typeinfo for'ClpPackedMatrix,
                                            0);
                if ( v250 )
                {
                  if ( *((_DWORD *)this + 83) )
                  {
                    v303 = v250;
                    ClpPackedMatrix::specialRowCopy(v250, this, *((const ClpMatrixBase **)this + 25));
                    v250 = v303;
                  }
                  ClpPackedMatrix::specialColumnCopy(v250, this);
                }
              }
            }
LABEL_410:
            v35 = v306;
            if ( v306 == 63 )
            {
              v251 = *((char **)this + 129);
              if ( !v11 || (*((_BYTE *)this + 338) & 1) != 0 )
              {
                v261 = *((_QWORD *)this + 150);
              }
              else
              {
                if ( v251 )
                  operator delete[](v251);
                v252 = (int)(2 * v293);
                if ( v252 > 0xFFFFFFFFFFFFFFFLL )
                  goto LABEL_537;
                v253 = operator new[](8 * v252);
                v254 = *((void **)this + 123);
                *((_QWORD *)this + 129) = v253;
                if ( v254 )
                  operator delete[](v254);
                v255 = *((void **)this + 126);
                if ( v255 )
                  operator delete[](v255);
                if ( (unsigned __int64)(int)v293 > 0xFFFFFFFFFFFFFFFLL )
                  goto LABEL_537;
                v256 = 8LL * (int)v293;
                *((_QWORD *)this + 123) = operator new[](v256);
                v257 = operator new[](v256);
                v258 = *((void **)this + 147);
                *((_QWORD *)this + 126) = v257;
                if ( v258 )
                  operator delete[](v258);
                v259 = operator new[](v256);
                v260 = *((void **)this + 150);
                *((_QWORD *)this + 147) = v259;
                if ( v260 )
                  operator delete[](v260);
                v261 = operator new[](v256);
                v35 = v306;
                v251 = *((char **)this + 129);
                *((_QWORD *)this + 150) = v261;
              }
              v262 = *((int *)this + 27);
              v263 = *((_QWORD *)this + 147);
              *((_QWORD *)this + 152) = v261;
              *((_QWORD *)this + 131) = v251;
              *((_QWORD *)this + 149) = v263;
              v262 *= 8;
              *((_QWORD *)this + 151) = v262 + v261;
              v264 = *((_QWORD *)this + 123);
              *((_QWORD *)this + 148) = v262 + v263;
              *((_QWORD *)this + 130) = &v251[v262];
              v265 = v264 + v262;
              *((_QWORD *)this + 125) = v264;
              v266 = *((_QWORD *)this + 126);
              *((_QWORD *)this + 124) = v265;
              *((_QWORD *)this + 128) = v266;
              *((_QWORD *)this + 127) = v266 + v262;
            }
            goto LABEL_34;
          }
          goto LABEL_238;
        }
      }
      else if ( v75 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 480LL))(v75);
      }
      *((_QWORD *)this + 25) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 128LL))(*((_QWORD *)this + 24));
    }
    v77 = 0;
    v153 = *((_DWORD *)this + 64);
    v78 = *((_QWORD *)this + 28);
    if ( !v8 )
    {
      v77 = v47;
      if ( v153 < 0 )
      {
        if ( v78 )
        {
          printf("How did we get scalingFlag_ %d and non NULL rowScale_? - switching off scaling\n", v153);
          v269 = *((void **)this + 28);
          *((_DWORD *)this + 64) = 0;
          if ( v269 )
            operator delete[](v269);
        }
        v270 = *((void **)this + 29);
        if ( v270 )
          operator delete[](v270);
        *((_QWORD *)this + 28) = 0;
        *((_QWORD *)this + 29) = 0;
        v77 = v47;
        v153 = *((_DWORD *)this + 64);
        v78 = 0;
      }
    }
    *((_QWORD *)this + 30) = 0;
    *((_QWORD *)this + 31) = 0;
    if ( v153 <= 0 )
    {
      if ( !a3 )
      {
        if ( !v78 || *((_QWORD *)this + 84) )
          goto LABEL_410;
        v77 = 0;
        goto LABEL_119;
      }
      goto LABEL_401;
    }
    v77 &= a3;
    v8 = 0;
LABEL_238:
    if ( (*((_BYTE *)this + 338) & 1) != 0 )
    {
      if ( v78 )
      {
        if ( *((_QWORD *)this + 84) == v78 )
        {
          v154 = *((_QWORD *)this + 85);
          *((_QWORD *)this + 28) = v78;
          *((_QWORD *)this + 29) = v154;
LABEL_242:
          v300 = v77;
          v155 = 8LL * *((int *)this + 123);
          *((_QWORD *)this + 31) = v154 + 8LL * *((int *)this + 122);
          *((_QWORD *)this + 30) = v78 + v155;
          CoinMemcpyN<double>(v78 + v155 + v155, (unsigned int)v13, v78);
          CoinMemcpyN<double>(
            *((_QWORD *)this + 84) + 24LL * *((_DWORD *)this + 123),
            (unsigned int)v13,
            *((_QWORD *)this + 30));
          CoinMemcpyN<double>(
            *((_QWORD *)this + 85) + 16LL * *((_DWORD *)this + 120),
            *((unsigned int *)this + 27),
            *((_QWORD *)this + 85));
          CoinMemcpyN<double>(
            *((_QWORD *)this + 85) + 24LL * *((_DWORD *)this + 120),
            *((unsigned int *)this + 27),
            *((_QWORD *)this + 31));
          v77 = v300;
          goto LABEL_243;
        }
LABEL_398:
        if ( !a3 || v8 )
        {
LABEL_402:
          v157 = *((_QWORD *)this + 84);
          goto LABEL_403;
        }
        v302 = v77;
        (*(void (__fastcall **)(_QWORD, ClpSimplex *))(**((_QWORD **)this + 24) + 160LL))(*((_QWORD *)this + 24), this);
        v77 = v302;
        v78 = *((_QWORD *)this + 28);
LABEL_401:
        if ( !v78 )
          goto LABEL_404;
        goto LABEL_402;
      }
      v78 = *((_QWORD *)this + 84);
      v154 = *((_QWORD *)this + 85);
      *((_QWORD *)this + 28) = v78;
      *((_QWORD *)this + 29) = v154;
      if ( v78 )
        goto LABEL_242;
    }
    else if ( v78 )
    {
      goto LABEL_398;
    }
LABEL_243:
    v301 = v77;
    v156 = (*(__int64 (__fastcall **)(_QWORD, ClpSimplex *, ClpSimplex *))(**((_QWORD **)this + 24) + 152LL))(
             *((_QWORD *)this + 24),
             this,
             this);
    v77 = v301;
    if ( v156 )
      *((_DWORD *)this + 64) = -*((_DWORD *)this + 64);
    v78 = *((_QWORD *)this + 28);
    if ( !v78 )
      goto LABEL_404;
    v157 = *((_QWORD *)this + 84);
    if ( !*((_DWORD *)this + 346) )
    {
LABEL_403:
      if ( v157 )
        goto LABEL_404;
      goto LABEL_119;
    }
    if ( !v157 )
    {
      v285 = v78 + 8LL * v13;
      v286 = *((int *)this + 27);
      *((_QWORD *)this + 30) = v285;
      *((_QWORD *)this + 31) = *((_QWORD *)this + 29) + 8 * v286;
    }
    v158 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, double *, _QWORD, __int64))this + 20);
    if ( v158 )
    {
      v159 = (**v158)(v158, 0, 0, v310, 0, 2);
      v77 = v301;
    }
    else
    {
      v159 = 0;
    }
    v160 = *((_DWORD *)this + 27);
    if ( v160 > 0 )
    {
      v161 = 8LL * (unsigned int)(v160 - 1) + 8;
      v162 = 0;
      v163 = 0.0;
      v164 = 0.0;
      v165 = 1.0e100;
      while ( 1 )
      {
        v167 = *(double *)(*((_QWORD *)this + 22) + v162);
        v168 = *(double *)(*((_QWORD *)this + 23) + v162);
        v169 = fabs(*(double *)(v159 + v162)) * *(double *)(*((_QWORD *)this + 29) + v162);
        if ( v169 != 0.0 && v167 != v168 )
        {
          v165 = fmin(v165, v169);
          v164 = fmax(v164, v169);
        }
        if ( v167 > 0.0 )
        {
          v166 = *(double *)(*((_QWORD *)this + 31) + v162);
          v163 = fmax(v163, v167 * v166);
          if ( v168 < 0.0 )
            goto LABEL_261;
        }
        else if ( v168 < 0.0 )
        {
          v166 = *(double *)(*((_QWORD *)this + 31) + v162);
LABEL_261:
          v163 = fmax(v163, v166 * -v168);
        }
        v162 += 8;
        if ( v161 == v162 )
          goto LABEL_486;
      }
    }
    v163 = 0.0;
    v164 = 0.0;
    v165 = 1.0e100;
LABEL_486:
    v271 = *((_DWORD *)this + 26);
    if ( v271 > 0 )
    {
      v272 = 8LL * (unsigned int)(v271 - 1) + 8;
      for ( i = 0; v272 != i; i += 8 )
      {
        v275 = *(double *)(*((_QWORD *)this + 18) + i);
        v276 = *(double *)(*((_QWORD *)this + 19) + i);
        if ( v275 > 0.0 )
        {
          v274 = *(double *)(*((_QWORD *)this + 28) + i);
          v163 = fmax(v163, v275 * v274);
          if ( v276 < 0.0 )
            goto LABEL_493;
        }
        else if ( v276 < 0.0 )
        {
          v274 = *(double *)(*((_QWORD *)this + 28) + i);
LABEL_493:
          v163 = fmax(v163, v274 * -v276);
        }
      }
    }
    v305 = v77;
    (*(void (__fastcall **)(_QWORD, double *, double *, double *, double *))(**((_QWORD **)this + 24) + 200LL))(
      *((_QWORD *)this + 24),
      &v307,
      &v308,
      &v309,
      v310);
    v77 = v305;
    v277 = fmin(fabs(v307), v309);
    v278 = fmax(fabs(v308), v310[0]);
    v309 = v277;
    v310[0] = v278;
    if ( v164 == 0.0 )
    {
      LOBYTE(v47) = 0;
LABEL_499:
      if ( v163 <= 1.0e12 )
      {
        if ( v278 <= v277 * 1.0e-14 || v163 <= 1000000.0 )
        {
          *((_QWORD *)this + 12) = 0x3FF0000000000000LL;
          if ( !(_BYTE)v47 )
            goto LABEL_502;
        }
        else
        {
          *((double *)this + 12) = 1000000.0 / v163;
        }
      }
      else
      {
        *((double *)this + 12) = 1000000000.0 / v163;
      }
      v280 = (CoinMessageHandler *)CoinMessageHandler::message(
                                     *((CoinMessageHandler **)this + 43),
                                     82,
                                     (ClpSimplex *)((char *)this + 416));
      v281 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v280);
      v282 = *((double *)this + 12);
      v283 = CoinMessageHandler::operator<<(v281);
      CoinMessageHandler::operator<<(v283, 0, v282);
      v77 = v305;
LABEL_502:
      v78 = *((_QWORD *)this + 28);
      goto LABEL_401;
    }
    if ( v164 / v165 < 100000000.0 )
    {
      if ( v165 < 0.0001 )
      {
        v279 = 0.001 / v165;
LABEL_498:
        *((double *)this + 11) = v279;
        goto LABEL_499;
      }
      if ( v164 >= 1000000.0 )
      {
        if ( *((int *)this + 325) <= 0 )
        {
          if ( *((_DWORD *)this + 325) )
          {
            v279 = 1000000.0 / v164;
            goto LABEL_498;
          }
          v287 = *((double *)this + 113);
          goto LABEL_527;
        }
        v287 = *((double *)this + 113);
        if ( v287 * 0.0001 <= v164 )
        {
LABEL_527:
          v279 = fmax(1000000.0, v287 * 0.0001) / v164;
          goto LABEL_498;
        }
      }
      v279 = 1.0;
      LOBYTE(v47) = 0;
      goto LABEL_498;
    }
    if ( v164 / v165 < 1.0e12 )
    {
      if ( v165 < 0.0000001 )
      {
        v279 = 0.000001 / v165;
        goto LABEL_498;
      }
      if ( v164 < 10000000.0 )
      {
LABEL_541:
        v279 = 1.0;
        LOBYTE(v47) = 0;
        goto LABEL_498;
      }
      v289 = *((_DWORD *)this + 325) == 0;
      if ( *((int *)this + 325) > 0 )
      {
        v290 = *((double *)this + 113);
        if ( v290 * 0.001 > v164 )
          goto LABEL_541;
LABEL_533:
        v279 = fmax(10000000.0, v290 * 0.001) / v164;
        goto LABEL_498;
      }
LABEL_544:
      if ( !v289 )
      {
        v279 = 10000000.0 / v164;
        goto LABEL_498;
      }
      v290 = *((double *)this + 113);
      goto LABEL_533;
    }
    if ( v165 >= 0.00000001 )
    {
      v279 = 1.0;
      v288 = 0;
    }
    else
    {
      v288 = v47;
      v279 = 0.0000001 / v165;
      v164 = v164 * (0.0000001 / v165);
    }
    if ( v164 >= 10000000.0 )
    {
      v289 = *((_DWORD *)this + 325) == 0;
      if ( *((int *)this + 325) <= 0 )
        goto LABEL_544;
      v290 = *((double *)this + 113);
      if ( v290 * 0.001 <= v164 )
        goto LABEL_533;
    }
    LOBYTE(v47) = v288;
    goto LABEL_498;
  }
LABEL_34:
  if ( (v35 & 4) == 0 )
    goto LABEL_47;
  v36 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, double *, _QWORD, __int64))this + 20);
  v37 = 0;
  v38 = *(double *)this * *((double *)this + 11);
  if ( v36 )
    v37 = (**v36)(v36, 0, 0, v310, 0, 2);
  v39 = *((_QWORD *)this + 28);
  v40 = *((_QWORD *)this + 21);
  v41 = *((_DWORD *)this + 26);
  if ( v39 )
  {
    v42 = *((_QWORD *)this + 29);
    if ( v40 )
    {
      v43 = 0;
      v44 = 0;
      if ( v41 > 0 )
      {
        while ( 1 )
        {
          ++v44;
          *(double *)(*((_QWORD *)this + 130) + v43) = *(double *)(v40 + v43) * v38 / *(double *)(v39 + v43);
          v43 += 8;
          if ( *((_DWORD *)this + 26) <= v44 )
            break;
          v40 = *((_QWORD *)this + 21);
        }
      }
    }
    else
    {
      memset(*((void **)this + 130), 0, 8LL * v41);
    }
    v35 = v306;
    if ( v306 == 63 )
    {
      v53 = *((_QWORD *)this + 28);
      v54 = *((double *)this + 4);
      if ( v53 )
      {
LABEL_189:
        if ( *((int *)this + 26) <= 0 )
          goto LABEL_141;
LABEL_190:
        v126 = 0;
        v127 = 0;
        do
        {
          v129 = *((double *)this + 12) * *(double *)(v53 + v126);
          v130 = *(double *)(*((_QWORD *)this + 18) + v126);
          v131 = *(double *)(*((_QWORD *)this + 19) + v126);
          v132 = (double *)(v126 + *((_QWORD *)this + 124));
          if ( v130 > -1.0e20 )
          {
            *v132 = v130 * v129;
            v128 = *((_QWORD *)this + 127);
            if ( v131 < 1.0e20 )
            {
              *(double *)(v128 + v126) = v131 * v129;
              v133 = (double *)(v126 + *((_QWORD *)this + 127));
              v134 = (double *)(v126 + *((_QWORD *)this + 124));
              v135 = *v133;
              v136 = *v134;
              if ( v54 >= fabs(*v133 - *v134) )
              {
                if ( v136 < 0.0 )
                {
                  if ( v135 <= 0.0 )
                  {
                    *v134 = v135;
                  }
                  else
                  {
                    *v133 = 0.0;
                    *(_QWORD *)(*((_QWORD *)this + 124) + v126) = 0;
                  }
                }
                else
                {
                  *v133 = v136;
                }
              }
            }
            else
            {
              *(_QWORD *)(v128 + v126) = 0x7FEFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            *v132 = -1.797693134862316e308;
            if ( v131 >= 1.0e20 )
              *(_QWORD *)(*((_QWORD *)this + 127) + v126) = 0x7FEFFFFFFFFFFFFFLL;
            else
              *(double *)(*((_QWORD *)this + 127) + v126) = v131 * v129;
          }
          ++v127;
          v126 += 8;
        }
        while ( *((_DWORD *)this + 26) > v127 );
        goto LABEL_48;
      }
LABEL_262:
      v170 = *((_DWORD *)this + 27);
      if ( *((double *)this + 12) == 1.0 )
      {
        if ( v170 > 0 )
        {
          v218 = 0;
          v219 = 0;
          do
          {
            v221 = *(double *)(*((_QWORD *)this + 22) + v218);
            v222 = *(double *)(*((_QWORD *)this + 23) + v218);
            v223 = (double *)(v218 + *((_QWORD *)this + 125));
            if ( v221 > -1.0e20 )
            {
              *v223 = v221;
              v220 = *((_QWORD *)this + 128);
              if ( v222 < 1.0e20 )
              {
                *(double *)(v220 + v218) = v222;
                v224 = (double *)(v218 + *((_QWORD *)this + 128));
                v225 = (double *)(v218 + *((_QWORD *)this + 125));
                v226 = *v224;
                v227 = *v225;
                if ( v54 >= fabs(*v224 - *v225) )
                {
                  if ( v227 < 0.0 )
                  {
                    if ( v226 <= 0.0 )
                    {
                      *v225 = v226;
                    }
                    else
                    {
                      *v224 = 0.0;
                      *(_QWORD *)(*((_QWORD *)this + 125) + v218) = 0;
                    }
                  }
                  else
                  {
                    *v224 = v227;
                  }
                }
              }
              else
              {
                *(_QWORD *)(v220 + v218) = 0x7FEFFFFFFFFFFFFFLL;
              }
            }
            else
            {
              *v223 = -1.797693134862316e308;
              if ( v222 >= 1.0e20 )
                *(_QWORD *)(*((_QWORD *)this + 128) + v218) = 0x7FEFFFFFFFFFFFFFLL;
              else
                *(double *)(*((_QWORD *)this + 128) + v218) = v222;
            }
            ++v219;
            v218 += 8;
          }
          while ( *((_DWORD *)this + 27) > v219 );
        }
        if ( *((int *)this + 26) > 0 )
        {
          v228 = 0;
          v229 = 0;
          do
          {
            v231 = *(double *)(*((_QWORD *)this + 18) + v228);
            v232 = *(double *)(*((_QWORD *)this + 19) + v228);
            v233 = (double *)(v228 + *((_QWORD *)this + 124));
            if ( v231 > -1.0e20 )
            {
              *v233 = v231;
              v230 = *((_QWORD *)this + 127);
              if ( v232 < 1.0e20 )
              {
                *(double *)(v230 + v228) = v232;
                v234 = (double *)(v228 + *((_QWORD *)this + 127));
                v235 = (double *)(v228 + *((_QWORD *)this + 124));
                v236 = *v234;
                v237 = *v235;
                if ( v54 >= fabs(*v234 - *v235) )
                {
                  if ( v237 < 0.0 )
                  {
                    if ( v236 <= 0.0 )
                    {
                      *v235 = v236;
                    }
                    else
                    {
                      *v234 = 0.0;
                      *(_QWORD *)(*((_QWORD *)this + 124) + v228) = 0;
                    }
                  }
                  else
                  {
                    *v234 = v237;
                  }
                }
              }
              else
              {
                *(_QWORD *)(v230 + v228) = 0x7FEFFFFFFFFFFFFFLL;
              }
            }
            else
            {
              *v233 = -1.797693134862316e308;
              if ( v232 >= 1.0e20 )
                *(_QWORD *)(*((_QWORD *)this + 127) + v228) = 0x7FEFFFFFFFFFFFFFLL;
              else
                *(double *)(*((_QWORD *)this + 127) + v228) = v232;
            }
            ++v229;
            v228 += 8;
          }
          while ( *((_DWORD *)this + 26) > v229 );
        }
      }
      else
      {
        if ( v170 > 0 )
        {
          v171 = 0;
          v172 = 0;
          do
          {
            v174 = *(double *)(*((_QWORD *)this + 22) + v171);
            v175 = *(double *)(*((_QWORD *)this + 23) + v171);
            v176 = (double *)(v171 + *((_QWORD *)this + 125));
            if ( v174 > -1.0e20 )
            {
              *v176 = v174 * *((double *)this + 12);
              v173 = *((_QWORD *)this + 128);
              if ( v175 < 1.0e20 )
              {
                *(double *)(v173 + v171) = v175 * *((double *)this + 12);
                v186 = (double *)(v171 + *((_QWORD *)this + 128));
                v187 = (double *)(v171 + *((_QWORD *)this + 125));
                v188 = *v186;
                v189 = *v187;
                if ( v54 >= fabs(*v186 - *v187) )
                {
                  if ( v189 < 0.0 )
                  {
                    if ( v188 <= 0.0 )
                    {
                      *v187 = v188;
                    }
                    else
                    {
                      *v186 = 0.0;
                      *(_QWORD *)(*((_QWORD *)this + 125) + v171) = 0;
                    }
                  }
                  else
                  {
                    *v186 = v189;
                  }
                }
              }
              else
              {
                *(_QWORD *)(v173 + v171) = 0x7FEFFFFFFFFFFFFFLL;
              }
            }
            else
            {
              *v176 = -1.797693134862316e308;
              if ( v175 >= 1.0e20 )
                *(_QWORD *)(*((_QWORD *)this + 128) + v171) = 0x7FEFFFFFFFFFFFFFLL;
              else
                *(double *)(*((_QWORD *)this + 128) + v171) = v175 * *((double *)this + 12);
            }
            ++v172;
            v171 += 8;
          }
          while ( *((_DWORD *)this + 27) > v172 );
        }
        if ( *((int *)this + 26) > 0 )
        {
          v238 = 0;
          v239 = 0;
          do
          {
            v241 = *(double *)(*((_QWORD *)this + 18) + v238);
            v242 = *(double *)(*((_QWORD *)this + 19) + v238);
            v243 = (double *)(v238 + *((_QWORD *)this + 124));
            if ( v241 > -1.0e20 )
            {
              *v243 = v241 * *((double *)this + 12);
              v240 = *((_QWORD *)this + 127);
              if ( v242 < 1.0e20 )
              {
                *(double *)(v240 + v238) = v242 * *((double *)this + 12);
                v244 = (double *)(v238 + *((_QWORD *)this + 127));
                v245 = (double *)(v238 + *((_QWORD *)this + 124));
                v246 = *v244;
                v247 = *v245;
                if ( v54 >= fabs(*v244 - *v245) )
                {
                  if ( v247 < 0.0 )
                  {
                    if ( v246 <= 0.0 )
                    {
                      *v245 = v246;
                    }
                    else
                    {
                      *v244 = 0.0;
                      *(_QWORD *)(*((_QWORD *)this + 124) + v238) = 0;
                    }
                  }
                  else
                  {
                    *v244 = v247;
                  }
                }
              }
              else
              {
                *(_QWORD *)(v240 + v238) = 0x7FEFFFFFFFFFFFFFLL;
              }
            }
            else
            {
              *v243 = -1.797693134862316e308;
              if ( v242 >= 1.0e20 )
                *(_QWORD *)(*((_QWORD *)this + 127) + v238) = 0x7FEFFFFFFFFFFFFFLL;
              else
                *(double *)(*((_QWORD *)this + 127) + v238) = v242 * *((double *)this + 12);
            }
            ++v239;
            v238 += 8;
          }
          while ( *((_DWORD *)this + 26) > v239 );
        }
      }
      goto LABEL_48;
    }
    if ( *((int *)this + 27) > 0 )
    {
      v45 = 0;
      v46 = 0;
      do
      {
        ++v46;
        *(double *)(*((_QWORD *)this + 131) + v45) = *(double *)(v37 + v45) * v38 * *(double *)(v42 + v45);
        v45 += 8;
      }
      while ( *((_DWORD *)this + 27) > v46 );
    }
    goto LABEL_47;
  }
  if ( v40 )
  {
    v177 = 0;
    v178 = 0;
    if ( v41 > 0 )
    {
      while ( 1 )
      {
        ++v178;
        *(double *)(*((_QWORD *)this + 130) + v177) = *(double *)(v40 + v177) * v38;
        v177 += 8;
        if ( *((_DWORD *)this + 26) <= v178 )
          break;
        v40 = *((_QWORD *)this + 21);
      }
    }
  }
  else
  {
    memset(*((void **)this + 130), 0, 8LL * v41);
  }
  v35 = v306;
  if ( *((int *)this + 27) <= 0 )
  {
LABEL_47:
    if ( (v35 & 1) == 0 )
      goto LABEL_48;
    goto LABEL_67;
  }
  v179 = 0;
  v180 = 0;
  do
  {
    ++v180;
    *(double *)(*((_QWORD *)this + 131) + v179) = *(double *)(v37 + v179) * v38;
    v179 += 8;
  }
  while ( *((_DWORD *)this + 27) > v180 );
  if ( (v35 & 1) == 0 )
    goto LABEL_48;
LABEL_67:
  v53 = *((_QWORD *)this + 28);
  v54 = *((double *)this + 4);
  if ( !v53 )
    goto LABEL_262;
  if ( v35 == 63 )
    goto LABEL_189;
  v55 = *((_QWORD *)this + 31);
  if ( *((int *)this + 27) > 0 )
  {
    v56 = 0;
    v57 = 0;
    while ( 1 )
    {
      v59 = *((double *)this + 12) * *(double *)(v55 + v56);
      v60 = *(double *)(*((_QWORD *)this + 22) + v56);
      v61 = *(double *)(*((_QWORD *)this + 23) + v56);
      v62 = (double *)(v56 + *((_QWORD *)this + 125));
      if ( v60 > -1.0e20 )
        break;
      if ( v61 >= 1.0e20 )
      {
        *v62 = -1.797693134862316e308;
        *(_QWORD *)(*((_QWORD *)this + 128) + v56) = 0x7FEFFFFFFFFFFFFFLL;
LABEL_73:
        ++v57;
        v56 += 8;
        if ( *((_DWORD *)this + 27) <= v57 )
          goto LABEL_77;
      }
      else
      {
        *v62 = -1.797693134862316e308;
        ++v57;
        *(double *)(*((_QWORD *)this + 128) + v56) = v61 * v59;
        v56 += 8;
        if ( *((_DWORD *)this + 27) <= v57 )
          goto LABEL_77;
      }
    }
    *v62 = v60 * v59;
    v58 = *((_QWORD *)this + 128);
    if ( v61 < 1.0e20 )
    {
      *(double *)(v58 + v56) = v61 * v59;
      v141 = (double *)(v56 + *((_QWORD *)this + 128));
      v142 = (double *)(v56 + *((_QWORD *)this + 125));
      v143 = *v141;
      v144 = *v142;
      if ( v54 >= fabs(*v141 - *v142) )
      {
        if ( v144 < 0.0 )
        {
          if ( v143 <= 0.0 )
          {
            *v142 = v143;
          }
          else
          {
            *v141 = 0.0;
            *(_QWORD *)(*((_QWORD *)this + 125) + v56) = 0;
          }
        }
        else
        {
          *v141 = v144;
        }
      }
    }
    else
    {
      *(_QWORD *)(v58 + v56) = 0x7FEFFFFFFFFFFFFFLL;
    }
    goto LABEL_73;
  }
LABEL_77:
  if ( *((int *)this + 26) > 0 )
    goto LABEL_190;
LABEL_48:
  v47 = 1;
  if ( v35 != 63 )
    goto LABEL_49;
LABEL_141:
  v89 = *(double *)this;
  if ( *(double *)this != 0.0 )
    v89 = 1.0 / v89;
  v90 = *((_DWORD *)this + 27);
  if ( v89 == 1.0 )
  {
    v91 = *((_DWORD *)this + 26);
  }
  else
  {
    v120 = 0;
    for ( j = 0; v90 > j; v90 = *((_DWORD *)this + 27) )
    {
      ++j;
      v122 = (double *)(v120 + *((_QWORD *)this + 17));
      v120 += 8;
      *v122 = *v122 * v89;
    }
    v91 = *((_DWORD *)this + 26);
    if ( v91 > 0 )
    {
      v123 = 0;
      v124 = 0;
      do
      {
        ++v124;
        v125 = (double *)(v123 + *((_QWORD *)this + 16));
        v123 += 8;
        *v125 = *v125 * v89;
        v91 = *((_DWORD *)this + 26);
      }
      while ( v91 > v124 );
      v90 = *((_DWORD *)this + 27);
    }
  }
  if ( v91 + v90 > 0 )
  {
    v92 = 0;
    do
    {
      v93 = (_BYTE *)(v92 + *((_QWORD *)this + 33));
      ++v92;
      *v93 &= 0xE7u;
      v91 = *((_DWORD *)this + 26);
      v90 = *((_DWORD *)this + 27);
    }
    while ( v91 + v90 > (int)v92 );
  }
  if ( *((_QWORD *)this + 28) )
  {
    v94 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, double *, _QWORD, __int64))this + 20);
    v95 = 0;
    if ( v94 )
    {
      v95 = (**v94)(v94, 0, 0, v310, 0, 2);
      v90 = *((_DWORD *)this + 27);
    }
    v96 = *((double *)this + 4);
    v97 = *((_QWORD *)this + 31);
    v98 = *(double *)this * *((double *)this + 11);
    if ( v90 > 0 )
    {
      v99 = 0;
      do
      {
        v102 = 8 * v99;
        v103 = *((double *)this + 12) * *(double *)(v97 + 8 * v99);
        v104 = *(double *)(*((_QWORD *)this + 29) + 8 * v99) * v98;
        *(double *)(*((_QWORD *)this + 131) + 8 * v99) = *(double *)(v95 + 8 * v99) * v104;
        *(double *)(*((_QWORD *)this + 149) + 8 * v99) = v104 * *(double *)(*((_QWORD *)this + 17) + 8 * v99);
        v105 = *(double *)(*((_QWORD *)this + 22) + 8 * v99);
        v106 = *(double *)(*((_QWORD *)this + 23) + 8 * v99);
        if ( v105 > -1.0e20 )
        {
          *(double *)(*((_QWORD *)this + 125) + 8 * v99) = v105 * v103;
          v100 = *((_QWORD *)this + 128);
          if ( v106 < 1.0e20 )
          {
            *(double *)(v100 + 8 * v99) = v106 * v103;
            v137 = (double *)(v102 + *((_QWORD *)this + 128));
            v138 = (double *)(v102 + *((_QWORD *)this + 125));
            v139 = *v137;
            v140 = *v138;
            if ( v96 >= fabs(*v137 - *v138) )
            {
              if ( v140 < 0.0 )
              {
                if ( v139 <= 0.0 )
                {
                  *v138 = v139;
                }
                else
                {
                  *v137 = 0.0;
                  *(_QWORD *)(*((_QWORD *)this + 125) + 8 * v99) = 0;
                }
              }
              else
              {
                *v137 = v140;
              }
            }
          }
          else
          {
            *(_QWORD *)(v100 + 8 * v99) = 0x7FEFFFFFFFFFFFFFLL;
          }
        }
        else
        {
          *(_QWORD *)(v102 + *((_QWORD *)this + 125)) = 0xFFEFFFFFFFFFFFFFLL;
          if ( v106 >= 1.0e20 )
            *(_QWORD *)(*((_QWORD *)this + 128) + 8 * v99) = 0x7FEFFFFFFFFFFFFFLL;
          else
            *(double *)(*((_QWORD *)this + 128) + 8 * v99) = v106 * v103;
        }
        v101 = v103 * *(double *)(*((_QWORD *)this + 15) + 8 * v99);
        if ( fabs(v101) > 1.0e20 )
        {
          *(_BYTE *)(v99 + *((_QWORD *)this + 33)) = *(_BYTE *)(v99 + *((_QWORD *)this + 33)) & 0xF8 | 4;
          v101 = *(double *)(*((_QWORD *)this + 128) + 8 * v99);
          if ( v101 >= 0.0 )
            v101 = fmax(*(double *)(*((_QWORD *)this + 125) + 8 * v99), 0.0);
        }
        *(double *)(*((_QWORD *)this + 152) + 8 * v99++) = v101;
      }
      while ( *((_DWORD *)this + 27) > (int)v99 );
    }
    v145 = *((_QWORD *)this + 30);
    if ( *((int *)this + 26) > 0 )
    {
      v146 = 0;
      v147 = 0;
      do
      {
        *(double *)(v146 + *((_QWORD *)this + 16)) = *(double *)(v146 + *((_QWORD *)this + 16))
                                                   * *(double *)(v145 + v146);
        *(double *)(v146 + *((_QWORD *)this + 16)) = *(double *)(v146 + *((_QWORD *)this + 16)) * *((double *)this + 11);
        *(_QWORD *)(*((_QWORD *)this + 148) + v146) = *(_QWORD *)(*((_QWORD *)this + 16) + v146);
        v148 = *(double *)(*((_QWORD *)this + 28) + v146)
             * *((double *)this + 12)
             * *(double *)(*((_QWORD *)this + 14) + v146);
        if ( fabs(v148) > 1.0e20 )
        {
          v149 = (_BYTE *)(*((_QWORD *)this + 33) + v147 + *((_DWORD *)this + 27));
          *v149 = *v149 & 0xF8 | 4;
          v148 = *(double *)(*((_QWORD *)this + 127) + v146);
          if ( v148 >= 0.0 )
            v148 = fmax(*(double *)(*((_QWORD *)this + 124) + v146), 0.0);
        }
        ++v147;
        *(double *)(*((_QWORD *)this + 151) + v146) = v148;
        v146 += 8;
      }
      while ( *((_DWORD *)this + 26) > v147 );
    }
  }
  else if ( *((double *)this + 11) == 1.0 && *((double *)this + 12) == 1.0 )
  {
    if ( v90 > 0 )
    {
      v190 = 0;
      do
      {
        v191 = *(double *)(*((_QWORD *)this + 15) + 8 * v190);
        if ( fabs(v191) > 1.0e20 )
        {
          *(_BYTE *)(v190 + *((_QWORD *)this + 33)) = *(_BYTE *)(v190 + *((_QWORD *)this + 33)) & 0xF8 | 4;
          v191 = *(double *)(*((_QWORD *)this + 128) + 8 * v190);
          if ( v191 >= 0.0 )
            v191 = fmax(*(double *)(*((_QWORD *)this + 125) + 8 * v190), 0.0);
        }
        *(double *)(*((_QWORD *)this + 152) + 8 * v190) = v191;
        *(_QWORD *)(*((_QWORD *)this + 149) + 8 * v190) = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v190);
        ++v190;
      }
      while ( *((_DWORD *)this + 27) > (int)v190 );
      v91 = *((_DWORD *)this + 26);
    }
    if ( v91 > 0 )
    {
      v192 = 0;
      v193 = 0;
      do
      {
        v194 = *(double *)(*((_QWORD *)this + 14) + v192);
        if ( fabs(v194) > 1.0e20 )
        {
          v195 = (_BYTE *)(*((_QWORD *)this + 33) + v193 + *((_DWORD *)this + 27));
          *v195 = *v195 & 0xF8 | 4;
          v194 = *(double *)(*((_QWORD *)this + 127) + v192);
          if ( v194 >= 0.0 )
            v194 = fmax(*(double *)(*((_QWORD *)this + 124) + v192), 0.0);
        }
        ++v193;
        *(double *)(*((_QWORD *)this + 151) + v192) = v194;
        *(_QWORD *)(*((_QWORD *)this + 148) + v192) = *(_QWORD *)(*((_QWORD *)this + 16) + v192);
        v192 += 8;
      }
      while ( *((_DWORD *)this + 26) > v193 );
    }
  }
  else
  {
    if ( v90 > 0 )
    {
      v196 = 0;
      do
      {
        v197 = *(double *)(*((_QWORD *)this + 15) + 8 * v196) * *((double *)this + 12);
        if ( fabs(v197) > 1.0e20 )
        {
          *(_BYTE *)(v196 + *((_QWORD *)this + 33)) = *(_BYTE *)(v196 + *((_QWORD *)this + 33)) & 0xF8 | 4;
          v197 = *(double *)(*((_QWORD *)this + 128) + 8 * v196);
          if ( v197 >= 0.0 )
            v197 = fmax(*(double *)(*((_QWORD *)this + 125) + 8 * v196), 0.0);
        }
        *(double *)(*((_QWORD *)this + 152) + 8 * v196) = v197;
        *(double *)(*((_QWORD *)this + 149) + 8 * v196) = *(double *)(*((_QWORD *)this + 17) + 8 * v196)
                                                        * *((double *)this + 11);
        ++v196;
      }
      while ( *((_DWORD *)this + 27) > (int)v196 );
      v91 = *((_DWORD *)this + 26);
    }
    if ( v91 > 0 )
    {
      v198 = 0;
      v199 = 0;
      do
      {
        v200 = *(double *)(*((_QWORD *)this + 14) + v198) * *((double *)this + 12);
        if ( fabs(v200) > 1.0e20 )
        {
          v201 = (_BYTE *)(*((_QWORD *)this + 33) + v199 + *((_DWORD *)this + 27));
          *v201 = *v201 & 0xF8 | 4;
          v200 = *(double *)(*((_QWORD *)this + 127) + v198);
          if ( v200 >= 0.0 )
            v200 = fmax(*(double *)(*((_QWORD *)this + 124) + v198), 0.0);
        }
        ++v199;
        *(double *)(*((_QWORD *)this + 151) + v198) = v200;
        *(double *)(v198 + *((_QWORD *)this + 16)) = *(double *)(v198 + *((_QWORD *)this + 16)) * *((double *)this + 11);
        *(_QWORD *)(*((_QWORD *)this + 148) + v198) = *(_QWORD *)(*((_QWORD *)this + 16) + v198);
        v198 += 8;
      }
      while ( *((_DWORD *)this + 26) > v199 );
    }
  }
  v150 = v306;
  if ( v306 == 63 && v298 )
  {
    v47 = ClpSimplex::sanityCheck(this);
    v150 = v306;
  }
  else
  {
    v47 = 1;
  }
  if ( v150 == 63 )
  {
    v48 = *((int **)this + 157);
    if ( !v48 )
      goto LABEL_53;
    if ( v11 && v291 )
      goto LABEL_52;
    if ( !v304 )
    {
      if ( v13 > 0 )
      {
        v151 = 0;
        while ( 1 )
        {
          v48[v151 / 4] = -1;
          v151 += 4LL;
          if ( 4LL * (unsigned int)(v13 - 1) + 4 == v151 )
            break;
          v48 = *((int **)this + 157);
        }
        goto LABEL_58;
      }
      goto LABEL_79;
    }
    if ( v13 > 0 )
    {
      v205 = *v48;
      if ( (int)v205 < 0 )
      {
        v206 = (unsigned int)(v13 - 1);
      }
      else
      {
        v206 = (unsigned int)(v13 - 1);
        v207 = v48 + 1;
        v208 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
        while ( v208 <= (int)v205 || (*(_BYTE *)(*((_QWORD *)this + 33) + v205) & 7) == 1 )
        {
          if ( &v48[v13 - 1 + 1] == v207 )
            goto LABEL_344;
          v205 = *v207++;
          if ( (int)v205 < 0 )
            break;
        }
      }
      v248 = 0;
      while ( 1 )
      {
        v48[v248 / 4] = -1;
        v248 += 4LL;
        if ( 4 * v206 + 4 == v248 )
          break;
        v48 = *((int **)this + 157);
      }
      goto LABEL_58;
    }
    v208 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
LABEL_344:
    if ( v208 <= 0 )
    {
LABEL_79:
      v63 = 0;
      while ( 1 )
      {
        v64 = *((_QWORD *)this + 158);
        v65 = *(_QWORD *)(v64 + 8);
        v66 = v65 ? *(_DWORD *)(v65 + 64) : *(_DWORD *)(*(_QWORD *)(v64 + 16) + 48LL);
        v67 = v13 + v66;
        if ( v63 == 3 || *(int *)(*((_QWORD *)this + 20) + 16LL) > 1 )
        {
          v67 += *((_DWORD *)this + 27);
        }
        else if ( (_DWORD)v63 == 1 && v67 < *((_DWORD *)this + 27) )
        {
          v67 = *((_DWORD *)this + 27);
        }
        v68 = *((CoinIndexedVector **)this + v63 + 132);
        if ( (*((_BYTE *)this + 338) & 1) == 0 )
          break;
        if ( !v68 )
          goto LABEL_97;
LABEL_87:
        ++v63;
        CoinIndexedVector::reserve(v68, v67);
        if ( v63 == 4 )
        {
          v69 = 0;
          while ( 1 )
          {
            v70 = *(CoinIndexedVector **)((char *)this + v69 + 1104);
            if ( (*((_BYTE *)this + 338) & 1) == 0 )
              break;
            if ( !v70 )
              goto LABEL_101;
LABEL_91:
            v69 += 8;
            CoinIndexedVector::reserve(v70, v13 + *((_DWORD *)this + 27));
            if ( v69 == 16 )
              goto LABEL_59;
          }
          if ( v70 )
          {
            CoinIndexedVector::~CoinIndexedVector(*(CoinIndexedVector **)((char *)this + v69 + 1104));
            operator delete(v70);
          }
LABEL_101:
          v70 = (CoinIndexedVector *)operator new(0x20u);
          CoinIndexedVector::CoinIndexedVector(v70);
          *(_QWORD *)((char *)this + v69 + 1104) = v70;
          goto LABEL_91;
        }
      }
      if ( v68 )
      {
        CoinIndexedVector::~CoinIndexedVector(*((CoinIndexedVector **)this + v63 + 132));
        operator delete(v68);
      }
LABEL_97:
      v68 = (CoinIndexedVector *)operator new(0x20u);
      CoinIndexedVector::CoinIndexedVector(v68);
      *((_QWORD *)this + v63 + 132) = v68;
      goto LABEL_87;
    }
    v209 = 0;
    while ( 1 )
    {
      v210 = (char *)(v209 + *((_QWORD *)this + 33));
      v211 = *v210;
      v212 = *v210 & 7;
      if ( v212 != 1 )
      {
        v213 = *(double *)(*((_QWORD *)this + 126) + 8 * v209);
        v214 = *(double *)(*((_QWORD *)this + 123) + 8 * v209);
        if ( v213 == v214 )
        {
          *v210 = v211 & 0xF8 | 5;
          *(_QWORD *)(*((_QWORD *)this + 150) + 8 * v209) = *(_QWORD *)(*((_QWORD *)this + 123) + 8 * v209);
          v208 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
        }
        else if ( v212 == 3 )
        {
          if ( v214 <= -1.0e20 )
          {
            if ( v213 >= 1.0e20 )
              goto LABEL_484;
            *(double *)(*((_QWORD *)this + 150) + 8 * v209) = v213;
            *(_BYTE *)(v209 + *((_QWORD *)this + 33)) = *(_BYTE *)(v209 + *((_QWORD *)this + 33)) & 0xF8 | 2;
            v208 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
          }
          else
          {
            *(double *)(*((_QWORD *)this + 150) + 8 * v209) = v214;
            v208 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
          }
        }
        else
        {
          if ( v212 != 2 )
          {
            if ( v212 == 5 && v213 > v214 )
            {
              v215 = *((double *)this + 110);
              v216 = v211 & 0xF8;
              v217 = *(double *)(*((_QWORD *)this + 150) + 8 * v209);
              if ( v214 + v215 < v217 )
              {
                if ( v217 < v213 - v215 )
                  v284 = v216 | 4;
                else
                  v284 = v216 | 2;
                *v210 = v284;
                v208 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
              }
              else
              {
                *v210 = v216 | 3;
                v208 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
              }
            }
            goto LABEL_347;
          }
          if ( v213 >= 1.0e20 )
          {
            if ( v214 > -1.0e20 )
            {
              *(double *)(*((_QWORD *)this + 150) + 8 * v209) = v214;
              *(_BYTE *)(v209 + *((_QWORD *)this + 33)) = *(_BYTE *)(v209 + *((_QWORD *)this + 33)) & 0xF8 | 3;
              v208 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
              goto LABEL_347;
            }
LABEL_484:
            *v210 = v211 & 0xF8;
            v208 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
            goto LABEL_347;
          }
          *(double *)(*((_QWORD *)this + 150) + 8 * v209) = v213;
          v208 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
        }
      }
LABEL_347:
      if ( v208 <= (int)++v209 )
        goto LABEL_58;
    }
  }
LABEL_49:
  if ( v11 && v291 )
  {
    v48 = *((int **)this + 157);
    if ( !v48 )
    {
LABEL_53:
      v49 = v13 + 1;
      if ( v49 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_537;
      v50 = operator new[](4 * v49);
      *((_QWORD *)this + 157) = v50;
      if ( v13 >= 0 )
      {
        v51 = 0;
        while ( 1 )
        {
          *(_DWORD *)(v50 + v51) = -1;
          v51 += 4;
          if ( 4LL * v13 + 4 == v51 )
            break;
          v50 = *((_QWORD *)this + 157);
        }
      }
LABEL_58:
      if ( v306 != 63 )
        goto LABEL_59;
      goto LABEL_79;
    }
LABEL_52:
    operator delete[](v48);
    goto LABEL_53;
  }
LABEL_59:
  if ( *((_DWORD *)this + 80) == 10 )
  {
    v152 = *((CoinMessageHandler **)this + 43);
    *((_DWORD *)this + 80) = -1;
    CoinMessageHandler::setLogLevel(v152, v299);
  }
  if ( (v306 & 5) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, ClpSimplex *, __int64, int *))(**((_QWORD **)this + 24) + 320LL))(
      *((_QWORD *)this + 24),
      this,
      9,
      &v306);
    if ( !(_BYTE)v47 )
      return v47;
  }
  else if ( !(_BYTE)v47 )
  {
    return v47;
  }
  if ( (*((_BYTE *)this + 338) & 1) != 0 )
  {
    v108 = 8LL * (*((_DWORD *)this + 120) + *((_DWORD *)this + 121));
    CoinMemcpyN<double>(*((_QWORD *)this + 129), v293, *((_QWORD *)this + 129) + v108);
    CoinMemcpyN<double>(*((_QWORD *)this + 123), v293, *((_QWORD *)this + 123) + v108);
    CoinMemcpyN<double>(*((_QWORD *)this + 126), v293, *((_QWORD *)this + 126) + v108);
    CoinMemcpyN<double>(*((_QWORD *)this + 147), v293, *((_QWORD *)this + 147) + v108);
    CoinMemcpyN<double>(*((_QWORD *)this + 150), v293, *((_QWORD *)this + 150) + v108);
    if ( *((_QWORD *)this + 28) )
    {
      if ( !*((_QWORD *)this + 84) )
      {
        v109 = 4 * *((_DWORD *)this + 121);
        if ( v109 <= 0xFFFFFFFFFFFFFFFLL )
        {
          v110 = (_QWORD *)operator new[](8 * v109);
          v111 = 4 * *((_DWORD *)this + 121);
          if ( v111 )
            sub_1024D0(v110, v111);
          v112 = 8LL * v13;
          CoinMemcpyN<double>(*((_QWORD *)this + 28), (unsigned int)v13, v110);
          CoinMemcpyN<double>(v112 + *((_QWORD *)this + 28), (unsigned int)v13, &v110[*((int *)this + 121)]);
          CoinMemcpyN<double>(*((_QWORD *)this + 28), (unsigned int)v13, &v110[2 * *((_DWORD *)this + 121)]);
          CoinMemcpyN<double>(v112 + *((_QWORD *)this + 28), (unsigned int)v13, &v110[3 * *((_DWORD *)this + 121)]);
          v113 = *((void **)this + 28);
          if ( v113 )
            operator delete[](v113);
          v114 = *((int *)this + 123);
          *((_QWORD *)this + 84) = v110;
          *((_QWORD *)this + 28) = v110;
          *((_QWORD *)this + 30) = &v110[v114];
          v115 = 4 * *((_DWORD *)this + 120);
          if ( v115 <= 0xFFFFFFFFFFFFFFFLL )
          {
            v116 = (_QWORD *)operator new[](8 * v115);
            v117 = 4 * *((_DWORD *)this + 120);
            if ( v117 )
              sub_1024D0(v116, v117);
            CoinMemcpyN<double>(*((_QWORD *)this + 29), *((unsigned int *)this + 27), v116);
            CoinMemcpyN<double>(
              *((_QWORD *)this + 29) + 8LL * *((int *)this + 27),
              *((int *)this + 27),
              &v116[*((int *)this + 120)]);
            CoinMemcpyN<double>(
              *((_QWORD *)this + 29),
              *((unsigned int *)this + 27),
              &v116[2 * *((_DWORD *)this + 120)]);
            CoinMemcpyN<double>(
              *((_QWORD *)this + 29) + 8LL * *((int *)this + 27),
              *((int *)this + 27),
              &v116[3 * *((_DWORD *)this + 120)]);
            v118 = *((void **)this + 29);
            if ( v118 )
              operator delete[](v118);
            v119 = *((int *)this + 122);
            *((_QWORD *)this + 85) = v116;
            *((_QWORD *)this + 29) = v116;
            *((_QWORD *)this + 31) = &v116[v119];
            return v47;
          }
        }
LABEL_537:
        __cxa_throw_bad_array_new_length();
      }
    }
  }
  return v47;
}

