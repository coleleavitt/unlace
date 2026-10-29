/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100050374
// Address: 0x0000000100050374

//----- (0000000100050374) ----------------------------------------------------
void __usercall sub_100050374(__int64 a1@<X0>, unsigned int *a2@<X1>, __int64 *a3@<X8>)
{
  __int64 v4; // x28
  __int64 v5; // x27
  int v6; // w26
  unsigned __int8 *v7; // x21
  unsigned __int64 v8; // x24
  _QWORD *v9; // x0
  int v10; // w23
  __int64 v11; // x25
  __int64 v12; // x26
  char *v13; // x19
  int v14; // w0
  char *v15; // x23
  size_t v16; // x24
  unsigned __int64 v17; // x9
  char *v18; // x8
  void *v19; // x1
  void *v21; // x0
  int v22; // w0
  size_t v23; // x24
  unsigned __int64 v24; // x9
  char *v25; // x8
  void *v26; // x1
  void *v27; // x0
  int v28; // w24
  __int64 v29; // x20
  __int64 v30; // x24
  unsigned int v31; // w21
  unsigned __int64 v32; // x21
  unsigned int v33; // w22
  int v34; // w19
  void *v35; // x0
  __int64 v36; // x21
  unsigned __int64 v37; // x22
  __int64 v38; // x24
  unsigned int v39; // w23
  __int64 v40; // x21
  unsigned int v41; // w22
  __int64 v42; // x21
  _QWORD *v43; // x22
  __int64 v44; // x8
  __int64 v45; // x20
  __int64 v46; // x23
  _QWORD *v47; // x24
  _QWORD *v48; // x25
  void *v49; // x0
  void *v50; // x0
  __int64 v51; // x21
  __int64 v52; // x22
  unsigned int v53; // w22
  int v54; // w8
  __int64 v55; // x0
  unsigned int v56; // w0
  int v57; // w21
  off_t v58; // x22
  int v59; // w0
  int v60; // w23
  void *v61; // x24
  unsigned int v62; // w25
  __int64 v63; // x22
  __int64 v64; // x23
  int v65; // w0
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  __int64 v69; // x5
  __int64 v70; // x6
  __int64 v71; // x7
  int v72; // w21
  __int64 v73; // x8
  __int64 v74; // x20
  __int64 v75; // x21
  int v76; // w21
  const char *v77; // x22
  unsigned __int64 v78; // x23
  unsigned __int8 *v79; // x19
  _QWORD *v81; // x20
  _QWORD *v82; // x24
  size_t v83; // x0
  size_t v84; // x25
  unsigned __int64 v85; // x23
  _QWORD *v86; // x1
  int v87; // w21
  off_t v88; // x22
  unsigned int v89; // w0
  unsigned int v90; // w23
  void *v91; // x0
  void *v92; // x24
  void *v93; // x1
  __int64 v95; // x0
  unsigned int v96; // w21
  unsigned int v97; // w21
  void *v98; // x0
  unsigned int v99; // w21
  __int64 v100; // x21
  __int64 v101; // x22
  unsigned int v102; // w23
  signed int v103; // w0
  unsigned int v104; // w21
  __int64 v105; // x21
  __int64 v106; // x22
  int v107; // w22
  int v108; // w0
  unsigned int v109; // w21
  unsigned __int8 *v110; // x22
  unsigned __int64 v112; // x21
  const char *v113; // x22
  unsigned __int8 *v114; // x9
  __int64 v116; // x0
  __int64 v117; // x20
  size_t v118; // x23
  void *v119; // x0
  unsigned int v120; // w21
  __int64 v121; // x0
  signed int v122; // w21
  unsigned __int64 v123; // x24
  unsigned int v124; // w22
  void *v125; // x0
  void *v126; // x21
  void *v127; // x1
  __int64 v129; // x24
  bool v130; // zf
  unsigned __int8 *v131; // x8
  unsigned __int64 v133; // x22
  unsigned int v134; // w23
  void *v135; // x21
  __int64 v136; // x22
  __int64 v138; // x21
  unsigned __int64 v139; // x22
  unsigned int v140; // w23
  unsigned int v141; // w0
  unsigned int v142; // w21
  FILE *v143; // x22
  int v144; // w0
  unsigned __int8 *v145; // x8
  unsigned __int64 v147; // x22
  int v148; // w23
  signed int v149; // w21
  __int64 v150; // x19
  __int64 v151; // x20
  char *v152; // x20
  __int64 v153; // x19
  char *v154; // x21
  char *v155; // x22
  void *v156; // x0
  unsigned __int64 v157; // x24
  char v158; // w22
  void **v159; // x2
  __int64 v160; // x21
  void *v161; // x19
  void *v162; // x21
  __int64 v163; // x20
  _QWORD *v164; // x0
  unsigned __int8 *v165; // x23
  unsigned __int8 *v167; // x8
  unsigned int v169; // w19
  void *v170; // x20
  unsigned __int8 *v171; // x8
  unsigned int v173; // w0
  int v174; // w22
  signed int v175; // w23
  FILE *v176; // x0
  char *v177; // x8
  int v178; // w9
  int v179; // w22
  int v180; // t1
  void **v181; // x3
  __int64 v182; // x0
  __int64 v183; // x1
  __int64 v184; // x2
  __int64 v185; // x3
  __int64 v186; // x4
  __int64 v187; // x5
  __int64 v188; // x6
  __int64 v189; // x7
  unsigned int v190; // w21
  void *v191; // x0
  char *v192; // x20
  __int64 v193; // x19
  char *v194; // x21
  char *v195; // x22
  void *v196; // x0
  int v197; // w27
  int i; // w25
  unsigned __int64 v199; // x8
  _BYTE *v200; // x28
  void *v201; // x9
  char *v202; // x1
  __int64 v203; // x20
  char *v204; // x26
  _QWORD *v206; // x1
  __int64 v207; // x8
  bool v208; // cf
  __int64 v209; // x8
  __int64 v210; // x19
  signed int v211; // w26
  _QWORD **v212; // x19
  char v213; // w24
  __int64 v214; // x24
  unsigned int v215; // w25
  int v216; // w22
  int j; // w19
  unsigned int *v218; // x20
  void *v219; // x0
  char *v220; // x20
  __int64 v221; // x19
  char *v222; // x21
  char *v223; // x22
  void *v224; // x0
  int *v225; // x0
  int v226; // w8
  void *v227; // x1
  unsigned int v228; // w24
  void *v229; // x0
  __int64 v230; // x20
  __int64 v231; // x21
  char *v232; // x19
  char *v233; // x23
  void *v234; // x0
  int v235; // w25
  int *v236; // x0
  void *v237; // x0
  __int64 v238; // x20
  __int64 v239; // x19
  char *v240; // x21
  char *v241; // x22
  void *v242; // x0
  void *v243; // x0
  __int64 v244; // x20
  __int64 v245; // x19
  char *v246; // x21
  char *v247; // x22
  void *v248; // x0
  char *v249; // x8
  _QWORD *v251; // x20
  _QWORD *v252; // x24
  size_t v253; // x0
  size_t v254; // x25
  unsigned __int64 v255; // x23
  _QWORD *v256; // x1
  unsigned int v257; // w22
  size_t v258; // x0
  void *v259; // x24
  __int64 v260; // x20
  __int64 v261; // x8
  __int64 v262; // x27
  const char *v263; // x25
  int *v264; // x0
  __int64 v265; // x23
  void *v266; // x0
  char *v267; // x20
  __int64 v268; // x19
  void *v269; // x0
  _QWORD *v270; // x21
  void *v271; // [xsp+50h] [xbp-CE0h]
  unsigned int v272; // [xsp+5Ch] [xbp-CD4h]
  __int64 v273; // [xsp+60h] [xbp-CD0h]
  __int64 v274; // [xsp+68h] [xbp-CC8h]
  _QWORD **v275; // [xsp+70h] [xbp-CC0h]
  __int64 v276; // [xsp+70h] [xbp-CC0h]
  char v277; // [xsp+7Ch] [xbp-CB4h]
  char v278; // [xsp+7Ch] [xbp-CB4h]
  void *v279; // [xsp+80h] [xbp-CB0h] BYREF
  __int64 v280; // [xsp+88h] [xbp-CA8h]
  __int64 v281; // [xsp+90h] [xbp-CA0h]
  void *v282; // [xsp+98h] [xbp-C98h] BYREF
  __int64 v283; // [xsp+A0h] [xbp-C90h]
  __int64 v284; // [xsp+A8h] [xbp-C88h]
  void *__src; // [xsp+B0h] [xbp-C80h] BYREF
  unsigned __int64 v286; // [xsp+B8h] [xbp-C78h]
  void *v287; // [xsp+C0h] [xbp-C70h] BYREF
  __int64 v288; // [xsp+C8h] [xbp-C68h]
  __int64 v289; // [xsp+D0h] [xbp-C60h]
  void *__dst[2]; // [xsp+4C0h] [xbp-870h] BYREF
  __int128 v291; // [xsp+4D0h] [xbp-860h]
  void *v292[2]; // [xsp+4E0h] [xbp-850h]
  __int64 v293; // [xsp+4F0h] [xbp-840h]
  void *__ptr; // [xsp+8C8h] [xbp-468h] BYREF
  void *v295; // [xsp+8D0h] [xbp-460h]
  _BYTE v296[20]; // [xsp+8D8h] [xbp-458h]
  __int128 v297; // [xsp+8ECh] [xbp-444h]
  __int128 v298; // [xsp+8FCh] [xbp-434h]
  int v299; // [xsp+90Ch] [xbp-424h]

  v4 = a1;
  v5 = (__int64)a3;
  v6 = *(unsigned __int8 *)(a1 + 289);
  *(_BYTE *)(a1 + 289) = 0;
  v7 = (unsigned __int8 *)a2 + 5;
  v8 = (unsigned __int64)a2 + *a2 + 5;
  __src = (char *)a2 + 5;
  v286 = v8;
  sub_100063440(0, a3);
  if ( (unsigned int)*((unsigned __int8 *)a2 + 4) - 5 <= 0x2B )
  {
    switch ( *((_BYTE *)a2 + 4) )
    {
      case 5:
        v9 = *(_QWORD **)v5;
        if ( !*(_QWORD *)v5 )
          goto LABEL_473;
        *(_QWORD *)(v5 + 8) = 0;
        qfree(v9);
        *(_QWORD *)v5 = 0;
        *(_QWORD *)(v5 + 16) = 0;
        if ( (v6 & 1) == 0 )
          return;
        goto LABEL_474;
      case 0xA:
        *(_QWORD *)(*(_QWORD *)(v4 + 440) + 672LL) = unpack_dq((unsigned __int64 *)&__src, v8);
        v76 = unpack_dd((unsigned __int64 *)&__src, v286);
        if ( v76 )
          *(_BYTE *)(v4 + 184) = 1;
        v77 = (const char *)__src;
        v78 = v286;
        v79 = (unsigned __int8 *)__src;
        while ( (unsigned __int64)v79 < v286 )
        {
          if ( !*v79++ )
          {
            __src = v79;
            v81 = *(_QWORD **)(v4 + 440);
            v82 = v81 + 85;
            if ( v77 )
            {
              v83 = strlen(v77);
              if ( v83 )
              {
                v84 = v83;
                v85 = v83 + 1;
                v86 = (_QWORD *)v81[85];
                if ( v81[87] < v83 + 1 )
                {
                  v86 = qvector_reserve(v81 + 85, v86, v85, 1u);
                  *v82 = v86;
                }
                v81[86] = v85;
                memmove(v86, v77, v84);
                *(_BYTE *)(v81[85] + v84) = 0;
                v77 = (const char *)__src;
                v78 = v286;
                goto LABEL_417;
              }
            }
            v77 = (const char *)v79;
LABEL_416:
            v82[1] = 0;
LABEL_417:
            v249 = (char *)v77;
            while ( (unsigned __int64)v249 < v78 )
            {
              if ( !*v249++ )
              {
                __src = v249;
                v251 = *(_QWORD **)(v4 + 440);
                v252 = v251 + 88;
                if ( v77 )
                {
                  v253 = strlen(v77);
                  if ( v253 )
                  {
                    v254 = v253;
                    v255 = v253 + 1;
                    v256 = (_QWORD *)v251[88];
                    if ( v251[90] < v253 + 1 )
                    {
                      v256 = qvector_reserve(v251 + 88, v256, v255, 1u);
                      *v252 = v256;
                    }
                    v251[89] = v255;
                    memmove(v256, v77, v254);
                    *(_BYTE *)(v251[88] + v254) = 0;
                    v78 = v286;
LABEL_427:
                    *(_DWORD *)(*(_QWORD *)(v4 + 440) + 728LL) = unpack_dd((unsigned __int64 *)&__src, v78);
                    (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(v4 + 440) + 96LL))(
                      *(_QWORD *)(v4 + 440),
                      v76 != 0);
                    v295 = nullptr;
                    __ptr = nullptr;
                    *(_QWORD *)v296 = 0;
                    __dst[0] = nullptr;
                    v257 = (*(__int64 (__fastcall **)(_QWORD, void **, void **))(**(_QWORD **)(v4 + 440) + 104LL))(
                             *(_QWORD *)(v4 + 440),
                             __dst,
                             &__ptr);
                    if ( *(_BYTE *)(v4 + 184) == 1 )
                      sub_100000B44();
                    sub_10002E2F0((_QWORD **)v5, v257);
                    sub_1000530E4((_QWORD **)v5, (__int64)__dst[0]);
                    if ( v257 == 1 )
                    {
                      if ( *(_BYTE *)(v4 + 184) == 1 )
                        sub_100000B44();
                      j__serialize_dynamic_register_set(v5, *(_QWORD *)(v4 + 440) + 544LL);
                    }
                    else
                    {
                      sub_10004ED18((_QWORD **)v5, (__int64)&__ptr);
                    }
                    v35 = __ptr;
                    if ( __ptr )
                    {
LABEL_435:
                      v295 = nullptr;
                      qfree(v35);
                    }
LABEL_436:
                    if ( (v6 & 1) != 0 )
                      goto LABEL_474;
                    return;
                  }
                }
LABEL_426:
                v252[1] = 0;
                goto LABEL_427;
              }
            }
            v252 = (_QWORD *)(*(_QWORD *)(v4 + 440) + 704LL);
            goto LABEL_426;
          }
        }
        v82 = (_QWORD *)(*(_QWORD *)(v4 + 440) + 680LL);
        goto LABEL_416;
      case 0xB:
        goto LABEL_473;
      case 0xC:
        v295 = nullptr;
        __ptr = nullptr;
        *(_QWORD *)v296 = 0;
        __dst[1] = nullptr;
        __dst[0] = nullptr;
        *(_QWORD *)&v291 = 0;
        v109 = (*(__int64 (__fastcall **)(_QWORD, void **, void **))(**(_QWORD **)(v4 + 440) + 72LL))(
                 *(_QWORD *)(v4 + 440),
                 &__ptr,
                 __dst);
        sub_10002E2F0((_QWORD **)v5, v109);
        if ( v109 == 1 )
          sub_10005E908((_QWORD **)v5, &__ptr);
        else
          sub_10004ED18((_QWORD **)v5, (__int64)__dst);
        if ( *(_BYTE *)(v4 + 184) == 1 )
          sub_100000B44();
        if ( __dst[0] )
        {
          __dst[1] = nullptr;
          qfree(__dst[0]);
        }
        v191 = __ptr;
        if ( __ptr )
        {
          v192 = (char *)v295;
          if ( v295 )
          {
            v193 = 0;
            do
            {
              v194 = (char *)__ptr;
              v195 = (char *)__ptr + v193;
              v196 = *(void **)((char *)__ptr + v193 + 8);
              if ( v196 )
              {
                *((_QWORD *)v195 + 2) = 0;
                qfree(v196);
                *((_QWORD *)v195 + 1) = 0;
                *(_QWORD *)&v194[v193 + 24] = 0;
              }
              v193 += 32;
              --v192;
            }
            while ( v192 );
            v191 = __ptr;
          }
          v295 = nullptr;
          qfree(v191);
        }
        goto LABEL_436;
      case 0xD:
        v110 = v7;
        while ( (unsigned __int64)v110 < v8 )
        {
          if ( !*v110++ )
          {
            __src = v110;
LABEL_218:
            v165 = v110;
            while ( (unsigned __int64)v165 < v8 )
            {
              if ( !*v165++ )
              {
                __src = v165;
LABEL_223:
                v167 = v165;
                while ( (unsigned __int64)v167 < v8 )
                {
                  if ( !*v167++ )
                  {
                    __src = v167;
LABEL_228:
                    v274 = v4;
                    v275 = (_QWORD **)v5;
                    v278 = v6;
                    v169 = unpack_dd((unsigned __int64 *)&__src, v8);
                    v170 = __src;
                    v171 = (unsigned __int8 *)__src;
                    while ( (unsigned __int64)v171 < v286 )
                    {
                      if ( !*v171++ )
                      {
                        __src = v171;
                        goto LABEL_239;
                      }
                    }
                    v170 = nullptr;
LABEL_239:
                    v273 = unpack_dd((unsigned __int64 *)&__src, v286);
                    __dst[1] = nullptr;
                    __dst[0] = nullptr;
                    *(_QWORD *)&v291 = 0;
                    v295 = nullptr;
                    __ptr = nullptr;
                    *(_QWORD *)v296 = 0;
                    v296[8] = 1;
                    v177 = (char *)__src;
                    v272 = v169;
                    if ( (unsigned __int64)__src >= v286 )
                    {
                      v178 = 0;
                    }
                    else
                    {
                      v177 = (char *)__src + 1;
                      v178 = *(unsigned __int8 *)__src;
                    }
                    v271 = v170;
                    __src = v177;
                    v296[8] = v178 != 0;
                    v197 = unpack_dd((unsigned __int64 *)&__src, v286);
                    if ( v197 >= 1 )
                    {
                      for ( i = 0; i != v197; ++i )
                      {
                        v200 = __src;
                        v199 = v286;
                        if ( (unsigned __int64)__src >= v286 )
                          break;
                        v201 = v295;
                        v202 = (char *)__ptr;
                        if ( *(_QWORD *)v296 < (unsigned __int64)v295 + 1 )
                        {
                          v202 = (char *)qvector_reserve(&__ptr, __ptr, (unsigned __int64)v295 + 1, 0x18u);
                          __ptr = v202;
                          v201 = v295;
                          v200 = __src;
                          v199 = v286;
                        }
                        v203 = 0;
                        v204 = &v202[24 * (_QWORD)v201];
                        *(_QWORD *)v204 = 0;
                        *((_QWORD *)v204 + 1) = 0;
                        *((_QWORD *)v204 + 2) = 0;
                        v295 = (char *)v295 + 1;
                        do
                        {
                          if ( (unsigned __int64)&v200[v203] >= v199 )
                            goto LABEL_271;
                        }
                        while ( v200[v203++] );
                        __src = &v200[v203];
                        if ( v200 )
                        {
                          v206 = *(_QWORD **)v204;
                          v207 = *((_QWORD *)v204 + 1);
                          v208 = v207 != 0;
                          v209 = v207 - 1;
                          if ( v208 )
                            v210 = v209;
                          else
                            v210 = 0;
                          if ( *((_QWORD *)v204 + 2) < (unsigned __int64)(v210 + v203) )
                          {
                            v206 = qvector_reserve(v204, v206, v210 + v203, 1u);
                            *(_QWORD *)v204 = v206;
                          }
                          *((_QWORD *)v204 + 1) = v210 + v203;
                          *((_BYTE *)v206 + v203 + v210 - 1) = 0;
                          memmove((void *)(*(_QWORD *)v204 + v210), v200, v203 - 1);
                        }
LABEL_271:
                        ;
                      }
                    }
                    v211 = -3;
                    if ( v7 )
                    {
                      v4 = v274;
                      v212 = v275;
                      v213 = v278;
                      if ( v165 )
                      {
                        if ( v271 )
                        {
                          v211 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *, unsigned __int8 *, void **, unsigned __int8 *, _QWORD, void *, __int64, void **))(**(_QWORD **)(v274 + 440) + 128LL))(
                                   *(_QWORD *)(v274 + 440),
                                   v7,
                                   v110,
                                   &__ptr,
                                   v165,
                                   v272,
                                   v271,
                                   v273,
                                   __dst);
                          if ( *(_BYTE *)(v274 + 184) == 1 )
                            sub_100000B44();
                        }
                      }
                    }
                    else
                    {
                      v4 = v274;
                      v212 = v275;
                      v213 = v278;
                    }
                    sub_1000501B0(v4, v212, v211, (__int64)__dst);
                    v266 = __ptr;
                    if ( __ptr )
                    {
                      v267 = (char *)v295;
                      if ( v295 )
                      {
                        v268 = 0;
                        do
                        {
                          v269 = *(void **)((char *)__ptr + v268);
                          if ( v269 )
                          {
                            v270 = (char *)__ptr + v268;
                            *(_QWORD *)((char *)__ptr + v268 + 8) = 0;
                            qfree(v269);
                            *v270 = 0;
                            v270[2] = 0;
                          }
                          v268 += 24;
                          --v267;
                        }
                        while ( v267 );
                        v266 = __ptr;
                      }
                      v295 = nullptr;
                      qfree(v266);
                    }
                    if ( __dst[0] )
                    {
                      __dst[1] = nullptr;
                      qfree(__dst[0]);
                    }
                    if ( (v213 & 1) != 0 )
                      goto LABEL_474;
                    return;
                  }
                }
                v165 = nullptr;
                goto LABEL_228;
              }
            }
            v165 = v110;
            v110 = nullptr;
            goto LABEL_223;
          }
        }
        v110 = v7;
        v7 = nullptr;
        goto LABEL_218;
      case 0xE:
        v295 = nullptr;
        __ptr = nullptr;
        *(_QWORD *)v296 = 0;
        v97 = (*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(v4 + 440) + 160LL))(
                *(_QWORD *)(v4 + 440),
                &__ptr);
        if ( *(_BYTE *)(v4 + 184) == 1 )
          sub_100000B44();
        sub_10002E2F0((_QWORD **)v5, v97);
        if ( (v97 & 0x80000000) != 0 )
          sub_10004ED18((_QWORD **)v5, (__int64)&__ptr);
        v98 = __ptr;
        if ( __ptr )
          goto LABEL_213;
        goto LABEL_436;
      case 0xF:
        v295 = nullptr;
        __ptr = nullptr;
        *(_QWORD *)v296 = 0;
        v103 = sub_1000500C8(v4, (__int64)&__ptr, (unsigned __int64 *)&__src);
        sub_1000501B0(v4, (_QWORD **)v5, v103, (__int64)&__ptr);
        v35 = __ptr;
        if ( !__ptr )
          goto LABEL_436;
        goto LABEL_435;
      case 0x10:
        v104 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 440) + 120LL))(*(_QWORD *)(v4 + 440));
        sub_10002E2F0((_QWORD **)v5, v104);
        if ( *(_BYTE *)(v4 + 184) == 1 )
          sub_100000B44();
        goto LABEL_473;
      case 0x11:
        v121 = unpack_dd((unsigned __int64 *)&__src, v8);
        if ( (*(_BYTE *)(v4 + 288) & 1) != 0 )
          v122 = 0;
        else
          v122 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v4 + 440) + 136LL))(
                   *(_QWORD *)(v4 + 440),
                   v4 + 296,
                   v121);
        sub_10002E2F0((_QWORD **)v5, v122);
        if ( v122 >= 1 )
        {
          sub_10005EEE0((_QWORD **)v5, v4 + 296);
          if ( *(_BYTE *)(v4 + 184) == 1 )
          {
            sub_1000599D8(v4 + 296, (char *)&__ptr, 0x400u);
            sub_100000B44();
          }
          goto LABEL_436;
        }
        if ( *(_BYTE *)(v4 + 288) == 1 )
          goto LABEL_436;
        goto LABEL_474;
      case 0x12:
        v295 = nullptr;
        __ptr = nullptr;
        *(_QWORD *)v296 = 0;
        v120 = (*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(v4 + 440) + 152LL))(
                 *(_QWORD *)(v4 + 440),
                 &__ptr);
        if ( *(_BYTE *)(v4 + 184) == 1 )
          sub_100000B44();
        sub_10002E2F0((_QWORD **)v5, v120);
        if ( (v120 & 0x80000000) != 0 )
          sub_10004ED18((_QWORD **)v5, (__int64)&__ptr);
        v98 = __ptr;
        if ( __ptr )
          goto LABEL_213;
        goto LABEL_436;
      case 0x13:
        if ( (unsigned __int64)v7 >= v8 )
        {
          v54 = 0;
        }
        else
        {
          v7 = (unsigned __int8 *)a2 + 6;
          v54 = *((unsigned __int8 *)a2 + 5);
        }
        if ( (unsigned __int64)v7 >= v8 )
        {
          v179 = 0;
        }
        else
        {
          v180 = *v7++;
          v179 = v180;
        }
        __src = v7;
        v295 = nullptr;
        __ptr = nullptr;
        *(_QWORD *)v296 = 0;
        __dst[1] = nullptr;
        __dst[0] = nullptr;
        *(_QWORD *)&v291 = 0;
        if ( v179 )
          v181 = __dst;
        else
          v181 = nullptr;
        (*(void (__fastcall **)(_QWORD, void **, bool, void **))(**(_QWORD **)(v4 + 440) + 192LL))(
          *(_QWORD *)(v4 + 440),
          &__ptr,
          v54 != 0,
          v181);
        sub_10005327C(v4, (__int64 **)&__ptr);
        v182 = sub_100059D40(*(_QWORD *)(v4 + 440));
        if ( v182 )
        {
          v190 = sub_1000534C0(v4, *(__int64 **)v182, *(char ***)(v182 + 24), *(unsigned int *)(v182 + 8));
          sub_100059698(*(_QWORD **)(v4 + 440));
        }
        else
        {
          v190 = 0;
        }
        if ( v179 )
        {
          v216 = (int)__dst[1];
          sub_10002E2F0((_QWORD **)v5, (unsigned int)__dst[1]);
          if ( v216 )
          {
            for ( j = 0; j != v216; ++j )
            {
              v218 = (unsigned int *)((char *)__dst[0] + 32 * j);
              sub_10002E2F0((_QWORD **)v5, *v218);
              sub_10004ED18((_QWORD **)v5, (__int64)(v218 + 2));
            }
          }
        }
        if ( *(_BYTE *)(v4 + 184) == 1 )
        {
          sub_1000537FC(v190, v183, v184, v185, v186, v187, v188, v189);
          sub_100000B44();
        }
        v219 = __dst[0];
        if ( __dst[0] )
        {
          v220 = (char *)__dst[1];
          if ( __dst[1] )
          {
            v221 = 0;
            do
            {
              v222 = (char *)__dst[0];
              v223 = (char *)__dst[0] + v221;
              v224 = *(void **)((char *)__dst[0] + v221 + 8);
              if ( v224 )
              {
                *((_QWORD *)v223 + 2) = 0;
                qfree(v224);
                *((_QWORD *)v223 + 1) = 0;
                *(_QWORD *)&v222[v221 + 24] = 0;
              }
              v221 += 32;
              --v220;
            }
            while ( v220 );
            v219 = __dst[0];
          }
          __dst[1] = nullptr;
          qfree(v219);
        }
        sub_100057F78((char **)&__ptr);
        if ( (v6 & 1) != 0 )
          goto LABEL_474;
        return;
      case 0x14:
        sub_10005EC58(v4 + 296, (unsigned __int64 *)&__src);
        v99 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 440) + 168LL))(
                *(_QWORD *)(v4 + 440),
                v4 + 296);
        if ( *(_BYTE *)(v4 + 184) == 1 )
          sub_100000B44();
        sub_10002E2F0((_QWORD **)v5, v99);
        goto LABEL_473;
      case 0x15:
        v75 = unpack_dd((unsigned __int64 *)&__src, v8);
        v41 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 440) + 200LL))(*(_QWORD *)(v4 + 440), v75);
        if ( *(_BYTE *)(v4 + 184) == 1 )
          sub_100000B44();
        goto LABEL_55;
      case 0x16:
        v40 = unpack_dd((unsigned __int64 *)&__src, v8);
        v41 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 440) + 208LL))(*(_QWORD *)(v4 + 440), v40);
        if ( *(_BYTE *)(v4 + 184) == 1 )
          sub_100000B44();
LABEL_55:
        sub_10002E2F0((_QWORD **)v5, v41);
        goto LABEL_473;
      case 0x17:
        v105 = unpack_dd((unsigned __int64 *)&__src, v8);
        v106 = unpack_dd((unsigned __int64 *)&__src, v286);
        v39 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v4 + 440) + 216LL))(
                *(_QWORD *)(v4 + 440),
                v105,
                v106);
        if ( *(_BYTE *)(v4 + 184) == 1 )
          sub_100000B44();
        goto LABEL_52;
      case 0x18:
        v295 = nullptr;
        __ptr = nullptr;
        *(_QWORD *)v296 = 0;
        __dst[1] = nullptr;
        __dst[0] = nullptr;
        *(_QWORD *)&v291 = 0;
        v107 = (*(__int64 (**)(void))(**(_QWORD **)(v4 + 440) + 256LL))();
        if ( *(_BYTE *)(v4 + 184) == 1 )
          sub_100000B44();
        sub_10002E2F0((_QWORD **)v5, v107 + 4);
        if ( v107 == 1 )
          sub_10002E2F0((_QWORD **)v5, 0);
        else
          sub_10004ED18((_QWORD **)v5, (__int64)__dst);
        if ( __dst[0] )
        {
          __dst[1] = nullptr;
          qfree(__dst[0]);
        }
        sub_10000B7DC((char **)&__ptr);
        if ( (v6 & 1) != 0 )
          goto LABEL_474;
        return;
      case 0x19:
        v133 = unpack_dq((unsigned __int64 *)&__src, v8);
        v134 = unpack_dd((unsigned __int64 *)&__src, v286);
        v135 = operator new[](v134);
        v295 = nullptr;
        __ptr = nullptr;
        *(_QWORD *)v296 = 0;
        v136 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, void *, _QWORD, void **))(**(_QWORD **)(v4 + 440)
                                                                                            + 288LL))(
                 *(_QWORD *)(v4 + 440),
                 v133 - 1,
                 v135,
                 v134,
                 &__ptr);
        if ( *(_BYTE *)(v4 + 184) == 1 )
          sub_100000B44();
        if ( v136 >= 1 && v134 == 1 )
        {
          if ( !*(_BYTE *)(v4 + 184) )
            goto LABEL_305;
        }
        else if ( !*(_BYTE *)(v4 + 184) )
        {
          goto LABEL_305;
        }
        sub_100000B44();
LABEL_305:
        sub_10002E2F0((_QWORD **)v5, v136);
        if ( v136 < 1 )
          sub_10004ED18((_QWORD **)v5, (__int64)&__ptr);
        else
          sub_10004EC04((_QWORD **)v5, v135, v136);
        operator delete[](v135);
        v35 = __ptr;
        if ( __ptr )
          goto LABEL_435;
        goto LABEL_436;
      case 0x1A:
        v123 = unpack_dq((unsigned __int64 *)&__src, v8);
        v124 = unpack_dd((unsigned __int64 *)&__src, v286);
        v125 = operator new[](v124);
        v126 = v125;
        v127 = __src;
        if ( (char *)__src + v124 >= __src && (unsigned __int64)__src + v124 <= v286 )
        {
          __src = (char *)__src + v124;
          memcpy(v125, v127, v124);
        }
        v295 = nullptr;
        __ptr = nullptr;
        *(_QWORD *)v296 = 0;
        v129 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, void *, _QWORD, void **))(**(_QWORD **)(v4 + 440)
                                                                                            + 296LL))(
                 *(_QWORD *)(v4 + 440),
                 v123 - 1,
                 v126,
                 v124,
                 &__ptr);
        if ( *(_BYTE *)(v4 + 184) == 1 )
          sub_100000B44();
        if ( v129 )
          v130 = v124 == 1;
        else
          v130 = 0;
        if ( v130 )
        {
          if ( !*(_BYTE *)(v4 + 184) )
            goto LABEL_299;
        }
        else if ( !*(_BYTE *)(v4 + 184) )
        {
          goto LABEL_299;
        }
        sub_100000B44();
LABEL_299:
        sub_10002E2F0((_QWORD **)v5, v129);
        if ( v129 <= 0 )
          sub_10004ED18((_QWORD **)v5, (__int64)&__ptr);
        operator delete[](v126);
        v35 = __ptr;
        if ( __ptr )
          goto LABEL_435;
        goto LABEL_436;
      case 0x1B:
        if ( !(unsigned int)sub_10004E4B4(v4, (_QWORD **)v5, (unsigned __int64 *)&__src) && *(_BYTE *)(v4 + 184) == 1 )
          goto LABEL_341;
        goto LABEL_473;
      case 0x1C:
        sub_10004EEDC(v4, (_QWORD **)v5, (unsigned __int64 *)&__src);
        goto LABEL_473;
      case 0x1D:
        v138 = unpack_dd((unsigned __int64 *)&__src, v8);
        v139 = unpack_dq((unsigned __int64 *)&__src, v286) - 1;
        v295 = nullptr;
        __ptr = nullptr;
        *(_QWORD *)v296 = 0;
        v140 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, void **))(**(_QWORD **)(v4 + 440) + 360LL))(
                 *(_QWORD *)(v4 + 440),
                 v138,
                 v139,
                 &__ptr);
        sub_10002E2F0((_QWORD **)v5, v140);
        if ( v140 != 1 )
          sub_10004ED18((_QWORD **)v5, (__int64)&__ptr);
        if ( *(_BYTE *)(v4 + 184) == 1 )
          sub_100000B44();
        v35 = __ptr;
        if ( !__ptr )
          goto LABEL_436;
        goto LABEL_435;
      case 0x1E:
        v36 = unpack_dd((unsigned __int64 *)&__src, v8);
        v37 = unpack_dq((unsigned __int64 *)&__src, v286) - 1;
        v38 = (unsigned int)unpack_dd((unsigned __int64 *)&__src, v286) - 1;
        v39 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, __int64))(**(_QWORD **)(v4 + 440) + 304LL))(
                *(_QWORD *)(v4 + 440),
                v36,
                v37,
                v38);
        if ( *(_BYTE *)(v4 + 184) == 1 )
          sub_100000B44();
LABEL_52:
        sub_10002E2F0((_QWORD **)v5, v39);
        goto LABEL_473;
      case 0x1F:
        v295 = nullptr;
        __ptr = nullptr;
        *(_QWORD *)v296 = 0;
        __dst[1] = nullptr;
        __dst[0] = nullptr;
        *(_QWORD *)&v291 = 0;
        v287 = nullptr;
        v288 = 0;
        v289 = 0;
        v63 = unpack_dd((unsigned __int64 *)&__src, v8);
        v64 = unpack_dd((unsigned __int64 *)&__src, v286);
        v65 = unpack_dd((unsigned __int64 *)&__src, v286);
        v72 = v65;
        v73 = *(_QWORD *)(v4 + 440);
        v74 = *(_QWORD *)(v73 + 552);
        if ( !v74 )
          LODWORD(v74) = *(_DWORD *)(v73 + 648);
        if ( v65 < 1 || v65 > (int)v74 )
        {
          sub_10000295C(
            (char **)&__ptr,
            "read_regs(tid=%d, mask=%x, nregs=%d) => 0 (incorrect nregs, should be in range 0..%d)\n",
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            v63);
          v228 = 0;
        }
        else
        {
          v226 = v65 + 7;
          if ( v65 + 7 < 0 )
            v226 = v65 + 14;
          sub_10000FC08((_QWORD **)__dst, (__int64)v226 >> 3);
          v227 = __src;
          if ( (char *)__src + (unsigned __int64)__dst[1] >= __src
            && (unsigned __int64)__src + (unsigned __int64)__dst[1] <= v286 )
          {
            __src = (char *)__src + (unsigned __int64)__dst[1];
            memcpy(__dst[0], v227, (size_t)__dst[1]);
          }
          sub_100053908((__int64)&v287, (unsigned int)v74);
          v228 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, void *, void **))(**(_QWORD **)(v4 + 440) + 224LL))(
                   *(_QWORD *)(v4 + 440),
                   v63,
                   v64,
                   v287,
                   &__ptr);
          if ( *(_BYTE *)(v4 + 184) == 1 )
            sub_100000B44();
        }
        sub_10002E2F0((_QWORD **)v5, v228);
        if ( v228 == 1 )
          sub_10005F84C((_BYTE *)v5, (__int64)v287, v72, (__int64)__dst[0]);
        else
          sub_10004ED18((_QWORD **)v5, (__int64)&__ptr);
        v229 = v287;
        if ( v287 )
        {
          v230 = v288;
          if ( v288 )
          {
            v231 = 0;
            do
            {
              v232 = (char *)v287;
              if ( *(int *)((char *)v287 + v231) >= -1 )
              {
                v233 = (char *)v287 + v231;
                v234 = *(void **)((char *)v287 + v231 + 8);
                if ( v234 )
                {
                  *((_QWORD *)v233 + 2) = 0;
                  qfree(v234);
                  *((_QWORD *)v233 + 1) = 0;
                  *(_QWORD *)&v232[v231 + 24] = 0;
                }
                *(_DWORD *)&v232[v231] = -2;
              }
              v231 += 32;
              --v230;
            }
            while ( v230 );
            v229 = v287;
          }
          v288 = 0;
          qfree(v229);
        }
        if ( __dst[0] )
        {
          __dst[1] = nullptr;
          qfree(__dst[0]);
        }
        v35 = __ptr;
        if ( !__ptr )
          goto LABEL_436;
        goto LABEL_435;
      case 0x20:
        v51 = unpack_dd((unsigned __int64 *)&__src, v8);
        v52 = unpack_dd((unsigned __int64 *)&__src, v286);
        LODWORD(__ptr) = -2;
        *(_QWORD *)&v296[8] = 0;
        *(_QWORD *)v296 = 0;
        v295 = (void *)-1LL;
        if ( (unsigned __int64)__src < v286 )
          sub_100057018((__int64)&__ptr, (__int64)&__src);
        __dst[1] = nullptr;
        __dst[0] = nullptr;
        *(_QWORD *)&v291 = 0;
        v53 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, void **, void **))(**(_QWORD **)(v4 + 440) + 232LL))(
                *(_QWORD *)(v4 + 440),
                v51,
                v52,
                &__ptr,
                __dst);
        if ( *(_BYTE *)(v4 + 184) == 1 )
          sub_100000B44();
        sub_10002E2F0((_QWORD **)v5, v53);
        if ( (v53 & 0x80000000) != 0 )
          sub_10004ED18((_QWORD **)v5, (__int64)__dst);
        if ( __dst[0] )
        {
          __dst[1] = nullptr;
          qfree(__dst[0]);
        }
        if ( (int)__ptr >= -1 && v295 )
        {
          *(_QWORD *)v296 = 0;
          qfree(v295);
        }
        goto LABEL_436;
      case 0x21:
        v100 = unpack_dd((unsigned __int64 *)&__src, v8);
        v101 = unpack_dd((unsigned __int64 *)&__src, v286);
        v295 = nullptr;
        __ptr = nullptr;
        *(_QWORD *)v296 = 0;
        v102 = (*(__int64 (__fastcall **)(_QWORD, void **, __int64, __int64, void **))(**(_QWORD **)(v4 + 440) + 240LL))(
                 *(_QWORD *)(v4 + 440),
                 __dst,
                 v100,
                 v101,
                 &__ptr);
        if ( *(_BYTE *)(v4 + 184) == 1 )
          sub_100000B44();
        sub_10002E2F0((_QWORD **)v5, v102);
        if ( v102 == 1 )
          sub_1000530E4((_QWORD **)v5, (__int64)__dst[0] + 1);
        else
          sub_10004ED18((_QWORD **)v5, (__int64)&__ptr);
        v35 = __ptr;
        if ( !__ptr )
          goto LABEL_436;
        goto LABEL_435;
      case 0x22:
        v42 = unpack_dd((unsigned __int64 *)&__src, v8);
        v43 = sub_10005F094(v42, (unsigned __int64 *)&__src);
        (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(v4 + 440) + 184LL))(
          *(_QWORD *)(v4 + 440),
          v43,
          v42);
        if ( v43 )
        {
          v44 = *(v43 - 1);
          if ( v44 )
          {
            v45 = 0;
            v46 = 56 * v44;
            v47 = v43;
            do
            {
              v48 = &v47[(unsigned __int64)v46 / 8];
              v49 = (void *)v47[(unsigned __int64)v46 / 8 - 3];
              if ( v49 )
              {
                *(v48 - 2) = 0;
                qfree(v49);
                *(v48 - 3) = 0;
                v47[(unsigned __int64)v46 / 8 - 1] = 0;
              }
              v50 = (void *)*(v48 - 6);
              if ( v50 )
              {
                v47[(unsigned __int64)v46 / 8 - 5] = 0;
                qfree(v50);
                *(v48 - 6) = 0;
                v47[(unsigned __int64)v46 / 8 - 4] = 0;
              }
              v47 -= 7;
              v45 += 56;
            }
            while ( v46 != v45 );
          }
          operator delete[](v43 - 2);
        }
        if ( *(_BYTE *)(v4 + 184) == 1 )
          goto LABEL_341;
        goto LABEL_473;
      case 0x23:
        v145 = v7;
        while ( (unsigned __int64)v145 < v8 )
        {
          if ( !*v145++ )
          {
            __src = v145;
            goto LABEL_235;
          }
        }
        v7 = nullptr;
LABEL_235:
        v174 = unpack_dd((unsigned __int64 *)&__src, v8);
        v175 = sub_100060CE8((_QWORD *)v4);
        if ( v175 == -1 )
        {
          v214 = 0;
          v215 = -1;
        }
        else
        {
          if ( v174 )
          {
            v176 = fopenRB((const char *)v7);
          }
          else
          {
            if ( qdirname((char *)&__ptr, 0x400u, (char *)v7) && !qisdir((const char *)&__ptr) )
            {
              qmake_full_path((unsigned __int64)__dst, 1024, (char *)&__ptr);
              qgetcwd((char *)&v287, 0x400u);
              v258 = strlen((const char *)&v287);
              if ( !strncmp((const char *)__dst, (const char *)&v287, v258) )
              {
                v282 = nullptr;
                v283 = 0;
                v284 = 0;
                v276 = v5;
                do
                {
                  if ( qisdir((const char *)__dst) )
                    break;
                  v259 = v282;
                  sub_100046500(&v279, (char *)__dst);
                  sub_100053BE4((_QWORD **)&v282, (__int64)v259, (__int64 *)&v279);
                  sub_100006678(&v279);
                }
                while ( qdirname((char *)__dst, 0x400u, (char *)__dst) );
                if ( v283 )
                {
                  v260 = 0;
                  v261 = v283 - 1;
                  do
                  {
                    v262 = v261;
                    if ( *(_QWORD *)((char *)v282 + v260 + 8) )
                      v263 = *(const char **)((char *)v282 + v260);
                    else
                      v263 = &byte_10007AE40;
                    if ( *(_BYTE *)(v4 + 184) == 1 )
                      sub_100000B44();
                    if ( (unsigned int)qmkdir(v263, 0x1FFu) )
                      break;
                    v261 = v262 - 1;
                    v260 += 24;
                  }
                  while ( v262 );
                }
                sub_100011A7C((char **)&v282);
                v5 = v276;
              }
            }
            v176 = fopenWB((const char *)v7);
          }
          *(_QWORD *)(v4 + 8LL * v175 + 8) = v176;
          v214 = 0;
          if ( v176 )
            v215 = v175;
          else
            v215 = -1;
          if ( v176 && v174 )
          {
            v214 = qfsize(v176);
            v215 = v175;
          }
        }
        if ( *(_BYTE *)(v4 + 184) == 1 )
          sub_100000B44();
        sub_10002E2F0((_QWORD **)v5, v215);
        if ( v215 == -1 )
        {
          v264 = __error();
          sub_10002E2F0((_QWORD **)v5, *v264);
        }
        else
        {
          sub_1000530E4((_QWORD **)v5, v214);
        }
        goto LABEL_473;
      case 0x24:
        v141 = unpack_dd((unsigned __int64 *)&__src, v8);
        v142 = v141;
        if ( v141 <= 0xF )
        {
          v143 = *(FILE **)(v4 + 8 + 8LL * v141);
          if ( v143 )
          {
            v144 = fileno(*(FILE **)(v4 + 8 + 8LL * v141));
            fchmod(v144, 0x1EDu);
            qfclose(v143);
            *(_QWORD *)(v4 + 8 + 8LL * v142) = 0;
          }
        }
        if ( *(_BYTE *)(v4 + 184) == 1 )
          goto LABEL_341;
        goto LABEL_473;
      case 0x25:
        v57 = unpack_dd((unsigned __int64 *)&__src, v8);
        v58 = unpack_dq((unsigned __int64 *)&__src, v286);
        v59 = unpack_dd((unsigned __int64 *)&__src, v286);
        v60 = v59;
        if ( v59 < 1 )
        {
          v62 = 0;
          v61 = nullptr;
        }
        else
        {
          v61 = operator new[]((unsigned int)v59);
          qfseek(*(FILE **)(v4 + 8 + 8LL * v57), v58, 0);
          v62 = qfread(*(FILE **)(v4 + 8 + 8LL * v57), v61, (unsigned int)v60);
        }
        sub_10002E2F0((_QWORD **)v5, v62);
        if ( v60 == v62 )
        {
          sub_10004EC04((_QWORD **)v5, v61, v60);
        }
        else
        {
          v225 = __error();
          sub_10002E2F0((_QWORD **)v5, *v225);
        }
        if ( v61 )
          operator delete[](v61);
        if ( *(_BYTE *)(v4 + 184) == 1 )
          goto LABEL_341;
        goto LABEL_473;
      case 0x26:
        v87 = unpack_dd((unsigned __int64 *)&__src, v8);
        v88 = unpack_dq((unsigned __int64 *)&__src, v286);
        v89 = unpack_dd((unsigned __int64 *)&__src, v286);
        v90 = v89;
        if ( v89 )
        {
          v91 = operator new[](v89);
          v92 = v91;
          v93 = __src;
          if ( (char *)__src + v90 >= __src && (unsigned __int64)__src + v90 <= v286 )
          {
            __src = (char *)__src + v90;
            memcpy(v91, v93, v90);
          }
        }
        else
        {
          v92 = nullptr;
        }
        qfseek(*(FILE **)(v4 + 8 + 8LL * v87), v88, 0);
        if ( v92 )
          v235 = qfwrite(*(FILE **)(v4 + 8 + 8LL * v87), v92, v90);
        else
          v235 = 0;
        sub_10002E2F0((_QWORD **)v5, v90);
        if ( v90 != v235 )
        {
          v236 = __error();
          sub_10002E2F0((_QWORD **)v5, *v236);
        }
        if ( v92 )
          operator delete[](v92);
        if ( *(_BYTE *)(v4 + 184) == 1 )
LABEL_341:
          sub_100000B44();
        goto LABEL_473;
      case 0x27:
        v108 = sub_1000632BC(v4 + 192, (_QWORD **)v5, (unsigned __int64)v7, v8);
        if ( !v108 )
          goto LABEL_473;
        sub_100063440(v108, (__int64 *)&__ptr);
        sub_10004E350(v5, (__int64 *)&__ptr);
        sub_1000018E0(&__ptr);
        if ( (v6 & 1) == 0 )
          return;
        goto LABEL_474;
      case 0x28:
        v295 = nullptr;
        __ptr = nullptr;
        *(_QWORD *)v296 = 0;
        v95 = unpack_dd((unsigned __int64 *)&__src, v8);
        v96 = (*(__int64 (__fastcall **)(_QWORD, __int64, void **))(**(_QWORD **)(v4 + 440) + 416LL))(
                *(_QWORD *)(v4 + 440),
                v95,
                &__ptr);
        sub_10002E2F0((_QWORD **)v5, v96);
        if ( v96 == 1 )
          sub_10005F26C((_QWORD **)v5, &__ptr);
        v35 = __ptr;
        if ( !__ptr )
          goto LABEL_436;
        goto LABEL_435;
      case 0x29:
        v157 = unpack_dq((unsigned __int64 *)&__src, v8);
        unpack_dd((unsigned __int64 *)&__src, v286);
        unpack_dd((unsigned __int64 *)&__src, v286);
        v158 = unpack_dd((unsigned __int64 *)&__src, v286);
        v287 = nullptr;
        v288 = 0;
        v289 = 0;
        v282 = nullptr;
        v283 = 0;
        v284 = 0;
        v293 = 0;
        *(_OWORD *)v292 = 0u;
        if ( (v158 & 1) != 0 )
          v159 = nullptr;
        else
          v159 = &v282;
        v291 = 0u;
        *(_OWORD *)__dst = 0u;
        sub_10005F4F8(&v287, (_QWORD **)__dst, v159, (unsigned __int64 *)&__src);
        v279 = nullptr;
        v280 = 0;
        v281 = 0;
        __ptr = (void *)0xFFFFFFFFLL;
        v295 = (void *)-1LL;
        v296[0] = 0;
        *(_OWORD *)&v296[4] = 0u;
        v297 = 0u;
        v298 = 0u;
        v299 = 0;
        v160 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(v4 + 440) + 424LL))(
                 *(_QWORD *)(v4 + 440),
                 v157 - 1);
        sub_1000530E4((_QWORD **)v5, v160 + 1);
        if ( v160 == -1 )
        {
          if ( (v158 & 2) != 0 )
            sub_10005EEE0((_QWORD **)v5, (__int64)&__ptr);
          sub_10004ED18((_QWORD **)v5, (__int64)&v279);
        }
        else if ( (v158 & 1) == 0 )
        {
          sub_10005F6D4((_QWORD **)v5, (__int64)&v282, 1);
        }
        free_debug_event((__int64)&__ptr);
        if ( v279 )
        {
          v280 = 0;
          qfree(v279);
        }
        if ( v292[0] )
        {
          v292[1] = nullptr;
          qfree(v292[0]);
          v292[0] = nullptr;
          v293 = 0;
        }
        if ( __dst[0] )
        {
          __dst[1] = nullptr;
          qfree(__dst[0]);
        }
        v237 = v282;
        if ( v282 )
        {
          v238 = v283;
          if ( v283 )
          {
            v239 = 0;
            do
            {
              v240 = (char *)v282;
              v241 = (char *)v282 + v239;
              v242 = *(void **)((char *)v282 + v239 + 8);
              if ( v242 )
              {
                *((_QWORD *)v241 + 2) = 0;
                qfree(v242);
                *((_QWORD *)v241 + 1) = 0;
                *(_QWORD *)&v240[v239 + 24] = 0;
              }
              v239 += 32;
              --v238;
            }
            while ( v238 );
            v237 = v282;
          }
          v283 = 0;
          qfree(v237);
        }
        v243 = v287;
        if ( v287 )
        {
          v244 = v288;
          if ( v288 )
          {
            v245 = 0;
            do
            {
              v246 = (char *)v287;
              v247 = (char *)v287 + v245;
              v248 = *(void **)((char *)v287 + v245 + 8);
              if ( v248 )
              {
                *((_QWORD *)v247 + 2) = 0;
                qfree(v248);
                *((_QWORD *)v247 + 1) = 0;
                *(_QWORD *)&v246[v245 + 24] = 0;
              }
              v245 += 32;
              --v244;
            }
            while ( v244 );
            v243 = v287;
          }
          v288 = 0;
          qfree(v243);
        }
        goto LABEL_436;
      case 0x2A:
        v55 = unpack_dd((unsigned __int64 *)&__src, v8);
        v56 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 440) + 432LL))(*(_QWORD *)(v4 + 440), v55);
        sub_10002E2F0((_QWORD **)v5, v56);
        goto LABEL_473;
      case 0x2B:
        v131 = v7;
        while ( (unsigned __int64)v131 < v8 )
        {
          if ( !*v131++ )
          {
            __src = v131;
            goto LABEL_233;
          }
        }
        v7 = nullptr;
LABEL_233:
        v173 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *))(**(_QWORD **)(v4 + 440) + 536LL))(
                 *(_QWORD *)(v4 + 440),
                 v7);
        sub_10002E2F0((_QWORD **)v5, v173);
        goto LABEL_473;
      case 0x2C:
        v147 = unpack_dq((unsigned __int64 *)&__src, v8) - 1;
        v295 = nullptr;
        __ptr = nullptr;
        *(_QWORD *)v296 = 0;
        v148 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64))(**(_QWORD **)(v4 + 440) + 264LL))(
                 *(_QWORD *)(v4 + 440),
                 &__ptr,
                 v147);
        v149 = (int)v295;
        if ( *(_BYTE *)(v4 + 184) == 1 )
          sub_100000B44();
        sub_10002E2F0((_QWORD **)v5, v148 + 2);
        if ( v148 >= 1 )
        {
          sub_10002E2F0((_QWORD **)v5, v149);
          if ( v149 >= 1 )
          {
            v150 = 0;
            v151 = v149 & 0x7FFFFFFF;
            do
            {
              sub_10005E7BC((_QWORD **)v5, (char *)__ptr + v150);
              v150 += 40;
              --v151;
            }
            while ( v151 );
          }
        }
        v35 = __ptr;
        if ( !__ptr )
          goto LABEL_436;
        v152 = (char *)v295;
        if ( v295 )
        {
          v153 = 0;
          do
          {
            v154 = (char *)__ptr;
            v155 = (char *)__ptr + v153;
            v156 = *(void **)((char *)__ptr + v153 + 16);
            if ( v156 )
            {
              *((_QWORD *)v155 + 3) = 0;
              qfree(v156);
              *((_QWORD *)v155 + 2) = 0;
              *(_QWORD *)&v154[v153 + 32] = 0;
            }
            v153 += 40;
            --v152;
          }
          while ( v152 );
          v35 = __ptr;
        }
        goto LABEL_435;
      case 0x2D:
        v32 = unpack_dq((unsigned __int64 *)&__src, v8) - 1;
        v295 = nullptr;
        __ptr = nullptr;
        *(_QWORD *)v296 = 0;
        v33 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64))(**(_QWORD **)(v4 + 440) + 272LL))(
                *(_QWORD *)(v4 + 440),
                &__ptr,
                v32);
        v34 = (int)v295;
        if ( (*(_BYTE *)(v4 + 184) & 1) != 0 )
          sub_100000B44();
        sub_10002E2F0((_QWORD **)v5, v33);
        if ( v33 )
          sub_100053AB4((_QWORD **)v5, __ptr, v34);
        v35 = __ptr;
        if ( !__ptr )
          goto LABEL_436;
        goto LABEL_435;
      case 0x2E:
        v112 = unpack_dq((unsigned __int64 *)&__src, v8) - 1;
        v113 = (const char *)__src;
        v114 = (unsigned __int8 *)__src;
        break;
      case 0x2F:
        v277 = v6;
        unpack_dq((unsigned __int64 *)&__src, v8);
        unpack_dq((unsigned __int64 *)&__src, v286);
        v10 = unpack_dd((unsigned __int64 *)&__src, v286);
        v295 = nullptr;
        __ptr = nullptr;
        *(_QWORD *)v296 = 0;
        sub_100053E20((__int64 *)&__ptr, v10);
        if ( v10 >= 1 )
        {
          v11 = 0;
          v12 = (unsigned int)v10;
          do
          {
            v13 = (char *)__ptr;
            v14 = unpack_dd((unsigned __int64 *)&__src, v286);
            v15 = &v13[80 * v11];
            if ( v14 )
            {
              v16 = v14;
              v17 = *((_QWORD *)v15 + 1);
              if ( v17 >= v14 )
              {
                if ( v17 != v14 )
                {
                  LOBYTE(__dst[0]) = 0;
                  sub_10001B764((_QWORD **)&v13[80 * v11], v14, __dst);
                }
              }
              else
              {
                v18 = *(char **)v15;
                if ( *((_QWORD *)v15 + 2) < (unsigned __int64)v14 )
                {
                  v18 = (char *)qvector_reserve(&v13[80 * v11], *(_QWORD **)v15, v14, 1u);
                  *(_QWORD *)v15 = v18;
                  v17 = *((_QWORD *)v15 + 1);
                }
                bzero(&v18[v17], v16 - v17);
                *((_QWORD *)v15 + 1) = v16;
              }
              v19 = __src;
              if ( (char *)__src + v16 >= __src && (unsigned __int64)__src + v16 <= v286 )
              {
                v21 = *(void **)v15;
                __src = (char *)__src + v16;
                memcpy(v21, v19, v16);
              }
            }
            v22 = unpack_dd((unsigned __int64 *)&__src, v286);
            if ( v22 )
            {
              v23 = v22;
              v24 = *((_QWORD *)v15 + 4);
              if ( v24 >= v22 )
              {
                if ( v24 != v22 )
                {
                  LOBYTE(__dst[0]) = 0;
                  sub_10001B764((_QWORD **)v15 + 3, v22, __dst);
                }
              }
              else
              {
                v25 = *((char **)v15 + 3);
                if ( *((_QWORD *)v15 + 5) < (unsigned __int64)v22 )
                {
                  v25 = (char *)qvector_reserve((_QWORD *)v15 + 3, *((_QWORD **)v15 + 3), v22, 1u);
                  *((_QWORD *)v15 + 3) = v25;
                  v24 = *((_QWORD *)v15 + 4);
                }
                bzero(&v25[v24], v23 - v24);
                *((_QWORD *)v15 + 4) = v23;
              }
              v26 = __src;
              if ( (char *)__src + v23 >= __src && (unsigned __int64)__src + v23 <= v286 )
              {
                v27 = *((void **)v15 + 3);
                __src = (char *)__src + v23;
                memcpy(v27, v26, v23);
              }
            }
            v28 = unpack_dd((unsigned __int64 *)&__src, v286);
            if ( *((_QWORD *)v15 + 7) != v28 )
            {
              __dst[1] = nullptr;
              __dst[0] = nullptr;
              sub_100058768((_QWORD **)v15 + 6, v28, __dst);
            }
            if ( v28 >= 1 )
            {
              v29 = 0;
              v30 = 16LL * (unsigned int)v28;
              do
              {
                *(_QWORD *)(*((_QWORD *)v15 + 6) + v29) = unpack_dq((unsigned __int64 *)&__src, v286) - 1;
                *(_QWORD *)(*((_QWORD *)v15 + 6) + v29 + 8) = unpack_dq((unsigned __int64 *)&__src, v286) - 1;
                v29 += 16;
              }
              while ( v30 != v29 );
            }
            *((_DWORD *)v15 + 18) = unpack_dd((unsigned __int64 *)&__src, v286);
            ++v11;
          }
          while ( v11 != v12 );
        }
        unpack_dd((unsigned __int64 *)&__src, v286);
        __dst[1] = nullptr;
        __dst[0] = nullptr;
        *(_QWORD *)&v291 = 0;
        v31 = (*(__int64 (**)(void))(**(_QWORD **)(v4 + 440) + 576LL))();
        sub_10002E2F0((_QWORD **)v5, v31);
        if ( v31 != -1 )
        {
          if ( v31 == 1 )
            sub_1000530E4((_QWORD **)v5, (__int64)v287 + 1);
          else
            sub_10004ED18((_QWORD **)v5, (__int64)__dst);
        }
        if ( __dst[0] )
        {
          __dst[1] = nullptr;
          qfree(__dst[0]);
        }
        if ( __ptr )
        {
          sub_100057478((__int64 *)&__ptr, 0);
          qfree(__ptr);
        }
        if ( (v277 & 1) != 0 )
          goto LABEL_474;
        return;
      case 0x30:
        if ( *(_QWORD *)(*(_QWORD *)(v4 + 440) + 552LL) )
        {
          sub_10002E2F0((_QWORD **)v5, 1u);
          j__serialize_dynamic_register_set(v5, *(_QWORD *)(v4 + 440) + 544LL);
        }
        else
        {
          sub_10002E2F0((_QWORD **)v5, 0);
        }
        goto LABEL_473;
      default:
        goto LABEL_211;
    }
    while ( (unsigned __int64)v114 < v286 )
    {
      if ( !*v114++ )
      {
        __src = v114;
        v116 = *(_QWORD *)(v4 + 440);
        v295 = nullptr;
        __ptr = nullptr;
        *(_QWORD *)v296 = 0;
        if ( v113 )
        {
          v117 = v116;
          v118 = strlen(v113);
          if ( v118 == -1 )
          {
            v119 = nullptr;
          }
          else
          {
            v119 = qvector_reserve(&__ptr, nullptr, v118 + 1, 1u);
            __ptr = v119;
          }
          v295 = (void *)(v118 + 1);
          memmove(v119, v113, v118);
          *((_BYTE *)__ptr + v118) = 0;
          v116 = v117;
        }
        goto LABEL_468;
      }
    }
    v116 = *(_QWORD *)(v4 + 440);
    v295 = nullptr;
    __ptr = nullptr;
    *(_QWORD *)v296 = 0;
LABEL_468:
    v265 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, void **))(*(_QWORD *)v116 + 280LL))(v116, v112, &__ptr);
    if ( __ptr )
    {
      v295 = nullptr;
      qfree(__ptr);
    }
    if ( *(_BYTE *)(v4 + 184) == 1 )
      sub_100000B44();
    sub_1000530E4((_QWORD **)v5, v265 + 1);
LABEL_473:
    if ( v6 )
      goto LABEL_474;
    return;
  }
LABEL_211:
  sub_100063440(1, (__int64 *)&__ptr);
  v161 = __ptr;
  v162 = v295;
  v163 = *(_QWORD *)v296;
  __ptr = nullptr;
  v295 = nullptr;
  *(_QWORD *)v296 = 0;
  v164 = *(_QWORD **)v5;
  if ( *(_QWORD *)v5 )
  {
    *(_QWORD *)(v5 + 8) = 0;
    qfree(v164);
    v98 = __ptr;
    *(_QWORD *)v5 = v161;
    *(_QWORD *)(v5 + 8) = v162;
    *(_QWORD *)(v5 + 16) = v163;
    if ( v98 )
    {
LABEL_213:
      v295 = nullptr;
      qfree(v98);
    }
    goto LABEL_436;
  }
  *(_QWORD *)v5 = v161;
  *(_QWORD *)(v5 + 8) = v162;
  *(_QWORD *)(v5 + 16) = v163;
  if ( (v6 & 1) != 0 )
LABEL_474:
    *(_BYTE *)(v4 + 289) = 1;
}
// 100052070: variable 'v183' is possibly undefined
// 100052070: variable 'v184' is possibly undefined
// 100052070: variable 'v185' is possibly undefined
// 100052070: variable 'v186' is possibly undefined
// 100052070: variable 'v187' is possibly undefined
// 100052070: variable 'v188' is possibly undefined
// 100052070: variable 'v189' is possibly undefined
// 100052238: variable 'v66' is possibly undefined
// 100052238: variable 'v67' is possibly undefined
// 100052238: variable 'v68' is possibly undefined
// 100052238: variable 'v69' is possibly undefined
// 100052238: variable 'v70' is possibly undefined
// 100052238: variable 'v71' is possibly undefined
// 10005FB84: using guessed type __int64 __fastcall j__serialize_dynamic_register_set(_QWORD, _QWORD);
// 10007AE40: using guessed type char byte_10007AE40;
