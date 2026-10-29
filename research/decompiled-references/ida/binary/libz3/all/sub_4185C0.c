__int64 __fastcall sub_4185C0(__int64 a1, __int64 a2, __int64 a3, double a4, __m128 a5)
{
  void *v5; // rax
  void *exception; // rax
  __int64 v8; // rax
  char v9; // al
  char v10; // al
  __int64 v11; // rdi
  void **v12; // rsi
  int v13; // eax
  unsigned int *v14; // r13
  int v15; // r12d
  void **v16; // rdi
  __int64 v17; // rdx
  char v18; // r15
  char v19; // al
  __int64 *v20; // r15
  char v21; // dl
  __int64 v22; // r12
  _QWORD *v23; // rbx
  char *v24; // rdx
  int v25; // eax
  __int64 v26; // rdi
  unsigned int v27; // ebx
  unsigned int v29; // eax
  __int64 v30; // r12
  __int64 v31; // r13
  __int64 v32; // rsi
  std::ostream *v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // eax
  char v38; // al
  __int64 v39; // rax
  unsigned int v40; // ecx
  _DWORD *v41; // r15
  void *v42; // rdi
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rdx
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  _DWORD *v49; // r15
  void **p_ptr; // rsi
  __int64 v51; // rdx
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  __int64 v55; // rdi
  _DWORD *v56; // rax
  int v57; // ecx
  __m128i v58; // xmm0
  __m128i v59; // xmm0
  _QWORD *v60; // r15
  char *v61; // rdx
  int v62; // eax
  __int64 v63; // rdi
  void *v64; // rdi
  __int64 v65; // r12
  __int64 v66; // r13
  __int64 v67; // rsi
  std::ostream *v68; // rdi
  int v69; // ecx
  int v70; // r8d
  int v71; // r9d
  _DWORD *v72; // rax
  _DWORD *v73; // r12
  _QWORD *v74; // r14
  char *v75; // rdx
  int v76; // eax
  __int64 v77; // rdi
  int v78; // eax
  __int64 v79; // rax
  unsigned int v80; // eax
  _QWORD *v81; // r12
  char *v82; // rdx
  int v83; // eax
  __int64 v84; // rdi
  __int64 v85; // r12
  size_t v86; // rdx
  char v87; // r12
  _QWORD *v88; // rbx
  char *v89; // rdx
  int v90; // eax
  __int64 v91; // rdi
  _QWORD *v92; // r15
  char *v93; // rdx
  int v94; // eax
  void *v95; // rdi
  unsigned int i; // r12d
  __int64 v97; // rdi
  _DWORD *v98; // rax
  int v99; // ecx
  void *v100; // rdi
  void **v101; // rax
  void **v102; // r12
  _QWORD *v103; // rbx
  char *v104; // rdx
  int v105; // eax
  _QWORD *v106; // rbx
  char *v107; // rdx
  int v108; // eax
  char *v109; // r12
  __int64 v110; // r15
  __int64 v111; // r12
  _QWORD *v112; // rax
  _DWORD *v113; // rax
  __m128i v114; // xmm0
  _QWORD *v115; // r14
  char *v116; // rdx
  int v117; // eax
  __int64 v118; // rdi
  __m128i v119; // xmm0
  _QWORD *v120; // r15
  char *v121; // rdx
  int v122; // eax
  __int64 v123; // rdi
  _QWORD *v124; // r14
  char *v125; // rdx
  int v126; // eax
  _QWORD *v127; // r12
  char *v128; // rdx
  int v129; // eax
  _QWORD *v130; // r15
  char *v131; // rdx
  int v132; // eax
  _QWORD *v133; // r14
  char *v134; // rdx
  int v135; // eax
  std::ostream *v136; // [rsp+8h] [rbp-108h]
  std::ostream *v137; // [rsp+8h] [rbp-108h]
  char v140; // [rsp+27h] [rbp-E9h] BYREF
  unsigned int v141; // [rsp+28h] [rbp-E8h] BYREF
  int v142; // [rsp+2Ch] [rbp-E4h] BYREF
  void (***v143)(void); // [rsp+30h] [rbp-E0h] BYREF
  __int64 v144; // [rsp+38h] [rbp-D8h] BYREF
  void *s; // [rsp+40h] [rbp-D0h] BYREF
  __int64 *v146; // [rsp+48h] [rbp-C8h] BYREF
  __int64 v147; // [rsp+50h] [rbp-C0h] BYREF
  __int64 v148; // [rsp+58h] [rbp-B8h] BYREF
  _DWORD *v149; // [rsp+60h] [rbp-B0h] BYREF
  __int64 v150; // [rsp+68h] [rbp-A8h] BYREF
  __int64 v151; // [rsp+70h] [rbp-A0h] BYREF
  void *ptr; // [rsp+78h] [rbp-98h] BYREF
  _DWORD *v153; // [rsp+80h] [rbp-90h] BYREF
  _DWORD *v154; // [rsp+88h] [rbp-88h] BYREF
  _DWORD *v155; // [rsp+90h] [rbp-80h] BYREF
  __int64 v156; // [rsp+98h] [rbp-78h] BYREF
  __int64 v157[2]; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v158[2]; // [rsp+B0h] [rbp-60h] BYREF
  __int128 v159; // [rsp+C0h] [rbp-50h] BYREF
  char v160; // [rsp+D0h] [rbp-40h]

  sub_402AA0(a1, (_QWORD *)a2);
  v160 = 0;
  v159 = 0;
  if ( (unsigned int)sub_180B130(a1) )
  {
    if ( (unsigned __int8)sub_186A530(0.0) )
    {
      sub_186A4C0(0.0);
      v30 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_39A600(v30, *(const char **)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL) + 16LL));
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::operator<<<std::char_traits<char>>();
      std::operator<<<std::char_traits<char>>();
      std::operator<<<std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v31 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v32 = **(unsigned int **)(a2 + 24);
      std::ostream::_M_insert<unsigned long>();
      v33 = (std::ostream *)sub_180B150(v31, v32);
      std::ostream::flush(v33);
      v160 = 1;
      *(_QWORD *)&v159 = std::chrono::_V2::steady_clock::now(v33);
      sub_186A500(v33, v32);
    }
    else
    {
      v65 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_39A600(v65, *(const char **)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL) + 16LL));
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::operator<<<std::char_traits<char>>();
      std::operator<<<std::char_traits<char>>();
      std::operator<<<std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v66 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v67 = **(unsigned int **)(a2 + 24);
      std::ostream::_M_insert<unsigned long>();
      v68 = (std::ostream *)sub_180B150(v66, v67);
      std::ostream::flush(v68);
      v160 = 1;
      *(_QWORD *)&v159 = std::chrono::_V2::steady_clock::now(v68);
    }
  }
  v141 = -1;
  v157[1] = 0;
  v8 = *(_QWORD *)(a1 + 152);
  v143 = nullptr;
  v144 = 0;
  v157[0] = v8;
  v9 = *(_BYTE *)(a2 + 78);
  v142 = 0;
  if ( (v9 & 0x48) != 0 )
  {
LABEL_3:
    if ( !*(_DWORD *)(a2 + 136) )
    {
      ++*(_DWORD *)(a1 + 612);
LABEL_39:
      v27 = 0;
      goto LABEL_29;
    }
LABEL_4:
    if ( *(_BYTE *)(a1 + 673) )
    {
      if ( (v9 & 0x20) != 0 )
      {
        if ( *(_DWORD *)(a2 + 136) )
        {
          if ( !sub_4007C0(*(_QWORD *)(a2 + 16), a2, &v141, (__int64)&v143) )
          {
            v72 = (_DWORD *)sub_448E30(*(_QWORD *)(a1 + 520), a2, (unsigned int)&v143, v69, v70, v71);
            v73 = v72;
            if ( v72 )
            {
              ++*(_DWORD *)(a1 + 608);
              ++*v72;
              v149 = v72;
              sub_41EF60(a3, &v149);
              ++*(_DWORD *)a2;
              v150 = a2;
              sub_41EF60(a3, &v150);
              if ( (unsigned int)sub_180B130(a3) )
              {
                if ( (unsigned __int8)sub_186A530(0.0) )
                {
                  sub_186A4C0(0.0);
                  v74 = (_QWORD *)sub_180B150(a3, &v150);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v75 = (char *)v74 + *(_QWORD *)(*v74 - 24LL);
                  v76 = *((_DWORD *)v75 + 6);
                  *((_QWORD *)v75 + 1) = 2;
                  *((_DWORD *)v75 + 6) = v76 & 0xFFFFFEFB | 4;
                  sub_41C7A0(&v159);
                  v77 = std::ostream::_M_insert<double>();
                  std::operator<<<std::char_traits<char>>();
                  sub_186A500(v77, "\n");
                }
                else
                {
                  v133 = (_QWORD *)sub_180B150(a3, &v150);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v134 = (char *)v133 + *(_QWORD *)(*v133 - 24LL);
                  v135 = *((_DWORD *)v134 + 6);
                  *((_QWORD *)v134 + 1) = 2;
                  *((_DWORD *)v134 + 6) = v135 & 0xFFFFFEFB | 4;
                  sub_41C7A0(&v159);
                  std::ostream::_M_insert<double>();
                  std::operator<<<std::char_traits<char>>();
                }
              }
              v78 = *(_DWORD *)(a2 + 136);
              v73[34] = v78;
              *(_DWORD *)(a2 + 136) = v78 - 1;
              goto LABEL_39;
            }
          }
        }
      }
    }
    sub_3FCDA0(v143);
    v143 = nullptr;
    sub_400010(a1);
    v10 = *(_BYTE *)(a1 + 674);
    v11 = *(_QWORD *)(a2 + 16);
    s = nullptr;
    v12 = (void **)a2;
    v13 = sub_409D10(v11, a2, v157, (__int64 *)&v143, &v141, &v140, &v144, &s, &v142, v10);
    v14 = (unsigned int *)s;
    v15 = v13;
    if ( v143 )
    {
      v12 = nullptr;
      sub_1360B80(v143 + 16, 0);
      if ( !v15 )
      {
        if ( v143 )
        {
          v12 = (void **)a2;
          v15 = sub_410E80(a1, a2, v144, (__int64)v143);
          v16 = *(void ***)(a1 + 152);
          sub_EE4F40(v16);
          if ( !(unsigned int)sub_180B130(v16) )
          {
            if ( v15 )
              goto LABEL_12;
LABEL_32:
            v29 = *(_DWORD *)(a2 + 80);
            if ( (*(_BYTE *)(a2 + 78) & 0x48) != 0 )
            {
              if ( v29 <= 9 )
              {
                *(_DWORD *)(a2 + 80) = v29 + 1;
                v27 = sub_4185C0(a1, a2, a3);
                goto LABEL_79;
              }
              if ( (*(_BYTE *)(a2 + 78) & 1) != 0 )
              {
                v16 = (void **)a2;
                sub_400AD0(a2);
              }
              ++*(_DWORD *)(a1 + 564);
              if ( (unsigned int)sub_180B130(v16) )
              {
                if ( (unsigned __int8)sub_186A530(0.0) )
                {
LABEL_105:
                  sub_186A4C0(0.0);
                  v88 = (_QWORD *)sub_180B150(v16, v12);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v89 = (char *)v88 + *(_QWORD *)(*v88 - 24LL);
                  v90 = *((_DWORD *)v89 + 6);
                  *((_QWORD *)v89 + 1) = 2;
                  *((_DWORD *)v89 + 6) = v90 & 0xFFFFFEFB | 4;
                  sub_41C7A0(&v159);
                  v91 = std::ostream::_M_insert<double>();
                  std::operator<<<std::char_traits<char>>();
                  sub_186A500(v91, "\n");
                  v27 = 0;
                  goto LABEL_79;
                }
                goto LABEL_130;
              }
LABEL_37:
              v27 = 0;
              goto LABEL_79;
            }
            if ( v29 > 9 )
            {
              exception = __cxa_allocate_exception(1u);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'spacer::unknown_exception, nullptr);
            }
            v85 = v144;
            ++*(_DWORD *)(a1 + 564);
            if ( v85 && *(_DWORD *)(v85 + 68) )
            {
              if ( v14 )
              {
                v86 = *(v14 - 1);
                if ( (_DWORD)v86 )
                  memset(v14, 0, v86);
              }
              v12 = (void **)a2;
              v16 = (void **)a1;
              v87 = sub_416B80(a1, a2, (__int64 *)v85, (char *)v143, &s, a3, 0.0, a5);
              if ( !(unsigned int)sub_180B130(a1) )
              {
LABEL_102:
                if ( v87 )
                {
                  ++*(_DWORD *)a2;
                  v158[0] = a2;
                  sub_41EF60(a3, v158);
                  v27 = 0;
                  goto LABEL_79;
                }
LABEL_132:
                ++*(_DWORD *)(a2 + 80);
LABEL_94:
                v27 = sub_4185C0(a1, a2, a3);
                goto LABEL_79;
              }
            }
            else
            {
              v87 = 0;
              if ( !(unsigned int)sub_180B130(v16) )
                goto LABEL_132;
            }
            if ( (unsigned __int8)sub_186A530(0.0) )
            {
              sub_186A4C0(0.0);
              v120 = (_QWORD *)sub_180B150(v16, v12);
              std::__ostream_insert<char,std::char_traits<char>>();
              v121 = (char *)v120 + *(_QWORD *)(*v120 - 24LL);
              v122 = *((_DWORD *)v121 + 6);
              *((_QWORD *)v121 + 1) = 2;
              *((_DWORD *)v121 + 6) = v122 & 0xFFFFFEFB | 4;
              sub_41C7A0(&v159);
              v123 = std::ostream::_M_insert<double>();
              std::operator<<<std::char_traits<char>>();
              sub_186A500(v123, "\n");
            }
            else
            {
              v130 = (_QWORD *)sub_180B150(v16, v12);
              std::__ostream_insert<char,std::char_traits<char>>();
              v131 = (char *)v130 + *(_QWORD *)(*v130 - 24LL);
              v132 = *((_DWORD *)v131 + 6);
              *((_QWORD *)v131 + 1) = 2;
              *((_DWORD *)v131 + 6) = v132 & 0xFFFFFEFB | 4;
              sub_41C7A0(&v159);
              std::ostream::_M_insert<double>();
              std::operator<<<std::char_traits<char>>();
            }
            goto LABEL_102;
          }
          goto LABEL_47;
        }
LABEL_31:
        v16 = *(void ***)(a1 + 152);
        sub_EE4F40(v16);
        if ( !(unsigned int)sub_180B130(v16) )
          goto LABEL_32;
        v15 = 0;
LABEL_47:
        if ( (unsigned __int8)sub_186A530(0.0) )
        {
          sub_186A4C0(0.0);
          v79 = sub_180B150(v16, v12);
          v12 = (void **)".";
          v137 = (std::ostream *)v79;
          std::__ostream_insert<char,std::char_traits<char>>();
          v16 = (void **)v137;
          std::ostream::flush(v137);
          sub_186A500(v137, ".");
        }
        else
        {
          v35 = sub_180B150(v16, v12);
          v12 = (void **)".";
          v136 = (std::ostream *)v35;
          std::__ostream_insert<char,std::char_traits<char>>();
          v16 = (void **)v136;
          std::ostream::flush(v136);
        }
        if ( !v15 )
          goto LABEL_32;
LABEL_50:
        if ( v15 != 1 )
        {
          v36 = sub_180B150(v16, v12);
          sub_1841000(&v151, 0, "spacer::expand_pob::false", v36);
          v37 = *(unsigned __int16 *)(a2 + 72);
          if ( v37 < *(_DWORD *)(a1 + 368) )
            *(_DWORD *)(a1 + 368) = v37;
          v38 = *(_BYTE *)(a2 + 78);
          if ( (v38 & 8) != 0 )
          {
            ++*(_DWORD *)(a1 + 588);
            v38 = *(_BYTE *)(a2 + 78);
          }
          if ( (v38 & 0x40) != 0 )
          {
            ++*(_DWORD *)(a1 + 604);
            v38 = *(_BYTE *)(a2 + 78);
          }
          ++*(_DWORD *)a2;
          ptr = nullptr;
          if ( (v38 & 0x10) != 0 )
          {
            v49 = (_DWORD *)sub_186B270(0x70u);
            v147 = a2;
            sub_40AD60((__int64)v49, (__int64)&v147, (__int64)v157, v141);
            v95 = ptr;
            ++*v49;
            if ( v95 )
              sub_41CE10(v95);
            ptr = v49;
            for ( i = 0; (*(_BYTE *)(a2 + 78) & 2) != 0; ++i )
            {
              if ( sub_3FE8D0(v49) )
                break;
              if ( i >= *(_DWORD *)(a1 + 384) )
                break;
              sub_EE4F40(*(_QWORD *)(a1 + 152));
              v97 = *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL * i);
              (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v97 + 16LL))(v97, &ptr);
              v49 = ptr;
            }
          }
          else if ( *(_QWORD *)(a1 + 520) || *(_QWORD *)(a1 + 528) )
          {
            v158[1] = 0;
            ++*(_DWORD *)(a1 + 616);
            v158[0] = *(_QWORD *)(a1 + 152);
            sub_40E8B0(a2, v158);
            v39 = sub_186B270(0x70u);
            v40 = *(unsigned __int16 *)(a2 + 72);
            v41 = (_DWORD *)v39;
            v147 = a2;
            sub_40AD60(v39, (__int64)&v147, (__int64)v158, v40);
            v42 = ptr;
            ++*v41;
            if ( v42 )
              sub_41CE10(v42);
            ptr = v41;
            v43 = *(_QWORD *)(a1 + 520);
            if ( v43 )
              (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v43 + 16LL))(v43, &ptr);
            v44 = *(_QWORD *)(a1 + 528);
            if ( v44 )
              (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v44 + 16LL))(v44, &ptr);
            sub_2334C0(v158);
            v49 = ptr;
          }
          else
          {
            v49 = (_DWORD *)sub_186B270(0x70u);
            v147 = a2;
            sub_40AD60((__int64)v49, (__int64)&v147, (__int64)v157, v141);
            v100 = ptr;
            ++*v49;
            if ( v100 )
              sub_41CE10(v100);
            ptr = v49;
          }
          p_ptr = (void **)v49;
          if ( (unsigned __int8)sub_40F760(
                                  (_QWORD **)(*(_QWORD *)(a2 + 16) + 176LL),
                                  (__int64)v49,
                                  v45,
                                  v46,
                                  v47,
                                  v48,
                                  0.0) )
          {
            if ( *(_BYTE *)(a1 + 669) )
            {
              p_ptr = &ptr;
              sub_480750(*(_QWORD *)(a1 + 536), &ptr);
            }
            ++*(_DWORD *)(a1 + 568);
            if ( *(_BYTE *)(a1 + 656) )
            {
              v109 = (char *)ptr;
              v110 = *(_QWORD *)(a1 + 152);
              sub_407650((__int64)ptr, (__int64)p_ptr, v51, v52, v53, v54);
              sub_41C800(v158, v109 + 32);
              v111 = v158[0];
              if ( *(_QWORD *)(a2 + 24) != v158[0] )
              {
                v112 = sub_4055A0(*(_QWORD *)(a2 + 16) + 136LL, *(_QWORD *)(a2 + 8), v158[0]);
                if ( (_QWORD *)a2 != v112 && (!v112 || (*((_BYTE *)v112 + 78) & 4) == 0) )
                {
                  v113 = (_DWORD *)sub_405720(
                                     *(_QWORD *)(a2 + 16) + 136LL,
                                     *(_QWORD *)(a2 + 8),
                                     *(_WORD *)(a2 + 72),
                                     *(_WORD *)(a2 + 74),
                                     v111,
                                     a2 + 40);
                  v114 = _mm_cvtsi32_si128(v113[18]);
                  v113[20] = 0;
                  ++*v113;
                  v153 = v113;
                  v113[18] = _mm_cvtsi128_si32(_mm_add_epi16(v114, _mm_cvtsi32_si128(0x10001u)));
                  sub_41EF60(a3, &v153);
                }
              }
              sub_3FCDF0(v111, v110);
            }
          }
          v55 = *(_QWORD *)(a1 + 520);
          if ( v55 )
          {
            v56 = (_DWORD *)sub_448B60(v55, a2);
            if ( v56 )
            {
              v57 = *(_DWORD *)(a2 + 136);
              v154 = v56;
              v56[34] = v57 - 1;
              --*(_DWORD *)(a2 + 136);
              ++*v56;
              sub_41EF60(a3, &v154);
              ++*(_DWORD *)(a1 + 596);
            }
            else if ( *(_BYTE *)(a1 + 671) )
            {
              v98 = (_DWORD *)sub_448CA0(*(_QWORD *)(a1 + 520), a2);
              if ( v98 )
              {
                v99 = *(_DWORD *)(a2 + 136);
                v155 = v98;
                v98[34] = v99 - 1;
                --*(_DWORD *)(a2 + 136);
                ++*v98;
                sub_41EF60(a3, &v155);
                ++*(_DWORD *)(a1 + 584);
              }
            }
          }
          v58 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 72));
          ++*(_DWORD *)a2;
          *(_DWORD *)(a2 + 80) = 0;
          v156 = a2;
          v59 = _mm_add_epi16(v58, _mm_cvtsi32_si128(0x10001u));
          *(_DWORD *)(a2 + 72) = _mm_cvtsi128_si32(v59);
          sub_41EF60(a3, &v156);
          if ( (unsigned int)sub_180B130(a3) )
          {
            if ( (unsigned __int8)sub_186A530(*(double *)v59.m128i_i64) )
            {
              sub_186A4C0(*(double *)v59.m128i_i64);
              v60 = (_QWORD *)sub_180B150(a3, &v156);
              std::__ostream_insert<char,std::char_traits<char>>();
              v61 = (char *)v60 + *(_QWORD *)(*v60 - 24LL);
              v62 = *((_DWORD *)v61 + 6);
              *((_QWORD *)v61 + 1) = 2;
              *((_DWORD *)v61 + 6) = v62 & 0xFFFFFEFB | 4;
              sub_41C7A0(&v159);
              v63 = std::ostream::_M_insert<double>();
              std::operator<<<std::char_traits<char>>();
              sub_186A500(v63, "\n");
            }
            else
            {
              v92 = (_QWORD *)sub_180B150(a3, &v156);
              std::__ostream_insert<char,std::char_traits<char>>();
              v93 = (char *)v92 + *(_QWORD *)(*v92 - 24LL);
              v94 = *((_DWORD *)v93 + 6);
              *((_QWORD *)v93 + 1) = 2;
              *((_DWORD *)v93 + 6) = v94 & 0xFFFFFEFB | 4;
              sub_41C7A0(&v159);
              std::ostream::_M_insert<double>();
              std::operator<<<std::char_traits<char>>();
            }
          }
          if ( ptr )
            sub_41CE10(ptr);
          v64 = (void *)a2;
          v27 = -1;
          sub_41CD50(v64);
          sub_18410E0(&v151);
LABEL_79:
          if ( !v14 )
            goto LABEL_29;
          goto LABEL_80;
        }
LABEL_12:
        v17 = v144;
        *(_DWORD *)(a1 + 548) += v142;
        if ( v140 )
        {
          if ( v17 )
          {
            v18 = *(_QWORD *)(a1 + 312) == a2;
            if ( *(_DWORD *)(v17 + 68) || *(_QWORD *)(a1 + 312) == a2 )
            {
              v101 = (void **)sub_411B80(*(_QWORD *)(a2 + 16), a2, (char *)v143, v17);
              ++*(_DWORD *)v101;
              v102 = v101;
              sub_EE4F40(*(_QWORD *)(a1 + 152));
              v12 = v102;
              sub_413A90(*(_QWORD *)(a2 + 16), (__int64)v102, v18);
              sub_EE4F40(*(_QWORD *)(a1 + 152));
              v16 = v102;
              sub_41D2B0(v102);
            }
          }
          v19 = *(_BYTE *)(a2 + 78);
          v20 = *(__int64 **)(a2 + 88);
          v21 = v19 & 1;
          if ( v20 )
          {
            *(_QWORD *)(a2 + 88) = 0;
            if ( v21 )
              sub_400AD0(a2);
            v22 = sub_4177A0(v20, 0.0);
            v16 = *(void ***)(a1 + 152);
            sub_EE4F40(v16);
            if ( v22 )
            {
              sub_400A10((__int64 **)(v22 + 88), v20);
              v151 = v22;
              v16 = (void **)a3;
              v12 = (void **)&v151;
              ++*(_DWORD *)v22;
              sub_41EF60(a3, &v151);
              v19 = *(_BYTE *)(a2 + 78);
              v20 = nullptr;
            }
            else
            {
              v19 = *(_BYTE *)(a2 + 78);
            }
          }
          else
          {
            v22 = 0;
            if ( v21 )
            {
              v16 = (void **)a2;
              sub_400AD0(a2);
              v19 = *(_BYTE *)(a2 + 78);
              v22 = 0;
            }
          }
          if ( (v19 & 0x40) != 0 )
          {
            ++*(_DWORD *)(a1 + 600);
            v19 = *(_BYTE *)(a2 + 78);
          }
          if ( (v19 & 8) != 0 )
            ++*(_DWORD *)(a1 + 592);
          if ( (unsigned int)sub_180B130(v16) )
          {
            if ( (unsigned __int8)sub_186A530(0.0) )
            {
              sub_186A4C0(0.0);
              sub_180B150(v16, v12);
              v23 = (_QWORD *)std::operator<<<std::char_traits<char>>();
              v24 = (char *)v23 + *(_QWORD *)(*v23 - 24LL);
              v25 = *((_DWORD *)v24 + 6);
              *((_QWORD *)v24 + 1) = 2;
              *((_DWORD *)v24 + 6) = v25 & 0xFFFFFEFB | 4;
              sub_41C7A0(&v159);
              v26 = std::ostream::_M_insert<double>();
              std::operator<<<std::char_traits<char>>();
              sub_186A500(v26, "\n");
            }
            else
            {
              sub_180B150(v16, v12);
              v103 = (_QWORD *)std::operator<<<std::char_traits<char>>();
              v104 = (char *)v103 + *(_QWORD *)(*v103 - 24LL);
              v105 = *((_DWORD *)v104 + 6);
              *((_QWORD *)v104 + 1) = 2;
              *((_DWORD *)v104 + 6) = v105 & 0xFFFFFEFB | 4;
              sub_41C7A0(&v159);
              std::ostream::_M_insert<double>();
              std::operator<<<std::char_traits<char>>();
            }
          }
          v146 = v20;
          v27 = v22 == 0;
          sub_41D7A0(&v146);
          if ( !v14 )
            goto LABEL_29;
LABEL_80:
          sub_186B220(v14 - 2);
          goto LABEL_29;
        }
        if ( !(unsigned __int8)sub_416B80(a1, a2, (__int64 *)v17, (char *)v143, &s, a3, 0.0, a5) )
        {
          v80 = *(_DWORD *)(a2 + 80);
          if ( v80 > 9 )
          {
            v5 = __cxa_allocate_exception(1u);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'spacer::unknown_exception, nullptr);
          }
          *(_DWORD *)(a2 + 80) = v80 + 1;
          if ( (unsigned int)sub_180B130(a1) )
          {
            if ( (unsigned __int8)sub_186A530(0.0) )
            {
              sub_186A4C0(0.0);
              v81 = (_QWORD *)sub_180B150(a1, a2);
              std::__ostream_insert<char,std::char_traits<char>>();
              v82 = (char *)v81 + *(_QWORD *)(*v81 - 24LL);
              v83 = *((_DWORD *)v82 + 6);
              *((_QWORD *)v82 + 1) = 2;
              *((_DWORD *)v82 + 6) = v83 & 0xFFFFFEFB | 4;
              sub_41C7A0(&v159);
              v84 = std::ostream::_M_insert<double>();
              std::operator<<<std::char_traits<char>>();
              sub_186A500(v84, "\n");
            }
            else
            {
              v127 = (_QWORD *)sub_180B150(a1, a2);
              std::__ostream_insert<char,std::char_traits<char>>();
              v128 = (char *)v127 + *(_QWORD *)(*v127 - 24LL);
              v129 = *((_DWORD *)v128 + 6);
              *((_QWORD *)v128 + 1) = 2;
              *((_DWORD *)v128 + 6) = v129 & 0xFFFFFEFB | 4;
              sub_41C7A0(&v159);
              std::ostream::_M_insert<double>();
              std::operator<<<std::char_traits<char>>();
            }
          }
          goto LABEL_94;
        }
        ++*(_DWORD *)a2;
        v16 = (void **)a3;
        v12 = &ptr;
        ptr = (void *)a2;
        sub_41EF60(a3, &ptr);
        if ( (unsigned int)sub_180B130(a3) )
        {
          if ( (unsigned __int8)sub_186A530(0.0) )
            goto LABEL_105;
LABEL_130:
          v106 = (_QWORD *)sub_180B150(v16, v12);
          std::__ostream_insert<char,std::char_traits<char>>();
          v107 = (char *)v106 + *(_QWORD *)(*v106 - 24LL);
          v108 = *((_DWORD *)v107 + 6);
          *((_QWORD *)v107 + 1) = 2;
          *((_DWORD *)v107 + 6) = v108 & 0xFFFFFEFB | 4;
          sub_41C7A0(&v159);
          std::ostream::_M_insert<double>();
          std::operator<<<std::char_traits<char>>();
          v27 = 0;
          goto LABEL_79;
        }
        goto LABEL_37;
      }
    }
    else if ( !v13 )
    {
      goto LABEL_31;
    }
    v16 = *(void ***)(a1 + 152);
    sub_EE4F40(v16);
    if ( !(unsigned int)sub_180B130(v16) )
      goto LABEL_50;
    goto LABEL_47;
  }
  if ( !*(_BYTE *)(a1 + 655) )
    goto LABEL_4;
  v34 = *(_QWORD *)(a2 + 16);
  if ( !sub_4007C0(v34, a2, &v141, 0) )
  {
    v9 = *(_BYTE *)(a2 + 78);
    if ( (v9 & 0x48) == 0 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( (unsigned int)sub_180B130(v34) )
  {
    if ( (unsigned __int8)sub_186A530(0.0) )
    {
      sub_186A4C0(0.0);
      v115 = (_QWORD *)sub_180B150(v34, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v116 = (char *)v115 + *(_QWORD *)(*v115 - 24LL);
      v117 = *((_DWORD *)v116 + 6);
      *((_QWORD *)v116 + 1) = 2;
      *((_DWORD *)v116 + 6) = v117 & 0xFFFFFEFB | 4;
      sub_41C7A0(&v159);
      v118 = std::ostream::_M_insert<double>();
      std::operator<<<std::char_traits<char>>();
      sub_186A500(v118, "\n");
    }
    else
    {
      v124 = (_QWORD *)sub_180B150(v34, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v125 = (char *)v124 + *(_QWORD *)(*v124 - 24LL);
      v126 = *((_DWORD *)v125 + 6);
      *((_QWORD *)v125 + 1) = 2;
      *((_DWORD *)v125 + 6) = v126 & 0xFFFFFEFB | 4;
      sub_41C7A0(&v159);
      std::ostream::_M_insert<double>();
      std::operator<<<std::char_traits<char>>();
    }
  }
  v119 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 72));
  *(_DWORD *)(a2 + 80) = 0;
  ++*(_DWORD *)a2;
  v148 = a2;
  *(_DWORD *)(a2 + 72) = _mm_cvtsi128_si32(_mm_add_epi16(v119, _mm_cvtsi32_si128(0x10001u)));
  sub_41EF60(a3, &v148);
  v27 = -1;
LABEL_29:
  sub_3FCDA0(v143);
  sub_2334C0(v157);
  return v27;
}

