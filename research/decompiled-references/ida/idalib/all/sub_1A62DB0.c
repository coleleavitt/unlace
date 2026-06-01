__int64 __fastcall sub_1A62DB0(__int64 a1, double a2, double a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  char v12; // al
  void *v13; // rdx
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rbp
  unsigned __int64 *v19; // r12
  unsigned __int64 *v20; // rbx
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  _QWORD *v23; // r15
  _QWORD *v24; // r13
  _QWORD *v25; // rdi
  void *v26; // rdi
  void **v27; // r13
  void **v28; // r15
  _QWORD *v29; // rdi
  unsigned __int64 *v30; // rbp
  unsigned __int64 *v31; // rbx
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rax
  _QWORD *v34; // r14
  _QWORD *v35; // r12
  _QWORD *v36; // rdi
  void *v37; // rdi
  void **v38; // r12
  void **v39; // r14
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // eax
  char *v47; // rdi
  __int64 v48; // r15
  __int64 v49; // r12
  _QWORD *v50; // r13
  _QWORD *v51; // rbx
  unsigned __int64 *v52; // rdi
  unsigned __int64 *v53; // rbp
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // rdx
  _QWORD *v56; // rdx
  _QWORD *v57; // r14
  _QWORD *v58; // rdi
  void *v59; // rdi
  void **v60; // r14
  void **v61; // rdx
  void *v62; // rdi
  _QWORD *v63; // rdi
  __int64 v64; // rcx
  _QWORD *v65; // r14
  _QWORD *v66; // rbx
  unsigned __int64 *v67; // rdi
  unsigned __int64 *v68; // r13
  unsigned __int64 v69; // r12
  unsigned __int64 v70; // rax
  _QWORD *v71; // r15
  _QWORD *v72; // rbp
  _QWORD *v73; // rdi
  void *v74; // rdi
  void **v75; // rbp
  void **v76; // r15
  _QWORD *v77; // rdi
  __int64 v78; // rdx
  __int64 v79; // rax
  unsigned __int64 v80; // rcx
  __int64 **v81; // rsi
  unsigned __int64 v82; // rdi
  __int64 v83; // rax
  __int64 v85; // r14
  __int64 v86; // rax
  __int64 v87; // r15
  __int64 v88; // rbp
  _QWORD *v89; // r13
  __int64 v90; // rbx
  int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rax
  _QWORD *v97; // rbx
  int v98; // ebx
  unsigned __int64 *v100; // [rsp+8h] [rbp-F0h]
  unsigned __int64 *v101; // [rsp+8h] [rbp-F0h]
  char v102; // [rsp+8h] [rbp-F0h]
  _QWORD *v103; // [rsp+10h] [rbp-E8h]
  __int64 v104; // [rsp+10h] [rbp-E8h]
  _QWORD *v105; // [rsp+18h] [rbp-E0h]
  void **v106; // [rsp+18h] [rbp-E0h]
  __int64 v107; // [rsp+18h] [rbp-E0h]
  _QWORD *v108; // [rsp+20h] [rbp-D8h]
  __int64 v109; // [rsp+30h] [rbp-C8h]
  __int64 v110; // [rsp+38h] [rbp-C0h]
  __int64 v111; // [rsp+58h] [rbp-A0h] BYREF
  __int64 *v112[2]; // [rsp+60h] [rbp-98h] BYREF
  void *ptr; // [rsp+70h] [rbp-88h] BYREF
  __int64 v114; // [rsp+78h] [rbp-80h]
  char v115; // [rsp+80h] [rbp-78h] BYREF
  int v116; // [rsp+88h] [rbp-70h]
  int v117; // [rsp+8Ch] [rbp-6Ch]
  int v118; // [rsp+90h] [rbp-68h]
  __int64 v119; // [rsp+94h] [rbp-64h]
  char v120; // [rsp+9Ch] [rbp-5Ch]
  char v121; // [rsp+9Dh] [rbp-5Bh]
  void *v122; // [rsp+A0h] [rbp-58h]
  void *v123; // [rsp+A8h] [rbp-50h]
  __int64 v124; // [rsp+B0h] [rbp-48h]

  if ( !*(_QWORD *)(a1 + 56) )
    return *(_QWORD *)(a1 + 64);
  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    if ( !*(_DWORD *)(v3 + 52) )
    {
      v44 = std::_Rb_tree_rebalance_for_erase(*(_QWORD *)(a1 + 40), a1 + 24);
      v45 = v44;
      v108 = (_QWORD *)v44;
      if ( *(_DWORD *)(v44 + 52) )
      {
        v46 = *(_DWORD *)(v44 + 48);
        v47 = *(char **)(v45 + 40);
        if ( v46 )
        {
          v48 = 0;
          v109 = 8LL * (unsigned int)(v46 - 1) + 8;
          do
          {
            v49 = *(_QWORD *)&v47[v48];
            if ( v49 != -8 && v49 )
            {
              v50 = *(_QWORD **)(v49 + 8);
              v110 = *(_QWORD *)v49 + 113LL;
              v51 = &v50[11 * *(unsigned int *)(v49 + 16)];
              if ( v50 != v51 )
              {
                do
                {
                  while ( 1 )
                  {
                    v51 -= 11;
                    v52 = (unsigned __int64 *)v51[8];
                    v100 = (unsigned __int64 *)v51[9];
                    v53 = v52;
                    if ( v100 != v52 )
                    {
                      v103 = v51;
                      do
                      {
                        v54 = *v53;
                        if ( *v53 )
                        {
                          v55 = v53[1];
                          if ( v55 )
                          {
                            if ( v54 < v55 || v54 > v55 + 14848 )
                            {
                              v56 = *(_QWORD **)(v54 + 528);
                              v57 = &v56[8 * (unsigned __int64)*(unsigned int *)(v54 + 536)];
                              if ( v56 != v57 )
                              {
                                do
                                {
                                  while ( 1 )
                                  {
                                    v57 -= 8;
                                    v58 = (_QWORD *)v57[3];
                                    if ( v58 == v57 + 5 )
                                      break;
                                    v105 = v56;
                                    operator delete(v58);
                                    v56 = v105;
                                    if ( v105 == v57 )
                                      goto LABEL_82;
                                  }
                                }
                                while ( v56 != v57 );
LABEL_82:
                                v57 = *(_QWORD **)(v54 + 528);
                              }
                              if ( v57 != (_QWORD *)(v54 + 544) )
                                free(v57);
                              v59 = *(void **)(v54 + 416);
                              if ( v59 != (void *)(v54 + 432) )
                                free(v59);
                              v60 = (void **)(v54 + 384);
                              v61 = (void **)(v54 + 64);
                              do
                              {
                                while ( 1 )
                                {
                                  v62 = *v60;
                                  if ( *v60 == v60 + 2 )
                                    break;
                                  v106 = v61;
                                  v60 -= 4;
                                  operator delete(v62);
                                  v61 = v106;
                                  if ( v106 == v60 )
                                    goto LABEL_90;
                                }
                                v60 -= 4;
                              }
                              while ( v61 != v60 );
LABEL_90:
                              operator delete((void *)v54, 0x3A0u);
                            }
                            else
                            {
                              v64 = *(unsigned int *)(v55 + 14976);
                              *(_DWORD *)(v55 + 14976) = v64 + 1;
                              *(_QWORD *)(v55 + 8 * v64 + 14848) = v54;
                            }
                          }
                        }
                        v53 += 3;
                      }
                      while ( v100 != v53 );
                      v51 = v103;
                      v52 = (unsigned __int64 *)v103[8];
                    }
                    if ( v52 )
                      operator delete(v52);
                    v63 = (_QWORD *)v51[2];
                    if ( v63 == v51 + 4 )
                      break;
                    free(v63);
                    if ( v50 == v51 )
                      goto LABEL_97;
                  }
                }
                while ( v50 != v51 );
LABEL_97:
                v51 = *(_QWORD **)(v49 + 8);
              }
              if ( v51 != (_QWORD *)(v49 + 24) )
                free(v51);
              operator delete(v49, v110, 8);
              v47 = (char *)v108[5];
            }
            v48 += 8;
          }
          while ( v109 != v48 );
        }
      }
      else
      {
        v47 = *(char **)(v44 + 40);
      }
      free(v47);
      operator delete(v108);
      v40 = *(_QWORD *)(a1 + 56) - 1LL;
      *(_QWORD *)(a1 + 56) = v40;
      goto LABEL_54;
    }
    sub_1A3B430(v112, *(__int64 **)(v3 + 40), *(_DWORD *)(v3 + 48) == 0);
    v8 = *v112[0];
    v9 = *(unsigned int *)(*v112[0] + 16);
    if ( !(_DWORD)v9 )
    {
      sub_2244F90(v3 + 40, *v112[0], v4, v5, v6, v7);
      v65 = *(_QWORD **)(v8 + 8);
      v104 = *(_QWORD *)v8 + 113LL;
      v66 = &v65[11 * *(unsigned int *)(v8 + 16)];
      if ( v65 != v66 )
      {
        v107 = v8;
        do
        {
          while ( 1 )
          {
            v66 -= 11;
            v67 = (unsigned __int64 *)v66[8];
            v68 = v67;
            if ( (unsigned __int64 *)v66[9] != v67 )
            {
              v101 = (unsigned __int64 *)v66[9];
              do
              {
                v69 = *v68;
                if ( *v68 )
                {
                  v70 = v68[1];
                  if ( v70 )
                  {
                    if ( v69 < v70 || v69 > v70 + 14848 )
                    {
                      v71 = *(_QWORD **)(v69 + 528);
                      v72 = &v71[8 * (unsigned __int64)*(unsigned int *)(v69 + 536)];
                      if ( v71 != v72 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v72 -= 8;
                            v73 = (_QWORD *)v72[3];
                            if ( v73 == v72 + 5 )
                              break;
                            operator delete(v73);
                            if ( v71 == v72 )
                              goto LABEL_121;
                          }
                        }
                        while ( v71 != v72 );
LABEL_121:
                        v72 = *(_QWORD **)(v69 + 528);
                      }
                      if ( v72 != (_QWORD *)(v69 + 544) )
                        free(v72);
                      v74 = *(void **)(v69 + 416);
                      if ( v74 != (void *)(v69 + 432) )
                        free(v74);
                      v75 = (void **)(v69 + 384);
                      v76 = (void **)(v69 + 64);
                      do
                      {
                        while ( *v75 != v75 + 2 )
                        {
                          operator delete(*v75);
                          v75 -= 4;
                          if ( v75 == v76 )
                            goto LABEL_129;
                        }
                        v75 -= 4;
                      }
                      while ( v76 != v75 );
LABEL_129:
                      operator delete((void *)v69, 0x3A0u);
                    }
                    else
                    {
                      v78 = *(unsigned int *)(v70 + 14976);
                      *(_DWORD *)(v70 + 14976) = v78 + 1;
                      *(_QWORD *)(v70 + 8 * v78 + 14848) = v69;
                    }
                  }
                }
                v68 += 3;
              }
              while ( v101 != v68 );
              v67 = (unsigned __int64 *)v66[8];
            }
            if ( v67 )
              operator delete(v67);
            v77 = (_QWORD *)v66[2];
            if ( v77 == v66 + 4 )
              break;
            free(v77);
            if ( v65 == v66 )
              goto LABEL_136;
          }
        }
        while ( v65 != v66 );
LABEL_136:
        v8 = v107;
        v66 = *(_QWORD **)(v107 + 8);
      }
      if ( v66 != (_QWORD *)(v8 + 24) )
        free(v66);
      operator delete(v8, v104, 8);
      sub_1A61AC0(a1);
      v40 = *(_QWORD *)(a1 + 56);
      goto LABEL_54;
    }
    v10 = *(_QWORD *)(v8 + 8) + 88 * v9 - 88;
    v112[0] = *(__int64 **)v10;
    v112[1] = *(__int64 **)(v10 + 8);
    ptr = &v115;
    v114 = 0x100000000LL;
    v11 = *(unsigned int *)(v10 + 24);
    if ( (_DWORD)v11 )
      sub_AEA1F0((char ***)&ptr, (char ***)(v10 + 16));
    v116 = *(_DWORD *)(v10 + 40);
    v117 = *(_DWORD *)(v10 + 44);
    v118 = *(_DWORD *)(v10 + 48);
    v119 = *(_QWORD *)(v10 + 52);
    v120 = *(_BYTE *)(v10 + 60);
    v12 = *(_BYTE *)(v10 + 61);
    v123 = nullptr;
    v121 = v12;
    v122 = nullptr;
    v124 = 0;
    v122 = *(void **)(v10 + 64);
    v13 = *(void **)(v10 + 72);
    *(_QWORD *)(v10 + 64) = 0;
    v14 = v123;
    v123 = v13;
    v15 = *(_QWORD *)(v10 + 80);
    *(_QWORD *)(v10 + 72) = v14;
    v16 = v124;
    v124 = v15;
    *(_QWORD *)(v10 + 80) = v16;
    v17 = (unsigned int)(*(_DWORD *)(v8 + 16) - 1);
    *(_DWORD *)(v8 + 16) = v17;
    v18 = (_QWORD *)(*(_QWORD *)(v8 + 8) + 88 * v17);
    v19 = (unsigned __int64 *)v18[9];
    v20 = (unsigned __int64 *)v18[8];
    if ( v19 != v20 )
    {
      do
      {
        v21 = *v20;
        if ( *v20 )
        {
          v22 = v20[1];
          if ( v22 )
          {
            if ( v21 < v22 || v21 > v22 + 14848 )
            {
              v23 = *(_QWORD **)(v21 + 528);
              v24 = &v23[8 * (unsigned __int64)*(unsigned int *)(v21 + 536)];
              if ( v23 != v24 )
              {
                do
                {
                  while ( 1 )
                  {
                    v24 -= 8;
                    v25 = (_QWORD *)v24[3];
                    if ( v25 == v24 + 5 )
                      break;
                    operator delete(v25);
                    if ( v23 == v24 )
                      goto LABEL_13;
                  }
                }
                while ( v23 != v24 );
LABEL_13:
                v24 = *(_QWORD **)(v21 + 528);
              }
              if ( v24 != (_QWORD *)(v21 + 544) )
                free(v24);
              v26 = *(void **)(v21 + 416);
              if ( v26 != (void *)(v21 + 432) )
                free(v26);
              v27 = (void **)(v21 + 384);
              v28 = (void **)(v21 + 64);
              do
              {
                while ( *v27 != v27 + 2 )
                {
                  operator delete(*v27);
                  v27 -= 4;
                  if ( v27 == v28 )
                    goto LABEL_21;
                }
                v27 -= 4;
              }
              while ( v28 != v27 );
LABEL_21:
              operator delete((void *)v21, 0x3A0u);
            }
            else
            {
              v42 = *(unsigned int *)(v22 + 14976);
              v11 = (unsigned int)(v42 + 1);
              *(_DWORD *)(v22 + 14976) = v11;
              *(_QWORD *)(v22 + 8 * v42 + 14848) = v21;
            }
          }
        }
        v20 += 3;
      }
      while ( v19 != v20 );
      v20 = (unsigned __int64 *)v18[8];
    }
    if ( v20 )
      operator delete(v20);
    v29 = (_QWORD *)v18[2];
    if ( v29 != v18 + 4 )
      free(v29);
    if ( (_DWORD)v114
      || v121
      || (unsigned __int8)sub_1A5D550(a1, (unsigned __int64)v112, a2, a3, (unsigned int)v114, v11, v6, v7) )
    {
      break;
    }
    v30 = (unsigned __int64 *)v123;
    v31 = (unsigned __int64 *)v122;
    if ( v123 != v122 )
    {
      do
      {
        v32 = *v31;
        if ( *v31 )
        {
          v33 = v31[1];
          if ( v33 )
          {
            if ( v32 < v33 || v32 > v33 + 14848 )
            {
              v34 = *(_QWORD **)(v32 + 528);
              v35 = &v34[8 * (unsigned __int64)*(unsigned int *)(v32 + 536)];
              if ( v34 != v35 )
              {
                do
                {
                  while ( 1 )
                  {
                    v35 -= 8;
                    v36 = (_QWORD *)v35[3];
                    if ( v36 == v35 + 5 )
                      break;
                    operator delete(v36);
                    if ( v34 == v35 )
                      goto LABEL_38;
                  }
                }
                while ( v34 != v35 );
LABEL_38:
                v35 = *(_QWORD **)(v32 + 528);
              }
              if ( v35 != (_QWORD *)(v32 + 544) )
                free(v35);
              v37 = *(void **)(v32 + 416);
              if ( v37 != (void *)(v32 + 432) )
                free(v37);
              v38 = (void **)(v32 + 384);
              v39 = (void **)(v32 + 64);
              do
              {
                while ( *v38 != v38 + 2 )
                {
                  operator delete(*v38);
                  v38 -= 4;
                  if ( v39 == v38 )
                    goto LABEL_46;
                }
                v38 -= 4;
              }
              while ( v39 != v38 );
LABEL_46:
              operator delete((void *)v32, 0x3A0u);
            }
            else
            {
              v43 = *(unsigned int *)(v33 + 14976);
              *(_DWORD *)(v33 + 14976) = v43 + 1;
              *(_QWORD *)(v33 + 8 * v43 + 14848) = v32;
            }
          }
        }
        v31 += 3;
      }
      while ( v30 != v31 );
      v31 = (unsigned __int64 *)v122;
    }
    if ( v31 )
      operator delete(v31);
    if ( ptr != &v115 )
      free(ptr);
    v40 = *(_QWORD *)(a1 + 56);
LABEL_54:
    if ( !v40 )
      return *(_QWORD *)(a1 + 64);
  }
  v79 = *(unsigned int *)(a1 + 72);
  v80 = *(_QWORD *)(a1 + 64);
  v81 = v112;
  v82 = v80 + 88 * v79;
  if ( v79 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 76) )
  {
    v85 = -1;
    v102 = 0;
    if ( v80 <= (unsigned __int64)v112 && v82 > (unsigned __int64)v112 )
    {
      v102 = 1;
      v85 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)((__int64)v112 - v80) >> 3);
    }
    v86 = sub_2237400(a1 + 64, a1 + 80, v79 + 1, 88, &v111);
    v87 = *(_QWORD *)(a1 + 64);
    v88 = v86;
    v89 = (_QWORD *)(v87 + 88LL * *(unsigned int *)(a1 + 72));
    if ( (_QWORD *)v87 != v89 )
    {
      v90 = v86;
      do
      {
        *(_QWORD *)v90 = *(_QWORD *)v87;
        v96 = *(_QWORD *)(v87 + 8);
        *(_DWORD *)(v90 + 24) = 0;
        *(_QWORD *)(v90 + 8) = v96;
        *(_QWORD *)(v90 + 16) = v90 + 32;
        *(_DWORD *)(v90 + 28) = 1;
        if ( *(_DWORD *)(v87 + 24) )
          sub_AEA1F0((char ***)(v90 + 16), (char ***)(v87 + 16));
        v91 = *(_DWORD *)(v87 + 40);
        v87 += 88;
        v90 += 88;
        *(_DWORD *)(v90 - 48) = v91;
        *(_DWORD *)(v90 - 44) = *(_DWORD *)(v87 - 44);
        *(_DWORD *)(v90 - 40) = *(_DWORD *)(v87 - 40);
        *(_QWORD *)(v90 - 36) = *(_QWORD *)(v87 - 36);
        *(_BYTE *)(v90 - 28) = *(_BYTE *)(v87 - 28);
        LOBYTE(v91) = *(_BYTE *)(v87 - 27);
        *(_QWORD *)(v90 - 16) = 0;
        *(_QWORD *)(v90 - 8) = 0;
        *(_QWORD *)(v90 - 24) = 0;
        *(_BYTE *)(v90 - 27) = v91;
        *(_QWORD *)(v90 - 24) = *(_QWORD *)(v87 - 24);
        v92 = *(_QWORD *)(v87 - 16);
        *(_QWORD *)(v87 - 24) = 0;
        v93 = *(_QWORD *)(v90 - 16);
        *(_QWORD *)(v90 - 16) = v92;
        v94 = *(_QWORD *)(v87 - 8);
        *(_QWORD *)(v87 - 16) = v93;
        v95 = *(_QWORD *)(v90 - 8);
        *(_QWORD *)(v90 - 8) = v94;
        *(_QWORD *)(v87 - 8) = v95;
      }
      while ( v89 != (_QWORD *)v87 );
      v97 = *(_QWORD **)(a1 + 64);
      v89 = &v97[11 * *(unsigned int *)(a1 + 72)];
      if ( v97 != v89 )
      {
        do
        {
          v89 -= 11;
          sub_17A1D90(v89);
        }
        while ( v97 != v89 );
        v89 = *(_QWORD **)(a1 + 64);
      }
    }
    v98 = v111;
    if ( v89 != (_QWORD *)(a1 + 80) )
      free(v89);
    v81 = v112;
    *(_QWORD *)(a1 + 64) = v88;
    *(_DWORD *)(a1 + 76) = v98;
    v82 = v88 + 88LL * *(unsigned int *)(a1 + 72);
    if ( v102 )
      v81 = (__int64 **)(v88 + 88 * v85);
  }
  sub_1A3B6B0(v82, (__int64)v81);
  v83 = *(_QWORD *)(a1 + 432);
  ++*(_DWORD *)(a1 + 72);
  v41 = *(_QWORD *)(a1 + 64) + 88 * v83;
  sub_17A1D90(v112);
  return v41;
}
