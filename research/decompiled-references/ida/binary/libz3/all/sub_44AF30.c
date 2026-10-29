__int64 __fastcall sub_44AF30(__int64 a1, size_t a2, _QWORD *a3)
{
  char **exception; // r12
  char **v4; // r12
  char **v5; // r12
  __int64 *v6; // r14
  __int64 *v7; // rsi
  __int64 *v9; // rbp
  __int64 v10; // rax
  __int64 *v11; // r15
  __int64 *v12; // r12
  _DWORD *v13; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  int v16; // eax
  _QWORD *v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r13
  unsigned int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  __int64 *v24; // rdx
  unsigned int v25; // eax
  unsigned int v26; // edx
  size_t v27; // rsi
  __int64 v28; // rax
  unsigned int v29; // edx
  __int64 v30; // rax
  _QWORD *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // r12
  __int64 v34; // rsi
  __int64 v35; // rax
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rsi
  void *v40; // rdi
  bool v41; // zf
  unsigned __int64 v42; // rsi
  __int64 v43; // rdi
  std::ios_base *v44; // rdi
  int v45; // esi
  _QWORD *v46; // r12
  __int64 (__fastcall *v47)(__int64, _QWORD *); // rax
  __int64 v48; // r13
  __int64 (__fastcall *v49)(__int64, _QWORD *); // rdx
  _QWORD *v50; // rdx
  __int64 (__fastcall *v51)(__int64, _QWORD *); // rcx
  _QWORD *v52; // rcx
  __int64 (__fastcall *v53)(__int64, _QWORD *); // r8
  _QWORD *v54; // rdi
  _QWORD *v55; // rcx
  _QWORD *v56; // rdx
  _DWORD *v57; // rdi
  __int64 *v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // r12
  __int64 v65; // r12
  unsigned __int64 v66; // r13
  __int64 v67; // rax
  _QWORD *v68; // rax
  _DWORD *v69; // rax
  __int64 v70; // rsi
  void (**v71)(void); // rax
  __int64 v72; // rax
  __int64 v73; // rax
  _QWORD *v74; // r12
  __int64 v75; // rax
  __int64 v76; // r13
  _DWORD *v77; // rsi
  _QWORD *v78; // rcx
  __int64 v79; // rax
  _DWORD *v80; // rax
  _DWORD *v81; // r9
  int v82; // edx
  __int64 v83; // r12
  char *v84; // rax
  char *v85; // rdi
  unsigned __int64 v86; // rax
  __int64 v87; // r10
  _QWORD *v88; // r13
  __int64 v89; // rsi
  __int64 v90; // rdi
  unsigned int v91; // r13d
  char *v92; // rdx
  _DWORD *v93; // rcx
  __int64 v94; // r8
  unsigned int v95; // eax
  __int64 v96; // rsi
  int v97; // eax
  _QWORD *v98; // rsi
  unsigned int v99; // r9d
  size_t v100; // rsi
  unsigned int *v101; // rax
  __int64 v102; // rsi
  unsigned int v103; // r9d
  unsigned int v104; // ebp
  char *v105; // r12
  char *v106; // r13
  __int64 v107; // rsi
  __int64 v108; // rdi
  __int64 *v109; // r12
  unsigned __int64 v110; // r13
  __int64 v111; // rsi
  __int64 v112; // r14
  __int64 *v113; // r12
  unsigned __int64 v114; // r13
  __int64 v115; // rsi
  _QWORD *v117; // rax
  _QWORD *v118; // rax
  unsigned __int64 v119; // rax
  __int64 v120; // r11
  _DWORD *v121; // rcx
  _QWORD *v122; // rax
  _DWORD *v123; // rcx
  __int64 *v124; // [rsp+0h] [rbp-198h]
  __int64 v125; // [rsp+8h] [rbp-190h] BYREF
  void *ptr; // [rsp+10h] [rbp-188h]
  _DWORD *v127; // [rsp+18h] [rbp-180h]
  _QWORD *v128; // [rsp+20h] [rbp-178h]
  unsigned int v129; // [rsp+2Ch] [rbp-16Ch]
  char *v130; // [rsp+30h] [rbp-168h]
  _QWORD *v131; // [rsp+38h] [rbp-160h]
  _QWORD *v132; // [rsp+40h] [rbp-158h]
  __m128 *v133; // [rsp+48h] [rbp-150h]
  __int64 v134; // [rsp+60h] [rbp-138h]
  __int64 v135; // [rsp+70h] [rbp-128h]
  void *v136; // [rsp+80h] [rbp-118h]
  __int64 v137; // [rsp+88h] [rbp-110h]
  _QWORD v138[2]; // [rsp+90h] [rbp-108h] BYREF
  __m128 v139; // [rsp+A0h] [rbp-F8h] BYREF
  _DWORD *v140; // [rsp+C0h] [rbp-D8h] BYREF
  void *v141; // [rsp+C8h] [rbp-D0h]
  __int64 v142; // [rsp+D0h] [rbp-C8h]
  _BYTE v143[192]; // [rsp+D8h] [rbp-C0h] BYREF

  v9 = (__int64 *)a2;
  v10 = *(_QWORD *)(a1 + 40);
  v11 = *(__int64 **)(a2 + 8);
  v128 = a3;
  v125 = v10;
  v134 = v10;
  v135 = v10;
  v132 = v138;
  v136 = v138;
  v137 = 1;
  LOWORD(v138[0]) = 111;
  if ( v11 )
  {
    v124 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 != v124 )
    {
      v12 = v11;
      v13 = (_DWORD *)sub_44AAD0(a1);
      v14 = nullptr;
      v11 = nullptr;
      if ( v13 )
        goto LABEL_13;
      v11 = nullptr;
LABEL_158:
      ptr = v13;
      v118 = (_QWORD *)sub_186B270(0x18u);
      v17 = v118 + 1;
      *v118 = 2;
      v13 = ptr;
      v16 = 1;
      v14 = v17;
      while ( 1 )
      {
        *v17 = v13;
        v18 = *(_QWORD *)(a1 + 40);
        *((_DWORD *)v14 - 1) = v16;
        a2 = 0;
        v19 = sub_15E1B70(v18);
        v20 = v19;
        if ( v19 )
          ++*(_DWORD *)(v19 + 8);
        if ( v11 )
        {
          v21 = *((_DWORD *)v11 - 1);
          if ( v21 == *((_DWORD *)v11 - 2) )
          {
            v29 = (3 * v21 + 1) >> 1;
            a2 = 8 * v29 + 8;
            if ( 8 * v21 + 8 >= (unsigned int)a2 || v21 >= v29 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&v140, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v140);
              sub_233E40((__int64)&v140);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            LODWORD(ptr) = (3 * v21 + 1) >> 1;
            v30 = sub_186B300(v11 - 1, a2);
            v11 = (__int64 *)(v30 + 8);
            *(_DWORD *)v30 = (_DWORD)ptr;
            LODWORD(v30) = *(_DWORD *)(v30 + 4);
            v24 = &v11[(unsigned int)v30];
            v23 = v30 + 1;
          }
          else
          {
            v22 = v21;
            v23 = v21 + 1;
            v24 = &v11[v22];
          }
        }
        else
        {
          v117 = (_QWORD *)sub_186B270(0x18u);
          v24 = v117 + 1;
          *v117 = 2;
          v23 = 1;
          v11 = v24;
        }
        *v24 = v20;
        ++v12;
        *((_DWORD *)v11 - 1) = v23;
        if ( v124 == v12 )
          goto LABEL_23;
        v13 = (_DWORD *)sub_44AAD0(a1);
        if ( v13 )
        {
LABEL_13:
          ++v13[2];
          if ( !v14 )
            goto LABEL_158;
        }
        v25 = *((_DWORD *)v14 - 1);
        if ( v25 == *((_DWORD *)v14 - 2) )
        {
          v26 = (3 * v25 + 1) >> 1;
          v27 = 8 * v26 + 8;
          if ( 8 * v25 + 8 >= (unsigned int)v27 || v25 >= v26 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v140, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, &v140);
            sub_233E40((__int64)&v140);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v127 = v13;
          LODWORD(ptr) = (3 * v25 + 1) >> 1;
          v28 = sub_186B300(v14 - 1, v27);
          v14 = (_QWORD *)(v28 + 8);
          v13 = v127;
          *(_DWORD *)v28 = (_DWORD)ptr;
          LODWORD(v28) = *(_DWORD *)(v28 + 4);
          v17 = &v14[(unsigned int)v28];
          v16 = v28 + 1;
        }
        else
        {
          v15 = v25;
          v16 = v25 + 1;
          v17 = &v14[v15];
        }
      }
    }
    v11 = nullptr;
  }
  v14 = nullptr;
LABEL_23:
  v31 = *(_QWORD **)(a1 + 144);
  v32 = *v31;
  v131 = v31;
  (*(void (__fastcall **)(_QWORD *, size_t))(v32 + 192))(v31, a2);
  sub_E5EBF0(*(_QWORD *)(a1 + 144), *v128);
  v33 = *(_QWORD *)(a1 + 144);
  if ( v11 )
    v34 = *((unsigned int *)v11 - 1);
  else
    v34 = 0;
  v35 = sub_15EC1C0(v125, v34);
  v139 = _mm_loadh_ps((const double *)&v125);
  if ( v35 )
    ++*(_DWORD *)(v35 + 8);
  v133 = &v139;
  sub_15ECFD0((unsigned int)&v140, (unsigned int)&v139, 8, v36, v37, v38);
  sub_E5EBF0(v33, v140);
  v39 = (__int64)v140;
  if ( v140 )
  {
    v40 = v141;
    v41 = v140[2]-- == 1;
    if ( v41 )
      sub_15D7BC0(v40, v39);
  }
  v42 = v139.m128_u64[0];
  if ( v139.m128_u64[0] )
  {
    v43 = v139.m128_i64[1];
    v41 = (*(_DWORD *)(v139.m128_u64[0] + 8))-- == 1;
    if ( v41 )
      sub_15D7BC0(v43, v42);
  }
LABEL_33:
  v44 = *(std::ios_base **)(a1 + 144);
  if ( v14 )
  {
LABEL_34:
    v45 = *((_DWORD *)v14 - 1);
    goto LABEL_35;
  }
  while ( 1 )
  {
    v45 = 0;
LABEL_35:
    if ( (unsigned int)sub_E60CB0(v44, v45, (int)v14) + 1 <= 1 )
      break;
    v46 = *(_QWORD **)(a1 + 144);
    v140 = nullptr;
    v47 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*v46 + 32LL);
    if ( v47 != sub_41C670 )
    {
      v47((__int64)v46, &v140);
      goto LABEL_50;
    }
    v48 = v46[12];
    v49 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v48 + 32LL);
    if ( v49 != sub_41C670 )
    {
      v49(v46[12], &v140);
LABEL_47:
      v57 = v140;
      if ( !v140 )
        goto LABEL_71;
      goto LABEL_48;
    }
    v50 = *(_QWORD **)(v48 + 96);
    v51 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*v50 + 32LL);
    if ( v51 != sub_41C670 )
    {
      ptr = *(void **)(v48 + 96);
      v51((__int64)v50, &v140);
LABEL_44:
      v57 = v140;
      v56 = ptr;
      if ( !v140 )
        goto LABEL_71;
      goto LABEL_45;
    }
    v52 = (_QWORD *)v50[12];
    v127 = *(_DWORD **)(v48 + 96);
    v53 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*v52 + 32LL);
    if ( v53 == sub_41C670 )
    {
      v54 = (_QWORD *)v52[12];
      ptr = v52;
      sub_39A840(v54, &v140);
      v55 = ptr;
      v56 = v127;
    }
    else
    {
      ptr = v52;
      v53((__int64)v52, &v140);
      v56 = v127;
      v55 = ptr;
    }
    v57 = v140;
    if ( !v140 )
    {
LABEL_71:
      v72 = v9[1];
      if ( !v72 )
        goto LABEL_33;
      v64 = *(unsigned int *)(v72 - 4);
      if ( !(_DWORD)v64 )
        goto LABEL_33;
LABEL_54:
      v65 = 8 * v64;
      v66 = 0;
      do
      {
        while ( 1 )
        {
          v67 = v14[v66 / 8];
          if ( *(_WORD *)(v67 + 4) )
            break;
          v68 = *(_QWORD **)(*(_QWORD *)(v67 + 16) + 24LL);
          if ( !v68 || *v68 != 0x800000000LL )
            break;
          v66 += 8LL;
          if ( v66 == v65 )
            goto LABEL_67;
        }
        if ( (unsigned __int8)sub_13742D0(v57, *(_QWORD *)(v9[1] + v66)) )
        {
          v69 = (_DWORD *)sub_15E1A70(*(_QWORD *)(a1 + 40));
          if ( v69 )
            ++v69[2];
          v70 = v14[v66 / 8];
          if ( v70 )
          {
            v41 = (*(_DWORD *)(v70 + 8))-- == 1;
            if ( v41 )
            {
              ptr = v69;
              sub_15D7BC0(v125, v70);
              v69 = ptr;
            }
          }
          v14[v66 / 8] = v69;
        }
        v66 += 8LL;
        v57 = v140;
      }
      while ( v66 != v65 );
LABEL_67:
      if ( !v57 )
        goto LABEL_33;
      goto LABEL_68;
    }
    v58 = (__int64 *)v55[7];
    if ( v58 )
    {
      v59 = *v58;
      ptr = v56;
      (*(void (__fastcall **)(__int64 *, _DWORD **))(v59 + 32))(v58, &v140);
      goto LABEL_44;
    }
LABEL_45:
    v60 = v56[7];
    if ( v60 )
    {
      (*(void (__fastcall **)(__int64, _DWORD **))(*(_QWORD *)v60 + 32LL))(v60, &v140);
      goto LABEL_47;
    }
LABEL_48:
    v61 = *(_QWORD *)(v48 + 56);
    if ( !v61 )
      goto LABEL_51;
    (*(void (__fastcall **)(_QWORD, _DWORD **))(*(_QWORD *)v61 + 32LL))(*(_QWORD *)(v48 + 56), &v140);
LABEL_50:
    v57 = v140;
    if ( !v140 )
      goto LABEL_71;
LABEL_51:
    v62 = v46[7];
    if ( v62 )
    {
      (*(void (__fastcall **)(_QWORD, _DWORD **))(*(_QWORD *)v62 + 32LL))(v46[7], &v140);
      v63 = v9[1];
      v57 = v140;
      if ( v63 )
      {
        v64 = *(unsigned int *)(v63 - 4);
        if ( (_DWORD)v64 )
          goto LABEL_54;
      }
      goto LABEL_67;
    }
    v73 = v9[1];
    if ( v73 )
    {
      v64 = *(unsigned int *)(v73 - 4);
      if ( (_DWORD)v64 )
        goto LABEL_54;
    }
LABEL_68:
    v41 = v57[4]-- == 1;
    if ( !v41 )
      goto LABEL_33;
    v71 = *(void (***)(void))v57;
    ptr = v57;
    (*v71)();
    sub_186B220(ptr);
    v44 = *(std::ios_base **)(a1 + 144);
    if ( v14 )
      goto LABEL_34;
  }
  v74 = (_QWORD *)v9[1];
  v140 = *(_DWORD **)(a1 + 40);
  v130 = v143;
  v141 = v143;
  v142 = 0x1000000000LL;
  if ( v14 )
  {
    v75 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v75 )
    {
      v76 = 8 * v75;
      v77 = nullptr;
      do
      {
        v79 = *(_QWORD *)((char *)v77 + (_QWORD)v14);
        if ( *(_WORD *)(v79 + 4) || (v80 = *(_DWORD **)(*(_QWORD *)(v79 + 16) + 24LL)) == nullptr || *v80 || v80[1] != 8 )
        {
          v81 = *(_DWORD **)((char *)v77 + (_QWORD)v74);
          if ( v81 )
            ++v81[2];
          v82 = v142;
          if ( (unsigned int)v142 < HIDWORD(v142) )
          {
            v78 = v141;
          }
          else
          {
            v127 = v77;
            v83 = (unsigned int)(2 * HIDWORD(v142));
            ptr = v81;
            v84 = (char *)sub_186B270(8 * v83);
            v82 = v142;
            v85 = (char *)v141;
            v78 = v84;
            v81 = ptr;
            v77 = v127;
            if ( (_DWORD)v142 )
            {
              if ( (unsigned int)(v142 - 1) <= 2 || v84 == (char *)v141 + 8 )
              {
                v119 = 0;
                v120 = 8LL * (unsigned int)v142;
                do
                {
                  v78[v119 / 8] = *(_QWORD *)&v85[v119];
                  v119 += 8LL;
                }
                while ( v120 != v119 );
              }
              else
              {
                v86 = 0;
                v87 = 16LL * ((unsigned int)v142 >> 1);
                do
                {
                  *(__m128i *)&v78[v86 / 8] = _mm_loadu_si128((const __m128i *)&v85[v86]);
                  v86 += 16LL;
                }
                while ( v86 != v87 );
                if ( (v82 & 1) != 0 )
                  v78[v82 & 0xFFFFFFFE] = *(_QWORD *)&v85[8 * (v82 & 0xFFFFFFFE)];
              }
            }
            if ( v85 != v130 && v85 )
            {
              v128 = v78;
              v127 = v77;
              ptr = v81;
              sub_186B220(v85);
              v82 = v142;
              v78 = v128;
              v77 = v127;
              v81 = ptr;
            }
            HIDWORD(v142) = v83;
            v74 = (_QWORD *)v9[1];
            v141 = v78;
          }
          v78[v82] = v81;
          LODWORD(v142) = v82 + 1;
        }
        v77 += 2;
      }
      while ( v77 != (_DWORD *)v76 );
    }
  }
  if ( !v74 )
    goto LABEL_162;
  v88 = &v74[*((unsigned int *)v74 - 1)];
  if ( v74 >= v88 )
    goto LABEL_111;
  do
  {
    while ( 1 )
    {
      v89 = *v74;
      if ( *v74 )
      {
        v90 = *v9;
        v41 = (*(_DWORD *)(v89 + 8))-- == 1;
        if ( v41 )
          break;
      }
      if ( ++v74 >= v88 )
        goto LABEL_110;
    }
    sub_15D7BC0(v90, v89);
    ++v74;
  }
  while ( v74 < v88 );
LABEL_110:
  v74 = (_QWORD *)v9[1];
  if ( v74 )
  {
LABEL_111:
    *((_DWORD *)v74 - 1) = 0;
    v91 = v142;
    v92 = (char *)v141;
    if ( !(_DWORD)v142 )
      goto LABEL_127;
    v93 = *(_DWORD **)v141;
    if ( *(_QWORD *)v141 )
      ++v93[2];
    v94 = 0;
LABEL_115:
    v95 = *((_DWORD *)v74 - 1);
    if ( v95 != *((_DWORD *)v74 - 2) )
    {
LABEL_116:
      v96 = v95;
      v97 = v95 + 1;
      v98 = &v74[v96];
      goto LABEL_117;
    }
    while ( 1 )
    {
      v99 = (3 * v95 + 1) >> 1;
      v100 = 8 * v99 + 8;
      if ( 8 * v95 + 8 >= (unsigned int)v100 || v95 >= v99 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v133, "Overflow encountered when expanding vector");
        v6 = (__int64 *)v133;
        v7 = (__int64 *)v133;
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v7);
        sub_233E40((__int64)v6);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v129 = (3 * v95 + 1) >> 1;
      v128 = v92;
      v127 = (_DWORD *)v94;
      ptr = v93;
      v101 = (unsigned int *)sub_186B300(v74 - 1, v100);
      v102 = v101[1];
      v103 = v129;
      v74 = v101 + 2;
      v93 = ptr;
      v94 = (__int64)v127;
      v9[1] = (__int64)(v101 + 2);
      *v101 = v103;
      LODWORD(v101) = v102;
      v92 = (char *)v128;
      v98 = &v74[v102];
      v97 = (_DWORD)v101 + 1;
LABEL_117:
      ++v94;
      *v98 = v93;
      *((_DWORD *)v74 - 1) = v97;
      if ( (unsigned int)v94 >= v91 )
        break;
LABEL_118:
      v93 = *(_DWORD **)&v92[8 * v94];
      if ( !v93 )
        goto LABEL_115;
      ++v93[2];
      v95 = *((_DWORD *)v74 - 1);
      if ( v95 != *((_DWORD *)v74 - 2) )
        goto LABEL_116;
    }
    v92 = (char *)v141;
    v91 = v142;
    v104 = 1;
    if ( !v97 )
    {
LABEL_127:
      ++*(_DWORD *)(a1 + 8);
      v104 = 0;
    }
  }
  else
  {
LABEL_162:
    v91 = v142;
    v92 = (char *)v141;
    if ( !(_DWORD)v142 )
      goto LABEL_127;
    v121 = *(_DWORD **)v141;
    if ( *(_QWORD *)v141 )
      ++v121[2];
    v127 = v121;
    ptr = v92;
    v122 = (_QWORD *)sub_186B270(0x18u);
    v123 = v127;
    v74 = v122 + 1;
    v92 = (char *)ptr;
    v9[1] = (__int64)(v122 + 1);
    v94 = 1;
    v122[1] = v123;
    *v122 = 0x100000002LL;
    if ( v91 != 1 )
      goto LABEL_118;
    v92 = (char *)v141;
    v91 = v142;
    v104 = 1;
  }
  v105 = &v92[8 * v91];
  if ( v92 < v105 )
  {
    v106 = v92;
    do
    {
      while ( 1 )
      {
        v107 = *(_QWORD *)v106;
        if ( *(_QWORD *)v106 )
        {
          v108 = (__int64)v140;
          v41 = (*(_DWORD *)(v107 + 8))-- == 1;
          if ( v41 )
            break;
        }
        v106 += 8;
        if ( v106 >= v105 )
          goto LABEL_134;
      }
      sub_15D7BC0(v108, v107);
      v106 += 8;
    }
    while ( v106 < v105 );
LABEL_134:
    v92 = (char *)v141;
  }
  if ( v92 != v130 && v92 )
    sub_186B220(v92);
  (*(void (__fastcall **)(_QWORD *, __int64))(*v131 + 200LL))(v131, 1);
  if ( v136 != v132 )
    operator delete(v136, v138[0] + 1LL);
  if ( v11 )
  {
    v109 = v11;
    v110 = (unsigned __int64)&v11[*((unsigned int *)v11 - 1)];
    if ( (unsigned __int64)v11 < v110 )
    {
      do
      {
        while ( 1 )
        {
          v111 = *v109;
          if ( *v109 )
          {
            v41 = (*(_DWORD *)(v111 + 8))-- == 1;
            if ( v41 )
              break;
          }
          if ( (unsigned __int64)++v109 >= v110 )
            goto LABEL_147;
        }
        ++v109;
        sub_15D7BC0(v125, v111);
      }
      while ( (unsigned __int64)v109 < v110 );
    }
LABEL_147:
    sub_186B220(v11 - 1);
  }
  if ( v14 )
  {
    v112 = v125;
    v113 = v14;
    v114 = (unsigned __int64)&v14[*((unsigned int *)v14 - 1)];
    if ( (unsigned __int64)v14 < v114 )
    {
      do
      {
        while ( 1 )
        {
          v115 = *v113;
          if ( *v113 )
          {
            v41 = (*(_DWORD *)(v115 + 8))-- == 1;
            if ( v41 )
              break;
          }
          if ( (unsigned __int64)++v113 >= v114 )
            goto LABEL_155;
        }
        ++v113;
        sub_15D7BC0(v112, v115);
      }
      while ( (unsigned __int64)v113 < v114 );
    }
LABEL_155:
    sub_186B220(v14 - 1);
  }
  return v104;
}

