void __fastcall sub_DF3BF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _DWORD *v4; // rax
  void (*v5)(); // rax
  int v6; // r12d
  unsigned int v7; // r13d
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  unsigned __int8 v10; // al
  void (__fastcall ***v11)(void *); // r14
  bool v12; // zf
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // r13
  unsigned __int64 v17; // rdx
  char *v18; // rcx
  size_t v19; // r12
  char *v20; // rax
  size_t v21; // rdx
  __int64 *v22; // r12
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // r14
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  int i; // eax
  unsigned int v30; // eax
  __int64 (__fastcall *v31)(__int64); // rax
  const char *v32; // rsi
  __int64 *v33; // r12
  __int64 v34; // r15
  __int64 (__fastcall *v35)(__int64); // rax
  __int64 v36; // r14
  __int64 (__fastcall *v37)(__int64); // rax
  __int64 (__fastcall *v38)(__int64); // rax
  std::ostream *v39; // r12
  _BYTE *v40; // r13
  char v41; // si
  std::ostream *v42; // rax
  void *v43; // rax
  void (__fastcall ***v44)(void *); // r12
  __int64 (__fastcall *v45)(__int64); // rax
  std::ostream *v46; // r12
  _BYTE *v47; // r14
  char v48; // si
  std::ostream *v49; // rax
  int v50; // edx
  int v51; // esi
  __int64 (__fastcall *v52)(__int64); // rax
  __int64 v53; // rdi
  __int64 (__fastcall *v54)(__int64); // rax
  std::ostream *v55; // r12
  _BYTE *v56; // r13
  char v57; // si
  std::ostream *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 (__fastcall *v62)(__int64); // rax
  __int64 v63; // r12
  std::chrono::_V2::steady_clock *v64; // rdi
  double v65; // xmm0_8
  int v66; // ecx
  int v67; // r8d
  int v68; // r9d
  __int64 (__fastcall *v69)(__int64); // rdx
  __int64 (__fastcall *v70)(__int64); // rax
  __int64 v71; // rsi
  unsigned int *v72; // rbx
  _QWORD *v73; // r15
  unsigned int v74; // eax
  __int64 v75; // rsi
  void *v76; // rdi
  void (__fastcall ***v77)(_QWORD); // rbx
  void *v78; // rbx
  __int64 v79; // rax
  _DWORD *v80; // rdx
  __int64 v81; // rax
  int v82; // ecx
  __int64 v83; // rax
  __int64 v84; // r12
  unsigned int v85; // esi
  unsigned int *v86; // rbx
  unsigned int v87; // eax
  unsigned int *v88; // r13
  unsigned int v89; // eax
  unsigned int v90; // ebx
  __int64 v91; // rax
  unsigned int v92; // r15d
  size_t v93; // rsi
  unsigned int *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 (__fastcall *v97)(__int64, unsigned int); // rax
  __int64 (__fastcall *v98)(__int64, unsigned int); // rax
  __int64 v99; // rax
  __int64 (__fastcall *v100)(__int64, unsigned int); // rax
  signed __int64 v101; // rdi
  size_t v102; // rax
  size_t v103; // rdi
  void *v104; // rdi
  unsigned __int64 v105; // rdi
  char *v106; // rdi
  unsigned int v107; // r12d
  unsigned int v108; // ecx
  unsigned int *v109; // rax
  __int64 v110; // rsi
  int v111; // eax
  __int64 v112; // rsi
  __int64 v113; // rdi
  _QWORD *v114; // rdx
  _DWORD *v115; // rdx
  int v116; // eax
  unsigned int v117; // r14d
  unsigned int v118; // eax
  unsigned int *v119; // rax
  unsigned int v120; // r13d
  unsigned int v121; // eax
  unsigned int *v122; // rax
  _QWORD *v123; // rax
  char **v124; // r12
  __int64 v125; // rdx
  char **v126; // rbx
  __int64 v127; // rdx
  _QWORD *exception; // rbx
  __int64 v129; // [rsp-10h] [rbp-170h]
  int v130; // [rsp+0h] [rbp-160h]
  void *v131; // [rsp+8h] [rbp-158h]
  int v132; // [rsp+10h] [rbp-150h]
  char *v133; // [rsp+18h] [rbp-148h]
  size_t v134; // [rsp+20h] [rbp-140h]
  void *v135; // [rsp+28h] [rbp-138h]
  _QWORD *v136; // [rsp+30h] [rbp-130h]
  int *v137; // [rsp+38h] [rbp-128h]
  __int64 *v138; // [rsp+48h] [rbp-118h]
  void *v139; // [rsp+50h] [rbp-110h]
  int v140; // [rsp+50h] [rbp-110h]
  int *v141; // [rsp+58h] [rbp-108h]
  _DWORD *v142; // [rsp+60h] [rbp-100h]
  _DWORD *v143; // [rsp+68h] [rbp-F8h]
  char *v144; // [rsp+68h] [rbp-F8h]
  int v145; // [rsp+68h] [rbp-F8h]
  int v146; // [rsp+70h] [rbp-F0h] BYREF
  void *ptr; // [rsp+78h] [rbp-E8h] BYREF
  void *v148; // [rsp+80h] [rbp-E0h] BYREF
  int v149; // [rsp+88h] [rbp-D8h] BYREF
  __int64 v150; // [rsp+90h] [rbp-D0h] BYREF
  void *v151; // [rsp+98h] [rbp-C8h]
  unsigned int *v152; // [rsp+A0h] [rbp-C0h] BYREF
  _QWORD *v153; // [rsp+A8h] [rbp-B8h]
  _QWORD v154[2]; // [rsp+B0h] [rbp-B0h] BYREF
  void *src; // [rsp+C0h] [rbp-A0h] BYREF
  size_t n; // [rsp+C8h] [rbp-98h]
  _QWORD v157[2]; // [rsp+D0h] [rbp-90h] BYREF
  __int128 v158; // [rsp+E0h] [rbp-80h] BYREF
  _OWORD v159[2]; // [rsp+F0h] [rbp-70h] BYREF
  __int64 v160; // [rsp+110h] [rbp-50h]
  __int16 v161; // [rsp+118h] [rbp-48h]
  void *v162; // [rsp+120h] [rbp-40h]

  if ( !*(_QWORD *)(a1 + 56) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "check-sat-using needs a tactic argument");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  if ( *(_BYTE *)(a2 + 273) )
    return;
  v141 = &v146;
  sub_15B13A0(&v146, a2 + 112, a1 + 40);
  v3 = sub_DEF440(a2, *(_DWORD **)(a1 + 56));
  v4 = (_DWORD *)sub_EE8E00(v3, &v146);
  v142 = v4;
  if ( v4 )
    ++v4[2];
  v5 = *(void (**)())(*(_QWORD *)v4 + 168LL);
  if ( v5 != nullsub_97 )
    ((void (__fastcall *)(_DWORD *, __int64))v5)(v142, a2 + 248);
  sub_DFBCB0(a2);
  v139 = *(void **)(a2 + 296);
  v6 = sub_1859960(&v146, "timeout", *(unsigned int *)(a2 + 116));
  v7 = sub_1859960(&v146, "rlimit", *(unsigned int *)(a2 + 112));
  v143 = (_DWORD *)sub_186B270(0x80u);
  v8 = (unsigned __int8)sub_DF7C90(a2);
  v9 = (unsigned __int8)sub_DF7C70(a2);
  v10 = sub_DF7C80(a2);
  sub_ED2A30(v143, v139, v10, v9, v8);
  ++v143[8];
  ptr = v143;
  sub_E1CAE0(a2, v143);
  v148 = nullptr;
  v150 = 0;
  v151 = v139;
  v152 = nullptr;
  v153 = v139;
  v136 = v157;
  src = v157;
  n = 0;
  LOBYTE(v157[0]) = 0;
  v144 = (char *)sub_186B270(0xA8u);
  sub_E395E0(v144, v139);
  *((_DWORD *)v144 + 12) += 2;
  *(_QWORD *)v144 = &off_1C75490;
  *((_QWORD *)v144 + 20) = 0;
  v11 = *(void (__fastcall ****)(void *))(a2 + 872);
  if ( v11 )
  {
    v12 = (*((_DWORD *)v11 + 12))-- == 1;
    if ( v12 )
    {
      (**v11)(v11);
      sub_186B220(v11);
    }
  }
  v161 = 0;
  *(_QWORD *)(a2 + 872) = v144;
  DWORD2(v158) = 0;
  *(_QWORD *)&v158 = &off_1C4C9C8;
  v160 = 0;
  v162 = v139;
  memset(v159, 0, sizeof(v159));
  sub_1829790(v139, v7);
  v138 = (__int64 *)&v158;
  sub_18086F0(v154, &v158, 1);
  v137 = &v149;
  sub_18561B0((unsigned int)&v149, v6, (unsigned int)&v158, v13, v14, v15);
  v12 = *(_BYTE *)(a2 + 904) == 0;
  *(_QWORD *)(a2 + 896) = 0;
  if ( v12 )
  {
    v95 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)&v149);
    *(_BYTE *)(a2 + 904) = 1;
    *(_QWORD *)(a2 + 888) = v95;
  }
  v16 = (unsigned int)sub_EE5780(
                        (_DWORD)v142,
                        (unsigned int)&ptr,
                        (unsigned int)&v148,
                        (int)v144 + 160,
                        (unsigned int)&v150,
                        (unsigned int)&v152,
                        (__int64)&src);
  sub_DFDC60(a2, v16, v129);
  *((_DWORD *)v144 + 13) = v16;
  v18 = v144;
  if ( !(_DWORD)v16 )
  {
    v19 = n;
    v20 = *((char **)v144 + 16);
    if ( n )
    {
      v18 = v144 + 144;
      v135 = v144 + 144;
      if ( v144 + 144 == v20 )
      {
        if ( n <= 0xF )
          goto LABEL_16;
        if ( (n & 0x8000000000000000LL) == 0LL )
        {
          v102 = 30;
          if ( n >= 0x1E )
            v102 = n;
          v134 = v102;
          v103 = v102;
          goto LABEL_155;
        }
      }
      else
      {
        v21 = *((_QWORD *)v144 + 18);
        if ( v21 >= n )
        {
LABEL_16:
          if ( v19 == 1 )
          {
            v17 = *(unsigned __int8 *)src;
            *v20 = v17;
          }
          else
          {
            memcpy(v20, src, v19);
          }
          *((_QWORD *)v144 + 17) = v19;
          *(_BYTE *)(*((_QWORD *)v144 + 16) + v19) = 0;
          goto LABEL_19;
        }
        if ( (n & 0x8000000000000000LL) == 0LL )
        {
          v134 = 2 * v21;
          if ( n < 2 * v21 )
          {
            v101 = 2 * v21 + 1;
            if ( (v21 & 0x4000000000000000LL) != 0 )
              goto LABEL_149;
            goto LABEL_156;
          }
          v134 = n;
          v103 = n;
LABEL_155:
          v101 = v103 + 1;
          if ( v101 < 0 )
LABEL_149:
            std::__throw_bad_alloc();
LABEL_156:
          v20 = (char *)operator new(v101);
          v104 = *((void **)v144 + 16);
          if ( v135 != v104 )
          {
            v133 = v20;
            v135 = *((void **)v144 + 18);
            operator delete(v104, (unsigned __int64)v135 + 1);
            v20 = v133;
          }
          v18 = v144;
          *((_QWORD *)v144 + 16) = v20;
          *((_QWORD *)v144 + 18) = v134;
          goto LABEL_16;
        }
      }
      std::__throw_length_error("basic_string::_M_create");
    }
    if ( v144 + 144 == v20 || (v17 = *((_QWORD *)v144 + 18), v17 > 6) )
    {
      if ( "unknown" < v20 || (v17 = *((_QWORD *)v144 + 17), &v20[v17] < "unknown") )
      {
        *(_DWORD *)v20 = 1852534389;
        *(_DWORD *)(v20 + 3) = 1853321070;
      }
      else
      {
        std::string::_M_replace_cold();
      }
      v79 = *((_QWORD *)v144 + 16);
    }
    else
    {
      v135 = (void *)(2 * v17);
      v105 = 2 * v17 + 1;
      if ( 2 * v17 <= 7 )
      {
        v135 = &byte_7;
        v105 = 8;
      }
      v79 = operator new(v105);
      *(_DWORD *)v79 = 1852534389;
      *(_DWORD *)(v79 + 3) = 1853321070;
      v106 = *((char **)v144 + 16);
      if ( v144 + 144 != v106 )
      {
        v133 = (char *)v79;
        v134 = *((_QWORD *)v144 + 18);
        operator delete(v106, v134 + 1);
        v79 = (__int64)v133;
      }
      v17 = (unsigned __int64)v144;
      *((_QWORD *)v144 + 16) = v79;
      *((_QWORD *)v144 + 18) = v135;
    }
    v18 = v144;
    *((_QWORD *)v144 + 17) = 7;
    *(_BYTE *)(v79 + 7) = 0;
  }
LABEL_19:
  sub_DF9320(a2, (unsigned int)v16, v17, v18);
  if ( *(_BYTE *)(a2 + 904) )
  {
    v96 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a2);
    *(_BYTE *)(a2 + 904) = 0;
    *(_QWORD *)(a2 + 896) += v96 - *(_QWORD *)(a2 + 888);
  }
  sub_1856400(&v149);
  sub_1808900(v154);
  sub_1829100(v139);
  (*(void (__fastcall **)(_DWORD *, char *))(*(_QWORD *)v142 + 136LL))(v142, v144 + 72);
  *(_QWORD *)&v158 = &off_1C4C9C8;
  if ( (_BYTE)v161 )
    sub_18296D0(v162);
  if ( HIBYTE(v161) )
    sub_1829760(v162);
  if ( (unsigned __int8)sub_DF7C90(a2) )
  {
    v154[0] = 0;
    sub_15D6A80(v139, v152, v154);
    v22 = (__int64 *)v154[0];
    if ( v154[0] )
    {
      v23 = *(unsigned int *)(v154[0] - 4LL);
      if ( (_DWORD)v23 )
      {
        v24 = *(_QWORD *)v154[0];
        v25 = v154[0] + 8 * v23;
        v26 = *((_QWORD **)v144 + 13);
        if ( *(_QWORD *)v154[0] )
          ++*(_DWORD *)(v24 + 8);
        if ( v26 )
          goto LABEL_34;
        v27 = (_QWORD *)sub_186B270(0x18u);
        v26 = v27 + 1;
        *v27 = 2;
        v28 = v27 + 1;
        *((_QWORD *)v144 + 13) = v27 + 1;
        for ( i = 1; ; i = (_DWORD)v94 + 1 )
        {
          ++v22;
          *v28 = v24;
          *((_DWORD *)v26 - 1) = i;
          if ( v22 == (__int64 *)v25 )
            break;
          while ( 1 )
          {
            v24 = *v22;
            if ( *v22 )
              ++*(_DWORD *)(v24 + 8);
LABEL_34:
            v30 = *((_DWORD *)v26 - 1);
            if ( v30 == *((_DWORD *)v26 - 2) )
              break;
            ++v22;
            v26[v30] = v24;
            *((_DWORD *)v26 - 1) = v30 + 1;
            if ( v22 == (__int64 *)v25 )
              goto LABEL_36;
          }
          v92 = (3 * v30 + 1) >> 1;
          v93 = 8 * v92 + 8;
          if ( 8 * v30 + 8 >= (unsigned int)v93 || v30 >= v92 )
          {
            v124 = (char **)__cxa_allocate_exception(0x28u);
            sub_17BA1E((__int64 *)&v158, "Overflow encountered when expanding vector", v125);
            *v124 = (char *)off_1C63128;
            sub_2333C0(v124 + 1, &v158);
            sub_233E40((__int64)&v158);
            __cxa_throw(v124, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v94 = (unsigned int *)sub_186B300(v26 - 1, v93);
          v26 = v94 + 2;
          *v94 = v92;
          *((_QWORD *)v144 + 13) = v94 + 2;
          LODWORD(v94) = v94[1];
          v28 = &v26[(unsigned int)v94];
        }
      }
    }
LABEL_36:
    if ( (unsigned __int8)sub_1859610(&v146, "print_unsat_core", 0) )
    {
      v31 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
      if ( v31 != sub_305010 )
        v31(a2);
      v32 = "(unsat-core";
      std::__ostream_insert<char,std::char_traits<char>>();
      v33 = (__int64 *)v154[0];
      if ( v154[0] )
      {
        v34 = v154[0] + 8LL * *(unsigned int *)(v154[0] - 4LL);
        if ( v34 != v154[0] )
        {
          do
          {
            v36 = *v33;
            v37 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
            if ( v37 != sub_305010 )
              ((void (__fastcall *)(__int64, const char *))v37)(a2, v32);
            std::__ostream_insert<char,std::char_traits<char>>();
            v35 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
            if ( v35 == sub_305010 )
            {
              v32 = *(const char **)(a2 + 408);
              (*(void (__fastcall **)(__int64, const char *, __int64, _QWORD))(*(_QWORD *)a2 + 104LL))(a2, v32, v36, 0);
            }
            else
            {
              v137 = *(int **)(*(_QWORD *)a2 + 104LL);
              v32 = (const char *)((__int64 (__fastcall *)(__int64, char *))v35)(a2, " ");
              ((void (__fastcall *)(__int64, const char *, __int64, _QWORD))v137)(a2, v32, v36, 0);
            }
            ++v33;
          }
          while ( (__int64 *)v34 != v33 );
        }
      }
      v38 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
      if ( v38 == sub_305010 )
        v39 = *(std::ostream **)(a2 + 408);
      else
        v39 = (std::ostream *)((__int64 (__fastcall *)(__int64, const char *))v38)(a2, v32);
      std::__ostream_insert<char,std::char_traits<char>>();
      v40 = *(_BYTE **)((char *)v39 + *(_QWORD *)(*(_QWORD *)v39 - 24LL) + 240);
      if ( !v40 )
        std::__throw_bad_cast();
      if ( v40[56] )
      {
        v41 = v40[67];
      }
      else
      {
        std::ctype<char>::_M_widen_init();
        v41 = 10;
        v97 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v40 + 48LL);
        if ( v97 != sub_26BE90 )
          v41 = v97((__int64)v40, 10u);
      }
      v42 = (std::ostream *)std::ostream::put(v39, v41);
      std::ostream::flush(v42);
    }
    if ( v154[0] )
      sub_186B220((void *)(v154[0] - 8LL));
  }
  if ( (unsigned __int8)sub_DF7C70(a2) )
  {
    v43 = v148;
    if ( v148 )
    {
      ++*((_DWORD *)v148 + 4);
      v44 = *((void (__fastcall ****)(void *))v144 + 11);
      if ( v44 )
      {
        v12 = (*((_DWORD *)v44 + 4))-- == 1;
        if ( v12 )
        {
          (**v44)(v44);
          sub_186B220(v44);
          v43 = v148;
        }
      }
      *((_QWORD *)v144 + 11) = v43;
      if ( (unsigned __int8)sub_1859610(&v146, "print_model", 0) )
      {
        v45 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
        if ( v45 == sub_305010 )
          v46 = *(std::ostream **)(a2 + 408);
        else
          v46 = (std::ostream *)v45(a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        v47 = *(_BYTE **)((char *)v46 + *(_QWORD *)(*(_QWORD *)v46 - 24LL) + 240);
        if ( !v47 )
          std::__throw_bad_cast();
        if ( v47[56] )
        {
          v48 = v47[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v48 = 10;
          v98 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v47 + 48LL);
          if ( v98 != sub_26BE90 )
            v48 = v98((__int64)v47, 10u);
        }
        v49 = (std::ostream *)std::ostream::put(v46, v48);
        std::ostream::flush(v49);
        v50 = (int)v148;
        v51 = a2 + 104;
        v52 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
        if ( v52 == sub_305010 )
        {
          v53 = *(_QWORD *)(a2 + 408);
        }
        else
        {
          v135 = (void *)(a2 + 104);
          LODWORD(v137) = (_DWORD)v148;
          v111 = v52(a2);
          v51 = a2 + 104;
          v50 = (int)v137;
          LODWORD(v53) = v111;
        }
        sub_134F450(v53, v51, v50, 2);
        v54 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
        if ( v54 == sub_305010 )
          v55 = *(std::ostream **)(a2 + 408);
        else
          v55 = (std::ostream *)v54(a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        v56 = *(_BYTE **)((char *)v55 + *(_QWORD *)(*(_QWORD *)v55 - 24LL) + 240);
        if ( !v56 )
          std::__throw_bad_cast();
        if ( v56[56] )
        {
          v57 = v56[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v57 = 10;
          v100 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v56 + 48LL);
          if ( v100 != sub_26BE90 )
            v57 = v100((__int64)v56, 10u);
        }
        v58 = (std::ostream *)std::ostream::put(v55, v57);
        std::ostream::flush(v58);
      }
      if ( *((_DWORD *)v144 + 13) == 1 )
        sub_E09930(a2);
    }
  }
  if ( !(unsigned __int8)sub_DF7C80(a2) )
    goto LABEL_87;
  v59 = v150;
  if ( !v150 )
    goto LABEL_87;
  v60 = *((_QWORD *)v144 + 14);
  if ( v150 != v60 )
  {
    if ( !v60 || (v61 = *((_QWORD *)v144 + 15), v12 = *(_DWORD *)(v60 + 8) == 1, --*(_DWORD *)(v60 + 8), !v12) )
    {
      *((_QWORD *)v144 + 14) = v59;
LABEL_82:
      ++*(_DWORD *)(v59 + 8);
      goto LABEL_83;
    }
    sub_15D7BC0(v61, v60);
    v59 = v150;
    *((_QWORD *)v144 + 14) = v150;
    if ( v59 )
      goto LABEL_82;
  }
LABEL_83:
  if ( (unsigned __int8)sub_1859610(&v146, "print_proof", 0) )
  {
    v62 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v62 == sub_305010 )
      v63 = *(_QWORD *)(a2 + 408);
    else
      v63 = v62(a2);
    sub_1606360(&v158, v150, v139, 0, 0, 0);
    sub_160E8B0(v63, &v158);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_18572D0(v159);
  }
LABEL_87:
  if ( (unsigned __int8)sub_1859610(&v146, "print_statistics", 0) )
  {
    v158 = 0;
    sub_1818510(&v158);
    sub_DFBCB0(a2);
    v64 = *(std::chrono::_V2::steady_clock **)(a2 + 296);
    sub_1818B90(v64, &v158);
    if ( *(_BYTE *)(a2 + 904) )
    {
      *(_QWORD *)(a2 + 896) += std::chrono::_V2::steady_clock::now(v64) - *(_QWORD *)(a2 + 888);
      *(_BYTE *)(a2 + 904) = 0;
      v91 = std::chrono::_V2::steady_clock::now(v64);
      *(_BYTE *)(a2 + 904) = 1;
      *(_QWORD *)(a2 + 888) = v91;
    }
    v65 = (double)(int)(*(_QWORD *)(a2 + 896) / 1000000LL) / 1000.0;
    sub_1818270(&v158, "time");
    (*(void (__fastcall **)(_DWORD *, __int128 *, double))(*(_QWORD *)v142 + 136LL))(v142, &v158, v65);
    v69 = sub_305010;
    v70 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v70 == sub_305010 )
      v71 = *(_QWORD *)(a2 + 408);
    else
      LODWORD(v71) = v70(a2);
    sub_1816A00(
      (int)&v158,
      v71,
      (int)v69,
      v66,
      v67,
      v68,
      v130,
      v131,
      v132,
      (int)v133,
      v134,
      v135,
      (int)v157,
      (int)v137,
      (int)&src,
      (int)&v158,
      (__int64)v139,
      (__int64)&v146,
      (int)v142,
      (int)v144,
      v146,
      (__int64)ptr,
      (int)v148,
      v149,
      v150,
      v151);
    if ( *((_QWORD *)&v158 + 1) )
      sub_186B220((void *)(*((_QWORD *)&v158 + 1) - 8LL));
    if ( (_QWORD)v158 )
      sub_186B220((void *)(v158 - 8));
  }
  v140 = *((_DWORD *)v144 + 12);
  *((_DWORD *)v144 + 12) = v140 - 1;
  if ( v140 == 1 )
  {
    (**(void (__fastcall ***)(void *))v144)(v144);
    sub_186B220(v144);
  }
  if ( src != v136 )
    operator delete(src, v157[0] + 1LL);
  v72 = v152;
  if ( v152 )
  {
    v73 = v153;
    v74 = (*v152 + 0x3FFFFFFF) & 0x3FFFFFFF | *v152 & 0xC0000000;
    *v152 = v74;
    if ( (v74 & 0x3FFFFFFF) == 0 )
    {
      v80 = (_DWORD *)v73[83];
      if ( v80 )
      {
        v81 = (unsigned int)*(v80 - 1);
        if ( (_DWORD)v81 == *(v80 - 2) )
        {
          v107 = (unsigned int)(3 * v81 + 1) >> 1;
          v108 = 8 * v107 + 8;
          if ( 8 * (int)v81 + 8 >= v108 || (unsigned int)v81 >= v107 )
          {
LABEL_197:
            v126 = (char **)__cxa_allocate_exception(0x28u);
            sub_17BA1E(v138, "Overflow encountered when expanding vector", v127);
            *v126 = (char *)off_1C63128;
            sub_2333C0(v126 + 1, v138);
            sub_233E40((__int64)v138);
            __cxa_throw(v126, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v109 = (unsigned int *)sub_186B300(v80 - 2, v108);
          v110 = v109[1];
          v80 = v109 + 2;
          v73[83] = v109 + 2;
          v82 = v110 + 1;
          *v109 = v107;
          *(_QWORD *)&v109[2 * v110 + 2] = v72;
          v109[1] = v110 + 1;
        }
        else
        {
          v82 = v81 + 1;
          *(_QWORD *)&v80[2 * v81] = v72;
          *(v80 - 1) = v81 + 1;
        }
      }
      else
      {
        v99 = sub_186B270(0x18u);
        v82 = 1;
        v80 = (_DWORD *)(v99 + 8);
        *(_QWORD *)v99 = 2;
        v73[83] = v99 + 8;
        *(_QWORD *)(v99 + 8) = v72;
        *(_DWORD *)(v99 + 4) = 1;
      }
      if ( v82 )
      {
        while ( 1 )
        {
          v83 = (unsigned int)(v82 - 1);
          v84 = *(_QWORD *)&v80[2 * v83];
          v85 = v82 - 1;
          *(v80 - 1) = v83;
          if ( *(char *)(v84 + 3) < 0 )
          {
            v112 = *(_QWORD *)(v84 + 8);
            if ( v112 )
            {
              v113 = v73[81];
              v12 = (*(_DWORD *)(v112 + 8))-- == 1;
              if ( v12 )
                sub_15D7BC0(v113, v112);
            }
            sub_17E9C40(v73[82], 16, v84);
          }
          else
          {
            v86 = *(unsigned int **)(v84 + 8);
            v87 = (*v86 + 0x3FFFFFFF) & 0x3FFFFFFF | *v86 & 0xC0000000;
            *v86 = v87;
            if ( (v87 & 0x3FFFFFFF) == 0 )
            {
              if ( v85 == *(v80 - 2) )
              {
                v120 = (3 * v85 + 1) >> 1;
                v121 = 8 * v120 + 8;
                if ( 8 * v82 >= v121 || v85 >= v120 )
                  goto LABEL_197;
                v122 = (unsigned int *)sub_186B300(v80 - 2, v121);
                v115 = v122 + 2;
                v73[83] = v122 + 2;
                *v122 = v120;
              }
              else
              {
                v115 = (_DWORD *)v73[83];
              }
              v116 = *(v115 - 1);
              *(_QWORD *)&v115[2 * v116] = v86;
              *(v115 - 1) = v116 + 1;
            }
            v88 = *(unsigned int **)(v84 + 16);
            v89 = (*v88 + 0x3FFFFFFF) & 0x3FFFFFFF | *v88 & 0xC0000000;
            *v88 = v89;
            v90 = v89 & 0x3FFFFFFF;
            if ( (v89 & 0x3FFFFFFF) == 0 )
            {
              v114 = (_QWORD *)v73[83];
              if ( v114 )
              {
                v90 = *((_DWORD *)v114 - 1);
                if ( *((_DWORD *)v114 - 2) == v90 )
                {
                  v117 = (3 * v90 + 1) >> 1;
                  v118 = 8 * v117 + 8;
                  if ( 8 * v90 + 8 >= v118 || v90 >= v117 )
                    goto LABEL_197;
                  v119 = (unsigned int *)sub_186B300(v114 - 1, v118);
                  v114 = v119 + 2;
                  v90 = v119[1];
                  v73[83] = v119 + 2;
                  *v119 = v117;
                }
              }
              else
              {
                v123 = (_QWORD *)sub_186B270(0x18u);
                *v123 = 2;
                v114 = v123 + 1;
                v73[83] = v123 + 1;
              }
              v114[v90] = v88;
              *((_DWORD *)v114 - 1) = v90 + 1;
            }
            sub_17E9C40(v73[82], 24, v84);
          }
          v80 = (_DWORD *)v73[83];
          if ( v80 )
          {
            v82 = *(v80 - 1);
            if ( v82 )
              continue;
          }
          break;
        }
      }
    }
  }
  v75 = v150;
  if ( v150 )
  {
    v76 = v151;
    v12 = (*(_DWORD *)(v150 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v76, v75);
  }
  v77 = (void (__fastcall ***)(_QWORD))v148;
  if ( v148 )
  {
    v12 = (*((_DWORD *)v148 + 4))-- == 1;
    if ( v12 )
    {
      (**v77)(v77);
      sub_186B220(v77);
    }
  }
  v78 = ptr;
  if ( ptr )
  {
    v12 = (*((_DWORD *)ptr + 8))-- == 1;
    if ( v12 )
    {
      sub_ED44E0(v78);
      sub_186B220(v78);
    }
  }
  v145 = v142[2];
  v142[2] = v145 - 1;
  if ( v145 == 1 )
  {
    (**(void (__fastcall ***)(_DWORD *))v142)(v142);
    sub_186B220(v142);
  }
  sub_18572D0(v141);
}

