/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43E4C
// Address: 0x00043E4C

//----- (00043E4C) --------------------------------------------------------
int __fastcall sub_43E4C(int a1, unsigned __int8 *a2, const char *a3, signed int a4, int **a5)
{
  int v6; // r2
  int v7; // r5
  unsigned int v8; // r0
  unsigned int v9; // r4
  unsigned int v10; // r5
  unsigned int v11; // r7
  int v12; // r6
  _BYTE *v13; // r0
  size_t v14; // r7
  int v15; // r0
  int v16; // r6
  _DWORD *v17; // r2
  unsigned int v18; // r4
  _BYTE *v19; // r0
  int v20; // r0
  _DWORD *v21; // r2
  size_t v22; // r6
  int v23; // r0
  int v24; // r7
  unsigned int v25; // r4
  _BYTE *v26; // r0
  char *idcv_attr; // r7
  unsigned int v28; // r5
  unsigned int v29; // r0
  int i; // r1
  char v31; // r2
  _DWORD *v32; // r0
  char v33; // r4
  char v34; // r1
  int v35; // r1
  int v36; // r7
  _BYTE *v37; // r1
  char v38; // r4
  _DWORD *v39; // r2
  int v40; // r0
  int v41; // r7
  _BYTE *v42; // r1
  char v43; // r4
  unsigned int v44; // r0
  int v45; // r0
  int v46; // r7
  void *v47; // r1
  char v48; // r4
  unsigned int v49; // r0
  int v50; // r0
  int v51; // r6
  void *v52; // r1
  _DWORD *v53; // r7
  int v54; // r0
  _DWORD *v55; // r2
  size_t v56; // r5
  int v57; // r0
  int v58; // r4
  unsigned int v59; // r6
  _BYTE *v60; // r1
  _BYTE *v61; // r0
  void *v62; // r0
  const char *v63; // r1
  int v64; // r0
  _DWORD *v65; // r2
  int v66; // r0
  int v67; // r4
  unsigned int v68; // r6
  int v69; // r0
  _DWORD *v70; // r2
  size_t v71; // r3
  int v72; // r0
  int v73; // r4
  size_t v74; // r1
  unsigned int v75; // r6
  size_t v76; // r5
  _BYTE *v77; // r0
  int v78; // r0
  const char *v79; // r1
  int v80; // r0
  _DWORD *v81; // r2
  size_t v82; // r3
  int v83; // r0
  int v84; // r4
  size_t v85; // r5
  unsigned int v86; // r6
  _BYTE *v87; // r0
  int v88; // r2
  const char *v89; // r2
  _BYTE *v90; // r0
  int **v91; // r6
  int **v92; // r4
  unsigned int v93; // r0
  int *v94; // r0
  _DWORD *v95; // r1
  _DWORD *v96; // r0
  int v97; // r0
  _DWORD *v98; // r2
  size_t v99; // r3
  int v100; // r0
  int v101; // r4
  size_t v102; // r5
  unsigned int v103; // r6
  _BYTE *v104; // r0
  int *v105; // r1
  int *v106; // r0
  unsigned __int8 *v107; // r6
  int v108; // r2
  unsigned int v109; // r0
  unsigned int v110; // r4
  unsigned int v111; // r6
  int v112; // r0
  unsigned __int8 *v113; // r1
  int **v114; // r4
  int **v115; // r6
  char *v116; // r1
  int *v117; // r1
  char **v118; // r1
  void **v119; // r4
  void **v120; // r0
  void ****v121; // r0
  bool v122; // zf
  void ***v123; // r1
  int *v124; // r7
  char *v125; // r2
  int *v126; // r0
  _DWORD *v127; // r0
  int v128; // r1
  _BYTE *v129; // r0
  void *v130; // r0
  int v131; // r4
  int v132; // r0
  int v133; // r4
  _DWORD *v134; // r5
  _BYTE *v135; // r0
  int *v136; // r0
  int *v137; // r4
  int *v138; // r1
  unsigned int v139; // r2
  int **v140; // r3
  int *v141; // r2
  int **v142; // r1
  _DWORD *v143; // r2
  int v144; // r3
  size_t v147; // [sp+1Ch] [bp-464h]
  unsigned __int8 *v148; // [sp+20h] [bp-460h]
  const char *v149; // [sp+24h] [bp-45Ch]
  size_t v150; // [sp+24h] [bp-45Ch]
  size_t v151; // [sp+24h] [bp-45Ch]
  int **v152; // [sp+24h] [bp-45Ch]
  int v153; // [sp+28h] [bp-458h]
  int v154; // [sp+2Ch] [bp-454h]
  char *v155[3]; // [sp+30h] [bp-450h] BYREF
  int *v156; // [sp+3Ch] [bp-444h] BYREF
  _DWORD *v157[2]; // [sp+40h] [bp-440h] BYREF
  void **v158; // [sp+48h] [bp-438h] BYREF
  int **v159; // [sp+4Ch] [bp-434h] BYREF
  int v160; // [sp+50h] [bp-430h]
  char v161[8]; // [sp+54h] [bp-42Ch] BYREF
  unsigned __int8 v162[8]; // [sp+5Ch] [bp-424h] BYREF
  void *v163; // [sp+64h] [bp-41Ch]
  int v164; // [sp+68h] [bp-418h]
  int v165; // [sp+6Ch] [bp-414h]
  int v166; // [sp+70h] [bp-410h]
  char v167[1032]; // [sp+78h] [bp-408h] BYREF

  v6 = a1;
  v148 = a2;
  if ( a3 )
  {
    v7 = a1;
    v149 = a3;
    if ( a4 >= 1 )
    {
      v8 = *(_DWORD *)(a1 + 4);
      v9 = v8 - 1;
      if ( !v8 )
        v9 = 0;
      v10 = v9 + a4;
      v11 = v9 + a4 + 1;
      if ( v8 < v11 )
      {
        if ( *(_DWORD *)(v6 + 8) >= v11 )
        {
          v13 = *(_BYTE **)v6;
        }
        else
        {
          v12 = v6;
          v13 = qvector_reserve(v6, *(void **)v6, v9 + a4 + 1, 1u);
          v6 = v12;
          a3 = v149;
          *(_DWORD *)v6 = v13;
        }
        *(_DWORD *)(v6 + 4) = v11;
        v13[v10] = 0;
      }
      v7 = v6;
      memset((void *)(*(_DWORD *)v6 + v9), 32, a4);
    }
    v14 = strlen(a3);
    v15 = *(_DWORD *)(v7 + 4);
    v16 = v15 - 1;
    v17 = (_DWORD *)v7;
    if ( !v15 )
      v16 = 0;
    v18 = v16 + v14 + 1;
    if ( *(_DWORD *)(v7 + 8) >= v18 )
    {
      v19 = *(_BYTE **)v7;
    }
    else
    {
      v19 = qvector_reserve(v7, *(void **)v7, v16 + v14 + 1, 1u);
      v17 = (_DWORD *)v7;
      *(_DWORD *)v7 = v19;
    }
    v17[1] = v18;
    v19[v16 + v14] = 0;
    memmove((void *)(*v17 + v16), v149, v14);
    v20 = _strlen_chk(": ", 3);
    v21 = (_DWORD *)v7;
    v22 = v20;
    v23 = *(_DWORD *)(v7 + 4);
    v24 = v23 - 1;
    if ( !v23 )
      v24 = 0;
    v25 = v24 + v22 + 1;
    if ( *(_DWORD *)(v7 + 8) >= v25 )
    {
      v26 = *(_BYTE **)v7;
    }
    else
    {
      v26 = qvector_reserve(v7, *(void **)v7, v24 + v22 + 1, 1u);
      v21 = (_DWORD *)v7;
      *(_DWORD *)v7 = v26;
    }
    v21[1] = v25;
    v26[v24 + v22] = 0;
    memmove((void *)(*v21 + v24), ": ", v22);
    v6 = v7;
    a2 = v148;
  }
  v162[0] = 2;
  idcv_attr = nullptr;
  v166 = 0;
  v165 = 0;
  v164 = 0;
  v163 = nullptr;
  v153 = v6;
  switch ( *a2 )
  {
    case 2u:
      v28 = *((_DWORD *)v148 + 2);
      sub_28C8C(v6, "%11d. %8Xh %11oo ", v28, v28, v28);
      v29 = 0x80000000;
      for ( i = 0; i != 32; ++i )
      {
        v31 = 48;
        if ( (v29 & v28) != 0 )
          v31 = 49;
        v167[i] = v31;
        v29 >>= 1;
      }
      v167[32] = 0;
      sub_28C8C(v153, "%sb '", v167);
      v32 = (_DWORD *)v153;
      v33 = 46;
      v34 = 46;
      if ( (unsigned __int8)v28 != 255 )
        v34 = v28;
      if ( (unsigned __int8)v28 >= 0x20u )
        v33 = v34;
      v35 = *(_DWORD *)(v153 + 4);
      v36 = v35 - 1;
      if ( !v35 )
        v36 = 0;
      v37 = *(_BYTE **)v153;
      if ( *(_DWORD *)(v153 + 8) < (unsigned int)(v36 + 2) )
      {
        v37 = qvector_reserve(v153, v37, v36 + 2, 1u);
        v32 = (_DWORD *)v153;
        *(_DWORD *)v153 = v37;
      }
      v32[1] = v36 + 2;
      v37[v36] = v33;
      *(_BYTE *)(*v32 + v36 + 1) = 0;
      v38 = 46;
      LOBYTE(v37) = 46;
      if ( BYTE1(v28) != 255 )
        v37 = (_BYTE *)(v28 >> 8);
      if ( BYTE1(v28) >= 0x20u )
        v38 = (char)v37;
      v39 = (_DWORD *)v153;
      v40 = *(_DWORD *)(v153 + 4);
      v41 = v40 - 1;
      if ( !v40 )
        v41 = 0;
      v42 = *(_BYTE **)v153;
      if ( *(_DWORD *)(v153 + 8) < (unsigned int)(v41 + 2) )
      {
        v42 = qvector_reserve(v153, v42, v41 + 2, 1u);
        v39 = (_DWORD *)v153;
        *(_DWORD *)v153 = v42;
      }
      v39[1] = v41 + 2;
      v42[v41] = v38;
      *(_BYTE *)(*v39 + v41 + 1) = 0;
      v43 = 46;
      LOBYTE(v44) = 46;
      if ( BYTE2(v28) != 255 )
        v44 = HIWORD(v28);
      if ( BYTE2(v28) >= 0x20u )
        v43 = v44;
      v45 = v39[1];
      v46 = v45 - 1;
      if ( !v45 )
        v46 = 0;
      v47 = (void *)*v39;
      if ( v39[2] < (unsigned int)(v46 + 2) )
      {
        v47 = qvector_reserve((int)v39, v47, v46 + 2, 1u);
        v39 = (_DWORD *)v153;
        *(_DWORD *)v153 = v47;
      }
      v39[1] = v46 + 2;
      *((_BYTE *)v47 + v46) = v43;
      *(_BYTE *)(*v39 + v46 + 1) = 0;
      v48 = 46;
      LOBYTE(v49) = 46;
      if ( HIBYTE(v28) != 255 )
        v49 = HIBYTE(v28);
      if ( v28 >> 29 )
        v48 = v49;
      v50 = v39[1];
      v51 = v50 - 1;
      if ( !v50 )
        v51 = 0;
      v52 = (void *)*v39;
      if ( v39[2] < (unsigned int)(v51 + 2) )
      {
        v53 = v39;
        v52 = qvector_reserve((int)v39, v52, v51 + 2, 1u);
        *v53 = v52;
        v39 = v53;
      }
      v39[1] = v51 + 2;
      *((_BYTE *)v52 + v51) = v48;
      *(_BYTE *)(*v39 + v51 + 1) = 0;
      v54 = _strlen_chk("'", 2);
      v55 = (_DWORD *)v153;
      v56 = v54;
      v57 = *(_DWORD *)(v153 + 4);
      v58 = v57 - 1;
      if ( !v57 )
        v58 = 0;
      v59 = v58 + v56 + 1;
      v60 = *(_BYTE **)v153;
      if ( *(_DWORD *)(v153 + 8) < v59 )
      {
        v61 = qvector_reserve(v153, v60, v58 + v56 + 1, 1u);
        v55 = (_DWORD *)v153;
        v60 = v61;
        *(_DWORD *)v153 = v61;
      }
      v55[1] = v59;
      v60[v58 + v56] = 0;
      v62 = (void *)(*v55 + v58);
      v63 = "'";
      goto LABEL_92;
    case 3u:
      copy_idcv(v162, v148);
      v148 = v162;
      idcv_string((int)v162);
      goto LABEL_76;
    case 5u:
      v80 = _strlen_chk("object", 7);
      v81 = (_DWORD *)v153;
      v82 = v80;
      v83 = *(_DWORD *)(v153 + 4);
      v84 = v83 - 1;
      if ( !v83 )
        v84 = 0;
      v85 = v84 + v82;
      v86 = v84 + v82 + 1;
      if ( *(_DWORD *)(v153 + 8) >= v86 )
      {
        v87 = *(_BYTE **)v153;
      }
      else
      {
        v151 = v82;
        v87 = qvector_reserve(v153, *(void **)v153, v86, 1u);
        v82 = v151;
        v81 = (_DWORD *)v153;
        *(_DWORD *)v153 = v87;
      }
      v81[1] = v86;
      v87[v85] = 0;
      memmove((void *)(*v81 + v84), "object", v82);
      v160 = 0;
      v159 = nullptr;
      v158 = (void **)&v159;
      v157[1] = nullptr;
      v157[0] = nullptr;
      v156 = (int *)v157;
      if ( *v148 == 5 )
      {
        v95 = *((_DWORD **)v148 + 2);
        v96 = (_DWORD *)*v95;
        if ( (_DWORD *)*v95 != v95 + 1 )
        {
          if ( v96[5] )
            idcv_attr = (char *)v96[4];
          else
            idcv_attr = &byte_B3CBE;
        }
      }
LABEL_128:
      if ( idcv_attr )
      {
        v112 = (unsigned __int8)*idcv_attr;
        if ( *idcv_attr )
        {
          if ( v112 == 48 )
          {
            if ( !idcv_attr[1] )
            {
LABEL_137:
              qsscanf((int)idcv_attr, "%u");
              v114 = v159;
              if ( !v159 )
              {
                v115 = (int **)&v159;
                v114 = (int **)&v159;
                goto LABEL_149;
              }
              v115 = (int **)&v159;
              while ( 1 )
              {
                v116 = (char *)v114[4];
                if ( v155[0] >= v116 )
                {
                  if ( v116 >= v155[0] )
                    goto LABEL_149;
                  v117 = v114[1];
                  v115 = v114 + 1;
                  if ( !v117 )
                    goto LABEL_149;
                  ++v114;
                }
                else
                {
                  v117 = *v114;
                  if ( !*v114 )
                  {
                    v115 = v114;
LABEL_149:
                    if ( !*v115 )
                    {
                      v118 = (char **)operator new(0x14u);
                      v118[4] = v155[0];
                      *v118 = nullptr;
                      v118[1] = nullptr;
                      v118[2] = (char *)v114;
                      *v115 = (int *)v118;
                      if ( *v158 )
                      {
                        v158 = (void **)*v158;
                        v118 = (char **)*v115;
                      }
                      sub_261FA((int *)v159, (int *)v118);
                      ++v160;
                    }
LABEL_153:
                    idcv_attr = next_idcv_attr((int)v148, idcv_attr);
                    goto LABEL_128;
                  }
                }
                v115 = v114;
                v114 = (int **)v117;
              }
            }
          }
          else
          {
            v113 = (unsigned __int8 *)(idcv_attr + 1);
            while ( (v112 & 0x80u) == 0 && (unsigned int)(unsigned __int8)v112 - 48 <= 9 )
            {
              v112 = *v113++;
              if ( !v112 )
                goto LABEL_137;
            }
          }
        }
        sub_1B09C((int)v155, idcv_attr);
        sub_4D6F0((int)v161, &v156, (int)v155, v155);
        if ( v155[0] )
        {
          v155[1] = nullptr;
          qfree(v155[0]);
          v155[2] = nullptr;
          v155[0] = nullptr;
        }
        goto LABEL_153;
      }
      v119 = v158;
      while ( v119 != (void **)&v159 )
      {
        qsnprintf(v167, 1024, "%u");
        sub_4D5D0(v153, (int)v148, v167, a4 + 2);
        v120 = (void **)v119[1];
        if ( v120 )
        {
          do
          {
            v119 = v120;
            v120 = (void **)*v120;
          }
          while ( v120 );
        }
        else
        {
          v121 = (void ****)(v119 + 2);
          v122 = *(_DWORD *)v119[2] == (_DWORD)v119;
          v119 = (void **)v119[2];
          if ( !v122 )
          {
            do
            {
              v123 = *v121;
              v121 = (void ****)(*v121 + 2);
              v119 = v123[2];
            }
            while ( *v119 != v123 );
          }
        }
      }
      v124 = v156;
      while ( v124 != (int *)v157 )
      {
        v125 = &byte_B3CBE;
        if ( v124[5] )
          v125 = (char *)v124[4];
        sub_4D5D0(v153, (int)v148, v125, a4 + 2);
        v126 = (int *)v124[1];
        if ( v126 )
        {
          do
          {
            v124 = v126;
            v126 = (int *)*v126;
          }
          while ( v126 );
        }
        else
        {
          v127 = v124 + 2;
          v122 = *(_DWORD *)v124[2] == (_DWORD)v124;
          v124 = (int *)v124[2];
          if ( !v122 )
          {
            do
            {
              v128 = *v127;
              v127 = (_DWORD *)(*v127 + 8);
              v124 = *(int **)(v128 + 8);
            }
            while ( *v124 != v128 );
          }
        }
      }
      sub_4D7C0((int)&v156, v157[0]);
      sub_25078((int)&v158, v159);
      goto LABEL_196;
    case 6u:
      sub_28C8C(v6, "function (idx=%d)", *((_DWORD *)v148 + 2));
      goto LABEL_196;
    case 7u:
LABEL_76:
      v159 = nullptr;
      v158 = nullptr;
      v160 = 0;
      v78 = *((_DWORD *)v148 + 3);
      if ( v78 )
        v79 = *((const char **)v148 + 2);
      else
        v79 = &byte_B3CBE;
      v88 = v78 - 1;
      if ( !v78 )
        v88 = 0;
      qstr2user((int)&v158, v79, v88);
      if ( v159 )
        v89 = (const char *)v158;
      else
        v89 = &byte_B3CBE;
      sub_28C8C(v153, "\"%s\"", v89);
      if ( v158 )
      {
        v159 = nullptr;
        qfree(v158);
        v160 = 0;
        v158 = nullptr;
      }
      goto LABEL_196;
    case 8u:
      sub_28C8C(v6, "pvoid (%p)", *((const void **)v148 + 2));
      goto LABEL_196;
    case 9u:
      sub_28C8C(v6, "0x%llXi64", *((_QWORD *)v148 + 1));
      goto LABEL_196;
    case 0xAu:
      v69 = _strlen_chk("ref (", 6);
      v70 = (_DWORD *)v153;
      v71 = v69;
      v72 = *(_DWORD *)(v153 + 4);
      v73 = v72 - 1;
      if ( !v72 )
        v73 = 0;
      v74 = v73 + v71;
      v75 = v73 + v71 + 1;
      if ( *(_DWORD *)(v153 + 8) >= v75 )
      {
        v77 = *(_BYTE **)v153;
      }
      else
      {
        v150 = v73 + v71;
        v76 = v71;
        v77 = qvector_reserve(v153, *(void **)v153, v75, 1u);
        v70 = (_DWORD *)v153;
        v71 = v76;
        *(_DWORD *)v153 = v77;
        v74 = v150;
      }
      v70[1] = v75;
      v77[v74] = 0;
      memmove((void *)(*v70 + v73), "ref (", v71);
      v91 = a5 + 1;
      v92 = (int **)a5[1];
      v152 = a5 + 1;
      if ( !v92 )
      {
        v92 = a5 + 1;
        goto LABEL_110;
      }
      v91 = a5 + 1;
      while ( 2 )
      {
        v93 = (unsigned int)v92[4];
        if ( v93 > (unsigned int)v148 )
        {
          v94 = *v92;
          if ( !*v92 )
          {
            v91 = v92;
            break;
          }
          goto LABEL_96;
        }
        if ( v93 < (unsigned int)v148 )
        {
          v94 = v92[1];
          v91 = v92 + 1;
          if ( v94 )
          {
            ++v92;
LABEL_96:
            v91 = v92;
            v92 = (int **)v94;
            continue;
          }
        }
        break;
      }
LABEL_110:
      if ( *v91 )
        goto LABEL_111;
      v105 = (int *)operator new(0x14u);
      v105[4] = (int)v148;
      *v105 = 0;
      v105[1] = 0;
      v105[2] = (int)v92;
      *v91 = v105;
      v106 = (int *)**a5;
      if ( v106 )
      {
        *a5 = v106;
        v105 = *v91;
      }
      sub_261FA(a5[1], v105);
      a5[2] = (int *)((char *)a5[2] + 1);
      v107 = deref_idcv(v148, 1);
      if ( !v107 )
      {
LABEL_111:
        v97 = _strlen_chk("?)", 3);
        v98 = (_DWORD *)v153;
        v99 = v97;
        v100 = *(_DWORD *)(v153 + 4);
        v101 = v100 - 1;
        if ( !v100 )
          v101 = 0;
        v102 = v101 + v99;
        v103 = v101 + v99 + 1;
        if ( *(_DWORD *)(v153 + 8) >= v103 )
        {
          v104 = *(_BYTE **)v153;
        }
        else
        {
          v147 = v99;
          v104 = qvector_reserve(v153, *(void **)v153, v103, 1u);
          v99 = v147;
          v98 = (_DWORD *)v153;
          *(_DWORD *)v153 = v104;
        }
        v98[1] = v103;
        v104[v102] = 0;
        memmove((void *)(*v98 + v101), "?)", v99);
      }
      else
      {
        sub_43E4C(v153, v107, 0, a4 + 4, a5);
        v108 = v153;
        if ( a4 >= 1 && *v107 == 5 )
        {
          v109 = *(_DWORD *)(v153 + 4);
          v110 = v109 - 1;
          if ( !v109 )
            v110 = 0;
          v111 = v110 + a4 + 1;
          if ( v109 < v111 )
          {
            if ( *(_DWORD *)(v153 + 8) < v111 )
            {
              v129 = qvector_reserve(v153, *(void **)v153, v110 + a4 + 1, 1u);
              v108 = v153;
              *(_DWORD *)v153 = v129;
            }
            else
            {
              v129 = *(_BYTE **)v153;
            }
            *(_DWORD *)(v108 + 4) = v111;
            v129[v110 + a4] = 0;
          }
          v130 = (void *)(*(_DWORD *)v108 + v110);
          v131 = v108;
          memset(v130, 32, a4);
          v108 = v131;
        }
        v132 = *(_DWORD *)(v108 + 4);
        v133 = v132 - 1;
        if ( !v132 )
          v133 = 0;
        if ( *(_DWORD *)(v108 + 8) >= (unsigned int)(v133 + 2) )
        {
          v135 = *(_BYTE **)v108;
        }
        else
        {
          v134 = (_DWORD *)v108;
          v135 = qvector_reserve(v108, *(void **)v108, v133 + 2, 1u);
          v108 = (int)v134;
          *v134 = v135;
        }
        *(_DWORD *)(v108 + 4) = v133 + 2;
        v135[v133] = 41;
        *(_BYTE *)(*(_DWORD *)v108 + v133 + 1) = 0;
      }
      v136 = *v152;
      if ( *v152 )
      {
        v137 = (int *)(a5 + 1);
        v138 = *v152;
        do
        {
          v139 = v138[4];
          if ( v139 >= (unsigned int)v148 )
            v137 = v138;
          v140 = (int **)(v138 + 1);
          if ( v139 >= (unsigned int)v148 )
            v140 = (int **)v138;
          v138 = *v140;
        }
        while ( *v140 );
        if ( v137 != (int *)v152 && v137[4] <= (unsigned int)v148 )
        {
          v141 = (int *)v137[1];
          if ( v141 )
          {
            do
            {
              v142 = (int **)v141;
              v141 = (int *)*v141;
            }
            while ( v141 );
          }
          else
          {
            v143 = v137 + 2;
            v142 = (int **)v137[2];
            if ( *v142 != v137 )
            {
              do
              {
                v144 = *v143;
                v143 = (_DWORD *)(*v143 + 8);
                v142 = *(int ***)(v144 + 8);
              }
              while ( *v142 != (int *)v144 );
            }
          }
          if ( *a5 == v137 )
            *a5 = (int *)v142;
          a5[2] = (int *)((char *)a5[2] - 1);
          sub_27512(v136, v137);
          operator delete(v137);
        }
      }
LABEL_196:
      if ( v162[0] == 5 )
      {
        sub_448A0((int)v163, v162);
      }
      else if ( v162[0] == 7 && v163 )
      {
        v164 = 0;
        qfree(v163);
        v165 = 0;
        v163 = nullptr;
      }
      return _stack_chk_guard - v154;
    default:
      v64 = _strlen_chk("bad?", 5);
      v65 = (_DWORD *)v153;
      v56 = v64;
      v66 = *(_DWORD *)(v153 + 4);
      v67 = v66 - 1;
      if ( !v66 )
        v67 = 0;
      v68 = v67 + v56 + 1;
      if ( *(_DWORD *)(v153 + 8) < v68 )
      {
        v90 = qvector_reserve(v153, *(void **)v153, v67 + v56 + 1, 1u);
        v65 = (_DWORD *)v153;
        *(_DWORD *)v153 = v90;
      }
      else
      {
        v90 = *(_BYTE **)v153;
      }
      v65[1] = v68;
      v90[v67 + v56] = 0;
      v62 = (void *)(*v65 + v67);
      v63 = "bad?";
LABEL_92:
      memmove(v62, v63, v56);
      goto LABEL_196;
  }
}
// 44734: variable 'v154' is possibly undefined
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// B3CBE: using guessed type char byte_B3CBE;
