__int64 __fastcall sub_8CAC00(__int64 a1, unsigned int a2)
{
  unsigned int *v2; // r13
  void *v3; // r14
  __int64 v4; // rbp
  void *v5; // rdi
  __int64 v6; // rdx
  int *v7; // rdx
  _QWORD *i; // r8
  __int64 v9; // rax
  unsigned int *v10; // r12
  unsigned int v11; // r13d
  unsigned int *v12; // r14
  void *v13; // rdi
  __int64 v14; // r15
  int v15; // edx
  int v16; // edx
  void *v17; // rdi
  __int64 v18; // rdx
  unsigned int v19; // edx
  void *v20; // r15
  __int64 v21; // r15
  char v22; // dl
  _QWORD *v23; // r8
  __int64 v24; // rax
  __int64 v25; // r13
  int v26; // ecx
  __int64 v27; // rax
  unsigned int **v28; // rdi
  unsigned int v29; // ecx
  __int64 v30; // rdi
  unsigned int *v31; // r13
  unsigned int v32; // r14d
  int v33; // r15d
  char v34; // al
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r13
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rsi
  unsigned int v41; // eax
  unsigned int v42; // eax
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rdx
  _DWORD *v46; // rsi
  __int64 v47; // r14
  __int64 v48; // r12
  __int64 v49; // r13
  __int64 v50; // r14
  void *v51; // r15
  __int64 v52; // r13
  int v53; // eax
  _QWORD *v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rax
  void *v57; // r14
  __int64 v58; // rdx
  __int64 v59; // rdx
  unsigned int v60; // edx
  __int64 v61; // rcx
  __int64 v62; // rsi
  unsigned int v63; // r10d
  unsigned int v64; // r13d
  __int64 v65; // r14
  __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rsi
  char v69; // al
  char v70; // dl
  __int64 v71; // rdx
  unsigned int v72; // r15d
  unsigned __int8 v73; // al
  int v74; // eax
  int v75; // edx
  char v76; // al
  unsigned int v77; // r9d
  size_t v78; // rdi
  __int64 v79; // rax
  unsigned int v80; // r9d
  _DWORD *v81; // r10
  _DWORD *v82; // r15
  __int64 v83; // rax
  _QWORD *v84; // rdx
  _DWORD *v85; // rdi
  _DWORD *j; // rax
  int v87; // ecx
  char v88; // r11
  __int64 v89; // rcx
  char v90; // r11
  __int64 v91; // rcx
  __int64 v92; // rax
  _DWORD *v93; // rbp
  _DWORD *v94; // r14
  _QWORD *v95; // r15
  void *v96; // r12
  _DWORD *v97; // rsi
  _QWORD *v98; // rax
  _QWORD *v99; // r8
  unsigned int *v100; // rax
  unsigned int *v101; // rsi
  __int64 v102; // rdx
  __int64 v103; // r12
  __int64 v104; // r13
  __int64 v105; // rsi
  __int64 v106; // rax
  _QWORD *v107; // r13
  __int64 v108; // r14
  void *v109; // rbp
  __int64 v110; // rsi
  unsigned int v111; // ebx
  unsigned int *v113; // rax
  unsigned int *v114; // rsi
  __int64 v115; // rdx
  __int64 v116; // r12
  __int64 v117; // rax
  _QWORD *v118; // r13
  __int64 v119; // r14
  void *v120; // rbp
  __int64 v121; // rsi
  char **exception; // r12
  __int64 v123; // rdx
  unsigned int *v125; // [rsp+10h] [rbp-118h]
  _QWORD *v126; // [rsp+10h] [rbp-118h]
  int v127; // [rsp+10h] [rbp-118h]
  unsigned int v128; // [rsp+10h] [rbp-118h]
  _QWORD *v129; // [rsp+10h] [rbp-118h]
  _QWORD *v130; // [rsp+10h] [rbp-118h]
  _QWORD *v131; // [rsp+10h] [rbp-118h]
  _QWORD *v132; // [rsp+10h] [rbp-118h]
  _QWORD *v133; // [rsp+10h] [rbp-118h]
  _QWORD *v134; // [rsp+18h] [rbp-110h]
  _QWORD *v135; // [rsp+18h] [rbp-110h]
  _QWORD *v136; // [rsp+18h] [rbp-110h]
  unsigned int v137; // [rsp+18h] [rbp-110h]
  unsigned int v138; // [rsp+18h] [rbp-110h]
  _QWORD *v139; // [rsp+18h] [rbp-110h]
  _QWORD *v140; // [rsp+18h] [rbp-110h]
  unsigned int v141; // [rsp+18h] [rbp-110h]
  _QWORD *v142; // [rsp+18h] [rbp-110h]
  _QWORD *v143; // [rsp+18h] [rbp-110h]
  _QWORD *v144; // [rsp+18h] [rbp-110h]
  _QWORD *v145; // [rsp+18h] [rbp-110h]
  _QWORD *v146; // [rsp+18h] [rbp-110h]
  unsigned int v147; // [rsp+18h] [rbp-110h]
  _QWORD *v148; // [rsp+18h] [rbp-110h]
  _QWORD *v149; // [rsp+18h] [rbp-110h]
  _QWORD *v150; // [rsp+20h] [rbp-108h]
  int v151; // [rsp+20h] [rbp-108h]
  _QWORD *v152; // [rsp+20h] [rbp-108h]
  _QWORD *v153; // [rsp+20h] [rbp-108h]
  _QWORD *v154; // [rsp+20h] [rbp-108h]
  _QWORD *v155; // [rsp+20h] [rbp-108h]
  __int64 v156; // [rsp+20h] [rbp-108h]
  _QWORD *v157; // [rsp+20h] [rbp-108h]
  _DWORD *v158; // [rsp+20h] [rbp-108h]
  __int64 v159; // [rsp+28h] [rbp-100h]
  __int64 v160; // [rsp+28h] [rbp-100h]
  _DWORD *v161; // [rsp+28h] [rbp-100h]
  _QWORD *v162; // [rsp+28h] [rbp-100h]
  __int64 v163; // [rsp+30h] [rbp-F8h]
  __int64 v164; // [rsp+40h] [rbp-E8h]
  int v165; // [rsp+4Ch] [rbp-DCh]
  __int64 v166; // [rsp+50h] [rbp-D8h]
  unsigned int v167; // [rsp+7Ch] [rbp-ACh] BYREF
  _QWORD v168[2]; // [rsp+80h] [rbp-A8h] BYREF
  _QWORD v169[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v170[4]; // [rsp+A0h] [rbp-88h] BYREF
  unsigned int v171; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v172; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v173; // [rsp+D0h] [rbp-58h]
  __int64 v174; // [rsp+D8h] [rbp-50h] BYREF
  __int64 v175; // [rsp+E0h] [rbp-48h]

  v2 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 56LL * a2);
  v3 = qword_1C7F2C0;
  v164 = *v2;
  v4 = *(_QWORD *)(a1 + 72) + 32 * v164;
  sub_182CEF0(qword_1C7F2C0, v4);
  sub_182CBA0(v3, v4 + 16);
  *(_BYTE *)(v4 + 20) &= ~1u;
  v5 = qword_1C7F2C0;
  *(_DWORD *)(v4 + 16) = 1;
  LODWORD(v4) = v2[1];
  v168[0] = 0;
  v169[0] = 1;
  v6 = *v2;
  v167 = v4;
  v7 = (int *)(*(_QWORD *)(a1 + 24) + 32 * v6);
  v168[1] = 0;
  v169[1] = 0;
  sub_27B950((__int64)v5, (__int64)v168, v7);
  sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v168, *(_QWORD *)(a1 + 24) + 32LL * v2[1], (__int64)v168);
  sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v168, (__int64)(v2 + 2), (__int64)v168);
  v163 = (unsigned int)v4;
  sub_27B950((__int64)qword_1C7F2C0, *(_QWORD *)(a1 + 72) + 32LL * (unsigned int)v4, (int *)v168);
  *(_BYTE *)(*(_QWORD *)(a1 + 80) + (unsigned int)v4) = 2;
  *(_DWORD *)(*(_QWORD *)(a1 + 88) + 4LL * (unsigned int)v4) = a2;
  sub_893BD0((unsigned int **)(a1 + 96), &v167);
  sub_8C9790(a1, v4, (__int64)v168);
  for ( i = (_QWORD *)a1; ; i = v126 )
  {
    v9 = i[10];
    ++*(_DWORD *)i;
    if ( *(_BYTE *)(v9 + v164) )
      break;
    v10 = *(unsigned int **)(i[6] + 8 * v163);
    if ( v10 )
    {
      v125 = &v10[*(v10 - 1)];
      if ( v125 != v10 )
      {
        while ( 1 )
        {
          v11 = *v10;
          v12 = (unsigned int *)(i[5] + 56LL * *v10);
          if ( !*((_BYTE *)v12 + 48) )
            goto LABEL_6;
          v13 = qword_1C7F2C0;
          v14 = i[3] + 32LL * *v12;
          if ( (*(_BYTE *)(v14 + 4) & 1) != 0 )
          {
            v154 = i;
            sub_182C690(qword_1C7F2C0, v168, i[3] + 32LL * *v12);
            i = v154;
          }
          else
          {
            v15 = *(_DWORD *)v14;
            BYTE4(v168[0]) &= ~1u;
            LODWORD(v168[0]) = v15;
          }
          if ( (*(_BYTE *)(v14 + 20) & 1) != 0 )
          {
            v139 = i;
            sub_182C690(v13, v169, v14 + 16);
            i = v139;
          }
          else
          {
            v16 = *(_DWORD *)(v14 + 16);
            BYTE4(v169[0]) &= ~1u;
            LODWORD(v169[0]) = v16;
          }
          v17 = qword_1C7F2C0;
          v18 = i[3] + 32LL * v12[1];
          if ( (v169[0] & 0x100000000LL) != 0
            || LODWORD(v169[0]) != 1
            || (*(_BYTE *)(v18 + 20) & 1) != 0
            || *(_DWORD *)(v18 + 16) != 1 )
          {
            v134 = i;
            sub_1852000(qword_1C7F2C0, v168, v18);
            i = v134;
          }
          else
          {
            v155 = i;
            sub_1832A70(qword_1C7F2C0, v168, v18);
            sub_182CBA0(v17, v169);
            BYTE4(v169[0]) &= ~1u;
            i = v155;
            LODWORD(v169[0]) = 1;
          }
          v19 = v12[2];
          v20 = qword_1C7F2C0;
          if ( v19 )
          {
            if ( LODWORD(v168[0]) )
            {
              if ( (v169[0] & 0x100000000LL) != 0 || LODWORD(v169[0]) != 1 || (v12[7] & 1) != 0 || v12[6] != 1 )
              {
                v135 = i;
                sub_1851D20(qword_1C7F2C0, v168, v12 + 2, v168);
LABEL_20:
                i = v135;
                goto LABEL_21;
              }
              v148 = i;
              sub_1831A80(qword_1C7F2C0, v168, v12 + 2, v168);
              sub_182CBA0(v20, v169);
              BYTE4(v169[0]) &= ~1u;
              i = v148;
              LODWORD(v169[0]) = 1;
            }
            else
            {
              if ( (v12[3] & 1) != 0 )
              {
                v149 = i;
                sub_182C690(qword_1C7F2C0, v168, v12 + 2);
                i = v149;
              }
              else
              {
                BYTE4(v168[0]) &= ~1u;
                LODWORD(v168[0]) = v19;
              }
              if ( (v12[7] & 1) != 0 )
              {
                v135 = i;
                sub_182C690(v20, v169, v12 + 6);
                goto LABEL_20;
              }
              v60 = v12[6];
              BYTE4(v169[0]) &= ~1u;
              LODWORD(v169[0]) = v60;
            }
          }
          else
          {
            if ( (v168[0] & 0x100000000LL) != 0 )
            {
              v143 = i;
              sub_182C690(qword_1C7F2C0, v168, v168);
              i = v143;
            }
            else
            {
              BYTE4(v168[0]) &= ~1u;
            }
            if ( (v169[0] & 0x100000000LL) != 0 )
            {
              v135 = i;
              sub_182C690(v20, v169, v169);
              goto LABEL_20;
            }
            BYTE4(v169[0]) &= ~1u;
          }
LABEL_21:
          if ( SLODWORD(v168[0]) >= 0 )
            goto LABEL_6;
          v21 = v12[1];
          v22 = *(_BYTE *)(i[10] + v21);
          v167 = v12[1];
          if ( v22 == 1 )
          {
            v144 = i;
            v76 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)v168, i[9] + 32 * v21);
            i = v144;
            if ( v76 )
            {
              sub_27B950((__int64)qword_1C7F2C0, 32 * v21 + v144[9], (int *)v168);
              *(_DWORD *)(v144[11] + 4 * v21) = v11;
              sub_8C9AD0((__int64 **)(a1 + 104), *(_DWORD *)(v144[15] + 4 * v21));
              i = v144;
            }
            goto LABEL_6;
          }
          if ( v22 == 2 )
          {
LABEL_6:
            if ( v125 == ++v10 )
              break;
          }
          else
          {
            if ( v22 )
            {
              sub_1872CE0("");
              sub_1873130(114, 418);
            }
            v150 = i;
            sub_27B950((__int64)qword_1C7F2C0, i[9] + 32 * v21, (int *)v168);
            *(_BYTE *)(v150[10] + v21) = 1;
            *(_DWORD *)(v150[11] + 4 * v21) = v11;
            sub_893BD0((unsigned int **)(a1 + 96), &v167);
            v23 = v150;
            v171 = v21;
            v24 = v150[14];
            if ( v24 )
            {
              v25 = *(unsigned int *)(v24 - 4);
              v26 = *(_DWORD *)(v24 - 4);
            }
            else
            {
              v26 = 0;
              v25 = 0;
            }
            v27 = v150[15];
            v28 = (unsigned int **)(v150 + 14);
            v151 = v26;
            v136 = v23;
            *(_DWORD *)(v27 + 4 * v21) = v26;
            sub_893BD0(v28, &v171);
            i = v136;
            v29 = v151;
            v30 = v136[14];
            v31 = (unsigned int *)(v30 + 4 * v25);
            v159 = *v31;
            v32 = *v31;
            v33 = v151 >> 1;
            if ( v151 >> 1 )
            {
              while ( 1 )
              {
                v37 = 4LL * (unsigned int)v33;
                v38 = *(_QWORD *)i[13];
                v39 = v38 + 32LL * *(unsigned int *)(v30 + v37);
                v40 = 32 * v159 + v38;
                if ( (*(_BYTE *)(v40 + 20) & 1) != 0
                  || *(_DWORD *)(v40 + 16) != 1
                  || (*(_BYTE *)(v39 + 20) & 1) != 0
                  || *(_DWORD *)(v39 + 16) != 1 )
                {
                  v152 = i;
                  v137 = v29;
                  v34 = sub_1848D40(qword_1C7F2C0, v40, v39);
                  i = v152;
                  v29 = v137;
                  v30 = v152[14];
                  if ( !v34 )
                    goto LABEL_40;
                }
                else
                {
                  if ( (*(_BYTE *)(v40 + 4) & 1) != 0 || (*(_BYTE *)(v39 + 4) & 1) != 0 )
                  {
                    v153 = i;
                    v138 = v29;
                    v41 = sub_182C7B0(qword_1C7F2C0, v40, v39);
                    i = v153;
                    v29 = v138;
                    v42 = v41 >> 31;
                    v30 = v153[14];
                  }
                  else
                  {
                    LOBYTE(v42) = *(_DWORD *)v40 < *(_DWORD *)v39;
                  }
                  if ( !(_BYTE)v42 )
                  {
LABEL_40:
                    v31 = (unsigned int *)(v30 + 4LL * v29);
                    goto LABEL_41;
                  }
                }
                v31 = (unsigned int *)(v30 + v37);
                v35 = *v31;
                *(_DWORD *)(v30 + 4LL * v29) = v35;
                v36 = i[15];
                *(_DWORD *)(v36 + 4 * v35) = v29;
                v29 = v33;
                if ( !(v33 >> 1) )
                  break;
                v33 >>= 1;
              }
              v29 = 1;
            }
            else
            {
LABEL_41:
              v36 = i[15];
            }
            *v31 = v32;
            ++v10;
            *(_DWORD *)(v36 + 4 * v159) = v29;
            if ( v125 == v10 )
              break;
          }
        }
      }
    }
    v43 = i[14];
    v44 = *(_DWORD *)(v43 - 4);
    if ( v44 == 1 )
    {
      v113 = (unsigned int *)i[12];
      if ( v113 )
      {
        v114 = &v113[*(v113 - 1)];
        if ( v113 == v114 )
          goto LABEL_133;
        do
        {
          v115 = *v113++;
          *(_BYTE *)(i[10] + v115) = 0;
        }
        while ( v113 != v114 );
        v114 = (unsigned int *)i[12];
        if ( v114 )
LABEL_133:
          *(v114 - 1) = 0;
      }
      v116 = i[4];
      if ( v116 )
      {
        v117 = *(unsigned int *)(v116 - 4);
        if ( (_DWORD)v117 )
        {
          v118 = i;
          v119 = v116 + 40 * v117;
          do
          {
            v120 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v116 + 8);
            v121 = v116 + 24;
            v116 += 40;
            sub_182CBA0(v120, v121);
          }
          while ( v116 != v119 );
          v116 = v118[4];
        }
        *(_DWORD *)(v116 - 4) = 0;
      }
      v111 = 1;
      goto LABEL_125;
    }
    v45 = i[15];
    v163 = *(unsigned int *)(v43 + 4);
    v46 = (_DWORD *)(v45 + 4 * v163);
    if ( v44 == 2 )
    {
      *v46 = 0;
      --*(_DWORD *)(v43 - 4);
    }
    else
    {
      v61 = *(unsigned int *)(v43 + 4LL * (unsigned int)(v44 - 1));
      *(_DWORD *)(v43 + 4) = v61;
      *(_DWORD *)(v45 + 4 * v61) = 1;
      *v46 = 0;
      v62 = *(unsigned int *)(v43 + 4);
      v127 = *(_DWORD *)(v43 - 4) - 1;
      *(_DWORD *)(v43 - 4) = v127;
      v165 = v62;
      v166 = v62;
      if ( v127 > 2 )
      {
        v63 = 2;
        v64 = 1;
        v160 = 32 * v62;
        while ( 1 )
        {
          v71 = v63 + 1;
          v72 = v63;
          if ( v127 > (int)v71 )
          {
            v157 = i;
            v141 = v63;
            v73 = sub_3ED700(
                    (__int64)qword_1C7F2C0,
                    32LL * *(unsigned int *)(v43 + 4 * v71) + *(_QWORD *)i[13],
                    *(_QWORD *)i[13] + 32LL * *(unsigned int *)(v43 + 4LL * v63));
            i = v157;
            v72 = v73 + v141;
            v43 = v157[14];
          }
          v65 = *(unsigned int *)(v43 + 4LL * v72);
          v156 = 4LL * v72;
          v66 = *(_QWORD *)i[13];
          v67 = v66 + v160;
          v68 = 32 * v65 + v66;
          if ( (*(_BYTE *)(v68 + 20) & 1) != 0
            || *(_DWORD *)(v68 + 16) != 1
            || (*(_BYTE *)(v67 + 20) & 1) != 0
            || *(_DWORD *)(v67 + 16) != 1 )
          {
            v140 = i;
            v69 = sub_1848D40(qword_1C7F2C0, v68, v67);
            i = v140;
            v70 = v69;
            v43 = v140[14];
            if ( !v70 )
              goto LABEL_79;
          }
          else if ( (*(_BYTE *)(v68 + 4) & 1) != 0 || (*(_BYTE *)(v67 + 4) & 1) != 0 )
          {
            v142 = i;
            v74 = sub_182C7B0(qword_1C7F2C0, v68, v67);
            i = v142;
            v75 = v74;
            v43 = v142[14];
            if ( v75 >= 0 )
              goto LABEL_79;
          }
          else if ( *(_DWORD *)v68 >= *(_DWORD *)v67 )
          {
LABEL_79:
            v72 = v64;
            v45 = i[15];
            v156 = 4LL * v64;
            goto LABEL_80;
          }
          v63 = 2 * v72;
          *(_DWORD *)(v43 + 4LL * v64) = v65;
          v45 = i[15];
          *(_DWORD *)(v45 + 4 * v65) = v64;
          if ( v127 <= (int)(2 * v72) )
            goto LABEL_80;
          v64 = v72;
        }
      }
      v156 = 4;
      v72 = 1;
LABEL_80:
      *(_DWORD *)(v43 + v156) = v165;
      *(_DWORD *)(v45 + 4 * v166) = v72;
    }
    *(_BYTE *)(i[10] + v163) = 2;
    v47 = i[3];
    v48 = 32 * v163;
    v49 = i[9];
    v171 = v163;
    v50 = 32 * v163 + v47;
    v51 = qword_1C7F2C0;
    v172 = 0;
    v173 = 0;
    v52 = 32 * v163 + v49;
    v174 = 1;
    v175 = 0;
    if ( (*(_BYTE *)(v50 + 4) & 1) != 0 )
    {
      v129 = i;
      sub_182C690(qword_1C7F2C0, &v172, v50);
      i = v129;
      if ( (*(_BYTE *)(v50 + 20) & 1) == 0 )
      {
LABEL_48:
        v53 = *(_DWORD *)(v50 + 16);
        v54 = (_QWORD *)i[4];
        BYTE4(v174) &= ~1u;
        LODWORD(v174) = v53;
        if ( !v54 )
          goto LABEL_99;
        goto LABEL_49;
      }
    }
    else
    {
      LODWORD(v172) = *(_DWORD *)v50;
      if ( (*(_BYTE *)(v50 + 20) & 1) == 0 )
        goto LABEL_48;
    }
    v130 = i;
    sub_182C690(v51, &v174, v50 + 16);
    i = v130;
    v54 = (_QWORD *)v130[4];
    if ( !v54 )
    {
LABEL_99:
      v131 = i;
      v98 = (_QWORD *)sub_186B270(0x58u);
      i = v131;
      v54 = v98 + 1;
      *v98 = 2;
      v56 = (__int64)v54;
      v131[4] = v54;
      goto LABEL_51;
    }
LABEL_49:
    v55 = *((unsigned int *)v54 - 1);
    if ( (_DWORD)v55 == *((_DWORD *)v54 - 2) )
    {
      v77 = (unsigned int)(3 * v55 + 1) >> 1;
      v78 = 40 * v77 + 8;
      if ( 40 * (int)v55 + 8 >= (unsigned int)v78 || (unsigned int)v55 >= v77 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_12D192(v170, "Overflow encountered when expanding vector", v123);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v170);
        sub_233E40((__int64)v170);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v145 = i;
      v128 = (unsigned int)(3 * v55 + 1) >> 1;
      v79 = sub_186B270(v78);
      i = v145;
      v80 = v128;
      v81 = (_DWORD *)v79;
      v54 = (_QWORD *)(v79 + 8);
      v82 = (_DWORD *)v145[4];
      if ( v82 )
      {
        v83 = (unsigned int)*(v82 - 1);
        v84 = v54;
        v81[1] = v83;
        v85 = &v82[10 * v83];
        for ( j = v82; v85 != j; *(v84 - 1) = v91 )
        {
          v87 = *j;
          j += 10;
          v84 += 5;
          *((_DWORD *)v84 - 10) = v87;
          v88 = *((_BYTE *)j - 28);
          *((_DWORD *)v84 - 8) = *(j - 8);
          *((_BYTE *)v84 - 28) = v88 & 3 | *((_BYTE *)v84 - 28) & 0xFC;
          v89 = *((_QWORD *)j - 3);
          *((_QWORD *)j - 3) = 0;
          *(v84 - 3) = v89;
          v90 = *((_BYTE *)j - 12);
          *((_DWORD *)v84 - 4) = *(j - 4);
          *((_BYTE *)v84 - 12) = v90 & 3 | *((_BYTE *)v84 - 12) & 0xFC;
          v91 = *((_QWORD *)j - 1);
          *((_QWORD *)j - 1) = 0;
        }
        v92 = (unsigned int)*(v82 - 1);
        if ( (_DWORD)v92 )
        {
          v93 = v82;
          v146 = v54;
          v94 = &v82[10 * v92];
          v95 = i;
          v161 = v81;
          do
          {
            v96 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v93 + 2);
            v97 = v93 + 6;
            v93 += 10;
            sub_182CBA0(v96, v97);
          }
          while ( v93 != v94 );
          i = v95;
          v48 = 32 * v163;
          v54 = v146;
          v80 = v128;
          v81 = v161;
          v82 = (_DWORD *)v95[4];
        }
        v162 = i;
        v158 = v81;
        v147 = v80;
        sub_186B220(v82 - 2);
        v81 = v158;
        i = v162;
        v80 = v147;
        v56 = (__int64)&v54[5 * (unsigned int)v158[1]];
      }
      else
      {
        *(_DWORD *)(v79 + 4) = 0;
        v56 = v79 + 8;
      }
      i[4] = v54;
      *v81 = v80;
    }
    else
    {
      v56 = (__int64)&v54[5 * v55];
    }
LABEL_51:
    v57 = qword_1C7F2C0;
    v126 = i;
    *(_DWORD *)v56 = v171;
    *(_DWORD *)(v56 + 8) = v172;
    *(_BYTE *)(v56 + 12) = BYTE4(v172) & 3 | *(_BYTE *)(v56 + 12) & 0xFC;
    v58 = v173;
    v173 = 0;
    *(_QWORD *)(v56 + 16) = v58;
    *(_DWORD *)(v56 + 24) = v174;
    *(_BYTE *)(v56 + 28) = BYTE4(v174) & 3 | *(_BYTE *)(v56 + 28) & 0xFC;
    v59 = v175;
    v175 = 0;
    *(_QWORD *)(v56 + 32) = v59;
    ++*((_DWORD *)v54 - 1);
    sub_182CBA0(v57, &v172);
    sub_182CBA0(v57, &v174);
    sub_2FC4A0((__int64)qword_1C7F2C0, v126[3] + v48, v52, v126[3] + v48);
  }
  v132 = i;
  sub_8BA8C0((__int64)(i + 13));
  v99 = v132;
  v100 = (unsigned int *)v132[12];
  if ( v100 )
  {
    v101 = &v100[*(v100 - 1)];
    if ( v100 == v101 )
      goto LABEL_112;
    do
    {
      v102 = *v100++;
      *(_BYTE *)(v132[10] + v102) = 0;
    }
    while ( v100 != v101 );
    v101 = (unsigned int *)v132[12];
    if ( v101 )
LABEL_112:
      *(v101 - 1) = 0;
  }
  v103 = v132[4];
  if ( v103 )
  {
    v104 = v103 + 40LL * *(unsigned int *)(v103 - 4);
    while ( v103 != v104 )
    {
      v105 = *(unsigned int *)(v104 - 40);
      v104 -= 40;
      v133 = v99;
      sub_27B950((__int64)qword_1C7F2C0, v99[3] + 32 * v105, (int *)(v104 + 8));
      v99 = v133;
    }
    v103 = v99[4];
  }
  if ( v103 )
  {
    v106 = *(unsigned int *)(v103 - 4);
    if ( (_DWORD)v106 )
    {
      v107 = v99;
      v108 = v103 + 40 * v106;
      do
      {
        v109 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v103 + 8);
        v110 = v103 + 24;
        v103 += 40;
        sub_182CBA0(v109, v110);
      }
      while ( v103 != v108 );
      v103 = v107[4];
    }
    *(_DWORD *)(v103 - 4) = 0;
  }
  v111 = 0;
LABEL_125:
  sub_25A130((char *)v168);
  return v111;
}

