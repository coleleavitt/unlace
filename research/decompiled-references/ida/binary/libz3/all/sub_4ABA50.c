__int64 __fastcall sub_4ABA50(_QWORD *a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // r15
  __int64 v3; // rbx
  void *v4; // r12
  int v5; // eax
  __int64 v6; // r13
  _DWORD *v7; // r12
  unsigned int v8; // ebp
  __int64 v9; // rdx
  char v10; // al
  _QWORD *v11; // rbx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r12
  void *v16; // r13
  int v17; // eax
  int v18; // eax
  unsigned int **v19; // r14
  unsigned int *v20; // rax
  unsigned int v21; // ebp
  __int64 v22; // rax
  unsigned int *v23; // r12
  unsigned int *v24; // rax
  unsigned int *v25; // rbp
  unsigned int v26; // eax
  void *v27; // r14
  unsigned int **v28; // rax
  unsigned int *v29; // r13
  __int64 v30; // rax
  unsigned int *v31; // rbp
  void *v32; // r12
  unsigned int *v33; // rsi
  __int64 *v34; // r12
  __int64 v35; // rax
  unsigned int v36; // ebp
  _QWORD *v37; // rax
  __m128i v38; // xmm2
  _QWORD *v39; // rbp
  __int64 v40; // r12
  __int64 v41; // r14
  int v42; // eax
  void *v43; // r13
  __int64 v44; // rbp
  void *v45; // r12
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rbp
  void *v49; // r13
  __int64 v50; // rbp
  int v51; // eax
  void *v52; // r13
  void *v53; // r14
  void *v54; // r14
  __int64 v55; // rdi
  int v56; // edx
  __int64 v57; // rdx
  char v58; // si
  __int64 v59; // rdx
  void *v60; // rbp
  char v61; // si
  void *v62; // rbp
  __int64 v63; // rax
  unsigned int *v64; // r12
  unsigned int *v65; // rbp
  void *v66; // r13
  unsigned int *v67; // rsi
  char v68; // al
  void *v69; // r13
  __int64 v70; // rbp
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rax
  void *v74; // r14
  __int64 v75; // r13
  __int64 v76; // r13
  void *v77; // r13
  void *v78; // r13
  void *v79; // r14
  __int64 v80; // r13
  int v81; // eax
  void *v82; // rdi
  void *v83; // rdi
  __int64 v84; // rsi
  int v85; // edx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rdx
  void *v89; // rbp
  void *v90; // rdi
  void *v91; // rbp
  void *v92; // rbp
  __int64 v93; // r14
  _QWORD *v94; // rbp
  __int64 *v95; // r14
  __int64 v96; // r13
  __int64 v97; // rax
  __int64 v98; // r12
  void *v99; // rbp
  __int64 v100; // rsi
  __int64 v101; // rax
  unsigned int v102; // r12d
  __int64 v103; // rax
  __int64 v104; // r12
  __int64 v105; // rbp
  __int64 v106; // r14
  int v107; // eax
  void *v108; // r13
  unsigned int v109; // [rsp+4h] [rbp-174h]
  __int64 v110; // [rsp+8h] [rbp-170h]
  unsigned int v111; // [rsp+10h] [rbp-168h]
  unsigned int *v112; // [rsp+10h] [rbp-168h]
  char *v113; // [rsp+10h] [rbp-168h]
  unsigned int v114; // [rsp+10h] [rbp-168h]
  unsigned int v115; // [rsp+10h] [rbp-168h]
  _QWORD *v116; // [rsp+10h] [rbp-168h]
  unsigned int v117; // [rsp+10h] [rbp-168h]
  __int64 v118; // [rsp+18h] [rbp-160h]
  unsigned int v119; // [rsp+28h] [rbp-150h]
  _DWORD *v120; // [rsp+30h] [rbp-148h]
  unsigned int v121; // [rsp+30h] [rbp-148h]
  __int64 v122; // [rsp+38h] [rbp-140h]
  void *v123; // [rsp+40h] [rbp-138h]
  unsigned int *v124; // [rsp+50h] [rbp-128h]
  unsigned int v125; // [rsp+58h] [rbp-120h]
  void *v126; // [rsp+70h] [rbp-108h]
  _QWORD v127[2]; // [rsp+80h] [rbp-F8h] BYREF
  _QWORD v128[2]; // [rsp+90h] [rbp-E8h] BYREF
  _QWORD v129[2]; // [rsp+A0h] [rbp-D8h] BYREF
  _QWORD v130[2]; // [rsp+B0h] [rbp-C8h] BYREF
  _QWORD v131[2]; // [rsp+C0h] [rbp-B8h] BYREF
  _QWORD v132[2]; // [rsp+D0h] [rbp-A8h] BYREF
  int v133; // [rsp+E0h] [rbp-98h] BYREF
  char v134; // [rsp+E4h] [rbp-94h]
  __int64 v135; // [rsp+E8h] [rbp-90h]
  int v136; // [rsp+F0h] [rbp-88h] BYREF
  char v137; // [rsp+F4h] [rbp-84h]
  __int64 v138; // [rsp+F8h] [rbp-80h]
  __int64 v139; // [rsp+100h] [rbp-78h] BYREF
  __int64 v140; // [rsp+108h] [rbp-70h]
  int v141; // [rsp+110h] [rbp-68h] BYREF
  char v142; // [rsp+114h] [rbp-64h]
  __int64 v143; // [rsp+118h] [rbp-60h]
  __int64 v144; // [rsp+120h] [rbp-58h] BYREF
  __int64 v145; // [rsp+128h] [rbp-50h]
  __int64 v146; // [rsp+130h] [rbp-48h] BYREF
  __int64 v147; // [rsp+138h] [rbp-40h]

  v1 = (_QWORD *)a1[1];
  if ( v1 )
  {
    v125 = 0;
    v2 = a1;
    v109 = 0;
    while ( 1 )
    {
      if ( v109 >= *((_DWORD *)v1 - 1) || !*v1 || v125 >= *(_DWORD *)(*v1 - 4LL) )
        goto LABEL_19;
      v118 = 2LL * v109;
      v110 = 32LL * v125;
      v3 = v1[(unsigned __int64)v118 / 2] + v110;
      v127[0] = 0;
      v127[1] = 0;
      v128[0] = 1;
      v4 = qword_1C7F2C0;
      v128[1] = 0;
      if ( (*(_BYTE *)(v3 + 4) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v127, v3);
      else
        LODWORD(v127[0]) = *(_DWORD *)v3;
      if ( (*(_BYTE *)(v3 + 20) & 1) != 0 )
      {
        sub_182C690(v4, v128, v3 + 16);
      }
      else
      {
        v5 = *(_DWORD *)(v3 + 16);
        BYTE4(v128[0]) &= ~1u;
        LODWORD(v128[0]) = v5;
      }
      v6 = v109;
      v7 = (_DWORD *)v2[1];
      v8 = v109 + 1;
      if ( v7 )
      {
        while ( 1 )
        {
          if ( v8 >= *(v7 - 1) )
            goto LABEL_16;
          v9 = *(_QWORD *)&v7[2 * v8] + v110;
          if ( (v128[0] & 0x100000000LL) != 0
            || LODWORD(v128[0]) != 1
            || (*(_BYTE *)(v9 + 20) & 1) != 0
            || *(_DWORD *)(v9 + 16) != 1 )
          {
            break;
          }
          if ( (v127[0] & 0x100000000LL) != 0 || (*(_BYTE *)(v9 + 4) & 1) != 0 )
          {
            v13 = sub_182C7B0(qword_1C7F2C0, v127, v9);
            v7 = (_DWORD *)v2[1];
            if ( v13 < 0 )
            {
LABEL_21:
              v14 = *(_QWORD *)&v7[2 * v8] + v110;
              v15 = v14;
              v16 = qword_1C7F2C0;
              if ( (*(_BYTE *)(v14 + 4) & 1) == 0 )
                goto LABEL_22;
              sub_182C690(qword_1C7F2C0, v127, v14);
LABEL_23:
              if ( (*(_BYTE *)(v15 + 20) & 1) != 0 )
              {
                sub_182C690(v16, v128, v15 + 16);
                v7 = (_DWORD *)v2[1];
                v6 = v8;
              }
              else
              {
                v18 = *(_DWORD *)(v15 + 16);
                v6 = v8;
                v7 = (_DWORD *)v2[1];
                BYTE4(v128[0]) &= ~1u;
                LODWORD(v128[0]) = v18;
              }
            }
LABEL_15:
            ++v8;
            if ( !v7 )
              goto LABEL_16;
          }
          else
          {
            if ( SLODWORD(v127[0]) < *(_DWORD *)v9 )
            {
              v15 = *(_QWORD *)&v7[2 * v8] + v110;
              v16 = qword_1C7F2C0;
LABEL_22:
              v17 = *(_DWORD *)v15;
              BYTE4(v127[0]) &= ~1u;
              LODWORD(v127[0]) = v17;
              goto LABEL_23;
            }
            ++v8;
          }
        }
        v10 = sub_1848D40(qword_1C7F2C0, v127, v9);
        v7 = (_DWORD *)v2[1];
        if ( v10 )
          goto LABEL_21;
        goto LABEL_15;
      }
LABEL_16:
      if ( LODWORD(v127[0]) )
        break;
      ++v125;
LABEL_18:
      v11 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v127);
      a1 = v11;
      sub_182CBA0(v11, v128);
      v1 = (_QWORD *)v2[1];
      if ( !v1 )
        goto LABEL_19;
    }
    v19 = (unsigned int **)&v7[v118];
    v20 = *(unsigned int **)&v7[2 * v109];
    v124 = v20;
    if ( !v20 )
      goto LABEL_41;
    v21 = *(v20 - 1);
    v111 = *(v20 - 2);
    v22 = sub_186B270(32LL * v111 + 8);
    v23 = *v19;
    v24 = (unsigned int *)(v22 + 8);
    *((_QWORD *)v24 - 1) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v111), _mm_cvtsi32_si128(v21)).m128i_u64[0];
    v124 = v24;
    if ( !v23 || (v25 = v24, v112 = &v23[8 * *(v23 - 1)], v23 == v112) )
    {
LABEL_40:
      v7 = (_DWORD *)v2[1];
      v19 = (unsigned int **)&v7[v118];
LABEL_41:
      v113 = (char *)(8 * v6);
      v28 = v19;
      if ( v118 == 2 * v6 )
      {
LABEL_60:
        v44 = (__int64)&(*v28)[(unsigned __int64)v110 / 4];
        v129[0] = 0;
        v129[1] = 0;
        v45 = qword_1C7F2C0;
        v130[0] = 1;
        v130[1] = 0;
        if ( (*(_BYTE *)(v44 + 4) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, v129, v44);
        else
          LODWORD(v129[0]) = *(_DWORD *)v44;
        if ( (*(_BYTE *)(v44 + 20) & 1) != 0 )
        {
          sub_182C690(v45, v130, v44 + 16);
        }
        else
        {
          v46 = *(_DWORD *)(v44 + 16);
          BYTE4(v130[0]) &= ~1u;
          LODWORD(v130[0]) = v46;
        }
        v47 = v2[1];
        if ( (v129[0] & 0x100000000LL) != 0
          || LODWORD(v129[0]) != 1
          || (v130[0] & 0x100000000LL) != 0
          || LODWORD(v130[0]) != 1 )
        {
          v48 = *(_QWORD *)(v47 + 8LL * v109);
          if ( v48 )
          {
            v114 = 0;
            do
            {
              v49 = qword_1C7F2C0;
              if ( v114 >= *(_DWORD *)(v48 - 4) )
                break;
              v144 = 0;
              v145 = 0;
              v146 = 1;
              v50 = 32LL * v114 + v48;
              v147 = 0;
              if ( (*(_BYTE *)(v50 + 4) & 1) != 0 )
                sub_182C690(qword_1C7F2C0, &v144, v50);
              else
                LODWORD(v144) = *(_DWORD *)v50;
              if ( (*(_BYTE *)(v50 + 20) & 1) != 0 )
              {
                sub_182C690(v49, &v146, v50 + 16);
                v52 = qword_1C7F2C0;
                if ( !(_DWORD)v144 )
                  goto LABEL_97;
              }
              else
              {
                v51 = *(_DWORD *)(v50 + 16);
                BYTE4(v146) &= ~1u;
                v52 = qword_1C7F2C0;
                LODWORD(v146) = v51;
                if ( !(_DWORD)v144 )
                  goto LABEL_97;
              }
              if ( (v129[0] & 0x100000000LL) != 0
                || LODWORD(v129[0]) != 1
                || (v130[0] & 0x100000000LL) != 0
                || LODWORD(v130[0]) != 1 )
              {
                sub_1831650(v52, &v144, v130);
                sub_1831650(v52, &v146, v129);
                if ( (int)v146 < 0 )
                {
                  sub_1831620(v52, &v144);
                  sub_1831620(v52, &v146);
                }
                v139 = 0;
                v140 = 0;
                sub_1832C70(v52, &v144, &v146, &v139);
                if ( (v139 & 0x100000000LL) != 0 || (_DWORD)v139 != 1 )
                {
                  sub_1833EB0(v52, &v144, &v139, &v144);
                  sub_1833EB0(v52, &v146, &v139, &v146);
                }
                sub_182CBA0(v52, &v139);
                goto LABEL_80;
              }
LABEL_97:
              if ( (v144 & 0x100000000LL) != 0 )
              {
                sub_182C690(v52, &v144, &v144);
                v68 = BYTE4(v146);
                if ( (v146 & 0x100000000LL) == 0 )
                {
LABEL_99:
                  BYTE4(v146) = v68 & 0xFE;
                  goto LABEL_80;
                }
              }
              else
              {
                BYTE4(v144) &= ~1u;
                v68 = BYTE4(v146);
                if ( (v146 & 0x100000000LL) == 0 )
                  goto LABEL_99;
              }
              sub_182C690(v52, &v146, &v146);
LABEL_80:
              BYTE4(v139) &= 0xFCu;
              v53 = qword_1C7F2C0;
              v142 &= 0xFCu;
              LODWORD(v139) = 0;
              v140 = 0;
              v141 = 1;
              v143 = 0;
              if ( (v144 & 0x100000000LL) != 0 )
              {
                sub_182C690(qword_1C7F2C0, &v139, &v144);
                if ( (v146 & 0x100000000LL) != 0 )
                {
LABEL_95:
                  sub_182C690(v53, &v141, &v146);
                  goto LABEL_83;
                }
              }
              else
              {
                LODWORD(v139) = v144;
                if ( (v146 & 0x100000000LL) != 0 )
                  goto LABEL_95;
              }
              v142 &= ~1u;
              v141 = v146;
LABEL_83:
              v54 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v144);
              sub_182CBA0(v54, &v146);
              v55 = *(_QWORD *)(v2[1] + 8LL * v109) + 32LL * v114;
              v56 = *(_DWORD *)v55;
              *(_DWORD *)v55 = v139;
              LODWORD(v139) = v56;
              v57 = *(_QWORD *)(v55 + 8);
              *(_QWORD *)(v55 + 8) = v140;
              v140 = v57;
              LOBYTE(v57) = *(_BYTE *)(v55 + 4);
              *(_BYTE *)(v55 + 4) = BYTE4(v139) & 2 | v57 & 0xFD;
              BYTE4(v139) = v57 & 2 | BYTE4(v139) & 0xFD;
              v58 = *(_BYTE *)(v55 + 4);
              *(_BYTE *)(v55 + 4) = BYTE4(v139) & 1 | v58 & 0xFE;
              BYTE4(v139) = v58 & 1 | BYTE4(v139) & 0xFE;
              LODWORD(v57) = *(_DWORD *)(v55 + 16);
              *(_DWORD *)(v55 + 16) = v141;
              v141 = v57;
              v59 = *(_QWORD *)(v55 + 24);
              *(_QWORD *)(v55 + 24) = v143;
              v143 = v59;
              LOBYTE(v59) = *(_BYTE *)(v55 + 20);
              *(_BYTE *)(v55 + 20) = v142 & 2 | v59 & 0xFD;
              v60 = qword_1C7F2C0;
              v142 = v59 & 2 | v142 & 0xFD;
              v61 = *(_BYTE *)(v55 + 20) & 1;
              *(_BYTE *)(v55 + 20) = v142 & 1 | *(_BYTE *)(v55 + 20) & 0xFE;
              v142 = v61 | v142 & 0xFE;
              sub_182CBA0(v60, &v139);
              sub_182CBA0(v60, &v141);
              v47 = v2[1];
              ++v114;
              v48 = *(_QWORD *)(v47 + 8LL * v109);
            }
            while ( v48 );
          }
        }
        v115 = 1;
        if ( !v47 )
        {
LABEL_88:
          v62 = qword_1C7F2C0;
          ++v125;
          sub_182CBA0(qword_1C7F2C0, v129);
          sub_182CBA0(v62, v130);
          if ( v124 )
          {
            v63 = *(v124 - 1);
            if ( (_DWORD)v63 )
            {
              v64 = v124;
              v65 = &v124[8 * v63];
              do
              {
                v66 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v64);
                v67 = v64 + 4;
                v64 += 8;
                sub_182CBA0(v66, v67);
              }
              while ( v64 != v65 );
            }
            sub_186B220(v124 - 2);
          }
          ++v109;
          goto LABEL_18;
        }
        while ( 1 )
        {
          if ( v115 >= *(_DWORD *)(v47 - 4) )
            goto LABEL_88;
          if ( v109 != v115 )
            break;
LABEL_87:
          ++v115;
          if ( !v47 )
            goto LABEL_88;
        }
        v69 = qword_1C7F2C0;
        v70 = *(_QWORD *)(v47 + 8LL * v115) + v110;
        v131[0] = 0;
        v131[1] = 0;
        v132[0] = 1;
        v132[1] = 0;
        if ( (*(_BYTE *)(v70 + 4) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, v131, v70);
        else
          LODWORD(v131[0]) = *(_DWORD *)v70;
        if ( (*(_BYTE *)(v70 + 20) & 1) != 0 )
        {
          sub_182C690(v69, v132, v70 + 16);
        }
        else
        {
          v71 = *(_DWORD *)(v70 + 16);
          BYTE4(v132[0]) &= ~1u;
          LODWORD(v132[0]) = v71;
        }
        v72 = v2[1];
        v119 = 0;
        v73 = *(_QWORD *)(v72 + 8LL * v115);
        if ( !v73 )
        {
LABEL_129:
          v92 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v131);
          sub_182CBA0(v92, v132);
          v47 = v2[1];
          goto LABEL_87;
        }
        while ( 1 )
        {
          v74 = qword_1C7F2C0;
          if ( v119 >= *(_DWORD *)(v73 - 4) )
            goto LABEL_129;
          v75 = *(_QWORD *)(v72 + 8LL * v109);
          v144 = 0;
          v122 = 32LL * v119;
          v145 = 0;
          v76 = v122 + v75;
          v146 = 1;
          v147 = 0;
          if ( (v131[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(qword_1C7F2C0, &v144, v131);
            if ( (v132[0] & 0x100000000LL) == 0 )
            {
LABEL_109:
              BYTE4(v146) &= ~1u;
              LODWORD(v146) = v132[0];
              goto LABEL_110;
            }
          }
          else
          {
            LODWORD(v144) = v131[0];
            if ( (v132[0] & 0x100000000LL) == 0 )
              goto LABEL_109;
          }
          sub_182C690(v74, &v146, v132);
LABEL_110:
          if ( (v146 & 0x100000000LL) != 0
            || (_DWORD)v146 != 1
            || (*(_BYTE *)(v76 + 20) & 1) != 0
            || *(_DWORD *)(v76 + 16) != 1 )
          {
            sub_1848FF0(qword_1C7F2C0, &v144, v76);
          }
          else
          {
            v126 = qword_1C7F2C0;
            sub_1831650(qword_1C7F2C0, &v144, v76);
            sub_182CBA0(v126, &v146);
            BYTE4(v146) &= ~1u;
            LODWORD(v146) = 1;
          }
          v134 &= 0xFCu;
          v77 = qword_1C7F2C0;
          v137 &= 0xFCu;
          v133 = 0;
          v135 = 0;
          v136 = 1;
          v138 = 0;
          if ( (v144 & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v133, &v144);
          else
            v133 = v144;
          if ( (v146 & 0x100000000LL) != 0 )
          {
            sub_182C690(v77, &v136, &v146);
          }
          else
          {
            v137 &= ~1u;
            v136 = v146;
          }
          v78 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v144);
          sub_182CBA0(v78, &v146);
          v79 = qword_1C7F2C0;
          v80 = *(_QWORD *)(v2[1] + 8LL * v115) + v122;
          v144 = 0;
          v145 = 0;
          v146 = 1;
          v147 = 0;
          if ( (*(_BYTE *)(v80 + 4) & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v144, v80);
          else
            LODWORD(v144) = *(_DWORD *)v80;
          if ( (*(_BYTE *)(v80 + 20) & 1) != 0 )
          {
            sub_182C690(v79, &v146, v80 + 16);
          }
          else
          {
            v81 = *(_DWORD *)(v80 + 16);
            BYTE4(v146) &= ~1u;
            LODWORD(v146) = v81;
          }
          v82 = qword_1C7F2C0;
          if ( (v146 & 0x100000000LL) != 0 || (_DWORD)v146 != 1 || (v137 & 1) != 0 || v136 != 1 )
          {
            sub_1852000(qword_1C7F2C0, &v144, &v133);
          }
          else
          {
            sub_1832A70(qword_1C7F2C0, &v144, &v133);
            sub_182CBA0(v82, &v146);
            BYTE4(v146) &= ~1u;
            LODWORD(v146) = 1;
          }
          BYTE4(v139) &= 0xFCu;
          v83 = qword_1C7F2C0;
          v142 &= 0xFCu;
          LODWORD(v139) = 0;
          v140 = 0;
          v141 = 1;
          v143 = 0;
          if ( (v144 & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v139, &v144);
          else
            LODWORD(v139) = v144;
          if ( (v146 & 0x100000000LL) != 0 )
          {
            sub_182C690(v83, &v141, &v146);
          }
          else
          {
            v142 &= ~1u;
            v141 = v146;
          }
          v123 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v144);
          sub_182CBA0(v123, &v146);
          v84 = *(_QWORD *)(v2[1] + 8LL * v115) + v122;
          v85 = *(_DWORD *)v84;
          *(_DWORD *)v84 = v139;
          v86 = v84;
          LODWORD(v139) = v85;
          v87 = *(_QWORD *)(v84 + 8);
          *(_QWORD *)(v84 + 8) = v140;
          v140 = v87;
          LOBYTE(v87) = *(_BYTE *)(v84 + 4);
          *(_BYTE *)(v84 + 4) = BYTE4(v139) & 2 | v87 & 0xFD;
          BYTE4(v139) = v87 & 2 | BYTE4(v139) & 0xFD;
          LOBYTE(v84) = *(_BYTE *)(v84 + 4);
          *(_BYTE *)(v86 + 4) = BYTE4(v139) & 1 | v84 & 0xFE;
          BYTE4(v139) = v84 & 1 | BYTE4(v139) & 0xFE;
          LODWORD(v87) = *(_DWORD *)(v86 + 16);
          *(_DWORD *)(v86 + 16) = v141;
          v141 = v87;
          v88 = *(_QWORD *)(v86 + 24);
          *(_QWORD *)(v86 + 24) = v143;
          v143 = v88;
          LOBYTE(v88) = *(_BYTE *)(v86 + 20);
          *(_BYTE *)(v86 + 20) = v142 & 2 | v88 & 0xFD;
          v89 = qword_1C7F2C0;
          v90 = qword_1C7F2C0;
          v142 = v88 & 2 | v142 & 0xFD;
          LOBYTE(v84) = *(_BYTE *)(v86 + 20) & 1;
          *(_BYTE *)(v86 + 20) = v142 & 1 | *(_BYTE *)(v86 + 20) & 0xFE;
          v142 = v84 | v142 & 0xFE;
          sub_182CBA0(v90, &v139);
          sub_182CBA0(v89, &v141);
          v91 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v133);
          sub_182CBA0(v91, &v136);
          v72 = v2[1];
          ++v119;
          v73 = *(_QWORD *)(v72 + 8LL * v115);
          if ( !v73 )
            goto LABEL_129;
        }
      }
      v29 = *v19;
      if ( *v19 )
      {
        v30 = *(v29 - 1);
        if ( (_DWORD)v30 )
        {
          v120 = v7;
          v31 = &v29[8 * v30];
          do
          {
            v32 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v29);
            v33 = v29 + 4;
            v29 += 8;
            sub_182CBA0(v32, v33);
          }
          while ( v29 != v31 );
          v7 = v120;
          v29 = *v19;
        }
        sub_186B220(v29 - 2);
      }
      v34 = (__int64 *)((char *)v7 + (_QWORD)v113);
      v35 = *v34;
      if ( !*v34 )
      {
        *v19 = nullptr;
LABEL_147:
        v93 = v2[1];
        v94 = (_QWORD *)(v93 + v118 * 4);
        v95 = (__int64 *)&v113[v93];
        v96 = *v95;
        if ( *v95 )
        {
          v97 = *(unsigned int *)(v96 - 4);
          if ( (_DWORD)v97 )
          {
            v116 = v94;
            v98 = v96 + 32 * v97;
            do
            {
              v99 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v96);
              v100 = v96 + 16;
              v96 += 32;
              sub_182CBA0(v99, v100);
            }
            while ( v96 != v98 );
            v94 = v116;
            v96 = *v95;
          }
          sub_186B220((void *)(v96 - 8));
        }
        v101 = *v94;
        if ( !*v94 )
        {
          *v95 = 0;
LABEL_59:
          v28 = (unsigned int **)(v2[1] + v118 * 4);
          goto LABEL_60;
        }
        v102 = *(_DWORD *)(v101 - 4);
        v117 = *(_DWORD *)(v101 - 8);
        v103 = sub_186B270(32LL * v117 + 8) + 8;
        *(_QWORD *)(v103 - 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v117), _mm_cvtsi32_si128(v102)).m128i_u64[0];
        *v95 = v103;
        v104 = *v94;
        if ( !*v94 )
          goto LABEL_59;
        v105 = v103;
        v106 = v104 + 32LL * *(unsigned int *)(v104 - 4);
        if ( v104 == v106 )
          goto LABEL_59;
        while ( 1 )
        {
          *(_BYTE *)(v105 + 4) &= 0xFCu;
          v108 = qword_1C7F2C0;
          *(_BYTE *)(v105 + 20) &= 0xFCu;
          *(_DWORD *)v105 = 0;
          *(_QWORD *)(v105 + 8) = 0;
          *(_DWORD *)(v105 + 16) = 1;
          *(_QWORD *)(v105 + 24) = 0;
          if ( (*(_BYTE *)(v104 + 4) & 1) != 0 )
          {
            sub_182C690(v108, v105, v104);
            if ( (*(_BYTE *)(v104 + 20) & 1) != 0 )
            {
LABEL_162:
              sub_182C690(v108, v105 + 16, v104 + 16);
              goto LABEL_159;
            }
          }
          else
          {
            *(_DWORD *)v105 = *(_DWORD *)v104;
            if ( (*(_BYTE *)(v104 + 20) & 1) != 0 )
              goto LABEL_162;
          }
          v107 = *(_DWORD *)(v104 + 16);
          *(_BYTE *)(v105 + 20) &= ~1u;
          *(_DWORD *)(v105 + 16) = v107;
LABEL_159:
          v104 += 32;
          v105 += 32;
          if ( v106 == v104 )
            goto LABEL_59;
        }
      }
      v36 = *(_DWORD *)(v35 - 4);
      v121 = *(_DWORD *)(v35 - 8);
      v37 = (_QWORD *)sub_186B270(32LL * v121 + 8);
      v38 = _mm_cvtsi32_si128(v36);
      v39 = v37 + 1;
      *v37 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v121), v38).m128i_u64[0];
      *v19 = (unsigned int *)(v37 + 1);
      v40 = *v34;
      if ( !v40 )
        goto LABEL_147;
      v41 = v40 + 32LL * *(unsigned int *)(v40 - 4);
      if ( v40 == v41 )
        goto LABEL_147;
      while ( 1 )
      {
        *((_BYTE *)v39 + 4) &= 0xFCu;
        v43 = qword_1C7F2C0;
        *((_BYTE *)v39 + 20) &= 0xFCu;
        *(_DWORD *)v39 = 0;
        v39[1] = 0;
        *((_DWORD *)v39 + 4) = 1;
        v39[3] = 0;
        if ( (*(_BYTE *)(v40 + 4) & 1) != 0 )
        {
          sub_182C690(v43, v39, v40);
          if ( (*(_BYTE *)(v40 + 20) & 1) != 0 )
          {
LABEL_57:
            sub_182C690(v43, v39 + 2, v40 + 16);
            goto LABEL_54;
          }
        }
        else
        {
          *(_DWORD *)v39 = *(_DWORD *)v40;
          if ( (*(_BYTE *)(v40 + 20) & 1) != 0 )
            goto LABEL_57;
        }
        v42 = *(_DWORD *)(v40 + 16);
        *((_BYTE *)v39 + 20) &= ~1u;
        *((_DWORD *)v39 + 4) = v42;
LABEL_54:
        v40 += 32;
        v39 += 4;
        if ( v41 == v40 )
          goto LABEL_147;
      }
    }
    while ( 1 )
    {
      *((_BYTE *)v25 + 4) &= 0xFCu;
      v27 = qword_1C7F2C0;
      *((_BYTE *)v25 + 20) &= 0xFCu;
      *v25 = 0;
      *((_QWORD *)v25 + 1) = 0;
      v25[4] = 1;
      *((_QWORD *)v25 + 3) = 0;
      if ( (v23[1] & 1) != 0 )
      {
        sub_182C690(v27, v25, v23);
        if ( (v23[5] & 1) != 0 )
          goto LABEL_39;
LABEL_36:
        v26 = v23[4];
        *((_BYTE *)v25 + 20) &= ~1u;
        v23 += 8;
        v25 += 8;
        *(v25 - 4) = v26;
        if ( v112 == v23 )
          goto LABEL_40;
      }
      else
      {
        *v25 = *v23;
        if ( (v23[5] & 1) == 0 )
          goto LABEL_36;
LABEL_39:
        sub_182C690(v27, v25 + 4, v23 + 4);
        v23 += 8;
        v25 += 8;
        if ( v112 == v23 )
          goto LABEL_40;
      }
    }
  }
  v109 = 0;
LABEL_19:
  sub_180B130(a1);
  return v109;
}

