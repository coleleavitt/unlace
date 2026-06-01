void __fastcall sub_1FB8C80(__int64 a1, char *a2)
{
  __int64 v3; // r13
  __int64 v4; // rdi
  __int64 *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 *v8; // r14
  __int64 i; // rax
  __int64 v10; // rax
  __int64 *v11; // rbp
  unsigned __int64 v12; // rdx
  __int64 v13; // r12
  __int64 *v14; // rbp
  __int64 *v15; // r12
  __int64 v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  char *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rdi
  __int64 v24; // rdx
  _QWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // r13d
  _QWORD *v33; // r12
  __int64 v34; // rbp
  unsigned int v35; // r14d
  unsigned int v36; // edx
  __int64 v37; // rax
  __int64 *v38; // r14
  __int64 *v39; // rbx
  unsigned __int8 v40; // al
  __int64 v41; // rdx
  unsigned int *v42; // rbp
  unsigned __int8 v43; // al
  unsigned int *v44; // rbp
  unsigned int *v45; // r13
  int v46; // eax
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // ebx
  __int64 v52; // rdi
  __int64 v53; // rax
  void *v54; // rdi
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  unsigned int *v57; // rbp
  unsigned int *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  unsigned __int64 v63; // rbp
  unsigned __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rdx
  int v67; // edi
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rax
  unsigned __int64 v73; // r12
  unsigned __int64 v74; // rdx
  __int64 *v75; // rax
  unsigned __int64 v76; // rdi
  __int64 v77; // rdi
  _QWORD *v78; // rax
  _QWORD *v79; // rdx
  unsigned int v80; // r9d
  __int64 v81; // r14
  _QWORD *v82; // r8
  _QWORD *v83; // rcx
  _QWORD *v84; // rdx
  unsigned int m; // r13d
  __int64 v86; // rcx
  unsigned int v87; // edi
  _QWORD *v88; // rsi
  __int64 v89; // r10
  int v90; // ecx
  unsigned int v91; // ecx
  unsigned int v92; // edi
  unsigned int v93; // ecx
  int v94; // r10d
  char *v95; // r9
  unsigned int v96; // r14d
  int v97; // r9d
  char *v98; // r8
  int v99; // ecx
  __int64 v100; // r11
  _QWORD *v101; // rdx
  int v102; // r8d
  __int64 v103; // r10
  unsigned int j; // r11d
  __int64 *v105; // rsi
  _QWORD *v106; // r11
  int v107; // r8d
  __int64 v108; // r10
  unsigned int k; // r11d
  __int64 v110; // [rsp+0h] [rbp-288h]
  __int64 *v111; // [rsp+10h] [rbp-278h]
  char *v112; // [rsp+30h] [rbp-258h]
  __int64 v113; // [rsp+48h] [rbp-240h]
  int v114; // [rsp+54h] [rbp-234h]
  __m128 v115; // [rsp+60h] [rbp-228h] BYREF
  _QWORD *v116; // [rsp+70h] [rbp-218h] BYREF
  __int64 v117; // [rsp+78h] [rbp-210h]
  unsigned int v118; // [rsp+80h] [rbp-208h]
  __int64 *v119; // [rsp+88h] [rbp-200h] BYREF
  __int64 v120; // [rsp+90h] [rbp-1F8h]
  char v121[8]; // [rsp+98h] [rbp-1F0h] BYREF
  void *v122; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v123; // [rsp+A8h] [rbp-1E0h]
  _QWORD v124[16]; // [rsp+B0h] [rbp-1D8h] BYREF
  void *v125; // [rsp+130h] [rbp-158h] BYREF
  __int64 v126; // [rsp+138h] [rbp-150h]
  _BYTE v127[128]; // [rsp+140h] [rbp-148h] BYREF
  void *ptr; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v129; // [rsp+1C8h] [rbp-C0h]
  _BYTE v130[184]; // [rsp+1D0h] [rbp-B8h] BYREF

  v113 = (__int64)a2;
  v3 = sub_BC3640(a2);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  if ( v4 && *(_QWORD *)(*(_QWORD *)(a1 + 8) + 18360LL) != v4 + 24 && (unsigned __int8)sub_1EAB440(v4, (__int64)a2) )
  {
    a2 = nullptr;
    sub_BBE190(v113, 0);
  }
  v5 = *(__int64 **)(v3 + 24);
  v6 = 0;
  v123 = 0x1000000000LL;
  v7 = *(unsigned int *)(v3 + 32);
  v122 = v124;
  v8 = &v5[v7];
  i = 0;
  if ( v5 != v8 )
  {
    v10 = *v5;
    v11 = v5 + 1;
    v6 = 1;
    LODWORD(v123) = 1;
    v124[0] = v10;
    for ( i = 1; v8 != v11; LODWORD(v123) = v123 + 1 )
    {
      while ( 1 )
      {
        v12 = v6 + 1;
        v13 = *v11;
        if ( v12 > HIDWORD(v123) )
          break;
        ++v11;
        *((_QWORD *)v122 + i) = v13;
        i = (unsigned int)(v123 + 1);
        LODWORD(v123) = i;
        v6 = (unsigned int)i;
        if ( v8 == v11 )
          goto LABEL_9;
      }
      a2 = (char *)v124;
      ++v11;
      sub_2237220(&v122, v124, v12, 8);
      *((_QWORD *)v122 + (unsigned int)v123) = v13;
      v6 = (unsigned int)(v123 + 1);
      i = v6;
    }
  }
LABEL_9:
  v14 = *(__int64 **)(v3 + 120);
  v15 = &v14[*(unsigned int *)(v3 + 128)];
  if ( v15 != v14 )
  {
    do
    {
      v16 = *v14;
      if ( i + 1 > (unsigned __int64)HIDWORD(v123) )
      {
        a2 = (char *)v124;
        sub_2237220(&v122, v124, i + 1, 8);
        *((_QWORD *)v122 + (unsigned int)v123) = v16;
      }
      else
      {
        *((_QWORD *)v122 + i) = v16;
      }
      ++v14;
      i = (unsigned int)(v123 + 1);
      LODWORD(v123) = v123 + 1;
    }
    while ( v15 != v14 );
    v6 = (unsigned int)i;
  }
  v125 = v127;
  v126 = 0x1000000000LL;
  v129 = 0x1000000000LL;
  ptr = v130;
  v112 = (char *)v122 + 8 * v6;
  v111 = (__int64 *)v122;
  if ( v122 != v112 )
  {
    while ( 1 )
    {
      v17 = *v111;
      v116 = nullptr;
      v117 = 0;
      v118 = 0;
      v119 = (__int64 *)v121;
      v120 = 0;
      v20 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 56LL))(v17);
      if ( v20 )
        break;
LABEL_26:
      v38 = v119;
      v39 = &v119[2 * (unsigned int)v120];
      if ( v119 != v39 )
      {
        do
        {
          while ( 1 )
          {
            v42 = (unsigned int *)v38[1];
            v43 = v42[7] & 0x7F;
            if ( *(_BYTE *)(a1 + 232) )
            {
              if ( (unsigned int)v43 - 60 > 1 )
              {
                if ( (unsigned int)v43 - 41 > 1 )
                {
                  v58 = (unsigned int *)sub_B77B50(v38[1]);
                  v41 = *v58;
                  v42 = v58 + 2;
                }
                else
                {
                  v57 = *((unsigned int **)v42 + 16);
                  v41 = *v57;
                  v42 = v57 + 2;
                }
              }
              else
              {
                v44 = *((unsigned int **)v42 + 21);
                v41 = *v44;
                v42 = v44 + 2;
              }
              v45 = &v42[6 * v41];
              while ( v45 != v42 )
              {
                while ( 1 )
                {
                  v46 = *v42 & 0x7FFFFFFF;
                  if ( v46 != 1 )
                    break;
                  v40 = sub_F64090(
                          *(_QWORD *)(*((_QWORD *)v42 + 1) & 0xFFFFFFFFFFFFFFF0LL),
                          (__int64)a2,
                          v41,
                          v19,
                          v21,
                          v22);
                  if ( !v40 )
                    goto LABEL_59;
LABEL_29:
                  if ( v40 <= 3u )
                    goto LABEL_30;
                  if ( v40 > 6u )
                    goto LABEL_59;
                  v42 += 6;
                  if ( v45 == v42 )
                    goto LABEL_38;
                }
                if ( v46 == 2 )
                {
                  v40 = sub_B81B70(*((_QWORD *)v42 + 2));
                  if ( !v40 )
                    goto LABEL_59;
                  goto LABEL_29;
                }
                v42 += 6;
              }
LABEL_38:
              v42 = (unsigned int *)v38[1];
              v43 = v42[7] & 0x7F;
            }
            if ( v43 == 42 || v43 == 61 )
              break;
            v47 = (unsigned int)v126;
            v19 = HIDWORD(v126);
            v48 = (unsigned int)v126 + 1LL;
            if ( v48 > HIDWORD(v126) )
            {
              a2 = v127;
              sub_2237220(&v125, v127, v48, 8);
              v47 = (unsigned int)v126;
            }
            v38 += 2;
            *((_QWORD *)v125 + v47) = v42;
            LODWORD(v126) = v126 + 1;
            if ( v39 == v38 )
              goto LABEL_44;
          }
LABEL_59:
          v55 = (unsigned int)v129;
          v19 = HIDWORD(v129);
          v56 = (unsigned int)v129 + 1LL;
          if ( v56 > HIDWORD(v129) )
          {
            a2 = v130;
            sub_2237220(&ptr, v130, v56, 8);
            v55 = (unsigned int)v129;
          }
          *((_QWORD *)ptr + v55) = v42;
          LODWORD(v129) = v129 + 1;
LABEL_30:
          v38 += 2;
        }
        while ( v39 != v38 );
LABEL_44:
        v39 = v119;
      }
      if ( v39 != (__int64 *)v121 )
        free(v39);
      a2 = (char *)(16LL * v118);
      operator delete(v116, a2, 8);
      if ( v112 == (char *)++v111 )
        goto LABEL_48;
    }
    while ( 1 )
    {
      if ( v20[29] >= 0 )
      {
        if ( !v118 )
          goto LABEL_76;
        v23 = v116;
        v24 = *v116;
        a2 = (char *)v116;
        if ( *v116 )
        {
          v22 = (__int64)v116;
          if ( v24 != -4096 )
          {
            v99 = 1;
            v100 = 0;
            LODWORD(v21) = 0;
            while ( 1 )
            {
              if ( v24 != -8192 || v100 )
                v22 = v100;
              v21 = (v118 - 1) & (v99 + (_DWORD)v21);
              a2 = (char *)&v116[2 * (unsigned int)v21];
              v24 = *(_QWORD *)a2;
              if ( !*(_QWORD *)a2 )
                goto LABEL_19;
              if ( v24 == -4096 )
                break;
              ++v99;
              v100 = v22;
              v22 = (__int64)&v116[2 * (unsigned int)v21];
            }
            if ( !v22 )
              v22 = (__int64)&v116[2 * (unsigned int)v21];
          }
          v18 = 3 * v118;
          v19 = (unsigned int)(v117 + 1);
          if ( 4 * (int)v19 >= (unsigned int)v18 )
          {
LABEL_76:
            sub_1FB6B40((__int64 *)&v116, 2 * v118, v18, v19, v21, v22);
            if ( !v118 )
              goto LABEL_133;
            v23 = v116;
            v65 = *v116;
            LODWORD(v19) = v117 + 1;
            v22 = (__int64)v116;
            if ( *v116 )
            {
              if ( v65 == -4096 )
                goto LABEL_82;
              v102 = 1;
              v103 = 0;
              for ( j = 0; ; v22 = (__int64)&v116[2 * j] )
              {
                if ( v65 != -8192 || v103 )
                  v22 = v103;
                j = (v118 - 1) & (v102 + j);
                v105 = &v116[2 * j];
                v65 = *v105;
                if ( !*v105 )
                  break;
                if ( v65 == -4096 )
                {
LABEL_167:
                  if ( v22 )
                    goto LABEL_71;
                  v22 = (__int64)v105;
                  goto LABEL_82;
                }
                ++v102;
                v103 = v22;
              }
              goto LABEL_148;
            }
          }
          else
          {
            v59 = v118 - HIDWORD(v117) - (unsigned int)v19;
            if ( (unsigned int)v59 > v118 >> 3 )
            {
LABEL_71:
              v60 = *(_QWORD *)v22;
              LODWORD(v117) = v19;
              if ( v60 != -4096 )
                goto LABEL_72;
              goto LABEL_73;
            }
            sub_1FB6B40((__int64 *)&v116, v118, v59, v19, v21, v22);
            if ( !v118 )
              goto LABEL_133;
            v23 = v116;
            v66 = *v116;
            LODWORD(v19) = v117 + 1;
            v22 = (__int64)v116;
            if ( *v116 )
            {
              if ( v66 == -4096 )
              {
LABEL_82:
                LODWORD(v117) = v19;
                goto LABEL_73;
              }
              v107 = 1;
              v108 = 0;
              for ( k = 0; ; v22 = (__int64)&v116[2 * k] )
              {
                if ( v108 || v66 != -8192 )
                  v22 = v108;
                k = (v118 - 1) & (v107 + k);
                v105 = &v116[2 * k];
                v66 = *v105;
                if ( !*v105 )
                  break;
                if ( v66 == -4096 )
                  goto LABEL_167;
                ++v107;
                v108 = v22;
              }
LABEL_148:
              v22 = (__int64)v105;
            }
          }
          LODWORD(v117) = v19;
LABEL_72:
          --HIDWORD(v117);
LABEL_73:
          *(_DWORD *)(v22 + 8) = 0;
          v61 = v118;
          a2 = (char *)v22;
          *(_QWORD *)v22 = 0;
          sub_1FB4B10(&v115, (_QWORD *)v22, &v23[2 * v61], (__int64)&v116, 1);
          v62 = (unsigned int)v120;
          v63 = v115.m128_u64[0];
          v64 = (unsigned int)v120 + 1LL;
          if ( v64 > HIDWORD(v120) )
          {
            a2 = v121;
            sub_2237220(&v119, v121, v64, 16);
            v62 = (unsigned int)v120;
          }
          *(_OWORD *)&v119[2 * v62] = 0;
          v26 = (unsigned int)v120;
          LODWORD(v120) = v120 + 1;
          *(_DWORD *)(v63 + 8) = v26;
          goto LABEL_21;
        }
LABEL_19:
        v25 = &v116[2 * v118];
      }
      else
      {
        v27 = sub_1EAB3B0(*(_QWORD *)(*(_QWORD *)a1 + 48LL), (__int64)v20);
        v32 = v118;
        v33 = v116;
        v34 = v27;
        if ( !v118 )
          goto LABEL_95;
        v35 = ((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4);
        v36 = (v118 - 1) & v35;
        a2 = (char *)&v116[2 * v36];
        v37 = *(_QWORD *)a2;
        if ( v34 != *(_QWORD *)a2 )
        {
          v67 = 1;
          v30 = 0;
          if ( v37 != -4096 )
          {
            while ( 1 )
            {
              if ( !v30 && v37 == -8192 )
                v30 = (__int64)a2;
              v31 = (unsigned int)(v67 + 1);
              v36 = (v118 - 1) & (v67 + v36);
              a2 = (char *)&v116[2 * v36];
              v37 = *(_QWORD *)a2;
              if ( v34 == *(_QWORD *)a2 )
                goto LABEL_25;
              if ( v37 == -4096 )
                break;
              ++v67;
            }
            if ( v30 )
              a2 = (char *)v30;
          }
          v28 = 3 * v118;
          v68 = v117 + 1;
          v29 = (unsigned int)(4 * (v117 + 1));
          if ( (unsigned int)v29 >= (unsigned int)v28 )
          {
LABEL_95:
            v76 = (((((((2 * v118 - 1) | ((unsigned __int64)(2 * v118 - 1) >> 1)) >> 2)
                    | (2 * v118 - 1)
                    | ((unsigned __int64)(2 * v118 - 1) >> 1)) >> 4)
                  | (((2 * v118 - 1) | ((unsigned __int64)(2 * v118 - 1) >> 1)) >> 2)
                  | (2 * v118 - 1)
                  | ((unsigned __int64)(2 * v118 - 1) >> 1)) >> 8)
                | (((((2 * v118 - 1) | ((unsigned __int64)(2 * v118 - 1) >> 1)) >> 2)
                  | (2 * v118 - 1)
                  | ((unsigned __int64)(2 * v118 - 1) >> 1)) >> 4)
                | (((2 * v118 - 1) | ((unsigned __int64)(2 * v118 - 1) >> 1)) >> 2)
                | (2 * v118 - 1)
                | ((unsigned __int64)(2 * v118 - 1) >> 1);
            v77 = ((v76 >> 16) | v76) + 1;
            if ( (unsigned int)v77 < 0x40 )
              LODWORD(v77) = 64;
            v118 = v77;
            v78 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v77, 8, v28, v29, v30, v31);
            v116 = v78;
            if ( v33 )
            {
              v79 = v78;
              v117 = 0;
              v80 = v118;
              v81 = 2LL * v32;
              v82 = &v33[v81];
              v83 = &v78[2 * v118];
              if ( v78 != v83 )
              {
                do
                {
                  *v79 = -4096;
                  v79 += 2;
                }
                while ( v83 != v79 );
              }
              v84 = v33;
              for ( m = v80 - 1; v82 != v84; v84 += 2 )
              {
                v86 = *v84;
                if ( *v84 != -8192 && v86 != -4096 )
                {
                  if ( !v80 )
                  {
                    *(_QWORD *)&dword_0 = *v84;
                    BUG();
                  }
                  v87 = m & (((unsigned int)v86 >> 9) ^ ((unsigned int)v86 >> 4));
                  v88 = &v78[2 * v87];
                  v89 = *v88;
                  if ( *v88 != v86 && v89 != -4096 )
                  {
                    v114 = 1;
                    v106 = nullptr;
                    while ( 1 )
                    {
                      if ( !v106 && v89 == -8192 )
                        v106 = v88;
                      v87 = m & (v114 + v87);
                      v88 = &v78[2 * v87];
                      v89 = *v88;
                      if ( v86 == *v88 )
                        break;
                      if ( v89 == -4096 )
                      {
                        if ( v106 )
                          v88 = v106;
                        break;
                      }
                      ++v114;
                    }
                  }
                  *v88 = v86;
                  v90 = *((_DWORD *)v84 + 2);
                  LODWORD(v117) = v117 + 1;
                  *((_DWORD *)v88 + 2) = v90;
                }
              }
              operator delete(v33, v81 * 8, 8);
              v33 = v116;
              v91 = v118;
              v68 = v117 + 1;
              if ( !v118 )
              {
LABEL_133:
                LODWORD(v117) = v117 + 1;
                BUG();
              }
            }
            else
            {
              v117 = 0;
              v91 = v118;
              v33 = &v78[2 * v118];
              if ( v78 != v33 )
              {
                v101 = v78;
                do
                {
                  *v101 = -4096;
                  v101 += 2;
                }
                while ( v33 != v101 );
                v33 = v78;
              }
              v68 = 1;
              if ( !v91 )
                goto LABEL_133;
            }
            v92 = v91 - 1;
            v93 = (v91 - 1) & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
            a2 = (char *)&v33[2 * v93];
            v71 = *(_QWORD *)a2;
            if ( v34 == *(_QWORD *)a2 )
              goto LABEL_87;
            v94 = 1;
            v95 = nullptr;
            if ( v71 == -4096 )
              goto LABEL_110;
            while ( 1 )
            {
              if ( v95 || v71 != -8192 )
                a2 = v95;
              v93 = v92 & (v94 + v93);
              v71 = v33[2 * v93];
              if ( v34 == v71 )
              {
                a2 = (char *)&v33[2 * v93];
                goto LABEL_87;
              }
              if ( v71 == -4096 )
                break;
              ++v94;
              v95 = a2;
              a2 = (char *)&v33[2 * v93];
            }
            if ( a2 )
              goto LABEL_86;
            a2 = (char *)&v33[2 * v93];
LABEL_110:
            LODWORD(v117) = v68;
          }
          else
          {
            v69 = v118 - HIDWORD(v117) - v68;
            v70 = v118 >> 3;
            if ( (unsigned int)v69 > (unsigned int)v70 )
              goto LABEL_86;
            sub_1FB6B40((__int64 *)&v116, v118, v69, v70, v30, v31);
            if ( !v118 )
              goto LABEL_133;
            v33 = v116;
            v96 = (v118 - 1) & v35;
            v68 = v117 + 1;
            a2 = (char *)&v116[2 * v96];
            v71 = *(_QWORD *)a2;
            if ( v34 != *(_QWORD *)a2 )
            {
              v97 = 1;
              v98 = nullptr;
              if ( v71 == -4096 )
                goto LABEL_110;
              while ( 1 )
              {
                if ( v98 || v71 != -8192 )
                  a2 = v98;
                v96 = (v118 - 1) & (v97 + v96);
                v71 = v116[2 * v96];
                if ( v34 == v71 )
                {
                  a2 = (char *)&v116[2 * v96];
                  goto LABEL_87;
                }
                if ( v71 == -4096 )
                  break;
                ++v97;
                v98 = a2;
                a2 = (char *)&v116[2 * v96];
              }
              if ( !a2 )
              {
                a2 = (char *)&v116[2 * v96];
                goto LABEL_110;
              }
LABEL_86:
              v71 = *(_QWORD *)a2;
            }
LABEL_87:
            LODWORD(v117) = v68;
            if ( v71 != -4096 )
              --HIDWORD(v117);
          }
          *(_QWORD *)a2 = v34;
          *((_DWORD *)a2 + 2) = 0;
          sub_1FB4B10(&v115, a2, &v33[2 * v118], (__int64)&v116, 1);
          v72 = (unsigned int)v120;
          v73 = v115.m128_u64[0];
          v74 = (unsigned int)v120 + 1LL;
          if ( v74 > HIDWORD(v120) )
          {
            a2 = v121;
            sub_2237220(&v119, v121, v74, 16);
            v72 = (unsigned int)v120;
          }
          v75 = &v119[2 * v72];
          *v75 = v34;
          v75[1] = 0;
          v26 = (unsigned int)v120;
          LODWORD(v120) = v120 + 1;
          *(_DWORD *)(v73 + 8) = v26;
          goto LABEL_21;
        }
LABEL_25:
        v25 = &v116[2 * v118];
      }
      sub_1FB4B10(&v115, a2, v25, (__int64)&v116, 1);
      v26 = *(unsigned int *)(v115.m128_u64[0] + 8);
LABEL_21:
      v119[2 * v26 + 1] = (__int64)v20;
      v20 = (char *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v20 + 48LL))(v20);
      if ( !v20 )
        goto LABEL_26;
    }
  }
LABEL_48:
  v49 = sub_1FA7A00(*(_QWORD *)a1, v113, (__int64)&v125, 0);
  v50 = *(unsigned int *)(a1 + 184);
  v51 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  if ( v50 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    v110 = v49;
    sub_2237220(a1 + 176, a1 + 192, v50 + 1, 4);
    v50 = *(unsigned int *)(a1 + 184);
    v49 = v110;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v50) = v51;
  v52 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a1 + 184);
  sub_9B9C90(v52, v49);
  if ( (*(_BYTE *)(v113 + 28) & 0x7F) != 0x47 )
  {
    v53 = sub_1FA7A00(*(_QWORD *)a1, v113, (__int64)&ptr, 1);
    sub_1FB2180(a1 + 8, v53);
    v54 = ptr;
    if ( ptr == v130 )
      goto LABEL_53;
    goto LABEL_52;
  }
  v54 = ptr;
  if ( ptr != v130 )
LABEL_52:
    free(v54);
LABEL_53:
  if ( v125 != v127 )
    free(v125);
  if ( v122 != v124 )
    free(v122);
}
