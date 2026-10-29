/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004D754
// Address: 0x000000010004D754

//----- (000000010004D754) ----------------------------------------------------
void __usercall sub_10004D754(__int64 a1@<X0>, unsigned int *a2@<X1>, __int64 *a3@<X8>)
{
  __int64 v4; // x28
  __int64 v5; // x27
  int v6; // w26
  unsigned __int8 *v7; // x21
  unsigned __int64 v8; // x24
  _QWORD *v9; // x0
  unsigned __int64 v10; // x21
  unsigned __int64 v11; // x22
  int v12; // w23
  __int64 v13; // x25
  __int64 v14; // x26
  char *v15; // x19
  int v16; // w0
  char *v17; // x23
  size_t v18; // x24
  unsigned __int64 v19; // x9
  char *v20; // x8
  void *v21; // x1
  void *v23; // x0
  int v24; // w0
  size_t v25; // x24
  unsigned __int64 v26; // x9
  char *v27; // x8
  void *v28; // x1
  void *v29; // x0
  int v30; // w24
  __int64 v31; // x20
  __int64 v32; // x24
  __int64 v33; // x0
  unsigned int v34; // w21
  unsigned __int64 v35; // x22
  unsigned int v36; // w21
  int v37; // w19
  void *v38; // x0
  __int64 v39; // x21
  unsigned __int64 v40; // x23
  __int64 v41; // x24
  unsigned int v42; // w22
  __int64 v43; // x21
  __int64 v44; // x21
  _QWORD *v45; // x22
  __int64 v46; // x8
  __int64 v47; // x20
  __int64 v48; // x23
  _QWORD *v49; // x24
  _QWORD *v50; // x25
  void *v51; // x0
  void *v52; // x0
  __int64 v53; // x21
  __int64 v54; // x22
  unsigned int v55; // w22
  int v56; // w8
  __int64 v57; // x0
  unsigned int v58; // w0
  int v59; // w21
  off_t v60; // x22
  int v61; // w0
  int v62; // w23
  void *v63; // x24
  unsigned int v64; // w25
  __int64 v65; // x22
  __int64 v66; // x23
  int v67; // w0
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  __int64 v71; // x5
  __int64 v72; // x6
  __int64 v73; // x7
  int v74; // w21
  __int64 v75; // x8
  __int64 v76; // x20
  __int64 v77; // x21
  int v78; // w21
  const char *v79; // x22
  unsigned __int64 v80; // x23
  unsigned __int8 *v81; // x19
  _QWORD *v83; // x20
  _QWORD *v84; // x24
  size_t v85; // x0
  size_t v86; // x25
  unsigned __int64 v87; // x23
  _QWORD *v88; // x1
  int v89; // w21
  off_t v90; // x22
  unsigned int v91; // w0
  unsigned int v92; // w23
  void *v93; // x0
  void *v94; // x24
  void *v95; // x1
  __int64 v97; // x0
  unsigned int v98; // w21
  unsigned int v99; // w21
  void *v100; // x0
  unsigned int v101; // w21
  __int64 v102; // x21
  __int64 v103; // x22
  unsigned int v104; // w23
  signed int v105; // w0
  unsigned int v106; // w21
  __int64 v107; // x21
  __int64 v108; // x22
  unsigned int v109; // w23
  int v110; // w22
  signed int v111; // w21
  __int64 v112; // x19
  __int64 v113; // x20
  int v114; // w0
  unsigned int v115; // w21
  unsigned __int8 *v116; // x22
  unsigned __int64 v118; // x21
  const char *v119; // x22
  _BYTE *v120; // x9
  __int64 v122; // x0
  __int64 v123; // x20
  size_t v124; // x23
  void *v125; // x0
  unsigned int v126; // w21
  __int64 v127; // x0
  signed int v128; // w21
  unsigned __int64 v129; // x23
  unsigned int v130; // w22
  void *v131; // x0
  void *v132; // x21
  void *v133; // x1
  __int64 v135; // x23
  bool v136; // zf
  unsigned __int8 *v137; // x8
  unsigned __int64 v139; // x22
  unsigned int v140; // w23
  void *v141; // x21
  __int64 v142; // x22
  __int64 v144; // x21
  unsigned __int64 v145; // x22
  unsigned int v146; // w23
  unsigned int v147; // w0
  unsigned int v148; // w21
  FILE *v149; // x22
  int v150; // w0
  unsigned __int8 *v151; // x8
  unsigned __int64 v153; // x23
  int v154; // w22
  signed int v155; // w21
  __int64 v156; // x19
  __int64 v157; // x20
  char *v158; // x20
  __int64 v159; // x19
  char *v160; // x21
  char *v161; // x22
  void *v162; // x0
  unsigned __int64 v163; // x24
  __int64 v164; // x21
  __int64 v165; // x23
  int v166; // w22
  void **v167; // x2
  __int64 v168; // x21
  void *v169; // x19
  void *v170; // x21
  __int64 v171; // x20
  _QWORD *v172; // x0
  unsigned __int8 *v173; // x23
  unsigned __int8 *v175; // x8
  unsigned int v177; // w19
  void *v178; // x20
  unsigned __int8 *v179; // x8
  unsigned int v181; // w0
  int v182; // w22
  signed int v183; // w23
  FILE *v184; // x0
  char *v185; // x8
  int v186; // w9
  int v187; // w22
  int v188; // t1
  void **v189; // x3
  __int64 v190; // x0
  __int64 v191; // x1
  __int64 v192; // x2
  __int64 v193; // x3
  __int64 v194; // x4
  __int64 v195; // x5
  __int64 v196; // x6
  __int64 v197; // x7
  unsigned int v198; // w21
  void *v199; // x0
  char *v200; // x20
  __int64 v201; // x19
  char *v202; // x21
  char *v203; // x22
  void *v204; // x0
  int v205; // w27
  int i; // w25
  unsigned __int64 v207; // x8
  char *v208; // x28
  void *v209; // x9
  char *v210; // x1
  __int64 v211; // x20
  char *v212; // x26
  _QWORD *v214; // x1
  __int64 v215; // x8
  bool v216; // cf
  __int64 v217; // x8
  __int64 v218; // x19
  signed int v219; // w26
  _QWORD **v220; // x19
  char v221; // w24
  __int64 v222; // x24
  unsigned int v223; // w25
  int v224; // w22
  int j; // w19
  unsigned int *v226; // x20
  void *v227; // x0
  char *v228; // x20
  __int64 v229; // x19
  char *v230; // x21
  char *v231; // x22
  void *v232; // x0
  int *v233; // x0
  int v234; // w8
  void *v235; // x1
  unsigned int v236; // w24
  void *v237; // x0
  __int64 v238; // x20
  __int64 v239; // x21
  char *v240; // x19
  char *v241; // x23
  void *v242; // x0
  int v243; // w25
  int *v244; // x0
  void *v245; // x0
  __int64 v246; // x20
  __int64 v247; // x19
  char *v248; // x21
  char *v249; // x22
  void *v250; // x0
  void *v251; // x0
  __int64 v252; // x20
  __int64 v253; // x19
  char *v254; // x21
  char *v255; // x22
  void *v256; // x0
  char *v257; // x8
  _QWORD *v259; // x20
  _QWORD *v260; // x24
  size_t v261; // x0
  size_t v262; // x25
  unsigned __int64 v263; // x23
  _QWORD *v264; // x1
  unsigned int v265; // w22
  size_t v266; // x0
  void *v267; // x24
  __int64 v268; // x20
  __int64 v269; // x8
  __int64 v270; // x27
  const char *v271; // x25
  int *v272; // x0
  __int64 v273; // x23
  void *v274; // x0
  char *v275; // x20
  __int64 v276; // x19
  void *v277; // x0
  _QWORD *v278; // x21
  void *v279; // [xsp+50h] [xbp-CE0h]
  unsigned int v280; // [xsp+5Ch] [xbp-CD4h]
  __int64 v281; // [xsp+60h] [xbp-CD0h]
  __int64 v282; // [xsp+68h] [xbp-CC8h]
  _QWORD **v283; // [xsp+70h] [xbp-CC0h]
  __int64 v284; // [xsp+70h] [xbp-CC0h]
  char v285; // [xsp+7Ch] [xbp-CB4h]
  char v286; // [xsp+7Ch] [xbp-CB4h]
  void *v287; // [xsp+80h] [xbp-CB0h] BYREF
  __int64 v288; // [xsp+88h] [xbp-CA8h]
  __int64 v289; // [xsp+90h] [xbp-CA0h]
  void *v290; // [xsp+98h] [xbp-C98h] BYREF
  __int64 v291; // [xsp+A0h] [xbp-C90h]
  __int64 v292; // [xsp+A8h] [xbp-C88h]
  void *__src; // [xsp+B0h] [xbp-C80h] BYREF
  unsigned __int64 v294; // [xsp+B8h] [xbp-C78h]
  void *v295; // [xsp+C0h] [xbp-C70h] BYREF
  __int64 v296; // [xsp+C8h] [xbp-C68h]
  __int64 v297; // [xsp+D0h] [xbp-C60h]
  void *__dst[2]; // [xsp+4C0h] [xbp-870h] BYREF
  __int128 v299; // [xsp+4D0h] [xbp-860h]
  void *v300[2]; // [xsp+4E0h] [xbp-850h]
  __int64 v301; // [xsp+4F0h] [xbp-840h]
  void *__ptr; // [xsp+8C8h] [xbp-468h] BYREF
  void *v303; // [xsp+8D0h] [xbp-460h]
  _BYTE v304[20]; // [xsp+8D8h] [xbp-458h]
  __int128 v305; // [xsp+8ECh] [xbp-444h]
  __int128 v306; // [xsp+8FCh] [xbp-434h]
  int v307; // [xsp+90Ch] [xbp-424h]

  v4 = a1;
  v5 = (__int64)a3;
  v6 = *(unsigned __int8 *)(a1 + 289);
  *(_BYTE *)(a1 + 289) = 0;
  v7 = (unsigned __int8 *)a2 + 5;
  v8 = (unsigned __int64)a2 + *a2 + 5;
  __src = (char *)a2 + 5;
  v294 = v8;
  sub_10005F000(0, a3);
  switch ( *((_BYTE *)a2 + 4) )
  {
    case 5:
      v9 = *(_QWORD **)v5;
      if ( !*(_QWORD *)v5 )
        goto LABEL_475;
      *(_QWORD *)(v5 + 8) = 0;
      qfree(v9);
      *(_QWORD *)v5 = 0;
      *(_QWORD *)(v5 + 16) = 0;
      if ( (v6 & 1) != 0 )
        goto LABEL_476;
      return;
    case 0xA:
      *(_QWORD *)(*(_QWORD *)(v4 + 440) + 672LL) = unpack_dq((unsigned __int64 *)&__src, v8);
      v78 = unpack_dd((unsigned __int64 *)&__src, v294);
      if ( v78 )
        *(_BYTE *)(v4 + 184) = 1;
      v79 = (const char *)__src;
      v80 = v294;
      v81 = (unsigned __int8 *)__src;
      while ( (unsigned __int64)v81 < v294 )
      {
        if ( !*v81++ )
        {
          __src = v81;
          v83 = *(_QWORD **)(v4 + 440);
          v84 = v83 + 85;
          if ( v79 )
          {
            v85 = strlen(v79);
            if ( v85 )
            {
              v86 = v85;
              v87 = v85 + 1;
              v88 = (_QWORD *)v83[85];
              if ( v83[87] < v85 + 1 )
              {
                v88 = qvector_reserve(v83 + 85, v88, v87, 1u);
                *v84 = v88;
              }
              v83[86] = v87;
              memmove(v88, v79, v86);
              *(_BYTE *)(v83[85] + v86) = 0;
              v79 = (const char *)__src;
              v80 = v294;
              goto LABEL_419;
            }
          }
          v79 = (const char *)v81;
LABEL_418:
          v84[1] = 0;
LABEL_419:
          v257 = (char *)v79;
          while ( (unsigned __int64)v257 < v80 )
          {
            if ( !*v257++ )
            {
              __src = v257;
              v259 = *(_QWORD **)(v4 + 440);
              v260 = v259 + 88;
              if ( v79 )
              {
                v261 = strlen(v79);
                if ( v261 )
                {
                  v262 = v261;
                  v263 = v261 + 1;
                  v264 = (_QWORD *)v259[88];
                  if ( v259[90] < v261 + 1 )
                  {
                    v264 = qvector_reserve(v259 + 88, v264, v263, 1u);
                    *v260 = v264;
                  }
                  v259[89] = v263;
                  memmove(v264, v79, v262);
                  *(_BYTE *)(v259[88] + v262) = 0;
                  v80 = v294;
LABEL_429:
                  *(_DWORD *)(*(_QWORD *)(v4 + 440) + 728LL) = unpack_dd((unsigned __int64 *)&__src, v80);
                  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(v4 + 440) + 96LL))(
                    *(_QWORD *)(v4 + 440),
                    v78 != 0);
                  v303 = nullptr;
                  __ptr = nullptr;
                  *(_QWORD *)v304 = 0;
                  __dst[0] = nullptr;
                  v265 = (*(__int64 (__fastcall **)(_QWORD, void **, void **))(**(_QWORD **)(v4 + 440) + 104LL))(
                           *(_QWORD *)(v4 + 440),
                           __dst,
                           &__ptr);
                  if ( *(_BYTE *)(v4 + 184) == 1 )
                    sub_100000AA0();
                  sub_10002CF84((_QWORD **)v5, v265);
                  sub_1000500AC((_QWORD **)v5, (__int64)__dst[0]);
                  if ( v265 == 1 )
                  {
                    if ( *(_BYTE *)(v4 + 184) == 1 )
                      sub_100000AA0();
                    j__serialize_dynamic_register_set(v5, *(_QWORD *)(v4 + 440) + 544LL);
                  }
                  else
                  {
                    sub_10004C294((_QWORD **)v5, (__int64)&__ptr);
                  }
                  v38 = __ptr;
                  if ( !__ptr )
                    goto LABEL_438;
                  goto LABEL_437;
                }
              }
LABEL_428:
              v260[1] = 0;
              goto LABEL_429;
            }
          }
          v260 = (_QWORD *)(*(_QWORD *)(v4 + 440) + 704LL);
          goto LABEL_428;
        }
      }
      v84 = (_QWORD *)(*(_QWORD *)(v4 + 440) + 680LL);
      goto LABEL_418;
    case 0xB:
      goto LABEL_475;
    case 0xC:
      v303 = nullptr;
      __ptr = nullptr;
      *(_QWORD *)v304 = 0;
      __dst[1] = nullptr;
      __dst[0] = nullptr;
      *(_QWORD *)&v299 = 0;
      v115 = (*(__int64 (__fastcall **)(_QWORD, void **, void **))(**(_QWORD **)(v4 + 440) + 72LL))(
               *(_QWORD *)(v4 + 440),
               &__ptr,
               __dst);
      sub_10002CF84((_QWORD **)v5, v115);
      if ( v115 == 1 )
        sub_10005ADB8((_QWORD **)v5, &__ptr);
      else
        sub_10004C294((_QWORD **)v5, (__int64)__dst);
      if ( *(_BYTE *)(v4 + 184) == 1 )
        sub_100000AA0();
      if ( __dst[0] )
      {
        __dst[1] = nullptr;
        qfree(__dst[0]);
      }
      v199 = __ptr;
      if ( __ptr )
      {
        v200 = (char *)v303;
        if ( v303 )
        {
          v201 = 0;
          do
          {
            v202 = (char *)__ptr;
            v203 = (char *)__ptr + v201;
            v204 = *(void **)((char *)__ptr + v201 + 8);
            if ( v204 )
            {
              *((_QWORD *)v203 + 2) = 0;
              qfree(v204);
              *((_QWORD *)v203 + 1) = 0;
              *(_QWORD *)&v202[v201 + 24] = 0;
            }
            v201 += 32;
            --v200;
          }
          while ( v200 );
          v199 = __ptr;
        }
        v303 = nullptr;
        qfree(v199);
      }
      goto LABEL_438;
    case 0xD:
      v116 = v7;
      while ( (unsigned __int64)v116 < v8 )
      {
        if ( !*v116++ )
        {
          __src = v116;
          goto LABEL_220;
        }
      }
      v116 = v7;
      v7 = nullptr;
LABEL_220:
      v173 = v116;
      while ( (unsigned __int64)v173 < v8 )
      {
        if ( !*v173++ )
        {
          __src = v173;
          goto LABEL_225;
        }
      }
      v173 = v116;
      v116 = nullptr;
LABEL_225:
      v175 = v173;
      while ( (unsigned __int64)v175 < v8 )
      {
        if ( !*v175++ )
        {
          __src = v175;
          goto LABEL_230;
        }
      }
      v173 = nullptr;
LABEL_230:
      v282 = v4;
      v283 = (_QWORD **)v5;
      v286 = v6;
      v177 = unpack_dd((unsigned __int64 *)&__src, v8);
      v178 = __src;
      v179 = (unsigned __int8 *)__src;
      while ( (unsigned __int64)v179 < v294 )
      {
        if ( !*v179++ )
        {
          __src = v179;
          goto LABEL_241;
        }
      }
      v178 = nullptr;
LABEL_241:
      v281 = unpack_dd((unsigned __int64 *)&__src, v294);
      __dst[1] = nullptr;
      __dst[0] = nullptr;
      *(_QWORD *)&v299 = 0;
      v303 = nullptr;
      __ptr = nullptr;
      *(_QWORD *)v304 = 0;
      v304[8] = 1;
      v185 = (char *)__src;
      v280 = v177;
      if ( (unsigned __int64)__src >= v294 )
      {
        v186 = 0;
      }
      else
      {
        v185 = (char *)__src + 1;
        v186 = *(unsigned __int8 *)__src;
      }
      v279 = v178;
      __src = v185;
      v304[8] = v186 != 0;
      v205 = unpack_dd((unsigned __int64 *)&__src, v294);
      if ( v205 >= 1 )
      {
        for ( i = 0; i != v205; ++i )
        {
          v208 = (char *)__src;
          v207 = v294;
          if ( (unsigned __int64)__src >= v294 )
            break;
          v209 = v303;
          v210 = (char *)__ptr;
          if ( *(_QWORD *)v304 < (unsigned __int64)v303 + 1 )
          {
            v210 = (char *)qvector_reserve(&__ptr, __ptr, (unsigned __int64)v303 + 1, 0x18u);
            __ptr = v210;
            v209 = v303;
            v208 = (char *)__src;
            v207 = v294;
          }
          v211 = 0;
          v212 = &v210[24 * (_QWORD)v209];
          *(_QWORD *)v212 = 0;
          *((_QWORD *)v212 + 1) = 0;
          *((_QWORD *)v212 + 2) = 0;
          v303 = (char *)v303 + 1;
          while ( (unsigned __int64)&v208[v211] < v207 )
          {
            if ( !v208[v211++] )
            {
              __src = &v208[v211];
              if ( v208 )
              {
                v214 = *(_QWORD **)v212;
                v215 = *((_QWORD *)v212 + 1);
                v216 = v215 != 0;
                v217 = v215 - 1;
                if ( v216 )
                  v218 = v217;
                else
                  v218 = 0;
                if ( *((_QWORD *)v212 + 2) < (unsigned __int64)(v218 + v211) )
                {
                  v214 = qvector_reserve(v212, v214, v218 + v211, 1u);
                  *(_QWORD *)v212 = v214;
                }
                *((_QWORD *)v212 + 1) = v218 + v211;
                *((_BYTE *)v214 + v211 + v218 - 1) = 0;
                memmove((void *)(*(_QWORD *)v212 + v218), v208, v211 - 1);
              }
              break;
            }
          }
        }
      }
      v219 = -3;
      if ( v7 )
      {
        v4 = v282;
        v220 = v283;
        v221 = v286;
        if ( v173 )
        {
          if ( v279 )
          {
            v219 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *, unsigned __int8 *, void **, unsigned __int8 *, _QWORD, void *, __int64, void **))(**(_QWORD **)(v282 + 440) + 128LL))(
                     *(_QWORD *)(v282 + 440),
                     v7,
                     v116,
                     &__ptr,
                     v173,
                     v280,
                     v279,
                     v281,
                     __dst);
            if ( *(_BYTE *)(v282 + 184) == 1 )
              sub_100000AA0();
          }
        }
      }
      else
      {
        v4 = v282;
        v220 = v283;
        v221 = v286;
      }
      sub_10004D5E8(v4, v220, v219, (__int64)__dst);
      v274 = __ptr;
      if ( __ptr )
      {
        v275 = (char *)v303;
        if ( v303 )
        {
          v276 = 0;
          do
          {
            v277 = *(void **)((char *)__ptr + v276);
            if ( v277 )
            {
              v278 = (char *)__ptr + v276;
              *(_QWORD *)((char *)__ptr + v276 + 8) = 0;
              qfree(v277);
              *v278 = 0;
              v278[2] = 0;
            }
            v276 += 24;
            --v275;
          }
          while ( v275 );
          v274 = __ptr;
        }
        v303 = nullptr;
        qfree(v274);
      }
      if ( __dst[0] )
      {
        __dst[1] = nullptr;
        qfree(__dst[0]);
      }
      if ( (v221 & 1) == 0 )
        return;
      goto LABEL_476;
    case 0xE:
      v303 = nullptr;
      __ptr = nullptr;
      *(_QWORD *)v304 = 0;
      v99 = (*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(v4 + 440) + 160LL))(
              *(_QWORD *)(v4 + 440),
              &__ptr);
      if ( *(_BYTE *)(v4 + 184) == 1 )
        sub_100000AA0();
      sub_10002CF84((_QWORD **)v5, v99);
      if ( (v99 & 0x80000000) != 0 )
        sub_10004C294((_QWORD **)v5, (__int64)&__ptr);
      v100 = __ptr;
      if ( __ptr )
        goto LABEL_215;
      goto LABEL_438;
    case 0xF:
      v303 = nullptr;
      __ptr = nullptr;
      *(_QWORD *)v304 = 0;
      v105 = sub_10004D51C(v4, (__int64)&__ptr, (unsigned __int64 *)&__src);
      sub_10004D5E8(v4, (_QWORD **)v5, v105, (__int64)&__ptr);
      v38 = __ptr;
      if ( __ptr )
        goto LABEL_437;
      goto LABEL_438;
    case 0x10:
      v106 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 440) + 120LL))(*(_QWORD *)(v4 + 440));
      sub_10002CF84((_QWORD **)v5, v106);
      if ( *(_BYTE *)(v4 + 184) == 1 )
        sub_100000AA0();
      goto LABEL_475;
    case 0x11:
      v127 = unpack_dd((unsigned __int64 *)&__src, v8);
      if ( (*(_BYTE *)(v4 + 288) & 1) != 0 )
        v128 = 0;
      else
        v128 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v4 + 440) + 136LL))(
                 *(_QWORD *)(v4 + 440),
                 v4 + 296,
                 v127);
      sub_10002CF84((_QWORD **)v5, v128);
      if ( v128 >= 1 )
      {
        sub_10005B360((_QWORD **)v5, v4 + 296);
        if ( *(_BYTE *)(v4 + 184) == 1 )
        {
          sub_100056628(v4 + 296, (char *)&__ptr, 0x400u);
          sub_100000AA0();
        }
        goto LABEL_438;
      }
      if ( *(_BYTE *)(v4 + 288) == 1 )
        goto LABEL_438;
      goto LABEL_476;
    case 0x12:
      v303 = nullptr;
      __ptr = nullptr;
      *(_QWORD *)v304 = 0;
      v126 = (*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(v4 + 440) + 152LL))(
               *(_QWORD *)(v4 + 440),
               &__ptr);
      if ( *(_BYTE *)(v4 + 184) == 1 )
        sub_100000AA0();
      sub_10002CF84((_QWORD **)v5, v126);
      if ( (v126 & 0x80000000) != 0 )
        sub_10004C294((_QWORD **)v5, (__int64)&__ptr);
      v100 = __ptr;
      if ( __ptr )
        goto LABEL_215;
      goto LABEL_438;
    case 0x13:
      if ( (unsigned __int64)v7 >= v8 )
      {
        v56 = 0;
      }
      else
      {
        v7 = (unsigned __int8 *)a2 + 6;
        v56 = *((unsigned __int8 *)a2 + 5);
      }
      if ( (unsigned __int64)v7 >= v8 )
      {
        v187 = 0;
      }
      else
      {
        v188 = *v7++;
        v187 = v188;
      }
      __src = v7;
      v303 = nullptr;
      __ptr = nullptr;
      *(_QWORD *)v304 = 0;
      __dst[1] = nullptr;
      __dst[0] = nullptr;
      *(_QWORD *)&v299 = 0;
      if ( v187 )
        v189 = __dst;
      else
        v189 = nullptr;
      (*(void (__fastcall **)(_QWORD, void **, bool, void **))(**(_QWORD **)(v4 + 440) + 192LL))(
        *(_QWORD *)(v4 + 440),
        &__ptr,
        v56 != 0,
        v189);
      sub_10005023C(v4, (__int64 **)&__ptr);
      v190 = sub_10005698C(*(_QWORD *)(v4 + 440));
      if ( v190 )
      {
        v198 = sub_10005045C(v4, *(__int64 **)v190, *(char ***)(v190 + 24), *(unsigned int *)(v190 + 8));
        sub_1000562F8(*(_QWORD **)(v4 + 440));
      }
      else
      {
        v198 = 0;
      }
      if ( v187 )
      {
        v224 = (int)__dst[1];
        sub_10002CF84((_QWORD **)v5, (unsigned int)__dst[1]);
        if ( v224 )
        {
          for ( j = 0; j != v224; ++j )
          {
            v226 = (unsigned int *)((char *)__dst[0] + 32 * j);
            sub_10002CF84((_QWORD **)v5, *v226);
            sub_10004C294((_QWORD **)v5, (__int64)(v226 + 2));
          }
        }
      }
      if ( *(_BYTE *)(v4 + 184) == 1 )
      {
        sub_100050794(v198, v191, v192, v193, v194, v195, v196, v197);
        sub_100000AA0();
      }
      v227 = __dst[0];
      if ( __dst[0] )
      {
        v228 = (char *)__dst[1];
        if ( __dst[1] )
        {
          v229 = 0;
          do
          {
            v230 = (char *)__dst[0];
            v231 = (char *)__dst[0] + v229;
            v232 = *(void **)((char *)__dst[0] + v229 + 8);
            if ( v232 )
            {
              *((_QWORD *)v231 + 2) = 0;
              qfree(v232);
              *((_QWORD *)v231 + 1) = 0;
              *(_QWORD *)&v230[v229 + 24] = 0;
            }
            v229 += 32;
            --v228;
          }
          while ( v228 );
          v227 = __dst[0];
        }
        __dst[1] = nullptr;
        qfree(v227);
      }
      sub_100054CCC((char **)&__ptr);
      if ( (v6 & 1) == 0 )
        return;
      goto LABEL_476;
    case 0x14:
      sub_10005B0FC(v4 + 296, (unsigned __int64 *)&__src);
      v101 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 440) + 168LL))(
               *(_QWORD *)(v4 + 440),
               v4 + 296);
      if ( *(_BYTE *)(v4 + 184) == 1 )
        sub_100000AA0();
      sub_10002CF84((_QWORD **)v5, v101);
      goto LABEL_475;
    case 0x15:
      v77 = unpack_dd((unsigned __int64 *)&__src, v8);
      v42 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 440) + 200LL))(*(_QWORD *)(v4 + 440), v77);
      if ( *(_BYTE *)(v4 + 184) == 1 )
        sub_100000AA0();
      goto LABEL_83;
    case 0x16:
      v43 = unpack_dd((unsigned __int64 *)&__src, v8);
      v42 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 440) + 208LL))(*(_QWORD *)(v4 + 440), v43);
      if ( *(_BYTE *)(v4 + 184) == 1 )
        sub_100000AA0();
      goto LABEL_83;
    case 0x17:
      v107 = unpack_dd((unsigned __int64 *)&__src, v8);
      v108 = unpack_dd((unsigned __int64 *)&__src, v294);
      v109 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v4 + 440) + 216LL))(
               *(_QWORD *)(v4 + 440),
               v107,
               v108);
      if ( *(_BYTE *)(v4 + 184) == 1 )
        sub_100000AA0();
      sub_10002CF84((_QWORD **)v5, v109);
      goto LABEL_475;
    case 0x18:
      v303 = nullptr;
      __ptr = nullptr;
      *(_QWORD *)v304 = 0;
      __dst[1] = nullptr;
      __dst[0] = nullptr;
      *(_QWORD *)&v299 = 0;
      v110 = (*(__int64 (__fastcall **)(_QWORD, void **, void **))(**(_QWORD **)(v4 + 440) + 256LL))(
               *(_QWORD *)(v4 + 440),
               &__ptr,
               __dst);
      v111 = (int)v303;
      if ( *(_BYTE *)(v4 + 184) == 1 )
        sub_100000AA0();
      sub_10002CF84((_QWORD **)v5, v110 + 4);
      if ( v110 == 1 )
      {
        sub_10002CF84((_QWORD **)v5, v111);
        if ( v111 >= 1 )
        {
          v112 = 0;
          v113 = v111 & 0x7FFFFFFF;
          do
          {
            sub_10005AA30((_QWORD **)v5, (__int64)__ptr + v112);
            v112 += 80;
            --v113;
          }
          while ( v113 );
        }
      }
      else
      {
        sub_10004C294((_QWORD **)v5, (__int64)__dst);
      }
      if ( __dst[0] )
      {
        __dst[1] = nullptr;
        qfree(__dst[0]);
      }
      sub_10000AF04((char **)&__ptr);
      if ( (v6 & 1) == 0 )
        return;
      goto LABEL_476;
    case 0x19:
      v139 = unpack_dq((unsigned __int64 *)&__src, v8);
      v140 = unpack_dd((unsigned __int64 *)&__src, v294);
      v141 = operator new[](v140);
      v303 = nullptr;
      __ptr = nullptr;
      *(_QWORD *)v304 = 0;
      v142 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, void *, _QWORD, void **))(**(_QWORD **)(v4 + 440)
                                                                                          + 288LL))(
               *(_QWORD *)(v4 + 440),
               v139 - 1,
               v141,
               v140,
               &__ptr);
      if ( *(_BYTE *)(v4 + 184) == 1 )
        sub_100000AA0();
      if ( v142 >= 1 && v140 == 1 )
      {
        if ( !*(_BYTE *)(v4 + 184) )
          goto LABEL_307;
      }
      else if ( !*(_BYTE *)(v4 + 184) )
      {
        goto LABEL_307;
      }
      sub_100000AA0();
LABEL_307:
      sub_10002CF84((_QWORD **)v5, v142);
      if ( v142 < 1 )
        sub_10004C294((_QWORD **)v5, (__int64)&__ptr);
      else
        sub_10004C184((_QWORD **)v5, v141, v142);
      operator delete[](v141);
      v38 = __ptr;
      if ( __ptr )
        goto LABEL_437;
      goto LABEL_438;
    case 0x1A:
      v129 = unpack_dq((unsigned __int64 *)&__src, v8);
      v130 = unpack_dd((unsigned __int64 *)&__src, v294);
      v131 = operator new[](v130);
      v132 = v131;
      v133 = __src;
      if ( (char *)__src + v130 >= __src && (unsigned __int64)__src + v130 <= v294 )
      {
        __src = (char *)__src + v130;
        memcpy(v131, v133, v130);
      }
      v303 = nullptr;
      __ptr = nullptr;
      *(_QWORD *)v304 = 0;
      v135 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, void *, _QWORD, void **))(**(_QWORD **)(v4 + 440)
                                                                                          + 296LL))(
               *(_QWORD *)(v4 + 440),
               v129 - 1,
               v132,
               v130,
               &__ptr);
      if ( *(_BYTE *)(v4 + 184) == 1 )
        sub_100000AA0();
      if ( v135 )
        v136 = v130 == 1;
      else
        v136 = 0;
      if ( v136 )
      {
        if ( !*(_BYTE *)(v4 + 184) )
          goto LABEL_301;
      }
      else if ( !*(_BYTE *)(v4 + 184) )
      {
        goto LABEL_301;
      }
      sub_100000AA0();
LABEL_301:
      sub_10002CF84((_QWORD **)v5, v135);
      if ( v135 <= 0 )
        sub_10004C294((_QWORD **)v5, (__int64)&__ptr);
      operator delete[](v132);
      v38 = __ptr;
      if ( __ptr )
      {
LABEL_437:
        v303 = nullptr;
        qfree(v38);
      }
      goto LABEL_438;
    case 0x1B:
      if ( !(unsigned int)sub_10004BA64(v4, (_QWORD **)v5, (unsigned __int64 *)&__src) && *(_BYTE *)(v4 + 184) == 1 )
        goto LABEL_343;
      goto LABEL_475;
    case 0x1C:
      sub_10004C450(v4, (_QWORD **)v5, (unsigned __int64 *)&__src);
      goto LABEL_475;
    case 0x1D:
      v144 = unpack_dd((unsigned __int64 *)&__src, v8);
      v145 = unpack_dq((unsigned __int64 *)&__src, v294) - 1;
      v303 = nullptr;
      __ptr = nullptr;
      *(_QWORD *)v304 = 0;
      v146 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, void **))(**(_QWORD **)(v4 + 440) + 360LL))(
               *(_QWORD *)(v4 + 440),
               v144,
               v145,
               &__ptr);
      sub_10002CF84((_QWORD **)v5, v146);
      if ( v146 != 1 )
        sub_10004C294((_QWORD **)v5, (__int64)&__ptr);
      if ( *(_BYTE *)(v4 + 184) == 1 )
        sub_100000AA0();
      v38 = __ptr;
      if ( __ptr )
        goto LABEL_437;
      goto LABEL_438;
    case 0x1E:
      v39 = unpack_dd((unsigned __int64 *)&__src, v8);
      v40 = unpack_dq((unsigned __int64 *)&__src, v294) - 1;
      v41 = (unsigned int)unpack_dd((unsigned __int64 *)&__src, v294) - 1;
      v42 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, __int64))(**(_QWORD **)(v4 + 440) + 304LL))(
              *(_QWORD *)(v4 + 440),
              v39,
              v40,
              v41);
      if ( *(_BYTE *)(v4 + 184) == 1 )
        sub_100000AA0();
LABEL_83:
      sub_10002CF84((_QWORD **)v5, v42);
      goto LABEL_475;
    case 0x1F:
      v303 = nullptr;
      __ptr = nullptr;
      *(_QWORD *)v304 = 0;
      __dst[1] = nullptr;
      __dst[0] = nullptr;
      *(_QWORD *)&v299 = 0;
      v295 = nullptr;
      v296 = 0;
      v297 = 0;
      v65 = unpack_dd((unsigned __int64 *)&__src, v8);
      v66 = unpack_dd((unsigned __int64 *)&__src, v294);
      v67 = unpack_dd((unsigned __int64 *)&__src, v294);
      v74 = v67;
      v75 = *(_QWORD *)(v4 + 440);
      v76 = *(_QWORD *)(v75 + 552);
      if ( !v76 )
        LODWORD(v76) = *(_DWORD *)(v75 + 648);
      if ( v67 < 1 || v67 > (int)v76 )
      {
        sub_10000273C(
          (char **)&__ptr,
          "read_regs(tid=%d, mask=%x, nregs=%d) => 0 (incorrect nregs, should be in range 0..%d)\n",
          v68,
          v69,
          v70,
          v71,
          v72,
          v73,
          v65);
        v236 = 0;
      }
      else
      {
        v234 = v67 + 7;
        if ( v67 + 7 < 0 )
          v234 = v67 + 14;
        sub_10000F140((_QWORD **)__dst, (__int64)v234 >> 3);
        v235 = __src;
        if ( (char *)__src + (unsigned __int64)__dst[1] >= __src
          && (unsigned __int64)__src + (unsigned __int64)__dst[1] <= v294 )
        {
          __src = (char *)__src + (unsigned __int64)__dst[1];
          memcpy(__dst[0], v235, (size_t)__dst[1]);
        }
        sub_100050898((__int64)&v295, (unsigned int)v76);
        v236 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, void *, void **))(**(_QWORD **)(v4 + 440) + 224LL))(
                 *(_QWORD *)(v4 + 440),
                 v65,
                 v66,
                 v295,
                 &__ptr);
        if ( *(_BYTE *)(v4 + 184) == 1 )
          sub_100000AA0();
      }
      sub_10002CF84((_QWORD **)v5, v236);
      if ( v236 == 1 )
        sub_10005BC84((_BYTE *)v5, (__int64)v295, v74, (__int64)__dst[0]);
      else
        sub_10004C294((_QWORD **)v5, (__int64)&__ptr);
      v237 = v295;
      if ( v295 )
      {
        v238 = v296;
        if ( v296 )
        {
          v239 = 0;
          do
          {
            v240 = (char *)v295;
            if ( *(int *)((char *)v295 + v239) >= -1 )
            {
              v241 = (char *)v295 + v239;
              v242 = *(void **)((char *)v295 + v239 + 8);
              if ( v242 )
              {
                *((_QWORD *)v241 + 2) = 0;
                qfree(v242);
                *((_QWORD *)v241 + 1) = 0;
                *(_QWORD *)&v240[v239 + 24] = 0;
              }
              *(_DWORD *)&v240[v239] = -2;
            }
            v239 += 32;
            --v238;
          }
          while ( v238 );
          v237 = v295;
        }
        v296 = 0;
        qfree(v237);
      }
      if ( __dst[0] )
      {
        __dst[1] = nullptr;
        qfree(__dst[0]);
      }
      v38 = __ptr;
      if ( __ptr )
        goto LABEL_437;
      goto LABEL_438;
    case 0x20:
      v53 = unpack_dd((unsigned __int64 *)&__src, v8);
      v54 = unpack_dd((unsigned __int64 *)&__src, v294);
      LODWORD(__ptr) = -2;
      *(_QWORD *)&v304[8] = 0;
      *(_QWORD *)v304 = 0;
      v303 = (void *)-1LL;
      if ( (unsigned __int64)__src < v294 )
        sub_100053DA8((__int64)&__ptr, (__int64)&__src);
      __dst[1] = nullptr;
      __dst[0] = nullptr;
      *(_QWORD *)&v299 = 0;
      v55 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, void **, void **))(**(_QWORD **)(v4 + 440) + 232LL))(
              *(_QWORD *)(v4 + 440),
              v53,
              v54,
              &__ptr,
              __dst);
      if ( *(_BYTE *)(v4 + 184) == 1 )
        sub_100000AA0();
      sub_10002CF84((_QWORD **)v5, v55);
      if ( (v55 & 0x80000000) != 0 )
        sub_10004C294((_QWORD **)v5, (__int64)__dst);
      if ( __dst[0] )
      {
        __dst[1] = nullptr;
        qfree(__dst[0]);
      }
      if ( (int)__ptr >= -1 && v303 )
      {
        *(_QWORD *)v304 = 0;
        qfree(v303);
      }
      goto LABEL_438;
    case 0x21:
      v102 = unpack_dd((unsigned __int64 *)&__src, v8);
      v103 = unpack_dd((unsigned __int64 *)&__src, v294);
      v303 = nullptr;
      __ptr = nullptr;
      *(_QWORD *)v304 = 0;
      v104 = (*(__int64 (__fastcall **)(_QWORD, void **, __int64, __int64, void **))(**(_QWORD **)(v4 + 440) + 240LL))(
               *(_QWORD *)(v4 + 440),
               __dst,
               v102,
               v103,
               &__ptr);
      if ( *(_BYTE *)(v4 + 184) == 1 )
        sub_100000AA0();
      sub_10002CF84((_QWORD **)v5, v104);
      if ( v104 == 1 )
        sub_1000500AC((_QWORD **)v5, (__int64)__dst[0] + 1);
      else
        sub_10004C294((_QWORD **)v5, (__int64)&__ptr);
      v38 = __ptr;
      if ( __ptr )
        goto LABEL_437;
      goto LABEL_438;
    case 0x22:
      v44 = unpack_dd((unsigned __int64 *)&__src, v8);
      v45 = sub_10005B4E0(v44, (unsigned __int64 *)&__src);
      (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(v4 + 440) + 184LL))(
        *(_QWORD *)(v4 + 440),
        v45,
        v44);
      if ( v45 )
      {
        v46 = *(v45 - 1);
        if ( v46 )
        {
          v47 = 0;
          v48 = 56 * v46;
          v49 = v45;
          do
          {
            v50 = &v49[(unsigned __int64)v48 / 8];
            v51 = (void *)v49[(unsigned __int64)v48 / 8 - 3];
            if ( v51 )
            {
              *(v50 - 2) = 0;
              qfree(v51);
              *(v50 - 3) = 0;
              v49[(unsigned __int64)v48 / 8 - 1] = 0;
            }
            v52 = (void *)*(v50 - 6);
            if ( v52 )
            {
              v49[(unsigned __int64)v48 / 8 - 5] = 0;
              qfree(v52);
              *(v50 - 6) = 0;
              v49[(unsigned __int64)v48 / 8 - 4] = 0;
            }
            v49 -= 7;
            v47 += 56;
          }
          while ( v48 != v47 );
        }
        operator delete[](v45 - 2);
      }
      if ( *(_BYTE *)(v4 + 184) == 1 )
        goto LABEL_343;
      goto LABEL_475;
    case 0x23:
      v151 = v7;
      while ( (unsigned __int64)v151 < v8 )
      {
        if ( !*v151++ )
        {
          __src = v151;
          goto LABEL_237;
        }
      }
      v7 = nullptr;
LABEL_237:
      v182 = unpack_dd((unsigned __int64 *)&__src, v8);
      v183 = sub_10005CEDC((_QWORD *)v4);
      if ( v183 == -1 )
      {
        v222 = 0;
        v223 = -1;
      }
      else
      {
        if ( v182 )
        {
          v184 = fopenRB((const char *)v7);
        }
        else
        {
          if ( qdirname((char *)&__ptr, 0x400u, (char *)v7) && !qisdir((const char *)&__ptr) )
          {
            qmake_full_path((unsigned __int64)__dst, 1024, (char *)&__ptr);
            qgetcwd((char *)&v295, 0x400u);
            v266 = strlen((const char *)&v295);
            if ( !strncmp((const char *)__dst, (const char *)&v295, v266) )
            {
              v290 = nullptr;
              v291 = 0;
              v292 = 0;
              v284 = v5;
              do
              {
                if ( qisdir((const char *)__dst) )
                  break;
                v267 = v290;
                sub_1000444D4(&v287, (char *)__dst);
                sub_100050B64((_QWORD **)&v290, (__int64)v267, (__int64 *)&v287);
                sub_100006228(&v287);
              }
              while ( qdirname((char *)__dst, 0x400u, (char *)__dst) );
              if ( v291 )
              {
                v268 = 0;
                v269 = v291 - 1;
                do
                {
                  v270 = v269;
                  if ( *(_QWORD *)((char *)v290 + v268 + 8) )
                    v271 = *(const char **)((char *)v290 + v268);
                  else
                    v271 = &byte_100075A30;
                  if ( *(_BYTE *)(v4 + 184) == 1 )
                    sub_100000AA0();
                  if ( (unsigned int)qmkdir(v271, 0x1FFu) )
                    break;
                  v269 = v270 - 1;
                  v268 += 24;
                }
                while ( v270 );
              }
              sub_100010900((char **)&v290);
              v5 = v284;
            }
          }
          v184 = fopenWB((const char *)v7);
        }
        *(_QWORD *)(v4 + 8LL * v183 + 8) = v184;
        v222 = 0;
        if ( v184 )
          v223 = v183;
        else
          v223 = -1;
        if ( v184 && v182 )
        {
          v222 = qfsize(v184);
          v223 = v183;
        }
      }
      if ( *(_BYTE *)(v4 + 184) == 1 )
        sub_100000AA0();
      sub_10002CF84((_QWORD **)v5, v223);
      if ( v223 == -1 )
      {
        v272 = __error();
        sub_10002CF84((_QWORD **)v5, *v272);
      }
      else
      {
        sub_1000500AC((_QWORD **)v5, v222);
      }
      goto LABEL_475;
    case 0x24:
      v147 = unpack_dd((unsigned __int64 *)&__src, v8);
      v148 = v147;
      if ( v147 <= 0xF )
      {
        v149 = *(FILE **)(v4 + 8 + 8LL * v147);
        if ( v149 )
        {
          v150 = fileno(*(FILE **)(v4 + 8 + 8LL * v147));
          fchmod(v150, 0x1EDu);
          qfclose(v149);
          *(_QWORD *)(v4 + 8 + 8LL * v148) = 0;
        }
      }
      if ( *(_BYTE *)(v4 + 184) == 1 )
        goto LABEL_343;
      goto LABEL_475;
    case 0x25:
      v59 = unpack_dd((unsigned __int64 *)&__src, v8);
      v60 = unpack_dq((unsigned __int64 *)&__src, v294);
      v61 = unpack_dd((unsigned __int64 *)&__src, v294);
      v62 = v61;
      if ( v61 < 1 )
      {
        v64 = 0;
        v63 = nullptr;
      }
      else
      {
        v63 = operator new[]((unsigned int)v61);
        qfseek(*(FILE **)(v4 + 8 + 8LL * v59), v60, 0);
        v64 = qfread(*(FILE **)(v4 + 8 + 8LL * v59), v63, (unsigned int)v62);
      }
      sub_10002CF84((_QWORD **)v5, v64);
      if ( v62 == v64 )
      {
        sub_10004C184((_QWORD **)v5, v63, v62);
      }
      else
      {
        v233 = __error();
        sub_10002CF84((_QWORD **)v5, *v233);
      }
      if ( v63 )
        operator delete[](v63);
      if ( *(_BYTE *)(v4 + 184) == 1 )
        goto LABEL_343;
      goto LABEL_475;
    case 0x26:
      v89 = unpack_dd((unsigned __int64 *)&__src, v8);
      v90 = unpack_dq((unsigned __int64 *)&__src, v294);
      v91 = unpack_dd((unsigned __int64 *)&__src, v294);
      v92 = v91;
      if ( v91 )
      {
        v93 = operator new[](v91);
        v94 = v93;
        v95 = __src;
        if ( (char *)__src + v92 >= __src && (unsigned __int64)__src + v92 <= v294 )
        {
          __src = (char *)__src + v92;
          memcpy(v93, v95, v92);
        }
      }
      else
      {
        v94 = nullptr;
      }
      qfseek(*(FILE **)(v4 + 8 + 8LL * v89), v90, 0);
      if ( v94 )
        v243 = qfwrite(*(FILE **)(v4 + 8 + 8LL * v89), v94, v92);
      else
        v243 = 0;
      sub_10002CF84((_QWORD **)v5, v92);
      if ( v92 != v243 )
      {
        v244 = __error();
        sub_10002CF84((_QWORD **)v5, *v244);
      }
      if ( v94 )
        operator delete[](v94);
      if ( *(_BYTE *)(v4 + 184) == 1 )
LABEL_343:
        sub_100000AA0();
      goto LABEL_475;
    case 0x27:
      v114 = sub_10005EE98(v4 + 192, (_QWORD **)v5, (unsigned __int64)v7, v8);
      if ( !v114 )
        goto LABEL_475;
      sub_10005F000(v114, (__int64 *)&__ptr);
      sub_10004B950(v5, (__int64 *)&__ptr);
      sub_1000017A4(&__ptr);
      if ( (v6 & 1) == 0 )
        return;
      goto LABEL_476;
    case 0x28:
      v303 = nullptr;
      __ptr = nullptr;
      *(_QWORD *)v304 = 0;
      v97 = unpack_dd((unsigned __int64 *)&__src, v8);
      v98 = (*(__int64 (__fastcall **)(_QWORD, __int64, void **))(**(_QWORD **)(v4 + 440) + 416LL))(
              *(_QWORD *)(v4 + 440),
              v97,
              &__ptr);
      sub_10002CF84((_QWORD **)v5, v98);
      if ( v98 == 1 )
        sub_10005B6B4((_QWORD **)v5, &__ptr);
      v38 = __ptr;
      if ( __ptr )
        goto LABEL_437;
      goto LABEL_438;
    case 0x29:
      v163 = unpack_dq((unsigned __int64 *)&__src, v8);
      v164 = unpack_dd((unsigned __int64 *)&__src, v294);
      v165 = unpack_dd((unsigned __int64 *)&__src, v294);
      v166 = unpack_dd((unsigned __int64 *)&__src, v294);
      v295 = nullptr;
      v296 = 0;
      v297 = 0;
      v290 = nullptr;
      v291 = 0;
      v292 = 0;
      v301 = 0;
      *(_OWORD *)v300 = 0u;
      if ( (v166 & 1) != 0 )
        v167 = nullptr;
      else
        v167 = &v290;
      v299 = 0u;
      *(_OWORD *)__dst = 0u;
      sub_10005B938(&v295, (_QWORD **)__dst, v167, (unsigned __int64 *)&__src);
      v287 = nullptr;
      v288 = 0;
      v289 = 0;
      __ptr = (void *)0xFFFFFFFFLL;
      v303 = (void *)-1LL;
      v304[0] = 0;
      *(_OWORD *)&v304[4] = 0u;
      v305 = 0u;
      v306 = 0u;
      v307 = 0;
      v168 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, void **, void **, void **, void **, void **, int))(**(_QWORD **)(v4 + 440) + 424LL))(
               *(_QWORD *)(v4 + 440),
               v163 - 1,
               v164,
               v165,
               &v295,
               __dst,
               &v290,
               &v287,
               &__ptr,
               v166);
      sub_1000500AC((_QWORD **)v5, v168 + 1);
      if ( v168 == -1 )
      {
        if ( (v166 & 2) != 0 )
          sub_10005B360((_QWORD **)v5, (__int64)&__ptr);
        sub_10004C294((_QWORD **)v5, (__int64)&v287);
      }
      else if ( (v166 & 1) == 0 )
      {
        sub_10005BB10((_QWORD **)v5, (__int64)&v290, 1);
      }
      free_debug_event((__int64)&__ptr);
      if ( v287 )
      {
        v288 = 0;
        qfree(v287);
      }
      if ( v300[0] )
      {
        v300[1] = nullptr;
        qfree(v300[0]);
        v300[0] = nullptr;
        v301 = 0;
      }
      if ( __dst[0] )
      {
        __dst[1] = nullptr;
        qfree(__dst[0]);
      }
      v245 = v290;
      if ( v290 )
      {
        v246 = v291;
        if ( v291 )
        {
          v247 = 0;
          do
          {
            v248 = (char *)v290;
            v249 = (char *)v290 + v247;
            v250 = *(void **)((char *)v290 + v247 + 8);
            if ( v250 )
            {
              *((_QWORD *)v249 + 2) = 0;
              qfree(v250);
              *((_QWORD *)v249 + 1) = 0;
              *(_QWORD *)&v248[v247 + 24] = 0;
            }
            v247 += 32;
            --v246;
          }
          while ( v246 );
          v245 = v290;
        }
        v291 = 0;
        qfree(v245);
      }
      v251 = v295;
      if ( v295 )
      {
        v252 = v296;
        if ( v296 )
        {
          v253 = 0;
          do
          {
            v254 = (char *)v295;
            v255 = (char *)v295 + v253;
            v256 = *(void **)((char *)v295 + v253 + 8);
            if ( v256 )
            {
              *((_QWORD *)v255 + 2) = 0;
              qfree(v256);
              *((_QWORD *)v255 + 1) = 0;
              *(_QWORD *)&v254[v253 + 24] = 0;
            }
            v253 += 32;
            --v252;
          }
          while ( v252 );
          v251 = v295;
        }
        v296 = 0;
        qfree(v251);
      }
      goto LABEL_438;
    case 0x2A:
      v57 = unpack_dd((unsigned __int64 *)&__src, v8);
      v58 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 440) + 432LL))(*(_QWORD *)(v4 + 440), v57);
      sub_10002CF84((_QWORD **)v5, v58);
      goto LABEL_475;
    case 0x2B:
      v137 = v7;
      while ( (unsigned __int64)v137 < v8 )
      {
        if ( !*v137++ )
        {
          __src = v137;
          goto LABEL_235;
        }
      }
      v7 = nullptr;
LABEL_235:
      v181 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *))(**(_QWORD **)(v4 + 440) + 536LL))(
               *(_QWORD *)(v4 + 440),
               v7);
      sub_10002CF84((_QWORD **)v5, v181);
      goto LABEL_475;
    case 0x2C:
      v153 = unpack_dq((unsigned __int64 *)&__src, v8) - 1;
      v303 = nullptr;
      __ptr = nullptr;
      *(_QWORD *)v304 = 0;
      v154 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64))(**(_QWORD **)(v4 + 440) + 264LL))(
               *(_QWORD *)(v4 + 440),
               &__ptr,
               v153);
      v155 = (int)v303;
      if ( *(_BYTE *)(v4 + 184) == 1 )
        sub_100000AA0();
      sub_10002CF84((_QWORD **)v5, v154 + 2);
      if ( v154 >= 1 )
      {
        sub_10002CF84((_QWORD **)v5, v155);
        if ( v155 >= 1 )
        {
          v156 = 0;
          v157 = v155 & 0x7FFFFFFF;
          do
          {
            sub_10005AC70((_QWORD **)v5, (char *)__ptr + v156);
            v156 += 40;
            --v157;
          }
          while ( v157 );
        }
      }
      v38 = __ptr;
      if ( !__ptr )
        goto LABEL_438;
      v158 = (char *)v303;
      if ( v303 )
      {
        v159 = 0;
        do
        {
          v160 = (char *)__ptr;
          v161 = (char *)__ptr + v159;
          v162 = *(void **)((char *)__ptr + v159 + 16);
          if ( v162 )
          {
            *((_QWORD *)v161 + 3) = 0;
            qfree(v162);
            *((_QWORD *)v161 + 2) = 0;
            *(_QWORD *)&v160[v159 + 32] = 0;
          }
          v159 += 40;
          --v158;
        }
        while ( v158 );
        v38 = __ptr;
      }
      goto LABEL_437;
    case 0x2D:
      v35 = unpack_dq((unsigned __int64 *)&__src, v8) - 1;
      v303 = nullptr;
      __ptr = nullptr;
      *(_QWORD *)v304 = 0;
      v36 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64))(**(_QWORD **)(v4 + 440) + 272LL))(
              *(_QWORD *)(v4 + 440),
              &__ptr,
              v35);
      v37 = (int)v303;
      if ( (*(_BYTE *)(v4 + 184) & 1) != 0 )
        sub_100000AA0();
      sub_10002CF84((_QWORD **)v5, v36);
      if ( v36 )
        sub_100050A38((_QWORD **)v5, __ptr, v37);
      v38 = __ptr;
      if ( __ptr )
        goto LABEL_437;
      goto LABEL_438;
    case 0x2E:
      v118 = unpack_dq((unsigned __int64 *)&__src, v8) - 1;
      v119 = (const char *)__src;
      v120 = __src;
      break;
    case 0x2F:
      v285 = v6;
      v10 = unpack_dq((unsigned __int64 *)&__src, v8);
      v11 = unpack_dq((unsigned __int64 *)&__src, v294);
      v12 = unpack_dd((unsigned __int64 *)&__src, v294);
      v303 = nullptr;
      __ptr = nullptr;
      *(_QWORD *)v304 = 0;
      sub_100050D90((__int64 *)&__ptr, v12);
      if ( v12 >= 1 )
      {
        v13 = 0;
        v14 = (unsigned int)v12;
        do
        {
          v15 = (char *)__ptr;
          v16 = unpack_dd((unsigned __int64 *)&__src, v294);
          v17 = &v15[80 * v13];
          if ( v16 )
          {
            v18 = v16;
            v19 = *((_QWORD *)v17 + 1);
            if ( v19 >= v16 )
            {
              if ( v19 != v16 )
              {
                LOBYTE(__dst[0]) = 0;
                sub_100019CE4((_QWORD **)&v15[80 * v13], v16, __dst);
              }
            }
            else
            {
              v20 = *(char **)v17;
              if ( *((_QWORD *)v17 + 2) < (unsigned __int64)v16 )
              {
                v20 = (char *)qvector_reserve(&v15[80 * v13], *(_QWORD **)v17, v16, 1u);
                *(_QWORD *)v17 = v20;
                v19 = *((_QWORD *)v17 + 1);
              }
              bzero(&v20[v19], v18 - v19);
              *((_QWORD *)v17 + 1) = v18;
            }
            v21 = __src;
            if ( (char *)__src + v18 >= __src && (unsigned __int64)__src + v18 <= v294 )
            {
              v23 = *(void **)v17;
              __src = (char *)__src + v18;
              memcpy(v23, v21, v18);
            }
          }
          v24 = unpack_dd((unsigned __int64 *)&__src, v294);
          if ( v24 )
          {
            v25 = v24;
            v26 = *((_QWORD *)v17 + 4);
            if ( v26 >= v24 )
            {
              if ( v26 != v24 )
              {
                LOBYTE(__dst[0]) = 0;
                sub_100019CE4((_QWORD **)v17 + 3, v24, __dst);
              }
            }
            else
            {
              v27 = *((char **)v17 + 3);
              if ( *((_QWORD *)v17 + 5) < (unsigned __int64)v24 )
              {
                v27 = (char *)qvector_reserve((_QWORD *)v17 + 3, *((_QWORD **)v17 + 3), v24, 1u);
                *((_QWORD *)v17 + 3) = v27;
                v26 = *((_QWORD *)v17 + 4);
              }
              bzero(&v27[v26], v25 - v26);
              *((_QWORD *)v17 + 4) = v25;
            }
            v28 = __src;
            if ( (char *)__src + v25 >= __src && (unsigned __int64)__src + v25 <= v294 )
            {
              v29 = *((void **)v17 + 3);
              __src = (char *)__src + v25;
              memcpy(v29, v28, v25);
            }
          }
          v30 = unpack_dd((unsigned __int64 *)&__src, v294);
          if ( *((_QWORD *)v17 + 7) != v30 )
          {
            __dst[1] = nullptr;
            __dst[0] = nullptr;
            sub_100055488((_QWORD **)v17 + 6, v30, __dst);
          }
          if ( v30 >= 1 )
          {
            v31 = 0;
            v32 = 16LL * (unsigned int)v30;
            do
            {
              *(_QWORD *)(*((_QWORD *)v17 + 6) + v31) = unpack_dq((unsigned __int64 *)&__src, v294) - 1;
              *(_QWORD *)(*((_QWORD *)v17 + 6) + v31 + 8) = unpack_dq((unsigned __int64 *)&__src, v294) - 1;
              v31 += 16;
            }
            while ( v32 != v31 );
          }
          *((_DWORD *)v17 + 18) = unpack_dd((unsigned __int64 *)&__src, v294);
          ++v13;
        }
        while ( v13 != v14 );
      }
      v33 = unpack_dd((unsigned __int64 *)&__src, v294);
      __dst[1] = nullptr;
      __dst[0] = nullptr;
      *(_QWORD *)&v299 = 0;
      v34 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64, unsigned __int64, void **, __int64, void **))(**(_QWORD **)(v4 + 440) + 576LL))(
              *(_QWORD *)(v4 + 440),
              &v295,
              v10 - 1,
              v11 - 1,
              &__ptr,
              v33,
              __dst);
      sub_10002CF84((_QWORD **)v5, v34);
      if ( v34 != -1 )
      {
        if ( v34 == 1 )
          sub_1000500AC((_QWORD **)v5, (__int64)v295 + 1);
        else
          sub_10004C294((_QWORD **)v5, (__int64)__dst);
      }
      if ( __dst[0] )
      {
        __dst[1] = nullptr;
        qfree(__dst[0]);
      }
      if ( __ptr )
      {
        sub_100054200((__int64 *)&__ptr, 0);
        qfree(__ptr);
      }
      if ( (v285 & 1) == 0 )
        return;
      goto LABEL_476;
    case 0x30:
      if ( *(_QWORD *)(*(_QWORD *)(v4 + 440) + 552LL) )
      {
        sub_10002CF84((_QWORD **)v5, 1u);
        j__serialize_dynamic_register_set(v5, *(_QWORD *)(v4 + 440) + 544LL);
      }
      else
      {
        sub_10002CF84((_QWORD **)v5, 0);
      }
      goto LABEL_475;
    default:
      sub_10005F000(1, (__int64 *)&__ptr);
      v169 = __ptr;
      v170 = v303;
      v171 = *(_QWORD *)v304;
      __ptr = nullptr;
      v303 = nullptr;
      *(_QWORD *)v304 = 0;
      v172 = *(_QWORD **)v5;
      if ( !*(_QWORD *)v5 )
      {
        *(_QWORD *)v5 = v169;
        *(_QWORD *)(v5 + 8) = v170;
        *(_QWORD *)(v5 + 16) = v171;
        if ( (v6 & 1) != 0 )
          goto LABEL_476;
        return;
      }
      *(_QWORD *)(v5 + 8) = 0;
      qfree(v172);
      v100 = __ptr;
      *(_QWORD *)v5 = v169;
      *(_QWORD *)(v5 + 8) = v170;
      *(_QWORD *)(v5 + 16) = v171;
      if ( v100 )
      {
LABEL_215:
        v303 = nullptr;
        qfree(v100);
      }
LABEL_438:
      if ( (v6 & 1) == 0 )
        return;
      goto LABEL_476;
  }
  do
  {
    if ( (unsigned __int64)v120 >= v294 )
    {
      v122 = *(_QWORD *)(v4 + 440);
      v303 = nullptr;
      __ptr = nullptr;
      *(_QWORD *)v304 = 0;
      goto LABEL_470;
    }
  }
  while ( *v120++ );
  __src = v120;
  v122 = *(_QWORD *)(v4 + 440);
  v303 = nullptr;
  __ptr = nullptr;
  *(_QWORD *)v304 = 0;
  if ( v119 )
  {
    v123 = v122;
    v124 = strlen(v119);
    if ( v124 == -1 )
    {
      v125 = nullptr;
    }
    else
    {
      v125 = qvector_reserve(&__ptr, nullptr, v124 + 1, 1u);
      __ptr = v125;
    }
    v303 = (void *)(v124 + 1);
    memmove(v125, v119, v124);
    *((_BYTE *)__ptr + v124) = 0;
    v122 = v123;
  }
LABEL_470:
  v273 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, void **))(*(_QWORD *)v122 + 280LL))(v122, v118, &__ptr);
  if ( __ptr )
  {
    v303 = nullptr;
    qfree(__ptr);
  }
  if ( *(_BYTE *)(v4 + 184) == 1 )
    sub_100000AA0();
  sub_1000500AC((_QWORD **)v5, v273 + 1);
LABEL_475:
  if ( v6 )
LABEL_476:
    *(_BYTE *)(v4 + 289) = 1;
}
// 10004F150: variable 'v191' is possibly undefined
// 10004F150: variable 'v192' is possibly undefined
// 10004F150: variable 'v193' is possibly undefined
// 10004F150: variable 'v194' is possibly undefined
// 10004F150: variable 'v195' is possibly undefined
// 10004F150: variable 'v196' is possibly undefined
// 10004F150: variable 'v197' is possibly undefined
// 10004F300: variable 'v68' is possibly undefined
// 10004F300: variable 'v69' is possibly undefined
// 10004F300: variable 'v70' is possibly undefined
// 10004F300: variable 'v71' is possibly undefined
// 10004F300: variable 'v72' is possibly undefined
// 10004F300: variable 'v73' is possibly undefined
// 10005BF9C: using guessed type __int64 __fastcall j__serialize_dynamic_register_set(_QWORD, _QWORD);
// 100075A30: using guessed type char byte_100075A30;
