__int64 __fastcall sub_714A10(__int64 *a1, __int64 *a2, __int64 a3)
{
  char **v3; // rbx
  __int64 v4; // rdx
  char **exception; // r12
  __int64 v6; // rdx
  char **v7; // rbx
  __int64 v8; // rdx
  __int64 *v9; // r13
  __int64 *v10; // rbx
  unsigned int i; // r12d
  __int64 v12; // rbp
  unsigned int v13; // eax
  _QWORD *v14; // r9
  __int64 *v15; // rbp
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // ebx
  unsigned int v23; // edx
  unsigned int *v24; // rax
  _DWORD *v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rdx
  int v28; // eax
  _QWORD *v29; // r15
  char *v30; // r8
  int v31; // eax
  int v32; // ecx
  __int64 v33; // rbp
  __int64 v34; // r14
  __int64 *v35; // rbx
  unsigned int v36; // esi
  __int64 v37; // rax
  __int64 *v38; // rdi
  __int64 *j; // rax
  __int64 v40; // rdx
  const double *v41; // rdi
  __int64 v42; // rax
  unsigned int v43; // edx
  const double *v44; // r10
  __int64 v45; // rdx
  const double *v46; // r11
  const double *m; // rax
  double v48; // rdx
  __int64 *v49; // rdx
  __int64 v50; // rax
  char v51; // r11
  __int64 v52; // r12
  int v53; // edi
  __int64 v54; // rax
  __int64 *v55; // r9
  __int64 *n; // rax
  __int64 v57; // rsi
  __int64 v58; // r9
  int v59; // eax
  unsigned int v60; // eax
  __int64 v61; // rsi
  int v62; // eax
  _QWORD *v63; // rsi
  __int64 v64; // rsi
  __int64 *k; // rax
  __int64 v66; // rdx
  __m128 v67; // xmm0
  unsigned int v68; // r10d
  size_t v69; // rsi
  _DWORD *v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rbx
  __int64 v74; // rdi
  __int64 v75; // r14
  unsigned int v76; // ebp
  int v77; // r8d
  __int64 v78; // r14
  __int64 *v79; // rbx
  __int64 v80; // r12
  __int64 v81; // r9
  int v82; // ecx
  __int64 v83; // rax
  __int64 *v84; // rsi
  __int64 *ii; // rax
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 result; // rax
  _QWORD *v92; // r15
  __int64 v93; // rax
  int v94; // r8d
  _QWORD *v95; // rax
  unsigned int v96; // r12d
  size_t v97; // rsi
  unsigned int *v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rax
  int v101; // [rsp+0h] [rbp-128h]
  _QWORD *v102; // [rsp+8h] [rbp-120h]
  unsigned int v103; // [rsp+10h] [rbp-118h]
  int v104; // [rsp+10h] [rbp-118h]
  __int64 v105; // [rsp+10h] [rbp-118h]
  __int64 *v106; // [rsp+18h] [rbp-110h]
  int v107; // [rsp+18h] [rbp-110h]
  int v108[2]; // [rsp+20h] [rbp-108h]
  int v109; // [rsp+20h] [rbp-108h]
  int v110; // [rsp+20h] [rbp-108h]
  char v111; // [rsp+28h] [rbp-100h]
  char v112; // [rsp+2Fh] [rbp-F9h]
  char v113; // [rsp+2Fh] [rbp-F9h]
  char v114; // [rsp+2Fh] [rbp-F9h]
  int v115[2]; // [rsp+30h] [rbp-F8h]
  int v116[2]; // [rsp+38h] [rbp-F0h]
  __int64 v117; // [rsp+40h] [rbp-E8h]
  void *ptr; // [rsp+48h] [rbp-E0h]
  _QWORD *v120; // [rsp+58h] [rbp-D0h]
  __int64 v121; // [rsp+60h] [rbp-C8h]
  int v122; // [rsp+70h] [rbp-B8h]
  unsigned int v123; // [rsp+74h] [rbp-B4h]
  __int64 v124; // [rsp+78h] [rbp-B0h]
  __int64 v125; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v126; // [rsp+90h] [rbp-98h] BYREF
  _QWORD *v127; // [rsp+98h] [rbp-90h] BYREF
  __m128i v128; // [rsp+A0h] [rbp-88h] BYREF
  __int64 *v129; // [rsp+B0h] [rbp-78h] BYREF
  int v130; // [rsp+B8h] [rbp-70h]
  __int64 v131; // [rsp+BCh] [rbp-6Ch]
  __m128i v132[5]; // [rsp+D0h] [rbp-58h] BYREF

  v106 = a1;
  v117 = a3;
  v131 = 0;
  v9 = (__int64 *)sub_186B270(0x80u);
  *(_OWORD *)v9 = 0;
  *((_OWORD *)v9 + 1) = 0;
  *((_OWORD *)v9 + 2) = 0;
  *((_OWORD *)v9 + 3) = 0;
  *((_OWORD *)v9 + 4) = 0;
  *((_OWORD *)v9 + 5) = 0;
  *((_OWORD *)v9 + 6) = 0;
  *((_OWORD *)v9 + 7) = 0;
  v10 = (__int64 *)a2[1];
  v126 = *a2;
  if ( v10 )
  {
    v102 = nullptr;
    for ( i = 0; i < *((_DWORD *)v10 - 1); ++i )
    {
      while ( 1 )
      {
        v12 = v10[i];
        if ( v12 )
          ++*(_DWORD *)(v12 + 8);
        if ( !v102 )
        {
          v95 = (_QWORD *)sub_186B270(0x18u);
          *v95 = 2;
          v27 = v95 + 1;
          v10 = (__int64 *)a2[1];
          v102 = v27;
          v28 = 1;
          v25 = v27;
          goto LABEL_18;
        }
        v13 = *((_DWORD *)v102 - 1);
        if ( v13 == *((_DWORD *)v102 - 2) )
          break;
        ++i;
        v102[v13] = v12;
        *((_DWORD *)v102 - 1) = v13 + 1;
        if ( i >= *((_DWORD *)v10 - 1) )
          goto LABEL_9;
      }
      v22 = (3 * v13 + 1) >> 1;
      v23 = 8 * v22 + 8;
      if ( 8 * v13 + 8 >= v23 || v13 >= v22 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_109F38(v132[0].m128i_i64, "Overflow encountered when expanding vector", v6);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v132);
        sub_233E40((__int64)v132);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = (unsigned int *)sub_186B300(v102 - 1, v23);
      v25 = v24 + 2;
      v26 = v24[1];
      *v24 = v22;
      v102 = v25;
      LODWORD(v24) = v26;
      v10 = (__int64 *)a2[1];
      v27 = &v25[2 * v26];
      v28 = (_DWORD)v24 + 1;
LABEL_18:
      *v27 = v12;
      *(v25 - 1) = v28;
      if ( !v10 )
      {
        v14 = (_QWORD *)a1[20];
        v124 = *a1;
        if ( v14 )
        {
          v103 = *((_DWORD *)v14 - 1);
          v120 = a1 + 20;
        }
        else
        {
          v120 = a1 + 20;
          v103 = 0;
        }
        goto LABEL_22;
      }
    }
LABEL_9:
    v14 = (_QWORD *)a1[20];
    v124 = *a1;
    if ( v14 )
    {
      v103 = *((_DWORD *)v14 - 1);
      v120 = a1 + 20;
      v100 = *((unsigned int *)v10 - 1);
      if ( (_DWORD)v100 )
      {
        v15 = &v10[v100];
        goto LABEL_13;
      }
    }
    else
    {
      v120 = a1 + 20;
      v103 = *((_DWORD *)v10 - 1);
      if ( v103 )
      {
        v15 = &v10[v103];
        v16 = (_QWORD *)sub_186B270(0x18u);
        v14 = v16 + 1;
        *v16 = 2;
        v103 = 0;
        v17 = v16 + 1;
        a1[20] = (__int64)(v16 + 1);
        v18 = 1;
        while ( 1 )
        {
          v19 = *v10++;
          *v17 = v19;
          *((_DWORD *)v14 - 1) = v18;
          if ( v10 == v15 )
            break;
LABEL_13:
          v20 = *((_DWORD *)v14 - 1);
          if ( v20 == *((_DWORD *)v14 - 2) )
          {
            v96 = (3 * v20 + 1) >> 1;
            v97 = 8 * v96 + 8;
            if ( 8 * v20 + 8 >= (unsigned int)v97 || v20 >= v96 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_109F38(v132[0].m128i_i64, "Overflow encountered when expanding vector", v4);
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, v132);
              sub_233E40((__int64)v132);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v98 = (unsigned int *)sub_186B300(v14 - 1, v97);
            v99 = v98[1];
            v14 = v98 + 2;
            *v98 = v96;
            LODWORD(v98) = v99;
            a1[20] = (__int64)v14;
            v17 = &v14[v99];
            v18 = (_DWORD)v98 + 1;
          }
          else
          {
            v21 = v20;
            v18 = v20 + 1;
            v17 = &v14[v21];
          }
        }
      }
    }
  }
  else
  {
    v14 = (_QWORD *)a1[20];
    v124 = *a1;
    if ( v14 )
    {
      v102 = nullptr;
      v120 = a1 + 20;
      v103 = *((_DWORD *)v14 - 1);
    }
    else
    {
      v103 = 0;
      v120 = a1 + 20;
      v102 = nullptr;
    }
  }
LABEL_22:
  v121 = 0;
  v29 = nullptr;
  v30 = &byte_8;
LABEL_23:
  v31 = 0;
  if ( v14 )
    goto LABEL_24;
LABEL_25:
  if ( v31 != v103 )
  {
    v32 = (_DWORD)v30 - 1;
    v33 = v14[v31 - 1];
    v34 = 16LL * (unsigned int)v30;
    v35 = &v9[(unsigned __int64)v34 / 8];
    v36 = *(_DWORD *)(v33 + 12);
    v37 = 16LL * (((_DWORD)v30 - 1) & v36);
    v38 = &v9[(unsigned __int64)v37 / 8];
    if ( v37 != v34 )
    {
      for ( j = &v9[(unsigned __int64)v37 / 8]; v35 != j; j += 2 )
      {
        v40 = *j;
        if ( (unsigned __int64)*j > 1 )
        {
          if ( *(_DWORD *)(v40 + 12) == v36 && v33 == v40 )
          {
LABEL_76:
            --*((_DWORD *)v14 - 1);
            goto LABEL_24;
          }
        }
        else if ( !v40 )
        {
          goto LABEL_33;
        }
      }
    }
    if ( v38 != v9 )
    {
      for ( k = v9; v38 != k; k += 2 )
      {
        v66 = *k;
        if ( (unsigned __int64)*k > 1 )
        {
          if ( *(_DWORD *)(v66 + 12) == v36 && v33 == v66 )
            goto LABEL_76;
        }
        else if ( !v66 )
        {
          break;
        }
      }
    }
LABEL_33:
    v41 = *(const double **)v117;
    v42 = *(unsigned int *)(v117 + 8);
    v43 = v42 - 1;
    v42 *= 16;
    v44 = (const double *)(*(_QWORD *)v117 + v42);
    v45 = 16LL * (v36 & v43);
    v46 = (const double *)(*(_QWORD *)v117 + v45);
    if ( v45 != v42 )
    {
      for ( m = (const double *)(*(_QWORD *)v117 + v45); v44 != m; m += 2 )
      {
        v48 = *m;
        if ( *(_QWORD *)m > 1u )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v48 + 12LL) == v36 && v33 == *(_QWORD *)&v48 )
          {
LABEL_78:
            v129 = v9;
            v67 = _mm_loadh_ps(m + 1);
            v130 = (int)v30;
            v128 = (__m128i)v67;
            sub_686B20((__int64)&v129, &v128);
            v9 = v129;
            LODWORD(v30) = v130;
            v14 = (_QWORD *)v106[20];
            --*((_DWORD *)v14 - 1);
            goto LABEL_24;
          }
        }
        else if ( v48 == 0.0 )
        {
          goto LABEL_40;
        }
      }
    }
    if ( v41 == v46 )
    {
LABEL_40:
      v123 = *(_DWORD *)(v33 + 24);
      if ( !v29 )
        goto LABEL_90;
LABEL_41:
      *((_DWORD *)v29 - 1) = 0;
      v49 = (__int64 *)(v33 + 32);
      v50 = 8LL * *(unsigned int *)(v33 + 24);
      *(_QWORD *)v108 = v33 + 32 + v50;
      if ( !v50 )
        goto LABEL_91;
      goto LABEL_42;
    }
    while ( 1 )
    {
      v72 = *(_QWORD *)v41;
      if ( *(_QWORD *)v41 > 1u )
      {
        if ( *(_DWORD *)(v72 + 12) == v36 && v33 == v72 )
        {
          m = v41;
          goto LABEL_78;
        }
      }
      else if ( !v72 )
      {
        v123 = *(_DWORD *)(v33 + 24);
        if ( v29 )
          goto LABEL_41;
LABEL_90:
        v49 = (__int64 *)(v33 + 32);
        *(_QWORD *)v108 = v33 + 32 + 8LL * v123;
        if ( !(8LL * v123) )
        {
LABEL_91:
          if ( !v123 )
            goto LABEL_92;
          goto LABEL_23;
        }
LABEL_42:
        v51 = 0;
        do
        {
          v52 = *v49;
          v53 = *(_DWORD *)(*v49 + 12);
          v128.m128i_i64[0] = *v49;
          v54 = 16LL * (v53 & (unsigned int)v32);
          v55 = &v9[(unsigned __int64)v54 / 8];
          if ( v34 != v54 )
          {
            for ( n = &v9[(unsigned __int64)v54 / 8]; v35 != n; n += 2 )
            {
              v57 = *n;
              if ( (unsigned __int64)*n > 1 )
              {
                if ( *(_DWORD *)(v57 + 12) == v53 && v52 == v57 )
                {
LABEL_56:
                  v58 = n[1];
                  if ( v29 )
                  {
                    v60 = *((_DWORD *)v29 - 1);
                    if ( v60 == *((_DWORD *)v29 - 2) )
                    {
                      v68 = (3 * v60 + 1) >> 1;
                      v69 = 8 * v68 + 8;
                      if ( 8 * v60 + 8 >= (unsigned int)v69 || v60 >= v68 )
                      {
                        v7 = (char **)__cxa_allocate_exception(0x28u);
                        sub_109F38(v132[0].m128i_i64, "Overflow encountered when expanding vector", v8);
                        *v7 = (char *)off_1C63128;
                        sub_2333C0(v7 + 1, v132);
                        sub_233E40((__int64)v132);
                        __cxa_throw(
                          v7,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v122 = (int)v30;
                      HIDWORD(ptr) = (3 * v60 + 1) >> 1;
                      LODWORD(ptr) = v32;
                      *(_QWORD *)v116 = v58;
                      *(_QWORD *)v115 = v49;
                      v113 = v51;
                      v70 = (_DWORD *)sub_186B300(v29 - 1, v69);
                      v71 = (unsigned int)v70[1];
                      v29 = v70 + 2;
                      v51 = v113;
                      v49 = *(__int64 **)v115;
                      v58 = *(_QWORD *)v116;
                      v32 = (int)ptr;
                      *v70 = HIDWORD(ptr);
                      LODWORD(v70) = v71;
                      LODWORD(v30) = v122;
                      v63 = &v29[v71];
                      v62 = (_DWORD)v70 + 1;
                    }
                    else
                    {
                      v61 = v60;
                      v62 = v60 + 1;
                      v63 = &v29[v61];
                    }
                  }
                  else
                  {
                    ptr = (void *)__PAIR64__((unsigned int)v30, v32);
                    *(_QWORD *)v116 = n[1];
                    *(_QWORD *)v115 = v49;
                    v114 = v51;
                    v92 = (_QWORD *)sub_186B270(0x18u);
                    *v92 = 2;
                    v51 = v114;
                    v62 = 1;
                    v29 = v92 + 1;
                    v49 = *(__int64 **)v115;
                    v58 = *(_QWORD *)v116;
                    v32 = (int)ptr;
                    LODWORD(v30) = HIDWORD(ptr);
                    v63 = v29;
                  }
                  *v63 = v58;
                  *((_DWORD *)v29 - 1) = v62;
                  v51 |= v52 != v58;
                  goto LABEL_51;
                }
              }
              else if ( !v57 )
              {
                goto LABEL_50;
              }
            }
          }
          if ( v55 != v9 )
          {
            for ( n = v9; v55 != n; n += 2 )
            {
              v64 = *n;
              if ( (unsigned __int64)*n > 1 )
              {
                if ( *(_DWORD *)(v64 + 12) == v53 && v52 == v64 )
                  goto LABEL_56;
              }
              else if ( !v64 )
              {
                break;
              }
            }
          }
LABEL_50:
          LODWORD(ptr) = (_DWORD)v30;
          v116[0] = v32;
          *(_QWORD *)v115 = v49;
          v112 = v51;
          sub_712A90(v120, &v128);
          LODWORD(v30) = (_DWORD)ptr;
          v32 = v116[0];
          v49 = *(__int64 **)v115;
          v51 = v112;
LABEL_51:
          ++v49;
        }
        while ( *(__int64 **)v108 != v49 );
        if ( v29 )
          v59 = *((_DWORD *)v29 - 1);
        else
          v59 = 0;
        if ( v123 != v59 )
        {
          v14 = (_QWORD *)v106[20];
          goto LABEL_23;
        }
        if ( v51 )
        {
          v93 = sub_15DC610(
                  *v106,
                  *(_QWORD *)(v33 + 16),
                  v123,
                  (int)v29,
                  (int)v30,
                  v58,
                  v101,
                  (int)v102,
                  v103,
                  (int)v106,
                  (int)v30,
                  v111,
                  v115[0],
                  v116[0],
                  v117,
                  ptr);
          v73 = v93;
          if ( v93 )
            ++*(_DWORD *)(v93 + 8);
          sub_710A80(v121, v124);
        }
        else
        {
LABEL_92:
          v109 = (int)v30;
          ++*(_DWORD *)(v33 + 8);
          sub_710A80(v121, v124);
          v73 = v33;
        }
        v129 = v9;
        v130 = v109;
        v132[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v33, (__m128i)(unsigned __int64)v73);
        sub_686B20((__int64)&v129, v132);
        v125 = v73;
        v9 = v129;
        v94 = v130;
        if ( v73 )
          ++*(_DWORD *)(v73 + 8);
        v110 = v94;
        v127 = v102;
        sub_712A90(&v127, &v125);
        LODWORD(v30) = v110;
        v121 = v73;
        v102 = v127;
        v14 = (_QWORD *)v106[20];
        --*((_DWORD *)v14 - 1);
LABEL_24:
        v31 = *((_DWORD *)v14 - 1);
        goto LABEL_25;
      }
      v41 += 2;
      if ( v46 == v41 )
        goto LABEL_40;
    }
  }
  v74 = a2[1];
  if ( v74 )
  {
    v75 = (unsigned int)v30;
    v76 = 0;
    v77 = (_DWORD)v30 - 1;
    v78 = 16 * v75;
    v79 = &v9[(unsigned __int64)v78 / 8];
    do
    {
      if ( v76 >= *(_DWORD *)(v74 - 4) )
        break;
      v80 = v74 + 8LL * v76;
      v81 = *(_QWORD *)v80;
      v82 = *(_DWORD *)(*(_QWORD *)v80 + 12LL);
      v83 = 16LL * (v82 & (unsigned int)v77);
      v84 = &v9[(unsigned __int64)v83 / 8];
      if ( v83 == v78 )
      {
LABEL_104:
        if ( v84 != v9 )
        {
          for ( ii = v9; v84 != ii; ii += 2 )
          {
            v87 = *ii;
            if ( (unsigned __int64)*ii > 1 )
            {
              if ( *(_DWORD *)(v87 + 12) == v82 && v81 == v87 )
                goto LABEL_112;
            }
            else if ( !v87 )
            {
              break;
            }
          }
        }
LABEL_147:
        BUG();
      }
      ii = &v9[(unsigned __int64)v83 / 8];
      while ( 1 )
      {
        while ( 1 )
        {
          v86 = *ii;
          if ( (unsigned __int64)*ii > 1 )
            break;
          if ( !v86 )
            goto LABEL_147;
          ii += 2;
          if ( v79 == ii )
            goto LABEL_104;
        }
        if ( *(_DWORD *)(v86 + 12) == v82 && v81 == v86 )
          break;
        ii += 2;
        if ( v79 == ii )
          goto LABEL_104;
      }
LABEL_112:
      v88 = ii[1];
      v89 = *a2;
      if ( v88 )
        ++*(_DWORD *)(v88 + 8);
      if ( (*(_DWORD *)(v81 + 8))-- == 1 )
      {
        v107 = v77;
        v105 = v88;
        sub_15D7BC0(v89, v81);
        v77 = v107;
        v74 = a2[1];
        v88 = v105;
      }
      *(_QWORD *)v80 = v88;
      ++v76;
    }
    while ( v74 );
  }
  if ( v29 )
    sub_186B220(v29 - 1);
  if ( v121 )
  {
    v104 = *(_DWORD *)(v121 + 8);
    *(_DWORD *)(v121 + 8) = v104 - 1;
    if ( v104 == 1 )
      sub_15D7BC0(v124, v121);
  }
  v127 = v102;
  result = sub_2334C0(&v126);
  if ( v9 )
    return sub_186B220(v9);
  return result;
}

