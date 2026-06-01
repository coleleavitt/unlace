__int64 __fastcall sub_346EE0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 result; // rax
  unsigned int v6; // r14d
  unsigned int v7; // edx
  _QWORD *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // r9d
  __int64 *v22; // r10
  unsigned int v23; // r11d
  __int64 v24; // r12
  __int64 v25; // r15
  int v26; // edi
  __int64 v27; // rdx
  __int64 *v28; // r8
  __int64 *i; // rdx
  __int64 v30; // rsi
  unsigned int v31; // edx
  __int64 *v32; // rdx
  __int64 v33; // rsi
  unsigned int v34; // r12d
  unsigned int v35; // r9d
  __int64 v36; // r15
  int v37; // eax
  __int64 v38; // rcx
  __int64 *v39; // r13
  int v40; // esi
  __int64 v41; // rax
  __int64 *v42; // rdi
  __int64 *v43; // rax
  __int64 *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rdx
  int *v47; // r13
  int v48; // eax
  __int64 v49; // rsi
  void *v50; // rdi
  void *v51; // r15
  int v52; // eax
  int *v53; // r15
  int *v54; // r12
  void *v55; // rbx
  int *v56; // rsi
  char v57; // al
  char v58; // al
  __int64 v59; // r13
  _QWORD *v60; // rax
  int v61; // r9d
  _QWORD *v62; // r8
  _QWORD *v63; // rax
  __int64 *v64; // r10
  __int64 *v65; // r14
  __int64 v66; // rdx
  _QWORD *v67; // rsi
  _QWORD *v68; // rdx
  __int64 v69; // rsi
  int v70; // eax
  __int64 v71; // rdx
  unsigned int v72; // r11d
  __int64 *v73; // r9
  unsigned int v74; // r10d
  __int64 v75; // rbp
  __int64 v76; // r15
  int v77; // r8d
  __int64 v78; // rsi
  __int64 *v79; // r13
  __int64 *j; // rsi
  __int64 v81; // rdi
  unsigned int v82; // esi
  __int64 *v83; // rsi
  __int64 v84; // rdi
  __int64 v85; // r13
  unsigned int v86; // ecx
  int v87; // eax
  size_t v88; // r15
  __int64 *v89; // rbp
  int v90; // ecx
  __int64 v91; // rax
  __int64 *v92; // rsi
  __int64 *v93; // rax
  __int64 *v94; // rdi
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // r15
  int v98; // eax
  __int64 v99; // rsi
  void *v100; // rdi
  void *v101; // r12
  int v102; // eax
  int *v103; // r13
  int *v104; // r12
  void *v105; // rbx
  int *v106; // rsi
  char v107; // al
  char v108; // al
  __int64 v109; // rbp
  _OWORD *v110; // rax
  int v111; // ecx
  _OWORD *v112; // r9
  _OWORD *v113; // rax
  __int64 *v114; // r14
  __int64 *v115; // r12
  __int64 v116; // rdx
  _QWORD *v117; // rsi
  _QWORD *v118; // rdx
  __int64 v119; // rsi
  int v120; // eax
  unsigned int v121; // [rsp+0h] [rbp-E8h]
  unsigned int v122; // [rsp+0h] [rbp-E8h]
  unsigned int v123; // [rsp+4h] [rbp-E4h]
  int v125; // [rsp+10h] [rbp-D8h]
  size_t v126; // [rsp+10h] [rbp-D8h]
  _QWORD *v127; // [rsp+10h] [rbp-D8h]
  int v128; // [rsp+10h] [rbp-D8h]
  _OWORD *v129; // [rsp+10h] [rbp-D8h]
  __int64 v130; // [rsp+18h] [rbp-D0h]
  __int64 v131; // [rsp+18h] [rbp-D0h]
  int v132; // [rsp+18h] [rbp-D0h]
  unsigned int v133; // [rsp+18h] [rbp-D0h]
  int *v134; // [rsp+18h] [rbp-D0h]
  __int64 v135; // [rsp+20h] [rbp-C8h]
  __int64 *v136; // [rsp+20h] [rbp-C8h]
  void *v137; // [rsp+20h] [rbp-C8h]
  void *v138; // [rsp+20h] [rbp-C8h]
  void *v139; // [rsp+20h] [rbp-C8h]
  char v142; // [rsp+38h] [rbp-B0h]
  __int64 *v143; // [rsp+38h] [rbp-B0h]
  void *v144; // [rsp+38h] [rbp-B0h]
  __int64 v145; // [rsp+38h] [rbp-B0h]
  void *v146; // [rsp+38h] [rbp-B0h]
  void *v147; // [rsp+38h] [rbp-B0h]
  int v148; // [rsp+40h] [rbp-A8h]
  int v149; // [rsp+40h] [rbp-A8h]
  int v150; // [rsp+48h] [rbp-A0h]
  int v151; // [rsp+4Ch] [rbp-9Ch]
  __int64 v152; // [rsp+50h] [rbp-98h] BYREF
  int *v153; // [rsp+58h] [rbp-90h] BYREF
  __int64 v154; // [rsp+60h] [rbp-88h] BYREF
  int *v155; // [rsp+68h] [rbp-80h] BYREF
  int v156; // [rsp+70h] [rbp-78h] BYREF
  char v157; // [rsp+74h] [rbp-74h]
  int v158; // [rsp+80h] [rbp-68h] BYREF
  char v159; // [rsp+84h] [rbp-64h]
  int v160; // [rsp+90h] [rbp-58h] BYREF
  char v161; // [rsp+94h] [rbp-54h]
  int v162; // [rsp+A0h] [rbp-48h] BYREF
  char v163; // [rsp+A4h] [rbp-44h]

  v4 = (__int64 *)sub_186B270(0x40u);
  *(_OWORD *)v4 = 0;
  *((_OWORD *)v4 + 1) = 0;
  *((_OWORD *)v4 + 2) = 0;
  *((_OWORD *)v4 + 3) = 0;
  result = *a3;
  if ( !*a3 )
    return sub_186B220(v4);
  v125 = 0;
  v6 = 8;
  v150 = 0;
  v123 = -1;
  v121 = 0;
  v142 = 0;
  while ( v121 < *(_DWORD *)(result - 4) )
  {
    v8 = (_QWORD *)(result + 16LL * v121);
    v9 = v8[1];
    if ( v9 && (v7 = *(_DWORD *)(v9 - 4), v7 > 0x14) )
    {
      if ( v123 <= v7 )
        v7 = v123;
      ++v121;
      v123 = v7;
      if ( !result )
        goto LABEL_75;
    }
    else
    {
      v10 = sub_2FF8B0(a1);
      v11 = v8[1];
      v12 = *(_QWORD *)(a1 + 8);
      v130 = v10;
      v13 = *v8;
      if ( v11 )
        v14 = *(unsigned int *)(v11 - 4);
      else
        v14 = 0;
      v15 = sub_15EC1C0(*v8, v14);
      v16 = v15;
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      v17 = sub_15E1A70(v12);
      sub_E5EBF0(v130, v17);
      if ( v16 )
      {
        if ( (*(_DWORD *)(v16 + 8))-- == 1 )
          sub_15D7BC0(v13, v16);
      }
      v19 = v8[1];
      if ( !v19 )
        goto LABEL_60;
      v20 = v123;
      v21 = *(_DWORD *)(v19 - 4);
      if ( v123 > v21 )
        v20 = *(_DWORD *)(v19 - 4);
      v123 = v20;
      if ( v21 <= 0xA )
      {
        if ( v21 )
        {
          v22 = (__int64 *)v8[1];
          v23 = 1;
          v24 = 8LL * v6;
          while ( 1 )
          {
            v25 = *v22;
            v26 = *(_DWORD *)(*v22 + 12);
            v27 = 8LL * ((v6 - 1) & v26);
            v28 = &v4[(unsigned __int64)v27 / 8];
            if ( v27 != v24 )
            {
              for ( i = &v4[(unsigned __int64)v27 / 8]; &v4[(unsigned __int64)v24 / 8] != i; ++i )
              {
                v30 = *i;
                if ( (unsigned __int64)*i > 1 )
                {
                  if ( *(_DWORD *)(v30 + 12) == v26 && v25 == v30 )
                    goto LABEL_74;
                }
                else if ( !v30 )
                {
                  goto LABEL_29;
                }
              }
            }
            if ( v28 == v4 )
            {
LABEL_29:
              ++v22;
              v31 = v23 + 1;
              if ( v23 >= v21 )
                goto LABEL_39;
              goto LABEL_30;
            }
            v32 = v4;
            while ( 1 )
            {
              v33 = *v32;
              if ( (unsigned __int64)*v32 <= 1 )
                break;
              if ( *(_DWORD *)(v33 + 12) == v26 && v25 == v33 )
                goto LABEL_74;
LABEL_35:
              if ( v28 == ++v32 )
                goto LABEL_29;
            }
            if ( v33 )
              goto LABEL_35;
            ++v22;
            v31 = v23 + 1;
            if ( v23 >= v21 )
            {
LABEL_39:
              v34 = 0;
              while ( 1 )
              {
                if ( v34 >= v21 )
                  goto LABEL_61;
                v35 = 2 * v6;
                v36 = *(_QWORD *)(v19 + 8LL * v34);
                if ( 3 * v6 < 4 * (v150 + v125) )
                  break;
                v37 = v6 - 1;
                v38 = 8LL * v6;
                v39 = (__int64 *)((char *)v4 + v38);
LABEL_43:
                v40 = *(_DWORD *)(v36 + 12);
                v41 = 8LL * (v40 & (unsigned int)v37);
                v42 = &v4[(unsigned __int64)v41 / 8];
                if ( v41 == v38 )
                {
                  v44 = nullptr;
LABEL_51:
                  if ( v4 != v42 )
                  {
                    v43 = v4;
                    do
                    {
                      while ( 1 )
                      {
                        v46 = *v43;
                        if ( (unsigned __int64)*v43 <= 1 )
                          break;
                        if ( *(_DWORD *)(v46 + 12) == v40 && v36 == v46 )
                          goto LABEL_111;
                        if ( v42 == ++v43 )
                          goto LABEL_59;
                      }
                      if ( !v46 )
                        goto LABEL_87;
                      v44 = v43++;
                    }
                    while ( v42 != v43 );
                  }
LABEL_59:
                  sub_1872CE0("");
                  sub_1873130(114, 405);
                }
                v43 = &v4[(unsigned __int64)v41 / 8];
                v44 = nullptr;
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v45 = *v43;
                    if ( (unsigned __int64)*v43 <= 1 )
                      break;
                    if ( *(_DWORD *)(v45 + 12) == v40 && v36 == v45 )
                    {
LABEL_111:
                      *v43 = v36;
                      goto LABEL_90;
                    }
                    if ( ++v43 == v39 )
                      goto LABEL_51;
                  }
                  if ( !v45 )
                    break;
                  v44 = v43++;
                  if ( v43 == v39 )
                    goto LABEL_51;
                }
LABEL_87:
                if ( v44 )
                  --v125;
                else
                  v44 = v43;
                *v44 = v36;
                ++v150;
LABEL_90:
                v19 = v8[1];
                ++v34;
                if ( !v19 )
                  goto LABEL_61;
                v21 = *(_DWORD *)(v19 - 4);
              }
              v59 = v35;
              v126 = 8LL * v35;
              v60 = (_QWORD *)sub_186B270(v126);
              v61 = 2 * v6;
              v38 = v126;
              v62 = v60;
              if ( 2 * v6 )
              {
                v63 = memset(v60, 0, 8 * v59);
                v61 = 2 * v6;
                v38 = v126;
                v62 = v63;
                v64 = &v4[v6];
                v37 = 2 * v6 - 1;
                v39 = &v62[v126 / 8];
LABEL_94:
                v65 = v4;
                do
                {
                  while ( (unsigned __int64)*v65 <= 1 )
                  {
                    if ( ++v65 == v64 )
                      goto LABEL_102;
                  }
                  v66 = 8LL * (*(_DWORD *)(*v65 + 12) & (unsigned int)v37);
                  v67 = &v62[(unsigned __int64)v66 / 8];
                  if ( v38 == v66 )
                  {
LABEL_105:
                    if ( v62 == v67 )
                    {
LABEL_110:
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v68 = v62;
                    while ( *v68 )
                    {
                      if ( v67 == ++v68 )
                        goto LABEL_110;
                    }
                  }
                  else
                  {
                    v68 = &v62[(unsigned __int64)v66 / 8];
                    while ( *v68 )
                    {
                      if ( ++v68 == v39 )
                        goto LABEL_105;
                    }
                  }
                  v69 = *v65++;
                  *v68 = v69;
                }
                while ( v65 != v64 );
              }
              else
              {
                v39 = v60;
                v64 = &v4[v6];
                v37 = -1;
                if ( v4 != v64 )
                  goto LABEL_94;
              }
LABEL_102:
              if ( v4 )
              {
                v148 = v61;
                v145 = v38;
                v132 = v37;
                v127 = v62;
                sub_186B220(v4);
                v61 = v148;
                v38 = v145;
                v37 = v132;
                v62 = v127;
              }
              v125 = 0;
              v6 = v61;
              v4 = v62;
              goto LABEL_43;
            }
LABEL_30:
            v23 = v31;
          }
        }
LABEL_60:
        v123 = 0;
LABEL_61:
        v152 = 0;
        v153 = nullptr;
        sub_3450C0((__int64)&v156, a1, a2, (__int64)v8, &v152, &v153);
        v47 = v153;
        v131 = v152;
        sub_3463D0((_QWORD *)a1, a2, &v152, (__int64)&v156);
        v48 = v156;
        v49 = a1 + 72;
        v50 = qword_1C7F2C0;
        if ( v156 )
        {
          if ( *(_DWORD *)(a1 + 72) )
          {
            if ( (*(_BYTE *)(a1 + 92) & 1) != 0 || *(_DWORD *)(a1 + 88) != 1 || (v159 & 1) != 0 || v158 != 1 )
            {
              sub_1851D20(qword_1C7F2C0, v49, &v156, a1 + 72);
            }
            else
            {
              v144 = qword_1C7F2C0;
              sub_1831A80(qword_1C7F2C0, v49, &v156, a1 + 72);
              sub_182CBA0(v144, a1 + 88);
              *(_BYTE *)(a1 + 92) &= ~1u;
              *(_DWORD *)(a1 + 88) = 1;
            }
          }
          else
          {
            if ( (v157 & 1) != 0 )
            {
              v147 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, v49, &v156);
              v50 = v147;
            }
            else
            {
              *(_BYTE *)(a1 + 76) &= ~1u;
              *(_DWORD *)(a1 + 72) = v48;
            }
            if ( (v159 & 1) != 0 )
            {
              sub_182C690(v50, a1 + 88, &v158);
            }
            else
            {
              v70 = v158;
              *(_BYTE *)(a1 + 92) &= ~1u;
              *(_DWORD *)(a1 + 88) = v70;
            }
          }
        }
        else
        {
          v57 = *(_BYTE *)(a1 + 76);
          if ( (v57 & 1) != 0 )
          {
            v146 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v49, a1 + 72);
            v50 = v146;
          }
          else
          {
            *(_BYTE *)(a1 + 76) = v57 & 0xFE;
          }
          v58 = *(_BYTE *)(a1 + 92);
          if ( (v58 & 1) != 0 )
            sub_182C690(v50, a1 + 88, a1 + 88);
          else
            *(_BYTE *)(a1 + 92) = v58 & 0xFE;
        }
        v51 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v156);
        sub_182CBA0(v51, &v158);
        if ( v47 )
        {
          v52 = *(v47 - 1);
          if ( v52 )
          {
            v143 = v4;
            v53 = v47;
            v54 = &v47[8 * v52];
            do
            {
              v55 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v53);
              v56 = v53 + 4;
              v53 += 8;
              sub_182CBA0(v55, v56);
            }
            while ( v54 != v53 );
            v4 = v143;
          }
          sub_186B220(v47 - 2);
        }
        if ( v131 )
          sub_186B220((void *)(v131 - 8));
        v142 = 1;
      }
LABEL_74:
      ++v121;
      result = *a3;
      if ( !*a3 )
        goto LABEL_75;
    }
  }
  if ( !v142 )
  {
    v122 = 0;
    while ( 1 )
    {
      if ( v122 >= *(_DWORD *)(result - 4) )
        goto LABEL_75;
      v71 = *(_QWORD *)(result + 16LL * v122 + 8);
      v135 = result + 16LL * v122;
      if ( !v71 )
        goto LABEL_168;
      v72 = *(_DWORD *)(v71 - 4);
      if ( v123 + 2 >= v72 )
        break;
LABEL_122:
      ++v122;
      if ( !result )
        goto LABEL_75;
    }
    if ( !v72 )
    {
LABEL_168:
      v154 = 0;
      v155 = nullptr;
      sub_3450C0((__int64)&v160, a1, a2, v135, &v154, &v155);
      v97 = v154;
      v134 = v155;
      sub_3463D0((_QWORD *)a1, a2, &v154, (__int64)&v160);
      v98 = v160;
      v99 = a1 + 72;
      v100 = qword_1C7F2C0;
      if ( v160 )
      {
        if ( *(_DWORD *)(a1 + 72) )
        {
          if ( (*(_BYTE *)(a1 + 92) & 1) != 0 || *(_DWORD *)(a1 + 88) != 1 || (v163 & 1) != 0 || v162 != 1 )
          {
            sub_1851D20(qword_1C7F2C0, v99, &v160, a1 + 72);
          }
          else
          {
            v137 = qword_1C7F2C0;
            sub_1831A80(qword_1C7F2C0, v99, &v160, a1 + 72);
            sub_182CBA0(v137, a1 + 88);
            *(_BYTE *)(a1 + 92) &= ~1u;
            *(_DWORD *)(a1 + 88) = 1;
          }
        }
        else
        {
          if ( (v161 & 1) != 0 )
          {
            v139 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v99, &v160);
            v100 = v139;
          }
          else
          {
            *(_BYTE *)(a1 + 76) &= ~1u;
            *(_DWORD *)(a1 + 72) = v98;
          }
          if ( (v163 & 1) != 0 )
          {
            sub_182C690(v100, a1 + 88, &v162);
          }
          else
          {
            v120 = v162;
            *(_BYTE *)(a1 + 92) &= ~1u;
            *(_DWORD *)(a1 + 88) = v120;
          }
        }
      }
      else
      {
        v107 = *(_BYTE *)(a1 + 76);
        if ( (v107 & 1) != 0 )
        {
          v138 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v99, a1 + 72);
          v100 = v138;
        }
        else
        {
          *(_BYTE *)(a1 + 76) = v107 & 0xFE;
        }
        v108 = *(_BYTE *)(a1 + 92);
        if ( (v108 & 1) != 0 )
          sub_182C690(v100, a1 + 88, a1 + 88);
        else
          *(_BYTE *)(a1 + 92) = v108 & 0xFE;
      }
      v101 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v160);
      sub_182CBA0(v101, &v162);
      if ( v134 )
      {
        v102 = *(v134 - 1);
        if ( v102 )
        {
          v103 = v134;
          v136 = v4;
          v104 = &v134[8 * v102];
          do
          {
            v105 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v103);
            v106 = v103 + 4;
            v103 += 8;
            sub_182CBA0(v105, v106);
          }
          while ( v103 != v104 );
          v4 = v136;
        }
        sub_186B220(v134 - 2);
      }
      if ( v97 )
        sub_186B220((void *)(v97 - 8));
      result = *a3;
      goto LABEL_122;
    }
    v73 = *(__int64 **)(result + 16LL * v122 + 8);
    v74 = 1;
    v75 = 8LL * v6;
    while ( 1 )
    {
      v76 = *v73;
      v77 = *(_DWORD *)(*v73 + 12);
      v78 = 8LL * ((v6 - 1) & v77);
      v79 = &v4[(unsigned __int64)v78 / 8];
      if ( v78 != v75 )
      {
        for ( j = &v4[(unsigned __int64)v78 / 8]; &v4[(unsigned __int64)v75 / 8] != j; ++j )
        {
          v81 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *(_DWORD *)(v81 + 12) == v77 && v76 == v81 )
              goto LABEL_122;
          }
          else if ( !v81 )
          {
            goto LABEL_133;
          }
        }
      }
      if ( v79 == v4 )
      {
LABEL_133:
        ++v73;
        v82 = v74 + 1;
        if ( v74 >= v72 )
          goto LABEL_143;
        goto LABEL_134;
      }
      v83 = v4;
      while ( 1 )
      {
        v84 = *v83;
        if ( (unsigned __int64)*v83 <= 1 )
          break;
        if ( *(_DWORD *)(v84 + 12) == v77 && v76 == v84 )
          goto LABEL_122;
LABEL_139:
        if ( v79 == ++v83 )
          goto LABEL_133;
      }
      if ( v84 )
        goto LABEL_139;
      ++v73;
      v82 = v74 + 1;
      if ( v74 >= v72 )
      {
LABEL_143:
        v133 = 0;
        while ( 1 )
        {
          if ( v133 >= *(_DWORD *)(v71 - 4) )
            goto LABEL_168;
          v85 = *(_QWORD *)(v71 + 8LL * v133);
          v86 = 2 * v6;
          if ( 3 * v6 >= 4 * (v150 + v125) )
          {
            v87 = v6 - 1;
            v88 = 8LL * v6;
            v89 = &v4[v88 / 8];
            goto LABEL_147;
          }
          v109 = v86;
          v128 = 2 * v6;
          v88 = 8LL * v86;
          v110 = (_OWORD *)sub_186B270(v88);
          v111 = 2 * v6;
          v112 = v110;
          if ( 2 * v6 )
            break;
          v89 = (__int64 *)v110;
          v114 = &v4[v6];
          v87 = -1;
          if ( v4 != v114 )
            goto LABEL_196;
LABEL_204:
          if ( v4 )
          {
            v151 = v111;
            v149 = v87;
            v129 = v112;
            sub_186B220(v4);
            v111 = v151;
            v87 = v149;
            v112 = v129;
          }
          v125 = 0;
          v6 = v111;
          v4 = (__int64 *)v112;
LABEL_147:
          v90 = *(_DWORD *)(v85 + 12);
          v91 = 8LL * (v90 & (unsigned int)v87);
          v92 = &v4[(unsigned __int64)v91 / 8];
          if ( v91 == v88 )
          {
            v94 = nullptr;
LABEL_155:
            if ( v4 != v92 )
            {
              v93 = v4;
              do
              {
                while ( 1 )
                {
                  v96 = *v93;
                  if ( (unsigned __int64)*v93 <= 1 )
                    break;
                  if ( *(_DWORD *)(v96 + 12) == v90 && v85 == v96 )
                    goto LABEL_213;
                  if ( v92 == ++v93 )
                    goto LABEL_163;
                }
                if ( !v96 )
                  goto LABEL_164;
                v94 = v93++;
              }
              while ( v92 != v93 );
            }
LABEL_163:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v93 = &v4[(unsigned __int64)v91 / 8];
          v94 = nullptr;
          while ( 1 )
          {
            while ( 1 )
            {
              v95 = *v93;
              if ( (unsigned __int64)*v93 <= 1 )
                break;
              if ( *(_DWORD *)(v95 + 12) == v90 && v85 == v95 )
              {
LABEL_213:
                *v93 = v85;
                goto LABEL_167;
              }
              if ( ++v93 == v89 )
                goto LABEL_155;
            }
            if ( !v95 )
              break;
            v94 = v93++;
            if ( v93 == v89 )
              goto LABEL_155;
          }
LABEL_164:
          if ( v94 )
            --v125;
          else
            v94 = v93;
          *v94 = v85;
          ++v150;
LABEL_167:
          ++v133;
          v71 = *(_QWORD *)(v135 + 8);
          if ( !v71 )
            goto LABEL_168;
        }
        v113 = memset(v110, 0, 8 * v109);
        v111 = 2 * v6;
        v112 = v113;
        v114 = &v4[v6];
        v87 = v128 - 1;
        v89 = (__int64 *)((char *)v112 + v88);
LABEL_196:
        v115 = v4;
        do
        {
          while ( (unsigned __int64)*v115 <= 1 )
          {
            if ( ++v115 == v114 )
              goto LABEL_204;
          }
          v116 = 8LL * (*(_DWORD *)(*v115 + 12) & (unsigned int)v87);
          v117 = (_QWORD *)((char *)v112 + v116);
          if ( v88 == v116 )
          {
LABEL_207:
            if ( v112 == (_OWORD *)v117 )
            {
LABEL_212:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v118 = v112;
            while ( *v118 )
            {
              if ( v117 == ++v118 )
                goto LABEL_212;
            }
          }
          else
          {
            v118 = (_QWORD *)((char *)v112 + v116);
            while ( *v118 )
            {
              if ( ++v118 == v89 )
                goto LABEL_207;
            }
          }
          v119 = *v115++;
          *v118 = v119;
        }
        while ( v115 != v114 );
        goto LABEL_204;
      }
LABEL_134:
      v74 = v82;
    }
  }
LABEL_75:
  if ( v4 )
    return sub_186B220(v4);
  return result;
}

