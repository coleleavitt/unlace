/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74FC0
// Address: 0x0000000000074FC0

//----- (0000000000074FC0) ----------------------------------------------------
__int64 __fastcall sub_74FC0(__int64 *a1, char a2, int8x16x2_t a3)
{
  __int64 *v3; // x19
  unsigned __int8 *v4; // x0
  __int64 v5; // x20
  size_t v6; // x21
  __int64 v7; // x19
  __int64 v8; // x9
  unsigned __int64 v9; // x10
  __int64 v10; // x23
  __int64 v11; // x20
  _BYTE *v12; // x0
  int v13; // w0
  __int64 v14; // x8
  __int64 v15; // x9
  __int64 v16; // x8
  __int64 v17; // x9
  __int64 v18; // x8
  int v19; // w0
  __int64 v20; // x8
  __int64 v21; // x9
  __int64 v22; // x8
  __int64 v23; // x9
  __int64 v24; // x8
  __int64 v25; // x20
  __int64 v26; // x21
  unsigned __int8 *v27; // x19
  unsigned __int8 *v28; // x0
  int v29; // w8
  __int64 result; // x0
  int v31; // w0
  __int64 v32; // x8
  __int64 v33; // x9
  __int64 v34; // x8
  __int64 v35; // x9
  __int64 v36; // x8
  int v37; // w0
  __int64 v38; // x8
  __int64 v39; // x9
  __int64 v40; // x8
  __int64 v41; // x9
  __int64 v42; // x8
  int v43; // w0
  __int64 v44; // x8
  __int64 v45; // x9
  __int64 v46; // x8
  __int64 v47; // x9
  __int64 v48; // x8
  int v49; // w0
  __int64 v50; // x8
  __int64 v51; // x9
  __int64 v52; // x8
  __int64 v53; // x9
  __int64 v54; // x8
  int v55; // w0
  __int64 v56; // x8
  __int64 v57; // x9
  __int64 v58; // x8
  __int64 v59; // x9
  __int64 v60; // x8
  int v61; // w0
  __int64 v62; // x8
  __int64 v63; // x9
  __int64 v64; // x8
  __int64 v65; // x9
  __int64 v66; // x8
  int v67; // w0
  __int64 v68; // x8
  __int64 v69; // x9
  __int64 v70; // x8
  __int64 v71; // x9
  __int64 v72; // x8
  int v73; // w0
  __int64 v74; // x8
  __int64 v75; // x9
  __int64 v76; // x8
  __int64 v77; // x9
  __int64 v78; // x8
  int v79; // w0
  __int64 v80; // x8
  __int64 v81; // x9
  __int64 v82; // x8
  __int64 v83; // x9
  __int64 v84; // x8
  int v85; // w0
  __int64 v86; // x8
  __int64 v87; // x9
  __int64 v88; // x8
  __int64 v89; // x9
  __int64 v90; // x8
  int v91; // w0
  __int64 v92; // x8
  __int64 v93; // x9
  __int64 v94; // x8
  __int64 v95; // x9
  __int64 v96; // x8
  int v97; // w0
  __int64 v98; // x8
  __int64 v99; // x9
  __int64 v100; // x8
  __int64 v101; // x9
  __int64 v102; // x8
  int v103; // w0
  __int64 v104; // x8
  __int64 v105; // x9
  __int64 v106; // x8
  __int64 v107; // x9
  __int64 v108; // x8
  __int64 v109; // x9
  int v110; // w10
  __int64 v111; // x8
  __int64 v112; // x9
  int v113; // w10
  __int64 v114; // x8
  _WORD *v115; // x8
  __int16 v116; // w9
  int v117; // t1
  int v118; // w0
  __int64 v119; // x8
  __int64 v120; // x9
  __int64 v121; // x8
  __int64 v122; // x9
  __int64 v123; // x8
  int v124; // w0
  __int64 v125; // x8
  __int64 v126; // x9
  __int64 v127; // x8
  __int64 v128; // x9
  __int64 v129; // x8
  __int64 *v130; // t2
  __int64 v131; // x20
  int v132; // w0
  __int64 *v133; // x8
  char v134; // w20
  void *v135; // x0
  __int64 *v136; // t2
  __int64 v137; // x20
  int v138; // w0
  __int64 *v139; // x8
  __int64 *v140; // t2
  __int64 v141; // x20
  int v142; // w0
  __int64 *v143; // x8
  __int64 *v144; // t2
  __int64 v145; // x20
  int v146; // w0
  __int64 *v147; // x8
  __int64 *v148; // t2
  __int64 v149; // x20
  int v150; // w0
  __int64 *v151; // x8
  __int64 *v152; // t2
  __int64 v153; // x20
  int v154; // w0
  __int64 *v155; // x8
  __int64 *v156; // t2
  __int64 v157; // x20
  int v158; // w0
  __int64 v159; // x8
  __int64 *v160; // x9
  int v161; // w0
  __int64 *v162; // t2
  __int64 v163; // x20
  int v164; // w0
  __int64 *v165; // x8
  __int64 v166; // x23
  __int64 v167; // x24
  __int64 *v168; // x20
  int v169; // w0
  __int64 v170; // x21
  __int64 v171; // x23
  int v173; // w0
  __int64 v174; // x21
  __int64 v175; // x23
  __int64 *v176; // x20
  int v177; // w19
  void *v178; // x0
  __int64 v179; // x21
  __int64 v180; // x23
  __int64 *v181; // x20
  unsigned int v182; // w19
  __int64 v183; // x21
  __int64 v184; // x23
  __int64 *v185; // x20
  int v186; // w19
  __int64 v187; // x21
  __int64 v188; // x23
  __int64 *v189; // x20
  int v190; // w19
  __int64 v191; // x21
  __int64 v192; // x23
  int v193; // w0
  __int64 v194; // x21
  __int64 v195; // x23
  __int64 *v196; // x20
  int v197; // w19
  __int64 v198; // x21
  __int64 v199; // x23
  __int64 *v200; // x20
  int v201; // w19
  int v202; // w0
  unsigned int v203; // w0
  int v204; // w8
  unsigned int v205; // w0
  _QWORD *v206; // x0
  __int64 v207; // x25
  _QWORD *v208; // x25
  _QWORD *v209; // x26
  _QWORD *v210; // t1
  _QWORD *v211; // x21
  const char **v212; // x27
  const char **v213; // x28
  _QWORD *v214; // x19
  char *v215; // x8
  __int64 v216; // x8
  const char *v217; // x9
  const char **v218; // t1
  int v219; // w8
  unsigned int v220; // w0
  __int64 v221; // x8
  int v222; // w0
  unsigned int v223; // w0
  __int64 *v224; // x19
  char *v225; // x19
  char *v226; // x21
  char *v227; // x8
  __int64 v228; // x8
  __int64 v229; // x9
  char *v230; // t1
  char *v231; // x21
  const char **v232; // x23
  char *v233; // x8
  __int64 v234; // x8
  const char *v235; // x9
  const char **v236; // t1
  void *v237; // x0
  unsigned __int8 v238[8]; // [xsp+8h] [xbp-A8h] BYREF
  void *v239; // [xsp+10h] [xbp-A0h] BYREF
  __int64 v240; // [xsp+18h] [xbp-98h]
  __int64 v241; // [xsp+20h] [xbp-90h]
  unsigned __int8 v242[8]; // [xsp+28h] [xbp-88h] BYREF
  void *ptr; // [xsp+30h] [xbp-80h] BYREF
  __int64 v244; // [xsp+38h] [xbp-78h]
  __int64 v245; // [xsp+40h] [xbp-70h]
  __int64 v246; // [xsp+48h] [xbp-68h]
  int8x16x2_t v247; // 0:q0.32
  int8x16x2_t v248; // 0:q0.32
  int8x16x2_t v249; // 0:q0.32
  int8x16x2_t v250; // 0:q0.32
  int8x16x2_t v251; // 0:q0.32
  int8x16x2_t v252; // 0:q0.32
  int8x16x2_t v253; // 0:q0.32
  int8x16x2_t v254; // 0:q0.32

  v246 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = a1;
  switch ( a2 )
  {
    case -80:
      v242[0] = 2;
      v244 = 0;
      v245 = 0;
      ptr = nullptr;
      sub_7748C(a1, v242);
      v4 = deref_idcv((unsigned __int8 *)(*v3 + 32 * v3[1] - 32), 2);
      v5 = (__int64)v4;
      if ( *v4 != 7 )
      {
        LODWORD(v3) = 0;
        switch ( (unsigned int)sub_77588(v4, v242) )
        {
          case 2u:
          case 9u:
            goto LABEL_152;
          case 3u:
            v222 = eadd((__int16 *)(v5 + 8), (__int16 *)&ptr, v5 + 8, 0, v247);
            switch ( v222 )
            {
              case 2:
                v223 = 97;
                break;
              case 5:
                v223 = 98;
                break;
              case 4:
                v223 = 86;
                break;
              default:
                goto LABEL_435;
            }
            set_qerrno(v223);
            break;
          case 5u:
            if ( *(_BYTE *)v5 == 5 )
            {
              v224 = (__int64 *)operator new(0x20u);
              sub_71228(v224, *(_QWORD *)(v5 + 8));
              free_idcv((__int64 *)v5);
              *(_BYTE *)v5 = 5;
              *(_QWORD *)(v5 + 8) = v224;
            }
            else
            {
              v224 = *(__int64 **)(v5 + 8);
            }
            v231 = &byte_8[(_QWORD)ptr];
            v232 = *(const char ***)ptr;
            while ( v232 != (const char **)v231 )
            {
              sub_7BAA8((_QWORD **)v224, v224 + 1, v232 + 4, (__int64)(v232 + 4));
              v233 = (char *)v232[1];
              if ( v233 )
              {
                do
                {
                  v232 = (const char **)v233;
                  v233 = *(char **)v233;
                }
                while ( v233 );
              }
              else
              {
                v234 = (__int64)(v232 + 2);
                if ( *(const char ***)v232[2] == v232 )
                {
                  v232 = (const char **)v232[2];
                }
                else
                {
                  do
                  {
                    v235 = *(const char **)v234;
                    v236 = *(const char ***)(*(_QWORD *)v234 + 16LL);
                    v234 = *(_QWORD *)v234 + 16LL;
                    v232 = v236;
                  }
                  while ( *v236 != v235 );
                }
              }
            }
            goto LABEL_435;
          case 6u:
          case 8u:
            set_qerrno(0x5FBu);
            goto LABEL_435;
          case 7u:
            if ( (unsigned int)idcv_int64(v5, v247) || (unsigned int)idcv_int64((__int64)v242, v254) )
              goto LABEL_435;
LABEL_152:
            LODWORD(v3) = 0;
            *(_QWORD *)(v5 + 8) += ptr;
            goto LABEL_436;
          default:
            goto LABEL_436;
        }
        goto LABEL_435;
      }
      LODWORD(v3) = idcv_string((__int64)v242);
      if ( !(_DWORD)v3 )
      {
        if ( v244 )
        {
          v6 = v244 - 1;
          if ( v244 != 1 )
          {
            v7 = v5 + 8;
            v8 = *(_QWORD *)(v5 + 16);
            v9 = *(_QWORD *)(v5 + 24);
            if ( v8 )
              v10 = v8 - 1;
            else
              v10 = 0;
            v11 = v10 + v244;
            if ( v9 >= v10 + v244 )
            {
              v12 = *(_BYTE **)v7;
            }
            else
            {
              v12 = qvector_reserve((pthread_mutex_t *)v7, *(void **)v7, v10 + v244, 1u);
              *(_QWORD *)v7 = v12;
            }
            *(_QWORD *)(v7 + 8) = v11;
            v12[v10 + v6] = 0;
            memcpy((void *)(*(_QWORD *)v7 + v10), ptr, v6);
LABEL_435:
            LODWORD(v3) = 0;
          }
        }
      }
LABEL_436:
      if ( v242[0] == 5 )
      {
        sub_6F17C((__int64)ptr, v242);
      }
      else if ( v242[0] == 7 )
      {
        if ( ptr )
        {
          v244 = 0;
          qfree(ptr);
          ptr = nullptr;
          v245 = 0;
        }
      }
      return (unsigned int)v3;
    case -79:
      v238[0] = 2;
      v240 = 0;
      v241 = 0;
      v239 = nullptr;
      move_idcv(v238, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
      if ( !v67 )
      {
        v68 = *v3;
        v69 = v3[1];
        v242[0] = 2;
        v244 = 0;
        v245 = 0;
        ptr = nullptr;
        copy_idcv(v242, (unsigned __int8 *)(v68 + 32 * v69 - 32));
        v70 = v3[1];
        if ( v70 )
        {
          v71 = *v3;
          v72 = v70 - 1;
          v3[1] = v72;
          free_idcv((__int64 *)(v71 + 32 * v72));
        }
        if ( v242[0] == 5 )
        {
          sub_6F17C((__int64)ptr, v242);
        }
        else if ( v242[0] == 7 && ptr )
        {
          v244 = 0;
          qfree(ptr);
          ptr = nullptr;
          v245 = 0;
        }
        v242[0] = 2;
        ptr = nullptr;
      }
      v166 = *v3;
      v167 = v3[1] - 1;
      v168 = (__int64 *)(*v3 + 32 * v167);
      LODWORD(v3) = 0;
      switch ( (unsigned int)sub_77588((unsigned __int8 *)v168, v238) )
      {
        case 2u:
        case 9u:
          goto LABEL_242;
        case 3u:
          v202 = eadd((__int16 *)(v166 + 32 * v167 + 8), (__int16 *)&v239, v166 + 32 * v167 + 8, 1, v248);
          switch ( v202 )
          {
            case 2:
              v203 = 97;
              break;
            case 5:
              v203 = 98;
              break;
            case 4:
              v203 = 86;
              break;
            default:
              goto LABEL_392;
          }
          v169 = set_qerrno(v203);
LABEL_410:
          LODWORD(v3) = v169;
          goto LABEL_411;
        case 5u:
          if ( *(_BYTE *)v168 == 5 )
          {
            v206 = operator new(0x20u);
            v207 = v166 + 32 * v167;
            v210 = *(_QWORD **)(v207 + 8);
            v208 = (_QWORD *)(v207 + 8);
            v209 = v210;
            v206[1] = 0;
            v211 = v206 + 1;
            v206[2] = 0;
            *v206 = v206 + 1;
            v212 = (const char **)(v210 + 1);
            v213 = (const char **)*v210;
            v214 = v206;
            while ( v213 != v212 )
            {
              sub_7BAA8((_QWORD **)v214, v211, v213 + 4, (__int64)(v213 + 4));
              v215 = (char *)v213[1];
              if ( v215 )
              {
                do
                {
                  v213 = (const char **)v215;
                  v215 = *(char **)v215;
                }
                while ( v215 );
              }
              else
              {
                v216 = (__int64)(v213 + 2);
                if ( *(const char ***)v213[2] == v213 )
                {
                  v213 = (const char **)v213[2];
                }
                else
                {
                  do
                  {
                    v217 = *(const char **)v216;
                    v218 = *(const char ***)(*(_QWORD *)v216 + 16LL);
                    v216 = *(_QWORD *)v216 + 16LL;
                    v213 = v218;
                  }
                  while ( *v218 != v217 );
                }
              }
            }
            *((_DWORD *)v214 + 6) = 1;
            *((_DWORD *)v214 + 7) = *((_DWORD *)v209 + 7);
            free_idcv(v168);
            *(_BYTE *)v168 = 5;
            *v208 = v214;
          }
          else
          {
            LODWORD(v3) = copy_idcv((unsigned __int8 *)v168, (unsigned __int8 *)v168);
            if ( (_DWORD)v3 )
              goto LABEL_411;
          }
          v225 = &byte_8[(_QWORD)v239];
          v226 = *(char **)v239;
          while ( v226 != v225 )
          {
            sub_7C4DC(*(__int64 ****)(v166 + 32 * v167 + 8), (_QWORD *)v226 + 4);
            v227 = *((char **)v226 + 1);
            if ( v227 )
            {
              do
              {
                v226 = v227;
                v227 = *(char **)v227;
              }
              while ( v227 );
            }
            else
            {
              v228 = (__int64)(v226 + 16);
              if ( **((char ***)v226 + 2) == v226 )
              {
                v226 = *((char **)v226 + 2);
              }
              else
              {
                do
                {
                  v229 = *(_QWORD *)v228;
                  v230 = *(char **)(*(_QWORD *)v228 + 16LL);
                  v228 = *(_QWORD *)v228 + 16LL;
                  v226 = v230;
                }
                while ( *(_QWORD *)v230 != v229 );
              }
            }
          }
LABEL_392:
          LODWORD(v3) = 0;
LABEL_411:
          if ( v238[0] == 5 )
            goto LABEL_431;
          if ( v238[0] == 7 )
          {
            v237 = v239;
            if ( v239 )
              goto LABEL_430;
          }
          return (unsigned int)v3;
        case 6u:
        case 8u:
          v169 = set_qerrno(0x5FBu);
          goto LABEL_410;
        case 7u:
          LODWORD(v3) = idcv_int64((__int64)v168, v248);
          if ( !(_DWORD)v3 )
          {
            LODWORD(v3) = idcv_int64((__int64)v238, v251);
            if ( !(_DWORD)v3 )
            {
LABEL_242:
              LODWORD(v3) = 0;
              *(_QWORD *)(v166 + 32 * v167 + 8) -= v239;
            }
          }
          goto LABEL_411;
        default:
          goto LABEL_411;
      }
    case -78:
      v238[0] = 2;
      v240 = 0;
      v241 = 0;
      v239 = nullptr;
      move_idcv(v238, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
      if ( !v73 )
      {
        v74 = *v3;
        v75 = v3[1];
        v242[0] = 2;
        v244 = 0;
        v245 = 0;
        ptr = nullptr;
        copy_idcv(v242, (unsigned __int8 *)(v74 + 32 * v75 - 32));
        v76 = v3[1];
        if ( v76 )
        {
          v77 = *v3;
          v78 = v76 - 1;
          v3[1] = v78;
          free_idcv((__int64 *)(v77 + 32 * v78));
        }
        if ( v242[0] == 5 )
        {
          sub_6F17C((__int64)ptr, v242);
        }
        else if ( v242[0] == 7 && ptr )
        {
          v244 = 0;
          qfree(ptr);
          ptr = nullptr;
          v245 = 0;
        }
        v242[0] = 2;
        ptr = nullptr;
      }
      v170 = *v3;
      v171 = v3[1] - 1;
      v3 = (__int64 *)(*v3 + 32 * v171);
      switch ( (unsigned int)sub_77588((unsigned __int8 *)v3, v238) )
      {
        case 2u:
        case 9u:
          goto LABEL_247;
        case 3u:
          v204 = emul(
                   (__int16 *)(v170 + 32 * v171 + 8),
                   (__int16 *)&v239,
                   v170 + 32 * v171 + 8,
                   v249.val[0].n128_f64[0],
                   (int8x8_t)v249.val[1].n128_u64[0])
               - 1;
          LODWORD(v3) = 0;
          v205 = 97;
          switch ( v204 )
          {
            case 0:
              goto LABEL_359;
            case 1:
              goto LABEL_417;
            case 3:
              v205 = 86;
              goto LABEL_417;
            case 4:
              v205 = 98;
LABEL_417:
              v173 = set_qerrno(v205);
              goto LABEL_418;
            default:
              goto LABEL_419;
          }
        case 5u:
          LODWORD(v3) = set_qerrno(0x5FBu);
          if ( !(_DWORD)v3 )
            goto LABEL_359;
          break;
        case 6u:
        case 8u:
          v173 = set_qerrno(0x5FBu);
LABEL_418:
          LODWORD(v3) = v173;
          break;
        case 7u:
          LODWORD(v3) = idcv_int64((__int64)v3, v249);
          if ( !(_DWORD)v3 )
          {
            LODWORD(v3) = idcv_int64((__int64)v238, v252);
            if ( !(_DWORD)v3 )
            {
LABEL_247:
              LODWORD(v3) = 0;
              *(_QWORD *)(v170 + 32 * v171 + 8) *= (_QWORD)v239;
            }
          }
          break;
        default:
LABEL_359:
          LODWORD(v3) = 0;
          break;
      }
LABEL_419:
      if ( v238[0] == 5 )
      {
LABEL_431:
        sub_6F17C((__int64)v239, v238);
      }
      else if ( v238[0] == 7 )
      {
        v237 = v239;
        if ( v239 )
        {
LABEL_430:
          v240 = 0;
          qfree(v237);
          v239 = nullptr;
          v241 = 0;
        }
      }
      return (unsigned int)v3;
    case -77:
      v238[0] = 2;
      v240 = 0;
      v241 = 0;
      v239 = nullptr;
      move_idcv(v238, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
      if ( !v103 )
      {
        v104 = *v3;
        v105 = v3[1];
        v242[0] = 2;
        v244 = 0;
        v245 = 0;
        ptr = nullptr;
        copy_idcv(v242, (unsigned __int8 *)(v104 + 32 * v105 - 32));
        v106 = v3[1];
        if ( v106 )
        {
          v107 = *v3;
          v108 = v106 - 1;
          v3[1] = v108;
          free_idcv((__int64 *)(v107 + 32 * v108));
        }
        if ( v242[0] == 5 )
        {
          sub_6F17C((__int64)ptr, v242);
        }
        else if ( v242[0] == 7 && ptr )
        {
          v244 = 0;
          qfree(ptr);
          ptr = nullptr;
          v245 = 0;
        }
        v242[0] = 2;
        ptr = nullptr;
      }
      v191 = *v3;
      v192 = v3[1] - 1;
      v3 = (__int64 *)(*v3 + 32 * v192);
      switch ( (unsigned int)sub_77588((unsigned __int8 *)v3, v238) )
      {
        case 2u:
          v221 = (__int64)v239;
          if ( !v239 )
            goto LABEL_363;
          goto LABEL_367;
        case 3u:
          v219 = ediv((__int16 *)(v191 + 32 * v192 + 8), (unsigned __int16 *)&v239, v191 + 32 * v192 + 8, v250) - 1;
          LODWORD(v3) = 0;
          v220 = 97;
          switch ( v219 )
          {
            case 0:
              goto LABEL_369;
            case 1:
              goto LABEL_425;
            case 3:
              v220 = 86;
              goto LABEL_425;
            case 4:
              v220 = 98;
LABEL_425:
              v193 = set_qerrno(v220);
              goto LABEL_426;
            default:
              goto LABEL_427;
          }
        case 5u:
          LODWORD(v3) = set_qerrno(0x5FBu);
          if ( !(_DWORD)v3 )
            goto LABEL_369;
          goto LABEL_427;
        case 6u:
        case 8u:
          v193 = set_qerrno(0x5FBu);
          goto LABEL_426;
        case 7u:
          LODWORD(v3) = idcv_int64((__int64)v3, v250);
          if ( !(_DWORD)v3 )
          {
            LODWORD(v3) = idcv_int64((__int64)v238, v253);
            if ( !(_DWORD)v3 )
              goto LABEL_366;
          }
          goto LABEL_427;
        case 9u:
LABEL_366:
          v221 = (__int64)v239;
          if ( v239 )
          {
LABEL_367:
            *(__int64 *)(v191 + 32 * v192 + 8) /= v221;
LABEL_369:
            LODWORD(v3) = 0;
          }
          else
          {
LABEL_363:
            v193 = set_qerrno(0x56u);
LABEL_426:
            LODWORD(v3) = v193;
          }
LABEL_427:
          if ( v238[0] == 5 )
            goto LABEL_431;
          if ( v238[0] == 7 )
          {
            v237 = v239;
            if ( v239 )
              goto LABEL_430;
          }
          return (unsigned int)v3;
        default:
          goto LABEL_369;
      }
    case -76:
      v238[0] = 2;
      v240 = 0;
      v241 = 0;
      v239 = nullptr;
      move_idcv(v238, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
      if ( !v55 )
      {
        v56 = *v3;
        v57 = v3[1];
        v242[0] = 2;
        v244 = 0;
        v245 = 0;
        ptr = nullptr;
        copy_idcv(v242, (unsigned __int8 *)(v56 + 32 * v57 - 32));
        v58 = v3[1];
        if ( v58 )
        {
          v59 = *v3;
          v60 = v58 - 1;
          v3[1] = v60;
          free_idcv((__int64 *)(v59 + 32 * v60));
        }
        if ( v242[0] == 5 )
        {
          sub_6F17C((__int64)ptr, v242);
        }
        else if ( v242[0] == 7 && ptr )
        {
          v244 = 0;
          qfree(ptr);
          ptr = nullptr;
          v245 = 0;
        }
        v242[0] = 2;
        ptr = nullptr;
      }
      v156 = v3;
      v3 = (__int64 *)*v3;
      v157 = v156[1] - 1;
      v158 = sub_77588((unsigned __int8 *)&v3[4 * v157], v238);
      if ( v158 == 2 )
      {
        v159 = (__int64)v239;
        if ( !v239 )
        {
LABEL_325:
          v161 = set_qerrno(0x56u);
          goto LABEL_326;
        }
LABEL_226:
        v160 = &v3[4 * v157];
        v134 = 1;
        v160[1] %= v159;
        goto LABEL_327;
      }
      if ( v158 == 9 )
      {
        v159 = (__int64)v239;
        if ( !v239 )
          goto LABEL_325;
        goto LABEL_226;
      }
      v161 = set_qerrno(0x3Du);
LABEL_326:
      LODWORD(v3) = v161;
      v134 = 0;
LABEL_327:
      if ( v238[0] == 5 )
      {
LABEL_332:
        sub_6F17C((__int64)v239, v238);
      }
      else if ( v238[0] == 7 )
      {
        v135 = v239;
        if ( v239 )
        {
LABEL_330:
          v240 = 0;
          qfree(v135);
          v239 = nullptr;
          v241 = 0;
          if ( (v134 & 1) == 0 )
            return (unsigned int)v3;
          goto LABEL_334;
        }
      }
LABEL_333:
      if ( (v134 & 1) != 0 )
LABEL_334:
        LODWORD(v3) = 0;
      return (unsigned int)v3;
    case -75:
      v238[0] = 2;
      v240 = 0;
      v241 = 0;
      v239 = nullptr;
      move_idcv(v238, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
      if ( !v31 )
      {
        v32 = *v3;
        v33 = v3[1];
        v242[0] = 2;
        v244 = 0;
        v245 = 0;
        ptr = nullptr;
        copy_idcv(v242, (unsigned __int8 *)(v32 + 32 * v33 - 32));
        v34 = v3[1];
        if ( v34 )
        {
          v35 = *v3;
          v36 = v34 - 1;
          v3[1] = v36;
          free_idcv((__int64 *)(v35 + 32 * v36));
        }
        if ( v242[0] == 5 )
        {
          sub_6F17C((__int64)ptr, v242);
        }
        else if ( v242[0] == 7 && ptr )
        {
          v244 = 0;
          qfree(ptr);
          ptr = nullptr;
          v245 = 0;
        }
        v242[0] = 2;
        ptr = nullptr;
      }
      v140 = v3;
      v3 = (__int64 *)*v3;
      v141 = v140[1] - 1;
      v142 = sub_77588((unsigned __int8 *)&v3[4 * v141], v238);
      if ( v142 == 2 || v142 == 9 )
      {
        v143 = &v3[4 * v141];
        v134 = 1;
        v143[1] = ((unsigned __int64)v239 | v143[1]) != 0;
      }
      else
      {
        LODWORD(v3) = set_qerrno(0x3Du);
        v134 = 0;
      }
      if ( v238[0] == 5 )
        goto LABEL_332;
      if ( v238[0] == 7 )
      {
        v135 = v239;
        if ( v239 )
          goto LABEL_330;
      }
      goto LABEL_333;
    case -74:
      v238[0] = 2;
      v240 = 0;
      v241 = 0;
      v239 = nullptr;
      move_idcv(v238, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
      if ( !v37 )
      {
        v38 = *v3;
        v39 = v3[1];
        v242[0] = 2;
        v244 = 0;
        v245 = 0;
        ptr = nullptr;
        copy_idcv(v242, (unsigned __int8 *)(v38 + 32 * v39 - 32));
        v40 = v3[1];
        if ( v40 )
        {
          v41 = *v3;
          v42 = v40 - 1;
          v3[1] = v42;
          free_idcv((__int64 *)(v41 + 32 * v42));
        }
        if ( v242[0] == 5 )
        {
          sub_6F17C((__int64)ptr, v242);
        }
        else if ( v242[0] == 7 && ptr )
        {
          v244 = 0;
          qfree(ptr);
          ptr = nullptr;
          v245 = 0;
        }
        v242[0] = 2;
        ptr = nullptr;
      }
      v144 = v3;
      v3 = (__int64 *)*v3;
      v145 = v144[1] - 1;
      v146 = sub_77588((unsigned __int8 *)&v3[4 * v145], v238);
      if ( v146 == 2 || v146 == 9 )
      {
        v147 = &v3[4 * v145];
        v134 = 1;
        v147[1] = (v147[1] != 0) & (unsigned __int8)(v239 != nullptr);
      }
      else
      {
        LODWORD(v3) = set_qerrno(0x3Du);
        v134 = 0;
      }
      if ( v238[0] == 5 )
        goto LABEL_332;
      if ( v238[0] == 7 )
      {
        v135 = v239;
        if ( v239 )
          goto LABEL_330;
      }
      goto LABEL_333;
    case -73:
      v25 = *a1;
      v26 = a1[1] - 1;
      v27 = (unsigned __int8 *)(*a1 + 32 * v26);
      v28 = deref_idcv(v27, 0);
      if ( v28 && *v28 == 5 )
      {
        free_idcv((__int64 *)v27);
        *(_QWORD *)(v25 + 32 * v26 + 8) = 1;
      }
      v29 = *v27;
      if ( v29 != 9 && v29 != 2 )
        return set_qerrno(0x3Du);
      LODWORD(v3) = 0;
      *(_QWORD *)(v25 + 32 * v26 + 8) = *(_QWORD *)(v25 + 32 * v26 + 8) == 0;
      return (unsigned int)v3;
    case -72:
      v238[0] = 2;
      v240 = 0;
      v241 = 0;
      v239 = nullptr;
      move_idcv(v238, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
      if ( !v49 )
      {
        v50 = *v3;
        v51 = v3[1];
        v242[0] = 2;
        v244 = 0;
        v245 = 0;
        ptr = nullptr;
        copy_idcv(v242, (unsigned __int8 *)(v50 + 32 * v51 - 32));
        v52 = v3[1];
        if ( v52 )
        {
          v53 = *v3;
          v54 = v52 - 1;
          v3[1] = v54;
          free_idcv((__int64 *)(v53 + 32 * v54));
        }
        if ( v242[0] == 5 )
        {
          sub_6F17C((__int64)ptr, v242);
        }
        else if ( v242[0] == 7 && ptr )
        {
          v244 = 0;
          qfree(ptr);
          ptr = nullptr;
          v245 = 0;
        }
        v242[0] = 2;
        ptr = nullptr;
      }
      v152 = v3;
      v3 = (__int64 *)*v3;
      v153 = v152[1] - 1;
      v154 = sub_77588((unsigned __int8 *)&v3[4 * v153], v238);
      if ( v154 == 2 || v154 == 9 )
      {
        v155 = &v3[4 * v153];
        v134 = 1;
        v155[1] |= (unsigned __int64)v239;
      }
      else
      {
        LODWORD(v3) = set_qerrno(0x3Du);
        v134 = 0;
      }
      if ( v238[0] == 5 )
        goto LABEL_332;
      if ( v238[0] == 7 )
      {
        v135 = v239;
        if ( v239 )
          goto LABEL_330;
      }
      goto LABEL_333;
    case -71:
      v238[0] = 2;
      v240 = 0;
      v241 = 0;
      v239 = nullptr;
      move_idcv(v238, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
      if ( !v13 )
      {
        v14 = *v3;
        v15 = v3[1];
        v242[0] = 2;
        v244 = 0;
        v245 = 0;
        ptr = nullptr;
        copy_idcv(v242, (unsigned __int8 *)(v14 + 32 * v15 - 32));
        v16 = v3[1];
        if ( v16 )
        {
          v17 = *v3;
          v18 = v16 - 1;
          v3[1] = v18;
          free_idcv((__int64 *)(v17 + 32 * v18));
        }
        if ( v242[0] == 5 )
        {
          sub_6F17C((__int64)ptr, v242);
        }
        else if ( v242[0] == 7 && ptr )
        {
          v244 = 0;
          qfree(ptr);
          ptr = nullptr;
          v245 = 0;
        }
        v242[0] = 2;
        ptr = nullptr;
      }
      v130 = v3;
      v3 = (__int64 *)*v3;
      v131 = v130[1] - 1;
      v132 = sub_77588((unsigned __int8 *)&v3[4 * v131], v238);
      if ( v132 == 2 || v132 == 9 )
      {
        v133 = &v3[4 * v131];
        v134 = 1;
        v133[1] &= (unsigned __int64)v239;
      }
      else
      {
        LODWORD(v3) = set_qerrno(0x3Du);
        v134 = 0;
      }
      if ( v238[0] == 5 )
        goto LABEL_332;
      if ( v238[0] == 7 )
      {
        v135 = v239;
        if ( v239 )
          goto LABEL_330;
      }
      goto LABEL_333;
    case -70:
      v238[0] = 2;
      v240 = 0;
      v241 = 0;
      v239 = nullptr;
      move_idcv(v238, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
      if ( !v43 )
      {
        v44 = *v3;
        v45 = v3[1];
        v242[0] = 2;
        v244 = 0;
        v245 = 0;
        ptr = nullptr;
        copy_idcv(v242, (unsigned __int8 *)(v44 + 32 * v45 - 32));
        v46 = v3[1];
        if ( v46 )
        {
          v47 = *v3;
          v48 = v46 - 1;
          v3[1] = v48;
          free_idcv((__int64 *)(v47 + 32 * v48));
        }
        if ( v242[0] == 5 )
        {
          sub_6F17C((__int64)ptr, v242);
        }
        else if ( v242[0] == 7 && ptr )
        {
          v244 = 0;
          qfree(ptr);
          ptr = nullptr;
          v245 = 0;
        }
        v242[0] = 2;
        ptr = nullptr;
      }
      v148 = v3;
      v3 = (__int64 *)*v3;
      v149 = v148[1] - 1;
      v150 = sub_77588((unsigned __int8 *)&v3[4 * v149], v238);
      if ( v150 == 2 || v150 == 9 )
      {
        v151 = &v3[4 * v149];
        v134 = 1;
        v151[1] ^= (unsigned __int64)v239;
      }
      else
      {
        LODWORD(v3) = set_qerrno(0x3Du);
        v134 = 0;
      }
      if ( v238[0] == 5 )
        goto LABEL_332;
      if ( v238[0] == 7 )
      {
        v135 = v239;
        if ( v239 )
          goto LABEL_330;
      }
      goto LABEL_333;
    case -69:
      v109 = a1[1] - 1;
      v110 = *(unsigned __int8 *)(*a1 + 32 * v109);
      if ( v110 != 9 && v110 != 2 )
        return set_qerrno(0x3Du);
      LODWORD(v3) = 0;
      *(_QWORD *)(*a1 + 32 * v109 + 8) = ~*(_QWORD *)(*a1 + 32 * v109 + 8);
      return (unsigned int)v3;
    case -68:
      v238[0] = 2;
      v240 = 0;
      v241 = 0;
      v239 = nullptr;
      move_idcv(v238, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
      if ( !v19 )
      {
        v20 = *v3;
        v21 = v3[1];
        v242[0] = 2;
        v244 = 0;
        v245 = 0;
        ptr = nullptr;
        copy_idcv(v242, (unsigned __int8 *)(v20 + 32 * v21 - 32));
        v22 = v3[1];
        if ( v22 )
        {
          v23 = *v3;
          v24 = v22 - 1;
          v3[1] = v24;
          free_idcv((__int64 *)(v23 + 32 * v24));
        }
        if ( v242[0] == 5 )
        {
          sub_6F17C((__int64)ptr, v242);
        }
        else if ( v242[0] == 7 && ptr )
        {
          v244 = 0;
          qfree(ptr);
          ptr = nullptr;
          v245 = 0;
        }
        v242[0] = 2;
        ptr = nullptr;
      }
      v136 = v3;
      v3 = (__int64 *)*v3;
      v137 = v136[1] - 1;
      v138 = sub_77588((unsigned __int8 *)&v3[4 * v137], v238);
      if ( v138 == 2 || v138 == 9 )
      {
        v139 = &v3[4 * v137];
        v134 = 1;
        v139[1] >>= (char)v239;
      }
      else
      {
        LODWORD(v3) = set_qerrno(0x3Du);
        v134 = 0;
      }
      if ( v238[0] == 5 )
        goto LABEL_332;
      if ( v238[0] == 7 )
      {
        v135 = v239;
        if ( v239 )
          goto LABEL_330;
      }
      goto LABEL_333;
    case -67:
      v238[0] = 2;
      v240 = 0;
      v241 = 0;
      v239 = nullptr;
      move_idcv(v238, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
      if ( !v61 )
      {
        v62 = *v3;
        v63 = v3[1];
        v242[0] = 2;
        v244 = 0;
        v245 = 0;
        ptr = nullptr;
        copy_idcv(v242, (unsigned __int8 *)(v62 + 32 * v63 - 32));
        v64 = v3[1];
        if ( v64 )
        {
          v65 = *v3;
          v66 = v64 - 1;
          v3[1] = v66;
          free_idcv((__int64 *)(v65 + 32 * v66));
        }
        if ( v242[0] == 5 )
        {
          sub_6F17C((__int64)ptr, v242);
        }
        else if ( v242[0] == 7 && ptr )
        {
          v244 = 0;
          qfree(ptr);
          ptr = nullptr;
          v245 = 0;
        }
        v242[0] = 2;
        ptr = nullptr;
      }
      v162 = v3;
      v3 = (__int64 *)*v3;
      v163 = v162[1] - 1;
      v164 = sub_77588((unsigned __int8 *)&v3[4 * v163], v238);
      if ( v164 == 2 || v164 == 9 )
      {
        v165 = &v3[4 * v163];
        v134 = 1;
        v165[1] <<= (char)v239;
      }
      else
      {
        LODWORD(v3) = set_qerrno(0x3Du);
        v134 = 0;
      }
      if ( v238[0] == 5 )
        goto LABEL_332;
      if ( v238[0] == 7 )
      {
        v135 = v239;
        if ( v239 )
          goto LABEL_330;
      }
      goto LABEL_333;
    case -66:
      v111 = *a1;
      v112 = a1[1] - 1;
      v113 = *(unsigned __int8 *)(*a1 + 32 * v112);
      if ( v113 == 2 || v113 == 9 )
      {
        LODWORD(v3) = 0;
        *(_QWORD *)(v111 + 32 * v112 + 8) = -*(_QWORD *)(v111 + 32 * v112 + 8);
      }
      else
      {
        if ( v113 != 3 )
          return set_qerrno(0x3Du);
        v114 = v111 + 32 * v112;
        v117 = *(unsigned __int16 *)(v114 + 22);
        v115 = (_WORD *)(v114 + 22);
        v116 = v117;
        if ( !v117 )
          goto LABEL_334;
        LODWORD(v3) = 0;
        *v115 = v116 ^ 0x8000;
      }
      return (unsigned int)v3;
    case -65:
      return idcv_string(*a1 + 32 * a1[1] - 32);
    case -56:
      v238[0] = 2;
      v240 = 0;
      v241 = 0;
      v239 = nullptr;
      move_idcv(v238, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
      if ( !v124 )
      {
        v125 = *v3;
        v126 = v3[1];
        v242[0] = 2;
        v244 = 0;
        v245 = 0;
        ptr = nullptr;
        copy_idcv(v242, (unsigned __int8 *)(v125 + 32 * v126 - 32));
        v127 = v3[1];
        if ( v127 )
        {
          v128 = *v3;
          v129 = v127 - 1;
          v3[1] = v129;
          free_idcv((__int64 *)(v128 + 32 * v129));
        }
        if ( v242[0] == 5 )
        {
          sub_6F17C((__int64)ptr, v242);
        }
        else if ( v242[0] == 7 && ptr )
        {
          v244 = 0;
          qfree(ptr);
          ptr = nullptr;
          v245 = 0;
        }
        v242[0] = 2;
        ptr = nullptr;
      }
      v198 = *v3;
      v199 = v3[1] - 1;
      v200 = (__int64 *)(*v3 + 32 * v199);
      v201 = sub_77758((__int64)v200, (__int64)v238);
      free_idcv(v200);
      if ( v238[0] == 5 )
      {
        sub_6F17C((__int64)v239, v238);
      }
      else if ( v238[0] == 7 && v239 )
      {
        v240 = 0;
        qfree(v239);
        v239 = nullptr;
        v241 = 0;
      }
      v238[0] = 2;
      v239 = nullptr;
      *(_QWORD *)(v198 + 32 * v199 + 8) = v201 == 0;
      if ( v238[0] == 5 )
        goto LABEL_324;
      if ( v238[0] == 7 )
      {
        v178 = v239;
        if ( v239 )
          goto LABEL_323;
      }
      goto LABEL_334;
    case -55:
      v238[0] = 2;
      v240 = 0;
      v241 = 0;
      v239 = nullptr;
      move_idcv(v238, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
      if ( !v79 )
      {
        v80 = *v3;
        v81 = v3[1];
        v242[0] = 2;
        v244 = 0;
        v245 = 0;
        ptr = nullptr;
        copy_idcv(v242, (unsigned __int8 *)(v80 + 32 * v81 - 32));
        v82 = v3[1];
        if ( v82 )
        {
          v83 = *v3;
          v84 = v82 - 1;
          v3[1] = v84;
          free_idcv((__int64 *)(v83 + 32 * v84));
        }
        if ( v242[0] == 5 )
        {
          sub_6F17C((__int64)ptr, v242);
        }
        else if ( v242[0] == 7 && ptr )
        {
          v244 = 0;
          qfree(ptr);
          ptr = nullptr;
          v245 = 0;
        }
        v242[0] = 2;
        ptr = nullptr;
      }
      v174 = *v3;
      v175 = v3[1] - 1;
      v176 = (__int64 *)(*v3 + 32 * v175);
      v177 = sub_77758((__int64)v176, (__int64)v238);
      free_idcv(v176);
      if ( v238[0] == 5 )
      {
        sub_6F17C((__int64)v239, v238);
      }
      else if ( v238[0] == 7 && v239 )
      {
        v240 = 0;
        qfree(v239);
        v239 = nullptr;
        v241 = 0;
      }
      v238[0] = 2;
      v239 = nullptr;
      *(_QWORD *)(v174 + 32 * v175 + 8) = v177 != 0;
      if ( v238[0] == 5 )
        goto LABEL_324;
      if ( v238[0] == 7 )
      {
        v178 = v239;
        if ( v239 )
          goto LABEL_323;
      }
      goto LABEL_334;
    case -54:
      v238[0] = 2;
      v240 = 0;
      v241 = 0;
      v239 = nullptr;
      move_idcv(v238, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
      if ( !v97 )
      {
        v98 = *v3;
        v99 = v3[1];
        v242[0] = 2;
        v244 = 0;
        v245 = 0;
        ptr = nullptr;
        copy_idcv(v242, (unsigned __int8 *)(v98 + 32 * v99 - 32));
        v100 = v3[1];
        if ( v100 )
        {
          v101 = *v3;
          v102 = v100 - 1;
          v3[1] = v102;
          free_idcv((__int64 *)(v101 + 32 * v102));
        }
        if ( v242[0] == 5 )
        {
          sub_6F17C((__int64)ptr, v242);
        }
        else if ( v242[0] == 7 && ptr )
        {
          v244 = 0;
          qfree(ptr);
          ptr = nullptr;
          v245 = 0;
        }
        v242[0] = 2;
        ptr = nullptr;
      }
      v187 = *v3;
      v188 = v3[1] - 1;
      v189 = (__int64 *)(*v3 + 32 * v188);
      v190 = sub_77758((__int64)v189, (__int64)v238);
      free_idcv(v189);
      if ( v238[0] == 5 )
      {
        sub_6F17C((__int64)v239, v238);
      }
      else if ( v238[0] == 7 && v239 )
      {
        v240 = 0;
        qfree(v239);
        v239 = nullptr;
        v241 = 0;
      }
      v238[0] = 2;
      v239 = nullptr;
      *(_QWORD *)(v187 + 32 * v188 + 8) = v190 < 1;
      if ( v238[0] == 5 )
        goto LABEL_324;
      if ( v238[0] == 7 )
      {
        v178 = v239;
        if ( v239 )
          goto LABEL_323;
      }
      goto LABEL_334;
    case -53:
      v238[0] = 2;
      v240 = 0;
      v241 = 0;
      v239 = nullptr;
      move_idcv(v238, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
      if ( !v118 )
      {
        v119 = *v3;
        v120 = v3[1];
        v242[0] = 2;
        v244 = 0;
        v245 = 0;
        ptr = nullptr;
        copy_idcv(v242, (unsigned __int8 *)(v119 + 32 * v120 - 32));
        v121 = v3[1];
        if ( v121 )
        {
          v122 = *v3;
          v123 = v121 - 1;
          v3[1] = v123;
          free_idcv((__int64 *)(v122 + 32 * v123));
        }
        if ( v242[0] == 5 )
        {
          sub_6F17C((__int64)ptr, v242);
        }
        else if ( v242[0] == 7 && ptr )
        {
          v244 = 0;
          qfree(ptr);
          ptr = nullptr;
          v245 = 0;
        }
        v242[0] = 2;
        ptr = nullptr;
      }
      v194 = *v3;
      v195 = v3[1] - 1;
      v196 = (__int64 *)(*v3 + 32 * v195);
      v197 = sub_77758((__int64)v196, (__int64)v238);
      free_idcv(v196);
      if ( v238[0] == 5 )
      {
        sub_6F17C((__int64)v239, v238);
      }
      else if ( v238[0] == 7 && v239 )
      {
        v240 = 0;
        qfree(v239);
        v239 = nullptr;
        v241 = 0;
      }
      v238[0] = 2;
      v239 = nullptr;
      *(_QWORD *)(v194 + 32 * v195 + 8) = v197 >= 0;
      if ( v238[0] == 5 )
        goto LABEL_324;
      if ( v238[0] == 7 )
      {
        v178 = v239;
        if ( v239 )
          goto LABEL_323;
      }
      goto LABEL_334;
    case -52:
      v238[0] = 2;
      v240 = 0;
      v241 = 0;
      v239 = nullptr;
      move_idcv(v238, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
      if ( !v85 )
      {
        v86 = *v3;
        v87 = v3[1];
        v242[0] = 2;
        v244 = 0;
        v245 = 0;
        ptr = nullptr;
        copy_idcv(v242, (unsigned __int8 *)(v86 + 32 * v87 - 32));
        v88 = v3[1];
        if ( v88 )
        {
          v89 = *v3;
          v90 = v88 - 1;
          v3[1] = v90;
          free_idcv((__int64 *)(v89 + 32 * v90));
        }
        if ( v242[0] == 5 )
        {
          sub_6F17C((__int64)ptr, v242);
        }
        else if ( v242[0] == 7 && ptr )
        {
          v244 = 0;
          qfree(ptr);
          ptr = nullptr;
          v245 = 0;
        }
        v242[0] = 2;
        ptr = nullptr;
      }
      v179 = *v3;
      v180 = v3[1] - 1;
      v181 = (__int64 *)(*v3 + 32 * v180);
      v182 = sub_77758((__int64)v181, (__int64)v238);
      free_idcv(v181);
      if ( v238[0] == 5 )
      {
        sub_6F17C((__int64)v239, v238);
      }
      else if ( v238[0] == 7 && v239 )
      {
        v240 = 0;
        qfree(v239);
        v239 = nullptr;
        v241 = 0;
      }
      v238[0] = 2;
      v239 = nullptr;
      *(_QWORD *)(v179 + 32 * v180 + 8) = v182 >> 31;
      if ( v238[0] == 5 )
        goto LABEL_324;
      if ( v238[0] == 7 )
      {
        v178 = v239;
        if ( v239 )
          goto LABEL_323;
      }
      goto LABEL_334;
    case -51:
      v238[0] = 2;
      v240 = 0;
      v241 = 0;
      v239 = nullptr;
      move_idcv(v238, (unsigned __int8 *)(*a1 + 32 * a1[1] - 32));
      if ( !v91 )
      {
        v92 = *v3;
        v93 = v3[1];
        v242[0] = 2;
        v244 = 0;
        v245 = 0;
        ptr = nullptr;
        copy_idcv(v242, (unsigned __int8 *)(v92 + 32 * v93 - 32));
        v94 = v3[1];
        if ( v94 )
        {
          v95 = *v3;
          v96 = v94 - 1;
          v3[1] = v96;
          free_idcv((__int64 *)(v95 + 32 * v96));
        }
        if ( v242[0] == 5 )
        {
          sub_6F17C((__int64)ptr, v242);
        }
        else if ( v242[0] == 7 && ptr )
        {
          v244 = 0;
          qfree(ptr);
          ptr = nullptr;
          v245 = 0;
        }
        v242[0] = 2;
        ptr = nullptr;
      }
      v183 = *v3;
      v184 = v3[1] - 1;
      v185 = (__int64 *)(*v3 + 32 * v184);
      v186 = sub_77758((__int64)v185, (__int64)v238);
      free_idcv(v185);
      if ( v238[0] == 5 )
      {
        sub_6F17C((__int64)v239, v238);
      }
      else if ( v238[0] == 7 && v239 )
      {
        v240 = 0;
        qfree(v239);
        v239 = nullptr;
        v241 = 0;
      }
      v238[0] = 2;
      v239 = nullptr;
      *(_QWORD *)(v183 + 32 * v184 + 8) = v186 > 0;
      if ( v238[0] == 5 )
      {
LABEL_324:
        sub_6F17C((__int64)v239, v238);
      }
      else if ( v238[0] == 7 )
      {
        v178 = v239;
        if ( v239 )
        {
LABEL_323:
          v240 = 0;
          qfree(v178);
          v239 = nullptr;
          v241 = 0;
          LODWORD(v3) = 0;
          return (unsigned int)v3;
        }
      }
      goto LABEL_334;
    case -50:
      return idcv_long(*a1 + 32 * a1[1] - 32, a3);
    case -48:
      return idcv_float(*a1 + 32 * a1[1] - 32, a3);
    case -47:
      return idcv_int64(*a1 + 32 * a1[1] - 32, a3);
    default:
      if ( !under_debugger )
        interr(1448);
      __break(1u);
      return result;
  }
}
// 750D4: variable 'v13' is possibly undefined
// 7516C: variable 'v19' is possibly undefined
// 75298: variable 'v31' is possibly undefined
// 75330: variable 'v37' is possibly undefined
// 753C8: variable 'v43' is possibly undefined
// 75460: variable 'v49' is possibly undefined
// 754F8: variable 'v55' is possibly undefined
// 75590: variable 'v61' is possibly undefined
// 7562C: variable 'v67' is possibly undefined
// 756C8: variable 'v73' is possibly undefined
// 75760: variable 'v79' is possibly undefined
// 757F8: variable 'v85' is possibly undefined
// 75890: variable 'v91' is possibly undefined
// 75928: variable 'v97' is possibly undefined
// 759C4: variable 'v103' is possibly undefined
// 75AEC: variable 'v118' is possibly undefined
// 75B84: variable 'v124' is possibly undefined
// 76830: variable 'v248' is possibly undefined
// 76840: variable 'v251' is possibly undefined
// 76854: variable 'v249' is possibly undefined
// 76864: variable 'v252' is possibly undefined
// 769BC: variable 'v250' is possibly undefined
// 76A18: variable 'v253' is possibly undefined
// 76A80: variable 'v247' is possibly undefined
// 76A8C: variable 'v254' is possibly undefined
// 168DF0: using guessed type char under_debugger;
