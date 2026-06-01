/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: realtoasc
// Address: 0x000000010006EEC0

//----- (000000010006EEC0) ----------------------------------------------------
unsigned __int64 __fastcall realtoasc(
        const char *__b,
        size_t a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int8x16x2_t a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int v9; // w20
  unsigned int v10; // w21
  __int16 v11; // w23
  unsigned int v12; // w24
  unsigned int v13; // w25
  char *v14; // x26
  unsigned int v15; // w27
  __int64 v16; // x28
  __int64 v17; // x25
  int v18; // w15
  __int64 v19; // x6
  bool v20; // zf
  char *v22; // x1
  _BOOL4 v23; // w10
  _BOOL4 v24; // w11
  bool v25; // zf
  unsigned int v26; // w10
  unsigned int v27; // w11
  unsigned __int64 result; // x0
  unsigned int v29; // w14
  unsigned int v30; // w13
  int v31; // w12
  unsigned int v32; // w11
  unsigned int v33; // w10
  unsigned int v34; // w9
  unsigned int v35; // w8
  char *v36; // x15
  unsigned int v37; // w15
  int v38; // w19
  size_t v39; // x21
  unsigned int v40; // w23
  __int16 v41; // w13
  unsigned int v42; // w16
  int v43; // w17
  unsigned __int64 v44; // t2
  int v45; // w0
  int v46; // w1
  int v47; // w2
  int v48; // w3
  int v49; // w4
  unsigned __int16 v50; // w5
  unsigned __int16 v51; // w17
  unsigned __int16 v52; // w0
  unsigned __int16 v53; // w1
  unsigned __int16 v54; // w2
  int v55; // w3
  int v56; // w16
  unsigned int v57; // w3
  int v58; // w2
  unsigned __int64 v59; // t2
  int v60; // w16
  unsigned int v61; // w21
  __int16 *v62; // x23
  bool v64; // cf
  unsigned __int16 v65; // w26
  unsigned __int16 v66; // w22
  int v67; // w20
  __int16 v68; // w27
  unsigned int v69; // w25
  int v70; // w8
  __int64 v71; // x19
  unsigned int v72; // w28
  char *v73; // x9
  unsigned int v74; // w8
  __int16 v75; // w10
  bool v76; // zf
  bool v77; // zf
  int v78; // w10
  unsigned __int16 v79; // w8
  unsigned __int16 v80; // w9
  unsigned __int16 v81; // w11
  unsigned int v82; // w19
  unsigned __int16 v83; // w12
  __int64 *v84; // x22
  unsigned __int16 v85; // w16
  unsigned __int16 v86; // w14
  unsigned int v87; // w15
  unsigned __int16 v88; // w17
  int v89; // w17
  int v90; // w15
  unsigned int v91; // w17
  __int64 *v92; // x22
  int v93; // w19
  unsigned __int16 v94; // w8
  __int64 *v95; // x23
  int v96; // w15
  unsigned __int16 v97; // w14
  unsigned __int16 v98; // w13
  unsigned __int16 v99; // w12
  unsigned __int16 v100; // w11
  unsigned __int16 v101; // w10
  unsigned __int16 v102; // w9
  int v103; // w0
  unsigned __int8 v104; // w21
  int v105; // w16
  unsigned __int64 v106; // t2
  int v107; // w14
  int v108; // w13
  int v109; // w12
  int v110; // w11
  int v111; // w10
  int v112; // w8
  int v113; // w9
  int v114; // w0
  int v115; // w1
  int v116; // w2
  int v117; // w3
  int v118; // w4
  int v119; // w5
  unsigned __int16 v120; // w20
  unsigned __int16 v121; // w9
  unsigned __int16 v122; // w0
  unsigned __int16 v123; // w1
  unsigned __int16 v124; // w2
  unsigned __int16 v125; // w3
  __int16 v126; // w4
  int v127; // w15
  unsigned int v128; // w15
  unsigned int v129; // w9
  unsigned int v130; // w9
  unsigned int v131; // w9
  unsigned int v132; // w9
  int v133; // w9
  char *v134; // x23
  __int64 v135; // x20
  char *v136; // x22
  char *v137; // x21
  __int64 v138; // x24
  int v139; // w11
  unsigned __int64 v140; // t2
  int v141; // w12
  int v142; // w13
  int v143; // w14
  int v144; // w15
  int v145; // w8
  int v146; // w9
  int v147; // w10
  int v148; // w16
  int v149; // w0
  int v150; // w1
  int v151; // w2
  int v152; // w3
  int v153; // w4
  int v154; // w5
  unsigned int v155; // w7
  unsigned __int16 v156; // w25
  unsigned __int16 v157; // w16
  unsigned __int16 v158; // w0
  unsigned __int16 v159; // w1
  unsigned __int16 v160; // w2
  unsigned __int16 v161; // w3
  __int16 v162; // w4
  int v163; // w11
  unsigned int v164; // w11
  unsigned int v165; // w11
  unsigned int v166; // w11
  unsigned int v167; // w11
  unsigned int v168; // w8
  int v169; // w8
  unsigned int v170; // w0
  unsigned int v171; // w9
  int v172; // w8
  char *v173; // x8
  int v174; // w9
  int v175; // w8
  unsigned int v176; // w21
  unsigned int v177; // w20
  int v178; // w22
  unsigned int v179; // w0
  size_t v180; // x0
  int v181; // w8
  __int64 v182; // x21
  size_t v183; // x22
  unsigned int v184; // w0
  __int64 v185; // x3
  __int64 v186; // x4
  __int64 v187; // x5
  __int64 v188; // x6
  __int64 v189; // x7
  unsigned int v190; // w19
  unsigned int v191; // w8
  __int64 v192; // x21
  unsigned int v193; // w0
  __int64 v194; // x8
  bool v195; // cc
  int v196; // w8
  __int64 v197; // x24
  size_t v198; // x21
  signed int v199; // w8
  __int64 v200; // x21
  unsigned int v201; // w16
  unsigned __int16 v202; // w17
  int v203; // w0
  int v204; // w16
  int v205; // w17
  unsigned int v206; // w15
  __int16 v207; // [xsp+24h] [xbp-12Ch]
  __int16 v208; // [xsp+24h] [xbp-12Ch]
  unsigned __int8 v209; // [xsp+28h] [xbp-128h]
  unsigned int v210; // [xsp+2Ch] [xbp-124h]
  unsigned int v211; // [xsp+30h] [xbp-120h]
  char *v212; // [xsp+38h] [xbp-118h]
  size_t v213; // [xsp+40h] [xbp-110h]
  char *v214; // [xsp+48h] [xbp-108h]
  int8x16_t v215; // [xsp+50h] [xbp-100h]
  __int16 v216; // [xsp+50h] [xbp-100h]
  __int128 v217; // [xsp+60h] [xbp-F0h] BYREF
  __int128 v218; // [xsp+70h] [xbp-E0h] BYREF
  __int128 v219; // [xsp+80h] [xbp-D0h] BYREF
  char __s[48]; // [xsp+94h] [xbp-BCh] BYREF
  _WORD v221[2]; // [xsp+C4h] [xbp-8Ch] BYREF
  int16x8_t v222; // [xsp+C8h] [xbp-88h]
  unsigned __int16 v223; // [xsp+D8h] [xbp-78h]
  unsigned __int16 v224[3]; // [xsp+DAh] [xbp-76h] BYREF
  __int64 v225; // [xsp+E0h] [xbp-70h]
  __int16 v226; // [xsp+E8h] [xbp-68h]
  __int16 v227; // [xsp+EAh] [xbp-66h]
  int v228; // [xsp+ECh] [xbp-64h]
  __int64 vars8; // [xsp+158h] [xbp+8h]
  int8x16x2_t v230; // 0:q0.32

  if ( (a2 & 0x8000000000000000LL) == 0 )
  {
    v17 = a2;
    v14 = (char *)__b;
    v18 = (__int16)a3[7];
    v19 = a3[7] & 0x7FFF;
    if ( (_DWORD)v19 == 0x7FFF )
    {
      if ( a3[6] & 0x7FFF | a3[1] )
        v20 = 0;
      else
        v20 = *(_QWORD *)(a3 + 2) == 0;
      if ( v20 && *a3 == 0 )
      {
        if ( v18 < 0 )
          v22 = "-Inf";
        else
          v22 = "+Inf";
      }
      else
      {
        v22 = "NaN";
      }
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (unsigned __int64)qstrncpy(__b, (unsigned __int8 *)v22, v17);
    }
    v23 = BYTE1(a4) >= (unsigned int)BYTE2(a4) + 3;
    v24 = (unsigned int)BYTE1(a4) + 3 < a2;
    v25 = !v23 || !v24;
    if ( v23 && v24 )
      v26 = BYTE1(a4);
    else
      v26 = 0;
    if ( v25 )
      v27 = 0;
    else
      v27 = BYTE2(a4);
    if ( BYTE2(a4) )
      result = v26;
    else
      result = BYTE1(a4);
    if ( BYTE2(a4) )
      v15 = v27;
    else
      v15 = 0;
    v29 = *a3;
    v30 = a3[1];
    v31 = a3[2];
    v32 = a3[3];
    v33 = a3[4];
    v34 = a3[5];
    v35 = a3[6];
    a7.val[0].i64[1] = 0x3FFF800000000000LL;
    v217 = xmmword_10008C250;
    if ( v18 >= 0 )
      v36 = &byte_1000931E5;
    else
      v36 = "-";
    v214 = v36;
    v37 = 0x3FFF;
    if ( (_DWORD)v19 == 0x3FFF )
    {
      if ( v35 == 0x8000 )
      {
        v209 = a4;
        v210 = result;
        if ( !v34 && !v33 && !v32 && !v31 && !v30 && !v29 )
        {
          v211 = v15;
          v212 = v14;
          v213 = a2;
          LOWORD(v13) = 0;
          LOWORD(v9) = 0;
          LOWORD(v15) = 0;
          LOWORD(v14) = 0;
          LOWORD(v12) = 0;
          v11 = 0;
          LODWORD(v16) = 0;
          LOWORD(v10) = 0x8000;
          v41 = 0x3FFF;
          goto LABEL_112;
        }
LABEL_56:
        v207 = v19;
        v211 = v15;
        v212 = v14;
        v213 = a2;
        v16 = 0;
        LOWORD(v218) = v29;
        WORD1(v218) = v30;
        v61 = 16;
        v62 = (__int16 *)&qword_10008C2E0;
        WORD2(v218) = v31;
        WORD3(v218) = v32;
        WORD4(v218) = v33;
        WORD5(v218) = v34;
        WORD6(v218) = v35;
        HIWORD(v218) = 16494;
        while ( 1 )
        {
          ediv((__int64)&v218, v62, (__int64)&v217);
          a7.val[1].i64[0] = v217;
          v65 = WORD4(v217);
          v66 = WORD5(v217);
          v67 = WORD6(v217);
          v68 = HIWORD(v217);
          v69 = HIWORD(v217) & 0x7FFF;
          if ( v69 > 0x3FFE )
            break;
          v219 = 0u;
          if ( (HIWORD(v217) & 0x8000) != 0 )
            goto LABEL_73;
LABEL_58:
          if ( (_QWORD)v217 == (_QWORD)v219 && *(_QWORD *)((char *)&v217 + 6) == *(_QWORD *)((char *)&v219 + 6) )
          {
            v218 = v217;
            v16 = v61 + (unsigned int)v16;
          }
          v62 += 8;
          v64 = v61 >= 2;
          v61 >>= 1;
          if ( !v64 )
          {
            HIWORD(v218) = v207 + HIWORD(v218) - 16494;
            v41 = HIWORD(v218);
            v11 = v218;
            LOWORD(v12) = WORD1(v218);
            LOWORD(v14) = WORD2(v218);
            LOWORD(v15) = WORD3(v218);
            LOWORD(v9) = WORD4(v218);
            LOWORD(v13) = WORD5(v218);
            LOWORD(v10) = WORD6(v218);
            a7.val[0].i64[1] = 0x3FFF800000000000LL;
            v217 = xmmword_10008C250;
            if ( (HIWORD(v218) & 0x8000) != 0 )
              goto LABEL_112;
            v216 = HIWORD(v218);
            v78 = SHIWORD(v218);
            v79 = WORD1(v218);
            v80 = WORD2(v218);
            v81 = WORD3(v218);
            v82 = 4096;
            v83 = WORD4(v218);
            v84 = qword_10008C260;
            v85 = WORD6(v218);
            v86 = WORD5(v218);
            while ( 1 )
            {
              v87 = 16386;
              v88 = v78;
              if ( (unsigned __int16)v78 == 16386 )
              {
                if ( v85 == 40960 )
                  goto LABEL_88;
                v87 = 40960;
                v88 = v85;
              }
              if ( v87 > v88 )
                goto LABEL_246;
LABEL_88:
              v89 = *((__int16 *)v84 + 7);
              v90 = (v89 >> 31) | 1;
              if ( ((v89 ^ v78) & 0x8000) != 0 )
                goto LABEL_100;
              v91 = v89 & 0x7FFF;
              if ( v91 != (unsigned __int16)v78 )
                goto LABEL_98;
              v91 = *((unsigned __int16 *)v84 + 6);
              LOWORD(v78) = v85;
              if ( v91 != v85 )
                goto LABEL_98;
              v91 = *((unsigned __int16 *)v84 + 5);
              LOWORD(v78) = v86;
              if ( v91 != v86 )
                goto LABEL_98;
              v91 = *((unsigned __int16 *)v84 + 4);
              LOWORD(v78) = v83;
              if ( v91 != v83 )
                goto LABEL_98;
              v91 = *((unsigned __int16 *)v84 + 3);
              LOWORD(v78) = v81;
              if ( v91 != v81 )
                goto LABEL_98;
              v91 = *((unsigned __int16 *)v84 + 2);
              LOWORD(v78) = v80;
              if ( v91 != v80 )
                goto LABEL_98;
              v91 = *((unsigned __int16 *)v84 + 1);
              LOWORD(v78) = v79;
              if ( v91 != v79 )
                goto LABEL_98;
              v91 = *(unsigned __int16 *)v84;
              if ( v91 != (unsigned __int16)v218 )
              {
                LOWORD(v78) = v218;
LABEL_98:
                if ( v91 <= (unsigned __int16)v78 )
                  v90 = -v90;
LABEL_100:
                if ( v90 > 0 )
                  goto LABEL_102;
              }
              ediv((__int64)&v218, (__int16 *)v84, (__int64)&v218);
              emul((__int64)&v217, (__int64)v84, (__int64)&v217);
              LODWORD(v16) = v82 + v16;
LABEL_102:
              if ( v82 >= 2 )
              {
                v84 += 2;
                v82 >>= 1;
                v85 = WORD6(v218);
                v78 = SHIWORD(v218);
                v86 = WORD5(v218);
                v83 = WORD4(v218);
                v81 = WORD3(v218);
                v80 = WORD2(v218);
                v79 = WORD1(v218);
                if ( (SHIWORD(v218) & 0x80000000) == 0 )
                  continue;
              }
LABEL_246:
              v41 = v216;
              goto LABEL_112;
            }
          }
        }
        v219 = v217;
        if ( v69 > 0x406D )
          goto LABEL_58;
        v70 = 16494 - v69;
        if ( v69 > 0x405E )
        {
          v75 = v217;
          v73 = (char *)&v219;
        }
        else
        {
          if ( v70 >= 31 )
            v70 = 31;
          v71 = v16;
          v72 = 16509 - v69 - v70;
          v215 = a7.val[1];
          bzero(&v219, ((v72 >> 3) & 0x1FFFFFFE) + 2LL);
          a7.val[1] = v215;
          v73 = &__s[((v72 >> 3) & 0x1FFFFFFE) - 10];
          v74 = v72 & 0xFFFFFFF0;
          v16 = v71;
          v70 = 16478 - v69 - v74;
          v75 = *(_WORD *)v73;
        }
        *(_WORD *)v73 = word_100098986[v70] & v75;
        if ( (v68 & 0x8000) == 0 )
          goto LABEL_58;
LABEL_73:
        *(int16x4_t *)a7.val[0].i8 = vceq_s16(*(int16x4_t *)a7.val[1].i8, *(int16x4_t *)&v219);
        a7.val[0].i16[0] = vminv_u16(*(uint16x4_t *)a7.val[0].i8);
        if ( (a7.val[0].i8[0] & 1) == 0
          || (v65 == WORD4(v219) ? (v76 = v66 != WORD5(v219)) : (v76 = 1),
              !v76 ? (v77 = v67 == WORD6(v219)) : (v77 = 0),
              !v77) )
        {
          eadd((unsigned __int16 *)&v219, (unsigned __int16 *)&xmmword_10008C250, (int16x4_t *)&v219, 1, a7);
        }
        goto LABEL_58;
      }
      v37 = 0x8000;
      v42 = v35;
    }
    else
    {
      if ( !(_DWORD)v19 )
      {
        if ( !v15 )
          return qsnprintf(v14, a2, "%s0.0", a4, a5, a6, v19, a9, (char)v214);
        v38 = 0;
        strcpy(__s, "0.0");
        if ( !(_DWORD)result )
          goto LABEL_30;
LABEL_150:
        if ( v15 )
        {
          v175 = result - v15 + (~v38 >> 31);
          v176 = v175 - 2;
          if ( v38 >= 0 )
            v177 = v38;
          else
            v177 = -v38;
          if ( !v38 || v177 > v176 )
          {
            v179 = strlen(&__s[2]);
            if ( v15 < v179 )
            {
              v179 = v15;
              do
              {
                if ( __s[v179 + 1] != 48 )
                  break;
                --v179;
              }
              while ( v179 );
              __s[v179 + 2] = 0;
            }
            v40 = v15 - v179;
            if ( v176 )
              v195 = v38 < 0;
            else
              v195 = 0;
            v196 = v195;
            v39 = v176 - v196;
            if ( (_DWORD)v39 )
            {
              memset(v14, 32, v39);
              v14[v39] = 0;
            }
            else
            {
              v39 = 0;
            }
            goto LABEL_207;
          }
          v178 = v175 - 2;
        }
        else
        {
          v40 = 0;
          v39 = 0;
          if ( v38 >= 0 )
            v177 = v38;
          else
            v177 = -v38;
          if ( !v38 )
            goto LABEL_207;
          v178 = result;
          if ( v177 > (unsigned int)result )
            goto LABEL_207;
        }
        if ( __s[2] != 48 || __s[3] )
        {
          v180 = strlen(&__s[2]);
          result = (unsigned __int64)memmove(&__s[1], &__s[2], v180 + 1);
          if ( !v15 )
            goto LABEL_182;
        }
        else
        {
          __s[1] = 0;
          if ( !v15 )
            goto LABEL_182;
        }
        if ( v38 > 0 )
          v181 = -v177;
        else
          v181 = -1;
        v182 = (unsigned int)(v178 + v181);
        if ( v178 + v181 )
        {
          result = (unsigned __int64)memset(v14, 32, (unsigned int)(v178 + v181));
          v14[v182] = 0;
          if ( v38 >= 1 )
          {
LABEL_183:
            v184 = strlen(__s);
            if ( v177 >= v184 )
            {
              v40 = v15;
              v190 = v184;
            }
            else
            {
              v190 = v177 + 1;
              if ( v15 )
              {
                v191 = v184 - v190;
                if ( v184 - v190 > v15 )
                {
                  __s[v190 + v15] = 0;
                  v191 = v15;
                }
                v40 = v15 - v191;
              }
              else
              {
                v40 = 0;
              }
            }
            v197 = v182 + (int)qsnprintf(&v14[v182], v17 - v182, "%s%.*s", v185, v186, v187, v188, v189, (char)v214);
            if ( !v15 && !__s[v190] )
              ++v40;
            if ( v190 <= v177 )
            {
              v198 = (int)(v177 - v190 + 1);
              memset(&v14[v197], 48, v198);
              v197 += v198;
            }
            v183 = v197 + 1;
            v14[v197] = 46;
            v194 = v190;
LABEL_215:
            result = qsnprintf(&v14[v183], v17 - v183, "%s", a4, a5, a6, v19, a9, (char)&__s[v194]);
            v38 = 0;
            v183 += (int)result;
            goto LABEL_216;
          }
LABEL_177:
          if ( *v214 )
            v14[v182++] = *v214;
          *(_WORD *)&v14[v182] = 11824;
          v183 = v182 + 2;
          if ( v15 && (int)v177 > (int)v15 )
          {
            v38 = 0;
            goto LABEL_217;
          }
          v40 = v15;
          v192 = v177 - 1;
          if ( v177 != 1 )
          {
            memset(&v14[v183], 48, v177 - 1);
            v183 += v192;
            if ( v15 )
              v40 = v15 - v192;
            else
              v40 = 0;
          }
          if ( v15 )
          {
            v193 = strlen(__s);
            if ( v40 < v193 )
            {
              __s[v40] = 0;
              v193 = v40;
            }
            v194 = 0;
            v40 -= v193;
          }
          else
          {
            v194 = 0;
          }
          goto LABEL_215;
        }
LABEL_182:
        v182 = 0;
        if ( v38 >= 1 )
          goto LABEL_183;
        goto LABEL_177;
      }
      v42 = v19;
    }
    v209 = a4;
    v210 = result;
    if ( v37 > v42 )
    {
      v211 = v15;
      v212 = v14;
      v213 = a2;
      LODWORD(v16) = 0;
      do
      {
        HIDWORD(v44) = v35;
        LODWORD(v44) = v34 << 16;
        v43 = v44 >> 17;
        HIDWORD(v44) = v34;
        LODWORD(v44) = v33 << 16;
        v45 = v44 >> 17;
        HIDWORD(v44) = v33;
        LODWORD(v44) = v32 << 16;
        v46 = v44 >> 17;
        HIDWORD(v44) = v32;
        LODWORD(v44) = v31 << 16;
        v47 = v44 >> 17;
        HIDWORD(v44) = v31;
        LODWORD(v44) = v30 << 16;
        v48 = v44 >> 17;
        HIDWORD(v44) = v30;
        LODWORD(v44) = v29 << 16;
        v49 = v44 >> 17;
        HIDWORD(v44) = v35 >> 1;
        LODWORD(v44) = v43 << 16;
        v50 = v44 >> 17;
        HIDWORD(v44) = v43;
        LODWORD(v44) = v45 << 16;
        v51 = v44 >> 17;
        HIDWORD(v44) = v45;
        LODWORD(v44) = v46 << 16;
        v52 = v44 >> 17;
        HIDWORD(v44) = v46;
        LODWORD(v44) = v47 << 16;
        v53 = v44 >> 17;
        HIDWORD(v44) = v47;
        LODWORD(v44) = v48 << 16;
        v54 = v44 >> 17;
        HIDWORD(v44) = v48;
        LODWORD(v44) = v49 << 16;
        v55 = (unsigned __int16)(v44 >> 17);
        HIDWORD(v44) = v49;
        LODWORD(v44) = v29 << 31;
        v56 = v44 >> 17;
        v57 = v55 + (unsigned __int16)v29;
        v12 = v54 + (unsigned __int16)v30 + HIWORD(v57);
        LODWORD(v14) = v53 + (unsigned __int16)v31 + HIWORD(v12);
        v15 = v52 + (unsigned __int16)v32 + ((unsigned int)v14 >> 16);
        v9 = v51 + (unsigned __int16)v33 + HIWORD(v15);
        v13 = v50 + (unsigned __int16)v34 + HIWORD(v9);
        v10 = (unsigned __int16)v35 + ((unsigned __int16)v35 >> 2) + HIWORD(v13);
        if ( v10 >= 0x10000 )
        {
          HIDWORD(v59) = v57;
          LODWORD(v59) = v56 << 16;
          LOWORD(v56) = v59 >> 17;
          HIDWORD(v59) = v54 + (unsigned __int16)v30 + HIWORD(v57);
          LODWORD(v59) = v57 << 16;
          v57 = v59 >> 17;
          HIDWORD(v59) = v53 + (unsigned __int16)v31 + HIWORD(v12);
          LODWORD(v59) = v12 << 16;
          v12 = v59 >> 17;
          HIDWORD(v59) = v52 + (unsigned __int16)v32 + ((unsigned int)v14 >> 16);
          LODWORD(v59) = (_DWORD)v14 << 16;
          LODWORD(v14) = v59 >> 17;
          HIDWORD(v59) = v51 + (unsigned __int16)v33 + HIWORD(v15);
          LODWORD(v59) = v15 << 16;
          v15 = v59 >> 17;
          v58 = v19 + 4;
          HIDWORD(v59) = v50 + (unsigned __int16)v34 + HIWORD(v9);
          LODWORD(v59) = v9 << 16;
          v9 = v59 >> 17;
          HIDWORD(v59) = (unsigned __int16)v35 + ((unsigned __int16)v35 >> 2) + HIWORD(v13);
          LODWORD(v59) = v13 << 16;
          v13 = v59 >> 17;
          HIDWORD(v59) = HIWORD(v10);
          LODWORD(v59) = v10 << 16;
          v10 = v59 >> 17;
        }
        else
        {
          v58 = v19 + 3;
        }
        if ( (_WORD)v56 || (unsigned __int16)v58 > 0x3FFEu )
        {
          LOWORD(v57) = v29;
          LOWORD(v12) = v30;
          LOWORD(v14) = v31;
          LOWORD(v15) = v32;
          LOWORD(v9) = v33;
          LOWORD(v13) = v34;
          LOWORD(v10) = v35;
          v60 = v19;
          goto LABEL_106;
        }
        LODWORD(v16) = v16 - 1;
        LODWORD(v19) = v58;
        v35 = v10;
        v34 = v13;
        v33 = v9;
        v32 = v15;
        v31 = (int)v14;
        v30 = v12;
        v29 = v57;
      }
      while ( (_DWORD)v16 != -34 );
      v60 = v58;
LABEL_106:
      LOWORD(v219) = v57;
      WORD1(v219) = v12;
      v92 = qword_10008C260;
      WORD2(v219) = (_WORD)v14;
      v93 = -4096;
      WORD3(v219) = v15;
      WORD4(v219) = v9;
      v94 = v57;
      v95 = qword_10008C338;
      v96 = v60;
      WORD5(v219) = v13;
      v97 = v10;
      v98 = v13;
      WORD6(v219) = v10;
      v99 = v9;
      v100 = v15;
      HIWORD(v219) = v60;
      v101 = (unsigned __int16)v14;
      v102 = v12;
      v208 = v57;
      v217 = xmmword_10008C250;
      v216 = v60;
      if ( (v60 & 0x8000) == 0 )
        goto LABEL_226;
      while ( 1 )
      {
        v203 = *((__int16 *)v95 + 3);
        v204 = (v203 >> 31) | 1;
        if ( ((v203 ^ v96) & 0x8000) == 0 )
        {
          v205 = v96 & 0x7FFF;
          v206 = v203 & 0x7FFF;
          if ( v206 == v205 )
          {
            v206 = *((unsigned __int16 *)v95 + 2);
            LOWORD(v205) = v97;
            if ( v206 == v97 )
            {
              v206 = *((unsigned __int16 *)v95 + 1);
              LOWORD(v205) = v98;
              if ( v206 == v98 )
              {
                v206 = *(unsigned __int16 *)v95;
                LOWORD(v205) = v99;
                if ( v206 == v99 )
                {
                  v206 = *((unsigned __int16 *)v95 - 1);
                  LOWORD(v205) = v100;
                  if ( v206 == v100 )
                  {
                    v206 = *((unsigned __int16 *)v95 - 2);
                    LOWORD(v205) = v101;
                    if ( v206 == v101 )
                    {
                      v206 = *((unsigned __int16 *)v95 - 3);
                      LOWORD(v205) = v102;
                      if ( v206 == v102 )
                      {
                        v206 = *((unsigned __int16 *)v95 - 4);
                        LOWORD(v205) = v94;
                        if ( v206 == v94 )
                        {
LABEL_241:
                          emul((__int64)&v219, (__int64)v92, (__int64)&v219);
                          emul((__int64)&v217, (__int64)v92, (__int64)&v217);
                          LODWORD(v16) = v93 + v16;
                          goto LABEL_242;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if ( v206 <= (unsigned __int16)v205 )
            v204 = -v204;
        }
        if ( (v204 & 0x80000000) == 0 )
          goto LABEL_241;
LABEL_242:
        if ( (unsigned int)(v93 + 1) < 3 )
          goto LABEL_245;
        v93 /= 2;
        v92 += 2;
        v96 = HIWORD(v219);
        v97 = WORD6(v219);
        v98 = WORD5(v219);
        v99 = WORD4(v219);
        v100 = WORD3(v219);
        v101 = WORD2(v219);
        v102 = WORD1(v219);
        v95 += 2;
        v94 = v219;
        if ( (HIWORD(v219) & 0x8000) == 0 )
        {
LABEL_226:
          v201 = 0x3FFF;
          v202 = v96;
          if ( (unsigned __int16)v96 == 0x3FFF && (v201 = 0x8000, v202 = v97, v97 == 0x8000) || v201 <= v202 )
          {
LABEL_245:
            ediv((__int64)&xmmword_10008C250, (__int16 *)&v217, (__int64)&v217);
            v11 = v208;
            goto LABEL_246;
          }
        }
      }
    }
    goto LABEL_56;
  }
  if ( under_debugger == 1 )
    __break(1u);
  interr(1225);
LABEL_112:
  v224[0] = (unsigned int)SHIWORD(v217) >> 15;
  v224[1] = HIWORD(v217) & 0x7FFF;
  v224[2] = 0;
  *(int16x4_t *)a7.val[0].i8 = vrev64_s16(*(int16x4_t *)((char *)&v217 + 6));
  v225 = a7.val[0].i64[0];
  v226 = WORD2(v217);
  v227 = WORD1(v217);
  v228 = (unsigned __int16)v217;
  v221[0] = (unsigned int)v41 >> 15;
  v221[1] = v41 & 0x7FFF;
  v222.i16[0] = 0;
  v222.i16[1] = v10;
  v222.i16[2] = v13;
  v222.i16[3] = v9;
  v222.i16[4] = v15;
  v222.i16[5] = (__int16)v14;
  v222.i16[6] = v12;
  v222.i16[7] = v11;
  v223 = 0;
  v103 = sub_100070044(v224, (__int64)v221, a7);
  if ( v103 == 10 )
  {
    v103 = 1;
    v38 = v16 + 1;
  }
  else
  {
    v38 = v16;
  }
  if ( v103 )
  {
    v15 = v211;
    v14 = v212;
    v104 = v209;
  }
  else
  {
    v15 = v211;
    v14 = v212;
    v104 = v209;
    while ( v222.i16[0]
         || __PAIR32__(v222.u16[1], 0) != v222.u16[2]
         || __PAIR32__(v222.u16[3], 0) != v222.u16[4]
         || __PAIR32__(v222.u16[5], 0) != v222.u16[6]
         || __PAIR32__(v222.u16[7], 0) != v223 )
    {
      HIDWORD(v106) = v222.u16[7];
      LODWORD(v106) = v223 << 16;
      v105 = v106 >> 31;
      HIDWORD(v106) = v222.u16[6];
      LODWORD(v106) = v222.u16[7] << 16;
      v127 = v106 >> 31;
      HIDWORD(v106) = v222.u16[5];
      LODWORD(v106) = v222.u16[6] << 16;
      v107 = v106 >> 31;
      HIDWORD(v106) = v222.u16[4];
      LODWORD(v106) = v222.u16[5] << 16;
      v108 = v106 >> 31;
      HIDWORD(v106) = v222.u16[3];
      LODWORD(v106) = v222.u16[4] << 16;
      v109 = v106 >> 31;
      HIDWORD(v106) = v222.u16[2];
      LODWORD(v106) = v222.u16[3] << 16;
      v110 = v106 >> 31;
      HIDWORD(v106) = v222.u16[1];
      LODWORD(v106) = v222.u16[2] << 16;
      v111 = v106 >> 31;
      HIDWORD(v106) = v222.u16[0];
      LODWORD(v106) = v222.u16[1] << 16;
      v112 = v106 >> 31;
      HIDWORD(v106) = v127;
      LODWORD(v106) = v105 << 16;
      v113 = v106 >> 31;
      HIDWORD(v106) = v107;
      LODWORD(v106) = v127 << 16;
      v114 = v106 >> 31;
      HIDWORD(v106) = v108;
      LODWORD(v106) = v107 << 16;
      v115 = v106 >> 31;
      HIDWORD(v106) = v109;
      LODWORD(v106) = v108 << 16;
      v116 = v106 >> 31;
      HIDWORD(v106) = v110;
      LODWORD(v106) = v109 << 16;
      v117 = v106 >> 31;
      HIDWORD(v106) = v111;
      LODWORD(v106) = v110 << 16;
      v118 = v106 >> 31;
      HIDWORD(v106) = v112;
      LODWORD(v106) = v111 << 16;
      v119 = v106 >> 31;
      HIDWORD(v106) = v113;
      LODWORD(v106) = v105 << 17;
      v120 = v106 >> 31;
      HIDWORD(v106) = v114;
      LODWORD(v106) = v113 << 16;
      v121 = v106 >> 31;
      HIDWORD(v106) = v115;
      LODWORD(v106) = v114 << 16;
      v122 = v106 >> 31;
      HIDWORD(v106) = v116;
      LODWORD(v106) = v115 << 16;
      v123 = v106 >> 31;
      HIDWORD(v106) = v117;
      LODWORD(v106) = v116 << 16;
      v124 = v106 >> 31;
      HIDWORD(v106) = v118;
      LODWORD(v106) = v117 << 16;
      v125 = v106 >> 31;
      HIDWORD(v106) = v119;
      LODWORD(v106) = v118 << 16;
      v126 = v106 >> 31;
      v223 *= 2;
      v222.i16[7] = 5 * v105;
      v127 = (unsigned __int16)v127;
      if ( ((4 * v105) & 0xFFFCu) > (unsigned __int16)(5 * v105) )
        v127 = (unsigned __int16)v127 + 1;
      v128 = v127 + v120;
      v222.i16[6] = v128;
      v129 = v121 + (unsigned __int16)v107 + HIWORD(v128);
      v222.i16[5] = v129;
      v130 = v122 + (unsigned __int16)v108 + HIWORD(v129);
      v222.i16[4] = v130;
      v131 = v123 + (unsigned __int16)v109 + HIWORD(v130);
      v222.i16[3] = v131;
      v132 = v124 + (unsigned __int16)v110 + HIWORD(v131);
      v222.i16[2] = v132;
      v133 = v125 + (unsigned __int16)v111 + HIWORD(v132);
      v222.i16[1] = v133;
      v222.i16[0] = v126 + v112 + HIWORD(v133);
      v103 = sub_100070044(v224, (__int64)v221, v230);
      --v38;
      if ( v103 )
        goto LABEL_127;
    }
    LOBYTE(v103) = 0;
  }
LABEL_127:
  __s[0] = v103 + 48;
  v134 = &__s[2];
  __s[1] = 46;
  if ( v104 >= 0x21u )
    v135 = 33;
  else
    v135 = v104;
  v136 = &__s[v135];
  v137 = &__s[v135 + 2];
  v138 = v135 + 1;
  do
  {
    HIDWORD(v140) = v222.u16[7];
    LODWORD(v140) = v223 << 16;
    v139 = v140 >> 31;
    HIDWORD(v140) = v222.u16[6];
    LODWORD(v140) = v222.u16[7] << 16;
    v141 = v140 >> 31;
    HIDWORD(v140) = v222.u16[5];
    LODWORD(v140) = v222.u16[6] << 16;
    v142 = v140 >> 31;
    HIDWORD(v140) = v222.u16[4];
    LODWORD(v140) = v222.u16[5] << 16;
    v143 = v140 >> 31;
    HIDWORD(v140) = v222.u16[3];
    LODWORD(v140) = v222.u16[4] << 16;
    v144 = v140 >> 31;
    HIDWORD(v140) = v222.u16[2];
    LODWORD(v140) = v222.u16[3] << 16;
    v145 = v140 >> 31;
    HIDWORD(v140) = v222.u16[1];
    LODWORD(v140) = v222.u16[2] << 16;
    v146 = v140 >> 31;
    HIDWORD(v140) = v222.u16[0];
    LODWORD(v140) = v222.u16[1] << 16;
    v147 = v140 >> 31;
    HIDWORD(v140) = v141;
    LODWORD(v140) = v139 << 16;
    v148 = v140 >> 31;
    HIDWORD(v140) = v142;
    LODWORD(v140) = v141 << 16;
    v149 = v140 >> 31;
    HIDWORD(v140) = v143;
    LODWORD(v140) = v142 << 16;
    v150 = v140 >> 31;
    HIDWORD(v140) = v144;
    LODWORD(v140) = v143 << 16;
    v151 = v140 >> 31;
    HIDWORD(v140) = v145;
    LODWORD(v140) = v144 << 16;
    v152 = v140 >> 31;
    HIDWORD(v140) = v146;
    LODWORD(v140) = v145 << 16;
    v153 = v140 >> 31;
    HIDWORD(v140) = v147;
    LODWORD(v140) = v146 << 16;
    v154 = v140 >> 31;
    v155 = (4 * v139) & 0xFFFC;
    HIDWORD(v140) = v148;
    LODWORD(v140) = v139 << 17;
    v156 = v140 >> 31;
    HIDWORD(v140) = v149;
    LODWORD(v140) = v148 << 16;
    v157 = v140 >> 31;
    HIDWORD(v140) = v150;
    LODWORD(v140) = v149 << 16;
    v158 = v140 >> 31;
    HIDWORD(v140) = v151;
    LODWORD(v140) = v150 << 16;
    v159 = v140 >> 31;
    HIDWORD(v140) = v152;
    LODWORD(v140) = v151 << 16;
    v160 = v140 >> 31;
    HIDWORD(v140) = v153;
    LODWORD(v140) = v152 << 16;
    v161 = v140 >> 31;
    HIDWORD(v140) = v154;
    LODWORD(v140) = v153 << 16;
    v162 = v140 >> 31;
    v223 *= 2;
    LOWORD(v139) = 5 * v139;
    v195 = v155 > (unsigned __int16)v139;
    v222.i16[7] = v139;
    v163 = (unsigned __int16)v141;
    if ( v195 )
      v163 = (unsigned __int16)v141 + 1;
    v164 = v163 + v156;
    v222.i16[6] = v164;
    v165 = v157 + (unsigned __int16)v142 + HIWORD(v164);
    v222.i16[5] = v165;
    v166 = v158 + (unsigned __int16)v143 + HIWORD(v165);
    v222.i16[4] = v166;
    v167 = v159 + (unsigned __int16)v144 + HIWORD(v166);
    v222.i16[3] = v167;
    v168 = v160 + (unsigned __int16)v145 + HIWORD(v167);
    v222.i16[2] = v168;
    v169 = v161 + (unsigned __int16)v146 + HIWORD(v168);
    v222.i16[1] = v169;
    v222.i16[0] = v162 + v147 + HIWORD(v169);
    v170 = sub_100070044(v224, (__int64)v221, v230);
    *v134++ = v170 + 48;
    --v138;
  }
  while ( v138 );
  if ( v170 < 5 )
  {
    v17 = v213;
  }
  else
  {
    v17 = v213;
    if ( v170 != 5 || (vmaxv_u8((uint8x8_t)vmovn_s16(vtstq_s16(v222, v222))) & 1) != 0 || v223 || (v136[1] & 1) != 0 )
    {
      v171 = v136[1] & 0x7F;
      if ( v171 == 46 )
      {
LABEL_142:
        v172 = (*(v137 - 2))++;
        if ( v172 >= 57 )
        {
          ++v38;
          *(v137 - 2) = 49;
        }
      }
      else
      {
        while ( 1 )
        {
          *(v137 - 1) = v171 + 1;
          if ( v171 < 0x39 )
            break;
          *--v137 = 48;
          v171 = *(v137 - 1) & 0x7F;
          if ( v171 == 46 )
            goto LABEL_142;
        }
      }
    }
  }
  v173 = &__s[v135 + 3];
  result = v210;
  do
  {
    v174 = (unsigned __int8)*(v173 - 2);
    --v173;
  }
  while ( v174 == 48 );
  if ( v174 == 46 )
    *v173++ = 48;
  *v173 = 0;
  if ( v210 )
    goto LABEL_150;
LABEL_30:
  v39 = 0;
  v40 = 0;
LABEL_207:
  result = qsnprintf(&v14[v39], v17 - v39, "%s%s", a4, a5, a6, v19, a9, (char)v214);
  v183 = v39 + (int)result;
LABEL_216:
  v15 = v40;
LABEL_217:
  if ( v15 )
  {
    v199 = v17 - v183;
    if ( (_DWORD)v17 != (_DWORD)v183 )
    {
      if ( v15 < v199 )
        v199 = v15;
      v200 = v199;
      result = (unsigned __int64)memset(&v14[v183], 48, v199);
      v183 += v200;
      v14[v183] = 0;
    }
  }
  if ( v38 )
    return qsnprintf(&v14[v183], v17 - v183, "e%d", a4, a5, a6, v19, a9, v38);
  return result;
}
// 10006F388: variable 'a7' is possibly undefined
// 10006F6F8: variable 'v41' is possibly undefined
// 10006F710: variable 'v10' is possibly undefined
// 10006F714: variable 'v13' is possibly undefined
// 10006F718: variable 'v9' is possibly undefined
// 10006F71C: variable 'v15' is possibly undefined
// 10006F720: variable 'v14' is possibly undefined
// 10006F724: variable 'v12' is possibly undefined
// 10006F728: variable 'v11' is possibly undefined
// 10006F744: variable 'v16' is possibly undefined
// 10006F74C: variable 'v211' is possibly undefined
// 10006F74C: variable 'v212' is possibly undefined
// 10006F750: variable 'v209' is possibly undefined
// 10006F8A4: variable 'v230' is possibly undefined
// 10006FAB0: variable 'v213' is possibly undefined
// 10006FB4C: variable 'v210' is possibly undefined
// 10006FC74: variable 'v214' is possibly undefined
// 10006FDB4: variable 'a4' is possibly undefined
// 10006FDB4: variable 'a5' is possibly undefined
// 10006FDB4: variable 'a6' is possibly undefined
// 10006FDB4: variable 'v19' is possibly undefined
// 10006FDB4: variable 'a9' is possibly undefined
// 10006FDE0: variable 'v185' is possibly undefined
// 10006FDE0: variable 'v186' is possibly undefined
// 10006FDE0: variable 'v187' is possibly undefined
// 10006FDE0: variable 'v188' is possibly undefined
// 10006FDE0: variable 'v189' is possibly undefined
// 10008C250: using guessed type __int128 xmmword_10008C250;
// 10008C260: using guessed type __int64 qword_10008C260[2];
// 10008C2E0: using guessed type __int64 qword_10008C2E0;
// 10008C338: using guessed type __int64 qword_10008C338[25];
// 1000931E5: using guessed type char byte_1000931E5;
// 100098986: using guessed type __int16 word_100098986[];
// 1000A590D: using guessed type char under_debugger;
