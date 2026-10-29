__int64 __fastcall sub_154A470(__int64 a1, _BYTE *a2, __m128i a3)
{
  const __m128i *v3; // r12
  int *v4; // rbx
  int v5; // r13d
  __int16 v6; // ax
  __int64 v7; // rbx
  unsigned int v8; // r14d
  bool v10; // zf
  __int8 v11; // al
  __int64 v12; // rcx
  __int16 v13; // r14
  unsigned __int8 *v14; // r13
  _QWORD *v15; // rdx
  __int64 v16; // rax
  void **v17; // rbx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  void **v21; // rbp
  __int64 v22; // rbx
  void *v23; // rdi
  void **v24; // rdi
  void **v25; // rdi
  void **v26; // r13
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r15
  void *v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  void **v34; // r14
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r15
  int *v38; // rbp
  __int64 v39; // rbx
  void *v40; // rdi
  void **v41; // rdi
  void **v42; // rdi
  void **v43; // r15
  void **v44; // rbp
  unsigned __int64 v45; // rax
  __int64 v46; // r15
  unsigned __int64 v47; // rax
  void **v48; // rdx
  void **v49; // r12
  int *v50; // rbp
  __int64 v51; // rbx
  __int64 v52; // r15
  void *v53; // rdi
  void **v54; // rdi
  void **v55; // r15
  __int64 *v56; // rdi
  int v57; // eax
  __int64 v58; // rcx
  bool v59; // r14
  __int64 *v60; // rdi
  unsigned __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  __int64 *v66; // rdi
  int v67; // r14d
  __int64 v68; // rax
  __int16 v69; // dx
  __int64 v70; // r8
  __int64 v71; // rcx
  unsigned __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rcx
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rdx
  __int32 v77; // eax
  __int64 *v78; // rdi
  __int16 v79; // dx
  __int16 v80; // ax
  __int64 v81; // rdi
  unsigned __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  unsigned __int8 *v85; // rbx
  _QWORD *v86; // rdx
  __int64 v87; // rax
  void **v88; // rdx
  void **v89; // r13
  void **v90; // rbp
  void **v91; // rbx
  void **v92; // rdi
  void **v93; // rdi
  void **v94; // r13
  void *v95; // rdi
  __int16 v96; // cx
  __int16 v97; // dx
  __int64 v98; // rdi
  unsigned __int64 v99; // rax
  __int64 v100; // rax
  const __m128i *v101; // rbx
  __int64 *v102; // rdi
  int *v103; // rsi
  unsigned int v104; // r14d
  unsigned __int8 *v105; // rbx
  size_t v106; // rdx
  _QWORD *v107; // rcx
  __int64 v108; // rax
  _QWORD *v109; // r14
  __int64 v110; // rax
  unsigned __int64 v111; // rsi
  char *v112; // r8
  __int64 v113; // rdx
  unsigned __int64 v114; // rcx
  void *v115; // rax
  _BYTE *v116; // rsi
  signed __int64 v117; // r11
  __int64 v118; // rax
  _BYTE *v119; // rdi
  void **v120; // rbx
  unsigned __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // r14
  void **v124; // rbp
  __int64 v125; // rbx
  void *v126; // rdi
  void **v127; // rdi
  void **v128; // rdi
  void **v129; // r14
  __int64 (__fastcall *v130)(_QWORD *); // rax
  _QWORD *v131; // rdi
  __int64 *v132; // rdi
  __int64 *v133; // rdi
  __int64 *v134; // rdi
  unsigned __int8 *v135; // rbx
  _QWORD *v136; // rdx
  __int64 v137; // rax
  __int64 v138; // r13
  void **v139; // rbp
  __int64 v140; // rbx
  void *v141; // rdi
  void **v142; // rdi
  void **v143; // rdi
  void **v144; // r13
  __int64 (__fastcall *v145)(_QWORD); // rax
  _QWORD *v146; // rdi
  __int64 v147; // rdx
  unsigned __int64 v148; // rdx
  int v149; // eax
  __int64 (__fastcall *v150)(__int8 *); // rdx
  __int64 v151; // rdx
  __int64 v152; // rdx
  __int64 v153; // rax
  __int64 v154; // r13
  __int64 v155; // rdx
  __int64 v156; // r13
  unsigned __int8 *v157; // rbp
  __int64 v158; // rbx
  void *v159; // rdi
  const __m128i *v160; // rbx
  __int64 *v161; // rdi
  int *m128i_i32; // rsi
  unsigned __int8 *v163; // rbx
  unsigned int v164; // r8d
  __int64 v165; // rdx
  _DWORD *v166; // r11
  _QWORD *v167; // rcx
  __int64 v168; // rax
  _QWORD *v169; // rbx
  __int64 v170; // rcx
  unsigned __int64 v171; // rax
  char *v172; // r8
  unsigned __int64 v173; // rdx
  unsigned __int64 v174; // rcx
  _BYTE *v175; // rax
  _BYTE *v176; // rsi
  signed __int64 v177; // r10
  _DWORD *v178; // rdi
  void **v179; // rbx
  unsigned __int64 v180; // rax
  __int64 v181; // r14
  void **v182; // rbp
  __int64 v183; // rbx
  void *v184; // rdi
  void **v185; // rdi
  void **v186; // rdi
  void **v187; // r14
  unsigned __int64 v188; // rdx
  int v189; // eax
  __int64 v190; // rdx
  __int64 v191; // rax
  __int64 v192; // rax
  __int64 v193; // rbx
  __int64 v194; // rax
  __int64 v195; // rbp
  __int64 v196; // rbx
  void *v197; // rdi
  unsigned __int64 v198; // rdx
  int v199; // eax
  unsigned __int64 v200; // rcx
  int v201; // eax
  __int64 v202; // rdx
  unsigned __int64 v203; // rcx
  int v204; // eax
  __int64 v205; // rax
  __int64 v206; // r13
  __int64 v207; // rax
  __int64 v208; // r13
  unsigned __int8 *v209; // rbp
  __int64 v210; // rbx
  void *v211; // rdi
  __int64 v212; // rax
  __int64 v213; // rax
  __int64 v214; // rcx
  __int64 v215; // rax
  unsigned int v216; // r12d
  int v217; // r15d
  __int64 v218; // r13
  unsigned __int8 *v219; // r14
  __int64 v220; // rbx
  __int64 v221; // rbp
  void *v222; // rdi
  unsigned __int64 v223; // rdx
  int v224; // eax
  __int64 v225; // rax
  char *v226; // rdi
  int v227; // edx
  __int64 v228; // rax
  __int64 v229; // rax
  __int64 v230; // rdx
  __int64 v231; // rax
  void *v232; // rdi
  unsigned __int64 v233; // rdx
  int v234; // eax
  __int64 v235; // rax
  __int64 v236; // rax
  char *v237; // rcx
  char *v238; // rax
  char *v239; // rdi
  void *v240; // rax
  char *v241; // rdi
  int v242; // edx
  char *v243; // rdi
  int v244; // edx
  unsigned __int64 v245; // rcx
  size_t v246; // rax
  char *v247; // rdi
  int v248; // edx
  __int64 v249; // rcx
  __int64 v250; // rcx
  __int64 v251; // rax
  __int64 v252; // rax
  __int64 v253; // rdx
  __int64 v254; // rax
  __int64 v255; // rbx
  __int64 v256; // rbp
  void *v257; // rdi
  void **v259; // [rsp+8h] [rbp-380h]
  __int64 v260; // [rsp+10h] [rbp-378h]
  void **v261; // [rsp+10h] [rbp-378h]
  void **v262; // [rsp+10h] [rbp-378h]
  void **v263; // [rsp+10h] [rbp-378h]
  void **v264; // [rsp+18h] [rbp-370h]
  int v265; // [rsp+20h] [rbp-368h]
  void **v266; // [rsp+20h] [rbp-368h]
  __int16 v267; // [rsp+20h] [rbp-368h]
  unsigned __int64 v268; // [rsp+20h] [rbp-368h]
  __int64 v269; // [rsp+20h] [rbp-368h]
  unsigned __int64 v270; // [rsp+20h] [rbp-368h]
  int n; // [rsp+28h] [rbp-360h]
  size_t nb; // [rsp+28h] [rbp-360h]
  size_t nc; // [rsp+28h] [rbp-360h]
  size_t nd; // [rsp+28h] [rbp-360h]
  size_t ne; // [rsp+28h] [rbp-360h]
  size_t na; // [rsp+28h] [rbp-360h]
  int src; // [rsp+30h] [rbp-358h]
  char *srcb; // [rsp+30h] [rbp-358h]
  char *srcc; // [rsp+30h] [rbp-358h]
  void *srca; // [rsp+30h] [rbp-358h]
  int srcd; // [rsp+30h] [rbp-358h]
  __int64 v282; // [rsp+38h] [rbp-350h]
  unsigned int v283; // [rsp+38h] [rbp-350h]
  void **v284; // [rsp+38h] [rbp-350h]
  signed __int64 v285; // [rsp+38h] [rbp-350h]
  signed __int64 v286; // [rsp+38h] [rbp-350h]
  char *v287; // [rsp+38h] [rbp-350h]
  unsigned __int64 v288; // [rsp+38h] [rbp-350h]
  const __m128i *v289; // [rsp+38h] [rbp-350h]
  char *v290; // [rsp+38h] [rbp-350h]
  __int64 v291; // [rsp+38h] [rbp-350h]
  char *v292; // [rsp+38h] [rbp-350h]
  int v293; // [rsp+38h] [rbp-350h]
  __int64 v294; // [rsp+38h] [rbp-350h]
  __int64 v295; // [rsp+40h] [rbp-348h]
  unsigned __int64 v296; // [rsp+40h] [rbp-348h]
  unsigned __int64 v297; // [rsp+40h] [rbp-348h]
  unsigned __int64 v298; // [rsp+40h] [rbp-348h]
  __int64 v299; // [rsp+40h] [rbp-348h]
  __int64 v300; // [rsp+40h] [rbp-348h]
  int v301; // [rsp+40h] [rbp-348h]
  char *v302; // [rsp+48h] [rbp-340h]
  int v303; // [rsp+48h] [rbp-340h]
  _DWORD *v304; // [rsp+48h] [rbp-340h]
  _DWORD *v305; // [rsp+50h] [rbp-338h]
  char *v306; // [rsp+50h] [rbp-338h]
  _DWORD *v307; // [rsp+50h] [rbp-338h]
  _DWORD *v308; // [rsp+58h] [rbp-330h]
  _DWORD *v309; // [rsp+58h] [rbp-330h]
  int v310; // [rsp+6Ch] [rbp-31Ch] BYREF
  void *v311; // [rsp+70h] [rbp-318h] BYREF
  __int64 v312; // [rsp+78h] [rbp-310h]
  _BYTE v313[32]; // [rsp+80h] [rbp-308h] BYREF
  __m128i *v314; // [rsp+A0h] [rbp-2E8h] BYREF
  __int8 v315; // [rsp+A8h] [rbp-2E0h]
  const __m128i *v316; // [rsp+B0h] [rbp-2D8h]
  int v317; // [rsp+B8h] [rbp-2D0h]
  __int16 v318; // [rsp+BCh] [rbp-2CCh]
  __int64 (__fastcall *v319)(__int64); // [rsp+C0h] [rbp-2C8h]
  __int64 v320; // [rsp+C8h] [rbp-2C0h]
  __int64 v321; // [rsp+D0h] [rbp-2B8h]
  _DWORD v322[2]; // [rsp+E0h] [rbp-2A8h] BYREF
  char v323; // [rsp+E8h] [rbp-2A0h]
  __int64 v324; // [rsp+ECh] [rbp-29Ch]
  char v325; // [rsp+F4h] [rbp-294h]
  void *v326; // [rsp+F8h] [rbp-290h]
  __int64 v327; // [rsp+100h] [rbp-288h]
  _BYTE v328[24]; // [rsp+108h] [rbp-280h] BYREF
  _DWORD v329[2]; // [rsp+120h] [rbp-268h] BYREF
  char v330; // [rsp+128h] [rbp-260h]
  __int64 v331; // [rsp+12Ch] [rbp-25Ch]
  char v332; // [rsp+134h] [rbp-254h]
  void *v333; // [rsp+138h] [rbp-250h]
  __int64 v334; // [rsp+140h] [rbp-248h]
  _BYTE v335[24]; // [rsp+148h] [rbp-240h] BYREF
  void *v336; // [rsp+160h] [rbp-228h] BYREF
  unsigned __int64 v337; // [rsp+168h] [rbp-220h]
  __int64 v338; // [rsp+170h] [rbp-218h]
  void *v339; // [rsp+180h] [rbp-208h]
  __int64 v340; // [rsp+190h] [rbp-1F8h] BYREF
  __int16 v341; // [rsp+1A0h] [rbp-1E8h]
  void *v342; // [rsp+1B0h] [rbp-1D8h] BYREF
  unsigned __int64 v343; // [rsp+1B8h] [rbp-1D0h]
  __int64 v344; // [rsp+1C0h] [rbp-1C8h]
  void *v345; // [rsp+1D0h] [rbp-1B8h]
  _BYTE v346[16]; // [rsp+1E0h] [rbp-1A8h] BYREF
  __int16 v347; // [rsp+1F0h] [rbp-198h]
  void *v348; // [rsp+200h] [rbp-188h] BYREF
  __int64 v349; // [rsp+208h] [rbp-180h]
  _BYTE v350[96]; // [rsp+210h] [rbp-178h] BYREF
  void *v351; // [rsp+270h] [rbp-118h] BYREF
  unsigned __int64 v352; // [rsp+278h] [rbp-110h]
  _BYTE v353[96]; // [rsp+280h] [rbp-108h] BYREF
  void *ptr; // [rsp+2E0h] [rbp-A8h] BYREF
  unsigned __int64 v355; // [rsp+2E8h] [rbp-A0h]
  __int64 v356[2]; // [rsp+2F0h] [rbp-98h] BYREF
  void *v357; // [rsp+300h] [rbp-88h]
  _BYTE v358[16]; // [rsp+310h] [rbp-78h] BYREF
  __int16 v359; // [rsp+320h] [rbp-68h]

  v3 = (const __m128i *)a1;
  v4 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v5 = *(_DWORD *)(a1 + 40);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 2) == 0
    || (v6 = *(_WORD *)(a1 + 32), v6 == 22)
    || v6 == 109
    || v6 == 157
    || v6 == 90 )
  {
    v8 = *(_DWORD *)(a1 + 16);
    v310 = 0;
    if ( (unsigned __int8)sub_1543500(a1, &v310) )
      return 1;
    if ( (v310 & 4) != 0 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 172LL) & 8) != 0 )
    {
      sub_1564820(&ptr, a1, v8, 152);
      if ( (_BYTE)v359 )
      {
        sub_FC7790(v356[0], (__int64 *)&ptr, SHIBYTE(v359));
        v356[0] = 0;
        v359 = 0;
      }
      if ( v357 != v358 )
        operator delete(v357);
      v44 = (void **)ptr;
      if ( ptr )
      {
        v45 = v355;
        if ( v355 )
        {
          if ( (unsigned __int64)ptr < v355 || (unsigned __int64)ptr > v355 + 14848 )
          {
            v46 = *((_QWORD *)ptr + 66);
            v47 = (unsigned __int64)*((unsigned int *)ptr + 134) << 6;
            v48 = (void **)(v46 + v47);
            if ( v46 != v46 + v47 )
            {
              v49 = (void **)ptr;
              v50 = (int *)(a1 + 16);
              v51 = *((_QWORD *)ptr + 66);
              v52 = v46 + v47;
              do
              {
                while ( 1 )
                {
                  v52 -= 64;
                  v53 = *(void **)(v52 + 24);
                  if ( v53 == (void *)(v52 + 40) )
                    break;
                  operator delete(v53);
                  if ( v51 == v52 )
                    goto LABEL_94;
                }
              }
              while ( v51 != v52 );
LABEL_94:
              v4 = v50;
              v44 = v49;
              v3 = (const __m128i *)a1;
              v48 = (void **)v44[66];
            }
            if ( v48 != v44 + 68 )
              free(v48);
            v54 = (void **)v44[52];
            if ( v54 != v44 + 54 )
              free(v54);
            v55 = v44 + 48;
            v259 = v44 + 8;
            do
            {
              while ( *v55 != v55 + 2 )
              {
                operator delete(*v55);
                v55 -= 4;
                if ( v259 == v55 )
                  goto LABEL_102;
              }
              v55 -= 4;
            }
            while ( v55 != v259 );
LABEL_102:
            operator delete(v44, 0x3A0u);
          }
          else
          {
            v147 = *(unsigned int *)(v355 + 14976);
            *(_DWORD *)(v355 + 14976) = v147 + 1;
            *(_QWORD *)(v45 + 8 * v147 + 14848) = v44;
          }
        }
      }
    }
    v10 = v3[2].m128i_i16[0] == 22;
    v316 = v3;
    v314 = (__m128i *)&v3[122];
    v11 = v3[122].m128i_i8[0];
    v317 = 1507350;
    v315 = v11;
    v3[122].m128i_i8[0] = 1;
    v318 = 63;
    v319 = sub_146A990;
    v320 = 0;
    v321 = 0;
    if ( v10 )
    {
      if ( (unsigned int)v3[5].m128i_u16[4] >= *(_DWORD *)(*(_QWORD *)(v3->m128i_i64[1] + 56) + 144LL) )
        sub_1568800(&v314);
      else
        LODWORD(v321) = sub_146A990((__int64)v3);
    }
    v12 = sub_1565350(v3, 0);
    v260 = v12;
    if ( (*(_BYTE *)(*(_QWORD *)(v3->m128i_i64[1] + 56) + 15LL) & 4) != 0 )
    {
      if ( v12 == 1 )
        goto LABEL_17;
    }
    else
    {
      if ( v12 == 1 )
      {
LABEL_17:
        v7 = 1;
        sub_156E210(&v314);
LABEL_18:
        v314->m128i_i8[0] = v315;
        return v7;
      }
      v27 = v12 & 0xFFFFFFFFFFFFFFFELL;
      v28 = 0;
      v29 = (void *)(v27 + 4LL * *(unsigned int *)(v27 + 4) + 20);
      v352 = *(_DWORD *)(v27 + 16) * ((*(_WORD *)(v27 + 2) >> 6) & 7u);
      v351 = v29;
      v30 = sub_2246FB0(&v351, asc_22E1692, 6, 0);
      v31 = v352;
      if ( v30 < v352 )
      {
        v28 = v352 - v30;
        v31 = v30;
      }
      v355 = v28;
      ptr = (char *)v351 + v31;
      v32 = sub_2247130(&ptr, asc_22E1692, 6, -1) + 1;
      if ( v32 > v355 )
        v32 = v355;
      v33 = v355 - v28 + v32;
      if ( v33 > v355 )
        v33 = v355;
      if ( v33 )
      {
        sub_1564820(&ptr, v3, v8, 1687);
        if ( (_BYTE)v359 )
        {
          sub_FC7790(v356[0], (__int64 *)&ptr, SHIBYTE(v359));
          v356[0] = 0;
          v359 = 0;
        }
        if ( v357 != v358 )
          operator delete(v357);
        v34 = (void **)ptr;
        if ( ptr )
        {
          v35 = v355;
          if ( v355 )
          {
            if ( (unsigned __int64)ptr < v355 || (unsigned __int64)ptr > v355 + 14848 )
            {
              v36 = *((_QWORD *)ptr + 66);
              v37 = v36 + ((unsigned __int64)*((unsigned int *)ptr + 134) << 6);
              if ( v36 != v37 )
              {
                v38 = v4;
                v39 = *((_QWORD *)ptr + 66);
                do
                {
                  while ( 1 )
                  {
                    v37 -= 64;
                    v40 = *(void **)(v37 + 24);
                    if ( v40 == (void *)(v37 + 40) )
                      break;
                    operator delete(v40);
                    if ( v39 == v37 )
                      goto LABEL_73;
                  }
                }
                while ( v39 != v37 );
LABEL_73:
                v4 = v38;
              }
              v41 = (void **)v34[66];
              if ( v41 != v34 + 68 )
                free(v41);
              v42 = (void **)v34[52];
              v43 = v34 + 52;
              if ( v42 != v34 + 54 )
                free(v42);
              v264 = v34 + 12;
              do
              {
                while ( 1 )
                {
                  v43 -= 4;
                  if ( *v43 == v43 + 2 )
                    break;
                  operator delete(*v43);
                  if ( v43 == v264 )
                    goto LABEL_81;
                }
              }
              while ( v43 != v264 );
LABEL_81:
              operator delete(v34, 0x3A0u);
            }
            else
            {
              v152 = *(unsigned int *)(v355 + 14976);
              *(_DWORD *)(v355 + 14976) = v152 + 1;
              *(_QWORD *)(v35 + 8 * v152 + 14848) = v34;
            }
          }
        }
      }
    }
    v13 = v3[2].m128i_i16[0];
    v311 = v313;
    v312 = 0x400000000LL;
    v348 = v350;
    v351 = v353;
    v349 = 0xC00000000LL;
    v352 = 0xC00000000LL;
    ptr = v356;
    v355 = 0xC00000000LL;
    if ( v13 != 23 )
    {
      if ( v13 != 72 && v13 != 62 )
      {
LABEL_23:
        if ( (v310 & 4) != 0 )
        {
LABEL_24:
          sub_1564840(&v342, v3, v4, 14);
          v14 = (unsigned __int8 *)v342;
          if ( !v342 )
          {
            v188 = v343;
            v189 = *(_DWORD *)(v343 + 14976);
            if ( v189 )
            {
              v191 = (unsigned int)(v189 - 1);
              *(_DWORD *)(v343 + 14976) = v191;
              v14 = *(unsigned __int8 **)(v188 + 8 * v191 + 14848);
              v192 = *((unsigned int *)v14 + 134);
              *v14 = 0;
              v193 = *((_QWORD *)v14 + 66);
              *((_DWORD *)v14 + 106) = 0;
              v194 = v193 + (v192 << 6);
              if ( v193 != v194 )
              {
                v195 = v193;
                v196 = v194;
                do
                {
                  while ( 1 )
                  {
                    v196 -= 64;
                    v197 = *(void **)(v196 + 24);
                    if ( v197 == (void *)(v196 + 40) )
                      break;
                    operator delete(v197);
                    if ( v195 == v196 )
                      goto LABEL_346;
                  }
                }
                while ( v195 != v196 );
              }
LABEL_346:
              *((_DWORD *)v14 + 134) = 0;
            }
            else
            {
              v14 = (unsigned __int8 *)operator new(0x3A0u);
              *v14 = 0;
              *((_QWORD *)v14 + 12) = v14 + 112;
              *((_QWORD *)v14 + 16) = v14 + 144;
              *((_QWORD *)v14 + 20) = v14 + 176;
              *((_QWORD *)v14 + 24) = v14 + 208;
              *((_QWORD *)v14 + 28) = v14 + 240;
              *((_QWORD *)v14 + 32) = v14 + 272;
              *((_QWORD *)v14 + 36) = v14 + 304;
              *((_QWORD *)v14 + 40) = v14 + 336;
              *((_QWORD *)v14 + 44) = v14 + 368;
              *((_QWORD *)v14 + 48) = v14 + 400;
              *((_QWORD *)v14 + 52) = v14 + 432;
              *((_QWORD *)v14 + 13) = 0;
              v14[112] = 0;
              *((_QWORD *)v14 + 17) = 0;
              v14[144] = 0;
              *((_QWORD *)v14 + 21) = 0;
              v14[176] = 0;
              *((_QWORD *)v14 + 25) = 0;
              v14[208] = 0;
              *((_QWORD *)v14 + 29) = 0;
              v14[240] = 0;
              *((_QWORD *)v14 + 33) = 0;
              v14[272] = 0;
              *((_QWORD *)v14 + 37) = 0;
              v14[304] = 0;
              *((_QWORD *)v14 + 41) = 0;
              v14[336] = 0;
              *((_QWORD *)v14 + 45) = 0;
              v14[368] = 0;
              *((_QWORD *)v14 + 49) = 0;
              v14[400] = 0;
              *((_QWORD *)v14 + 53) = 0x800000000LL;
              *((_QWORD *)v14 + 66) = v14 + 544;
              *((_QWORD *)v14 + 67) = 0x600000000LL;
            }
            v342 = v14;
          }
          v14[*v14 + 1] = 4;
          v15 = v342;
          v16 = *(unsigned __int8 *)v342;
          *(_BYTE *)v342 = v16 + 1;
          v15[v16 + 2] = 62;
          if ( (_BYTE)v347 )
          {
            sub_FC7790(v344, (__int64 *)&v342, SHIBYTE(v347));
            v344 = 0;
            v347 = 0;
          }
          if ( v345 != v346 )
            operator delete(v345);
          v17 = (void **)v342;
          if ( !v342 )
            goto LABEL_45;
          v18 = v343;
          if ( !v343 )
            goto LABEL_45;
          if ( (unsigned __int64)v342 >= v343 && (unsigned __int64)v342 <= v343 + 14848 )
            goto LABEL_272;
          v19 = *((_QWORD *)v342 + 66);
          v20 = v19 + ((unsigned __int64)*((unsigned int *)v342 + 134) << 6);
          if ( v19 != v20 )
          {
            v21 = (void **)v342;
            v22 = *((_QWORD *)v342 + 66);
            do
            {
              while ( 1 )
              {
                v20 -= 64;
                v23 = *(void **)(v20 + 24);
                if ( v23 == (void *)(v20 + 40) )
                  break;
                operator delete(v23);
                if ( v22 == v20 )
                  goto LABEL_36;
              }
            }
            while ( v22 != v20 );
LABEL_36:
            v17 = v21;
          }
          v24 = (void **)v17[66];
          if ( v24 != v17 + 68 )
            free(v24);
          v25 = (void **)v17[52];
          if ( v25 != v17 + 54 )
            free(v25);
          v26 = v17 + 48;
          v261 = v17 + 8;
          do
          {
            while ( *v26 != v26 + 2 )
            {
              operator delete(*v26);
              v26 -= 4;
              if ( v261 == v26 )
                goto LABEL_44;
            }
            v26 -= 4;
          }
          while ( v261 != v26 );
LABEL_44:
          operator delete(v17, 0x3A0u);
LABEL_45:
          LOWORD(v342) = 23;
          sub_15680D0(v3, &v342, 1, 1);
LABEL_46:
          v7 = 1;
LABEL_47:
          if ( ptr != v356 )
            free(ptr);
          if ( v351 != v353 )
            free(v351);
          if ( v348 != v350 )
            free(v348);
          if ( v311 != v313 )
            free(v311);
          goto LABEL_18;
        }
        goto LABEL_146;
      }
      v56 = (__int64 *)v3->m128i_i64[1];
      v3[2].m128i_i32[2] = v3[1].m128i_i32[0];
      sub_14634E0(v56, v4);
      if ( v13 == 72 )
      {
        n = v312;
        LOWORD(v57) = v3[2].m128i_i16[0];
        v59 = (_WORD)v57 == 72;
        if ( (_WORD)v57 == 62 )
        {
          src = 0;
LABEL_116:
          v60 = (__int64 *)v3->m128i_i64[1];
          v3[2].m128i_i32[2] = v3[1].m128i_i32[0];
          sub_14634E0(v60, v4);
          if ( v59 )
          {
            if ( (v310 & 4) != 0 )
            {
LABEL_127:
              v67 = 0;
              if ( v3[2].m128i_i16[0] == 5 )
              {
                while ( 1 )
                {
                  v68 = sub_1A5C7E0(v3[6].m128i_i64[0], v3[1].m128i_i64[1], v3[1].m128i_u32[0], 0);
                  v69 = v3[2].m128i_i16[0];
                  v70 = 0;
                  if ( (unsigned __int16)(v69 - 7) > 0xCu && v69 != 1 )
                    v70 = v3[1].m128i_i64[1];
                  v71 = (unsigned int)v312;
                  v72 = (unsigned int)v312 + 1LL;
                  if ( v72 > HIDWORD(v312) )
                  {
                    v282 = v70;
                    v269 = v68;
                    sub_2237220(&v311, v313, v72, 8);
                    v71 = (unsigned int)v312;
                    v70 = v282;
                    v68 = v269;
                  }
                  *((_QWORD *)v311 + v71) = v70;
                  LODWORD(v312) = v312 + 1;
                  if ( !v68 )
                    break;
                  v73 = sub_18C3650(v3[6].m128i_i64[0], v3[1].m128i_u32[0], v3[1].m128i_u32[0], v68);
                  v74 = (unsigned int)v352;
                  v75 = v73 & 0xFFFFFFFFFFFFFFFELL;
                  v76 = (unsigned int)v352 + 1LL;
                  if ( v76 > HIDWORD(v352) )
                  {
                    v270 = v75;
                    sub_2237220(&v351, v353, v76, 8);
                    v74 = (unsigned int)v352;
                    v75 = v270;
                  }
                  ++v67;
                  *((_QWORD *)v351 + v74) = v75;
                  v77 = v3[1].m128i_i32[0];
                  v78 = (__int64 *)v3->m128i_i64[1];
                  LODWORD(v352) = v352 + 1;
                  v3[2].m128i_i32[2] = v77;
                  sub_14634E0(v78, v4);
                  if ( v3[2].m128i_i16[0] != 66 )
                  {
                    v265 = v67;
                    goto LABEL_138;
                  }
                  v134 = (__int64 *)v3->m128i_i64[1];
                  v3[2].m128i_i32[2] = v3[1].m128i_i32[0];
                  sub_14634E0(v134, v4);
                  if ( v3[2].m128i_i16[0] != 5 )
                    goto LABEL_224;
                }
                LOWORD(v342) = 23;
                v7 = 1;
                sub_15680D0(v3, &v342, 1, 1);
                goto LABEL_47;
              }
LABEL_224:
              sub_1564840(&v342, v3, v4, 14);
              v135 = (unsigned __int8 *)v342;
              if ( !v342 )
              {
                v198 = v343;
                v199 = *(_DWORD *)(v343 + 14976);
                if ( v199 )
                {
                  v205 = (unsigned int)(v199 - 1);
                  *(_DWORD *)(v343 + 14976) = v205;
                  v135 = *(unsigned __int8 **)(v198 + 8 * v205 + 14848);
                  v206 = *((unsigned int *)v135 + 134);
                  *v135 = 0;
                  v207 = *((_QWORD *)v135 + 66);
                  *((_DWORD *)v135 + 106) = 0;
                  v208 = v207 + (v206 << 6);
                  if ( v207 != v208 )
                  {
                    v209 = v135;
                    v210 = v207;
                    do
                    {
                      while ( 1 )
                      {
                        v208 -= 64;
                        v211 = *(void **)(v208 + 24);
                        if ( v211 == (void *)(v208 + 40) )
                          break;
                        operator delete(v211);
                        if ( v210 == v208 )
                          goto LABEL_373;
                      }
                    }
                    while ( v210 != v208 );
LABEL_373:
                    v135 = v209;
                  }
                  *((_DWORD *)v135 + 134) = 0;
                }
                else
                {
                  v135 = (unsigned __int8 *)operator new(0x3A0u);
                  *v135 = 0;
                  *((_QWORD *)v135 + 12) = v135 + 112;
                  *((_QWORD *)v135 + 16) = v135 + 144;
                  *((_QWORD *)v135 + 20) = v135 + 176;
                  *((_QWORD *)v135 + 24) = v135 + 208;
                  *((_QWORD *)v135 + 28) = v135 + 240;
                  *((_QWORD *)v135 + 32) = v135 + 272;
                  *((_QWORD *)v135 + 36) = v135 + 304;
                  *((_QWORD *)v135 + 40) = v135 + 336;
                  *((_QWORD *)v135 + 44) = v135 + 368;
                  *((_QWORD *)v135 + 48) = v135 + 400;
                  *((_QWORD *)v135 + 52) = v135 + 432;
                  v135[112] = 0;
                  *((_QWORD *)v135 + 13) = 0;
                  *((_QWORD *)v135 + 17) = 0;
                  v135[144] = 0;
                  *((_QWORD *)v135 + 21) = 0;
                  v135[176] = 0;
                  *((_QWORD *)v135 + 25) = 0;
                  v135[208] = 0;
                  *((_QWORD *)v135 + 29) = 0;
                  v135[240] = 0;
                  *((_QWORD *)v135 + 33) = 0;
                  v135[272] = 0;
                  *((_QWORD *)v135 + 37) = 0;
                  v135[304] = 0;
                  *((_QWORD *)v135 + 41) = 0;
                  v135[336] = 0;
                  *((_QWORD *)v135 + 45) = 0;
                  v135[368] = 0;
                  *((_QWORD *)v135 + 49) = 0;
                  v135[400] = 0;
                  *((_QWORD *)v135 + 53) = 0x800000000LL;
                  *((_QWORD *)v135 + 66) = v135 + 544;
                  *((_QWORD *)v135 + 67) = 0x600000000LL;
                }
                v342 = v135;
              }
              v135[*v135 + 1] = 4;
              v136 = v342;
              v137 = *(unsigned __int8 *)v342;
              *(_BYTE *)v342 = v137 + 1;
              v136[v137 + 2] = 5;
              if ( (_BYTE)v347 )
              {
                sub_FC7790(v344, (__int64 *)&v342, SHIBYTE(v347));
                v344 = 0;
                v347 = 0;
              }
              if ( v345 != v346 )
                operator delete(v345);
              v17 = (void **)v342;
              if ( !v342 )
                goto LABEL_45;
              v18 = v343;
              if ( !v343 )
                goto LABEL_45;
              if ( (unsigned __int64)v342 < v343 || (unsigned __int64)v342 > v343 + 14848 )
              {
                v138 = *((_QWORD *)v342 + 66);
                if ( v138 != v138 + ((unsigned __int64)*((unsigned int *)v342 + 134) << 6) )
                {
                  v139 = (void **)v342;
                  v140 = v138 + ((unsigned __int64)*((unsigned int *)v342 + 134) << 6);
                  do
                  {
                    while ( 1 )
                    {
                      v140 -= 64;
                      v141 = *(void **)(v140 + 24);
                      if ( v141 == (void *)(v140 + 40) )
                        break;
                      operator delete(v141);
                      if ( v138 == v140 )
                        goto LABEL_236;
                    }
                  }
                  while ( v138 != v140 );
LABEL_236:
                  v17 = v139;
                }
                v142 = (void **)v17[66];
                if ( v142 != v17 + 68 )
                  free(v142);
                v143 = (void **)v17[52];
                v144 = v17 + 52;
                if ( v143 != v17 + 54 )
                  free(v143);
                v263 = v17 + 12;
                do
                {
                  while ( 1 )
                  {
                    v144 -= 4;
                    if ( *v144 == v144 + 2 )
                      break;
                    operator delete(*v144);
                    if ( v144 == v263 )
                      goto LABEL_44;
                  }
                }
                while ( v144 != v263 );
                goto LABEL_44;
              }
              goto LABEL_272;
            }
LABEL_146:
            sub_1564840(&v342, v3, v4, 14);
            v85 = (unsigned __int8 *)v342;
            if ( !v342 )
            {
              v148 = v343;
              v149 = *(_DWORD *)(v343 + 14976);
              if ( v149 )
              {
                v153 = (unsigned int)(v149 - 1);
                *(_DWORD *)(v343 + 14976) = v153;
                v85 = *(unsigned __int8 **)(v148 + 8 * v153 + 14848);
                v154 = *((unsigned int *)v85 + 134);
                *v85 = 0;
                v155 = *((_QWORD *)v85 + 66);
                *((_DWORD *)v85 + 106) = 0;
                v156 = v155 + (v154 << 6);
                if ( v155 != v156 )
                {
                  v157 = v85;
                  v158 = v155;
                  do
                  {
                    while ( 1 )
                    {
                      v156 -= 64;
                      v159 = *(void **)(v156 + 24);
                      if ( v159 == (void *)(v156 + 40) )
                        break;
                      operator delete(v159);
                      if ( v158 == v156 )
                        goto LABEL_285;
                    }
                  }
                  while ( v158 != v156 );
LABEL_285:
                  v85 = v157;
                }
                *((_DWORD *)v85 + 134) = 0;
              }
              else
              {
                v85 = (unsigned __int8 *)operator new(0x3A0u);
                *v85 = 0;
                *((_QWORD *)v85 + 12) = v85 + 112;
                *((_QWORD *)v85 + 16) = v85 + 144;
                *((_QWORD *)v85 + 20) = v85 + 176;
                *((_QWORD *)v85 + 24) = v85 + 208;
                *((_QWORD *)v85 + 28) = v85 + 240;
                *((_QWORD *)v85 + 32) = v85 + 272;
                *((_QWORD *)v85 + 36) = v85 + 304;
                *((_QWORD *)v85 + 40) = v85 + 336;
                *((_QWORD *)v85 + 44) = v85 + 368;
                *((_QWORD *)v85 + 48) = v85 + 400;
                *((_QWORD *)v85 + 52) = v85 + 432;
                *((_QWORD *)v85 + 13) = 0;
                v85[112] = 0;
                *((_QWORD *)v85 + 17) = 0;
                v85[144] = 0;
                *((_QWORD *)v85 + 21) = 0;
                v85[176] = 0;
                *((_QWORD *)v85 + 25) = 0;
                v85[208] = 0;
                *((_QWORD *)v85 + 29) = 0;
                v85[240] = 0;
                *((_QWORD *)v85 + 33) = 0;
                v85[272] = 0;
                *((_QWORD *)v85 + 37) = 0;
                v85[304] = 0;
                *((_QWORD *)v85 + 41) = 0;
                v85[336] = 0;
                *((_QWORD *)v85 + 45) = 0;
                v85[368] = 0;
                *((_QWORD *)v85 + 49) = 0;
                v85[400] = 0;
                *((_QWORD *)v85 + 53) = 0x800000000LL;
                *((_QWORD *)v85 + 66) = v85 + 544;
                *((_QWORD *)v85 + 67) = 0x600000000LL;
              }
              v342 = v85;
            }
            v85[*v85 + 1] = 4;
            v86 = v342;
            v87 = *(unsigned __int8 *)v342;
            *(_BYTE *)v342 = v87 + 1;
            v86[v87 + 2] = 23;
            if ( (_BYTE)v347 )
            {
              sub_FC7790(v344, (__int64 *)&v342, SHIBYTE(v347));
              v344 = 0;
              v347 = 0;
            }
            if ( v345 != v346 )
              operator delete(v345);
            v17 = (void **)v342;
            if ( !v342 )
              goto LABEL_45;
            v18 = v343;
            if ( !v343 )
              goto LABEL_45;
            if ( (unsigned __int64)v342 < v343 || (unsigned __int64)v342 > v343 + 14848 )
            {
              v88 = *((void ***)v342 + 66);
              v89 = &v88[8 * (unsigned __int64)*((unsigned int *)v342 + 134)];
              if ( v88 != v89 )
              {
                v90 = (void **)v342;
                v91 = *((void ***)v342 + 66);
                do
                {
                  while ( 1 )
                  {
                    v89 -= 8;
                    v92 = (void **)v89[3];
                    if ( v92 == v89 + 5 )
                      break;
                    operator delete(v92);
                    if ( v91 == v89 )
                      goto LABEL_159;
                  }
                }
                while ( v91 != v89 );
LABEL_159:
                v17 = v90;
                v89 = (void **)v90[66];
              }
              if ( v89 != v17 + 68 )
                free(v89);
              v93 = (void **)v17[52];
              if ( v93 != v17 + 54 )
                free(v93);
              v94 = v17 + 48;
              v262 = v17 + 8;
              while ( 1 )
              {
                v95 = *v94;
                if ( *v94 != v94 + 2 )
                  break;
LABEL_168:
                v94 -= 4;
                if ( v94 == v262 )
                  goto LABEL_44;
              }
              while ( 1 )
              {
                operator delete(v95);
                v94 -= 4;
                if ( v262 == v94 )
                  goto LABEL_44;
                v95 = *v94;
                if ( *v94 == v94 + 2 )
                  goto LABEL_168;
              }
            }
LABEL_272:
            v151 = *(unsigned int *)(v18 + 14976);
            *(_DWORD *)(v18 + 14976) = v151 + 1;
            *(_QWORD *)(v18 + 8 * v151 + 14848) = v17;
            goto LABEL_45;
          }
          v61 = v3[2].m128i_u16[0];
          goto LABEL_118;
        }
      }
      else
      {
        v57 = v3[2].m128i_u16[0];
        if ( (unsigned __int16)(v57 - 23) > 0x31u
          || (v58 = 0x2008000000001LL, !_bittest64(&v58, (unsigned int)(v57 - 23))) )
        {
          if ( (unsigned __int8)sub_1548270(v3, (__int64 *)&v311, (__int64 *)&v348, (__int64 *)&v351, a3) )
            goto LABEL_46;
          LOWORD(v57) = v3[2].m128i_i16[0];
        }
        n = v312;
        if ( (_WORD)v57 != 72 && (_WORD)v57 != 62 )
        {
          src = 0;
          goto LABEL_278;
        }
        v133 = (__int64 *)v3->m128i_i64[1];
        v267 = v57;
        v3[2].m128i_i32[2] = v3[1].m128i_i32[0];
        sub_14634E0(v133, v4);
        if ( v267 == 72 )
        {
          src = v312 - n;
          v61 = v3[2].m128i_u16[0];
LABEL_118:
          if ( (unsigned __int16)v61 <= 0x16u )
          {
            v62 = 5160960;
            if ( !_bittest64(&v62, v61) )
              goto LABEL_23;
            while ( 1 )
            {
              v63 = sub_1565350(v3, 0);
              if ( v63 == 1 )
                break;
              v64 = (unsigned int)v355;
              v61 = v63 & 0xFFFFFFFFFFFFFFFELL;
              v65 = (unsigned int)v355 + 1LL;
              if ( v65 > HIDWORD(v355) )
              {
                v268 = v61;
                sub_2237220(&ptr, v356, v65, 8);
                v64 = (unsigned int)v355;
                v61 = v268;
              }
              *((_QWORD *)ptr + v64) = v61;
              LOWORD(v61) = v3[2].m128i_i16[0];
              LODWORD(v355) = v355 + 1;
              if ( (_WORD)v61 != 66 )
                goto LABEL_124;
              v132 = (__int64 *)v3->m128i_i64[1];
              v3[2].m128i_i32[2] = v3[1].m128i_i32[0];
              sub_14634E0(v132, v4);
            }
            LOWORD(v61) = v3[2].m128i_i16[0];
          }
LABEL_124:
          v265 = v310 & 4;
          if ( (v310 & 4) != 0 )
          {
            if ( (_WORD)v61 != 62 )
              goto LABEL_24;
            v66 = (__int64 *)v3->m128i_i64[1];
            v3[2].m128i_i32[2] = v3[1].m128i_i32[0];
            sub_14634E0(v66, v4);
            goto LABEL_127;
          }
          if ( (_WORD)v61 != 23 )
            goto LABEL_146;
LABEL_138:
          v79 = HIWORD(v317);
          v80 = v316[2].m128i_i16[0];
          if ( HIWORD(v317) == v80 )
          {
            v145 = v319;
            v146 = (__int64 *)((char *)v316->m128i_i64 + v320);
            if ( ((unsigned __int8)v319 & 1) == 0 )
            {
LABEL_257:
              HIDWORD(v321) = v145(v146);
              goto LABEL_144;
            }
LABEL_256:
            v145 = *(__int64 (__fastcall **)(_QWORD))((char *)v145 + *v146 - 1);
            goto LABEL_257;
          }
          if ( v80 != 63
            || ((v81 = v316->m128i_i64[1], v82 = *(_QWORD *)(v81 + 2944), v82 >= *(unsigned int *)(v81 + 2912))
              ? (v83 = sub_14180A0(v81, 1u), v79 = HIWORD(v317))
              : (v83 = *(_QWORD *)(v81 + 2904) + 24 * v82),
                *(_WORD *)(v83 + 16) != v79) )
          {
            sub_15688B0(&v314);
LABEL_144:
            v84 = sub_1C5B2B0(
                    v3[6].m128i_i64[0],
                    v5,
                    0,
                    v310 & 1,
                    n,
                    src,
                    (__int64)v311,
                    (__int64)v348,
                    (unsigned int)v349,
                    (__int64)v351,
                    (unsigned int)v352,
                    v260 & 0xFFFFFFFFFFFFFFFELL,
                    (__int64)ptr,
                    (unsigned int)v355,
                    v265,
                    HIDWORD(v321));
LABEL_211:
            v7 = v84;
            goto LABEL_47;
          }
          v160 = v316;
          v161 = (__int64 *)v316->m128i_i64[1];
          m128i_i32 = v316[1].m128i_i32;
          v316[2].m128i_i32[2] = v316[1].m128i_i32[0];
          sub_14634E0(v161, m128i_i32);
          v283 = v160[2].m128i_u32[2];
          sub_1564820(&v342, v316, v283, 1917);
          v163 = (unsigned __int8 *)v342;
          v164 = v283;
          v165 = HIWORD(v317);
          if ( !v342 )
          {
            v200 = v343;
            v201 = *(_DWORD *)(v343 + 14976);
            if ( v201 )
            {
              v212 = (unsigned int)(v201 - 1);
              *(_DWORD *)(v343 + 14976) = v212;
              v163 = *(unsigned __int8 **)(v200 + 8 * v212 + 14848);
              v213 = *((unsigned int *)v163 + 134);
              *v163 = 0;
              v214 = *((_QWORD *)v163 + 66);
              *((_DWORD *)v163 + 106) = 0;
              v215 = v214 + (v213 << 6);
              if ( v214 != v215 )
              {
                v289 = v3;
                v216 = v164;
                v217 = v5;
                v218 = v165;
                v219 = v163;
                v220 = v215;
                v221 = v214;
                do
                {
                  while ( 1 )
                  {
                    v220 -= 64;
                    v222 = *(void **)(v220 + 24);
                    if ( v222 == (void *)(v220 + 40) )
                      break;
                    operator delete(v222);
                    if ( v221 == v220 )
                      goto LABEL_381;
                  }
                }
                while ( v221 != v220 );
LABEL_381:
                v164 = v216;
                v165 = v218;
                v163 = v219;
                v5 = v217;
                v3 = v289;
              }
              *((_DWORD *)v163 + 134) = 0;
            }
            else
            {
              v295 = HIWORD(v317);
              v163 = (unsigned __int8 *)operator new(0x3A0u);
              *v163 = 0;
              *((_QWORD *)v163 + 12) = v163 + 112;
              *((_QWORD *)v163 + 16) = v163 + 144;
              *((_QWORD *)v163 + 20) = v163 + 176;
              *((_QWORD *)v163 + 24) = v163 + 208;
              *((_QWORD *)v163 + 28) = v163 + 240;
              *((_QWORD *)v163 + 32) = v163 + 272;
              *((_QWORD *)v163 + 36) = v163 + 304;
              *((_QWORD *)v163 + 40) = v163 + 336;
              *((_QWORD *)v163 + 44) = v163 + 368;
              *((_QWORD *)v163 + 48) = v163 + 400;
              *((_QWORD *)v163 + 52) = v163 + 432;
              v163[112] = 0;
              *((_QWORD *)v163 + 13) = 0;
              *((_QWORD *)v163 + 17) = 0;
              v163[144] = 0;
              *((_QWORD *)v163 + 21) = 0;
              v163[176] = 0;
              *((_QWORD *)v163 + 25) = 0;
              v163[208] = 0;
              *((_QWORD *)v163 + 29) = 0;
              v163[240] = 0;
              *((_QWORD *)v163 + 33) = 0;
              v163[272] = 0;
              *((_QWORD *)v163 + 37) = 0;
              v163[304] = 0;
              *((_QWORD *)v163 + 41) = 0;
              v163[336] = 0;
              *((_QWORD *)v163 + 45) = 0;
              v163[368] = 0;
              *((_QWORD *)v163 + 49) = 0;
              v163[400] = 0;
              *((_QWORD *)v163 + 53) = 0x800000000LL;
              v164 = v283;
              *((_QWORD *)v163 + 66) = v163 + 544;
              v165 = v295;
              *((_QWORD *)v163 + 67) = 0x600000000LL;
            }
            v342 = v163;
          }
          v166 = v329;
          v163[*v163 + 1] = 4;
          v167 = v342;
          v168 = *(unsigned __int8 *)v342;
          *(_BYTE *)v342 = v168 + 1;
          v167[v168 + 2] = v165;
          v331 = 0;
          v332 = 0;
          v333 = v335;
          v334 = 0;
          v335[0] = 0;
          v335[16] = 0;
          v329[0] = v164;
          v329[1] = v164;
          v330 = 1;
          if ( !v164 )
          {
LABEL_302:
            if ( (_BYTE)v347 )
            {
              sub_FC7790(v344, (__int64 *)&v342, SHIBYTE(v347));
              v344 = 0;
              v347 = 0;
            }
            if ( v345 != v346 )
              operator delete(v345);
            v179 = (void **)v342;
            if ( v342 )
            {
              v180 = v343;
              if ( v343 )
              {
                if ( (unsigned __int64)v342 < v343 || (unsigned __int64)v342 > v343 + 14848 )
                {
                  v181 = *((_QWORD *)v342 + 66);
                  if ( v181 != v181 + ((unsigned __int64)*((unsigned int *)v342 + 134) << 6) )
                  {
                    v182 = (void **)v342;
                    v183 = v181 + ((unsigned __int64)*((unsigned int *)v342 + 134) << 6);
                    do
                    {
                      while ( 1 )
                      {
                        v183 -= 64;
                        v184 = *(void **)(v183 + 24);
                        if ( v184 == (void *)(v183 + 40) )
                          break;
                        operator delete(v184);
                        if ( v181 == v183 )
                          goto LABEL_313;
                      }
                    }
                    while ( v181 != v183 );
LABEL_313:
                    v179 = v182;
                  }
                  v185 = (void **)v179[66];
                  if ( v185 != v179 + 68 )
                    free(v185);
                  v186 = (void **)v179[52];
                  v187 = v179 + 52;
                  if ( v186 != v179 + 54 )
                    free(v186);
                  v284 = v179 + 12;
                  do
                  {
                    while ( 1 )
                    {
                      v187 -= 4;
                      if ( *v187 == v187 + 2 )
                        break;
                      operator delete(*v187);
                      if ( v284 == v187 )
                        goto LABEL_321;
                    }
                  }
                  while ( v284 != v187 );
LABEL_321:
                  operator delete(v179, 0x3A0u);
                }
                else
                {
                  v190 = *(unsigned int *)(v343 + 14976);
                  *(_DWORD *)(v343 + 14976) = v190 + 1;
                  *(_QWORD *)(v180 + 8 * v190 + 14848) = v179;
                }
              }
            }
            v145 = v319;
            v146 = (__int64 *)((char *)v316->m128i_i64 + v320);
            if ( ((unsigned __int8)v319 & 1) == 0 )
              goto LABEL_257;
            goto LABEL_256;
          }
          v169 = v342;
          if ( !v342 )
          {
            v223 = v343;
            v224 = *(_DWORD *)(v343 + 14976);
            if ( v224 )
            {
              v228 = (unsigned int)(v224 - 1);
              *(_DWORD *)(v343 + 14976) = v228;
              v169 = *(_QWORD **)(v223 + 8 * v228 + 14848);
              v229 = *((unsigned int *)v169 + 134);
              *(_BYTE *)v169 = 0;
              v230 = v169[66];
              *((_DWORD *)v169 + 106) = 0;
              v231 = v230 + (v229 << 6);
              while ( v230 != v231 )
              {
                while ( 1 )
                {
                  v231 -= 64;
                  v232 = *(void **)(v231 + 24);
                  if ( v232 == (void *)(v231 + 40) )
                    break;
                  v304 = v166;
                  v300 = v230;
                  v291 = v231;
                  operator delete(v232);
                  v231 = v291;
                  v230 = v300;
                  v166 = v304;
                  if ( v300 == v291 )
                    goto LABEL_397;
                }
              }
LABEL_397:
              *((_DWORD *)v169 + 134) = 0;
            }
            else
            {
              v169 = (_QWORD *)operator new(0x3A0u);
              *(_BYTE *)v169 = 0;
              v169[12] = v169 + 14;
              v169[16] = v169 + 18;
              v169[20] = v169 + 22;
              v169[24] = v169 + 26;
              v169[28] = v169 + 30;
              v169[32] = v169 + 34;
              v169[36] = v169 + 38;
              v169[40] = v169 + 42;
              v169[44] = v169 + 46;
              v169[48] = v169 + 50;
              v169[52] = v169 + 54;
              *((_BYTE *)v169 + 112) = 0;
              v169[13] = 0;
              v169[17] = 0;
              *((_BYTE *)v169 + 144) = 0;
              v169[21] = 0;
              *((_BYTE *)v169 + 176) = 0;
              v169[25] = 0;
              *((_BYTE *)v169 + 208) = 0;
              v169[29] = 0;
              *((_BYTE *)v169 + 240) = 0;
              v169[33] = 0;
              *((_BYTE *)v169 + 272) = 0;
              v169[37] = 0;
              *((_BYTE *)v169 + 304) = 0;
              v169[41] = 0;
              *((_BYTE *)v169 + 336) = 0;
              v169[45] = 0;
              *((_BYTE *)v169 + 368) = 0;
              v169[49] = 0;
              *((_BYTE *)v169 + 400) = 0;
              v169[53] = 0x800000000LL;
              v166 = v329;
              v169[66] = v169 + 68;
              v169[67] = 0x600000000LL;
            }
            v342 = v169;
          }
          v170 = *((unsigned int *)v169 + 134);
          v171 = v169[66];
          v172 = (char *)v166;
          v173 = v170 + 1;
          v174 = v171 + (v170 << 6);
          if ( v173 > *((unsigned int *)v169 + 135) )
          {
            if ( v171 > (unsigned __int64)v166 || v174 <= (unsigned __int64)v166 )
            {
              v307 = v166;
              v294 = sub_2237400(v169 + 66, v169 + 68, v173, 64, &v336);
              sub_9EF810(v169 + 66, v294);
              v243 = (char *)v169[66];
              v244 = (int)v336;
              v166 = v307;
              if ( v243 == (char *)(v169 + 68) )
              {
                v250 = *((unsigned int *)v169 + 134);
                v169[66] = v294;
                v172 = (char *)v307;
                *((_DWORD *)v169 + 135) = v244;
                v174 = v294 + (v250 << 6);
              }
              else
              {
                v301 = (int)v336;
                free(v243);
                v166 = v307;
                v245 = (unsigned __int64)*((unsigned int *)v169 + 134) << 6;
                v169[66] = v294;
                *((_DWORD *)v169 + 135) = v301;
                v174 = v294 + v245;
                v172 = (char *)v307;
              }
            }
            else
            {
              v309 = v166;
              v290 = (char *)v166 - v171;
              v299 = sub_2237400(v169 + 66, v169 + 68, v173, 64, &v336);
              sub_9EF810(v169 + 66, v299);
              v225 = v299;
              v226 = (char *)v169[66];
              v227 = (int)v336;
              v166 = v309;
              if ( v226 == (char *)(v169 + 68) )
              {
                v169[66] = v299;
                *((_DWORD *)v169 + 135) = v227;
              }
              else
              {
                v303 = (int)v336;
                free(v226);
                v225 = v299;
                v166 = v309;
                v169[66] = v299;
                *((_DWORD *)v169 + 135) = v303;
              }
              v172 = &v290[v225];
              v174 = v225 + ((unsigned __int64)*((unsigned int *)v169 + 134) << 6);
            }
          }
          *(_QWORD *)v174 = *(_QWORD *)v172;
          *(_DWORD *)(v174 + 8) = *((_DWORD *)v172 + 2);
          *(_QWORD *)(v174 + 12) = *(_QWORD *)(v172 + 12);
          *(_DWORD *)(v174 + 20) = *((_DWORD *)v172 + 5);
          v175 = (_BYTE *)(v174 + 40);
          *(_QWORD *)(v174 + 24) = v174 + 40;
          v176 = *((_BYTE **)v172 + 3);
          v177 = *((_QWORD *)v172 + 4);
          if ( !&v176[v177] || v176 )
          {
            if ( (unsigned __int64)v177 <= 0xF )
            {
              if ( v177 == 1 )
              {
                *(_BYTE *)(v174 + 40) = *v176;
                goto LABEL_300;
              }
              if ( !v177 )
              {
LABEL_300:
                *(_QWORD *)(v174 + 32) = v177;
                v175[v177] = 0;
                v178 = v333;
                *(_BYTE *)(v174 + 56) = v172[56];
                ++*((_DWORD *)v169 + 134);
                if ( v178 != v166 + 10 )
                  operator delete(v178);
                goto LABEL_302;
              }
LABEL_356:
              v305 = v166;
              v302 = v172;
              v296 = v174;
              v285 = v177;
              memcpy(v175, v176, v177);
              v174 = v296;
              v166 = v305;
              v172 = v302;
              v177 = v285;
              v175 = *(_BYTE **)(v296 + 24);
              goto LABEL_300;
            }
            v308 = v166;
            v306 = v172;
            v297 = v174;
            if ( v177 >= 0 )
            {
              v286 = *((_QWORD *)v172 + 4);
              v175 = (_BYTE *)operator new(v177 + 1);
              v174 = v297;
              v177 = v286;
              v172 = v306;
              *(_QWORD *)(v297 + 24) = v175;
              v166 = v308;
              *(_QWORD *)(v297 + 40) = v286;
              goto LABEL_356;
            }
LABEL_428:
            std::__throw_length_error("basic_string::_M_create");
          }
LABEL_425:
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        }
        LOWORD(v57) = v3[2].m128i_i16[0];
        v59 = (_WORD)v57 == 72;
        if ( (_WORD)v57 == 62 )
        {
          src = v312 - n;
          goto LABEL_116;
        }
      }
      if ( (_WORD)v57 != 23 && !v59 )
      {
        if ( (unsigned __int8)sub_1548270(v3, (__int64 *)&v311, (__int64 *)&v348, (__int64 *)&v351, a3) )
          goto LABEL_46;
        LOWORD(v57) = v3[2].m128i_i16[0];
        v59 = (_WORD)v57 == 72;
      }
      src = v312 - n;
      if ( (_WORD)v57 == 62 || v59 )
        goto LABEL_116;
LABEL_278:
      v265 = v310 & 4;
      if ( (v310 & 4) != 0 )
        goto LABEL_24;
      if ( (_WORD)v57 != 23 )
        goto LABEL_146;
      goto LABEL_138;
    }
    v96 = HIWORD(v317);
    v97 = v316[2].m128i_i16[0];
    if ( HIWORD(v317) == v97 )
    {
      v150 = (__int64 (__fastcall *)(__int8 *))v319;
      if ( ((unsigned __int8)v319 & 1) != 0 )
        v150 = *(__int64 (__fastcall **)(__int8 *))((char *)v319 + *(__int64 *)((char *)v316->m128i_i64 + v320) - 1);
      HIDWORD(v321) = v150(&v316->m128i_i8[v320]);
    }
    else
    {
      if ( v97 == 63 )
      {
        v98 = v316->m128i_i64[1];
        v99 = *(_QWORD *)(v98 + 2944);
        if ( v99 >= *(unsigned int *)(v98 + 2912) )
        {
          v100 = sub_14180A0(v98, 1u);
          v96 = HIWORD(v317);
        }
        else
        {
          v100 = *(_QWORD *)(v98 + 2904) + 24 * v99;
        }
        if ( *(_WORD *)(v100 + 16) == v96 )
        {
          v101 = v316;
          v102 = (__int64 *)v316->m128i_i64[1];
          v103 = v316[1].m128i_i32;
          v316[2].m128i_i32[2] = v316[1].m128i_i32[0];
          sub_14634E0(v102, v103);
          v104 = v101[2].m128i_u32[2];
          sub_1564820(&v336, v316, v104, 1917);
          v105 = (unsigned __int8 *)v336;
          v106 = HIWORD(v317);
          if ( !v336 )
          {
            v203 = v337;
            v204 = *(_DWORD *)(v337 + 14976);
            if ( v204 )
            {
              v235 = (unsigned int)(v204 - 1);
              *(_DWORD *)(v337 + 14976) = v235;
              v105 = *(unsigned __int8 **)(v203 + 8 * v235 + 14848);
              v236 = *((unsigned int *)v105 + 134);
              *v105 = 0;
              v237 = *((char **)v105 + 66);
              *((_DWORD *)v105 + 106) = 0;
              v238 = &v237[64 * v236];
              while ( v237 != v238 )
              {
                while ( 1 )
                {
                  v238 -= 64;
                  v239 = *((char **)v238 + 3);
                  if ( v239 == v238 + 40 )
                    break;
                  v292 = v238;
                  srcc = v237;
                  ne = v106;
                  operator delete(v239);
                  v237 = srcc;
                  v238 = v292;
                  v106 = ne;
                  if ( srcc == v292 )
                    goto LABEL_405;
                }
              }
LABEL_405:
              *((_DWORD *)v105 + 134) = 0;
            }
            else
            {
              nd = HIWORD(v317);
              v105 = (unsigned __int8 *)operator new(0x3A0u);
              *v105 = 0;
              *((_QWORD *)v105 + 12) = v105 + 112;
              *((_QWORD *)v105 + 16) = v105 + 144;
              *((_QWORD *)v105 + 20) = v105 + 176;
              *((_QWORD *)v105 + 24) = v105 + 208;
              *((_QWORD *)v105 + 28) = v105 + 240;
              *((_QWORD *)v105 + 32) = v105 + 272;
              *((_QWORD *)v105 + 36) = v105 + 304;
              *((_QWORD *)v105 + 40) = v105 + 336;
              *((_QWORD *)v105 + 44) = v105 + 368;
              *((_QWORD *)v105 + 48) = v105 + 400;
              *((_QWORD *)v105 + 52) = v105 + 432;
              v105[112] = 0;
              *((_QWORD *)v105 + 13) = 0;
              *((_QWORD *)v105 + 17) = 0;
              v105[144] = 0;
              *((_QWORD *)v105 + 21) = 0;
              v105[176] = 0;
              *((_QWORD *)v105 + 25) = 0;
              v105[208] = 0;
              *((_QWORD *)v105 + 29) = 0;
              v105[240] = 0;
              *((_QWORD *)v105 + 33) = 0;
              v105[272] = 0;
              *((_QWORD *)v105 + 37) = 0;
              v105[304] = 0;
              *((_QWORD *)v105 + 41) = 0;
              v105[336] = 0;
              *((_QWORD *)v105 + 45) = 0;
              v105[368] = 0;
              *((_QWORD *)v105 + 49) = 0;
              v105[400] = 0;
              *((_QWORD *)v105 + 53) = 0x800000000LL;
              v106 = nd;
              *((_QWORD *)v105 + 66) = v105 + 544;
              *((_QWORD *)v105 + 67) = 0x600000000LL;
            }
            v336 = v105;
          }
          v105[*v105 + 1] = 4;
          v107 = v336;
          v108 = *(unsigned __int8 *)v336;
          *(_BYTE *)v336 = v108 + 1;
          v107[v108 + 2] = v106;
          v324 = 0;
          v325 = 0;
          v326 = v328;
          v327 = 0;
          v328[0] = 0;
          v328[16] = 0;
          v322[0] = v104;
          v322[1] = v104;
          v323 = 1;
          if ( !v104 )
            goto LABEL_186;
          v109 = v336;
          if ( !v336 )
          {
            v233 = v337;
            v234 = *(_DWORD *)(v337 + 14976);
            if ( v234 )
            {
              v251 = (unsigned int)(v234 - 1);
              *(_DWORD *)(v337 + 14976) = v251;
              v109 = *(_QWORD **)(v233 + 8 * v251 + 14848);
              v252 = *((unsigned int *)v109 + 134);
              *(_BYTE *)v109 = 0;
              v253 = v109[66];
              *((_DWORD *)v109 + 106) = 0;
              v254 = v253 + (v252 << 6);
              if ( v253 != v254 )
              {
                v255 = v254;
                v256 = v253;
                do
                {
                  while ( 1 )
                  {
                    v255 -= 64;
                    v257 = *(void **)(v255 + 24);
                    if ( v257 == (void *)(v255 + 40) )
                      break;
                    operator delete(v257);
                    if ( v256 == v255 )
                      goto LABEL_422;
                  }
                }
                while ( v256 != v255 );
              }
LABEL_422:
              *((_DWORD *)v109 + 134) = 0;
            }
            else
            {
              v109 = (_QWORD *)operator new(0x3A0u);
              *(_BYTE *)v109 = 0;
              v109[12] = v109 + 14;
              v109[16] = v109 + 18;
              v109[20] = v109 + 22;
              v109[24] = v109 + 26;
              v109[28] = v109 + 30;
              v109[32] = v109 + 34;
              v109[36] = v109 + 38;
              v109[40] = v109 + 42;
              v109[44] = v109 + 46;
              v109[48] = v109 + 50;
              v109[52] = v109 + 54;
              *((_BYTE *)v109 + 112) = 0;
              v109[13] = 0;
              v109[17] = 0;
              *((_BYTE *)v109 + 144) = 0;
              v109[21] = 0;
              *((_BYTE *)v109 + 176) = 0;
              v109[25] = 0;
              *((_BYTE *)v109 + 208) = 0;
              v109[29] = 0;
              *((_BYTE *)v109 + 240) = 0;
              v109[33] = 0;
              *((_BYTE *)v109 + 272) = 0;
              v109[37] = 0;
              *((_BYTE *)v109 + 304) = 0;
              v109[41] = 0;
              *((_BYTE *)v109 + 336) = 0;
              v109[45] = 0;
              *((_BYTE *)v109 + 368) = 0;
              v109[49] = 0;
              *((_BYTE *)v109 + 400) = 0;
              v109[53] = 0x800000000LL;
              v109[66] = v109 + 68;
              v109[67] = 0x600000000LL;
            }
            v336 = v109;
          }
          v110 = *((unsigned int *)v109 + 134);
          v111 = v109[66];
          v112 = (char *)v322;
          v113 = v110 + 1;
          v114 = v111 + (v110 << 6);
          if ( v110 + 1 > (unsigned __int64)*((unsigned int *)v109 + 135) )
          {
            if ( v111 > (unsigned __int64)v322 || v114 <= (unsigned __int64)v322 )
            {
              na = sub_2237400(v109 + 66, v109 + 68, v113, 64, &v342);
              sub_9EF810(v109 + 66, na);
              v246 = na;
              v247 = (char *)v109[66];
              v248 = (int)v342;
              if ( v247 != (char *)(v109 + 68) )
              {
                srcd = (int)v342;
                free(v247);
                v246 = na;
                v248 = srcd;
              }
              v109[66] = na;
              v249 = *((unsigned int *)v109 + 134);
              *((_DWORD *)v109 + 135) = v248;
              v112 = (char *)v322;
              v114 = v246 + (v249 << 6);
            }
            else
            {
              srca = (void *)sub_2237400(v109 + 66, v109 + 68, v113, 64, &v342);
              sub_9EF810(v109 + 66, (__int64)srca);
              v240 = srca;
              v241 = (char *)v109[66];
              v242 = (int)v342;
              if ( v241 == (char *)(v109 + 68) )
              {
                v109[66] = srca;
                *((_DWORD *)v109 + 135) = v242;
              }
              else
              {
                v293 = (int)v342;
                free(v241);
                v240 = srca;
                v109[66] = srca;
                *((_DWORD *)v109 + 135) = v293;
              }
              v112 = (char *)v322 + (_QWORD)v240 - v111;
              v114 = (unsigned __int64)v240 + 64 * (unsigned __int64)*((unsigned int *)v109 + 134);
            }
          }
          *(_QWORD *)v114 = *(_QWORD *)v112;
          *(_DWORD *)(v114 + 8) = *((_DWORD *)v112 + 2);
          *(_QWORD *)(v114 + 12) = *(_QWORD *)(v112 + 12);
          *(_DWORD *)(v114 + 20) = *((_DWORD *)v112 + 5);
          v115 = (void *)(v114 + 40);
          *(_QWORD *)(v114 + 24) = v114 + 40;
          v116 = *((_BYTE **)v112 + 3);
          v117 = *((_QWORD *)v112 + 4);
          if ( &v116[v117] && !v116 )
            goto LABEL_425;
          if ( (unsigned __int64)v117 > 0xF )
          {
            if ( v117 < 0 )
              goto LABEL_428;
            v298 = v114;
            v287 = v112;
            nb = *((_QWORD *)v112 + 4);
            v115 = (void *)operator new(v117 + 1);
            v114 = v298;
            v117 = nb;
            v112 = v287;
            *(_QWORD *)(v298 + 24) = v115;
            *(_QWORD *)(v298 + 40) = nb;
          }
          else
          {
            if ( v117 == 1 )
            {
              *(_BYTE *)(v114 + 40) = *v116;
              goto LABEL_184;
            }
            if ( !v117 )
            {
LABEL_184:
              v118 = *(_QWORD *)(v114 + 24);
              *(_QWORD *)(v114 + 32) = v117;
              *(_BYTE *)(v118 + v117) = 0;
              v119 = v326;
              *(_BYTE *)(v114 + 56) = v112[56];
              ++*((_DWORD *)v109 + 134);
              if ( v119 != v328 )
                operator delete(v119);
LABEL_186:
              if ( (_BYTE)v341 )
              {
                sub_FC7790(v338, (__int64 *)&v336, SHIBYTE(v341));
                v338 = 0;
                v341 = 0;
              }
              if ( v339 != &v340 )
                operator delete(v339);
              v120 = (void **)v336;
              if ( v336 )
              {
                v121 = v337;
                if ( v337 )
                {
                  if ( (unsigned __int64)v336 < v337 || (unsigned __int64)v336 > v337 + 14848 )
                  {
                    v122 = *((_QWORD *)v336 + 66);
                    v123 = v122 + ((unsigned __int64)*((unsigned int *)v336 + 134) << 6);
                    if ( v122 != v123 )
                    {
                      v124 = (void **)v336;
                      v125 = *((_QWORD *)v336 + 66);
                      do
                      {
                        while ( 1 )
                        {
                          v123 -= 64;
                          v126 = *(void **)(v123 + 24);
                          if ( v126 == (void *)(v123 + 40) )
                            break;
                          operator delete(v126);
                          if ( v125 == v123 )
                            goto LABEL_197;
                        }
                      }
                      while ( v125 != v123 );
LABEL_197:
                      v120 = v124;
                    }
                    v127 = (void **)v120[66];
                    if ( v127 != v120 + 68 )
                      free(v127);
                    v128 = (void **)v120[52];
                    v129 = v120 + 52;
                    if ( v128 != v120 + 54 )
                      free(v128);
                    v266 = v120 + 12;
                    do
                    {
                      while ( 1 )
                      {
                        v129 -= 4;
                        if ( *v129 == v129 + 2 )
                          break;
                        operator delete(*v129);
                        if ( v129 == v266 )
                          goto LABEL_205;
                      }
                    }
                    while ( v129 != v266 );
LABEL_205:
                    operator delete(v120, 0x3A0u);
                  }
                  else
                  {
                    v202 = *(unsigned int *)(v337 + 14976);
                    *(_DWORD *)(v337 + 14976) = v202 + 1;
                    *(_QWORD *)(v121 + 8 * v202 + 14848) = v120;
                  }
                }
              }
              v130 = (__int64 (__fastcall *)(_QWORD *))v319;
              v131 = (__int64 *)((char *)v316->m128i_i64 + v320);
              if ( ((unsigned __int8)v319 & 1) != 0 )
                v130 = *(__int64 (__fastcall **)(_QWORD *))((char *)v319 + *v131 - 1);
              HIDWORD(v321) = v130(v131);
              goto LABEL_210;
            }
          }
          v288 = v114;
          srcb = v112;
          nc = v117;
          memcpy(v115, v116, v117);
          v114 = v288;
          v112 = srcb;
          v117 = nc;
          goto LABEL_184;
        }
      }
      sub_15688B0(&v314);
    }
LABEL_210:
    v84 = sub_1C5B2B0(
            v3[6].m128i_i64[0],
            v5,
            1,
            v310 & 1,
            0,
            0,
            0,
            (__int64)v348,
            (unsigned int)v349,
            (__int64)v351,
            (unsigned int)v352,
            v260 & 0xFFFFFFFFFFFFFFFELL,
            (__int64)ptr,
            (unsigned int)v355,
            0,
            HIDWORD(v321));
    goto LABEL_211;
  }
  *a2 = 1;
  return sub_1544430(a1, v5);
}
