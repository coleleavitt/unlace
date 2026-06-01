/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_559D0
// Address: 0x000559D0

//----- (000559D0) --------------------------------------------------------
unsigned int __fastcall sub_559D0(
        int a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7,
        int a8,
        _DWORD *a9,
        unsigned int a10)
{
  _DWORD *v12; // r0
  _DWORD *v13; // r5
  _DWORD *v14; // r6
  int v15; // r3
  _DWORD *v16; // r0
  __int64 v17; // r2
  _DWORD *v18; // r4
  _DWORD *v19; // r10
  int v20; // r8
  int v21; // r0
  _BOOL4 v22; // r0
  int v23; // r3
  unsigned int v24; // r4
  void **v25; // r10
  int v26; // r3
  int v27; // r3
  unsigned int v28; // r4
  unsigned int v29; // r5
  char *v30; // r1
  unsigned int v31; // r7
  int v32; // r7
  signed int v33; // r3
  char *v34; // r6
  char *v35; // r0
  size_t v36; // r4
  const char *v37; // r6
  void *v38; // r0
  unsigned int v39; // r8
  _DWORD *v41; // r0
  int v42; // r3
  int v43; // r7
  _DWORD *v44; // r10
  int v45; // r7
  char *v46; // r0
  char *v47; // r5
  int v48; // r3
  int v49; // r3
  int v50; // r3
  char *v51; // r1
  int v52; // r6
  int i; // r4
  int *v54; // r3
  void *v55; // r0
  int v56; // r0
  int (__fastcall *v57)(int, void **); // r2
  unsigned int v58; // r4
  unsigned int v59; // r8
  int v60; // r7
  int *v61; // r3
  void *v62; // r0
  int v63; // r3
  int v64; // r6
  size_t v65; // r3
  unsigned int v66; // r7
  size_t v67; // r3
  int v68; // r3
  unsigned int v69; // r6
  unsigned int v70; // r3
  int v71; // r3
  void *v72; // r0
  const void *v73; // r1
  int v74; // r1
  unsigned int v75; // r8
  int v76; // r6
  _DWORD *v77; // r5
  int (*v78)(); // r4
  int v79; // r7
  int v80; // r4
  int v81; // r4
  char *v82; // r0
  void *v83; // r0
  int v84; // r1
  int *v85; // r7
  int v86; // r6
  int v87; // r0
  int v88; // r3
  bool v89; // zf
  unsigned int v90; // r3
  int v91; // r2
  unsigned int v93; // r4
  void *v94; // r0
  int *v95; // r3
  int *v96; // r4
  int v97; // r2
  int *v98; // r7
  int v99; // r1
  int v100; // r3
  size_t v101; // r6
  void *v102; // r7
  void *v103; // r0
  int v104; // r6
  unsigned int v105; // r2
  void *v106; // r0
  void *v107; // r0
  const void *v108; // r1
  char *v109; // r0
  unsigned int v110; // r2
  char *v111; // r0
  int *v112; // r3
  int v113; // r1
  int *v114; // r6
  int v115; // r2
  int *v116; // r4
  int v117; // r1
  int v118; // r3
  size_t v119; // r4
  void *v120; // r7
  void *v121; // r0
  int *v122; // r3
  int v123; // r1
  int *v124; // r6
  int v125; // r2
  int *v126; // r4
  int v127; // r1
  int v128; // r3
  size_t v129; // r4
  void *v130; // r7
  void *v131; // r0
  int *v132; // r4
  void *v133; // r0
  void *v134; // r0
  void *v135; // r0
  int v136; // r3
  void *v137; // r0
  void *v138; // r0
  _DWORD *v139; // r4
  int v140; // r7
  int v141; // r0
  int v142; // r3
  void *v143; // r0
  int v144; // r3
  unsigned int v145; // r1
  unsigned int v146; // r7
  int v147; // r0
  int v148; // r4
  int *v149; // r1
  const void *v150; // r1
  unsigned int v151; // r4
  const void *v152; // r7
  size_t v153; // [sp+8h] [bp-F4h]
  size_t v154; // [sp+8h] [bp-F4h]
  int v155; // [sp+Ch] [bp-F0h]
  int v156; // [sp+Ch] [bp-F0h]
  int v157; // [sp+18h] [bp-E4h]
  __int64 v158; // [sp+18h] [bp-E4h]
  _DWORD *v159; // [sp+24h] [bp-D8h]
  _DWORD *v160; // [sp+28h] [bp-D4h]
  size_t n; // [sp+38h] [bp-C4h]
  size_t na; // [sp+38h] [bp-C4h]
  size_t nb; // [sp+38h] [bp-C4h]
  size_t nc; // [sp+38h] [bp-C4h]
  int v167; // [sp+3Ch] [bp-C0h]
  unsigned int v168; // [sp+40h] [bp-BCh]
  unsigned int v169; // [sp+40h] [bp-BCh]
  void *v170; // [sp+44h] [bp-B8h]
  _DWORD v171[2]; // [sp+48h] [bp-B4h] BYREF
  int *v172; // [sp+50h] [bp-ACh] BYREF
  _DWORD *v173; // [sp+54h] [bp-A8h]
  int *v174; // [sp+58h] [bp-A4h] BYREF
  _DWORD *v175; // [sp+5Ch] [bp-A0h]
  int *v176; // [sp+60h] [bp-9Ch] BYREF
  _DWORD *v177; // [sp+64h] [bp-98h]
  void *v178; // [sp+68h] [bp-94h] BYREF
  int v179; // [sp+6Ch] [bp-90h]
  unsigned int v180; // [sp+70h] [bp-8Ch]
  char *v181[3]; // [sp+74h] [bp-88h] BYREF
  int v182; // [sp+80h] [bp-7Ch] BYREF
  int v183; // [sp+84h] [bp-78h] BYREF
  int *v184; // [sp+88h] [bp-74h]
  int *v185; // [sp+8Ch] [bp-70h]
  int *v186; // [sp+90h] [bp-6Ch]
  int v187; // [sp+94h] [bp-68h]
  _DWORD v188[2]; // [sp+98h] [bp-64h] BYREF
  __int64 ptr; // [sp+A0h] [bp-5Ch] BYREF
  int v190; // [sp+A8h] [bp-54h]
  int v191; // [sp+ACh] [bp-50h]
  _DWORD v192[2]; // [sp+B0h] [bp-4Ch] BYREF
  __int64 src; // [sp+B8h] [bp-44h]
  int v194; // [sp+C0h] [bp-3Ch]
  int v195; // [sp+C4h] [bp-38h]
  _DWORD v196[2]; // [sp+C8h] [bp-34h] BYREF
  __int64 v197; // [sp+D0h] [bp-2Ch]
  int v198; // [sp+D8h] [bp-24h]
  int v199; // [sp+DCh] [bp-20h]
  int v200; // [sp+E0h] [bp-1Ch]
  int v201; // [sp+E4h] [bp-18h]
  int v202; // [sp+E8h] [bp-14h]
  int v203; // [sp+ECh] [bp-10h]
  int v204; // [sp+F0h] [bp-Ch]

  v12 = *(_DWORD **)(a1 + 184);
  v13 = (_DWORD *)(a1 + 180);
  v191 = 0;
  v14 = (_DWORD *)(a1 + 180);
  v190 = 0;
  ptr = -1;
  v188[0] = -2;
  if ( !v12 )
    goto LABEL_10;
  do
  {
    v15 = v12[4];
    if ( a3 > v15 )
      v12 = (_DWORD *)v12[3];
    else
      v14 = v12;
    if ( a3 <= v15 )
      v12 = (_DWORD *)v12[2];
  }
  while ( v12 );
  if ( v13 == v14 || a3 < v14[4] )
  {
LABEL_10:
    v16 = sub_805CC(0x20u);
    HIDWORD(v17) = 0;
    v18 = v16;
    v16[4] = a3;
    v16[5] = 0;
    v19 = v16 + 4;
    v16[6] = 0;
    v16[7] = 0;
    if ( v13 == v14 )
    {
      if ( *(_DWORD *)(a1 + 196) )
      {
        LODWORD(v17) = *(_DWORD *)(a1 + 192);
        if ( a3 > *(_DWORD *)(v17 + 16) )
        {
          v14 = nullptr;
          goto LABEL_18;
        }
      }
      goto LABEL_82;
    }
    v20 = v14[4];
    if ( a3 < v20 )
    {
      if ( *(_DWORD **)(a1 + 188) == v14 )
      {
        LODWORD(v17) = v14;
        goto LABEL_18;
      }
      v21 = sub_812CC(v14);
      HIDWORD(v17) = *(_DWORD *)(v21 + 16);
      LODWORD(v17) = v21;
      if ( a3 > SHIDWORD(v17) )
      {
        if ( *(_DWORD *)(v21 + 12) )
          LODWORD(v17) = v14;
        else
          v14 = nullptr;
LABEL_18:
        if ( (_DWORD)v17 )
        {
          v22 = v17 == (_DWORD)v13;
          if ( v14 )
            v22 = 1;
          if ( v22 )
            goto LABEL_22;
          v20 = *(_DWORD *)(v17 + 16);
LABEL_103:
          v22 = a3 < v20;
LABEL_22:
          sub_8132C((_DWORD *)v22, v18, (_DWORD *)v17, (_DWORD *)(a1 + 180));
          v14 = v18;
          ++*(_DWORD *)(a1 + 196);
          goto LABEL_23;
        }
        goto LABEL_78;
      }
LABEL_82:
      LODWORD(v17) = v19;
      sub_55848(v171, a1 + 176, v17);
      v14 = (_DWORD *)v171[0];
      LODWORD(v17) = v171[1];
      goto LABEL_18;
    }
    if ( a3 > v20 )
    {
      if ( *(_DWORD **)(a1 + 192) != v14 )
      {
        v56 = sub_81290((int)v14);
        HIDWORD(v17) = *(_DWORD *)(v56 + 16);
        LODWORD(v17) = v56;
        if ( a3 >= SHIDWORD(v17) )
          goto LABEL_82;
        if ( v14[3] )
        {
          v14 = (_DWORD *)v56;
          goto LABEL_18;
        }
      }
      LODWORD(v17) = v14;
      if ( v14 )
        goto LABEL_103;
    }
LABEL_78:
    sub_80648(v18);
  }
LABEL_23:
  v24 = v14[7];
  v23 = v14[6];
  if ( v23 + 1 > v24 )
  {
    v41 = sub_77EB0((int)(v14 + 5), nullptr, v23 + 1, 0x18u);
    v42 = v14[7];
    v43 = v14[6];
    v44 = v41;
    v153 = (size_t)v41;
    v14[7] = v24;
    v45 = v43 - 1;
    v157 = v42;
    v46 = (char *)v14[5];
    if ( v45 >= 0 )
    {
      v47 = v46 + 24;
      na = (size_t)v14;
      do
      {
        *v44 = *((_DWORD *)v47 - 6);
        v48 = *((_DWORD *)v47 - 5);
        *((_DWORD *)v47 - 6) = 0;
        v44[1] = v48;
        v49 = *((_DWORD *)v47 - 4);
        *((_DWORD *)v47 - 5) = 0;
        v44[2] = v49;
        v50 = *((_DWORD *)v47 - 3);
        *((_DWORD *)v47 - 4) = 0;
        v44[3] = v50;
        v44[4] = *((_DWORD *)v47 - 2);
        *((_BYTE *)v44 + 20) = *(v47 - 4);
        v51 = *((char **)v47 - 6);
        if ( v51 )
        {
          v52 = *((_DWORD *)v47 - 5);
          if ( v52 )
          {
            for ( i = 0; i != v52; ++i )
            {
              v54 = (int *)&v51[24 * i];
              if ( *v54 >= -1 )
              {
                v55 = (void *)v54[2];
                if ( v55 )
                {
                  v54[3] = 0;
                  sub_77E08(v55);
                  v51 = *((char **)v47 - 6);
                }
              }
            }
          }
          *((_DWORD *)v47 - 5) = 0;
          sub_77E08(v51);
        }
        --v45;
        v44 += 6;
        v47 += 24;
      }
      while ( v45 != -1 );
      v14 = (_DWORD *)na;
      v46 = *(char **)(na + 20);
    }
    sub_77E08(v46);
    v23 = v14[6];
    v14[5] = v153;
    v14[7] = v157;
  }
  else
  {
    v153 = v14[5];
  }
  v25 = (void **)(v153 + 24 * v23);
  *v25 = nullptr;
  v25[1] = nullptr;
  v25[2] = nullptr;
  v25[3] = (void *)-1;
  v25[4] = (void *)-1;
  *((_BYTE *)v25 + 20) = 0;
  v26 = v14[6];
  v183 = 0;
  v184 = nullptr;
  v187 = 0;
  v14[6] = v26 + 1;
  v27 = *(_DWORD *)(a1 + 112);
  v185 = &v183;
  v186 = &v183;
  if ( (v27 & 0xFFFFFFF) == 7 )
  {
    v36 = 54;
    v37 = "last event was an exception, cannot perform an appcall";
    goto LABEL_50;
  }
  v28 = *(_DWORD *)(a1 + 348);
  if ( !v28 )
    v28 = *(_DWORD *)(a1 + 396);
  if ( (void *)v28 != v25[1] )
  {
    v194 = 0;
    v195 = 0;
    src = -1;
    v29 = (unsigned int)v25[1];
    v192[0] = -2;
    if ( v28 < v29 )
    {
      v59 = v28;
      v60 = 24 * v28;
      do
      {
        v61 = (int *)((char *)*v25 + v60);
        if ( *v61 >= -1 )
        {
          v62 = (void *)v61[2];
          if ( v62 )
          {
            v61[3] = 0;
            sub_77E08(v62);
          }
        }
        ++v59;
        v60 += 24;
      }
      while ( v29 != v59 );
    }
    else
    {
      if ( v28 <= v29 )
        goto LABEL_48;
      v30 = (char *)*v25;
      v31 = (unsigned int)v25[2];
      if ( *v25 <= v192 && v192 < (_DWORD *)&v30[24 * v31] )
      {
        v196[0] = -2;
        v198 = 0;
        v197 = -1;
        v199 = 0;
        if ( v28 > (unsigned int)v25[2] )
          *v25 = sub_77EB0((int)v25, *v25, v28, 0x18u);
        v75 = (unsigned int)v25[1];
        if ( v28 > v75 )
        {
          v76 = 24 * v75;
          do
          {
            v77 = (char *)*v25 + v76;
            *v77 = -2;
            v77[2] = 0;
            v77[3] = 0;
            v77[4] = 0;
            v77[5] = 0;
            if ( v77 != v196 )
            {
              v84 = v196[0];
              if ( v196[0] >= -1 )
              {
                v77[4] = 0;
                v77[2] = 0;
                v77[3] = 0;
                v154 = HIDWORD(v197);
                if ( HIDWORD(v197) )
                {
                  v83 = sub_77E84(SHIDWORD(v197));
                  v77[2] = v83;
                  v77[4] = v154;
                  memcpy(v83, (const void *)v197, v154);
                  v77[3] = v154;
                  v84 = v196[0];
                }
              }
              else
              {
                *((_QWORD *)v77 + 1) = v197;
              }
              *v77 = v84;
            }
            ++v75;
            v76 += 24;
          }
          while ( v28 != v75 );
        }
        v25[1] = (void *)v28;
        if ( v196[0] >= -1 && (_DWORD)v197 )
        {
          HIDWORD(v197) = 0;
          sub_77E08((void *)v197);
        }
        goto LABEL_45;
      }
      if ( v28 <= v31
        || (v35 = (char *)sub_77EB0((int)v25, v30, v28, 0x18u),
            v29 = (unsigned int)v25[1],
            v30 = v35,
            *v25 = v35,
            v28 > v29) )
      {
        v32 = 24 * v29;
        while ( 1 )
        {
          v34 = &v30[v32];
          *(_DWORD *)&v30[v32] = -2;
          *((_DWORD *)v34 + 2) = 0;
          *((_DWORD *)v34 + 3) = 0;
          *((_DWORD *)v34 + 4) = 0;
          *((_DWORD *)v34 + 5) = 0;
          if ( &v30[v32] != (char *)v192 )
          {
            v74 = v192[0];
            if ( v192[0] >= -1 )
            {
              *((_DWORD *)v34 + 2) = 0;
              *((_DWORD *)v34 + 3) = 0;
              v33 = HIDWORD(src);
              *((_DWORD *)v34 + 4) = 0;
              n = v33;
              if ( v33 )
              {
                v72 = sub_77E84(v33);
                *((_DWORD *)v34 + 2) = v72;
                v73 = (const void *)src;
                *((_DWORD *)v34 + 4) = n;
                memcpy(v72, v73, n);
                v74 = v192[0];
                *((_DWORD *)v34 + 3) = n;
              }
            }
            else
            {
              *((_QWORD *)v34 + 1) = src;
            }
            *(_DWORD *)v34 = v74;
          }
          ++v29;
          v32 += 24;
          if ( v28 <= v29 )
            break;
          v30 = (char *)*v25;
        }
      }
    }
    v25[1] = (void *)v28;
LABEL_45:
    if ( v192[0] >= -1 && (_DWORD)src )
    {
      HIDWORD(src) = 0;
      sub_77E08((void *)src);
    }
  }
LABEL_48:
  if ( (*(int (__fastcall **)(int, int, int, void *, _DWORD))(*(_DWORD *)a1 + 112))(a1, a3, -1, *v25, 0) != 1 )
  {
    v36 = 24;
    v37 = "failed to read registers";
LABEL_50:
    v38 = *(void **)a8;
    if ( v36 + 1 > *(_DWORD *)(a8 + 8) )
    {
      v38 = sub_77EB0(a8, *(void **)a8, v36 + 1, 1u);
      *(_DWORD *)a8 = v38;
    }
    *(_DWORD *)(a8 + 4) = v36 + 1;
    memmove(v38, v37, v36);
    *(_BYTE *)(*(_DWORD *)a8 + v36) = 0;
    goto LABEL_53;
  }
  v57 = *(int (__fastcall **)(int, void **))(*(_DWORD *)a1 + 228);
  if ( (char *)v57 == (char *)sub_52DF0 )
    v58 = sub_52DF0(a1, v25);
  else
    v58 = v57(a1, v25);
  if ( v58 == -1 )
  {
    v36 = 30;
    v37 = "failed to allocate stack frame";
    goto LABEL_50;
  }
  v63 = *(_DWORD *)(a1 + 144);
  v178 = nullptr;
  v64 = (v63 - 1 + a6[1]) & -v63;
  v179 = 0;
  v180 = 0;
  v39 = (v58 - v63 - v64) & 0xFFFFFFF0;
  v25[4] = (void *)(v39 + v64);
  v167 = sub_7E5F4(a6, v39, 0);
  if ( !v167 )
  {
    if ( v178 )
    {
      v179 = 0;
      sub_77E08(v178);
      v71 = 4;
      goto LABEL_106;
    }
    v104 = 4;
LABEL_272:
    v37 = off_CFDCC[v104];
    if ( !v37 )
      goto LABEL_108;
    goto LABEL_107;
  }
  v65 = *(_DWORD *)(a1 + 144);
  v66 = v179;
  nb = v65;
  if ( v65 )
  {
    v169 = v65 + v179;
    if ( __CFADD__(v65, v179) )
    {
      if ( (unsigned int)v179 > 0x7FFFFFFE )
      {
        if ( v179 < 0 )
          v179 = 0x7FFFFFFF;
        goto LABEL_146;
      }
      v169 = 0x7FFFFFFF;
    }
    else if ( v169 <= v179 )
    {
LABEL_146:
      memcpy((char *)v178 + v66, v25 + 4, nb);
      v66 = v179;
      goto LABEL_95;
    }
    v111 = (char *)v178;
    if ( v180 < v169 )
    {
      v111 = (char *)sub_77EB0((int)&v178, v178, v169, 1u);
      v178 = v111;
    }
    memset(&v111[v179], 0, v169 - v179);
    v179 = v169;
    goto LABEL_146;
  }
LABEL_95:
  v67 = a6[1];
  nc = v67;
  if ( !v67 )
    goto LABEL_96;
  v168 = v67 + v66;
  v170 = (void *)*a6;
  if ( __CFADD__(v67, v66) )
  {
    if ( v66 > 0x7FFFFFFE )
    {
      if ( (v66 & 0x80000000) != 0 )
        v179 = 0x7FFFFFFF;
      goto LABEL_140;
    }
    v168 = 0x7FFFFFFF;
    goto LABEL_212;
  }
  if ( v168 > v66 )
  {
LABEL_212:
    v109 = (char *)v178;
    if ( v180 < v168 )
    {
      v109 = (char *)sub_77EB0((int)&v178, v178, v168, 1u);
      v178 = v109;
      v110 = v179;
    }
    else
    {
      v110 = v66;
    }
    memset(&v109[v110], 0, v168 - v110);
    v179 = v168;
  }
LABEL_140:
  memcpy((char *)v178 + v66, v170, nc);
  v66 = v179;
LABEL_96:
  v68 = *(_DWORD *)(a1 + 144);
  v69 = v64 + v68;
  if ( v69 > v66 )
  {
    v82 = (char *)v178;
    if ( v69 > v180 )
    {
      v82 = (char *)sub_77EB0((int)&v178, v178, v69, 1u);
      v66 = v179;
      v178 = v82;
    }
    memset(&v82[v66], 0, v69 - v66);
    v179 = v69;
    v68 = *(_DWORD *)(a1 + 144);
  }
  else if ( v69 < v66 )
  {
    v179 = v69;
  }
  v70 = v39 - v68;
  v25[3] = (void *)v70;
  if ( v70 >= v58 )
  {
    if ( v178 )
    {
      v179 = 0;
      sub_77E08(v178);
      v71 = 2;
LABEL_106:
      v37 = off_CFDCC[v71];
LABEL_107:
      v36 = strlen(v37);
      if ( v36 )
        goto LABEL_50;
LABEL_108:
      *(_DWORD *)(a8 + 4) = 0;
      goto LABEL_53;
    }
    v104 = 2;
    goto LABEL_272;
  }
  v78 = *(int (**)())(*(_DWORD *)a1 + 224);
  if ( v78 == sub_52DC4 )
  {
    v79 = 0;
  }
  else
  {
    v79 = ((int (__fastcall *)(int, void **, int *, void **))v78)(a1, v25, &v182, &v178);
    v70 = (unsigned int)v25[3];
  }
  v80 = v179;
  v25[3] = (void *)(v79 + v70);
  v81 = v80 - v79;
  if ( v81 > 0
    && v81 != (*(int (__fastcall **)(int, unsigned int, char *, int, _DWORD))(*(_DWORD *)a1 + 148))(
                a1,
                v79 + v70,
                (char *)v178 + v79,
                v81,
                0) )
  {
    if ( !v178 )
    {
      v104 = 5;
      goto LABEL_272;
    }
    v179 = 0;
    sub_77E08(v178);
LABEL_131:
    v71 = 5;
    goto LABEL_106;
  }
  (*(void (__fastcall **)(int, _DWORD, int, void *, int))(*(_DWORD *)a1 + 156))(a1, 0, 4, v25[4], -1);
  if ( *(_DWORD *)(a5 + 4) )
  {
    v85 = *(int **)a5;
    v86 = **(_DWORD **)a5;
    if ( v86 == *(_DWORD *)(a1 + 400) || v86 == *(_DWORD *)(a1 + 404) )
    {
LABEL_189:
      v104 = 3;
      if ( v178 )
      {
        v179 = 0;
        sub_77E08(v178);
        v71 = 3;
        goto LABEL_106;
      }
      goto LABEL_272;
    }
    v155 = 0;
    while ( 1 )
    {
      v87 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 304))(a1, v86);
      v88 = *(unsigned __int8 *)(v87 + 9);
      v89 = v88 == 18;
      if ( v88 != 18 )
        v89 = v88 == 15;
      v90 = v88 - 3;
      v91 = v89;
      if ( v90 <= 2 ? v91 | 1 : v91 )
        break;
      v105 = v85[3];
      if ( v105 > 8 || (*(_DWORD *)(v87 + 4) & 0x100) != 0 )
      {
        if ( v188[0] >= -1 && (_DWORD)ptr )
        {
          HIDWORD(ptr) = 0;
          sub_77E08((void *)ptr);
        }
        v190 = 0;
        v93 = v85[3];
        ptr = 0;
        v188[0] = 0;
        if ( v93 )
        {
LABEL_195:
          LODWORD(ptr) = sub_77EB0((int)&ptr, nullptr, v93, 1u);
          memset((void *)(ptr + HIDWORD(ptr)), 0, v93 - HIDWORD(ptr));
          HIDWORD(ptr) = v93;
          v94 = (void *)ptr;
          v93 = v85[3];
          goto LABEL_165;
        }
LABEL_164:
        v94 = (void *)v93;
LABEL_165:
        memcpy(v94, (const void *)v85[2], v93);
        goto LABEL_166;
      }
      if ( v188[0] >= -1 )
      {
        if ( (_DWORD)ptr )
        {
          HIDWORD(ptr) = 0;
          sub_77E08((void *)ptr);
          v105 = v85[3];
        }
        v188[0] = -2;
      }
      _memcpy_chk(&ptr, v85[2], v105, 16);
      if ( v85[1] )
        ptr += v39;
LABEL_166:
      v95 = v184;
      v96 = &v183;
      if ( !v184 )
        goto LABEL_175;
      do
      {
        v97 = v95[4];
        if ( v97 < v86 )
          v95 = (int *)v95[3];
        else
          v96 = v95;
        if ( v97 >= v86 )
          v95 = (int *)v95[2];
      }
      while ( v95 );
      if ( v96 == &v183 || v96[4] > v86 )
      {
LABEL_175:
        v98 = (int *)sub_805CC(0x30u);
        v98[4] = v86;
        v98[10] = 0;
        v98[11] = 0;
        v98[6] = -2;
        v98[8] = -1;
        v98[9] = -1;
        sub_55910((int *)&v172, &v182, (int)v96, v98 + 4);
        v96 = v172;
        if ( v173 )
          v96 = sub_55818((int)&v182, (int)v172, v173, v98);
        else
          sub_80648(v98);
      }
      if ( v188 != v96 + 6 )
      {
        v99 = v188[0];
        v100 = v96[6];
        if ( v188[0] < -1 )
        {
          if ( v100 >= -1 )
          {
            v106 = (void *)v96[8];
            if ( v106 )
            {
              v96[9] = 0;
              sub_77E08(v106);
              v99 = v188[0];
            }
          }
          *((_QWORD *)v96 + 4) = ptr;
        }
        else
        {
          v101 = HIDWORD(ptr);
          if ( v100 < -1 )
          {
            v96[8] = 0;
            v96[9] = 0;
            v96[10] = 0;
            if ( v101 )
            {
              v107 = sub_77E84(v101);
              v108 = (const void *)ptr;
              v96[8] = (int)v107;
              v96[10] = v101;
              memcpy(v107, v108, v101);
              v96[9] = v101;
              v99 = v188[0];
            }
          }
          else
          {
            v102 = (void *)HIDWORD(ptr);
            if ( HIDWORD(ptr) )
            {
              v102 = sub_77E84(SHIDWORD(ptr));
              memcpy(v102, (const void *)ptr, v101);
            }
            v103 = (void *)v96[8];
            if ( v103 )
            {
              v96[9] = 0;
              sub_77E08(v103);
            }
            v99 = v188[0];
            v96[8] = (int)v102;
            v96[9] = v101;
            v96[10] = v101;
          }
        }
        v96[6] = v99;
      }
      if ( (unsigned int)++v155 >= *(_DWORD *)(a5 + 4) )
        goto LABEL_220;
      v86 = *(_DWORD *)(*(_DWORD *)a5 + 20 * v155);
      v85 = (int *)(*(_DWORD *)a5 + 20 * v155);
      if ( v86 == *(_DWORD *)(a1 + 400) || v86 == *(_DWORD *)(a1 + 404) )
        goto LABEL_189;
    }
    if ( v188[0] >= -1 && (_DWORD)ptr )
    {
      HIDWORD(ptr) = 0;
      sub_77E08((void *)ptr);
    }
    v190 = 0;
    v93 = v85[3];
    ptr = 0;
    v188[0] = -1;
    if ( v93 )
      goto LABEL_195;
    goto LABEL_164;
  }
LABEL_220:
  if ( v188[0] >= -1 )
  {
    if ( (_DWORD)ptr )
    {
      HIDWORD(ptr) = 0;
      sub_77E08((void *)ptr);
    }
    v188[0] = -2;
  }
  v112 = v184;
  ptr = (unsigned int)v25[3];
  if ( !v184 )
  {
    v114 = &v183;
LABEL_234:
    v116 = (int *)sub_805CC(0x30u);
    v117 = *(_DWORD *)(a1 + 400);
    v116[8] = -1;
    v116[9] = -1;
    v116[6] = -2;
    v116[4] = v117;
    v116[10] = 0;
    v116[11] = 0;
    sub_55910((int *)&v174, &v182, (int)v114, v116 + 4);
    v114 = v174;
    if ( v175 )
      v114 = sub_55818((int)&v182, (int)v174, v175, v116);
    else
      sub_80648(v116);
    goto LABEL_236;
  }
  v113 = *(_DWORD *)(a1 + 400);
  v114 = &v183;
  do
  {
    v115 = v112[4];
    if ( v115 < v113 )
      v112 = (int *)v112[3];
    else
      v114 = v112;
    if ( v115 >= v113 )
      v112 = (int *)v112[2];
  }
  while ( v112 );
  if ( v114 == &v183 || v113 < v114[4] )
    goto LABEL_234;
LABEL_236:
  if ( v188 != v114 + 6 )
  {
    v118 = v114[6];
    if ( v188[0] < -1 )
    {
      if ( v118 >= -1 )
      {
        v135 = (void *)v114[8];
        if ( v135 )
        {
          v114[9] = 0;
          sub_77E08(v135);
        }
      }
      *((_QWORD *)v114 + 4) = ptr;
    }
    else
    {
      v119 = HIDWORD(ptr);
      if ( v118 < -1 )
      {
        v114[8] = 0;
        v114[9] = 0;
        v114[10] = 0;
        if ( v119 )
        {
          v137 = sub_77E84(v119);
          v114[8] = (int)v137;
          v114[10] = v119;
          memcpy(v137, (const void *)ptr, v119);
          v114[9] = v119;
        }
      }
      else
      {
        v120 = (void *)HIDWORD(ptr);
        if ( HIDWORD(ptr) )
        {
          v120 = sub_77E84(SHIDWORD(ptr));
          memcpy(v120, (const void *)ptr, v119);
        }
        v121 = (void *)v114[8];
        if ( v121 )
        {
          v114[9] = 0;
          sub_77E08(v121);
        }
        v114[8] = (int)v120;
        v114[9] = v119;
        v114[10] = v119;
      }
    }
    v114[6] = v188[0];
  }
  v122 = v184;
  ptr = a2;
  if ( v184 )
  {
    v123 = *(_DWORD *)(a1 + 404);
    v124 = &v183;
    do
    {
      v125 = v122[4];
      if ( v125 < v123 )
        v122 = (int *)v122[3];
      else
        v124 = v122;
      if ( v125 >= v123 )
        v122 = (int *)v122[2];
    }
    while ( v122 );
    if ( v124 != &v183 && v123 >= v124[4] )
      goto LABEL_257;
  }
  else
  {
    v124 = &v183;
  }
  v126 = (int *)sub_805CC(0x30u);
  v127 = *(_DWORD *)(a1 + 404);
  v126[8] = -1;
  v126[9] = -1;
  v126[6] = -2;
  v126[4] = v127;
  v126[10] = 0;
  v126[11] = 0;
  sub_55910((int *)&v176, &v182, (int)v124, v126 + 4);
  v124 = v176;
  if ( v177 )
    v124 = sub_55818((int)&v182, (int)v176, v177, v126);
  else
    sub_80648(v126);
LABEL_257:
  if ( v188 != v124 + 6 )
  {
    v128 = v124[6];
    if ( v188[0] < -1 )
    {
      if ( v128 >= -1 )
      {
        v134 = (void *)v124[8];
        if ( v134 )
        {
          v124[9] = 0;
          sub_77E08(v134);
        }
      }
      *((_QWORD *)v124 + 4) = ptr;
    }
    else
    {
      v129 = HIDWORD(ptr);
      if ( v128 < -1 )
      {
        v124[8] = 0;
        v124[9] = 0;
        v124[10] = 0;
        if ( v129 )
        {
          v138 = sub_77E84(v129);
          v124[8] = (int)v138;
          v124[10] = v129;
          memcpy(v138, (const void *)ptr, v129);
          v124[9] = v129;
        }
      }
      else
      {
        v130 = (void *)HIDWORD(ptr);
        if ( HIDWORD(ptr) )
        {
          v130 = sub_77E84(SHIDWORD(ptr));
          memcpy(v130, (const void *)ptr, v129);
        }
        v131 = (void *)v124[8];
        if ( v131 )
        {
          v124[9] = 0;
          sub_77E08(v131);
        }
        v124[8] = (int)v130;
        v124[9] = v129;
        v124[10] = v129;
      }
    }
    v124[6] = v188[0];
  }
  v132 = v185;
  if ( v185 != &v183 )
  {
    while ( (*(int (__fastcall **)(int, int, int, int *, _DWORD))(*(_DWORD *)a1 + 116))(a1, a3, v132[4], v132 + 6, 0) == 1 )
    {
      *((_BYTE *)v25 + 20) = 1;
      v132 = (int *)sub_81290((int)v132);
      if ( v132 == &v183 )
        goto LABEL_275;
    }
    v104 = 6;
    if ( v178 )
    {
      v179 = 0;
      sub_77E08(v178);
    }
    goto LABEL_272;
  }
LABEL_275:
  v104 = a10 & 1;
  if ( (a10 & 1) != 0 )
  {
    v133 = v178;
    if ( !v178 )
      goto LABEL_54;
LABEL_277:
    v179 = 0;
    sub_77E08(v133);
    goto LABEL_54;
  }
  v136 = *(_DWORD *)a1;
  *(_BYTE *)(a1 + 108) = 1;
  v159 = (_DWORD *)(a1 + 96);
  if ( (*(int (__fastcall **)(int))(v136 + 84))(a1) != 1 )
  {
    if ( v178 )
    {
      v179 = 0;
      sub_77E08(v178);
      v71 = 9;
      goto LABEL_106;
    }
    v104 = 9;
    goto LABEL_272;
  }
  v196[0] = -1;
  LODWORD(v197) = -1;
  v139 = a9;
  if ( !a9 )
    v139 = v196;
  v196[1] = 0;
  BYTE4(v197) = 0;
  v198 = 0;
  v199 = 0;
  v200 = 0;
  v201 = 0;
  v202 = 0;
  v203 = 0;
  v204 = 0;
  v160 = v139;
  v156 = a10 & 4;
  if ( (a10 & 4) != 0 )
  {
    v140 = HIWORD(a10);
    v156 = 1;
    if ( HIWORD(a10) )
      v158 = 1000000LL * v140 + sub_78D7C();
    else
      v158 = 0;
  }
  else
  {
    v140 = 40;
    v158 = 0;
  }
  while ( 1 )
  {
    do
    {
      if ( v156 )
      {
        if ( v156 == 2 )
        {
          if ( v140 <= 0 || (v140 = (v158 - sub_78D7C()) / 1000000, v140 <= 0) )
          {
            v104 = 12;
            if ( (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 76))(a1, 0) <= 0 )
              goto LABEL_323;
          }
        }
        else
        {
          v156 = 2;
        }
      }
      v141 = (*(int (__fastcall **)(int, _DWORD *, int))(*(_DWORD *)a1 + 68))(a1, v139, v140);
    }
    while ( !v141 );
    if ( v141 == -1 )
    {
      v104 = 8;
      goto LABEL_323;
    }
    v142 = v139[4] & 0xFFFFFFF;
    if ( v142 == 2 || v142 == 4 && v139[1] == a3 )
    {
      sub_5A95C(a1, (int)v139, 8u);
      v39 = -1;
      goto LABEL_329;
    }
    if ( v104 == 12 )
    {
      sub_5A95C(a1, (int)v139, 0xAu);
      sub_6E3C0(v139, 0);
LABEL_374:
      sub_6E3C0(v159, 0);
      v167 = 0;
LABEL_329:
      if ( !v104 && !v167 )
      {
        if ( a4 > 0 )
        {
          if ( (unsigned int)a4 > a6[1] )
          {
            sub_6E318(v196);
            if ( !v178 )
              goto LABEL_131;
LABEL_334:
            v179 = 0;
            sub_77E08(v178);
            v144 = 5;
            goto LABEL_335;
          }
          if ( a4 != (*(int (__fastcall **)(int, unsigned int, _DWORD, int, _DWORD))(*(_DWORD *)a1 + 148))(
                       a1,
                       v39,
                       *a6,
                       a4,
                       0) )
          {
            sub_6E318(v196);
            if ( !v178 )
              goto LABEL_131;
            goto LABEL_334;
          }
        }
        if ( a7 && a7[1] )
        {
          v145 = *(_DWORD *)(a1 + 348);
          memset(v181, 0, sizeof(v181));
          if ( !v145 )
            v145 = *(_DWORD *)(a1 + 396);
          sub_54F24(v181, v145);
          if ( (*(int (__fastcall **)(int, int, int, char *, _DWORD))(*(_DWORD *)a1 + 112))(a1, a3, -1, v181[0], 0) <= 0 )
          {
            sub_5514C(v181);
            sub_6E318(v196);
            if ( !v178 )
            {
              v71 = 1;
              goto LABEL_106;
            }
            v179 = 0;
            sub_77E08(v178);
            v144 = 1;
LABEL_335:
            v37 = off_CFDCC[v144];
            goto LABEL_107;
          }
          v146 = 0;
          while ( v146 < a7[1] )
          {
            v147 = 20 * v146++;
            v148 = *a7 + v147;
            v149 = (int *)&v181[0][24 * *(_DWORD *)v148];
            if ( *v149 < -1 )
              v150 = v149 + 2;
            else
              v150 = (const void *)v149[2];
            memcpy(*(void **)(v148 + 8), v150, *(_DWORD *)(v148 + 12));
            *(_DWORD *)(v148 + 4) = 0;
          }
          sub_5514C(v181);
        }
        sub_6E318(v196);
        v133 = v178;
        if ( !v178 )
          goto LABEL_54;
        goto LABEL_277;
      }
      sub_6E318(v196);
      v143 = v178;
      if ( !v178 )
      {
LABEL_325:
        if ( !v104 )
          goto LABEL_54;
        goto LABEL_272;
      }
LABEL_324:
      v179 = 0;
      sub_77E08(v143);
      goto LABEL_325;
    }
    if ( (*(int (__fastcall **)(int, int, _DWORD *, void *))(*(_DWORD *)a1 + 232))(a1, a3, v139, v25[4]) )
      goto LABEL_374;
    if ( (v139[4] & 0xFFFFFFF) == 7 )
      break;
    if ( sub_5A95C(a1, (int)v139, 0xAu) )
    {
      v104 = 7;
LABEL_323:
      sub_6E318(v196);
      v143 = v178;
      if ( !v178 )
        goto LABEL_272;
      goto LABEL_324;
    }
    (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 84))(a1, v139);
    sub_6E3C0(v139, 0);
  }
  if ( (a10 & 2) == 0 && (_DWORD *)a8 != v139 + 8 )
  {
    v151 = v139[9];
    if ( v151 > 1 )
    {
      v152 = (const void *)v160[8];
      if ( v151 > *(_DWORD *)(a8 + 8) )
        *(_DWORD *)a8 = sub_77EB0(a8, *(void **)a8, v160[9], 1u);
      *(_DWORD *)(a8 + 4) = v151;
      memmove(*(void **)a8, v152, v151 - 1);
      *(_BYTE *)(*(_DWORD *)a8 + v151 - 1) = 0;
    }
    else
    {
      *(_DWORD *)(a8 + 4) = 0;
    }
  }
  sub_6E3C0(v159, 0);
  *(_BYTE *)(a1 + 108) = 1;
  sub_6E318(v196);
  if ( v178 )
  {
    v179 = 0;
    sub_77E08(v178);
  }
LABEL_53:
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 216))(a1, a3);
  v39 = -1;
LABEL_54:
  sub_557E4((int)&v182, v184);
  if ( v188[0] >= -1 && (_DWORD)ptr )
  {
    HIDWORD(ptr) = 0;
    sub_77E08((void *)ptr);
  }
  return v39;
}
// 56890: conditional instruction was optimized away because r6.4 is in (7..8|==C)
// 140D0: using guessed type int __fastcall _memcpy_chk(_DWORD, _DWORD, _DWORD, _DWORD);
// 812CC: using guessed type int __fastcall sub_812CC(_DWORD);
// CFDCC: using guessed type char *off_CFDCC[13];
