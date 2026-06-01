/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F12C
// Address: 0x000000000008F12C

//----- (000000000008F12C) ----------------------------------------------------
void __usercall sub_8F12C(__int64 a1@<X0>, unsigned int *a2@<X1>, pthread_mutex_t *a3@<X8>)
{
  pthread_mutex_t *v3; // x20
  char *v4; // x21
  __int64 v5; // x28
  int v7; // w27
  char *v8; // x24
  void *align; // x0
  pthread_mutex_t *v10; // x0
  unsigned __int64 v11; // x21
  unsigned __int64 v12; // x22
  int v13; // w24
  __int64 v14; // x23
  __int64 v15; // x27
  pthread_mutex_t *v16; // x29
  int v17; // w0
  pthread_mutex_t *v18; // x20
  unsigned __int64 v19; // x8
  size_t *v20; // x20
  unsigned __int64 v21; // t1
  size_t v22; // x24
  void **v23; // x25
  bool v24; // zf
  char *v25; // x0
  void *v26; // x1
  void *v27; // x0
  int v28; // w0
  pthread_mutex_t *v29; // x20
  unsigned __int64 v30; // x8
  size_t *p_next; // x20
  unsigned __int64 v32; // t1
  size_t v33; // x24
  bool v34; // zf
  void **v35; // x25
  char *v36; // x0
  void *v37; // x1
  void *v38; // x0
  int v39; // w0
  pthread_mutex_t *v40; // x8
  int v41; // w26
  __int64 v42; // x24
  _QWORD *v43; // x25
  unsigned __int64 v44; // x1
  __int64 v45; // x20
  __int64 v46; // x26
  int v47; // w0
  pthread_mutex_t *v48; // x8
  unsigned int v49; // w0
  unsigned int v50; // w21
  pthread_mutex_t *v51; // x0
  pthread_mutex_t *v52; // x0
  unsigned __int64 v53; // x0
  int v54; // w23
  char v55; // w0
  double v56; // d0
  unsigned int v57; // w21
  char v58; // w22
  unsigned int v59; // w24
  pthread_mutex_t *v60; // x0
  pthread_mutex_t *v61; // x0
  void *v62; // x24
  pthread_mutex_t *v63; // x0
  void *v64; // x0
  unsigned int v65; // w21
  unsigned __int64 v66; // x24
  unsigned int v67; // w23
  unsigned int v68; // w22
  double v69; // d0
  unsigned int v70; // w21
  int v71; // w0
  unsigned int v72; // w21
  _QWORD *v73; // x22
  __int64 v74; // x8
  _QWORD *v75; // x23
  __int64 v76; // x20
  __int64 v77; // x24
  _QWORD *v78; // x25
  void *v79; // x0
  void *v80; // x0
  unsigned int v81; // w21
  unsigned int v82; // w22
  int v83; // w0
  unsigned int v84; // w22
  pthread_mutex_t *v85; // x0
  char *v86; // x8
  char *v87; // x21
  size_t v88; // x0
  __int64 v89; // x1
  unsigned int v90; // w0
  pthread_mutex_t *v91; // x0
  int v92; // w21
  unsigned __int64 v93; // x22
  int v94; // w23
  __int64 v95; // x19
  void *v96; // x24
  unsigned int v97; // w25
  unsigned int v98; // w22
  unsigned int v99; // w23
  int v100; // w0
  __int64 v101; // x8
  int v102; // w21
  __int64 v103; // x24
  int v104; // w9
  char *v105; // x8
  unsigned __int64 v106; // x25
  void *v107; // x1
  unsigned int v108; // w21
  int v109; // w0
  pthread_mutex_t *v110; // x0
  int v111; // w21
  const char *v112; // x22
  unsigned __int8 *v113; // x9
  __int64 v115; // x20
  __int64 v116; // x23
  size_t v117; // x0
  unsigned __int64 v118; // x25
  size_t v119; // x24
  void *v120; // x0
  int v121; // w21
  unsigned __int64 v122; // x22
  unsigned int v123; // w23
  void *v124; // x0
  void *v125; // x1
  void *v126; // x24
  __int64 v127; // x1
  unsigned int v128; // w21
  pthread_mutex_t *v129; // x0
  int v130; // w0
  unsigned int v131; // w21
  pthread_mutex_t *v132; // x0
  char *v133; // x8
  char *v134; // x21
  size_t v135; // x0
  void *v136; // x0
  int v137; // w0
  unsigned int v138; // w21
  pthread_mutex_t *v139; // x0
  unsigned int v140; // w21
  unsigned int v141; // w0
  int v142; // w23
  unsigned int v143; // w22
  double v144; // d0
  pthread_mutex_t *v145; // x0
  pthread_mutex_t *v146; // x0
  unsigned int v147; // w0
  unsigned int v148; // w21
  pthread_mutex_t *v149; // x0
  unsigned int v150; // w21
  unsigned int v151; // w22
  int v152; // w0
  unsigned int v153; // w23
  pthread_mutex_t *v154; // x0
  int v155; // w0
  int v156; // w21
  int v157; // w22
  pthread_mutex_t *v158; // x0
  pthread_mutex_t *v159; // x0
  __int64 v160; // x19
  __int64 k; // x20
  int v162; // w0
  void *v163; // x8
  void *v164; // x0
  void *v165; // x10
  __int64 v166; // x9
  void *v167; // x8
  void *v168; // x0
  unsigned int v169; // w21
  pthread_mutex_t *v170; // x0
  char *v171; // x22
  unsigned __int64 v173; // x0
  char *v174; // x22
  const char *v175; // x21
  unsigned __int8 *v176; // x9
  int v178; // w0
  unsigned int v179; // w21
  pthread_mutex_t *v180; // x0
  char *v181; // x8
  char *v182; // x21
  size_t v183; // x0
  unsigned int v184; // w0
  int v185; // w21
  unsigned __int64 v186; // x22
  unsigned int v187; // w23
  unsigned __int8 *v188; // x0
  void *v189; // x1
  unsigned __int8 *v190; // x21
  unsigned __int64 v191; // x25
  __int64 v192; // x0
  double v193; // d0
  int v194; // w8
  __int64 v195; // x22
  char *v196; // x8
  unsigned __int64 v198; // x22
  unsigned int v199; // w23
  __int64 v200; // x0
  unsigned __int8 *v201; // x21
  unsigned __int64 v202; // x25
  __int64 v203; // x0
  double v204; // d0
  int v205; // w8
  signed __int64 v206; // x22
  unsigned int v207; // w21
  unsigned __int64 v208; // x0
  int v209; // w22
  unsigned int v210; // w23
  pthread_mutex_t *v211; // x0
  double v212; // d0
  char *v213; // x8
  char *v214; // x24
  size_t v215; // x0
  unsigned int v216; // w21
  __int64 v217; // x19
  _QWORD *v218; // x19
  FILE *v219; // x22
  FILE *v220; // t1
  int v221; // w0
  char *v222; // x8
  unsigned __int64 v224; // x0
  int v225; // w23
  int v226; // w0
  double v227; // d0
  int v228; // w21
  int v229; // w22
  pthread_mutex_t *v230; // x0
  pthread_mutex_t *v231; // x0
  __int64 v232; // x19
  __int64 ii; // x20
  char *v234; // x20
  void *v235; // x21
  __int64 v236; // x22
  unsigned __int64 jj; // x23
  char *v238; // x19
  void *v239; // x0
  unsigned __int64 v240; // x23
  char v241; // w21
  pthread_mutex_t *v242; // x2
  __int64 v243; // x22
  pthread_mutex_t *v244; // x0
  void *v245; // x0
  void *v246; // x8
  unsigned __int8 *v247; // x23
  unsigned __int8 *v249; // x8
  char v251; // w0
  const char *v252; // x19
  char v253; // w24
  unsigned __int8 *v254; // x8
  unsigned int v256; // w0
  pthread_mutex_t *v257; // x0
  int v258; // w22
  signed int v259; // w23
  FILE *v260; // x0
  int v261; // w1
  char *v262; // x8
  int v263; // w9
  __int64 v264; // x23
  __int64 v265; // x23
  double v266; // d0
  double v267; // d1
  pthread_mutex_t *v268; // x0
  const char *v269; // x22
  unsigned __int8 *v270; // x9
  __int64 v272; // x20
  __int64 v273; // x23
  size_t v274; // x0
  unsigned __int64 v275; // x25
  size_t v276; // x24
  void *v277; // x0
  int v278; // w0
  unsigned int v279; // w22
  pthread_mutex_t *v280; // x0
  pthread_mutex_t *v281; // x0
  int v282; // w20
  int v283; // t1
  __int64 v284; // x0
  unsigned int v285; // w21
  int v286; // w12
  int v287; // w24
  unsigned __int64 v288; // x9
  unsigned __int64 v289; // x28
  void *v290; // x8
  char *v291; // x0
  pthread_mutex_t *v292; // x29
  unsigned __int8 *v293; // x10
  char *v295; // x19
  unsigned __int64 *v296; // x19
  __int64 v297; // t1
  size_t v298; // x26
  void *v299; // x1
  __int64 v300; // x9
  __int64 v301; // x20
  unsigned __int64 v302; // x25
  unsigned int v303; // w27
  const char *v304; // x3
  const char *v305; // x4
  const char *v306; // x5
  unsigned int v307; // w24
  char *v308; // x8
  char *v309; // x22
  size_t v310; // x2
  char *v311; // x20
  void *v312; // x21
  __int64 v313; // x22
  unsigned __int64 i; // x23
  char *v315; // x19
  void *v316; // x0
  char *v317; // x8
  char *v318; // x21
  size_t v319; // x2
  pthread_mutex_t *v320; // x0
  char *v321; // x8
  char *v322; // x22
  size_t v323; // x0
  pthread_mutex_t *v324; // x0
  char *v325; // x8
  char *v326; // x21
  size_t v327; // x2
  char *v328; // x8
  char *v329; // x21
  size_t v330; // x2
  pthread_mutex_t *v331; // x0
  pthread_mutex_t *v332; // x0
  const char *v333; // x0
  unsigned __int64 v334; // x24
  unsigned int v335; // w25
  pthread_mutex_t *v336; // x0
  const char *v337; // x22
  char *v338; // x20
  void *v339; // x21
  __int64 v340; // x22
  unsigned __int64 j; // x23
  char *v342; // x19
  void *v343; // x0
  pthread_mutex_t *v344; // x0
  pthread_mutex_t *v345; // x0
  unsigned int *v346; // x0
  pthread_mutex_t *v347; // x0
  __int64 v348; // x19
  FILE **v349; // x19
  FILE *v350; // t1
  int v351; // w25
  pthread_mutex_t *v352; // x0
  pthread_mutex_t *v353; // x0
  unsigned int *v354; // x0
  pthread_mutex_t *v355; // x0
  char *v356; // x8
  char *v357; // x22
  size_t v358; // x2
  char *v359; // x21
  size_t v360; // x0
  char *v361; // x20
  unsigned __int64 v362; // x21
  __int64 v363; // x22
  unsigned __int64 m; // x23
  char *v365; // x19
  void *v366; // x0
  struct __pthread_internal_list *prev; // x20
  struct __pthread_internal_list *next; // x21
  __int64 v369; // x22
  unsigned __int64 n; // x23
  struct __pthread_internal_list *v371; // x19
  struct __pthread_internal_list *v372; // x0
  char *v373; // x8
  char *v374; // x21
  size_t v375; // x2
  char *v376; // x20
  __int64 v377; // x21
  char *kk; // x22
  char *v379; // x23
  void *v380; // x0
  void *v381; // x0
  void *v382; // x0
  char *v383; // x19
  void *v384; // x1
  int v385; // w0
  pthread_mutex_t *v386; // x0
  char *v387; // x8
  char *v388; // x21
  size_t v389; // x0
  size_t v390; // x0
  __int64 v391; // x24
  unsigned __int64 v392; // x20
  __int64 v393; // x26
  unsigned __int64 v394; // x27
  const char *v395; // x25
  bool v396; // cf
  char *v397; // x0
  unsigned __int64 v398; // x20
  __int64 v399; // x24
  unsigned __int64 v400; // x25
  void *v401; // x8
  char *v402; // x19
  pthread_mutex_t *v403; // x0
  pthread_mutex_t *v404; // x0
  pthread_mutex_t *v405; // x0
  unsigned int *v406; // x0
  pthread_mutex_t *v407; // x0
  char *v408; // x0
  void *v409; // x20
  __int64 v410; // x21
  unsigned __int64 v411; // x22
  void *v412; // x8
  char *v413; // x19
  char v414; // [xsp+24h] [xbp-30FCh]
  const char *v415; // [xsp+28h] [xbp-30F8h]
  int v416; // [xsp+34h] [xbp-30ECh]
  __int64 v417; // [xsp+40h] [xbp-30E0h]
  int v418; // [xsp+48h] [xbp-30D8h]
  int v419; // [xsp+48h] [xbp-30D8h]
  int v420; // [xsp+48h] [xbp-30D8h]
  int v421; // [xsp+4Ch] [xbp-30D4h]
  pthread_mutex_t *v422; // [xsp+50h] [xbp-30D0h]
  pthread_mutex_t *v423; // [xsp+50h] [xbp-30D0h]
  pthread_mutex_t *v424; // [xsp+50h] [xbp-30D0h]
  pthread_mutex_t *v425; // [xsp+50h] [xbp-30D0h]
  pthread_mutex_t *v426; // [xsp+50h] [xbp-30D0h]
  int v427[2]; // [xsp+50h] [xbp-30D0h]
  int v428[2]; // [xsp+50h] [xbp-30D0h]
  void *v429; // [xsp+60h] [xbp-30C0h] BYREF
  __int64 v430; // [xsp+68h] [xbp-30B8h]
  __int64 v431; // [xsp+70h] [xbp-30B0h]
  void *src; // [xsp+78h] [xbp-30A8h] BYREF
  unsigned __int8 *v433; // [xsp+80h] [xbp-30A0h]
  pthread_mutex_t v434; // [xsp+88h] [xbp-3098h] BYREF
  __int64 v435; // [xsp+B0h] [xbp-3070h]
  void *dest[2]; // [xsp+10A0h] [xbp-2080h] BYREF
  __int128 v437; // [xsp+10B0h] [xbp-2070h]
  void *v438[2]; // [xsp+10C0h] [xbp-2060h]
  __int64 v439; // [xsp+10D0h] [xbp-2050h]
  void *v440[2]; // [xsp+20A0h] [xbp-1080h] BYREF
  void *v441[7]; // [xsp+20B0h] [xbp-1070h] BYREF
  int v442; // [xsp+20E8h] [xbp-1038h]
  pthread_mutex_t v443; // [xsp+30ACh] [xbp-74h] BYREF
  int8x16x2_t v444; // 0:q0.32

  _ReadStatusReg(TPIDR_EL0);
  v3 = a3;
  v4 = (char *)a2 + 5;
  v5 = a1;
  v7 = *(unsigned __int8 *)(a1 + 289);
  *(_BYTE *)(a1 + 289) = 0;
  v8 = (char *)a2 + *a2 + 5;
  src = (char *)a2 + 5;
  v433 = (unsigned __int8 *)v8;
  sub_A640C(0, a3);
  switch ( *((_BYTE *)a2 + 4) )
  {
    case 5:
      align = (void *)v3->__align;
      if ( !v3->__align )
        goto LABEL_535;
      *(&v3->__align + 1) = 0;
      qfree(align);
      v3->__align = 0;
      *(&v3->__align + 2) = 0;
      if ( v7 )
        goto LABEL_536;
      return;
    case 0xA:
      v423 = v3;
      *(_QWORD *)(*(_QWORD *)(v5 + 440) + 672LL) = unpack_dq((unsigned __int64 *)&src, (unsigned __int64)v8);
      v111 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
      if ( v111 )
        *(_BYTE *)(v5 + 184) = 1;
      v112 = (const char *)src;
      v113 = (unsigned __int8 *)src;
      while ( v113 < v433 )
      {
        if ( !*v113++ )
        {
          src = v113;
          v115 = *(_QWORD *)(v5 + 440);
          v116 = v115 + 680;
          if ( v112 )
          {
            v117 = strlen(v112);
            if ( v117 )
            {
              v118 = v117 + 1;
              v119 = v117;
              if ( *(_QWORD *)(v115 + 696) >= v117 + 1 )
              {
                v120 = *(void **)v116;
              }
              else
              {
                v120 = qvector_reserve((pthread_mutex_t *)(v115 + 680), *(void **)v116, v118, 1u);
                *(_QWORD *)v116 = v120;
              }
              *(_QWORD *)(v115 + 688) = v118;
              memmove(v120, v112, v119);
              *(_BYTE *)(*(_QWORD *)(v115 + 680) + v119) = 0;
              goto LABEL_288;
            }
          }
LABEL_287:
          *(_QWORD *)(v116 + 8) = 0;
LABEL_288:
          v269 = (const char *)src;
          v270 = (unsigned __int8 *)src;
          while ( v270 < v433 )
          {
            if ( !*v270++ )
            {
              src = v270;
              v272 = *(_QWORD *)(v5 + 440);
              v273 = v272 + 704;
              if ( v269 )
              {
                v274 = strlen(v269);
                if ( v274 )
                {
                  v275 = v274 + 1;
                  v276 = v274;
                  if ( *(_QWORD *)(v272 + 720) >= v274 + 1 )
                  {
                    v277 = *(void **)v273;
                  }
                  else
                  {
                    v277 = qvector_reserve((pthread_mutex_t *)(v272 + 704), *(void **)v273, v275, 1u);
                    *(_QWORD *)v273 = v277;
                  }
                  *(_QWORD *)(v272 + 712) = v275;
                  memmove(v277, v269, v276);
                  *(_BYTE *)(*(_QWORD *)(v272 + 704) + v276) = 0;
LABEL_297:
                  *(_DWORD *)(*(_QWORD *)(v5 + 440) + 728LL) = unpack_dd(
                                                                 (unsigned __int64 *)&src,
                                                                 (unsigned __int64)v433);
                  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(v5 + 440) + 96LL))(
                    *(_QWORD *)(v5 + 440),
                    v111 != 0);
                  v440[1] = nullptr;
                  v440[0] = nullptr;
                  v441[0] = nullptr;
                  dest[0] = nullptr;
                  v278 = (*(__int64 (__fastcall **)(_QWORD, void **, void **))(**(_QWORD **)(v5 + 440) + 104LL))(
                           *(_QWORD *)(v5 + 440),
                           dest,
                           v440);
                  v279 = v278;
                  if ( *(_BYTE *)(v5 + 184) )
                    sub_39FA0(
                      (__int64)"init(debug_debugger=%d) => %d (add_debugger_flags=0x%llX)\n",
                      v111 != 0,
                      v278,
                      dest[0]);
                  v280 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v279);
                  sub_545E8(v423, &v434, (char *)v280 - (char *)&v434);
                  v281 = pack_dq(&v443, (unsigned __int64)&v443.__align + 10, (unsigned __int64)dest[0]);
                  sub_545E8(v423, &v443, (char *)v281 - (char *)&v443);
                  if ( v279 == 1 )
                  {
                    if ( *(_BYTE *)(v5 + 184) )
                      sub_39FA0((__int64)"init() => idaregs.nregs %zu\n", *(_QWORD *)(*(_QWORD *)(v5 + 440) + 552LL));
                    j_serialize_dynamic_register_set(v423, *(_QWORD *)(v5 + 440) + 544LL);
                  }
                  else
                  {
                    if ( v440[1] )
                      v328 = (char *)v440[0];
                    else
                      v328 = &byte_F154B;
                    if ( v328 )
                      v329 = v328;
                    else
                      v329 = "";
                    v330 = strlen(v329) + 1;
                    sub_545E8(v423, v329, v330);
                  }
                  v64 = v440[0];
                  if ( !v440[0] )
                    goto LABEL_535;
                  goto LABEL_533;
                }
              }
LABEL_296:
              *(_QWORD *)(v273 + 8) = 0;
              goto LABEL_297;
            }
          }
          v273 = *(_QWORD *)(v5 + 440) + 704LL;
          goto LABEL_296;
        }
      }
      v116 = *(_QWORD *)(v5 + 440) + 680LL;
      goto LABEL_287;
    case 0xB:
      goto LABEL_535;
    case 0xC:
      v440[1] = nullptr;
      v440[0] = nullptr;
      v441[0] = nullptr;
      *(_QWORD *)&v437 = 0;
      dest[1] = nullptr;
      dest[0] = nullptr;
      v169 = (*(__int64 (__fastcall **)(_QWORD, void **, void **))(**(_QWORD **)(v5 + 440) + 72LL))(
               *(_QWORD *)(v5 + 440),
               v440,
               dest);
      v170 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v169);
      sub_545E8(v3, &v434, (char *)v170 - (char *)&v434);
      if ( v169 == 1 )
      {
        sub_9F09C(v3, v440);
      }
      else
      {
        if ( dest[1] )
          v308 = (char *)dest[0];
        else
          v308 = &byte_F154B;
        if ( v308 )
          v309 = v308;
        else
          v309 = "";
        v310 = strlen(v309) + 1;
        sub_545E8(v3, v309, v310);
      }
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"get_processes() => %d\n", v169);
      if ( dest[0] )
      {
        dest[1] = nullptr;
        qfree(dest[0]);
        dest[0] = nullptr;
        *(_QWORD *)&v437 = 0;
      }
      v311 = (char *)v440[0];
      if ( !v440[0] )
        goto LABEL_535;
      v312 = v440[1];
      if ( v440[1] )
      {
        v313 = 0;
        for ( i = 1; ; ++i )
        {
          v315 = &v311[v313];
          v316 = *(void **)&v311[v313 + 8];
          if ( v316 )
          {
            *((_QWORD *)v315 + 2) = 0;
            qfree(v316);
            *((_QWORD *)v315 + 1) = 0;
            *(_QWORD *)&v311[v313 + 24] = 0;
          }
          if ( i >= (unsigned __int64)v312 )
            break;
          v311 = (char *)v440[0];
          v313 += 32;
        }
        v311 = (char *)v440[0];
      }
      v440[1] = nullptr;
      qfree(v311);
      goto LABEL_534;
    case 0xD:
      v171 = v4;
      while ( v171 < v8 )
      {
        if ( !*v171++ )
        {
          src = v171;
          goto LABEL_257;
        }
      }
      v171 = v4;
      v4 = nullptr;
LABEL_257:
      v247 = (unsigned __int8 *)v171;
      while ( v247 < (unsigned __int8 *)v8 )
      {
        if ( !*v247++ )
        {
          src = v247;
          goto LABEL_262;
        }
      }
      v247 = (unsigned __int8 *)v171;
      v171 = nullptr;
LABEL_262:
      v249 = v247;
      while ( v249 < (unsigned __int8 *)v8 )
      {
        if ( !*v249++ )
        {
          src = v249;
          goto LABEL_267;
        }
      }
      v247 = nullptr;
LABEL_267:
      v417 = v5;
      v419 = v7;
      v251 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v8);
      v252 = (const char *)src;
      v253 = v251;
      v254 = (unsigned __int8 *)src;
      while ( v254 < v433 )
      {
        if ( !*v254++ )
        {
          src = v254;
          goto LABEL_278;
        }
      }
      v252 = nullptr;
LABEL_278:
      v416 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
      v262 = (char *)src;
      dest[1] = nullptr;
      dest[0] = nullptr;
      *(_QWORD *)&v437 = 0;
      v440[1] = nullptr;
      v440[0] = nullptr;
      v441[0] = nullptr;
      LOBYTE(v441[1]) = 1;
      v414 = v253;
      if ( src >= v433 )
      {
        v263 = 0;
      }
      else
      {
        v262 = (char *)src + 1;
        v263 = *(unsigned __int8 *)src;
      }
      src = v262;
      v415 = v252;
      LOBYTE(v441[1]) = v263 != 0;
      v286 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
      if ( v286 >= 1 )
      {
        v287 = 0;
        v421 = v286;
        *(_QWORD *)v427 = v3;
        do
        {
          v289 = (unsigned __int64)src;
          v288 = (unsigned __int64)v433;
          if ( src >= v433 )
            break;
          v290 = v440[1];
          if ( v441[0] >= (char *)v440[1] + 1 )
          {
            v291 = (char *)v440[0];
          }
          else
          {
            v291 = (char *)qvector_reserve((pthread_mutex_t *)v440, v440[0], (unsigned __int64)v440[1] + 1, 0x18u);
            v289 = (unsigned __int64)src;
            v288 = (unsigned __int64)v433;
            v290 = v440[1];
            v3 = *(pthread_mutex_t **)v427;
            v286 = v421;
            v440[0] = v291;
          }
          v292 = (pthread_mutex_t *)&v291[24 * (_QWORD)v290];
          *(&v292->__align + 1) = 0;
          *(&v292->__align + 2) = 0;
          v292->__align = 0;
          ++v440[1];
          v293 = (unsigned __int8 *)v289;
          while ( (unsigned __int64)v293 < v288 )
          {
            if ( !*v293++ )
            {
              src = v293;
              if ( v289 )
              {
                v295 = &v291[24 * (_QWORD)v290];
                v297 = *((_QWORD *)v295 + 1);
                v296 = (unsigned __int64 *)(v295 + 8);
                v298 = (size_t)&v293[~v289];
                v299 = (void *)v292->__align;
                v300 = v297 - 1;
                if ( v297 )
                  v301 = v300;
                else
                  v301 = 0;
                v302 = v301 + v298 + 1;
                if ( v296[1] < v302 )
                {
                  v299 = qvector_reserve(v292, v299, v301 + v298 + 1, 1u);
                  v292->__align = (__int64)v299;
                }
                *v296 = v302;
                *((_BYTE *)v299 + v301 + v298) = 0;
                memmove((void *)(v292->__align + v301), (const void *)v289, v298);
                v3 = *(pthread_mutex_t **)v427;
                v286 = v421;
              }
              break;
            }
          }
          ++v287;
        }
        while ( v287 < v286 );
      }
      v303 = -3;
      if ( v4 )
      {
        v5 = v417;
        if ( v247 )
        {
          if ( v415 )
          {
            v303 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v417 + 440) + 128LL))(*(_QWORD *)(v417 + 440));
            if ( *(_BYTE *)(v417 + 184) )
            {
              if ( (v414 & 1) != 0 )
                v304 = " is_dll";
              else
                v304 = "";
              if ( (v414 & 2) != 0 )
                v305 = " under_gui";
              else
                v305 = "";
              if ( (v414 & 0x20) != 0 )
                v306 = " hide_window";
              else
                v306 = "";
              sub_39FA0(
                (__int64)"start_process(path=%s args=%s flags=%s%s%s\n"
                         "              sdir=%s\n"
                         "              input=%s crc32=%x) => %d\n",
                v4,
                v171,
                v304,
                v305,
                v306,
                (const char *)v247,
                v415,
                v416,
                v303);
            }
          }
        }
      }
      else
      {
        v5 = v417;
      }
      sub_8EF9C(v5, v3, v303, (__int64)dest);
      v408 = (char *)v440[0];
      v7 = v419;
      if ( v440[0] )
      {
        v409 = v440[1];
        if ( v440[1] )
        {
          v410 = 0;
          v411 = 1;
          v412 = *(void **)v440[0];
          if ( *(_QWORD *)v440[0] )
            goto LABEL_583;
          while ( v411 < (unsigned __int64)v409 )
          {
            v408 = (char *)v440[0];
            ++v411;
            v410 += 24;
            v412 = *(void **)((char *)v440[0] + v410);
            if ( v412 )
            {
LABEL_583:
              v413 = &v408[v410];
              *(_QWORD *)&v408[v410 + 8] = 0;
              qfree(v412);
              *(_QWORD *)v413 = 0;
              *((_QWORD *)v413 + 2) = 0;
            }
          }
          v408 = (char *)v440[0];
        }
        v440[1] = nullptr;
        qfree(v408);
        v440[0] = nullptr;
        v441[0] = nullptr;
      }
      if ( !dest[0] )
        goto LABEL_535;
      dest[1] = nullptr;
      qfree(dest[0]);
LABEL_589:
      dest[0] = nullptr;
      *(_QWORD *)&v437 = 0;
      if ( !v7 )
        return;
      goto LABEL_536;
    case 0xE:
      v441[0] = nullptr;
      v440[1] = nullptr;
      v440[0] = nullptr;
      v130 = (*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(v5 + 440) + 160LL))(*(_QWORD *)(v5 + 440), v440);
      v131 = v130;
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"exit_process() => %d\n", v130);
      v132 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v131);
      sub_545E8(v3, &v434, (char *)v132 - (char *)&v434);
      if ( (v131 & 0x80000000) != 0 )
      {
        if ( v440[1] )
          v133 = (char *)v440[0];
        else
          v133 = &byte_F154B;
        if ( v133 )
          v134 = v133;
        else
          v134 = "";
        v135 = strlen(v134);
        sub_545E8(v3, v134, v135 + 1);
      }
      v136 = v440[0];
      if ( v440[0] )
        goto LABEL_140;
      goto LABEL_535;
    case 0xF:
      v440[1] = nullptr;
      v440[0] = nullptr;
      v441[0] = nullptr;
      v147 = sub_8EEDC(v5, (__int64)v440, (unsigned __int64 *)&src);
      sub_8EF9C(v5, v3, v147, (__int64)v440);
      v64 = v440[0];
      if ( v440[0] )
        goto LABEL_533;
      goto LABEL_535;
    case 0x10:
      v148 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 440) + 120LL))(*(_QWORD *)(v5 + 440));
      v149 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v148);
      sub_545E8(v3, &v434, (char *)v149 - (char *)&v434);
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"detach_process() => %d\n", v148);
      goto LABEL_535;
    case 0x11:
      v184 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v8);
      if ( *(_BYTE *)(v5 + 288) )
        v185 = 0;
      else
        v185 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v5 + 440) + 136LL))(
                 *(_QWORD *)(v5 + 440),
                 v5 + 296,
                 v184);
      v332 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, (unsigned int)v185);
      sub_545E8(v3, &v434, (char *)v332 - (char *)&v434);
      if ( v185 >= 1 )
      {
        sub_9F8B4(v3, (unsigned int *)(v5 + 296));
        if ( *(_BYTE *)(v5 + 184) )
        {
          v333 = (const char *)sub_9A0E4(v5 + 296, (pthread_mutex_t *)v440, 1024);
          sub_39FA0((__int64)"got event: %s\n", v333);
        }
        goto LABEL_535;
      }
      if ( !v7 && *(_BYTE *)(v5 + 288) )
        return;
      goto LABEL_536;
    case 0x12:
      v441[0] = nullptr;
      v440[1] = nullptr;
      v440[0] = nullptr;
      v178 = (*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(v5 + 440) + 152LL))(*(_QWORD *)(v5 + 440), v440);
      v179 = v178;
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"prepare_to_pause_process() => %d\n", v178);
      v180 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v179);
      sub_545E8(v3, &v434, (char *)v180 - (char *)&v434);
      if ( (v179 & 0x80000000) != 0 )
      {
        if ( v440[1] )
          v181 = (char *)v440[0];
        else
          v181 = &byte_F154B;
        if ( v181 )
          v182 = v181;
        else
          v182 = "";
        v183 = strlen(v182);
        sub_545E8(v3, v182, v183 + 1);
      }
      v136 = v440[0];
      if ( !v440[0] )
        goto LABEL_535;
LABEL_140:
      v440[1] = nullptr;
      qfree(v136);
      goto LABEL_534;
    case 0x13:
      if ( v8 > v4 )
        ++v4;
      v426 = v3;
      src = v4;
      if ( v4 >= v8 )
      {
        v282 = 0;
      }
      else
      {
        v283 = (unsigned __int8)*v4++;
        v282 = v283;
      }
      src = v4;
      v440[1] = nullptr;
      v440[0] = nullptr;
      v441[0] = nullptr;
      dest[1] = nullptr;
      dest[0] = nullptr;
      *(_QWORD *)&v437 = 0;
      (*(void (**)(void))(**(_QWORD **)(v5 + 440) + 192LL))();
      sub_92C40(v5, (__int64)v440);
      v284 = sub_9A3E8(*(_QWORD *)(v5 + 440));
      if ( v284 )
      {
        v285 = sub_92E50(v5, *(__int64 **)v284, *(char ***)(v284 + 24), *(_DWORD *)(v284 + 8));
        sub_99ED8(*(_QWORD **)(v5 + 440));
      }
      else
      {
        v285 = 0;
      }
      if ( v282 )
      {
        v336 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, LODWORD(dest[1]));
        sub_545E8(v426, &v434, (char *)v336 - (char *)&v434);
      }
      if ( *(_BYTE *)(v5 + 184) )
      {
        if ( v285 > 0x38 || ((0x20000000003C0uLL >> v285) & 1) != 0 )
        {
          v337 = (const char *)qword_166BE8;
          qsnprintf((pthread_mutex_t *)qword_166BE8, 16, "RPC_%d", v285);
        }
        else
        {
          v337 = off_15E070[v285];
        }
        sub_39FA0((__int64)"stopped_at_debug_event => %s\n", v337);
      }
      v338 = (char *)dest[0];
      if ( dest[0] )
      {
        v339 = dest[1];
        if ( dest[1] )
        {
          v340 = 0;
          for ( j = 1; ; ++j )
          {
            v342 = &v338[v340];
            v343 = *(void **)&v338[v340 + 8];
            if ( v343 )
            {
              *((_QWORD *)v342 + 2) = 0;
              qfree(v343);
              *((_QWORD *)v342 + 1) = 0;
              *(_QWORD *)&v338[v340 + 24] = 0;
            }
            if ( j >= (unsigned __int64)v339 )
              break;
            v338 = (char *)dest[0];
            v340 += 32;
          }
          v338 = (char *)dest[0];
        }
        dest[1] = nullptr;
        qfree(v338);
        dest[0] = nullptr;
        *(_QWORD *)&v437 = 0;
      }
      if ( !v440[0] )
        goto LABEL_535;
      sub_9861C((__int64 *)v440, 0);
      qfree(v440[0]);
      goto LABEL_534;
    case 0x14:
      sub_9F6A0(v5 + 296, (unsigned __int64 *)&src);
      v137 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v5 + 440) + 168LL))(
               *(_QWORD *)(v5 + 440),
               v5 + 296);
      v138 = v137;
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"continue_after_event(...) => %d\n", v137);
      v139 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v138);
      sub_545E8(v3, &v434, (char *)v139 - (char *)&v434);
      goto LABEL_535;
    case 0x15:
      v108 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v8);
      v109 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 440) + 200LL))(*(_QWORD *)(v5 + 440), v108);
      v68 = v109;
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"thread_suspend(tid=%d) => %d\n", v108, v109);
      goto LABEL_110;
    case 0x16:
      v70 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v8);
      v71 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 440) + 208LL))(*(_QWORD *)(v5 + 440), v70);
      v68 = v71;
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"thread_continue(tid=%d) => %d\n", v70, v71);
      goto LABEL_110;
    case 0x17:
      v150 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v8);
      v151 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
      v152 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v5 + 440) + 216LL))(
               *(_QWORD *)(v5 + 440),
               v150,
               v151);
      v153 = v152;
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"set_resume_mode(tid=%d, resmod=%d) => %d\n", v150, v151, v152);
      v154 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v153);
      sub_545E8(v3, &v434, (char *)v154 - (char *)&v434);
      goto LABEL_535;
    case 0x18:
      v440[1] = nullptr;
      v440[0] = nullptr;
      v441[0] = nullptr;
      *(_QWORD *)&v437 = 0;
      dest[1] = nullptr;
      dest[0] = nullptr;
      v424 = v3;
      v155 = (*(__int64 (__fastcall **)(_QWORD, void **, void **))(**(_QWORD **)(v5 + 440) + 256LL))(
               *(_QWORD *)(v5 + 440),
               v440,
               dest);
      v156 = (int)v440[1];
      v157 = v155;
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"get_memory_info() => %d (qty=%d)\n", v155, LODWORD(v440[1]));
      v158 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, (unsigned int)(v157 + 4));
      sub_545E8(v3, &v434, (char *)v158 - (char *)&v434);
      if ( v157 == 1 )
      {
        v159 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, (unsigned int)v156);
        sub_545E8(v3, &v434, (char *)v159 - (char *)&v434);
        if ( v156 >= 1 )
        {
          v160 = 0;
          for ( k = 0; k < v156; ++k )
          {
            sub_9EBF0(v424, (__int64)v440[0] + v160);
            v160 += 80;
          }
        }
      }
      else
      {
        if ( dest[1] )
          v317 = (char *)dest[0];
        else
          v317 = &byte_F154B;
        if ( v317 )
          v318 = v317;
        else
          v318 = "";
        v319 = strlen(v318) + 1;
        sub_545E8(v3, v318, v319);
      }
      if ( dest[0] )
      {
        dest[1] = nullptr;
        qfree(dest[0]);
        dest[0] = nullptr;
        *(_QWORD *)&v437 = 0;
      }
      if ( !v440[0] )
        goto LABEL_535;
      sub_3967C((__int64 *)v440, 0);
      qfree(v440[0]);
      goto LABEL_534;
    case 0x19:
      v198 = unpack_dq((unsigned __int64 *)&src, (unsigned __int64)v8);
      v199 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
      v200 = operator new[](v199);
      v441[0] = nullptr;
      v440[1] = nullptr;
      v440[0] = nullptr;
      v201 = (unsigned __int8 *)v200;
      v202 = v198 - 1;
      v203 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, _QWORD, void **))(**(_QWORD **)(v5 + 440)
                                                                                           + 288LL))(
               *(_QWORD *)(v5 + 440),
               v198 - 1,
               v200,
               v199,
               v440);
      v205 = *(unsigned __int8 *)(v5 + 184);
      v206 = v203;
      if ( *(_BYTE *)(v5 + 184) )
      {
        sub_39FA0((__int64)"read_memory(ea=%a size=%zu) => %zd", v204, v202, v199);
        v205 = *(unsigned __int8 *)(v5 + 184);
      }
      if ( v199 == 1 && v206 >= 1 )
      {
        if ( v205 )
          sub_39FA0((__int64)" (0x%02X)\n", *v201);
      }
      else if ( v205 )
      {
        sub_39FA0((__int64)"\n");
      }
      v324 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, (unsigned int)v206);
      sub_545E8(v3, &v434, (char *)v324 - (char *)&v434);
      if ( v206 < 1 )
      {
        if ( v440[1] )
          v356 = (char *)v440[0];
        else
          v356 = &byte_F154B;
        if ( v356 )
          v357 = v356;
        else
          v357 = "";
        v358 = strlen(v357) + 1;
        sub_545E8(v3, v357, v358);
      }
      else
      {
        sub_545E8(v3, v201, v206);
      }
      operator delete[](v201);
      v64 = v440[0];
      if ( v440[0] )
        goto LABEL_533;
      goto LABEL_535;
    case 0x1A:
      v186 = unpack_dq((unsigned __int64 *)&src, (unsigned __int64)v8);
      v187 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
      v188 = (unsigned __int8 *)operator new[](v187);
      v189 = src;
      v190 = v188;
      v191 = v186 - 1;
      if ( (char *)src + v187 >= src && (char *)src + v187 <= (char *)v433 )
      {
        src = (char *)src + v187;
        memcpy(v188, v189, v187);
      }
      v441[0] = nullptr;
      v440[1] = nullptr;
      v440[0] = nullptr;
      v192 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int8 *, _QWORD, void **))(**(_QWORD **)(v5 + 440) + 296LL))(
               *(_QWORD *)(v5 + 440),
               v186 - 1,
               v190,
               v187,
               v440);
      v194 = *(unsigned __int8 *)(v5 + 184);
      v195 = v192;
      if ( *(_BYTE *)(v5 + 184) )
      {
        sub_39FA0((__int64)"write_memory(ea=%a size=%zu) => %zd", v193, v191, v187);
        v194 = *(unsigned __int8 *)(v5 + 184);
      }
      if ( v187 == 1 && v195 )
      {
        if ( v194 )
          sub_39FA0((__int64)" (0x%02X)\n", *v190);
      }
      else if ( v194 )
      {
        sub_39FA0((__int64)"\n");
      }
      v320 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, (unsigned int)v195);
      sub_545E8(v3, &v434, (char *)v320 - (char *)&v434);
      if ( v195 < 1 )
      {
        if ( v440[1] )
          v321 = (char *)v440[0];
        else
          v321 = &byte_F154B;
        if ( v321 )
          v322 = v321;
        else
          v322 = "";
        v323 = strlen(v322);
        sub_545E8(v3, v322, v323 + 1);
      }
      operator delete[](v190);
      v64 = v440[0];
      if ( v440[0] )
        goto LABEL_533;
      goto LABEL_535;
    case 0x1B:
      if ( !(unsigned int)sub_8D548(v5, (__int64)v3, (unsigned __int64 *)&src) && *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"rpc_update_bpts failed!\n");
      goto LABEL_535;
    case 0x1C:
      sub_8DD3C(v5, v3, (unsigned __int64 *)&src);
      goto LABEL_535;
    case 0x1D:
      v207 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v8);
      v208 = unpack_dq((unsigned __int64 *)&src, (unsigned __int64)v433);
      v441[0] = nullptr;
      v440[1] = nullptr;
      v440[0] = nullptr;
      v209 = v208 - 1;
      v210 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, void **))(**(_QWORD **)(v5 + 440) + 360LL))(
               *(_QWORD *)(v5 + 440),
               v207,
               v208 - 1,
               v440);
      v211 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v210);
      sub_545E8(v3, &v434, (char *)v211 - (char *)&v434);
      if ( v210 != 1 )
      {
        if ( v440[1] )
          v213 = (char *)v440[0];
        else
          v213 = &byte_F154B;
        if ( v213 )
          v214 = v213;
        else
          v214 = "";
        v215 = strlen(v214);
        sub_545E8(v3, v214, v215 + 1);
      }
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"eval_lowcnd(tid=%d, ea=%a) => %d\n", v207, v212, v209);
      v64 = v440[0];
      if ( v440[0] )
        goto LABEL_533;
      goto LABEL_535;
    case 0x1E:
      v65 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v8);
      v66 = unpack_dq((unsigned __int64 *)&src, (unsigned __int64)v433) - 1;
      v67 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433) - 1;
      v68 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _QWORD))(**(_QWORD **)(v5 + 440) + 304LL))(
              *(_QWORD *)(v5 + 440),
              v65,
              v66,
              v67);
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"isok_bpt(type=%d ea=%a len=%d) => %d\n", v65, v69, v66, v67);
LABEL_110:
      v110 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v68);
      sub_545E8(v3, &v434, (char *)v110 - (char *)&v434);
      goto LABEL_535;
    case 0x1F:
      v440[1] = nullptr;
      v440[0] = nullptr;
      v441[0] = nullptr;
      dest[1] = nullptr;
      dest[0] = nullptr;
      *(_QWORD *)&v437 = 0;
      *(_OWORD *)(&v434.__align + 3) = 0u;
      v435 = 0;
      v98 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v8);
      v99 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
      v100 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
      v101 = *(_QWORD *)(v5 + 440);
      v102 = v100;
      v103 = *(_QWORD *)(v101 + 552);
      if ( !v103 )
        LODWORD(v103) = *(_DWORD *)(v101 + 648);
      if ( v100 < 1 || v100 > (int)v103 )
      {
        sub_3C748(
          (__int64)v440,
          "read_regs(tid=%d, mask=%x, nregs=%d) => 0 (incorrect nregs, should be in range 0..%d)\n",
          v98,
          v99,
          v100,
          v103);
        v307 = 0;
      }
      else
      {
        v104 = v100 + 7;
        v105 = (char *)dest[1];
        if ( v100 + 7 < 0 )
          v104 = v100 + 14;
        v106 = (__int64)v104 >> 3;
        if ( dest[1] >= (void *)v106 )
        {
          if ( dest[1] != (void *)v106 )
          {
            v434.__size[0] = 0;
            sub_5BBF4((pthread_mutex_t *)dest, (__int64)v104 >> 3, (char *)&v434);
            v106 = (unsigned __int64)dest[1];
          }
        }
        else
        {
          v107 = dest[0];
          if ( (unsigned __int64)v437 < v106 )
          {
            v107 = qvector_reserve((pthread_mutex_t *)dest, dest[0], v106, 1u);
            v105 = (char *)dest[1];
            dest[0] = v107;
          }
          memset(&v105[(_QWORD)v107], 0, v106 - (_QWORD)v105);
          dest[1] = (void *)v106;
        }
        v384 = src;
        if ( (char *)src + v106 >= src && (char *)src + v106 <= (char *)v433 )
        {
          src = (char *)src + v106;
          memcpy(dest[0], v384, v106);
        }
        sub_93104((__int64)&v434.__list, (int)v103);
        v385 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct __pthread_internal_list *, void **))(**(_QWORD **)(v5 + 440) + 224LL))(
                 *(_QWORD *)(v5 + 440),
                 v98,
                 v99,
                 v434.__list.__prev,
                 v440);
        v307 = v385;
        if ( *(_BYTE *)(v5 + 184) )
          sub_39FA0((__int64)"read_regs(tid=%d, mask=%x) => %d\n", v98, v99, v385);
      }
      v386 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v307);
      sub_545E8(v3, &v434, (char *)v386 - (char *)&v434);
      if ( v307 == 1 )
      {
        sub_A0704(v3, (__int64)v434.__list.__prev, v102, (__int64)dest[0]);
      }
      else
      {
        if ( v440[1] )
          v387 = (char *)v440[0];
        else
          v387 = &byte_F154B;
        if ( v387 )
          v388 = v387;
        else
          v388 = "";
        v389 = strlen(v388);
        sub_545E8(v3, v388, v389 + 1);
      }
      sub_931CC((char **)&v434.__list);
      if ( dest[0] )
      {
        dest[1] = nullptr;
        qfree(dest[0]);
        dest[0] = nullptr;
        *(_QWORD *)&v437 = 0;
      }
      v64 = v440[0];
      if ( v440[0] )
        goto LABEL_533;
      goto LABEL_535;
    case 0x20:
      v81 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v8);
      v82 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
      LODWORD(v440[0]) = -2;
      v441[1] = nullptr;
      v441[0] = nullptr;
      v440[1] = (void *)-1LL;
      if ( src < v433 )
        sub_977C8((__int64)v440, (unsigned __int64 *)&src);
      *(_QWORD *)&v437 = 0;
      dest[1] = nullptr;
      dest[0] = nullptr;
      v83 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void **, void **))(**(_QWORD **)(v5 + 440) + 232LL))(
              *(_QWORD *)(v5 + 440),
              v81,
              v82,
              v440,
              dest);
      v84 = v83;
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"write_reg(tid=%d) => %d\n", v81, v83);
      v85 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v84);
      sub_545E8(v3, &v434, (char *)v85 - (char *)&v434);
      if ( (v84 & 0x80000000) != 0 )
      {
        if ( dest[1] )
          v86 = (char *)dest[0];
        else
          v86 = &byte_F154B;
        if ( v86 )
          v87 = v86;
        else
          v87 = "";
        v88 = strlen(v87);
        sub_545E8(v3, v87, v88 + 1);
      }
      if ( dest[0] )
      {
        dest[1] = nullptr;
        qfree(dest[0]);
        dest[0] = nullptr;
        *(_QWORD *)&v437 = 0;
      }
      if ( SLODWORD(v440[0]) < -1 )
        goto LABEL_535;
      if ( v440[1] )
      {
        v441[0] = nullptr;
        qfree(v440[1]);
        v440[1] = nullptr;
        v441[1] = nullptr;
      }
      LODWORD(v440[0]) = -2;
      if ( !v7 )
        return;
      goto LABEL_536;
    case 0x21:
      v140 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v8);
      v141 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
      v441[0] = nullptr;
      v440[1] = nullptr;
      v440[0] = nullptr;
      v142 = v141;
      v143 = (*(__int64 (__fastcall **)(_QWORD, void **, _QWORD, _QWORD, void **))(**(_QWORD **)(v5 + 440) + 240LL))(
               *(_QWORD *)(v5 + 440),
               dest,
               v140,
               v141,
               v440);
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"get_thread_sreg_base(tid=%d, %d) => %a\n", v140, v142, v144);
      v145 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v143);
      sub_545E8(v3, &v434, (char *)v145 - (char *)&v434);
      if ( v143 == 1 )
      {
        v146 = pack_dq(&v443, (unsigned __int64)&v443.__align + 10, (unsigned __int64)dest[0] + 1);
        sub_545E8(v3, &v443, (char *)v146 - (char *)&v443);
      }
      else
      {
        if ( v440[1] )
          v325 = (char *)v440[0];
        else
          v325 = &byte_F154B;
        if ( v325 )
          v326 = v325;
        else
          v326 = "";
        v327 = strlen(v326) + 1;
        sub_545E8(v3, v326, v327);
      }
      v64 = v440[0];
      if ( v440[0] )
        goto LABEL_533;
      goto LABEL_535;
    case 0x22:
      v72 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v8);
      v73 = sub_9FAA8(v72, (unsigned __int64 *)&src);
      (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**(_QWORD **)(v5 + 440) + 184LL))(
        *(_QWORD *)(v5 + 440),
        v73,
        v72);
      if ( v73 )
      {
        v75 = v73 - 1;
        v74 = *(v73 - 1);
        if ( v74 )
        {
          v76 = 0;
          v77 = 56 * v74;
          do
          {
            v78 = &v73[(unsigned __int64)v77 / 8];
            v79 = (void *)v73[(unsigned __int64)v77 / 8 - 3];
            if ( v79 )
            {
              *(v78 - 2) = 0;
              qfree(v79);
              *(v78 - 3) = 0;
              v73[(unsigned __int64)v77 / 8 - 1] = 0;
            }
            v80 = (void *)*(v78 - 6);
            if ( v80 )
            {
              v73[(unsigned __int64)v77 / 8 - 5] = 0;
              qfree(v80);
              *(v78 - 6) = 0;
              v73[(unsigned __int64)v77 / 8 - 4] = 0;
            }
            v76 += 56;
            v73 -= 7;
          }
          while ( v77 != v76 );
        }
        operator delete[](v75);
      }
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"set_exception_info(qty=%d)\n", v72);
      goto LABEL_535;
    case 0x23:
      v222 = v4;
      while ( v222 < v8 )
      {
        if ( !*v222++ )
        {
          src = v222;
          goto LABEL_274;
        }
      }
      v4 = nullptr;
LABEL_274:
      v258 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v8);
      v259 = sub_A3550((_QWORD *)v5);
      if ( v259 == -1 )
      {
        v334 = 0;
        v335 = -1;
        if ( !*(_BYTE *)(v5 + 184) )
          goto LABEL_574;
        goto LABEL_573;
      }
      if ( v258 )
      {
        v260 = fopenRB(v4);
      }
      else
      {
        if ( (qdirname((char *)v440, 0x1000u, v4) & 1) != 0 && !qisdir((const char *)v440) )
        {
          qmake_full_path((unsigned __int64)dest, 4096, (char *)v440);
          qgetcwd(&v434.__size[24], 0x1000u);
          v390 = __strlen_chk(&v434.__align + 3, 4096);
          if ( !strncmp((const char *)dest, &v434.__size[24], v390) )
          {
            memset(&v434, 0, 24);
            v420 = v7;
            *(_QWORD *)v428 = v3;
            do
            {
              if ( qisdir((const char *)dest) )
                break;
              v391 = v434.__align;
              sub_39140(&v429, (char *)dest);
              sub_93278((__int64)&v434, v391, (__int64 *)&v429);
              if ( v429 )
              {
                v430 = 0;
                qfree(v429);
                v429 = nullptr;
                v431 = 0;
              }
            }
            while ( (qdirname((char *)dest, 0x1000u, (char *)dest) & 1) != 0 );
            v392 = *(&v434.__align + 1);
            if ( *(&v434.__align + 1) )
            {
              v393 = 0;
              v394 = 1;
              do
              {
                if ( *(_QWORD *)(v434.__align + v393 + 8) )
                  v395 = *(const char **)(v434.__align + v393);
                else
                  v395 = &byte_F154B;
                if ( *(_BYTE *)(v5 + 184) )
                  sub_39FA0((__int64)"open_file() creating directory %s\n", v395);
                if ( (unsigned int)qmkdir(v395, 0x1FFu) )
                  break;
                v396 = v394++ >= v392;
                v393 += 24;
              }
              while ( !v396 );
            }
            v397 = (char *)v434.__align;
            v7 = v420;
            v3 = *(pthread_mutex_t **)v428;
            if ( v434.__align )
            {
              v398 = *(&v434.__align + 1);
              if ( *(&v434.__align + 1) )
              {
                v399 = 0;
                v400 = 1;
                v401 = *(void **)v434.__align;
                if ( *(_QWORD *)v434.__align )
                  goto LABEL_561;
                while ( v400 < v398 )
                {
                  v397 = (char *)v434.__align;
                  ++v400;
                  v399 += 24;
                  v401 = *(void **)(v434.__align + v399);
                  if ( v401 )
                  {
LABEL_561:
                    v402 = &v397[v399];
                    *(_QWORD *)&v397[v399 + 8] = 0;
                    qfree(v401);
                    *(_QWORD *)v402 = 0;
                    *((_QWORD *)v402 + 2) = 0;
                  }
                }
                v397 = (char *)v434.__align;
              }
              *(&v434.__align + 1) = 0;
              qfree(v397);
              v3 = *(pthread_mutex_t **)v428;
              v434.__align = 0;
              *(&v434.__align + 2) = 0;
            }
          }
        }
        v260 = fopenWB(v4);
      }
      v334 = 0;
      if ( v260 )
        v335 = v259;
      else
        v335 = -1;
      *(_QWORD *)(v5 + 8LL * v259 + 8) = v260;
      if ( v260 && v258 )
      {
        v334 = qfsize(v260, v261, v444);
        v335 = v259;
      }
      if ( *(_BYTE *)(v5 + 184) )
LABEL_573:
        sub_39FA0((__int64)"open_file('%s', %d) => %d %lld\n", v4, v258 != 0, v335, v334);
LABEL_574:
      v403 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v335);
      v404 = sub_545E8(v3, &v434, (char *)v403 - (char *)&v434);
      if ( v335 == -1 )
      {
        v406 = (unsigned int *)__errno(v404);
        v407 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, *v406);
        sub_545E8(v3, &v434, (char *)v407 - (char *)&v434);
      }
      else
      {
        v405 = pack_dq(&v443, (unsigned __int64)&v443.__align + 10, v334);
        sub_545E8(v3, &v443, (char *)v405 - (char *)&v443);
      }
LABEL_535:
      if ( v7 )
LABEL_536:
        *(_BYTE *)(v5 + 289) = 1;
      return;
    case 0x24:
      v216 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v8);
      if ( v216 <= 0xF )
      {
        v217 = v5 + 8LL * (int)v216;
        v220 = *(FILE **)(v217 + 8);
        v218 = (_QWORD *)(v217 + 8);
        v219 = v220;
        if ( v220 )
        {
          v221 = fileno(v219);
          fchmod(v221, 0x1EDu);
          qfclose(v219);
          *v218 = 0;
        }
      }
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"close_file(%d)\n", v216);
      goto LABEL_535;
    case 0x25:
      v92 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v8);
      v93 = unpack_dq((unsigned __int64 *)&src, (unsigned __int64)v433);
      v94 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
      if ( v94 < 1 )
      {
        v97 = 0;
        v96 = nullptr;
      }
      else
      {
        v95 = v5 + 8LL * v92;
        v96 = (void *)operator new[](v94);
        qfseek(*(FILE **)(v95 + 8), v93, 0);
        v97 = qfread(*(FILE **)(v95 + 8), v96, v94);
      }
      v344 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v97);
      v345 = sub_545E8(v3, &v434, (char *)v344 - (char *)&v434);
      if ( v94 == v97 )
      {
        sub_545E8(v3, v96, v94);
      }
      else
      {
        v346 = (unsigned int *)__errno(v345);
        v347 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, *v346);
        sub_545E8(v3, &v434, (char *)v347 - (char *)&v434);
      }
      if ( v96 )
        operator delete[](v96);
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"read_file(%d, 0x%llX, %d) => %d\n", v92, v93, v94, v97);
      goto LABEL_535;
    case 0x26:
      v121 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v8);
      v122 = unpack_dq((unsigned __int64 *)&src, (unsigned __int64)v433);
      v123 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
      if ( v123 )
      {
        v124 = (void *)operator new[](v123);
        v125 = src;
        v126 = v124;
        if ( (char *)src + v123 >= src && (char *)src + v123 <= (char *)v433 )
        {
          src = (char *)src + v123;
          memcpy(v124, v125, v123);
        }
      }
      else
      {
        v126 = nullptr;
      }
      v348 = v5 + 8LL * v121;
      v350 = *(FILE **)(v348 + 8);
      v349 = (FILE **)(v348 + 8);
      qfseek(v350, v122, 0);
      if ( v126 )
        v351 = qfwrite(*v349, v126, v123);
      else
        v351 = 0;
      v352 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v123);
      v353 = sub_545E8(v3, &v434, (char *)v352 - (char *)&v434);
      if ( v123 != v351 )
      {
        v354 = (unsigned int *)__errno(v353);
        v355 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, *v354);
        sub_545E8(v3, &v434, (char *)v355 - (char *)&v434);
      }
      if ( v126 )
        operator delete[](v126);
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"write_file(%d, 0x%llX, %u) => %u\n", v121, v122, v123, v351);
      goto LABEL_535;
    case 0x27:
      v162 = sub_A61A8(v5 + 192, v3, v4, (unsigned __int64)v8);
      if ( !v162 )
        goto LABEL_535;
      sub_A640C(v162, (pthread_mutex_t *)dest);
      v163 = dest[0];
      v164 = (void *)v3->__align;
      v165 = dest[1];
      v166 = v437;
      dest[0] = nullptr;
      dest[1] = nullptr;
      v440[0] = v163;
      v440[1] = v165;
      v441[0] = (void *)v437;
      *(_QWORD *)&v437 = 0;
      if ( !v164 )
        goto LABEL_254;
      *(&v3->__align + 1) = 0;
      qfree(v164);
      v167 = v441[0];
      v168 = dest[0];
      *(_OWORD *)&v3->__lock = *(_OWORD *)v440;
      *(&v3->__align + 2) = (__int64)v167;
      if ( v168 )
        goto LABEL_165;
      goto LABEL_535;
    case 0x28:
      v440[1] = nullptr;
      v440[0] = nullptr;
      v441[0] = nullptr;
      v127 = (unsigned int)unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v8);
      v128 = (*(__int64 (__fastcall **)(_QWORD, __int64, void **))(**(_QWORD **)(v5 + 440) + 416LL))(
               *(_QWORD *)(v5 + 440),
               v127,
               v440);
      v129 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v128);
      sub_545E8(v3, &v434, (char *)v129 - (char *)&v434);
      if ( v128 == 1 )
        sub_9FF60(v3, v440);
      v64 = v440[0];
      if ( v440[0] )
        goto LABEL_533;
      goto LABEL_535;
    case 0x29:
      v240 = unpack_dq((unsigned __int64 *)&src, (unsigned __int64)v8);
      unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
      unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
      v241 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
      v435 = 0;
      v439 = 0;
      memset(&v434, 0, sizeof(v434));
      *(_OWORD *)v438 = 0u;
      v437 = 0u;
      *(_OWORD *)dest = 0u;
      if ( (v241 & 1) != 0 )
        v242 = nullptr;
      else
        v242 = &v434;
      sub_A02BC((__int64 *)&v434.__list, (pthread_mutex_t *)dest, &v242->__align, (unsigned __int64 *)&src);
      v429 = nullptr;
      v430 = 0;
      v431 = 0;
      v440[0] = (void *)0xFFFFFFFFLL;
      v440[1] = (void *)-1LL;
      LOBYTE(v441[0]) = 0;
      memset((char *)v441 + 4, 0, 52);
      v243 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(v5 + 440) + 424LL))(
               *(_QWORD *)(v5 + 440),
               v240 - 1);
      v244 = pack_dq(&v443, (unsigned __int64)&v443.__align + 10, v243 + 1);
      sub_545E8(v3, &v443, (char *)v244 - (char *)&v443);
      if ( v243 == -1 )
      {
        if ( (v241 & 2) != 0 )
          sub_9F8B4(v3, (unsigned int *)v440);
        if ( &byte_F154B )
          v359 = &byte_F154B;
        else
          v359 = "";
        v360 = strlen(v359);
        sub_545E8(v3, v359, v360 + 1);
      }
      else if ( (v241 & 1) == 0 )
      {
        sub_A049C(v3, (__int64)&v434, 1);
      }
      free_debug_event((__int64)v440);
      if ( v438[0] )
      {
        v438[1] = nullptr;
        qfree(v438[0]);
        v438[0] = nullptr;
        v439 = 0;
      }
      if ( dest[0] )
      {
        dest[1] = nullptr;
        qfree(dest[0]);
        dest[0] = nullptr;
        *(_QWORD *)&v437 = 0;
      }
      v361 = (char *)v434.__align;
      if ( v434.__align )
      {
        v362 = *(&v434.__align + 1);
        if ( *(&v434.__align + 1) )
        {
          v363 = 0;
          for ( m = 1; ; ++m )
          {
            v365 = &v361[v363];
            v366 = *(void **)&v361[v363 + 8];
            if ( v366 )
            {
              *((_QWORD *)v365 + 2) = 0;
              qfree(v366);
              *((_QWORD *)v365 + 1) = 0;
              *(_QWORD *)&v361[v363 + 24] = 0;
            }
            if ( m >= v362 )
              break;
            v361 = (char *)v434.__align;
            v363 += 32;
          }
          v361 = (char *)v434.__align;
        }
        *(&v434.__align + 1) = 0;
        qfree(v361);
        v434.__align = 0;
        *(&v434.__align + 2) = 0;
      }
      prev = v434.__list.__prev;
      if ( !v434.__list.__prev )
        goto LABEL_535;
      next = v434.__list.__next;
      if ( v434.__list.__next )
      {
        v369 = 0;
        for ( n = 1; ; ++n )
        {
          v371 = &prev[v369];
          v372 = prev[v369].__next;
          if ( v372 )
          {
            v371[1].__prev = nullptr;
            qfree(v372);
            v371->__next = nullptr;
            prev[v369 + 1].__next = nullptr;
          }
          if ( n >= (unsigned __int64)next )
            break;
          prev = v434.__list.__prev;
          v369 += 2;
        }
        prev = v434.__list.__prev;
      }
      v434.__list.__next = nullptr;
      qfree(prev);
      v434.__list.__prev = nullptr;
      v435 = 0;
      if ( !v7 )
        return;
      goto LABEL_536;
    case 0x2A:
      v89 = (unsigned int)unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v8);
      v90 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v5 + 440) + 432LL))(*(_QWORD *)(v5 + 440), v89);
      v91 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v90);
      sub_545E8(v3, &v434, (char *)v91 - (char *)&v434);
      goto LABEL_535;
    case 0x2B:
      v196 = v4;
      while ( v196 < v8 )
      {
        if ( !*v196++ )
        {
          src = v196;
          goto LABEL_272;
        }
      }
      v4 = nullptr;
LABEL_272:
      v256 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v5 + 440) + 536LL))(*(_QWORD *)(v5 + 440), v4);
      v257 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v256);
      sub_545E8(v3, &v434, (char *)v257 - (char *)&v434);
      goto LABEL_535;
    case 0x2C:
      v425 = v3;
      v224 = unpack_dq((unsigned __int64 *)&src, (unsigned __int64)v8);
      v441[0] = nullptr;
      v440[1] = nullptr;
      v440[0] = nullptr;
      v225 = v224 - 1;
      v226 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64))(**(_QWORD **)(v5 + 440) + 264LL))(
               *(_QWORD *)(v5 + 440),
               v440,
               v224 - 1);
      v228 = (int)v440[1];
      v229 = v226;
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"get_scattered_image(base=%a) => %d (qty=%d)\n", v227, v225, v226);
      v230 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, (unsigned int)(v229 + 2));
      sub_545E8(v3, &v434, (char *)v230 - (char *)&v434);
      if ( v229 >= 1 )
      {
        v231 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, (unsigned int)v228);
        sub_545E8(v3, &v434, (char *)v231 - (char *)&v434);
        if ( v228 >= 1 )
        {
          v232 = 0;
          for ( ii = 0; ii < v228; ++ii )
          {
            sub_9EEF0(v425, (char *)v440[0] + v232);
            v232 += 40;
          }
        }
      }
      v234 = (char *)v440[0];
      if ( !v440[0] )
        goto LABEL_535;
      v235 = v440[1];
      if ( v440[1] )
      {
        v236 = 0;
        for ( jj = 1; ; ++jj )
        {
          v238 = &v234[v236];
          v239 = *(void **)&v234[v236 + 16];
          if ( v239 )
          {
            *((_QWORD *)v238 + 3) = 0;
            qfree(v239);
            *((_QWORD *)v238 + 2) = 0;
            *(_QWORD *)&v234[v236 + 32] = 0;
          }
          if ( jj >= (unsigned __int64)v235 )
            break;
          v234 = (char *)v440[0];
          v236 += 40;
        }
        v234 = (char *)v440[0];
      }
      v440[1] = nullptr;
      qfree(v234);
      goto LABEL_534;
    case 0x2D:
      v53 = unpack_dq((unsigned __int64 *)&src, (unsigned __int64)v8);
      v441[0] = nullptr;
      v440[1] = nullptr;
      v440[0] = nullptr;
      v54 = v53 - 1;
      v55 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64))(**(_QWORD **)(v5 + 440) + 272LL))(
              *(_QWORD *)(v5 + 440),
              v440,
              v53 - 1);
      v57 = (unsigned int)v440[1];
      v58 = v55;
      v59 = v55 & 1;
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"get_image_uuid(base=%a) => %d (size=%d)\n", v56, v54, v59);
      v60 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v59);
      v61 = sub_545E8(v3, &v434, (char *)v60 - (char *)&v434);
      if ( (v58 & 1) != 0 )
      {
        if ( (unsigned __int64)(int)v57 >> 32 )
        {
          if ( !under_debugger )
            v61 = interr(5);
          __break(1u);
          sub_39134(v61);
        }
        v62 = v440[0];
        v63 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v57);
        sub_545E8(v3, &v434, (char *)v63 - (char *)&v434);
        sub_545E8(v3, v62, (int)v57);
      }
      v64 = v440[0];
      if ( !v440[0] )
        goto LABEL_535;
LABEL_533:
      v440[1] = nullptr;
      qfree(v64);
LABEL_534:
      v440[0] = nullptr;
      v441[0] = nullptr;
      goto LABEL_535;
    case 0x2E:
      v173 = unpack_dq((unsigned __int64 *)&src, (unsigned __int64)v8);
      v174 = (char *)src;
      v175 = (const char *)(v173 - 1);
      v176 = (unsigned __int8 *)src;
      while ( v176 < v433 )
      {
        if ( !*v176++ )
        {
          src = v176;
          goto LABEL_281;
        }
      }
      v174 = nullptr;
LABEL_281:
      v264 = *(_QWORD *)(v5 + 440);
      sub_39140(v440, v174);
      v265 = (*(__int64 (__fastcall **)(__int64, const char *, void **))(*(_QWORD *)v264 + 280LL))(v264, v175, v440);
      if ( v440[0] )
      {
        v440[1] = nullptr;
        qfree(v440[0]);
        v440[0] = nullptr;
        v441[0] = nullptr;
      }
      if ( *(_BYTE *)(v5 + 184) )
        sub_39FA0((__int64)"get_segm_start(base=%a, segname=%s) => %a\n", v266, v175, v267);
      v268 = pack_dq(&v443, (unsigned __int64)&v443.__align + 10, v265 + 1);
      sub_545E8(v3, &v443, (char *)v268 - (char *)&v443);
      goto LABEL_535;
    case 0x2F:
      v418 = v7;
      v422 = v3;
      v11 = unpack_dq((unsigned __int64 *)&src, (unsigned __int64)v8);
      v12 = unpack_dq((unsigned __int64 *)&src, (unsigned __int64)v433);
      v13 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
      dest[1] = nullptr;
      dest[0] = nullptr;
      *(_QWORD *)&v437 = 0;
      if ( v13 )
      {
        v14 = v13;
        memset(v441, 0, sizeof(v441));
        *(_OWORD *)v440 = 0u;
        v442 = -1;
        sub_98AA0((pthread_mutex_t *)dest, v13, (unsigned __int64)v440);
        if ( v441[4] )
        {
          v441[5] = nullptr;
          qfree(v441[4]);
          v441[4] = nullptr;
          v441[6] = nullptr;
        }
        if ( v441[1] )
        {
          v441[2] = nullptr;
          qfree(v441[1]);
          v441[1] = nullptr;
          v441[3] = nullptr;
        }
        if ( v440[0] )
        {
          v440[1] = nullptr;
          qfree(v440[0]);
          v440[0] = nullptr;
          v441[0] = nullptr;
        }
        if ( v13 >= 1 )
        {
          v15 = 0;
          do
          {
            v16 = (pthread_mutex_t *)dest[0];
            v17 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
            if ( v17 )
            {
              v18 = &v16[2 * v15];
              v21 = *(&v18->__align + 1);
              v20 = (size_t *)(&v18->__align + 1);
              v19 = v21;
              v22 = v17;
              v23 = (void **)&v16[2 * v15];
              v24 = v21 == v17;
              if ( v21 >= v17 )
              {
                if ( !v24 )
                {
                  v434.__size[24] = 0;
                  sub_5BBF4(&v16[2 * v15], v17, &v434.__size[24]);
                }
              }
              else
              {
                if ( *(&v16[2 * v15].__align + 2) >= (unsigned __int64)v17 )
                {
                  v25 = (char *)*v23;
                }
                else
                {
                  v25 = (char *)qvector_reserve(&v16[2 * v15], *v23, v17, 1u);
                  *v23 = v25;
                  v19 = *v20;
                }
                memset(&v25[v19], 0, v22 - v19);
                *v20 = v22;
              }
              v26 = src;
              if ( (char *)src + v22 >= src && (char *)src + v22 <= (char *)v433 )
              {
                v27 = *v23;
                src = (char *)src + v22;
                memcpy(v27, v26, v22);
              }
            }
            v28 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
            if ( v28 )
            {
              v29 = &v16[2 * v15];
              v32 = (unsigned __int64)v29->__list.__next;
              p_next = (size_t *)&v29->__list.__next;
              v30 = v32;
              v33 = v28;
              v34 = v32 == v28;
              v35 = (void **)(p_next - 1);
              if ( v32 >= v28 )
              {
                if ( !v34 )
                {
                  v434.__size[24] = 0;
                  sub_5BBF4((pthread_mutex_t *)(p_next - 1), v28, &v434.__size[24]);
                }
              }
              else
              {
                if ( v16[2 * v15 + 1].__align >= (unsigned __int64)v28 )
                {
                  v36 = (char *)*v35;
                }
                else
                {
                  v36 = (char *)qvector_reserve((pthread_mutex_t *)(p_next - 1), *v35, v28, 1u);
                  *v35 = v36;
                  v30 = *p_next;
                }
                memset(&v36[v30], 0, v33 - v30);
                *p_next = v33;
              }
              v37 = src;
              if ( (char *)src + v33 >= src && (char *)src + v33 <= (char *)v433 )
              {
                v38 = *v35;
                src = (char *)src + v33;
                memcpy(v38, v37, v33);
              }
            }
            v39 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
            v40 = &v16[2 * v15];
            v41 = v39;
            v42 = v39;
            v43 = &v40[1].__align + 1;
            if ( *(&v40[1].__align + 2) != v39 )
            {
              *(_OWORD *)(&v434.__align + 3) = 0u;
              sub_98E70((pthread_mutex_t *)((char *)v40 + 48), v39, &v434.__size[24]);
            }
            v44 = (unsigned __int64)v433;
            if ( v41 >= 1 )
            {
              v45 = 0;
              v46 = 0;
              do
              {
                *(_QWORD *)(*v43 + v45) = unpack_dq((unsigned __int64 *)&src, v44) - 1;
                ++v46;
                *(_QWORD *)(*v43 + v45 + 8) = unpack_dq((unsigned __int64 *)&src, (unsigned __int64)v433) - 1;
                v44 = (unsigned __int64)v433;
                v45 += 16;
              }
              while ( v46 < v42 );
            }
            v47 = unpack_dd((unsigned __int64 *)&src, v44);
            v48 = &v16[2 * v15++];
            *((_DWORD *)&v48[1].__align + 8) = v47;
          }
          while ( v15 < v14 );
        }
      }
      v49 = unpack_dd((unsigned __int64 *)&src, (unsigned __int64)v433);
      v441[0] = nullptr;
      v440[1] = nullptr;
      v440[0] = nullptr;
      v7 = v418;
      v50 = (*(__int64 (__fastcall **)(_QWORD, __pthread_list_t *, unsigned __int64, unsigned __int64, void **, _QWORD, void **))(**(_QWORD **)(v5 + 440) + 576LL))(
              *(_QWORD *)(v5 + 440),
              &v434.__list,
              v11 - 1,
              v12 - 1,
              dest,
              v49,
              v440);
      v51 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, v50);
      sub_545E8(v422, &v434, (char *)v51 - (char *)&v434);
      if ( v50 != -1 )
      {
        if ( v50 == 1 )
        {
          v52 = pack_dq(&v443, (unsigned __int64)&v443.__align + 10, (unsigned __int64)&v434.__list.__prev->__prev + 1);
          sub_545E8(v422, &v443, (char *)v52 - (char *)&v443);
        }
        else
        {
          if ( v440[1] )
            v373 = (char *)v440[0];
          else
            v373 = &byte_F154B;
          if ( v373 )
            v374 = v373;
          else
            v374 = "";
          v375 = strlen(v374) + 1;
          sub_545E8(v422, v374, v375);
        }
      }
      if ( v440[0] )
      {
        v440[1] = nullptr;
        qfree(v440[0]);
        v440[0] = nullptr;
        v441[0] = nullptr;
      }
      v376 = (char *)dest[0];
      if ( !dest[0] )
        goto LABEL_535;
      if ( dest[1] )
      {
        v377 = 0;
        for ( kk = (char *)dest[1] - 1; ; --kk )
        {
          v379 = &v376[v377];
          v380 = *(void **)&v376[v377 + 48];
          if ( v380 )
          {
            *((_QWORD *)v379 + 7) = 0;
            qfree(v380);
            *((_QWORD *)v379 + 6) = 0;
            *(_QWORD *)&v376[v377 + 64] = 0;
          }
          v381 = *((void **)v379 + 3);
          if ( v381 )
          {
            *(_QWORD *)&v376[v377 + 32] = 0;
            qfree(v381);
            *((_QWORD *)v379 + 3) = 0;
            *(_QWORD *)&v376[v377 + 40] = 0;
          }
          v382 = *(void **)&v376[v377];
          if ( v382 )
          {
            v383 = &v376[v377];
            *(_QWORD *)&v376[v377 + 8] = 0;
            qfree(v382);
            *(_QWORD *)v383 = 0;
            *((_QWORD *)v383 + 2) = 0;
          }
          if ( !kk )
            break;
          v376 = (char *)dest[0];
          v377 += 80;
        }
        v376 = (char *)dest[0];
      }
      dest[1] = nullptr;
      qfree(v376);
      goto LABEL_589;
    case 0x30:
      if ( *(_QWORD *)(*(_QWORD *)(v5 + 440) + 552LL) )
      {
        v10 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, 1u);
        sub_545E8(v3, &v434, (char *)v10 - (char *)&v434);
        j_serialize_dynamic_register_set(v3, *(_QWORD *)(v5 + 440) + 544LL);
      }
      else
      {
        v331 = pack_dd(&v434, (unsigned __int64)&v434.__align + 5, 0);
        sub_545E8(v3, &v434, (char *)v331 - (char *)&v434);
      }
      goto LABEL_535;
    default:
      sub_A640C(1, (pthread_mutex_t *)dest);
      v163 = dest[0];
      v245 = (void *)v3->__align;
      v165 = dest[1];
      v166 = v437;
      dest[0] = nullptr;
      dest[1] = nullptr;
      v440[0] = v163;
      v440[1] = v165;
      v441[0] = (void *)v437;
      *(_QWORD *)&v437 = 0;
      if ( v245 )
      {
        *(&v3->__align + 1) = 0;
        qfree(v245);
        v246 = v441[0];
        v168 = dest[0];
        *(_OWORD *)&v3->__lock = *(_OWORD *)v440;
        *(&v3->__align + 2) = (__int64)v246;
        if ( v168 )
        {
LABEL_165:
          dest[1] = nullptr;
          qfree(v168);
          goto LABEL_589;
        }
        goto LABEL_535;
      }
LABEL_254:
      v3->__align = (__int64)v163;
      *(&v3->__align + 1) = (__int64)v165;
      *(&v3->__align + 2) = v166;
      if ( v7 )
        goto LABEL_536;
      return;
  }
}
// 91488: conditional instruction was optimized away because w22.4==0
// 917FC: conditional instruction was optimized away because %var_30B8.8==0
// 91838: conditional instruction was optimized away because %var_30C0.8==0
// 8F648: variable 'v56' is possibly undefined
// 8F778: variable 'v69' is possibly undefined
// 8FF8C: variable 'v144' is possibly undefined
// 904D0: variable 'v193' is possibly undefined
// 9059C: variable 'v204' is possibly undefined
// 906A8: variable 'v212' is possibly undefined
// 9079C: variable 'v227' is possibly undefined
// 90C08: variable 'v266' is possibly undefined
// 90C08: variable 'v267' is possibly undefined
// 91DE0: variable 'v261' is possibly undefined
// 91DE0: variable 'v444' is possibly undefined
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// A09CC: using guessed type __int64 __fastcall j_serialize_dynamic_register_set(_QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
// 15E070: using guessed type char *off_15E070[6];
// 166BE8: using guessed type __int64 qword_166BE8[2];
// 168DF0: using guessed type char under_debugger;
