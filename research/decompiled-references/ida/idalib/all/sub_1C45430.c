__int64 __fastcall sub_1C45430(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  unsigned int v7; // r14d
  _BYTE *v8; // rbp
  __int64 v9; // rbx
  char v10; // al
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  void *v17; // rdx
  __int64 v18; // rdx
  unsigned __int64 v19; // r15
  char v20; // al
  int v21; // ecx
  __int64 v22; // r12
  __int64 v23; // r12
  unsigned int v24; // eax
  unsigned __int64 v25; // r13
  __int64 v26; // r12
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned int v31; // eax
  unsigned int v32; // r12d
  __int64 v33; // rax
  __int64 v34; // rsi
  int v35; // edx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // r12
  _QWORD *v42; // r14
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rax
  _QWORD *v45; // rbp
  _QWORD *v46; // r13
  _QWORD *v47; // rdi
  void *v48; // rdi
  void **v49; // rbp
  void **v50; // r13
  __int64 v51; // rsi
  __int64 v52; // rdx
  _WORD *v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  _QWORD *v56; // rax
  _WORD *v57; // rdx
  _WORD *v58; // rax
  __int64 v59; // rax
  int v60; // ebx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  unsigned int v64; // eax
  unsigned int v65; // eax
  __int64 v66; // rax
  _QWORD *v67; // r12
  _QWORD *v68; // rbp
  unsigned __int64 v69; // r13
  unsigned __int64 v70; // rax
  _QWORD *v71; // r14
  _QWORD *v72; // rbx
  _QWORD *v73; // rdi
  void *v74; // rdi
  void **v75; // rbx
  void **v76; // r14
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rdi
  __int64 v80; // rax
  __int64 *v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // r12
  __int64 v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // r12
  __int64 v97; // rax
  _QWORD *v98; // rax
  _WORD **v99; // rax
  __int64 v100; // rax
  __int64 v101; // rbp
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // r12
  __int64 v107; // rax
  _QWORD *v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // r12
  __int64 v114; // rax
  _QWORD *v115; // rax
  __int64 v118; // [rsp+18h] [rbp-740h]
  __int64 v119; // [rsp+18h] [rbp-740h]
  _BYTE *v120; // [rsp+20h] [rbp-738h]
  __int64 v121; // [rsp+20h] [rbp-738h]
  unsigned __int8 v122; // [rsp+2Bh] [rbp-72Dh]
  __int64 v123; // [rsp+38h] [rbp-720h] BYREF
  __int64 v124; // [rsp+40h] [rbp-718h] BYREF
  __int64 v125; // [rsp+48h] [rbp-710h] BYREF
  _BYTE v126[3]; // [rsp+50h] [rbp-708h] BYREF
  int v127; // [rsp+54h] [rbp-704h]
  __int64 v128; // [rsp+58h] [rbp-700h]
  __int64 v129; // [rsp+60h] [rbp-6F8h]
  __int64 v130[2]; // [rsp+70h] [rbp-6E8h] BYREF
  __int64 v131; // [rsp+80h] [rbp-6D8h]
  _BYTE v132[88]; // [rsp+90h] [rbp-6C8h] BYREF
  char v133; // [rsp+E8h] [rbp-670h]
  unsigned int v134; // [rsp+F0h] [rbp-668h]
  char v135; // [rsp+F4h] [rbp-664h]
  __int128 v136; // [rsp+100h] [rbp-658h] BYREF
  unsigned int v137; // [rsp+110h] [rbp-648h]
  __int16 v138; // [rsp+114h] [rbp-644h]
  __int64 v139; // [rsp+118h] [rbp-640h]
  _QWORD *v140; // [rsp+120h] [rbp-638h]
  __int64 v141; // [rsp+128h] [rbp-630h]
  _QWORD v142[17]; // [rsp+130h] [rbp-628h] BYREF
  _QWORD v143[3]; // [rsp+1B8h] [rbp-5A0h] BYREF
  _QWORD v144[3]; // [rsp+1D0h] [rbp-588h] BYREF
  int v145; // [rsp+1E8h] [rbp-570h]
  char v146; // [rsp+1ECh] [rbp-56Ch]
  void *v147; // [rsp+1F0h] [rbp-568h]
  __int64 v148; // [rsp+1F8h] [rbp-560h]
  _QWORD v149[10]; // [rsp+200h] [rbp-558h] BYREF
  void *v150; // [rsp+250h] [rbp-508h]
  __int64 v151; // [rsp+258h] [rbp-500h]
  _WORD v152[52]; // [rsp+260h] [rbp-4F8h] BYREF
  void *v153; // [rsp+2C8h] [rbp-490h]
  __int64 v154; // [rsp+2D0h] [rbp-488h]
  _BYTE v155[40]; // [rsp+2D8h] [rbp-480h] BYREF
  void *ptr; // [rsp+300h] [rbp-458h] BYREF
  __int64 v157; // [rsp+308h] [rbp-450h]
  _QWORD v158[128]; // [rsp+310h] [rbp-448h] BYREF
  int v159; // [rsp+710h] [rbp-48h]
  char v160; // [rsp+714h] [rbp-44h]

  v7 = a3;
  v8 = (_BYTE *)a4;
  v9 = a2;
  if ( a2 )
  {
    v10 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( v10 == 37 )
    {
      v11 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
      if ( (v11 & 4) != 0 )
        v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v12 )
        BUG();
    }
    else
    {
      if ( v10 != 71 )
        goto LABEL_12;
      v15 = *(_QWORD *)(a2 + 48);
      if ( !v15 || (*(_BYTE *)(v15 + 28) & 0x7F) != 0x25 )
        goto LABEL_12;
      v59 = *(_QWORD *)(sub_B8C1B0(v15 + 72) + 16);
      if ( (v59 & 4) != 0 )
        v12 = *(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v12 = v59 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v12 )
        BUG();
    }
    v13 = *(_QWORD *)(v12 + 64);
    if ( v13 && (*(_BYTE *)(v13 + 10) & 0x20) != 0 )
      return 0;
  }
LABEL_12:
  if ( v8 && (*(_WORD *)v8 & 0x1FF) == 0x35 )
  {
    v60 = -(sub_15F2610((__int64)a1, 0, a3, a4, a5, a6) == 0);
    v64 = sub_C00A40((unsigned __int64)v8, 0, v61, v62, v63);
    sub_168B9F0((__int64)&ptr, a1 + 1, v64, (v60 & 0xFFFFFCB7) + 4096, 0);
    *(_QWORD *)&v136 = sub_EEC8C0((unsigned __int64)v8, (__int64)(a1 + 1), a7);
    sub_1587DB0((__int64)&ptr, (__int64 *)&v136);
    sub_15F7200(&ptr);
    return 1;
  }
  v122 = sub_B8E180(a2 + 72);
  if ( v122 )
    return 0;
  v16 = *(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v16 = *(_QWORD *)(v16 + 32);
  v17 = *(void **)v16;
  v157 = v16 + 8;
  ptr = v17;
  v19 = sub_BF48A0((__int64 *)&ptr);
  v20 = *(_BYTE *)(v19 + 16);
  if ( v20 == 26 )
  {
    v21 = ((*(_BYTE *)(v19 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
LABEL_19:
    v22 = 8 * ((v21 + 8 * (unsigned int)*(unsigned __int16 *)(v19 + 22)) >> 3) + 8;
    goto LABEL_20;
  }
  v22 = 16;
  if ( v20 != 25 )
  {
    v21 = 15;
    goto LABEL_19;
  }
LABEL_20:
  v23 = v18 + v22;
  v24 = sub_F6C520(*(_QWORD *)(v19 + 24));
  v118 = *(_QWORD *)(v19 + 24);
  v25 = v24 * ((v23 - (unsigned __int64)(v23 != 0)) / v24 + (v23 != 0));
  v26 = *(_QWORD *)(a1[31] + 18632);
  *(_WORD *)v126 = *(_WORD *)v126 & 0xFE00 | 0x64;
  if ( unk_2CD7484 )
    sub_EE9B50(100);
  v128 = v26;
  *(_WORD *)&v126[1] &= 0xF801u;
  v129 = 0;
  v127 = 0;
  v27 = sub_B635F0((__int64)v126);
  v29 = (unsigned int)(v27 << 6);
  v126[1] = ((_BYTE)v27 << 6) | v126[1] & 0x3F;
  v30 = v126[2] & 0xF8;
  v126[2] = v126[2] & 0xF8 | ((unsigned __int8)v27 >> 2) & 7;
  if ( !v8 )
  {
    v79 = *(_QWORD *)(v118 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v79 + 16) != 16
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v79 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 16
       || !sub_F63050(v79, a2, v30, v29)) )
    {
      sub_168B9F0((__int64)&ptr, a1 + 1, v7, 0xCB8u, 0);
      *(_QWORD *)&v136 = v118;
      sub_162B6D0((__int64)&ptr, (__int64 *)&v136);
      sub_15F7200(&ptr);
      return 1;
    }
    v8 = v126;
  }
  v123 = *(_QWORD *)(a5 + 24);
  v31 = sub_C00A40((unsigned __int64)v8, a2, v30, v29, v28);
  v143[0] &= 0xFFFFFFFE00000000LL;
  v32 = v31;
  v137 = v31;
  v138 = 0;
  v140 = v142;
  v141 = 0x400000000LL;
  v144[0] &= 0xFFFFFFFE00000000LL;
  v151 = 0x400000000LL;
  v154 = 0x400000000LL;
  v147 = v149;
  v150 = v152;
  v33 = a1[31];
  v152[48] = 0;
  v148 = 0x800000000LL;
  v34 = *((_QWORD *)v8 + 1);
  v153 = v155;
  v35 = 0;
  v136 = 0;
  v139 = 0;
  v142[16] = 0;
  v143[1] = 0;
  v144[1] = 0;
  v145 = 0;
  v146 = 0;
  v149[8] = 0;
  v149[9] = 0;
  if ( *(_QWORD *)(v33 + 19080) == v34 )
  {
    v84 = sub_BFB9F0((__int64)v8);
    if ( (*(_WORD *)v84 & 0x1FF) != 4
      || (v121 = *(_QWORD *)(v84 + 16), v84 = sub_BFB9F0(v121), v121 == v84)
      || (v35 = 0, v84) )
    {
      v35 = *(_DWORD *)(v84 + 24);
    }
  }
  v159 = v35;
  v160 = 0;
  ptr = v158;
  v157 = 0x1000000000LL;
  v36 = sub_1D79BF0((_DWORD)a1, v118, v25, (_DWORD)v8, (unsigned int)&v123, (unsigned int)&v136, 0, 0, (__int64)&ptr);
  if ( v36 )
  {
    if ( *(char *)(v9 + 28) < 0 )
    {
LABEL_80:
      sub_1BD6E90((__int64 *)&ptr);
      if ( ptr != v158 )
        free(ptr);
      if ( v153 != v155 )
        free(v153);
      if ( v150 != v152 )
        free(v150);
      if ( v147 != v149 )
        free(v147);
      v67 = v140;
      v68 = &v140[4 * (unsigned int)v141];
      if ( v140 != v68 )
      {
        do
        {
          v68 -= 4;
          v69 = v68[1];
          if ( v69 )
          {
            v70 = v68[2];
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
                        goto LABEL_95;
                    }
                  }
                  while ( v71 != v72 );
LABEL_95:
                  v72 = *(_QWORD **)(v69 + 528);
                }
                if ( v72 != (_QWORD *)(v69 + 544) )
                  free(v72);
                v74 = *(void **)(v69 + 416);
                v75 = (void **)(v69 + 416);
                if ( v74 != (void *)(v69 + 432) )
                  free(v74);
                v76 = (void **)(v69 + 96);
                do
                {
                  while ( 1 )
                  {
                    v75 -= 4;
                    if ( *v75 == v75 + 2 )
                      break;
                    operator delete(*v75);
                    if ( v76 == v75 )
                      goto LABEL_103;
                  }
                }
                while ( v76 != v75 );
LABEL_103:
                operator delete((void *)v69, 0x3A0u);
              }
              else
              {
                v77 = *(unsigned int *)(v70 + 14976);
                *(_DWORD *)(v70 + 14976) = v77 + 1;
                *(_QWORD *)(v70 + 8 * v77 + 14848) = v69;
              }
            }
          }
        }
        while ( v67 != v68 );
        v68 = v140;
      }
      if ( v68 != v142 )
        free(v68);
      return 1;
    }
    if ( v36 != 5 )
    {
      if ( v36 != 18 )
      {
        v65 = sub_C00A40((unsigned __int64)v8, v118, v37, v38, v39);
        sub_168B9F0((__int64)v130, a1 + 1, v65, 0xCB4u, 0);
        v124 = v118;
        v66 = sub_162B6D0((__int64)v130, &v124);
        v125 = *((_QWORD *)v8 + 1);
        sub_162B6D0(v66, &v125);
        sub_15F7200(v130);
        sub_1BE16D0((__int64 *)&ptr, a1, v32);
      }
      goto LABEL_80;
    }
    v80 = sub_15F2610((__int64)a1, 0, v37, v38, v39, v40);
    v81 = a1 + 1;
    if ( !v80 || !*(_BYTE *)(v80 + 1464) )
    {
      sub_168B9F0((__int64)v130, v81, v7, 0xCB5u, 0);
      LODWORD(v124) = ((*(_BYTE *)(a5 + 18) >> 3) & 3) == 1;
      v82 = sub_1587D10((__int64)v130, (int *)&v124);
      v83 = v82;
      if ( *(_BYTE *)(v82 + 120) )
      {
        sub_F21D50(v82 + 32, v144);
      }
      else
      {
        if ( !*(_BYTE *)(v82 + 132) )
        {
LABEL_123:
          sub_15F7200(v130);
          goto LABEL_80;
        }
        v89 = sub_168B9E0((_QWORD *)v82);
        v90 = *(_QWORD *)(v83 + 16);
        if ( v90 )
          v90 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v90 + 32LL))(*(_QWORD *)(v83 + 16));
        v125 = v90;
        v91 = sub_1587BC0(v89, &v125, v85, v86, v87, v88);
        sub_F21D50(*v91 + 32LL * *(unsigned int *)(v83 + 128) + 8, v144);
      }
      if ( *(_BYTE *)(v83 + 120) )
      {
        sub_F21D50(v83 + 32, v143);
      }
      else if ( *(_BYTE *)(v83 + 132) )
      {
        v96 = sub_168B9E0((_QWORD *)v83);
        v97 = *(_QWORD *)(v83 + 16);
        if ( v97 )
          v97 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v97 + 32LL))(*(_QWORD *)(v83 + 16));
        v125 = v97;
        v98 = sub_1587BC0(v96, &v125, v92, v93, v94, v95);
        sub_F21D50(*v98 + 32LL * *(unsigned int *)(v83 + 128) + 8, v143);
      }
      goto LABEL_123;
    }
    sub_168B9F0((__int64)v130, v81, v7, 0x14B2u, 0);
    if ( v133 )
    {
      sub_F21D50(v132, v144);
    }
    else
    {
      if ( !v135 )
      {
LABEL_135:
        LOBYTE(v125) = 1;
        sub_1588420((__int64)v130, (unsigned __int8 *)&v125);
        sub_15F7200(v130);
        goto LABEL_80;
      }
      v106 = sub_168B9E0(v130);
      v107 = v131;
      if ( v131 )
        v107 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v131 + 32LL))(v131);
      v125 = v107;
      v108 = sub_1587BC0(v106, &v125, v102, v103, v104, v105);
      sub_F21D50(*v108 + 32LL * v134 + 8, v144);
    }
    if ( v133 )
    {
      sub_F21D50(v132, v143);
    }
    else if ( v135 )
    {
      v113 = sub_168B9E0(v130);
      v114 = v131;
      if ( v131 )
        v114 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v131 + 32LL))(v131);
      v125 = v114;
      v115 = sub_1587BC0(v113, &v125, v109, v110, v111, v112);
      sub_F21D50(*v115 + 32LL * v134 + 8, v143);
    }
    goto LABEL_135;
  }
  sub_1BD6E90((__int64 *)&ptr);
  if ( ptr != v158 )
    free(ptr);
  if ( v153 != v155 )
    free(v153);
  if ( v150 != v152 )
    free(v150);
  if ( v147 != v149 )
    free(v147);
  v41 = &v140[4 * (unsigned int)v141];
  if ( v140 != v41 )
  {
    v119 = v9;
    v42 = v140;
    v120 = v8;
    do
    {
      v41 -= 4;
      v43 = v41[1];
      if ( v43 )
      {
        v44 = v41[2];
        if ( v44 )
        {
          if ( v43 < v44 || v43 > v44 + 14848 )
          {
            v45 = *(_QWORD **)(v43 + 528);
            v46 = &v45[8 * (unsigned __int64)*(unsigned int *)(v43 + 536)];
            if ( v45 != v46 )
            {
              do
              {
                while ( 1 )
                {
                  v46 -= 8;
                  v47 = (_QWORD *)v46[3];
                  if ( v47 == v46 + 5 )
                    break;
                  operator delete(v47);
                  if ( v45 == v46 )
                    goto LABEL_41;
                }
              }
              while ( v45 != v46 );
LABEL_41:
              v46 = *(_QWORD **)(v43 + 528);
            }
            if ( v46 != (_QWORD *)(v43 + 544) )
              free(v46);
            v48 = *(void **)(v43 + 416);
            if ( v48 != (void *)(v43 + 432) )
              free(v48);
            v49 = (void **)(v43 + 384);
            v50 = (void **)(v43 + 64);
            do
            {
              while ( *v49 != v49 + 2 )
              {
                operator delete(*v49);
                v49 -= 4;
                if ( v49 == v50 )
                  goto LABEL_49;
              }
              v49 -= 4;
            }
            while ( v50 != v49 );
LABEL_49:
            operator delete((void *)v43, 0x3A0u);
          }
          else
          {
            v78 = *(unsigned int *)(v44 + 14976);
            *(_DWORD *)(v44 + 14976) = v78 + 1;
            *(_QWORD *)(v44 + 8 * v78 + 14848) = v43;
          }
        }
      }
    }
    while ( v42 != v41 );
    v9 = v119;
    v8 = v120;
    v41 = v140;
  }
  if ( v41 != v142 )
    free(v41);
  v51 = *((_QWORD *)v8 + 1);
  LODWORD(v157) = 16777472;
  ptr = off_2C66E48;
  v158[0] = a1;
  sub_BC7D30((__int64)&ptr, v51);
  if ( (*(_BYTE *)(a1[29] + 60) & 0x10) != 0 && (*(_BYTE *)(v9 + 29) & 1) != 0 )
  {
    v56 = sub_B8C3D0(v9, v51, v52, (__int64)v53, v54, v55);
    v57 = (_WORD *)*v56;
    v53 = (_WORD *)(*v56 + 8LL * *((unsigned int *)v56 + 2));
    if ( *v56 >= (unsigned __int64)v53 )
    {
      if ( v57 == v53 )
        goto LABEL_60;
      if ( *(_WORD *)(*(_QWORD *)v53 + 36LL) != 163 )
      {
        v99 = (_WORD **)(v53 + 4);
        do
        {
          v53 = v99;
          if ( v57 == (_WORD *)v99 )
            goto LABEL_60;
          v53 = *v99++;
        }
        while ( v53[18] != 163 );
      }
    }
    else
    {
      v58 = (_WORD *)*v56;
      while ( *(_WORD *)(*(_QWORD *)v58 + 36LL) != 163 )
      {
        v58 += 4;
        if ( v53 == v58 )
          goto LABEL_60;
      }
      if ( v53 == v58 )
        goto LABEL_60;
    }
    v100 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v123 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v100 + 16) != 13 || ((*(_WORD *)(v100 + 18) >> 3) & 0x1FF) != 0x1B3 )
    {
      sub_168B9F0((__int64)&ptr, a1 + 1, *(_DWORD *)(v9 + 24), 0xFF5u, 0);
      v130[0] = *(_QWORD *)(v9 + 48);
      v101 = sub_162B6D0((__int64)&ptr, v130);
      *(_QWORD *)&v136 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      sub_1587DB0(v101, (__int64 *)&v136);
      sub_15F7200(&ptr);
      return 1;
    }
  }
LABEL_60:
  if ( *(char *)(v9 + 28) >= 0 && v123 != *(_QWORD *)(a5 + 24) )
  {
    sub_A82820(a1[31], v9, v123, (__int64)v53, v54, v55);
    return v122;
  }
  return 0;
}
