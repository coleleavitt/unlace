bool __fastcall sub_19E8320(__int64 a1, int a2, const void *a3, size_t a4)
{
  _QWORD *v8; // rbp
  __int64 v9; // r12
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // r10d
  __int64 *v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  bool result; // al
  __int64 v23; // r12
  __int64 v24; // r8
  __int64 *v25; // r14
  unsigned __int64 v26; // rsi
  unsigned int v27; // ecx
  __int64 *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 *v31; // r13
  unsigned __int64 v32; // r12
  __int64 *v33; // rdi
  __int64 v34; // rdx
  char v35; // al
  int v36; // ecx
  unsigned __int64 v37; // r15
  __int64 v38; // r14
  int v39; // eax
  unsigned __int64 v40; // r15
  __int64 v41; // r14
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rcx
  char *v46; // rdx
  _QWORD *v47; // r11
  unsigned int v48; // eax
  _QWORD *v49; // rax
  __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  int v55; // edi
  __int64 v56; // rsi
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  __int64 *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r13
  __int64 *v63; // r8
  __int64 *j; // rdx
  __int64 *v65; // r15
  __int64 v66; // r9
  unsigned __int64 v67; // r13
  __int64 *v68; // rbx
  __int64 v69; // rax
  int v70; // esi
  int v71; // esi
  unsigned int v72; // ecx
  _QWORD *v73; // rdx
  __int64 v74; // rdi
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  __int64 v77; // rdi
  void **v78; // rdi
  void **v79; // rdx
  void **v80; // rdi
  __int64 v81; // rdi
  void **v82; // rax
  __int64 v83; // rsi
  unsigned int v84; // edi
  int v85; // r10d
  unsigned __int64 v86; // rax
  __int64 v87; // rax
  __int64 *v88; // rax
  __int64 v89; // r11
  __int64 *v90; // r8
  __int64 *i; // rdx
  __int64 *v92; // r15
  __int64 v93; // rax
  int v94; // esi
  int v95; // esi
  unsigned int v96; // ecx
  _QWORD *v97; // rdx
  __int64 v98; // rdi
  __int64 v99; // rax
  unsigned __int64 v100; // rax
  __int64 v101; // rdi
  void **v102; // rdi
  void **v103; // rdx
  void **v104; // rdi
  __int64 v105; // rdi
  void **v106; // rax
  __int64 v107; // rsi
  int v108; // edi
  unsigned int v109; // r13d
  __int64 *v110; // rcx
  __int64 *v111; // rdx
  __int64 *v112; // rcx
  __int64 *v113; // rdx
  int v114; // r11d
  _QWORD *v115; // r10
  _QWORD *v116; // r10
  unsigned int v118; // [rsp+0h] [rbp-68h]
  unsigned __int64 v119; // [rsp+0h] [rbp-68h]
  unsigned __int64 v120; // [rsp+0h] [rbp-68h]
  __int64 v121; // [rsp+0h] [rbp-68h]
  unsigned int v122; // [rsp+0h] [rbp-68h]
  unsigned __int64 v123; // [rsp+0h] [rbp-68h]
  unsigned __int64 v124; // [rsp+0h] [rbp-68h]
  __int64 v125; // [rsp+0h] [rbp-68h]
  int v126; // [rsp+0h] [rbp-68h]
  __int64 v127; // [rsp+8h] [rbp-60h]
  unsigned int v128; // [rsp+8h] [rbp-60h]
  unsigned int v129; // [rsp+8h] [rbp-60h]
  __int64 v130; // [rsp+8h] [rbp-60h]
  void **v131; // [rsp+8h] [rbp-60h]
  __int64 v132; // [rsp+8h] [rbp-60h]
  __int64 v133; // [rsp+8h] [rbp-60h]
  void **v134; // [rsp+8h] [rbp-60h]
  __int64 v135; // [rsp+8h] [rbp-60h]
  __int64 v136; // [rsp+8h] [rbp-60h]
  __int64 *v137; // [rsp+8h] [rbp-60h]
  __int64 *v138; // [rsp+10h] [rbp-58h]
  __int64 *v139; // [rsp+10h] [rbp-58h]
  __int64 v140; // [rsp+10h] [rbp-58h]
  __int64 v141; // [rsp+10h] [rbp-58h]
  __int64 *v142; // [rsp+10h] [rbp-58h]
  __int64 *v143; // [rsp+10h] [rbp-58h]
  _QWORD *v144; // [rsp+18h] [rbp-50h]
  __int64 *v145; // [rsp+18h] [rbp-50h]
  __int64 *v146[8]; // [rsp+28h] [rbp-40h] BYREF

  v8 = *(_QWORD **)(a1 + 240);
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL);
  v10 = sub_2244B30(a3, a4);
  v12 = sub_2244CB0(v9, a3, a4, v10);
  v13 = (__int64 *)(*(_QWORD *)v9 + 8LL * v12);
  if ( *v13 )
  {
    if ( *v13 != -8 )
    {
      sub_989490(v146, v13, 0);
      v16 = *v146[0];
      v17 = *(_QWORD *)(*v146[0] + 8);
      if ( v17 )
        goto LABEL_49;
      goto LABEL_4;
    }
    --*(_DWORD *)(v9 + 16);
  }
  v44 = *(_QWORD *)(v9 + 24);
  *(_QWORD *)(v9 + 104) += a4 + 17;
  v45 = (_QWORD *)((v44 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v46 = (char *)v45 + a4 + 17;
  if ( *(_QWORD *)(v9 + 32) >= (unsigned __int64)v46 && v44 )
  {
    *(_QWORD *)(v9 + 24) = v46;
  }
  else
  {
    v139 = v13;
    v129 = v12;
    v54 = sub_986170(v9 + 24, a4 + 17, a4 + 17, 3, v11, (__int64)v13);
    v13 = v139;
    v12 = v129;
    v45 = (_QWORD *)v54;
  }
  v47 = v45 + 2;
  if ( a4 )
  {
    v144 = v45;
    v138 = v13;
    v128 = v12;
    v49 = memcpy(v45 + 2, a3, a4);
    v45 = v144;
    v13 = v138;
    v12 = v128;
    v47 = v49;
  }
  *((_BYTE *)v47 + a4) = 0;
  *v45 = a4;
  v45[1] = 0;
  *v13 = (__int64)v45;
  ++*(_DWORD *)(v9 + 12);
  v48 = sub_22450D0(v9, v12);
  sub_989490(v146, (__int64 *)(*(_QWORD *)v9 + 8LL * v48), 0);
  v16 = *v146[0];
  v17 = *(_QWORD *)(*v146[0] + 8);
  if ( v17 )
  {
LABEL_49:
    result = 0;
    if ( (*(_BYTE *)(v17 + 3) & 4) == 0 )
      return result;
    goto LABEL_10;
  }
LABEL_4:
  v18 = *(_QWORD *)(v9 + 120);
  if ( v18 )
  {
    v127 = v16;
    v19 = (*(__int64 (__fastcall **)(__int64, const void *, size_t))(*(_QWORD *)v18 + 16LL))(v18, a3, a4);
    v16 = v127;
    v17 = v19;
    *(_QWORD *)(v127 + 8) = v19;
    if ( v19 )
      goto LABEL_49;
  }
  v20 = *(_QWORD *)(v9 + 24);
  *(_QWORD *)(v9 + 104) += 24LL;
  v17 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v9 + 32) >= v17 + 24 && v20 )
  {
    *(_QWORD *)(v9 + 24) = v17 + 24;
  }
  else
  {
    v130 = v16;
    v57 = sub_986170(v9 + 24, 24, 24, 3, v16, v15);
    v16 = v130;
    v17 = v57;
  }
  v21 = *(_QWORD *)v17 & 0xFFFFF80000000000LL;
  *(_QWORD *)(v17 + 8) = 0;
  *(_QWORD *)v17 = v21 | 0x1FFFC05;
  result = 0;
  *(_QWORD *)(v16 + 8) = v17;
  *(_QWORD *)(v17 + 16) = v16;
  if ( (*(_BYTE *)(v17 + 3) & 4) != 0 )
  {
LABEL_10:
    v23 = v8[213];
    v24 = *(unsigned int *)(v23 + 16);
    v25 = *(__int64 **)v23;
    if ( !(_DWORD)v24 )
      goto LABEL_79;
    v26 = (unsigned int)(v24 - 1);
    v27 = v26 & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
    v28 = &v25[2 * v27];
    v29 = *v28;
    if ( v17 == *v28 )
    {
LABEL_12:
      v30 = v28[1];
      v31 = (unsigned __int64 *)(v28 + 1);
      v32 = v30 & 0xFFFFFFFFFFFFFFF8LL;
      v33 = (__int64 *)(v30 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v30 && (v30 & 4) != 0 )
      {
        if ( !v32 )
          goto LABEL_18;
        v33 = *(__int64 **)v32;
      }
      if ( v33 )
        v32 = (unsigned __int64)sub_13F1CD0(v33, a2, v8[11]) & 0xFFFFFFFFFFFFFFFBLL;
      else
        v32 = 0;
LABEL_18:
      if ( (*(_BYTE *)(v17 + 4) & 0x10) != 0 )
      {
        sub_145CD30((__int64)v8);
        if ( (*(_BYTE *)(v17 + 3) & 2) == 0 )
        {
          if ( (*(_BYTE *)(v17 + 4) & 0x10) == 0 )
            goto LABEL_61;
          goto LABEL_66;
        }
      }
      else if ( (*(_BYTE *)(v17 + 3) & 2) == 0 )
      {
        goto LABEL_61;
      }
      v34 = v8[7];
      v35 = *(_BYTE *)(v34 + 21) & 2;
      if ( v35 || *(char *)(v34 + 22) < 0 )
      {
        v36 = *(_DWORD *)(v8[213] + 48LL);
        if ( v36 )
        {
          v37 = *v31 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !*v31 || (*v31 & 4) == 0 || (v38 = *v31 & 0xFFFFFFFFFFFFFFF8LL, !v37) )
          {
            v52 = v8[16];
            v8[26] += 32LL;
            v53 = (v52 + 15) & 0xFFFFFFFFFFFFFFF0LL;
            if ( v8[17] >= v53 + 32 && v52 )
            {
              v8[16] = v53 + 32;
              v38 = (v52 + 15) & 0xFFFFFFFFFFFFFFF0LL;
            }
            else
            {
              v38 = sub_986170((__int64)(v8 + 16), 32, 32, 4, v24, v15);
              v53 = v38 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)(v38 + 8) = 0;
            *(_DWORD *)(v38 + 16) = 0;
            *(_QWORD *)(v38 + 24) = 0;
            *(_QWORD *)v38 = v37;
            *(_BYTE *)(v38 + 20) = 0;
            *v31 = v53 | 4;
            v36 = *(_DWORD *)(v8[213] + 48LL);
          }
          if ( *(_DWORD *)(v38 + 16) != v36 )
            sub_14476F0((__int64)v8, v17, v38);
          v32 |= 4LL * *(unsigned __int8 *)(v38 + 20);
          if ( (*(_BYTE *)(v17 + 4) & 0x10) == 0 )
            goto LABEL_29;
        }
        else if ( (*(_BYTE *)(v17 + 4) & 0x10) == 0 )
        {
          goto LABEL_31;
        }
      }
      else if ( (*(_BYTE *)(v17 + 4) & 0x10) == 0 )
      {
        goto LABEL_60;
      }
LABEL_66:
      sub_145CD30((__int64)v8);
LABEL_29:
      if ( (*(_BYTE *)(v17 + 3) & 2) == 0 )
        goto LABEL_61;
      v34 = v8[7];
      v35 = *(_BYTE *)(v34 + 21) & 2;
LABEL_31:
      if ( v35 )
      {
LABEL_32:
        v39 = *(_DWORD *)(v8[213] + 48LL);
        if ( v39 )
        {
          v40 = *v31 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !*v31 || (*v31 & 4) == 0 || (v41 = *v31 & 0xFFFFFFFFFFFFFFF8LL, !v40) )
          {
            v50 = v8[16];
            v8[26] += 32LL;
            v51 = (v50 + 15) & 0xFFFFFFFFFFFFFFF0LL;
            if ( v8[17] >= v51 + 32 && v50 )
            {
              v8[16] = v51 + 32;
              v41 = (v50 + 15) & 0xFFFFFFFFFFFFFFF0LL;
            }
            else
            {
              v41 = sub_986170((__int64)(v8 + 16), 32, 32, 4, v24, v15);
              v51 = v41 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)(v41 + 8) = 0;
            *(_DWORD *)(v41 + 16) = 0;
            *(_QWORD *)(v41 + 24) = 0;
            *(_QWORD *)v41 = v40;
            *(_BYTE *)(v41 + 20) = 0;
            *v31 = v51 | 4;
            v39 = *(_DWORD *)(v8[213] + 48LL);
          }
          if ( *(_DWORD *)(v41 + 16) != v39 )
            sub_14476F0((__int64)v8, v17, v41);
          v42 = *(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v41 + 8) & 4) != 0 )
            v43 = *(unsigned int *)(v42 + 8);
          else
            v43 = v42 != 0;
          return (v32 & 0xFFFFFFFFFFFFFFF8LL) != 0 || v43 != 0;
        }
LABEL_61:
        v43 = 0;
        return (v32 & 0xFFFFFFFFFFFFFFF8LL) != 0 || v43 != 0;
      }
LABEL_60:
      if ( *(char *)(v34 + 22) >= 0 )
        goto LABEL_61;
      goto LABEL_32;
    }
    v55 = 1;
    v15 = 0;
    if ( v29 != -4096 )
    {
      while ( 1 )
      {
        if ( !v15 && v29 == -8192 )
          v15 = (__int64)v28;
        v27 = v26 & (v55 + v27);
        v28 = &v25[2 * v27];
        v29 = *v28;
        if ( v17 == *v28 )
          goto LABEL_12;
        if ( v29 == -4096 )
          break;
        ++v55;
      }
      if ( v15 )
        v28 = (__int64 *)v15;
    }
    v14 = (unsigned int)(*(_DWORD *)(v23 + 8) + 1);
    if ( 4 * (int)v14 < (unsigned int)(3 * v24) )
    {
      if ( (int)v24 - *(_DWORD *)(v23 + 12) - (int)v14 > (unsigned int)v24 >> 3 )
      {
        v56 = *v28;
        goto LABEL_71;
      }
      v122 = *(_DWORD *)(v23 + 16);
      v86 = (((v26 >> 1) | v26 | (((v26 >> 1) | v26) >> 2)) >> 4) | (v26 >> 1) | v26 | (((v26 >> 1) | v26) >> 2);
      v87 = ((((v86 >> 8) | v86) >> 16) | (v86 >> 8) | v86) + 1;
      if ( (unsigned int)v87 < 0x40 )
        LODWORD(v87) = 64;
      *(_DWORD *)(v23 + 16) = v87;
      v88 = (__int64 *)sub_22300B0(16LL * (unsigned int)v87, 8, 64, v14, v24, v15);
      v24 = v122;
      *(_QWORD *)v23 = v88;
      if ( v25 )
      {
        *(_QWORD *)(v23 + 8) = 0;
        v89 = 16LL * v122;
        v90 = (__int64 *)((char *)v25 + v89);
        for ( i = &v88[2 * *(unsigned int *)(v23 + 16)]; i != v88; v88 += 2 )
          *v88 = -4096;
        v92 = v25;
        do
        {
          v93 = *v92;
          if ( *v92 != -4096 && v93 != -8192 )
          {
            v94 = *(_DWORD *)(v23 + 16);
            if ( !v94 )
            {
              *(_QWORD *)&dword_0 = *v92;
              BUG();
            }
            v95 = v94 - 1;
            v96 = v95 & (((unsigned int)v93 >> 9) ^ ((unsigned int)v93 >> 4));
            v97 = (_QWORD *)(*(_QWORD *)v23 + 16LL * v96);
            v98 = *v97;
            if ( v93 != *v97 && v98 != -4096 )
            {
              v126 = 1;
              v116 = nullptr;
              while ( 1 )
              {
                if ( !v116 && v98 == -8192 )
                  v116 = v97;
                v96 = v95 & (v126 + v96);
                v97 = (_QWORD *)(*(_QWORD *)v23 + 16LL * v96);
                v98 = *v97;
                if ( v93 == *v97 )
                  break;
                if ( v98 == -4096 )
                {
                  if ( v116 )
                    v97 = v116;
                  break;
                }
                ++v126;
              }
            }
            *v97 = v93;
            v97[1] = v92[1];
            v92[1] = 0;
            ++*(_DWORD *)(v23 + 8);
            v99 = v92[1];
            if ( v99 )
            {
              if ( (v99 & 4) != 0 )
              {
                v100 = v99 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v100 )
                {
                  v101 = *(_QWORD *)(v100 + 24);
                  if ( v101 )
                  {
                    if ( (v101 & 4) != 0 )
                    {
                      v102 = (void **)(v101 & 0xFFFFFFFFFFFFFFF8LL);
                      v103 = v102;
                      if ( v102 )
                      {
                        v104 = (void **)*v102;
                        if ( v104 != v103 + 2 )
                        {
                          v145 = v90;
                          v141 = v89;
                          v134 = v103;
                          v123 = v100;
                          free(v104);
                          v90 = v145;
                          v89 = v141;
                          v103 = v134;
                          v100 = v123;
                        }
                        v142 = v90;
                        v135 = v89;
                        v124 = v100;
                        operator delete(v103, 0x30u);
                        v90 = v142;
                        v89 = v135;
                        v100 = v124;
                      }
                    }
                  }
                  v105 = *(_QWORD *)(v100 + 8);
                  if ( v105 )
                  {
                    if ( (v105 & 4) != 0 )
                    {
                      v106 = (void **)(v105 & 0xFFFFFFFFFFFFFFF8LL);
                      if ( (v105 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                      {
                        if ( *v106 != v106 + 2 )
                        {
                          v143 = v90;
                          v136 = v89;
                          free(*v106);
                          v90 = v143;
                          v89 = v136;
                          v106 = (void **)(v105 & 0xFFFFFFFFFFFFFFF8LL);
                        }
                        v137 = v90;
                        v125 = v89;
                        operator delete(v106, 0x30u);
                        v90 = v137;
                        v89 = v125;
                      }
                    }
                  }
                }
              }
            }
          }
          v92 += 2;
        }
        while ( v90 != v92 );
        operator delete(v25, v89, 8);
        v88 = *(__int64 **)v23;
        LODWORD(v107) = *(_DWORD *)(v23 + 16);
        LODWORD(v14) = *(_DWORD *)(v23 + 8) + 1;
      }
      else
      {
        *(_QWORD *)(v23 + 8) = 0;
        v107 = *(unsigned int *)(v23 + 16);
        v112 = &v88[2 * v107];
        if ( v88 != v112 )
        {
          v113 = v88;
          do
          {
            *v113 = -4096;
            v113 += 2;
          }
          while ( v112 != v113 );
        }
        LODWORD(v14) = 1;
      }
      if ( (_DWORD)v107 )
      {
        v108 = v107 - 1;
        v109 = (v107 - 1) & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
        v28 = &v88[2 * v109];
        v56 = *v28;
        if ( v17 != *v28 )
        {
          v15 = 1;
          v24 = 0;
          if ( v56 != -4096 )
          {
            while ( 1 )
            {
              if ( v56 == -8192 && !v24 )
                v24 = (__int64)v28;
              v109 = v108 & (v15 + v109);
              v28 = &v88[2 * v109];
              v56 = *v28;
              if ( v17 == *v28 )
                goto LABEL_71;
              if ( v56 == -4096 )
              {
                if ( !v24 )
                  break;
                v56 = *(_QWORD *)v24;
                v28 = (__int64 *)v24;
                goto LABEL_71;
              }
              v15 = (unsigned int)(v15 + 1);
            }
          }
LABEL_111:
          *(_DWORD *)(v23 + 8) = v14;
LABEL_73:
          *v28 = v17;
          v31 = (unsigned __int64 *)(v28 + 1);
          v32 = 0;
          v28[1] = 0;
          goto LABEL_18;
        }
        goto LABEL_71;
      }
    }
    else
    {
LABEL_79:
      v118 = *(_DWORD *)(v23 + 16);
      v58 = (((((((unsigned int)(2 * v24 - 1) | ((unsigned __int64)(unsigned int)(2 * v24 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v24 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v24 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v24 - 1) | ((unsigned __int64)(unsigned int)(2 * v24 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v24 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v24 - 1) >> 1)) >> 8)
          | (((((unsigned int)(2 * v24 - 1) | ((unsigned __int64)(unsigned int)(2 * v24 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v24 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v24 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v24 - 1) | ((unsigned __int64)(unsigned int)(2 * v24 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v24 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v24 - 1) >> 1);
      v59 = ((v58 >> 16) | v58) + 1;
      if ( (unsigned int)v59 < 0x40 )
        LODWORD(v59) = 64;
      *(_DWORD *)(v23 + 16) = v59;
      v60 = (__int64 *)sub_22300B0(16LL * (unsigned int)v59, 8, 64, v14, v24, v15);
      *(_QWORD *)v23 = v60;
      if ( v25 )
      {
        v61 = *(unsigned int *)(v23 + 16);
        *(_QWORD *)(v23 + 8) = 0;
        v62 = 16LL * v118;
        v63 = (__int64 *)((char *)v25 + v62);
        for ( j = &v60[2 * v61]; j != v60; v60 += 2 )
          *v60 = -4096;
        v65 = v25;
        if ( v25 != v63 )
        {
          v66 = 16LL * v118;
          v67 = v17;
          v68 = v63;
          do
          {
            v69 = *v65;
            if ( *v65 != -4096 && v69 != -8192 )
            {
              v70 = *(_DWORD *)(v23 + 16);
              if ( !v70 )
              {
                *(_QWORD *)&dword_0 = *v65;
                BUG();
              }
              v71 = v70 - 1;
              v72 = v71 & (((unsigned int)v69 >> 9) ^ ((unsigned int)v69 >> 4));
              v73 = (_QWORD *)(*(_QWORD *)v23 + 16LL * v72);
              v74 = *v73;
              if ( *v73 != v69 )
              {
                v114 = 1;
                v115 = nullptr;
                if ( v74 != -4096 )
                {
                  while ( 1 )
                  {
                    if ( v74 == -8192 && !v115 )
                      v115 = v73;
                    v72 = v71 & (v114 + v72);
                    v73 = (_QWORD *)(*(_QWORD *)v23 + 16LL * v72);
                    v74 = *v73;
                    if ( v69 == *v73 )
                      break;
                    if ( v74 == -4096 )
                    {
                      if ( v115 )
                        v73 = v115;
                      break;
                    }
                    ++v114;
                  }
                }
              }
              *v73 = v69;
              v73[1] = v65[1];
              v65[1] = 0;
              ++*(_DWORD *)(v23 + 8);
              v75 = v65[1];
              if ( v75 )
              {
                if ( (v75 & 4) != 0 )
                {
                  v76 = v75 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v76 )
                  {
                    v77 = *(_QWORD *)(v76 + 24);
                    if ( v77 )
                    {
                      if ( (v77 & 4) != 0 )
                      {
                        v78 = (void **)(v77 & 0xFFFFFFFFFFFFFFF8LL);
                        v79 = v78;
                        if ( v78 )
                        {
                          v80 = (void **)*v78;
                          if ( v80 != v79 + 2 )
                          {
                            v140 = v66;
                            v131 = v79;
                            v119 = v76;
                            free(v80);
                            v66 = v140;
                            v79 = v131;
                            v76 = v119;
                          }
                          v132 = v66;
                          v120 = v76;
                          operator delete(v79, 0x30u);
                          v66 = v132;
                          v76 = v120;
                        }
                      }
                    }
                    v81 = *(_QWORD *)(v76 + 8);
                    if ( v81 )
                    {
                      if ( (v81 & 4) != 0 )
                      {
                        v82 = (void **)(v81 & 0xFFFFFFFFFFFFFFF8LL);
                        if ( (v81 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                        {
                          if ( *v82 != v82 + 2 )
                          {
                            v133 = v66;
                            free(*v82);
                            v66 = v133;
                            v82 = (void **)(v81 & 0xFFFFFFFFFFFFFFF8LL);
                          }
                          v121 = v66;
                          operator delete(v82, 0x30u);
                          v66 = v121;
                        }
                      }
                    }
                  }
                }
              }
            }
            v65 += 2;
          }
          while ( v68 != v65 );
          v17 = v67;
          v62 = v66;
        }
        operator delete(v25, v62, 8);
        v60 = *(__int64 **)v23;
        LODWORD(v83) = *(_DWORD *)(v23 + 16);
        LODWORD(v14) = *(_DWORD *)(v23 + 8) + 1;
      }
      else
      {
        *(_QWORD *)(v23 + 8) = 0;
        v83 = *(unsigned int *)(v23 + 16);
        v110 = &v60[2 * v83];
        if ( v60 != v110 )
        {
          v111 = v60;
          do
          {
            *v111 = -4096;
            v111 += 2;
          }
          while ( v110 != v111 );
        }
        LODWORD(v14) = 1;
      }
      if ( (_DWORD)v83 )
      {
        v24 = (unsigned int)(v83 - 1);
        v84 = v24 & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
        v28 = &v60[2 * v84];
        v56 = *v28;
        if ( v17 != *v28 )
        {
          v85 = 1;
          v15 = 0;
          if ( v56 != -4096 )
          {
            while ( 1 )
            {
              if ( !v15 && v56 == -8192 )
                v15 = (__int64)v28;
              v84 = v24 & (v85 + v84);
              v28 = &v60[2 * v84];
              v56 = *v28;
              if ( v17 == *v28 )
                goto LABEL_71;
              if ( v56 == -4096 )
              {
                if ( !v15 )
                  goto LABEL_111;
                v56 = *(_QWORD *)v15;
                v28 = (__int64 *)v15;
                goto LABEL_71;
              }
              ++v85;
            }
          }
          goto LABEL_111;
        }
LABEL_71:
        *(_DWORD *)(v23 + 8) = v14;
        if ( v56 != -4096 )
          --*(_DWORD *)(v23 + 12);
        goto LABEL_73;
      }
    }
    ++*(_DWORD *)(v23 + 8);
    BUG();
  }
  return result;
}
