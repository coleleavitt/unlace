__int64 __fastcall sub_15A79F0(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 *v9; // r12
  __int64 v10; // rbp
  __int64 *v11; // rbx
  __int64 v12; // r13
  __int64 result; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // r13
  __int64 *v16; // rbx
  _QWORD *v17; // rbp
  _QWORD *v18; // r12
  _QWORD *v19; // r15
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  char *v25; // rdi
  char v26; // cl
  char v27; // al
  char v28; // al
  char v29; // al
  char v30; // al
  char v31; // al
  char v32; // al
  __int64 *v33; // rbx
  __int64 *v34; // rbp
  signed __int64 v35; // r15
  __int64 v36; // r14
  __int64 *v37; // r12
  __int64 v38; // rax
  __int64 *v39; // rax
  unsigned __int64 v40; // r13
  _QWORD *v41; // r14
  _QWORD *v42; // rbp
  _QWORD *v43; // r12
  _QWORD *v44; // r15
  int v45; // eax
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rax
  char *v50; // rdi
  char v51; // cl
  char v52; // al
  char v53; // al
  char v54; // al
  char v55; // al
  char v56; // al
  char v57; // al
  char v58; // al
  __int64 v59; // r12
  __int64 *v60; // rbx
  __int64 v61; // rbp
  _QWORD *v62; // r13
  _QWORD *v63; // r14
  _QWORD *v64; // r15
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rsi
  __int64 v68; // rcx
  __int64 v69; // rsi
  __int64 v70; // rcx
  char *v71; // rdi
  char v72; // dl
  char v73; // al
  char v74; // al
  char v75; // al
  char v76; // al
  char v77; // al
  char v78; // al
  __int64 v79; // r14
  unsigned __int64 v80; // r12
  _QWORD *v81; // r14
  _QWORD *v82; // r15
  _QWORD *v83; // r13
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  char *v89; // rdi
  char v90; // dl
  char v91; // al
  char v92; // al
  char v93; // al
  char v94; // al
  char v95; // al
  char v96; // al
  char v97; // al
  _QWORD *v98; // r13
  _QWORD *v99; // r14
  _QWORD *v100; // r15
  int v101; // eax
  __int64 v102; // rcx
  __int64 v103; // rsi
  __int64 v104; // rcx
  __int64 v105; // rsi
  __int64 v106; // rcx
  char *v107; // rdi
  char v108; // dl
  char v109; // al
  char v110; // al
  char v111; // al
  char v112; // al
  char v113; // al
  char v114; // al
  __int64 v115; // r12
  __int64 v116; // r14
  __int64 v117; // rbx
  __int64 v118; // r15
  _QWORD *v119; // rdi
  _QWORD *v120; // rbp
  _QWORD *v121; // r13
  int v122; // eax
  __int64 v123; // rsi
  __int64 v124; // rax
  __int64 v125; // rsi
  __int64 v126; // rax
  char *v127; // rdi
  char v128; // al
  char v129; // al
  char v130; // al
  char v131; // al
  char v132; // al
  char v133; // al
  _QWORD *v134; // rdi
  _QWORD *v135; // rbp
  _QWORD *v136; // r13
  int v137; // eax
  __int64 v138; // rsi
  __int64 v139; // rax
  __int64 v140; // rsi
  __int64 v141; // rax
  char *v142; // rdi
  char v143; // al
  char v144; // al
  char v145; // al
  char v146; // al
  char v147; // al
  char v148; // al
  signed __int64 v149; // r15
  __int64 v150; // r14
  __int64 *v151; // rax
  __int64 v152; // r13
  unsigned __int64 v153; // rbx
  _QWORD *v154; // r14
  _QWORD *v155; // r12
  _QWORD *v156; // rbp
  int v157; // eax
  __int64 v158; // rdx
  __int64 v159; // rax
  __int64 v160; // rdx
  __int64 v161; // rax
  char *v162; // rdi
  char v163; // al
  char v164; // al
  char v165; // al
  char v166; // al
  char v167; // al
  char v168; // al
  unsigned __int64 v169; // rbp
  __int64 v170; // r13
  __int64 v171; // r12
  _QWORD *v172; // r15
  _QWORD *v173; // r14
  _QWORD *v174; // rbx
  int v175; // eax
  __int64 v176; // rdx
  __int64 v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rax
  char *v180; // rdi
  char v181; // dl
  char v182; // dl
  char v183; // dl
  char v184; // dl
  char v185; // dl
  char v186; // dl
  __int64 v187; // [rsp+0h] [rbp-78h]
  __int64 *v188; // [rsp+0h] [rbp-78h]
  __int64 *v189; // [rsp+0h] [rbp-78h]
  _QWORD *v190; // [rsp+0h] [rbp-78h]
  void *v191; // [rsp+0h] [rbp-78h]
  void *v192; // [rsp+0h] [rbp-78h]
  __int64 *v193; // [rsp+8h] [rbp-70h]
  __int64 v195; // [rsp+8h] [rbp-70h]
  __int64 v196; // [rsp+10h] [rbp-68h]
  __int64 *v197; // [rsp+10h] [rbp-68h]
  __int64 v198; // [rsp+10h] [rbp-68h]
  __int64 *v199; // [rsp+10h] [rbp-68h]
  __int64 v200; // [rsp+18h] [rbp-60h]
  __int64 *i; // [rsp+18h] [rbp-60h]
  __int64 v202; // [rsp+18h] [rbp-60h]
  __int64 v203; // [rsp+20h] [rbp-58h]
  unsigned __int64 v204; // [rsp+28h] [rbp-50h]

  v7 = a5;
  v8 = a3;
  v9 = a2;
  v10 = a6;
  v11 = a1;
  v187 = a4;
  if ( a7 <= a5 )
    v7 = a7;
  if ( a4 <= v7 )
    goto LABEL_28;
  v12 = a5;
  if ( a7 < a5 )
  {
    v197 = a1;
    for ( i = a2; ; i = v34 )
    {
      if ( v12 < v187 )
      {
        v34 = i;
        v203 = v187 / 2;
        v33 = &v197[12 * (v187 / 2)];
        v149 = 0xAAAAAAAAAAAAAAABLL * ((a3 - (__int64)i) >> 5);
        if ( a3 - (__int64)i <= 0 )
        {
          v204 = 0;
LABEL_104:
          v187 -= v187 / 2;
          goto LABEL_24;
        }
        while ( 1 )
        {
          v150 = v149 >> 1;
          if ( (unsigned __int8)sub_15A37B0((__int64)&v34[12 * (v149 >> 1)], (__int64)v33) )
          {
            v34 += 12 * (v149 >> 1) + 12;
            v150 = v149 - v150 - 1;
            if ( v150 <= 0 )
              goto LABEL_103;
          }
          else if ( !v150 )
          {
LABEL_103:
            v204 = 0xAAAAAAAAAAAAAAABLL * (((char *)v34 - (char *)i) >> 5);
            v12 -= v204;
            goto LABEL_104;
          }
          v149 = v150;
        }
      }
      v33 = v197;
      v204 = v12 / 2;
      v34 = &i[12 * (v12 / 2)];
      v35 = 0xAAAAAAAAAAAAAAABLL * (((char *)i - (char *)v197) >> 5);
      if ( (char *)i - (char *)v197 <= 0 )
      {
        LODWORD(v203) = 0;
        goto LABEL_23;
      }
      while ( 1 )
      {
        v36 = v35 >> 1;
        if ( (unsigned __int8)sub_15A37B0((__int64)v34, (__int64)&v33[12 * (v35 >> 1)]) )
          break;
        v33 += 12 * (v35 >> 1) + 12;
        v36 = v35 - v36 - 1;
        if ( v36 <= 0 )
          goto LABEL_22;
LABEL_19:
        v35 = v36;
      }
      if ( v36 )
        goto LABEL_19;
LABEL_22:
      v187 -= 0xAAAAAAAAAAAAAAABLL * (((char *)v33 - (char *)v197) >> 5);
      v203 = 0xAAAAAAAAAAAAAAABLL * (((char *)v33 - (char *)v197) >> 5);
LABEL_23:
      v12 -= v12 / 2;
LABEL_24:
      v37 = sub_15A6E80(v33, i, v34, v187, v204, a6, a7);
      sub_15A79F0((_DWORD)v197, (_DWORD)v33, (_DWORD)v37, v203, v204, a6, a7);
      v38 = v12;
      if ( v12 > a7 )
        v38 = a7;
      if ( v38 >= v187 )
      {
        v39 = v34;
        v8 = a3;
        v10 = a6;
        v11 = v37;
        v9 = v39;
LABEL_28:
        result = (char *)v9 - (char *)v11;
        v40 = 0xAAAAAAAAAAAAAAABLL * (((char *)v9 - (char *)v11) >> 5);
        if ( (char *)v9 - (char *)v11 <= 0 )
          return result;
        v189 = v11;
        v41 = (_QWORD *)v10;
        v195 = (__int64)v9;
        v198 = v8;
        v202 = v10;
        while ( 1 )
        {
          v42 = (_QWORD *)v41[5];
          v43 = (_QWORD *)v41[6];
          *v41 = *v11;
          v44 = v42;
          v41[1] = v11[1];
          *((_DWORD *)v41 + 4) = *((_DWORD *)v11 + 4);
          *((_DWORD *)v41 + 5) = *((_DWORD *)v11 + 5);
          *((_DWORD *)v41 + 6) = *((_DWORD *)v11 + 6);
          *((_DWORD *)v41 + 7) = *((_DWORD *)v11 + 7);
          v45 = *((_DWORD *)v11 + 8);
          v41[6] = 0;
          v41[7] = 0;
          v41[5] = 0;
          *((_DWORD *)v41 + 8) = v45;
          v41[5] = v11[5];
          v46 = v11[6];
          v11[5] = 0;
          v47 = v41[6];
          v41[6] = v46;
          v48 = v11[7];
          v11[6] = v47;
          v49 = v41[7];
          v41[7] = v48;
          for ( v11[7] = v49; v43 != v44; v44 += 8 )
          {
            while ( 1 )
            {
              v50 = (char *)v44[3];
              if ( v50 == (char *)(v44 + 5) )
                break;
              operator delete(v50);
              v44 += 8;
              if ( v43 == v44 )
                goto LABEL_33;
            }
          }
LABEL_33:
          if ( v42 )
            operator delete(v42);
          v51 = *((_BYTE *)v11 + 64);
          v52 = *((_BYTE *)v41 + 64);
          v11 += 12;
          v41 += 12;
          v53 = v51 & 1 | v52 & 0xFE;
          *((_BYTE *)v41 - 32) = v53;
          v54 = *(_BYTE *)(v11 - 4) & 2 | v53 & 0xFD;
          *((_BYTE *)v41 - 32) = v54;
          v55 = *(_BYTE *)(v11 - 4) & 4 | v54 & 0xFB;
          *((_BYTE *)v41 - 32) = v55;
          v56 = *(_BYTE *)(v11 - 4) & 8 | v55 & 0xF7;
          *((_BYTE *)v41 - 32) = v56;
          v57 = *(_BYTE *)(v11 - 4) & 0x10 | v56 & 0xEF;
          *((_BYTE *)v41 - 32) = v57;
          v58 = *(_BYTE *)(v11 - 4) & 0x20 | v57 & 0xDF;
          *((_BYTE *)v41 - 32) = v58;
          *((_BYTE *)v41 - 32) = *(_BYTE *)(v11 - 4) & 0x40 | v58 & 0xBF;
          *(v41 - 3) = *(v11 - 3);
          *(v41 - 2) = *(v11 - 2);
          result = *(v11 - 1);
          *(v41 - 1) = result;
          if ( !--v40 )
          {
            v59 = v195;
            v60 = v189;
            v61 = v202;
            if ( v198 != v195 && v41 != (_QWORD *)v202 )
            {
              v190 = v41;
              do
              {
                if ( (unsigned __int8)sub_15A37B0(v59, v61) )
                {
                  v62 = (_QWORD *)v60[5];
                  v63 = (_QWORD *)v60[6];
                  *v60 = *(_QWORD *)v59;
                  v64 = v62;
                  v60[1] = *(_QWORD *)(v59 + 8);
                  *((_DWORD *)v60 + 4) = *(_DWORD *)(v59 + 16);
                  *((_DWORD *)v60 + 5) = *(_DWORD *)(v59 + 20);
                  *((_DWORD *)v60 + 6) = *(_DWORD *)(v59 + 24);
                  *((_DWORD *)v60 + 7) = *(_DWORD *)(v59 + 28);
                  v65 = *(_DWORD *)(v59 + 32);
                  v60[6] = 0;
                  v60[7] = 0;
                  v60[5] = 0;
                  v66 = *(_QWORD *)(v59 + 40);
                  *((_DWORD *)v60 + 8) = v65;
                  v60[5] = v66;
                  v67 = *(_QWORD *)(v59 + 48);
                  *(_QWORD *)(v59 + 40) = 0;
                  v68 = v60[6];
                  v60[6] = v67;
                  v69 = *(_QWORD *)(v59 + 56);
                  *(_QWORD *)(v59 + 48) = v68;
                  v70 = v60[7];
                  v60[7] = v69;
                  for ( *(_QWORD *)(v59 + 56) = v70; v63 != v64; v64 += 8 )
                  {
                    while ( 1 )
                    {
                      v71 = (char *)v64[3];
                      if ( v71 == (char *)(v64 + 5) )
                        break;
                      operator delete(v71);
                      v64 += 8;
                      if ( v64 == v63 )
                        goto LABEL_43;
                    }
                  }
LABEL_43:
                  if ( v62 )
                    operator delete(v62);
                  v72 = *(_BYTE *)(v59 + 64);
                  v59 += 96;
                  v73 = v72 & 1 | v60[8] & 0xFE;
                  *((_BYTE *)v60 + 64) = v73;
                  v74 = *(_BYTE *)(v59 - 32) & 2 | v73 & 0xFD;
                  *((_BYTE *)v60 + 64) = v74;
                  v75 = *(_BYTE *)(v59 - 32) & 4 | v74 & 0xFB;
                  *((_BYTE *)v60 + 64) = v75;
                  v76 = *(_BYTE *)(v59 - 32) & 8 | v75 & 0xF7;
                  *((_BYTE *)v60 + 64) = v76;
                  v77 = *(_BYTE *)(v59 - 32) & 0x10 | v76 & 0xEF;
                  *((_BYTE *)v60 + 64) = v77;
                  v78 = *(_BYTE *)(v59 - 32) & 0x20 | v77 & 0xDF;
                  *((_BYTE *)v60 + 64) = v78;
                  *((_BYTE *)v60 + 64) = *(_BYTE *)(v59 - 32) & 0x40 | v78 & 0xBF;
                  v60[9] = *(_QWORD *)(v59 - 24);
                  v60[10] = *(_QWORD *)(v59 - 16);
                  result = *(_QWORD *)(v59 - 8);
                  v60[11] = result;
                }
                else
                {
                  v98 = (_QWORD *)v60[5];
                  v99 = (_QWORD *)v60[6];
                  *v60 = *(_QWORD *)v61;
                  v100 = v98;
                  v60[1] = *(_QWORD *)(v61 + 8);
                  *((_DWORD *)v60 + 4) = *(_DWORD *)(v61 + 16);
                  *((_DWORD *)v60 + 5) = *(_DWORD *)(v61 + 20);
                  *((_DWORD *)v60 + 6) = *(_DWORD *)(v61 + 24);
                  *((_DWORD *)v60 + 7) = *(_DWORD *)(v61 + 28);
                  v101 = *(_DWORD *)(v61 + 32);
                  v60[6] = 0;
                  v60[7] = 0;
                  v60[5] = 0;
                  v102 = *(_QWORD *)(v61 + 40);
                  *((_DWORD *)v60 + 8) = v101;
                  v60[5] = v102;
                  v103 = *(_QWORD *)(v61 + 48);
                  *(_QWORD *)(v61 + 40) = 0;
                  v104 = v60[6];
                  v60[6] = v103;
                  v105 = *(_QWORD *)(v61 + 56);
                  *(_QWORD *)(v61 + 48) = v104;
                  v106 = v60[7];
                  v60[7] = v105;
                  for ( *(_QWORD *)(v61 + 56) = v106; v99 != v100; v100 += 8 )
                  {
                    while ( 1 )
                    {
                      v107 = (char *)v100[3];
                      if ( v107 == (char *)(v100 + 5) )
                        break;
                      operator delete(v107);
                      v100 += 8;
                      if ( v99 == v100 )
                        goto LABEL_65;
                    }
                  }
LABEL_65:
                  if ( v98 )
                    operator delete(v98);
                  v108 = *(_BYTE *)(v61 + 64);
                  v61 += 96;
                  v109 = v108 & 1 | v60[8] & 0xFE;
                  *((_BYTE *)v60 + 64) = v109;
                  v110 = *(_BYTE *)(v61 - 32) & 2 | v109 & 0xFD;
                  *((_BYTE *)v60 + 64) = v110;
                  v111 = *(_BYTE *)(v61 - 32) & 4 | v110 & 0xFB;
                  *((_BYTE *)v60 + 64) = v111;
                  v112 = *(_BYTE *)(v61 - 32) & 8 | v111 & 0xF7;
                  *((_BYTE *)v60 + 64) = v112;
                  v113 = *(_BYTE *)(v61 - 32) & 0x10 | v112 & 0xEF;
                  *((_BYTE *)v60 + 64) = v113;
                  v114 = *(_BYTE *)(v61 - 32) & 0x20 | v113 & 0xDF;
                  *((_BYTE *)v60 + 64) = v114;
                  *((_BYTE *)v60 + 64) = *(_BYTE *)(v61 - 32) & 0x40 | v114 & 0xBF;
                  v60[9] = *(_QWORD *)(v61 - 24);
                  v60[10] = *(_QWORD *)(v61 - 16);
                  result = *(_QWORD *)(v61 - 8);
                  v60[11] = result;
                }
                v60 += 12;
              }
              while ( v190 != (_QWORD *)v61 && v59 != v198 );
              v41 = v190;
            }
            if ( v41 == (_QWORD *)v61 )
              return result;
            result = 0xAAAAAAAAAAAAAAABLL;
            v79 = (__int64)v41 - v61;
            v80 = 0xAAAAAAAAAAAAAAABLL * (v79 >> 5);
            if ( v79 <= 0 )
              return result;
            while ( 1 )
            {
              v81 = (_QWORD *)v60[5];
              v82 = (_QWORD *)v60[6];
              *v60 = *(_QWORD *)v61;
              v83 = v81;
              v60[1] = *(_QWORD *)(v61 + 8);
              *((_DWORD *)v60 + 4) = *(_DWORD *)(v61 + 16);
              *((_DWORD *)v60 + 5) = *(_DWORD *)(v61 + 20);
              *((_DWORD *)v60 + 6) = *(_DWORD *)(v61 + 24);
              *((_DWORD *)v60 + 7) = *(_DWORD *)(v61 + 28);
              v84 = *(_DWORD *)(v61 + 32);
              v60[6] = 0;
              v60[7] = 0;
              v60[5] = 0;
              *((_DWORD *)v60 + 8) = v84;
              v60[5] = *(_QWORD *)(v61 + 40);
              v85 = *(_QWORD *)(v61 + 48);
              *(_QWORD *)(v61 + 40) = 0;
              v86 = v60[6];
              v60[6] = v85;
              v87 = *(_QWORD *)(v61 + 56);
              *(_QWORD *)(v61 + 48) = v86;
              v88 = v60[7];
              v60[7] = v87;
              for ( *(_QWORD *)(v61 + 56) = v88; v82 != v83; v83 += 8 )
              {
                while ( 1 )
                {
                  v89 = (char *)v83[3];
                  if ( v89 == (char *)(v83 + 5) )
                    break;
                  operator delete(v89);
                  v83 += 8;
                  if ( v82 == v83 )
                    goto LABEL_54;
                }
              }
LABEL_54:
              if ( v81 )
                operator delete(v81);
              v90 = *(_BYTE *)(v61 + 64);
              v91 = *((_BYTE *)v60 + 64);
              v61 += 96;
              v60 += 12;
              v92 = v90 & 1 | v91 & 0xFE;
              *((_BYTE *)v60 - 32) = v92;
              v93 = *(_BYTE *)(v61 - 32) & 2 | v92 & 0xFD;
              *((_BYTE *)v60 - 32) = v93;
              v94 = *(_BYTE *)(v61 - 32) & 4 | v93 & 0xFB;
              *((_BYTE *)v60 - 32) = v94;
              v95 = *(_BYTE *)(v61 - 32) & 8 | v94 & 0xF7;
              *((_BYTE *)v60 - 32) = v95;
              v96 = *(_BYTE *)(v61 - 32) & 0x10 | v95 & 0xEF;
              *((_BYTE *)v60 - 32) = v96;
              v97 = *(_BYTE *)(v61 - 32) & 0x20 | v96 & 0xDF;
              *((_BYTE *)v60 - 32) = v97;
              *((_BYTE *)v60 - 32) = *(_BYTE *)(v61 - 32) & 0x40 | v97 & 0xBF;
              *(v60 - 3) = *(_QWORD *)(v61 - 24);
              *(v60 - 2) = *(_QWORD *)(v61 - 16);
              result = *(_QWORD *)(v61 - 8);
              *(v60 - 1) = result;
              if ( !--v80 )
                return result;
            }
          }
        }
      }
      if ( v12 <= a7 )
      {
        v151 = v34;
        v11 = v37;
        v8 = a3;
        v10 = a6;
        v9 = v151;
        break;
      }
      v197 = v37;
    }
  }
  result = v8 - (_QWORD)v9;
  v14 = 0xAAAAAAAAAAAAAAABLL * ((v8 - (__int64)v9) >> 5);
  if ( v8 - (__int64)v9 <= 0 )
    return result;
  v193 = v9;
  v15 = v10;
  v196 = v8;
  v200 = v10;
  v188 = v11;
  v16 = v9;
  while ( 1 )
  {
    v17 = *(_QWORD **)(v15 + 40);
    v18 = *(_QWORD **)(v15 + 48);
    *(_QWORD *)v15 = *v16;
    v19 = v17;
    *(_QWORD *)(v15 + 8) = v16[1];
    *(_DWORD *)(v15 + 16) = *((_DWORD *)v16 + 4);
    *(_DWORD *)(v15 + 20) = *((_DWORD *)v16 + 5);
    *(_DWORD *)(v15 + 24) = *((_DWORD *)v16 + 6);
    *(_DWORD *)(v15 + 28) = *((_DWORD *)v16 + 7);
    v20 = *((_DWORD *)v16 + 8);
    *(_QWORD *)(v15 + 48) = 0;
    *(_QWORD *)(v15 + 56) = 0;
    *(_QWORD *)(v15 + 40) = 0;
    *(_DWORD *)(v15 + 32) = v20;
    *(_QWORD *)(v15 + 40) = v16[5];
    v21 = v16[6];
    v16[5] = 0;
    v22 = *(_QWORD *)(v15 + 48);
    *(_QWORD *)(v15 + 48) = v21;
    v23 = v16[7];
    v16[6] = v22;
    v24 = *(_QWORD *)(v15 + 56);
    *(_QWORD *)(v15 + 56) = v23;
    for ( v16[7] = v24; v18 != v19; v19 += 8 )
    {
      while ( 1 )
      {
        v25 = (char *)v19[3];
        if ( v25 == (char *)(v19 + 5) )
          break;
        operator delete(v25);
        v19 += 8;
        if ( v18 == v19 )
          goto LABEL_10;
      }
    }
LABEL_10:
    if ( v17 )
      operator delete(v17);
    v26 = *((_BYTE *)v16 + 64);
    v16 += 12;
    v27 = v26 & 1 | *(_BYTE *)(v15 + 64) & 0xFE;
    *(_BYTE *)(v15 + 64) = v27;
    v28 = *(_BYTE *)(v16 - 4) & 2 | v27 & 0xFD;
    *(_BYTE *)(v15 + 64) = v28;
    v29 = *(_BYTE *)(v16 - 4) & 4 | v28 & 0xFB;
    *(_BYTE *)(v15 + 64) = v29;
    v30 = *(_BYTE *)(v16 - 4) & 8 | v29 & 0xF7;
    *(_BYTE *)(v15 + 64) = v30;
    v31 = *(_BYTE *)(v16 - 4) & 0x10 | v30 & 0xEF;
    *(_BYTE *)(v15 + 64) = v31;
    v32 = *(_BYTE *)(v16 - 4) & 0x20 | v31 & 0xDF;
    *(_BYTE *)(v15 + 64) = v32;
    *(_BYTE *)(v15 + 64) = *(_BYTE *)(v16 - 4) & 0x40 | v32 & 0xBF;
    *(_QWORD *)(v15 + 72) = *(v16 - 3);
    *(_QWORD *)(v15 + 80) = *(v16 - 2);
    *(_QWORD *)(v15 + 88) = *(v16 - 1);
    result = v15 + 96;
    if ( !--v14 )
      break;
    v15 += 96;
  }
  if ( v188 == v193 )
  {
    v169 = 0xAAAAAAAAAAAAAAABLL * ((result - v200) >> 5);
    if ( result - v200 <= 0 )
      return result;
    v170 = v15 + 96;
    v171 = v196;
    while ( 1 )
    {
      v170 -= 96;
      v171 -= 96;
      v172 = *(_QWORD **)(v171 + 40);
      v173 = *(_QWORD **)(v171 + 48);
      *(_QWORD *)v171 = *(_QWORD *)v170;
      v174 = v172;
      *(_QWORD *)(v171 + 8) = *(_QWORD *)(v170 + 8);
      *(_DWORD *)(v171 + 16) = *(_DWORD *)(v170 + 16);
      *(_DWORD *)(v171 + 20) = *(_DWORD *)(v170 + 20);
      *(_DWORD *)(v171 + 24) = *(_DWORD *)(v170 + 24);
      *(_DWORD *)(v171 + 28) = *(_DWORD *)(v170 + 28);
      v175 = *(_DWORD *)(v170 + 32);
      *(_QWORD *)(v171 + 48) = 0;
      *(_QWORD *)(v171 + 56) = 0;
      *(_QWORD *)(v171 + 40) = 0;
      *(_DWORD *)(v171 + 32) = v175;
      *(_QWORD *)(v171 + 40) = *(_QWORD *)(v170 + 40);
      v176 = *(_QWORD *)(v170 + 48);
      *(_QWORD *)(v170 + 40) = 0;
      v177 = *(_QWORD *)(v171 + 48);
      *(_QWORD *)(v171 + 48) = v176;
      v178 = *(_QWORD *)(v170 + 56);
      *(_QWORD *)(v170 + 48) = v177;
      v179 = *(_QWORD *)(v171 + 56);
      *(_QWORD *)(v171 + 56) = v178;
      for ( *(_QWORD *)(v170 + 56) = v179; v173 != v174; v174 += 8 )
      {
        while ( 1 )
        {
          v180 = (char *)v174[3];
          if ( v180 == (char *)(v174 + 5) )
            break;
          operator delete(v180);
          v174 += 8;
          if ( v173 == v174 )
            goto LABEL_123;
        }
      }
LABEL_123:
      if ( v172 )
        operator delete(v172);
      v181 = *(_BYTE *)(v170 + 64) & 1 | *(_BYTE *)(v171 + 64) & 0xFE;
      *(_BYTE *)(v171 + 64) = v181;
      v182 = *(_BYTE *)(v170 + 64) & 2 | v181 & 0xFD;
      *(_BYTE *)(v171 + 64) = v182;
      v183 = *(_BYTE *)(v170 + 64) & 4 | v182 & 0xFB;
      *(_BYTE *)(v171 + 64) = v183;
      v184 = *(_BYTE *)(v170 + 64) & 8 | v183 & 0xF7;
      *(_BYTE *)(v171 + 64) = v184;
      v185 = *(_BYTE *)(v170 + 64) & 0x10 | v184 & 0xEF;
      *(_BYTE *)(v171 + 64) = v185;
      v186 = *(_BYTE *)(v170 + 64) & 0x20 | v185 & 0xDF;
      *(_BYTE *)(v171 + 64) = v186;
      *(_BYTE *)(v171 + 64) = *(_BYTE *)(v170 + 64) & 0x40 | v186 & 0xBF;
      *(_QWORD *)(v171 + 72) = *(_QWORD *)(v170 + 72);
      *(_QWORD *)(v171 + 80) = *(_QWORD *)(v170 + 80);
      result = *(_QWORD *)(v170 + 88);
      *(_QWORD *)(v171 + 88) = result;
      if ( !--v169 )
        return result;
    }
  }
  if ( result == v200 )
    return result;
  v115 = (__int64)(v193 - 12);
  v116 = v196;
  v199 = v188;
  v117 = v15;
  while ( 1 )
  {
    v118 = v116 - 96;
    if ( (unsigned __int8)sub_15A37B0(v117, v115) )
      break;
    v134 = *(_QWORD **)(v116 - 56);
    v135 = *(_QWORD **)(v116 - 48);
    *(_QWORD *)(v116 - 96) = *(_QWORD *)v117;
    v136 = v134;
    v192 = v134;
    *(_QWORD *)(v116 - 88) = *(_QWORD *)(v117 + 8);
    *(_DWORD *)(v116 - 80) = *(_DWORD *)(v117 + 16);
    *(_DWORD *)(v116 - 76) = *(_DWORD *)(v117 + 20);
    *(_DWORD *)(v116 - 72) = *(_DWORD *)(v117 + 24);
    *(_DWORD *)(v116 - 68) = *(_DWORD *)(v117 + 28);
    v137 = *(_DWORD *)(v117 + 32);
    *(_QWORD *)(v116 - 48) = 0;
    *(_QWORD *)(v116 - 40) = 0;
    *(_QWORD *)(v116 - 56) = 0;
    *(_DWORD *)(v116 - 64) = v137;
    *(_QWORD *)(v116 - 56) = *(_QWORD *)(v117 + 40);
    v138 = *(_QWORD *)(v117 + 48);
    *(_QWORD *)(v117 + 40) = 0;
    v139 = *(_QWORD *)(v116 - 48);
    *(_QWORD *)(v116 - 48) = v138;
    v140 = *(_QWORD *)(v117 + 56);
    *(_QWORD *)(v117 + 48) = v139;
    v141 = *(_QWORD *)(v116 - 40);
    *(_QWORD *)(v116 - 40) = v140;
    for ( *(_QWORD *)(v117 + 56) = v141; v135 != v136; v136 += 8 )
    {
      while ( 1 )
      {
        v142 = (char *)v136[3];
        if ( v142 == (char *)(v136 + 5) )
          break;
        operator delete(v142);
        v136 += 8;
        if ( v135 == v136 )
          goto LABEL_91;
      }
    }
LABEL_91:
    if ( v192 )
      operator delete(v192);
    v143 = *(_BYTE *)(v117 + 64) & 1 | *(_BYTE *)(v116 - 32) & 0xFE;
    *(_BYTE *)(v116 - 32) = v143;
    v144 = *(_BYTE *)(v117 + 64) & 2 | v143 & 0xFD;
    *(_BYTE *)(v116 - 32) = v144;
    v145 = *(_BYTE *)(v117 + 64) & 4 | v144 & 0xFB;
    *(_BYTE *)(v116 - 32) = v145;
    v146 = *(_BYTE *)(v117 + 64) & 8 | v145 & 0xF7;
    *(_BYTE *)(v116 - 32) = v146;
    v147 = *(_BYTE *)(v117 + 64) & 0x10 | v146 & 0xEF;
    *(_BYTE *)(v116 - 32) = v147;
    v148 = *(_BYTE *)(v117 + 64) & 0x20 | v147 & 0xDF;
    *(_BYTE *)(v116 - 32) = v148;
    *(_BYTE *)(v116 - 32) = *(_BYTE *)(v117 + 64) & 0x40 | v148 & 0xBF;
    *(_QWORD *)(v118 + 72) = *(_QWORD *)(v117 + 72);
    *(_QWORD *)(v118 + 80) = *(_QWORD *)(v117 + 80);
    result = *(_QWORD *)(v117 + 88);
    *(_QWORD *)(v118 + 88) = result;
    if ( v117 == v200 )
      return result;
    v117 -= 96;
LABEL_85:
    v116 -= 96;
  }
  v119 = *(_QWORD **)(v116 - 56);
  v120 = *(_QWORD **)(v116 - 48);
  *(_QWORD *)(v116 - 96) = *(_QWORD *)v115;
  v121 = v119;
  v191 = v119;
  *(_QWORD *)(v116 - 88) = *(_QWORD *)(v115 + 8);
  *(_DWORD *)(v116 - 80) = *(_DWORD *)(v115 + 16);
  *(_DWORD *)(v116 - 76) = *(_DWORD *)(v115 + 20);
  *(_DWORD *)(v116 - 72) = *(_DWORD *)(v115 + 24);
  *(_DWORD *)(v116 - 68) = *(_DWORD *)(v115 + 28);
  v122 = *(_DWORD *)(v115 + 32);
  *(_QWORD *)(v116 - 48) = 0;
  *(_QWORD *)(v116 - 40) = 0;
  *(_QWORD *)(v116 - 56) = 0;
  *(_DWORD *)(v116 - 64) = v122;
  *(_QWORD *)(v116 - 56) = *(_QWORD *)(v115 + 40);
  v123 = *(_QWORD *)(v115 + 48);
  *(_QWORD *)(v115 + 40) = 0;
  v124 = *(_QWORD *)(v116 - 48);
  *(_QWORD *)(v116 - 48) = v123;
  v125 = *(_QWORD *)(v115 + 56);
  *(_QWORD *)(v115 + 48) = v124;
  v126 = *(_QWORD *)(v116 - 40);
  *(_QWORD *)(v116 - 40) = v125;
  for ( *(_QWORD *)(v115 + 56) = v126; v120 != v121; v121 += 8 )
  {
    while ( 1 )
    {
      v127 = (char *)v121[3];
      if ( v127 == (char *)(v121 + 5) )
        break;
      operator delete(v127);
      v121 += 8;
      if ( v120 == v121 )
        goto LABEL_81;
    }
  }
LABEL_81:
  if ( v191 )
    operator delete(v191);
  v128 = *(_BYTE *)(v115 + 64) & 1 | *(_BYTE *)(v116 - 32) & 0xFE;
  *(_BYTE *)(v116 - 32) = v128;
  v129 = *(_BYTE *)(v115 + 64) & 2 | v128 & 0xFD;
  *(_BYTE *)(v116 - 32) = v129;
  v130 = *(_BYTE *)(v115 + 64) & 4 | v129 & 0xFB;
  *(_BYTE *)(v116 - 32) = v130;
  v131 = *(_BYTE *)(v115 + 64) & 8 | v130 & 0xF7;
  *(_BYTE *)(v116 - 32) = v131;
  v132 = *(_BYTE *)(v115 + 64) & 0x10 | v131 & 0xEF;
  *(_BYTE *)(v116 - 32) = v132;
  v133 = *(_BYTE *)(v115 + 64) & 0x20 | v132 & 0xDF;
  *(_BYTE *)(v116 - 32) = v133;
  *(_BYTE *)(v116 - 32) = *(_BYTE *)(v115 + 64) & 0x40 | v133 & 0xBF;
  *(_QWORD *)(v118 + 72) = *(_QWORD *)(v115 + 72);
  *(_QWORD *)(v118 + 80) = *(_QWORD *)(v115 + 80);
  *(_QWORD *)(v118 + 88) = *(_QWORD *)(v115 + 88);
  if ( v199 != (__int64 *)v115 )
  {
    v115 -= 96;
    goto LABEL_85;
  }
  v152 = v117 + 96;
  result = v117 + 96 - v200;
  v153 = 0xAAAAAAAAAAAAAAABLL * (result >> 5);
  if ( result > 0 )
  {
    do
    {
      v152 -= 96;
      v118 -= 96;
      v154 = *(_QWORD **)(v118 + 40);
      v155 = *(_QWORD **)(v118 + 48);
      *(_QWORD *)v118 = *(_QWORD *)v152;
      v156 = v154;
      *(_QWORD *)(v118 + 8) = *(_QWORD *)(v152 + 8);
      *(_DWORD *)(v118 + 16) = *(_DWORD *)(v152 + 16);
      *(_DWORD *)(v118 + 20) = *(_DWORD *)(v152 + 20);
      *(_DWORD *)(v118 + 24) = *(_DWORD *)(v152 + 24);
      *(_DWORD *)(v118 + 28) = *(_DWORD *)(v152 + 28);
      v157 = *(_DWORD *)(v152 + 32);
      *(_QWORD *)(v118 + 48) = 0;
      *(_QWORD *)(v118 + 56) = 0;
      *(_QWORD *)(v118 + 40) = 0;
      *(_DWORD *)(v118 + 32) = v157;
      *(_QWORD *)(v118 + 40) = *(_QWORD *)(v152 + 40);
      v158 = *(_QWORD *)(v152 + 48);
      *(_QWORD *)(v152 + 40) = 0;
      v159 = *(_QWORD *)(v118 + 48);
      *(_QWORD *)(v118 + 48) = v158;
      v160 = *(_QWORD *)(v152 + 56);
      *(_QWORD *)(v152 + 48) = v159;
      v161 = *(_QWORD *)(v118 + 56);
      *(_QWORD *)(v118 + 56) = v160;
      for ( *(_QWORD *)(v152 + 56) = v161; v155 != v156; v156 += 8 )
      {
        while ( 1 )
        {
          v162 = (char *)v156[3];
          if ( v162 == (char *)(v156 + 5) )
            break;
          operator delete(v162);
          v156 += 8;
          if ( v155 == v156 )
            goto LABEL_111;
        }
      }
LABEL_111:
      if ( v154 )
        operator delete(v154);
      v163 = *(_BYTE *)(v152 + 64) & 1 | *(_BYTE *)(v118 + 64) & 0xFE;
      *(_BYTE *)(v118 + 64) = v163;
      v164 = *(_BYTE *)(v152 + 64) & 2 | v163 & 0xFD;
      *(_BYTE *)(v118 + 64) = v164;
      v165 = *(_BYTE *)(v152 + 64) & 4 | v164 & 0xFB;
      *(_BYTE *)(v118 + 64) = v165;
      v166 = *(_BYTE *)(v152 + 64) & 8 | v165 & 0xF7;
      *(_BYTE *)(v118 + 64) = v166;
      v167 = *(_BYTE *)(v152 + 64) & 0x10 | v166 & 0xEF;
      *(_BYTE *)(v118 + 64) = v167;
      v168 = *(_BYTE *)(v152 + 64) & 0x20 | v167 & 0xDF;
      *(_BYTE *)(v118 + 64) = v168;
      *(_BYTE *)(v118 + 64) = *(_BYTE *)(v152 + 64) & 0x40 | v168 & 0xBF;
      *(_QWORD *)(v118 + 72) = *(_QWORD *)(v152 + 72);
      *(_QWORD *)(v118 + 80) = *(_QWORD *)(v152 + 80);
      result = *(_QWORD *)(v152 + 88);
      *(_QWORD *)(v118 + 88) = result;
      --v153;
    }
    while ( v153 );
  }
  return result;
}
