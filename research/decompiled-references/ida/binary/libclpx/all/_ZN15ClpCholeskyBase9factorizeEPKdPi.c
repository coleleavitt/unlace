__int64 __fastcall ClpCholeskyBase::factorize(
        ClpCholeskyBase *this,
        double *a2,
        int *a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  ClpCholeskyBase *v10; // r15
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  __int64 (*v14)(void); // rdx
  __int64 (*v15)(void); // rdx
  __int64 (*v16)(void); // rdx
  __int64 (*v17)(void); // rax
  _QWORD *v18; // rdi
  _QWORD *v19; // rax
  __int64 (*v20)(void); // rdx
  __int64 (*v21)(void); // rdx
  __int64 (*v22)(void); // rdx
  __int64 (*v23)(void); // rax
  ClpCholeskyBase *v24; // rbp
  _QWORD *v25; // rdi
  __int64 (*v26)(void); // rax
  __int64 v27; // rax
  int v28; // r12d
  __int128 v29; // xmm5
  double v30; // xmm0_8
  int v31; // eax
  __int64 v32; // r13
  __int64 v33; // rdx
  _BYTE *v34; // rax
  _QWORD *v35; // r11
  _DWORD *v36; // rsi
  __int64 v37; // rdx
  int v38; // r12d
  double *v39; // rcx
  int *v40; // rbx
  __int64 v41; // rbp
  __int64 v42; // rdx
  double *v43; // rdi
  __int64 v44; // rdx
  int v45; // r8d
  bool v46; // sf
  __int64 v47; // r8
  char *v48; // r10
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rdi
  __int64 v52; // xmm1_8
  double v53; // xmm1_8
  __int64 v54; // r12
  double v55; // xmm4_8
  double v56; // xmm2_8
  ClpCholeskyBase *v57; // rbp
  __int64 v58; // rcx
  int v59; // r10d
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r14
  __int64 v64; // rcx
  _DWORD *v65; // rsi
  _BYTE *v66; // rdx
  __int64 v67; // r8
  int v68; // eax
  double v69; // xmm1_8
  int v70; // edx
  __int64 v71; // rbx
  int *v72; // rsi
  double *v73; // r11
  __int64 v74; // rbp
  __int64 v75; // rcx
  __int64 v76; // rax
  double v77; // xmm3_8
  __int64 v78; // r9
  char *v79; // r8
  __int64 v80; // rdi
  __int64 v81; // r14
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rax
  _QWORD *v86; // rcx
  int v87; // eax
  int v88; // edx
  double v89; // xmm3_8
  __int64 v90; // rax
  int v91; // ebx
  int v92; // edx
  double *v93; // rdx
  int v94; // edx
  bool v95; // zf
  __int64 v96; // rax
  __int64 v97; // rbp
  int v98; // ebx
  double *v99; // r12
  double v100; // xmm0_8
  double v101; // xmm1_8
  __int64 v102; // r11
  int v103; // eax
  int v104; // eax
  __int64 v105; // rbx
  __int64 v106; // rax
  __int64 v107; // rbp
  __int64 v108; // rdi
  __int64 v109; // rax
  __int64 v110; // r13
  __int64 v111; // r8
  __int64 v112; // r12
  int v113; // eax
  int v114; // esi
  double v115; // xmm2_8
  int v116; // ecx
  __int64 v117; // rdx
  __int64 v118; // rsi
  __int64 v119; // rax
  __int64 v120; // r10
  __int64 v121; // rsi
  __int64 v122; // r9
  __int64 v123; // rcx
  double v124; // xmm1_8
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rdx
  double v128; // xmm0_8
  __int64 v129; // rax
  double *v130; // r11
  double *v131; // rdi
  double *v132; // rbx
  __int64 v133; // r8
  __int64 v134; // r9
  unsigned int j; // ebp
  double *v136; // rcx
  double v137; // xmm1_8
  double *v138; // rax
  double v139; // xmm0_8
  __int64 v140; // r10
  double *v141; // rdx
  double v142; // xmm1_8
  unsigned __int64 v143; // rax
  double v144; // xmm0_8
  int *v145; // rbx
  __int64 v146; // rax
  __int64 k; // rcx
  int v148; // edx
  __int64 result; // rax
  const void *v150; // rdi
  _QWORD *v151; // rax
  _QWORD *v152; // rax
  int v153; // edx
  __int64 v154; // r12
  __int64 v155; // rdx
  __int64 v156; // r14
  __int128 v157; // xmm0
  __int64 v158; // rbp
  __int64 v159; // rsi
  int v160; // r8d
  double v161; // xmm1_8
  __int64 v162; // rdi
  __int64 v163; // rax
  int v164; // ecx
  double v165; // xmm1_8
  __int64 v166; // r9
  __int64 v167; // r11
  char *v168; // r15
  __int64 i; // rax
  __int64 v170; // rcx
  __int128 v171; // xmm1
  __int64 v172; // rax
  __int64 v173; // r10
  char *v174; // r11
  __int64 v175; // r9
  __int64 v176; // rax
  double v177; // xmm0_8
  __int64 v178; // rax
  __int64 v179; // r8
  _QWORD *v180; // rcx
  int v181; // edx
  _QWORD *v182; // rax
  __int64 v183; // rdx
  _QWORD *v184; // rax
  _QWORD *v185; // rdx
  __int64 v186; // rax
  int v187; // edx
  std::ostream *v188; // rbp
  _BYTE *v189; // rbx
  char v190; // si
  std::ostream *v191; // rax
  __int64 v192; // rbp
  __int64 v193; // r12
  __int64 v194; // r14
  __int64 v195; // rsi
  __int64 v196; // rdi
  int v197; // eax
  double *v198; // r10
  __int64 v199; // r11
  double v200; // xmm1_8
  double v201; // xmm13_8
  __int64 v202; // rax
  __int64 v203; // rcx
  __int64 v204; // rdi
  __int64 v205; // rsi
  _QWORD *v206; // rdx
  double v207; // xmm2_8
  double v208; // xmm0_8
  __int64 v209; // xmm0_8
  int *v210; // rax
  int v211; // edx
  int *v212; // rbx
  _QWORD *v213; // rax
  __int64 v214; // rsi
  __int64 v215; // rdi
  __int64 v216; // rax
  __int64 v217; // rax
  __int64 v218; // rcx
  int v219; // r8d
  __int64 v220; // rcx
  int v221; // esi
  int v222; // eax
  __int64 v223; // rax
  __int64 v224; // rax
  __int64 v225; // rax
  double v226; // xmm4_8
  double v227; // xmm5_8
  __int64 (__fastcall *v228)(); // rax
  __int64 v229; // r12
  __int64 v230; // r14
  __int64 v231; // rbp
  double *v232; // rdi
  __int64 v233; // rdx
  int v234; // eax
  __int64 v235; // rcx
  __int64 v236; // r8
  double v237; // xmm1_8
  double v238; // xmm14_8
  __int64 v239; // rax
  __int64 v240; // rsi
  __int64 v241; // rcx
  char *v242; // rdi
  _QWORD *v243; // rdx
  __int64 v244; // r14
  __int64 v245; // r12
  __int64 v246; // rbx
  unsigned __int64 v247; // rdx
  double v248; // xmm1_8
  __int64 v249; // r9
  __int64 v250; // r8
  __int64 v251; // r8
  __int64 v252; // rax
  __int64 v253; // rsi
  _QWORD *v254; // rcx
  unsigned __int64 v255; // rcx
  __int64 v256; // r10
  __int64 v257; // r11
  __int64 v258; // r14
  __int64 v259; // r9
  __int64 v260; // r10
  const double *v261; // r12
  __int64 v262; // r11
  __int64 v263; // r15
  double v264; // xmm1_8
  __int64 v265; // rax
  __int64 v266; // rdi
  bool v267; // cc
  double v268; // xmm1_8
  int v269; // esi
  int v270; // esi
  __int64 v271; // r8
  __int64 v272; // rdi
  __int64 v273; // rax
  __int64 v274; // rsi
  _QWORD *v275; // rdx
  __int64 v276; // rcx
  __int64 v277; // rbp
  double *v278; // r13
  int *v279; // rbx
  unsigned __int64 v280; // r12
  __int64 v281; // rcx
  int v282; // eax
  int v283; // eax
  __int64 v284; // r8
  double v285; // xmm1_8
  double v286; // xmm2_8
  double v287; // xmm2_8
  double v288; // xmm1_8
  __int64 v289; // rax
  __int64 v290; // rax
  __int64 v291; // r8
  unsigned int v292; // edx
  std::ostream *v293; // r12
  _BYTE *v294; // rbp
  char v295; // si
  std::ostream *v296; // rax
  __int64 v297; // r8
  double v298; // xmm1_8
  double v299; // xmm2_8
  double v300; // xmm1_8
  unsigned __int64 v301; // xmm2_8
  __int64 v302; // rax
  double v303; // xmm13_8
  __int64 v304; // rdx
  int v305; // r8d
  __int64 v306; // rsi
  int *v307; // r15
  __int64 v308; // rbx
  __int64 v309; // rbp
  __int64 v310; // rdx
  __int64 v311; // r9
  __int64 v312; // r8
  double v313; // xmm1_8
  __int64 v314; // rax
  int v315; // edx
  __int64 v316; // r11
  __int64 v317; // r8
  char *v318; // r10
  __int64 v319; // r9
  __int64 v320; // rax
  __int64 v321; // rdx
  double v322; // xmm1_8
  __int64 v323; // rbx
  __int64 v324; // rax
  __int64 v325; // r9
  __int64 v326; // r11
  __int64 v327; // r10
  __int64 v328; // rax
  __int64 v329; // rdx
  double v330; // xmm1_8
  __int64 v331; // rcx
  __int64 v332; // rsi
  int *v333; // rcx
  double v334; // xmm1_8
  __int64 v335; // rax
  char *v336; // r11
  __int64 v337; // r10
  __int64 v338; // rsi
  __int64 v339; // rax
  double v340; // xmm1_8
  double v341; // xmm4_8
  double v342; // xmm5_8
  __int64 (__fastcall *v343)(); // rax
  double v344; // xmm1_8
  unsigned __int64 v345; // xmm14_8
  __int64 v346; // rax
  __int64 v347; // r11
  char *v348; // r10
  __int64 v349; // r8
  __int64 v350; // rbx
  __int64 v351; // rax
  __int64 v352; // rdi
  double v353; // xmm1_8
  int v354; // eax
  __int64 v355; // rdi
  __int64 v356; // rax
  int v357; // edi
  __int64 v358; // r11
  __int64 v359; // r10
  __int64 v360; // rbx
  __int64 v361; // rax
  __int64 v362; // rdi
  double v363; // xmm1_8
  __int64 v364; // rax
  int v365; // eax
  double v367; // [rsp+0h] [rbp-108h]
  int v368; // [rsp+0h] [rbp-108h]
  double v369; // [rsp+0h] [rbp-108h]
  ClpCholeskyBase *v370; // [rsp+0h] [rbp-108h]
  double v371; // [rsp+0h] [rbp-108h]
  __int64 v372; // [rsp+8h] [rbp-100h]
  unsigned int v373; // [rsp+8h] [rbp-100h]
  unsigned int v374; // [rsp+8h] [rbp-100h]
  unsigned int v375; // [rsp+8h] [rbp-100h]
  __int64 v376; // [rsp+10h] [rbp-F8h]
  double v377; // [rsp+10h] [rbp-F8h]
  double v378; // [rsp+10h] [rbp-F8h]
  int v379; // [rsp+18h] [rbp-F0h]
  ClpCholeskyBase *v380; // [rsp+18h] [rbp-F0h]
  __int64 v381; // [rsp+18h] [rbp-F0h]
  int v382; // [rsp+20h] [rbp-E8h]
  int v383; // [rsp+20h] [rbp-E8h]
  int v384; // [rsp+20h] [rbp-E8h]
  __int64 v385; // [rsp+28h] [rbp-E0h]
  double *v386; // [rsp+28h] [rbp-E0h]
  int v387; // [rsp+28h] [rbp-E0h]
  ClpCholeskyBase *v388; // [rsp+30h] [rbp-D8h]
  ClpCholeskyBase *v389; // [rsp+30h] [rbp-D8h]
  __int64 v390; // [rsp+38h] [rbp-D0h]
  __int64 v391; // [rsp+40h] [rbp-C8h]
  __int64 v392; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v393; // [rsp+40h] [rbp-C8h]
  _DWORD *v394; // [rsp+40h] [rbp-C8h]
  __int64 v395; // [rsp+40h] [rbp-C8h]
  int v396; // [rsp+48h] [rbp-C0h]
  double v397; // [rsp+48h] [rbp-C0h]
  int v398; // [rsp+48h] [rbp-C0h]
  __int64 v399; // [rsp+50h] [rbp-B8h]
  __int64 v400; // [rsp+50h] [rbp-B8h]
  int v401; // [rsp+58h] [rbp-B0h]
  __int64 v402; // [rsp+58h] [rbp-B0h]
  __int64 v403; // [rsp+58h] [rbp-B0h]
  __int64 v404; // [rsp+58h] [rbp-B0h]
  __int64 v405; // [rsp+60h] [rbp-A8h]
  __int64 v406; // [rsp+60h] [rbp-A8h]
  __int64 v407; // [rsp+60h] [rbp-A8h]
  __int64 v408; // [rsp+70h] [rbp-98h]
  __int64 v409; // [rsp+70h] [rbp-98h]
  ClpCholeskyBase *v410; // [rsp+78h] [rbp-90h]
  ClpCholeskyBase *v411; // [rsp+78h] [rbp-90h]
  ClpCholeskyBase *v412; // [rsp+78h] [rbp-90h]
  ClpCholeskyBase *v413; // [rsp+78h] [rbp-90h]
  ClpCholeskyBase *v414; // [rsp+78h] [rbp-90h]
  __int64 v415; // [rsp+80h] [rbp-88h]
  __int64 v416; // [rsp+80h] [rbp-88h]
  __int64 v417; // [rsp+88h] [rbp-80h]
  ClpCholeskyBase *v418; // [rsp+88h] [rbp-80h]
  __int64 v419; // [rsp+90h] [rbp-78h]
  ClpCholeskyBase *v420; // [rsp+90h] [rbp-78h]
  __int64 v421; // [rsp+90h] [rbp-78h]
  __int64 v422; // [rsp+90h] [rbp-78h]
  double v423; // [rsp+98h] [rbp-70h]
  __int64 v424; // [rsp+98h] [rbp-70h]
  int v425; // [rsp+98h] [rbp-70h]
  int *v426; // [rsp+A0h] [rbp-68h]
  int *v427; // [rsp+A0h] [rbp-68h]
  __int64 v428; // [rsp+A8h] [rbp-60h]
  __int64 v429; // [rsp+B0h] [rbp-58h]
  __int64 v430; // [rsp+B8h] [rbp-50h]
  __int64 v431; // [rsp+C0h] [rbp-48h]
  __int64 v432; // [rsp+C8h] [rbp-40h]

  v10 = this;
  v12 = *(_QWORD **)(*((_QWORD *)this + 4) + 192LL);
  v13 = (_QWORD *)*v12;
  v14 = *(__int64 (**)(void))(*v12 + 56LL);
  if ( (char *)v14 == (char *)ClpPackedMatrix::getVectorStarts )
  {
    v372 = *(_QWORD *)(v12[11] + 48LL);
  }
  else
  {
    v372 = v14();
    v12 = *(_QWORD **)(*((_QWORD *)v10 + 4) + 192LL);
    v13 = (_QWORD *)*v12;
  }
  v15 = (__int64 (*)(void))v13[8];
  if ( (char *)v15 == (char *)ClpPackedMatrix::getVectorLengths )
  {
    v376 = *(_QWORD *)(v12[11] + 56LL);
  }
  else
  {
    v376 = v15();
    v12 = *(_QWORD **)(*((_QWORD *)v10 + 4) + 192LL);
    v13 = (_QWORD *)*v12;
  }
  v16 = (__int64 (*)(void))v13[6];
  if ( (char *)v16 == (char *)ClpPackedMatrix::getIndices )
  {
    v388 = *(ClpCholeskyBase **)(v12[11] + 40LL);
  }
  else
  {
    v388 = (ClpCholeskyBase *)v16();
    v12 = *(_QWORD **)(*((_QWORD *)v10 + 4) + 192LL);
    v13 = (_QWORD *)*v12;
  }
  v17 = (__int64 (*)(void))v13[5];
  if ( (char *)v17 == (char *)ClpPackedMatrix::getElements )
    v390 = *(_QWORD *)(v12[11] + 32LL);
  else
    v390 = v17();
  v18 = *((_QWORD **)v10 + 118);
  v19 = (_QWORD *)*v18;
  v20 = *(__int64 (**)(void))(*v18 + 56LL);
  if ( (char *)v20 == (char *)ClpPackedMatrix::getVectorStarts )
  {
    v408 = *(_QWORD *)(v18[11] + 48LL);
  }
  else
  {
    v225 = v20();
    v18 = *((_QWORD **)v10 + 118);
    v408 = v225;
    v19 = (_QWORD *)*v18;
  }
  v21 = (__int64 (*)(void))v19[8];
  if ( (char *)v21 == (char *)ClpPackedMatrix::getVectorLengths )
  {
    v399 = *(_QWORD *)(v18[11] + 56LL);
  }
  else
  {
    v224 = v21();
    v18 = *((_QWORD **)v10 + 118);
    v399 = v224;
    v19 = (_QWORD *)*v18;
  }
  v22 = (__int64 (*)(void))v19[6];
  if ( (char *)v22 == (char *)ClpPackedMatrix::getIndices )
  {
    v415 = *(_QWORD *)(v18[11] + 40LL);
  }
  else
  {
    v223 = v22();
    v18 = *((_QWORD **)v10 + 118);
    v415 = v223;
    v19 = (_QWORD *)*v18;
  }
  v23 = (__int64 (*)(void))v19[5];
  if ( (char *)v23 == (char *)ClpPackedMatrix::getElements )
    v417 = *(_QWORD *)(v18[11] + 32LL);
  else
    v417 = v23();
  v24 = *((ClpCholeskyBase **)v10 + 4);
  v25 = *((_QWORD **)v24 + 24);
  v26 = *(__int64 (**)(void))(*v25 + 24LL);
  if ( (char *)v26 == (char *)ClpPackedMatrix::getNumCols )
  {
    v27 = v25[11];
    if ( *(_BYTE *)(v27 + 8) )
      v28 = *(_DWORD *)(v27 + 64);
    else
      v28 = *(_DWORD *)(v27 + 68);
  }
  else
  {
    v222 = v26();
    v24 = *((ClpCholeskyBase **)v10 + 4);
    v28 = v222;
  }
  v29 = 0x3FF0000000000000uLL;
  v30 = *((double *)v24 + 113) * *((double *)v24 + 116);
  if ( v30 > 1.0 )
  {
    a6 = 0.0;
    if ( v30 < 0.0 )
    {
      sqrt(v30);
      v29 = 0x3FF0000000000000uLL;
      v24 = *((ClpCholeskyBase **)v10 + 4);
    }
    v30 = 1.0;
  }
  v31 = *((_DWORD *)v10 + 11);
  v32 = *((_QWORD *)v10 + 16);
  v379 = v31;
  if ( v31 )
  {
    v181 = v31 / 8;
    if ( v31 / 8 <= 0 )
    {
      v184 = *((_QWORD **)v10 + 16);
    }
    else
    {
      v182 = *((_QWORD **)v10 + 16);
      v183 = (unsigned int)(v181 - 1);
      do
      {
        *v182 = 0;
        v182[1] = 0;
        v182 += 8;
        *(v182 - 6) = 0;
        *(v182 - 5) = 0;
        *(v182 - 4) = 0;
        *(v182 - 3) = 0;
        *(v182 - 2) = 0;
        *(v182 - 1) = 0;
      }
      while ( v182 != (_QWORD *)(v32 + ((v183 + 1) << 6)) );
      v184 = (_QWORD *)(v32 + (((int)v183 + 1LL) << 6));
    }
    switch ( v379 % 8 )
    {
      case 1:
        goto LABEL_173;
      case 2:
        goto LABEL_172;
      case 3:
        goto LABEL_171;
      case 4:
        goto LABEL_170;
      case 5:
        goto LABEL_169;
      case 6:
        goto LABEL_168;
      case 7:
        v184[6] = 0;
LABEL_168:
        v184[5] = 0;
LABEL_169:
        v184[4] = 0;
LABEL_170:
        v184[3] = 0;
LABEL_171:
        v184[2] = 0;
LABEL_172:
        v184[1] = 0;
LABEL_173:
        *v184 = 0;
        break;
      default:
        break;
    }
  }
  if ( *((_BYTE *)v10 + 12) )
  {
    v150 = *((const void **)v24 + 20);
    v387 = *((_DWORD *)v24 + 27);
    v398 = *((_DWORD *)v24 + 26);
    v384 = v398 + v387;
    if ( v150
      && (v393 = v29,
          v151 = __dynamic_cast(
                   v150,
                   (const struct __class_type_info *)&`typeinfo for'ClpObjective,
                   (const struct __class_type_info *)&`typeinfo for'ClpQuadraticObjective,
                   0),
          v29 = v393,
          v151) )
    {
      v152 = (_QWORD *)v151[3];
      if ( v379 <= 0 )
        goto LABEL_134;
      v394 = *((_DWORD **)v10 + 9);
      if ( !*v394 )
      {
LABEL_131:
        v153 = 0;
        while ( v379 > ++v153 )
        {
          if ( v394[v153] != v153 )
            goto LABEL_200;
        }
LABEL_134:
        if ( v152 )
        {
          v416 = v152[5];
          v409 = v152[6];
          v406 = v152[7];
          v412 = (ClpCholeskyBase *)v152[4];
          if ( v387 > 0 )
          {
            v154 = *((_QWORD *)v10 + 12);
            v155 = 0;
            v156 = *((_QWORD *)v10 + 13);
            v395 = *((_QWORD *)v10 + 14);
            v157 = v29;
            v420 = v24;
            v402 = *((_QWORD *)v10 + 15);
            v158 = *((_QWORD *)v10 + 11);
            v418 = v10;
            a10 = -0.0;
            while ( 1 )
            {
              v159 = v158 + 8LL * *(int *)(v154 + 4 * v155);
              v160 = *(_DWORD *)(v154 + 4 * v155 + 4) - *(_DWORD *)(v154 + 4 * v155);
              v161 = a2[v155];
              v162 = v156 + 4LL * *(int *)(v395 + 4 * v155);
              a7 = v161;
              if ( v161 < 0.0 )
                a7 = -v161;
              if ( a7 <= 1.0e-100 )
              {
                *(_QWORD *)(v402 + 8 * v155) = 0xD4B249AD2594C37DLL;
                if ( v160 > 0 )
                {
                  v290 = 0;
                  v291 = (unsigned int)(v160 - 1) + 1LL;
                  do
                  {
                    *(_QWORD *)(v159 + 8 * v290) = *(_QWORD *)(v32 + 8LL * *(int *)(v162 + 4 * v290));
                    ++v290;
                  }
                  while ( v291 != v290 );
                }
              }
              else
              {
                v163 = *(int *)(v409 + 4 * v155);
                v164 = *(_DWORD *)(v406 + 4 * v155);
                v165 = *(double *)&v29 / v161;
                if ( (int)v163 < (int)v163 + v164 )
                {
                  v166 = (unsigned int)(v164 - 1) + 1LL;
                  v167 = v416 + 4 * v163;
                  v168 = (char *)v412 + 8 * v163;
                  for ( i = 0; v166 != i; ++i )
                  {
                    while ( 1 )
                    {
                      v170 = *(int *)(v167 + 4 * i);
                      if ( (int)v155 >= (int)v170 )
                        break;
                      *(double *)(v32 + 8 * v170) = -*(double *)&v168[8 * i];
LABEL_143:
                      if ( v166 == ++i )
                        goto LABEL_147;
                    }
                    if ( (_DWORD)v155 != (_DWORD)v170 )
                      goto LABEL_143;
                    v165 = v165 + *(double *)&v168[8 * i];
                  }
                }
LABEL_147:
                a7 = -v165;
                if ( v165 < 0.0 )
                  v165 = -v165;
                *(double *)&v157 = fmax(*(double *)&v157, v165);
                *(double *)(v402 + 8 * v155) = a7;
                v171 = v157;
                v172 = *(int *)(v372 + 4 * v155);
                if ( (int)v172 < (int)v172 + *(_DWORD *)(v376 + 4 * v155) )
                {
                  v173 = (unsigned int)(*(_DWORD *)(v376 + 4 * v155) - 1) + 1LL;
                  v174 = (char *)v388 + 4 * v172;
                  v175 = v390 + 8 * v172;
                  v176 = 0;
                  do
                  {
                    *(_QWORD *)(v32 + 8LL * (v384 + *(_DWORD *)&v174[4 * v176])) = *(_QWORD *)(v175 + 8 * v176);
                    v177 = *(double *)(v175 + 8 * v176);
                    if ( v177 < 0.0 )
                      v177 = -v177;
                    *(double *)&v171 = fmax(*(double *)&v171, v177);
                    ++v176;
                    v157 = v171;
                  }
                  while ( v173 != v176 );
                }
                if ( v160 > 0 )
                {
                  v178 = 0;
                  v179 = (unsigned int)(v160 - 1) + 1LL;
                  do
                  {
                    v180 = (_QWORD *)(v32 + 8LL * *(int *)(v162 + 4 * v178));
                    *(_QWORD *)(v159 + 8 * v178++) = *v180;
                    *v180 = 0;
                  }
                  while ( v179 != v178 );
                }
              }
              if ( (unsigned int)(v387 - 1) + 1LL == ++v155 )
              {
                v10 = v418;
                v24 = v420;
                goto LABEL_263;
              }
            }
          }
          goto LABEL_393;
        }
LABEL_253:
        if ( v387 > 0 )
        {
          v244 = *((_QWORD *)v10 + 13);
          v245 = *((_QWORD *)v10 + 14);
          v400 = *((_QWORD *)v10 + 11);
          v246 = *((_QWORD *)v10 + 12);
          v247 = 0;
          *(_QWORD *)&v157 = v29;
          a7 = -0.0;
          v404 = *((_QWORD *)v10 + 15);
          do
          {
            v248 = a2[v247 / 4];
            v249 = *(int *)(v246 + v247);
            v250 = 4LL * *(int *)(v245 + v247);
            a10 = v248;
            if ( v248 < 0.0 )
              a10 = -v248;
            if ( a10 > 1.0e-100 )
            {
              v267 = *(double *)&v29 / v248 >= 0.0;
              v334 = *(double *)&v29 / v248;
              *(_QWORD *)&a10 = *(_QWORD *)&v334 ^ 0x8000000000000000LL;
              if ( !v267 )
                *(_QWORD *)&v334 ^= 0x8000000000000000LL;
              *(double *)&v157 = fmax(*(double *)&v157, v334);
              *(double *)(v404 + 2 * v247) = a10;
              v335 = *(int *)(v372 + v247);
              if ( (int)v335 < (int)v335 + *(_DWORD *)(v376 + v247) )
              {
                v336 = (char *)v388 + 4 * v335;
                v337 = (unsigned int)(*(_DWORD *)(v376 + v247) - 1) + 1LL;
                v338 = v390 + 8 * v335;
                v339 = 0;
                do
                {
                  *(_QWORD *)(v32 + 8LL * (v384 + *(_DWORD *)&v336[4 * v339])) = *(_QWORD *)(v338 + 8 * v339);
                  v340 = *(double *)(v338 + 8 * v339);
                  if ( v340 < 0.0 )
                    v340 = -v340;
                  ++v339;
                  *(double *)&v157 = fmax(*(double *)&v157, v340);
                }
                while ( v337 != v339 );
              }
            }
            else
            {
              *(double *)(v404 + 2 * v247) = -v248;
            }
            if ( *(_DWORD *)(v246 + v247 + 4) - (int)v249 > 0 )
            {
              v251 = v244 + v250;
              v252 = 0;
              v253 = (unsigned int)(*(_DWORD *)(v246 + v247 + 4) - v249 - 1) + 1LL;
              do
              {
                v254 = (_QWORD *)(v32 + 8LL * *(int *)(v251 + 4 * v252));
                *(_QWORD *)(v400 + 8 * v249 + 8 * v252++) = *v254;
                *v254 = 0;
              }
              while ( v253 != v252 );
            }
            v247 += 4LL;
          }
          while ( 4LL * (unsigned int)(v387 - 1) + 4 != v247 );
          goto LABEL_263;
        }
LABEL_393:
        *(_QWORD *)&v157 = v29;
LABEL_263:
        if ( v387 < v384 )
        {
          v255 = 0;
          v256 = 4LL * v387;
          v257 = v387;
          a10 = -1.0;
          v258 = *((_QWORD *)v10 + 13);
          v259 = v256 + *((_QWORD *)v10 + 12);
          v260 = *((_QWORD *)v10 + 14) + v256;
          v261 = &a2[v257];
          v370 = v10;
          v262 = *((_QWORD *)v10 + 15) + v257 * 8;
          v263 = *((_QWORD *)v10 + 11);
          do
          {
            v264 = v261[v255 / 4];
            a7 = v264;
            v265 = *(int *)(v259 + v255);
            v266 = 4LL * *(int *)(v260 + v255);
            if ( v264 < 0.0 )
              a7 = -v264;
            if ( a7 <= 1.0e-100 )
            {
              v268 = -1.0e100;
            }
            else
            {
              a7 = *(double *)&v29 / v264;
              v267 = *(double *)&v29 / v264 >= 0.0;
              v268 = -(*(double *)&v29 / v264);
              if ( !v267 )
                a7 = v268;
              *(double *)&v157 = fmax(*(double *)&v157, a7);
            }
            v269 = *(_DWORD *)(v259 + v255 + 4);
            *(double *)(v262 + 2 * v255) = v268;
            *(_QWORD *)(v32 + 8LL * v384 + 2 * v255) = 0xBFF0000000000000LL;
            v270 = v269 - v265;
            if ( v270 > 0 )
            {
              v271 = v258 + v266;
              v272 = v263 + 8 * v265;
              v273 = 0;
              v274 = (unsigned int)(v270 - 1) + 1LL;
              do
              {
                v275 = (_QWORD *)(v32 + 8LL * *(int *)(v271 + 4 * v273));
                *(_QWORD *)(v272 + 8 * v273++) = *v275;
                *v275 = 0;
              }
              while ( v274 != v273 );
            }
            v255 += 4LL;
          }
          while ( 4LL * (unsigned int)(v398 - 1) + 4 != v255 );
          v10 = v370;
        }
        v371 = *((double *)v24 + 118) * *((double *)v24 + 118);
        if ( v398 > 0 )
        {
          v276 = *((_QWORD *)v10 + 12);
          v277 = *((_QWORD *)v10 + 11);
          v278 = (double *)(*((_QWORD *)v10 + 15) + 8LL * v384);
          v279 = (int *)(v276 + 4LL * v384);
          v280 = v276 + 4 * (v384 + (unsigned __int64)(unsigned int)(v398 - 1)) + 4;
          do
          {
            v281 = *v279;
            v282 = v279[1];
            *v278 = v371;
            v283 = v282 - v281;
            if ( v283 > 0 )
              memset((void *)(v277 + 8 * v281), 0, 8LL * (unsigned int)(v283 - 1) + 8);
            ++v279;
            ++v278;
          }
          while ( (int *)v280 != v279 );
        }
        goto LABEL_212;
      }
LABEL_200:
      a7 = *((double *)v24 + 118) * *((double *)v24 + 118);
      if ( v152 )
      {
        v192 = *((_QWORD *)v10 + 12);
        v193 = *((_QWORD *)v10 + 14);
        v194 = 0;
        a10 = 0.0;
        v413 = v10;
        v430 = v152[5];
        *(_QWORD *)&v157 = v29;
        v429 = v152[6];
        v428 = v152[7];
        v427 = (int *)v152[4];
        v421 = *((_QWORD *)v10 + 11);
        v424 = *((_QWORD *)v10 + 13);
        v407 = *((_QWORD *)v10 + 15);
        while ( 1 )
        {
          v195 = 8LL * *(int *)(v192 + 4 * v194);
          v196 = 4LL * *(int *)(v193 + 4 * v194);
          v197 = v394[v194];
          v198 = (double *)(v407 + 8 * v194);
          if ( v197 >= v387 )
          {
            v284 = *((_QWORD *)v413 + 8);
            if ( v197 >= v384 )
            {
              *v198 = a7;
              v323 = v197 - v384;
              v324 = *(int *)(v408 + 4 * v323);
              if ( (int)v324 < (int)v324 + *(_DWORD *)(v399 + 4 * v323) )
              {
                v325 = (unsigned int)(*(_DWORD *)(v399 + 4 * v323) - 1) + 1LL;
                v326 = v415 + 4 * v324;
                v327 = v417 + 8 * v324;
                v328 = 0;
                do
                {
                  v329 = *(int *)(v284 + 4LL * *(int *)(v326 + 4 * v328));
                  if ( (int)v329 > (int)v194 )
                  {
                    *(_QWORD *)(v32 + 8 * v329) = *(_QWORD *)(v327 + 8 * v328);
                    v330 = *(double *)(v327 + 8 * v328);
                    if ( v330 < 0.0 )
                      v330 = -v330;
                    *(double *)&v157 = fmax(*(double *)&v157, v330);
                  }
                  ++v328;
                }
                while ( v325 != v328 );
              }
              v289 = *(int *)(v284 + 4LL * ((int)v323 + v387));
              if ( (int)v289 <= (int)v194 )
                goto LABEL_207;
            }
            else
            {
              v285 = a2[v197];
              v286 = v285;
              if ( v285 < 0.0 )
                v286 = -v285;
              if ( v286 <= 1.0e-100 )
              {
                v288 = -1.0e100;
              }
              else
              {
                v287 = *(double *)&v29 / v285;
                v267 = *(double *)&v29 / v285 >= 0.0;
                v288 = -(*(double *)&v29 / v285);
                if ( !v267 )
                  v287 = v288;
                *(double *)&v157 = fmax(*(double *)&v157, v287);
              }
              *v198 = v288;
              v289 = *(int *)(v284 + 4LL * (v398 + v197));
              if ( (int)v289 <= (int)v194 )
                goto LABEL_207;
            }
            *(_QWORD *)(v32 + 8 * v289) = 0xBFF0000000000000LL;
            goto LABEL_207;
          }
          v199 = v197;
          v200 = a2[v197];
          v201 = v200;
          if ( v200 < 0.0 )
            v201 = -v200;
          if ( v201 <= 1.0e-100 )
          {
            *v198 = -v200;
            goto LABEL_207;
          }
          v303 = *(double *)&v29 / v200;
          v304 = *(int *)(v429 + 4LL * v197);
          v305 = *(_DWORD *)(v428 + 4LL * v197);
          if ( (int)v304 >= (int)v304 + v305 )
            goto LABEL_326;
          v431 = v192;
          v432 = 8LL * *(int *)(v192 + 4 * v194);
          v306 = (unsigned int)(v305 - 1) + 1LL;
          v307 = &v427[2 * v304];
          v308 = v430 + 4 * v304;
          v309 = *((_QWORD *)v413 + 8);
          v310 = 0;
          do
          {
            while ( 1 )
            {
              v311 = *(int *)(v308 + 4 * v310);
              v312 = *(int *)(v309 + 4 * v311);
              if ( (int)v312 <= (int)v194 )
                break;
              *(double *)(v32 + 8 * v312) = -*(double *)&v307[2 * v310];
LABEL_321:
              if ( v306 == ++v310 )
                goto LABEL_325;
            }
            if ( v197 != (_DWORD)v311 )
              goto LABEL_321;
            v303 = v303 + *(double *)&v307[2 * v310++];
          }
          while ( v306 != v310 );
LABEL_325:
          v192 = v431;
          v195 = v432;
LABEL_326:
          v313 = -v303;
          if ( v303 < 0.0 )
            v303 = -v303;
          *(double *)&v157 = fmax(*(double *)&v157, v303);
          *v198 = v313;
          v314 = *(int *)(v372 + 4LL * v197);
          v315 = v314 + *(_DWORD *)(v376 + 4 * v199);
          if ( (int)v314 < v315 )
          {
            v316 = *((_QWORD *)v413 + 8);
            v317 = (unsigned int)(v315 - v314 - 1) + 1LL;
            v318 = (char *)v388 + 4 * v314;
            v319 = v390 + 8 * v314;
            v320 = 0;
            do
            {
              v321 = *(int *)(v316 + 4LL * (v384 + *(_DWORD *)&v318[4 * v320]));
              if ( (int)v321 > (int)v194 )
              {
                *(_QWORD *)(v32 + 8 * v321) = *(_QWORD *)(v319 + 8 * v320);
                v322 = *(double *)(v319 + 8 * v320);
                if ( v322 < 0.0 )
                  v322 = -v322;
                *(double *)&v157 = fmax(*(double *)&v157, v322);
              }
              ++v320;
            }
            while ( v317 != v320 );
          }
LABEL_207:
          if ( *(_DWORD *)(v192 + 4 * v194 + 4) - *(_DWORD *)(v192 + 4 * v194) > 0 )
          {
            v202 = 0;
            v203 = (unsigned int)(*(_DWORD *)(v192 + 4 * v194 + 4) - *(_DWORD *)(v192 + 4 * v194) - 1) + 1LL;
            v204 = v424 + v196;
            v205 = v421 + v195;
            do
            {
              v206 = (_QWORD *)(v32 + 8LL * *(int *)(v204 + 4 * v202));
              *(_QWORD *)(v205 + 8 * v202++) = *v206;
              *v206 = 0;
            }
            while ( v203 != v202 );
          }
          if ( (unsigned int)(v379 - 1) + 1LL == ++v194 )
          {
            v10 = v413;
            goto LABEL_212;
          }
        }
      }
    }
    else
    {
      if ( v379 <= 0 )
        goto LABEL_253;
      v394 = *((_DWORD **)v10 + 9);
      if ( !*v394 )
      {
        v152 = nullptr;
        goto LABEL_131;
      }
      a7 = *((double *)v24 + 118) * *((double *)v24 + 118);
    }
    v229 = *((_QWORD *)v10 + 12);
    v230 = *((_QWORD *)v10 + 15);
    v231 = 0;
    a10 = 0.0;
    v414 = *((ClpCholeskyBase **)v10 + 11);
    *(_QWORD *)&v157 = v29;
    v422 = *((_QWORD *)v10 + 13);
    v403 = *((_QWORD *)v10 + 14);
    do
    {
      v232 = (double *)(v230 + 8 * v231);
      v233 = 8LL * *(int *)(v229 + 4 * v231);
      v234 = v394[v231];
      v235 = 4LL * *(int *)(v403 + 4 * v231);
      if ( v234 >= v387 )
      {
        v297 = *((_QWORD *)v10 + 8);
        if ( v234 >= v384 )
        {
          v354 = v234 - v384;
          *v232 = a7;
          v355 = v354;
          v425 = v354;
          v356 = *(int *)(v408 + 4LL * v354);
          v46 = -*(_DWORD *)(v399 + 4 * v355) < 0;
          v357 = v356 + *(_DWORD *)(v399 + 4 * v355);
          if ( v46 != __OFSUB__((_DWORD)v356, v357) )
          {
            v358 = v415 + 4 * v356;
            v359 = (unsigned int)(v357 - v356 - 1) + 1LL;
            v360 = v417 + 8 * v356;
            v361 = 0;
            do
            {
              v362 = *(int *)(v297 + 4LL * *(int *)(v358 + 4 * v361));
              if ( (int)v231 < (int)v362 )
              {
                *(_QWORD *)(v32 + 8 * v362) = *(_QWORD *)(v360 + 8 * v361);
                v363 = *(double *)(v360 + 8 * v361);
                if ( v363 < 0.0 )
                  v363 = -v363;
                *(double *)&v157 = fmax(*(double *)&v157, v363);
              }
              ++v361;
            }
            while ( v359 != v361 );
          }
          v364 = *(int *)(v297 + 4LL * (v387 + v425));
          if ( (int)v231 < (int)v364 )
            *(_QWORD *)(v32 + 8 * v364) = 0xBFF0000000000000LL;
        }
        else
        {
          v298 = a2[v234];
          v299 = v298;
          if ( v298 < 0.0 )
            v299 = -v298;
          if ( v299 <= 1.0e-100 )
          {
            v301 = 0xD4B249AD2594C37DLL;
          }
          else
          {
            v300 = *(double *)&v29 / v298;
            v301 = *(_QWORD *)&v300 ^ 0x8000000000000000LL;
            if ( v300 < 0.0 )
              *(_QWORD *)&v300 ^= 0x8000000000000000LL;
            *(double *)&v157 = fmax(*(double *)&v157, v300);
          }
          *(_QWORD *)v232 = v301;
          v302 = *(int *)(v297 + 4LL * (v398 + v234));
          if ( (int)v231 < (int)v302 )
            *(_QWORD *)(v32 + 8 * v302) = 0xBFF0000000000000LL;
        }
      }
      else
      {
        v236 = v234;
        v237 = a2[v234];
        v238 = v237;
        if ( v237 < 0.0 )
          v238 = -v237;
        if ( v238 > 1.0e-100 )
        {
          v267 = *(double *)&v29 / v237 >= 0.0;
          v344 = *(double *)&v29 / v237;
          v345 = *(_QWORD *)&v344 ^ 0x8000000000000000LL;
          if ( !v267 )
            *(_QWORD *)&v344 ^= 0x8000000000000000LL;
          *(_QWORD *)v232 = v345;
          *(double *)&v157 = fmax(*(double *)&v157, v344);
          v346 = *(int *)(v372 + 4LL * v234);
          if ( (int)v346 < (int)v346 + *(_DWORD *)(v376 + 4 * v236) )
          {
            v347 = *((_QWORD *)v10 + 8);
            v348 = (char *)v388 + 4 * v346;
            v349 = (unsigned int)(*(_DWORD *)(v376 + 4 * v236) - 1) + 1LL;
            v350 = v390 + 8 * v346;
            v351 = 0;
            do
            {
              v352 = *(int *)(v347 + 4LL * (v384 + *(_DWORD *)&v348[4 * v351]));
              if ( (int)v231 < (int)v352 )
              {
                *(_QWORD *)(v32 + 8 * v352) = *(_QWORD *)(v350 + 8 * v351);
                v353 = *(double *)(v350 + 8 * v351);
                if ( v353 < 0.0 )
                  v353 = -v353;
                *(double *)&v157 = fmax(*(double *)&v157, v353);
              }
              ++v351;
            }
            while ( v349 != v351 );
          }
        }
        else
        {
          *v232 = -v237;
        }
      }
      if ( *(_DWORD *)(v229 + 4 * v231 + 4) - *(_DWORD *)(v229 + 4 * v231) > 0 )
      {
        v239 = 0;
        v240 = (unsigned int)(*(_DWORD *)(v229 + 4 * v231 + 4) - *(_DWORD *)(v229 + 4 * v231) - 1) + 1LL;
        v241 = v422 + v235;
        v242 = (char *)v414 + v233;
        do
        {
          v243 = (_QWORD *)(v32 + 8LL * *(int *)(v241 + 4 * v239));
          *(_QWORD *)&v242[8 * v239++] = *v243;
          *v243 = 0;
        }
        while ( v240 != v239 );
      }
      ++v231;
    }
    while ( (unsigned int)(v379 - 1) + 1LL != v231 );
LABEL_212:
    v207 = 9.999999999999999e-21;
    v208 = *(double *)&v157 * 9.999999999999999e-21;
    if ( v208 >= 9.999999999999999e-12 )
    {
      v209 = 0x3DA5FD7FE1796495LL;
    }
    else
    {
      v207 = fmax(9.999999999999999e-21, v208);
      v209 = *(_QWORD *)&v207;
    }
    *((_QWORD *)v10 + 64) = v209;
    *((_DWORD *)v10 + 63) = 0;
    *((_QWORD *)v10 + 57) = 0;
    *((_QWORD *)v10 + 58) = 0x7FEFFFFFFFFFFFFFLL;
    *((_DWORD *)v10 + 77) = v384;
    if ( (unsigned __int64)v379 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_400;
    v210 = (int *)operator new[](4LL * v379);
    v211 = *((_DWORD *)v10 + 11);
    v212 = v210;
    if ( v211 )
    {
      if ( v211 / 8 <= 0 )
      {
        v333 = v210;
      }
      else
      {
        v331 = (unsigned int)(v211 / 8 - 1);
        v332 = (__int64)&v210[8 * v331 + 8];
        do
        {
          *(_OWORD *)v210 = 0;
          v210 += 8;
          *((_OWORD *)v210 - 1) = 0;
        }
        while ( (int *)v332 != v210 );
        v333 = &v212[8 * (int)v331 + 8];
      }
      switch ( v211 % 8 )
      {
        case 1:
          goto LABEL_357;
        case 2:
          goto LABEL_356;
        case 3:
          goto LABEL_355;
        case 4:
          goto LABEL_354;
        case 5:
          goto LABEL_353;
        case 6:
          goto LABEL_352;
        case 7:
          v333[6] = 0;
LABEL_352:
          v333[5] = 0;
LABEL_353:
          v333[4] = 0;
LABEL_354:
          v333[3] = 0;
LABEL_355:
          v333[2] = 0;
LABEL_356:
          v333[1] = 0;
LABEL_357:
          *v333 = 0;
          break;
        default:
          break;
      }
    }
    ClpCholeskyBase::factorizePart2(v10, v212);
    v369 = *((double *)v10 + 57);
    v375 = *((_DWORD *)v10 + 63);
    v213 = *((_QWORD **)v10 + 4);
    v378 = *((double *)v10 + 58);
    if ( *(int *)(v213[43] + 104LL) > 1 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v293 = (std::ostream *)std::ostream::_M_insert<double>();
      v294 = *(_BYTE **)((char *)v293 + *(_QWORD *)(*(_QWORD *)v293 - 24LL) + 240);
      if ( !v294 )
        goto LABEL_401;
      if ( v294[56] )
      {
        v295 = v294[67];
      }
      else
      {
        std::ctype<char>::_M_widen_init();
        v295 = 10;
        v343 = *(__int64 (__fastcall **)())(*(_QWORD *)v294 + 48LL);
        if ( v343 != std::ctype<char>::do_widen )
          v295 = ((__int64 (__fastcall *)(_BYTE *, __int64, double, double, double, double, double, double, double))v343)(
                   v294,
                   10,
                   v378,
                   9.999999999999999e-12,
                   v207,
                   a7,
                   v341,
                   v342,
                   a10);
      }
      v296 = (std::ostream *)std::ostream::put(v293, v295);
      std::ostream::flush(v296);
      v213 = *((_QWORD **)v10 + 4);
    }
    v214 = v213[151];
    v215 = v213[152];
    v216 = 0;
    *((double *)v10 + 3) = v369 / v378;
    if ( v384 > 0 )
    {
      v217 = 0;
      v218 = (unsigned int)(v384 - 1) + 1LL;
      do
      {
        while ( 1 )
        {
          v219 = v212[v217];
          *(_BYTE *)(v217 + *((_QWORD *)v10 + 7)) = 0;
          if ( !v219 )
            break;
          *(_QWORD *)(v214 + 8 * v217++) = *((_QWORD *)v10 + 74);
          if ( v218 == v217 )
            goto LABEL_222;
        }
        *(_QWORD *)(v214 + 8 * v217++) = 0;
      }
      while ( v218 != v217 );
LABEL_222:
      v216 = v384;
    }
    if ( (int)v216 < *((_DWORD *)v10 + 11) )
    {
      v220 = v215 - 8LL * v384;
      do
      {
        while ( 1 )
        {
          v221 = v212[v216];
          *(_BYTE *)(v216 + *((_QWORD *)v10 + 7)) = 0;
          if ( !v221 )
            break;
          *(_QWORD *)(v220 + 8 * v216++) = *((_QWORD *)v10 + 88);
          if ( *((_DWORD *)v10 + 11) <= (int)v216 )
            goto LABEL_284;
        }
        *(_QWORD *)(v220 + 8 * v216++) = 0;
      }
      while ( *((_DWORD *)v10 + 11) > (int)v216 );
    }
LABEL_284:
    operator delete[](v212);
    result = v375;
    goto LABEL_195;
  }
  v33 = *((_QWORD *)v10 + 121);
  v401 = 0;
  v419 = v28;
  if ( v33 )
    v401 = *(_DWORD *)(v33 + 44);
  v34 = *((_BYTE **)v10 + 119);
  if ( v34 )
  {
    v35 = *((_QWORD **)v10 + 120);
    v385 = *(_QWORD *)(v33 + 120);
    if ( v28 > 0 )
    {
      v410 = v24;
      v36 = (_DWORD *)v376;
      a6 = 0.0;
      v37 = (unsigned int)(v28 - 1);
      v38 = 0;
      v39 = a2;
      v40 = (int *)v372;
      v41 = (__int64)&v34[v37 + 1];
      do
      {
        if ( *v34 )
        {
          if ( v379 )
          {
            if ( v379 / 8 <= 0 )
            {
              v185 = v35;
            }
            else
            {
              v185 = v35;
              do
              {
                *v185 = 0;
                v185[1] = 0;
                v185 += 8;
                *(v185 - 6) = 0;
                *(v185 - 5) = 0;
                *(v185 - 4) = 0;
                *(v185 - 3) = 0;
                *(v185 - 2) = 0;
                *(v185 - 1) = 0;
              }
              while ( v185 != &v35[8 * (unsigned int)(v379 / 8 - 1) + 8] );
            }
            switch ( v379 % 8 )
            {
              case 1:
                goto LABEL_184;
              case 2:
                goto LABEL_183;
              case 3:
                goto LABEL_182;
              case 4:
                goto LABEL_181;
              case 5:
                goto LABEL_180;
              case 6:
                goto LABEL_179;
              case 7:
                v185[6] = 0;
LABEL_179:
                v185[5] = 0;
LABEL_180:
                v185[4] = 0;
LABEL_181:
                v185[3] = 0;
LABEL_182:
                v185[2] = 0;
LABEL_183:
                v185[1] = 0;
LABEL_184:
                *v185 = 0;
                break;
              default:
                break;
            }
          }
          v42 = v38++;
          v43 = (double *)(v385 + 8 * v42);
          if ( *v39 == 0.0 )
          {
            *(_QWORD *)v43 = v29;
          }
          else
          {
            v44 = *v40;
            v45 = v44 + *v36;
            v46 = -*v36 < 0;
            *v43 = *(double *)&v29 / *v39;
            if ( v46 != __OFSUB__((_DWORD)v44, v45) )
            {
              v47 = (unsigned int)(v45 - v44 - 1) + 1LL;
              v48 = (char *)v388 + 4 * v44;
              v49 = v390 + 8 * v44;
              v50 = 0;
              do
              {
                v51 = *(int *)&v48[4 * v50];
                v52 = *(_QWORD *)(v49 + 8 * v50++);
                v35[v51] = v52;
              }
              while ( v47 != v50 );
            }
          }
          v35 += v379;
        }
        ++v34;
        ++v39;
        ++v40;
        ++v36;
      }
      while ( (_BYTE *)v41 != v34 );
      v24 = v410;
    }
  }
  v53 = *((double *)v24 + 118) * *((double *)v24 + 118);
  v423 = v53;
  if ( v379 <= 0 )
  {
    v91 = 0;
    v89 = 9.999999999999999e-21;
    goto LABEL_74;
  }
  v54 = *((_QWORD *)v10 + 7);
  v55 = 0.0;
  v56 = 9.999999999999999e-21;
  v57 = nullptr;
  a10 = -0.0;
  v426 = a3;
  do
  {
    while ( 1 )
    {
      v58 = *((_QWORD *)v10 + 12);
      v59 = (int)v57;
      v60 = *((_QWORD *)v10 + 11);
      v61 = *(int *)(v58 + 4LL * (_QWORD)v57);
      v391 = *((_QWORD *)v10 + 13);
      v396 = *(_DWORD *)(*((_QWORD *)v10 + 14) + 4LL * (_QWORD)v57);
      LODWORD(v58) = *(_DWORD *)(v58 + 4LL * (_QWORD)v57 + 4) - v61;
      v62 = 8 * v61;
      v382 = v58;
      v380 = (ClpCholeskyBase *)((char *)v57 + 1);
      v63 = v60 + v62;
      v64 = *(int *)(*((_QWORD *)v10 + 9) + 4LL * (_QWORD)v57);
      v65 = (_DWORD *)(v399 + 4 * v64);
      v66 = (_BYTE *)(v54 + v64);
      if ( !*v65 )
      {
        *v66 = 1;
        v54 = *((_QWORD *)v10 + 7);
        v66 = (_BYTE *)(v54 + v64);
      }
      v67 = *((_QWORD *)v10 + 15);
      v386 = (double *)(v67 + 8LL * (_QWORD)v57);
      if ( !*v66 )
      {
        v68 = *(_DWORD *)(v408 + 4 * v64);
        v69 = v423 + a2[v64 + v419];
        v70 = v68 + *v65;
        v46 = -*v65 < 0;
        *(double *)(v32 + 8LL * (_QWORD)v57) = v69;
        if ( v46 != __OFSUB__(v68, v70) )
        {
          v411 = v57;
          v71 = *((_QWORD *)v10 + 119);
          v405 = v63;
          v72 = (int *)(v415 + 4LL * v68);
          v73 = (double *)(v417 + 8LL * v68);
          v74 = v415 + 4 * ((unsigned int)(v70 - v68 - 1) + (__int64)v68) + 4;
          do
          {
            while ( 1 )
            {
              v75 = *v72;
              if ( !v71 || !*(_BYTE *)(v71 + v75) )
              {
                v76 = *(int *)(v372 + 4 * v75);
                v77 = a2[v75] * *v73;
                if ( (int)v76 < (int)v76 + *(_DWORD *)(v376 + 4 * v75) )
                  break;
              }
              ++v72;
              ++v73;
              if ( (int *)v74 == v72 )
                goto LABEL_57;
            }
            v78 = *((_QWORD *)v10 + 8);
            v79 = (char *)v388 + 4 * v76;
            v80 = (unsigned int)(*(_DWORD *)(v376 + 4 * v75) - 1) + 1LL;
            v81 = v390 + 8 * v76;
            v82 = 0;
            do
            {
              v83 = *(int *)&v79[4 * v82];
              v84 = *(int *)(v78 + 4 * v83);
              if ( (int)v84 >= v59 && !*(_BYTE *)(v54 + v83) )
                *(double *)(v32 + 8 * v84) = *(double *)(v81 + 8 * v82) * v77 + *(double *)(v32 + 8 * v84);
              ++v82;
            }
            while ( v80 != v82 );
            ++v72;
            ++v73;
          }
          while ( (int *)v74 != v72 );
LABEL_57:
          v57 = v411;
          v63 = v405;
          v69 = *(double *)(v32 + 8LL * (_QWORD)v411);
        }
        *v386 = v69;
        v53 = *(double *)(v32 + 8LL * (_QWORD)v57);
        if ( v55 > v53 )
          v53 = -v53;
        v56 = fmax(v56, v53);
        *(_QWORD *)(v32 + 8LL * (_QWORD)v57) = 0;
        if ( v382 > 0 )
        {
          v85 = 0;
          do
          {
            v86 = (_QWORD *)(v32 + 8LL * *(int *)(v391 + 4LL * v396 + 4 * v85));
            *(_QWORD *)(v63 + 8 * v85) = *v86;
            v53 = *(double *)v86;
            if ( v55 > *(double *)v86 )
              v53 = -v53;
            ++v85;
            v56 = fmax(v56, v53);
            *v86 = 0;
          }
          while ( (unsigned int)(v382 - 1) + 1LL != v85 );
        }
        goto LABEL_65;
      }
      *(_QWORD *)(v67 + 8LL * (_QWORD)v57) = v29;
      if ( v382 > 1 )
        break;
LABEL_65:
      v87 = *((_DWORD *)v10 + 11);
      v88 = (_DWORD)v57 + 1;
      v57 = v380;
      if ( v87 <= v88 )
        goto LABEL_66;
    }
    v397 = v55;
    v392 = v29;
    memset((void *)(v60 + v62 + 8), 0, 8LL * (unsigned int)(v382 - 2) + 8);
    v87 = *((_DWORD *)v10 + 11);
    v57 = (ClpCholeskyBase *)((char *)v57 + 1);
    *(_QWORD *)&v29 = v392;
    v55 = v397;
  }
  while ( v87 > (int)v57 );
LABEL_66:
  a6 = v56 * 9.999999999999999e-21;
  a3 = v426;
  v89 = 9.999999999999999e-12;
  if ( a6 < 9.999999999999999e-12 )
  {
    if ( v87 > 0 )
    {
      v54 = *((_QWORD *)v10 + 7);
      v89 = a6;
      goto LABEL_68;
    }
    v89 = a6;
    v91 = 0;
LABEL_73:
    v89 = fmax(9.999999999999999e-21, v89);
  }
  else
  {
    if ( v87 > 0 )
    {
LABEL_68:
      v90 = 1;
      v91 = 0;
      do
      {
        v92 = *(char *)(v54 + v90 - 1);
        v426[v90 - 1] = v92;
        if ( !v92 )
        {
          v93 = (double *)(*((_QWORD *)v10 + 15) + 8 * v90 - 8);
          v53 = *v93;
          *v93 = v30 + *v93;
          if ( v53 <= a6 )
          {
            v426[v90 - 1] = 2;
            ++v91;
          }
        }
        v94 = v90++;
      }
      while ( *((_DWORD *)v10 + 11) > v94 );
      goto LABEL_73;
    }
    v91 = 0;
  }
LABEL_74:
  *((double *)v10 + 64) = v89;
  *((_DWORD *)v10 + 63) = 0;
  *((_QWORD *)v10 + 57) = 0;
  *((_DWORD *)v10 + 77) = 0;
  *((_QWORD *)v10 + 58) = 0x7FEFFFFFFFFFFFFFLL;
  ClpCholeskyBase::factorizePart2(v10, a3);
  v367 = *((double *)v10 + 57);
  v373 = *((_DWORD *)v10 + 63) + v91;
  v377 = *((double *)v10 + 58);
  if ( *(int *)(*(_QWORD *)(*((_QWORD *)v10 + 4) + 344LL) + 104LL) > 1 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<double>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v188 = (std::ostream *)std::ostream::_M_insert<double>();
    v189 = *(_BYTE **)((char *)v188 + *(_QWORD *)(*(_QWORD *)v188 - 24LL) + 240);
    if ( v189 )
    {
      if ( v189[56] )
      {
        v190 = v189[67];
      }
      else
      {
        std::ctype<char>::_M_widen_init();
        v190 = 10;
        v228 = *(__int64 (__fastcall **)())(*(_QWORD *)v189 + 48LL);
        if ( v228 != std::ctype<char>::do_widen )
          v190 = ((__int64 (__fastcall *)(_BYTE *, __int64, double, double, double, double, double, double, double))v228)(
                   v189,
                   10,
                   v377,
                   v53,
                   a6,
                   v89,
                   v226,
                   v227,
                   a10);
      }
      v191 = (std::ostream *)std::ostream::put(v188, v190);
      std::ostream::flush(v191);
      goto LABEL_75;
    }
LABEL_401:
    std::__throw_bad_cast();
  }
LABEL_75:
  v95 = *((_QWORD *)v10 + 119) == 0;
  *((double *)v10 + 3) = v367 / v377;
  if ( v95 )
    goto LABEL_119;
  v368 = *((_DWORD *)v10 + 11);
  if ( v368 > 0 )
  {
    v96 = *((_QWORD *)v10 + 15);
    v97 = 0;
    v98 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v99 = (double *)(v96 + v97);
        v100 = *(double *)(v96 + v97);
        v101 = sqrt(v100);
        if ( v100 < 0.0 )
          break;
        ++v98;
        v97 += 8;
        *v99 = v101;
        if ( v98 >= v368 )
          goto LABEL_80;
      }
      ++v98;
      v97 += 8;
      sqrt(v100);
      v365 = *((_DWORD *)v10 + 11);
      v368 = v365;
      *v99 = v101;
      if ( v98 >= v365 )
        break;
      v96 = *((_QWORD *)v10 + 15);
    }
  }
LABEL_80:
  v389 = *((ClpCholeskyBase **)v10 + 121);
  if ( v401 <= 0 )
  {
    ClpCholeskyBase::resetRowsDropped(*((ClpCholeskyBase **)v10 + 121));
  }
  else
  {
    v381 = *((_QWORD *)v10 + 120);
    v102 = (unsigned int)(v368 - 1) + 1LL;
    v103 = 1;
    if ( v368 > 0 )
      v103 = v368 + 1;
    v383 = v103;
    v104 = 0;
    do
    {
      v105 = v381 + 8LL * v368 * v104;
      if ( v368 > 0 )
      {
        v106 = 0;
        do
        {
          if ( a3[v106] )
            *(_QWORD *)(v105 + 8 * v106) = 0;
          ++v106;
        }
        while ( v106 != v102 );
        v107 = *((_QWORD *)v10 + 9);
        v108 = *((_QWORD *)v10 + 16);
        v109 = 0;
        do
        {
          *(_QWORD *)(v108 + 8 * v109) = *(_QWORD *)(v105 + 8LL * *(int *)(v107 + 4 * v109));
          ++v109;
        }
        while ( v109 != v102 );
        v110 = *((_QWORD *)v10 + 14);
        v111 = 0;
        v112 = *((_QWORD *)v10 + 12);
        do
        {
          v113 = *(_DWORD *)(v112 + v111);
          v114 = *(_DWORD *)(v112 + v111 + 4);
          v115 = *(double *)(v108 + 2 * v111);
          v116 = *(_DWORD *)(v110 + v111) - v113;
          if ( v113 < v114 )
          {
            v117 = v113;
            v118 = (unsigned int)(v114 - 1 - v113);
            v119 = v113 + 1LL;
            v120 = *((_QWORD *)v10 + 11);
            v121 = v119 + v118;
            v122 = *((_QWORD *)v10 + 13) + 4LL * v116;
            while ( 1 )
            {
              v123 = *(int *)(v122 + 4 * v117);
              v124 = *(double *)(v120 + 8 * v117);
              v117 = v119;
              *(double *)(v108 + 8 * v123) = *(double *)(v108 + 8 * v123) - v124 * v115;
              if ( v119 == v121 )
                break;
              ++v119;
            }
          }
          v111 += 4;
        }
        while ( 4 * v102 != v111 );
        v125 = *((_QWORD *)v10 + 15);
        v126 = 0;
        do
        {
          v127 = *(int *)(v107 + 4 * v126);
          v128 = *(double *)(v108 + 8 * v126) * *(double *)(v125 + 8 * v126);
          ++v126;
          *(double *)(v105 + 8 * v127) = v128;
        }
        while ( v126 != v102 );
      }
      v104 = v383;
    }
    while ( v401 > v383 );
    ClpCholeskyBase::resetRowsDropped(v389);
    v129 = *((_QWORD *)v10 + 121);
    v130 = *((double **)v10 + 120);
    v131 = *(double **)(v129 + 88);
    v132 = *(double **)(v129 + 120);
    v133 = *((int *)v10 + 11);
    v134 = 8 * v133;
    for ( j = v401 - 2; ; --j )
    {
      v136 = v130;
      v137 = *v132;
      if ( (int)v133 > 0 )
      {
        v138 = v130;
        do
        {
          v139 = *v138++;
          v137 = v137 + v139 * v139;
        }
        while ( v138 != &v130[(unsigned int)(v133 - 1) + 1] );
      }
      *v132 = v137;
      if ( j == -1 )
        break;
      v130 = (double *)((char *)v130 + v134);
      v140 = (__int64)&v131[j + 1];
      v141 = v130;
      do
      {
        while ( (int)v133 <= 0 )
        {
          ++v131;
          v141 = (double *)((char *)v141 + v134);
          *(v131 - 1) = 0.0;
          if ( (double *)v140 == v131 )
            goto LABEL_110;
        }
        v142 = 0.0;
        v143 = 0;
        do
        {
          v144 = v136[v143 / 8] * v141[v143 / 8];
          v143 += 8LL;
          v142 = v142 + v144;
        }
        while ( 8LL * (unsigned int)(v133 - 1) + 8 != v143 );
        *v131++ = v142;
        v141 = (double *)((char *)v141 + v134);
      }
      while ( (double *)v140 != v131 );
LABEL_110:
      ++v132;
    }
  }
  if ( (unsigned __int64)v401 > 0x1FFFFFFFFFFFFFFELL )
LABEL_400:
    __cxa_throw_bad_array_new_length();
  v145 = (int *)operator new[](4LL * v401);
  ClpCholeskyDense::factorizePart2(*((ClpCholeskyDense **)v10 + 121), v145);
  operator delete[](v145);
LABEL_119:
  if ( *(int *)(*((_QWORD *)v10 + 4) + 308LL) > 1999 )
  {
    if ( v373 )
    {
      if ( *((int *)v10 + 11) > 0 )
      {
        v186 = 0;
        v373 = 0;
        do
        {
          while ( 1 )
          {
            v187 = a3[v186];
            *(_BYTE *)(*((_QWORD *)v10 + 7) + v186) = v187;
            if ( (_BYTE)v187 == 2 )
              break;
            if ( *((_DWORD *)v10 + 11) <= (int)++v186 )
              goto LABEL_193;
          }
          a3[v373] = v186;
          v292 = ++v373;
          *(_BYTE *)(*((_QWORD *)v10 + 7) + v186++) = 1;
        }
        while ( (int)v186 < *((_DWORD *)v10 + 11) );
        result = v292;
        goto LABEL_194;
      }
      v373 = 0;
    }
LABEL_193:
    result = v373;
LABEL_194:
    *((_DWORD *)v10 + 20) += result;
    goto LABEL_195;
  }
  if ( v373 || (result = *((unsigned int *)v10 + 20), (_DWORD)result) )
  {
    if ( *((int *)v10 + 11) <= 0 )
    {
      v374 = -2;
      LODWORD(k) = 0;
    }
    else
    {
      v146 = 0;
      for ( k = 0; ; k = (int)k + 1 )
      {
        while ( 1 )
        {
          v148 = a3[v146];
          *(_BYTE *)(*((_QWORD *)v10 + 7) + v146) = v148;
          *(_BYTE *)(*((_QWORD *)v10 + 7) + v146) = 0;
          if ( (_BYTE)v148 == 2 )
            break;
          if ( *((_DWORD *)v10 + 11) <= (int)++v146 )
            goto LABEL_125;
        }
        a3[k] = v146;
        *(_BYTE *)(*((_QWORD *)v10 + 7) + v146++) = 0;
        if ( (int)v146 >= *((_DWORD *)v10 + 11) )
          break;
      }
      LODWORD(k) = k + 1;
LABEL_125:
      v374 = -2 - k;
    }
    *((_DWORD *)v10 + 20) = k;
    result = v374;
  }
LABEL_195:
  *((_DWORD *)v10 + 12) = 0;
  return result;
}

