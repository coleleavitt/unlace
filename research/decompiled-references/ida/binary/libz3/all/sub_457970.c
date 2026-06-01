__int64 __fastcall sub_457970(__int64 a1, __int64 *a2, __int64 a3, int a4, int a5, int a6)
{
  char **v6; // r14
  char **v7; // r12
  char **v8; // r12
  char **exception; // rbp
  char **v10; // r12
  std::chrono::_V2::steady_clock *v13; // rdi
  __int64 result; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // r13
  unsigned int v25; // ebp
  __int64 v26; // rbx
  unsigned int v27; // eax
  __int64 v28; // rsi
  int v29; // eax
  _QWORD *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // r13
  __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 *v36; // r14
  __int64 v37; // rsi
  bool v38; // zf
  __int64 *v39; // r15
  __int64 *v40; // r14
  __int64 v41; // rsi
  __int64 v42; // rdi
  unsigned int v43; // eax
  __int64 *v44; // rdx
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // r14
  __int64 v48; // rdi
  __int64 *v49; // r14
  __int64 v50; // rsi
  unsigned int v51; // eax
  __int64 v52; // rdx
  int v53; // eax
  _QWORD *v54; // rdx
  char v55; // dl
  __int64 *v56; // rbx
  __int64 *v57; // rbp
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 *v60; // rbx
  unsigned __int64 v61; // rbp
  __int64 v62; // rsi
  __int64 *v63; // rbx
  unsigned __int64 v64; // rbp
  __int64 v65; // rsi
  __int64 v66; // rdi
  std::chrono::_V2::steady_clock *v67; // rdi
  unsigned int v68; // r14d
  size_t v69; // rsi
  unsigned int *v70; // rax
  __int64 v71; // rcx
  unsigned int v72; // r14d
  size_t v73; // rsi
  unsigned int *v74; // rax
  __int64 v75; // rdx
  unsigned int v76; // r10d
  __int64 v77; // rdi
  _QWORD *v78; // rsi
  _QWORD *v79; // rax
  unsigned int v80; // r14d
  size_t v81; // rsi
  unsigned int *v82; // rax
  __int64 v83; // rdx
  _QWORD *v84; // rax
  __int64 i; // r15
  __int64 v86; // rdi
  _QWORD *v87; // rcx
  __int64 v88; // rsi
  __int64 v89; // r14
  unsigned int v90; // eax
  __int64 v91; // rcx
  __int64 v92; // rax
  _QWORD *v93; // rcx
  _QWORD *v94; // r8
  _QWORD *v95; // rsi
  __int64 j; // rdi
  _QWORD *v97; // rax
  unsigned int v98; // r15d
  unsigned int v99; // ecx
  unsigned int *v100; // rax
  __int64 v101; // rcx
  _QWORD *v102; // rax
  unsigned int v103; // eax
  __int64 v104; // rdx
  int v105; // eax
  _QWORD *v106; // rdx
  __int64 v107; // rax
  _QWORD *v108; // rax
  unsigned int v109; // r14d
  unsigned int v110; // edx
  unsigned int *v111; // rax
  __int64 v112; // rdx
  _QWORD *v113; // rcx
  _QWORD *v114; // rax
  __int64 v115; // [rsp+0h] [rbp-1A8h]
  int v116; // [rsp+0h] [rbp-1A8h]
  char v117; // [rsp+0h] [rbp-1A8h]
  char v118; // [rsp+0h] [rbp-1A8h]
  char v119; // [rsp+0h] [rbp-1A8h]
  unsigned int v121; // [rsp+18h] [rbp-190h]
  unsigned int v122; // [rsp+1Ch] [rbp-18Ch]
  __int64 v123; // [rsp+20h] [rbp-188h]
  _QWORD *v124; // [rsp+28h] [rbp-180h]
  unsigned int v125; // [rsp+30h] [rbp-178h]
  char v126; // [rsp+37h] [rbp-171h]
  __int64 v127; // [rsp+40h] [rbp-168h]
  _QWORD *v128; // [rsp+50h] [rbp-158h]
  __int64 v129; // [rsp+58h] [rbp-150h]
  unsigned int v130; // [rsp+7Ch] [rbp-12Ch] BYREF
  __int64 v131; // [rsp+80h] [rbp-128h] BYREF
  _QWORD *v132; // [rsp+88h] [rbp-120h]
  __int64 v133; // [rsp+90h] [rbp-118h] BYREF
  __int64 *v134; // [rsp+98h] [rbp-110h]
  _QWORD v135[2]; // [rsp+A0h] [rbp-108h] BYREF
  int v136; // [rsp+B0h] [rbp-F8h]
  __int64 v137[4]; // [rsp+C0h] [rbp-E8h] BYREF
  __m128i v138; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v139; // [rsp+F8h] [rbp-B0h]
  std::chrono::_V2::steady_clock *v140; // [rsp+100h] [rbp-A8h]
  __int64 v141; // [rsp+110h] [rbp-98h]
  void *v142; // [rsp+118h] [rbp-90h]
  __int64 (__fastcall **v143)(); // [rsp+120h] [rbp-88h]
  __int64 v144; // [rsp+130h] [rbp-78h]
  void *v145; // [rsp+138h] [rbp-70h]
  __int64 v146; // [rsp+148h] [rbp-60h]
  void *ptr; // [rsp+150h] [rbp-58h]
  __int64 v148; // [rsp+158h] [rbp-50h]
  __int64 *v149; // [rsp+160h] [rbp-48h]
  char v150; // [rsp+168h] [rbp-40h]

  v13 = (std::chrono::_V2::steady_clock *)*a2;
  result = *(_QWORD *)(sub_4095A0(*a2, (__int64)a2, a3, a4, a5, a6) + 8);
  if ( !result || !*(_DWORD *)(result - 4) )
    return result;
  ++*(_DWORD *)(a1 + 24);
  if ( !*(_BYTE *)(a1 + 48) )
  {
    *(_QWORD *)(a1 + 32) = std::chrono::_V2::steady_clock::now(v13);
    *(_BYTE *)(a1 + 48) = 1;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a2 + 80) + 16LL) + 8LL);
  v124 = *(_QWORD **)(*(_QWORD *)(*a2 + 80) + 16LL);
  v135[0] = off_1C4E9C8;
  v127 = v15;
  v135[1] = v15;
  sub_180C5A0(v137, "array");
  v136 = sub_15DA4C0(v15 + 560, v137);
  v16 = *a2;
  v139 = 0;
  v140 = nullptr;
  v141 = 0;
  v142 = nullptr;
  v143 = &off_1C62200;
  v144 = 0;
  v145 = nullptr;
  v146 = 0;
  ptr = nullptr;
  v148 = v15;
  v149 = nullptr;
  v150 = 1;
  v131 = v15;
  v132 = nullptr;
  v138 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v135, (__m128i)(unsigned __int64)&off_1C62200);
  v21 = sub_4095A0(v16, (__int64)v137, v17, v18, v19, v20);
  v22 = *(_QWORD *)(v21 + 8);
  v23 = nullptr;
  v24 = v21;
  if ( v22 )
  {
    v25 = 0;
    do
    {
      if ( v25 >= *(_DWORD *)(v22 - 4) )
        break;
      v26 = *(_QWORD *)(v22 + 8LL * v25);
      if ( v26 )
        ++*(_DWORD *)(v26 + 8);
      if ( v23 )
      {
        v27 = *((_DWORD *)v23 - 1);
        if ( v27 == *((_DWORD *)v23 - 2) )
        {
          v68 = (3 * v27 + 1) >> 1;
          v69 = 8 * v68 + 8;
          if ( 8 * v27 + 8 >= (unsigned int)v69 || v27 >= v68 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v137, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v137);
            sub_233E40((__int64)v137);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v70 = (unsigned int *)sub_186B300(v23 - 1, v69);
          v71 = v70[1];
          v23 = v70 + 2;
          *v70 = v68;
          v132 = v23;
          LODWORD(v70) = v71;
          v30 = &v23[v71];
          v22 = *(_QWORD *)(v24 + 8);
          v29 = (_DWORD)v70 + 1;
        }
        else
        {
          v28 = v27;
          v29 = v27 + 1;
          v30 = &v23[v28];
        }
      }
      else
      {
        v108 = (_QWORD *)sub_186B270(0x18u);
        v23 = v108 + 1;
        *v108 = 2;
        v29 = 1;
        v132 = v23;
        v30 = v23;
        v22 = *(_QWORD *)(v24 + 8);
      }
      *v30 = v26;
      ++v25;
      *((_DWORD *)v23 - 1) = v29;
    }
    while ( v22 );
  }
  v31 = *(_QWORD *)(v127 + 856);
  v123 = v31;
  if ( v31 )
  {
    ++*(_DWORD *)(v31 + 8);
    v32 = *a2;
    v133 = v127;
    v134 = nullptr;
    v125 = *(unsigned __int16 *)(v32 + 106);
    if ( !v23 )
      goto LABEL_71;
  }
  else
  {
    v107 = *a2;
    v133 = v127;
    v134 = nullptr;
    v125 = *(unsigned __int16 *)(v107 + 106);
    if ( !v23 )
      goto LABEL_73;
  }
  v122 = 0;
  v33 = nullptr;
  v121 = 0;
  v126 = 0;
  while ( v121 < *((_DWORD *)v23 - 1) && *(_DWORD *)(a1 + 16) - 1 >= v122 )
  {
    v34 = v23[v121];
    v115 = v121;
    if ( v34 )
      ++*(_DWORD *)(v34 + 8);
    if ( *(_BYTE *)(a1 + 20) )
    {
      if ( !(unsigned __int8)sub_168D740(&v138, v34) )
      {
        if ( v33 )
        {
          v103 = *((_DWORD *)v33 - 1);
          if ( v103 == *((_DWORD *)v33 - 2) )
          {
            v109 = (3 * v103 + 1) >> 1;
            v110 = 8 * v109 + 8;
            if ( 8 * v103 + 8 >= v110 || v103 >= v109 )
            {
              v10 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v137, "Overflow encountered when expanding vector");
              *v10 = (char *)off_1C63128;
              sub_2333C0(v10 + 1, v137);
              sub_233E40((__int64)v137);
              __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v111 = (unsigned int *)sub_186B300(v33 - 1, v110);
            v112 = v111[1];
            v33 = v111 + 2;
            *v111 = v109;
            LODWORD(v111) = v112;
            v106 = &v33[v112];
            v105 = (_DWORD)v111 + 1;
          }
          else
          {
            v104 = v103;
            v105 = v103 + 1;
            v106 = &v33[v104];
          }
        }
        else
        {
          v114 = (_QWORD *)sub_186B270(0x18u);
          v33 = v114 + 1;
          *v114 = 2;
          v105 = 1;
          v106 = v33;
        }
        *v106 = v34;
        ++v121;
        *((_DWORD *)v33 - 1) = v105;
        if ( v34 )
        {
          v38 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v38 )
            sub_15D7BC0(v127, v34);
        }
        goto LABEL_56;
      }
      v23 = v132;
    }
    v35 = v131;
    v36 = &v23[v115];
    if ( v123 )
      ++*(_DWORD *)(v123 + 8);
    v37 = *v36;
    if ( *v36 )
    {
      v38 = (*(_DWORD *)(v37 + 8))-- == 1;
      if ( v38 )
      {
        sub_15D7BC0(v35, v37);
        v23 = v132;
      }
    }
    *v36 = v123;
    if ( v23 )
    {
      if ( *((_DWORD *)v23 - 1) > 1u )
      {
        v55 = sub_40A830(v124, *(_DWORD *)(*a2 + 96), (__int64)&v131, &v130, v125);
        if ( v55 )
        {
          if ( !v132 )
          {
            if ( !v34 )
              goto LABEL_58;
            v122 = 0;
            v121 = 0;
LABEL_53:
            v38 = (*(_DWORD *)(v34 + 8))-- == 1;
            if ( v38 )
            {
              v117 = v55;
              sub_15D7BC0(v127, v34);
              v55 = v117;
            }
            v126 = v55;
            goto LABEL_56;
          }
          if ( *((_DWORD *)v132 - 1) && v33 )
          {
            v76 = 0;
            v77 = 0;
            v78 = &v33[*((unsigned int *)v33 - 1)];
            do
            {
              if ( v78 == v33 )
                break;
              v79 = v33;
              while ( *v79 != v132[v77] )
              {
                if ( v78 == ++v79 )
                  goto LABEL_117;
              }
              v76 = ++v77;
            }
            while ( v77 != *((_DWORD *)v132 - 1) );
LABEL_117:
            v121 = v76;
            v122 = 0;
            goto LABEL_52;
          }
          goto LABEL_150;
        }
      }
    }
    v39 = v134;
    if ( !v134 )
      goto LABEL_121;
    v40 = &v134[*((unsigned int *)v134 - 1)];
    if ( v134 >= v40 )
      goto LABEL_39;
    do
    {
      while ( 1 )
      {
        v41 = *v39;
        if ( *v39 )
        {
          v42 = v133;
          v38 = (*(_DWORD *)(v41 + 8))-- == 1;
          if ( v38 )
            break;
        }
        if ( ++v39 >= v40 )
          goto LABEL_38;
      }
      sub_15D7BC0(v42, v41);
      ++v39;
    }
    while ( v39 < v40 );
LABEL_38:
    v39 = v134;
    if ( v134 )
    {
LABEL_39:
      *((_DWORD *)v39 - 1) = 0;
      if ( !v34 )
      {
        if ( !*((_DWORD *)v39 - 2) )
          goto LABEL_171;
LABEL_41:
        v44 = &v39[*((unsigned int *)v39 - 1)];
        v45 = *((_DWORD *)v39 - 1) + 1;
        goto LABEL_42;
      }
      ++*(_DWORD *)(v34 + 8);
      v43 = *((_DWORD *)v39 - 2);
      if ( v43 != *((_DWORD *)v39 - 1) )
        goto LABEL_41;
      v72 = (3 * v43 + 1) >> 1;
      v73 = 8 * v72 + 8;
      if ( 8 * v43 + 8 >= (unsigned int)v73 || v43 >= v72 )
      {
LABEL_171:
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v137, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v137);
        sub_233E40((__int64)v137);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v74 = (unsigned int *)sub_186B300(v39 - 1, v73);
      v75 = v74[1];
      v39 = (__int64 *)(v74 + 2);
      *v74 = v72;
      v134 = v39;
      LODWORD(v74) = v75;
      v44 = &v39[v75];
      v45 = (_DWORD)v74 + 1;
    }
    else
    {
LABEL_121:
      if ( v34 )
        ++*(_DWORD *)(v34 + 8);
      v84 = (_QWORD *)sub_186B270(0x18u);
      v39 = v84 + 1;
      *v84 = 2;
      v45 = 1;
      v134 = v39;
      v44 = v39;
    }
LABEL_42:
    *v44 = v34;
    *((_DWORD *)v39 - 1) = v45;
    sub_3D6250(v127, (__int64)&v133);
    v46 = *v134;
    if ( v34 == *v134 || (v47 = *((unsigned int *)v134 - 1), (unsigned int)v47 <= 1) )
    {
LABEL_44:
      v48 = v131;
      v49 = &v132[v115];
      if ( v34 )
        ++*(_DWORD *)(v34 + 8);
      v50 = *v49;
      if ( *v49 && (v38 = *(_DWORD *)(v50 + 8) == 1, --*(_DWORD *)(v50 + 8), v38) )
      {
        sub_15D7BC0(v48, v50);
        *v49 = v34;
        if ( v33 )
          goto LABEL_49;
      }
      else
      {
        *v49 = v34;
        if ( v33 )
        {
LABEL_49:
          v51 = *((_DWORD *)v33 - 1);
          if ( v51 == *((_DWORD *)v33 - 2) )
          {
            v80 = (3 * v51 + 1) >> 1;
            v81 = 8 * v80 + 8;
            if ( 8 * v51 + 8 >= (unsigned int)v81 || v51 >= v80 )
            {
              v8 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v137, "Overflow encountered when expanding vector");
              *v8 = (char *)off_1C63128;
              sub_2333C0(v8 + 1, v137);
              sub_233E40((__int64)v137);
              __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v82 = (unsigned int *)sub_186B300(v33 - 1, v81);
            v83 = v82[1];
            v33 = v82 + 2;
            *v82 = v80;
            LODWORD(v82) = v83;
            v54 = &v33[v83];
            v53 = (_DWORD)v82 + 1;
          }
          else
          {
            v52 = v51;
            v53 = v51 + 1;
            v54 = &v33[v52];
          }
          goto LABEL_51;
        }
      }
      v102 = (_QWORD *)sub_186B270(0x18u);
      v33 = v102 + 1;
      *v102 = 2;
      v53 = 1;
      v54 = v33;
LABEL_51:
      *v54 = v34;
      v55 = v126;
      *((_DWORD *)v33 - 1) = v53;
      ++v122;
      ++*(_DWORD *)(a1 + 28);
      ++v121;
      goto LABEL_52;
    }
    for ( i = 0; ; v46 = v134[i] )
    {
      v86 = v131;
      v87 = &v132[v115];
      if ( v46 )
        ++*(_DWORD *)(v46 + 8);
      v88 = *v87;
      if ( *v87 )
      {
        v38 = (*(_DWORD *)(v88 + 8))-- == 1;
        if ( v38 )
        {
          v129 = v46;
          v128 = v87;
          sub_15D7BC0(v86, v88);
          v46 = v129;
          v87 = v128;
        }
      }
      *v87 = v46;
      v55 = sub_40A830(v124, *(_DWORD *)(*a2 + 96), (__int64)&v131, &v130, v125);
      if ( v55 )
        break;
      if ( ++i == v47 )
      {
        v115 = v121;
        goto LABEL_44;
      }
    }
    v89 = v134[i];
    if ( v33 )
    {
      v90 = *((_DWORD *)v33 - 1);
      if ( v90 == *((_DWORD *)v33 - 2) )
      {
        v98 = (3 * v90 + 1) >> 1;
        v99 = 8 * v98 + 8;
        if ( 8 * v90 + 8 >= v99 || v90 >= v98 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v137, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v137);
          sub_233E40((__int64)v137);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v118 = v55;
        v100 = (unsigned int *)sub_186B300(v33 - 1, v99);
        v101 = v100[1];
        v33 = v100 + 2;
        v55 = v118;
        *v100 = v98;
        LODWORD(v100) = v101;
        v93 = &v33[v101];
        v92 = (unsigned int)((_DWORD)v100 + 1);
      }
      else
      {
        v91 = v90;
        v92 = v90 + 1;
        v93 = &v33[v91];
      }
    }
    else
    {
      v119 = v55;
      v113 = (_QWORD *)sub_186B270(0x18u);
      *v113 = 2;
      v55 = v119;
      v92 = 1;
      v93 = v113 + 1;
      v33 = v93;
    }
    v94 = v132;
    *v93 = v89;
    *((_DWORD *)v33 - 1) = v92;
    if ( v94 )
    {
      v95 = &v33[v92];
      for ( j = 0; ; ++j )
      {
        v76 = j;
        if ( *((_DWORD *)v94 - 1) == j || v95 == v33 )
          break;
        v97 = v33;
        while ( v94[j] != *v97 )
        {
          if ( v95 == ++v97 )
            goto LABEL_117;
        }
      }
      goto LABEL_117;
    }
LABEL_150:
    v122 = 0;
    v121 = 0;
LABEL_52:
    v126 = v55;
    if ( v34 )
      goto LABEL_53;
LABEL_56:
    v23 = v132;
    if ( !v132 )
      break;
  }
  if ( !v126 )
    goto LABEL_59;
LABEL_58:
  sub_40ABA0(*a2, *a2 + 80, (__int64)&v131);
  sub_3FE9B0(*a2, v130);
LABEL_59:
  v56 = v134;
  if ( v134 )
  {
    v57 = &v134[*((unsigned int *)v134 - 1)];
    if ( v134 >= v57 )
      goto LABEL_67;
    do
    {
      while ( 1 )
      {
        v58 = *v56;
        if ( *v56 )
        {
          v59 = v133;
          v38 = (*(_DWORD *)(v58 + 8))-- == 1;
          if ( v38 )
            break;
        }
        if ( ++v56 >= v57 )
          goto LABEL_66;
      }
      sub_15D7BC0(v59, v58);
      ++v56;
    }
    while ( v56 < v57 );
LABEL_66:
    v56 = v134;
    if ( v134 )
LABEL_67:
      sub_186B220(v56 - 1);
  }
  if ( v33 )
    sub_186B220(v33 - 1);
  if ( v123 )
  {
LABEL_71:
    v116 = *(_DWORD *)(v123 + 8);
    *(_DWORD *)(v123 + 8) = v116 - 1;
    if ( v116 == 1 )
      sub_15D7BC0(v127, v123);
  }
LABEL_73:
  v60 = v132;
  if ( v132 )
  {
    v61 = (unsigned __int64)&v132[*((unsigned int *)v132 - 1)];
    if ( (unsigned __int64)v132 >= v61 )
      goto LABEL_81;
    do
    {
      while ( 1 )
      {
        v62 = *v60;
        if ( *v60 )
        {
          v38 = (*(_DWORD *)(v62 + 8))-- == 1;
          if ( v38 )
            break;
        }
        if ( (unsigned __int64)++v60 >= v61 )
          goto LABEL_80;
      }
      sub_15D7BC0(v131, v62);
      ++v60;
    }
    while ( (unsigned __int64)v60 < v61 );
LABEL_80:
    v60 = v132;
    if ( v132 )
LABEL_81:
      sub_186B220(v60 - 1);
  }
  v63 = v149;
  if ( v149 )
  {
    v64 = (unsigned __int64)&v149[*((unsigned int *)v149 - 1)];
    if ( (unsigned __int64)v149 >= v64 )
      goto LABEL_90;
    do
    {
      while ( 1 )
      {
        v65 = *v63;
        if ( *v63 )
        {
          v66 = v148;
          v38 = (*(_DWORD *)(v65 + 8))-- == 1;
          if ( v38 )
            break;
        }
        if ( (unsigned __int64)++v63 >= v64 )
          goto LABEL_89;
      }
      sub_15D7BC0(v66, v65);
      ++v63;
    }
    while ( (unsigned __int64)v63 < v64 );
LABEL_89:
    v63 = v149;
    if ( v149 )
LABEL_90:
      sub_186B220(v63 - 1);
  }
  v143 = &off_1C62200;
  if ( ptr )
    sub_186B220(ptr);
  if ( v145 )
    sub_186B220(v145);
  v138.m128i_i64[1] = (__int64)&off_1C62200;
  if ( v142 )
    sub_186B220(v142);
  v67 = v140;
  if ( v140 )
    sub_186B220(v140);
  result = a1;
  if ( *(_BYTE *)(a1 + 48) )
  {
    result = std::chrono::_V2::steady_clock::now(v67) - *(_QWORD *)(a1 + 32);
    *(_BYTE *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 40) += result;
  }
  return result;
}

