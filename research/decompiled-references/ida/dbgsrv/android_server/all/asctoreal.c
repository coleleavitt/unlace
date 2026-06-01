/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: asctoreal
// Address: 0x00000000000B4E94

//----- (00000000000B4E94) ----------------------------------------------------
__int64 __fastcall asctoreal(char **a1, __int64 a2)
{
  char **v3; // x29
  char *v4; // x21
  int v5; // w19
  int v6; // t1
  unsigned __int8 v9; // w10
  char v10; // w21
  int v11; // w25
  int v12; // w28
  int v13; // w26
  int v14; // w29
  int v15; // w8
  __int16 v16; // w24
  pthread_mutex_t *v17; // x19
  int v18; // w0
  int v19; // t1
  pthread_mutex_t *v20; // x23
  int v21; // t1
  int v22; // t1
  int v23; // t1
  unsigned int v24; // w10
  unsigned int v25; // w12
  unsigned int v26; // w11
  unsigned int v27; // w10
  unsigned __int16 v28; // w10
  uint16x4_t v29; // d1
  int v30; // w12
  unsigned int v31; // w13
  unsigned int v32; // w9
  int v33; // w11
  unsigned int v34; // w9
  unsigned int v35; // w10
  unsigned int v36; // w11
  int v37; // w9
  unsigned int v38; // w10
  unsigned int v39; // w9
  unsigned int v40; // w11
  int v41; // w10
  unsigned int v42; // w9
  unsigned int v43; // w10
  unsigned int v44; // w11
  int v45; // w9
  unsigned int v46; // w10
  unsigned int v47; // w9
  unsigned int v48; // w11
  int v49; // w10
  unsigned int v50; // w9
  unsigned int v51; // w10
  unsigned int v52; // w11
  int v53; // w9
  unsigned int v54; // w10
  int v55; // w9
  int v56; // t1
  pthread_mutex_t *v57; // x23
  int v58; // t1
  int v59; // t1
  int v60; // t1
  int v61; // w8
  int v62; // w22
  __int16 v63; // w8
  unsigned int v64; // w10
  __int16 v65; // w8
  unsigned int v66; // w9
  int v67; // w15
  int v68; // w16
  unsigned int v69; // w9
  int v70; // w12
  unsigned int v71; // w9
  int v72; // w13
  unsigned int v73; // w9
  int v74; // w12
  unsigned int v75; // w9
  int v76; // w13
  int v77; // w9
  int v78; // w9
  __int64 result; // x0
  int v80; // w0
  __int16 v81; // w15
  __int16 v82; // w14
  __int16 v83; // w13
  __int16 v84; // w12
  __int16 v85; // w11
  __int16 v86; // w10
  __int16 v87; // w9
  __int16 v88; // w8
  int v90; // w21
  int v91; // w25
  int v92; // w0
  int v93; // w10
  int v94; // t1
  int v95; // w9
  int8x16_t v96; // q0
  int v97; // w22
  char *v98; // x12
  char **v99; // [xsp+8h] [xbp-148h]
  __int128 v100; // [xsp+20h] [xbp-130h] BYREF
  pthread_mutex_t v101[2]; // [xsp+3Ch] [xbp-114h] BYREF
  __int128 v102; // [xsp+90h] [xbp-C0h] BYREF
  int v103; // [xsp+A0h] [xbp-B0h]
  __int16 v104; // [xsp+A4h] [xbp-ACh]
  int8x16_t v105; // [xsp+B0h] [xbp-A0h]
  _BYTE v106[6]; // [xsp+C0h] [xbp-90h]
  _OWORD v107[2]; // [xsp+D0h] [xbp-80h] BYREF
  int8x16x2_t v108; // 0:q0.32
  int8x16x2_t v109; // 0:q0.32
  int8x16x2_t v110; // 0:q0.32
  int8x16x2_t v111; // 0:kr00_32.32
  int8x16x2_t v112; // 0:kr20_32.32

  _ReadStatusReg(TPIDR_EL0);
  v3 = a1;
  *(_QWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0;
  v4 = *a1;
  v5 = **a1;
  if ( (v5 & 0x80000000) == 0 )
  {
    while ( isspace((unsigned __int8)v5) )
    {
      v6 = *++v4;
      LOBYTE(v5) = v6;
      if ( v6 < 0 )
        goto LABEL_6;
    }
    if ( !(_BYTE)v5 )
      return 3;
  }
LABEL_6:
  *v3 = v4;
  qstrncpy(v101, v4, 80);
  v9 = v101[0].__size[0];
  memset(v107, 0, 22);
  if ( !v101[0].__size[0] )
  {
    v16 = 0;
    v13 = 0;
    v10 = 0;
    v61 = 0;
    v17 = v101;
    goto LABEL_54;
  }
  v99 = v3;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = v101;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = v9;
        if ( (char)v9 < 0 || (unsigned int)v9 - 48 > 9 )
          break;
        if ( !v14 )
          v14 = 1;
        if ( v12 | v15 | (v9 - 48) )
        {
          if ( WORD2(v107[0]) )
          {
            v10 |= v9 != 48;
            ++v12;
            v19 = (unsigned __int8)v17->__size[1];
            v17 = (pthread_mutex_t *)((char *)v17 + 1);
            v9 = v19;
            if ( !v19 )
              goto LABEL_51;
          }
          else
          {
            v24 = WORD2(v107[1]);
            v25 = LOWORD(v107[1]);
            WORD2(v107[1]) *= 2;
            v26 = WORD1(v107[1]);
            v27 = v24 >> 15;
            if ( v15 )
              ++v13;
            ++v12;
            WORD1(v107[1]) = v27 & 1 | (2 * WORD1(v107[1]));
            LOWORD(v107[1]) = (v26 >> 15) & 1 | (2 * LOWORD(v107[1]));
            v28 = HIWORD(v107[0]);
            HIWORD(v107[0]) = (v25 >> 15) & 1 | (2 * HIWORD(v107[0]));
            v108.val[1] = vdupq_lane_s16(*(int16x4_t *)((char *)v107 + 6), 1);
            *(unsigned __int32 *)((char *)v29.n64_u32 + 2) = *(_DWORD *)((char *)v107 + 10);
            v29.n64_u16[3] = v28;
            v108.val[1].n128_u64[0] = vshr_n_u16(v29, 0xFu).n64_u64[0];
            v30 = (WORD3(v107[0]) >> 15) & 1;
            *(int8x8_t *)((char *)v107 + 6) = vorr_s8(
                                                vshl_n_s16(*(int16x4_t *)((char *)v107 + 6), 1u),
                                                (int8x8_t)v108.val[1].n128_u64[0]);
            WORD2(v107[0]) = v30;
            v108.val[0] = (int8x16_t)v107[0];
            *(_WORD *)v106 = 0;
            *(_DWORD *)&v106[2] = (unsigned __int16)(v18 - 48);
            v31 = WORD1(v107[1]) + 4 * (HIWORD(LODWORD(v107[1])) & 0x3FFF);
            v32 = HIWORD(v31)
                + (unsigned __int16)(((v107[1] & 0x40000000) != 0)
                                   | (unsigned __int16)(2 * ((LODWORD(v107[1]) >> 31) | (2 * LOWORD(v107[1])))))
                + LOWORD(v107[1]);
            WORD1(v107[1]) = v18 - 48 + v31;
            v33 = HIWORD(v32) & 1;
            v34 = ((*(_DWORD *)&v106[2] + (unsigned int)(unsigned __int16)v31) >> 16) + (unsigned __int16)v32;
            v35 = HIWORD(v107[0])
                + ((LOWORD(v107[1]) >> 14) & 1
                 | (unsigned __int16)(2 * ((LOWORD(v107[1]) >> 15) | (2 * HIWORD(v107[0])))))
                + v33;
            v36 = HIWORD(v34);
            LOWORD(v107[1]) = v34;
            v37 = HIWORD(v35) & 1;
            v38 = v36 + (unsigned __int16)v35;
            v39 = WORD6(v107[0])
                + ((HIWORD(v107[0]) >> 14) & 1 | (unsigned __int16)(2 * ((HIWORD(v107[0]) >> 15) | (2 * WORD6(v107[0])))))
                + v37;
            v40 = HIWORD(v38);
            HIWORD(v107[0]) = v38;
            v41 = HIWORD(v39) & 1;
            v42 = v40 + (unsigned __int16)v39;
            v43 = WORD5(v107[0])
                + ((WORD6(v107[0]) >> 14) & 1 | (unsigned __int16)(2 * ((WORD6(v107[0]) >> 15) | (2 * WORD5(v107[0])))))
                + v41;
            v44 = HIWORD(v42);
            WORD6(v107[0]) = v42;
            v45 = HIWORD(v43) & 1;
            v46 = v44 + (unsigned __int16)v43;
            v47 = WORD4(v107[0])
                + ((WORD5(v107[0]) >> 14) & 1 | (unsigned __int16)(2 * ((WORD5(v107[0]) >> 15) | (2 * WORD4(v107[0])))))
                + v45;
            v48 = HIWORD(v46);
            WORD5(v107[0]) = v46;
            v49 = HIWORD(v47) & 1;
            v50 = v48 + (unsigned __int16)v47;
            v51 = WORD3(v107[0])
                + ((WORD4(v107[0]) >> 14) & 1 | (unsigned __int16)(2 * ((WORD4(v107[0]) >> 15) | (2 * WORD3(v107[0])))))
                + v49;
            v52 = HIWORD(v50);
            WORD4(v107[0]) = v50;
            v53 = HIWORD(v51) & 1;
            v54 = v52 + (unsigned __int16)v51;
            v55 = v30
                + ((WORD3(v107[0]) >> 14) & 1 | (2 * ((WORD3(v107[0]) >> 15) & 1 | (2 * (unsigned __int16)v30))))
                + v53
                + HIWORD(v54);
            v105 = 0u;
            WORD3(v107[0]) = v54;
            WORD2(v107[0]) = v55;
            v56 = (unsigned __int8)v17->__size[1];
            v17 = (pthread_mutex_t *)((char *)v17 + 1);
            v9 = v56;
            if ( !v56 )
              goto LABEL_51;
          }
        }
        else
        {
LABEL_29:
          v22 = (unsigned __int8)v17->__size[1];
          v17 = (pthread_mutex_t *)((char *)v17 + 1);
          v9 = v22;
          if ( !v22 )
            goto LABEL_51;
        }
      }
      if ( v9 == 122 )
      {
        if ( !v11 )
          goto LABEL_86;
        goto LABEL_29;
      }
      if ( v9 != 46 )
        break;
      if ( v15 )
        goto LABEL_86;
      v20 = v17;
      if ( ((char)v9 & 0x80000000) == 0 )
      {
        v20 = v17;
        while ( 1 )
        {
          v18 = v9;
          if ( (unsigned int)v9 - 48 > 9 )
            break;
          v21 = v20->__size[1];
          v20 = (pthread_mutex_t *)((char *)v20 + 1);
          v9 = v21;
          if ( v21 < 0 )
          {
            v18 = v9;
            break;
          }
        }
      }
      if ( tolower(v18) == 101 )
      {
        if ( !v14 && v20 == v17 )
          goto LABEL_86;
      }
      else
      {
        v20->__size[0] = 0;
      }
      if ( v20 > v101 )
      {
        v58 = (unsigned __int8)v20[-1].__size[39];
        v57 = (pthread_mutex_t *)((char *)v20 - 1);
        if ( v58 == 48 )
        {
          do
          {
            v57->__size[0] = 122;
            if ( v57 <= v101 )
              break;
            v59 = (unsigned __int8)v57[-1].__size[39];
            v57 = (pthread_mutex_t *)((char *)v57 - 1);
          }
          while ( v59 == 48 );
          v11 = 1;
        }
      }
      if ( !v14 )
        v14 = 1;
      v15 = 1;
      v60 = (unsigned __int8)v17->__size[1];
      v17 = (pthread_mutex_t *)((char *)v17 + 1);
      v9 = v60;
      if ( !v60 )
      {
LABEL_51:
        v61 = 0;
LABEL_52:
        v3 = v99;
        goto LABEL_54;
      }
    }
    if ( v9 != 45 && v9 != 43 )
      break;
    if ( !v14 )
    {
      if ( v9 == 45 )
        v16 = -1;
      v14 = -1;
      v23 = (unsigned __int8)v17->__size[1];
      v17 = (pthread_mutex_t *)((char *)v17 + 1);
      v9 = v23;
      if ( v23 )
        continue;
    }
    goto LABEL_51;
  }
  if ( tolower(v9) != 101 )
  {
    if ( !v14 )
      goto LABEL_86;
    v61 = 0;
    if ( (v14 & 0x80000000) == 0 )
      goto LABEL_52;
    v3 = v99;
    if ( !v12 )
    {
LABEL_133:
      result = 3;
      goto LABEL_121;
    }
LABEL_54:
    v62 = v61 - v13;
    if ( v61 - v13 >= 1 )
    {
      if ( WORD2(v107[0]) )
      {
        v63 = *(_WORD *)&v106[4];
      }
      else
      {
        while ( 1 )
        {
          v108.val[0] = (int8x16_t)v107[0];
          v105.n128_u32[0] = v107[0];
          v64 = WORD1(v107[1]) + 4 * (HIWORD(LODWORD(v107[1])) & 0x3FFF);
          v65 = WORD2(v107[1]);
          v66 = LOWORD(v107[1])
              + (unsigned __int16)(((v107[1] & 0x40000000) != 0)
                                 | (unsigned __int16)(2 * ((LODWORD(v107[1]) >> 31) | (2 * LOWORD(v107[1])))))
              + HIWORD(v64);
          *(_WORD *)&v106[2] = (WORD2(v107[1]) >> 15) | (2 * v64);
          v67 = (v66 >> 15) & 1;
          v68 = (v64 >> 15) & 1 | (2 * (v66 & 0x3FFFF));
          v69 = HIWORD(v107[0])
              + ((LOWORD(v107[1]) >> 14) & 1 | (unsigned __int16)(2 * ((LOWORD(v107[1]) >> 15) | (2 * HIWORD(v107[0])))))
              + (HIWORD(v66) & 1);
          v70 = (v69 >> 15) & 1;
          LOWORD(v67) = v67 & 1 | (2 * v69);
          v71 = WORD6(v107[0])
              + ((HIWORD(v107[0]) >> 14) & 1 | (unsigned __int16)(2 * ((HIWORD(v107[0]) >> 15) | (2 * WORD6(v107[0])))))
              + (HIWORD(v69) & 1);
          v72 = (v71 >> 15) & 1;
          LOWORD(v70) = v70 & 1 | (2 * v71);
          v73 = WORD5(v107[0])
              + ((WORD6(v107[0]) >> 14) & 1 | (unsigned __int16)(2 * ((WORD6(v107[0]) >> 15) | (2 * WORD5(v107[0])))))
              + (HIWORD(v71) & 1);
          v105.n128_u16[6] = v70;
          v74 = (v73 >> 15) & 1;
          LOWORD(v72) = v72 & 1 | (2 * v73);
          v75 = WORD4(v107[0])
              + ((WORD5(v107[0]) >> 14) & 1 | (unsigned __int16)(2 * ((WORD5(v107[0]) >> 15) | (2 * WORD4(v107[0])))))
              + (HIWORD(v73) & 1);
          v105.n128_u16[5] = v72;
          v76 = (v75 >> 15) & 1;
          LOWORD(v74) = v74 & 1 | (2 * v75);
          v77 = WORD3(v107[0])
              + ((WORD4(v107[0]) >> 14) & 1 | (unsigned __int16)(2 * ((WORD4(v107[0]) >> 15) | (2 * WORD3(v107[0])))))
              + (HIWORD(v75) & 1);
          v105.n128_u16[4] = v74;
          *(_WORD *)v106 = v68;
          v105.n128_u16[7] = v67;
          v105.n128_u16[3] = v76 & 1 | (2 * v77);
          v105.n128_u16[2] = ((v77 & 0x8000) != 0)
                           | (unsigned __int16)(2
                                              * (WORD2(v107[0])
                                               + ((WORD3(v107[0]) >> 14) & 1
                                                | (2 * ((WORD3(v107[0]) >> 15) | (2 * WORD2(v107[0])))))
                                               + (BYTE2(v77) & 1)));
          if ( v105.n128_u16[2] )
            break;
          v108.val[0] = v105;
          v78 = v62 - 1;
          v107[0] = v105;
          LODWORD(v107[1]) = *(_DWORD *)v106;
          WORD2(v107[1]) = 0;
          if ( v62 >= 2 )
          {
            --v62;
            if ( !WORD2(v107[0]) )
              continue;
          }
          goto LABEL_63;
        }
        v78 = v62;
LABEL_63:
        v63 = 2 * v65;
        v62 = v78;
      }
      *(_WORD *)&v106[4] = v63;
    }
    v80 = sub_B3274((__int64)v107, v108);
    if ( v80 >= 113 )
    {
      v81 = 0;
      v82 = 0;
      v83 = 0;
      v84 = 0;
      v85 = 0;
      v86 = 0;
      v87 = 0;
      v88 = 0;
      memset(v107, 0, 22);
LABEL_67:
      if ( v16 )
        v88 |= 0x8000u;
      result = 1;
      LOWORD(v107[0]) = v16;
      *(_WORD *)(a2 + 12) = v87;
      *(_WORD *)(a2 + 10) = v86;
      *(_WORD *)(a2 + 8) = v85;
      *(_WORD *)(a2 + 6) = v84;
      *(_WORD *)(a2 + 4) = v83;
      *(_WORD *)(a2 + 2) = v82;
      *(_WORD *)a2 = v81;
      *(_WORD *)(a2 + 14) = v88;
      goto LABEL_121;
    }
    if ( !emdnorm((__int64)v107, v10 & 1, 0, 16494 - v80, 112, v109) )
    {
LABEL_120:
      result = 2;
      goto LABEL_121;
    }
    v90 = WORD1(v107[0]);
    if ( !v62 )
    {
      v92 = 0;
      goto LABEL_118;
    }
    if ( v62 < 0 )
    {
      if ( -v62 <= 4096 )
      {
        v91 = -1;
        LOWORD(v62) = -(__int16)v62;
      }
      else
      {
        v102 = xmmword_11B9F0;
        v103 = -2142563009;
        v104 = 0;
        v111.val[0] = (int8x16_t)xmmword_11B9F0;
        v111.val[1] = v110.val[1];
        sub_B4260((unsigned __int16 *)&v102, v107, v111);
        v90 -= 13606;
        LOWORD(v62) = -4096 - v62;
        v91 = -1;
      }
    }
    else
    {
      v91 = 1;
    }
    v96 = (int8x16_t)xmmword_11BA10;
    v100 = xmmword_11BA10;
    if ( (v62 & 1) != 0 )
    {
      emul((__int16 *)&v100, (__int16 *)&qword_11BAE0, (__int64)&v100, 0.0, (int8x8_t)v110.val[1].n128_u64[0]);
      if ( (v62 & 2) == 0 )
      {
LABEL_90:
        if ( (v62 & 4) == 0 )
          goto LABEL_91;
        goto LABEL_106;
      }
    }
    else if ( (v62 & 2) == 0 )
    {
      goto LABEL_90;
    }
    emul((__int16 *)&v100, (__int16 *)&qword_11BAD0, (__int64)&v100, v96.n128_f64[0], (int8x8_t)v110.val[1].n128_u64[0]);
    if ( (v62 & 4) == 0 )
    {
LABEL_91:
      if ( (v62 & 8) == 0 )
        goto LABEL_92;
      goto LABEL_107;
    }
LABEL_106:
    emul((__int16 *)&v100, (__int16 *)&qword_11BAC0, (__int64)&v100, v96.n128_f64[0], (int8x8_t)v110.val[1].n128_u64[0]);
    if ( (v62 & 8) == 0 )
    {
LABEL_92:
      if ( (v62 & 0x10) == 0 )
        goto LABEL_93;
      goto LABEL_108;
    }
LABEL_107:
    emul((__int16 *)&v100, (__int16 *)&qword_11BAB0, (__int64)&v100, v96.n128_f64[0], (int8x8_t)v110.val[1].n128_u64[0]);
    if ( (v62 & 0x10) == 0 )
    {
LABEL_93:
      if ( (v62 & 0x20) == 0 )
        goto LABEL_94;
      goto LABEL_109;
    }
LABEL_108:
    emul((__int16 *)&v100, (__int16 *)&qword_11BAA0, (__int64)&v100, v96.n128_f64[0], (int8x8_t)v110.val[1].n128_u64[0]);
    if ( (v62 & 0x20) == 0 )
    {
LABEL_94:
      if ( (v62 & 0x40) == 0 )
        goto LABEL_95;
      goto LABEL_110;
    }
LABEL_109:
    emul((__int16 *)&v100, (__int16 *)qword_11BA90, (__int64)&v100, v96.n128_f64[0], (int8x8_t)v110.val[1].n128_u64[0]);
    if ( (v62 & 0x40) == 0 )
    {
LABEL_95:
      if ( (v62 & 0x80) == 0 )
        goto LABEL_96;
      goto LABEL_111;
    }
LABEL_110:
    emul((__int16 *)&v100, (__int16 *)qword_11BA80, (__int64)&v100, v96.n128_f64[0], (int8x8_t)v110.val[1].n128_u64[0]);
    if ( (v62 & 0x80) == 0 )
    {
LABEL_96:
      if ( (v62 & 0x100) == 0 )
        goto LABEL_97;
      goto LABEL_112;
    }
LABEL_111:
    emul((__int16 *)&v100, (__int16 *)qword_11BA70, (__int64)&v100, v96.n128_f64[0], (int8x8_t)v110.val[1].n128_u64[0]);
    if ( (v62 & 0x100) == 0 )
    {
LABEL_97:
      if ( (v62 & 0x200) == 0 )
        goto LABEL_98;
      goto LABEL_113;
    }
LABEL_112:
    emul((__int16 *)&v100, (__int16 *)qword_11BA60, (__int64)&v100, v96.n128_f64[0], (int8x8_t)v110.val[1].n128_u64[0]);
    if ( (v62 & 0x200) == 0 )
    {
LABEL_98:
      if ( (v62 & 0x400) == 0 )
        goto LABEL_99;
      goto LABEL_114;
    }
LABEL_113:
    emul((__int16 *)&v100, (__int16 *)qword_11BA50, (__int64)&v100, v96.n128_f64[0], (int8x8_t)v110.val[1].n128_u64[0]);
    if ( (v62 & 0x400) == 0 )
    {
LABEL_99:
      if ( (v62 & 0x800) == 0 )
        goto LABEL_100;
      goto LABEL_115;
    }
LABEL_114:
    emul((__int16 *)&v100, (__int16 *)qword_11BA40, (__int64)&v100, v96.n128_f64[0], (int8x8_t)v110.val[1].n128_u64[0]);
    if ( (v62 & 0x800) == 0 )
    {
LABEL_100:
      if ( (v62 & 0x1000) == 0 )
        goto LABEL_102;
      goto LABEL_101;
    }
LABEL_115:
    emul((__int16 *)&v100, (__int16 *)qword_11BA30, (__int64)&v100, v96.n128_f64[0], (int8x8_t)v110.val[1].n128_u64[0]);
    if ( (v62 & 0x1000) == 0 )
    {
LABEL_102:
      LOWORD(v102) = (unsigned int)SHIWORD(v100) >> 15;
      v97 = HIWORD(v100) & 0x7FFF;
      WORD3(v102) = WORD6(v100);
      WORD4(v102) = WORD5(v100);
      *(_DWORD *)((char *)&v102 + 2) = v97;
      WORD5(v102) = WORD4(v100);
      WORD6(v102) = WORD3(v100);
      HIWORD(v102) = WORD2(v100);
      LOWORD(v103) = WORD1(v100);
      HIWORD(v103) = v100;
      v104 = 0;
      if ( v91 < 0 )
      {
        v112.val[0] = v96;
        v112.val[1] = v110.val[1];
        *(long double *)v110.val = sub_B4260((unsigned __int16 *)&v102, v107, v112);
        v90 = v90 + 0x3FFF - v97;
      }
      else
      {
        v92 = sub_B3D24((__int64)&v102, (__int64)v107, v96.n128_f64[0], (int8x8_t)v110.val[1].n128_u64[0]);
        v90 = v90 + v97 - 16382;
      }
LABEL_118:
      if ( emdnorm((__int64)v107, v92 != 0, 0, v90, 112, v110) )
      {
        v88 = WORD1(v107[0]);
        v87 = WORD3(v107[0]);
        v86 = WORD4(v107[0]);
        v85 = WORD5(v107[0]);
        v84 = WORD6(v107[0]);
        v83 = HIWORD(v107[0]);
        v82 = v107[1];
        v81 = WORD1(v107[1]);
        goto LABEL_67;
      }
      goto LABEL_120;
    }
LABEL_101:
    emul((__int16 *)&v100, (__int16 *)qword_11BA20, (__int64)&v100, v96.n128_f64[0], (int8x8_t)v110.val[1].n128_u64[0]);
    goto LABEL_102;
  }
  if ( v14 )
  {
    v94 = (unsigned __int8)v17->__size[1];
    v17 = (pthread_mutex_t *)((char *)v17 + 1);
    v93 = v94;
    if ( v94 == 45 )
    {
      v95 = -1;
    }
    else
    {
      v95 = 1;
      if ( v93 != 43 )
      {
LABEL_124:
        v3 = v99;
        if ( ((char)v93 & 0x80000000) == 0 && (unsigned int)(v93 - 48) <= 9 )
        {
          v61 = 0;
          v98 = &v17->__size[1];
          while ( 1 )
          {
            v61 = 10 * v61 + (unsigned __int8)v93 - 48;
            LODWORD(v17) = (_DWORD)v98;
            if ( (v61 & 0x8000) != 0 )
              break;
            v93 = *v98;
            if ( (v93 & 0x80000000) == 0 )
            {
              ++v98;
              if ( (unsigned int)(unsigned __int8)v93 - 48 < 0xA )
                continue;
            }
            if ( (v95 & 0x80000000) == 0 )
              goto LABEL_54;
            if ( v61 )
            {
              v61 = -v61;
              goto LABEL_54;
            }
            goto LABEL_133;
          }
        }
        goto LABEL_133;
      }
    }
    v17 = (pthread_mutex_t *)((char *)v17 + 1);
    v93 = (unsigned __int8)v17->__size[0];
    goto LABEL_124;
  }
LABEL_86:
  v3 = v99;
  result = 3;
LABEL_121:
  *v3 += (int)((_DWORD)v17 - (unsigned int)v101);
  return result;
}
// B5490: variable 'v108' is possibly undefined
// B5518: variable 'v109' is possibly undefined
// B5598: variable 'v110' is possibly undefined
// B5634: variable 'v96' is possibly undefined
// B57E8: variable 'v92' is possibly undefined
// 11B9F0: using guessed type __int128 xmmword_11B9F0;
// 11BA10: using guessed type __int128 xmmword_11BA10;
// 11BA20: using guessed type __int64 qword_11BA20[2];
// 11BA30: using guessed type __int64 qword_11BA30[2];
// 11BA40: using guessed type __int64 qword_11BA40[2];
// 11BA50: using guessed type __int64 qword_11BA50[2];
// 11BA60: using guessed type __int64 qword_11BA60[2];
// 11BA70: using guessed type __int64 qword_11BA70[2];
// 11BA80: using guessed type __int64 qword_11BA80[2];
// 11BA90: using guessed type __int64 qword_11BA90[2];
// 11BAA0: using guessed type __int64 qword_11BAA0;
// 11BAB0: using guessed type __int64 qword_11BAB0;
// 11BAC0: using guessed type __int64 qword_11BAC0;
// 11BAD0: using guessed type __int64 qword_11BAD0;
// 11BAE0: using guessed type __int64 qword_11BAE0;
