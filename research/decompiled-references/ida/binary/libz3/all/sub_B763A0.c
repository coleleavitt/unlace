__int64 __fastcall sub_B763A0(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 v4; // rdx
  unsigned int *v5; // rbx
  __int64 v6; // rdx
  int *v7; // rdx
  unsigned int *v8; // r13
  __int64 v9; // rax
  void *v10; // rdi
  unsigned int *v11; // rdx
  unsigned int v12; // r14d
  unsigned int *v13; // rbp
  __int64 v14; // rdx
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  void *v17; // r15
  void *v18; // r15
  int v19; // eax
  void *v20; // rdi
  void *v21; // r15
  void *v22; // r15
  void *v23; // r14
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // r14
  __int64 v27; // rax
  _QWORD *v28; // rbx
  void *v29; // rbp
  int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // ebx
  __int64 v33; // rbp
  __int64 v34; // r14
  unsigned int v35; // ebx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  int v39; // eax
  unsigned int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rdx
  _QWORD *v43; // rbx
  _QWORD *v44; // r14
  void *v45; // rbp
  _QWORD *v46; // rsi
  int v47; // edx
  __int64 v48; // rdx
  char v49; // cl
  __int64 v50; // rdx
  unsigned int v51; // ebp
  size_t v52; // rdi
  unsigned int *v53; // r15
  _DWORD *v54; // r8
  __int64 v55; // rax
  _DWORD *v56; // rdx
  _QWORD *v57; // rsi
  _QWORD *j; // rax
  int v59; // ecx
  char v60; // di
  __int64 v61; // rcx
  char v62; // di
  __int64 v63; // rcx
  __int64 v64; // rax
  _QWORD *v65; // rbx
  _QWORD *v66; // rbp
  void *v67; // r13
  _QWORD *v68; // rsi
  __int64 v69; // rbx
  _QWORD *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  unsigned int v74; // edx
  __int64 v75; // rbp
  _DWORD *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // r14
  _QWORD *v80; // rdx
  __int64 v81; // rax
  unsigned int v82; // r15d
  unsigned int v83; // ecx
  unsigned int *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  _QWORD *v87; // rbx
  _QWORD *v88; // r13
  void *v89; // rbp
  _QWORD *v90; // rsi
  _QWORD *v92; // rax
  char **v93; // rbp
  int v94; // [rsp+10h] [rbp-188h]
  unsigned int v95; // [rsp+10h] [rbp-188h]
  unsigned int v96; // [rsp+10h] [rbp-188h]
  _QWORD *v97; // [rsp+10h] [rbp-188h]
  __int64 v99; // [rsp+20h] [rbp-178h]
  unsigned int *v100; // [rsp+20h] [rbp-178h]
  unsigned int v101; // [rsp+2Ch] [rbp-16Ch]
  unsigned int *i; // [rsp+38h] [rbp-160h]
  _QWORD *v103; // [rsp+40h] [rbp-158h]
  int *v104; // [rsp+50h] [rbp-148h]
  unsigned int *v105; // [rsp+58h] [rbp-140h]
  void *v106; // [rsp+68h] [rbp-130h]
  unsigned int *v107; // [rsp+68h] [rbp-130h]
  __int64 v108; // [rsp+70h] [rbp-128h]
  unsigned int v109; // [rsp+78h] [rbp-120h]
  unsigned int v110; // [rsp+7Ch] [rbp-11Ch]
  unsigned int v112; // [rsp+ACh] [rbp-ECh] BYREF
  unsigned int *v113; // [rsp+B0h] [rbp-E8h] BYREF
  unsigned int *v114; // [rsp+B8h] [rbp-E0h] BYREF
  __int64 v115; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v116; // [rsp+C8h] [rbp-D0h]
  __int64 v117; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v118; // [rsp+D8h] [rbp-C0h]
  _QWORD v119[2]; // [rsp+E0h] [rbp-B8h] BYREF
  _QWORD v120[2]; // [rsp+F0h] [rbp-A8h] BYREF
  int v121; // [rsp+100h] [rbp-98h] BYREF
  char v122; // [rsp+104h] [rbp-94h]
  __int64 v123; // [rsp+108h] [rbp-90h]
  int v124; // [rsp+110h] [rbp-88h] BYREF
  char v125; // [rsp+114h] [rbp-84h]
  __int64 v126; // [rsp+118h] [rbp-80h]
  int v127; // [rsp+120h] [rbp-78h] BYREF
  char v128; // [rsp+124h] [rbp-74h]
  __int64 v129; // [rsp+128h] [rbp-70h]
  int v130; // [rsp+130h] [rbp-68h] BYREF
  char v131; // [rsp+134h] [rbp-64h]
  __int64 v132; // [rsp+138h] [rbp-60h]
  __int64 v133; // [rsp+140h] [rbp-58h] BYREF
  __int64 v134; // [rsp+148h] [rbp-50h]
  __int64 v135; // [rsp+150h] [rbp-48h] BYREF
  __int64 v136; // [rsp+158h] [rbp-40h]

  v110 = *(_DWORD *)(a1 + 132);
  v4 = *(_QWORD *)(a1 + 40);
  ++dword_1C7ED84;
  v115 = 0;
  v5 = (unsigned int *)(v4 + 56LL * v110);
  v116 = 0;
  v117 = 1;
  v118 = 0;
  sub_182CBA0(qword_1C7F2C0, &v117);
  BYTE4(v117) &= ~1u;
  v6 = *v5;
  LODWORD(v117) = 1;
  v7 = (int *)(*(_QWORD *)(a1 + 72) + 32 * v6);
  v119[0] = 0;
  v119[1] = 0;
  v120[0] = 1;
  v120[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v119, v7);
  v105 = nullptr;
  v8 = nullptr;
  v103 = nullptr;
  v101 = v110;
  do
  {
    if ( !v105 || (v9 = *(v105 - 1), (_DWORD)v9 == *(v105 - 2)) )
    {
      v113 = v105;
      sub_313C10(&v113);
      v105 = v113;
      v9 = *(v113 - 1);
    }
    v10 = qword_1C7F2C0;
    v105[v9] = v101;
    ++*(v105 - 1);
    v11 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 56LL * v101);
    v12 = *v11;
    v109 = *v11;
    sub_2FC4A0((__int64)v10, (__int64)&v115, (__int64)(v11 + 2), (__int64)&v115);
    v108 = v12;
    v13 = *(unsigned int **)(*(_QWORD *)(a1 + 48) + 8LL * v12);
    if ( v13 )
    {
      for ( i = &v13[*(v13 - 1)]; i != v13; ++v13 )
      {
        v112 = *v13;
        v14 = *(_QWORD *)(a1 + 40) + 56LL * v112;
        if ( v112 != v101 && *(_BYTE *)(v14 + 52) && v8 )
        {
          v15 = *(v8 - 1);
          v16 = 0;
          v94 = *(_DWORD *)(v14 + 4);
          v104 = (int *)(v14 + 8);
          while ( v16 < v15 )
          {
            if ( v94 == v8[v16] )
            {
              v99 = (__int64)&v103[4 * v16];
              sub_3EBB80((__int64)&v127, (__int64)v104, (__int64)&v115);
              v133 = 0;
              v17 = qword_1C7F2C0;
              v134 = 0;
              v135 = 1;
              v136 = 0;
              if ( (v128 & 1) != 0 )
                sub_182C690(qword_1C7F2C0, &v133, &v127);
              else
                LODWORD(v133) = v127;
              if ( (v131 & 1) != 0 )
              {
                sub_182C690(v17, &v135, &v130);
              }
              else
              {
                BYTE4(v135) &= ~1u;
                LODWORD(v135) = v130;
              }
              v18 = qword_1C7F2C0;
              v19 = *(_DWORD *)v99;
              if ( *(_DWORD *)v99 )
              {
                if ( (_DWORD)v133 )
                {
                  if ( (v135 & 0x100000000LL) != 0
                    || (_DWORD)v135 != 1
                    || (*(_BYTE *)(v99 + 20) & 1) != 0
                    || *(_DWORD *)(v99 + 16) != 1 )
                  {
                    sub_1851D20(qword_1C7F2C0, &v133, v99, &v133);
                  }
                  else
                  {
                    sub_1831A80(qword_1C7F2C0, &v133, v99, &v133);
                    sub_182CBA0(v18, &v135);
                    BYTE4(v135) &= ~1u;
                    LODWORD(v135) = 1;
                  }
                }
                else
                {
                  if ( (*(_BYTE *)(v99 + 4) & 1) != 0 )
                  {
                    sub_182C690(qword_1C7F2C0, &v133, v99);
                  }
                  else
                  {
                    BYTE4(v133) &= ~1u;
                    LODWORD(v133) = v19;
                  }
                  if ( (*(_BYTE *)(v99 + 20) & 1) != 0 )
                  {
                    sub_182C690(v18, &v135, v99 + 16);
                  }
                  else
                  {
                    v39 = *(_DWORD *)(v99 + 16);
                    BYTE4(v135) &= ~1u;
                    LODWORD(v135) = v39;
                  }
                }
              }
              else
              {
                if ( (v133 & 0x100000000LL) != 0 )
                  sub_182C690(qword_1C7F2C0, &v133, &v133);
                else
                  BYTE4(v133) &= ~1u;
                if ( (v135 & 0x100000000LL) != 0 )
                  sub_182C690(v18, &v135, &v135);
                else
                  BYTE4(v135) &= ~1u;
              }
              v122 &= 0xFCu;
              v20 = qword_1C7F2C0;
              v125 &= 0xFCu;
              v121 = 0;
              v123 = 0;
              v124 = 1;
              v126 = 0;
              if ( (v133 & 0x100000000LL) != 0 )
                sub_182C690(qword_1C7F2C0, &v121, &v133);
              else
                v121 = v133;
              if ( (v135 & 0x100000000LL) != 0 )
              {
                sub_182C690(v20, &v124, &v135);
              }
              else
              {
                v125 &= ~1u;
                v124 = v135;
              }
              v21 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v133);
              sub_182CBA0(v21, &v135);
              v22 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v127);
              sub_182CBA0(v22, &v130);
              if ( v121 >= 0 )
              {
                v133 = 0;
                v24 = qword_1C7F2C0;
                v134 = 0;
                v135 = 1;
                v136 = 0;
                if ( (v119[0] & 0x100000000LL) != 0 )
                  sub_182C690(qword_1C7F2C0, &v133, v119);
                else
                  LODWORD(v133) = v119[0];
                if ( (v120[0] & 0x100000000LL) != 0 )
                {
                  sub_182C690(v24, &v135, v120);
                }
                else
                {
                  BYTE4(v135) &= ~1u;
                  LODWORD(v135) = v120[0];
                }
                sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v133, (__int64)&v121, (__int64)&v133);
                v128 &= 0xFCu;
                v25 = qword_1C7F2C0;
                v131 &= 0xFCu;
                v127 = 0;
                v129 = 0;
                v130 = 1;
                v132 = 0;
                if ( (v133 & 0x100000000LL) != 0 )
                  sub_182C690(qword_1C7F2C0, &v127, &v133);
                else
                  v127 = v133;
                if ( (v135 & 0x100000000LL) != 0 )
                {
                  sub_182C690(v25, &v130, &v135);
                }
                else
                {
                  v131 &= ~1u;
                  v130 = v135;
                }
                v106 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, &v133);
                sub_182CBA0(v106, &v135);
                v26 = qword_1C7F2C0;
                if ( v127 < 0 )
                {
                  sub_182CBA0(qword_1C7F2C0, &v127);
                  sub_182CBA0(v26, &v130);
                  sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v119, (__int64)&v121, (__int64)v119);
                  v40 = v16 + 1;
                  *(v8 - 1) = v16 + 1;
                  if ( v103 )
                  {
                    v41 = 32LL * v40;
                    v42 = 32LL * *((unsigned int *)v103 - 1);
                    v43 = &v103[(unsigned __int64)v41 / 8];
                    v44 = &v103[(unsigned __int64)v42 / 8];
                    if ( v41 != v42 )
                    {
                      v95 = v40;
                      v107 = v13;
                      do
                      {
                        v45 = qword_1C7F2C0;
                        sub_182CBA0(qword_1C7F2C0, v43);
                        v46 = v43 + 2;
                        v43 += 4;
                        sub_182CBA0(v45, v46);
                      }
                      while ( v44 != v43 );
                      v40 = v95;
                      v13 = v107;
                    }
                    *((_DWORD *)v103 - 1) = v40;
                  }
                  if ( v105 )
                    *(v105 - 1) = v40;
                  v113 = v105;
                  sub_B76360(&v113, &v112);
                  v105 = v113;
                  sub_27B340((__int64)&v133, v99, v104);
                  v47 = v133;
                  LODWORD(v133) = v115;
                  LODWORD(v115) = v47;
                  v48 = v134;
                  v134 = v116;
                  v116 = v48;
                  v49 = BYTE4(v133) & 1;
                  LOBYTE(v48) = BYTE4(v115) & 0xFC | BYTE4(v133) & 2;
                  BYTE4(v133) = BYTE4(v115) & 1 | BYTE4(v133) & 0xFC | BYTE4(v115) & 2;
                  BYTE4(v115) = v49 | v48;
                  LODWORD(v48) = v135;
                  LODWORD(v135) = v117;
                  LODWORD(v117) = v48;
                  v50 = v136;
                  v136 = v118;
                  v118 = v50;
                  LOBYTE(v50) = BYTE4(v135) & 1 | BYTE4(v117) & 0xFC | BYTE4(v135) & 2;
                  BYTE4(v135) = BYTE4(v117) & 1 | BYTE4(v135) & 0xFC | BYTE4(v117) & 2;
                  BYTE4(v117) = v50;
                  sub_25A130((char *)&v133);
                  sub_25A130((char *)&v121);
                  break;
                }
                sub_182CBA0(qword_1C7F2C0, &v127);
                sub_182CBA0(v26, &v130);
              }
              v23 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v121);
              sub_182CBA0(v23, &v124);
              v15 = *(v8 - 1);
            }
            ++v16;
          }
        }
      }
    }
    if ( v103 )
    {
      v27 = *((unsigned int *)v103 - 1);
      if ( (_DWORD)v27 == *((_DWORD *)v103 - 2) )
      {
        v51 = (unsigned int)(3 * v27 + 1) >> 1;
        v52 = 32 * v51 + 8;
        if ( 32 * (int)v27 + 8 >= (unsigned int)v52 || (unsigned int)v27 >= v51 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_B75C60(&v133, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v133);
          sub_233E40((__int64)&v133);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v53 = (unsigned int *)sub_186B270(v52);
        v54 = v53 + 2;
        v55 = *((unsigned int *)v103 - 1);
        v56 = v53 + 2;
        v53[1] = v55;
        v57 = &v103[4 * v55];
        for ( j = v103; j != v57; *((_QWORD *)v56 - 1) = v63 )
        {
          v59 = *(_DWORD *)j;
          v60 = *((_BYTE *)j + 4);
          j += 4;
          v56 += 8;
          *(v56 - 8) = v59;
          *((_BYTE *)v56 - 28) = v60 & 3 | *(_BYTE *)(v56 - 7) & 0xFC;
          v61 = *(j - 3);
          *(j - 3) = 0;
          *((_QWORD *)v56 - 3) = v61;
          v62 = *((_BYTE *)j - 12);
          *(v56 - 4) = *((_DWORD *)j - 4);
          *((_BYTE *)v56 - 12) = v62 & 3 | *(_BYTE *)(v56 - 3) & 0xFC;
          v63 = *(j - 1);
          *(j - 1) = 0;
        }
        v64 = *((unsigned int *)v103 - 1);
        if ( (_DWORD)v64 )
        {
          v100 = v8;
          v96 = v51;
          v65 = &v103[4 * v64];
          v66 = v103;
          do
          {
            v67 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v66);
            v68 = v66 + 2;
            v66 += 4;
            sub_182CBA0(v67, v68);
          }
          while ( v66 != v65 );
          v51 = v96;
          v8 = v100;
          v54 = v53 + 2;
        }
        v97 = v54;
        sub_186B220(v103 - 1);
        v69 = v53[1];
        *v53 = v51;
        v103 = v97;
        v28 = &v97[4 * v69];
      }
      else
      {
        v28 = &v103[4 * v27];
      }
    }
    else
    {
      v70 = (_QWORD *)sub_186B270(0x48u);
      v28 = v70 + 1;
      *v70 = 2;
      v103 = v70 + 1;
    }
    *v28 = 0;
    v29 = qword_1C7F2C0;
    v28[1] = 0;
    v28[2] = 1;
    v28[3] = 0;
    if ( (v115 & 0x100000000LL) != 0 )
      sub_182C690(v29, v28, &v115);
    else
      *(_DWORD *)v28 = v115;
    if ( (v117 & 0x100000000LL) != 0 )
    {
      sub_182C690(v29, v28 + 2, &v117);
    }
    else
    {
      v30 = v117;
      *((_BYTE *)v28 + 20) &= ~1u;
      *((_DWORD *)v28 + 4) = v30;
    }
    ++*((_DWORD *)v103 - 1);
    if ( !v8 || (v31 = *(v8 - 1), (_DWORD)v31 == *(v8 - 2)) )
    {
      v114 = v8;
      sub_313C10(&v114);
      v8 = v114;
      v31 = *(v114 - 1);
    }
    v8[v31] = v109;
    ++*(v8 - 1);
    v101 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 4 * v108);
  }
  while ( v110 != v101 );
  if ( !v105 )
  {
    v133 = 0;
    v134 = 0;
    v135 = 1;
    v136 = 0;
    goto LABEL_128;
  }
  v32 = *(v105 - 1);
  v133 = 0;
  v134 = 0;
  v135 = 1;
  v136 = 0;
  if ( !v32 )
    goto LABEL_128;
  v33 = v32;
  v34 = 0;
  v35 = v32 - 1;
  do
  {
    v36 = *(_QWORD *)(a1 + 40);
    v37 = v36 + 56LL * v105[v34];
    v38 = (unsigned int)(v34 - 1);
    if ( !v34 )
      v38 = v35;
    if ( *(_DWORD *)(v37 + 4) != *(_DWORD *)(v36 + 56LL * v105[v38]) )
      goto LABEL_128;
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v133, v37 + 8, (__int64)&v133);
    ++v34;
  }
  while ( v34 != v33 );
  if ( (int)v133 >= 0 )
  {
LABEL_128:
    sub_25A130((char *)&v133);
    v93 = (char **)__cxa_allocate_exception(0x28u);
    sub_B75C60(&v133, "edges are not inconsistent");
    *v93 = (char *)off_1C63128;
    sub_2333C0(v93 + 1, &v133);
    sub_233E40((__int64)&v133);
    __cxa_throw(v93, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  sub_25A130((char *)&v133);
  if ( *(v105 - 1) )
  {
    v71 = *(_QWORD *)(a1 + 184);
    v72 = 0;
    do
    {
      v73 = v105[v72++];
      ++*(_DWORD *)(v71 + 4 * v73);
      v74 = *(v105 - 1);
    }
    while ( (unsigned int)v72 < v74 );
    if ( v74 )
    {
      v75 = 0;
      do
      {
        v79 = *(_QWORD *)(a1 + 40) + 56LL * v105[v75];
        if ( *(_DWORD *)(v79 + 44) != -2 )
        {
          v80 = *(_QWORD **)a2;
          if ( *(_QWORD *)a2 )
          {
            v81 = *((unsigned int *)v80 - 1);
            if ( (_DWORD)v81 == *((_DWORD *)v80 - 2) )
            {
              v82 = (unsigned int)(3 * v81 + 1) >> 1;
              v83 = 4 * v82 + 8;
              if ( 4 * (int)v81 + 8 >= v83 || (unsigned int)v81 >= v82 )
              {
                v2 = (char **)__cxa_allocate_exception(0x28u);
                sub_B75C60(&v133, "Overflow encountered when expanding vector");
                *v2 = (char *)off_1C63128;
                sub_2333C0(v2 + 1, &v133);
                sub_233E40((__int64)&v133);
                __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v84 = (unsigned int *)sub_186B300(v80 - 1, v83);
              v80 = v84 + 2;
              *v84 = v82;
              v85 = v84[1];
              *(_QWORD *)a2 = v80;
              v76 = (_DWORD *)v80 + v85;
            }
            else
            {
              v76 = (_DWORD *)v80 + v81;
            }
          }
          else
          {
            v92 = (_QWORD *)sub_186B270(0x10u);
            *v92 = 2;
            v80 = v92 + 1;
            *(_QWORD *)a2 = v92 + 1;
            v76 = v92 + 1;
          }
          *v76 = *(_DWORD *)(v79 + 44);
          ++*((_DWORD *)v80 - 1);
          v77 = *(_QWORD *)(a2 + 8);
          if ( !v77 || (v78 = *(unsigned int *)(v77 - 4), (_DWORD)v78 == *(_DWORD *)(v77 - 8)) )
          {
            sub_2FD3F0((unsigned int **)(a2 + 8));
            v77 = *(_QWORD *)(a2 + 8);
            v78 = *(unsigned int *)(v77 - 4);
          }
          *(_DWORD *)(v77 + 4 * v78) = *(_DWORD *)(v79 + 48);
          ++*(_DWORD *)(v77 - 4);
          v74 = *(v105 - 1);
        }
        ++v75;
      }
      while ( (unsigned int)v75 < v74 );
    }
  }
  sub_25A130((char *)v119);
  sub_25A130((char *)&v115);
  sub_186B220(v8 - 2);
  sub_186B220(v105 - 2);
  v86 = *((unsigned int *)v103 - 1);
  if ( (_DWORD)v86 )
  {
    v87 = v103;
    v88 = &v103[4 * v86];
    do
    {
      v89 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v87);
      v90 = v87 + 2;
      v87 += 4;
      sub_182CBA0(v89, v90);
    }
    while ( v87 != v88 );
  }
  return sub_186B220(v103 - 1);
}

