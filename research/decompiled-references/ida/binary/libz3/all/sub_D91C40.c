_QWORD *__fastcall sub_D91C40(__int64 a1, void *a2, int a3, __int64 a4)
{
  _QWORD *result; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r14
  unsigned int v8; // r12d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // r12d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  void *v23; // r15
  __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rdi
  bool v27; // zf
  __int64 *v28; // r9
  __int64 v29; // rax
  void *v30; // r15
  __int64 v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // r13
  __int64 v35; // r15
  int v36; // esi
  unsigned int v37; // r8d
  int v38; // eax
  __int64 v39; // rcx
  __int64 *v40; // r12
  __int64 *v41; // rdx
  int v42; // edi
  __int64 v43; // rax
  __int64 *v44; // r8
  __int64 *v45; // rax
  __int64 *v46; // rcx
  __int64 *v47; // r11
  __int64 v48; // rdx
  __int64 *v49; // rax
  __int64 *v50; // rdx
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // r15
  unsigned int v54; // ecx
  unsigned int v55; // eax
  size_t v56; // r13
  __int64 *v57; // r12
  __int64 *v58; // rdx
  int v59; // ecx
  __int64 v60; // rax
  __int64 *v61; // rsi
  __int64 *v62; // rax
  __int64 *v63; // rdi
  __int64 *v64; // r10
  __int64 v65; // rdx
  __int64 *v66; // rax
  __int64 *v67; // rdx
  __int64 v68; // rax
  int v69; // r8d
  int v70; // r9d
  __int64 v71; // r13
  __int64 v72; // rdx
  __int64 v73; // rdx
  int v74; // edx
  int v75; // esi
  _DWORD *v76; // rax
  __int64 v77; // rax
  __int64 v78; // r15
  __int64 v79; // r14
  int v80; // r8d
  int v81; // r9d
  __int64 v82; // rax
  int v83; // edx
  int v84; // ecx
  int v85; // r8d
  int v86; // r9d
  __int64 v87; // r14
  void *v88; // r15
  void *v89; // rbx
  __int64 v90; // rsi
  __int64 v91; // rdi
  __int64 v92; // rsi
  __int64 v93; // rdi
  __int64 v94; // r12
  void *v95; // rax
  int v96; // ecx
  __int64 *v97; // r14
  __int64 *v98; // rdi
  __int64 v99; // rdx
  __int64 *v100; // rsi
  __int64 *v101; // rdx
  __int64 v102; // rsi
  __int64 v103; // r12
  void *v104; // rax
  int v105; // r8d
  __int64 *v106; // r14
  __int64 *v107; // rdi
  __int64 v108; // rdx
  __int64 *v109; // rsi
  __int64 *v110; // rdx
  __int64 v111; // rsi
  int v112; // [rsp+0h] [rbp-180h]
  int v113; // [rsp+8h] [rbp-178h]
  int v114; // [rsp+10h] [rbp-170h]
  __int64 v115; // [rsp+18h] [rbp-168h]
  __int64 v116; // [rsp+20h] [rbp-160h]
  __int64 v117; // [rsp+28h] [rbp-158h]
  __int64 v118; // [rsp+28h] [rbp-158h]
  int v119; // [rsp+28h] [rbp-158h]
  size_t v120; // [rsp+28h] [rbp-158h]
  int v121; // [rsp+28h] [rbp-158h]
  __int64 v122; // [rsp+30h] [rbp-150h]
  __int64 v123; // [rsp+30h] [rbp-150h]
  __int64 v124; // [rsp+38h] [rbp-148h]
  _QWORD *v125; // [rsp+40h] [rbp-140h]
  void *v126; // [rsp+48h] [rbp-138h]
  _QWORD *v127; // [rsp+50h] [rbp-130h]
  int v128; // [rsp+50h] [rbp-130h]
  unsigned int v129; // [rsp+50h] [rbp-130h]
  _QWORD *v130; // [rsp+58h] [rbp-128h]
  __int64 v131; // [rsp+60h] [rbp-120h]
  int v132; // [rsp+60h] [rbp-120h]
  __int64 v133; // [rsp+68h] [rbp-118h]
  __int64 v134; // [rsp+70h] [rbp-110h]
  int v136[2]; // [rsp+80h] [rbp-100h]
  int v137[2]; // [rsp+80h] [rbp-100h]
  int v138; // [rsp+80h] [rbp-100h]
  int v139; // [rsp+80h] [rbp-100h]
  int v140[2]; // [rsp+80h] [rbp-100h]
  int v141[2]; // [rsp+80h] [rbp-100h]
  _BYTE v143[4]; // [rsp+9Ch] [rbp-E4h] BYREF
  __int64 v144; // [rsp+A0h] [rbp-E0h]
  __int64 v145; // [rsp+B0h] [rbp-D0h]
  __int64 v146; // [rsp+C0h] [rbp-C0h] BYREF
  __int64 v147; // [rsp+C8h] [rbp-B8h]
  __int64 v148; // [rsp+D0h] [rbp-B0h] BYREF
  __int64 v149; // [rsp+D8h] [rbp-A8h]
  _QWORD v150[2]; // [rsp+E0h] [rbp-A0h] BYREF
  _QWORD v151[2]; // [rsp+F0h] [rbp-90h] BYREF
  int v152[2]; // [rsp+100h] [rbp-80h] BYREF
  __int64 v153; // [rsp+108h] [rbp-78h]
  _QWORD v154[2]; // [rsp+110h] [rbp-70h] BYREF
  _QWORD v155[2]; // [rsp+120h] [rbp-60h] BYREF
  __int64 v156; // [rsp+130h] [rbp-50h] BYREF
  __int64 v157; // [rsp+138h] [rbp-48h]
  __int64 v158; // [rsp+140h] [rbp-40h] BYREF
  __int64 v159; // [rsp+148h] [rbp-38h]

  LODWORD(v116) = a3;
  result = *(_QWORD **)(a1 + 192);
  v5 = &result[3 * *(unsigned int *)(a1 + 200)];
  v126 = a2;
  LODWORD(v125) = (_DWORD)result + 24 * *(_DWORD *)(a1 + 200);
  if ( v5 != result )
  {
    while ( *result <= 1u )
    {
      result += 3;
      if ( v5 == result )
        return result;
    }
    v130 = result;
    if ( v5 != result )
    {
      v6 = *result;
      v124 = a1 + 16;
      do
      {
        v7 = *(_QWORD *)(v6 + 40);
        v144 = 0;
        v145 = 0;
        v131 = v7;
        v127 = (_QWORD *)v130[2];
        *(_QWORD *)v136 = v130[1];
        v122 = *(_QWORD *)(a1 + 8);
        v8 = sub_15C5560(v124, v7);
        v13 = sub_15C5540(v124, v7, v9, v10, v11, v12);
        v14 = sub_15CC950(v124, v13, v8);
        v134 = v14;
        if ( v14 )
          ++*(_DWORD *)(v14 + 8);
        v144 = v14;
        v15 = sub_15C5560(v124, v7);
        v20 = sub_15C5540(v124, v7, v16, v17, v18, v19);
        v21 = sub_15CCA40(v124, v20, v15);
        v133 = v21;
        if ( v21 )
          ++*(_DWORD *)(v21 + 8);
        v146 = 0;
        v148 = 0;
        v145 = v21;
        v147 = *(_QWORD *)(a1 + 8);
        v149 = v147;
        if ( !(unsigned __int8)sub_135E850(v126, *(_QWORD *)(*(_QWORD *)v136 + 16LL), &v146) )
        {
          v156 = 0;
          v157 = 0;
          v158 = 1;
          v159 = 0;
          sub_182CBA0(qword_1C7F2C0, &v158);
          BYTE4(v158) &= ~1u;
          LODWORD(v158) = 1;
          v22 = sub_1674520(a1 + 80, &v156, 1);
          v23 = qword_1C7F2C0;
          v24 = v22;
          sub_182CBA0(qword_1C7F2C0, &v156);
          sub_182CBA0(v23, &v158);
          if ( v24 )
            ++*(_DWORD *)(v24 + 8);
          v25 = v146;
          if ( v146 )
          {
            v26 = v147;
            v27 = (*(_DWORD *)(v146 + 8))-- == 1;
            if ( v27 )
              sub_15D7BC0(v26, v25);
          }
          v146 = v24;
        }
        if ( !(unsigned __int8)sub_135E850(v126, v127[2], &v148) )
        {
          v156 = 0;
          v157 = 0;
          v158 = 1;
          v159 = 0;
          sub_182CBA0(qword_1C7F2C0, &v158);
          BYTE4(v158) &= ~1u;
          LODWORD(v158) = 1;
          v29 = sub_1674520(a1 + 80, &v156, 1);
          v30 = qword_1C7F2C0;
          v31 = v29;
          sub_182CBA0(qword_1C7F2C0, &v156);
          sub_182CBA0(v30, &v158);
          if ( v31 )
            ++*(_DWORD *)(v31 + 8);
          v32 = v148;
          if ( v148 )
          {
            v33 = v149;
            v27 = (*(_DWORD *)(v148 + 8))-- == 1;
            if ( v27 )
              sub_15D7BC0(v33, v32);
          }
          v148 = v31;
        }
        v34 = *(unsigned int *)(a4 + 8);
        v35 = *(_QWORD *)(*(_QWORD *)v136 + 16LL);
        v36 = *(_DWORD *)(a4 + 16);
        v37 = 2 * v34;
        if ( 3 * (int)v34 < (unsigned int)(4 * (v36 + *(_DWORD *)(a4 + 12))) )
        {
          v103 = v37;
          LODWORD(v115) = 2 * v34;
          v34 = v37;
          v120 = 8LL * v37;
          v104 = (void *)sub_186B270(v120);
          v105 = v115;
          *(_QWORD *)v141 = v104;
          v39 = v120;
          if ( (_DWORD)v115 )
          {
            memset(v104, 0, 8 * v103);
            v39 = v120;
            v105 = v115;
          }
          v38 = v105 - 1;
          v106 = *(__int64 **)a4;
          v40 = (__int64 *)(*(_QWORD *)v141 + v39);
          v28 = (__int64 *)(*(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 8));
          if ( *(__int64 **)a4 != v28 )
          {
            do
            {
              while ( (unsigned __int64)*v106 <= 1 )
              {
                if ( v28 == ++v106 )
                  goto LABEL_142;
              }
              v107 = *(__int64 **)v141;
              v108 = 8LL * (*(_DWORD *)(*v106 + 12) & (unsigned int)v38);
              v109 = (__int64 *)(*(_QWORD *)v141 + v108);
              if ( v39 == v108 )
              {
LABEL_146:
                v107 = *(__int64 **)v141;
                if ( *(__int64 **)v141 == v109 )
                {
LABEL_153:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v110 = *(__int64 **)v141;
                while ( *v110 )
                {
                  if ( v109 == ++v110 )
                    goto LABEL_153;
                }
              }
              else
              {
                v110 = (__int64 *)(*(_QWORD *)v141 + v108);
                while ( *v110 )
                {
                  if ( v40 == ++v110 )
                    goto LABEL_146;
                }
              }
              v111 = *v106++;
              *(_QWORD *)v141 = v107;
              *v110 = v111;
            }
            while ( v28 != v106 );
LABEL_142:
            v28 = *(__int64 **)a4;
          }
          if ( v28 )
          {
            v114 = v105;
            v115 = v39;
            v121 = v105 - 1;
            sub_186B220(v28);
            v105 = v114;
            v39 = v115;
            v38 = v121;
          }
          *(_DWORD *)(a4 + 8) = v105;
          v41 = *(__int64 **)v141;
          *(_QWORD *)a4 = *(_QWORD *)v141;
          *(_DWORD *)(a4 + 16) = 0;
          v36 = 0;
        }
        else
        {
          v38 = v34 - 1;
          v39 = 8LL * (unsigned int)v34;
          v40 = (__int64 *)(*(_QWORD *)a4 + v39);
          v41 = *(__int64 **)a4;
        }
        v42 = *(_DWORD *)(v35 + 12);
        v43 = 8LL * (v42 & (unsigned int)v38);
        v44 = &v41[(unsigned __int64)v43 / 8];
        if ( v43 == v39 )
        {
          v46 = nullptr;
          v49 = v41;
LABEL_36:
          if ( v44 == v49 )
          {
LABEL_44:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v50 = v49;
          while ( 1 )
          {
            while ( 1 )
            {
              v51 = *v50;
              if ( (unsigned __int64)*v50 > 1 )
                break;
              if ( !v51 )
              {
                v45 = v50;
                goto LABEL_46;
              }
              v46 = v50++;
              if ( v44 == v50 )
                goto LABEL_44;
            }
            if ( *(_DWORD *)(v51 + 12) == v42 && v35 == v51 )
              break;
            if ( v44 == ++v50 )
              goto LABEL_44;
          }
          v45 = v50;
LABEL_165:
          *v45 = v35;
          v52 = *(_DWORD *)(a4 + 12);
        }
        else
        {
          v45 = &v41[(unsigned __int64)v43 / 8];
          v46 = nullptr;
          v47 = v41;
          while ( 1 )
          {
            while ( 1 )
            {
              v48 = *v45;
              if ( (unsigned __int64)*v45 <= 1 )
                break;
              if ( *(_DWORD *)(v48 + 12) == v42 && v35 == v48 )
                goto LABEL_165;
              if ( ++v45 == v40 )
              {
LABEL_35:
                v49 = v47;
                goto LABEL_36;
              }
            }
            if ( !v48 )
              break;
            v46 = v45++;
            if ( v45 == v40 )
              goto LABEL_35;
          }
LABEL_46:
          if ( v46 )
            *(_DWORD *)(a4 + 16) = --v36;
          else
            v46 = v45;
          *v46 = v35;
          v52 = *(_DWORD *)(a4 + 12) + 1;
          *(_DWORD *)(a4 + 12) = v52;
        }
        v53 = v127[2];
        v54 = 2 * v34;
        if ( 3 * (int)v34 < (unsigned int)(4 * (v36 + v52)) )
        {
          v94 = v54;
          v128 = 2 * v34;
          v56 = 8LL * v54;
          v95 = (void *)sub_186B270(v56);
          v96 = v128;
          *(_QWORD *)v140 = v95;
          if ( v128 )
          {
            memset(v95, 0, 8 * v94);
            v96 = v128;
          }
          v55 = v96 - 1;
          v97 = *(__int64 **)a4;
          v44 = (__int64 *)(*(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 8));
          v57 = (__int64 *)(*(_QWORD *)v140 + v56);
          if ( *(__int64 **)a4 != v44 )
          {
            do
            {
              while ( (unsigned __int64)*v97 <= 1 )
              {
                if ( v44 == ++v97 )
                  goto LABEL_122;
              }
              v98 = *(__int64 **)v140;
              v99 = 8LL * (*(_DWORD *)(*v97 + 12) & v55);
              v100 = (__int64 *)(*(_QWORD *)v140 + v99);
              if ( v56 == v99 )
              {
LABEL_126:
                v98 = *(__int64 **)v140;
                if ( *(__int64 **)v140 == v100 )
                {
LABEL_152:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v101 = *(__int64 **)v140;
                while ( *v101 )
                {
                  if ( v100 == ++v101 )
                    goto LABEL_152;
                }
              }
              else
              {
                v101 = (__int64 *)(*(_QWORD *)v140 + v99);
                while ( *v101 )
                {
                  if ( v57 == ++v101 )
                    goto LABEL_126;
                }
              }
              v102 = *v97++;
              *(_QWORD *)v140 = v98;
              *v101 = v102;
            }
            while ( v44 != v97 );
LABEL_122:
            v44 = *(__int64 **)a4;
          }
          if ( v44 )
          {
            v119 = v96;
            v129 = v96 - 1;
            sub_186B220(v44);
            v96 = v119;
            v55 = v129;
          }
          *(_DWORD *)(a4 + 8) = v96;
          v58 = *(__int64 **)v140;
          *(_QWORD *)a4 = *(_QWORD *)v140;
          *(_DWORD *)(a4 + 16) = 0;
        }
        else
        {
          v55 = v34 - 1;
          v56 = 8 * v34;
          v57 = (__int64 *)(*(_QWORD *)a4 + v56);
          v58 = *(__int64 **)a4;
        }
        v59 = *(_DWORD *)(v53 + 12);
        v60 = 8LL * (v59 & v55);
        v61 = &v58[(unsigned __int64)v60 / 8];
        if ( v60 == v56 )
        {
          v63 = nullptr;
          v66 = v58;
LABEL_60:
          if ( v61 == v66 )
          {
LABEL_68:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v67 = v66;
          while ( 1 )
          {
            while ( 1 )
            {
              v68 = *v67;
              if ( (unsigned __int64)*v67 > 1 )
                break;
              if ( !v68 )
              {
                v62 = v67;
                goto LABEL_70;
              }
              v63 = v67++;
              if ( v61 == v67 )
                goto LABEL_68;
            }
            if ( *(_DWORD *)(v68 + 12) == v59 && v53 == v68 )
              break;
            if ( v61 == ++v67 )
              goto LABEL_68;
          }
          v62 = v67;
LABEL_163:
          *v62 = v53;
        }
        else
        {
          v62 = &v58[(unsigned __int64)v60 / 8];
          v63 = nullptr;
          v64 = v58;
          while ( 1 )
          {
            while ( 1 )
            {
              v65 = *v62;
              if ( (unsigned __int64)*v62 <= 1 )
                break;
              if ( *(_DWORD *)(v65 + 12) == v59 && v53 == v65 )
                goto LABEL_163;
              if ( ++v62 == v57 )
              {
LABEL_59:
                v66 = v64;
                goto LABEL_60;
              }
            }
            if ( !v65 )
              break;
            v63 = v62++;
            if ( v62 == v57 )
              goto LABEL_59;
          }
LABEL_70:
          if ( v63 )
            --*(_DWORD *)(a4 + 16);
          else
            v63 = v62;
          *v63 = v53;
          ++*(_DWORD *)(a4 + 12);
        }
        v154[0] = 0;
        v154[1] = 0;
        v155[0] = 1;
        v155[1] = 0;
        v156 = 0;
        v157 = 0;
        v158 = 1;
        v159 = 0;
        if ( !(unsigned __int8)sub_1673B50(
                                 (int)a1 + 80,
                                 v146,
                                 (unsigned int)v154,
                                 (unsigned int)v143,
                                 (_DWORD)v44,
                                 (_DWORD)v28) )
        {
          sub_1872CE0("");
          sub_1873130(114, 450);
        }
        if ( !(unsigned __int8)sub_1673B50((int)a1 + 80, v148, (unsigned int)&v156, (unsigned int)v143, v69, v70) )
        {
          sub_1872CE0("");
          sub_1873130(114, 451);
        }
        v71 = sub_186B270(0x38u);
        sub_13478B0(v71, *(_QWORD *)(a1 + 8), *(unsigned int *)(v6 + 32));
        v150[0] = v134;
        v72 = v134;
        v150[1] = v133;
        v151[0] = v133;
        v151[1] = v134;
        if ( (v154[0] & 0x100000000LL) == 0
          && LODWORD(v154[0]) == 1
          && (v155[0] & 0x100000000LL) == 0
          && LODWORD(v155[0]) == 1 )
        {
          v72 = v133;
        }
        sub_1348F50(v71, v150, v72);
        v73 = v134;
        if ( (v156 & 0x100000000LL) == 0 && (_DWORD)v156 == 1 && (v158 & 0x100000000LL) == 0 && (_DWORD)v158 == 1 )
          v73 = v133;
        sub_1348F50(v71, v151, v73);
        v74 = 21;
        v75 = *(_DWORD *)(a1 + 32);
        v76 = *(_DWORD **)(v6 + 24);
        if ( v76 )
        {
          if ( *v76 == v75 )
          {
            v74 = 20;
            if ( v76[1] != 18 )
              v74 = 21;
          }
        }
        v117 = *(_QWORD *)(a1 + 8);
        v77 = sub_15D2D60(v117, v75, v74, 0, 0, 2, (__int64)v150, 0);
        *(_QWORD *)v137 = v77;
        if ( v77 )
          ++*(_DWORD *)(v77 + 8);
        v78 = *(_QWORD *)(a1 + 8);
        v79 = sub_15DB5C0(v78, 1, v131);
        *(_QWORD *)v152 = sub_15DB5C0(*(_QWORD *)(a1 + 8), 0, v131);
        v153 = v79;
        v82 = sub_15DC610(
                v78,
                v137[0],
                2,
                (int)v152,
                v80,
                v81,
                v112,
                v113,
                v114,
                v115,
                v116,
                v117,
                v122,
                v124,
                (int)v125,
                v126);
        v87 = v82;
        if ( v82 )
        {
          ++*(_DWORD *)(v82 + 8);
          sub_1349280(v71, v82, v83, v84, v85, v86);
          sub_135F980(v116, v6, v71);
          v27 = (*(_DWORD *)(v87 + 8))-- == 1;
          if ( v27 )
            sub_15D7BC0(v78, v87);
        }
        else
        {
          sub_1349280(v71, 0, v83, v84, v85, v86);
          sub_135F980(v116, v6, v71);
        }
        if ( *(_QWORD *)v137 )
        {
          v132 = *(_DWORD *)(*(_QWORD *)v137 + 8LL);
          *(_DWORD *)(*(_QWORD *)v137 + 8LL) = v132 - 1;
          if ( v132 == 1 )
            sub_15D7BC0(v118, *(_QWORD *)v137);
        }
        v88 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v156);
        sub_182CBA0(v88, &v158);
        v89 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v154);
        sub_182CBA0(v89, v155);
        v90 = v148;
        if ( v148 )
        {
          v91 = v149;
          v27 = (*(_DWORD *)(v148 + 8))-- == 1;
          if ( v27 )
            sub_15D7BC0(v91, v90);
        }
        v92 = v146;
        if ( v146 )
        {
          v93 = v147;
          v27 = (*(_DWORD *)(v146 + 8))-- == 1;
          if ( v27 )
            sub_15D7BC0(v93, v92);
        }
        if ( v133 )
        {
          v138 = *(_DWORD *)(v133 + 8);
          *(_DWORD *)(v133 + 8) = v138 - 1;
          if ( v138 == 1 )
            sub_15D7BC0(v123, v133);
        }
        if ( v134 )
        {
          v139 = *(_DWORD *)(v134 + 8);
          *(_DWORD *)(v134 + 8) = v139 - 1;
          if ( v139 == 1 )
            sub_15D7BC0(v123, v134);
        }
        result = v130 + 3;
        if ( v125 == v130 + 3 )
          break;
        while ( 1 )
        {
          v6 = *result;
          if ( *result > 1u )
            break;
          result += 3;
          if ( v125 == result )
            return result;
        }
        v130 = result;
      }
      while ( v125 != result );
    }
  }
  return result;
}

