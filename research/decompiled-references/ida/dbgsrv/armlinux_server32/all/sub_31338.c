/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_31338
// Address: 0x00031338

//----- (00031338) --------------------------------------------------------
unsigned int __fastcall sub_31338(int a1, unsigned int *a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r7
  __int64 v5; // r2
  int v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r4
  char *v9; // r1
  unsigned __int8 *v10; // r0
  char *v11; // r11
  unsigned int v12; // r7
  unsigned int v13; // r4
  void *v14; // r1
  int v15; // r5
  char *v16; // r3
  size_t v17; // r5
  char *v18; // r4
  unsigned int v19; // r7
  unsigned int v20; // r8
  int v21; // r7
  int v22; // r5
  int v23; // r6
  void *v24; // r0
  size_t v25; // r5
  int v26; // r10
  size_t v27; // r5
  _BOOL4 v28; // r5
  char *v29; // r3
  int v30; // r8
  int v31; // r6
  int v32; // r7
  void *v33; // r0
  char *v34; // r3
  char *v35; // r3
  int v36; // r6
  int v37; // r4
  int v38; // r5
  void *v39; // r0
  char *v40; // r3
  char *v41; // r0
  char *v42; // r3
  int v43; // r7
  int v44; // r4
  int v45; // r5
  void *v46; // r0
  char *v47; // r3
  int v49; // r7
  int v50; // r8
  unsigned int v51; // r4
  char *v52; // r1
  unsigned int v53; // r2
  char *v54; // r11
  unsigned int v55; // r2
  int v56; // r3
  char *v57; // r5
  size_t v58; // r4
  signed int v59; // r3
  char *v60; // r5
  char *v61; // r4
  int v62; // r5
  char *v63; // r0
  size_t v64; // r4
  int v65; // r10
  int v66; // r3
  char *v67; // r1
  int v68; // r3
  char *v69; // r1
  char *v70; // r3
  int v71; // r0
  char *v72; // r0
  int v73; // r7
  int v74; // r9
  char *v75; // r5
  char *v76; // r6
  char *v77; // r5
  size_t v78; // r8
  void *v79; // r0
  int v80; // r10
  size_t v81; // r4
  unsigned int v82; // r5
  unsigned int v83; // r3
  char *v84; // r1
  char *v85; // r3
  void *v86; // r0
  int v87; // r3
  char *v88; // r3
  int v89; // r7
  int v90; // r5
  int v91; // r6
  void *v92; // r0
  char *v93; // r3
  int v94; // r7
  int v95; // r5
  int v96; // r6
  void *v97; // r0
  size_t v98; // r4
  int v99; // r10
  size_t v100; // r4
  _BOOL4 v101; // r4
  char *v102; // r3
  int v103; // r8
  int v104; // r6
  int v105; // r7
  void *v106; // r0
  char *v107; // r3
  char *v108; // r0
  int v109; // r6
  int v110; // r8
  char *v111; // r4
  char *v112; // r5
  char *v113; // r4
  size_t v114; // r7
  void *v115; // r0
  char *v116; // r0
  int v117; // r7
  int v118; // r3
  char *v119; // r4
  int v120; // r6
  size_t v121; // r8
  void *v122; // r0
  char *v123; // r0
  int v124; // r6
  int v125; // r8
  char *v126; // r4
  char *v127; // r5
  char *v128; // r4
  size_t v129; // r7
  void *v130; // r0
  char *v131; // r0
  size_t v132; // r2
  char *v133; // r0
  int v134; // [sp+Ch] [bp-110h]
  char v136; // [sp+14h] [bp-108h]
  char *v137; // [sp+1Ch] [bp-100h]
  int v138; // [sp+20h] [bp-FCh]
  int v141; // [sp+34h] [bp-E8h]
  int v142; // [sp+38h] [bp-E4h]
  char *v143; // [sp+4Ch] [bp-D0h] BYREF
  int v144; // [sp+50h] [bp-CCh] BYREF
  void *src; // [sp+54h] [bp-C8h] BYREF
  void *v146; // [sp+58h] [bp-C4h] BYREF
  unsigned int v147; // [sp+5Ch] [bp-C0h]
  unsigned int v148; // [sp+60h] [bp-BCh]
  void *dest; // [sp+64h] [bp-B8h] BYREF
  size_t v150; // [sp+68h] [bp-B4h]
  size_t v151; // [sp+6Ch] [bp-B0h]
  char *v152; // [sp+70h] [bp-ACh]
  int v153; // [sp+74h] [bp-A8h] BYREF
  int v154; // [sp+78h] [bp-A4h] BYREF
  char *v155; // [sp+7Ch] [bp-A0h]
  signed int v156; // [sp+80h] [bp-9Ch]
  char *v157; // [sp+84h] [bp-98h]
  void *v158; // [sp+88h] [bp-94h] BYREF
  int v159; // [sp+8Ch] [bp-90h]
  int v160; // [sp+90h] [bp-8Ch]
  void *v161; // [sp+94h] [bp-88h] BYREF
  unsigned int v162; // [sp+98h] [bp-84h]
  size_t v163; // [sp+9Ch] [bp-80h]
  void *v164; // [sp+A0h] [bp-7Ch] BYREF
  int v165; // [sp+A4h] [bp-78h]
  int v166; // [sp+A8h] [bp-74h]
  void *v167; // [sp+ACh] [bp-70h] BYREF
  unsigned int v168; // [sp+B0h] [bp-6Ch]
  unsigned int v169; // [sp+B4h] [bp-68h]
  char *v170; // [sp+B8h] [bp-64h]
  int v171; // [sp+BCh] [bp-60h]
  int v172; // [sp+C0h] [bp-5Ch]
  int v173; // [sp+C4h] [bp-58h] BYREF
  int v174; // [sp+C8h] [bp-54h] BYREF
  int v175; // [sp+CCh] [bp-50h] BYREF
  char v176[4]; // [sp+D0h] [bp-4Ch] BYREF
  size_t n; // [sp+D4h] [bp-48h] BYREF
  size_t v178; // [sp+D8h] [bp-44h]
  size_t v179; // [sp+DCh] [bp-40h]
  void *v180; // [sp+E0h] [bp-3Ch]
  int v181; // [sp+E4h] [bp-38h]
  int v182; // [sp+E8h] [bp-34h]
  void *ptr; // [sp+ECh] [bp-30h]
  size_t v184; // [sp+F0h] [bp-2Ch]
  size_t v185; // [sp+F4h] [bp-28h]
  char *v186; // [sp+F8h] [bp-24h]
  int v187; // [sp+FCh] [bp-20h]
  int v188; // [sp+100h] [bp-1Ch]
  int v189; // [sp+104h] [bp-18h]
  int v190; // [sp+108h] [bp-14h] BYREF
  int v191; // [sp+10Ch] [bp-10h]
  char v192; // [sp+110h] [bp-Ch]

  v3 = *(_DWORD *)(a1 + 168);
  if ( !v3 )
    return v3;
  v138 = *(unsigned __int8 *)(a1 + 176);
  if ( !*(_BYTE *)(a1 + 176) )
    sub_14960();
  if ( v3 >= *(_DWORD *)(a1 + 60) )
    return 0;
  v4 = *(_DWORD *)(a1 + 56) + (v3 << 6);
  v141 = v4;
  if ( !v4 )
    return 0;
  LODWORD(v5) = *(_DWORD *)(v4 + 24);
  HIDWORD(v5) = *(_DWORD *)(a1 + 372);
  sub_74D98(*(_DWORD *)(a1 + 364), v5 + __PAIR64__(*(_DWORD *)(v4 + 28), *(_DWORD *)(a1 + 368)), 0);
  v6 = *(unsigned __int8 *)(a1 + 393);
  dest = nullptr;
  v150 = 0;
  v151 = 0;
  v152 = nullptr;
  v153 = 0;
  v154 = 0;
  v155 = nullptr;
  v156 = 0;
  v157 = nullptr;
  v158 = nullptr;
  v159 = 0;
  v160 = 0;
  v142 = v6;
  v136 = v6 == 2;
  if ( !*(_QWORD *)(v4 + 32) )
    return v138;
  do
  {
    sub_2A420(a1, &v153, 4, 1);
    if ( !v153 )
    {
      sub_311C8((char **)a3, (int)&dest);
      break;
    }
    if ( (unsigned int)v153 > 0xFFFFFFEF )
      goto LABEL_73;
    v146 = nullptr;
    v147 = 0;
    v148 = 0;
    sub_2A420(a1, &v154, 4, 1);
    if ( v154 )
    {
      v49 = sub_74D98(*(_DWORD *)(a1 + 364), 0, 1);
      v156 = 0;
      v155 = &v152[-v154 + 4];
      v50 = *(_DWORD *)(a1 + 368);
      sub_2A420(a1, &v143, 4, 1);
      sub_2A420(a1, &v144, 4, 1);
      if ( v153 <= 11 )
        goto LABEL_70;
      v51 = v153 - 12;
      if ( v153 == 12 )
      {
LABEL_108:
        v64 = v150;
        v161 = nullptr;
        v162 = 0;
        v163 = 0;
        if ( v150 )
        {
          v161 = sub_77FEC(v150);
          v163 = v64;
          memcpy(v161, dest, v64);
          v162 = v64;
        }
        v170 = nullptr;
        v171 = 0;
        v164 = v152;
        v165 = v153;
        v172 = 0;
        v65 = v159;
        v166 = v154;
        v167 = v155;
        v168 = v156;
        v169 = (unsigned int)v157;
        if ( v159 )
        {
          v123 = (char *)sub_77FEC(28 * v159);
          v124 = 0;
          v170 = v123;
          v125 = 0;
          v172 = v65;
          while ( 1 )
          {
            v126 = (char *)v158;
            v127 = &v123[v124];
            *(_DWORD *)&v123[v124] = 0;
            *((_DWORD *)v127 + 1) = 0;
            v128 = &v126[v124];
            *((_DWORD *)v127 + 2) = 0;
            v129 = *((_DWORD *)v128 + 1);
            if ( v129 )
            {
              v130 = sub_77FEC(*((_DWORD *)v128 + 1));
              *(_DWORD *)v127 = v130;
              *((_DWORD *)v127 + 2) = v129;
              memcpy(v130, *(const void **)v128, v129);
              *((_DWORD *)v127 + 1) = v129;
            }
            ++v125;
            v124 += 28;
            *((_DWORD *)v127 + 3) = *((_DWORD *)v128 + 3);
            *((_DWORD *)v127 + 4) = *((_DWORD *)v128 + 4);
            *((_DWORD *)v127 + 5) = *((_DWORD *)v128 + 5);
            v127[24] = v128[24];
            if ( v65 == v125 )
              break;
            v123 = v170;
          }
          v171 = v65;
        }
        v66 = *(_DWORD *)(a3 + 4);
        v67 = *(char **)a3;
        if ( (unsigned int)(v66 + 1) > *(_DWORD *)(a3 + 8) )
        {
          v67 = (char *)sub_78018(a3, v67, v66 + 1, 0x30u);
          v66 = *(_DWORD *)(a3 + 4);
          *(_DWORD *)a3 = v67;
        }
        v68 = 48 * v66;
        *(_DWORD *)&v67[v68] = v161;
        v69 = &v67[v68];
        *((_DWORD *)v69 + 1) = v162;
        *((_DWORD *)v69 + 2) = v163;
        *((_DWORD *)v69 + 3) = v164;
        v70 = v152;
        *((_DWORD *)v69 + 4) = v165;
        v71 = v153;
        *((_DWORD *)v69 + 5) = v166;
        v152 = &v70[v71 + 4];
        *((_DWORD *)v69 + 6) = v167;
        *((_DWORD *)v69 + 7) = v168;
        *((_DWORD *)v69 + 8) = v169;
        *((_DWORD *)v69 + 9) = v170;
        *((_DWORD *)v69 + 10) = v171;
        *((_DWORD *)v69 + 11) = v172;
        ++*(_DWORD *)(a3 + 4);
        goto LABEL_114;
      }
      v52 = (char *)v146;
      v53 = v147;
      if ( v51 > v147 )
      {
        if ( v51 > v148 )
        {
          v52 = (char *)sub_78018((int)&v146, v146, v51, 1u);
          v53 = v147;
          v146 = v52;
        }
        memset(&v52[v53], 0, v51 - v53);
        v147 = v51;
        v52 = (char *)v146;
      }
      else if ( v51 < v147 )
      {
        v147 = v153 - 12;
      }
      sub_2A420(a1, v52, v51, 1);
      v41 = (char *)v146;
      if ( v142 == 2 )
      {
        sub_794AC((int)v146, v51);
        v41 = (char *)v146;
      }
      v54 = (char *)*a2;
      v55 = *a2 + (a2[1] << 6);
      if ( *a2 < v55 )
      {
        if ( v155 == *((char **)v54 + 9) )
          goto LABEL_97;
        while ( 1 )
        {
          v54 += 64;
          if ( (unsigned int)v54 >= v55 )
            break;
          if ( *((char **)v54 + 9) == v155 )
            goto LABEL_97;
        }
      }
      if ( v54 == (char *)v55 )
        goto LABEL_71;
LABEL_97:
      src = v41;
      v56 = *((_DWORD *)v54 + 7);
      v137 = &v41[v147];
      if ( v56 )
      {
        if ( **((_BYTE **)v54 + 6) == 122 )
        {
          if ( !sub_7643C(&n, 32, 0, (char **)&src, &v41[v147]) )
            goto LABEL_70;
          v57 = (char *)src;
          v58 = n;
          if ( v137 - (_BYTE *)src < n )
          {
            v58 = v137 - (_BYTE *)src;
            n = v137 - (_BYTE *)src;
          }
          v59 = 0;
          v150 = 0;
          if ( v58 )
          {
            v131 = (char *)dest;
            if ( v58 > v151 )
            {
              v131 = (char *)sub_78018((int)&dest, dest, v58, 1u);
              v59 = v150;
              dest = v131;
              v132 = v58 - v150;
            }
            else
            {
              v132 = v58;
            }
            memset(&v131[v59], 0, v132);
            v150 = v58;
            memcpy(dest, v57, v58);
            v57 = (char *)src;
            v58 = n;
          }
          v60 = &v57[v58];
          v61 = v143;
          src = v60;
          v56 = *((_DWORD *)v54 + 7);
          if ( !v56 )
            goto LABEL_146;
        }
        else
        {
          v61 = v143;
        }
        if ( v56 != 1 )
        {
          v62 = *((_DWORD *)v54 + 6);
          v63 = strchr((const char *)(v62 + 1), 82);
          if ( v63 )
          {
            if ( &v63[-v62] != (char *)-1 )
            {
              v61 += v49 - v50;
              v156 = (signed int)v61;
              goto LABEL_147;
            }
          }
        }
      }
      else
      {
        v61 = v143;
      }
LABEL_146:
      v156 = (signed int)v61;
LABEL_147:
      v94 = v159;
      v157 = &v61[v144];
      if ( v159 )
      {
        v95 = 0;
        v96 = 0;
        do
        {
          v97 = *(void **)((char *)v158 + v95);
          if ( v97 )
          {
            *(_DWORD *)((char *)v158 + v95 + 4) = 0;
            sub_77F70(v97);
          }
          ++v96;
          v95 += 28;
        }
        while ( v94 != v96 );
        v61 = (char *)v156;
      }
      v161 = v61;
      v159 = 0;
      do
      {
        if ( src >= v137 )
          goto LABEL_108;
        n = 0;
        v178 = 0;
        v179 = 0;
        v98 = *((_DWORD *)v54 + 1);
        if ( v98 )
        {
          n = (size_t)sub_77FEC(*((_DWORD *)v54 + 1));
          v179 = v98;
          memcpy((void *)n, *(const void **)v54, v98);
          v178 = v98;
        }
        v180 = nullptr;
        v181 = 0;
        v182 = 0;
        v99 = *((_DWORD *)v54 + 4);
        if ( v99 )
        {
          v116 = (char *)sub_77FEC(28 * v99);
          v117 = 0;
          v180 = v116;
          v182 = v99;
          while ( 1 )
          {
            v118 = *((_DWORD *)v54 + 3);
            *(_DWORD *)&v116[28 * v117] = 0;
            v134 = v118;
            v119 = &v116[28 * v117];
            v120 = 28 * v117 + v118;
            *((_DWORD *)v119 + 1) = 0;
            *((_DWORD *)v119 + 2) = 0;
            v121 = *(_DWORD *)(v120 + 4);
            if ( v121 )
            {
              v122 = sub_77FEC(*(_DWORD *)(v120 + 4));
              *(_DWORD *)v119 = v122;
              *((_DWORD *)v119 + 2) = v121;
              memcpy(v122, *(const void **)(v134 + 28 * v117), v121);
              *((_DWORD *)v119 + 1) = v121;
            }
            ++v117;
            *((_DWORD *)v119 + 3) = *(_DWORD *)(v120 + 12);
            *((_DWORD *)v119 + 4) = *(_DWORD *)(v120 + 16);
            *((_DWORD *)v119 + 5) = *(_DWORD *)(v120 + 20);
            v119[24] = *(_BYTE *)(v120 + 24);
            if ( v99 == v117 )
              break;
            v116 = (char *)v180;
          }
          v181 = v99;
        }
        ptr = nullptr;
        v184 = 0;
        v185 = 0;
        v100 = *((_DWORD *)v54 + 7);
        if ( v100 )
        {
          ptr = sub_77FEC(*((_DWORD *)v54 + 7));
          v185 = v100;
          memcpy(ptr, *((const void **)v54 + 6), v100);
          v184 = v100;
        }
        v186 = *((char **)v54 + 9);
        v187 = *((_DWORD *)v54 + 10);
        v188 = *((_DWORD *)v54 + 11);
        v189 = *((_DWORD *)v54 + 12);
        v190 = *((_DWORD *)v54 + 13);
        v191 = *((_DWORD *)v54 + 14);
        v192 = v54[60];
        v101 = sub_23198((char **)&v158, (char **)&src, v137, &v190, v136, (unsigned int *)&v161);
        if ( ptr )
        {
          v184 = 0;
          sub_77F70(ptr);
        }
        v102 = (char *)v180;
        if ( v180 )
        {
          v103 = v181;
          if ( v181 )
          {
            v104 = 0;
            v105 = 0;
            do
            {
              v106 = *(void **)&v102[v104];
              v107 = &v102[v104];
              if ( v106 )
              {
                *((_DWORD *)v107 + 1) = 0;
                sub_77F70(v106);
              }
              ++v105;
              v104 += 28;
              v102 = (char *)v180;
            }
            while ( v103 != v105 );
          }
          v181 = 0;
          sub_77F70(v102);
        }
        if ( n )
        {
          v178 = 0;
          sub_77F70((void *)n);
        }
      }
      while ( v101 );
      v41 = (char *)v146;
      goto LABEL_71;
    }
    v161 = nullptr;
    v162 = 0;
    v163 = 0;
    v164 = nullptr;
    v165 = 0;
    v166 = 0;
    v167 = nullptr;
    v168 = 0;
    v169 = 0;
    v173 = 0;
    v174 = 0;
    v175 = 0;
    v176[0] = 0;
    v172 = 0;
    v170 = v152;
    v171 = v153;
    sub_2A420(a1, v176, 1, 1);
    if ( v171 <= 4 )
      goto LABEL_59;
    v7 = v147;
    v8 = v171 - 5;
    v9 = (char *)v146;
    if ( v171 - 5 > v147 )
    {
      if ( v8 > v148 )
      {
        v9 = (char *)sub_78018((int)&v146, v146, v171 - 5, 1u);
        v7 = v147;
        v146 = v9;
      }
      memset(&v9[v7], 0, v8 - v7);
      v147 = v8;
      v9 = (char *)v146;
    }
    else if ( v8 < v147 )
    {
      v147 = v171 - 5;
    }
    sub_2A420(a1, v9, v8, 1);
    v10 = (unsigned __int8 *)v146;
    if ( v142 == 2 )
    {
      sub_794AC((int)v146, v8);
      v10 = (unsigned __int8 *)v146;
    }
    src = v10;
    v11 = (char *)&v10[v147];
    v168 = 0;
    while ( v11 > (char *)v10 )
    {
      src = v10 + 1;
      v15 = *v10;
      if ( v168 )
      {
        v12 = v168 - 1;
        v13 = v168 + 1;
        v14 = v167;
        if ( v168 + 1 <= v169 )
          goto LABEL_17;
      }
      else
      {
        v12 = 0;
        v13 = 2;
        v14 = v167;
        if ( v169 >= 2 )
          goto LABEL_17;
      }
      v14 = sub_78018((int)&v167, v14, v13, 1u);
      v167 = v14;
LABEL_17:
      v168 = v13;
      *((_BYTE *)v14 + v12) = v15;
      *((_BYTE *)v167 + v12 + 1) = 0;
      if ( !v15 )
        break;
      v10 = (unsigned __int8 *)src;
    }
    if ( !sub_7643C(&v173, 32, 0, (char **)&src, v11)
      || !sub_7643C(&v174, 32, 1, (char **)&src, v11)
      || !sub_7643C(&v175, 32, 0, (char **)&src, v11) )
    {
      goto LABEL_59;
    }
    if ( v168 )
      v16 = (char *)v167;
    else
      v16 = &byte_D49E4;
    if ( *v16 != 122 )
      goto LABEL_35;
    if ( !sub_7643C(&n, 32, 0, (char **)&src, v11) )
    {
LABEL_59:
      if ( v167 )
      {
        v168 = 0;
        sub_77F70(v167);
      }
      v35 = (char *)v164;
      if ( v164 )
      {
        v36 = v165;
        if ( v165 )
        {
          v37 = 0;
          v38 = 0;
          do
          {
            v39 = *(void **)&v35[v37];
            v40 = &v35[v37];
            if ( v39 )
            {
              *((_DWORD *)v40 + 1) = 0;
              sub_77F70(v39);
            }
            ++v38;
            v37 += 28;
            v35 = (char *)v164;
          }
          while ( v36 != v38 );
        }
        v165 = 0;
        sub_77F70(v35);
      }
      if ( v161 )
      {
        v162 = 0;
        sub_77F70(v161);
      }
LABEL_70:
      v41 = (char *)v146;
LABEL_71:
      if ( v41 )
      {
        v147 = 0;
        sub_77F70(v41);
      }
LABEL_73:
      v138 = 0;
      break;
    }
    v17 = n;
    v18 = (char *)src;
    if ( n )
    {
      v19 = v162;
      v20 = n + v162;
      if ( __CFADD__(n, v162) )
      {
        if ( v162 <= 0x7FFFFFFE )
        {
          v20 = 0x7FFFFFFF;
          goto LABEL_208;
        }
        if ( (v162 & 0x80000000) != 0 )
          v162 = 0x7FFFFFFF;
      }
      else
      {
        if ( v162 >= v20 )
          goto LABEL_33;
LABEL_208:
        v133 = (char *)v161;
        if ( v163 < v20 )
        {
          v133 = (char *)sub_78018((int)&v161, v161, v20, 1u);
          v161 = v133;
        }
        memset(&v133[v162], 0, v20 - v162);
        v162 = v20;
      }
LABEL_33:
      memcpy((char *)v161 + v19, v18, v17);
      v18 = (char *)src;
      v17 = n;
    }
    src = &v18[v17];
LABEL_35:
    v21 = v165;
    if ( v165 )
    {
      v22 = 0;
      v23 = 0;
      do
      {
        v24 = *(void **)((char *)v164 + v22);
        if ( v24 )
        {
          *(_DWORD *)((char *)v164 + v22 + 4) = 0;
          sub_77F70(v24);
        }
        ++v23;
        v22 += 28;
      }
      while ( v21 != v23 );
    }
    v165 = 0;
    while ( 1 )
    {
      v25 = v162;
      if ( src >= v11 )
        break;
      n = 0;
      v178 = 0;
      v179 = 0;
      if ( v162 )
      {
        n = (size_t)sub_77FEC(v162);
        v179 = v25;
        memcpy((void *)n, v161, v25);
        v178 = v25;
      }
      v26 = v165;
      v180 = nullptr;
      v181 = 0;
      v182 = 0;
      if ( v165 )
      {
        v72 = (char *)sub_77FEC(28 * v165);
        v73 = 0;
        v180 = v72;
        v74 = 0;
        v182 = v26;
        while ( 1 )
        {
          v75 = (char *)v164;
          v76 = &v72[v73];
          *(_DWORD *)&v72[v73] = 0;
          *((_DWORD *)v76 + 1) = 0;
          v77 = &v75[v73];
          *((_DWORD *)v76 + 2) = 0;
          v78 = *((_DWORD *)v77 + 1);
          if ( v78 )
          {
            v79 = sub_77FEC(*((_DWORD *)v77 + 1));
            *(_DWORD *)v76 = v79;
            *((_DWORD *)v76 + 2) = v78;
            memcpy(v79, *(const void **)v77, v78);
            *((_DWORD *)v76 + 1) = v78;
          }
          ++v74;
          v73 += 28;
          *((_DWORD *)v76 + 3) = *((_DWORD *)v77 + 3);
          *((_DWORD *)v76 + 4) = *((_DWORD *)v77 + 4);
          *((_DWORD *)v76 + 5) = *((_DWORD *)v77 + 5);
          v76[24] = v77[24];
          if ( v26 == v74 )
            break;
          v72 = (char *)v180;
        }
        v181 = v26;
      }
      v27 = v168;
      ptr = nullptr;
      v184 = 0;
      v185 = 0;
      if ( v168 )
      {
        ptr = sub_77FEC(v168);
        v185 = v27;
        memcpy(ptr, v167, v27);
        v184 = v27;
      }
      v187 = v171;
      v188 = v172;
      v189 = v173;
      v190 = v174;
      v186 = v170;
      v191 = v175;
      v192 = v176[0];
      v28 = sub_23198((char **)&v164, (char **)&src, v11, &v190, v136, nullptr);
      if ( ptr )
      {
        v184 = 0;
        sub_77F70(ptr);
      }
      v29 = (char *)v180;
      if ( v180 )
      {
        v30 = v181;
        if ( v181 )
        {
          v31 = 0;
          v32 = 0;
          do
          {
            v33 = *(void **)&v29[v31];
            v34 = &v29[v31];
            if ( v33 )
            {
              *((_DWORD *)v34 + 1) = 0;
              sub_77F70(v33);
            }
            ++v32;
            v31 += 28;
            v29 = (char *)v180;
          }
          while ( v30 != v32 );
        }
        v181 = 0;
        sub_77F70(v29);
      }
      if ( n )
      {
        v178 = 0;
        sub_77F70((void *)n);
      }
      if ( !v28 )
        goto LABEL_59;
    }
    n = 0;
    v178 = 0;
    v179 = 0;
    if ( v162 )
    {
      n = (size_t)sub_77FEC(v162);
      v179 = v25;
      memcpy((void *)n, v161, v25);
      v178 = v25;
    }
    v80 = v165;
    v180 = nullptr;
    v181 = 0;
    v182 = 0;
    if ( v165 )
    {
      v108 = (char *)sub_77FEC(28 * v165);
      v109 = 0;
      v180 = v108;
      v110 = 0;
      v182 = v80;
      while ( 1 )
      {
        v111 = (char *)v164;
        v112 = &v108[v109];
        *(_DWORD *)&v108[v109] = 0;
        *((_DWORD *)v112 + 1) = 0;
        v113 = &v111[v109];
        *((_DWORD *)v112 + 2) = 0;
        v114 = *((_DWORD *)v113 + 1);
        if ( v114 )
        {
          v115 = sub_77FEC(*((_DWORD *)v113 + 1));
          *(_DWORD *)v112 = v115;
          *((_DWORD *)v112 + 2) = v114;
          memcpy(v115, *(const void **)v113, v114);
          *((_DWORD *)v112 + 1) = v114;
        }
        ++v110;
        v109 += 28;
        *((_DWORD *)v112 + 3) = *((_DWORD *)v113 + 3);
        *((_DWORD *)v112 + 4) = *((_DWORD *)v113 + 4);
        *((_DWORD *)v112 + 5) = *((_DWORD *)v113 + 5);
        v112[24] = v113[24];
        if ( v80 == v110 )
          break;
        v108 = (char *)v180;
      }
      v181 = v80;
    }
    v81 = v168;
    ptr = nullptr;
    v184 = 0;
    v185 = 0;
    if ( v168 )
    {
      ptr = sub_77FEC(v168);
      v185 = v81;
      memcpy(ptr, v167, v81);
      v184 = v81;
    }
    v82 = a2[1];
    v189 = v173;
    v83 = a2[2];
    v186 = v170;
    v187 = v171;
    v188 = v172;
    v190 = v174;
    v191 = v175;
    v192 = v176[0];
    v84 = (char *)*a2;
    if ( v82 + 1 > v83 )
    {
      v84 = (char *)sub_78018((int)a2, v84, v82 + 1, 0x40u);
      v82 = a2[1];
      *a2 = (unsigned int)v84;
    }
    v85 = &v84[64 * v82];
    *(_DWORD *)v85 = n;
    *((_DWORD *)v85 + 1) = v178;
    *((_DWORD *)v85 + 2) = v179;
    *((_DWORD *)v85 + 3) = v180;
    *((_DWORD *)v85 + 4) = v181;
    *((_DWORD *)v85 + 5) = v182;
    *((_DWORD *)v85 + 6) = ptr;
    *((_DWORD *)v85 + 7) = v184;
    *((_DWORD *)v85 + 8) = v185;
    *((_DWORD *)v85 + 9) = v186;
    *((_DWORD *)v85 + 10) = v187;
    *((_DWORD *)v85 + 11) = v188;
    *((_DWORD *)v85 + 12) = v189;
    *((_DWORD *)v85 + 13) = v190;
    *((_DWORD *)v85 + 14) = v191;
    v85[60] = v192;
    v86 = v167;
    v87 = (int)&v152[v171 + 4];
    ++a2[1];
    v152 = (char *)v87;
    if ( v86 )
    {
      v168 = 0;
      sub_77F70(v86);
    }
    v88 = (char *)v164;
    if ( v164 )
    {
      v89 = v165;
      if ( v165 )
      {
        v90 = 0;
        v91 = 0;
        do
        {
          v92 = *(void **)&v88[v90];
          v93 = &v88[v90];
          if ( v92 )
          {
            *((_DWORD *)v93 + 1) = 0;
            sub_77F70(v92);
          }
          ++v91;
          v90 += 28;
          v88 = (char *)v164;
        }
        while ( v89 != v91 );
      }
      v165 = 0;
      sub_77F70(v88);
    }
    if ( v161 )
    {
      v162 = 0;
      sub_77F70(v161);
    }
LABEL_114:
    if ( v146 )
    {
      v147 = 0;
      sub_77F70(v146);
    }
  }
  while ( (unsigned __int64)(int)v152 < *(_QWORD *)(v141 + 32) );
  v42 = (char *)v158;
  if ( v158 )
  {
    v43 = v159;
    if ( v159 )
    {
      v44 = 0;
      v45 = 0;
      do
      {
        v46 = *(void **)&v42[v44];
        v47 = &v42[v44];
        if ( v46 )
        {
          *((_DWORD *)v47 + 1) = 0;
          sub_77F70(v46);
        }
        ++v45;
        v44 += 28;
        v42 = (char *)v158;
      }
      while ( v43 != v45 );
    }
    v159 = 0;
    sub_77F70(v42);
  }
  if ( dest )
  {
    v150 = 0;
    sub_77F70(dest);
  }
  return v138;
}
// D49E4: using guessed type char byte_D49E4;
