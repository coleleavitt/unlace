unsigned int *__fastcall sub_542440(__int64 a1, const void *a2)
{
  _QWORD *v2; // rax
  unsigned int *result; // rax
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int i; // eax
  unsigned int v8; // ebp
  size_t v9; // rdi
  unsigned int *v10; // r12
  _DWORD *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  _DWORD *v14; // rdx
  __int64 v15; // rdi
  int v16; // ecx
  char v17; // r8
  __int64 v18; // rcx
  char v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r13
  __int64 v22; // r13
  __int64 v23; // rbx
  void *v24; // rbp
  __int64 v25; // rsi
  __int64 v26; // rax
  void *v27; // r12
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // rdx
  char v31; // di
  char v32; // cl
  char v33; // si
  char v34; // di
  __int64 v35; // rdx
  void *v36; // r12
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // rdx
  char v40; // di
  char v41; // cl
  char v42; // si
  char v43; // di
  __int64 v44; // rdx
  unsigned __int64 v45; // rbp
  __int64 v46; // rax
  _QWORD *v47; // r12
  unsigned int v48; // ebp
  _QWORD *v49; // rax
  __m128i v50; // xmm3
  _QWORD *v51; // rbp
  __int64 v52; // r13
  __int64 v53; // r12
  int v54; // eax
  void *v55; // r14
  void *v56; // rdi
  _QWORD *v57; // rbx
  __int64 v58; // rax
  _QWORD *v59; // rax
  void *v60; // r13
  __int64 v61; // rdx
  __int64 v62; // rdx
  _QWORD *v63; // rdx
  unsigned int v64; // eax
  __int64 v65; // rcx
  int v66; // eax
  _BYTE *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // r12
  __int64 v70; // rbp
  void *v71; // rbx
  __int64 v72; // rsi
  unsigned int v73; // ebx
  unsigned int v74; // edx
  unsigned int *v75; // r14
  unsigned __int64 v76; // r13
  __int64 v77; // rdi
  __int64 v78; // rdx
  __int64 *v79; // r8
  __int64 *v80; // rax
  __int64 v81; // rax
  unsigned __int64 v82; // rcx
  __m128i v83; // xmm0
  unsigned __int64 v84; // rax
  __int64 v85; // rcx
  __int64 *v86; // rbp
  __int64 *v87; // r13
  __int64 v88; // r14
  __int64 v89; // rcx
  __int64 v90; // r12
  void *v91; // rbx
  __int64 v92; // rsi
  unsigned int v93; // r12d
  unsigned int *v94; // rax
  __int64 v95; // rcx
  unsigned int v96; // r13d
  unsigned int v97; // edx
  unsigned int *v98; // rsi
  int *v99; // r14
  __int64 v100; // rax
  _DWORD *v101; // rdx
  int *v102; // rdi
  int *j; // rax
  int v104; // ecx
  char v105; // r8
  __int64 v106; // rcx
  char v107; // r8
  __int64 v108; // rcx
  __int64 v109; // rax
  int *v110; // rbp
  int *v111; // rbx
  unsigned int *v112; // r14
  void *v113; // r12
  int *v114; // rsi
  _DWORD *v115; // rdx
  __int64 v116; // rcx
  _BYTE *v117; // rbx
  _QWORD *v118; // rax
  _QWORD *v119; // rax
  char **exception; // r12
  char **v121; // r12
  char **v122; // r12
  char **v123; // r12
  __int64 v124; // [rsp+8h] [rbp-D0h]
  unsigned int v125; // [rsp+10h] [rbp-C8h]
  _QWORD *v126; // [rsp+20h] [rbp-B8h]
  unsigned int v127; // [rsp+28h] [rbp-B0h]
  unsigned int v128; // [rsp+28h] [rbp-B0h]
  unsigned int v129; // [rsp+28h] [rbp-B0h]
  _DWORD *v130; // [rsp+28h] [rbp-B0h]
  unsigned int v131; // [rsp+34h] [rbp-A4h]
  unsigned int v132; // [rsp+38h] [rbp-A0h]
  unsigned int *v133; // [rsp+38h] [rbp-A0h]
  unsigned int v134; // [rsp+40h] [rbp-98h]
  _DWORD *v135; // [rsp+40h] [rbp-98h]
  __int64 v137; // [rsp+60h] [rbp-78h] BYREF
  __int64 v138; // [rsp+68h] [rbp-70h]
  __int64 v139; // [rsp+70h] [rbp-68h] BYREF
  __int64 v140; // [rsp+78h] [rbp-60h]
  __int64 v141; // [rsp+80h] [rbp-58h] BYREF
  __int64 v142; // [rsp+88h] [rbp-50h]
  __int64 v143; // [rsp+90h] [rbp-48h] BYREF
  __int64 v144; // [rsp+98h] [rbp-40h]

  v2 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::karr_relation,
         0);
  v126 = v2;
  if ( !v2 )
    __cxa_bad_cast();
  if ( !*((_BYTE *)v2 + 112) )
  {
    v117 = v2;
    sub_538A20((_DWORD *)v2[4], v2 + 11, v2 + 15);
    v117[112] = 1;
  }
  v131 = 1;
  result = *(unsigned int **)(a1 + 8);
  if ( result )
  {
    while ( 1 )
    {
      if ( v131 >= *(result - 1) )
        return result;
      v132 = *result;
      v134 = result[v131];
      v4 = v126[2];
      v124 = v4;
      if ( v4 )
      {
        v5 = *(_DWORD *)(v4 - 4);
        if ( v5 )
        {
          v6 = sub_186B270(0x48u) + 8;
          *(_QWORD *)(v6 - 8) = 2;
          v124 = v6;
          for ( i = *(_DWORD *)(v6 - 8); i < v5; i = *(v11 - 2) )
          {
            v8 = (3 * i + 1) >> 1;
            v9 = 32 * v8 + 8;
            if ( 32 * i + 8 >= (unsigned int)v9 || i >= v8 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v141, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v141);
              sub_233E40((__int64)&v141);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v10 = (unsigned int *)sub_186B270(v9);
            v11 = v10 + 2;
            v12 = *(unsigned int *)(v124 - 4);
            v13 = v124;
            v14 = v10 + 2;
            v10[1] = v12;
            v15 = v124 + 32 * v12;
            if ( v124 != v15 )
            {
              do
              {
                v16 = *(_DWORD *)v13;
                v17 = *(_BYTE *)(v13 + 4);
                v13 += 32;
                v14 += 8;
                *(v14 - 8) = v16;
                *((_BYTE *)v14 - 28) = v17 & 3 | *(_BYTE *)(v14 - 7) & 0xFC;
                v18 = *(_QWORD *)(v13 - 24);
                *(_QWORD *)(v13 - 24) = 0;
                *((_QWORD *)v14 - 3) = v18;
                v19 = *(_BYTE *)(v13 - 12);
                *(v14 - 4) = *(_DWORD *)(v13 - 16);
                *((_BYTE *)v14 - 12) = v19 & 3 | *(_BYTE *)(v14 - 3) & 0xFC;
                v20 = *(_QWORD *)(v13 - 8);
                *(_QWORD *)(v13 - 8) = 0;
                *((_QWORD *)v14 - 1) = v20;
              }
              while ( v13 != v15 );
            }
            v21 = *(unsigned int *)(v124 - 4);
            if ( (_DWORD)v21 )
            {
              v127 = v8;
              v125 = v5;
              v22 = v124 + 32 * v21;
              v23 = v124;
              do
              {
                v24 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v23);
                v25 = v23 + 16;
                v23 += 32;
                sub_182CBA0(v24, v25);
              }
              while ( v23 != v22 );
              v5 = v125;
              v8 = v127;
              v11 = v10 + 2;
            }
            sub_186B220((void *)(v124 - 8));
            *v10 = v8;
            v124 = (__int64)v11;
          }
          v26 = v124;
          *(_DWORD *)(v124 - 4) = v5;
          do
          {
            v26 += 32;
            *(_OWORD *)(v26 - 16) = 0;
            *(_OWORD *)(v26 - 32) = 0;
            *(_DWORD *)(v26 - 16) = 1;
            *(_BYTE *)(v26 - 28) = 0;
            *(_BYTE *)(v26 - 12) = 0;
          }
          while ( v124 + 32LL * v5 != v26 );
        }
        else
        {
          v124 = 0;
        }
      }
      v141 = 1;
      v142 = 0;
      v143 = 1;
      v144 = 0;
      sub_182CBA0(qword_1C7F2C0, &v143);
      v27 = qword_1C7F2C0;
      v28 = v124 + 32LL * v132;
      v29 = *(_DWORD *)v28;
      *(_DWORD *)v28 = v141;
      LODWORD(v141) = v29;
      v30 = *(_QWORD *)(v28 + 8);
      *(_QWORD *)(v28 + 8) = v142;
      v142 = v30;
      v31 = *(_BYTE *)(v28 + 4);
      LOBYTE(v30) = v31 & 2;
      v31 &= ~2u;
      v32 = BYTE4(v141) & 1;
      LOBYTE(v30) = v31 & 1 | BYTE4(v141) & 0xFC | v30 & 0xFE;
      v33 = v31 & 0xFE | BYTE4(v141) & 2;
      v34 = *(_BYTE *)(v28 + 20);
      BYTE4(v141) = v30;
      LODWORD(v30) = *(_DWORD *)(v28 + 16);
      *(_BYTE *)(v28 + 4) = v33 | v32;
      LODWORD(v143) = v30;
      v35 = *(_QWORD *)(v28 + 24);
      *(_QWORD *)(v28 + 24) = v144;
      v144 = v35;
      LOBYTE(v35) = BYTE4(v143);
      *(_DWORD *)(v28 + 16) = 1;
      *(_BYTE *)(v28 + 20) = v34 & 0xFC | v35 & 2;
      BYTE4(v143) = v34 & 1 | v34 & 2 | v35 & 0xFC;
      sub_182CBA0(v27, &v141);
      sub_182CBA0(v27, &v143);
      v141 = 0xFFFFFFFFLL;
      v142 = 0;
      v143 = 1;
      v144 = 0;
      sub_182CBA0(qword_1C7F2C0, &v143);
      v36 = qword_1C7F2C0;
      v37 = v124 + 32LL * v134;
      v38 = *(_DWORD *)v37;
      *(_DWORD *)v37 = v141;
      LODWORD(v141) = v38;
      v39 = *(_QWORD *)(v37 + 8);
      *(_QWORD *)(v37 + 8) = v142;
      v142 = v39;
      v40 = *(_BYTE *)(v37 + 4);
      LOBYTE(v39) = v40 & 2;
      v40 &= ~2u;
      v41 = BYTE4(v141) & 1;
      LOBYTE(v39) = v40 & 1 | BYTE4(v141) & 0xFC | v39 & 0xFE;
      v42 = v40 & 0xFE | BYTE4(v141) & 2;
      v43 = *(_BYTE *)(v37 + 20);
      BYTE4(v141) = v39;
      LODWORD(v39) = *(_DWORD *)(v37 + 16);
      *(_BYTE *)(v37 + 4) = v42 | v41;
      LODWORD(v143) = v39;
      v44 = *(_QWORD *)(v37 + 24);
      *(_QWORD *)(v37 + 24) = v144;
      v144 = v44;
      LOBYTE(v44) = BYTE4(v143);
      *(_DWORD *)(v37 + 16) = 1;
      *(_BYTE *)(v37 + 20) = v43 & 0xFC | v44 & 2;
      BYTE4(v143) = v43 & 1 | v43 & 2 | v44 & 0xFC;
      sub_182CBA0(v36, &v141);
      sub_182CBA0(v36, &v143);
      v45 = v126[11];
      if ( v45 )
      {
        LODWORD(v46) = *(_DWORD *)(v45 - 4);
        v47 = (_QWORD *)(v45 + 8LL * (unsigned int)v46);
        if ( (_DWORD)v46 == *(_DWORD *)(v45 - 8) )
        {
          v73 = (unsigned int)(3 * v46 + 1) >> 1;
          v74 = 8 * v73 + 8;
          if ( 8 * (int)v46 + 8 >= v74 || (unsigned int)v46 >= v73 )
          {
            v121 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v141, "Overflow encountered when expanding vector");
            *v121 = (char *)off_1C63128;
            sub_2333C0(v121 + 1, &v141);
            sub_233E40((__int64)&v141);
            __cxa_throw(v121, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v75 = (unsigned int *)sub_186B270(v74);
          v45 = (unsigned __int64)(v75 + 2);
          v76 = v126[11];
          if ( v76 )
          {
            v77 = *(unsigned int *)(v76 - 4);
            v78 = 8 * v77;
            v75[1] = v77;
            v79 = (__int64 *)(v76 + 8 * v77);
            if ( (__int64 *)v76 != v79 )
            {
              v80 = (__int64 *)v76;
              if ( (unsigned __int64)(v78 - 8) <= 8 || v76 < (unsigned __int64)(v75 + 6) && v45 < v76 + 16 )
              {
                v115 = v75 + 2;
                do
                {
                  v116 = *v80;
                  *v80++ = 0;
                  v115 += 2;
                  *((_QWORD *)v115 - 1) = v116;
                }
                while ( v80 != v79 );
              }
              else
              {
                v81 = 0;
                v82 = ((unsigned __int64)(v78 - 8) >> 3) + 1;
                do
                {
                  v83 = _mm_loadu_si128((const __m128i *)(v76 + v81 * 4));
                  *(_OWORD *)(v76 + v81 * 4) = 0;
                  *(__m128i *)&v75[v81 + 2] = v83;
                  v81 += 4;
                }
                while ( v81 != 4 * (v82 >> 1) );
                if ( (v82 & 1) != 0 )
                {
                  v84 = 8 * (v82 & 0xFFFFFFFFFFFFFFFELL);
                  v85 = *(_QWORD *)(v76 + v84);
                  *(_QWORD *)(v76 + v84) = 0;
                  *(_QWORD *)&v75[v84 / 4 + 2] = v85;
                }
              }
            }
            if ( (_DWORD)v77 )
            {
              v129 = v73;
              v133 = v75;
              v135 = v75 + 2;
              v86 = (__int64 *)v76;
              v87 = (__int64 *)(v76 + 8 * v77);
              do
              {
                v88 = *v86;
                if ( *v86 )
                {
                  v89 = *(unsigned int *)(v88 - 4);
                  if ( (_DWORD)v89 )
                  {
                    v90 = v88 + 32 * v89;
                    do
                    {
                      v91 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, v88);
                      v92 = v88 + 16;
                      v88 += 32;
                      sub_182CBA0(v91, v92);
                    }
                    while ( v90 != v88 );
                    v88 = *v86;
                  }
                  sub_186B220((void *)(v88 - 8));
                }
                ++v86;
              }
              while ( v86 != v87 );
              v73 = v129;
              v75 = v133;
              v45 = (unsigned __int64)v135;
              v76 = v126[11];
            }
            sub_186B220((void *)(v76 - 8));
            v46 = v75[1];
            v47 = (_QWORD *)(v45 + 8 * v46);
          }
          else
          {
            v75[1] = 0;
            v47 = v75 + 2;
            LODWORD(v46) = 0;
          }
          v126[11] = v45;
          *v75 = v73;
        }
      }
      else
      {
        v46 = sub_186B270(0x18u);
        *(_QWORD *)v46 = 2;
        v45 = v46 + 8;
        v126[11] = v46 + 8;
        v47 = (_QWORD *)(v46 + 8);
        LODWORD(v46) = 0;
      }
      *v47 = 0;
      if ( !v124 )
        goto LABEL_31;
      v48 = *(_DWORD *)(v124 - 4);
      v128 = *(_DWORD *)(v124 - 8);
      v49 = (_QWORD *)sub_186B270(32LL * v128 + 8);
      v50 = _mm_cvtsi32_si128(v48);
      v51 = v49 + 1;
      v52 = v124 + 32LL * *(unsigned int *)(v124 - 4);
      *v49 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v128), v50).m128i_u64[0];
      *v47 = v49 + 1;
      v53 = v124;
      if ( v124 != v52 )
        break;
LABEL_30:
      v45 = v126[11];
      LODWORD(v46) = *(_DWORD *)(v45 - 4);
LABEL_31:
      v56 = qword_1C7F2C0;
      *(_DWORD *)(v45 - 4) = v46 + 1;
      v137 = 0;
      v138 = 0;
      v139 = 1;
      v140 = 0;
      sub_182CBA0(v56, &v139);
      BYTE4(v139) &= ~1u;
      LODWORD(v139) = 1;
      v57 = (_QWORD *)v126[12];
      if ( v57 )
      {
        v58 = *((unsigned int *)v57 - 1);
        if ( (_DWORD)v58 == *((_DWORD *)v57 - 2) )
        {
          v96 = (unsigned int)(3 * v58 + 1) >> 1;
          v97 = 32 * v96 + 8;
          if ( 32 * (int)v58 + 8 >= v97 || (unsigned int)v58 >= v96 )
          {
            v123 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v141, "Overflow encountered when expanding vector");
            *v123 = (char *)off_1C63128;
            sub_2333C0(v123 + 1, &v141);
            sub_233E40((__int64)&v141);
            __cxa_throw(v123, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v98 = (unsigned int *)sub_186B270(v97);
          v57 = v98 + 2;
          v99 = (int *)v126[12];
          if ( v99 )
          {
            v100 = (unsigned int)*(v99 - 1);
            v101 = v98 + 2;
            v98[1] = v100;
            v102 = &v99[8 * v100];
            for ( j = v99; v102 != j; *((_QWORD *)v101 - 1) = v108 )
            {
              v104 = *j;
              v105 = *((_BYTE *)j + 4);
              j += 8;
              v101 += 8;
              *(v101 - 8) = v104;
              *((_BYTE *)v101 - 28) = v105 & 3 | *(_BYTE *)(v101 - 7) & 0xFC;
              v106 = *((_QWORD *)j - 3);
              *((_QWORD *)j - 3) = 0;
              *((_QWORD *)v101 - 3) = v106;
              v107 = *((_BYTE *)j - 12);
              *(v101 - 4) = *(j - 4);
              *((_BYTE *)v101 - 12) = v107 & 3 | *(_BYTE *)(v101 - 3) & 0xFC;
              v108 = *((_QWORD *)j - 1);
              *((_QWORD *)j - 1) = 0;
            }
            v109 = (unsigned int)*(v99 - 1);
            v110 = &v99[8 * v109];
            if ( (_DWORD)v109 )
            {
              v130 = v98 + 2;
              v111 = v99;
              v112 = v98;
              do
              {
                v113 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v111);
                v114 = v111 + 4;
                v111 += 8;
                sub_182CBA0(v113, v114);
              }
              while ( v111 != v110 );
              v98 = v112;
              v57 = v130;
              v99 = (int *)v126[12];
            }
            sub_186B220(v99 - 2);
            v59 = &v57[4 * v98[1]];
          }
          else
          {
            v98[1] = 0;
            v59 = v98 + 2;
          }
          v126[12] = v57;
          *v98 = v96;
        }
        else
        {
          v59 = &v57[4 * v58];
        }
      }
      else
      {
        v119 = (_QWORD *)sub_186B270(0x48u);
        v57 = v119 + 1;
        *v119 = 2;
        v126[12] = v119 + 1;
        v59 = v119 + 1;
      }
      v60 = qword_1C7F2C0;
      *(_DWORD *)v59 = v137;
      *((_BYTE *)v59 + 4) = BYTE4(v137) & 3 | *((_BYTE *)v59 + 4) & 0xFC;
      v61 = v138;
      v138 = 0;
      v59[1] = v61;
      *((_DWORD *)v59 + 4) = v139;
      *((_BYTE *)v59 + 20) = BYTE4(v139) & 3 | *((_BYTE *)v59 + 20) & 0xFC;
      v62 = v140;
      v140 = 0;
      v59[3] = v62;
      ++*((_DWORD *)v57 - 1);
      sub_182CBA0(v60, &v137);
      sub_182CBA0(v60, &v139);
      v63 = (_QWORD *)v126[13];
      if ( v63 )
      {
        v64 = *((_DWORD *)v63 - 1);
        if ( v64 == *((_DWORD *)v63 - 2) )
        {
          v93 = (3 * v64 + 1) >> 1;
          if ( v64 + 8 >= v93 + 8 || v64 >= v93 )
          {
            v122 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v141, "Overflow encountered when expanding vector");
            *v122 = (char *)off_1C63128;
            sub_2333C0(v122 + 1, &v141);
            sub_233E40((__int64)&v141);
            __cxa_throw(v122, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v94 = (unsigned int *)sub_186B300(v63 - 1, v93 + 8);
          v95 = v94[1];
          v63 = v94 + 2;
          v126[13] = v94 + 2;
          *v94 = v93;
          LODWORD(v94) = v95;
          v67 = (char *)v63 + v95;
          v66 = (_DWORD)v94 + 1;
        }
        else
        {
          v65 = v64;
          v66 = v64 + 1;
          v67 = (char *)v63 + v65;
        }
      }
      else
      {
        v118 = (_QWORD *)sub_186B270(0xAu);
        *v118 = 2;
        v63 = v118 + 1;
        v126[13] = v118 + 1;
        v67 = v118 + 1;
        v66 = 1;
      }
      *v67 = 1;
      *((_DWORD *)v63 - 1) = v66;
      *((_BYTE *)v126 + 144) = 0;
      if ( v124 )
      {
        v68 = *(unsigned int *)(v124 - 4);
        if ( (_DWORD)v68 )
        {
          v69 = v124;
          v70 = v124 + 32 * v68;
          do
          {
            v71 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v69);
            v72 = v69 + 16;
            v69 += 32;
            sub_182CBA0(v71, v72);
          }
          while ( v69 != v70 );
        }
        sub_186B220((void *)(v124 - 8));
      }
      ++v131;
      result = *(unsigned int **)(a1 + 8);
      if ( !result )
        return result;
    }
    while ( 1 )
    {
      *((_BYTE *)v51 + 4) &= 0xFCu;
      v55 = qword_1C7F2C0;
      *((_BYTE *)v51 + 20) &= 0xFCu;
      *(_DWORD *)v51 = 0;
      v51[1] = 0;
      *((_DWORD *)v51 + 4) = 1;
      v51[3] = 0;
      if ( (*(_BYTE *)(v53 + 4) & 1) != 0 )
      {
        sub_182C690(v55, v51, v53);
        if ( (*(_BYTE *)(v53 + 20) & 1) != 0 )
          goto LABEL_29;
LABEL_26:
        v54 = *(_DWORD *)(v53 + 16);
        v53 += 32;
        *((_BYTE *)v51 + 20) &= ~1u;
        v51 += 4;
        *((_DWORD *)v51 - 4) = v54;
        if ( v52 == v53 )
          goto LABEL_30;
      }
      else
      {
        *(_DWORD *)v51 = *(_DWORD *)v53;
        if ( (*(_BYTE *)(v53 + 20) & 1) == 0 )
          goto LABEL_26;
LABEL_29:
        sub_182C690(v55, v51 + 2, v53 + 16);
        v53 += 32;
        v51 += 4;
        if ( v52 == v53 )
          goto LABEL_30;
      }
    }
  }
  return result;
}

