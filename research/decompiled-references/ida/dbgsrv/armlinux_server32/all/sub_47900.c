/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47900
// Address: 0x00047900

//----- (00047900) --------------------------------------------------------
int __fastcall sub_47900(int *a1, int a2)
{
  int v3; // r4
  int v5; // r3
  int v6; // r1
  int v7; // r0
  int v8; // r8
  _BOOL4 v9; // r4
  int v10; // r3
  int v11; // r1
  int v12; // r0
  int v13; // r8
  bool v14; // cc
  unsigned __int8 *v15; // r0
  int v16; // r4
  int v17; // r3
  int v18; // r1
  int v19; // r0
  int v20; // r3
  int v21; // r1
  int v22; // r0
  int v23; // r8
  unsigned int v24; // r4
  int v25; // r4
  _BOOL4 v26; // r5
  int v27; // r3
  int v28; // r1
  int v29; // r0
  int v30; // r8
  _BOOL4 v31; // r4
  int v32; // r3
  int v33; // r2
  int v34; // r1
  __int64 v35; // r2
  bool v36; // cf
  int v37; // r3
  int v38; // r1
  int v39; // r0
  int v40; // r8
  int v41; // r0
  __int64 v42; // r2
  unsigned int v43; // r0
  int v44; // r3
  int v45; // r1
  int v46; // r0
  int v47; // r8
  int v48; // r0
  __int64 v49; // kr00_8
  int v50; // r4
  int v51; // r2
  unsigned int v52; // r3
  int v53; // r3
  int v54; // r2
  int v55; // r3
  int v56; // r2
  int v57; // r3
  int v58; // r1
  int v59; // r0
  int v60; // r8
  int v61; // r0
  int v62; // r3
  int v63; // r1
  int v64; // r0
  int v65; // r8
  int v66; // r0
  int v67; // r3
  int v68; // r1
  int v69; // r0
  int v70; // r8
  int v71; // r0
  int v72; // r7
  int v73; // r4
  int v74; // r5
  unsigned __int8 *v75; // r0
  int v76; // r3
  int v77; // r1
  int v78; // r2
  int v79; // r3
  int v80; // r1
  int v81; // r0
  int v82; // r8
  int v83; // r0
  _BOOL4 v84; // r3
  int v85; // r3
  int v86; // r1
  int v87; // r0
  int v88; // r8
  int v89; // r0
  __int64 v90; // r2
  int v91; // r4
  int v92; // r0
  int v93; // r3
  int v94; // r1
  int v95; // r0
  int v96; // r8
  int v97; // r3
  int v98; // r1
  int v99; // r0
  int v100; // r8
  int v101; // r3
  int v102; // r1
  int v103; // r0
  int v104; // r8
  unsigned __int8 *v105; // r0
  unsigned __int8 *v106; // r8
  int v107; // r0
  int v108; // r0
  unsigned int v109; // r3
  int v110; // r0
  int v111; // r2
  unsigned int v112; // r2
  int v113; // r0
  unsigned __int64 v114; // r2
  int v115; // r0
  int v116; // r4
  int i; // r7
  int v118; // r0
  int v119; // r0
  int v120; // r3
  int v121; // r0
  int v122; // r2
  int v123; // r0
  int v124; // r3
  int v125; // r2
  int v126; // r3
  int v127; // r3
  int v128; // r2
  int v129; // r3
  int v130; // r3
  int v131; // r2
  int v132; // r3
  int v133; // r3
  int v134; // r2
  int v135; // r3
  int v136; // r3
  int v137; // r2
  int v138; // r3
  int v139; // r3
  int v140; // r2
  int v141; // r3
  int v142; // r3
  int v143; // r2
  int v144; // r3
  int v145; // r3
  int v146; // r2
  int v147; // r3
  int v148; // r3
  int v149; // r2
  int v150; // r3
  int v151; // r3
  int v152; // r2
  int v153; // r3
  int v154; // r3
  int v155; // r2
  int v156; // r3
  int v157; // r3
  int v158; // r2
  int v159; // r3
  int v160; // r3
  int v161; // r2
  int v162; // r3
  int v163; // r3
  int v164; // r2
  int v165; // r3
  int v166; // r3
  int v167; // r2
  int v168; // r3
  __int16 v169; // r3
  size_t v170; // r4
  int v171; // r3
  int v172; // r10
  int v173; // r9
  void *v174; // r1
  int v175; // r3
  int v176; // r0
  int v177; // r3
  unsigned __int8 v178[8]; // [sp+0h] [bp-38h] BYREF
  __int64 v179; // [sp+8h] [bp-30h] BYREF
  int v180; // [sp+10h] [bp-28h]
  int v181; // [sp+14h] [bp-24h]
  unsigned __int8 v182[8]; // [sp+18h] [bp-20h] BYREF
  __int64 src; // [sp+20h] [bp-18h] BYREF
  int v184; // [sp+28h] [bp-10h]
  int v185; // [sp+2Ch] [bp-Ch]

  switch ( a2 )
  {
    case 176:
      v182[0] = 2;
      src = 0;
      v184 = 0;
      v185 = 0;
      sub_46450(a1, v182);
      v105 = sub_45BF0((unsigned __int8 *)(*a1 + 24 * a1[1] - 24), 2);
      v106 = v105;
      if ( *v105 == 7 )
      {
        v3 = sub_45E50((int)v182);
        if ( v3 )
        {
          sub_45758(v182);
          return v3;
        }
        if ( HIDWORD(src) )
        {
          v170 = HIDWORD(src) - 1;
          if ( HIDWORD(src) != 1 )
          {
            v171 = *((_DWORD *)v106 + 3);
            v172 = v171 - 1;
            v173 = v170 + v171 - 1;
            if ( !v171 )
            {
              v172 = 0;
              v173 = HIDWORD(src) - 1;
            }
            v174 = *((void **)v106 + 2);
            if ( (unsigned int)(v173 + 1) > *((_DWORD *)v106 + 4) )
            {
              v174 = sub_78018((int)(v106 + 8), v174, v173 + 1, 1u);
              *((_DWORD *)v106 + 2) = v174;
            }
            *((_DWORD *)v106 + 3) = v173 + 1;
            *((_BYTE *)v174 + v173) = 0;
            memcpy((void *)(*((_DWORD *)v106 + 2) + v172), (const void *)src, v170);
          }
        }
      }
      else
      {
        switch ( sub_467C0(v105, v182) )
        {
          case 2:
            *((_DWORD *)v106 + 2) += src;
            break;
          case 3:
            v123 = sub_71A84((int)(v106 + 8), (int)&src, (_DWORD *)v106 + 2, 0);
            if ( v123 != 1 )
              sub_424E8(v123);
            break;
          case 5:
            if ( !sub_46C68((int)v106, (int)v106) )
              sub_45ECC(*((_DWORD *)v106 + 2), *(_DWORD *)(src + 12), src + 4);
            break;
          case 6:
          case 8:
            sub_70B98(1531);
            break;
          case 7:
            if ( !sub_46594((int)v106) && !sub_46594((int)v182) )
              goto LABEL_124;
            break;
          case 9:
LABEL_124:
            v120 = *((_DWORD *)v106 + 2);
            v121 = HIDWORD(src);
            v122 = *((_DWORD *)v106 + 3);
            v36 = __CFADD__(v120, (_DWORD)src);
            *((_DWORD *)v106 + 2) = v120 + src;
            *((_DWORD *)v106 + 3) = v122 + v36 + v121;
            break;
          default:
            goto LABEL_79;
        }
      }
      goto LABEL_79;
    case 177:
      v101 = a1[1];
      v102 = *a1;
      v178[0] = 2;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v103 = sub_46354(v178, (unsigned __int8 *)(v102 + 24 * v101 - 24));
      v104 = 24 * a1[1] - 24 + *a1;
      if ( !v103 )
      {
        v182[0] = 2;
        src = 0;
        v184 = 0;
        v185 = 0;
        sub_45B30(v182, (unsigned __int8 *)v104);
        v151 = a1[1];
        if ( v151 )
        {
          v152 = *a1;
          v153 = v151 - 1;
          a1[1] = v153;
          sub_45758((unsigned __int8 *)(v152 + 24 * v153));
        }
        sub_45758(v182);
        v104 = *a1 + 24 * a1[1] - 24;
      }
      switch ( sub_467C0((unsigned __int8 *)v104, v178) )
      {
        case 2:
          v3 = 0;
          *(_DWORD *)(v104 + 8) -= v179;
          break;
        case 3:
          v118 = sub_71A84(v104 + 8, (int)&v179, (_DWORD *)(v104 + 8), 1);
          if ( v118 == 1 )
            goto LABEL_113;
          v3 = sub_424E8(v118);
          break;
        case 5:
          v3 = sub_46C68(v104, v104);
          if ( !v3 )
          {
            v116 = *(_DWORD *)(v179 + 12);
            for ( i = v179 + 4; v116 != i; v116 = sub_81478(v116) )
              sub_46D3C(*(_DWORD **)(v104 + 8), (_DWORD *)(v116 + 16));
            goto LABEL_113;
          }
          break;
        case 6:
        case 8:
          v3 = sub_70B98(1531);
          break;
        case 7:
          v3 = sub_46594(v104);
          if ( !v3 )
          {
            v3 = sub_46594((int)v178);
            if ( !v3 )
              goto LABEL_102;
          }
          break;
        case 9:
LABEL_102:
          v3 = 0;
          v109 = *(_DWORD *)(v104 + 8);
          v110 = HIDWORD(v179);
          v111 = *(_DWORD *)(v104 + 12);
          v36 = v109 >= (unsigned int)v179;
          *(_DWORD *)(v104 + 8) = v109 - v179;
          *(_DWORD *)(v104 + 12) = v111 - (v110 + !v36);
          break;
        default:
LABEL_113:
          v3 = 0;
          break;
      }
      goto LABEL_103;
    case 178:
      v97 = a1[1];
      v98 = *a1;
      v178[0] = 2;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v99 = sub_46354(v178, (unsigned __int8 *)(v98 + 24 * v97 - 24));
      v100 = *a1 + 24 * a1[1] - 24;
      if ( !v99 )
      {
        v182[0] = 2;
        src = 0;
        v184 = 0;
        v185 = 0;
        sub_45B30(v182, (unsigned __int8 *)v100);
        v148 = a1[1];
        if ( v148 )
        {
          v149 = *a1;
          v150 = v148 - 1;
          a1[1] = v150;
          sub_45758((unsigned __int8 *)(v149 + 24 * v150));
        }
        sub_45758(v182);
        v100 = *a1 + 24 * a1[1] - 24;
      }
      switch ( sub_467C0((unsigned __int8 *)v100, v178) )
      {
        case 2:
          v3 = 0;
          *(_DWORD *)(v100 + 8) *= (_DWORD)v179;
          goto LABEL_103;
        case 3:
          v115 = sub_71EAC(v100 + 8, (int)&v179, (_DWORD *)(v100 + 8));
          if ( v115 == 1 )
            goto LABEL_133;
          v107 = sub_424E8(v115);
          goto LABEL_91;
        case 5:
        case 6:
        case 8:
          v107 = sub_70B98(1531);
LABEL_91:
          v3 = v107;
          goto LABEL_103;
        case 7:
          v3 = sub_46594(v100);
          if ( !v3 )
          {
            v3 = sub_46594((int)v178);
            if ( !v3 )
              goto LABEL_106;
          }
          goto LABEL_103;
        case 9:
LABEL_106:
          v3 = 0;
          v112 = *(_DWORD *)(v100 + 8);
          v113 = v112 * HIDWORD(v179);
          v114 = v112 * (unsigned __int64)(unsigned int)v179;
          HIDWORD(v114) += v113 + v179 * *(_DWORD *)(v100 + 12);
          *(_QWORD *)(v100 + 8) = v114;
          break;
        default:
LABEL_133:
          v3 = 0;
          break;
      }
      goto LABEL_103;
    case 179:
      v93 = a1[1];
      v94 = *a1;
      v178[0] = 2;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v95 = sub_46354(v178, (unsigned __int8 *)(v94 + 24 * v93 - 24));
      v96 = *a1 + 24 * a1[1] - 24;
      if ( !v95 )
      {
        v182[0] = 2;
        src = 0;
        v184 = 0;
        v185 = 0;
        sub_45B30(v182, (unsigned __int8 *)v96);
        v124 = a1[1];
        if ( v124 )
        {
          v125 = *a1;
          v126 = v124 - 1;
          a1[1] = v126;
          sub_45758((unsigned __int8 *)(v125 + 24 * v126));
        }
        sub_45758(v182);
        v96 = *a1 + 24 * a1[1] - 24;
      }
      switch ( sub_467C0((unsigned __int8 *)v96, v178) )
      {
        case 2:
          if ( !(_DWORD)v179 )
            goto LABEL_220;
          v3 = 0;
          *(int *)(v96 + 8) /= (int)v179;
          break;
        case 3:
          v119 = sub_71F64(v96 + 8, (int)&v179, (_DWORD *)(v96 + 8));
          if ( v119 == 1 )
            goto LABEL_132;
          v108 = sub_424E8(v119);
          goto LABEL_94;
        case 5:
        case 6:
        case 8:
          v108 = sub_70B98(1531);
          goto LABEL_94;
        case 7:
          v3 = sub_46594(v96);
          if ( !v3 )
          {
            v3 = sub_46594((int)v178);
            if ( !v3 )
              goto LABEL_98;
          }
          break;
        case 9:
LABEL_98:
          if ( v179 )
          {
            v3 = 0;
            *(__int64 *)(v96 + 8) /= v179;
          }
          else
          {
LABEL_220:
            v108 = sub_70B98(86);
LABEL_94:
            v3 = v108;
          }
          break;
        default:
LABEL_132:
          v3 = 0;
          break;
      }
LABEL_103:
      sub_45758(v178);
      return v3;
    case 180:
      v182[0] = 2;
      src = 0;
      v184 = 0;
      v185 = 0;
      sub_46450(a1, v182);
      v91 = *a1 + 24 * a1[1] - 24;
      v92 = sub_467C0((unsigned __int8 *)v91, v182);
      if ( v92 == 2 )
      {
        if ( (_DWORD)src )
        {
          *(int *)(v91 + 8) %= (int)src;
          goto LABEL_79;
        }
      }
      else
      {
        if ( v92 != 9 )
        {
          v176 = sub_70B98(61);
          goto LABEL_202;
        }
        if ( src )
        {
          *(__int64 *)(v91 + 8) %= src;
LABEL_79:
          v3 = 0;
          sub_45758(v182);
          return v3;
        }
      }
      v176 = sub_70B98(86);
LABEL_202:
      v3 = v176;
      sub_45758(v182);
      return v3;
    case 181:
      v85 = a1[1];
      v86 = *a1;
      v178[0] = 2;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v87 = sub_46354(v178, (unsigned __int8 *)(v86 + 24 * v85 - 24));
      v88 = 24 * a1[1] - 24 + *a1;
      if ( !v87 )
      {
        v182[0] = 2;
        src = 0;
        v184 = 0;
        v185 = 0;
        sub_45B30(v182, (unsigned __int8 *)v88);
        v157 = a1[1];
        if ( v157 )
        {
          v158 = *a1;
          v159 = v157 - 1;
          a1[1] = v159;
          sub_45758((unsigned __int8 *)(v158 + 24 * v159));
        }
        sub_45758(v182);
        v88 = *a1 + 24 * a1[1] - 24;
      }
      v89 = sub_467C0((unsigned __int8 *)v88, v178);
      if ( v89 == 2 )
      {
        if ( *(_DWORD *)(v88 + 8) )
        {
          v175 = 1;
        }
        else
        {
          v175 = v179;
          if ( (_DWORD)v179 )
            v175 = 1;
        }
        *(_DWORD *)(v88 + 8) = v175;
      }
      else
      {
        if ( v89 != 9 )
          goto LABEL_211;
        if ( *(_QWORD *)(v88 + 8) )
          v90 = 1;
        else
          v90 = v179 != 0;
        *(_QWORD *)(v88 + 8) = v90;
      }
      goto LABEL_74;
    case 182:
      v79 = a1[1];
      v80 = *a1;
      v178[0] = 2;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v81 = sub_46354(v178, (unsigned __int8 *)(v80 + 24 * v79 - 24));
      v82 = 24 * a1[1] - 24 + *a1;
      if ( !v81 )
      {
        v182[0] = 2;
        src = 0;
        v184 = 0;
        v185 = 0;
        sub_45B30(v182, (unsigned __int8 *)v82);
        v160 = a1[1];
        if ( v160 )
        {
          v161 = *a1;
          v162 = v160 - 1;
          a1[1] = v162;
          sub_45758((unsigned __int8 *)(v161 + 24 * v162));
        }
        sub_45758(v182);
        v82 = *a1 + 24 * a1[1] - 24;
      }
      v83 = sub_467C0((unsigned __int8 *)v82, v178);
      if ( v83 == 2 )
      {
        v177 = *(_DWORD *)(v82 + 8);
        if ( v177 )
        {
          v177 = v179;
          if ( (_DWORD)v179 )
            v177 = 1;
        }
        *(_DWORD *)(v82 + 8) = v177;
      }
      else
      {
        if ( v83 != 9 )
          goto LABEL_211;
        if ( *(_QWORD *)(v82 + 8) )
          v84 = v179 != 0;
        else
          v84 = 0;
        *(_DWORD *)(v82 + 8) = v84;
        *(_DWORD *)(v82 + 12) = 0;
      }
      goto LABEL_74;
    case 183:
      v72 = *a1;
      v73 = 24 * a1[1] - 24;
      v74 = *a1 + v73;
      v75 = sub_45BF0((unsigned __int8 *)v74, 0);
      if ( v75 && *v75 == 5 )
      {
        sub_45758((unsigned __int8 *)v74);
        *(_DWORD *)(v74 + 8) = 1;
      }
      v76 = *(unsigned __int8 *)(v72 + v73);
      if ( v76 == 2 )
      {
        v3 = 0;
        *(_DWORD *)(v74 + 8) = *(_DWORD *)(v74 + 8) == 0;
      }
      else
      {
        if ( v76 != 9 )
          return sub_70B98(61);
        v77 = *(_DWORD *)(v74 + 8);
        v78 = *(_DWORD *)(v74 + 12);
        v3 = 0;
        *(_DWORD *)(v74 + 12) = 0;
        *(_DWORD *)(v74 + 8) = (v77 | v78) == 0;
      }
      return v3;
    case 184:
      v67 = a1[1];
      v68 = *a1;
      v178[0] = 2;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v69 = sub_46354(v178, (unsigned __int8 *)(v68 + 24 * v67 - 24));
      v70 = 24 * a1[1] - 24 + *a1;
      if ( !v69 )
      {
        v182[0] = 2;
        src = 0;
        v184 = 0;
        v185 = 0;
        sub_45B30(v182, (unsigned __int8 *)v70);
        v154 = a1[1];
        if ( v154 )
        {
          v155 = *a1;
          v156 = v154 - 1;
          a1[1] = v156;
          sub_45758((unsigned __int8 *)(v155 + 24 * v156));
        }
        sub_45758(v182);
        v70 = *a1 + 24 * a1[1] - 24;
      }
      v71 = sub_467C0((unsigned __int8 *)v70, v178);
      if ( v71 == 2 )
      {
        *(_DWORD *)(v70 + 8) |= v179;
      }
      else
      {
        if ( v71 != 9 )
          goto LABEL_211;
        *(_QWORD *)(v70 + 8) |= v179;
      }
      goto LABEL_74;
    case 185:
      v62 = a1[1];
      v63 = *a1;
      v178[0] = 2;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v64 = sub_46354(v178, (unsigned __int8 *)(v63 + 24 * v62 - 24));
      v65 = 24 * a1[1] - 24 + *a1;
      if ( !v64 )
      {
        v182[0] = 2;
        src = 0;
        v184 = 0;
        v185 = 0;
        sub_45B30(v182, (unsigned __int8 *)v65);
        v163 = a1[1];
        if ( v163 )
        {
          v164 = *a1;
          v165 = v163 - 1;
          a1[1] = v165;
          sub_45758((unsigned __int8 *)(v164 + 24 * v165));
        }
        sub_45758(v182);
        v65 = *a1 + 24 * a1[1] - 24;
      }
      v66 = sub_467C0((unsigned __int8 *)v65, v178);
      if ( v66 == 2 )
      {
        *(_DWORD *)(v65 + 8) &= v179;
      }
      else
      {
        if ( v66 != 9 )
          goto LABEL_211;
        *(_QWORD *)(v65 + 8) &= v179;
      }
      goto LABEL_74;
    case 186:
      v57 = a1[1];
      v58 = *a1;
      v178[0] = 2;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v59 = sub_46354(v178, (unsigned __int8 *)(v58 + 24 * v57 - 24));
      v60 = 24 * a1[1] - 24 + *a1;
      if ( !v59 )
      {
        v182[0] = 2;
        src = 0;
        v184 = 0;
        v185 = 0;
        sub_45B30(v182, (unsigned __int8 *)v60);
        v166 = a1[1];
        if ( v166 )
        {
          v167 = *a1;
          v168 = v166 - 1;
          a1[1] = v168;
          sub_45758((unsigned __int8 *)(v167 + 24 * v168));
        }
        sub_45758(v182);
        v60 = *a1 + 24 * a1[1] - 24;
      }
      v61 = sub_467C0((unsigned __int8 *)v60, v178);
      if ( v61 == 2 )
      {
        *(_DWORD *)(v60 + 8) ^= v179;
      }
      else
      {
        if ( v61 != 9 )
          goto LABEL_211;
        *(_QWORD *)(v60 + 8) ^= v179;
      }
      goto LABEL_74;
    case 187:
      v53 = 24 * a1[1] - 24;
      v54 = *(unsigned __int8 *)(*a1 + v53);
      v55 = v53 + *a1;
      if ( v54 == 2 )
      {
        v3 = 0;
        *(_DWORD *)(v55 + 8) = ~*(_DWORD *)(v55 + 8);
      }
      else
      {
        if ( v54 != 9 )
          return sub_70B98(61);
        v3 = 0;
        v56 = ~*(_DWORD *)(v55 + 12);
        *(_DWORD *)(v55 + 8) = ~*(_DWORD *)(v55 + 8);
        *(_DWORD *)(v55 + 12) = v56;
      }
      return v3;
    case 188:
      v44 = a1[1];
      v45 = *a1;
      v178[0] = 2;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v46 = sub_46354(v178, (unsigned __int8 *)(v45 + 24 * v44 - 24));
      v47 = 24 * a1[1] - 24 + *a1;
      if ( !v46 )
      {
        v182[0] = 2;
        src = 0;
        v184 = 0;
        v185 = 0;
        sub_45B30(v182, (unsigned __int8 *)v47);
        v130 = a1[1];
        if ( v130 )
        {
          v131 = *a1;
          v132 = v130 - 1;
          a1[1] = v132;
          sub_45758((unsigned __int8 *)(v131 + 24 * v132));
        }
        sub_45758(v182);
        v47 = *a1 + 24 * a1[1] - 24;
      }
      v48 = sub_467C0((unsigned __int8 *)v47, v178);
      if ( v48 == 2 )
      {
        *(int *)(v47 + 8) >>= v179;
      }
      else
      {
        if ( v48 != 9 )
          goto LABEL_211;
        v49 = *(_QWORD *)(v47 + 8);
        v50 = v179 - 32;
        if ( (int)v179 - 32 >= 0 )
          v50 = SHIDWORD(v49) >> v50;
        v51 = SHIDWORD(v49) >> v179;
        v52 = ((unsigned int)v49 >> v179) | (HIDWORD(v49) << (32 - v179));
        if ( (int)v179 - 32 >= 0 )
          v52 |= v50;
        *(_DWORD *)(v47 + 8) = v52;
        *(_DWORD *)(v47 + 12) = v51;
      }
      goto LABEL_74;
    case 189:
      v37 = a1[1];
      v38 = *a1;
      v178[0] = 2;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v39 = sub_46354(v178, (unsigned __int8 *)(v38 + 24 * v37 - 24));
      v40 = 24 * a1[1] - 24 + *a1;
      if ( !v39 )
      {
        v182[0] = 2;
        src = 0;
        v184 = 0;
        v185 = 0;
        sub_45B30(v182, (unsigned __int8 *)v40);
        v133 = a1[1];
        if ( v133 )
        {
          v134 = *a1;
          v135 = v133 - 1;
          a1[1] = v135;
          sub_45758((unsigned __int8 *)(v134 + 24 * v135));
        }
        sub_45758(v182);
        v40 = *a1 + 24 * a1[1] - 24;
      }
      v41 = sub_467C0((unsigned __int8 *)v40, v178);
      if ( v41 == 2 )
      {
        *(_DWORD *)(v40 + 8) <<= v179;
        goto LABEL_74;
      }
      if ( v41 == 9 )
      {
        v42 = *(_QWORD *)(v40 + 8);
        v43 = (unsigned int)v42 >> (32 - v179);
        HIDWORD(v42) = (HIDWORD(v42) << v179) | ((_DWORD)v42 << (v179 - 32));
        *(_DWORD *)(v40 + 8) = (_DWORD)v42 << v179;
        *(_DWORD *)(v40 + 12) = HIDWORD(v42) | v43;
LABEL_74:
        v3 = 0;
        sub_45758(v178);
        return v3;
      }
LABEL_211:
      v3 = sub_70B98(61);
      sub_45758(v178);
      return v3;
    case 190:
      v32 = 24 * a1[1] - 24;
      v33 = *(unsigned __int8 *)(*a1 + v32);
      v34 = *a1 + v32;
      switch ( v33 )
      {
        case 3:
          v3 = *(unsigned __int16 *)(v34 + 22);
          if ( *(_WORD *)(v34 + 22) )
          {
            v169 = v3 ^ 0x8000;
            v3 = 0;
            *(_WORD *)(v34 + 22) = v169;
          }
          break;
        case 2:
          v3 = 0;
          *(_DWORD *)(v34 + 8) = -*(_DWORD *)(v34 + 8);
          break;
        case 9:
          v35 = *(_QWORD *)(v34 + 8);
          v3 = 0;
          v36 = (_DWORD)v35 == 0;
          LODWORD(v35) = -(int)v35;
          HIDWORD(v35) -= 2 * HIDWORD(v35) + !v36;
          *(_QWORD *)(v34 + 8) = v35;
          break;
        default:
          return sub_70B98(61);
      }
      return v3;
    case 191:
      return sub_45E50(*a1 + 24 * a1[1] - 24);
    case 200:
      v27 = a1[1];
      v28 = *a1;
      v178[0] = 2;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v29 = sub_46354(v178, (unsigned __int8 *)(v28 + 24 * v27 - 24));
      v30 = *a1 + 24 * a1[1] - 24;
      if ( !v29 )
      {
        v182[0] = 2;
        src = 0;
        v184 = 0;
        v185 = 0;
        sub_45B30(v182, (unsigned __int8 *)v30);
        v145 = a1[1];
        if ( v145 )
        {
          v146 = *a1;
          v147 = v145 - 1;
          a1[1] = v147;
          sub_45758((unsigned __int8 *)(v146 + 24 * v147));
        }
        sub_45758(v182);
        v30 = 24 * a1[1] - 24 + *a1;
      }
      v31 = sub_46928(v30, (int)v178) == 0;
      sub_45758((unsigned __int8 *)v30);
      sub_45758(v178);
      *(_DWORD *)(v30 + 8) = v31;
      sub_45758(v178);
      return 0;
    case 201:
      v182[0] = 2;
      src = 0;
      v184 = 0;
      v185 = 0;
      sub_46450(a1, v182);
      v25 = *a1 + 24 * a1[1] - 24;
      v26 = sub_46928(v25, (int)v182) != 0;
      sub_45758((unsigned __int8 *)v25);
      sub_45758(v182);
      *(_DWORD *)(v25 + 8) = v26;
      sub_45758(v182);
      return 0;
    case 202:
      v10 = a1[1];
      v11 = *a1;
      v178[0] = 2;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v12 = sub_46354(v178, (unsigned __int8 *)(v11 + 24 * v10 - 24));
      v13 = *a1 + 24 * a1[1] - 24;
      if ( !v12 )
      {
        v182[0] = 2;
        src = 0;
        v184 = 0;
        v185 = 0;
        sub_45B30(v182, (unsigned __int8 *)v13);
        v142 = a1[1];
        if ( v142 )
        {
          v143 = *a1;
          v144 = v142 - 1;
          a1[1] = v144;
          sub_45758((unsigned __int8 *)(v143 + 24 * v144));
        }
        sub_45758(v182);
        v13 = 24 * a1[1] - 24 + *a1;
      }
      v14 = sub_46928(v13, (int)v178) <= 0;
      v15 = (unsigned __int8 *)v13;
      v16 = v14;
      goto LABEL_11;
    case 203:
      v5 = a1[1];
      v6 = *a1;
      v178[0] = 2;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v7 = sub_46354(v178, (unsigned __int8 *)(v6 + 24 * v5 - 24));
      v8 = *a1 + 24 * a1[1] - 24;
      if ( !v7 )
      {
        v182[0] = 2;
        src = 0;
        v184 = 0;
        v185 = 0;
        sub_45B30(v182, (unsigned __int8 *)v8);
        v136 = a1[1];
        if ( v136 )
        {
          v137 = *a1;
          v138 = v136 - 1;
          a1[1] = v138;
          sub_45758((unsigned __int8 *)(v137 + 24 * v138));
        }
        sub_45758(v182);
        v8 = 24 * a1[1] - 24 + *a1;
      }
      v9 = sub_46928(v8, (int)v178) >= 0;
      sub_45758((unsigned __int8 *)v8);
      sub_45758(v178);
      *(_DWORD *)(v8 + 8) = v9;
      sub_45758(v178);
      return 0;
    case 204:
      v20 = a1[1];
      v21 = *a1;
      v178[0] = 2;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v22 = sub_46354(v178, (unsigned __int8 *)(v21 + 24 * v20 - 24));
      v23 = *a1 + 24 * a1[1] - 24;
      if ( !v22 )
      {
        v182[0] = 2;
        src = 0;
        v184 = 0;
        v185 = 0;
        sub_45B30(v182, (unsigned __int8 *)v23);
        v139 = a1[1];
        if ( v139 )
        {
          v140 = *a1;
          v141 = v139 - 1;
          a1[1] = v141;
          sub_45758((unsigned __int8 *)(v140 + 24 * v141));
        }
        sub_45758(v182);
        v23 = 24 * a1[1] - 24 + *a1;
      }
      v24 = (unsigned int)sub_46928(v23, (int)v178) >> 31;
      sub_45758((unsigned __int8 *)v23);
      sub_45758(v178);
      *(_DWORD *)(v23 + 8) = v24;
      sub_45758(v178);
      return 0;
    case 205:
      v17 = a1[1];
      v18 = *a1;
      v178[0] = 2;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v19 = sub_46354(v178, (unsigned __int8 *)(v18 + 24 * v17 - 24));
      v13 = *a1 + 24 * a1[1] - 24;
      if ( !v19 )
      {
        v182[0] = 2;
        src = 0;
        v184 = 0;
        v185 = 0;
        sub_45B30(v182, (unsigned __int8 *)v13);
        v127 = a1[1];
        if ( v127 )
        {
          v128 = *a1;
          v129 = v127 - 1;
          a1[1] = v129;
          sub_45758((unsigned __int8 *)(v128 + 24 * v129));
        }
        sub_45758(v182);
        v13 = 24 * a1[1] - 24 + *a1;
      }
      v14 = sub_46928(v13, (int)v178) <= 0;
      v15 = (unsigned __int8 *)v13;
      v16 = !v14;
LABEL_11:
      sub_45758(v15);
      sub_45758(v178);
      *(_DWORD *)(v13 + 8) = v16;
      sub_45758(v178);
      return 0;
    case 206:
      return sub_464D8(*a1 + 24 * a1[1] - 24);
    case 208:
      return sub_46700(*a1 + 24 * a1[1] - 24);
    case 209:
      return sub_46594(*a1 + 24 * a1[1] - 24);
    default:
      if ( under_debugger )
        __und(0xFFu);
      sub_78C64(1448);
  }
}
// 81478: using guessed type int __fastcall sub_81478(_DWORD);
// D6C20: using guessed type char under_debugger;
