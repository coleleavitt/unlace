__int64 __fastcall sub_4F1700(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int16 v12; // ax
  void *v13; // rbp
  void *v14; // rax
  _QWORD *v15; // rdi
  __m128i si128; // xmm0
  __int64 v17; // r15
  _QWORD *exception; // rax
  _QWORD *v19; // rbx
  _BYTE *v20; // rax
  const void *v21; // r15
  size_t v22; // rax
  void *v23; // r13
  void *v24; // r14
  char *v25; // rsi
  _QWORD *v26; // rdx
  void *v27; // rcx
  void *v28; // rax
  __int64 v29; // r13
  unsigned int v30; // r14d
  __int64 v31; // rbx
  int *v32; // rbp
  int v33; // r10d
  char *v34; // r11
  void *v35; // r13
  void *v36; // rax
  int v37; // eax
  __int64 v38; // r13
  __int64 v39; // rbp
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  char v43; // al
  __int64 v44; // rdi
  _DWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rbx
  int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  __int64 v51; // rcx
  __int64 v52; // r13
  int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  void *v56; // rdi
  unsigned int v57; // ebp
  __int64 v58; // rdi
  __int64 v59; // rbx
  int v60; // ecx
  int v61; // r8d
  int v62; // r9d
  int v63; // edx
  int v64; // ecx
  int v65; // r8d
  int v66; // r9d
  __int64 v67; // rdx
  _DWORD *v68; // rax
  __int64 v69; // rdx
  _DWORD *v70; // rax
  void *v71; // rax
  __int64 v72; // rbp
  __int64 v73; // rax
  char v74; // al
  __int64 v75; // rdi
  int v76; // ecx
  int v77; // r8d
  int v78; // r9d
  __int64 v79; // rax
  unsigned int v80; // eax
  __int64 v81; // rax
  __int64 v82; // rbp
  __int64 v83; // rax
  char v84; // al
  int *v85; // rax
  char v86; // al
  char v87; // al
  int v88; // r8d
  int v89; // r9d
  int v90; // ecx
  __int64 v91; // r12
  unsigned __int64 v92; // rdi
  void *v93; // rax
  char *v94; // r10
  unsigned __int64 v95; // rsi
  char *v96; // rdx
  char *v97; // r10
  unsigned int v98; // eax
  unsigned int v99; // eax
  unsigned int v100; // edx
  __int64 v101; // rdi
  char v102; // al
  char v103; // al
  void *v104; // rsi
  void *v105; // r15
  size_t v106; // r12
  unsigned __int64 v107; // rdi
  char *v108; // rdi
  __int64 v109[2]; // [rsp+0h] [rbp-298h] BYREF
  __int64 v110; // [rsp+10h] [rbp-288h]
  void *v111; // [rsp+18h] [rbp-280h]
  int v112[2]; // [rsp+20h] [rbp-278h]
  int v113[2]; // [rsp+28h] [rbp-270h]
  void *dest; // [rsp+30h] [rbp-268h]
  void *v115; // [rsp+38h] [rbp-260h]
  int v116[2]; // [rsp+40h] [rbp-258h]
  int v117[2]; // [rsp+48h] [rbp-250h]
  int v118; // [rsp+50h] [rbp-248h]
  int v119; // [rsp+58h] [rbp-240h]
  int v120; // [rsp+5Ch] [rbp-23Ch] BYREF
  int v121; // [rsp+60h] [rbp-238h] BYREF
  unsigned int v122; // [rsp+64h] [rbp-234h] BYREF
  void *v123; // [rsp+68h] [rbp-230h] BYREF
  int v124[2]; // [rsp+70h] [rbp-228h] BYREF
  int v125[2]; // [rsp+78h] [rbp-220h] BYREF
  int v126[2]; // [rsp+80h] [rbp-218h] BYREF
  void *v127; // [rsp+88h] [rbp-210h]
  void *v128; // [rsp+90h] [rbp-208h] BYREF
  void *v129; // [rsp+98h] [rbp-200h]
  int v130[2]; // [rsp+A0h] [rbp-1F8h] BYREF
  void *v131[2]; // [rsp+E0h] [rbp-1B8h] BYREF
  __int128 v132; // [rsp+F0h] [rbp-1A8h] BYREF
  void *src[2]; // [rsp+100h] [rbp-198h]
  __int128 v134; // [rsp+110h] [rbp-188h]
  char v135[8]; // [rsp+120h] [rbp-178h] BYREF
  int v136; // [rsp+128h] [rbp-170h]
  void *v137; // [rsp+130h] [rbp-168h]
  size_t n; // [rsp+138h] [rbp-160h]
  char v139; // [rsp+140h] [rbp-158h] BYREF
  _QWORD v140[28]; // [rsp+150h] [rbp-148h] BYREF
  __int16 v141; // [rsp+230h] [rbp-68h]
  __int128 v142; // [rsp+238h] [rbp-60h]
  __int128 v143; // [rsp+248h] [rbp-50h]

  v8 = *((_QWORD *)a1 + 1);
  v109[0] = a5;
  result = sub_4D6490(*(_QWORD *)(v8 + 24));
  if ( !*(_DWORD *)(a3 + 8) )
    return result;
  v10 = result;
  if ( a2 == *(_QWORD *)(result + 856) )
    return result;
  v11 = *((_QWORD *)a1 + 4);
  v110 = v11;
  if ( a2 == *(_QWORD *)(v10 + 864) )
    return sub_4F5110(a3, v11);
  v12 = *(_WORD *)(a2 + 4);
  if ( v12 )
  {
    v13 = nullptr;
LABEL_6:
    if ( v12 != 1 )
      goto LABEL_7;
    v29 = *((_QWORD *)a1 + 4);
    v30 = *(_DWORD *)(*((_QWORD *)a1 + 15) + 4LL * *(unsigned int *)(a2 + 16));
    v31 = sub_552E50(v29);
    sub_554430(*((_QWORD *)a1 + 4), v31, v30, 2);
    result = sub_4F5940(a3, *((_QWORD *)a1 + 4), v31);
    if ( v31 )
      result = sub_553300(v29, v31);
    v111 = v13;
    goto LABEL_24;
  }
  v32 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v32 )
    goto LABEL_7;
  v33 = *v32;
  v34 = *((char **)a1 + 1);
  v111 = nullptr;
  if ( !v33 )
  {
    result = (unsigned int)v32[1];
    if ( (_DWORD)result == 5 )
    {
      v57 = 0;
      do
      {
        if ( v57 >= *(_DWORD *)(a2 + 24) )
          break;
        result = sub_4F1700(a1, *(_QWORD *)(a2 + 8LL * v57++ + 32), a3, a4, v109[0]);
      }
      while ( *(_DWORD *)(a3 + 8) );
      return result;
    }
    if ( (_DWORD)result != 8 || *(_DWORD *)(a2 + 24) != 1 )
      goto LABEL_40;
    v67 = *(_QWORD *)(a2 + 32);
    if ( *(_WORD *)(v67 + 4) )
    {
      v111 = nullptr;
      goto LABEL_40;
    }
    v68 = *(_DWORD **)(*(_QWORD *)(v67 + 16) + 24LL);
    v111 = v68;
    if ( v68 )
    {
      if ( *v68 )
      {
        v111 = nullptr;
      }
      else
      {
        v111 = nullptr;
        if ( v68[1] == 2 && *(_DWORD *)(v67 + 24) == 2 )
        {
          v81 = *(_QWORD *)(v67 + 40);
          v82 = *(_QWORD *)(v67 + 32);
          *(_QWORD *)v112 = v34;
          *(_QWORD *)v113 = v81;
          v111 = v34 + 48;
          v83 = sub_15D1F10(v82);
          v84 = sub_1673B10(v111, v83);
          v34 = *(char **)v112;
          if ( v84
            && (v111 = *(void **)v112, v86 = sub_4ED250((__int64)a1, v82, &v120, &v121, &v122),
                                       v34 = *(char **)v112,
                                       v86)
            && !*(_WORD *)(*(_QWORD *)v113 + 4LL)
            && (*(_BYTE *)(*(_QWORD *)v113 + 30LL) & 1) != 0 )
          {
            *(_QWORD *)v112 = v111;
            v127 = nullptr;
            *(_QWORD *)v126 = v110;
            v87 = sub_4ED810(a1, v126, v122, v120, v121, *(__int64 *)v113);
            v110 = *(_QWORD *)v126;
            v90 = (int)v127;
            v111 = v127;
            if ( v87 )
            {
LABEL_135:
              result = sub_4F5B00(
                         a3,
                         *((_QWORD *)a1 + 4),
                         (int)v111,
                         v90,
                         v88,
                         v89,
                         v109[0],
                         v109[1],
                         v110,
                         v111,
                         v112[0],
                         v113[0],
                         (int)dest,
                         (int)v115,
                         v116[0],
                         v117[0],
                         v118,
                         v119,
                         v121,
                         v123);
              goto LABEL_24;
            }
            v34 = *(char **)v112;
            v13 = v127;
          }
          else
          {
            v13 = nullptr;
          }
          v12 = *(_WORD *)(a2 + 4);
          if ( v12 )
            goto LABEL_6;
          v85 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL);
          if ( !v85 )
            goto LABEL_7;
          v111 = v13;
          v32 = v85;
        }
      }
    }
  }
  if ( *v32 )
    goto LABEL_30;
LABEL_40:
  if ( v32[1] != 8 )
    goto LABEL_41;
  if ( *(_DWORD *)(a2 + 24) != 1 )
    goto LABEL_41;
  v69 = *(_QWORD *)(a2 + 32);
  if ( *(_WORD *)(v69 + 4) )
    goto LABEL_41;
  v70 = *(_DWORD **)(*(_QWORD *)(v69 + 16) + 24LL);
  if ( v70 && !*v70 && v70[1] == 2 && *(_DWORD *)(v69 + 24) == 2 )
  {
    v71 = *(void **)(v69 + 32);
    v72 = *(_QWORD *)(v69 + 40);
    *(_QWORD *)v113 = v34;
    dest = v71;
    *(_QWORD *)v112 = v34 + 48;
    v73 = sub_15D1F10(v72);
    v74 = sub_1673B10(*(_QWORD *)v112, v73);
    v34 = *(char **)v113;
    if ( v74 )
    {
      *(_QWORD *)v112 = *(_QWORD *)v113;
      v102 = sub_4ED250((__int64)a1, v72, &v120, &v121, &v122);
      v34 = *(char **)v113;
      if ( v102 )
      {
        if ( !*((_WORD *)dest + 2) && (*((_BYTE *)dest + 30) & 1) != 0 )
        {
          *(_QWORD *)v126 = v110;
          v127 = v111;
          v103 = sub_4ED810(a1, v126, v122, v120, v121, (__int64)dest);
          v34 = *(char **)v112;
          v110 = *(_QWORD *)v126;
          v90 = (int)v127;
          v111 = v127;
          if ( v103 )
            goto LABEL_135;
        }
      }
    }
    v12 = *(_WORD *)(a2 + 4);
    if ( v12 )
    {
      v13 = v111;
      goto LABEL_6;
    }
    v32 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v32 )
      goto LABEL_7;
  }
LABEL_30:
  if ( *v32 )
  {
LABEL_31:
    if ( !*v32 && v32[1] == 2 )
      goto LABEL_46;
LABEL_7:
    *(_QWORD *)v113 = v131;
    *(__m128i *)v109 = _mm_unpacklo_epi64(
                         (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                         (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    std::ios_base::ios_base((std::ios_base *)v140);
    v141 = 0;
    v142 = 0;
    v143 = 0;
    v140[0] = (char *)&`vtable for'std::ios + 16;
    v140[27] = 0;
    v14 = (void *)`VTT for'std::ostringstream[2];
    v15 = (void **)((char *)v131 + *(_QWORD *)(`VTT for'std::ostringstream[1] - 24LL));
    v131[0] = (void *)`VTT for'std::ostringstream[1];
    *v15 = v14;
    v111 = v14;
    std::ios::init();
    si128 = _mm_load_si128((const __m128i *)v109);
    v140[0] = (char *)&`vtable for'std::ostringstream + 64;
    *(__m128i *)v131 = si128;
    v132 = 0;
    *(_OWORD *)src = 0;
    v134 = 0;
    std::locale::locale((std::locale *)v135);
    v136 = 16;
    v139 = 0;
    v131[1] = (char *)&`vtable for'std::stringbuf + 16;
    v137 = &v139;
    n = 0;
    std::ios::init();
    v17 = *(_QWORD *)v113;
    std::__ostream_insert<char,std::char_traits<char>>();
    *(_QWORD *)v112 = &v128;
    sub_1606360(&v128, a2, v10, 0, 0, 0);
    sub_160E8B0(v17, &v128);
    dest = v130;
    sub_18572D0(v130);
    exception = __cxa_allocate_exception(0x28u);
    v128 = v130;
    v19 = exception;
    v20 = (_BYTE *)v134;
    v129 = nullptr;
    LOBYTE(v130[0]) = 0;
    if ( (_QWORD)v134 )
    {
      v21 = src[1];
      if ( src[0] >= (void *)v134 )
        v20 = src[0];
      if ( !src[0] )
        v20 = (_BYTE *)v134;
      v22 = v20 - (char *)src[1];
      v23 = (void *)v22;
      if ( (v22 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_replace");
      if ( v22 > 0xF )
      {
        if ( v22 > 0x1D )
        {
          v91 = v22;
          v92 = v22 + 1;
          if ( (__int64)(v22 + 1) < 0 )
            std::__throw_bad_alloc();
        }
        else
        {
          v91 = 30;
          v92 = 31;
        }
        v93 = (void *)operator new(v92);
        v24 = v93;
        if ( v21 )
          memcpy(v93, v21, (size_t)v23);
        if ( v128 != dest )
          operator delete(v128, *(_QWORD *)v130 + 1LL);
        v128 = v24;
        *(_QWORD *)v130 = v91;
      }
      else if ( src[1] == dest )
      {
        std::string::_M_replace_cold();
        v24 = v128;
      }
      else
      {
        if ( v22 )
        {
          if ( v22 == 1 )
            LOBYTE(v130[0]) = *(_BYTE *)src[1];
          else
            memcpy(dest, src[1], v22);
        }
        v24 = dest;
      }
      v129 = v23;
      *((_BYTE *)v23 + (_QWORD)v24) = 0;
LABEL_18:
      v25 = (char *)dest;
      v26 = v19 + 3;
      v19[1] = v19 + 3;
      v27 = v129;
      *v19 = off_1C63128;
      if ( v128 == v25 )
      {
        v80 = (_DWORD)v27 + 1;
        if ( (unsigned int)((_DWORD)v27 + 1) >= 8 )
        {
          v94 = v25;
          v19[3] = *(_QWORD *)v25;
          *(_QWORD *)((char *)v26 + v80 - 8) = *(_QWORD *)&v25[v80 - 8];
          v95 = (unsigned __int64)(v19 + 4) & 0xFFFFFFFFFFFFFFF8LL;
          v96 = (char *)v26 - v95;
          v97 = (char *)(v94 - v96);
          v98 = ((_DWORD)v96 + v80) & 0xFFFFFFF8;
          if ( v98 >= 8 )
          {
            v99 = v98 & 0xFFFFFFF8;
            v100 = 0;
            do
            {
              v101 = v100;
              v100 += 8;
              *(_QWORD *)(v95 + v101) = *(_QWORD *)&v97[v101];
            }
            while ( v100 < v99 );
          }
        }
        else if ( (v80 & 4) != 0 )
        {
          v108 = (char *)dest;
          *((_DWORD *)v19 + 6) = *(_DWORD *)dest;
          *(_DWORD *)((char *)v26 + v80 - 4) = *(_DWORD *)&v108[v80 - 4];
        }
        else if ( (_DWORD)v27 != -1 )
        {
          *((_BYTE *)v19 + 24) = *v25;
          if ( (v80 & 2) != 0 )
            *(_WORD *)((char *)v26 + v80 - 2) = *(_WORD *)((char *)dest + v80 - 2);
        }
      }
      else
      {
        v19[1] = v128;
        v19[3] = *(_QWORD *)v130;
      }
      v28 = dest;
      v19[2] = v27;
      LOBYTE(v130[0]) = 0;
      v128 = v28;
      v129 = nullptr;
      sub_233E40(*(__int64 *)v112);
      __cxa_throw(v19, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v35 = (void *)n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v106 = n;
        v107 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v106 = 30;
        v107 = 31;
      }
      v105 = (void *)operator new(v107);
      if ( v128 != dest )
        operator delete(v128, *(_QWORD *)v130 + 1LL);
      v128 = v105;
      v104 = v137;
      *(_QWORD *)v130 = v106;
    }
    else
    {
      if ( !n )
      {
LABEL_36:
        v36 = dest;
LABEL_37:
        v129 = v35;
        *((_BYTE *)v35 + (_QWORD)v36) = 0;
        goto LABEL_18;
      }
      v104 = v137;
      v105 = dest;
      if ( n == 1 )
      {
        LOBYTE(v130[0]) = *(_BYTE *)v137;
        goto LABEL_36;
      }
    }
    memcpy(v105, v104, (size_t)v35);
    v36 = v128;
    goto LABEL_37;
  }
LABEL_41:
  v37 = v32[1];
  if ( v37 == 8 )
  {
    if ( *(_DWORD *)(a2 + 24) == 1 )
    {
      v58 = *((_QWORD *)a1 + 4);
      v131[0] = &v132;
      v59 = *(_QWORD *)(a2 + 32);
      v131[1] = (void *)0x800000000LL;
      v123 = (void *)sub_552E50(v58);
      sub_4FA720(v131, &v123);
      v128 = nullptr;
      v129 = nullptr;
      sub_186B510(&v128, *(unsigned int *)v109[0], 0);
      sub_4F1700(a1, v59, v131, a4, &v128);
      sub_4F60C0(
        a3,
        *((_QWORD *)a1 + 4),
        (int)v131,
        v60,
        v61,
        v62,
        v109[0],
        v109[1],
        v110,
        (__int64)v111,
        (int)&v128,
        v113[0],
        (int)dest,
        v115,
        v116[0],
        v117[0],
        v118,
        v119,
        v121,
        (int)v123,
        v124[0],
        v125[0],
        v126[0],
        v127);
      sub_4F6740(
        a3,
        *((_QWORD *)a1 + 4),
        v63,
        v64,
        v65,
        v66,
        v109[0],
        v109[1],
        v110,
        v111,
        v112[0],
        v113[0],
        (int)dest,
        (int)v115,
        v116[0],
        v117[0],
        v118,
        v119,
        v121,
        v123);
      result = sub_4F5110(v131, *((_QWORD *)a1 + 4));
      if ( v129 )
        result = sub_186B220(v129);
      v56 = v131[0];
      if ( v131[0] == &v132 || !v131[0] )
        goto LABEL_24;
      goto LABEL_99;
    }
  }
  else if ( v37 == 6 )
  {
    v75 = *((_QWORD *)a1 + 4);
    v131[0] = &v132;
    v131[1] = (void *)0x800000000LL;
    v128 = (void *)sub_552E50(v75);
    *(_QWORD *)v113 = v131;
    sub_4FA720(v131, &v128);
    v78 = (int)v131[1];
    for ( LODWORD(dest) = 0; LODWORD(v131[1]); LODWORD(dest) = (_DWORD)dest + 1 )
    {
      if ( (unsigned int)dest >= *(_DWORD *)(a2 + 24) )
        break;
      v79 = sub_15EC2C0(v10, *(_QWORD *)(a2 + 8LL * (unsigned int)dest + 32));
      *(_QWORD *)v112 = v79;
      if ( v79 )
        ++*(_DWORD *)(v79 + 8);
      sub_4F1700(a1, v79, *(_QWORD *)v113, a4, v109[0]);
      sub_4EBFD0(*(__int64 *)v112, v10);
      v77 = (int)v131[1];
    }
    sub_4F60C0(
      a3,
      *((_QWORD *)a1 + 4),
      v113[0],
      v76,
      v77,
      v78,
      v109[0],
      v109[1],
      v110,
      (__int64)v111,
      v112[0],
      v113[0],
      (int)dest,
      v115,
      v116[0],
      v117[0],
      v118,
      v119,
      v121,
      (int)v123,
      v124[0],
      v125[0],
      v126[0],
      v127);
    result = sub_4F5110(*(_QWORD *)v113, *((_QWORD *)a1 + 4));
    v56 = v131[0];
    if ( v131[0] == &v132 || !v131[0] )
      goto LABEL_24;
    goto LABEL_99;
  }
  if ( v32[1] != 2 )
    goto LABEL_7;
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v41 = *(_QWORD *)(a2 + 32);
    v42 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)v112 = v34;
    *(_QWORD *)v117 = v42;
    *(_QWORD *)v116 = v41;
    v43 = sub_15D2CB0(v10, v41);
    v34 = *(char **)v112;
    if ( !v43 )
    {
      if ( *(_WORD *)(a2 + 4) )
        goto LABEL_7;
      v32 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( !v32 )
        goto LABEL_7;
      goto LABEL_31;
    }
    v44 = *((_QWORD *)a1 + 4);
    dest = v130;
    v128 = v130;
    v131[0] = &v132;
    v129 = (void *)0x800000000LL;
    v131[1] = (void *)0x800000000LL;
    *(_QWORD *)v124 = sub_552E50(v44);
    *(_QWORD *)v112 = &v128;
    sub_4FA720(&v128, v124);
    *(_QWORD *)v125 = sub_552E50(*((_QWORD *)a1 + 4));
    *(_QWORD *)v113 = v131;
    sub_4FA720(v131, v125);
    v45 = (_DWORD *)sub_15EC2C0(v10, *(_QWORD *)v116);
    v115 = v45;
    if ( v45 )
      ++v45[2];
    v46 = sub_15EC2C0(v10, *(_QWORD *)v117);
    v47 = v46;
    if ( v46 )
      ++*(_DWORD *)(v46 + 8);
    sub_4F1700(a1, *(_QWORD *)v116, *(_QWORD *)v112, a4, v109[0]);
    sub_4F1700(a1, v47, *(_QWORD *)v112, a4, v109[0]);
    sub_4F60C0(
      a3,
      *((_QWORD *)a1 + 4),
      v112[0],
      v48,
      v49,
      v50,
      v109[0],
      v109[1],
      v110,
      (__int64)v111,
      v112[0],
      v113[0],
      (int)dest,
      v115,
      v116[0],
      v117[0],
      v118,
      v119,
      v121,
      (int)v123,
      v124[0],
      v125[0],
      v126[0],
      v127);
    sub_4F5110(*(_QWORD *)v112, *((_QWORD *)a1 + 4));
    sub_4F1700(a1, v115, *(_QWORD *)v113, a4, v109[0]);
    v51 = a4;
    v52 = *(_QWORD *)v113;
    sub_4F1700(a1, *(_QWORD *)v117, *(_QWORD *)v113, v51, v109[0]);
    sub_4F60C0(
      a3,
      *((_QWORD *)a1 + 4),
      v113[0],
      v53,
      v54,
      v55,
      v109[0],
      v109[1],
      v110,
      (__int64)v111,
      v112[0],
      v113[0],
      (int)dest,
      v115,
      v116[0],
      v117[0],
      v118,
      v119,
      v121,
      (int)v123,
      v124[0],
      v125[0],
      v126[0],
      v127);
    sub_4F5110(v52, *((_QWORD *)a1 + 4));
    sub_4EBFD0(v47, v10);
    sub_4EBFD0((__int64)v115, v10);
    if ( v131[0] && v131[0] != &v132 )
      sub_186B220(v131[0]);
    v56 = v128;
    result = (__int64)dest;
    if ( v128 == dest || !v128 )
      goto LABEL_24;
LABEL_99:
    result = sub_186B220(v56);
    goto LABEL_24;
  }
  if ( *v32 )
    goto LABEL_7;
LABEL_46:
  if ( *(_DWORD *)(a2 + 24) != 2 )
    goto LABEL_7;
  v38 = *(_QWORD *)(a2 + 32);
  v39 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)v112 = v34 + 48;
  v40 = sub_15D1F10(v38);
  if ( !(unsigned __int8)sub_1673B10(*(_QWORD *)v112, v40) )
    goto LABEL_7;
  result = sub_4EFA30(a1, v38, v39, (unsigned int *)v109[0], a3);
  if ( !(_BYTE)result )
    goto LABEL_7;
LABEL_24:
  if ( v111 )
    return sub_553300(v110, v111);
  return result;
}

