__int64 __fastcall sub_71CA00(__m128i *a1, _QWORD *a2, __int64 a3, double a4)
{
  void *v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rsi
  void *v13; // rdi
  bool v14; // zf
  __int64 (__fastcall *v15)(__int64 *); // rax
  __int64 v16; // rax
  __int64 v17; // r15
  void (***v18)(void); // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r14
  void (__fastcall ***v23)(void *); // r15
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdi
  __int64 v29; // r13
  __int64 v30; // r15
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r14
  void **v38; // rsi
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // r14
  __int64 v42; // rdi
  __int64 v43; // r14
  unsigned int v44; // edx
  unsigned int v45; // eax
  _QWORD *v46; // rcx
  __int64 v47; // rax
  __int64 v49; // r14
  unsigned int v50; // edx
  unsigned int v51; // eax
  _QWORD *v52; // r12
  __int64 v53; // rdi
  int v54; // esi
  __int64 v55; // r14
  unsigned int v56; // edx
  unsigned int v57; // ebx
  _QWORD *v58; // r12
  void *v59; // rsi
  __int64 v60; // rdi
  unsigned int v61; // edx
  unsigned int v62; // eax
  _QWORD *v63; // rcx
  __int64 *v64; // rsi
  __int64 v65; // rax
  char **v66; // rbx
  __int64 v67; // rdi
  __int64 v68; // rax
  _QWORD *v69; // r8
  __int64 v70; // rax
  __int64 v71; // r12
  __int64 v72; // rax
  _QWORD *v73; // rdi
  __int64 v74; // rax
  double *v75; // rax
  double *v76; // r8
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // rdi
  double v79; // rdx
  __int64 v80; // rbx
  __int64 v81; // rax
  _QWORD *v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rdi
  void (__fastcall ***v86)(void *); // rbp
  __int64 v87; // rax
  void (__fastcall ***v88)(void *); // rbx
  __int64 v89; // r12
  __int64 v90; // rax
  __int64 v91; // rbp
  void (__fastcall ***v92)(void *); // r14
  __m128i v93; // xmm0
  __int64 v94; // rbx
  __int64 v95; // rax
  _QWORD *v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 m; // rax
  __int64 k; // rax
  __int64 j; // rax
  unsigned __int64 v102; // rcx
  unsigned int v103; // eax
  unsigned int v104; // edx
  __int64 v105; // rdi
  __int64 i; // rax
  char **v107; // rbp
  __int64 v108; // rdx
  char **exception; // rbp
  __int64 v110; // rdx
  _Unwind_Exception *v111; // [rsp+0h] [rbp-E8h]
  int ptr; // [rsp+8h] [rbp-E0h]
  int ptra; // [rsp+8h] [rbp-E0h]
  int *v114; // [rsp+10h] [rbp-D8h]
  __int64 *v115; // [rsp+18h] [rbp-D0h]
  __int64 v116; // [rsp+20h] [rbp-C8h]
  __int64 *v117; // [rsp+20h] [rbp-C8h]
  _QWORD *v118; // [rsp+28h] [rbp-C0h]
  _QWORD *v119; // [rsp+28h] [rbp-C0h]
  int v120; // [rsp+30h] [rbp-B8h] BYREF
  int v121[2]; // [rsp+38h] [rbp-B0h] BYREF
  int v122[2]; // [rsp+40h] [rbp-A8h]
  __int64 v123; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v124; // [rsp+50h] [rbp-98h] BYREF
  int v125[2]; // [rsp+58h] [rbp-90h]
  int v126[2]; // [rsp+60h] [rbp-88h] BYREF
  void *v127; // [rsp+68h] [rbp-80h]
  unsigned __int64 v128; // [rsp+70h] [rbp-78h] BYREF
  __m128 v129; // [rsp+78h] [rbp-70h] BYREF
  __m128 v130; // [rsp+90h] [rbp-58h] BYREF
  double v131[9]; // [rsp+A0h] [rbp-48h] BYREF

  v114 = &v120;
  sub_EE4940(&v120, "qsat-tactic", *a2);
  *(_QWORD *)v122 = (char *)a1 + 24;
  v115 = &v123;
  sub_17F9A60(&v123, "model_evaluator");
  if ( !(unsigned __int8)sub_1859630(*(_QWORD *)v122, "array_equalities", &v123, 1) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_109F38((__int64 *)&v130, "array equalities cannot be disabled for qsat", v110);
    *exception = (char *)off_1C63670;
    sub_2333C0(exception + 1, &v130);
    sub_233E40((__int64)&v130);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
  v7 = (void *)a1[1].m128i_i64[0];
  v8 = *a2;
  *(_QWORD *)v121 = 0;
  *(_QWORD *)v126 = 0;
  v127 = v7;
  sub_ED5FB0(v8, v121);
  if ( *(_QWORD *)v121 )
    v9 = *(unsigned int *)(*(_QWORD *)v121 - 4LL);
  else
    v9 = 0;
  v10 = sub_15EC1C0(a1[1].m128i_i64[0], v9);
  v11 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v12 = *(_QWORD *)v126;
  if ( !*(_QWORD *)v126
    || (v13 = v127, v14 = *(_DWORD *)(*(_QWORD *)v126 + 8LL) == 1, --*(_DWORD *)(*(_QWORD *)v126 + 8LL), !v14) )
  {
    v14 = a1[26].m128i_i32[0] == 1;
    *(_QWORD *)v126 = v10;
    if ( !v14 )
      goto LABEL_9;
LABEL_59:
    sub_71C210(&v130, a1, v11);
    v53 = *(_QWORD *)v126;
    *(_QWORD *)v126 = v130.m128_u64[0];
    sub_710AA0(v53, v130.m128_i64[1]);
    sub_ED2DA0(*a2);
    v54 = v126[0];
    *(_DWORD *)(*a2 + 120LL) = (*(_DWORD *)(*a2 + 120LL) + 1) & 0x3FFFFFF | *(_DWORD *)(*a2 + 120LL) & 0xFC000000;
    sub_EDBA20(*a2, v54, 0, v111, ptr, (int)&v120, (__int64)&v123, v116);
    v55 = *a2;
    if ( *a2 )
      ++*(_DWORD *)(v55 + 32);
    v56 = *(_DWORD *)(a3 + 8);
    v57 = *(_DWORD *)(a3 + 12);
    if ( v56 >= v57 )
    {
      v94 = 2 * v57;
      v95 = sub_186B270(8 * v94);
      v56 = *(_DWORD *)(a3 + 8);
      v96 = *(_QWORD **)a3;
      v58 = (_QWORD *)v95;
      if ( v56 )
      {
        if ( v56 - 1 <= 2 || (_QWORD *)v95 == v96 + 1 )
        {
          for ( i = 0; i != v56; ++i )
            v58[i] = v96[i];
        }
        else
        {
          v97 = 0;
          do
          {
            *(__m128i *)&v58[v97] = _mm_loadu_si128((const __m128i *)&v96[v97]);
            v97 += 2;
          }
          while ( 2LL * (v56 >> 1) != v97 );
          if ( (v56 & 1) != 0 )
            v58[v56 & 0xFFFFFFFE] = v96[v56 & 0xFFFFFFFE];
        }
      }
      if ( v96 != (_QWORD *)(a3 + 16) && v96 )
      {
        sub_186B220(v96);
        v56 = *(_DWORD *)(a3 + 8);
      }
      *(_QWORD *)a3 = v58;
      *(_DWORD *)(a3 + 12) = v94;
    }
    else
    {
      v58 = *(_QWORD **)a3;
    }
    v59 = v127;
    v60 = *(_QWORD *)v126;
    v58[v56] = v55;
    *(_DWORD *)(a3 + 8) = v56 + 1;
    sub_710AA0(v60, (__int64)v59);
    v124 = (__int64)v7;
    *(_QWORD *)v125 = 0;
    sub_2334C0(&v124);
    if ( *(_QWORD *)v121 )
      goto LABEL_49;
    goto LABEL_50;
  }
  sub_15D7BC0(v13, v12);
  v14 = a1[26].m128i_i32[0] == 1;
  *(_QWORD *)v126 = v11;
  if ( v14 )
    goto LABEL_59;
LABEL_9:
  v15 = *(__int64 (__fastcall **)(__int64 *))(a1->m128i_i64[0] + 160);
  if ( v15 == sub_717550 )
  {
    sub_717280((__int64)a1);
    v16 = sub_374300(a1[4].m128i_i64[0], (__int64)&a1[4].m128i_i64[1], (__int64)&qword_18D6CD0);
    v17 = v16;
    if ( v16 )
      ++*(_DWORD *)(v16 + 48);
    v18 = (void (***)(void))a1[5].m128i_i64[0];
    if ( v18 )
    {
      v14 = (*((_DWORD *)v18 + 12))-- == 1;
      if ( v14 )
      {
        (**v18)();
        sub_186B220(v18);
      }
    }
    v19 = a1[6].m128i_i64[0];
    v20 = a1[5].m128i_i64[1];
    a1[5].m128i_i64[0] = v17;
    sub_710AA0(v20, v19);
    a1[5].m128i_i64[1] = 0;
    v21 = sub_374300(a1[6].m128i_i64[1], (__int64)a1[7].m128i_i64, (__int64)&qword_18D6CD0);
    v22 = v21;
    if ( v21 )
      ++*(_DWORD *)(v21 + 48);
    v23 = (void (__fastcall ***)(void *))a1[7].m128i_i64[1];
    if ( v23 )
    {
      v14 = (*((_DWORD *)v23 + 12))-- == 1;
      if ( v14 )
      {
        (**v23)(v23);
        sub_186B220(v23);
      }
    }
    a1[7].m128i_i64[1] = v22;
    sub_710AA0(a1[8].m128i_i64[0], a1[8].m128i_i64[1]);
    a1[8].m128i_i64[0] = 0;
  }
  else
  {
    v15(a1->m128i_i64);
  }
  if ( a1[26].m128i_i32[0] != 2 )
  {
    sub_15ECFD0((unsigned int)&v130, (unsigned int)v126, 8, v25, v26, v27);
    v28 = *(_QWORD *)v126;
    *(_QWORD *)v126 = v130.m128_u64[0];
    v130.m128_u64[0] = v28;
    sub_710AA0(v28, v130.m128_i64[1]);
  }
  sub_719980((__int64)a1, (__int64 *)v126, v24, v25, v26, v27);
  if ( *(_WORD *)(*(_QWORD *)v126 + 4LL) || (*(_BYTE *)(*(_QWORD *)v126 + 30LL) & 1) == 0 )
  {
    v107 = (char **)__cxa_allocate_exception(0x28u);
    sub_109F38((__int64 *)&v130, "formula is not hoistable", v108);
    *v107 = (char *)off_1C63670;
    sub_2333C0(v107 + 1, &v130);
    sub_233E40((__int64)&v130);
    __cxa_throw(v107, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
  v130.m128_u64[0] = -1;
  v124 = (__int64)v7;
  *(_QWORD *)v125 = 0;
  v117 = &v124;
  sub_715950((__m128i *)a1[9].m128i_i64, *(__int64 *)v126, (unsigned int *)&v130, (__int64)&v124);
  v29 = v124;
  v30 = *(_QWORD *)v125;
  sub_714210((__m128i *)&v130, a1 + 9, *(__int64 *)v126);
  v31 = *(_QWORD *)v126;
  *(_QWORD *)v126 = v130.m128_u64[0];
  sub_710AA0(v31, v130.m128_i64[1]);
  if ( v30 )
    v32 = *(unsigned int *)(v30 - 4);
  else
    v32 = 0;
  v33 = sub_15EC1C0(v29, v32);
  v34 = v33;
  if ( v33 )
    ++*(_DWORD *)(v33 + 8);
  if ( *(_QWORD *)(a1[6].m128i_i64[1] + 856) != v33 )
    sub_E5EBF0(a1[7].m128i_i64[1], v33);
  sub_710AA0(v34, v29);
  if ( v30 )
    v35 = *(unsigned int *)(v30 - 4);
  else
    v35 = 0;
  v36 = sub_15EC1C0(v29, v35);
  v37 = v36;
  if ( v36 )
    ++*(_DWORD *)(v36 + 8);
  if ( *(_QWORD *)(a1[4].m128i_i64[0] + 856) != v36 )
    sub_E5EBF0(a1[5].m128i_i64[0], v36);
  sub_710AA0(v37, v29);
  if ( *(_QWORD *)(a1[6].m128i_i64[1] + 856) != *(_QWORD *)v126 )
    sub_E5EBF0(a1[7].m128i_i64[1], *(_QWORD *)v126);
  v38 = nullptr;
  v39 = sub_15E1A70(a1[1].m128i_i64[0]);
  if ( v39 != *(_QWORD *)(a1[4].m128i_i64[0] + 856) )
  {
    v38 = (void **)v39;
    sub_E5EBF0(a1[5].m128i_i64[0], v39);
  }
  v40 = sub_71AF20((void **)a1, v38, a4);
  v41 = *a2;
  if ( !v40 )
  {
    if ( v41 )
      ++*(_DWORD *)(v41 + 32);
    v61 = *(_DWORD *)(a3 + 8);
    v62 = *(_DWORD *)(a3 + 12);
    if ( v61 >= v62 )
    {
      v71 = 2 * v62;
      v72 = sub_186B270(8 * v71);
      v61 = *(_DWORD *)(a3 + 8);
      v73 = *(_QWORD **)a3;
      v63 = (_QWORD *)v72;
      if ( v61 )
      {
        if ( v61 - 1 <= 2 || (_QWORD *)v72 == v73 + 1 )
        {
          for ( j = 0; j != v61; ++j )
            v63[j] = v73[j];
        }
        else
        {
          v74 = 0;
          do
          {
            *(__m128i *)&v63[v74] = _mm_loadu_si128((const __m128i *)&v73[v74]);
            v74 += 2;
          }
          while ( v74 != 2LL * (v61 >> 1) );
          if ( (v61 & 1) != 0 )
            v63[v61 & 0xFFFFFFFE] = v73[v61 & 0xFFFFFFFE];
        }
      }
      if ( v73 != (_QWORD *)(a3 + 16) && v73 )
      {
        v119 = v63;
        sub_186B220(v73);
        v61 = *(_DWORD *)(a3 + 8);
        v63 = v119;
      }
      *(_QWORD *)a3 = v63;
      *(_DWORD *)(a3 + 12) = v71;
    }
    else
    {
      v63 = *(_QWORD **)a3;
    }
    v64 = (__int64 *)a1[7].m128i_i64[1];
    v63[v61] = v41;
    v65 = *v64;
    *(_DWORD *)(a3 + 8) = v61 + 1;
    (*(void (__fastcall **)(unsigned __int64 *))(v65 + 48))(&v128);
    if ( v129.m128_u64[0] == 2 )
    {
      if ( *(_WORD *)v128 != 27503 )
        goto LABEL_71;
    }
    else if ( v129.m128_u64[0] != 7 || *(_DWORD *)v128 != 1852534389 || *(_DWORD *)(v128 + 3) != 1853321070 )
    {
LABEL_71:
      v66 = (char **)__cxa_allocate_exception(0x28u);
      *v66 = (char *)off_1C63670;
      sub_2333C0(v66 + 1, &v128);
      __cxa_throw(v66, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    (*(void (__fastcall **)(__m128 *))(*(_QWORD *)a1[5].m128i_i64[0] + 48LL))(&v130);
    v75 = (double *)v128;
    v76 = (double *)v128;
    if ( (unsigned __int16 *)v128 == &v129.m128_u16[4] )
    {
      if ( (double *)v130.m128_u64[0] != v131 )
      {
        v93 = _mm_loadu_si128((const __m128i *)&v130.m128_u16[4]);
        v128 = v130.m128_u64[0];
        v129 = (__m128)v93;
        goto LABEL_131;
      }
      v77 = v130.m128_u64[1];
      v78 = v130.m128_u64[1];
    }
    else
    {
      v77 = v130.m128_u64[1];
      v78 = v130.m128_u64[1];
      if ( (double *)v130.m128_u64[0] != v131 )
      {
        v128 = v130.m128_u64[0];
        v79 = *(double *)&v129.m128_u64[1];
        v129 = _mm_loadh_ps(v131);
        if ( v75 )
        {
          v130.m128_u64[0] = (unsigned __int64)v75;
          v131[0] = v79;
LABEL_104:
          v130.m128_u64[1] = 0;
          *(_BYTE *)v75 = 0;
          sub_233E40((__int64)&v130);
          goto LABEL_71;
        }
LABEL_131:
        v130.m128_u64[0] = (unsigned __int64)v131;
        v75 = v131;
        goto LABEL_104;
      }
    }
    if ( !v77 )
    {
LABEL_141:
      v129.m128_u64[0] = v78;
      *((_BYTE *)v75 + v78) = 0;
      v75 = (double *)v130.m128_u64[0];
      goto LABEL_104;
    }
    if ( v77 == 1 )
    {
      *(_BYTE *)v128 = LOBYTE(v131[0]);
      v78 = v130.m128_u64[1];
      v75 = (double *)v128;
      goto LABEL_141;
    }
    if ( (unsigned int)v77 >= 8 )
    {
      *(double *)v128 = v131[0];
      *(double *)((char *)v76 + (unsigned int)v77 - 8) = *(double *)((char *)&v130.m128_u64[1] + (unsigned int)v77);
      v102 = (unsigned __int64)(v76 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (((_DWORD)v77 + (_DWORD)v76 - (_DWORD)v102) & 0xFFFFFFF8) >= 8 )
      {
        v103 = (v77 + (_DWORD)v76 - v102) & 0xFFFFFFF8;
        v104 = 0;
        do
        {
          v105 = v104;
          v104 += 8;
          *(_QWORD *)(v102 + v105) = *(_QWORD *)((char *)v131 - ((char *)v76 - v102) + v105);
        }
        while ( v104 < v103 );
      }
    }
    else
    {
      if ( (v77 & 4) != 0 )
      {
        *(_DWORD *)v128 = LODWORD(v131[0]);
        *(_DWORD *)((char *)v76 + (unsigned int)v77 - 4) = *(__int32 *)((char *)&v130.m128_i32[3] + (unsigned int)v77);
        v76 = (double *)v128;
        v77 = v130.m128_u64[1];
        goto LABEL_140;
      }
      if ( !(_DWORD)v77 )
      {
LABEL_140:
        v78 = v77;
        v75 = v76;
        goto LABEL_141;
      }
      *(_BYTE *)v128 = LOBYTE(v131[0]);
      if ( (v77 & 2) != 0 )
      {
        *(_WORD *)((char *)v76 + (unsigned int)v77 - 2) = *(__int16 *)((char *)&v130.m128_i16[7] + (unsigned int)v77);
        v76 = (double *)v128;
        v77 = v130.m128_u64[1];
        goto LABEL_140;
      }
    }
    v76 = (double *)v128;
    v77 = v130.m128_u64[1];
    goto LABEL_140;
  }
  v42 = *a2;
  if ( v40 == 1 )
  {
    sub_ED2DA0(v42);
    *(_DWORD *)(*a2 + 120LL) = (*(_DWORD *)(*a2 + 120LL) + 1) & 0x3FFFFFF | *(_DWORD *)(*a2 + 120LL) & 0xFC000000;
    v43 = *a2;
    if ( *a2 )
      ++*(_DWORD *)(v43 + 32);
    v44 = *(_DWORD *)(a3 + 8);
    v45 = *(_DWORD *)(a3 + 12);
    if ( v44 >= v45 )
    {
      ptra = 2 * v45;
      v68 = sub_186B270(16LL * v45);
      v44 = *(_DWORD *)(a3 + 8);
      v69 = *(_QWORD **)a3;
      v46 = (_QWORD *)v68;
      if ( v44 )
      {
        if ( v44 - 1 <= 2 || (_QWORD *)v68 == v69 + 1 )
        {
          for ( k = 0; k != v44; ++k )
            v46[k] = v69[k];
        }
        else
        {
          v70 = 0;
          do
          {
            *(__m128i *)&v46[v70] = _mm_loadu_si128((const __m128i *)&v69[v70]);
            v70 += 2;
          }
          while ( v70 != 2LL * (v44 >> 1) );
          if ( (v44 & 1) != 0 )
            v46[v44 & 0xFFFFFFFE] = v69[v44 & 0xFFFFFFFE];
        }
      }
      if ( v69 != (_QWORD *)(a3 + 16) && v69 )
      {
        v118 = v46;
        sub_186B220(v69);
        v44 = *(_DWORD *)(a3 + 8);
        v46 = v118;
      }
      *(_QWORD *)a3 = v46;
      *(_DWORD *)(a3 + 12) = ptra;
    }
    else
    {
      v46 = *(_QWORD **)a3;
    }
    v46[v44] = v43;
    v47 = *a2;
    *(_DWORD *)(a3 + 8) = v44 + 1;
    if ( (*(_BYTE *)(v47 + 123) & 4) != 0 )
    {
      v84 = sub_1336B20(a1[30].m128i_i64[0]);
      v85 = a1[18].m128i_i64[1];
      v86 = (void (__fastcall ***)(void *))v84;
      if ( v84 )
      {
        ++*(_DWORD *)(v84 + 8);
        v87 = sub_1336AB0(v85, v84);
        v88 = (void (__fastcall ***)(void *))v87;
        if ( v87 )
          ++*(_DWORD *)(v87 + 8);
        v14 = (*((_DWORD *)v86 + 2))-- == 1;
        if ( v14 )
        {
          (**v86)(v86);
          sub_186B220(v86);
        }
      }
      else
      {
        v98 = sub_1336AB0(v85, 0);
        v88 = (void (__fastcall ***)(void *))v98;
        if ( v98 )
          ++*(_DWORD *)(v98 + 8);
      }
      v89 = *a2;
      v90 = sub_1336AB0(*(_QWORD *)(v89 + 8), v88);
      v91 = v90;
      if ( v90 )
        ++*(_DWORD *)(v90 + 8);
      v92 = *(void (__fastcall ****)(void *))(v89 + 8);
      if ( v92 )
      {
        v14 = (*((_DWORD *)v92 + 2))-- == 1;
        if ( v14 )
        {
          (**v92)(v92);
          sub_186B220(v92);
        }
      }
      *(_QWORD *)(v89 + 8) = v91;
      if ( v88 )
      {
        v14 = (*((_DWORD *)v88 + 2))-- == 1;
        if ( v14 )
        {
          (**v88)(v88);
          sub_186B220(v88);
        }
      }
    }
  }
  else
  {
    sub_ED2DA0(v42);
    *(_DWORD *)(*a2 + 120LL) = (*(_DWORD *)(*a2 + 120LL) + 1) & 0x3FFFFFF | *(_DWORD *)(*a2 + 120LL) & 0xFC000000;
    if ( a1[26].m128i_i32[0] )
    {
      sub_EDBA20(
        *a2,
        *(_QWORD *)(a1[1].m128i_i64[0] + 864),
        0,
        v111,
        (int)&v130,
        (int)&v120,
        (__int64)&v123,
        (__int64)&v124);
    }
    else
    {
      sub_41C800((__m128i *)&v130, &a1[22].m128i_u64[1]);
      v67 = *(_QWORD *)v126;
      *(_QWORD *)v126 = v130.m128_u64[0];
      sub_710AA0(v67, v130.m128_i64[1]);
      sub_EDBA20(*a2, v126[0], 0, v111, (int)&v130, (int)&v120, (__int64)&v123, (__int64)&v124);
    }
    v49 = *a2;
    if ( *a2 )
      ++*(_DWORD *)(v49 + 32);
    v50 = *(_DWORD *)(a3 + 8);
    v51 = *(_DWORD *)(a3 + 12);
    if ( v50 >= v51 )
    {
      v80 = 2 * v51;
      v81 = sub_186B270(8 * v80);
      v50 = *(_DWORD *)(a3 + 8);
      v82 = *(_QWORD **)a3;
      v52 = (_QWORD *)v81;
      if ( v50 )
      {
        if ( v50 - 1 <= 2 || (_QWORD *)v81 == v82 + 1 )
        {
          for ( m = 0; m != v50; ++m )
            v52[m] = v82[m];
        }
        else
        {
          v83 = 0;
          do
          {
            *(__m128i *)&v52[v83] = _mm_loadu_si128((const __m128i *)&v82[v83]);
            v83 += 2;
          }
          while ( v83 != 2LL * (v50 >> 1) );
          if ( (v50 & 1) != 0 )
            v52[v50 & 0xFFFFFFFE] = v82[v50 & 0xFFFFFFFE];
        }
      }
      if ( v82 != (_QWORD *)(a3 + 16) && v82 )
      {
        sub_186B220(v82);
        v50 = *(_DWORD *)(a3 + 8);
      }
      *(_QWORD *)a3 = v52;
      *(_DWORD *)(a3 + 12) = v80;
    }
    else
    {
      v52 = *(_QWORD **)a3;
    }
    v52[v50] = v49;
    *(_DWORD *)(a3 + 8) = v50 + 1;
  }
  sub_710AA0(*(__int64 *)v126, (__int64)v127);
  sub_2334C0(v117);
  if ( *(_QWORD *)v121 )
LABEL_49:
    sub_186B220((void *)(*(_QWORD *)v121 - 8LL));
LABEL_50:
  sub_18572D0(v115);
  return sub_EE4A00(v114);
}

