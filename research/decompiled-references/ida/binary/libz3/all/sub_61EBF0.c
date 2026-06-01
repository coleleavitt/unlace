__m128i *__fastcall sub_61EBF0(__m128i *a1, _QWORD *a2, unsigned int a3, __int64 a4)
{
  char **v4; // r12
  char **exception; // rbx
  char **v6; // r12
  char **v7; // r12
  char **v8; // r13
  char **v9; // r13
  char **v10; // r13
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rbx
  _QWORD *v16; // rax
  unsigned int v17; // edx
  _QWORD *v18; // rax
  _QWORD *v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // r14d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rax
  int v26; // edx
  __int64 v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  __int64 *v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 *v34; // rbx
  unsigned int v35; // r12d
  __int64 v36; // rdx
  int v37; // eax
  __int64 *v38; // rdx
  void *v39; // r15
  __int64 v40; // r14
  __int64 v41; // r15
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rax
  int v45; // esi
  __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r15
  _QWORD *v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  __int64 *v54; // rcx
  unsigned int v55; // eax
  unsigned int v56; // r15d
  size_t v57; // rsi
  unsigned int *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r12
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r12
  unsigned int v64; // eax
  __int64 v65; // rdx
  int v66; // eax
  __int64 *v67; // rdx
  __int64 v68; // rdi
  __m128 *v69; // r8
  int v70; // r9d
  __int64 v71; // rcx
  _DWORD *v72; // rdi
  unsigned int v73; // eax
  unsigned int v74; // edx
  __int64 v75; // rsi
  unsigned int v76; // eax
  unsigned int *v77; // rsi
  __int64 v78; // r8
  unsigned int v79; // r14d
  __m128 *v80; // r12
  unsigned int v81; // r11d
  __int64 v82; // r8
  __m128 *v83; // r15
  int v84; // esi
  __m128 v85; // xmm0
  __int64 v86; // rax
  __m128 *v87; // rdi
  __m128 *v88; // rax
  unsigned __int64 v89; // rdx
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // r12
  __int64 v92; // rax
  __int64 v93; // r14
  __int64 *v94; // r12
  unsigned __int64 v95; // r13
  __int64 v96; // rsi
  unsigned int v99; // ecx
  size_t v100; // rsi
  unsigned int v101; // r14d
  unsigned int *v102; // rax
  __int64 v103; // rcx
  _QWORD *v104; // rax
  unsigned int v105; // r12d
  size_t v106; // rsi
  unsigned int *v107; // rax
  __int64 v108; // rdx
  unsigned int v109; // r15d
  size_t v110; // rsi
  unsigned int *v111; // rax
  __int64 v112; // rdx
  unsigned int v113; // r12d
  size_t v114; // rsi
  unsigned int *v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rax
  unsigned int v118; // r12d
  size_t v119; // rsi
  unsigned int *v120; // rax
  __m128 *v121; // rax
  __m128i *v122; // r9
  const __m128i *v123; // rax
  __m128i *v124; // r10
  __int64 v125; // rdx
  __m128 *v126; // rsi
  __m128i *v127; // rdx
  __m128i v128; // xmm0
  _QWORD *v129; // rax
  _QWORD *v130; // rax
  _QWORD *v131; // rax
  __int64 v132; // rax
  __int64 v133; // rsi
  int v135; // [rsp+0h] [rbp-F8h]
  __int64 v136; // [rsp+8h] [rbp-F0h]
  __int64 *v137; // [rsp+10h] [rbp-E8h]
  _QWORD *v138; // [rsp+18h] [rbp-E0h]
  int v139[2]; // [rsp+20h] [rbp-D8h]
  int v140[2]; // [rsp+20h] [rbp-D8h]
  char v141[8]; // [rsp+28h] [rbp-D0h]
  __int64 v143; // [rsp+38h] [rbp-C0h] BYREF
  __m128i *v144; // [rsp+40h] [rbp-B8h]
  __m128i *v145; // [rsp+48h] [rbp-B0h]
  __int64 v146; // [rsp+50h] [rbp-A8h]
  __int64 v147; // [rsp+58h] [rbp-A0h]
  __int64 v148; // [rsp+70h] [rbp-88h]
  _QWORD v149[2]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v150[2]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v151[11]; // [rsp+A0h] [rbp-58h] BYREF

  v12 = *(_QWORD *)(a4 + 16);
  v144 = a1;
  v13 = *(unsigned int *)(v12 + 32);
  v143 = v12;
  if ( (_DWORD)v13 )
  {
    v14 = v12;
    v15 = v12 + 8 * v13;
    v16 = (_QWORD *)sub_186B270(0x18u);
    v17 = 1;
    *v16 = 2;
    v18 = v16 + 1;
    v19 = v18;
    while ( 1 )
    {
      v20 = *(_QWORD *)(v14 + 48);
      v14 += 8;
      *v18 = v20;
      *((_DWORD *)v19 - 1) = v17;
      if ( v15 == v14 )
        break;
      if ( *((_DWORD *)v19 - 2) == v17 )
      {
        v22 = (3 * v17 + 1) >> 1;
        v23 = 8 * v22 + 8;
        if ( 8 * v17 + 8 >= (unsigned int)v23 || v17 >= v22 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v151, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v151);
          sub_233E40((__int64)v151);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v24 = (unsigned int *)sub_186B300(v19 - 1, v23);
        v19 = v24 + 2;
        *v24 = v22;
        v25 = v24[1];
        v26 = v25;
        v18 = &v19[v25];
        v17 = v26 + 1;
      }
      else
      {
        v21 = v17++;
        v18 = &v19[v21];
      }
    }
  }
  else
  {
    v19 = nullptr;
  }
  v27 = sub_15D2CD0(a2[5], 5, 0, 0, 0);
  if ( v19 )
  {
    v28 = *((_DWORD *)v19 - 1);
    if ( v28 == *((_DWORD *)v19 - 2) )
    {
      v113 = (3 * v28 + 1) >> 1;
      v114 = 8 * v113 + 8;
      if ( 8 * v28 + 8 >= (unsigned int)v114 || v28 >= v113 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v151, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v151);
        sub_233E40((__int64)v151);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v115 = (unsigned int *)sub_186B300(v19 - 1, v114);
      v116 = v115[1];
      v19 = v115 + 2;
      *v115 = v113;
      LODWORD(v115) = v116;
      v31 = &v19[v116];
      v30 = (_DWORD)v115 + 1;
    }
    else
    {
      v29 = v28;
      v30 = v28 + 1;
      v31 = &v19[v29];
    }
  }
  else
  {
    v131 = (_QWORD *)sub_186B270(0x18u);
    v19 = v131 + 1;
    *v131 = 2;
    v30 = 1;
    v31 = v19;
  }
  *v31 = v27;
  v32 = a2[3];
  *((_DWORD *)v19 - 1) = v30;
  v147 = v32;
  LODWORD(v136) = *(_DWORD *)(v143 + 32);
  v33 = sub_15E3510(v32, v143 + 16, (unsigned int)(v136 + 1), v19, *(_QWORD *)(v143 + 40), 0);
  *(_QWORD *)v139 = v33;
  if ( v33 )
    ++*(_DWORD *)(v33 + 8);
  v146 = a2[3];
  v148 = v146;
  if ( *(_DWORD *)(a4 + 24) )
  {
    v34 = nullptr;
    v35 = 0;
    v136 = (__int64)v149;
    v137 = v151;
    v138 = a2 + 5;
    LODWORD(v145) = a3 + 1;
    do
    {
      v149[0] = 0;
      v149[1] = 0;
      v40 = *(_QWORD *)(a4 + 8LL * v35 + 32);
      v150[0] = 1;
      v150[1] = 0;
      if ( (unsigned __int8)sub_1666AE0(v138, v40, v149, v151) && LODWORD(v149[0]) )
      {
        v41 = a2[3];
        v42 = a2[5];
        if ( (v149[0] & 0x100000000LL) != 0
          || LODWORD(v149[0]) != 1
          || (v150[0] & 0x100000000LL) != 0
          || LODWORD(v150[0]) != 1 )
        {
          v43 = sub_15D2CD0(v42, 5, 0, 0, 0);
          v44 = a2[10];
          if ( v44 )
            v45 = *(_DWORD *)(v44 - 4);
          else
            v45 = 0;
          *(_QWORD *)v141 = sub_15DB5C0(v41, (unsigned int)((_DWORD)v145 + v45), v43);
          v46 = a2[3];
          v47 = sub_15D2CD0(a2[5], 5, 0, 0, 0);
          sub_15DB5C0(v46, a3, v47);
          sub_15E1B70(a2[5]);
          v48 = sub_15E1B70(v46);
          v49 = v48;
          if ( v48 )
            ++*(_DWORD *)(v48 + 8);
          v50 = (_QWORD *)a2[10];
          if ( v50 )
          {
            v51 = *((_DWORD *)v50 - 1);
            if ( v51 == *((_DWORD *)v50 - 2) )
            {
              v99 = (3 * v51 + 1) >> 1;
              v100 = 8 * v99 + 8;
              v101 = v99;
              if ( 8 * v51 + 8 >= (unsigned int)v100 || v51 >= v99 )
              {
                v6 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v151, "Overflow encountered when expanding vector");
                *v6 = (char *)off_1C63128;
                sub_2333C0(v6 + 1, v151);
                sub_233E40((__int64)v151);
                __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v102 = (unsigned int *)sub_186B300(v50 - 1, v100);
              v103 = v102[1];
              v50 = v102 + 2;
              *v102 = v101;
              a2[10] = v102 + 2;
              LODWORD(v102) = v103;
              v54 = &v50[v103];
              v53 = (_DWORD)v102 + 1;
            }
            else
            {
              v52 = v51;
              v53 = v51 + 1;
              v54 = &v50[v52];
            }
          }
          else
          {
            v129 = (_QWORD *)sub_186B270(0x18u);
            v50 = v129 + 1;
            *v129 = 2;
            v53 = 1;
            a2[10] = v50;
            v54 = v50;
          }
          *v54 = v49;
          v40 = *(_QWORD *)v141;
          *((_DWORD *)v50 - 1) = v53;
        }
        else
        {
          v117 = sub_15D2CD0(v42, 5, 0, 0, 0);
          v40 = sub_15DB5C0(v41, a3, v117);
        }
      }
      if ( v40 )
        ++*(_DWORD *)(v40 + 8);
      if ( v34 )
      {
        v55 = *((_DWORD *)v34 - 1);
        if ( v55 == *((_DWORD *)v34 - 2) )
        {
          v56 = (3 * v55 + 1) >> 1;
          v57 = 8 * v56 + 8;
          if ( 8 * v55 + 8 >= (unsigned int)v57 || v55 >= v56 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v151, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v151);
            sub_233E40((__int64)v151);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v58 = (unsigned int *)sub_186B300(v34 - 1, v57);
          v59 = v58[1];
          v34 = (__int64 *)(v58 + 2);
          *v58 = v56;
          LODWORD(v58) = v59;
          v38 = &v34[v59];
          v37 = (_DWORD)v58 + 1;
        }
        else
        {
          v36 = v55;
          v37 = v55 + 1;
          v38 = &v34[v36];
        }
      }
      else
      {
        v104 = (_QWORD *)sub_186B270(0x18u);
        v34 = v104 + 1;
        *v104 = 2;
        v37 = 1;
        v38 = v34;
      }
      *v38 = v40;
      ++v35;
      *((_DWORD *)v34 - 1) = v37;
      v39 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v149);
      sub_182CBA0(v39, v150);
    }
    while ( v35 < *(_DWORD *)(a4 + 24) );
    v60 = a2[3];
  }
  else
  {
    v60 = v146;
    v34 = nullptr;
  }
  v61 = sub_15D2CD0(a2[5], 5, 0, 0, 0);
  v62 = sub_15DB5C0(v60, a3, v61);
  v63 = v62;
  if ( v62 )
    ++*(_DWORD *)(v62 + 8);
  if ( v34 )
  {
    v64 = *((_DWORD *)v34 - 1);
    if ( v64 == *((_DWORD *)v34 - 2) )
    {
      v109 = (3 * v64 + 1) >> 1;
      v110 = 8 * v109 + 8;
      if ( 8 * v64 + 8 >= (unsigned int)v110 || v64 >= v109 )
      {
        v9 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v151, "Overflow encountered when expanding vector");
        *v9 = (char *)off_1C63128;
        sub_2333C0(v9 + 1, v151);
        sub_233E40((__int64)v151);
        __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v111 = (unsigned int *)sub_186B300(v34 - 1, v110);
      v112 = v111[1];
      v34 = (__int64 *)(v111 + 2);
      *v111 = v109;
      LODWORD(v111) = v112;
      v67 = &v34[v112];
      v66 = (_DWORD)v111 + 1;
    }
    else
    {
      v65 = v64;
      v66 = v64 + 1;
      v67 = &v34[v65];
    }
  }
  else
  {
    v130 = (_QWORD *)sub_186B270(0x18u);
    v67 = v130 + 1;
    *v130 = 2;
    v66 = 1;
    v34 = v67;
  }
  v68 = a2[4];
  *v67 = v63;
  *((_DWORD *)v34 - 1) = v66;
  sub_6511B0(v68, *(_QWORD *)v139, 0);
  v71 = a2[14];
  if ( !v71 )
    goto LABEL_70;
  v72 = *(_DWORD **)(v71 + 48);
  ++*(_DWORD *)(v143 + 8);
  if ( v72 )
  {
    v73 = *(v72 - 1);
    v74 = *(v72 - 2);
    if ( v73 == v74 )
    {
      v105 = (3 * v73 + 1) >> 1;
      v106 = 8 * v105 + 8;
      if ( 8 * v73 + 8 >= (unsigned int)v106 || v73 >= v105 )
      {
        v8 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v151, "Overflow encountered when expanding vector");
        *v8 = (char *)off_1C63128;
        sub_2333C0(v8 + 1, v151);
        sub_233E40((__int64)v151);
        __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v136 = v71;
      v107 = (unsigned int *)sub_186B300(v72 - 2, v106);
      v108 = v107[1];
      v71 = v136;
      v72 = v107 + 2;
      *(_QWORD *)(v136 + 48) = v107 + 2;
      v77 = &v107[2 * v108 + 2];
      *v107 = v105;
      LODWORD(v107) = v108;
      v74 = v105;
      v76 = (_DWORD)v107 + 1;
    }
    else
    {
      v75 = v73;
      v76 = v73 + 1;
      v77 = &v72[2 * v75];
    }
    *(_QWORD *)v77 = v143;
    *(v72 - 1) = v76;
    if ( !*(_QWORD *)v139 )
      goto LABEL_50;
    goto LABEL_49;
  }
  v136 = v71;
  v132 = sub_186B270(0x18u);
  v71 = v136;
  v133 = v143;
  v72 = (_DWORD *)(v132 + 8);
  *(_QWORD *)v132 = 2;
  *(_QWORD *)(v136 + 48) = v132 + 8;
  *(_QWORD *)(v132 + 8) = v133;
  *(_DWORD *)(v132 + 4) = 1;
  v76 = 1;
  if ( *(_QWORD *)v139 )
  {
LABEL_49:
    ++*(_DWORD *)(*(_QWORD *)v139 + 8LL);
    v76 = *(v72 - 1);
    v74 = *(v72 - 2);
LABEL_50:
    if ( v76 == v74 )
    {
      v118 = (3 * v76 + 1) >> 1;
      v119 = 8 * v118 + 8;
      if ( 8 * v76 + 8 >= (unsigned int)v119 || v76 >= v118 )
      {
        v10 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v151, "Overflow encountered when expanding vector");
        *v10 = (char *)off_1C63128;
        sub_2333C0(v10 + 1, v151);
        sub_233E40((__int64)v151);
        __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v136 = v71;
      v120 = (unsigned int *)sub_186B300(v72 - 2, v119);
      v71 = v136;
      v72 = v120 + 2;
      *(_QWORD *)(v136 + 48) = v120 + 2;
      *v120 = v118;
      v76 = v120[1];
    }
  }
  *(_QWORD *)&v72[2 * v76] = *(_QWORD *)v139;
  *(v72 - 1) = v76 + 1;
  v78 = *(unsigned int *)(v71 + 80);
  v79 = 2 * v78;
  if ( 3 * (int)v78 < (unsigned int)(4 * (*(_DWORD *)(v71 + 84) + *(_DWORD *)(v71 + 88))) )
  {
    v137 = (__int64 *)v71;
    v136 = 16LL * v79;
    v121 = (__m128 *)sub_186B270(v136);
    v82 = v136;
    v71 = (__int64)v137;
    v80 = v121;
    v122 = (__m128i *)((char *)v121 + v136);
    if ( v79 )
    {
      if ( (v136 & 0x10) == 0 || (*v121 = 0, ++v121, v121 != (__m128 *)v122) )
      {
        do
        {
          *v121 = 0;
          v121 += 2;
          v121[-1] = 0;
        }
        while ( v121 != (__m128 *)v122 );
      }
    }
    v123 = (const __m128i *)v137[9];
    v81 = v79 - 1;
    v83 = (__m128 *)v122;
    v124 = (__m128i *)&v123[*((unsigned int *)v137 + 20)];
    if ( v123 != v124 )
    {
      do
      {
        while ( v123->m128i_i64[0] <= 1uLL )
        {
          if ( v124 == ++v123 )
            goto LABEL_115;
        }
        v125 = 16LL * (*(_DWORD *)(v123->m128i_i64[0] + 12) & v81);
        v126 = &v80[(unsigned __int64)v125 / 0x10];
        if ( v136 == v125 )
        {
LABEL_119:
          if ( v80 == v126 )
          {
LABEL_129:
            v145 = v122;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v127 = (__m128i *)v80;
          while ( v127->m128i_i64[0] )
          {
            if ( v126 == (__m128 *)++v127 )
              goto LABEL_129;
          }
        }
        else
        {
          v127 = (__m128i *)&v80[(unsigned __int64)v125 / 0x10];
          while ( v127->m128i_i64[0] )
          {
            if ( v122 == ++v127 )
              goto LABEL_119;
          }
        }
        v128 = _mm_loadu_si128(v123++);
        *v127 = v128;
      }
      while ( v124 != v123 );
LABEL_115:
      v124 = (__m128i *)v137[9];
    }
    if ( v124 )
    {
      LODWORD(v138) = 16 * v79;
      LODWORD(v137) = v79 - 1;
      v136 = v71;
      sub_186B220(v124);
      v82 = 16LL * v79;
      v81 = v79 - 1;
      v71 = v136;
    }
    *(_QWORD *)(v71 + 72) = v80;
    *(_DWORD *)(v71 + 80) = v79;
    *(_DWORD *)(v71 + 88) = 0;
  }
  else
  {
    v80 = *(__m128 **)(v71 + 72);
    v81 = v78 - 1;
    v82 = 16 * v78;
    v83 = (__m128 *)((char *)v80 + v82);
  }
  v70 = v139[0];
  v84 = *(_DWORD *)(*(_QWORD *)v139 + 12LL);
  v85 = _mm_loadh_ps((const double *)&v143);
  v86 = 16LL * (v84 & v81);
  v87 = &v80[(unsigned __int64)v86 / 0x10];
  if ( v86 == v82 )
  {
    v69 = nullptr;
LABEL_61:
    if ( v87 == v80 )
    {
LABEL_69:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v90 = v80->m128_u64[0];
        if ( v80->m128_u64[0] <= 1 )
          break;
        if ( *(_DWORD *)(v90 + 12) == v84 && *(_QWORD *)v139 == v90 )
        {
          *v80 = v85;
          goto LABEL_70;
        }
        if ( v87 == ++v80 )
          goto LABEL_69;
      }
      if ( !v90 )
        break;
      v69 = v80++;
      if ( v87 == v80 )
        goto LABEL_69;
    }
    if ( v69 )
      goto LABEL_125;
    v69 = v80;
  }
  else
  {
    v88 = &v80[(unsigned __int64)v86 / 0x10];
    v69 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v89 = v88->m128_u64[0];
        if ( v88->m128_u64[0] <= 1 )
          break;
        if ( *(_DWORD *)(v89 + 12) == v84 && *(_QWORD *)v139 == v89 )
        {
          *v88 = v85;
          goto LABEL_70;
        }
        if ( ++v88 == v83 )
          goto LABEL_61;
      }
      if ( !v89 )
        break;
      v69 = v88++;
      if ( v88 == v83 )
        goto LABEL_61;
    }
    if ( v69 )
LABEL_125:
      --*(_DWORD *)(v71 + 88);
    else
      v69 = v88;
  }
  *v69 = v85;
  ++*(_DWORD *)(v71 + 84);
LABEL_70:
  v91 = a2[3];
  v92 = sub_15DC610(
          v91,
          v139[0],
          *(_DWORD *)(a4 + 24) + 1,
          (int)v34,
          (int)v69,
          v70,
          a4,
          v136,
          (int)v137,
          (int)v138,
          v139[0],
          v141[0],
          a3,
          v143,
          (int)v144,
          v145);
  *v144 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v92, (__m128i)v91);
  if ( v92 )
    ++*(_DWORD *)(v92 + 8);
  v93 = v146;
  v94 = v34;
  v95 = (unsigned __int64)&v34[*((unsigned int *)v34 - 1)];
  if ( (unsigned __int64)v34 < v95 )
  {
    do
    {
      while ( 1 )
      {
        v96 = *v94;
        if ( *v94 )
        {
          if ( (*(_DWORD *)(v96 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v94 >= v95 )
          goto LABEL_78;
      }
      ++v94;
      sub_15D7BC0(v93, v96);
    }
    while ( (unsigned __int64)v94 < v95 );
  }
LABEL_78:
  sub_186B220(v34 - 1);
  if ( *(_QWORD *)v140 )
  {
    v135 = *(_DWORD *)(*(_QWORD *)v140 + 8LL);
    *(_DWORD *)(*(_QWORD *)v140 + 8LL) = v135 - 1;
    if ( v135 == 1 )
      sub_15D7BC0(v147, *(_QWORD *)v140);
  }
  sub_186B220(v19 - 1);
  return v144;
}

