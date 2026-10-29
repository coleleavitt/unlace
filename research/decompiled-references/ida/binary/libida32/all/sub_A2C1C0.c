void __fastcall sub_A2C1C0(unsigned int *a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 v10; // rcx
  int v11; // r14d
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r12
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rax
  unsigned __int64 v18; // rbp
  __int64 (__fastcall *v19)(__int64); // rax
  __int64 v20; // rcx
  int v21; // r12d
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rbp
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r12
  unsigned __int64 *v35; // r13
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 *n; // r14
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // r12
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  unsigned int v43; // r12d
  unsigned int i; // ebp
  __int64 v45; // rsi
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned int *v49; // rsi
  unsigned int v50; // r13d
  unsigned int v51; // ebp
  __int64 v52; // rsi
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rdx
  void *v56; // rdi
  unsigned int v57; // r14d
  bool v58; // r12
  void *v59; // rax
  unsigned int v60; // ebp
  __int64 v61; // rsi
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rdx
  unsigned int v65; // r13d
  unsigned int j; // r12d
  __int64 v67; // rsi
  int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // rdx
  unsigned int v71; // r12d
  unsigned int k; // ebp
  __int64 v73; // rsi
  int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rdx
  unsigned int v77; // eax
  __int64 v78; // r12
  __int64 v79; // r13
  __int64 v80; // rdi
  unsigned int v81; // edx
  __int64 v82; // rax
  __int64 v83; // rax
  unsigned int v84; // eax
  unsigned int v85; // r15d
  unsigned int v86; // r13d
  unsigned int v87; // r14d
  __int64 v88; // rdx
  __int64 v89; // rdi
  char v90; // al
  __int64 v91; // rax
  unsigned int *v92; // rsi
  unsigned int v93; // r13d
  unsigned int v94; // r15d
  __int64 v95; // rsi
  int v96; // eax
  __int64 v97; // rcx
  __int64 v98; // rdx
  unsigned int *v99; // rsi
  unsigned int v100; // r13d
  unsigned int v101; // ebp
  __int64 v102; // rsi
  int v103; // eax
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rax
  unsigned __int64 v107; // r12
  unsigned __int64 v108; // r12
  unsigned __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rax
  int v112; // r12d
  __int64 v113; // rax
  unsigned int v114; // r12d
  unsigned __int64 v115; // rcx
  __int64 v116; // rax
  unsigned __int64 *v117; // r13
  __int64 v118; // rax
  __int64 v119; // rdx
  unsigned __int64 *m; // r14
  unsigned __int64 v121; // r12
  unsigned __int64 v122; // r12
  unsigned __int64 v123; // rcx
  __int64 v124; // rax
  unsigned int v125; // eax
  __int64 v126; // r12
  __int64 v127; // r13
  __int64 v128; // rdi
  unsigned int v129; // r13d
  int v130; // r12d
  __int64 v131; // rdx
  __int64 v132; // r12
  unsigned int v133; // eax
  __int64 v134; // rcx
  unsigned int v135; // eax
  __int64 v136; // rdi
  __int64 v137; // rax
  __int64 v138; // r13
  __int64 v139; // rdi
  __int64 v140; // rax
  __int64 v141; // rax
  unsigned __int64 v142; // rdx
  __int64 v143; // [rsp+8h] [rbp-170h]
  int v144; // [rsp+8h] [rbp-170h]
  int v145; // [rsp+8h] [rbp-170h]
  int v146; // [rsp+8h] [rbp-170h]
  int v147; // [rsp+8h] [rbp-170h]
  int v148; // [rsp+8h] [rbp-170h]
  int v149; // [rsp+8h] [rbp-170h]
  unsigned int v150; // [rsp+8h] [rbp-170h]
  int v151; // [rsp+10h] [rbp-168h]
  __int64 v152; // [rsp+18h] [rbp-160h]
  void *v153; // [rsp+20h] [rbp-158h] BYREF
  __int64 v154; // [rsp+28h] [rbp-150h]
  _BYTE v155[128]; // [rsp+30h] [rbp-148h] BYREF
  void *ptr[2]; // [rsp+B0h] [rbp-C8h] BYREF
  _BYTE v157[184]; // [rsp+C0h] [rbp-B8h] BYREF

  v4 = *(unsigned int *)(a2 + 8);
  v5 = *a1;
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_22134E0(a2, a2 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v4) = v5;
  v6 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  v7 = *a1;
  *(_DWORD *)(a2 + 8) = v6;
  switch ( v7 )
  {
    case 0LL:
    case 1LL:
      return;
    case 2LL:
      v43 = a1[4];
      if ( v43 )
      {
        for ( i = 0; i < v43; i += 32 )
        {
          v45 = v43 - i;
          if ( (unsigned int)v45 >= 0x20 )
            v45 = 32;
          v46 = sub_21E2740(a1 + 2, v45, i);
          v47 = *(unsigned int *)(a2 + 8);
          if ( v47 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
          {
            v144 = v46;
            sub_22134E0(a2, a2 + 16, v47 + 1, 4);
            v47 = *(unsigned int *)(a2 + 8);
            v48 = *(_QWORD *)a2;
            v46 = v144;
          }
          else
          {
            v48 = *(_QWORD *)a2;
          }
          *(_DWORD *)(v48 + 4 * v47) = v46;
          ++*(_DWORD *)(a2 + 8);
        }
      }
      return;
    case 3LL:
      v49 = a1 + 2;
      if ( *((_QWORD *)a1 + 1) == sub_21D5390() )
        sub_21DD3B0(ptr, v49);
      else
        sub_21DB0C0(ptr, v49);
      v50 = (unsigned int)ptr[1];
      v51 = 0;
      if ( LODWORD(ptr[1]) )
      {
        do
        {
          v52 = v50 - v51;
          if ( (unsigned int)v52 >= 0x20 )
            v52 = 32;
          v53 = sub_21E2740(ptr, v52, v51);
          v54 = *(unsigned int *)(a2 + 8);
          if ( v54 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
          {
            v148 = v53;
            sub_22134E0(a2, a2 + 16, v54 + 1, 4);
            v54 = *(unsigned int *)(a2 + 8);
            v55 = *(_QWORD *)a2;
            v53 = v148;
          }
          else
          {
            v55 = *(_QWORD *)a2;
          }
          v51 += 32;
          *(_DWORD *)(v55 + 4 * v54) = v53;
          ++*(_DWORD *)(a2 + 8);
        }
        while ( v50 > v51 );
        goto LABEL_49;
      }
      return;
    case 4LL:
      v57 = a1[4];
      v58 = (*((_BYTE *)a1 + 27) & 0x20) == 0;
      LODWORD(ptr[1]) = v57;
      if ( v57 > 0x40 )
      {
        sub_21E17D0(ptr);
        v57 = (unsigned int)ptr[1];
        v59 = ptr[0];
      }
      else
      {
        v59 = *((void **)a1 + 1);
      }
      BYTE4(v154) = v58;
      v60 = 0;
      LODWORD(v154) = v57;
      v153 = v59;
      if ( v57 )
      {
        do
        {
          v61 = v57 - v60;
          if ( (unsigned int)v61 >= 0x20 )
            v61 = 32;
          v62 = sub_21E2740(&v153, v61, v60);
          v63 = *(unsigned int *)(a2 + 8);
          if ( v63 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
          {
            v146 = v62;
            sub_22134E0(a2, a2 + 16, v63 + 1, 4);
            v63 = *(unsigned int *)(a2 + 8);
            v64 = *(_QWORD *)a2;
            v62 = v146;
          }
          else
          {
            v64 = *(_QWORD *)a2;
          }
          v60 += 32;
          *(_DWORD *)(v64 + 4 * v63) = v62;
          ++*(_DWORD *)(a2 + 8);
        }
        while ( v60 < v57 );
        if ( (unsigned int)v154 > 0x40 )
        {
          v56 = v153;
          if ( v153 )
            goto LABEL_51;
        }
      }
      return;
    case 5LL:
      v65 = a1[4];
      for ( j = 0; v65 > j; ++*(_DWORD *)(a2 + 8) )
      {
        v67 = v65 - j;
        if ( (unsigned int)v67 >= 0x20 )
          v67 = 32;
        v68 = sub_21E2740(a1 + 2, v67, j);
        v69 = *(unsigned int *)(a2 + 8);
        if ( v69 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          v145 = v68;
          sub_22134E0(a2, a2 + 16, v69 + 1, 4);
          v69 = *(unsigned int *)(a2 + 8);
          v70 = *(_QWORD *)a2;
          v68 = v145;
        }
        else
        {
          v70 = *(_QWORD *)a2;
        }
        j += 32;
        *(_DWORD *)(v70 + 4 * v69) = v68;
      }
      v71 = a1[8];
      if ( v71 )
      {
        for ( k = 0; k < v71; k += 32 )
        {
          v73 = v71 - k;
          if ( (unsigned int)v73 >= 0x20 )
            v73 = 32;
          v74 = sub_21E2740(a1 + 6, v73, k);
          v75 = *(unsigned int *)(a2 + 8);
          if ( v75 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
          {
            v147 = v74;
            sub_22134E0(a2, a2 + 16, v75 + 1, 4);
            v75 = *(unsigned int *)(a2 + 8);
            v76 = *(_QWORD *)a2;
            v74 = v147;
          }
          else
          {
            v76 = *(_QWORD *)a2;
          }
          *(_DWORD *)(v76 + 4 * v75) = v74;
          ++*(_DWORD *)(a2 + 8);
        }
      }
      return;
    case 6LL:
      v92 = a1 + 2;
      v143 = sub_21D5390();
      if ( *((_QWORD *)a1 + 1) == v143 )
        sub_21DD3B0(ptr, v92);
      else
        sub_21DB0C0(ptr, v92);
      v93 = (unsigned int)ptr[1];
      v94 = 0;
      if ( LODWORD(ptr[1]) )
      {
        do
        {
          v95 = v93 - v94;
          if ( (unsigned int)v95 >= 0x20 )
            v95 = 32;
          v96 = sub_21E2740(ptr, v95, v94);
          v97 = *(unsigned int *)(a2 + 8);
          if ( v97 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
          {
            v151 = v96;
            sub_22134E0(a2, a2 + 16, v97 + 1, 4);
            v97 = *(unsigned int *)(a2 + 8);
            v98 = *(_QWORD *)a2;
            v96 = v151;
          }
          else
          {
            v98 = *(_QWORD *)a2;
          }
          v94 += 32;
          *(_DWORD *)(v98 + 4 * v97) = v96;
          ++*(_DWORD *)(a2 + 8);
        }
        while ( v93 > v94 );
        if ( LODWORD(ptr[1]) > 0x40 && ptr[0] )
          operator delete[](ptr[0]);
      }
      v99 = a1 + 8;
      if ( v143 == *((_QWORD *)a1 + 4) )
        sub_21DD3B0(ptr, v99);
      else
        sub_21DB0C0(ptr, v99);
      v100 = (unsigned int)ptr[1];
      v101 = 0;
      if ( LODWORD(ptr[1]) )
      {
        do
        {
          v102 = v100 - v101;
          if ( (unsigned int)v102 >= 0x20 )
            v102 = 32;
          v103 = sub_21E2740(ptr, v102, v101);
          v104 = *(unsigned int *)(a2 + 8);
          if ( v104 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
          {
            v149 = v103;
            sub_22134E0(a2, a2 + 16, v104 + 1, 4);
            v104 = *(unsigned int *)(a2 + 8);
            v105 = *(_QWORD *)a2;
            v103 = v149;
          }
          else
          {
            v105 = *(_QWORD *)a2;
          }
          v101 += 32;
          *(_DWORD *)(v105 + 4 * v104) = v103;
          ++*(_DWORD *)(a2 + 8);
        }
        while ( v100 > v101 );
LABEL_49:
        if ( LODWORD(ptr[1]) > 0x40 )
        {
          v56 = ptr[0];
          if ( ptr[0] )
LABEL_51:
            operator delete[](v56);
        }
      }
      return;
    case 7LL:
      *(__m128i *)ptr = _mm_loadu_si128((const __m128i *)(a1 + 2));
      sub_A2B7F0((unsigned __int64 *)ptr, a2);
      v106 = *(unsigned int *)(a2 + 8);
      v107 = *((_QWORD *)a1 + 3);
      if ( v106 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
      {
        sub_22134E0(a2, a2 + 16, v106 + 1, 4);
        v106 = *(unsigned int *)(a2 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a2 + 4 * v106) = v107;
      v108 = HIDWORD(v107);
      v109 = *(unsigned int *)(a2 + 12);
      v110 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      *(_DWORD *)(a2 + 8) = v110;
      if ( v110 + 1 > v109 )
      {
        sub_22134E0(a2, a2 + 16, v110 + 1, 4);
        v110 = *(unsigned int *)(a2 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a2 + 4 * v110) = v108;
      v111 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      *(_DWORD *)(a2 + 8) = v111;
      v112 = a1[9] & 3;
      if ( a1[8] != -1 )
        v112 |= 4u;
      if ( v111 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
      {
        sub_22134E0(a2, a2 + 16, v111 + 1, 4);
        v111 = *(unsigned int *)(a2 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a2 + 4 * v111) = v112;
      v113 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      *(_DWORD *)(a2 + 8) = v113;
      v114 = a1[8];
      if ( v114 != -1 )
      {
        if ( v113 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          sub_22134E0(a2, a2 + 16, v113 + 1, 4);
          v113 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v113) = v114;
        v115 = *(unsigned int *)(a2 + 12);
        v116 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v116;
        if ( v116 + 1 > v115 )
        {
          sub_22134E0(a2, a2 + 16, v116 + 1, 4);
          v116 = *(unsigned int *)(a2 + 8);
        }
        v117 = (unsigned __int64 *)(a1 + 10);
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v116) = 0;
        v118 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v118;
        v119 = a1[8];
        if ( (unsigned int)(v119 - 3) <= 0xFFFFFFFB )
          v117 = *((unsigned __int64 **)a1 + 5);
        for ( m = &v117[v119]; m != v117; *(_DWORD *)(a2 + 8) = v118 )
        {
          v121 = *v117;
          if ( v118 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
          {
            sub_22134E0(a2, a2 + 16, v118 + 1, 4);
            v118 = *(unsigned int *)(a2 + 8);
          }
          *(_DWORD *)(*(_QWORD *)a2 + 4 * v118) = v121;
          v122 = HIDWORD(v121);
          v123 = *(unsigned int *)(a2 + 12);
          v124 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
          *(_DWORD *)(a2 + 8) = v124;
          if ( v124 + 1 > v123 )
          {
            sub_22134E0(a2, a2 + 16, v124 + 1, 4);
            *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v122;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)a2 + 4 * v124) = v122;
          }
          ++v117;
          v118 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        }
      }
      return;
    case 8LL:
      v77 = a1[4];
      if ( v77 )
      {
        v78 = 0;
        v79 = 56 * (v77 - 1 + 1LL);
        do
        {
          v80 = v78 + *((_QWORD *)a1 + 1);
          v78 += 56;
          sub_A2C1C0(v80, a2);
        }
        while ( v79 != v78 );
      }
      return;
    case 9LL:
      v81 = a1[5];
      if ( !v81 )
        return;
      v153 = v155;
      v154 = 0x2000000000LL;
      v82 = a1[4];
      if ( (_DWORD)v82 == v81 )
        v83 = 7LL * (unsigned int)(v82 - 1);
      else
        v83 = 7 * v82;
      sub_A2C1C0(*((_QWORD *)a1 + 1) + 8 * v83, &v153);
      sub_21FF110(a2, &v153);
      v84 = a1[5];
      v85 = a1[4];
      v86 = v84 - v85;
      if ( !v85 )
      {
LABEL_92:
        v91 = *(unsigned int *)(a2 + 8);
        if ( v91 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          sub_22134E0(a2, a2 + 16, v91 + 1, 4);
          v91 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v91) = v86;
        ++*(_DWORD *)(a2 + 8);
        goto LABEL_95;
      }
      v87 = v85 - 1;
      v88 = 56LL * (v85 - 1);
      break;
    case 10LL:
      v125 = a1[4];
      if ( v125 )
      {
        v126 = 0;
        v127 = 56 * (v125 - 1 + 1LL);
        do
        {
          v128 = v126 + *((_QWORD *)a1 + 1);
          v126 += 56;
          sub_A2C1C0(v128, a2);
        }
        while ( v127 != v126 );
      }
      v129 = a1[5];
      v130 = 0;
      if ( v129 )
      {
        do
        {
          v131 = a1[4] + v130++;
          sub_A2C1C0(*((_QWORD *)a1 + 1) + 56 * v131, a2);
        }
        while ( v130 != v129 );
      }
      return;
    case 11LL:
      v132 = *((_QWORD *)a1 + 1);
      if ( v132 )
      {
        if ( *(char *)(v132 + 29) < 0 )
          v132 = sub_B4E9E0(*((_QWORD *)a1 + 1));
        v133 = *(_DWORD *)(v132 + 68);
        if ( (v133 & 0xFFFFFFF0) == 0 )
        {
          sub_B5AD70(v132);
          v133 = *(_DWORD *)(v132 + 68);
        }
        v134 = *(unsigned int *)(a2 + 8);
        v135 = v133 >> 4;
        if ( v134 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          v150 = v135;
          sub_22134E0(a2, a2 + 16, v134 + 1, 4);
          v134 = *(unsigned int *)(a2 + 8);
          v135 = v150;
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v134) = v135;
        v136 = *((_QWORD *)a1 + 2);
        ++*(_DWORD *)(a2 + 8);
        sub_A2C1C0(v136, a2);
      }
      else
      {
        v142 = v6 + 1;
        if ( v142 > *(unsigned int *)(a2 + 12) )
          sub_22134E0(a2, a2 + 16, v142, 4);
        *(_DWORD *)(*(_QWORD *)a2 + 4LL * (unsigned int)(*(_DWORD *)(a2 + 8))++) = 0;
      }
      return;
    case 12LL:
      v26 = (unsigned int)v6;
      v27 = (unsigned int)v6 + 1LL;
      v28 = *((_QWORD *)a1 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v27 > *(unsigned int *)(a2 + 12) )
      {
        sub_22134E0(a2, a2 + 16, v27, 4);
        v26 = *(unsigned int *)(a2 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a2 + 4 * v26) = v28;
      v29 = HIDWORD(v28);
      v30 = *(unsigned int *)(a2 + 12);
      v31 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      *(_DWORD *)(a2 + 8) = v31;
      if ( v31 + 1 > v30 )
      {
        sub_22134E0(a2, a2 + 16, v31 + 1, 4);
        v31 = *(unsigned int *)(a2 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a2 + 4 * v31) = v29;
      v32 = *(unsigned int *)(a2 + 12);
      v33 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      *(_DWORD *)(a2 + 8) = v33;
      v34 = (*((__int64 *)a1 + 1) >> 2) & 1;
      if ( v33 + 1 > v32 )
      {
        sub_22134E0(a2, a2 + 16, v33 + 1, 4);
        v33 = *(unsigned int *)(a2 + 8);
      }
      v35 = (unsigned __int64 *)(a1 + 6);
      *(_DWORD *)(*(_QWORD *)a2 + 4 * v33) = v34;
      v36 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      *(_DWORD *)(a2 + 8) = v36;
      v37 = a1[4];
      if ( (unsigned int)v37 > 4 )
        v35 = *((unsigned __int64 **)a1 + 3);
      for ( n = &v35[v37]; n != v35; *(_DWORD *)(a2 + 8) = v36 )
      {
        v39 = *v35;
        if ( v36 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          sub_22134E0(a2, a2 + 16, v36 + 1, 4);
          v36 = *(unsigned int *)(a2 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v36) = v39;
        v40 = HIDWORD(v39);
        v41 = *(unsigned int *)(a2 + 12);
        v42 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = v42;
        if ( v42 + 1 > v41 )
        {
          sub_22134E0(a2, a2 + 16, v42 + 1, 4);
          *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v40;
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)a2 + 4 * v42) = v40;
        }
        ++v35;
        v36 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      }
      return;
    case 13LL:
      v8 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL);
      v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL);
      if ( v9 != sub_A2B2C0 )
      {
        v141 = v9(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL));
        LODWORD(v6) = *(_DWORD *)(a2 + 8);
        v8 = v141;
      }
      v10 = (unsigned int)v6;
      v11 = v8;
      v12 = (unsigned int)v6 + 1LL;
      if ( v12 > *(unsigned int *)(a2 + 12) )
      {
        sub_22134E0(a2, a2 + 16, v12, 4);
        v10 = *(unsigned int *)(a2 + 8);
      }
      v13 = HIDWORD(v8);
      *(_DWORD *)(*(_QWORD *)a2 + 4 * v10) = v11;
      v14 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      v15 = *(unsigned int *)(a2 + 12);
      *(_DWORD *)(a2 + 8) = v14;
      if ( v14 + 1 > v15 )
      {
        sub_22134E0(a2, a2 + 16, v14 + 1, 4);
        v14 = *(unsigned int *)(a2 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a2 + 4 * v14) = v13;
      v16 = *(_DWORD *)(a2 + 8) + 1;
      v17 = *((_QWORD *)a1 + 2);
      *(_DWORD *)(a2 + 8) = v16;
      v18 = *(_QWORD *)(v17 + 24);
      v19 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL);
      if ( v19 != sub_A2B2C0 )
      {
        v140 = v19(v18);
        v16 = *(_DWORD *)(a2 + 8);
        v18 = v140;
      }
      v20 = v16;
      v21 = v18;
      v22 = v16 + 1LL;
      if ( v22 > *(unsigned int *)(a2 + 12) )
      {
        sub_22134E0(a2, a2 + 16, v22, 4);
        v20 = *(unsigned int *)(a2 + 8);
      }
      v23 = HIDWORD(v18);
      *(_DWORD *)(*(_QWORD *)a2 + 4 * v20) = v21;
      v24 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      v25 = *(unsigned int *)(a2 + 12);
      *(_DWORD *)(a2 + 8) = v24;
      if ( v24 + 1 > v25 )
      {
        sub_22134E0(a2, a2 + 16, v24 + 1, 4);
        v24 = *(unsigned int *)(a2 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a2 + 4 * v24) = v23;
      ++*(_DWORD *)(a2 + 8);
      return;
  }
  while ( 1 )
  {
    if ( v85 == v84 )
      goto LABEL_91;
    v152 = v88;
    v89 = *((_QWORD *)a1 + 1) + v88;
    ptr[0] = v157;
    ptr[1] = (void *)0x2000000000LL;
    sub_A2C1C0(v89, ptr);
    v90 = sub_21FF190(ptr, &v153);
    v88 = v152;
    if ( !v90 )
      break;
    if ( ptr[0] != v157 )
    {
      free(ptr[0]);
      v88 = v152;
    }
LABEL_91:
    ++v86;
    v88 -= 56;
    if ( !v87 )
      goto LABEL_92;
    v84 = a1[5];
    v85 = v87--;
  }
  v137 = *(unsigned int *)(a2 + 8);
  if ( v137 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_22134E0(a2, a2 + 16, v137 + 1, 4);
    v137 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v137) = v86;
  ++*(_DWORD *)(a2 + 8);
  sub_21FF110(a2, ptr);
  if ( ptr[0] != v157 )
    free(ptr[0]);
  if ( v87 )
  {
    v138 = 56LL * (v85 - 2);
    do
    {
      v139 = v138 + *((_QWORD *)a1 + 1);
      v138 -= 56;
      sub_A2C1C0(v139, a2);
    }
    while ( v138 != -56 );
  }
LABEL_95:
  if ( v153 != v155 )
    free(v153);
}

