__int64 __fastcall sub_65D4E0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdx
  __int16 v9; // ax
  char *v10; // r15
  _DWORD *v11; // rax
  _QWORD *v12; // rbp
  _QWORD *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  _QWORD *v17; // rbp
  _QWORD *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  _QWORD *v21; // rbp
  _QWORD *v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdi
  char *v25; // rdi
  int v26; // ecx
  __int64 v27; // rsi
  char *v28; // rax
  char *v29; // rdx
  unsigned int v30; // r12d
  size_t v31; // rbp
  _OWORD *v32; // rax
  _OWORD *v33; // rsi
  _OWORD *v34; // rcx
  char *v35; // rdi
  int v36; // ecx
  __int64 v37; // rsi
  char *v38; // rax
  char *v39; // rdx
  unsigned int v40; // r12d
  size_t v41; // rbp
  _OWORD *v42; // rax
  _OWORD *v43; // rsi
  _OWORD *v44; // rcx
  _QWORD *v45; // rbp
  _QWORD *v46; // r12
  __int64 v47; // rsi
  __int64 v48; // rdi
  _QWORD *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  _QWORD *v53; // rcx
  _QWORD *v54; // rcx
  unsigned int v55; // eax
  __int64 v56; // rsi
  __int64 result; // rax
  _QWORD *v58; // rsi
  __int64 v59; // r13
  unsigned __int128 k; // kr00_16
  __int64 v61; // rax
  __int64 v62; // rdx
  unsigned __int64 v63; // rax
  __m128i v64; // xmm1
  __int64 v65; // rax
  __int64 v66; // rdx
  unsigned __int64 v67; // r13
  __m128i v68; // xmm0
  __int64 v69; // rdx
  unsigned int v70; // eax
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rdx
  unsigned int v74; // eax
  __int64 v75; // rsi
  __int64 v76; // rdi
  unsigned int v77; // r13d
  size_t v78; // rsi
  unsigned int *v79; // rax
  __int64 v80; // rdx
  unsigned int v81; // ecx
  size_t v82; // rsi
  __int32 *v83; // rax
  __int32 v84; // ecx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rcx
  _DWORD *v88; // rax
  __int64 v89; // rdi
  __int16 v90; // ax
  __int64 v91; // rdx
  _DWORD *v92; // rax
  __int64 *v93; // rax
  __int64 *j; // rcx
  __int64 v95; // rdx
  _QWORD *v96; // rdx
  unsigned int v97; // eax
  __int64 v98; // rcx
  int v99; // eax
  _QWORD *v100; // rcx
  _QWORD *v101; // rdi
  unsigned int v102; // eax
  __int64 v103; // rdx
  _QWORD *v104; // rdx
  unsigned int v105; // ebx
  size_t v106; // rsi
  unsigned int *v107; // rax
  unsigned int v108; // ebx
  size_t v109; // rsi
  unsigned int *v110; // rax
  __int64 v111; // rdx
  _QWORD *v112; // rax
  _QWORD *v113; // rax
  _QWORD *v114; // rax
  _QWORD *v115; // rax
  unsigned int v116; // esi
  unsigned int v117; // esi
  _QWORD *v118; // rax
  unsigned int v119; // edx
  unsigned int v120; // edx
  unsigned int v121; // r15d
  __int64 v122; // rdx
  __int64 v123; // rax
  __int64 *v124; // rax
  __int64 *i; // rcx
  __int64 v126; // rdx
  unsigned int v127; // ecx
  size_t v128; // rsi
  _DWORD *v129; // rdx
  unsigned int v130; // ecx
  size_t v131; // rsi
  _DWORD *v132; // rdx
  _DWORD *v133; // rax
  _QWORD *v134; // rax
  _QWORD *v135; // rax
  char **v136; // rbp
  char **v137; // rbp
  char **v138; // rbp
  char **v139; // rbp
  char **exception; // rbp
  __m128i v143; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v144; // [rsp+20h] [rbp-98h] BYREF
  __m128i v145; // [rsp+40h] [rbp-78h] BYREF
  __m128i v146; // [rsp+50h] [rbp-68h] BYREF
  __int64 v147[11]; // [rsp+60h] [rbp-58h] BYREF

  v6 = a2;
  v9 = *(_WORD *)(a2 + 4);
  if ( v9 == 2 )
  {
    while ( !*(_DWORD *)(v6 + 16) )
    {
      v6 = *(_QWORD *)(v6 + 24);
      v9 = *(_WORD *)(v6 + 4);
      if ( v9 != 2 )
        goto LABEL_2;
    }
    v10 = (char *)*a1;
  }
  else
  {
LABEL_2:
    v10 = (char *)*a1;
    if ( !v9 )
    {
      v11 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
      if ( v11 )
      {
        if ( !*v11 && v11[1] == 9 && *(_DWORD *)(v6 + 24) == 2 )
        {
          v85 = *(_QWORD *)(v6 + 40);
          if ( !*(_WORD *)(v85 + 4) )
          {
            v86 = *(_QWORD *)(v85 + 16);
            v87 = *((_QWORD *)v10 + 105);
            if ( *(_QWORD *)(v86 + 40) == v87 )
            {
              v88 = *(_DWORD **)(v86 + 24);
              if ( !v88 || *v88 == -1 )
              {
                v89 = *(_QWORD *)(v6 + 32);
                v90 = *(_WORD *)(v89 + 4);
                if ( v90 == 1 )
                  goto LABEL_137;
                if ( v90 != 2 )
                {
                  if ( !v90 )
                  {
                    v91 = *(_QWORD *)(v89 + 16);
                    v92 = *(_DWORD **)(v91 + 24);
                    if ( v92 )
                    {
                      if ( *v92 )
                      {
                        if ( *(_QWORD *)(v91 + 40) == v87 && *v92 == -1 )
                          goto LABEL_137;
                      }
                      else if ( v92[1] == 5 )
                      {
                        if ( *(_DWORD *)(v89 + 24) )
                        {
                          v121 = 0;
                          do
                          {
                            v122 = *(_QWORD *)(v89 + 8LL * v121 + 32);
                            if ( *(_WORD *)(v122 + 4)
                              || (v123 = *(_QWORD *)(v122 + 16), *(_QWORD *)(v123 + 40) != *(_QWORD *)(*a1 + 840LL))
                              || (v133 = *(_DWORD **)(v123 + 24)) != nullptr && *v133 != -1 )
                            {
                              sub_658D20((__int64)(a1 + 24), (char **)a1 + 30, v122);
                              v124 = (__int64 *)a1[30];
                              for ( i = &v124[*((unsigned int *)a1 + 62)]; i != v124; *(_BYTE *)(v126 + 6) &= ~1u )
                                v126 = *v124++;
                              *((_DWORD *)a1 + 62) = 0;
                            }
                            ++v121;
                          }
                          while ( v121 < *(_DWORD *)(v89 + 24) );
                        }
LABEL_137:
                        ++*(_DWORD *)(a2 + 8);
                        v96 = *(_QWORD **)(a4 + 8);
                        if ( v96 )
                        {
                          v97 = *((_DWORD *)v96 - 1);
                          if ( v97 == *((_DWORD *)v96 - 2) )
                          {
                            v105 = (3 * v97 + 1) >> 1;
                            v106 = 8 * v105 + 8;
                            if ( 8 * v97 + 8 >= (unsigned int)v106 || v97 >= v105 )
                              goto LABEL_195;
                            v107 = (unsigned int *)sub_186B300(v96 - 1, v106);
                            v96 = v107 + 2;
                            *v107 = v105;
                            *(_QWORD *)(a4 + 8) = v107 + 2;
                            LODWORD(v107) = v107[1];
                            v100 = &v96[(unsigned int)v107];
                            v99 = (_DWORD)v107 + 1;
                          }
                          else
                          {
                            v98 = v97;
                            v99 = v97 + 1;
                            v100 = &v96[v98];
                          }
                        }
                        else
                        {
                          v112 = (_QWORD *)sub_186B270(0x18u);
                          v96 = v112 + 1;
                          *v112 = 2;
                          v100 = v112 + 1;
                          *(_QWORD *)(a4 + 8) = v112 + 1;
                          v99 = 1;
                        }
                        *v100 = a2;
                        *((_DWORD *)v96 - 1) = v99;
                        if ( a3 )
                          ++*(_DWORD *)(a3 + 8);
                        v101 = *(_QWORD **)(a5 + 8);
                        if ( !v101 )
                        {
                          v113 = (_QWORD *)sub_186B270(0x18u);
                          v101 = v113 + 1;
                          *v113 = 2;
                          v104 = v113 + 1;
                          *(_QWORD *)(a5 + 8) = v113 + 1;
                          result = 1;
                          goto LABEL_145;
                        }
                        v102 = *((_DWORD *)v101 - 1);
                        if ( v102 != *((_DWORD *)v101 - 2) )
                        {
                          v103 = v102;
                          result = v102 + 1;
                          v104 = &v101[v103];
LABEL_145:
                          *v104 = a3;
                          *((_DWORD *)v101 - 1) = result;
                          return result;
                        }
                        v108 = (3 * v102 + 1) >> 1;
                        v109 = 8 * v108 + 8;
                        if ( 8 * v102 + 8 < (unsigned int)v109 && v102 < v108 )
                        {
                          v110 = (unsigned int *)sub_186B300(v101 - 1, v109);
                          v111 = v110[1];
                          v101 = v110 + 2;
                          *v110 = v108;
                          *(_QWORD *)(a5 + 8) = v110 + 2;
                          LODWORD(v110) = v111;
                          v104 = &v101[v111];
                          result = (unsigned int)((_DWORD)v110 + 1);
                          goto LABEL_145;
                        }
LABEL_195:
                        exception = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0(v147, "Overflow encountered when expanding vector");
                        *exception = (char *)off_1C63128;
                        sub_2333C0(exception + 1, v147);
                        sub_233E40((__int64)v147);
                        __cxa_throw(
                          exception,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                    }
                    else if ( *(_QWORD *)(v91 + 40) == v87 )
                    {
                      goto LABEL_137;
                    }
                  }
                  sub_658D20((__int64)(a1 + 24), (char **)a1 + 30, v89);
                  v93 = (__int64 *)a1[30];
                  for ( j = &v93[*((unsigned int *)a1 + 62)]; j != v93; *(_BYTE *)(v95 + 6) &= ~1u )
                    v95 = *v93++;
                  *((_DWORD *)a1 + 62) = 0;
                  goto LABEL_137;
                }
              }
            }
          }
        }
      }
    }
  }
  v12 = (_QWORD *)a1[3];
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v13 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = a1[2];
          v16 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_12;
      }
      sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_12:
    v12 = (_QWORD *)a1[3];
    if ( v12 )
LABEL_13:
      *((_DWORD *)v12 - 1) = 0;
  }
  v17 = (_QWORD *)a1[5];
  if ( v17 )
  {
    v18 = &v17[*((unsigned int *)v17 - 1)];
    if ( v17 >= v18 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = a1[4];
          v16 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( ++v17 >= v18 )
          goto LABEL_21;
      }
      sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( v17 < v18 );
LABEL_21:
    v17 = (_QWORD *)a1[5];
    if ( v17 )
LABEL_22:
      *((_DWORD *)v17 - 1) = 0;
  }
  v21 = (_QWORD *)a1[7];
  if ( v21 )
  {
    v22 = &v21[*((unsigned int *)v21 - 1)];
    if ( v21 >= v22 )
      goto LABEL_31;
    do
    {
      while ( 1 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = a1[6];
          v16 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( ++v21 >= v22 )
          goto LABEL_30;
      }
      sub_15D7BC0(v24, v23);
      ++v21;
    }
    while ( v21 < v22 );
LABEL_30:
    v21 = (_QWORD *)a1[7];
    if ( v21 )
LABEL_31:
      *((_DWORD *)v21 - 1) = 0;
  }
  if ( *((_DWORD *)a1 + 27) || *((_DWORD *)a1 + 28) )
  {
    v25 = (char *)a1[12];
    v26 = 0;
    v27 = *((unsigned int *)a1 + 26);
    v28 = v25;
    v29 = &v25[16 * v27];
    if ( v25 == v29 )
      goto LABEL_47;
    do
    {
      while ( *(_QWORD *)v28 )
      {
        *(_QWORD *)v28 = 0;
        v28 += 16;
        if ( v29 == v28 )
          goto LABEL_39;
      }
      v28 += 16;
      ++v26;
    }
    while ( v29 != v28 );
LABEL_39:
    if ( (unsigned int)v27 <= 0x10 || 3 * (int)v27 >= (unsigned int)(4 * v26) )
      goto LABEL_47;
    if ( v25 )
    {
      sub_186B220(v25);
      v30 = *((_DWORD *)a1 + 26);
      a1[12] = 0;
      v30 >>= 1;
      *((_DWORD *)a1 + 26) = v30;
      v31 = 16LL * v30;
      v32 = (_OWORD *)sub_186B270(v31);
      if ( !v30 )
      {
LABEL_46:
        a1[12] = v32;
LABEL_47:
        *(_QWORD *)((char *)a1 + 108) = 0;
        goto LABEL_48;
      }
    }
    else
    {
      v117 = (unsigned int)v27 >> 1;
      a1[12] = 0;
      *((_DWORD *)a1 + 26) = v117;
      v31 = 16LL * v117;
      v32 = (_OWORD *)sub_186B270(v31);
    }
    v33 = &v32[v31 / 0x10];
    v34 = v32;
    if ( (v31 & 0x10) == 0 || (v34 = v32 + 1, *v32 = 0, v33 != v32 + 1) )
    {
      do
      {
        *v34 = 0;
        v34 += 2;
        *(v34 - 1) = 0;
      }
      while ( v33 != v34 );
    }
    goto LABEL_46;
  }
LABEL_48:
  if ( *((_DWORD *)a1 + 33) || *((_DWORD *)a1 + 34) )
  {
    v35 = (char *)a1[15];
    v36 = 0;
    v37 = *((unsigned int *)a1 + 32);
    v38 = v35;
    v39 = &v35[16 * v37];
    if ( v35 == v39 )
      goto LABEL_63;
    do
    {
      while ( *(_QWORD *)v38 )
      {
        *(_QWORD *)v38 = 0;
        v38 += 16;
        if ( v39 == v38 )
          goto LABEL_55;
      }
      v38 += 16;
      ++v36;
    }
    while ( v39 != v38 );
LABEL_55:
    if ( (unsigned int)v37 <= 0x10 || 3 * (int)v37 >= (unsigned int)(4 * v36) )
      goto LABEL_63;
    if ( v35 )
    {
      sub_186B220(v35);
      v40 = *((_DWORD *)a1 + 32);
      a1[15] = 0;
      v40 >>= 1;
      *((_DWORD *)a1 + 32) = v40;
      v41 = 16LL * v40;
      v42 = (_OWORD *)sub_186B270(v41);
      if ( !v40 )
      {
LABEL_62:
        a1[15] = v42;
LABEL_63:
        *(_QWORD *)((char *)a1 + 132) = 0;
        goto LABEL_64;
      }
    }
    else
    {
      v116 = (unsigned int)v37 >> 1;
      a1[15] = 0;
      *((_DWORD *)a1 + 32) = v116;
      v41 = 16LL * v116;
      v42 = (_OWORD *)sub_186B270(v41);
    }
    v43 = &v42[v41 / 0x10];
    v44 = v42;
    if ( (v41 & 0x10) == 0 || (v44 = v42 + 1, *v42 = 0, v43 != v42 + 1) )
    {
      do
      {
        *v44 = 0;
        v44 += 2;
        *(v44 - 1) = 0;
      }
      while ( v43 != v44 );
    }
    goto LABEL_62;
  }
LABEL_64:
  v45 = (_QWORD *)a1[19];
  if ( v45 )
  {
    v46 = &v45[*((unsigned int *)v45 - 1)];
    if ( v45 >= v46 )
      goto LABEL_72;
    do
    {
      while ( 1 )
      {
        v47 = *v45;
        if ( *v45 )
        {
          v48 = a1[18];
          v16 = (*(_DWORD *)(v47 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( ++v45 >= v46 )
          goto LABEL_71;
      }
      sub_15D7BC0(v48, v47);
      ++v45;
    }
    while ( v45 < v46 );
LABEL_71:
    v45 = (_QWORD *)a1[19];
    if ( v45 )
LABEL_72:
      *((_DWORD *)v45 - 1) = 0;
  }
  v49 = (_QWORD *)a1[3];
  ++*(_DWORD *)(a2 + 8);
  if ( v49 )
  {
    v50 = *((_DWORD *)v49 - 1);
    if ( v50 == *((_DWORD *)v49 - 2) )
    {
      v81 = (3 * v50 + 1) >> 1;
      v82 = 8 * v81 + 8;
      if ( 8 * v50 + 8 >= (unsigned int)v82 || v50 >= v81 )
      {
        v139 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v147, "Overflow encountered when expanding vector");
        *v139 = (char *)off_1C63128;
        sub_2333C0(v139 + 1, v147);
        sub_233E40((__int64)v147);
        __cxa_throw(v139, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v143.m128i_i32[0] = (3 * v50 + 1) >> 1;
      v83 = (__int32 *)sub_186B300(v49 - 1, v82);
      v84 = v143.m128i_i32[0];
      v49 = v83 + 2;
      a1[3] = v83 + 2;
      *v83 = v84;
      LODWORD(v83) = v83[1];
      v53 = &v49[(unsigned int)v83];
      v52 = (_DWORD)v83 + 1;
    }
    else
    {
      v51 = v50;
      v52 = v50 + 1;
      v53 = &v49[v51];
    }
  }
  else
  {
    v114 = (_QWORD *)sub_186B270(0x18u);
    v49 = v114 + 1;
    *v114 = 2;
    v52 = 1;
    a1[3] = v49;
    v53 = v49;
  }
  *v53 = a2;
  *((_DWORD *)v49 - 1) = v52;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v54 = (_QWORD *)a1[5];
  if ( v54 )
  {
    v55 = *((_DWORD *)v54 - 1);
    if ( v55 == *((_DWORD *)v54 - 2) )
    {
      v77 = (3 * v55 + 1) >> 1;
      v78 = 8 * v77 + 8;
      if ( 8 * v55 + 8 >= (unsigned int)v78 || v55 >= v77 )
      {
        v138 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v147, "Overflow encountered when expanding vector");
        *v138 = (char *)off_1C63128;
        sub_2333C0(v138 + 1, v147);
        sub_233E40((__int64)v147);
        __cxa_throw(v138, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v79 = (unsigned int *)sub_186B300(v54 - 1, v78);
      v80 = v79[1];
      v54 = v79 + 2;
      *v79 = v77;
      a1[5] = v79 + 2;
      LODWORD(v79) = v80;
      v58 = &v54[v80];
      v49 = (_QWORD *)a1[3];
      result = (unsigned int)((_DWORD)v79 + 1);
    }
    else
    {
      v56 = v55;
      result = v55 + 1;
      v58 = &v54[v56];
    }
  }
  else
  {
    v115 = (_QWORD *)sub_186B270(0x18u);
    v54 = v115 + 1;
    *v115 = 2;
    v49 = (_QWORD *)a1[3];
    result = 1;
    a1[5] = v54;
    v58 = v54;
  }
  *v58 = a3;
  *((_DWORD *)v54 - 1) = result;
  *((_BYTE *)a1 + 8) = a3 != 0;
  v59 = 0;
  for ( k = __PAIR128__((unsigned __int64)v10, 0); v49; v49 = (_QWORD *)a1[3] )
  {
    result = *((unsigned int *)v49 - 1);
    if ( !(_DWORD)result )
      break;
    result = sub_18290A0(*a1);
    if ( !(_BYTE)result )
      break;
    v61 = 0x7FFFFFFF8LL;
    v62 = a1[3];
    if ( v62 )
      v61 = 8LL * (unsigned int)(*(_DWORD *)(v62 - 4) - 1);
    v63 = *(_QWORD *)(v62 + v61);
    v64 = _mm_unpacklo_epi64((__m128i)v63, (__m128i)(unsigned __int64)v10);
    if ( v63 )
      ++*(_DWORD *)(v63 + 8);
    if ( v59 )
    {
      v16 = (*(_DWORD *)(v59 + 8))-- == 1;
      if ( v16 )
      {
        v143 = v64;
        sub_15D7BC0(v10, v59);
        v64 = _mm_load_si128(&v143);
      }
    }
    v65 = 0x7FFFFFFF8LL;
    v66 = a1[5];
    if ( v66 )
      v65 = 8LL * (unsigned int)(*(_DWORD *)(v66 - 4) - 1);
    v67 = *(_QWORD *)(v66 + v65);
    v68 = _mm_unpacklo_epi64((__m128i)v67, (__m128i)*((unsigned __int64 *)&k + 1));
    if ( v67 )
      ++*(_DWORD *)(v67 + 8);
    if ( (_QWORD)k )
    {
      v16 = (*(_DWORD *)(k + 8))-- == 1;
      if ( v16 )
      {
        v144 = v64;
        v143 = v68;
        sub_15D7BC0(*((_QWORD *)&k + 1), k);
        v68 = _mm_load_si128(&v143);
        v64 = _mm_load_si128(&v144);
      }
    }
    v69 = a1[3];
    v70 = *(_DWORD *)(v69 - 4) - 1;
    v71 = *(_QWORD *)(v69 + 8LL * v70);
    *(_DWORD *)(v69 - 4) = v70;
    if ( v71 )
    {
      v72 = a1[2];
      v16 = (*(_DWORD *)(v71 + 8))-- == 1;
      if ( v16 )
      {
        v144 = v64;
        v143 = v68;
        sub_15D7BC0(v72, v71);
        v68 = _mm_load_si128(&v143);
        v64 = _mm_load_si128(&v144);
      }
    }
    v73 = a1[5];
    v74 = *(_DWORD *)(v73 - 4) - 1;
    v75 = *(_QWORD *)(v73 + 8LL * v74);
    *(_DWORD *)(v73 - 4) = v74;
    if ( v75 )
    {
      v76 = a1[4];
      v16 = (*(_DWORD *)(v75 + 8))-- == 1;
      if ( v16 )
      {
        v144 = v64;
        v143 = v68;
        sub_15D7BC0(v76, v75);
        v68 = _mm_load_si128(&v143);
        v64 = _mm_load_si128(&v144);
      }
    }
    v145 = v64;
    v146 = v68;
    result = sub_65B060(a1, v145.m128i_i64, v146.m128i_i64);
    v59 = v145.m128i_i64[0];
    k = (unsigned __int128)v146;
    v10 = (char *)v145.m128i_i64[1];
    if ( v145.m128i_i64[0] )
    {
      ++*(_DWORD *)(v145.m128i_i64[0] + 8);
      v118 = *(_QWORD **)(a4 + 8);
      if ( v118 )
      {
        v119 = *((_DWORD *)v118 - 1);
        if ( v119 == *((_DWORD *)v118 - 2) )
        {
          v127 = (3 * v119 + 1) >> 1;
          v128 = 8 * v127 + 8;
          if ( 8 * v119 + 8 >= (unsigned int)v128 || v119 >= v127 )
          {
            v136 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v147, "Overflow encountered when expanding vector");
            *v136 = (char *)off_1C63128;
            sub_2333C0(v136 + 1, v147);
            sub_233E40((__int64)v147);
            __cxa_throw(v136, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v143.m128i_i32[0] = (3 * v119 + 1) >> 1;
          v129 = (_DWORD *)sub_186B300(v118 - 1, v128);
          v118 = v129 + 2;
          *(_QWORD *)(a4 + 8) = v129 + 2;
          *v129 = v143.m128i_i32[0];
          v119 = v129[1];
        }
      }
      else
      {
        v134 = (_QWORD *)sub_186B270(0x18u);
        *v134 = 2;
        v118 = v134 + 1;
        v119 = 0;
        *(_QWORD *)(a4 + 8) = v118;
      }
      v118[v119] = v59;
      *((_DWORD *)v118 - 1) = v119 + 1;
      if ( (_QWORD)k )
        ++*(_DWORD *)(k + 8);
      result = *(_QWORD *)(a5 + 8);
      if ( result )
      {
        v120 = *(_DWORD *)(result - 4);
        if ( v120 == *(_DWORD *)(result - 8) )
        {
          v130 = (3 * v120 + 1) >> 1;
          v131 = 8 * v130 + 8;
          if ( 8 * v120 + 8 >= (unsigned int)v131 || v120 >= v130 )
          {
            v137 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v147, "Overflow encountered when expanding vector");
            *v137 = (char *)off_1C63128;
            sub_2333C0(v137 + 1, v147);
            sub_233E40((__int64)v147);
            __cxa_throw(v137, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v143.m128i_i32[0] = (3 * v120 + 1) >> 1;
          v132 = (_DWORD *)sub_186B300((void *)(result - 8), v131);
          result = (__int64)(v132 + 2);
          *(_QWORD *)(a5 + 8) = v132 + 2;
          *v132 = v143.m128i_i32[0];
          v120 = v132[1];
        }
      }
      else
      {
        v135 = (_QWORD *)sub_186B270(0x18u);
        *v135 = 2;
        result = (__int64)(v135 + 1);
        v120 = 0;
        *(_QWORD *)(a5 + 8) = result;
      }
      *(_QWORD *)(result + 8LL * v120) = k;
      *(_DWORD *)(result - 4) = v120 + 1;
    }
  }
  if ( (_QWORD)k )
  {
    v16 = (*(_DWORD *)(k + 8))-- == 1;
    if ( v16 )
      result = sub_15D7BC0(*((_QWORD *)&k + 1), k);
  }
  if ( v59 )
  {
    v16 = (*(_DWORD *)(v59 + 8))-- == 1;
    if ( v16 )
      return sub_15D7BC0(v10, v59);
  }
  return result;
}

