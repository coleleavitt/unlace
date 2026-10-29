char *__fastcall Z3_get_lstring(__int64 a1, __int64 a2, unsigned int *a3)
{
  char **v3; // r14
  char **v4; // r14
  char **exception; // r14
  char v7; // al
  unsigned int v8; // edx
  __int64 v9; // r14
  unsigned int v10; // eax
  _DWORD *v11; // rbp
  unsigned int v12; // r15d
  __int64 v13; // rsi
  unsigned int v14; // r12d
  __int64 v15; // r13
  char *v16; // rbx
  unsigned int v18; // r12d
  __int64 v19; // r13
  unsigned int v20; // r12d
  unsigned int v21; // eax
  __int64 v22; // r13
  unsigned int v23; // r12d
  unsigned int v24; // eax
  __int64 v25; // r13
  unsigned int v26; // eax
  unsigned int v27; // eax
  char v28; // r12
  __int64 v29; // rax
  _BYTE *v30; // rax
  __int64 v31; // rsi
  int v32; // edx
  unsigned int v33; // eax
  unsigned int v34; // edx
  size_t v35; // rsi
  unsigned int *v36; // rax
  _BYTE *n; // r15
  __int64 v38; // rcx
  unsigned int v39; // r12d
  unsigned int v40; // r12d
  _BYTE *v41; // rdi
  unsigned int v42; // r8d
  __int64 v43; // rdx
  unsigned int v44; // edx
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // rdx
  unsigned int v51; // r12d
  __int64 v52; // r15
  __int64 v53; // rax
  __int64 ii; // rdx
  unsigned int v55; // r12d
  _BYTE *v56; // rdi
  unsigned int v57; // ecx
  __int64 v58; // rdx
  unsigned int v59; // edx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rdx
  _BYTE *v67; // rdx
  unsigned int v68; // r12d
  _BYTE *v69; // rdi
  unsigned int v70; // ecx
  __int64 v71; // rdx
  unsigned int v72; // edx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rdx
  unsigned int v79; // r12d
  _BYTE *v80; // rdi
  unsigned int v81; // ecx
  __int64 v82; // rdx
  unsigned int v83; // edx
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rdx
  unsigned int v90; // r12d
  _BYTE *v91; // rdi
  unsigned int v92; // ecx
  __int64 v93; // rdx
  unsigned int v94; // edx
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rdx
  unsigned int v101; // r12d
  _BYTE *v102; // rdi
  unsigned int v103; // ecx
  __int64 v104; // rdx
  unsigned int v105; // edx
  __int64 v106; // rcx
  __int64 v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // rdx
  unsigned int v112; // r12d
  unsigned int *v113; // rax
  __int64 v114; // rdx
  __int64 m; // rdx
  __int64 jj; // rdx
  __int64 j; // rdx
  __int64 k; // rdx
  __int64 i; // rdx
  _QWORD *v120; // rbp
  unsigned int v121; // [rsp+0h] [rbp-E8h]
  _BYTE *v122; // [rsp+8h] [rbp-E0h]
  __int64 v123; // [rsp+10h] [rbp-D8h]
  char v125; // [rsp+27h] [rbp-C1h]
  __int64 v126[4]; // [rsp+40h] [rbp-A8h] BYREF
  void *ptr; // [rsp+60h] [rbp-88h] BYREF
  __int64 v128; // [rsp+68h] [rbp-80h]
  _BYTE v129[120]; // [rsp+70h] [rbp-78h] BYREF

  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v125 = v7;
  if ( v7 )
    sub_297C60(a1, a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  ptr = v129;
  v128 = 0x1000000000LL;
  if ( !a3 )
  {
    sub_24EA30(a1, 3u, "length argument is null");
LABEL_190:
    v16 = "";
    goto LABEL_17;
  }
  if ( !(unsigned __int8)sub_163BAA0(a1 + 464, a2, &ptr) )
  {
    sub_24EA30(a1, 3u, "expression is not a string literal");
    goto LABEL_190;
  }
  *(_DWORD *)(a1 + 1592) = 0;
  v8 = v128;
  if ( !(_DWORD)v128 )
  {
    v16 = *(char **)(a1 + 1584);
    *a3 = 0;
    goto LABEL_17;
  }
  v9 = 0;
  v10 = 0;
  v11 = nullptr;
  v122 = (_BYTE *)(a1 + 1600);
  do
  {
    v12 = *((_DWORD *)ptr + v9);
    if ( v12 - 1 <= 0xFE )
    {
      if ( v12 != 92 || (v13 = (unsigned int)(v9 + 1), (unsigned int)v13 >= v8) || *((_DWORD *)ptr + v13) != 117 )
      {
        v14 = *(_DWORD *)(a1 + 1596);
        if ( v10 < v14 )
        {
          v15 = *(_QWORD *)(a1 + 1584);
LABEL_13:
          *(_BYTE *)(v15 + v10) = v12;
          v10 = *(_DWORD *)(a1 + 1592) + 1;
          goto LABEL_14;
        }
        v101 = 2 * v14;
        v15 = sub_186B270(v101);
        v10 = *(_DWORD *)(a1 + 1592);
        v102 = *(_BYTE **)(a1 + 1584);
        if ( v10 )
        {
          if ( v10 - 1 <= 6 || (unsigned __int64)(v15 - (_QWORD)(v102 + 1)) <= 0xE )
          {
            for ( i = 0; i != v10; ++i )
              *(_BYTE *)(v15 + i) = v102[i];
            goto LABEL_181;
          }
          v103 = *(_DWORD *)(a1 + 1592);
          if ( v10 - 1 <= 0xE )
          {
            v105 = 0;
          }
          else
          {
            v104 = 0;
            do
            {
              *(__m128i *)(v15 + v104) = _mm_loadu_si128((const __m128i *)&v102[v104]);
              v104 += 16;
            }
            while ( 16LL * (v10 >> 4) != v104 );
            v105 = v10 & 0xFFFFFFF0;
            if ( (v10 & 0xF) == 0 )
              goto LABEL_181;
            v103 = v10 - v105;
            if ( v10 - v105 - 1 <= 6 )
            {
LABEL_174:
              *(_BYTE *)(v15 + v105) = v102[v105];
              v106 = v105 + 1;
              if ( (unsigned int)v106 < v10 )
              {
                *(_BYTE *)(v15 + v106) = v102[v106];
                v107 = v105 + 2;
                if ( (unsigned int)v107 < v10 )
                {
                  *(_BYTE *)(v15 + v107) = v102[v107];
                  v108 = v105 + 3;
                  if ( (unsigned int)v108 < v10 )
                  {
                    *(_BYTE *)(v15 + v108) = v102[v108];
                    v109 = v105 + 4;
                    if ( (unsigned int)v109 < v10 )
                    {
                      *(_BYTE *)(v15 + v109) = v102[v109];
                      v110 = v105 + 5;
                      if ( (unsigned int)v110 < v10 )
                      {
                        v111 = v105 + 6;
                        *(_BYTE *)(v15 + v110) = v102[v110];
                        if ( (unsigned int)v111 < v10 )
                          *(_BYTE *)(v15 + v111) = v102[v111];
                      }
                    }
                  }
                }
              }
              goto LABEL_181;
            }
          }
          *(_QWORD *)(v15 + v105) = *(_QWORD *)&v102[v105];
          v105 += v103 & 0xFFFFFFF8;
          if ( (v103 & 7) != 0 )
            goto LABEL_174;
        }
LABEL_181:
        if ( v102 && v102 != v122 )
        {
          sub_186B220(v102);
          v10 = *(_DWORD *)(a1 + 1592);
        }
        *(_QWORD *)(a1 + 1584) = v15;
        *(_DWORD *)(a1 + 1596) = v101;
        goto LABEL_13;
      }
    }
    if ( v11 )
      *(v11 - 1) = 0;
    v18 = *(_DWORD *)(a1 + 1596);
    if ( v10 < v18 )
    {
      v19 = *(_QWORD *)(a1 + 1584);
      goto LABEL_27;
    }
    v90 = 2 * v18;
    v19 = sub_186B270(v90);
    v10 = *(_DWORD *)(a1 + 1592);
    v91 = *(_BYTE **)(a1 + 1584);
    if ( v10 )
    {
      if ( v10 - 1 <= 6 || (unsigned __int64)(v19 - (_QWORD)(v91 + 1)) <= 0xE )
      {
        for ( j = 0; j != v10; ++j )
          *(_BYTE *)(v19 + j) = v91[j];
        goto LABEL_161;
      }
      v92 = *(_DWORD *)(a1 + 1592);
      if ( v10 - 1 <= 0xE )
      {
        v94 = 0;
      }
      else
      {
        v93 = 0;
        do
        {
          *(__m128i *)(v19 + v93) = _mm_loadu_si128((const __m128i *)&v91[v93]);
          v93 += 16;
        }
        while ( v93 != 16LL * (v10 >> 4) );
        v94 = v10 & 0xFFFFFFF0;
        if ( (v10 & 0xF) == 0 )
          goto LABEL_161;
        v92 = v10 - v94;
        if ( v10 - v94 - 1 <= 6 )
          goto LABEL_154;
      }
      *(_QWORD *)(v19 + v94) = *(_QWORD *)&v91[v94];
      v94 += v92 & 0xFFFFFFF8;
      if ( (v92 & 7) != 0 )
      {
LABEL_154:
        *(_BYTE *)(v19 + v94) = v91[v94];
        v95 = v94 + 1;
        if ( (unsigned int)v95 < v10 )
        {
          *(_BYTE *)(v19 + v95) = v91[v95];
          v96 = v94 + 2;
          if ( (unsigned int)v96 < v10 )
          {
            *(_BYTE *)(v19 + v96) = v91[v96];
            v97 = v94 + 3;
            if ( (unsigned int)v97 < v10 )
            {
              *(_BYTE *)(v19 + v97) = v91[v97];
              v98 = v94 + 4;
              if ( (unsigned int)v98 < v10 )
              {
                *(_BYTE *)(v19 + v98) = v91[v98];
                v99 = v94 + 5;
                if ( (unsigned int)v99 < v10 )
                {
                  v100 = v94 + 6;
                  *(_BYTE *)(v19 + v99) = v91[v99];
                  if ( (unsigned int)v100 < v10 )
                    *(_BYTE *)(v19 + v100) = v91[v100];
                }
              }
            }
          }
        }
      }
    }
LABEL_161:
    if ( v91 && v91 != v122 )
    {
      sub_186B220(v91);
      v10 = *(_DWORD *)(a1 + 1592);
    }
    *(_QWORD *)(a1 + 1584) = v19;
    *(_DWORD *)(a1 + 1596) = v90;
LABEL_27:
    *(_BYTE *)(v19 + v10) = 92;
    v20 = *(_DWORD *)(a1 + 1596);
    v21 = *(_DWORD *)(a1 + 1592) + 1;
    *(_DWORD *)(a1 + 1592) = v21;
    if ( v21 < v20 )
    {
      v22 = *(_QWORD *)(a1 + 1584);
      goto LABEL_29;
    }
    v79 = 2 * v20;
    v22 = sub_186B270(v79);
    v21 = *(_DWORD *)(a1 + 1592);
    v80 = *(_BYTE **)(a1 + 1584);
    if ( v21 )
    {
      if ( v21 - 1 <= 6 || (unsigned __int64)(v22 - (_QWORD)(v80 + 1)) <= 0xE )
      {
        for ( k = 0; k != v21; ++k )
          *(_BYTE *)(v22 + k) = v80[k];
        goto LABEL_141;
      }
      v81 = *(_DWORD *)(a1 + 1592);
      if ( v21 - 1 <= 0xE )
      {
        v83 = 0;
      }
      else
      {
        v82 = 0;
        do
        {
          *(__m128i *)(v22 + v82) = _mm_loadu_si128((const __m128i *)&v80[v82]);
          v82 += 16;
        }
        while ( v82 != 16LL * (v21 >> 4) );
        v83 = v21 & 0xFFFFFFF0;
        if ( (v21 & 0xF) == 0 )
          goto LABEL_141;
        v81 = v21 - v83;
        if ( v21 - v83 - 1 <= 6 )
          goto LABEL_134;
      }
      *(_QWORD *)(v22 + v83) = *(_QWORD *)&v80[v83];
      v83 += v81 & 0xFFFFFFF8;
      if ( (v81 & 7) != 0 )
      {
LABEL_134:
        *(_BYTE *)(v22 + v83) = v80[v83];
        v84 = v83 + 1;
        if ( (unsigned int)v84 < v21 )
        {
          *(_BYTE *)(v22 + v84) = v80[v84];
          v85 = v83 + 2;
          if ( (unsigned int)v85 < v21 )
          {
            *(_BYTE *)(v22 + v85) = v80[v85];
            v86 = v83 + 3;
            if ( (unsigned int)v86 < v21 )
            {
              *(_BYTE *)(v22 + v86) = v80[v86];
              v87 = v83 + 4;
              if ( (unsigned int)v87 < v21 )
              {
                *(_BYTE *)(v22 + v87) = v80[v87];
                v88 = v83 + 5;
                if ( (unsigned int)v88 < v21 )
                {
                  v89 = v83 + 6;
                  *(_BYTE *)(v22 + v88) = v80[v88];
                  if ( (unsigned int)v89 < v21 )
                    *(_BYTE *)(v22 + v89) = v80[v89];
                }
              }
            }
          }
        }
      }
    }
LABEL_141:
    if ( v80 != v122 && v80 )
    {
      sub_186B220(v80);
      v21 = *(_DWORD *)(a1 + 1592);
    }
    *(_QWORD *)(a1 + 1584) = v22;
    *(_DWORD *)(a1 + 1596) = v79;
LABEL_29:
    *(_BYTE *)(v22 + v21) = 117;
    v23 = *(_DWORD *)(a1 + 1596);
    v24 = *(_DWORD *)(a1 + 1592) + 1;
    *(_DWORD *)(a1 + 1592) = v24;
    if ( v24 < v23 )
    {
      v25 = *(_QWORD *)(a1 + 1584);
      goto LABEL_31;
    }
    v68 = 2 * v23;
    v25 = sub_186B270(v68);
    v24 = *(_DWORD *)(a1 + 1592);
    v69 = *(_BYTE **)(a1 + 1584);
    if ( v24 )
    {
      if ( v24 - 1 <= 6 || (unsigned __int64)(v25 - (_QWORD)(v69 + 1)) <= 0xE )
      {
        for ( m = 0; m != v24; ++m )
          *(_BYTE *)(v25 + m) = v69[m];
        goto LABEL_121;
      }
      v70 = *(_DWORD *)(a1 + 1592);
      if ( v24 - 1 <= 0xE )
      {
        v72 = 0;
      }
      else
      {
        v71 = 0;
        do
        {
          *(__m128i *)(v25 + v71) = _mm_loadu_si128((const __m128i *)&v69[v71]);
          v71 += 16;
        }
        while ( v71 != 16LL * (v24 >> 4) );
        v72 = v24 & 0xFFFFFFF0;
        if ( (v24 & 0xF) == 0 )
          goto LABEL_121;
        v70 = v24 - v72;
        if ( v24 - v72 - 1 <= 6 )
          goto LABEL_114;
      }
      *(_QWORD *)(v25 + v72) = *(_QWORD *)&v69[v72];
      v72 += v70 & 0xFFFFFFF8;
      if ( (v70 & 7) != 0 )
      {
LABEL_114:
        *(_BYTE *)(v25 + v72) = v69[v72];
        v73 = v72 + 1;
        if ( (unsigned int)v73 < v24 )
        {
          *(_BYTE *)(v25 + v73) = v69[v73];
          v74 = v72 + 2;
          if ( (unsigned int)v74 < v24 )
          {
            *(_BYTE *)(v25 + v74) = v69[v74];
            v75 = v72 + 3;
            if ( (unsigned int)v75 < v24 )
            {
              *(_BYTE *)(v25 + v75) = v69[v75];
              v76 = v72 + 4;
              if ( (unsigned int)v76 < v24 )
              {
                *(_BYTE *)(v25 + v76) = v69[v76];
                v77 = v72 + 5;
                if ( (unsigned int)v77 < v24 )
                {
                  v78 = v72 + 6;
                  *(_BYTE *)(v25 + v77) = v69[v77];
                  if ( (unsigned int)v78 < v24 )
                    *(_BYTE *)(v25 + v78) = v69[v78];
                }
              }
            }
          }
        }
      }
    }
LABEL_121:
    if ( v69 != v122 && v69 )
    {
      sub_186B220(v69);
      v24 = *(_DWORD *)(a1 + 1592);
    }
    *(_QWORD *)(a1 + 1584) = v25;
    *(_DWORD *)(a1 + 1596) = v68;
LABEL_31:
    *(_BYTE *)(v25 + v24) = 123;
    v26 = *(_DWORD *)(a1 + 1592) + 1;
    *(_DWORD *)(a1 + 1592) = v26;
    if ( v12 )
    {
      v27 = v12 & 0xF;
      if ( v27 <= 9 )
      {
        v28 = v27 + 48;
        if ( v11 )
        {
LABEL_34:
          v29 = (unsigned int)*(v11 - 1);
          if ( (_DWORD)v29 == *(v11 - 2) )
          {
            v34 = (unsigned int)(3 * v29 + 1) >> 1;
            v35 = v34 + 8;
            if ( (int)v29 + 8 >= (unsigned int)v35 || (unsigned int)v29 >= v34 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v126, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v126);
              sub_233E40((__int64)v126);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            goto LABEL_42;
          }
LABEL_35:
          v30 = (char *)v11 + v29;
          goto LABEL_36;
        }
LABEL_77:
        v53 = sub_186B270(0xAu);
        *(_BYTE *)(v53 + 8) = v28;
        v11 = (_DWORD *)(v53 + 8);
        v12 >>= 4;
        *(_QWORD *)v53 = 2;
        ++*(_DWORD *)(v53 + 4);
        goto LABEL_37;
      }
      v28 = v27 + 87;
      if ( !v11 )
        goto LABEL_77;
      while ( 1 )
      {
        v29 = (unsigned int)*(v11 - 1);
        if ( (_DWORD)v29 != *(v11 - 2) )
          goto LABEL_35;
        v34 = (unsigned int)(3 * v29 + 1) >> 1;
        v35 = v34 + 8;
        if ( (int)v29 + 8 >= (unsigned int)v35 || (unsigned int)v29 >= v34 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v126, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v126);
          sub_233E40((__int64)v126);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
LABEL_42:
        v121 = v34;
        v36 = (unsigned int *)sub_186B300(v11 - 2, v35);
        v11 = v36 + 2;
        *v36 = v121;
        v30 = (char *)v36 + v36[1] + 8;
LABEL_36:
        *v30 = v28;
        v31 = (unsigned int)*(v11 - 1);
        v12 >>= 4;
        v32 = v31 + 1;
        *(v11 - 1) = v31 + 1;
        if ( !v12 )
          break;
LABEL_37:
        v33 = v12 & 0xF;
        v28 = v33 + 48;
        if ( v33 <= 9 )
          goto LABEL_34;
        v28 = v33 + 87;
      }
      v26 = *(_DWORD *)(a1 + 1592);
    }
    else
    {
      if ( v11 )
      {
        v66 = (unsigned int)*(v11 - 1);
        if ( (_DWORD)v66 == *(v11 - 2) )
        {
          v112 = (unsigned int)(3 * v66 + 1) >> 1;
          if ( (int)v66 + 8 >= v112 + 8 || (unsigned int)v66 >= v112 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v126, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v126);
            sub_233E40((__int64)v126);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v113 = (unsigned int *)sub_186B300(v11 - 2, v112 + 8);
          v114 = v113[1];
          v11 = v113 + 2;
          *v113 = v112;
          v26 = *(_DWORD *)(a1 + 1592);
          v67 = (char *)v11 + v114;
        }
        else
        {
          v67 = (char *)v11 + v66;
        }
      }
      else
      {
        v120 = (_QWORD *)sub_186B270(0xAu);
        *v120 = 2;
        v26 = *(_DWORD *)(a1 + 1592);
        v11 = v120 + 1;
        v67 = v11;
      }
      *v67 = 48;
      v31 = (unsigned int)*(v11 - 1);
      v32 = v31 + 1;
      *(v11 - 1) = v31 + 1;
    }
    if ( v32 )
    {
      for ( n = (char *)v11 + v31; ; --n )
      {
        v39 = *(_DWORD *)(a1 + 1596);
        if ( v26 < v39 )
        {
          v38 = *(_QWORD *)(a1 + 1584);
          goto LABEL_50;
        }
        v40 = 2 * v39;
        v38 = sub_186B270(v40);
        v26 = *(_DWORD *)(a1 + 1592);
        v41 = *(_BYTE **)(a1 + 1584);
        if ( v26 )
        {
          if ( v26 - 1 <= 6 || (unsigned __int64)(v38 - (_QWORD)(v41 + 1)) <= 0xE )
          {
            for ( ii = 0; ii != v26; ++ii )
              *(_BYTE *)(v38 + ii) = v41[ii];
            goto LABEL_69;
          }
          v42 = *(_DWORD *)(a1 + 1592);
          if ( v26 - 1 <= 0xE )
          {
            v44 = 0;
          }
          else
          {
            v43 = 0;
            do
            {
              *(__m128i *)(v38 + v43) = _mm_loadu_si128((const __m128i *)&v41[v43]);
              v43 += 16;
            }
            while ( 16LL * (v26 >> 4) != v43 );
            v44 = v26 & 0xFFFFFFF0;
            if ( (v26 & 0xF) == 0 )
              goto LABEL_69;
            v42 = v26 - v44;
            if ( v26 - v44 - 1 <= 6 )
              goto LABEL_62;
          }
          *(_QWORD *)(v38 + v44) = *(_QWORD *)&v41[v44];
          v44 += v42 & 0xFFFFFFF8;
          if ( (v42 & 7) != 0 )
          {
LABEL_62:
            *(_BYTE *)(v38 + v44) = v41[v44];
            v45 = v44 + 1;
            if ( (unsigned int)v45 < v26 )
            {
              *(_BYTE *)(v38 + v45) = v41[v45];
              v46 = v44 + 2;
              if ( (unsigned int)v46 < v26 )
              {
                *(_BYTE *)(v38 + v46) = v41[v46];
                v47 = v44 + 3;
                if ( (unsigned int)v47 < v26 )
                {
                  *(_BYTE *)(v38 + v47) = v41[v47];
                  v48 = v44 + 4;
                  if ( (unsigned int)v48 < v26 )
                  {
                    *(_BYTE *)(v38 + v48) = v41[v48];
                    v49 = v44 + 5;
                    if ( (unsigned int)v49 < v26 )
                    {
                      v50 = v44 + 6;
                      *(_BYTE *)(v38 + v49) = v41[v49];
                      if ( (unsigned int)v50 < v26 )
                        *(_BYTE *)(v38 + v50) = v41[v50];
                    }
                  }
                }
              }
            }
          }
        }
LABEL_69:
        if ( v41 && v41 != v122 )
        {
          v123 = v38;
          sub_186B220(v41);
          v26 = *(_DWORD *)(a1 + 1592);
          v38 = v123;
        }
        *(_QWORD *)(a1 + 1584) = v38;
        *(_DWORD *)(a1 + 1596) = v40;
LABEL_50:
        *(_BYTE *)(v38 + v26) = *n;
        v26 = *(_DWORD *)(a1 + 1592) + 1;
        *(_DWORD *)(a1 + 1592) = v26;
        if ( n == (_BYTE *)v11 )
          break;
      }
    }
    v51 = *(_DWORD *)(a1 + 1596);
    if ( v26 >= v51 )
    {
      v55 = 2 * v51;
      v52 = sub_186B270(v55);
      v26 = *(_DWORD *)(a1 + 1592);
      v56 = *(_BYTE **)(a1 + 1584);
      if ( v26 )
      {
        if ( v26 - 1 <= 6 || (unsigned __int64)(v52 - (_QWORD)(v56 + 1)) <= 0xE )
        {
          for ( jj = 0; jj != v26; ++jj )
            *(_BYTE *)(v52 + jj) = v56[jj];
          goto LABEL_97;
        }
        v57 = *(_DWORD *)(a1 + 1592);
        if ( v26 - 1 <= 0xE )
        {
          v59 = 0;
        }
        else
        {
          v58 = 0;
          do
          {
            *(__m128i *)(v52 + v58) = _mm_loadu_si128((const __m128i *)&v56[v58]);
            v58 += 16;
          }
          while ( 16LL * (v26 >> 4) != v58 );
          v59 = v26 & 0xFFFFFFF0;
          if ( (v26 & 0xF) == 0 )
            goto LABEL_97;
          v57 = v26 - v59;
          if ( v26 - v59 - 1 <= 6 )
          {
LABEL_90:
            *(_BYTE *)(v52 + v59) = v56[v59];
            v60 = v59 + 1;
            if ( (unsigned int)v60 < v26 )
            {
              *(_BYTE *)(v52 + v60) = v56[v60];
              v61 = v59 + 2;
              if ( (unsigned int)v61 < v26 )
              {
                *(_BYTE *)(v52 + v61) = v56[v61];
                v62 = v59 + 3;
                if ( (unsigned int)v62 < v26 )
                {
                  *(_BYTE *)(v52 + v62) = v56[v62];
                  v63 = v59 + 4;
                  if ( (unsigned int)v63 < v26 )
                  {
                    *(_BYTE *)(v52 + v63) = v56[v63];
                    v64 = v59 + 5;
                    if ( (unsigned int)v64 < v26 )
                    {
                      v65 = v59 + 6;
                      *(_BYTE *)(v52 + v64) = v56[v64];
                      if ( (unsigned int)v65 < v26 )
                        *(_BYTE *)(v52 + v65) = v56[v65];
                    }
                  }
                }
              }
            }
            goto LABEL_97;
          }
        }
        *(_QWORD *)(v52 + v59) = *(_QWORD *)&v56[v59];
        v59 += v57 & 0xFFFFFFF8;
        if ( (v57 & 7) != 0 )
          goto LABEL_90;
      }
LABEL_97:
      if ( v56 && v56 != v122 )
      {
        sub_186B220(v56);
        v26 = *(_DWORD *)(a1 + 1592);
      }
      *(_QWORD *)(a1 + 1584) = v52;
      *(_DWORD *)(a1 + 1596) = v55;
      goto LABEL_75;
    }
    v52 = *(_QWORD *)(a1 + 1584);
LABEL_75:
    *(_BYTE *)(v52 + v26) = 125;
    v10 = *(_DWORD *)(a1 + 1592) + 1;
LABEL_14:
    v8 = v128;
    ++v9;
    *(_DWORD *)(a1 + 1592) = v10;
  }
  while ( (unsigned int)v9 < v8 );
  v16 = *(char **)(a1 + 1584);
  *a3 = v10;
  if ( v11 )
    sub_186B220(v11 - 2);
LABEL_17:
  if ( ptr != v129 && ptr )
    sub_186B220(ptr);
  if ( v125 )
    byte_1C7EBA0 = 1;
  return v16;
}

