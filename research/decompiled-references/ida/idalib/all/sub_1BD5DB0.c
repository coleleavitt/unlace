__int64 __fastcall sub_1BD5DB0(_QWORD *a1, _QWORD *a2, __int64 *a3, unsigned int a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // r12
  char v7; // al
  __int64 v9; // rdx
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rdx
  char v15; // r12
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r11
  int v20; // r8d
  __int64 v21; // r9
  char v22; // r8
  __int64 v23; // r13
  char v24; // r11
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // r15
  int v28; // eax
  size_t v29; // rdx
  int v30; // eax
  __int64 v32; // rdi
  unsigned __int8 v33; // al
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  char v36; // dl
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // r8
  int v41; // r12d
  unsigned __int64 v42; // rsi
  int v43; // r15d
  int v44; // eax
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r15
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  int v60; // r13d
  unsigned __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  int v64; // eax
  int v65; // edx
  __int64 v66; // rdx
  int v67; // eax
  __int64 v68; // r8
  __int64 v69; // rsi
  __int64 v70; // r15
  char v71; // r13
  unsigned __int64 v72; // r12
  __int64 v73; // rax
  unsigned __int64 v74; // rax
  char v75; // dl
  _QWORD *v76; // r13
  unsigned __int8 v77; // al
  __int64 v78; // rsi
  unsigned __int64 v79; // rdx
  __int64 v80; // rdi
  int v81; // r13d
  int v82; // eax
  __int64 v83; // rdi
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdi
  __int64 v88; // rax
  bool v89; // r13
  unsigned __int64 *v90; // rax
  __int64 *v91; // rax
  unsigned __int64 *v92; // rax
  __int64 *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rdi
  __int64 v97; // r12
  unsigned __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  int v101; // ebx
  unsigned __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rcx
  unsigned int v108; // r13d
  unsigned int v109; // ebx
  int v110; // eax
  unsigned __int64 *v111; // rax
  unsigned __int64 v112; // rax
  unsigned __int64 *v113; // rax
  unsigned __int64 v114; // rax
  __int64 v115; // r14
  __int64 v116; // r15
  unsigned int *v117; // rsi
  unsigned int *v118; // rdi
  size_t v119; // rbx
  size_t v120; // r13
  size_t v121; // rdx
  bool v122; // zf
  __int64 v123; // [rsp+8h] [rbp-60h]
  char v124; // [rsp+8h] [rbp-60h]
  _BOOL4 v125; // [rsp+8h] [rbp-60h]
  char v126; // [rsp+8h] [rbp-60h]
  char v127; // [rsp+8h] [rbp-60h]
  __int64 v128; // [rsp+8h] [rbp-60h]
  __int64 v129; // [rsp+10h] [rbp-58h]
  unsigned __int8 v130; // [rsp+10h] [rbp-58h]
  int v131; // [rsp+10h] [rbp-58h]
  char v132; // [rsp+10h] [rbp-58h]
  __int64 v133; // [rsp+18h] [rbp-50h]
  __int64 v134; // [rsp+18h] [rbp-50h]
  int v135; // [rsp+20h] [rbp-48h]
  unsigned __int8 v137; // [rsp+2Ch] [rbp-3Ch]

  v7 = *((_BYTE *)a2 + 104);
  if ( (a3[13] & 1) == 0 )
    goto LABEL_52;
  if ( (v7 & 1) == 0 )
    goto LABEL_46;
  v9 = a1[29];
  v137 = a6;
  v135 = a5;
  if ( (*(_BYTE *)(v9 + 60) & 0x10) != 0 && *a2 && *a3 && (*(_BYTE *)(v9 + 96) & 2) != 0 )
  {
    v45 = sub_15F1640((__int64)a1, 1);
    v48 = v45;
    if ( v45 )
    {
      LODWORD(v6) = sub_178F150(v45, 1, v46, v47, a5, a6);
      v126 = sub_178F150(*a2, 1, v49, v50, v51, v52);
      v132 = sub_178F150(*a3, 1, v53, v54, v55, v56);
      v60 = sub_178F000(a1[83], v48, *a2, v57, v58, v59);
      v64 = sub_178F000(a1[83], v48, *a3, v61, v62, v63);
      if ( (*(_BYTE *)(a1[29] + 89LL) & 4) != 0 && (_BYTE)v6 )
        v65 = (unsigned __int8)(v132 | v126) ^ 1;
      else
        v65 = 1;
      if ( v64 <= v65 && v60 > v65 )
        goto LABEL_55;
      if ( v60 <= v65 && v64 > v65 )
        goto LABEL_46;
    }
    v7 = *((_BYTE *)a2 + 104);
  }
  v12 = 0;
  if ( (v7 & 0x10) == 0 )
  {
    v12 = 1;
    if ( (v7 & 8) == 0 )
      v12 = (a3[13] & 8) != 0;
  }
  v133 = a2[7];
  if ( (unsigned int)v12 >= (unsigned int)v133 )
    goto LABEL_56;
  v13 = a1[29];
  v14 = a2[6];
  v15 = 0;
  v129 = (unsigned int)v12;
  v16 = 152LL * (unsigned int)v12;
  v123 = (unsigned int)(v133 - 1 - v12);
  v17 = v16;
  v18 = 152 * (v123 + (unsigned int)v12 + 1);
  do
  {
    while ( 1 )
    {
      v21 = v14 + v17;
      if ( (*(_BYTE *)(v13 + 1) & 8) == 0 )
      {
        v19 = v17 + a3[6];
        v20 = *(_DWORD *)v19 & 0x7FFFFFFF;
        if ( (*(_DWORD *)v21 & 0x7FFFFFFF) == 0 && *(_BYTE *)(v21 + 17) == 29 )
        {
          if ( v20 || *(_BYTE *)(v19 + 17) != 29 )
            goto LABEL_46;
        }
        else if ( !v20 && *(_BYTE *)(v19 + 17) == 29 )
        {
          v15 = 1;
        }
        goto LABEL_17;
      }
      if ( (*(_BYTE *)(v13 + 1) & 0x10) != 0 && (*(_BYTE *)(v13 + 12) & 0x40) == 0 )
      {
        if ( (*(_DWORD *)v21 & 0x7FFFFFFF) == 0 || (v22 = 0, (*(_DWORD *)v21 & 0x7FFFFFFF) == 2) )
          v22 = *(_BYTE *)(v21 + 20) & 1;
        v23 = v17 + a3[6];
        if ( (*(_DWORD *)v23 & 0x7FFFFFFF) == 0 || (v24 = 0, (*(_DWORD *)v23 & 0x7FFFFFFF) == 2) )
          v24 = *(_BYTE *)(v23 + 20) & 1;
        if ( v24 != v22 )
          break;
      }
LABEL_17:
      v17 += 152;
      if ( v18 == v17 )
        goto LABEL_30;
    }
    if ( v22 )
      goto LABEL_46;
    v17 += 152;
    v15 = 1;
  }
  while ( v18 != v17 );
LABEL_30:
  if ( v15 )
    goto LABEL_55;
  v25 = v129 + v123;
  v124 = 0;
  v130 = 0;
  v26 = v16;
  v27 = 152 * v25;
  while ( 1 )
  {
    v28 = sub_1BD5570((__int64)a1, a4, v26 + v14, v26 + a3[6]);
    if ( v28 == -1 )
    {
      v124 = 1;
    }
    else if ( v28 == 1 )
    {
      if ( !*a2 )
        goto LABEL_46;
      if ( !*a3 )
        goto LABEL_46;
      if ( (unsigned __int8)(*((_BYTE *)a2 + 105) & 3) >> 1 == (unsigned __int8)(*((_BYTE *)a3 + 105) & 3) >> 1 )
        goto LABEL_46;
      v130 = sub_1BC9DB0(a1[31], (_BYTE *)*a2, (_QWORD *)*a3);
      if ( !v130 )
        goto LABEL_46;
    }
    if ( v27 == v26 )
      break;
    v14 = a2[6];
    v26 += 152;
  }
  LODWORD(v6) = v130;
  if ( v130 != 1 )
  {
    if ( v124 )
    {
LABEL_55:
      LODWORD(v6) = 1;
      return (unsigned int)v6;
    }
  }
LABEL_56:
  if ( v135 == 2 )
  {
    v32 = *a2;
    if ( !*a2 )
    {
LABEL_94:
      v33 = *((_BYTE *)a3 + 104);
      if ( ((v33 ^ *((_BYTE *)a2 + 104)) & 0x20) == 0 )
      {
LABEL_95:
        if ( !*a3 )
          goto LABEL_102;
        if ( sub_B77AF0(*a3) )
          goto LABEL_55;
        goto LABEL_97;
      }
      goto LABEL_51;
    }
    v66 = *a3;
    if ( !*a3 || (*(_BYTE *)(v32 + 28) & 0x7F) != 0x25 || (*(_BYTE *)(v66 + 28) & 0x7F) != 0x25 )
    {
LABEL_62:
      v33 = *((_BYTE *)a3 + 104);
      if ( ((v33 ^ *((_BYTE *)a2 + 104)) & 0x20) == 0 )
        goto LABEL_63;
      goto LABEL_51;
    }
    v67 = sub_1BCCF50((__int64)a1, *a2, v66);
    if ( v67 || (v67 = sub_1BD4320((__int64)a1, a4, (__int64)(a2 + 14), (__int64)(a3 + 14), v68)) != 0 )
    {
      LOBYTE(v6) = v67 == -1;
      return (unsigned int)v6;
    }
LABEL_161:
    v33 = *((_BYTE *)a3 + 104);
    if ( ((v33 ^ *((_BYTE *)a2 + 104)) & 0x20) == 0 )
    {
      v32 = *a2;
      if ( !*a2 )
        goto LABEL_95;
LABEL_63:
      v34 = sub_B77AF0(v32);
      v6 = (_QWORD *)v34;
      if ( !*a3 )
      {
        if ( v34 )
          goto LABEL_46;
LABEL_102:
        v74 = a3[1] & 0xFFFFFFFFFFFFFFF8LL;
        if ( (a2[1] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v75 = *(_BYTE *)((a2[1] & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F;
          LOBYTE(v12) = v75 == 54;
          if ( v74 )
          {
            LOBYTE(v6) = (*(_BYTE *)(v74 + 28) & 0x7F) == 54;
            if ( (_BYTE)v6 != (_BYTE)v12 )
              return (unsigned int)v6;
            if ( v75 == 54 )
            {
              v76 = (_QWORD *)(*(_QWORD *)(*a2 + 16LL) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(*a2 + 16LL) & 4) != 0 )
                v76 = (_QWORD *)*v76;
              if ( v76 )
                v76 -= 8;
              v6 = (_QWORD *)(*(_QWORD *)(*a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(*a3 + 16) & 4) != 0 )
                v6 = (_QWORD *)*v6;
              if ( v6 )
                v6 -= 8;
              if ( (unsigned __int8)sub_B70650((__int64)v76, (__int64)v6) )
                goto LABEL_55;
              if ( (unsigned __int8)sub_B70650((__int64)v6, (__int64)v76) )
                goto LABEL_46;
            }
          }
          else if ( v75 == 54 )
          {
            goto LABEL_46;
          }
        }
        else if ( v74 && (*(_BYTE *)(v74 + 28) & 0x7F) == 0x36 )
        {
          goto LABEL_55;
        }
        v77 = *((_BYTE *)a2 + 105);
        if ( ((v77 ^ *((_BYTE *)a3 + 105)) & 3) != 0 )
        {
          LOBYTE(v6) = (unsigned __int8)(v77 & 3) < (unsigned __int8)(*((_BYTE *)a3 + 105) & 3);
          return (unsigned int)v6;
        }
        v78 = *a2;
        v79 = *a3;
        if ( !*a2 )
          goto LABEL_174;
        if ( (*(_BYTE *)(v78 + 28) & 0x7F) == 0x27 )
        {
          if ( !v79 )
            goto LABEL_176;
          if ( (*(_BYTE *)(v79 + 28) & 0x7F) != 0x27 )
            goto LABEL_129;
          LODWORD(v6) = (*(_BYTE *)(v79 + 29) & 2) != 0;
          if ( (_BYTE)v6 != ((*(_BYTE *)(v78 + 29) & 2) != 0) )
            return (unsigned int)v6;
          if ( (*(_BYTE *)(v78 + 85) & 3) == 1 )
            goto LABEL_55;
          if ( (*(_BYTE *)(v79 + 85) & 3) == 1 )
            goto LABEL_46;
          v80 = *(_QWORD *)(v78 + 168);
          v6 = *(_QWORD **)(v79 + 168);
          if ( !v80 || !v6 )
          {
LABEL_129:
            v82 = sub_1BC8F70((__int64)a1, v78, v79, v12, a5, a6);
            if ( v82 )
            {
              LOBYTE(v6) = v82 == 1;
              return (unsigned int)v6;
            }
            v83 = *a2;
            if ( !*a2 )
            {
LABEL_173:
              v79 = *a3;
LABEL_174:
              if ( v79 )
                sub_1BCA460(v79, v78, v79, v12);
              goto LABEL_134;
            }
LABEL_131:
            if ( sub_1BCA460(v83, v78, v79, v12) )
            {
              if ( !*a3 || !sub_1BCA460(*a3, v78, v84, v12) )
                goto LABEL_55;
LABEL_134:
              if ( !*a2
                || *(char *)((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2) + 84) >= 0
                || !*a3
                || *(char *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 32LL))(*a3) + 84) >= 0 )
              {
                goto LABEL_178;
              }
              v87 = *a2;
              v88 = *a3;
              v79 = *(unsigned __int8 *)(*a3 + 28);
              if ( *(char *)(*a2 + 28LL) < 0 )
              {
                if ( (v79 & 0x80u) == 0LL )
                  goto LABEL_46;
                goto LABEL_178;
              }
              if ( (v79 & 0x80u) != 0LL )
                goto LABEL_55;
              if ( (*(_BYTE *)(v87 + 29) & 1) != 0 )
              {
                v113 = sub_B8C3D0(v87, v78, v79, v12, v85, v86);
                v79 = *v113;
                v114 = *v113 + 8LL * *((unsigned int *)v113 + 2);
                v12 = v114;
                if ( v79 < v114 )
                {
                  v12 = v79;
                  while ( 1 )
                  {
                    v78 = *(_QWORD *)v12;
                    v79 = v12;
                    if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) == 157 )
                      break;
                    v12 += 8;
                    if ( v114 == v12 )
                      goto LABEL_221;
                  }
LABEL_242:
                  v122 = v79 == v114;
                  v88 = *a3;
                  LOBYTE(v6) = !v122;
LABEL_142:
                  if ( (*(_BYTE *)(v88 + 29) & 1) != 0 )
                  {
                    v111 = sub_B8C3D0(v88, v78, v79, v12, v85, v86);
                    v79 = *v111;
                    v112 = *v111 + 8LL * *((unsigned int *)v111 + 2);
                    v12 = v112;
                    if ( v79 < v112 )
                    {
                      v12 = v79;
                      while ( 1 )
                      {
                        v78 = *(_QWORD *)v12;
                        v79 = v12;
                        if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) == 157 )
                          break;
                        v12 += 8;
                        if ( v112 == v12 )
                          goto LABEL_143;
                      }
LABEL_216:
                      v89 = v79 != v112;
LABEL_144:
                      if ( (*(_BYTE *)(*a2 + 29LL) & 1) != 0 )
                      {
                        v90 = sub_B8C3D0(*a2, v78, v79, v12, v85, v86);
                        v79 = *v90;
                        v91 = (__int64 *)(*v90 + 8LL * *((unsigned int *)v90 + 2));
                        if ( v79 >= (unsigned __int64)v91 )
                        {
                          while ( 1 )
                          {
                            v12 = (__int64)v91;
                            if ( (__int64 *)v79 == v91 )
                              break;
                            v12 = *v91++;
                            if ( *(_WORD *)(v12 + 36) == 158 )
                              goto LABEL_187;
                          }
                        }
                        else
                        {
                          v12 = v79;
                          while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 158 )
                          {
                            v12 += 8;
                            if ( v91 == (__int64 *)v12 )
                              goto LABEL_149;
                          }
                          if ( v91 != (__int64 *)v12 )
                          {
                            do
                            {
LABEL_187:
                              v78 = *(_QWORD *)v79;
                              v79 += 8LL;
                            }
                            while ( *(_WORD *)(v78 + 36) != 158 );
                            goto LABEL_150;
                          }
                        }
                      }
LABEL_149:
                      v78 = 0;
LABEL_150:
                      if ( (*(_BYTE *)(*a3 + 29) & 1) != 0 )
                      {
                        v92 = sub_B8C3D0(*a3, v78, v79, v12, v85, v86);
                        v79 = *v92;
                        v93 = (__int64 *)(*v92 + 8LL * *((unsigned int *)v92 + 2));
                        if ( v79 >= (unsigned __int64)v93 )
                        {
                          while ( 1 )
                          {
                            v12 = (__int64)v93;
                            if ( (__int64 *)v79 == v93 )
                              break;
                            v105 = *v93++;
                            if ( *(_WORD *)(v105 + 36) == 158 )
                              goto LABEL_190;
                          }
                        }
                        else
                        {
                          v12 = v79;
                          while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 158 )
                          {
                            v12 += 8;
                            if ( v93 == (__int64 *)v12 )
                              goto LABEL_155;
                          }
                          if ( v93 != (__int64 *)v12 )
                          {
                            do
                            {
LABEL_190:
                              v94 = *(_QWORD *)v79;
                              v79 += 8LL;
                            }
                            while ( *(_WORD *)(v94 + 36) != 158 );
                            if ( (_BYTE)v6 || v89 )
                            {
LABEL_193:
                              if ( !v89 && (_BYTE)v6 )
                                goto LABEL_55;
                              if ( (_BYTE)v6 || !v89 )
                                goto LABEL_158;
                              goto LABEL_46;
                            }
                            goto LABEL_158;
                          }
                        }
                      }
LABEL_155:
                      if ( (_BYTE)v6 || v89 )
                      {
                        v94 = 0;
                        goto LABEL_193;
                      }
                      v94 = 0;
                      if ( v78 )
                      {
LABEL_158:
                        v95 = *(unsigned int *)(v78 + 40);
                        if ( (_DWORD)v95 != *(_DWORD *)(v94 + 40) )
                        {
                          LOBYTE(v6) = (unsigned int)v95 < *(_DWORD *)(v94 + 40);
                          return (unsigned int)v6;
                        }
                        v115 = *(_QWORD *)(v78 + 48);
                        v116 = *(_QWORD *)(v94 + 48);
                        v128 = v115 + 8 * v95;
                        while ( 1 )
                        {
                          v117 = *(unsigned int **)(*(_QWORD *)v116 + 16LL);
                          v118 = *(unsigned int **)(*(_QWORD *)v115 + 16LL);
                          v119 = *v117;
                          v120 = *v118;
                          if ( v128 == v115 )
                            break;
                          if ( v119 != v120 )
                          {
                            v121 = *v118;
                            if ( v119 <= v120 )
                              v121 = *v117;
                            if ( v121 )
                            {
                              v30 = memcmp(v118 + 4, v117 + 4, v121);
                              if ( v30 )
                                goto LABEL_229;
                            }
                            goto LABEL_232;
                          }
                          if ( *v117 && memcmp(v118 + 4, v117 + 4, *v117) )
                          {
                            v30 = memcmp(v118 + 4, v117 + 4, v119);
                            if ( !v30 )
                              goto LABEL_46;
                            goto LABEL_229;
                          }
                          v115 += 8;
                          v116 += 8;
                        }
                        v29 = *v118;
                        if ( v119 <= v120 )
                          v29 = *v117;
                        if ( v29 )
                        {
                          v30 = memcmp(v118 + 4, v117 + 4, v29);
                          if ( v30 )
                          {
LABEL_229:
                            if ( v30 >= 0 )
                              goto LABEL_46;
                            goto LABEL_55;
                          }
                        }
                        if ( v119 == v120 )
                          goto LABEL_46;
LABEL_232:
                        if ( v119 > v120 )
                          goto LABEL_55;
                        goto LABEL_46;
                      }
LABEL_178:
                      v96 = *a2;
                      v97 = *a3;
                      if ( (*(_BYTE *)(a1[29] + 60LL) & 0x10) != 0 )
                      {
                        if ( v96 )
                        {
                          if ( v97 )
                          {
                            v6 = (_QWORD *)sub_15F1640((__int64)a1, 1);
                            v101 = sub_178F000(a1[83], (__int64)v6, *a2, v98, v99, v100);
                            LOBYTE(v6) = v101 > (int)sub_178F000(a1[83], (__int64)v6, *a3, v102, v103, v104);
                            return (unsigned int)v6;
                          }
                          goto LABEL_46;
                        }
                      }
                      else if ( v96 && (*(_BYTE *)(v96 + 28) & 0x7F) != 0x26 )
                      {
                        v96 = 0;
                      }
                      if ( v97 )
                      {
                        if ( (*(_BYTE *)(v97 + 28) & 0x7F) == 0x26 )
                        {
                          if ( v96 )
                          {
                            v108 = (unsigned int)sub_1703690(v96, v78, v79, v12) >> 9;
                            v109 = (unsigned int)sub_1703690(v97, v78, v106, v107) >> 9;
                            if ( v109 != v108 )
                            {
                              LOBYTE(v110) = sub_F56A30(v109, v108, a1[31]);
                              LODWORD(v6) = v110;
                              if ( (_BYTE)v110 )
                                goto LABEL_55;
                              sub_F56A30(v108, v109, a1[31]);
                              return (unsigned int)v6;
                            }
                          }
                        }
                      }
LABEL_46:
                      LODWORD(v6) = 0;
                      return (unsigned int)v6;
                    }
                    while ( 1 )
                    {
                      v112 = v12;
                      if ( v79 == v12 )
                        break;
                      v78 = *(_QWORD *)v12;
                      v12 += 8;
                      if ( *(_WORD *)(*(_QWORD *)v112 + 36LL) == 157 )
                        goto LABEL_216;
                    }
                  }
LABEL_143:
                  v89 = 0;
                  goto LABEL_144;
                }
                while ( 1 )
                {
                  v114 = v12;
                  if ( v79 == v12 )
                    break;
                  v78 = *(_QWORD *)v12;
                  v12 += 8;
                  if ( *(_WORD *)(*(_QWORD *)v114 + 36LL) == 157 )
                    goto LABEL_242;
                }
LABEL_221:
                v88 = *a3;
              }
              LODWORD(v6) = 0;
              goto LABEL_142;
            }
            goto LABEL_173;
          }
          v81 = sub_B778D0(v80);
          LOBYTE(v6) = (unsigned int)sub_B778D0((__int64)v6) != 0;
          if ( (v81 != 0) != (_BYTE)v6 )
            return (unsigned int)v6;
          v78 = *a2;
          v79 = *a3;
          if ( !*a2 )
            goto LABEL_174;
        }
        if ( v79 )
          goto LABEL_129;
LABEL_176:
        v83 = v78;
        goto LABEL_131;
      }
      if ( sub_B77AF0(*a3) )
      {
        if ( !v6 )
          goto LABEL_55;
        v35 = *(_QWORD *)((a2[1] & 0xFFFFFFFFFFFFFFF8LL) + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)((a2[1] & 0xFFFFFFFFFFFFFFF8LL) + 16) & 4) != 0 )
          v35 = *(_QWORD *)v35;
        v36 = *(_BYTE *)(v35 + 8);
        v37 = 0;
        v38 = v35 - 64;
        if ( (v36 & 0x7Fu) - 59 < 3 )
          v37 = v38;
        v39 = *(_QWORD *)((a3[1] & 0xFFFFFFFFFFFFFFF8LL) + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)((a3[1] & 0xFFFFFFFFFFFFFFF8LL) + 16) & 4) != 0 )
          v39 = *(_QWORD *)v39;
        v40 = 0;
        v41 = ((unsigned __int8)(*((_BYTE *)a2 + 105) ^ *((_BYTE *)a3 + 105)) >> 1) & 1;
        if ( (*(_BYTE *)(v39 + 8) & 0x7Fu) - 59 <= 2 && v39 != 64 )
          v40 = *(_QWORD *)(v39 - 16) & 0xFFFFFFFFFFFFFFF0LL;
        v42 = 0;
        if ( v37 )
          v42 = *(_QWORD *)(v37 + 48) & 0xFFFFFFFFFFFFFFF0LL;
        v134 = v40;
        v131 = *((_DWORD *)a2 + 27);
        v125 = (*(_BYTE *)(*a2 + 28LL) & 0x7F) == 37;
        v43 = sub_B77AF0(*a3);
        v44 = sub_B77AF0(*a2);
        v6 = (_QWORD *)sub_1D7E040((_DWORD)a1, v44, v43, a4, v125, v131, v42, v134, v41, v137);
        if ( v6 )
        {
          LOBYTE(v6) = sub_B77AF0(*a2) == (_QWORD)v6;
          return (unsigned int)v6;
        }
      }
      else if ( v6 )
      {
        goto LABEL_46;
      }
LABEL_97:
      v69 = *a2;
      v70 = *a3;
      v71 = *((_BYTE *)a3 + 105) & 3;
      v127 = *((_BYTE *)a2 + 105) & 3;
      if ( *a2 )
      {
        if ( v70 )
        {
          v72 = sub_B77AF0(v69);
          v6 = (_QWORD *)(sub_B77AF0(v70) | v72);
          if ( !v6 )
          {
            v73 = sub_1BD4060((__int64)a1, v69, v70, (v127 & 2) != 0, (v71 & 2) != 0);
            if ( v73 )
            {
              if ( *a2 == v73 )
                goto LABEL_55;
            }
          }
        }
      }
      goto LABEL_102;
    }
LABEL_51:
    v7 = v33 >> 5;
LABEL_52:
    LODWORD(v6) = v7 & 1;
    return (unsigned int)v6;
  }
  if ( v135 != 3 || (_DWORD)v133 != 1 )
    goto LABEL_161;
  v32 = *a2;
  if ( !*a2 )
    goto LABEL_94;
  if ( !*a3 )
    goto LABEL_62;
  LOBYTE(v6) = (*(_BYTE *)(v32 + 28) & 0x7F) == 38;
  if ( (_BYTE)v6 == ((*(_BYTE *)(*a3 + 28) & 0x7F) == 38) )
    goto LABEL_62;
  return (unsigned int)v6;
}
