__int64 __fastcall sub_1AB4B50(__int64 *a1, unsigned __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v6; // rbx
  unsigned __int8 v7; // r14
  int v8; // edx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 *v12; // r12
  _QWORD *v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int8 *v16; // r12
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  int v21; // edx
  __m128i *v22; // r14
  void **v23; // rcx
  const __m128i *v24; // r15
  __m128i *v25; // rdx
  const __m128i *v26; // r13
  _BYTE *v27; // rsi
  size_t v28; // r9
  _BYTE *v29; // rax
  unsigned __int64 v30; // r12
  __int64 v31; // r12
  unsigned __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned int v36; // eax
  void **v37; // rbp
  unsigned __int64 v38; // rax
  void **v39; // r12
  void **v40; // rbx
  void **v41; // rdi
  void **v42; // rdi
  void **v43; // rbx
  void **v44; // r12
  __int64 v45; // rax
  __int64 v46; // rbp
  __int64 v47; // rbp
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rax
  __int32 v51; // r12d
  _BYTE *v52; // rdi
  char *v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // r9
  char *v58; // rsi
  __int64 v59; // rdx
  unsigned __int8 v60; // al
  void **v61; // r13
  unsigned __int64 v62; // rax
  void **v63; // r14
  void **v64; // r12
  void **v65; // rdi
  void **v66; // rdi
  void **v67; // r12
  void **v68; // r14
  void **v69; // r13
  unsigned __int64 v70; // rax
  void **v71; // r14
  void **v72; // r12
  void **v73; // rdi
  void **v74; // rdi
  void **v75; // r12
  void **v76; // r14
  char v78; // al
  __int64 v79; // rbx
  __int64 v80; // r14
  unsigned int v81; // r15d
  __int64 v82; // rsi
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  unsigned int v86; // eax
  void **v87; // rbp
  unsigned __int64 v88; // rax
  void **v89; // r12
  void **v90; // rbx
  void **v91; // rdi
  void **v92; // rdi
  void **v93; // rbx
  void **v94; // r12
  unsigned __int8 *v95; // r13
  _QWORD *v96; // rdx
  __int64 v97; // rax
  unsigned __int8 *v98; // r13
  _QWORD *v99; // rdx
  __int64 v100; // rax
  void **v101; // r13
  unsigned __int64 v102; // rax
  void **v103; // rcx
  unsigned __int64 v104; // rax
  void **v105; // r15
  void **v106; // rdi
  void **v107; // rdi
  void **v108; // r15
  unsigned __int8 *v109; // r13
  _QWORD *v110; // rdx
  __int64 v111; // rax
  unsigned __int8 *v112; // r13
  _QWORD *v113; // rdx
  __int64 v114; // rax
  void **v115; // r13
  unsigned __int64 v116; // rax
  void **v117; // rcx
  unsigned __int64 v118; // rax
  void **v119; // r15
  void **v120; // rdi
  void **v121; // rdi
  void **v122; // r15
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  unsigned __int8 v126; // r13
  void **v127; // r12
  unsigned __int64 v128; // rax
  void **v129; // r14
  void **v130; // rbp
  void **v131; // rdi
  void **v132; // rdi
  void **v133; // rbp
  void **v134; // r14
  __int64 v135; // rbp
  void **v136; // r13
  unsigned __int64 v137; // rax
  void **v138; // r14
  void **v139; // r12
  void **v140; // rdi
  void **v141; // rdi
  void **v142; // r12
  void **v143; // r14
  void **v144; // r13
  unsigned __int64 v145; // rax
  void **v146; // r14
  void **v147; // r12
  void **v148; // rdi
  void **v149; // rdi
  void **v150; // r12
  void **v151; // r14
  __int64 m128i_i64; // rsi
  __int64 v153; // r8
  unsigned __int8 *v154; // rbx
  _QWORD *v155; // rdx
  __int64 v156; // rax
  __int64 v157; // rcx
  unsigned __int64 v158; // rax
  int v159; // edx
  __m128i *v160; // r14
  void **v161; // rcx
  const __m128i *v162; // r15
  __m128i *v163; // rdx
  const __m128i *v164; // r13
  _BYTE *v165; // rsi
  size_t v166; // r11
  _BYTE *v167; // rax
  unsigned __int64 v168; // rbx
  __int64 v169; // rbx
  unsigned __int64 v170; // rdi
  unsigned __int64 v171; // rdx
  unsigned __int64 v172; // rax
  __int32 v173; // ebx
  _BYTE *v174; // rdi
  char *v175; // rcx
  __int64 v176; // rsi
  __int64 v177; // rax
  __int64 v178; // rsi
  __int64 v179; // r9
  char *v180; // rsi
  __int64 v181; // rdx
  unsigned int v182; // eax
  void **v183; // rbp
  unsigned __int64 v184; // rax
  void **v185; // r12
  void **v186; // rbx
  void **v187; // rdi
  void **v188; // rdi
  void **v189; // rbx
  void **v190; // r12
  void **v191; // r12
  void **v192; // rbx
  void **v193; // rdi
  void **v194; // rdi
  void **v195; // rbx
  void **v196; // r12
  void *v197; // rdi
  __int64 v198; // rdx
  __int64 v199; // rdx
  __int64 v200; // rdx
  __int64 v201; // rdx
  __int64 v202; // r12
  __int64 v203; // r13
  __int64 v204; // r12
  void *v205; // rdi
  __int64 v206; // rdx
  unsigned __int8 *v207; // r15
  _QWORD *v208; // rdx
  __int64 v209; // rax
  unsigned __int8 *v210; // r15
  _QWORD *v211; // rdx
  __int64 v212; // rax
  void **v213; // r15
  unsigned __int64 v214; // rax
  void **v215; // rcx
  void **v216; // rax
  void **v217; // rdi
  void **v218; // rdi
  void **v219; // rax
  __int64 v220; // rcx
  __int64 v221; // r8
  __int64 v222; // r9
  char v223; // al
  void **v224; // r15
  unsigned __int64 v225; // rax
  void **v226; // rcx
  void **v227; // rax
  void **v228; // rdi
  void **v229; // rdi
  void **v230; // rax
  __int64 v231; // rbp
  unsigned __int8 v232; // r13
  void **v233; // r14
  unsigned __int64 v234; // rax
  void **v235; // r15
  void **v236; // r12
  void **v237; // rdi
  void **v238; // rdi
  void **v239; // r12
  void **v240; // r15
  __int64 v241; // rdx
  __int64 v242; // rbx
  __int64 v243; // r13
  __int64 v244; // rbx
  void *v245; // rdi
  __int64 v246; // rcx
  __int64 v247; // r8
  __int64 v248; // r9
  unsigned __int8 v249; // al
  void **v250; // r12
  unsigned __int64 v251; // rax
  void **v252; // r14
  void **v253; // rbp
  void **v254; // rdi
  void **v255; // rdi
  void **v256; // rbp
  void **v257; // r14
  __int64 v258; // r14
  unsigned __int64 v259; // rdx
  int v260; // eax
  unsigned __int64 v261; // rdx
  int v262; // eax
  __int64 v263; // rsi
  __int64 v264; // rcx
  __int64 v265; // rax
  unsigned __int64 v266; // rdx
  int v267; // eax
  __int64 v268; // rsi
  __int64 v269; // rcx
  __int64 v270; // rax
  __int64 v271; // rax
  __int64 v272; // r13
  __int64 v273; // r15
  __int64 v274; // r13
  void *v275; // rdi
  __int64 v276; // rax
  __int64 v277; // r13
  __int64 v278; // r15
  __int64 v279; // r13
  void *v280; // rdi
  __int64 v281; // rdx
  __int64 v282; // rdx
  __int64 v283; // rdx
  __int64 v284; // rdx
  __int64 v285; // rdx
  unsigned __int16 v286; // ax
  __int64 v287; // r13
  unsigned int v288; // r15d
  __int64 v289; // rsi
  int v290; // edx
  __int64 v291; // rdx
  __int64 v292; // rcx
  __int64 v293; // r8
  unsigned int v294; // eax
  __int64 v295; // rdx
  __int64 v296; // rax
  __int64 v297; // r13
  __int64 v298; // r14
  __int64 v299; // r13
  void *v300; // rdi
  __int64 v301; // rdx
  __int64 v302; // rdx
  __int64 v303; // rdx
  unsigned __int64 v304; // rdx
  int v305; // eax
  unsigned __int64 v306; // rdx
  int v307; // eax
  unsigned __int64 v308; // rdx
  int v309; // eax
  unsigned __int64 v310; // rdx
  int v311; // eax
  __int64 v312; // rdx
  unsigned __int64 v313; // rdx
  int v314; // eax
  unsigned __int64 v315; // rdx
  int v316; // eax
  __int64 v317; // rcx
  __int64 v318; // r8
  __int64 v319; // r9
  __int64 v320; // r13
  __int64 v321; // rax
  __int64 v322; // r15
  __int64 v323; // rdx
  __int64 v324; // r15
  void *v325; // rdi
  __int64 v326; // rax
  __int64 v327; // rax
  __int64 v328; // rcx
  __int64 v329; // r15
  void *v330; // rdi
  __int64 v331; // rax
  __int64 v332; // r15
  __int64 v333; // rdx
  __int64 v334; // r15
  void *v335; // rdi
  __int64 v336; // rax
  __int64 v337; // rax
  __int64 v338; // rcx
  __int64 v339; // r15
  void *v340; // rdi
  __int64 v341; // rax
  __int64 v342; // rax
  __int64 v343; // rcx
  __int64 v344; // rax
  void *v345; // rdi
  __int64 v346; // rax
  __int64 v347; // rax
  __int64 v348; // rcx
  __int64 v349; // rax
  void *v350; // rdi
  __int64 v351; // rdi
  __int64 v352; // rax
  __int64 v353; // rax
  __int64 v354; // rcx
  __int64 v355; // r8
  __int64 v356; // r9
  unsigned __int8 v357; // al
  void *v358; // rsi
  __int64 v359; // rcx
  __int64 v360; // r8
  __int64 v361; // r9
  __int64 v362; // rax
  __int64 v363; // rcx
  __int64 v364; // r8
  __int64 v365; // r9
  __int64 v366; // rdx
  __int64 v367; // rcx
  __int64 v368; // r8
  unsigned int v369; // eax
  void **v370; // [rsp+0h] [rbp-268h]
  void **v371; // [rsp+0h] [rbp-268h]
  void **v372; // [rsp+0h] [rbp-268h]
  void **v373; // [rsp+0h] [rbp-268h]
  void **v374; // [rsp+0h] [rbp-268h]
  void **v375; // [rsp+0h] [rbp-268h]
  void **v376; // [rsp+0h] [rbp-268h]
  void **v377; // [rsp+0h] [rbp-268h]
  __int64 v378; // [rsp+0h] [rbp-268h]
  __int64 v379; // [rsp+0h] [rbp-268h]
  __int64 v380; // [rsp+0h] [rbp-268h]
  __int64 v381; // [rsp+0h] [rbp-268h]
  __int64 v382; // [rsp+0h] [rbp-268h]
  __int64 v383; // [rsp+0h] [rbp-268h]
  __int64 v384; // [rsp+0h] [rbp-268h]
  size_t v385; // [rsp+8h] [rbp-260h]
  size_t v386; // [rsp+8h] [rbp-260h]
  size_t v387; // [rsp+8h] [rbp-260h]
  size_t v388; // [rsp+8h] [rbp-260h]
  void **v389; // [rsp+8h] [rbp-260h]
  void **v390; // [rsp+8h] [rbp-260h]
  void **v391; // [rsp+8h] [rbp-260h]
  void **v392; // [rsp+8h] [rbp-260h]
  __int64 v393; // [rsp+8h] [rbp-260h]
  __int64 v394; // [rsp+8h] [rbp-260h]
  void **v395; // [rsp+10h] [rbp-258h]
  void *v396; // [rsp+10h] [rbp-258h]
  _BYTE *v397; // [rsp+10h] [rbp-258h]
  void **v398; // [rsp+10h] [rbp-258h]
  void *v399; // [rsp+10h] [rbp-258h]
  _BYTE *v400; // [rsp+10h] [rbp-258h]
  char v401; // [rsp+10h] [rbp-258h]
  void **v402; // [rsp+18h] [rbp-250h]
  void **v403; // [rsp+18h] [rbp-250h]
  void *v404; // [rsp+20h] [rbp-248h] BYREF
  unsigned __int64 v405; // [rsp+28h] [rbp-240h]
  unsigned __int64 v406; // [rsp+40h] [rbp-228h] BYREF
  unsigned __int64 v407; // [rsp+48h] [rbp-220h]
  void *v408; // [rsp+60h] [rbp-208h] BYREF
  unsigned __int64 v409; // [rsp+68h] [rbp-200h]
  int v410; // [rsp+70h] [rbp-1F8h]
  void *v411; // [rsp+80h] [rbp-1E8h] BYREF
  unsigned __int64 v412; // [rsp+88h] [rbp-1E0h]
  _DWORD v413[32]; // [rsp+90h] [rbp-1D8h] BYREF
  void *v414; // [rsp+110h] [rbp-158h] BYREF
  unsigned __int64 v415; // [rsp+118h] [rbp-150h]
  _DWORD v416[32]; // [rsp+120h] [rbp-148h] BYREF
  void *ptr; // [rsp+1A0h] [rbp-C8h] BYREF
  unsigned __int64 v418; // [rsp+1A8h] [rbp-C0h]
  _DWORD v419[46]; // [rsp+1B0h] [rbp-B8h] BYREF

  v5 = *(_WORD *)a2 & 0x1FF;
  if ( v5 == 4 )
  {
    v6 = sub_BFB840(*(_QWORD *)(a2 + 16));
    v7 = *(_BYTE *)(a2 + 2) >> 3;
    v8 = v7;
LABEL_3:
    v9 = *a1;
    if ( v8 > 3 )
    {
      sub_168B9B0((__int64)&ptr, v9, 5743);
      v36 = sub_C00A40(a2, v9, v33, v34, v35);
      sub_1AAB2D0((__int64)a1, v36, (__int64)&ptr);
      v37 = (void **)ptr;
      if ( ptr )
      {
        v38 = v418;
        if ( v418 )
        {
          if ( (unsigned __int64)ptr < v418 || (unsigned __int64)ptr > v418 + 14848 )
          {
            v39 = *((void ***)ptr + 66);
            v40 = &v39[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
            if ( v39 != v40 )
            {
              do
              {
                while ( 1 )
                {
                  v40 -= 8;
                  v41 = (void **)v40[3];
                  if ( v41 == v40 + 5 )
                    break;
                  operator delete(v41);
                  if ( v39 == v40 )
                    goto LABEL_34;
                }
              }
              while ( v39 != v40 );
LABEL_34:
              v40 = (void **)v37[66];
            }
            if ( v40 != v37 + 68 )
              free(v40);
            v42 = (void **)v37[52];
            if ( v42 != v37 + 54 )
              free(v42);
            v43 = v37 + 48;
            v44 = v37 + 8;
            do
            {
              while ( *v43 != v43 + 2 )
              {
                operator delete(*v43);
                v43 -= 4;
                if ( v43 == v44 )
                  goto LABEL_42;
              }
              v43 -= 4;
            }
            while ( v44 != v43 );
LABEL_42:
            operator delete(v37, 0x3A0u);
          }
          else
          {
            v199 = *(unsigned int *)(v418 + 14976);
            *(_DWORD *)(v418 + 14976) = v199 + 1;
            *(_QWORD *)(v38 + 8 * v199 + 14848) = v37;
          }
        }
      }
      v45 = 0;
      v46 = 1;
    }
    else
    {
      sub_168B9B0((__int64)&v411, v9, 5739);
      v12 = (unsigned __int8 *)v411;
      if ( !v411 )
      {
        v259 = v412;
        v260 = *(_DWORD *)(v412 + 14976);
        if ( v260 )
        {
          v271 = (unsigned int)(v260 - 1);
          *(_DWORD *)(v412 + 14976) = v271;
          v12 = *(unsigned __int8 **)(v259 + 8 * v271 + 14848);
          v272 = *((unsigned int *)v12 + 134);
          v273 = *((_QWORD *)v12 + 66);
          *v12 = 0;
          *((_DWORD *)v12 + 106) = 0;
          v274 = v273 + (v272 << 6);
          while ( v273 != v274 )
          {
            while ( 1 )
            {
              v274 -= 64;
              v275 = *(void **)(v274 + 24);
              if ( v275 == (void *)(v274 + 40) )
                break;
              operator delete(v275);
              if ( v273 == v274 )
                goto LABEL_478;
            }
          }
LABEL_478:
          *((_DWORD *)v12 + 134) = 0;
        }
        else
        {
          v12 = (unsigned __int8 *)operator new(0x3A0u);
          *v12 = 0;
          *((_QWORD *)v12 + 12) = v12 + 112;
          *((_QWORD *)v12 + 16) = v12 + 144;
          *((_QWORD *)v12 + 20) = v12 + 176;
          *((_QWORD *)v12 + 24) = v12 + 208;
          *((_QWORD *)v12 + 28) = v12 + 240;
          *((_QWORD *)v12 + 32) = v12 + 272;
          *((_QWORD *)v12 + 36) = v12 + 304;
          *((_QWORD *)v12 + 40) = v12 + 336;
          *((_QWORD *)v12 + 44) = v12 + 368;
          *((_QWORD *)v12 + 48) = v12 + 400;
          *((_QWORD *)v12 + 52) = v12 + 432;
          *((_QWORD *)v12 + 13) = 0;
          v12[112] = 0;
          *((_QWORD *)v12 + 17) = 0;
          v12[144] = 0;
          *((_QWORD *)v12 + 21) = 0;
          v12[176] = 0;
          *((_QWORD *)v12 + 25) = 0;
          v12[208] = 0;
          *((_QWORD *)v12 + 29) = 0;
          v12[240] = 0;
          *((_QWORD *)v12 + 33) = 0;
          v12[272] = 0;
          *((_QWORD *)v12 + 37) = 0;
          v12[304] = 0;
          *((_QWORD *)v12 + 41) = 0;
          v12[336] = 0;
          *((_QWORD *)v12 + 45) = 0;
          v12[368] = 0;
          *((_QWORD *)v12 + 49) = 0;
          v12[400] = 0;
          *((_QWORD *)v12 + 53) = 0x800000000LL;
          *((_QWORD *)v12 + 66) = v12 + 544;
          *((_QWORD *)v12 + 67) = 0x600000000LL;
        }
        v411 = v12;
      }
      v12[*v12 + 1] = 2;
      v13 = v411;
      v14 = ((v7 & 0x1D) != 0) + 2LL;
      v15 = *(unsigned __int8 *)v411;
      *(_BYTE *)v411 = v15 + 1;
      v13[v15 + 2] = 2;
      v16 = (unsigned __int8 *)v411;
      if ( !v411 )
      {
        v261 = v412;
        v262 = *(_DWORD *)(v412 + 14976);
        if ( v262 )
        {
          v276 = (unsigned int)(v262 - 1);
          *(_DWORD *)(v412 + 14976) = v276;
          v16 = *(unsigned __int8 **)(v261 + 8 * v276 + 14848);
          v277 = *((unsigned int *)v16 + 134);
          v278 = *((_QWORD *)v16 + 66);
          *v16 = 0;
          *((_DWORD *)v16 + 106) = 0;
          v279 = v278 + (v277 << 6);
          while ( v278 != v279 )
          {
            while ( 1 )
            {
              v279 -= 64;
              v280 = *(void **)(v279 + 24);
              if ( v280 == (void *)(v279 + 40) )
                break;
              operator delete(v280);
              if ( v278 == v279 )
                goto LABEL_483;
            }
          }
LABEL_483:
          *((_DWORD *)v16 + 134) = 0;
        }
        else
        {
          v16 = (unsigned __int8 *)operator new(0x3A0u);
          *v16 = 0;
          *((_QWORD *)v16 + 12) = v16 + 112;
          *((_QWORD *)v16 + 16) = v16 + 144;
          *((_QWORD *)v16 + 20) = v16 + 176;
          *((_QWORD *)v16 + 24) = v16 + 208;
          *((_QWORD *)v16 + 28) = v16 + 240;
          *((_QWORD *)v16 + 32) = v16 + 272;
          *((_QWORD *)v16 + 36) = v16 + 304;
          *((_QWORD *)v16 + 40) = v16 + 336;
          *((_QWORD *)v16 + 44) = v16 + 368;
          *((_QWORD *)v16 + 48) = v16 + 400;
          *((_QWORD *)v16 + 52) = v16 + 432;
          *((_QWORD *)v16 + 13) = 0;
          v16[112] = 0;
          *((_QWORD *)v16 + 17) = 0;
          v16[144] = 0;
          *((_QWORD *)v16 + 21) = 0;
          v16[176] = 0;
          *((_QWORD *)v16 + 25) = 0;
          v16[208] = 0;
          *((_QWORD *)v16 + 29) = 0;
          v16[240] = 0;
          *((_QWORD *)v16 + 33) = 0;
          v16[272] = 0;
          *((_QWORD *)v16 + 37) = 0;
          v16[304] = 0;
          *((_QWORD *)v16 + 41) = 0;
          v16[336] = 0;
          *((_QWORD *)v16 + 45) = 0;
          v16[368] = 0;
          *((_QWORD *)v16 + 49) = 0;
          v16[400] = 0;
          *((_QWORD *)v16 + 53) = 0x800000000LL;
          *((_QWORD *)v16 + 66) = v16 + 544;
          *((_QWORD *)v16 + 67) = 0x600000000LL;
        }
        v411 = v16;
      }
      v16[*v16 + 1] = 2;
      v17 = v411;
      v18 = *(unsigned __int8 *)v411;
      v19 = (unsigned int)(v18 + 1);
      *(_BYTE *)v411 = v18 + 1;
      v17[v18 + 2] = v14;
      v408 = nullptr;
      v410 = v413[0];
      v20 = v412;
      v409 = v412;
      if ( v411 )
      {
        v21 = *(_DWORD *)(v412 + 14976);
        if ( v21 )
        {
          v201 = (unsigned int)(v21 - 1);
          *(_DWORD *)(v412 + 14976) = v201;
          v22 = *(__m128i **)(v20 + 8 * v201 + 14848);
          v202 = v22[33].m128i_u32[2];
          v22->m128i_i8[0] = 0;
          v203 = v22[33].m128i_i64[0];
          v22[26].m128i_i32[2] = 0;
          v204 = v203 + (v202 << 6);
          while ( v203 != v204 )
          {
            while ( 1 )
            {
              v204 -= 64;
              v205 = *(void **)(v204 + 24);
              if ( v205 == (void *)(v204 + 40) )
                break;
              operator delete(v205);
              if ( v203 == v204 )
                goto LABEL_290;
            }
          }
LABEL_290:
          v22[33].m128i_i32[2] = 0;
          v23 = (void **)&v22[6];
        }
        else
        {
          v22 = (__m128i *)operator new(0x3A0u);
          v22->m128i_i8[0] = 0;
          v23 = (void **)&v22[6];
          v22[6].m128i_i64[0] = (__int64)v22[7].m128i_i64;
          v22[8].m128i_i64[0] = (__int64)v22[9].m128i_i64;
          v22[10].m128i_i64[0] = (__int64)v22[11].m128i_i64;
          v22[12].m128i_i64[0] = (__int64)v22[13].m128i_i64;
          v22[14].m128i_i64[0] = (__int64)v22[15].m128i_i64;
          v22[16].m128i_i64[0] = (__int64)v22[17].m128i_i64;
          v22[18].m128i_i64[0] = (__int64)v22[19].m128i_i64;
          v22[20].m128i_i64[0] = (__int64)v22[21].m128i_i64;
          v22[22].m128i_i64[0] = (__int64)v22[23].m128i_i64;
          v22[24].m128i_i64[0] = (__int64)v22[25].m128i_i64;
          v22[26].m128i_i64[0] = (__int64)v22[27].m128i_i64;
          v22[6].m128i_i64[1] = 0;
          v22[7].m128i_i8[0] = 0;
          v22[8].m128i_i64[1] = 0;
          v22[9].m128i_i8[0] = 0;
          v22[10].m128i_i64[1] = 0;
          v22[11].m128i_i8[0] = 0;
          v22[12].m128i_i64[1] = 0;
          v22[13].m128i_i8[0] = 0;
          v22[14].m128i_i64[1] = 0;
          v22[15].m128i_i8[0] = 0;
          v22[16].m128i_i64[1] = 0;
          v22[17].m128i_i8[0] = 0;
          v22[18].m128i_i64[1] = 0;
          v22[19].m128i_i8[0] = 0;
          v22[20].m128i_i64[1] = 0;
          v22[21].m128i_i8[0] = 0;
          v22[22].m128i_i64[1] = 0;
          v22[23].m128i_i8[0] = 0;
          v22[24].m128i_i64[1] = 0;
          v22[25].m128i_i8[0] = 0;
          v22[26].m128i_i64[1] = 0x800000000LL;
          v22[33].m128i_i64[0] = (__int64)v22[34].m128i_i64;
          v22[33].m128i_i64[1] = 0x600000000LL;
        }
        v24 = (const __m128i *)v411;
        v408 = v22;
        v25 = (__m128i *)((char *)v411 + 16);
        v22->m128i_i8[0] = *(_BYTE *)v411;
        v22->m128i_i8[1] = v24->m128i_i8[1];
        v22->m128i_i8[2] = v24->m128i_i8[2];
        v22->m128i_i8[3] = v24->m128i_i8[3];
        v22->m128i_i8[4] = v24->m128i_i8[4];
        v22->m128i_i8[5] = v24->m128i_i8[5];
        v22->m128i_i8[6] = v24->m128i_i8[6];
        v22->m128i_i8[7] = v24->m128i_i8[7];
        v22->m128i_i8[8] = v24->m128i_i8[8];
        v22->m128i_i8[9] = v24->m128i_i8[9];
        v22->m128i_i8[10] = v24->m128i_i8[10];
        if ( v25 < &v22[2] && &v22[1] < &v24[2] )
        {
          v22[1].m128i_i64[0] = v24[1].m128i_i64[0];
          v22[1].m128i_i64[1] = v24[1].m128i_i64[1];
          v22[2].m128i_i64[0] = v24[2].m128i_i64[0];
          v22[2].m128i_i64[1] = v24[2].m128i_i64[1];
          v22[3].m128i_i64[0] = v24[3].m128i_i64[0];
          v22[3].m128i_i64[1] = v24[3].m128i_i64[1];
          v22[4].m128i_i64[0] = v24[4].m128i_i64[0];
          v22[4].m128i_i64[1] = v24[4].m128i_i64[1];
          v22[5].m128i_i64[0] = v24[5].m128i_i64[0];
          v22[5].m128i_i64[1] = v24[5].m128i_i64[1];
        }
        else
        {
          v22[1] = _mm_loadu_si128(v24 + 1);
          v22[2] = _mm_loadu_si128(v24 + 2);
          v22[3] = _mm_loadu_si128(v24 + 3);
          v22[4] = _mm_loadu_si128(v24 + 4);
          v22[5] = _mm_loadu_si128(v24 + 5);
        }
        v26 = v24 + 6;
        do
        {
          if ( v23 != (void **)v26 )
          {
            v29 = *v23;
            v28 = v26->m128i_u64[1];
            if ( *v23 == v23 + 2 )
              v30 = 15;
            else
              v30 = (unsigned __int64)v23[2];
            if ( v28 > v30 )
            {
              if ( (v28 & 0x8000000000000000LL) != 0LL )
                goto LABEL_645;
              v31 = 2 * v30;
              if ( v28 < v31 )
              {
                v32 = v31 + 1;
                if ( v31 < 0 )
                {
                  v32 = 0x8000000000000000LL;
                  v31 = 0x7FFFFFFFFFFFFFFFLL;
                }
              }
              else
              {
                v32 = v28 + 1;
                v31 = v26->m128i_i64[1];
              }
              v402 = v23;
              v396 = v23 + 2;
              v386 = v26->m128i_u64[1];
              v29 = (_BYTE *)operator new(v32);
              v23 = v402;
              v28 = v386;
              if ( *v402 != v396 )
              {
                v397 = v29;
                operator delete(*v402);
                v23 = v402;
                v29 = v397;
                v28 = v386;
              }
              *v23 = v29;
              v23[2] = (void *)v31;
            }
            if ( v28 )
            {
              v27 = (_BYTE *)v26->m128i_i64[0];
              if ( v28 == 1 )
              {
                *v29 = *v27;
                v29 = *v23;
              }
              else
              {
                v395 = v23;
                v385 = v28;
                memcpy(v29, v27, v28);
                v23 = v395;
                v28 = v385;
                v29 = *v395;
              }
            }
            v23[1] = (void *)v28;
            v29[v28] = 0;
          }
          v26 += 2;
          v23 += 4;
        }
        while ( v26 != &v24[26] );
        if ( &v22[26] != v26 )
        {
          v49 = v24[26].m128i_u32[2];
          v50 = v22[26].m128i_u32[2];
          v51 = v24[26].m128i_i32[2];
          if ( v49 <= v50 )
          {
            if ( v24[26].m128i_i32[2] )
            {
              v263 = v22[26].m128i_i64[0];
              v264 = v24[26].m128i_i64[0];
              v265 = 0;
              do
              {
                *(_QWORD *)(v263 + v265) = *(_QWORD *)(v264 + v265);
                *(_BYTE *)(v263 + v265 + 8) = *(_BYTE *)(v264 + v265 + 8);
                v265 += 12;
              }
              while ( 12 * v49 != v265 );
            }
          }
          else
          {
            if ( v49 > v22[26].m128i_u32[3] )
            {
              v22[26].m128i_i32[2] = 0;
              sub_2237220(&v22[26], &v22[27], v49, 12);
              v53 = (char *)v24[26].m128i_i64[0];
              v52 = (_BYTE *)v22[26].m128i_i64[0];
              v57 = 0;
              v49 = v24[26].m128i_u32[2];
              v58 = v53;
            }
            else
            {
              v52 = (_BYTE *)v22[26].m128i_i64[0];
              v53 = (char *)v24[26].m128i_i64[0];
              if ( v22[26].m128i_i32[2] )
              {
                v54 = 3 * v50;
                v55 = 0;
                v56 = 4 * v54;
                v57 = v56;
                do
                {
                  *(_QWORD *)&v52[v55] = *(_QWORD *)&v53[v55];
                  v52[v55 + 8] = v53[v55 + 8];
                  v55 += 12;
                }
                while ( v56 != v55 );
                v49 = v24[26].m128i_u32[2];
                v52 += v56;
                v58 = &v53[v56];
              }
              else
              {
                v58 = (char *)v24[26].m128i_i64[0];
                v57 = 0;
              }
            }
            v59 = 12 * v49;
            if ( v58 != &v53[v59] )
              memcpy(v52, v58, v59 - v57);
          }
          v22[26].m128i_i32[2] = v51;
        }
        sub_9EED30((__int64)v22[33].m128i_i64, v24[33].m128i_i64);
      }
      v60 = sub_1AAFF40((__int64)a1, v6, (__int64)&v408, v19, v10, v11);
      v61 = (void **)v408;
      v46 = v60;
      if ( v408 )
      {
        v62 = v409;
        if ( v409 )
        {
          if ( (unsigned __int64)v408 < v409 || (unsigned __int64)v408 > v409 + 14848 )
          {
            v63 = *((void ***)v408 + 66);
            v64 = &v63[8 * (unsigned __int64)*((unsigned int *)v408 + 134)];
            if ( v63 != v64 )
            {
              do
              {
                while ( 1 )
                {
                  v64 -= 8;
                  v65 = (void **)v64[3];
                  if ( v65 == v64 + 5 )
                    break;
                  operator delete(v65);
                  if ( v63 == v64 )
                    goto LABEL_63;
                }
              }
              while ( v63 != v64 );
LABEL_63:
              v64 = (void **)v61[66];
            }
            if ( v64 != v61 + 68 )
              free(v64);
            v66 = (void **)v61[52];
            v67 = v61 + 52;
            if ( v66 != v61 + 54 )
              free(v66);
            v68 = v61 + 12;
            do
            {
              while ( 1 )
              {
                v67 -= 4;
                if ( *v67 == v67 + 2 )
                  break;
                operator delete(*v67);
                if ( v67 == v68 )
                  goto LABEL_71;
              }
            }
            while ( v67 != v68 );
LABEL_71:
            operator delete(v61, 0x3A0u);
          }
          else
          {
            v200 = *(unsigned int *)(v409 + 14976);
            *(_DWORD *)(v409 + 14976) = v200 + 1;
            *(_QWORD *)(v62 + 8 * v200 + 14848) = v61;
          }
        }
      }
      v69 = (void **)v411;
      if ( v411 )
      {
        v70 = v412;
        if ( v412 )
        {
          if ( (unsigned __int64)v411 < v412 || (unsigned __int64)v411 > v412 + 14848 )
          {
            v71 = *((void ***)v411 + 66);
            v72 = &v71[8 * (unsigned __int64)*((unsigned int *)v411 + 134)];
            if ( v71 != v72 )
            {
              do
              {
                while ( 1 )
                {
                  v72 -= 8;
                  v73 = (void **)v72[3];
                  if ( v73 == v72 + 5 )
                    break;
                  operator delete(v73);
                  if ( v71 == v72 )
                    goto LABEL_78;
                }
              }
              while ( v71 != v72 );
LABEL_78:
              v72 = (void **)v69[66];
            }
            if ( v72 != v69 + 68 )
              free(v72);
            v74 = (void **)v69[52];
            if ( v74 != v69 + 54 )
              free(v74);
            v75 = v69 + 48;
            v76 = v69 + 8;
            do
            {
              while ( *v75 != v75 + 2 )
              {
                operator delete(*v75);
                v75 -= 4;
                if ( v76 == v75 )
                  goto LABEL_86;
              }
              v75 -= 4;
            }
            while ( v76 != v75 );
LABEL_86:
            operator delete(v69, 0x3A0u);
          }
          else
          {
            v198 = *(unsigned int *)(v412 + 14976);
            *(_DWORD *)(v412 + 14976) = v198 + 1;
            *(_QWORD *)(v70 + 8 * v198 + 14848) = v69;
          }
        }
      }
      v45 = 1;
    }
    return (v45 << 32) | v46;
  }
  if ( v5 == 91 )
  {
    v78 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
    switch ( (v78 + 59) & 0x3F )
    {
      case 0:
        v8 = 6;
        v7 = 6;
        goto LABEL_349;
      case 1:
        v8 = 7;
        v7 = 7;
        goto LABEL_349;
      case 2:
        v8 = 5;
        v7 = 5;
        goto LABEL_349;
      case 6:
        v8 = 4;
        v7 = 4;
        goto LABEL_349;
      case 8:
        v8 = 8;
        v7 = 8;
        goto LABEL_349;
      case 9:
        v8 = 9;
        v7 = 9;
        goto LABEL_349;
      case 0x20:
        v8 = 2 * (*(_DWORD *)(a2 + 16) == 1);
        v7 = 2 * (*(_DWORD *)(a2 + 16) == 1);
        goto LABEL_350;
      case 0x21:
        v8 = 2 * (*(_DWORD *)(a2 + 16) == 1) + 1;
        v7 = 2 * (*(_DWORD *)(a2 + 16) == 1) + 1;
        goto LABEL_350;
      case 0x28:
        v8 = 13;
        v7 = 13;
LABEL_349:
        if ( *(_DWORD *)(a2 + 16) != 1 )
          goto LABEL_90;
LABEL_350:
        v6 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
        goto LABEL_3;
      default:
LABEL_90:
        switch ( (v78 + 59) & 0x3F )
        {
          case 0:
            v81 = 5;
            goto LABEL_376;
          case 1:
            v81 = 6;
            goto LABEL_376;
          case 2:
            v81 = 2;
            goto LABEL_376;
          case 3:
            v81 = 3;
            goto LABEL_376;
          case 4:
            v81 = 4;
            goto LABEL_376;
          case 5:
            v81 = 17;
            goto LABEL_376;
          case 6:
            v81 = 16;
            goto LABEL_376;
          case 7:
            v81 = 18;
            goto LABEL_376;
          case 0xA:
            v81 = 21;
            goto LABEL_376;
          case 0xB:
            v81 = 10;
            goto LABEL_376;
          case 0xC:
            v81 = 11;
            goto LABEL_376;
          case 0xD:
            v81 = 25;
            goto LABEL_376;
          case 0xE:
            v81 = 26;
            goto LABEL_376;
          case 0xF:
            v81 = 22;
            goto LABEL_376;
          case 0x10:
            v81 = 23;
            goto LABEL_376;
          case 0x11:
            v81 = 24;
            goto LABEL_376;
          case 0x12:
            v81 = 30;
            goto LABEL_376;
          case 0x13:
            v81 = 29;
            goto LABEL_376;
          case 0x14:
            v81 = 31;
            goto LABEL_376;
          case 0x15:
            v81 = 7;
            goto LABEL_376;
          case 0x16:
            v81 = 8;
            goto LABEL_376;
          case 0x17:
            v81 = 27;
            goto LABEL_376;
          case 0x18:
            v81 = 28;
            goto LABEL_376;
          case 0x19:
            v81 = 14;
            goto LABEL_376;
          case 0x1A:
            v81 = 15;
            goto LABEL_376;
          case 0x1B:
            v81 = 12;
            goto LABEL_376;
          case 0x1C:
            v81 = 13;
            goto LABEL_376;
          case 0x1D:
            v81 = 9;
            goto LABEL_376;
          case 0x1E:
            v81 = 19;
            goto LABEL_376;
          case 0x1F:
            v81 = 20;
            goto LABEL_376;
          case 0x22:
            v81 = 32;
            goto LABEL_376;
          case 0x23:
            v81 = 1;
LABEL_376:
            if ( *(_DWORD *)(a2 + 16) != 2 )
              goto LABEL_192;
            v258 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
            v79 = sub_BFB840(*(_QWORD *)(a2 + v258 + 32));
            v80 = sub_BFB840(*(_QWORD *)(a2 + v258 + 40));
            break;
          default:
            goto LABEL_192;
        }
        goto LABEL_93;
    }
  }
  if ( ((v5 + 394) & 0x1FFu) > 1 )
  {
LABEL_192:
    m128i_i64 = *a1;
    sub_168B9B0((__int64)&ptr, *a1, 5736);
    v154 = (unsigned __int8 *)ptr;
    if ( !ptr )
    {
      v266 = v418;
      v267 = *(_DWORD *)(v418 + 14976);
      if ( v267 )
      {
        v296 = (unsigned int)(v267 - 1);
        *(_DWORD *)(v418 + 14976) = v296;
        v154 = *(unsigned __int8 **)(v266 + 8 * v296 + 14848);
        v297 = *((unsigned int *)v154 + 134);
        *v154 = 0;
        v298 = *((_QWORD *)v154 + 66);
        *((_DWORD *)v154 + 106) = 0;
        v299 = v298 + (v297 << 6);
        while ( v298 != v299 )
        {
          while ( 1 )
          {
            v299 -= 64;
            v300 = *(void **)(v299 + 24);
            if ( v300 == (void *)(v299 + 40) )
              break;
            operator delete(v300);
            if ( v298 == v299 )
              goto LABEL_511;
          }
        }
LABEL_511:
        *((_DWORD *)v154 + 134) = 0;
      }
      else
      {
        v154 = (unsigned __int8 *)operator new(0x3A0u);
        *v154 = 0;
        *((_QWORD *)v154 + 12) = v154 + 112;
        *((_QWORD *)v154 + 16) = v154 + 144;
        *((_QWORD *)v154 + 20) = v154 + 176;
        *((_QWORD *)v154 + 24) = v154 + 208;
        *((_QWORD *)v154 + 28) = v154 + 240;
        *((_QWORD *)v154 + 32) = v154 + 272;
        *((_QWORD *)v154 + 36) = v154 + 304;
        *((_QWORD *)v154 + 40) = v154 + 336;
        *((_QWORD *)v154 + 44) = v154 + 368;
        *((_QWORD *)v154 + 48) = v154 + 400;
        *((_QWORD *)v154 + 52) = v154 + 432;
        *((_QWORD *)v154 + 13) = 0;
        v154[112] = 0;
        *((_QWORD *)v154 + 17) = 0;
        v154[144] = 0;
        *((_QWORD *)v154 + 21) = 0;
        v154[176] = 0;
        *((_QWORD *)v154 + 25) = 0;
        v154[208] = 0;
        *((_QWORD *)v154 + 29) = 0;
        v154[240] = 0;
        *((_QWORD *)v154 + 33) = 0;
        v154[272] = 0;
        *((_QWORD *)v154 + 37) = 0;
        v154[304] = 0;
        *((_QWORD *)v154 + 41) = 0;
        v154[336] = 0;
        *((_QWORD *)v154 + 45) = 0;
        v154[368] = 0;
        *((_QWORD *)v154 + 49) = 0;
        v154[400] = 0;
        *((_QWORD *)v154 + 53) = 0x800000000LL;
        *((_QWORD *)v154 + 66) = v154 + 544;
        *((_QWORD *)v154 + 67) = 0x600000000LL;
      }
      ptr = v154;
    }
    v154[*v154 + 1] = 2;
    v155 = ptr;
    v156 = *(unsigned __int8 *)ptr;
    v157 = (unsigned int)(v156 + 1);
    *(_BYTE *)ptr = v156 + 1;
    v155[v156 + 2] = 1;
    v414 = nullptr;
    v416[0] = v419[0];
    v158 = v418;
    v415 = v418;
    if ( ptr )
    {
      v159 = *(_DWORD *)(v418 + 14976);
      if ( v159 )
      {
        v241 = (unsigned int)(v159 - 1);
        *(_DWORD *)(v418 + 14976) = v241;
        v160 = *(__m128i **)(v158 + 8 * v241 + 14848);
        v242 = v160[33].m128i_u32[2];
        v160->m128i_i8[0] = 0;
        v243 = v160[33].m128i_i64[0];
        v160[26].m128i_i32[2] = 0;
        v244 = v243 + (v242 << 6);
        while ( v243 != v244 )
        {
          while ( 1 )
          {
            v244 -= 64;
            v245 = *(void **)(v244 + 24);
            if ( v245 == (void *)(v244 + 40) )
              break;
            operator delete(v245);
            if ( v243 == v244 )
              goto LABEL_347;
          }
        }
LABEL_347:
        v160[33].m128i_i32[2] = 0;
        v161 = (void **)&v160[6];
      }
      else
      {
        v160 = (__m128i *)operator new(0x3A0u);
        v160->m128i_i8[0] = 0;
        v161 = (void **)&v160[6];
        v160[6].m128i_i64[0] = (__int64)v160[7].m128i_i64;
        v160[8].m128i_i64[0] = (__int64)v160[9].m128i_i64;
        v160[10].m128i_i64[0] = (__int64)v160[11].m128i_i64;
        v160[12].m128i_i64[0] = (__int64)v160[13].m128i_i64;
        v160[14].m128i_i64[0] = (__int64)v160[15].m128i_i64;
        v160[16].m128i_i64[0] = (__int64)v160[17].m128i_i64;
        v160[18].m128i_i64[0] = (__int64)v160[19].m128i_i64;
        v160[20].m128i_i64[0] = (__int64)v160[21].m128i_i64;
        v160[22].m128i_i64[0] = (__int64)v160[23].m128i_i64;
        v160[24].m128i_i64[0] = (__int64)v160[25].m128i_i64;
        v160[26].m128i_i64[0] = (__int64)v160[27].m128i_i64;
        v160[6].m128i_i64[1] = 0;
        v160[7].m128i_i8[0] = 0;
        v160[8].m128i_i64[1] = 0;
        v160[9].m128i_i8[0] = 0;
        v160[10].m128i_i64[1] = 0;
        v160[11].m128i_i8[0] = 0;
        v160[12].m128i_i64[1] = 0;
        v160[13].m128i_i8[0] = 0;
        v160[14].m128i_i64[1] = 0;
        v160[15].m128i_i8[0] = 0;
        v160[16].m128i_i64[1] = 0;
        v160[17].m128i_i8[0] = 0;
        v160[18].m128i_i64[1] = 0;
        v160[19].m128i_i8[0] = 0;
        v160[20].m128i_i64[1] = 0;
        v160[21].m128i_i8[0] = 0;
        v160[22].m128i_i64[1] = 0;
        v160[23].m128i_i8[0] = 0;
        v160[24].m128i_i64[1] = 0;
        v160[25].m128i_i8[0] = 0;
        v160[26].m128i_i64[1] = 0x800000000LL;
        v160[33].m128i_i64[0] = (__int64)v160[34].m128i_i64;
        v160[33].m128i_i64[1] = 0x600000000LL;
      }
      v162 = (const __m128i *)ptr;
      v414 = v160;
      v163 = (__m128i *)((char *)ptr + 16);
      v160->m128i_i8[0] = *(_BYTE *)ptr;
      v160->m128i_i8[1] = v162->m128i_i8[1];
      v160->m128i_i8[2] = v162->m128i_i8[2];
      v160->m128i_i8[3] = v162->m128i_i8[3];
      v160->m128i_i8[4] = v162->m128i_i8[4];
      v160->m128i_i8[5] = v162->m128i_i8[5];
      v160->m128i_i8[6] = v162->m128i_i8[6];
      v160->m128i_i8[7] = v162->m128i_i8[7];
      v160->m128i_i8[8] = v162->m128i_i8[8];
      v160->m128i_i8[9] = v162->m128i_i8[9];
      v160->m128i_i8[10] = v162->m128i_i8[10];
      if ( v163 < &v160[2] && &v160[1] < &v162[2] )
      {
        v160[1].m128i_i64[0] = v162[1].m128i_i64[0];
        v160[1].m128i_i64[1] = v162[1].m128i_i64[1];
        v160[2].m128i_i64[0] = v162[2].m128i_i64[0];
        v160[2].m128i_i64[1] = v162[2].m128i_i64[1];
        v160[3].m128i_i64[0] = v162[3].m128i_i64[0];
        v160[3].m128i_i64[1] = v162[3].m128i_i64[1];
        v160[4].m128i_i64[0] = v162[4].m128i_i64[0];
        v160[4].m128i_i64[1] = v162[4].m128i_i64[1];
        v160[5].m128i_i64[0] = v162[5].m128i_i64[0];
        v160[5].m128i_i64[1] = v162[5].m128i_i64[1];
      }
      else
      {
        v160[1] = _mm_loadu_si128(v162 + 1);
        v160[2] = _mm_loadu_si128(v162 + 2);
        v160[3] = _mm_loadu_si128(v162 + 3);
        v160[4] = _mm_loadu_si128(v162 + 4);
        v160[5] = _mm_loadu_si128(v162 + 5);
      }
      v164 = v162 + 6;
      do
      {
        if ( v161 != (void **)v164 )
        {
          v167 = *v161;
          v166 = v164->m128i_u64[1];
          if ( *v161 == v161 + 2 )
            v168 = 15;
          else
            v168 = (unsigned __int64)v161[2];
          if ( v166 > v168 )
          {
            if ( (v166 & 0x8000000000000000LL) != 0LL )
LABEL_645:
              std::__throw_length_error("basic_string::_M_create");
            v169 = 2 * v168;
            if ( v166 < v169 )
            {
              v170 = v169 + 1;
              if ( v169 < 0 )
              {
                v170 = 0x8000000000000000LL;
                v169 = 0x7FFFFFFFFFFFFFFFLL;
              }
            }
            else
            {
              v170 = v166 + 1;
              v169 = v164->m128i_i64[1];
            }
            v403 = v161;
            v399 = v161 + 2;
            v388 = v164->m128i_u64[1];
            v167 = (_BYTE *)operator new(v170);
            v161 = v403;
            v166 = v388;
            if ( *v403 != v399 )
            {
              v400 = v167;
              operator delete(*v403);
              v161 = v403;
              v167 = v400;
              v166 = v388;
            }
            *v161 = v167;
            v161[2] = (void *)v169;
          }
          if ( v166 )
          {
            v165 = (_BYTE *)v164->m128i_i64[0];
            if ( v166 == 1 )
            {
              *v167 = *v165;
              v167 = *v161;
            }
            else
            {
              v398 = v161;
              v387 = v166;
              memcpy(v167, v165, v166);
              v161 = v398;
              v166 = v387;
              v167 = *v398;
            }
          }
          v161[1] = (void *)v166;
          v167[v166] = 0;
        }
        v164 += 2;
        v161 += 4;
      }
      while ( v164 != &v162[26] );
      if ( &v160[26] != v164 )
      {
        v171 = v162[26].m128i_u32[2];
        v172 = v160[26].m128i_u32[2];
        v173 = v162[26].m128i_i32[2];
        if ( v171 <= v172 )
        {
          if ( v162[26].m128i_i32[2] )
          {
            v268 = v160[26].m128i_i64[0];
            v269 = v162[26].m128i_i64[0];
            v270 = 0;
            do
            {
              *(_QWORD *)(v268 + v270) = *(_QWORD *)(v269 + v270);
              *(_BYTE *)(v268 + v270 + 8) = *(_BYTE *)(v269 + v270 + 8);
              v270 += 12;
            }
            while ( v270 != 12 * v171 );
          }
        }
        else
        {
          if ( v171 > v160[26].m128i_u32[3] )
          {
            v160[26].m128i_i32[2] = 0;
            sub_2237220(&v160[26], &v160[27], v171, 12);
            v175 = (char *)v162[26].m128i_i64[0];
            v174 = (_BYTE *)v160[26].m128i_i64[0];
            v179 = 0;
            v171 = v162[26].m128i_u32[2];
            v180 = v175;
          }
          else
          {
            v174 = (_BYTE *)v160[26].m128i_i64[0];
            v175 = (char *)v162[26].m128i_i64[0];
            if ( v160[26].m128i_i32[2] )
            {
              v176 = 3 * v172;
              v177 = 0;
              v178 = 4 * v176;
              v179 = v178;
              do
              {
                *(_QWORD *)&v174[v177] = *(_QWORD *)&v175[v177];
                v174[v177 + 8] = v175[v177 + 8];
                v177 += 12;
              }
              while ( v178 != v177 );
              v171 = v162[26].m128i_u32[2];
              v174 += v178;
              v180 = &v175[v178];
            }
            else
            {
              v180 = (char *)v162[26].m128i_i64[0];
              v179 = 0;
            }
          }
          v181 = 12 * v171;
          if ( v180 != &v175[v181] )
            memcpy(v174, v180, v181 - v179);
        }
        v160[26].m128i_i32[2] = v173;
      }
      m128i_i64 = (__int64)v162[33].m128i_i64;
      sub_9EED30((__int64)v160[33].m128i_i64, v162[33].m128i_i64);
    }
    v182 = sub_C00A40(a2, m128i_i64, (__int64)v155, v157, v153);
    sub_1AAB2D0((__int64)a1, v182, (__int64)&v414);
    v183 = (void **)v414;
    if ( v414 )
    {
      v184 = v415;
      if ( v415 )
      {
        if ( (unsigned __int64)v414 >= v415 && (unsigned __int64)v414 <= v415 + 14848 )
        {
          v295 = *(unsigned int *)(v415 + 14976);
          *(_DWORD *)(v415 + 14976) = v295 + 1;
          *(_QWORD *)(v184 + 8 * v295 + 14848) = v183;
        }
        else
        {
          v185 = *((void ***)v414 + 66);
          v186 = &v185[8 * (unsigned __int64)*((unsigned int *)v414 + 134)];
          if ( v185 != v186 )
          {
            do
            {
              while ( 1 )
              {
                v186 -= 8;
                v187 = (void **)v186[3];
                if ( v187 == v186 + 5 )
                  break;
                operator delete(v187);
                if ( v185 == v186 )
                  goto LABEL_250;
              }
            }
            while ( v185 != v186 );
LABEL_250:
            v186 = (void **)v183[66];
          }
          if ( v186 != v183 + 68 )
            free(v186);
          v188 = (void **)v183[52];
          if ( v188 != v183 + 54 )
            free(v188);
          v189 = v183 + 48;
          v190 = v183 + 8;
          do
          {
            while ( *v189 != v189 + 2 )
            {
              operator delete(*v189);
              v189 -= 4;
              if ( v190 == v189 )
                goto LABEL_258;
            }
            v189 -= 4;
          }
          while ( v190 != v189 );
LABEL_258:
          operator delete(v183, 0x3A0u);
        }
      }
    }
    v87 = (void **)ptr;
    if ( !ptr )
      return 1;
    v88 = v418;
    if ( !v418 )
      return 1;
    if ( (unsigned __int64)ptr >= v418 && (unsigned __int64)ptr <= v418 + 14848 )
    {
LABEL_292:
      v206 = *(unsigned int *)(v88 + 14976);
      *(_DWORD *)(v88 + 14976) = v206 + 1;
      *(_QWORD *)(v88 + 8 * v206 + 14848) = v87;
      return 1;
    }
    v191 = *((void ***)ptr + 66);
    v192 = &v191[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
    if ( v191 != v192 )
    {
      do
      {
        while ( 1 )
        {
          v192 -= 8;
          v193 = (void **)v192[3];
          if ( v193 == v192 + 5 )
            break;
          operator delete(v193);
          if ( v191 == v192 )
            goto LABEL_266;
        }
      }
      while ( v191 != v192 );
LABEL_266:
      v192 = (void **)v87[66];
    }
    if ( v192 != v87 + 68 )
      free(v192);
    v194 = (void **)v87[52];
    v195 = v87 + 52;
    if ( v194 != v87 + 54 )
      free(v194);
    v196 = v87 + 12;
    while ( 1 )
    {
      v195 -= 4;
      v197 = *v195;
      if ( *v195 != v195 + 2 )
        break;
LABEL_275:
      if ( v196 == v195 )
        goto LABEL_110;
    }
    while ( 1 )
    {
      operator delete(v197);
      if ( v196 == v195 )
        break;
      v195 -= 4;
      v197 = *v195;
      if ( *v195 == v195 + 2 )
        goto LABEL_275;
    }
LABEL_110:
    operator delete(v87, 0x3A0u);
    return 1;
  }
  v79 = sub_BFB840(*(_QWORD *)(a2 + 16));
  v80 = sub_BFB840(*(_QWORD *)(a2 + 24));
  v81 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
LABEL_93:
  v82 = *a1;
  if ( v81 > 0x1F )
  {
LABEL_96:
    sub_168B9B0((__int64)&ptr, v82, 5742);
    v86 = sub_C00A40(a2, v82, v83, v84, v85);
    sub_1AAB2D0((__int64)a1, v86, (__int64)&ptr);
    v87 = (void **)ptr;
    if ( !ptr )
      return 1;
    v88 = v418;
    if ( !v418 )
      return 1;
    if ( (unsigned __int64)ptr >= v418 && (unsigned __int64)ptr <= v418 + 14848 )
      goto LABEL_292;
    v89 = *((void ***)ptr + 66);
    v90 = &v89[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
    if ( v89 != v90 )
    {
      do
      {
        while ( 1 )
        {
          v90 -= 8;
          v91 = (void **)v90[3];
          if ( v91 == v90 + 5 )
            break;
          operator delete(v91);
          if ( v89 == v90 )
            goto LABEL_102;
        }
      }
      while ( v89 != v90 );
LABEL_102:
      v90 = (void **)v87[66];
    }
    if ( v90 != v87 + 68 )
      free(v90);
    v92 = (void **)v87[52];
    if ( v92 != v87 + 54 )
      free(v92);
    v93 = v87 + 48;
    v94 = v87 + 8;
    do
    {
      while ( *v93 != v93 + 2 )
      {
        operator delete(*v93);
        v93 -= 4;
        if ( v94 == v93 )
          goto LABEL_110;
      }
      v93 -= 4;
    }
    while ( v93 != v94 );
    goto LABEL_110;
  }
  if ( ((1LL << v81) & 0xFEC00000) == 0 )
  {
    if ( ((1LL << v81) & 0x200000) == 0 )
      goto LABEL_96;
    sub_168B9B0((__int64)&ptr, v82, 5739);
    v207 = (unsigned __int8 *)ptr;
    if ( !ptr )
    {
      v315 = v418;
      v316 = *(_DWORD *)(v418 + 14976);
      if ( v316 )
      {
        v346 = (unsigned int)(v316 - 1);
        *(_DWORD *)(v418 + 14976) = v346;
        v207 = *(unsigned __int8 **)(v315 + 8 * v346 + 14848);
        v347 = *((unsigned int *)v207 + 134);
        *v207 = 0;
        v348 = *((_QWORD *)v207 + 66);
        *((_DWORD *)v207 + 106) = 0;
        v349 = v348 + (v347 << 6);
        while ( v348 != v349 )
        {
          while ( 1 )
          {
            v349 -= 64;
            v350 = *(void **)(v349 + 24);
            if ( v350 == (void *)(v349 + 40) )
              break;
            v394 = v348;
            v384 = v349;
            operator delete(v350);
            v349 = v384;
            v348 = v394;
            if ( v394 == v384 )
              goto LABEL_615;
          }
        }
LABEL_615:
        *((_DWORD *)v207 + 134) = 0;
      }
      else
      {
        v207 = (unsigned __int8 *)operator new(0x3A0u);
        *v207 = 0;
        *((_QWORD *)v207 + 12) = v207 + 112;
        *((_QWORD *)v207 + 16) = v207 + 144;
        *((_QWORD *)v207 + 20) = v207 + 176;
        *((_QWORD *)v207 + 24) = v207 + 208;
        *((_QWORD *)v207 + 28) = v207 + 240;
        *((_QWORD *)v207 + 32) = v207 + 272;
        *((_QWORD *)v207 + 36) = v207 + 304;
        *((_QWORD *)v207 + 40) = v207 + 336;
        *((_QWORD *)v207 + 44) = v207 + 368;
        *((_QWORD *)v207 + 48) = v207 + 400;
        *((_QWORD *)v207 + 52) = v207 + 432;
        *((_QWORD *)v207 + 13) = 0;
        v207[112] = 0;
        *((_QWORD *)v207 + 17) = 0;
        v207[144] = 0;
        *((_QWORD *)v207 + 21) = 0;
        v207[176] = 0;
        *((_QWORD *)v207 + 25) = 0;
        v207[208] = 0;
        *((_QWORD *)v207 + 29) = 0;
        v207[240] = 0;
        *((_QWORD *)v207 + 33) = 0;
        v207[272] = 0;
        *((_QWORD *)v207 + 37) = 0;
        v207[304] = 0;
        *((_QWORD *)v207 + 41) = 0;
        v207[336] = 0;
        *((_QWORD *)v207 + 45) = 0;
        v207[368] = 0;
        *((_QWORD *)v207 + 49) = 0;
        v207[400] = 0;
        *((_QWORD *)v207 + 53) = 0x800000000LL;
        *((_QWORD *)v207 + 66) = v207 + 544;
        *((_QWORD *)v207 + 67) = 0x600000000LL;
      }
      ptr = v207;
    }
    v207[*v207 + 1] = 2;
    v208 = ptr;
    v209 = *(unsigned __int8 *)ptr;
    *(_BYTE *)ptr = v209 + 1;
    v208[v209 + 2] = 0;
    v210 = (unsigned __int8 *)ptr;
    if ( !ptr )
    {
      v313 = v418;
      v314 = *(_DWORD *)(v418 + 14976);
      if ( v314 )
      {
        v341 = (unsigned int)(v314 - 1);
        *(_DWORD *)(v418 + 14976) = v341;
        v210 = *(unsigned __int8 **)(v313 + 8 * v341 + 14848);
        v342 = *((unsigned int *)v210 + 134);
        *v210 = 0;
        v343 = *((_QWORD *)v210 + 66);
        *((_DWORD *)v210 + 106) = 0;
        v344 = v343 + (v342 << 6);
        while ( v343 != v344 )
        {
          while ( 1 )
          {
            v344 -= 64;
            v345 = *(void **)(v344 + 24);
            if ( v345 == (void *)(v344 + 40) )
              break;
            v393 = v343;
            v383 = v344;
            operator delete(v345);
            v344 = v383;
            v343 = v393;
            if ( v393 == v383 )
              goto LABEL_610;
          }
        }
LABEL_610:
        *((_DWORD *)v210 + 134) = 0;
      }
      else
      {
        v210 = (unsigned __int8 *)operator new(0x3A0u);
        *v210 = 0;
        *((_QWORD *)v210 + 12) = v210 + 112;
        *((_QWORD *)v210 + 16) = v210 + 144;
        *((_QWORD *)v210 + 20) = v210 + 176;
        *((_QWORD *)v210 + 24) = v210 + 208;
        *((_QWORD *)v210 + 28) = v210 + 240;
        *((_QWORD *)v210 + 32) = v210 + 272;
        *((_QWORD *)v210 + 36) = v210 + 304;
        *((_QWORD *)v210 + 40) = v210 + 336;
        *((_QWORD *)v210 + 44) = v210 + 368;
        *((_QWORD *)v210 + 48) = v210 + 400;
        *((_QWORD *)v210 + 52) = v210 + 432;
        *((_QWORD *)v210 + 13) = 0;
        v210[112] = 0;
        *((_QWORD *)v210 + 17) = 0;
        v210[144] = 0;
        *((_QWORD *)v210 + 21) = 0;
        v210[176] = 0;
        *((_QWORD *)v210 + 25) = 0;
        v210[208] = 0;
        *((_QWORD *)v210 + 29) = 0;
        v210[240] = 0;
        *((_QWORD *)v210 + 33) = 0;
        v210[272] = 0;
        *((_QWORD *)v210 + 37) = 0;
        v210[304] = 0;
        *((_QWORD *)v210 + 41) = 0;
        v210[336] = 0;
        *((_QWORD *)v210 + 45) = 0;
        v210[368] = 0;
        *((_QWORD *)v210 + 49) = 0;
        v210[400] = 0;
        *((_QWORD *)v210 + 53) = 0x800000000LL;
        *((_QWORD *)v210 + 66) = v210 + 544;
        *((_QWORD *)v210 + 67) = 0x600000000LL;
      }
      ptr = v210;
    }
    v210[*v210 + 1] = 2;
    v211 = ptr;
    v212 = *(unsigned __int8 *)ptr;
    *(_BYTE *)ptr = v212 + 1;
    v211[v212 + 2] = 0;
    sub_1582CA0((__int64)&v404, (_BYTE **)&ptr);
    v213 = (void **)ptr;
    if ( ptr )
    {
      v214 = v418;
      if ( v418 )
      {
        if ( (unsigned __int64)ptr < v418 || (unsigned __int64)ptr > v418 + 14848 )
        {
          v215 = *((void ***)ptr + 66);
          v216 = &v215[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
          if ( v215 != v216 )
          {
            do
            {
              while ( 1 )
              {
                v216 -= 8;
                v217 = (void **)v216[3];
                if ( v217 == v216 + 5 )
                  break;
                v389 = v216;
                v374 = v215;
                operator delete(v217);
                v215 = v374;
                v216 = v389;
                if ( v374 == v389 )
                  goto LABEL_301;
              }
            }
            while ( v215 != v216 );
LABEL_301:
            v216 = (void **)v213[66];
          }
          if ( v216 != v213 + 68 )
            free(v216);
          v218 = (void **)v213[52];
          if ( v218 != v213 + 54 )
            free(v218);
          v219 = v213 + 48;
          v375 = v213 + 8;
          do
          {
            while ( *v219 != v219 + 2 )
            {
              v390 = v219;
              operator delete(*v219);
              v219 = v390 - 4;
              if ( v375 == v390 - 4 )
                goto LABEL_309;
            }
            v219 -= 4;
          }
          while ( v375 != v219 );
LABEL_309:
          operator delete(v213, 0x3A0u);
        }
        else
        {
          v303 = *(unsigned int *)(v418 + 14976);
          *(_DWORD *)(v418 + 14976) = v303 + 1;
          *(_QWORD *)(v214 + 8 * v303 + 14848) = v213;
        }
      }
    }
    sub_1582CA0((__int64)&ptr, (_BYTE **)&v404);
    v223 = sub_1AAFF40((__int64)a1, v79, (__int64)&ptr, v220, v221, v222);
    v224 = (void **)ptr;
    v401 = v223;
    if ( ptr )
    {
      v225 = v418;
      if ( v418 )
      {
        if ( (unsigned __int64)ptr < v418 || (unsigned __int64)ptr > v418 + 14848 )
        {
          v226 = *((void ***)ptr + 66);
          v227 = &v226[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
          if ( v226 != v227 )
          {
            do
            {
              while ( 1 )
              {
                v227 -= 8;
                v228 = (void **)v227[3];
                if ( v228 == v227 + 5 )
                  break;
                v391 = v227;
                v376 = v226;
                operator delete(v228);
                v226 = v376;
                v227 = v391;
                if ( v376 == v391 )
                  goto LABEL_316;
              }
            }
            while ( v226 != v227 );
LABEL_316:
            v227 = (void **)v224[66];
          }
          if ( v227 != v224 + 68 )
            free(v227);
          v229 = (void **)v224[52];
          if ( v229 != v224 + 54 )
            free(v229);
          v230 = v224 + 48;
          v377 = v224 + 8;
          do
          {
            while ( *v230 != v230 + 2 )
            {
              v392 = v230;
              operator delete(*v230);
              v230 = v392 - 4;
              if ( v377 == v392 - 4 )
                goto LABEL_324;
            }
            v230 -= 4;
          }
          while ( v377 != v230 );
LABEL_324:
          operator delete(v224, 0x3A0u);
        }
        else
        {
          v301 = *(unsigned int *)(v418 + 14976);
          *(_DWORD *)(v418 + 14976) = v301 + 1;
          *(_QWORD *)(v225 + 8 * v301 + 14848) = v224;
        }
      }
    }
    if ( v401 )
      goto LABEL_326;
    v286 = *(_WORD *)v80 & 0x1FF;
    if ( v286 <= 0x75u )
    {
      if ( v286 == 91 )
      {
        switch ( ((*(_BYTE *)(v80 + 3) >> 1) + 59) & 0x3F )
        {
          case 0:
            v288 = 5;
            break;
          case 1:
            v288 = 6;
            break;
          case 2:
            v288 = 2;
            break;
          case 3:
            v288 = 3;
            break;
          case 4:
            v288 = 4;
            break;
          case 5:
            v288 = 17;
            break;
          case 6:
            v288 = 16;
            break;
          case 7:
            v288 = 18;
            break;
          case 0xA:
            v288 = 21;
            break;
          case 0xB:
            v288 = 10;
            break;
          case 0xC:
            v288 = 11;
            break;
          case 0xD:
            v288 = 25;
            break;
          case 0xE:
            v288 = 26;
            break;
          case 0xF:
            v288 = 22;
            break;
          case 0x10:
            v288 = 23;
            break;
          case 0x11:
            v288 = 24;
            break;
          case 0x12:
            v288 = 30;
            break;
          case 0x13:
            v288 = 29;
            break;
          case 0x14:
            v288 = 31;
            break;
          case 0x15:
            v288 = 7;
            break;
          case 0x16:
            v288 = 8;
            break;
          case 0x17:
            v288 = 27;
            break;
          case 0x18:
            v288 = 28;
            break;
          case 0x19:
            v288 = 14;
            break;
          case 0x1A:
            v288 = 15;
            break;
          case 0x1B:
            v288 = 12;
            break;
          case 0x1C:
            v288 = 13;
            break;
          case 0x1D:
            v288 = 9;
            break;
          case 0x1E:
            v288 = 19;
            break;
          case 0x1F:
            v288 = 20;
            break;
          case 0x22:
            v288 = 32;
            break;
          case 0x23:
            v288 = 1;
            break;
          default:
            goto LABEL_538;
        }
        if ( *(_DWORD *)(v80 + 16) == 2 )
        {
          v320 = 8 * (((*(_BYTE *)(v80 + 2) & 8) != 0) + 1LL);
          v378 = sub_BFB840(*(_QWORD *)(v80 + v320 + 32));
          v287 = sub_BFB840(*(_QWORD *)(v80 + v320 + 40));
          goto LABEL_498;
        }
      }
    }
    else if ( v286 <= 0x77u )
    {
      v378 = sub_BFB840(*(_QWORD *)(v80 + 16));
      v287 = sub_BFB840(*(_QWORD *)(v80 + 24));
      v288 = (*(_WORD *)(v80 + 2) >> 3) & 0x3F;
LABEL_498:
      v289 = *a1;
      if ( v288 > 0x12 || ((1LL << v288) & 0x701EC) == 0 )
      {
        v290 = 5741;
LABEL_501:
        sub_168B9B0((__int64)&ptr, v289, v290);
        v294 = sub_C00A40(v80, v289, v291, v292, v293);
        sub_1AAB2D0((__int64)a1, v294, (__int64)&ptr);
        if ( ptr && v418 )
          sub_1580C40(v418, (unsigned __int64)ptr);
LABEL_326:
        v231 = 0;
        v232 = 1;
LABEL_327:
        v233 = (void **)v404;
        if ( v404 )
        {
          v234 = v405;
          if ( v405 )
          {
            if ( (unsigned __int64)v404 < v405 || (unsigned __int64)v404 > v405 + 14848 )
            {
              v235 = *((void ***)v404 + 66);
              v236 = &v235[8 * (unsigned __int64)*((unsigned int *)v404 + 134)];
              if ( v235 != v236 )
              {
                do
                {
                  while ( 1 )
                  {
                    v236 -= 8;
                    v237 = (void **)v236[3];
                    if ( v237 == v236 + 5 )
                      break;
                    operator delete(v237);
                    if ( v235 == v236 )
                      goto LABEL_333;
                  }
                }
                while ( v235 != v236 );
LABEL_333:
                v236 = (void **)v233[66];
              }
              if ( v236 != v233 + 68 )
                free(v236);
              v238 = (void **)v233[52];
              if ( v238 != v233 + 54 )
                free(v238);
              v239 = v233 + 48;
              v240 = v233 + 8;
              do
              {
                while ( *v239 != v239 + 2 )
                {
                  operator delete(*v239);
                  v239 -= 4;
                  if ( v240 == v239 )
                    goto LABEL_341;
                }
                v239 -= 4;
              }
              while ( v240 != v239 );
LABEL_341:
              operator delete(v233, 0x3A0u);
            }
            else
            {
              v302 = *(unsigned int *)(v405 + 14976);
              *(_DWORD *)(v405 + 14976) = v302 + 1;
              *(_QWORD *)(v234 + 8 * v302 + 14848) = v233;
            }
          }
        }
        return v232 | (unsigned __int64)(v231 << 32);
      }
      v351 = *a1;
      v411 = v413;
      v414 = v416;
      ptr = v419;
      v412 = 0x2000000000LL;
      v415 = 0x2000000000LL;
      v418 = 0x2000000000LL;
      v352 = sub_168B6C0(v351);
      sub_F1A490(v79, (__int64)&v411, v352, 1, 0);
      v353 = sub_168B6C0(*a1);
      sub_F1A490(v378, (__int64)&v414, v353, 1, 0);
      if ( (unsigned __int8)sub_2222ED0(&v411, &v414) )
      {
        sub_168B9B0((__int64)&v408, *a1, 22956);
        v357 = sub_1AB1B90((__int64)a1, v287, (__int64)&v408, v354, v355, v356);
        v358 = v408;
        v232 = v357;
        if ( v408 )
        {
LABEL_619:
          if ( v409 )
            sub_1580C40(v409, (unsigned __int64)v358);
        }
      }
      else
      {
        v362 = sub_168B6C0(*a1);
        sub_F1A490(v287, (__int64)&ptr, v362, 1, 0);
        if ( !(unsigned __int8)sub_2222ED0(&v411, &ptr) )
        {
          sub_168B9B0((__int64)&v408, *a1, 5738);
          sub_AE9DF0((unsigned __int8 **)&v408, v79, 0xFu);
          sub_AE9DF0((unsigned __int8 **)&v408, v378, 0xFu);
          sub_AE9DF0((unsigned __int8 **)&v408, v287, 0xFu);
          sub_1582CA0((__int64)&v406, (_BYTE **)&v408);
          v369 = sub_C00A40(v80, (__int64)&v408, v366, v367, v368);
          sub_1AAB2D0((__int64)a1, v369, (__int64)&v406);
          if ( v406 && v407 )
            sub_1580C40(v407, v406);
          if ( v408 && v409 )
            sub_1580C40(v409, (unsigned __int64)v408);
          v231 = 0;
          v232 = 1;
          goto LABEL_622;
        }
        sub_168B9B0((__int64)&v408, *a1, 5739);
        sub_1AAB090((unsigned __int8 **)&v408, 0);
        sub_1AAB090((unsigned __int8 **)&v408, 1);
        sub_1582CA0((__int64)&v406, (_BYTE **)&v408);
        v232 = sub_1AB1B90((__int64)a1, v378, (__int64)&v406, v363, v364, v365);
        if ( v406 && v407 )
          sub_1580C40(v407, v406);
        v358 = v408;
        if ( v408 )
          goto LABEL_619;
      }
      v231 = 5;
LABEL_622:
      if ( ptr != v419 )
        free(ptr);
      if ( v414 != v416 )
        free(v414);
      if ( v411 != v413 )
        free(v411);
      goto LABEL_327;
    }
LABEL_538:
    v289 = *a1;
    if ( a3 )
    {
      sub_168B9B0((__int64)&ptr, v289, 5739);
      sub_1AAB090((unsigned __int8 **)&ptr, 1);
      sub_1AAB090((unsigned __int8 **)&ptr, 0);
      sub_1582CA0((__int64)&v414, (_BYTE **)&ptr);
      if ( ptr && v418 )
        sub_1580C40(v418, (unsigned __int64)ptr);
      if ( a3 == 1 )
      {
        sub_1582CA0((__int64)&ptr, (_BYTE **)&v414);
        v232 = sub_1AAFF40((__int64)a1, v80, (__int64)&ptr, v359, v360, v361);
        if ( ptr && v418 )
          sub_1580C40(v418, (unsigned __int64)ptr);
        v231 = 2;
      }
      else
      {
        sub_1582CA0((__int64)&ptr, (_BYTE **)&v414);
        v232 = sub_1AB1B90((__int64)a1, v80, (__int64)&ptr, v317, v318, v319);
        if ( ptr && v418 )
          sub_1580C40(v418, (unsigned __int64)ptr);
        v231 = 3;
      }
      if ( v414 && v415 )
        sub_1580C40(v415, (unsigned __int64)v414);
      goto LABEL_327;
    }
    v290 = 5735;
    goto LABEL_501;
  }
  sub_168B9B0((__int64)&ptr, v82, 5739);
  v95 = (unsigned __int8 *)ptr;
  if ( !ptr )
  {
    v306 = v418;
    v307 = *(_DWORD *)(v418 + 14976);
    if ( v307 )
    {
      v321 = (unsigned int)(v307 - 1);
      *(_DWORD *)(v418 + 14976) = v321;
      v95 = *(unsigned __int8 **)(v306 + 8 * v321 + 14848);
      v322 = *((unsigned int *)v95 + 134);
      *v95 = 0;
      v323 = *((_QWORD *)v95 + 66);
      *((_DWORD *)v95 + 106) = 0;
      v324 = v323 + (v322 << 6);
      while ( v323 != v324 )
      {
        while ( 1 )
        {
          v324 -= 64;
          v325 = *(void **)(v324 + 24);
          if ( v325 == (void *)(v324 + 40) )
            break;
          v379 = v323;
          operator delete(v325);
          v323 = v379;
          if ( v379 == v324 )
            goto LABEL_590;
        }
      }
LABEL_590:
      *((_DWORD *)v95 + 134) = 0;
    }
    else
    {
      v95 = (unsigned __int8 *)operator new(0x3A0u);
      *v95 = 0;
      *((_QWORD *)v95 + 12) = v95 + 112;
      *((_QWORD *)v95 + 16) = v95 + 144;
      *((_QWORD *)v95 + 20) = v95 + 176;
      *((_QWORD *)v95 + 24) = v95 + 208;
      *((_QWORD *)v95 + 28) = v95 + 240;
      *((_QWORD *)v95 + 32) = v95 + 272;
      *((_QWORD *)v95 + 36) = v95 + 304;
      *((_QWORD *)v95 + 40) = v95 + 336;
      *((_QWORD *)v95 + 44) = v95 + 368;
      *((_QWORD *)v95 + 48) = v95 + 400;
      *((_QWORD *)v95 + 52) = v95 + 432;
      *((_QWORD *)v95 + 13) = 0;
      v95[112] = 0;
      *((_QWORD *)v95 + 17) = 0;
      v95[144] = 0;
      *((_QWORD *)v95 + 21) = 0;
      v95[176] = 0;
      *((_QWORD *)v95 + 25) = 0;
      v95[208] = 0;
      *((_QWORD *)v95 + 29) = 0;
      v95[240] = 0;
      *((_QWORD *)v95 + 33) = 0;
      v95[272] = 0;
      *((_QWORD *)v95 + 37) = 0;
      v95[304] = 0;
      *((_QWORD *)v95 + 41) = 0;
      v95[336] = 0;
      *((_QWORD *)v95 + 45) = 0;
      v95[368] = 0;
      *((_QWORD *)v95 + 49) = 0;
      v95[400] = 0;
      *((_QWORD *)v95 + 53) = 0x800000000LL;
      *((_QWORD *)v95 + 66) = v95 + 544;
      *((_QWORD *)v95 + 67) = 0x600000000LL;
    }
    ptr = v95;
  }
  v95[*v95 + 1] = 2;
  v96 = ptr;
  v97 = *(unsigned __int8 *)ptr;
  *(_BYTE *)ptr = v97 + 1;
  v96[v97 + 2] = 0;
  v98 = (unsigned __int8 *)ptr;
  if ( !ptr )
  {
    v304 = v418;
    v305 = *(_DWORD *)(v418 + 14976);
    if ( v305 )
    {
      v331 = (unsigned int)(v305 - 1);
      *(_DWORD *)(v418 + 14976) = v331;
      v98 = *(unsigned __int8 **)(v304 + 8 * v331 + 14848);
      v332 = *((unsigned int *)v98 + 134);
      *v98 = 0;
      v333 = *((_QWORD *)v98 + 66);
      *((_DWORD *)v98 + 106) = 0;
      v334 = v333 + (v332 << 6);
      while ( v333 != v334 )
      {
        while ( 1 )
        {
          v334 -= 64;
          v335 = *(void **)(v334 + 24);
          if ( v335 == (void *)(v334 + 40) )
            break;
          v381 = v333;
          operator delete(v335);
          v333 = v381;
          if ( v381 == v334 )
            goto LABEL_600;
        }
      }
LABEL_600:
      *((_DWORD *)v98 + 134) = 0;
    }
    else
    {
      v98 = (unsigned __int8 *)operator new(0x3A0u);
      *v98 = 0;
      *((_QWORD *)v98 + 12) = v98 + 112;
      *((_QWORD *)v98 + 16) = v98 + 144;
      *((_QWORD *)v98 + 20) = v98 + 176;
      *((_QWORD *)v98 + 24) = v98 + 208;
      *((_QWORD *)v98 + 28) = v98 + 240;
      *((_QWORD *)v98 + 32) = v98 + 272;
      *((_QWORD *)v98 + 36) = v98 + 304;
      *((_QWORD *)v98 + 40) = v98 + 336;
      *((_QWORD *)v98 + 44) = v98 + 368;
      *((_QWORD *)v98 + 48) = v98 + 400;
      *((_QWORD *)v98 + 52) = v98 + 432;
      *((_QWORD *)v98 + 13) = 0;
      v98[112] = 0;
      *((_QWORD *)v98 + 17) = 0;
      v98[144] = 0;
      *((_QWORD *)v98 + 21) = 0;
      v98[176] = 0;
      *((_QWORD *)v98 + 25) = 0;
      v98[208] = 0;
      *((_QWORD *)v98 + 29) = 0;
      v98[240] = 0;
      *((_QWORD *)v98 + 33) = 0;
      v98[272] = 0;
      *((_QWORD *)v98 + 37) = 0;
      v98[304] = 0;
      *((_QWORD *)v98 + 41) = 0;
      v98[336] = 0;
      *((_QWORD *)v98 + 45) = 0;
      v98[368] = 0;
      *((_QWORD *)v98 + 49) = 0;
      v98[400] = 0;
      *((_QWORD *)v98 + 53) = 0x800000000LL;
      *((_QWORD *)v98 + 66) = v98 + 544;
      *((_QWORD *)v98 + 67) = 0x600000000LL;
    }
    ptr = v98;
  }
  v98[*v98 + 1] = 2;
  v99 = ptr;
  v100 = *(unsigned __int8 *)ptr;
  *(_BYTE *)ptr = v100 + 1;
  v99[v100 + 2] = 1;
  sub_1582CA0((__int64)&v408, (_BYTE **)&ptr);
  v101 = (void **)ptr;
  if ( ptr )
  {
    v102 = v418;
    if ( v418 )
    {
      if ( (unsigned __int64)ptr < v418 || (unsigned __int64)ptr > v418 + 14848 )
      {
        v103 = *((void ***)ptr + 66);
        v104 = (unsigned __int64)*((unsigned int *)ptr + 134) << 6;
        v105 = (void **)((char *)v103 + v104);
        if ( v103 != (void **)((char *)v103 + v104) )
        {
          do
          {
            while ( 1 )
            {
              v105 -= 8;
              v106 = (void **)v105[3];
              if ( v106 == v105 + 5 )
                break;
              v370 = v103;
              operator delete(v106);
              v103 = v370;
              if ( v370 == v105 )
                goto LABEL_120;
            }
          }
          while ( v103 != v105 );
LABEL_120:
          v105 = (void **)v101[66];
        }
        if ( v105 != v101 + 68 )
          free(v105);
        v107 = (void **)v101[52];
        if ( v107 != v101 + 54 )
          free(v107);
        v108 = v101 + 48;
        v371 = v101 + 8;
        do
        {
          while ( *v108 != v108 + 2 )
          {
            operator delete(*v108);
            v108 -= 4;
            if ( v371 == v108 )
              goto LABEL_128;
          }
          v108 -= 4;
        }
        while ( v371 != v108 );
LABEL_128:
        operator delete(v101, 0x3A0u);
      }
      else
      {
        v283 = *(unsigned int *)(v418 + 14976);
        *(_DWORD *)(v418 + 14976) = v283 + 1;
        *(_QWORD *)(v102 + 8 * v283 + 14848) = v101;
      }
    }
  }
  sub_168B9B0((__int64)&ptr, *a1, 5739);
  v109 = (unsigned __int8 *)ptr;
  if ( !ptr )
  {
    v310 = v418;
    v311 = *(_DWORD *)(v418 + 14976);
    if ( v311 )
    {
      v336 = (unsigned int)(v311 - 1);
      *(_DWORD *)(v418 + 14976) = v336;
      v109 = *(unsigned __int8 **)(v310 + 8 * v336 + 14848);
      v337 = *((unsigned int *)v109 + 134);
      *v109 = 0;
      v338 = *((_QWORD *)v109 + 66);
      *((_DWORD *)v109 + 106) = 0;
      v339 = v338 + (v337 << 6);
      while ( v338 != v339 )
      {
        while ( 1 )
        {
          v339 -= 64;
          v340 = *(void **)(v339 + 24);
          if ( v340 == (void *)(v339 + 40) )
            break;
          v382 = v338;
          operator delete(v340);
          v338 = v382;
          if ( v382 == v339 )
            goto LABEL_605;
        }
      }
LABEL_605:
      *((_DWORD *)v109 + 134) = 0;
    }
    else
    {
      v109 = (unsigned __int8 *)operator new(0x3A0u);
      *v109 = 0;
      *((_QWORD *)v109 + 12) = v109 + 112;
      *((_QWORD *)v109 + 16) = v109 + 144;
      *((_QWORD *)v109 + 20) = v109 + 176;
      *((_QWORD *)v109 + 24) = v109 + 208;
      *((_QWORD *)v109 + 28) = v109 + 240;
      *((_QWORD *)v109 + 32) = v109 + 272;
      *((_QWORD *)v109 + 36) = v109 + 304;
      *((_QWORD *)v109 + 40) = v109 + 336;
      *((_QWORD *)v109 + 44) = v109 + 368;
      *((_QWORD *)v109 + 48) = v109 + 400;
      *((_QWORD *)v109 + 52) = v109 + 432;
      *((_QWORD *)v109 + 13) = 0;
      v109[112] = 0;
      *((_QWORD *)v109 + 17) = 0;
      v109[144] = 0;
      *((_QWORD *)v109 + 21) = 0;
      v109[176] = 0;
      *((_QWORD *)v109 + 25) = 0;
      v109[208] = 0;
      *((_QWORD *)v109 + 29) = 0;
      v109[240] = 0;
      *((_QWORD *)v109 + 33) = 0;
      v109[272] = 0;
      *((_QWORD *)v109 + 37) = 0;
      v109[304] = 0;
      *((_QWORD *)v109 + 41) = 0;
      v109[336] = 0;
      *((_QWORD *)v109 + 45) = 0;
      v109[368] = 0;
      *((_QWORD *)v109 + 49) = 0;
      v109[400] = 0;
      *((_QWORD *)v109 + 53) = 0x800000000LL;
      *((_QWORD *)v109 + 66) = v109 + 544;
      *((_QWORD *)v109 + 67) = 0x600000000LL;
    }
    ptr = v109;
  }
  v109[*v109 + 1] = 2;
  v110 = ptr;
  v111 = *(unsigned __int8 *)ptr;
  *(_BYTE *)ptr = v111 + 1;
  v110[v111 + 2] = 1;
  v112 = (unsigned __int8 *)ptr;
  if ( !ptr )
  {
    v308 = v418;
    v309 = *(_DWORD *)(v418 + 14976);
    if ( v309 )
    {
      v326 = (unsigned int)(v309 - 1);
      *(_DWORD *)(v418 + 14976) = v326;
      v112 = *(unsigned __int8 **)(v308 + 8 * v326 + 14848);
      v327 = *((unsigned int *)v112 + 134);
      *v112 = 0;
      v328 = *((_QWORD *)v112 + 66);
      *((_DWORD *)v112 + 106) = 0;
      v329 = v328 + (v327 << 6);
      while ( v328 != v329 )
      {
        while ( 1 )
        {
          v329 -= 64;
          v330 = *(void **)(v329 + 24);
          if ( v330 == (void *)(v329 + 40) )
            break;
          v380 = v328;
          operator delete(v330);
          v328 = v380;
          if ( v380 == v329 )
            goto LABEL_595;
        }
      }
LABEL_595:
      *((_DWORD *)v112 + 134) = 0;
    }
    else
    {
      v112 = (unsigned __int8 *)operator new(0x3A0u);
      *v112 = 0;
      *((_QWORD *)v112 + 12) = v112 + 112;
      *((_QWORD *)v112 + 16) = v112 + 144;
      *((_QWORD *)v112 + 20) = v112 + 176;
      *((_QWORD *)v112 + 24) = v112 + 208;
      *((_QWORD *)v112 + 28) = v112 + 240;
      *((_QWORD *)v112 + 32) = v112 + 272;
      *((_QWORD *)v112 + 36) = v112 + 304;
      *((_QWORD *)v112 + 40) = v112 + 336;
      *((_QWORD *)v112 + 44) = v112 + 368;
      *((_QWORD *)v112 + 48) = v112 + 400;
      *((_QWORD *)v112 + 52) = v112 + 432;
      *((_QWORD *)v112 + 13) = 0;
      v112[112] = 0;
      *((_QWORD *)v112 + 17) = 0;
      v112[144] = 0;
      *((_QWORD *)v112 + 21) = 0;
      v112[176] = 0;
      *((_QWORD *)v112 + 25) = 0;
      v112[208] = 0;
      *((_QWORD *)v112 + 29) = 0;
      v112[240] = 0;
      *((_QWORD *)v112 + 33) = 0;
      v112[272] = 0;
      *((_QWORD *)v112 + 37) = 0;
      v112[304] = 0;
      *((_QWORD *)v112 + 41) = 0;
      v112[336] = 0;
      *((_QWORD *)v112 + 45) = 0;
      v112[368] = 0;
      *((_QWORD *)v112 + 49) = 0;
      v112[400] = 0;
      *((_QWORD *)v112 + 53) = 0x800000000LL;
      *((_QWORD *)v112 + 66) = v112 + 544;
      *((_QWORD *)v112 + 67) = 0x600000000LL;
    }
    ptr = v112;
  }
  v112[*v112 + 1] = 2;
  v113 = ptr;
  v114 = *(unsigned __int8 *)ptr;
  *(_BYTE *)ptr = v114 + 1;
  v113[v114 + 2] = 1;
  sub_1582CA0((__int64)&v411, (_BYTE **)&ptr);
  v115 = (void **)ptr;
  if ( ptr )
  {
    v116 = v418;
    if ( v418 )
    {
      if ( (unsigned __int64)ptr < v418 || (unsigned __int64)ptr > v418 + 14848 )
      {
        v117 = *((void ***)ptr + 66);
        v118 = (unsigned __int64)*((unsigned int *)ptr + 134) << 6;
        v119 = (void **)((char *)v117 + v118);
        if ( v117 != (void **)((char *)v117 + v118) )
        {
          do
          {
            while ( 1 )
            {
              v119 -= 8;
              v120 = (void **)v119[3];
              if ( v120 == v119 + 5 )
                break;
              v372 = v117;
              operator delete(v120);
              v117 = v372;
              if ( v372 == v119 )
                goto LABEL_137;
            }
          }
          while ( v117 != v119 );
LABEL_137:
          v119 = (void **)v115[66];
        }
        if ( v119 != v115 + 68 )
          free(v119);
        v121 = (void **)v115[52];
        if ( v121 != v115 + 54 )
          free(v121);
        v122 = v115 + 48;
        v373 = v115 + 8;
        do
        {
          while ( *v122 != v122 + 2 )
          {
            operator delete(*v122);
            v122 -= 4;
            if ( v373 == v122 )
              goto LABEL_145;
          }
          v122 -= 4;
        }
        while ( v122 != v373 );
LABEL_145:
        operator delete(v115, 0x3A0u);
      }
      else
      {
        v285 = *(unsigned int *)(v418 + 14976);
        *(_DWORD *)(v418 + 14976) = v285 + 1;
        *(_QWORD *)(v116 + 8 * v285 + 14848) = v115;
      }
    }
  }
  sub_1582CA0((__int64)&v414, (_BYTE **)&v408);
  v126 = sub_1AAFF40((__int64)a1, v79, (__int64)&v414, v123, v124, v125);
  if ( !v126 )
  {
    sub_1582CA0((__int64)&ptr, (_BYTE **)&v411);
    v249 = sub_1AB1B90((__int64)a1, v80, (__int64)&ptr, v246, v247, v248);
    v250 = (void **)ptr;
    v126 = v249;
    if ( ptr )
    {
      v251 = v418;
      if ( v418 )
      {
        if ( (unsigned __int64)ptr < v418 || (unsigned __int64)ptr > v418 + 14848 )
        {
          v252 = *((void ***)ptr + 66);
          v253 = &v252[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
          if ( v252 != v253 )
          {
            do
            {
              while ( 1 )
              {
                v253 -= 8;
                v254 = (void **)v253[3];
                if ( v254 == v253 + 5 )
                  break;
                operator delete(v254);
                if ( v252 == v253 )
                  goto LABEL_365;
              }
            }
            while ( v252 != v253 );
LABEL_365:
            v253 = (void **)v250[66];
          }
          if ( v253 != v250 + 68 )
            free(v253);
          v255 = (void **)v250[52];
          if ( v255 != v250 + 54 )
            free(v255);
          v256 = v250 + 48;
          v257 = v250 + 8;
          do
          {
            while ( *v256 != v256 + 2 )
            {
              operator delete(*v256);
              v256 -= 4;
              if ( v257 == v256 )
                goto LABEL_373;
            }
            v256 -= 4;
          }
          while ( v257 != v256 );
LABEL_373:
          operator delete(v250, 0x3A0u);
        }
        else
        {
          v312 = *(unsigned int *)(v418 + 14976);
          *(_DWORD *)(v418 + 14976) = v312 + 1;
          *(_QWORD *)(v251 + 8 * v312 + 14848) = v250;
        }
      }
    }
  }
  v127 = (void **)v414;
  if ( v414 )
  {
    v128 = v415;
    if ( v415 )
    {
      if ( (unsigned __int64)v414 < v415 || (unsigned __int64)v414 > v415 + 14848 )
      {
        v129 = *((void ***)v414 + 66);
        v130 = &v129[8 * (unsigned __int64)*((unsigned int *)v414 + 134)];
        if ( v129 != v130 )
        {
          do
          {
            while ( 1 )
            {
              v130 -= 8;
              v131 = (void **)v130[3];
              if ( v131 == v130 + 5 )
                break;
              operator delete(v131);
              if ( v129 == v130 )
                goto LABEL_153;
            }
          }
          while ( v129 != v130 );
LABEL_153:
          v130 = (void **)v127[66];
        }
        if ( v130 != v127 + 68 )
          free(v130);
        v132 = (void **)v127[52];
        if ( v132 != v127 + 54 )
          free(v132);
        v133 = v127 + 48;
        v134 = v127 + 8;
        do
        {
          while ( *v133 != v133 + 2 )
          {
            operator delete(*v133);
            v133 -= 4;
            if ( v134 == v133 )
              goto LABEL_161;
          }
          v133 -= 4;
        }
        while ( v134 != v133 );
LABEL_161:
        operator delete(v127, 0x3A0u);
      }
      else
      {
        v281 = *(unsigned int *)(v415 + 14976);
        *(_DWORD *)(v415 + 14976) = v281 + 1;
        *(_QWORD *)(v128 + 8 * v281 + 14848) = v127;
      }
    }
  }
  v135 = v126;
  v136 = (void **)v411;
  v47 = v135 | 0x400000000LL;
  if ( v411 )
  {
    v137 = v412;
    if ( v412 )
    {
      if ( (unsigned __int64)v411 < v412 || (unsigned __int64)v411 > v412 + 14848 )
      {
        v138 = *((void ***)v411 + 66);
        v139 = &v138[8 * (unsigned __int64)*((unsigned int *)v411 + 134)];
        if ( v138 != v139 )
        {
          do
          {
            while ( 1 )
            {
              v139 -= 8;
              v140 = (void **)v139[3];
              if ( v140 == v139 + 5 )
                break;
              operator delete(v140);
              if ( v138 == v139 )
                goto LABEL_168;
            }
          }
          while ( v138 != v139 );
LABEL_168:
          v139 = (void **)v136[66];
        }
        if ( v139 != v136 + 68 )
          free(v139);
        v141 = (void **)v136[52];
        if ( v141 != v136 + 54 )
          free(v141);
        v142 = v136 + 48;
        v143 = v136 + 8;
        do
        {
          while ( *v142 != v142 + 2 )
          {
            operator delete(*v142);
            v142 -= 4;
            if ( v142 == v143 )
              goto LABEL_176;
          }
          v142 -= 4;
        }
        while ( v142 != v143 );
LABEL_176:
        operator delete(v136, 0x3A0u);
      }
      else
      {
        v284 = *(unsigned int *)(v412 + 14976);
        *(_DWORD *)(v412 + 14976) = v284 + 1;
        *(_QWORD *)(v137 + 8 * v284 + 14848) = v136;
      }
    }
  }
  v144 = (void **)v408;
  if ( v408 )
  {
    v145 = v409;
    if ( v409 )
    {
      if ( (unsigned __int64)v408 < v409 || (unsigned __int64)v408 > v409 + 14848 )
      {
        v146 = *((void ***)v408 + 66);
        v147 = &v146[8 * (unsigned __int64)*((unsigned int *)v408 + 134)];
        if ( v146 != v147 )
        {
          do
          {
            while ( 1 )
            {
              v147 -= 8;
              v148 = (void **)v147[3];
              if ( v148 == v147 + 5 )
                break;
              operator delete(v148);
              if ( v146 == v147 )
                goto LABEL_183;
            }
          }
          while ( v146 != v147 );
LABEL_183:
          v147 = (void **)v144[66];
        }
        if ( v147 != v144 + 68 )
          free(v147);
        v149 = (void **)v144[52];
        if ( v149 != v144 + 54 )
          free(v149);
        v150 = v144 + 48;
        v151 = v144 + 8;
        do
        {
          while ( *v150 != v150 + 2 )
          {
            operator delete(*v150);
            v150 -= 4;
            if ( v151 == v150 )
              goto LABEL_191;
          }
          v150 -= 4;
        }
        while ( v151 != v150 );
LABEL_191:
        operator delete(v144, 0x3A0u);
      }
      else
      {
        v282 = *(unsigned int *)(v409 + 14976);
        *(_DWORD *)(v409 + 14976) = v282 + 1;
        *(_QWORD *)(v145 + 8 * v282 + 14848) = v144;
      }
    }
  }
  return v47;
}
