void __fastcall sub_DF2300(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  std::chrono::_V2::steady_clock *v5; // rbp
  void *v6; // r15
  _DWORD *v7; // r12
  unsigned int v8; // r14d
  unsigned __int8 v9; // al
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  bool v17; // zf
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // ecx
  _QWORD *v23; // r8
  char *v24; // r12
  __int64 v25; // r12
  void (__fastcall *v26)(__int64, __int64); // r13
  __int64 (__fastcall *v27)(__int64); // rax
  __int64 v28; // rsi
  std::chrono::_V2::steady_clock *v29; // rdi
  double v30; // xmm0_8
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 (__fastcall *v34)(__int64); // rdx
  __int64 (__fastcall *v35)(__int64); // rax
  __int64 v36; // rsi
  char *v37; // rbx
  char *v38; // r13
  _DWORD *v39; // r12
  void *v40; // rbx
  __int64 v41; // rax
  __int64 v42; // r13
  int v43; // ecx
  _QWORD *v44; // r8
  __int64 v45; // rax
  __int64 v46; // r12
  __int64 v47; // rax
  __int64 (__fastcall *v48)(__int64); // rax
  __int64 v49; // rsi
  char *v50; // r13
  __int64 v51; // rsi
  void *v52; // rdi
  __int64 v53; // r13
  char *v54; // rax
  char *v55; // rdi
  unsigned __int64 v56; // rax
  __int64 v57; // rsi
  char v58; // r13
  __int64 (__fastcall *v59)(__int64); // rax
  const char *v60; // rsi
  _QWORD **v61; // r12
  __int64 (__fastcall *v62)(__int64); // rax
  __int64 v63; // rax
  __int64 v64; // rax
  char *v65; // rax
  char *v66; // rdi
  unsigned __int64 v67; // rax
  __int64 v68; // rsi
  unsigned __int64 v69; // rax
  __int64 v70; // r9
  _QWORD **v71; // rcx
  __int64 v72; // rdx
  char i; // al
  unsigned int v74; // r8d
  __int64 v75; // r13
  __int64 v76; // r15
  __int64 v77; // rdx
  int v78; // r12d
  __int64 v79; // rsi
  __int64 *v80; // r14
  __int64 v81; // rax
  _QWORD *v82; // r9
  _QWORD *v83; // rax
  int v84; // esi
  __int64 *v85; // rax
  __int64 v86; // r12
  __int64 *v87; // rax
  __int64 *v88; // rdi
  unsigned __int64 v89; // rax
  __int64 v90; // r9
  __int64 (__fastcall *v91)(__int64); // rax
  __int64 v92; // rsi
  unsigned __int64 v93; // rax
  __int64 v94; // r9
  unsigned __int64 v95; // rax
  __int64 v96; // r9
  __int64 v97; // rax
  _QWORD *exception; // rbx
  __int64 *v99; // [rsp+0h] [rbp-248h]
  unsigned int v100; // [rsp+8h] [rbp-240h]
  _QWORD **v101; // [rsp+10h] [rbp-238h]
  __int64 *v102; // [rsp+20h] [rbp-228h]
  __int64 *v103; // [rsp+28h] [rbp-220h]
  char *v104; // [rsp+30h] [rbp-218h]
  __int64 *v105; // [rsp+38h] [rbp-210h]
  __int64 v106; // [rsp+40h] [rbp-208h]
  _QWORD *v107; // [rsp+48h] [rbp-200h]
  __int64 v108; // [rsp+50h] [rbp-1F8h] BYREF
  void *v109; // [rsp+58h] [rbp-1F0h] BYREF
  _QWORD *v110; // [rsp+60h] [rbp-1E8h] BYREF
  __int64 v111; // [rsp+68h] [rbp-1E0h] BYREF
  void *v112; // [rsp+70h] [rbp-1D8h]
  __int64 v113; // [rsp+78h] [rbp-1D0h]
  __int64 v114; // [rsp+80h] [rbp-1C8h] BYREF
  int v115; // [rsp+88h] [rbp-1C0h]
  int *v116; // [rsp+90h] [rbp-1B8h] BYREF
  void *v117; // [rsp+98h] [rbp-1B0h]
  __int128 v118; // [rsp+A0h] [rbp-1A8h]
  __int128 v119; // [rsp+B0h] [rbp-198h]
  __int64 v120; // [rsp+C0h] [rbp-188h]
  __int16 v121; // [rsp+C8h] [rbp-180h]
  void *v122; // [rsp+D0h] [rbp-178h]
  void *v123; // [rsp+E0h] [rbp-168h] BYREF
  __int64 v124; // [rsp+E8h] [rbp-160h]
  _BYTE v125[128]; // [rsp+F0h] [rbp-158h] BYREF
  void *ptr[2]; // [rsp+170h] [rbp-D8h] BYREF
  __int64 v127; // [rsp+180h] [rbp-C8h] BYREF
  _BYTE v128[192]; // [rsp+188h] [rbp-C0h] BYREF

  if ( !*(_QWORD *)(a1 + 56) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "apply needs a tactic argument");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  if ( *(_BYTE *)(a2 + 273) )
    return;
  v99 = &v108;
  sub_15B13A0(&v108, a2 + 112, a1 + 40);
  v3 = sub_DEF440(a2, *(_DWORD **)(a1 + 56));
  v4 = sub_EE8E00(v3, &v108);
  v5 = (std::chrono::_V2::steady_clock *)v4;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  sub_DFBCB0(a2);
  v6 = *(void **)(a2 + 296);
  v7 = (_DWORD *)sub_186B270(0x80u);
  v8 = (unsigned __int8)sub_DF7C90(a2);
  v100 = (unsigned __int8)sub_DF7C70(a2);
  v9 = sub_DF7C80(a2);
  sub_ED2A30(v7, v6, v9, v100, v8);
  ++v7[8];
  v109 = v7;
  sub_E1CAE0(a2, v7);
  LODWORD(v7) = sub_1859960(&v108, "timeout", *(unsigned int *)(a2 + 116));
  v10 = sub_1859960(&v108, "rlimit", *(unsigned int *)(a2 + 112));
  v113 = 0;
  v104 = v125;
  v123 = v125;
  v103 = &v114;
  v112 = &v114;
  v116 = &off_1C4C9C8;
  v121 = 0;
  v124 = 0x1000000000LL;
  LOBYTE(v114) = 0;
  LODWORD(v117) = 0;
  v120 = 0;
  v122 = v6;
  v118 = 0;
  v119 = 0;
  sub_1829790(v6, v10);
  sub_18086F0(ptr, &v116, 1);
  v102 = &v111;
  sub_18561B0((unsigned int)&v111, (_DWORD)v7, (unsigned int)&v116, v11, v12, v13);
  v17 = *(_BYTE *)(a2 + 904) == 0;
  *(_QWORD *)(a2 + 896) = 0;
  if ( v17 )
  {
    v64 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)&v111);
    *(_BYTE *)(a2 + 904) = 1;
    *(_QWORD *)(a2 + 888) = v64;
  }
  sub_EE4EF0((_DWORD)v5, (unsigned int)&v109, (unsigned int)&v123, v14, v15, v16);
  if ( *(_BYTE *)(a2 + 904) )
  {
    v63 = std::chrono::_V2::steady_clock::now(v5);
    *(_BYTE *)(a2 + 904) = 0;
    *(_QWORD *)(a2 + 896) += v63 - *(_QWORD *)(a2 + 888);
  }
  sub_1856400(&v111);
  sub_1808900(ptr);
  sub_1829100(v6);
  if ( (unsigned __int8)sub_1859610(&v108, "print", 1) )
  {
    v58 = sub_1859610(&v108, "print_dependencies", 0);
    v59 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v59 != sub_305010 )
      v59(a2);
    v60 = "(goals\n";
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( (_DWORD)v124 )
    {
      v61 = nullptr;
      v101 = (_QWORD **)(8LL * (unsigned int)v124);
      if ( v58 )
      {
        do
        {
          v60 = (const char *)(a2 + 104);
          sub_ED9A30(*(_QWORD **)((char *)v61++ + (_QWORD)v123), a2 + 104);
        }
        while ( v101 != v61 );
      }
      else
      {
        do
        {
          v60 = (const char *)(a2 + 104);
          sub_ED6AF0(*(_QWORD **)((char *)v61++ + (_QWORD)v123), a2 + 104);
        }
        while ( v61 != v101 );
      }
    }
    v62 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v62 != sub_305010 )
      ((void (__fastcall *)(__int64, const char *))v62)(a2, v60);
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  if ( (unsigned __int8)sub_1859610(&v108, "print_benchmark", 0) )
  {
    if ( (_DWORD)v124 != 1 )
    {
      ptr[0] = v6;
      v105 = (__int64 *)v128;
      ptr[1] = v128;
      v127 = 0x1000000000LL;
      v110 = nullptr;
      if ( (_DWORD)v124 )
      {
        v18 = 8LL * (unsigned int)v124;
        v19 = 0;
        v101 = &v110;
        while ( 1 )
        {
          sub_ED5FB0(*(_QWORD *)((char *)v123 + v19), &v110);
          if ( v110 && *((_DWORD *)v110 - 1) == 1 )
          {
            v42 = *v110;
            if ( *v110 )
              ++*(_DWORD *)(v42 + 8);
            v43 = v127;
            if ( (unsigned int)v127 >= HIDWORD(v127) )
            {
              LODWORD(v106) = 2 * HIDWORD(v127);
              v65 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v127)));
              v43 = v127;
              v66 = (char *)ptr[1];
              v44 = v65;
              if ( (_DWORD)v127 )
              {
                if ( (unsigned int)(v127 - 1) <= 2 || v65 == (char *)ptr[1] + 8 )
                {
                  v93 = 0;
                  v94 = 8LL * (unsigned int)v127;
                  do
                  {
                    v44[v93 / 8] = *(_QWORD *)&v66[v93];
                    v93 += 8LL;
                  }
                  while ( v94 != v93 );
                }
                else
                {
                  v67 = 0;
                  v68 = 16LL * ((unsigned int)v127 >> 1);
                  do
                  {
                    *(__m128i *)&v44[v67 / 8] = _mm_loadu_si128((const __m128i *)&v66[v67]);
                    v67 += 16LL;
                  }
                  while ( v68 != v67 );
                  if ( (v43 & 1) != 0 )
                    v44[v43 & 0xFFFFFFFE] = *(_QWORD *)&v66[8 * (v43 & 0xFFFFFFFE)];
                }
              }
              if ( v66 != v128 && v66 )
              {
                v107 = v44;
                sub_186B220(v66);
                v43 = v127;
                v44 = v107;
              }
              ptr[1] = v44;
              HIDWORD(v127) = v106;
            }
            else
            {
              v44 = ptr[1];
            }
            v19 += 8;
            v44[v43] = v42;
            LODWORD(v127) = v43 + 1;
            if ( v18 == v19 )
              break;
          }
          else
          {
            v20 = sub_15E1AF0((int)v6);
            v21 = v20;
            if ( v20 )
              ++*(_DWORD *)(v20 + 8);
            v22 = v127;
            if ( (unsigned int)v127 >= HIDWORD(v127) )
            {
              v106 = v20;
              v53 = (unsigned int)(2 * HIDWORD(v127));
              v54 = (char *)sub_186B270(8 * v53);
              v22 = v127;
              v55 = (char *)ptr[1];
              v23 = v54;
              v21 = v106;
              if ( (_DWORD)v127 )
              {
                if ( (unsigned int)(v127 - 1) <= 2 || v54 == (char *)ptr[1] + 8 )
                {
                  v69 = 0;
                  v70 = 8LL * (unsigned int)v127;
                  do
                  {
                    v23[v69 / 8] = *(_QWORD *)&v55[v69];
                    v69 += 8LL;
                  }
                  while ( v70 != v69 );
                }
                else
                {
                  v56 = 0;
                  v57 = 16LL * ((unsigned int)v127 >> 1);
                  do
                  {
                    *(__m128i *)&v23[v56 / 8] = _mm_loadu_si128((const __m128i *)&v55[v56]);
                    v56 += 16LL;
                  }
                  while ( v56 != v57 );
                  if ( (v22 & 1) != 0 )
                    v23[v22 & 0xFFFFFFFE] = *(_QWORD *)&v55[8 * (v22 & 0xFFFFFFFE)];
                }
              }
              if ( v55 && v55 != v128 )
              {
                v107 = v23;
                sub_186B220(v55);
                v22 = v127;
                v23 = v107;
                v21 = v106;
              }
              ptr[1] = v23;
              HIDWORD(v127) = v53;
            }
            else
            {
              v23 = ptr[1];
            }
            v19 += 8;
            v23[v22] = v21;
            LODWORD(v127) = v22 + 1;
            if ( v18 == v19 )
              break;
          }
          if ( v110 )
            *((_DWORD *)v110 - 1) = 0;
        }
      }
      v45 = sub_15E1AF0((int)v6);
      v46 = v45;
      if ( v45 )
        ++*(_DWORD *)(v45 + 8);
      v47 = *(_QWORD *)a2;
      v111 = v46;
      v48 = *(__int64 (__fastcall **)(__int64))(v47 + 40);
      if ( v48 == sub_305010 )
        v49 = *(_QWORD *)(a2 + 408);
      else
        v49 = ((__int64 (__fastcall *)(__int64, _QWORD))v48)(a2, 0);
      sub_DFFE60(a2, v49, 1, &v111, &qword_18D6CD0);
      if ( v46 )
      {
        v17 = (*(_DWORD *)(v46 + 8))-- == 1;
        if ( v17 )
          sub_15D7BC0(v6, v46);
      }
      if ( v110 )
        sub_186B220(v110 - 1);
      v24 = (char *)ptr[1];
      v50 = (char *)ptr[1] + 8 * (unsigned int)v127;
      if ( ptr[1] < v50 )
      {
        do
        {
          v51 = *(_QWORD *)v24;
          if ( *(_QWORD *)v24 )
          {
            v52 = ptr[0];
            v17 = (*(_DWORD *)(v51 + 8))-- == 1;
            if ( v17 )
              sub_15D7BC0(v52, v51);
          }
          v24 += 8;
        }
        while ( v24 < v50 );
        v24 = (char *)ptr[1];
      }
      if ( v24 && v24 != v128 )
        sub_186B220(v24);
      goto LABEL_27;
    }
    v71 = *(_QWORD ***)v123;
    v72 = *(_QWORD *)(*(_QWORD *)v123 + 72LL);
    if ( v72 )
    {
      for ( i = *(_BYTE *)(v72 + 3) >> 6; !i; i = *(_BYTE *)(v72 + 3) >> 6 )
        v72 = *(_QWORD *)(v72 + 16);
      if ( i == 1 )
      {
        v74 = *(_DWORD *)(v72 + 4) + 1;
      }
      else if ( i == 2 )
      {
        v74 = *(_DWORD *)(v72 + 4) - 1;
      }
      else
      {
        v74 = *(_DWORD *)(v72 + 4);
      }
      ptr[1] = (void *)0x1000000000LL;
      v105 = &v127;
      ptr[0] = &v127;
      if ( v74 )
      {
        v75 = v74;
        v76 = 0;
        LODWORD(v77) = 0;
        while ( 1 )
        {
          v82 = *v71;
          if ( (*((_BYTE *)v71 + 123) & 0x20) != 0 )
          {
            v78 = HIDWORD(ptr[1]);
            v79 = v82[108];
            if ( (unsigned int)v77 >= HIDWORD(ptr[1]) )
              goto LABEL_137;
          }
          else
          {
            v83 = v71[9];
            v84 = 18;
            while ( --v84 )
            {
              if ( *((char *)v83 + 3) >= 0 )
              {
                if ( *((_DWORD *)v83 + 1) == (_DWORD)v76 )
                {
                  v85 = v83 + 1;
                  goto LABEL_136;
                }
              }
              else if ( *((_BYTE *)v83 + 3) >> 6 != 2 )
              {
                v85 = (__int64 *)(v83[2] + 8 * v76);
                goto LABEL_136;
              }
              v83 = (_QWORD *)v83[2];
            }
            v101 = v71;
            sub_233F80(v82 + 77, (_DWORD *)v71 + 18);
            v71 = v101;
            LODWORD(v77) = ptr[1];
            v85 = (__int64 *)(v101[9][2] + 8 * v76);
LABEL_136:
            v78 = HIDWORD(ptr[1]);
            v79 = *v85;
            if ( (unsigned int)v77 >= HIDWORD(ptr[1]) )
            {
LABEL_137:
              LODWORD(v102) = v79;
              v86 = (unsigned int)(2 * v78);
              v101 = v71;
              v87 = (__int64 *)sub_186B270(8 * v86);
              LODWORD(v77) = ptr[1];
              v88 = (__int64 *)ptr[0];
              v80 = v87;
              v71 = v101;
              if ( LODWORD(ptr[1]) )
              {
                if ( (unsigned int)(LODWORD(ptr[1]) - 1) <= 2 || v87 == (__int64 *)((char *)ptr[0] + 8) )
                {
                  v95 = 0;
                  v96 = 8LL * LODWORD(ptr[1]);
                  do
                  {
                    v80[v95 / 8] = v88[v95 / 8];
                    v95 += 8LL;
                  }
                  while ( v96 != v95 );
                }
                else
                {
                  v89 = 0;
                  v90 = 16LL * (LODWORD(ptr[1]) >> 1);
                  do
                  {
                    *(__m128i *)&v80[v89 / 8] = _mm_loadu_si128((const __m128i *)&v88[v89 / 8]);
                    v89 += 16LL;
                  }
                  while ( v89 != v90 );
                  if ( (v77 & 1) != 0 )
                    v80[(unsigned int)v77 & 0xFFFFFFFE] = v88[(unsigned int)v77 & 0xFFFFFFFE];
                }
              }
              if ( v88 != &v127 && v88 )
              {
                LODWORD(v102) = v79;
                sub_186B220(v88);
                LODWORD(v77) = ptr[1];
                v71 = v101;
              }
              ptr[0] = v80;
              HIDWORD(ptr[1]) = v86;
              goto LABEL_129;
            }
          }
          v80 = (__int64 *)ptr[0];
LABEL_129:
          v81 = (unsigned int)v77;
          ++v76;
          v77 = (unsigned int)(v77 + 1);
          v80[v81] = v79;
          LODWORD(ptr[1]) = v77;
          if ( v76 == v75 )
            goto LABEL_156;
        }
      }
    }
    else
    {
      ptr[1] = (void *)0x1000000000LL;
      v105 = &v127;
      ptr[0] = &v127;
    }
    v80 = &v127;
    v77 = 0;
LABEL_156:
    v91 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v91 == sub_305010 )
    {
      v92 = *(_QWORD *)(a2 + 408);
    }
    else
    {
      LODWORD(v101) = v77;
      v97 = v91(a2);
      v77 = (unsigned int)v101;
      v92 = v97;
    }
    sub_DFFE60(a2, v92, v77, v80, &qword_18D6CD0);
    if ( ptr[0] != &v127 && ptr[0] )
      sub_186B220(ptr[0]);
  }
LABEL_27:
  if ( *((_QWORD *)v109 + 1) && (unsigned __int8)sub_1859610(&v108, "print_model_converter", 0) )
  {
    v25 = *((_QWORD *)v109 + 1);
    v26 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 24LL);
    v27 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v27 == sub_305010 )
      v28 = *(_QWORD *)(a2 + 408);
    else
      v28 = v27(a2);
    v26(v25, v28);
  }
  if ( (unsigned __int8)sub_1859610(&v108, "print_statistics", 0) )
  {
    *(_OWORD *)ptr = 0;
    sub_1818510(ptr);
    sub_DFBCB0(a2);
    v29 = *(std::chrono::_V2::steady_clock **)(a2 + 296);
    sub_1818B90(v29, ptr);
    if ( *(_BYTE *)(a2 + 904) )
    {
      *(_QWORD *)(a2 + 896) += std::chrono::_V2::steady_clock::now(v29) - *(_QWORD *)(a2 + 888);
      *(_BYTE *)(a2 + 904) = 0;
      v41 = std::chrono::_V2::steady_clock::now(v29);
      *(_BYTE *)(a2 + 904) = 1;
      *(_QWORD *)(a2 + 888) = v41;
    }
    v30 = (double)(int)(*(_QWORD *)(a2 + 896) / 1000000LL) / 1000.0;
    sub_1818270(ptr, "time");
    (*(void (__fastcall **)(std::chrono::_V2::steady_clock *, void **, double))(*(_QWORD *)v5 + 136LL))(v5, ptr, v30);
    v34 = sub_305010;
    v35 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v35 == sub_305010 )
      v36 = *(_QWORD *)(a2 + 408);
    else
      LODWORD(v36) = v35(a2);
    sub_1816A00(
      (int)ptr,
      v36,
      (int)v34,
      v31,
      v32,
      v33,
      (int)&v108,
      &v116,
      (int)v101,
      (int)ptr,
      (int)v102,
      &v114,
      (int)v125,
      (int)v105,
      v106,
      (int)v107,
      v108,
      (__int64)v109,
      (int)v110,
      v111,
      (int)v112,
      v113,
      v114,
      v115,
      (int)v116,
      v117);
    if ( ptr[1] )
      sub_186B220((char *)ptr[1] - 8);
    if ( ptr[0] )
      sub_186B220((char *)ptr[0] - 8);
  }
  v116 = &off_1C4C9C8;
  if ( (_BYTE)v121 )
  {
    sub_18296D0(v122);
    if ( !HIBYTE(v121) )
      goto LABEL_43;
LABEL_95:
    sub_1829760(v122);
  }
  if ( HIBYTE(v121) )
    goto LABEL_95;
LABEL_43:
  if ( v112 != v103 )
    operator delete(v112, v114 + 1);
  v37 = (char *)v123;
  v38 = (char *)v123 + 8 * (unsigned int)v124;
  if ( v123 < v38 )
  {
    do
    {
      while ( 1 )
      {
        v39 = *(_DWORD **)v37;
        if ( *(_QWORD *)v37 )
        {
          v17 = v39[8]-- == 1;
          if ( v17 )
            break;
        }
        v37 += 8;
        if ( v37 >= v38 )
          goto LABEL_51;
      }
      v37 += 8;
      sub_ED44E0(v39);
      sub_186B220(v39);
    }
    while ( v37 < v38 );
LABEL_51:
    v37 = (char *)v123;
  }
  if ( v37 && v37 != v104 )
    sub_186B220(v37);
  v40 = v109;
  if ( v109 )
  {
    v17 = (*((_DWORD *)v109 + 8))-- == 1;
    if ( v17 )
    {
      sub_ED44E0(v40);
      sub_186B220(v40);
    }
  }
  if ( v5 )
  {
    v17 = (*((_DWORD *)v5 + 2))-- == 1;
    if ( v17 )
    {
      (**(void (__fastcall ***)(std::chrono::_V2::steady_clock *))v5)(v5);
      sub_186B220(v5);
    }
  }
  sub_18572D0(v99);
}

