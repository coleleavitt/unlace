/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_72884
// Address: 0x00072884

//----- (00072884) --------------------------------------------------------
int __fastcall sub_72884(_BYTE *a1, int a2, int *a3, int a4)
{
  char *v6; // r11
  int result; // r0
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int *v12; // r9
  int v13; // r3
  int v14; // r7
  size_t v15; // r5
  size_t v16; // r0
  size_t v17; // r3
  char *v18; // r2
  int v19; // t1
  int v20; // r3
  _BYTE *v21; // r4
  int v22; // r7
  int v23; // r4
  _BYTE *v24; // r0
  int v25; // r0
  int v26; // r6
  int v27; // r6
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int *v32; // r8
  int *i; // r7
  int *v34; // r7
  int v35; // r0
  int v36; // r1
  int v37; // r2
  int v38; // r3
  int *v39; // r5
  int v40; // r0
  int v41; // r1
  int v42; // r2
  int v43; // r3
  unsigned __int16 *v44; // r7
  int v45; // r5
  unsigned __int16 *v46; // r6
  int v47; // r0
  __int16 *v48; // r3
  int v49; // r1
  int *j; // r2
  int v51; // t1
  int v52; // t1
  unsigned __int16 *v53; // r11
  int v54; // r10
  int *v55; // r1
  __int16 v56; // r2
  __int16 v57; // t1
  __int16 v58; // r3
  bool v59; // nf
  int *v60; // r12
  int v61; // r1
  int v62; // r2
  int v63; // r3
  __int16 v64; // r4
  __int16 v65; // r5
  int *v66; // r6
  int v67; // lr
  __int16 v68; // t1
  __int16 v69; // r4
  int *v70; // r0
  __int16 v71; // r2
  int *v72; // r1
  __int16 v73; // t1
  __int16 v74; // r3
  char *v75; // r4
  unsigned int v76; // r3
  int v77; // t1
  unsigned int v78; // r3
  _DWORD *v79; // r3
  char *v80; // r3
  int v81; // r2
  int v82; // r2
  char *v83; // r1
  int v84; // r2
  char v85; // t1
  int v86; // r2
  int v87; // r2
  int v88; // r0
  char *v89; // r3
  char *v90; // r1
  int v91; // t1
  _DWORD *v92; // r2
  size_t v93; // r7
  size_t v94; // r4
  size_t v95; // r4
  char *v96; // r9
  size_t v97; // r8
  int v98; // r1
  size_t v99; // r5
  size_t v100; // r9
  char *v101; // r3
  _BYTE *v102; // r8
  __int16 v103; // r2
  unsigned __int16 *v104; // r1
  unsigned __int16 *v105; // r0
  __int16 v106; // t1
  unsigned __int16 v107; // r3
  __int16 v108; // r4
  int *v109; // r12
  __int16 v110; // r5
  int *v111; // r6
  int v112; // r1
  int v113; // r2
  int v114; // r3
  int v115; // lr
  __int16 v116; // t1
  __int16 v117; // r4
  int *v118; // r0
  __int16 v119; // r2
  int *v120; // r1
  __int16 v121; // t1
  __int16 v122; // r3
  unsigned int v123; // r3
  unsigned __int16 *v124; // r0
  int v125; // t1
  unsigned int v126; // r3
  size_t v127; // r0
  int v128; // r8
  unsigned int v129; // r10
  int v130; // r0
  int v131; // r1
  int v132; // r2
  int v133; // r3
  __int16 v134; // lr
  int v135; // r6
  int v136; // r12
  int *v137; // r3
  int v138; // r3
  int *v139; // r2
  unsigned int v140; // r12
  unsigned int v141; // r3
  unsigned int v142; // r6
  char *v143; // r7
  int *v144; // r5
  int v145; // r0
  int v146; // r1
  int v147; // r2
  int v148; // r3
  __int16 *v149; // r11
  int *v150; // r10
  int *v151; // r3
  unsigned __int16 *v152; // r2
  int v153; // r0
  int v154; // t1
  int v155; // t1
  int *m; // r1
  int v157; // t1
  int v158; // t1
  char *v159; // r3
  bool v160; // cc
  size_t v161; // r7
  size_t v162; // r0
  char v163; // r5
  int v164; // r9
  char *v165; // r1
  unsigned __int16 *v166; // r2
  unsigned int v167; // r3
  int v168; // t1
  unsigned int v169; // r3
  _BYTE *v170; // r0
  size_t v171; // r2
  void *v172; // [sp+Ch] [bp-120h]
  char *k; // [sp+10h] [bp-11Ch]
  size_t n; // [sp+14h] [bp-118h]
  int v175; // [sp+18h] [bp-114h]
  size_t v176; // [sp+1Ch] [bp-110h]
  int *v177; // [sp+20h] [bp-10Ch]
  int *v178; // [sp+24h] [bp-108h]
  char *v179; // [sp+28h] [bp-104h]
  int *v180; // [sp+2Ch] [bp-100h]
  __int16 *v181; // [sp+30h] [bp-FCh]
  char *v182; // [sp+34h] [bp-F8h]
  int *v183; // [sp+38h] [bp-F4h]
  char *v184; // [sp+3Ch] [bp-F0h]
  unsigned __int16 *v185; // [sp+40h] [bp-ECh]
  char *s; // [sp+44h] [bp-E8h]
  _BYTE *v187; // [sp+48h] [bp-E4h]
  char *v188; // [sp+4Ch] [bp-E0h]
  _DWORD v189[3]; // [sp+54h] [bp-D8h] BYREF
  int v190; // [sp+60h] [bp-CCh]
  int v191; // [sp+64h] [bp-C8h] BYREF
  int v192; // [sp+68h] [bp-C4h]
  int v193; // [sp+6Ch] [bp-C0h]
  int v194; // [sp+70h] [bp-BCh]
  int v195; // [sp+74h] [bp-B8h] BYREF
  int v196; // [sp+78h] [bp-B4h]
  int v197; // [sp+7Ch] [bp-B0h]
  int v198; // [sp+80h] [bp-ACh]
  int v199; // [sp+84h] [bp-A8h] BYREF
  int v200; // [sp+88h] [bp-A4h]
  int v201; // [sp+8Ch] [bp-A0h]
  int v202; // [sp+90h] [bp-9Ch]
  _DWORD v203[5]; // [sp+94h] [bp-98h] BYREF
  __int16 v204; // [sp+A8h] [bp-84h]
  int v205; // [sp+ACh] [bp-80h] BYREF
  int v206; // [sp+B0h] [bp-7Ch] BYREF
  int v207; // [sp+B4h] [bp-78h]
  int v208; // [sp+B8h] [bp-74h]
  int v209; // [sp+BCh] [bp-70h]
  __int16 v210; // [sp+C0h] [bp-6Ch] BYREF
  _BYTE v211[2]; // [sp+C2h] [bp-6Ah] BYREF
  int v212; // [sp+C4h] [bp-68h] BYREF
  int v213; // [sp+C8h] [bp-64h]
  int v214; // [sp+CCh] [bp-60h]
  int v215; // [sp+D0h] [bp-5Ch]
  int v216; // [sp+D4h] [bp-58h]
  __int16 v217; // [sp+D8h] [bp-54h]
  char v218; // [sp+DAh] [bp-52h] BYREF
  int v219; // [sp+DCh] [bp-50h] BYREF
  int v220; // [sp+E0h] [bp-4Ch] BYREF
  int v221; // [sp+E4h] [bp-48h]
  int v222; // [sp+E8h] [bp-44h] BYREF
  __int16 v223; // [sp+F0h] [bp-3Ch] BYREF
  char v224[2]; // [sp+F2h] [bp-3Ah] BYREF
  char v225[48]; // [sp+F4h] [bp-38h] BYREF
  _BYTE v226[4]; // [sp+128h] [bp-4h] BYREF

  v6 = (char *)a2;
  v172 = &_stack_chk_guard;
  if ( a2 < 0 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(1225);
  }
  result = sub_7284C((int)a3);
  switch ( result )
  {
    case 0:
      return result;
    case 2:
      return (int)sub_7968C(a1, (unsigned __int8 *)&dword_B4200, (int)v6);
    case 3:
      return (int)sub_7968C(a1, "+Inf", (int)v6);
    case 4:
      return (int)sub_7968C(a1, "-Inf", (int)v6);
    default:
      v176 = BYTE2(a4);
      n = BYTE1(a4);
      if ( BYTE2(a4) && (BYTE1(a4) < (unsigned int)BYTE2(a4) + 3 || (unsigned int)BYTE1(a4) + 3 >= (unsigned int)v6) )
      {
        v176 = 0;
        n = 0;
      }
      v9 = *a3;
      v10 = a3[1];
      v11 = a3[2];
      v12 = &v199;
      k = (char *)v189;
      v13 = a3[3];
      v189[0] = v9;
      v189[1] = v10;
      v189[2] = v11;
      v190 = v13;
      v14 = HIWORD(v13);
      v199 = 0;
      v200 = 0;
      v201 = 0;
      v202 = 1073709056;
      if ( v13 < 0 )
      {
        v14 = HIWORD(v13) & 0x7FFF;
        HIWORD(v190) = HIWORD(v13) & 0x7FFF;
        v184 = "-";
      }
      else
      {
        v184 = &byte_8DFE8;
      }
      if ( !v14 )
      {
        if ( !v176 )
          return sub_7EBB4(a1, (int)v6, "%s0.0", v184);
        strcpy(v225, "0.0");
        if ( n )
        {
          v15 = v176;
          n = n - v176 - 3;
          v175 = 0;
          s = &v225[2];
LABEL_15:
          v16 = strlen(s);
          if ( v16 > v176 )
          {
            v17 = v176;
            v18 = &v225[v176 + 2];
            do
            {
              v19 = (unsigned __int8)*--v18;
              if ( v19 != 48 )
              {
                v15 = v176 - v17;
                v20 = v17 + 2;
                goto LABEL_21;
              }
              --v17;
            }
            while ( v17 );
            v20 = 2;
LABEL_21:
            v226[v20 - 52] = 0;
          }
          else
          {
            v15 = v176 - v16;
          }
          if ( v14 )
            --n;
          v21 = &a1[n];
          v22 = (int)&v6[-n];
          if ( n )
          {
            memset(a1, 32, n);
            a1[n] = 0;
          }
          result = sub_7EBB4(v21, v22, "%s%s", v184, v225);
          v23 = n + result;
          if ( !v15 )
            goto LABEL_29;
LABEL_27:
          if ( v15 <= (unsigned int)&v6[-v23] )
            goto LABEL_28;
          if ( v6 != (char *)v23 )
          {
            v15 = (size_t)&v6[-v23];
LABEL_28:
            v24 = &a1[v23];
            v23 += v15;
            result = (int)memset(v24, 48, v15);
            a1[v23] = 0;
          }
LABEL_29:
          if ( v175 )
            return sub_7EBB4(&a1[v23], (int)&v6[-v23], "e%d", v175);
          return result;
        }
        v175 = 0;
LABEL_163:
        result = sub_7EBB4(a1, (int)v6, "%s%s", v184, v225);
        v23 = result;
        goto LABEL_29;
      }
      v25 = sub_71DC4((int)dword_B41E0, (int)k);
      v175 = v25;
      if ( !v25 )
      {
        v185 = (unsigned __int16 *)&v219;
        goto LABEL_131;
      }
      if ( v25 >= 0 )
      {
        if ( HIWORD(v190) )
        {
          v177 = &v212;
          sub_71698((int)k, &v212);
          v178 = (int *)a1;
          v179 = v6;
          v163 = v217;
          v182 = (char *)a4;
          v183 = &v199;
          v164 = 0;
          v180 = &v205;
          v181 = &v210;
          do
          {
            if ( (v163 & 7) != 0 )
              break;
            v205 = v212;
            v206 = v213;
            v207 = v214;
            v208 = v215;
            v209 = v216;
            v210 = 0;
            sub_71168((int)&v205);
            sub_71168((int)&v205);
            v165 = &v218;
            v166 = (unsigned __int16 *)&v210;
            v167 = 0;
            do
            {
              v168 = *((unsigned __int16 *)v165 - 1);
              v165 -= 2;
              v169 = v167 + v168 + *v166;
              *v166-- = v169;
              v167 = HIWORD(v169);
            }
            while ( v166 != (unsigned __int16 *)((char *)&v205 + 2) );
            for ( HIWORD(v205) += 3; (_WORD)v206; ++HIWORD(v205) )
              sub_71168((int)&v205);
            if ( v210 )
              break;
            if ( HIWORD(v205) > 0x3FFEu )
              break;
            --v164;
            v163 = v210;
            v212 = v205;
            v213 = v206;
            v214 = v207;
            v215 = v208;
            v216 = v209;
            v217 = 0;
          }
          while ( v164 != -34 );
          v175 = v164;
          a1 = v178;
          v6 = v179;
          a4 = (int)v182;
          v12 = v183;
          sub_71668(v177, (int)k);
        }
        else
        {
          if ( (v190 & 0x8000u) == 0 )
          {
            v26 = HIWORD(v190);
            do
            {
              --v26;
              sub_71EAC((int)k, (int)dword_B40DC, k);
            }
            while ( (v190 & 0x8000u) == 0 );
            v175 = v26;
          }
          else
          {
            v175 = HIWORD(v190);
          }
          v177 = &v212;
          v180 = &v205;
          v181 = &v210;
        }
        v27 = -4096;
        v28 = *(_DWORD *)k;
        v29 = *((_DWORD *)k + 1);
        v30 = *((_DWORD *)k + 2);
        v31 = *((_DWORD *)k + 3);
        v182 = v6;
        v183 = (int *)a4;
        v32 = dword_B401C;
        v179 = a1;
        v191 = v28;
        v192 = v29;
        v193 = v30;
        v194 = v31;
        v178 = dword_B41AC;
        a4 = v175;
        *v12 = 0;
        v12[1] = 0;
        v12[2] = 0;
        v12[3] = 1073709056;
        for ( i = dword_B40EC; sub_71DC4((int)dword_B41E0, (int)&v191) > 0; i += 4 )
        {
          if ( sub_71DC4((int)i, (int)&v191) >= 0 )
          {
            a4 += v27;
            sub_71EAC((int)&v191, (int)v32, &v191);
            sub_71EAC((int)v12, (int)v32, v12);
          }
          v27 /= 2;
          if ( i == v178 )
            break;
          v32 += 4;
        }
        v175 = a4;
        a1 = v179;
        v6 = v182;
        LOBYTE(a4) = (_BYTE)v183;
        v185 = (unsigned __int16 *)&v219;
        sub_71F64((int)dword_B41E0, (int)v12, v12);
        goto LABEL_55;
      }
      v128 = 0;
      v182 = (char *)a4;
      v181 = (__int16 *)a1;
      v180 = dword_B409C;
      v129 = 16;
      v130 = *(_DWORD *)k;
      v131 = *((_DWORD *)k + 1);
      v132 = *((_DWORD *)k + 2);
      v133 = *((_DWORD *)k + 3);
      v183 = dword_B41E0;
      v177 = dword_B41BC;
      v179 = v6;
      v195 = v130;
      v196 = v131;
      v197 = v132;
      LOWORD(v198) = v133;
      v175 = 0;
      v185 = (unsigned __int16 *)&v219;
      v178 = &v195;
      HIWORD(v198) = 16494;
      break;
  }
  do
  {
    sub_71F64((int)&v195, (int)&dword_B409C[v128], &v199);
    v219 = v199;
    v220 = v200;
    v221 = v201;
    v222 = v202;
    v134 = HIWORD(v202);
    v135 = (HIWORD(v202) & 0x7FFF) - 16382;
    if ( v135 <= 0 )
    {
      v191 = 0;
      v192 = 0;
      v193 = 0;
      v194 = 0;
    }
    else
    {
      v136 = 16494 - (HIWORD(v222) & 0x7FFF);
      v191 = v219;
      v192 = v220;
      v193 = v221;
      v194 = v222;
      if ( v136 <= 0 )
        goto LABEL_175;
      if ( v136 > 15 )
      {
        v138 = 16494 - (HIWORD(v202) & 0x7FFF);
        v139 = &v191;
        do
        {
          v138 -= 16;
          *(_WORD *)v139 = 0;
          v139 = (int *)((char *)v139 + 2);
        }
        while ( v138 > 15 );
        v140 = (unsigned int)(v136 - 16) >> 4;
        v141 = v140 + 1;
        v136 = 96 - v135 - 16 * v140;
        v137 = (int *)((char *)&v191 + 2 * v141);
      }
      else
      {
        v137 = &v191;
      }
      *(_WORD *)v137 &= *((_WORD *)v177 + v136);
    }
    if ( v134 < 0 )
    {
      v151 = &v219;
      v152 = (unsigned __int16 *)&v191;
      while ( 1 )
      {
        v154 = *(unsigned __int16 *)v151;
        v151 = (int *)((char *)v151 + 2);
        v153 = v154;
        v155 = *v152++;
        if ( v153 != v155 )
          break;
        if ( (int *)((char *)&v222 + 2) == v151 )
          goto LABEL_175;
      }
      sub_71A84((int)&v191, (int)v183, &v191, 1);
    }
LABEL_175:
    if ( v199 == v191 && v200 == v192 && v201 == v193 && (unsigned __int16)v202 == (unsigned __int16)v194 )
    {
      v175 += v129;
      v195 = v199;
      v196 = v200;
      v197 = v201;
      v198 = v202;
    }
    v128 += 4;
    v129 >>= 1;
  }
  while ( v128 != 20 );
  v142 = 4096;
  v143 = k;
  HIWORD(v198) = HIWORD(v198) + HIWORD(v190) - 16494;
  v144 = dword_B401C;
  LOBYTE(a4) = (_BYTE)v182;
  v145 = *v178;
  v146 = v178[1];
  v147 = v178[2];
  v148 = v178[3];
  v177 = (int *)v179;
  v149 = v181;
  v150 = v178;
  *(_DWORD *)k = v145;
  *((_DWORD *)v143 + 1) = v146;
  *((_DWORD *)v143 + 2) = v147;
  *((_DWORD *)v143 + 3) = v148;
  v199 = 0;
  v200 = 0;
  v201 = 0;
  v202 = 1073709056;
  do
  {
    if ( sub_71DC4((int)dword_B40DC, (int)v150) > 0 )
      break;
    if ( sub_71DC4((int)v144, (int)v150) <= 0 )
    {
      v175 += v142;
      sub_71F64((int)v150, (int)v144, v150);
      sub_71EAC((int)&v199, (int)v144, &v199);
    }
    v144 += 4;
    v142 >>= 1;
  }
  while ( v144 != dword_B40EC );
  a1 = v149;
  v6 = (char *)v177;
LABEL_131:
  v177 = &v212;
  v180 = &v205;
  v181 = &v210;
LABEL_55:
  v34 = v177;
  a4 = (unsigned __int8)a4;
  if ( (unsigned __int8)a4 >= 0x21u )
    a4 = 33;
  v183 = (int *)a4;
  sub_71698((int)v12, v177);
  v35 = *v177;
  v36 = v177[1];
  v37 = v177[2];
  v38 = v177[3];
  v39 = v177 + 4;
  v177 = v203;
  v203[0] = v35;
  v203[1] = v36;
  v203[2] = v37;
  v203[3] = v38;
  v203[4] = v34[4];
  v204 = 0;
  sub_71698((int)k, v34);
  v40 = *v34;
  v41 = v34[1];
  v42 = v34[2];
  v43 = v34[3];
  v44 = v185;
  v45 = *v39;
  v46 = v185;
  *(_DWORD *)v185 = v40;
  *((_DWORD *)v46 + 1) = v41;
  *((_DWORD *)v46 + 2) = v42;
  *((_DWORD *)v46 + 3) = v43;
  *((_DWORD *)v46 + 4) = v45;
  v223 = 0;
  v47 = sub_71978((unsigned __int16 *)v203, v44);
  if ( v47 == 10 )
  {
    *(_WORD *)v225 = 11825;
    v182 = (char *)&v223;
    v179 = v224;
    ++v175;
    v178 = (int *)v211;
  }
  else
  {
    if ( v47 )
    {
      v182 = (char *)&v223;
      v179 = v224;
      v178 = (int *)v211;
    }
    else
    {
      k = a1;
      v179 = v224;
      v182 = (char *)&v223;
      v178 = (int *)v211;
      do
      {
        v48 = (__int16 *)&v219 + 1;
        v49 = 0;
        for ( j = dword_B3FF8; ; j = (int *)((char *)j + 2) )
        {
          v52 = (unsigned __int16)v48[1];
          ++v48;
          if ( v52 != v49 )
            break;
          if ( &v223 == v48 )
          {
            a1 = k;
            *(_WORD *)v225 = 11824;
            goto LABEL_65;
          }
          v51 = *((unsigned __int16 *)j + 1);
          v49 = v51;
        }
        v103 = 0;
        v104 = (unsigned __int16 *)v179;
        v105 = v185 + 2;
        do
        {
          v106 = *--v104;
          v107 = 2 * v106;
          if ( v106 < 0 )
            v103 |= 1u;
          v59 = (v103 & 2) != 0;
          v103 *= 2;
          if ( v59 )
            v107 |= 1u;
          *v104 = v107;
        }
        while ( v104 != v105 );
        v108 = 0;
        v109 = v180;
        v110 = 0;
        v111 = (int *)v181;
        v112 = *((_DWORD *)v185 + 1);
        v113 = *((_DWORD *)v185 + 2);
        v114 = *((_DWORD *)v185 + 3);
        v115 = *((_DWORD *)v185 + 4);
        *v180 = *(_DWORD *)v185;
        v109[1] = v112;
        v109[2] = v113;
        v109[3] = v114;
        v109[4] = v115;
        v210 = 0;
        while ( 1 )
        {
          v59 = v108 < 0;
          v117 = 2 * v108;
          if ( v59 )
            v110 |= 1u;
          v59 = (v110 & 2) != 0;
          v110 *= 2;
          if ( v59 )
            v117 |= 1u;
          *(_WORD *)v111 = v117;
          if ( &v206 == v111 )
            break;
          v116 = *((_WORD *)v111 - 1);
          v111 = (int *)((char *)v111 - 2);
          v108 = v116;
        }
        v118 = v178;
        v119 = 0;
        v120 = v178;
        do
        {
          v121 = *((_WORD *)v118 - 1);
          v118 = (int *)((char *)v118 - 2);
          v122 = 2 * v121;
          if ( v121 < 0 )
            v119 |= 1u;
          v59 = (v119 & 2) != 0;
          v119 *= 2;
          if ( v59 )
            v122 |= 1u;
          *(_WORD *)v118 = v122;
        }
        while ( v111 != v118 );
        v123 = 0;
        v124 = (unsigned __int16 *)&v223;
        do
        {
          v125 = *((unsigned __int16 *)v120 - 1);
          v120 = (int *)((char *)v120 - 2);
          v126 = v123 + v125 + *v124;
          *v124-- = v126;
          v123 = HIWORD(v126);
        }
        while ( v124 != (unsigned __int16 *)((char *)&v219 + 2) );
        --v175;
        v47 = sub_71978((unsigned __int16 *)v177, v185);
      }
      while ( !v47 );
      a1 = k;
    }
    v225[0] = v47 + 48;
    v225[1] = 46;
  }
LABEL_65:
  v188 = v6;
  v53 = v185;
  v187 = a1;
  v54 = 0;
  s = &v225[2];
  for ( k = &v225[2]; ; k = v80 )
  {
    v55 = (int *)v179;
    v56 = 0;
    do
    {
      v57 = *((_WORD *)v55 - 1);
      v55 = (int *)((char *)v55 - 2);
      v58 = 2 * v57;
      if ( v57 < 0 )
        v56 |= 1u;
      v59 = (v56 & 2) != 0;
      v56 *= 2;
      if ( v59 )
        v58 |= 1u;
      *(_WORD *)v55 = v58;
    }
    while ( &v220 != v55 );
    v60 = v180;
    v61 = *((_DWORD *)v53 + 1);
    v62 = *((_DWORD *)v53 + 2);
    v63 = *((_DWORD *)v53 + 3);
    v64 = 0;
    v65 = 0;
    v66 = (int *)v181;
    v67 = *((_DWORD *)v53 + 4);
    *v180 = *(_DWORD *)v53;
    v60[1] = v61;
    v60[2] = v62;
    v60[3] = v63;
    v60[4] = v67;
    v210 = 0;
    while ( 1 )
    {
      v59 = v64 < 0;
      v69 = 2 * v64;
      if ( v59 )
        v65 |= 1u;
      v59 = (v65 & 2) != 0;
      v65 *= 2;
      if ( v59 )
        v69 |= 1u;
      *(_WORD *)v66 = v69;
      if ( &v206 == v66 )
        break;
      v68 = *((_WORD *)v66 - 1);
      v66 = (int *)((char *)v66 - 2);
      v64 = v68;
    }
    v70 = v178;
    v71 = 0;
    v72 = v178;
    do
    {
      v73 = *((_WORD *)v70 - 1);
      v70 = (int *)((char *)v70 - 2);
      v74 = 2 * v73;
      if ( v73 < 0 )
        v71 |= 1u;
      v59 = (v71 & 2) != 0;
      v71 *= 2;
      if ( v59 )
        v74 |= 1u;
      *(_WORD *)v70 = v74;
    }
    while ( v66 != v70 );
    v75 = v182;
    v76 = 0;
    do
    {
      v77 = *((unsigned __int16 *)v72 - 1);
      v72 = (int *)((char *)v72 - 2);
      v78 = v76 + v77 + *(unsigned __int16 *)v75;
      *(_WORD *)v75 = v78;
      v75 -= 2;
      v76 = HIWORD(v78);
    }
    while ( v75 != (char *)&v219 + 2 );
    result = sub_71978((unsigned __int16 *)v177, v53);
    v79 = k;
    ++v54;
    *k = result + 48;
    v80 = (char *)v79 + 1;
    if ( (int)v183 < v54 )
      break;
  }
  a1 = v187;
  v6 = v188;
  v81 = (unsigned __int8)*(v80 - 2);
  if ( result > 4 )
  {
    if ( result == 5 )
    {
      result = 0;
      for ( m = dword_B3FF8; ; m = (int *)((char *)m + 2) )
      {
        v158 = *((unsigned __int16 *)v75 + 1);
        v75 += 2;
        if ( v158 != result )
          break;
        if ( v182 == v75 )
        {
          if ( (v81 & 1) == 0 )
            goto LABEL_99;
          break;
        }
        v157 = *((unsigned __int16 *)m + 1);
        result = v157;
      }
    }
    v82 = v81 & 0x7F;
    v83 = v80 - 2;
    if ( v82 == 46 )
    {
LABEL_96:
      v87 = (unsigned __int8)*(v83 - 1) + 1;
      v59 = (unsigned __int8)*(v83 - 1) - 56 < 0;
      *(v83 - 1) = v87;
      if ( !(v59 ^ __OFSUB__(v87, 57) | (v87 == 57)) )
      {
        v88 = v175;
        *(v83 - 1) = 49;
        result = v88 + 1;
        v175 = result;
      }
LABEL_98:
      v81 = (unsigned __int8)*(v80 - 2);
    }
    else
    {
      result = v82 + 1;
      v81 = (unsigned __int8)(v82 + 1);
      *(v80 - 2) = v81;
      if ( result > 57 )
      {
        result = 48;
        while ( 1 )
        {
          *v83 = 48;
          v85 = *--v83;
          v86 = v85 & 0x7F;
          if ( v86 == 46 )
            goto LABEL_96;
          v84 = v86 + 1;
          *v83 = v84;
          if ( v84 <= 57 )
            goto LABEL_98;
        }
      }
    }
  }
LABEL_99:
  if ( v81 == 48 )
  {
    v89 = v80 - 2;
    do
    {
      v90 = v89;
      v91 = (unsigned __int8)*--v89;
      v81 = v91;
    }
    while ( v91 == 48 );
    k = v90;
  }
  if ( v81 == 46 )
  {
    v92 = k;
    *k = 48;
    k = (char *)v92 + 1;
  }
  *k = 0;
  if ( !n )
    goto LABEL_163;
  v15 = v176;
  v93 = v175;
  if ( v175 < 0 )
    v93 = -v175;
  if ( !v176 )
  {
    if ( !v175 )
      return sub_7EBB4(a1, (int)v6, "%s%s", v184, v225);
    if ( n >= v93 )
    {
      v15 = v176;
      goto LABEL_113;
    }
    goto LABEL_163;
  }
  v94 = v176;
  if ( v175 >= 0 )
    v94 = v176 + 1;
  n = n - 2 - v94;
  if ( !v175 )
  {
    v14 = 0;
    goto LABEL_15;
  }
  if ( n < v93 )
  {
    v14 = (unsigned int)v175 >> 31;
    if ( !n )
      v14 = 0;
    goto LABEL_15;
  }
LABEL_113:
  if ( v225[2] != 48 || v225[3] )
  {
    v127 = strlen(s);
    result = _memmove_chk(&v225[1], s, v127 + 1, 47);
  }
  else
  {
    v225[1] = 0;
  }
  if ( !v176 )
  {
    v95 = 0;
    v96 = a1;
    goto LABEL_193;
  }
  if ( v175 <= 0 )
  {
    v95 = n - 1;
    if ( n != 1 )
      goto LABEL_232;
    v96 = a1;
    goto LABEL_204;
  }
  v95 = n - v93;
  if ( n == v93 )
  {
    v96 = a1;
    v97 = strlen(v225);
    v98 = (int)v6;
    if ( v97 > v93 )
      goto LABEL_120;
LABEL_216:
    v100 = sub_7EBB4(v96, v98, "%s%.*s", v184, v97, v225) + v95;
    if ( !v176 && !v225[v97] )
      goto LABEL_218;
    goto LABEL_230;
  }
LABEL_232:
  v96 = &a1[v95];
  result = (int)memset(a1, 32, v95);
  a1[v95] = 0;
LABEL_193:
  if ( v175 <= 0 )
  {
LABEL_204:
    v159 = &a1[v95 + 1];
    if ( *v184 )
    {
      result = v95 + 2;
      *v96 = *v184;
      ++v95;
      v96 = v159;
      v159 = &a1[result];
    }
    *v96 = 48;
    v23 = v95 + 2;
    *v159 = 46;
    v160 = (int)v176 <= 0;
    if ( v176 )
      v160 = (int)v93 <= (int)v176;
    if ( !v160 )
      goto LABEL_128;
    v161 = v93 - 1;
    v102 = &a1[v23];
    if ( v161 )
    {
      memset(&a1[v23], 48, v161);
      v23 += v161;
      v102 = &a1[v23];
      if ( !v176 )
        goto LABEL_235;
      v15 = v176 - v161;
    }
    if ( v176 )
    {
      v162 = strlen(v225);
      if ( v15 < v162 )
      {
        v162 = v15;
        v225[v15] = 0;
      }
      v15 -= v162;
      v101 = v225;
      goto LABEL_127;
    }
LABEL_235:
    v101 = v225;
    goto LABEL_127;
  }
  k = &v6[-v95];
  v97 = strlen(v225);
  v98 = (int)&v6[-v95];
  if ( v97 <= v93 )
    goto LABEL_216;
  if ( v176 )
  {
LABEL_120:
    v99 = ~v93 + v97;
    if ( v176 < v99 )
    {
      v99 = v176;
      v226[v93 - 51 + v176] = 0;
    }
    v15 = v176 - v99;
  }
  v97 = v93 + 1;
  v100 = sub_7EBB4(v96, v98, "%s%.*s", v184, v93 + 1, v225) + v95;
  if ( !v176 && !v225[v97] )
LABEL_218:
    ++v15;
  if ( v97 <= v93 )
  {
LABEL_230:
    v170 = &a1[v100];
    v171 = v93 + 1 - v97;
    v100 += v171;
    memset(v170, 48, v171);
  }
  v23 = v100 + 1;
  v101 = &v225[v97];
  v102 = &a1[v100 + 1];
  a1[v100] = 46;
LABEL_127:
  result = sub_7EBB4(v102, (int)&v6[-v23], "%s", v101);
  v23 += result;
LABEL_128:
  if ( v15 )
  {
    v175 = 0;
    goto LABEL_27;
  }
  return result;
}
// 14790: using guessed type int __fastcall _memmove_chk(_DWORD, _DWORD, _DWORD, _DWORD);
// 8DFE8: using guessed type char byte_8DFE8;
// B3FF8: using guessed type int dword_B3FF8[5];
// B401C: using guessed type int dword_B401C[29];
// B409C: using guessed type int dword_B409C[2];
// B40DC: using guessed type int dword_B40DC[3];
// B40EC: using guessed type int dword_B40EC[48];
// B41AC: using guessed type int dword_B41AC[4];
// B41BC: using guessed type int dword_B41BC[9];
// B41E0: using guessed type int dword_B41E0[3];
// B4200: using guessed type int dword_B4200;
// D6C20: using guessed type char under_debugger;
