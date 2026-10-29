/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: asctoreal
// Address: 0x00077C90

//----- (00077C90) --------------------------------------------------------
void __fastcall asctoreal(unsigned __int8 **a1, _WORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned __int8 *v10; // r7
  int v11; // r4
  int v12; // r1
  int v13; // r2
  int v14; // r3
  _BYTE *v15; // r5
  int v16; // r1
  int v17; // r7
  int v18; // r0
  unsigned int v19; // r3
  int v20; // r2
  _BYTE *v21; // r6
  _BYTE *v22; // r2
  bool v23; // zf
  int v24; // r0
  unsigned int v25; // r1
  unsigned int v26; // r4
  unsigned int v27; // r1
  unsigned int v28; // r4
  unsigned int v29; // r1
  unsigned int v30; // r4
  unsigned int v31; // r1
  unsigned int v32; // r4
  unsigned int v33; // r1
  unsigned int v34; // r4
  unsigned int v35; // r1
  unsigned int v36; // r4
  unsigned int v37; // r0
  unsigned int v38; // r4
  unsigned int v39; // r5
  unsigned int v40; // r1
  int v41; // r3
  unsigned int v42; // r1
  int v43; // r3
  unsigned int v44; // r1
  unsigned int v45; // r7
  int v46; // r0
  unsigned int v47; // r3
  unsigned int v48; // r0
  int v49; // r1
  unsigned int v50; // r0
  int v51; // r1
  unsigned int v52; // r0
  unsigned int v53; // r1
  int v54; // r0
  int v55; // r0
  _BYTE *v56; // r0
  int v57; // r3
  int v58; // r0
  int v59; // r0
  int v60; // r4
  __int16 v61; // r0
  int v62; // r0
  unsigned int v63; // r4
  int v64; // r0
  int v65; // r1
  int v66; // r0
  int v67; // r1
  int v68; // r0
  unsigned int v69; // r0
  int v70; // r0
  __int16 v71; // r0
  __int16 v72; // r4
  __int16 v73; // r5
  __int16 v74; // r6
  __int16 v75; // r7
  __int16 v76; // r1
  int v77; // r7
  int v78; // r5
  int v79; // r3
  int v80; // r0
  int v81; // r2
  unsigned __int8 *v82; // r0
  int v83; // r1
  unsigned __int8 *v84; // r3
  int v85; // r6
  int v86; // r4
  int v87; // r1
  int v88; // r0
  int v89; // [sp+4h] [bp-11Ch]
  _WORD *v90; // [sp+8h] [bp-118h]
  int v91; // [sp+10h] [bp-110h]
  int v92; // [sp+14h] [bp-10Ch]
  unsigned int v93; // [sp+18h] [bp-108h]
  unsigned int v94; // [sp+24h] [bp-FCh]
  int *v95; // [sp+2Ch] [bp-F4h]
  unsigned int v96; // [sp+30h] [bp-F0h]
  unsigned __int16 v97; // [sp+30h] [bp-F0h]
  int v98; // [sp+34h] [bp-ECh]
  _BYTE *v99; // [sp+38h] [bp-E8h]
  _BYTE *v100; // [sp+38h] [bp-E8h]
  char v101; // [sp+3Ch] [bp-E4h]
  unsigned int v102; // [sp+44h] [bp-DCh]
  int v103; // [sp+58h] [bp-C8h]
  int v104; // [sp+5Ch] [bp-C4h]
  int v105; // [sp+60h] [bp-C0h]
  int v106; // [sp+64h] [bp-BCh]
  int v107; // [sp+68h] [bp-B8h]
  __int16 v108; // [sp+68h] [bp-B8h]
  int v109; // [sp+68h] [bp-B8h]
  int v110; // [sp+6Ch] [bp-B4h]
  __int16 v111; // [sp+6Ch] [bp-B4h]
  int v112; // [sp+70h] [bp-B0h] BYREF
  int v113; // [sp+74h] [bp-ACh]
  int v114; // [sp+78h] [bp-A8h]
  int v115; // [sp+7Ch] [bp-A4h]
  _BYTE v116[84]; // [sp+80h] [bp-A0h] BYREF
  unsigned __int16 v117; // [sp+D4h] [bp-4Ch] BYREF
  __int16 v118; // [sp+D6h] [bp-4Ah]
  __int16 v119; // [sp+D8h] [bp-48h]
  __int16 v120; // [sp+DAh] [bp-46h]
  __int16 v121; // [sp+DCh] [bp-44h]
  __int16 v122; // [sp+DEh] [bp-42h]
  __int16 v123; // [sp+E0h] [bp-40h]
  __int16 v124; // [sp+E2h] [bp-3Eh]
  __int16 v125; // [sp+E4h] [bp-3Ch]
  __int16 v126; // [sp+E6h] [bp-3Ah]
  __int16 v127; // [sp+E8h] [bp-38h]
  int v128; // [sp+ECh] [bp-34h]
  int v129; // [sp+F0h] [bp-30h]
  int v130; // [sp+F4h] [bp-2Ch]
  int v131; // [sp+F8h] [bp-28h]
  int v132; // [sp+FCh] [bp-24h]
  __int16 v133; // [sp+100h] [bp-20h]
  int v134; // [sp+104h] [bp-1Ch] BYREF
  int v135; // [sp+108h] [bp-18h]
  int v136; // [sp+10Ch] [bp-14h]
  int v137; // [sp+110h] [bp-10h]
  int v138; // [sp+114h] [bp-Ch]
  unsigned __int16 v139; // [sp+118h] [bp-8h]

  v90 = a2;
  memset(a2, 0, 0x10u);
  v95 = (int *)a1;
  v10 = *a1;
  v11 = (char)**a1;
  if ( v11 >= 0 )
  {
    while ( isspace((unsigned __int8)v11) )
    {
      v11 = (char)*++v10;
      if ( v11 <= -1 )
        goto LABEL_7;
    }
    if ( !(v11 << 24) )
      sub_78552(0, v12, v13, v14, v89, (int)v90, (int)&_stack_chk_guard, v91, v92);
  }
LABEL_7:
  *v95 = (int)v10;
  v15 = v116;
  qstrncpy((unsigned int)v116, v10, 80);
  v139 = 0;
  v138 = 0;
  v137 = 0;
  v136 = 0;
  v135 = 0;
  v134 = 0;
  LOBYTE(v16) = v116[0];
  if ( !v116[0] )
  {
    v104 = 0;
    v101 = 0;
    v98 = 0;
    v59 = 0;
    goto LABEL_56;
  }
  v103 = -1;
  v15 = v116;
  v105 = 0;
  v107 = 0;
  v104 = 0;
  v17 = 0;
  v106 = 0;
  v101 = 0;
  v98 = 0;
  while ( 1 )
  {
    v18 = (unsigned __int8)v16;
    v19 = (unsigned __int8)v16 - 48;
    if ( (char)v16 > -1 && v19 <= 9 )
    {
      v20 = v17 + 1;
      if ( v17 )
        v20 = v17;
      if ( v107 | v106 | v19 )
      {
        if ( (_WORD)v135 )
        {
          v101 |= (unsigned __int8)v16 != 48;
          ++v107;
          v17 = v20;
        }
        else
        {
          v99 = v15;
          v25 = v139;
          v139 *= 2;
          LOWORD(v135) = HIWORD(v135) >> 15;
          v26 = HIWORD(v138);
          HIWORD(v138) = 2 * HIWORD(v138) + (v25 >> 15);
          v27 = v26 >> 15;
          v28 = (unsigned __int16)v138;
          LOWORD(v138) = 2 * v138 + v27;
          v29 = v28 >> 15;
          v30 = HIWORD(v137);
          HIWORD(v137) = 2 * HIWORD(v137) + v29;
          v31 = v30 >> 15;
          v32 = (unsigned __int16)v137;
          LOWORD(v137) = 2 * v137 + v31;
          v33 = v32 >> 15;
          v34 = HIWORD(v136);
          HIWORD(v136) = 2 * HIWORD(v136) + v33;
          v35 = v34 >> 15;
          v36 = (unsigned __int16)v136;
          LOWORD(v136) = 2 * v136 + v35;
          HIWORD(v135) = 2 * HIWORD(v135) + (v36 >> 15);
          v133 = 0;
          v128 = 0;
          v37 = (unsigned __int16)v138;
          v38 = HIWORD(v138);
          LOWORD(v132) = 0;
          v93 = HIWORD(v137);
          v131 = 0;
          v96 = (unsigned __int16)v136;
          v94 = HIWORD(v136);
          v130 = 0;
          v102 = HIWORD(v135);
          v129 = 0;
          HIWORD(v132) = v19;
          v39 = (HIWORD(v138) + (unsigned int)(unsigned __int16)(4 * HIWORD(v138))) >> 16;
          v40 = (unsigned __int16)v19 + (unsigned __int16)(5 * HIWORD(v138));
          HIWORD(v138) = v19 + 5 * HIWORD(v138);
          v41 = v39
              + (unsigned __int16)(2 * (2 * v138 + (v38 >> 15)) + ((unsigned __int16)(2 * v38) >> 15))
              + (unsigned __int16)v138;
          v42 = HIWORD(v40)
              + (unsigned __int16)(v39 + 2 * (2 * v138 + (v38 >> 15)) + ((unsigned __int16)(2 * v38) >> 15) + v138);
          LOWORD(v138) = v42;
          v43 = HIWORD(v137)
              + (unsigned __int16)(2 * (2 * HIWORD(v137) + (v37 >> 15)) + ((unsigned __int16)(2 * v37) >> 15))
              + ((unsigned int)(v41 << 15) >> 31);
          v44 = (unsigned __int16)v43 + HIWORD(v42);
          HIWORD(v137) = v44;
          v45 = (unsigned __int16)v137;
          v46 = (unsigned __int16)v137
              + (unsigned __int16)(2 * (2 * v137 + (v93 >> 15)) + ((unsigned __int16)(2 * v93) >> 15))
              + ((unsigned int)(v43 << 15) >> 31);
          v47 = v46 << 15;
          v48 = (unsigned __int16)v46 + HIWORD(v44);
          LOWORD(v137) = v48;
          v49 = HIWORD(v136)
              + (unsigned __int16)(2 * (2 * HIWORD(v136) + (v45 >> 15)) + ((unsigned __int16)(2 * v45) >> 15))
              + (v47 >> 31);
          v50 = (unsigned __int16)(HIWORD(v136)
                                 + 2 * (2 * HIWORD(v136) + (v45 >> 15))
                                 + ((unsigned __int16)(2 * v45) >> 15)
                                 + (v47 >> 31))
              + HIWORD(v48);
          HIWORD(v136) = v50;
          v51 = (unsigned __int16)v136
              + (unsigned __int16)(2 * (2 * v136 + (v94 >> 15)) + ((unsigned __int16)(2 * v94) >> 15))
              + ((unsigned int)(v49 << 15) >> 31);
          v52 = (unsigned __int16)v51 + HIWORD(v50);
          LOWORD(v136) = v52;
          v53 = HIWORD(v135)
              + (unsigned __int16)(2 * (2 * HIWORD(v135) + (v96 >> 15)) + ((unsigned __int16)(2 * v96) >> 15))
              + ((unsigned int)(v51 << 15) >> 31);
          v54 = (unsigned __int16)v53 + HIWORD(v52);
          HIWORD(v135) = v54;
          LOWORD(v135) = v135
                       + 2 * (2 * v135 + (v102 >> 15))
                       + ((unsigned __int16)(2 * v102) >> 15)
                       + ((unsigned __int16)(v53 >> 1) >> 15)
                       + HIWORD(v54);
          v55 = v104 + 1;
          if ( !v106 )
            v55 = v104;
          ++v107;
          v17 = v20;
          v104 = v55;
          v15 = v99;
        }
      }
      else
      {
        v17 = v20;
      }
      goto LABEL_55;
    }
    if ( (unsigned __int8)v16 == 122 )
    {
      if ( !v105 )
        goto LABEL_131;
      goto LABEL_55;
    }
    if ( (unsigned __int8)v16 != 46 )
      break;
    if ( v106 )
      goto LABEL_131;
    v21 = v15;
    if ( (char)v16 > -1 )
    {
      v22 = v15;
      while ( (unsigned int)(unsigned __int8)v16 - 48 <= 9 )
      {
        v21 = v22 + 1;
        v18 = (unsigned __int8)v22[1];
        LOBYTE(v16) = v18;
        ++v22;
        if ( (char)v18 <= -1 )
          goto LABEL_41;
      }
      v18 = (unsigned __int8)v16;
      v21 = v22;
    }
LABEL_41:
    if ( tolower(v18) == 101 )
    {
      if ( !v17 && v21 == v15 )
        goto LABEL_131;
    }
    else
    {
      *v21 = 0;
    }
    if ( v21 <= v116 )
    {
      v57 = v105;
    }
    else
    {
      v56 = v21 - 1;
      v57 = v105;
      if ( *(v21 - 1) == 48 )
      {
        do
        {
          *v56 = 122;
          v57 = 1;
          if ( v56 <= v116 )
            break;
          v23 = *--v56 == 48;
        }
        while ( v23 );
      }
    }
    v105 = v57;
    v58 = v17 + 1;
    if ( v17 )
      v58 = v17;
    v106 = 1;
    v17 = v58;
LABEL_55:
    v16 = (unsigned __int8)*++v15;
    v59 = 0;
    if ( !v16 )
      goto LABEL_56;
  }
  if ( (unsigned __int8)v16 == 45 || (unsigned __int8)v16 == 43 )
  {
    v59 = 0;
    v23 = v17 == 0;
    v17 = -1;
    if ( !v23 )
      goto LABEL_56;
    v24 = -1;
    if ( (unsigned __int8)v16 != 45 )
      v24 = v98;
    v98 = v24;
    goto LABEL_55;
  }
  v80 = tolower((unsigned __int8)v16);
  if ( v80 == 101 )
  {
    if ( v17 )
    {
      v81 = (unsigned __int8)v15[1];
      v82 = v15 + 2;
      ++v15;
      v83 = 1;
      if ( v81 == 45 )
        goto LABEL_83;
      if ( v81 == 43 )
      {
        v103 = 1;
LABEL_83:
        v81 = *v82;
        v15 = v82;
        v83 = v103;
      }
      v19 = -1;
      if ( (char)v81 > -1 && (unsigned int)(v81 - 48) <= 9 )
      {
        v84 = v15 + 1;
        v59 = 0;
        do
        {
          v15 = v84;
          v59 = 10 * v59 + (unsigned __int8)v81 - 48;
          if ( (v59 & 0x8000) != 0 )
            goto LABEL_132;
          v85 = *v84;
          LOBYTE(v81) = v85;
          if ( (char)v85 <= -1 )
            break;
          ++v84;
        }
        while ( (unsigned int)(v85 - 48) < 0xA );
        if ( v83 < 0 )
        {
          if ( !v59 )
LABEL_132:
            JUMPOUT(0x78562);
          v59 = -v59;
        }
LABEL_56:
        v60 = v59 - v104;
        v100 = v15;
        if ( v59 - v104 >= 1 )
        {
          if ( (_WORD)v135 )
          {
            v61 = v133;
          }
          else
          {
            v62 = v59 - v104;
            while ( 1 )
            {
              v110 = v62;
              v128 = v134;
              v97 = v139;
              HIWORD(v132) = 10 * HIWORD(v138) + (v139 >> 15);
              v63 = (unsigned __int16)v138
                  + (unsigned __int16)(2 * (2 * v138 + (HIWORD(v138) >> 15))
                                     + ((unsigned __int16)(2 * HIWORD(v138)) >> 15))
                  + ((HIWORD(v138) + (unsigned int)(unsigned __int16)(4 * HIWORD(v138))) >> 16);
              LOWORD(v132) = 2 * v63 + ((unsigned __int16)((5 * HIWORD(v138)) & 0x8000) >> 15);
              v64 = HIWORD(v137)
                  + (unsigned __int16)(2 * (2 * HIWORD(v137) + ((unsigned __int16)v138 >> 15))
                                     + ((unsigned __int16)(2 * v138) >> 15))
                  + (v63 << 15 >> 31);
              HIWORD(v131) = 2 * v64 + ((unsigned __int16)(v63 & 0x8000) >> 15);
              v65 = (unsigned __int16)v137
                  + (unsigned __int16)(2 * (2 * v137 + (HIWORD(v137) >> 15))
                                     + ((unsigned __int16)(2 * HIWORD(v137)) >> 15))
                  + ((unsigned int)(v64 << 15) >> 31);
              LOWORD(v131) = 2 * v65 + ((unsigned __int16)(v64 & 0x8000) >> 15);
              v66 = HIWORD(v136)
                  + (unsigned __int16)(2 * (2 * HIWORD(v136) + ((unsigned __int16)v137 >> 15))
                                     + ((unsigned __int16)(2 * v137) >> 15))
                  + ((unsigned int)(v65 << 15) >> 31);
              HIWORD(v130) = 2 * v66 + ((unsigned __int16)(v65 & 0x8000) >> 15);
              v67 = (unsigned __int16)v136
                  + (unsigned __int16)(2 * (2 * v136 + (HIWORD(v136) >> 15))
                                     + ((unsigned __int16)(2 * HIWORD(v136)) >> 15))
                  + ((unsigned int)(v66 << 15) >> 31);
              LOWORD(v130) = 2 * v67 + ((unsigned __int16)(v66 & 0x8000) >> 15);
              v68 = HIWORD(v135)
                  + (unsigned __int16)(2 * (2 * HIWORD(v135) + ((unsigned __int16)v136 >> 15))
                                     + ((unsigned __int16)(2 * v136) >> 15))
                  + ((unsigned int)(v67 << 15) >> 31);
              HIWORD(v129) = 2 * v68 + ((unsigned __int16)(v67 & 0x8000) >> 15);
              v69 = 2
                  * (v135
                   + 2 * (2 * v135 + (HIWORD(v135) >> 15))
                   + ((unsigned int)(HIWORD(v135) << 17) >> 31)
                   + ((unsigned int)(v68 << 15) >> 31))
                  + ((unsigned __int16)(v68 & 0x8000) >> 15);
              LOWORD(v129) = v69;
              if ( v69 << 16 )
                break;
              v134 = v128;
              v135 = v129;
              v136 = v130;
              v137 = v131;
              v138 = v132;
              v139 = 0;
              v60 = v110 - 1;
              if ( v110 >= 2 )
              {
                v62 = v110 - 1;
                if ( !(_WORD)v135 )
                  continue;
              }
              goto LABEL_65;
            }
            v60 = v110;
LABEL_65:
            v61 = 2 * v97;
          }
          v133 = v61;
        }
        v70 = sub_764F8((unsigned __int16 *)&v134);
        if ( v70 >= 113 )
        {
          v71 = 0;
          v139 = 0;
          v138 = 0;
          v137 = 0;
          v136 = 0;
          v135 = 0;
          v134 = 0;
          v111 = 0;
          v108 = 0;
          v72 = 0;
          v73 = 0;
          v74 = 0;
          v75 = 0;
          v76 = 0;
          goto LABEL_69;
        }
        v77 = 1;
        v78 = 0;
        if ( emdnorm((unsigned __int16 *)&v134, v101 & 1, 0, 16494 - v70, 112) )
        {
          v79 = HIWORD(v134);
          if ( v60 )
          {
            v109 = HIWORD(v134);
            if ( v60 < 0 )
            {
              v77 = -1;
              if ( -v60 <= 4096 )
              {
                v60 = -v60;
              }
              else
              {
                v118 = 29989;
                v117 = 0;
                v119 = 0;
                v120 = -15264;
                v121 = 20994;
                v122 = -30176;
                v123 = -26726;
                v124 = -14004;
                v125 = 5439;
                v126 = -32693;
                v127 = 0;
                sub_77234(&v117, (unsigned __int16 *)&v134);
                v60 = -4096 - v60;
                v109 -= 13606;
              }
            }
            v115 = 1073709056;
            v112 = 0;
            v113 = 0;
            v114 = 0;
            if ( v60 << 31 )
            {
              emul((unsigned __int16 *)&v112, (__int16 *)dword_C6810, &v112);
              if ( (v60 & 2) != 0 )
                goto LABEL_116;
LABEL_100:
              if ( (v60 & 4) == 0 )
                goto LABEL_101;
LABEL_117:
              emul((unsigned __int16 *)&v112, (__int16 *)dword_C67F0, &v112);
              if ( (v60 & 8) != 0 )
                goto LABEL_118;
LABEL_102:
              if ( (v60 & 0x10) == 0 )
                goto LABEL_103;
LABEL_119:
              emul((unsigned __int16 *)&v112, (__int16 *)dword_C67D0, &v112);
              if ( (v60 & 0x20) != 0 )
                goto LABEL_120;
LABEL_104:
              if ( (v60 & 0x40) == 0 )
                goto LABEL_105;
LABEL_121:
              emul((unsigned __int16 *)&v112, (__int16 *)dword_C67B0, &v112);
              if ( (v60 & 0x80) != 0 )
                goto LABEL_122;
LABEL_106:
              if ( (v60 & 0x100) == 0 )
                goto LABEL_107;
LABEL_123:
              emul((unsigned __int16 *)&v112, (__int16 *)dword_C6790, &v112);
              if ( (v60 & 0x200) != 0 )
                goto LABEL_124;
LABEL_108:
              if ( (v60 & 0x400) == 0 )
                goto LABEL_109;
LABEL_125:
              emul((unsigned __int16 *)&v112, (__int16 *)dword_C6770, &v112);
              if ( (v60 & 0x800) != 0 )
LABEL_110:
                emul((unsigned __int16 *)&v112, (__int16 *)dword_C6760, &v112);
            }
            else
            {
              if ( (v60 & 2) == 0 )
                goto LABEL_100;
LABEL_116:
              emul((unsigned __int16 *)&v112, (__int16 *)dword_C6800, &v112);
              if ( (v60 & 4) != 0 )
                goto LABEL_117;
LABEL_101:
              if ( (v60 & 8) == 0 )
                goto LABEL_102;
LABEL_118:
              emul((unsigned __int16 *)&v112, (__int16 *)dword_C67E0, &v112);
              if ( (v60 & 0x10) != 0 )
                goto LABEL_119;
LABEL_103:
              if ( (v60 & 0x20) == 0 )
                goto LABEL_104;
LABEL_120:
              emul((unsigned __int16 *)&v112, (__int16 *)&dword_C67C0, &v112);
              if ( (v60 & 0x40) != 0 )
                goto LABEL_121;
LABEL_105:
              if ( (v60 & 0x80) == 0 )
                goto LABEL_106;
LABEL_122:
              emul((unsigned __int16 *)&v112, (__int16 *)dword_C67A0, &v112);
              if ( (v60 & 0x100) != 0 )
                goto LABEL_123;
LABEL_107:
              if ( (v60 & 0x200) == 0 )
                goto LABEL_108;
LABEL_124:
              emul((unsigned __int16 *)&v112, (__int16 *)dword_C6780, &v112);
              if ( (v60 & 0x400) != 0 )
                goto LABEL_125;
LABEL_109:
              if ( (v60 & 0x800) != 0 )
                goto LABEL_110;
            }
            if ( (v60 & 0x1000) != 0 )
              emul((unsigned __int16 *)&v112, (__int16 *)dword_C6750, &v112);
            v119 = 0;
            v120 = v115;
            v122 = v114;
            v124 = v113;
            v126 = v112;
            v127 = 0;
            v121 = HIWORD(v114);
            v123 = HIWORD(v113);
            v125 = HIWORD(v112);
            v117 = (unsigned int)SHIWORD(v115) >> 15;
            v118 = HIWORD(v115) & 0x7FFF;
            v86 = HIWORD(v115) & 0x7FFF;
            if ( v77 < 0 )
            {
              v78 = sub_77234(&v117, (unsigned __int16 *)&v134);
              v79 = v109 + 0x3FFF - v86;
            }
            else
            {
              v78 = sub_76E24(&v117, (unsigned __int16 *)&v134);
              v79 = v109 + v86 - 16382;
            }
          }
          if ( emdnorm((unsigned __int16 *)&v134, v78 != 0, 0, v79, 112) )
          {
            v71 = HIWORD(v138);
            v111 = v138;
            v108 = HIWORD(v137);
            v72 = v137;
            v73 = HIWORD(v136);
            v74 = v136;
            v75 = HIWORD(v135);
            v76 = HIWORD(v134);
LABEL_69:
            v19 = v98;
            LOWORD(v134) = v98;
            v90[6] = v75;
            v90[5] = v74;
            v90[4] = v73;
            v90[3] = v72;
            v90[2] = v108;
            v90[1] = v111;
            *v90 = v71;
            if ( v98 << 16 )
              v76 |= 0x8000u;
            v90[7] = v76;
          }
        }
        v15 = v100;
      }
    }
  }
  else if ( v17 )
  {
    v59 = 0;
    if ( v17 >= 0 || v107 )
      goto LABEL_56;
  }
LABEL_131:
  v87 = *v95;
  v88 = *v95 + v15 - v116;
  *v95 = v88;
  sub_78552(v88, v87, (int)v95, v19, a5, a6, a7, a8, a9);
}
// 78330: control flows out of bounds to 78562
// 77CE6: variable 'v12' is possibly undefined
// 77CE6: variable 'v13' is possibly undefined
// 77CE6: variable 'v14' is possibly undefined
// 77CE6: variable 'v89' is possibly undefined
// 77CE6: variable 'v91' is possibly undefined
// 77CE6: variable 'v92' is possibly undefined
// 7822C: variable 'v90' is possibly undefined
// 78551: variable 'v19' is possibly undefined
// C6750: using guessed type int dword_C6750[4];
// C6760: using guessed type int dword_C6760[4];
// C6770: using guessed type int dword_C6770[4];
// C6780: using guessed type int dword_C6780[4];
// C6790: using guessed type int dword_C6790[4];
// C67A0: using guessed type int dword_C67A0[4];
// C67B0: using guessed type int dword_C67B0[4];
// C67C0: using guessed type int dword_C67C0;
// C67D0: using guessed type int dword_C67D0[2];
// C67E0: using guessed type int dword_C67E0[2];
// C67F0: using guessed type int dword_C67F0[3];
// C6800: using guessed type int dword_C6800[3];
// C6810: using guessed type int dword_C6810[3];
