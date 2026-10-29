__int64 __fastcall sub_15AFC70(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r15
  _QWORD *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned int v11; // r12d
  unsigned __int64 v12; // rdi
  unsigned int v13; // esi
  __int64 *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rbp
  unsigned __int8 *v19; // rbx
  _BYTE *v20; // rdx
  __int64 v21; // rax
  unsigned __int8 *v22; // rbx
  __int64 v23; // r12
  _BYTE *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // r13
  __int64 v31; // rbp
  void *v32; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  _QWORD *j; // rdx
  __int64 *v37; // r14
  __int64 v38; // rdx
  int v39; // eax
  int v40; // esi
  unsigned int v41; // ecx
  _QWORD *v42; // rax
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  _QWORD *v49; // r15
  _QWORD *v50; // rbx
  unsigned __int64 v51; // r12
  unsigned __int64 v52; // rax
  _QWORD *v53; // r13
  _QWORD *v54; // rbp
  _QWORD *v55; // rdi
  void *v56; // rdi
  void **v57; // rbp
  void **v58; // r13
  int v59; // edi
  int v60; // esi
  int v61; // r9d
  unsigned int v62; // r8d
  __int64 v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rdx
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // r12
  __int64 v69; // r14
  __int64 v70; // r12
  void *v71; // rdi
  __int64 *v72; // r8
  __int64 v73; // r8
  unsigned __int64 v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rax
  _QWORD *i; // rdx
  __int64 *v78; // r14
  int v79; // eax
  int v80; // esi
  unsigned int v81; // ecx
  _QWORD *v82; // rax
  __int64 v83; // r8
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rdx
  _QWORD *v89; // r15
  _QWORD *v90; // rbx
  unsigned __int64 v91; // r12
  unsigned __int64 v92; // rax
  _QWORD *v93; // r13
  _QWORD *v94; // rbp
  _QWORD *v95; // rdi
  void *v96; // rdi
  void **v97; // rbp
  void **v98; // r13
  int v99; // edi
  int v100; // r8d
  unsigned int v101; // r9d
  int v102; // r11d
  __int64 *v103; // r10
  __int64 v104; // rdx
  __int64 v105; // rsi
  _QWORD *v106; // rsi
  _QWORD *v107; // rdx
  __int64 v108; // rsi
  _QWORD *v109; // rsi
  _QWORD *v110; // rdx
  int v111; // r10d
  _QWORD *v112; // r9
  int v113; // r10d
  _QWORD *v114; // r9
  int v115; // r11d
  __int64 v116; // [rsp+0h] [rbp-78h]
  __int64 *v117; // [rsp+8h] [rbp-70h]
  unsigned int v118; // [rsp+10h] [rbp-68h]
  __int64 *v119; // [rsp+10h] [rbp-68h]
  __int64 v120; // [rsp+18h] [rbp-60h]
  __int64 v121; // [rsp+20h] [rbp-58h]
  __int64 v122; // [rsp+20h] [rbp-58h]
  __int64 v123; // [rsp+28h] [rbp-50h]
  __int64 v124; // [rsp+28h] [rbp-50h]
  _QWORD *v125; // [rsp+30h] [rbp-48h]
  __int64 v126; // [rsp+30h] [rbp-48h]
  _QWORD *v127; // [rsp+38h] [rbp-40h]

  v2 = a1;
  v3 = a2;
  if ( !*(_BYTE *)(a1 + 120) )
  {
    if ( !*(_BYTE *)(a1 + 132) )
      return v2;
    v5 = sub_168B9E0(a1);
    v8 = *(_QWORD *)(a1 + 16);
    v9 = v5;
    v116 = v8;
    if ( v8 )
      v116 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
    v10 = *(_QWORD *)v9;
    v11 = *(_DWORD *)(v9 + 16);
    v117 = *(__int64 **)v9;
    if ( !v11 )
      goto LABEL_19;
    v12 = v11 - 1;
    v118 = ((unsigned int)v116 >> 9) ^ ((unsigned int)v116 >> 4);
    v13 = v12 & v118;
    v14 = (__int64 *)(v10 + 32LL * ((unsigned int)v12 & v118));
    v15 = *v14;
    if ( v116 == *v14 )
    {
LABEL_8:
      v16 = v14[1];
LABEL_9:
      v17 = *v3;
      v18 = v16 + 32LL * *(unsigned int *)(v2 + 128);
      v19 = *(unsigned __int8 **)(v18 + 8);
      if ( !v19 )
      {
        v65 = *(_QWORD *)(v18 + 16);
        v66 = *(_DWORD *)(v65 + 14976);
        if ( v66 )
        {
          v67 = (unsigned int)(v66 - 1);
          *(_DWORD *)(v65 + 14976) = v67;
          v19 = *(unsigned __int8 **)(v65 + 8 * v67 + 14848);
          v68 = *((unsigned int *)v19 + 134);
          *v19 = 0;
          v69 = *((_QWORD *)v19 + 66);
          *((_DWORD *)v19 + 106) = 0;
          v70 = v69 + (v68 << 6);
          while ( v69 != v70 )
          {
            while ( 1 )
            {
              v70 -= 64;
              v71 = *(void **)(v70 + 24);
              if ( v71 == (void *)(v70 + 40) )
                break;
              operator delete(v71);
              if ( v69 == v70 )
                goto LABEL_73;
            }
          }
LABEL_73:
          *((_DWORD *)v19 + 134) = 0;
        }
        else
        {
          v19 = (unsigned __int8 *)operator new(0x3A0u);
          *v19 = 0;
          *((_QWORD *)v19 + 12) = v19 + 112;
          *((_QWORD *)v19 + 16) = v19 + 144;
          *((_QWORD *)v19 + 20) = v19 + 176;
          *((_QWORD *)v19 + 24) = v19 + 208;
          *((_QWORD *)v19 + 28) = v19 + 240;
          *((_QWORD *)v19 + 32) = v19 + 272;
          *((_QWORD *)v19 + 36) = v19 + 304;
          *((_QWORD *)v19 + 40) = v19 + 336;
          *((_QWORD *)v19 + 44) = v19 + 368;
          *((_QWORD *)v19 + 48) = v19 + 400;
          *((_QWORD *)v19 + 52) = v19 + 432;
          *((_QWORD *)v19 + 13) = 0;
          v19[112] = 0;
          *((_QWORD *)v19 + 17) = 0;
          v19[144] = 0;
          *((_QWORD *)v19 + 21) = 0;
          v19[176] = 0;
          *((_QWORD *)v19 + 25) = 0;
          v19[208] = 0;
          *((_QWORD *)v19 + 29) = 0;
          v19[240] = 0;
          *((_QWORD *)v19 + 33) = 0;
          v19[272] = 0;
          *((_QWORD *)v19 + 37) = 0;
          v19[304] = 0;
          *((_QWORD *)v19 + 41) = 0;
          v19[336] = 0;
          *((_QWORD *)v19 + 45) = 0;
          v19[368] = 0;
          *((_QWORD *)v19 + 49) = 0;
          v19[400] = 0;
          *((_QWORD *)v19 + 53) = 0x800000000LL;
          *((_QWORD *)v19 + 66) = v19 + 544;
          *((_QWORD *)v19 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v18 + 8) = v19;
      }
      v19[*v19 + 1] = 1;
      v20 = *(_BYTE **)(v18 + 8);
      v21 = (unsigned __int8)*v20;
      *v20 = v21 + 1;
      *(_QWORD *)&v20[8 * v21 + 16] = v17;
      return v2;
    }
    v7 = 1;
    v72 = nullptr;
    if ( v15 != -4096 )
    {
      while ( 1 )
      {
        if ( !v72 && v15 == -8192 )
          v72 = v14;
        v10 = (unsigned int)(v7 + 1);
        v13 = v12 & (v7 + v13);
        v14 = &v117[4 * v13];
        v15 = *v14;
        if ( v116 == *v14 )
          goto LABEL_8;
        if ( v15 == -4096 )
          break;
        v7 = (unsigned int)v10;
      }
      if ( v72 )
        v14 = v72;
    }
    v60 = *(_DWORD *)(v9 + 8) + 1;
    v6 = (unsigned int)(4 * v60);
    if ( (unsigned int)v6 < 3 * v11 )
    {
      v73 = v11 >> 3;
      if ( v11 - *(_DWORD *)(v9 + 12) - v60 > (unsigned int)v73 )
      {
        v63 = *v14;
        goto LABEL_55;
      }
      v74 = (v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2);
      v75 = ((((((v74 >> 4) | v74) >> 8) | (v74 >> 4) | v74) >> 16) | (((v74 >> 4) | v74) >> 8) | (v74 >> 4) | v74) + 1;
      if ( (unsigned int)v75 < 0x40 )
        LODWORD(v75) = 64;
      *(_DWORD *)(v9 + 16) = v75;
      v76 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v75, 8, 64, v10, v73, v7);
      *(_QWORD *)v9 = v76;
      if ( v117 )
      {
        *(_QWORD *)(v9 + 8) = 0;
        v124 = 4LL * v11;
        for ( i = &v76[4 * *(unsigned int *)(v9 + 16)]; i != v76; v76 += 4 )
          *v76 = -4096;
        v122 = v9;
        v78 = v117;
        v126 = v2;
        v127 = v3;
        do
        {
          v38 = *v78;
          if ( *v78 != -8192 && v38 != -4096 )
          {
            v79 = *(_DWORD *)(v122 + 16);
            if ( !v79 )
              goto LABEL_172;
            v80 = v79 - 1;
            v81 = (v79 - 1) & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
            v82 = (_QWORD *)(*(_QWORD *)v122 + 32LL * v81);
            v83 = *v82;
            if ( v38 != *v82 )
            {
              v113 = 1;
              v114 = nullptr;
              if ( v83 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v114 && v83 == -8192 )
                    v114 = v82;
                  v81 = v80 & (v113 + v81);
                  v82 = (_QWORD *)(*(_QWORD *)v122 + 32LL * v81);
                  v83 = *v82;
                  if ( v38 == *v82 )
                    break;
                  if ( v83 == -4096 )
                  {
                    if ( v114 )
                      v82 = v114;
                    break;
                  }
                  ++v113;
                }
              }
            }
            v84 = *v78;
            v82[1] = 0;
            v82[2] = 0;
            v82[3] = 0;
            *v82 = v84;
            v82[1] = v78[1];
            v85 = v78[2];
            v78[1] = 0;
            v86 = v82[2];
            v82[2] = v85;
            v87 = v78[3];
            v78[2] = v86;
            v88 = v82[3];
            v82[3] = v87;
            v89 = (_QWORD *)v78[2];
            v90 = (_QWORD *)v78[1];
            v78[3] = v88;
            ++*(_DWORD *)(v122 + 8);
            if ( v89 != v90 )
            {
              do
              {
                v91 = v90[1];
                if ( v91 )
                {
                  v92 = v90[2];
                  if ( v92 )
                  {
                    if ( v91 < v92 || v91 > v92 + 14848 )
                    {
                      v93 = *(_QWORD **)(v91 + 528);
                      v94 = &v93[8 * (unsigned __int64)*(unsigned int *)(v91 + 536)];
                      if ( v93 != v94 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v94 -= 8;
                            v95 = (_QWORD *)v94[3];
                            if ( v95 == v94 + 5 )
                              break;
                            operator delete(v95);
                            if ( v93 == v94 )
                              goto LABEL_95;
                          }
                        }
                        while ( v93 != v94 );
LABEL_95:
                        v94 = *(_QWORD **)(v91 + 528);
                      }
                      if ( v94 != (_QWORD *)(v91 + 544) )
                        free(v94);
                      v96 = *(void **)(v91 + 416);
                      if ( v96 != (void *)(v91 + 432) )
                        free(v96);
                      v97 = (void **)(v91 + 384);
                      v98 = (void **)(v91 + 64);
                      do
                      {
                        while ( *v97 != v97 + 2 )
                        {
                          operator delete(*v97);
                          v97 -= 4;
                          if ( v97 == v98 )
                            goto LABEL_103;
                        }
                        v97 -= 4;
                      }
                      while ( v97 != v98 );
LABEL_103:
                      operator delete((void *)v91, 0x3A0u);
                    }
                    else
                    {
                      v104 = *(unsigned int *)(v92 + 14976);
                      *(_DWORD *)(v92 + 14976) = v104 + 1;
                      *(_QWORD *)(v92 + 8 * v104 + 14848) = v91;
                    }
                  }
                }
                v90 += 4;
              }
              while ( v89 != v90 );
              v90 = (_QWORD *)v78[1];
            }
            if ( v90 )
              operator delete(v90);
          }
          v78 += 4;
        }
        while ( &v117[v124] != v78 );
        v9 = v122;
        v2 = v126;
        v3 = v127;
        operator delete(v117, v124 * 8, 8);
        v76 = *(_QWORD **)v122;
        v99 = *(_DWORD *)(v122 + 16);
        v60 = *(_DWORD *)(v122 + 8) + 1;
      }
      else
      {
        v108 = *(unsigned int *)(v9 + 16);
        *(_QWORD *)(v9 + 8) = 0;
        v99 = v108;
        v109 = &v76[4 * v108];
        if ( v76 != v109 )
        {
          v110 = v76;
          do
          {
            *v110 = -4096;
            v110 += 4;
          }
          while ( v109 != v110 );
        }
        v60 = 1;
      }
      if ( v99 )
      {
        v100 = v99 - 1;
        v101 = (v99 - 1) & v118;
        v14 = &v76[4 * v101];
        v63 = *v14;
        if ( v116 == *v14 )
        {
LABEL_55:
          *(_DWORD *)(v9 + 8) = v60;
          if ( v63 != -4096 )
            --*(_DWORD *)(v9 + 12);
          goto LABEL_57;
        }
        v102 = 1;
        v103 = nullptr;
        if ( v63 != -4096 )
        {
          while ( 1 )
          {
            if ( !v103 && v63 == -8192 )
              v103 = v14;
            v101 = v100 & (v102 + v101);
            v14 = &v76[4 * v101];
            v63 = *v14;
            if ( v116 == *v14 )
              goto LABEL_55;
            if ( v63 == -4096 )
              goto LABEL_161;
            ++v102;
          }
        }
LABEL_113:
        *(_DWORD *)(v9 + 8) = v60;
LABEL_57:
        v14[1] = 0;
        v14[2] = 0;
        *v14 = v116;
        v16 = 0;
        v14[3] = 0;
        goto LABEL_9;
      }
    }
    else
    {
LABEL_19:
      v33 = (((((((2 * v11 - 1) | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 2)
              | (2 * v11 - 1)
              | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 4)
            | (((2 * v11 - 1) | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 2)
            | (2 * v11 - 1)
            | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 8)
          | (((((2 * v11 - 1) | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 2)
            | (2 * v11 - 1)
            | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 4)
          | (((2 * v11 - 1) | ((unsigned __int64)(2 * v11 - 1) >> 1)) >> 2)
          | (2 * v11 - 1)
          | ((unsigned __int64)(2 * v11 - 1) >> 1);
      v34 = ((v33 >> 16) | v33) + 1;
      if ( (unsigned int)v34 < 0x40 )
        LODWORD(v34) = 64;
      *(_DWORD *)(v9 + 16) = v34;
      v35 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v34, 8, 64, v10, v6, v7);
      *(_QWORD *)v9 = v35;
      if ( v117 )
      {
        *(_QWORD *)(v9 + 8) = 0;
        v121 = 4LL * v11;
        v119 = &v117[v121];
        for ( j = &v35[4 * *(unsigned int *)(v9 + 16)]; j != v35; v35 += 4 )
          *v35 = -4096;
        if ( v117 != v119 )
        {
          v120 = v9;
          v37 = v117;
          v123 = v2;
          v125 = v3;
          do
          {
            v38 = *v37;
            if ( *v37 != -8192 && v38 != -4096 )
            {
              v39 = *(_DWORD *)(v120 + 16);
              if ( !v39 )
              {
LABEL_172:
                *(_QWORD *)&dword_0 = v38;
                BUG();
              }
              v40 = v39 - 1;
              v41 = (v39 - 1) & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
              v42 = (_QWORD *)(*(_QWORD *)v120 + 32LL * v41);
              v43 = *v42;
              if ( v38 != *v42 )
              {
                v111 = 1;
                v112 = nullptr;
                if ( v43 != -4096 )
                {
                  while ( 1 )
                  {
                    if ( v43 == -8192 && !v112 )
                      v112 = v42;
                    v41 = v40 & (v111 + v41);
                    v42 = (_QWORD *)(*(_QWORD *)v120 + 32LL * v41);
                    v43 = *v42;
                    if ( v38 == *v42 )
                      break;
                    if ( v43 == -4096 )
                    {
                      if ( v112 )
                        v42 = v112;
                      break;
                    }
                    ++v111;
                  }
                }
              }
              v44 = *v37;
              v42[1] = 0;
              v42[2] = 0;
              v42[3] = 0;
              *v42 = v44;
              v42[1] = v37[1];
              v45 = v37[2];
              v37[1] = 0;
              v46 = v42[2];
              v42[2] = v45;
              v47 = v37[3];
              v37[2] = v46;
              v48 = v42[3];
              v42[3] = v47;
              v49 = (_QWORD *)v37[2];
              v50 = (_QWORD *)v37[1];
              v37[3] = v48;
              ++*(_DWORD *)(v120 + 8);
              if ( v49 != v50 )
              {
                do
                {
                  v51 = v50[1];
                  if ( v51 )
                  {
                    v52 = v50[2];
                    if ( v52 )
                    {
                      if ( v51 < v52 || v51 > v52 + 14848 )
                      {
                        v53 = *(_QWORD **)(v51 + 528);
                        v54 = &v53[8 * (unsigned __int64)*(unsigned int *)(v51 + 536)];
                        if ( v53 != v54 )
                        {
                          do
                          {
                            while ( 1 )
                            {
                              v54 -= 8;
                              v55 = (_QWORD *)v54[3];
                              if ( v55 == v54 + 5 )
                                break;
                              operator delete(v55);
                              if ( v53 == v54 )
                                goto LABEL_37;
                            }
                          }
                          while ( v53 != v54 );
LABEL_37:
                          v54 = *(_QWORD **)(v51 + 528);
                        }
                        if ( v54 != (_QWORD *)(v51 + 544) )
                          free(v54);
                        v56 = *(void **)(v51 + 416);
                        if ( v56 != (void *)(v51 + 432) )
                          free(v56);
                        v57 = (void **)(v51 + 384);
                        v58 = (void **)(v51 + 64);
                        do
                        {
                          while ( *v57 != v57 + 2 )
                          {
                            operator delete(*v57);
                            v57 -= 4;
                            if ( v58 == v57 )
                              goto LABEL_45;
                          }
                          v57 -= 4;
                        }
                        while ( v57 != v58 );
LABEL_45:
                        operator delete((void *)v51, 0x3A0u);
                      }
                      else
                      {
                        v64 = *(unsigned int *)(v52 + 14976);
                        *(_DWORD *)(v52 + 14976) = v64 + 1;
                        *(_QWORD *)(v52 + 8 * v64 + 14848) = v51;
                      }
                    }
                  }
                  v50 += 4;
                }
                while ( v49 != v50 );
                v50 = (_QWORD *)v37[1];
              }
              if ( v50 )
                operator delete(v50);
            }
            v37 += 4;
          }
          while ( v119 != v37 );
          v9 = v120;
          v2 = v123;
          v3 = v125;
        }
        operator delete(v117, v121 * 8, 8);
        v35 = *(_QWORD **)v9;
        v59 = *(_DWORD *)(v9 + 16);
        v60 = *(_DWORD *)(v9 + 8) + 1;
      }
      else
      {
        v105 = *(unsigned int *)(v9 + 16);
        *(_QWORD *)(v9 + 8) = 0;
        v59 = v105;
        v106 = &v35[4 * v105];
        if ( v35 != v106 )
        {
          v107 = v35;
          do
          {
            *v107 = -4096;
            v107 += 4;
          }
          while ( v106 != v107 );
        }
        v60 = 1;
      }
      if ( v59 )
      {
        v61 = v59 - 1;
        v62 = (v59 - 1) & (((unsigned int)v116 >> 9) ^ ((unsigned int)v116 >> 4));
        v14 = &v35[4 * v62];
        v63 = *v14;
        if ( v116 == *v14 )
          goto LABEL_55;
        v115 = 1;
        v103 = nullptr;
        if ( v63 != -4096 )
        {
          while ( 1 )
          {
            if ( v63 == -8192 && !v103 )
              v103 = v14;
            v62 = v61 & (v115 + v62);
            v14 = &v35[4 * v62];
            v63 = *v14;
            if ( v116 == *v14 )
              goto LABEL_55;
            if ( v63 == -4096 )
            {
LABEL_161:
              if ( !v103 )
                goto LABEL_113;
              v63 = *v103;
              v14 = v103;
              goto LABEL_55;
            }
            ++v115;
          }
        }
        goto LABEL_113;
      }
    }
    ++*(_DWORD *)(v9 + 8);
    BUG();
  }
  v22 = *(unsigned __int8 **)(a1 + 32);
  v23 = *a2;
  if ( !v22 )
  {
    v26 = *(_QWORD *)(a1 + 40);
    v27 = *(_DWORD *)(v26 + 14976);
    if ( v27 )
    {
      v28 = (unsigned int)(v27 - 1);
      *(_DWORD *)(v26 + 14976) = v28;
      v22 = *(unsigned __int8 **)(v26 + 8 * v28 + 14848);
      v29 = *((unsigned int *)v22 + 134);
      *v22 = 0;
      v30 = *((_QWORD *)v22 + 66);
      *((_DWORD *)v22 + 106) = 0;
      v31 = v30 + (v29 << 6);
      while ( v30 != v31 )
      {
        while ( 1 )
        {
          v31 -= 64;
          v32 = *(void **)(v31 + 24);
          if ( v32 == (void *)(v31 + 40) )
            break;
          operator delete(v32);
          if ( v30 == v31 )
            goto LABEL_18;
        }
      }
LABEL_18:
      *((_DWORD *)v22 + 134) = 0;
    }
    else
    {
      v22 = (unsigned __int8 *)operator new(0x3A0u);
      *v22 = 0;
      *((_QWORD *)v22 + 12) = v22 + 112;
      *((_QWORD *)v22 + 16) = v22 + 144;
      *((_QWORD *)v22 + 20) = v22 + 176;
      *((_QWORD *)v22 + 24) = v22 + 208;
      *((_QWORD *)v22 + 28) = v22 + 240;
      *((_QWORD *)v22 + 32) = v22 + 272;
      *((_QWORD *)v22 + 36) = v22 + 304;
      *((_QWORD *)v22 + 40) = v22 + 336;
      *((_QWORD *)v22 + 44) = v22 + 368;
      *((_QWORD *)v22 + 48) = v22 + 400;
      *((_QWORD *)v22 + 52) = v22 + 432;
      *((_QWORD *)v22 + 13) = 0;
      v22[112] = 0;
      *((_QWORD *)v22 + 17) = 0;
      v22[144] = 0;
      *((_QWORD *)v22 + 21) = 0;
      v22[176] = 0;
      *((_QWORD *)v22 + 25) = 0;
      v22[208] = 0;
      *((_QWORD *)v22 + 29) = 0;
      v22[240] = 0;
      *((_QWORD *)v22 + 33) = 0;
      v22[272] = 0;
      *((_QWORD *)v22 + 37) = 0;
      v22[304] = 0;
      *((_QWORD *)v22 + 41) = 0;
      v22[336] = 0;
      *((_QWORD *)v22 + 45) = 0;
      v22[368] = 0;
      *((_QWORD *)v22 + 49) = 0;
      v22[400] = 0;
      *((_QWORD *)v22 + 53) = 0x800000000LL;
      *((_QWORD *)v22 + 66) = v22 + 544;
      *((_QWORD *)v22 + 67) = 0x600000000LL;
    }
    *(_QWORD *)(v2 + 32) = v22;
  }
  v22[*v22 + 1] = 1;
  v24 = *(_BYTE **)(v2 + 32);
  v25 = (unsigned __int8)*v24;
  *v24 = v25 + 1;
  *(_QWORD *)&v24[8 * v25 + 16] = v23;
  return v2;
}
