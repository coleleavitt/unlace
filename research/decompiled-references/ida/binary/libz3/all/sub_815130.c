_QWORD *__fastcall sub_815130(__int64 a1, _QWORD *a2)
{
  char **v2; // rbp
  char **exception; // rbp
  char **v4; // rbp
  char **v5; // rbp
  _QWORD *v6; // r12
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  _OWORD *v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  unsigned int v15; // ebp
  __int64 v16; // r8
  __int64 v17; // r14
  unsigned int *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned int v21; // r15d
  _QWORD *v22; // r13
  __int64 *v23; // rbx
  __int64 i; // rcx
  _QWORD *v25; // rdx
  _DWORD *v26; // r8
  __int64 v27; // rax
  unsigned int *v28; // rsi
  _QWORD *v29; // r13
  __int64 *v30; // r14
  __int64 v31; // rsi
  unsigned int v32; // r15d
  _QWORD *v33; // rdx
  _QWORD *v34; // rcx
  __int64 v35; // rax
  unsigned int *v36; // rdi
  void (__fastcall *v37)(__int64, __int64); // rax
  __int64 v38; // rsi
  int v39; // r9d
  __int64 v40; // rdi
  __int64 v41; // rsi
  unsigned int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // edx
  unsigned int **v45; // rax
  unsigned int *v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rbp
  unsigned int v49; // eax
  _QWORD *v50; // rcx
  unsigned int v51; // r13d
  unsigned int v52; // eax
  unsigned int v53; // r15d
  unsigned int v54; // ebx
  unsigned int v55; // edx
  size_t v56; // rsi
  unsigned int v57; // r14d
  unsigned int *v58; // rax
  unsigned int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 *j; // r13
  __int64 v63; // rbx
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rdx
  __int64 *k; // r14
  __int64 *v68; // rax
  __int64 v69; // r13
  __int64 v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rcx
  __m128 v76; // xmm0
  int *v78; // r13
  __int64 v79; // rbp
  unsigned int *v80; // r14
  _QWORD *v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rdx
  int v84; // r15d
  int v85; // ebp
  _QWORD *v86; // rax
  _QWORD *v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rax
  unsigned int v92; // edx
  __int64 v93; // r9
  __int64 v94; // rax
  int *v95; // rdx
  int *v96; // rax
  int v97; // ecx
  unsigned int v98; // ebx
  size_t v99; // rsi
  unsigned int *v100; // rax
  unsigned int v101; // ecx
  size_t v102; // rsi
  unsigned int *v103; // rax
  unsigned int v104; // ebx
  size_t v105; // rdi
  __int64 v106; // rax
  __int64 v107; // rdi
  _DWORD *v108; // rsi
  __int64 v109; // r8
  unsigned __int64 v110; // rax
  __int64 v111; // r8
  _QWORD *v113; // rax
  _QWORD *v114; // rax
  _QWORD *v115; // rax
  int v116; // [rsp+0h] [rbp-108h]
  int *v118; // [rsp+8h] [rbp-100h]
  unsigned int **v119; // [rsp+10h] [rbp-F8h]
  _QWORD *v120; // [rsp+10h] [rbp-F8h]
  _DWORD *v121; // [rsp+10h] [rbp-F8h]
  _DWORD *v122; // [rsp+10h] [rbp-F8h]
  unsigned int *v123; // [rsp+20h] [rbp-E8h]
  unsigned int v124; // [rsp+20h] [rbp-E8h]
  _QWORD *v125; // [rsp+20h] [rbp-E8h]
  unsigned int **v127; // [rsp+30h] [rbp-D8h]
  _QWORD *v128; // [rsp+38h] [rbp-D0h]
  __int64 v129[4]; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v130[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v131; // [rsp+90h] [rbp-78h]
  _OWORD *v132; // [rsp+98h] [rbp-70h]
  __int64 v133; // [rsp+A0h] [rbp-68h]
  int v134; // [rsp+A8h] [rbp-60h]
  __int128 v135; // [rsp+B0h] [rbp-58h]
  int v136; // [rsp+C0h] [rbp-48h]

  v6 = (_QWORD *)sub_186B270(0x310u);
  sub_80E9C0((__int64)v6, a2, *(_DWORD *)(a1 + 12));
  v7 = *(__int64 (__fastcall **)(__int64))(*a2 + 424LL);
  if ( v7 == sub_79EFD0 )
    v8 = a2[18];
  else
    v8 = v7((__int64)a2);
  v131 = 0;
  v9 = *(_QWORD *)(a1 + 72);
  v130[0] = _mm_unpacklo_epi64((__m128i)v9, (__m128i)(unsigned __int64)v8);
  v130[1] = 0;
  v10 = (_OWORD *)sub_186B270(0x80u);
  v132 = v10;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  v10[6] = 0;
  v10[7] = 0;
  v133 = 8;
  v134 = 0;
  v136 = 0;
  v135 = 0;
  if ( v9 != v8 )
  {
    sub_15DA640(DWORD2(v130[0]), v130[0], v11, v12, v13, v14, v116);
    sub_15D2280(*((_QWORD *)&v130[0] + 1), *(_QWORD *)&v130[0]);
  }
  v15 = 0;
  v16 = *(_QWORD *)(a1 + 88);
  if ( !v16 )
  {
    v37 = *(void (__fastcall **)(__int64, __int64))(*v6 + 16LL);
    v38 = a2[3];
    if ( v37 == sub_7ABB60 )
    {
      v6[3] = v38;
      goto LABEL_33;
    }
    goto LABEL_101;
  }
  do
  {
    if ( v15 >= *(_DWORD *)(v16 - 4) )
      break;
    v17 = 8LL * v15;
    v18 = **(unsigned int ***)(v16 + v17);
    if ( *((_QWORD *)&v130[0] + 1) != *(_QWORD *)&v130[0] )
      v18 = (unsigned int *)sub_15CFF50(v130, **(_QWORD **)(v16 + 8LL * v15));
    v19 = a2[215];
    if ( v19 )
    {
      v20 = *v18;
      if ( (unsigned int)v20 >= *(_DWORD *)(v19 - 4) )
        v19 = 0;
      else
        v19 = *(_QWORD *)(v19 + 8 * v20);
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 528LL))(v6, v19);
    v21 = 0;
    v22 = (_QWORD *)(v17 + v6[75]);
    v23 = (__int64 *)(v17 + *(_QWORD *)(a1 + 600));
    for ( i = *v23; i; ++*((_DWORD *)v25 - 1) )
    {
      if ( v21 >= *(_DWORD *)(i - 4) )
        break;
      v25 = (_QWORD *)*v22;
      v26 = (_DWORD *)(i + 4LL * v21);
      if ( *v22 )
      {
        v27 = *((unsigned int *)v25 - 1);
        v28 = (unsigned int *)v25 + v27;
        if ( (_DWORD)v27 == *((_DWORD *)v25 - 2) )
        {
          v101 = (unsigned int)(3 * v27 + 1) >> 1;
          v102 = 4 * v101 + 8;
          if ( 4 * (int)v27 + 8 >= (unsigned int)v102 || (unsigned int)v27 >= v101 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v129, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v129);
            sub_233E40((__int64)v129);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v124 = (unsigned int)(3 * v27 + 1) >> 1;
          v121 = v26;
          v103 = (unsigned int *)sub_186B300(v25 - 1, v102);
          v25 = v103 + 2;
          v26 = v121;
          *v22 = v103 + 2;
          *v103 = v124;
          i = *v23;
          v28 = &v103[v103[1] + 2];
        }
      }
      else
      {
        v122 = (_DWORD *)(i + 4LL * v21);
        v113 = (_QWORD *)sub_186B270(0x10u);
        v25 = v113 + 1;
        v26 = v122;
        v28 = (unsigned int *)(v113 + 1);
        *v113 = 2;
        *v22 = v113 + 1;
        i = *v23;
      }
      ++v21;
      *v28 = *v26;
    }
    v29 = (_QWORD *)(v17 + v6[77]);
    v30 = (__int64 *)(*(_QWORD *)(a1 + 616) + v17);
    v31 = *v30;
    if ( *v30 )
    {
      v32 = 0;
      do
      {
        if ( v32 >= *(_DWORD *)(v31 - 4) )
          break;
        v33 = (_QWORD *)*v29;
        v34 = (_QWORD *)(v31 + 8LL * v32);
        if ( *v29 )
        {
          v35 = *((unsigned int *)v33 - 1);
          v36 = (unsigned int *)&v33[v35];
          if ( (_DWORD)v35 == *((_DWORD *)v33 - 2) )
          {
            v98 = (unsigned int)(3 * v35 + 1) >> 1;
            v99 = 8 * v98 + 8;
            if ( 8 * (int)v35 + 8 >= (unsigned int)v99 || (unsigned int)v35 >= v98 )
            {
              v2 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v129, "Overflow encountered when expanding vector");
              *v2 = (char *)off_1C63128;
              sub_2333C0(v2 + 1, v129);
              sub_233E40((__int64)v129);
              __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v120 = v34;
            v100 = (unsigned int *)sub_186B300(v33 - 1, v99);
            v33 = v100 + 2;
            v34 = v120;
            *v29 = v100 + 2;
            v31 = *v30;
            *v100 = v98;
            v36 = &v100[2 * v100[1] + 2];
          }
        }
        else
        {
          v114 = (_QWORD *)sub_186B270(0x18u);
          v33 = v114 + 1;
          v34 = (_QWORD *)(v31 + 8LL * v32);
          v36 = (unsigned int *)(v114 + 1);
          *v114 = 2;
          *v29 = v114 + 1;
          v31 = *v30;
        }
        ++v32;
        *(_QWORD *)v36 = *v34;
        ++*((_DWORD *)v33 - 1);
      }
      while ( v31 );
    }
    ++v15;
    v16 = *(_QWORD *)(a1 + 88);
  }
  while ( v16 );
  v37 = *(void (__fastcall **)(__int64, __int64))(*v6 + 16LL);
  v38 = a2[3];
  if ( v37 != sub_7ABB60 )
  {
LABEL_101:
    v37((__int64)v6, v38);
    v16 = *(_QWORD *)(a1 + 88);
    goto LABEL_26;
  }
  v6[3] = v38;
LABEL_26:
  if ( v16 )
  {
    v39 = *(_DWORD *)(v16 - 4);
    if ( v39 > 0 )
    {
      v40 = 0;
      v41 = *(_QWORD *)(a1 + 560);
      do
      {
        v42 = v40;
        v43 = v40;
        do
        {
          v44 = v43;
          v43 = *(_DWORD *)(v41 + 4LL * v43);
        }
        while ( v44 != v43 );
        if ( v43 != (_DWORD)v40 )
        {
          do
          {
            v91 = v42;
            v92 = v42;
            v42 = *(_DWORD *)(v41 + 4LL * v42);
            v93 = 4 * v91;
          }
          while ( v92 != v42 );
          *(_DWORD *)(v6[70] + 4 * v40) = v42;
          *(_DWORD *)(v6[71] + 4 * v91) += *(_DWORD *)(v6[71] + 4 * v40);
          v94 = v6[72];
          v95 = (int *)(v94 + 4 * v40);
          v96 = (int *)(v93 + v94);
          v97 = *v96;
          *v96 = *v95;
          *v95 = v97;
          v39 = *(_DWORD *)(v16 - 4);
        }
        ++v40;
      }
      while ( v39 > (int)v40 );
    }
  }
LABEL_33:
  v45 = *(unsigned int ***)(a1 + 624);
  if ( v45 )
  {
    v127 = &v45[*((unsigned int *)v45 - 1)];
    if ( v127 != v45 )
    {
      v119 = *(unsigned int ***)(a1 + 624);
      while ( 1 )
      {
        v46 = *v119;
        v123 = *v119;
        if ( *v119 )
          break;
LABEL_57:
        if ( v127 == ++v119 )
          goto LABEL_58;
      }
      v47 = sub_7E4EC0((__int64)v6);
      v48 = sub_180C100(v47, 40);
      v49 = *v46;
      *(_OWORD *)(v48 + 8) = 0;
      v50 = (_QWORD *)v6[78];
      *(_DWORD *)v48 = v49;
      *(_QWORD *)(v48 + 24) = 0;
      *(_QWORD *)(v48 + 32) = 0xFFFFFFFEFFFFFFFELL;
      v51 = *v46;
      if ( v50 )
      {
        v52 = *((_DWORD *)v50 - 1);
        v53 = v52;
        if ( v51 < v52 )
        {
LABEL_47:
          v50[v51] = v48;
          for ( j = *((__int64 **)v123 + 2); j; *(_QWORD *)(v48 + 16) = v65 )
          {
            v63 = *j;
            v64 = sub_7E4EC0((__int64)v6);
            v65 = (_QWORD *)sub_180C100(v64, 16);
            v66 = *(_QWORD *)(v48 + 16);
            *v65 = v63;
            v65[1] = v66;
            j = (__int64 *)j[1];
          }
          for ( k = *((__int64 **)v123 + 1); k; k = (__int64 *)k[4] )
          {
            while ( 1 )
            {
              v68 = (__int64 *)k[3];
              v69 = *((_QWORD *)&v130[0] + 1);
              v70 = *v68;
              if ( *((_QWORD *)&v130[0] + 1) != *(_QWORD *)&v130[0] )
                v70 = sub_15CFF50(v130, *v68);
              if ( v70 )
                ++*(_DWORD *)(v70 + 8);
              v71 = sub_7E4EC0((__int64)v6);
              v72 = sub_180C100(v71, 48);
              v73 = *k;
              v74 = k[1];
              v75 = k[2];
              v76 = _mm_loadh_ps((const double *)(v48 + 8));
              *(_QWORD *)(v72 + 40) = 0;
              *(_QWORD *)v72 = v73;
              *(_QWORD *)(v72 + 8) = v74;
              *(_QWORD *)(v72 + 16) = v75;
              *(__m128 *)(v72 + 24) = v76;
              *(_QWORD *)(v48 + 8) = v72;
              if ( (*(_DWORD *)(v70 + 8))-- == 1 )
                break;
              k = (__int64 *)k[4];
              if ( !k )
                goto LABEL_56;
            }
            sub_15D7BC0(v69, v70);
          }
LABEL_56:
          *(_DWORD *)(v48 + 36) = v123[9];
          *(_DWORD *)(v48 + 32) = v123[8];
          goto LABEL_57;
        }
        v54 = v51 + 1;
        if ( v52 >= v51 + 1 )
        {
          *((_DWORD *)v50 - 1) = v54;
          goto LABEL_47;
        }
      }
      else
      {
        v54 = v51 + 1;
        if ( v51 == -1 )
          goto LABEL_47;
        v115 = (_QWORD *)sub_186B270(0x18u);
        v53 = 0;
        *v115 = 2;
        v50 = v115 + 1;
        v6[78] = v115 + 1;
      }
      while ( 1 )
      {
        v59 = *((_DWORD *)v50 - 2);
        if ( v59 >= v54 )
          break;
        v55 = (3 * v59 + 1) >> 1;
        v56 = 8 * v55 + 8;
        v57 = v55;
        if ( 8 * v59 + 8 >= (unsigned int)v56 || v59 >= v55 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v129, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v129);
          sub_233E40((__int64)v129);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v58 = (unsigned int *)sub_186B300(v50 - 1, v56);
        v50 = v58 + 2;
        *v58 = v57;
        v6[78] = v58 + 2;
      }
      *((_DWORD *)v50 - 1) = v54;
      v60 = 8LL * v53;
      v61 = 8LL * v54;
      if ( v60 != v61 )
      {
        v128 = v50;
        memset(&v50[(unsigned __int64)v60 / 8], 0, v61 - v60);
        v50 = v128;
      }
      goto LABEL_47;
    }
  }
LABEL_58:
  v78 = *(int **)(a1 + 680);
  if ( v78 )
  {
    v79 = 4LL * (unsigned int)*(v78 - 1);
    v118 = &v78[v79];
    if ( &v78[v79] != v78 )
    {
      v80 = *((unsigned int **)v78 + 1);
      v81 = (_QWORD *)v6[85];
      if ( v80 )
      {
        v82 = v6[78];
        if ( v82 )
        {
          v83 = *v80;
          v80 = nullptr;
          if ( (unsigned int)v83 < *(_DWORD *)(v82 - 4) )
            v80 = *(unsigned int **)(v82 + 8 * v83);
        }
        else
        {
          v80 = nullptr;
        }
        v84 = 0;
        v85 = 0;
      }
      else
      {
        v85 = *v78;
        v84 = v78[1];
      }
      if ( v81 )
        goto LABEL_72;
      v86 = (_QWORD *)sub_186B270(0x28u);
      v81 = v86 + 1;
      *v86 = 2;
      v6[85] = v86 + 1;
      v87 = v86 + 1;
      while ( 1 )
      {
        *(_DWORD *)v87 = v85;
        v78 += 4;
        *((_DWORD *)v87 + 1) = v84;
        v87[1] = v80;
        ++*((_DWORD *)v81 - 1);
        if ( v118 == v78 )
          break;
        v80 = *((unsigned int **)v78 + 1);
        if ( v80 )
        {
          v88 = v6[78];
          if ( v88 && (v89 = *v80, (unsigned int)v89 < *(_DWORD *)(v88 - 4)) )
          {
            v80 = *(unsigned int **)(v88 + 8 * v89);
            v85 = 0;
            v84 = 0;
          }
          else
          {
            v80 = nullptr;
            v85 = 0;
            v84 = 0;
          }
        }
        else
        {
          v85 = *v78;
          v84 = v78[1];
        }
LABEL_72:
        v90 = *((unsigned int *)v81 - 1);
        if ( (_DWORD)v90 == *((_DWORD *)v81 - 2) )
        {
          v104 = (unsigned int)(3 * v90 + 1) >> 1;
          v105 = 16 * v104 + 8;
          if ( 16 * (int)v90 + 8 >= (unsigned int)v105 || (unsigned int)v90 >= v104 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v129, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v129);
            sub_233E40((__int64)v129);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v106 = sub_186B270(v105);
          v107 = v6[85];
          v108 = (_DWORD *)v106;
          v81 = (_QWORD *)(v106 + 8);
          if ( v107 )
          {
            v109 = *(unsigned int *)(v107 - 4);
            *(_DWORD *)(v106 + 4) = v109;
            v110 = 0;
            v111 = 16 * v109;
            if ( v111 )
            {
              do
              {
                *(__m128i *)&v108[v110 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v107 + v110));
                v110 += 16LL;
              }
              while ( v111 != v110 );
            }
            v125 = v81;
            sub_186B220((void *)(v107 - 8));
            v81 = v125;
            v87 = &v125[2 * (unsigned int)v108[1]];
          }
          else
          {
            *(_DWORD *)(v106 + 4) = 0;
            v87 = (_QWORD *)(v106 + 8);
          }
          v6[85] = v81;
          *v108 = v104;
        }
        else
        {
          v87 = &v81[2 * v90];
        }
      }
    }
  }
  sub_15CE760(v130);
  return v6;
}

