/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: realtoasc
// Address: 0x00000000000B58EC

//----- (00000000000B58EC) ----------------------------------------------------
pthread_mutex_t *__fastcall realtoasc(pthread_mutex_t *result, unsigned __int64 a2, int8x16_t *a3, int a4)
{
  __int64 v4; // x19
  char *v5; // x1
  __int64 v6; // x10
  unsigned int v7; // w11
  unsigned int v8; // w20
  unsigned int v9; // w29
  const char *v10; // x3
  int v11; // w0
  __int64 v13; // x21
  unsigned int v14; // w8
  int v15; // w26
  unsigned int v16; // w12
  unsigned int v17; // w14
  unsigned int v18; // w15
  unsigned int v19; // w16
  unsigned int v20; // w17
  unsigned int v21; // w18
  unsigned int v22; // w0
  int v23; // w13
  int v24; // w10
  unsigned __int16 v25; // w11
  __int16 v26; // w1
  __int16 v27; // w2
  __int16 v28; // w3
  __int16 v29; // w4
  __int16 v30; // w5
  __int16 v31; // w6
  __int16 v32; // w19
  int v34; // w19
  unsigned __int16 *v35; // x22
  __int16 *v36; // x23
  double v37; // d0
  int8x8_t v38; // d1
  int v39; // w8
  int v40; // w22
  unsigned __int16 *v41; // x23
  unsigned int v42; // w22
  unsigned __int16 v43; // w28
  int v44; // w21
  int v45; // w25
  int v46; // w24
  int v47; // w26
  int v48; // w27
  int v49; // w19
  int v50; // w20
  unsigned int v51; // w8
  int v52; // w9
  unsigned int v53; // w8
  int8x16_t *p_s; // x8
  unsigned __int16 v55; // w10
  unsigned __int16 *v56; // x22
  unsigned int v57; // w19
  double v58; // d0
  int8x8_t v59; // d1
  int8x16_t v60; // q0
  unsigned int v61; // w11
  __int16 v62; // w0
  unsigned int v63; // w9
  unsigned int v64; // w10
  unsigned int v65; // w11
  unsigned int v66; // w12
  unsigned int v67; // w13
  unsigned int v68; // w14
  unsigned int v69; // w16
  unsigned int v70; // w15
  unsigned int v71; // w10
  int16x4_t v72; // d0
  unsigned int v73; // w8
  int v74; // w16
  unsigned int v75; // w8
  int v76; // w17
  unsigned int v77; // w8
  int16x4_t v78; // d0
  unsigned int v79; // w8
  unsigned int v80; // w8
  unsigned int v81; // w8
  int v82; // w8
  __int64 v83; // x21
  char *v84; // x23
  unsigned int v85; // w24
  unsigned int v86; // w8
  unsigned int v87; // w9
  unsigned int v88; // w8
  unsigned int v89; // w9
  unsigned int v90; // w8
  unsigned int v91; // w9
  unsigned int v92; // w8
  unsigned int v93; // w9
  unsigned int v94; // w8
  int v95; // w16
  unsigned int v96; // w8
  unsigned __int16 v97; // w10
  unsigned int v98; // w8
  unsigned __int16 v99; // w11
  unsigned int v100; // w8
  int v101; // w12
  unsigned int v102; // w8
  int v103; // w13
  unsigned int v104; // w8
  int v105; // w10
  int v106; // w8
  int v107; // w11
  char *v108; // x8
  char *v109; // x9
  int v110; // w10
  unsigned int v111; // w10
  _BYTE *v112; // x8
  int v113; // w9
  unsigned int v114; // w21
  unsigned int v115; // w20
  __int64 v116; // x0
  int v117; // w8
  unsigned int v118; // w8
  __int64 v119; // x23
  pthread_mutex_t *v120; // x20
  unsigned int v121; // w9
  size_t v122; // x23
  unsigned int v123; // w21
  __int64 v124; // x0
  __int64 v125; // x8
  int v126; // w8
  bool v127; // zf
  size_t v128; // x23
  unsigned int v129; // w21
  unsigned int v130; // w0
  unsigned int v131; // w22
  unsigned int v132; // w8
  unsigned int v133; // w24
  int v134; // w26
  __int64 v135; // x25
  signed int v136; // w19
  unsigned int v137; // w0
  __int64 v138; // x19
  size_t v139; // x21
  signed int v140; // w8
  __int64 v141; // x21
  __int16 v142; // [xsp+14h] [xbp-1ACh]
  __int64 v143; // [xsp+18h] [xbp-1A8h]
  unsigned int v144; // [xsp+24h] [xbp-19Ch]
  unsigned int v145; // [xsp+28h] [xbp-198h]
  char v146; // [xsp+2Ch] [xbp-194h]
  const char *v147; // [xsp+30h] [xbp-190h]
  __int64 v148; // [xsp+38h] [xbp-188h]
  pthread_mutex_t *v149; // [xsp+40h] [xbp-180h]
  int v150; // [xsp+4Ch] [xbp-174h]
  int8x16_t s1; // [xsp+60h] [xbp-160h] BYREF
  int8x16_t v152; // [xsp+70h] [xbp-150h] BYREF
  int8x16_t s; // [xsp+80h] [xbp-140h] BYREF
  int8x16_t v154; // [xsp+90h] [xbp-130h] BYREF
  char v155[48]; // [xsp+A0h] [xbp-120h] BYREF
  int8x16_t v156; // [xsp+D0h] [xbp-F0h] BYREF
  unsigned int v157; // [xsp+E0h] [xbp-E0h]
  unsigned __int16 v158; // [xsp+E4h] [xbp-DCh]
  int8x16_t v159; // [xsp+F0h] [xbp-D0h]
  unsigned int v160; // [xsp+100h] [xbp-C0h]
  __int16 v161; // [xsp+104h] [xbp-BCh]
  int8x16_t v162; // [xsp+110h] [xbp-B0h]
  unsigned int v163; // [xsp+120h] [xbp-A0h]
  __int16 v164; // [xsp+124h] [xbp-9Ch]
  int8x16_t v165; // [xsp+130h] [xbp-90h] BYREF
  unsigned int v166; // [xsp+140h] [xbp-80h]
  __int16 v167; // [xsp+144h] [xbp-7Ch]
  int8x16x2_t v168; // 0:q0.32
  int8x16x2_t v169; // 0:q0.32
  int8x16x2_t v170; // 0:q0.32
  int8x16x2_t v171; // 0:q0.32
  int8x16x2_t v172; // 0:q0.32

  _ReadStatusReg(TPIDR_EL0);
  if ( (a2 & 0x8000000000000000LL) != 0 )
  {
    if ( !under_debugger )
      interr(1225);
    __break(1u);
    return (pthread_mutex_t *)get_fpvalue_kind(result);
  }
  else
  {
    v4 = a2;
    if ( (~a3->n128_u16[7] & 0x7FFF) == 0 )
    {
      if ( (a3->n128_u16[6] & 0x7FFF) != 0
        || a3->n128_u16[5]
        || a3->n128_u16[4]
        || a3->n128_u16[3]
        || a3->n128_u16[2]
        || a3->n128_u16[1]
        || a3->n128_u16[0] )
      {
        v5 = byte_11BAF0;
      }
      else if ( (a3->n128_u16[7] & 0x8000) != 0 )
      {
        v5 = "-Inf";
      }
      else
      {
        v5 = "+Inf";
      }
      return qstrncpy(result, v5, v4);
    }
    v6 = BYTE2(a4);
    v7 = BYTE1(a4);
    if ( BYTE2(a4) && (BYTE1(a4) < (unsigned int)BYTE2(a4) + 3 || (unsigned int)BYTE1(a4) + 3 >= a2) )
    {
      v7 = 0;
      v6 = 0;
    }
    v154 = *a3;
    v8 = v154.n128_i16[7];
    if ( (unsigned __int8)a4 >= 0x21u )
      v9 = 33;
    else
      v9 = (unsigned __int8)a4;
    s1 = (int8x16_t)xmmword_11BA10;
    if ( v154.n128_i16[7] < 0 )
    {
      v8 = v154.n128_i16[7] & 0x7FFF;
      v10 = &byte_121EC0;
      v154.n128_u16[7] &= ~0x8000u;
      v148 = v6;
      v149 = result;
      if ( v8 )
        goto LABEL_21;
    }
    else
    {
      v10 = "";
      v148 = v6;
      v149 = result;
      if ( v154.n128_u16[7] )
      {
LABEL_21:
        v144 = v7;
        v147 = v10;
        v11 = ecmp((unsigned __int16 *)&xmmword_11BA10, (unsigned __int16 *)&v154);
        if ( !v11 )
        {
          v15 = 0;
          goto LABEL_74;
        }
        if ( (v11 & 0x80000000) == 0 )
        {
          v159.n128_u16[0] = (v8 >> 15) & 1;
          v159.n128_u16[5] = v154.n128_u16[4];
          *(unsigned __int32 *)((char *)v159.n128_u32 + 2) = v8 & 0x7FFF;
          v159.n128_u16[3] = v154.n128_u16[6];
          v159.n128_u16[4] = v154.n128_u16[5];
          v13 = v4;
          v14 = 0;
          v15 = 0;
          HIWORD(v160) = v154.n128_u16[0];
          v159.n128_u16[6] = v154.n128_u16[3];
          v159.n128_u16[7] = v154.n128_u16[2];
          LOWORD(v160) = v154.n128_u16[1];
          v161 = 0;
          do
          {
            v16 = HIWORD(v160)
                + (unsigned __int16)(((unsigned __int16)v160 >> 1 << 15)
                                   | ((unsigned __int16)((HIWORD(v160) >> 1) | ((_WORD)v160 << 15)) >> 1));
            v17 = (unsigned __int16)v160
                + (unsigned __int16)((v159.n128_u16[7] >> 1 << 15)
                                   | ((unsigned __int16)(((unsigned __int16)v160 >> 1) | (v159.n128_u16[7] << 15)) >> 1))
                + HIWORD(v16);
            v18 = v159.n128_u16[7]
                + (unsigned __int16)((v159.n128_u16[6] >> 1 << 15)
                                   | ((unsigned __int16)((v159.n128_u16[7] >> 1) | (v159.n128_u16[6] << 15)) >> 1))
                + (HIWORD(v17) & 1);
            v19 = v159.n128_u16[6]
                + (unsigned __int16)((v159.n128_u16[5] >> 1 << 15)
                                   | ((unsigned __int16)((v159.n128_u16[6] >> 1) | (v159.n128_u16[5] << 15)) >> 1))
                + (HIWORD(v18) & 1);
            v20 = v159.n128_u16[5]
                + (unsigned __int16)((v159.n128_u16[4] >> 1 << 15)
                                   | ((unsigned __int16)((v159.n128_u16[5] >> 1) | (v159.n128_u16[4] << 15)) >> 1))
                + (HIWORD(v19) & 1);
            v21 = v159.n128_u16[4]
                + (unsigned __int16)((v159.n128_u16[3] >> 1 << 15)
                                   | ((unsigned __int16)((v159.n128_u16[4] >> 1) | (v159.n128_u16[3] << 15)) >> 1))
                + (HIWORD(v20) & 1);
            v22 = v159.n128_u16[3]
                + ((v159.n128_u16[2] << 14) & 0x8000
                 | ((unsigned __int16)((v159.n128_u16[3] >> 1) | (v159.n128_u16[2] << 15)) >> 1))
                + (HIWORD(v21) & 1);
            v23 = v159.n128_u16[2] + (v159.n128_u16[2] >> 2) + (HIWORD(v22) & 1);
            v24 = (HIWORD(v160) >> 1 << 15) | ((BYTE2(v160) & 1) << 14);
            v25 = v159.n128_u16[1] + 3;
            HIWORD(v163) = HIWORD(v160)
                         + (((unsigned __int16)v160 >> 1 << 15)
                          | ((unsigned __int16)((HIWORD(v160) >> 1) | ((_WORD)v160 << 15)) >> 1));
            LOWORD(v163) = v160
                         + ((v159.n128_u16[7] >> 1 << 15)
                          | ((unsigned __int16)(((unsigned __int16)v160 >> 1) | (v159.n128_u16[7] << 15)) >> 1))
                         + HIWORD(v16);
            v162.n128_u16[7] = v159.n128_u16[7]
                             + ((v159.n128_u16[6] >> 1 << 15)
                              | ((unsigned __int16)((v159.n128_u16[7] >> 1) | (v159.n128_u16[6] << 15)) >> 1))
                             + (BYTE2(v17) & 1);
            v162.n128_u16[6] = v159.n128_u16[6]
                             + ((v159.n128_u16[5] >> 1 << 15)
                              | ((unsigned __int16)((v159.n128_u16[6] >> 1) | (v159.n128_u16[5] << 15)) >> 1))
                             + (BYTE2(v18) & 1);
            v162.n128_u16[5] = v159.n128_u16[5]
                             + ((v159.n128_u16[4] >> 1 << 15)
                              | ((unsigned __int16)((v159.n128_u16[5] >> 1) | (v159.n128_u16[4] << 15)) >> 1))
                             + (BYTE2(v19) & 1);
            v162.n128_u16[4] = v159.n128_u16[4]
                             + ((v159.n128_u16[3] >> 1 << 15)
                              | ((unsigned __int16)((v159.n128_u16[4] >> 1) | (v159.n128_u16[3] << 15)) >> 1))
                             + (BYTE2(v20) & 1);
            v162.n128_u16[3] = v159.n128_u16[3]
                             + ((v159.n128_u16[2] << 14) & 0x8000
                              | ((unsigned __int16)((v159.n128_u16[3] >> 1) | (v159.n128_u16[2] << 15)) >> 1))
                             + (BYTE2(v21) & 1);
            v162.n128_u16[2] = v159.n128_u16[2] + (v159.n128_u16[2] >> 2) + (BYTE2(v22) & 1);
            v162.n128_u32[0] = v159.n128_u32[0] + 196608;
            if ( v162.n128_u16[2] )
            {
              do
              {
                v26 = v22;
                v27 = v21;
                v28 = v20;
                v29 = v19;
                v30 = v18;
                v31 = v17;
                v32 = ((_WORD)v16 << 15) | ((unsigned __int16)v24 >> 1);
                LOWORD(v22) = ((_WORD)v23 << 15) | ((unsigned __int16)v22 >> 1);
                LOWORD(v21) = (v26 << 15) | ((unsigned __int16)v21 >> 1);
                LOWORD(v20) = (v27 << 15) | ((unsigned __int16)v20 >> 1);
                LOWORD(v19) = (v28 << 15) | ((unsigned __int16)v19 >> 1);
                LOWORD(v18) = (v29 << 15) | ((unsigned __int16)v18 >> 1);
                LOWORD(v17) = (v30 << 15) | ((unsigned __int16)v17 >> 1);
                LOWORD(v16) = (v31 << 15) | ((unsigned __int16)v16 >> 1);
                LOWORD(v24) = v32;
                ++v25;
                LOWORD(v23) = (unsigned __int16)v23 >> 1;
              }
              while ( (_WORD)v23 );
              v162.n128_u16[3] = v22;
              v162.n128_u16[4] = v21;
              v162.n128_u16[5] = v20;
              v162.n128_u16[6] = v19;
              v162.n128_u16[7] = v18;
              LOWORD(v163) = v17;
              HIWORD(v163) = v16;
              *(unsigned __int32 *)((char *)v162.n128_u32 + 2) = v25;
            }
            if ( v25 > 0x3FFEu )
              break;
            if ( (_WORD)v24 )
              break;
            ++v14;
            --v15;
            v160 = v163;
            v159 = v162;
            v161 = 0;
          }
          while ( v14 < 0x22 );
          if ( v159.n128_u16[0] )
            LOWORD(v8) = v159.n128_u16[1] | 0x8000;
          else
            LOWORD(v8) = v159.n128_u16[1];
          v154.n128_u16[5] = v159.n128_u16[4];
          v154.n128_u16[6] = v159.n128_u16[3];
          v154.n128_u16[7] = v8;
          v154.n128_u16[4] = v159.n128_u16[5];
          v154.n128_u16[2] = v159.n128_u16[7];
          v154.n128_u16[3] = v159.n128_u16[6];
          v154.n128_u16[0] = HIWORD(v160);
          v154.n128_u16[1] = v160;
          s = v154;
          v164 = v24;
          s1 = (int8x16_t)xmmword_11BA10;
          if ( (int)ecmp((unsigned __int16 *)&xmmword_11BA10, (unsigned __int16 *)&s) >= 1 )
          {
            v34 = -4096;
            v35 = (unsigned __int16 *)&dword_11BB14;
            v36 = (__int16 *)qword_11BA20;
            do
            {
              if ( (ecmp(v35, (unsigned __int16 *)&s) & 0x80000000) == 0 )
              {
                emul((__int16 *)&s, v36, (__int64)&s, v169.val[0].n128_f64[0], (int8x8_t)v169.val[1].n128_u64[0]);
                emul((__int16 *)&s1, v36, (__int64)&s1, v37, v38);
                v15 += v34;
              }
              if ( (unsigned int)(v34 + 1) < 3 )
                break;
              v39 = v34 >= 0 ? v34 : v34 + 1;
              v35 += 8;
              v34 = v39 >> 1;
              v36 += 8;
            }
            while ( (int)ecmp((unsigned __int16 *)&xmmword_11BA10, (unsigned __int16 *)&s) > 0 );
          }
          ediv((__int16 *)&xmmword_11BA10, (unsigned __int16 *)&s1, (__int64)&s1, v169);
          v4 = v13;
          goto LABEL_74;
        }
        v41 = (unsigned __int16 *)&qword_11BAA0;
        v42 = 16;
        v142 = v8;
        v143 = v4;
        v150 = 0;
        *(unsigned __int64 *)((char *)v152.n128_u64 + 6) = *(unsigned __int64 *)((char *)v154.n128_u64 + 6);
        v152.n128_u64[0] = v154.n128_u64[0];
        v152.n128_u16[7] = 16494;
        while ( 1 )
        {
          ediv((__int16 *)&v152, v41, (__int64)&s1, v168);
          v43 = s1.n128_u16[7];
          v44 = s1.n128_u16[0];
          v45 = s1.n128_u16[1];
          v46 = s1.n128_u16[2];
          v47 = s1.n128_u16[3];
          v48 = s1.n128_u16[4];
          v49 = s1.n128_u16[5];
          v50 = s1.n128_u16[6];
          v51 = s1.n128_u16[7] & 0x7FFF;
          if ( v51 > 0x3FFE )
          {
            v52 = 16494 - v51;
            s = s1;
            if ( (int)(16494 - v51) >= 1 )
            {
              if ( v52 < 16 )
              {
                p_s = &s;
                v55 = s1.n128_u16[0];
              }
              else
              {
                v146 = 94 - s1.n128_u8[14];
                v53 = (16478 - v51) >> 4;
                v145 = v53 + 1;
                memset(&s, 0, 2 * v53 + 2);
                p_s = (int8x16_t *)((char *)&s + 2 * v145);
                v55 = p_s->n128_u16[0];
                v52 = v146 & 0xF;
              }
              p_s->n128_u16[0] = v55 & *((_WORD *)&dword_11BBF4 + v52);
              if ( (v43 & 0x8000) != 0 )
              {
LABEL_57:
                if ( v44 != s.n128_u16[0]
                  || v45 != s.n128_u16[1]
                  || v46 != s.n128_u16[2]
                  || v47 != s.n128_u16[3]
                  || v48 != s.n128_u16[4]
                  || v49 != s.n128_u16[5]
                  || v50 != s.n128_u16[6] )
                {
                  eadd((__int16 *)&s, (__int16 *)&xmmword_11BA10, (__int64)&s, 1, v170);
                }
              }
            }
          }
          else
          {
            s = 0u;
            if ( (s1.n128_u16[7] & 0x8000) != 0 )
              goto LABEL_57;
          }
          if ( !memcmp(&s1, &s, 0xEu) )
          {
            v168.val[0] = s1;
            v152 = s1;
            v150 += v42;
          }
          v42 >>= 1;
          v41 += 8;
          if ( !v42 )
          {
            v15 = v150;
            v152.n128_u16[7] = v142 + v152.n128_u16[7] - 16494;
            v56 = (unsigned __int16 *)qword_11BA20;
            v57 = 4096;
            s1 = (int8x16_t)xmmword_11BA10;
            v154 = v152;
            do
            {
              if ( (int)ecmp((unsigned __int16 *)&qword_11BAE0, (unsigned __int16 *)&v152) > 0 )
                break;
              if ( (int)ecmp(v56, (unsigned __int16 *)&v152) <= 0 )
              {
                ediv((__int16 *)&v152, v56, (__int64)&v152, v168);
                emul((__int16 *)&s1, (__int16 *)v56, (__int64)&s1, v58, v59);
                v15 += v57;
              }
              v57 >>= 1;
              v56 += 8;
            }
            while ( v57 );
            LOWORD(v8) = v154.n128_u16[7];
            v4 = v143;
LABEL_74:
            *(unsigned __int32 *)((char *)v159.n128_u32 + 2) = s1.n128_u16[7] & 0x7FFF;
            v159.n128_u16[0] = (unsigned int)s1.n128_i16[7] >> 15;
            v159.n128_u16[3] = s1.n128_u16[6];
            v159.n128_u16[4] = s1.n128_u16[5];
            v159.n128_u16[5] = s1.n128_u16[4];
            v159.n128_u16[6] = s1.n128_u16[3];
            v159.n128_u16[7] = s1.n128_u16[2];
            LOWORD(v160) = s1.n128_u16[1];
            v60 = v159;
            v159.n128_u16[0] = (unsigned int)(__int16)v8 >> 15;
            *(unsigned __int32 *)((char *)v159.n128_u32 + 2) = v8 & 0x7FFF;
            v159.n128_u16[3] = v154.n128_u16[6];
            v159.n128_u16[4] = v154.n128_u16[5];
            v159.n128_u16[5] = v154.n128_u16[4];
            HIWORD(v160) = s1.n128_u16[0];
            v61 = v160;
            v159.n128_u16[6] = v154.n128_u16[3];
            v159.n128_u16[7] = v154.n128_u16[2];
            LOWORD(v160) = v154.n128_u16[1];
            HIWORD(v160) = v154.n128_u16[0];
            v165 = v60;
            v168.val[0] = v159;
            v161 = 0;
            v166 = v61;
            v167 = 0;
            v157 = v160;
            v156 = v159;
            v158 = 0;
            v62 = sub_B6B6C((unsigned __int16 *)&v165, (__int64)&v156, v168);
            if ( v62 == 10 )
            {
              v62 = 1;
              v40 = v15 + 1;
            }
            else
            {
              v40 = v15;
            }
            for ( ; !v62; --v40 )
            {
              v63 = v156.n128_u16[3];
              v64 = v156.n128_u16[4];
              v65 = v156.n128_u16[5];
              v66 = v156.n128_u16[6];
              v67 = v156.n128_u16[7];
              v68 = (unsigned __int16)v157;
              if ( (unsigned __int16)(v156.n128_u16[2]
                                    | v156.n128_u16[3]
                                    | v156.n128_u16[4]
                                    | v156.n128_u16[5]
                                    | v156.n128_u16[6]
                                    | v156.n128_u16[7])
                 | (unsigned __int16)v157 )
              {
                v69 = v158;
                v70 = HIWORD(v157);
              }
              else
              {
                v70 = HIWORD(v157);
                v69 = v158;
                if ( !(HIWORD(v157) | v158) )
                {
                  LOBYTE(v62) = 0;
                  break;
                }
              }
              v158 = 2 * v69;
              HIWORD(v157) = (v69 >> 15) & 1 | (2 * v70);
              LOWORD(v157) = (v70 >> 15) & 1 | (2 * v157);
              v156.n128_u16[7] = (v68 >> 15) & 1 | (2 * v156.n128_u16[7]);
              v156.n128_u16[6] = (v67 >> 15) & 1 | (2 * v156.n128_u16[6]);
              v156.n128_u16[5] = (v66 >> 15) & 1 | (2 * v156.n128_u16[5]);
              v156.n128_u16[4] = (v65 >> 15) & 1 | (2 * v156.n128_u16[4]);
              v156.n128_u16[3] = (v64 >> 15) & 1 | (2 * v156.n128_u16[3]);
              v156.n128_u16[2] = (v63 >> 15) & 1 | (2 * v156.n128_u16[2]);
              v172.val[0].n128_u64[1] = v156.n128_u64[1];
              v71 = (unsigned __int16)v157;
              v162.n128_u32[0] = v156.n128_u32[0];
              v72.n64_u64[0] = *(unsigned __int128 *)&v156 >> 32;
              HIWORD(v163) = 4 * HIWORD(v157);
              v73 = HIWORD(v157) + ((4 * HIWORD(v157)) & 0xFFFC);
              v74 = (v157 >> 30) & 1 | (2 * ((v157 >> 31) | (2 * (unsigned __int16)v157) & 0x1FFFF));
              HIWORD(v157) *= 5;
              v75 = HIWORD(v73) + (unsigned __int16)v74 + (unsigned __int16)v157;
              v76 = (v71 >> 14) & 1 | (2 * ((v71 >> 15) & 1 | (2 * v156.n128_u16[7]) & 0x1FFFF));
              LOWORD(v157) = v75;
              v172.val[1] = vdupq_lane_s16(v72, 1);
              v77 = v156.n128_u16[7]
                  + ((v71 >> 14) & 1 | (unsigned __int16)(2 * ((v71 >> 15) & 1 | (2 * v156.n128_u16[7]))))
                  + (HIWORD(v75) & 1);
              *(unsigned __int32 *)((char *)v172.val[1].n128_u32 + 2) = v72.n64_u32[1];
              v172.val[1].n128_u16[3] = (v67 >> 15) & 1 | (2 * v66);
              LOWORD(v71) = (v156.n128_u16[7] >> 14) & 1 | (2 * ((v156.n128_u16[7] >> 15) | (2 * v156.n128_u16[6])));
              v156.n128_u16[7] = v77;
              v78.n64_u64[0] = vorr_s8(vshl_n_s16(v72, 1u), vshr_n_u16((uint16x4_t)v172.val[1].n128_u64[0], 0xFu)).n64_u64[0];
              v79 = v156.n128_u16[6] + (unsigned __int16)v71 + (HIWORD(v77) & 1);
              v172.val[1].n128_u64[0] = vand_s8(
                                          vshr_n_u16((uint16x4_t)v172.val[1].n128_u64[0], 0xEu),
                                          (int8x8_t)0x1000100010001LL).n64_u64[0];
              v172.val[0].n128_u64[0] = vorr_s8(vshl_n_s16(v78, 1u), (int8x8_t)v172.val[1].n128_u64[0]).n64_u64[0];
              v156.n128_u16[6] = v79;
              v80 = v156.n128_u16[5] + v172.val[0].n128_u16[3] + (HIWORD(v79) & 1);
              v156.n128_u16[5] = v80;
              v81 = v156.n128_u16[4] + v172.val[0].n128_u16[2] + (HIWORD(v80) & 1);
              v162.n128_u16[6] = v71;
              v156.n128_u16[4] = v81;
              v82 = v156.n128_u16[3] + v172.val[0].n128_u16[1] + (HIWORD(v81) & 1);
              v156.n128_u16[3] = v82;
              v164 = 0;
              LOWORD(v163) = v74;
              v162.n128_u16[7] = v76;
              *(unsigned __int64 *)((char *)v162.n128_u64 + 4) = v172.val[0].n128_u64[0];
              v156.n128_u16[2] += v172.val[0].n128_u16[0] + (BYTE2(v82) & 1);
              v62 = sub_B6B6C((unsigned __int16 *)&v165, (__int64)&v156, v172);
            }
            v83 = v9 + 2;
            v84 = &v155[2];
            v85 = -1;
            v155[0] = v62 + 48;
            v155[1] = 46;
            do
            {
              v86 = v158;
              v164 = 0;
              v158 *= 2;
              v87 = HIWORD(v157);
              HIWORD(v157) = (v86 >> 15) & 1 | (2 * HIWORD(v157));
              v88 = (unsigned __int16)v157;
              LOWORD(v157) = (v87 >> 15) & 1 | (2 * v157);
              v89 = v156.n128_u16[7];
              v156.n128_u16[7] = (v88 >> 15) & 1 | (2 * v156.n128_u16[7]);
              v90 = v156.n128_u16[6];
              v156.n128_u16[6] = (v89 >> 15) & 1 | (2 * v156.n128_u16[6]);
              v91 = v156.n128_u16[5];
              v156.n128_u16[5] = (v90 >> 15) & 1 | (2 * v156.n128_u16[5]);
              v92 = v156.n128_u16[4];
              v156.n128_u16[4] = (v91 >> 15) & 1 | (2 * v156.n128_u16[4]);
              v93 = v156.n128_u16[3];
              v156.n128_u16[3] = (v92 >> 15) & 1 | (2 * v156.n128_u16[3]);
              v156.n128_u16[2] = (v93 >> 15) & 1 | (2 * v156.n128_u16[2]);
              v171.val[0] = v156;
              v162 = v156;
              HIWORD(v163) = 4 * HIWORD(v157);
              v94 = HIWORD(v157) + ((4 * HIWORD(v157)) & 0xFFFC);
              v95 = (v157 >> 30) & 1 | (2 * ((v157 >> 31) | (2 * (unsigned __int16)v157) & 0x1FFFF));
              HIWORD(v157) *= 5;
              v96 = HIWORD(v94) + (unsigned __int16)v95 + (unsigned __int16)v157;
              v97 = ((unsigned __int16)v157 >> 14) & 1 | (2 * (((unsigned __int16)v157 >> 15) | (2 * v156.n128_u16[7])));
              LOWORD(v157) = v96;
              v98 = v156.n128_u16[7] + v97 + (HIWORD(v96) & 1);
              v99 = (v156.n128_u16[7] >> 14) & 1 | (2 * ((v156.n128_u16[7] >> 15) | (2 * v156.n128_u16[6])));
              v156.n128_u16[7] = v98;
              v100 = v156.n128_u16[6] + v99 + (HIWORD(v98) & 1);
              v101 = (v156.n128_u16[6] >> 14) & 1
                   | (2 * ((v156.n128_u16[6] >> 15) & 1 | (2 * v156.n128_u16[5]) & 0x1FFFF));
              v156.n128_u16[6] = v100;
              v102 = v156.n128_u16[5] + (unsigned __int16)v101 + (HIWORD(v100) & 1);
              v103 = (v156.n128_u16[5] >> 14) & 1
                   | (2 * ((v156.n128_u16[5] >> 15) & 1 | (2 * v162.n128_u16[4]) & 0x1FFFF));
              v156.n128_u16[5] = v102;
              v104 = v156.n128_u16[4] + (unsigned __int16)v103 + (HIWORD(v102) & 1);
              v162.n128_u16[7] = v97;
              v105 = (v162.n128_u16[4] >> 14) & 1
                   | (2 * ((v162.n128_u16[4] >> 15) & 1 | (2 * v156.n128_u16[3]) & 0x1FFFF));
              v156.n128_u16[4] = v104;
              v106 = v156.n128_u16[3]
                   + ((v162.n128_u16[4] >> 14) & 1
                    | (unsigned __int16)(2 * ((v162.n128_u16[4] >> 15) | (2 * v156.n128_u16[3]))))
                   + (HIWORD(v104) & 1);
              v162.n128_u16[6] = v99;
              v107 = (v156.n128_u16[3] >> 14) & 1 | (2 * ((v156.n128_u16[3] >> 15) & 1 | (2 * v156.n128_u16[2])));
              v156.n128_u16[3] = v106;
              LOWORD(v163) = v95;
              v162.n128_u16[5] = v101;
              v162.n128_u16[4] = v103;
              v162.n128_u16[3] = v105;
              v162.n128_u16[2] = v107;
              v156.n128_u16[2] += v107 + (BYTE2(v106) & 1);
              result = (pthread_mutex_t *)sub_B6B6C((unsigned __int16 *)&v165, (__int64)&v156, v171);
              ++v85;
              *v84++ = (_BYTE)result + 48;
            }
            while ( v85 < v9 );
            v108 = &v155[v83];
            if ( (unsigned __int16)result >= 5u )
            {
              v109 = &v155[v83];
              if ( (unsigned __int16)result != 5
                || v156.n128_u32[1]
                || __PAIR32__(v156.n128_u16[4], 0) != v156.n128_u16[5]
                || __PAIR32__(v156.n128_u16[6], 0) != v156.n128_u16[7]
                || (_WORD)v157
                || HIWORD(v157) | v158
                || (*(v108 - 1) & 1) != 0 )
              {
                v110 = *(v108 - 1) & 0x7F;
                if ( v110 == 46 )
                {
LABEL_99:
                  v111 = (unsigned __int8)*(v109 - 2);
                  *(v109 - 2) = v111 + 1;
                  if ( v111 >= 0x39 )
                  {
                    ++v40;
                    *(v109 - 2) = 49;
                  }
                }
                else
                {
                  v109 = &v155[v83];
                  while ( 1 )
                  {
                    *(v109 - 1) = v110 + 1;
                    if ( (unsigned __int8)v110 < 0x39u )
                      break;
                    *--v109 = 48;
                    v110 = *(v109 - 1) & 0x7F;
                    if ( v110 == 46 )
                      goto LABEL_99;
                  }
                }
              }
            }
            LODWORD(v6) = v148;
            v7 = v144;
            v112 = v108 + 2;
            do
            {
              v113 = (unsigned __int8)*(v112 - 3);
              --v112;
            }
            while ( v113 == 48 );
            if ( v113 == 46 )
            {
              *(v112 - 1) = 48;
              *v112 = 0;
              if ( v144 )
                goto LABEL_105;
LABEL_135:
              v128 = 0;
              v129 = 0;
LABEL_136:
              result = (pthread_mutex_t *)qsnprintf(
                                            (pthread_mutex_t *)((char *)v149 + v128),
                                            v4 - v128,
                                            "%s%s",
                                            v147,
                                            v155);
              v122 = v128 + (int)result;
              v121 = v129;
              if ( !v129 )
              {
LABEL_168:
                if ( v40 )
                  return (pthread_mutex_t *)qsnprintf((pthread_mutex_t *)((char *)v149 + v122), v4 - v122, "e%d", v40);
                return result;
              }
LABEL_164:
              v140 = v4 - v122;
              if ( v121 <= (int)v4 - (int)v122 )
                v140 = v121;
              if ( v140 )
              {
                v141 = v140;
                result = (pthread_mutex_t *)memset((char *)v149 + v122, 48, v140);
                v122 += v141;
                v149->__size[v122] = 0;
              }
              goto LABEL_168;
            }
            *(v112 - 1) = 0;
            if ( !v144 )
              goto LABEL_135;
LABEL_105:
            if ( (_DWORD)v6 )
              v7 = v7 - 2 - v6 - (v40 >= 0);
            if ( v40 >= 0 )
              v114 = v40;
            else
              v114 = -v40;
            if ( !v40 || v7 < v114 )
            {
              if ( !(_DWORD)v6 )
                goto LABEL_135;
              v123 = v7;
              LODWORD(v124) = __strlen_chk(&v155[2], 46);
              if ( (unsigned int)v148 < (unsigned int)v124 )
              {
                v125 = (v148 << 32) + 0x100000000LL;
                v124 = v148;
                do
                {
                  if ( v155[v125 >> 32] != 48 )
                    break;
                  --v124;
                  v125 -= 0x100000000LL;
                }
                while ( v124 );
                v155[(int)v124 + 2] = 0;
              }
              v126 = v40 < 0 && v123 != 0;
              v128 = v123 - v126;
              v127 = v123 == v126;
              v129 = v148 - v124;
              if ( v127 )
              {
                v128 = 0;
              }
              else
              {
                memset(v149, 32, v128);
                v149->__size[v128] = 0;
              }
              goto LABEL_136;
            }
            if ( v155[2] != 48 || v155[3] )
            {
              v115 = v7;
              v116 = __strlen_chk(&v155[2], 46);
              result = (pthread_mutex_t *)__memmove_chk(&v155[1], &v155[2], v116 + 1, 47);
              v7 = v115;
              if ( (_DWORD)v148 )
                goto LABEL_115;
              goto LABEL_140;
            }
            v155[1] = 0;
            if ( !(_DWORD)v6 )
              goto LABEL_140;
LABEL_115:
            if ( v40 > 0 )
              v117 = -v114;
            else
              v117 = -1;
            v118 = v7 + v117;
            if ( v118 )
            {
              v119 = v118;
              result = (pthread_mutex_t *)memset(v149, 32, v118);
              v149->__size[v119] = 0;
              if ( v40 < 1 )
                goto LABEL_120;
LABEL_141:
              v130 = __strlen_chk(v155, 48);
              if ( v114 >= v130 )
              {
                v134 = v148;
                v131 = v130;
                v133 = v148;
              }
              else
              {
                v131 = v114 + 1;
                if ( (_DWORD)v148 )
                {
                  v132 = v130 - v131;
                  if ( v130 - v131 > (unsigned int)v148 )
                  {
                    v155[(int)(v131 + v148)] = 0;
                    v132 = v148;
                  }
                  v133 = v148 - v132;
                }
                else
                {
                  v133 = 0;
                }
                v134 = v148;
              }
              v135 = v4;
              v138 = v119
                   + (int)qsnprintf((pthread_mutex_t *)((char *)v149 + v119), v4 - v119, "%s%.*s", v147, v131, v155);
              if ( !v134 && !v155[v131] )
                ++v133;
              if ( v131 <= v114 )
              {
                v139 = (int)(v114 + 1 - v131);
                memset((char *)v149 + v138, 48, v139);
                v138 += v139;
              }
              v120 = v149;
              v122 = v138 + 1;
              v149->__size[v138] = 46;
            }
            else
            {
LABEL_140:
              v119 = 0;
              if ( v40 >= 1 )
                goto LABEL_141;
LABEL_120:
              v120 = v149;
              if ( *v147 )
                v149->__size[v119++] = *v147;
              v121 = v148;
              *(_WORD *)((char *)&v149->__lock + v119) = 11824;
              v122 = v119 + 2;
              if ( (_DWORD)v148 && (int)v114 > (int)v148 )
              {
                v40 = 0;
                goto LABEL_164;
              }
              v135 = v4;
              v136 = v114 - 1;
              v133 = v148;
              if ( v114 != 1 )
              {
                memset((char *)v149 + v122, 48, v136);
                v121 = v148;
                v122 += v136;
                if ( (_DWORD)v148 )
                  v133 = v148 - v136;
                else
                  v133 = 0;
              }
              if ( v121 )
              {
                v137 = __strlen_chk(v155, 48);
                if ( v133 < v137 )
                {
                  v137 = v133;
                  v155[v133] = 0;
                }
                v120 = v149;
                v131 = 0;
                v133 -= v137;
              }
              else
              {
                v131 = 0;
              }
            }
            v4 = v135;
            result = (pthread_mutex_t *)qsnprintf(
                                          (pthread_mutex_t *)((char *)v120 + v122),
                                          v135 - v122,
                                          "%s",
                                          &v155[v131]);
            v40 = 0;
            v122 += (int)result;
            v121 = v133;
            if ( !v133 )
              goto LABEL_168;
            goto LABEL_164;
          }
        }
      }
    }
    if ( (_DWORD)v6 )
    {
      v147 = v10;
      v40 = 0;
      strcpy(v155, "0.0");
      if ( v7 )
        goto LABEL_105;
      goto LABEL_135;
    }
    return (pthread_mutex_t *)qsnprintf(result, a2, "%s0.0", v10);
  }
}
// B67B0: conditional instruction was optimized away because %var_188.4 is in (1..FF)
// B5D48: variable 'v169' is possibly undefined
// B5D58: variable 'v37' is possibly undefined
// B5D58: variable 'v38' is possibly undefined
// B5E2C: variable 'v168' is possibly undefined
// B5F74: variable 'v170' is possibly undefined
// B6038: variable 'v58' is possibly undefined
// B6038: variable 'v59' is possibly undefined
// B65A4: variable 'v171' is possibly undefined
// 36AF0: using guessed type __int64 __fastcall __memmove_chk(_QWORD, _QWORD, _QWORD, _QWORD);
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 11BA10: using guessed type __int128 xmmword_11BA10;
// 11BA20: using guessed type __int64 qword_11BA20[2];
// 11BAA0: using guessed type __int64 qword_11BAA0;
// 11BAE0: using guessed type __int64 qword_11BAE0;
// 11BB14: using guessed type int dword_11BB14;
// 11BBF4: using guessed type int dword_11BBF4;
// 121EC0: using guessed type char byte_121EC0;
// 168DF0: using guessed type char under_debugger;
