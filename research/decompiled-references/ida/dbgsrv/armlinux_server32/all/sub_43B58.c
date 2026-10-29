/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43B58
// Address: 0x00043B58

//----- (00043B58) --------------------------------------------------------
int __fastcall sub_43B58(int a1, unsigned __int8 *a2, char *a3, int a4)
{
  unsigned int v6; // r9
  char *v7; // r6
  pthread_mutex_t *v8; // r10
  unsigned int v9; // r0
  _DWORD *v10; // r3
  int v11; // r6
  __int64 v12; // kr00_8
  int v13; // r10
  int v14; // r2
  int v15; // r1
  const char *v16; // r1
  int v17; // r3
  _BYTE *v18; // r0
  int v19; // r3
  char *v20; // r3
  _DWORD *v21; // r0
  int v22; // r6
  int v23; // r3
  bool v24; // zf
  int v25; // r3
  _UNKNOWN **v26; // r11
  _UNKNOWN **v27; // r3
  signed int v28; // r0
  __int64 v29; // kr10_8
  int v30; // r3
  unsigned __int8 *v31; // r10
  unsigned __int8 *v32; // r6
  int v33; // r3
  int j; // r11
  int v35; // r2
  int v36; // r0
  int v37; // r0
  int v39; // r0
  pthread_mutex_t *v40; // r11
  int v41; // r3
  int v42; // r3
  unsigned int v43; // r2
  void *v44; // r0
  int v45; // r1
  int v46; // r2
  char *v47; // r1
  int v48; // r3
  int v49; // r11
  int v50; // r3
  unsigned __int8 *v51; // r6
  int v52; // r3
  int v53; // r3
  int v54; // r3
  int v55; // r3
  _BYTE *v56; // r0
  int v57; // r3
  char *v58; // r3
  int v59; // r3
  unsigned __int8 *v60; // r3
  int v61; // r6
  unsigned int v62; // r6
  unsigned __int8 *v63; // r3
  unsigned __int8 *v64; // r10
  _DWORD *v65; // r0
  _DWORD *v66; // r0
  unsigned int v67; // r1
  int v68; // r6
  unsigned __int8 *v69; // r3
  int v70; // r0
  signed int v71; // r6
  void *v72; // r0
  __int64 v73; // r10
  int v74; // r0
  int v75; // r3
  int v76; // r6
  unsigned int v77; // r2
  int v78; // r0
  int v79; // r3
  int v80; // r0
  int v81; // r3
  int v82; // r1
  unsigned __int8 *v83; // r0
  int v84; // r2
  int v85; // r6
  int v86; // r1
  int v87; // r0
  int v88; // r3
  int v89; // r0
  int v90; // r3
  unsigned __int8 *v91; // r0
  int v92; // r0
  int v93; // r3
  int v94; // r0
  int v95; // r3
  int v96; // r0
  int v97; // r3
  unsigned __int8 *v98; // r0
  int v99; // r0
  int v100; // r3
  int v101; // r0
  int v102; // r3
  int v103; // r0
  int v104; // r3
  int v105; // r0
  int v106; // r3
  unsigned __int8 *v107; // r0
  int v108; // r0
  int v109; // r3
  __int16 v110; // r0
  int v111; // r3
  int v112; // r0
  int v113; // r3
  int v114; // r0
  int v115; // r3
  int v116; // r0
  int v117; // r3
  int v118; // r0
  int v119; // r3
  int v120; // r0
  int v121; // r3
  int v122; // r0
  int v123; // r3
  int v124; // r0
  int v125; // r3
  int v126; // r3
  int v127; // r0
  int v128; // r3
  __int64 v129; // r0
  int v130; // r5
  int v131; // r3
  unsigned int v132; // r1
  int v133; // r6
  unsigned int v134; // r0
  unsigned __int8 *v135; // r0
  int v136; // r6
  unsigned int v137; // r0
  int v138; // r6
  unsigned int v139; // r0
  unsigned __int8 *v140; // r0
  int v141; // r6
  unsigned int v142; // r0
  int v143; // r0
  int v144; // r3
  int v145; // r0
  int v146; // r3
  int v147; // r0
  int v148; // r3
  int v149; // r0
  int v150; // r3
  int v151; // r0
  int v152; // r3
  int v153; // r0
  int v154; // r3
  _DWORD *v155; // r0
  int v156; // r1
  int v157; // r0
  int v158; // r3
  int v159; // r1
  _DWORD *v160; // r0
  int v161; // r0
  int v162; // r0
  int v163; // r0
  int v164; // r0
  int v165; // r0
  int v166; // r0
  int v167; // r0
  int v168; // r0
  pthread_mutex_t *v169; // r10
  int (__fastcall ***v170)(_DWORD, char *); // r0
  int v171; // r0
  int v172; // r2
  int v173; // r6
  int v174; // r3
  int v175; // r3
  const char *v176; // r1
  unsigned __int8 *v177; // r0
  int v178; // lr
  int v179; // r12
  int v180; // r3
  int v181; // r3
  _BYTE *v182; // r0
  int v183; // r3
  char *v184; // r3
  int v185; // r3
  unsigned __int8 *v186; // r6
  int v187; // r6
  int v188; // r6
  _DWORD *i; // r6
  unsigned int v190; // r1
  int v191; // r0
  __int64 v192; // r0
  void *v193; // r0
  int v194; // [sp+0h] [bp-8Ch]
  int v195; // [sp+8h] [bp-84h]
  int v197; // [sp+14h] [bp-78h]
  int v198; // [sp+18h] [bp-74h]
  signed int v199; // [sp+1Ch] [bp-70h]
  int v200; // [sp+20h] [bp-6Ch]
  int v201; // [sp+20h] [bp-6Ch]
  int v202; // [sp+24h] [bp-68h]
  unsigned __int8 v203; // [sp+2Bh] [bp-61h] BYREF
  unsigned __int8 *v204; // [sp+2Ch] [bp-60h] BYREF
  unsigned int v205[2]; // [sp+30h] [bp-5Ch] BYREF
  int v206; // [sp+38h] [bp-54h]
  unsigned int v207; // [sp+3Ch] [bp-50h]
  unsigned __int8 v208[8]; // [sp+40h] [bp-4Ch] BYREF
  __int64 v209; // [sp+48h] [bp-44h] BYREF
  int v210; // [sp+50h] [bp-3Ch]
  int v211; // [sp+54h] [bp-38h]
  unsigned __int8 v212[8]; // [sp+58h] [bp-34h] BYREF
  int v213; // [sp+60h] [bp-2Ch]
  int v214; // [sp+64h] [bp-28h]
  int v215; // [sp+68h] [bp-24h]
  int v216; // [sp+6Ch] [bp-20h]
  _BYTE v217[20]; // [sp+70h] [bp-1Ch] BYREF

  v6 = *(_DWORD *)(a1 + 28);
  LODWORD(v209) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  HIDWORD(v209) = 0;
  v210 = 0;
  v211 = 0;
  v208[0] = 2;
  if ( !a3
    || (v7 = a3,
        v8 = (pthread_mutex_t *)dword_D4AB0,
        sub_7A268((pthread_mutex_t *)dword_D4AB0),
        a4 = sub_3F524(*(_DWORD **)(a1 + 4), v7),
        sub_7A290(v8),
        a4 != 0x7FFFFFFF) )
  {
    *(_DWORD *)(a1 + 64) = a4;
    v195 = 0;
    goto LABEL_4;
  }
  v195 = 0;
LABEL_53:
  sub_70B98(88);
LABEL_17:
  v16 = v7;
LABEL_18:
  sub_70C04(0, v16);
LABEL_19:
  if ( sub_70B7C() != 90 )
    sub_49218(v208);
  v17 = *(_DWORD *)(a1 + 16);
  v18 = *(_BYTE **)(a1 + 12);
  if ( (unsigned int)(v17 + 1) > *(_DWORD *)(a1 + 20) )
  {
    v18 = sub_78018(a1 + 12, *(void **)(a1 + 12), v17 + 1, 0x18u);
    v17 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 12) = v18;
  }
  v19 = 24 * v17;
  v18[v19] = 2;
  v20 = &v18[v19];
  *((_DWORD *)v20 + 3) = 0;
  *((_DWORD *)v20 + 4) = 0;
  *((_DWORD *)v20 + 5) = 0;
  *((_DWORD *)v20 + 2) = 0;
  ++*(_DWORD *)(a1 + 16);
  sub_46354((unsigned __int8 *)v20, v208);
LABEL_24:
  v204 = (unsigned __int8 *)(24 * *(_DWORD *)(a1 + 16) - 24 + *(_DWORD *)(a1 + 12));
  sub_49008(a1, v204);
LABEL_25:
  v21 = *(_DWORD **)(a1 + 68);
  if ( !v21 )
  {
LABEL_73:
    v22 = 0;
    goto LABEL_74;
  }
  while ( 1 )
  {
    v22 = sub_3EA00(v21, *(_DWORD *)(a1 + 60) - 1, v205);
    if ( v22 )
    {
      v23 = v206;
      v24 = v206 == 2;
      *(_DWORD *)(a1 + 60) = v205[1];
      if ( v24 )
      {
        v177 = (unsigned __int8 *)sub_429FC((_DWORD *)a1, v207);
      }
      else if ( v23 == 3 )
      {
        v177 = (unsigned __int8 *)sub_42A34(*(_DWORD *)(a1 + 4), v207);
      }
      else
      {
        if ( v23 != 1 )
        {
          if ( !under_debugger )
            sub_78C64(300);
          goto LABEL_35;
        }
        v177 = (unsigned __int8 *)sub_429C4((_DWORD *)a1, v207);
      }
      v204 = v177;
      sub_46450((int *)(a1 + 12), v177);
      while ( 2 )
      {
        if ( !*(_BYTE *)(a1 + 76)
          && (unsigned __int8)((int (__fastcall *)(unsigned int, char *, int, int, int))callui)(
                                0x1Bu,
                                v47,
                                v46,
                                (int)callui,
                                v194) )
        {
          sub_70B98(1487);
          goto LABEL_19;
        }
        v49 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
        v46 = *(_DWORD *)(a1 + 4);
        ++*(_DWORD *)(a1 + 60);
        v50 = *(unsigned __int8 *)(v46 + 72);
        if ( !*(_BYTE *)(v46 + 72) )
        {
          v47 = (char *)++v195;
          if ( v195 > 100 )
          {
            v46 = *(_DWORD *)(v46 + 64) + 1;
            if ( v46 )
            {
              if ( !sub_7A104() )
              {
                v195 = 0;
                goto LABEL_88;
              }
              v185 = time(nullptr) - *(_DWORD *)(*(_DWORD *)(a1 + 4) + 64);
              if ( v185 > 2 )
              {
                sub_425DC((int)"Running IDC script", (int)v47, v46, v185);
                v46 = 1;
                v47 = nullptr;
                v195 = 0;
                *(_BYTE *)(*(_DWORD *)(a1 + 4) + 72) = 1;
                goto LABEL_88;
              }
              v50 = 0;
            }
            v195 = v50;
          }
        }
LABEL_88:
        v9 = v49;
        switch ( v49 )
        {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
          case 11:
          case 12:
          case 13:
          case 14:
          case 15:
            *(_DWORD *)(a1 + 64) = v49;
            goto LABEL_37;
          case 16:
          case 17:
          case 18:
          case 19:
          case 20:
          case 21:
          case 22:
          case 23:
          case 24:
          case 25:
          case 26:
          case 27:
          case 28:
          case 29:
          case 30:
          case 31:
            a4 = v49 - 16;
            *(_DWORD *)(a1 + 64) = a4;
            goto LABEL_4;
          case 32:
          case 33:
          case 34:
          case 35:
          case 36:
          case 37:
          case 38:
          case 39:
          case 40:
          case 41:
          case 42:
          case 43:
          case 44:
          case 45:
          case 46:
          case 47:
            *(_DWORD *)(a1 + 64) = v49 - 32;
            goto LABEL_207;
          case 48:
          case 49:
          case 50:
          case 51:
          case 52:
          case 53:
          case 54:
          case 55:
          case 56:
          case 57:
          case 58:
          case 59:
          case 60:
          case 61:
          case 62:
          case 63:
            *(_DWORD *)(a1 + 64) = v49 - 48;
            goto LABEL_198;
          case 64:
          case 65:
          case 66:
          case 67:
          case 68:
          case 69:
          case 70:
          case 71:
          case 72:
          case 73:
          case 74:
          case 75:
          case 76:
          case 77:
          case 78:
          case 79:
            *(_DWORD *)(a1 + 64) = v49 - 64;
            goto LABEL_195;
          case 80:
          case 81:
          case 82:
          case 83:
          case 84:
          case 85:
          case 86:
          case 87:
          case 88:
          case 89:
          case 90:
          case 91:
          case 92:
          case 93:
          case 94:
          case 95:
            *(_DWORD *)(a1 + 64) = v49 - 80;
            goto LABEL_190;
          case 96:
          case 97:
          case 98:
          case 99:
          case 100:
          case 101:
          case 102:
          case 103:
          case 104:
          case 105:
          case 106:
          case 107:
          case 108:
          case 109:
          case 110:
          case 111:
            *(_DWORD *)(a1 + 64) = v49 - 96;
            goto LABEL_187;
          case 112:
          case 113:
          case 114:
          case 115:
          case 116:
          case 117:
          case 118:
          case 119:
          case 120:
          case 121:
          case 122:
          case 123:
          case 124:
          case 125:
          case 126:
          case 127:
            *(_DWORD *)(a1 + 64) = v49 - 112;
            goto LABEL_184;
          case 128:
            v9 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v126 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v9;
            *(_DWORD *)(a1 + 60) = v126 + 1;
            goto LABEL_37;
          case 129:
            v9 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v25 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v9;
            *(_DWORD *)(a1 + 60) = v25 + 2;
            goto LABEL_37;
          case 130:
            v124 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v125 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v124;
            *(_DWORD *)(a1 + 60) = v125 + 1;
            goto LABEL_210;
          case 131:
            v122 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v123 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v122;
            *(_DWORD *)(a1 + 60) = v123 + 2;
LABEL_210:
            a4 = *(_DWORD *)(a1 + 64);
            goto LABEL_6;
          case 132:
            v120 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v121 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v120;
            *(_DWORD *)(a1 + 60) = v121 + 1;
            goto LABEL_207;
          case 133:
            v118 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v119 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v118;
            *(_DWORD *)(a1 + 60) = v119 + 2;
LABEL_207:
            v107 = (unsigned __int8 *)sub_429C4((_DWORD *)a1, *(_DWORD *)(a1 + 64));
            goto LABEL_199;
          case 134:
            v116 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v117 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v116;
            *(_DWORD *)(a1 + 60) = v117 + 1;
            goto LABEL_198;
          case 135:
            v105 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v106 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v105;
            *(_DWORD *)(a1 + 60) = v106 + 2;
LABEL_198:
            v107 = (unsigned __int8 *)sub_429FC((_DWORD *)a1, *(_DWORD *)(a1 + 64));
            goto LABEL_199;
          case 136:
            v103 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v104 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v103;
            *(_DWORD *)(a1 + 60) = v104 + 1;
            goto LABEL_195;
          case 137:
            v101 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v102 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v101;
            *(_DWORD *)(a1 + 60) = v102 + 2;
LABEL_195:
            v98 = (unsigned __int8 *)sub_429C4((_DWORD *)a1, *(_DWORD *)(a1 + 64));
            goto LABEL_191;
          case 138:
            v99 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v100 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v99;
            *(_DWORD *)(a1 + 60) = v100 + 1;
            goto LABEL_190;
          case 139:
            v96 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v97 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v96;
            *(_DWORD *)(a1 + 60) = v97 + 2;
LABEL_190:
            v98 = (unsigned __int8 *)sub_429FC((_DWORD *)a1, *(_DWORD *)(a1 + 64));
            goto LABEL_191;
          case 140:
            v94 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v95 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v94;
            *(_DWORD *)(a1 + 60) = v95 + 1;
            goto LABEL_187;
          case 141:
            v92 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v93 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v92;
            *(_DWORD *)(a1 + 60) = v93 + 2;
LABEL_187:
            v91 = (unsigned __int8 *)sub_429C4((_DWORD *)a1, *(_DWORD *)(a1 + 64));
            goto LABEL_185;
          case 142:
            v89 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v90 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v89;
            *(_DWORD *)(a1 + 60) = v90 + 1;
            goto LABEL_184;
          case 143:
            v114 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v115 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v114;
            *(_DWORD *)(a1 + 60) = v115 + 2;
LABEL_184:
            v91 = (unsigned __int8 *)sub_429FC((_DWORD *)a1, *(_DWORD *)(a1 + 64));
            goto LABEL_185;
          case 160:
            v112 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v113 = *(_DWORD *)(a1 + 60);
            LODWORD(v209) = v112;
            *(_DWORD *)(a1 + 60) = v113 + 1;
            goto LABEL_173;
          case 161:
            v110 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v111 = *(_DWORD *)(a1 + 60);
            LODWORD(v209) = v110;
            *(_DWORD *)(a1 + 60) = v111 + 2;
            goto LABEL_173;
          case 162:
            v108 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v109 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v108;
            *(_DWORD *)(a1 + 60) = v109 + 1;
            goto LABEL_182;
          case 163:
            v87 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v88 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v87;
            *(_DWORD *)(a1 + 60) = v88 + 2;
LABEL_182:
            sub_47480(a1, *(_DWORD *)(a1 + 64));
            continue;
          case 164:
            v83 = (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 24 * *(_DWORD *)(a1 + 16) - 24);
            v204 = v83;
            if ( *v83 == 10 && !sub_45BF0(v83, 2) )
              goto LABEL_19;
            v69 = v204;
            v84 = *v204;
            if ( v84 != 2 && v84 != 9 || *((_DWORD *)v204 + 2) == -1 || dword_D3D14 <= 0 )
              goto LABEL_155;
            sub_47088(a1, v208);
            v85 = 24 * *(_DWORD *)(*(_DWORD *)(a1 + 36) + 4 * (*(_DWORD *)(a1 + 40) + 0x3FFFFFFF));
            sub_461E4(a1 + 12, *(_DWORD *)(a1 + 12) + v85, v208);
            v86 = *(_DWORD *)(a1 + 12);
            v212[0] = 2;
            v214 = 0;
            v213 = 0;
            v215 = 0;
            v216 = 0;
            sub_4629C(a1 + 12, v86 + v85 + 24, v212);
            sub_45758(v212);
            a4 = -dword_D3D14;
            *(_DWORD *)(a1 + 64) = -dword_D3D14;
            goto LABEL_4;
          case 165:
            v80 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v81 = *(_DWORD *)(a1 + 60);
            v82 = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 64) = v80;
            *(_DWORD *)(a1 + 60) = v81 + 2;
            v208[0] = 2;
            LODWORD(v209) = 0;
            sub_46010(a1 + 12, v82 + v80, v208);
            continue;
          case 166:
            continue;
          case 167:
            v78 = sub_3E7EC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v79 = *(_DWORD *)(a1 + 60);
            LODWORD(v209) = v78;
            *(_DWORD *)(a1 + 60) = v79 + 4;
            goto LABEL_173;
          case 168:
            v70 = sub_3E7EC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            HIDWORD(v73) = v70 + 1;
            v71 = v70;
            *(_DWORD *)(a1 + 60) += 4;
            v72 = sub_77EFC(v70 + 1);
            LODWORD(v73) = v72;
            if ( !v72 )
              goto LABEL_19;
            sub_3E778(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60), v72, v71);
            *(_DWORD *)(a1 + 60) += v71;
            *(_BYTE *)(v73 + v71) = 0;
            v209 = v73;
            v210 = HIDWORD(v73);
            v208[0] = 7;
            sub_46404((_DWORD *)a1, v208);
            continue;
          case 169:
            goto LABEL_111;
          case 170:
          case 212:
            v47 = *(char **)(a1 + 44);
            v75 = *(_DWORD *)(a1 + 40);
            v76 = *(_DWORD *)(a1 + 16);
            v77 = v75 + 1;
            if ( v49 == 212 )
              --v76;
            if ( v77 > (unsigned int)v47 )
            {
              v193 = sub_78018(a1 + 36, *(void **)(a1 + 36), v77, 4u);
              v75 = *(_DWORD *)(a1 + 40);
              *(_DWORD *)(a1 + 36) = v193;
            }
            v46 = *(_DWORD *)(a1 + 36);
            *(_DWORD *)(v46 + 4 * v75) = v76;
            ++*(_DWORD *)(a1 + 40);
            continue;
          case 171:
            v74 = sub_3E7EC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            *(_DWORD *)(a1 + 60) += 4;
            sub_3EEAC(a1, v74);
            continue;
          case 172:
          case 173:
            v171 = sub_3E7EC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v172 = *(_DWORD *)(a1 + 12);
            v173 = v171;
            v174 = 24 * *(_DWORD *)(a1 + 16) - 24;
            *(_DWORD *)(a1 + 60) += 4;
            v204 = (unsigned __int8 *)(v174 + v172);
            if ( !sub_46A30(v174 + v172) )
              goto LABEL_19;
            v175 = *((_DWORD *)v204 + 2);
            if ( v49 == 173 )
            {
              v175 = v175 == 0;
              *((_DWORD *)v204 + 2) = v175;
            }
            if ( v175 )
              sub_3EEAC(a1, v173);
            goto LABEL_111;
          case 174:
            v204 = (unsigned __int8 *)(24 * *(_DWORD *)(a1 + 16) - 24 + *(_DWORD *)(a1 + 12));
            if ( sub_45E50((int)v204) )
              goto LABEL_19;
            if ( *((_DWORD *)v204 + 3) )
              v7 = *((char **)v204 + 2);
            else
              v7 = (char *)&dword_8DB98;
            v169 = (pthread_mutex_t *)dword_D4AB0;
            sub_7A268((pthread_mutex_t *)dword_D4AB0);
            *(_DWORD *)(a1 + 64) = sub_3F524(*(_DWORD **)(a1 + 4), v7);
            sub_7A290(v169);
            if ( *(_DWORD *)(a1 + 64) == 0x7FFFFFFF )
            {
              v170 = *(int (__fastcall ****)(_DWORD, char *))(a1 + 72);
              if ( !v170 )
                goto LABEL_53;
              LODWORD(v209) = (**v170)(v170, v7);
              if ( (_DWORD)v209 == -1 )
                goto LABEL_53;
              sub_45B30(v204, v208);
            }
            else
            {
              sub_45758(v204);
              *v204 = 6;
              v46 = *(_DWORD *)(a1 + 64);
              *((_DWORD *)v204 + 2) = v46;
            }
            continue;
          case 175:
            v22 = sub_47628(a1);
            if ( !v22 )
              goto LABEL_19;
            if ( v6 < *(_DWORD *)(a1 + 28) )
              continue;
            if ( !a2 )
            {
              sub_46A8C(a1);
              goto LABEL_74;
            }
            if ( sub_46450((int *)(a1 + 12), a2) )
              goto LABEL_74;
            goto LABEL_19;
          case 176:
          case 177:
          case 178:
          case 179:
          case 180:
          case 181:
          case 182:
          case 183:
          case 184:
          case 185:
          case 186:
          case 187:
          case 188:
          case 189:
          case 190:
          case 191:
          case 200:
          case 201:
          case 202:
          case 203:
          case 204:
          case 205:
          case 206:
          case 208:
          case 209:
            if ( !sub_47900((int *)(a1 + 12), v49) )
              continue;
            goto LABEL_19;
          case 192:
            v168 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            ++*(_DWORD *)(a1 + 60);
            v140 = (unsigned __int8 *)sub_429C4((_DWORD *)a1, v168);
            goto LABEL_232;
          case 193:
            v167 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            *(_DWORD *)(a1 + 60) += 2;
            v140 = (unsigned __int8 *)sub_429C4((_DWORD *)a1, v167);
            goto LABEL_232;
          case 194:
            v166 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            ++*(_DWORD *)(a1 + 60);
            v140 = (unsigned __int8 *)sub_429FC((_DWORD *)a1, v166);
            goto LABEL_232;
          case 195:
            v165 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            *(_DWORD *)(a1 + 60) += 2;
            v140 = (unsigned __int8 *)sub_429FC((_DWORD *)a1, v165);
            goto LABEL_232;
          case 196:
            v164 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            ++*(_DWORD *)(a1 + 60);
            v135 = (unsigned __int8 *)sub_429C4((_DWORD *)a1, v164);
            goto LABEL_228;
          case 197:
            v163 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            *(_DWORD *)(a1 + 60) += 2;
            v135 = (unsigned __int8 *)sub_429C4((_DWORD *)a1, v163);
            goto LABEL_228;
          case 198:
            v162 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            ++*(_DWORD *)(a1 + 60);
            v135 = (unsigned __int8 *)sub_429FC((_DWORD *)a1, v162);
            goto LABEL_228;
          case 199:
            v161 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            *(_DWORD *)(a1 + 60) += 2;
            v135 = (unsigned __int8 *)sub_429FC((_DWORD *)a1, v161);
            goto LABEL_228;
          case 210:
            v159 = *(_DWORD *)(a1 + 60);
            v160 = *(_DWORD **)(a1 + 68);
            v208[0] = 3;
            sub_3E778(v160, v159, &v209, 16);
            *(_DWORD *)(a1 + 60) += 16;
            sub_46150(a1 + 12, v208);
            continue;
          case 211:
            v155 = *(_DWORD **)(a1 + 68);
            v156 = *(_DWORD *)(a1 + 60);
            if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 8) == 4 )
            {
              v192 = sub_3E838(v155, v156);
              v158 = *(_DWORD *)(a1 + 60);
              v209 = v192;
              v208[0] = 9;
            }
            else
            {
              v157 = sub_3E838(v155, v156);
              v158 = *(_DWORD *)(a1 + 60);
              LODWORD(v209) = v157;
              v208[0] = 2;
            }
            *(_DWORD *)(a1 + 60) = v158 + 8;
            sub_46150(a1 + 12, v208);
            continue;
          case 213:
            v153 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v154 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v153;
            *(_DWORD *)(a1 + 60) = v154 + 1;
            goto LABEL_242;
          case 214:
            v151 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v152 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v151;
            *(_DWORD *)(a1 + 60) = v152 + 2;
LABEL_242:
            v91 = (unsigned __int8 *)sub_42A34(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 64));
LABEL_185:
            sub_45B30(v208, v91);
            goto LABEL_122;
          case 215:
            v149 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v150 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v149;
            *(_DWORD *)(a1 + 60) = v150 + 1;
            goto LABEL_239;
          case 216:
            v147 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v148 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v147;
            *(_DWORD *)(a1 + 60) = v148 + 2;
LABEL_239:
            v107 = (unsigned __int8 *)sub_42A34(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 64));
LABEL_199:
            if ( sub_46450((int *)(a1 + 12), v107) )
              continue;
            goto LABEL_19;
          case 217:
            v145 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v146 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v145;
            *(_DWORD *)(a1 + 60) = v146 + 1;
            goto LABEL_236;
          case 218:
            v143 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v144 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v143;
            *(_DWORD *)(a1 + 60) = v144 + 2;
LABEL_236:
            v98 = (unsigned __int8 *)sub_42A34(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 64));
LABEL_191:
            if ( !sub_45B30(v98, (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 24 * *(_DWORD *)(a1 + 16) - 24)) )
              continue;
            goto LABEL_19;
          case 219:
            v141 = *(_DWORD *)(a1 + 4);
            v142 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            ++*(_DWORD *)(a1 + 60);
            v140 = (unsigned __int8 *)sub_42A34(v141, v142);
            goto LABEL_232;
          case 220:
            v138 = *(_DWORD *)(a1 + 4);
            v139 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            *(_DWORD *)(a1 + 60) += 2;
            v140 = (unsigned __int8 *)sub_42A34(v138, v139);
LABEL_232:
            v204 = v140;
            if ( sub_45E60(v140, 1u) )
              continue;
            goto LABEL_19;
          case 221:
            v136 = *(_DWORD *)(a1 + 4);
            v137 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            ++*(_DWORD *)(a1 + 60);
            v135 = (unsigned __int8 *)sub_42A34(v136, v137);
            goto LABEL_228;
          case 222:
            v133 = *(_DWORD *)(a1 + 4);
            v134 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            *(_DWORD *)(a1 + 60) += 2;
            v135 = (unsigned __int8 *)sub_42A34(v133, v134);
LABEL_228:
            v204 = v135;
            if ( sub_45E60(v135, 0xFFFFFFFF) )
              continue;
            goto LABEL_19;
          case 223:
            sub_70B98(90);
            goto LABEL_24;
          case 224:
          case 225:
          case 226:
          case 227:
          case 228:
          case 229:
          case 230:
          case 231:
          case 232:
          case 233:
          case 234:
          case 235:
          case 236:
          case 237:
          case 238:
          case 239:
            LODWORD(v209) = v49 - 224;
LABEL_173:
            v208[0] = 2;
            sub_46150(a1 + 12, v208);
            continue;
          case 240:
            v127 = sub_3E7AC(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
            v128 = *(_DWORD *)(a1 + 60);
            *(_DWORD *)(a1 + 64) = v127;
            v208[0] = 5;
            *(_DWORD *)(a1 + 60) = v128 + 2;
            LODWORD(v129) = sub_808A4(0x20u);
            HIDWORD(v129) = *(_DWORD *)(a1 + 64);
            v130 = v129;
            sub_3FD1C(v129);
            v131 = *(_DWORD *)(v130 + 28);
            v132 = *(_DWORD *)(a1 + 64);
            LODWORD(v209) = v130;
            if ( v132 != v131 )
            {
              sub_70BC0(0, v132);
              sub_70B98(1535);
              goto LABEL_19;
            }
            for ( i = (_DWORD *)sub_3F378(v132); ; i = (_DWORD *)sub_3F324(*(_DWORD *)(a1 + 4), v190) )
            {
              v191 = sub_42928(i, (int)(i + 8));
              *(_DWORD *)(a1 + 64) = v191;
              if ( v191 != -1 )
                break;
              v190 = i[6];
              if ( !v190 )
                break;
            }
            goto LABEL_289;
          case 241:
            v204 = (unsigned __int8 *)(24 * *(_DWORD *)(a1 + 16) - 24 + *(_DWORD *)(a1 + 12));
            if ( !sub_46C68((int)v204, (int)v204) )
              continue;
            goto LABEL_19;
          case 242:
            v204 = v208;
            if ( sub_4A560(a1, &v204) )
              goto LABEL_143;
            goto LABEL_25;
          case 243:
            if ( sub_49378((_DWORD *)a1) )
              continue;
            goto LABEL_25;
          case 244:
            if ( sub_49378((_DWORD *)a1) )
              goto LABEL_111;
            goto LABEL_25;
          case 245:
          case 246:
            v204 = v208;
            if ( !sub_4A560(a1, &v204) )
              goto LABEL_25;
            if ( v204 )
            {
              if ( v49 == 245 )
                v67 = 1;
              else
                v67 = -1;
              if ( !sub_45E60(v204, v67) )
                goto LABEL_19;
LABEL_143:
              if ( sub_46354((unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 24 * *(_DWORD *)(a1 + 16) - 24), v208) )
                goto LABEL_19;
              continue;
            }
            sub_70B98(1534);
            goto LABEL_19;
          case 247:
            v204 = v208;
            if ( !sub_4A3E4((_DWORD *)a1, (int *)(a1 + 64), &v204) )
              goto LABEL_19;
            if ( *(_DWORD *)(a1 + 64) == -1 )
            {
              v69 = v204;
LABEL_155:
              if ( *v69 != 6 )
              {
                sub_70B98(1541);
                goto LABEL_19;
              }
              *(_DWORD *)(a1 + 64) = *((_DWORD *)v69 + 2);
              sub_46A8C(a1);
              a4 = *(_DWORD *)(a1 + 64);
            }
            else
            {
              sub_47088(a1, v208);
LABEL_289:
              v178 = *(_DWORD *)(a1 + 12);
              v179 = *(_DWORD *)(*(_DWORD *)(a1 + 36) + 4 * (*(_DWORD *)(a1 + 40) + 0x3FFFFFFF));
              v212[0] = 2;
              v214 = 0;
              v213 = 0;
              v215 = 0;
              v216 = 0;
              v204 = (unsigned __int8 *)sub_4629C(a1 + 12, v178 + 24 * v179, v212);
              sub_45758(v212);
              if ( sub_46354(v204, v208) )
                goto LABEL_19;
              a4 = *(_DWORD *)(a1 + 64);
              if ( a4 == -1 )
              {
                v180 = *(_DWORD *)(a1 + 40);
                v47 = *(char **)(a1 + 36);
                v46 = *(_DWORD *)&v47[4 * v180 - 4];
                if ( v180 )
                  *(_DWORD *)(a1 + 40) = v180 - 1;
                if ( v46 != *(_DWORD *)(a1 + 16) - 1 )
                {
                  v37 = 56;
LABEL_295:
                  sub_70B98(v37);
                  goto LABEL_19;
                }
                continue;
              }
            }
LABEL_4:
            if ( a4 < 0 )
            {
              v9 = -a4;
              *(_DWORD *)(a1 + 64) = -a4;
LABEL_37:
              v195 += 200;
              if ( v9 >= dword_D3CE8
                || (v26 = off_D3CEC,
                    v208[0] = 2,
                    v202 = 6 * v9,
                    LODWORD(v209) = 0,
                    v27 = &off_D3CEC[6 * v9],
                    (v198 = (int)v27) == 0) )
              {
                sub_70B98(87);
                goto LABEL_19;
              }
              v28 = sub_3F654((const char *)v27[2], (char *)&v203);
              v29 = *(_QWORD *)(a1 + 36);
              v199 = v28;
              v200 = *(_DWORD *)(v29 + 4 * (HIDWORD(v29) + 0x3FFFFFFF));
              if ( HIDWORD(v29) )
                *(_DWORD *)(a1 + 40) = HIDWORD(v29) - 1;
              v197 = *(_DWORD *)(a1 + 16) - v200;
              if ( v28 > v197 )
                v197 = sub_46FA4(a1, v197, v28, *(_DWORD *)(v198 + 12), *(_DWORD *)(v198 + 16));
              if ( v203 )
              {
                LODWORD(v209) = v197;
              }
              else if ( v197 != v199 )
              {
                sub_70C04(v203, (const char *)v26[v202]);
                sub_70B98(56);
                goto LABEL_19;
              }
              v30 = *(_DWORD *)(v198 + 20);
              if ( (v30 & 1) != 0 && off_D3D00 )
              {
                if ( !((int (*)(void))off_D3D00)() )
                {
                  sub_70B98(1489);
                  goto LABEL_19;
                }
                v30 = *(_DWORD *)(v198 + 20);
              }
              if ( (v30 & 4) == 0 && !sub_7A104() )
              {
                sub_70C04(0, (const char *)v26[v202]);
                sub_70B98(143);
                goto LABEL_19;
              }
              v31 = *(unsigned __int8 **)(v198 + 8);
              v32 = (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 24 * v200);
              v201 = (int)v32;
              v33 = *v31;
              if ( v197 > 0 )
              {
                for ( j = 0; j != v197; ++j )
                {
                  v35 = *v32;
                  if ( v35 == v33 )
                  {
LABEL_62:
                    v33 = v31[1];
                  }
                  else
                  {
                    switch ( v33 )
                    {
                      case 2:
                        if ( sub_464D8((int)v32) )
                          goto LABEL_19;
                        goto LABEL_62;
                      case 3:
                        if ( sub_46700((int)v32) )
                          goto LABEL_19;
                        goto LABEL_62;
                      case 4:
                        break;
                      case 5:
                      case 8:
                        v36 = sub_70B98(1532);
                        goto LABEL_66;
                      case 6:
                        v36 = sub_70B98(1554);
                        goto LABEL_66;
                      case 7:
                        if ( !sub_45E50((int)v32) )
                          goto LABEL_62;
                        goto LABEL_19;
                      case 9:
                        if ( sub_46594((int)v32) )
                          goto LABEL_19;
                        goto LABEL_62;
                      case 10:
                        if ( v35 == 2 && !*((_DWORD *)v32 + 2) )
                          goto LABEL_62;
                        v36 = sub_70B98(1566);
                        goto LABEL_66;
                      default:
                        if ( !under_debugger )
                          sub_78C64(289);
                        goto LABEL_35;
                    }
                    while ( 1 )
                    {
                      v33 = v31[1];
                      if ( v31[1] )
                        break;
                      ++j;
                      v32 += 24;
                      if ( v197 == j )
                        goto LABEL_67;
                      if ( *v32 == 4 )
                        goto LABEL_62;
                    }
                  }
                  v32 += 24;
                  ++v31;
                }
              }
              if ( (v33 & 0xFB) != 0 )
              {
                v36 = sub_70B98(56);
LABEL_66:
                if ( v36 )
                  goto LABEL_19;
              }
LABEL_67:
              if ( (*(_DWORD *)(v198 + 20) & 2) != 0 )
                sub_47360((_DWORD *)a1, v198, v201, v197);
              v37 = (*(int (__fastcall **)(int, unsigned __int8 *))(v198 + 4))(v201, v208);
              if ( v37 )
                goto LABEL_295;
              sub_47480(a1, v197);
              if ( v6 >= *(_DWORD *)(a1 + 28) )
              {
                if ( !a2 || !sub_46354(a2, v208) )
                {
                  v22 = 1;
                  goto LABEL_74;
                }
                goto LABEL_19;
              }
              sub_70B98(0);
              v49 = sub_3E798(*(_DWORD **)(a1 + 68), *(_DWORD *)(a1 + 60));
              ++*(_DWORD *)(a1 + 60);
              if ( v49 == 169 )
              {
                sub_45758(v208);
                continue;
              }
              v181 = *(_DWORD *)(a1 + 16);
              v182 = *(_BYTE **)(a1 + 12);
              if ( (unsigned int)(v181 + 1) > *(_DWORD *)(a1 + 20) )
              {
                v182 = sub_78018(a1 + 12, *(void **)(a1 + 12), v181 + 1, 0x18u);
                v181 = *(_DWORD *)(a1 + 16);
                *(_DWORD *)(a1 + 12) = v182;
              }
              v183 = 24 * v181;
              v182[v183] = 2;
              v184 = &v182[v183];
              *((_DWORD *)v184 + 3) = 0;
              *((_DWORD *)v184 + 4) = 0;
              *((_DWORD *)v184 + 5) = 0;
              *((_DWORD *)v184 + 2) = 0;
              ++*(_DWORD *)(a1 + 16);
              sub_46354((unsigned __int8 *)v184, v208);
              goto LABEL_88;
            }
LABEL_6:
            v10 = *(_DWORD **)(a1 + 4);
            if ( (unsigned int)a4 >= v10[1] || (v11 = *(_DWORD *)(*v10 + 4 * a4)) == 0 )
            {
              sub_70B98(88);
              goto LABEL_16;
            }
            if ( !*(_DWORD *)(v11 + 20) )
            {
              sub_70B98(88);
              if ( *(_DWORD *)(v11 + 4) > 1u )
                goto LABEL_55;
LABEL_16:
              v7 = v217;
              sub_7EBB4(v217, 20, "#%d", *(_DWORD *)(a1 + 64));
              goto LABEL_17;
            }
            v12 = *(_QWORD *)(a1 + 36);
            v13 = *(_DWORD *)(v12 + 4 * (HIDWORD(v12) + 0x3FFFFFFF));
            if ( HIDWORD(v12) )
              *(_DWORD *)(a1 + 40) = HIDWORD(v12) - 1;
            v14 = *(_DWORD *)(v11 + 12);
            v15 = *(_DWORD *)(a1 + 16) - v13;
            if ( v14 > v15 )
            {
              if ( !*(_DWORD *)(v11 + 36) )
                goto LABEL_13;
              v39 = sub_46FA4(a1, v15, v14, *(_DWORD *)(v11 + 32), *(_DWORD *)(v11 + 36));
              v14 = *(_DWORD *)(v11 + 12);
              v15 = v39;
            }
            if ( v15 != v14 )
            {
LABEL_13:
              sub_70B98(56);
              if ( !*(_DWORD *)(v11 + 4) )
              {
                v16 = (const char *)&dword_8DB98;
                goto LABEL_18;
              }
LABEL_55:
              v16 = *(const char **)v11;
              goto LABEL_18;
            }
            v40 = (pthread_mutex_t *)dword_D4AB0;
            sub_7A268((pthread_mutex_t *)dword_D4AB0);
            v41 = *(_DWORD *)(v11 + 68);
            if ( v41 != -1 )
            {
              *(_DWORD *)(v11 + 68) = v41 + 1;
              sub_7A290(v40);
              v42 = *(_DWORD *)(a1 + 28);
              v43 = v42 + 1;
              if ( (unsigned int)(v42 + 1) > *(_DWORD *)(a1 + 32) )
              {
                v44 = sub_78018(a1 + 24, *(void **)(a1 + 24), v43, 0x10u);
                v42 = *(_DWORD *)(a1 + 28);
                *(_DWORD *)(a1 + 24) = v44;
                v43 = v42 + 1;
              }
              else
              {
                v44 = *(void **)(a1 + 24);
              }
              v45 = *(_DWORD *)(a1 + 60);
              *(_DWORD *)(a1 + 28) = v43;
              v46 = (int)v44 + 16 * v42;
              *(_DWORD *)(v46 + 4) = v45;
              v47 = *(char **)(a1 + 56);
              *(_DWORD *)v46 = v47;
              *(_DWORD *)(v46 + 8) = *(_DWORD *)(a1 + 48);
              *(_DWORD *)(v46 + 12) = *(_DWORD *)(a1 + 52);
              v48 = *(_DWORD *)(a1 + 16);
              *(_DWORD *)(a1 + 48) = v13;
              *(_DWORD *)(a1 + 56) = v11;
              *(_DWORD *)(a1 + 68) = v11 + 16;
              *(_DWORD *)(a1 + 52) = v48;
              *(_DWORD *)(a1 + 60) = 0;
              continue;
            }
            if ( *(_DWORD *)(v11 + 4) )
              v176 = *(const char **)v11;
            else
              v176 = (const char *)&dword_8DB98;
            sub_70C04(0, v176);
            sub_70B98(40);
            sub_7A290(v40);
            break;
          case 248:
            v68 = *(_DWORD *)(a1 + 48);
            goto LABEL_148;
          case 249:
            v68 = *(_DWORD *)(a1 + 52);
LABEL_148:
            v204 = (unsigned __int8 *)(24 * *(_DWORD *)(a1 + 16) - 24 + *(_DWORD *)(a1 + 12));
            if ( sub_464D8((int)v204) )
              goto LABEL_19;
            v60 = v204;
            v62 = v68 + *((_DWORD *)v204 + 2);
            if ( v62 < *(_DWORD *)(a1 + 16) )
              goto LABEL_134;
            if ( !under_debugger )
              sub_78C64(292);
            goto LABEL_35;
          case 250:
            v204 = (unsigned __int8 *)(24 * *(_DWORD *)(a1 + 16) - 24 + *(_DWORD *)(a1 + 12));
            if ( sub_464D8((int)v204) )
              goto LABEL_19;
            v60 = v204;
            v61 = *((_DWORD *)v204 + 2);
            if ( v61 < 0 || (unsigned int)v61 >= *(_DWORD *)(*(_DWORD *)(a1 + 4) + 56) )
            {
              if ( !under_debugger )
                sub_78C64(294);
            }
            else
            {
              v62 = ~v61;
LABEL_134:
              *v60 = 10;
              v63 = v204;
              v64 = v204 + 8;
              *((_DWORD *)v204 + 2) = a1;
              *((_DWORD *)v63 + 3) = v62;
              v65 = sub_42A90((int)v64, *(_DWORD *)(a1 + 4));
              if ( v65 )
              {
                if ( *(_BYTE *)v65 == 10 )
                {
                  v66 = v65 + 2;
                  v47 = (char *)v66[1];
                  *(_DWORD *)v64 = *v66;
                  *((_DWORD *)v64 + 1) = v47;
                }
                continue;
              }
              if ( !under_debugger )
                sub_78C64(293);
            }
            goto LABEL_35;
          case 251:
            v59 = *(_DWORD *)(a1 + 16) - 4;
            if ( v59 < 0 )
            {
              if ( !under_debugger )
                sub_78C64(296);
              goto LABEL_35;
            }
            v188 = *(_DWORD *)(a1 + 12) + 24 * v59;
            v204 = (unsigned __int8 *)(v188 + 24);
            if ( sub_464D8(v188 + 48)
              || sub_464D8(v188 + 72)
              || sub_43210(v204, *(_DWORD *)(v188 + 56), *(_DWORD *)(v188 + 80), (unsigned __int8 *)v188, 0) )
            {
              goto LABEL_19;
            }
            sub_46A8C(a1);
            goto LABEL_312;
          case 252:
            v54 = *(_DWORD *)(a1 + 16) - 3;
            if ( v54 < 0 )
            {
              if ( !under_debugger )
                sub_78C64(295);
              goto LABEL_35;
            }
            v204 = (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 24 * v54);
            v51 = v204;
            if ( sub_464D8((int)(v204 + 24))
              || sub_464D8((int)(v51 + 48))
              || sub_498AC((int)v204, v204, *((_DWORD *)v51 + 8), *((_DWORD *)v51 + 14), 0) )
            {
              goto LABEL_19;
            }
            sub_46A8C(a1);
            goto LABEL_111;
          case 253:
            sub_45B30(v208, (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 24 * *(_DWORD *)(a1 + 16) - 24));
LABEL_122:
            if ( v208[0] == 10 && !sub_45BF0(v208, 2) )
              goto LABEL_19;
            v55 = *(_DWORD *)(a1 + 16);
            v56 = *(_BYTE **)(a1 + 12);
            if ( (unsigned int)(v55 + 1) > *(_DWORD *)(a1 + 20) )
            {
              v56 = sub_78018(a1 + 12, *(void **)(a1 + 12), v55 + 1, 0x18u);
              v55 = *(_DWORD *)(a1 + 16);
              *(_DWORD *)(a1 + 12) = v56;
            }
            v57 = 24 * v55;
            v56[v57] = 2;
            v58 = &v56[v57];
            *((_DWORD *)v58 + 3) = 0;
            *((_DWORD *)v58 + 4) = 0;
            *((_DWORD *)v58 + 5) = 0;
            *((_DWORD *)v58 + 2) = 0;
            ++*(_DWORD *)(a1 + 16);
            sub_46354((unsigned __int8 *)v58, v208);
            continue;
          case 254:
            v53 = *(_DWORD *)(a1 + 16) - 2;
            if ( v53 >= 0 )
            {
              v204 = (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 24 * v53);
              v186 = v204;
              if ( sub_464D8((int)(v204 + 24)) || sub_498AC((int)v204, v204, *((_DWORD *)v186 + 8), 0, 1) )
                goto LABEL_19;
LABEL_111:
              sub_46A8C(a1);
              continue;
            }
            if ( !under_debugger )
              sub_78C64(297);
            goto LABEL_35;
          case 255:
            v52 = *(_DWORD *)(a1 + 16) - 3;
            if ( v52 >= 0 )
            {
              v187 = *(_DWORD *)(a1 + 12) + 24 * v52;
              v204 = (unsigned __int8 *)(v187 + 24);
              if ( sub_464D8(v187 + 48) || sub_43210(v204, *(_DWORD *)(v187 + 56), 0, (unsigned __int8 *)v187, 1) )
                goto LABEL_19;
LABEL_312:
              sub_46A8C(a1);
              sub_47088(a1, v208);
              sub_46A8C(a1);
              sub_46404((_DWORD *)a1, v208);
              continue;
            }
            if ( !under_debugger )
              sub_78C64(298);
            goto LABEL_35;
          default:
            if ( !under_debugger )
              sub_78C64(299);
            goto LABEL_35;
        }
        goto LABEL_19;
      }
    }
    if ( v6 >= *(_DWORD *)(a1 + 28) )
      break;
    if ( !sub_47628(a1) )
    {
      if ( !under_debugger )
        sub_78C64(301);
LABEL_35:
      __und(0xFFu);
    }
    v21 = *(_DWORD **)(a1 + 68);
    if ( !v21 )
      goto LABEL_73;
  }
LABEL_74:
  sub_45758(v208);
  return v22;
}
// 43F7A: variable 'v47' is possibly undefined
// 43F7A: variable 'v46' is possibly undefined
// 43F7A: variable 'v194' is possibly undefined
// 8DB98: using guessed type int dword_8DB98;
// D3CE8: using guessed type int dword_D3CE8;
// D3CEC: using guessed type _UNKNOWN **off_D3CEC;
// D3D00: using guessed type _UNKNOWN *off_D3D00;
// D3D14: using guessed type int dword_D3D14;
// D4944: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
// D4AB0: using guessed type int dword_D4AB0;
// D6C20: using guessed type char under_debugger;
