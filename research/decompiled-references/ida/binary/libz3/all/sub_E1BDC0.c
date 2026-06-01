__int64 __fastcall sub_E1BDC0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // r13d
  unsigned int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // r15
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  bool v16; // zf
  const char *v17; // rdx
  void (__fastcall *v18)(_QWORD *, __int64, const char *, _QWORD); // r13
  __int64 (__fastcall *v19)(__int64); // rax
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(__int64); // rax
  std::ostream *v22; // r14
  _BYTE *v23; // r13
  char v24; // si
  std::ostream *v25; // rax
  int v26; // edx
  __int64 (__fastcall *v27)(__int64); // rax
  __int64 v28; // rsi
  __int64 (__fastcall *v29)(__int64); // rax
  std::ostream *v30; // r14
  _BYTE *v31; // r13
  char v32; // si
  std::ostream *v33; // rax
  __int64 *v34; // r13
  unsigned __int64 v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 *v38; // r13
  unsigned __int64 v39; // r14
  __int64 v40; // rsi
  __int64 v41; // rdi
  const char *v42; // rsi
  _QWORD *v43; // rdi
  int v44; // ecx
  int v45; // r8d
  int v46; // r9d
  _QWORD *v47; // rax
  __int64 v48; // rbp
  __int64 (__fastcall *v49)(__int64); // rax
  std::chrono::_V2::steady_clock *v50; // r15
  char *v51; // rdx
  int v52; // eax
  _QWORD *v53; // r15
  char *v54; // rdx
  int v55; // eax
  _QWORD *v56; // r13
  char *v57; // rdx
  int v58; // eax
  double v59; // xmm0_8
  double v60; // xmm0_8
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 (__fastcall *v63)(__int64); // rdx
  __int64 (__fastcall *v64)(__int64); // rax
  std::ostream *v65; // rbx
  _BYTE *v66; // rbp
  char v67; // si
  std::ostream *v68; // rax
  __int64 result; // rax
  __int64 v70; // rsi
  __int64 v71; // rdi
  const char *v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 (__fastcall *v76)(__int64, unsigned int); // rax
  __int64 (__fastcall *v77)(__int64, unsigned int); // rax
  __int64 (__fastcall *v78)(__int64, unsigned int); // rax
  __int64 v79; // rax
  __int64 v80; // rax
  int v81; // eax
  _QWORD *exception; // rbx
  void *v83; // [rsp+0h] [rbp-188h]
  int **v84; // [rsp+0h] [rbp-188h]
  int v85; // [rsp+0h] [rbp-188h]
  _QWORD *v86; // [rsp+8h] [rbp-180h]
  void *v87; // [rsp+8h] [rbp-180h]
  int *v88; // [rsp+10h] [rbp-178h]
  char v89; // [rsp+18h] [rbp-170h]
  int v90; // [rsp+20h] [rbp-168h]
  const char *v91; // [rsp+28h] [rbp-160h]
  char v92[8]; // [rsp+38h] [rbp-150h] BYREF
  int v93[2]; // [rsp+40h] [rbp-148h] BYREF
  __int64 v94; // [rsp+48h] [rbp-140h]
  __int64 v95; // [rsp+50h] [rbp-138h] BYREF
  __int64 v96; // [rsp+58h] [rbp-130h]
  int v97[4]; // [rsp+60h] [rbp-128h] BYREF
  int *v98; // [rsp+70h] [rbp-118h] BYREF
  int v99; // [rsp+78h] [rbp-110h]
  __int128 v100; // [rsp+80h] [rbp-108h]
  __int128 v101; // [rsp+90h] [rbp-F8h]
  __int64 v102; // [rsp+A0h] [rbp-E8h]
  __int16 v103; // [rsp+A8h] [rbp-E0h]
  __int64 v104; // [rsp+B0h] [rbp-D8h]
  _QWORD *v105; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v106; // [rsp+C8h] [rbp-C0h]
  __int64 *v107; // [rsp+D0h] [rbp-B8h]
  __int64 v108; // [rsp+D8h] [rbp-B0h]
  __int64 *v109; // [rsp+E0h] [rbp-A8h]
  __int64 v110; // [rsp+108h] [rbp-80h]
  void *v111; // [rsp+110h] [rbp-78h]
  __int64 v112; // [rsp+120h] [rbp-68h] BYREF

  if ( !*(_QWORD *)(a1 + 56) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid simplify command, argument expected");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  sub_DFBCB0(a2);
  v4 = a2[37];
  *(_QWORD *)v93 = 0;
  v94 = v4;
  sub_DFBCB0(a2);
  v5 = a2[37];
  v95 = 0;
  v96 = v5;
  if ( (unsigned __int8)sub_1859610(a1 + 40, "som", 0) )
    sub_1862300(a1 + 40, "flat", 1);
  sub_DFBCB0(a2);
  v88 = v97;
  sub_14B7810((int)v97, a2[37], a1 + 40, v6, v7, v8, v83);
  v9 = sub_1859960(a1 + 40, "timeout", 0xFFFFFFFFLL);
  v10 = sub_1859960(a1 + 40, "rlimit", 0xFFFFFFFFLL);
  sub_DFBCB0(a2);
  v11 = a2[37];
  v98 = &off_1C4C9C8;
  v104 = v11;
  v99 = 0;
  v102 = 0;
  v103 = 0;
  v100 = 0;
  v101 = 0;
  sub_DFBCB0(a2);
  v12 = a2[37];
  sub_1829790(v12, v10);
  v86 = &v105;
  v84 = &v98;
  sub_18086F0(&v105, &v98, 1);
  sub_18561B0((unsigned int)v92, v9, (unsigned int)&v98, v13, v14, v15);
  v16 = *((_BYTE *)a2 + 904) == 0;
  a2[112] = 0;
  if ( v16 )
  {
    v75 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)v92);
    *((_BYTE *)a2 + 904) = 1;
    a2[111] = v75;
  }
  sub_14BB8A0(v97, *(_QWORD *)(a1 + 56), v93, &v95);
  v89 = 0;
  v90 = sub_14B6430(v97);
  sub_14B6440(v97);
  sub_14B7990(v97);
  if ( *((_BYTE *)a2 + 904) )
  {
    v74 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)v97);
    *((_BYTE *)a2 + 904) = 0;
    a2[112] += v74 - a2[111];
  }
  sub_1856400(v92);
  sub_1808900(&v105);
  sub_1829100(v12);
  if ( (unsigned __int8)sub_1859610(a1 + 40, "print", 1) )
  {
    v17 = *(const char **)v93;
    v18 = *(void (__fastcall **)(_QWORD *, __int64, const char *, _QWORD))(*a2 + 104LL);
    v19 = *(__int64 (__fastcall **)(__int64))(*a2 + 40LL);
    if ( v19 == sub_305010 )
    {
      v20 = a2[51];
    }
    else
    {
      v91 = *(const char **)v93;
      v79 = v19((__int64)a2);
      v17 = v91;
      v20 = v79;
    }
    v18(a2, v20, v17, 0);
    v21 = *(__int64 (__fastcall **)(__int64))(*a2 + 40LL);
    if ( v21 == sub_305010 )
      v22 = (std::ostream *)a2[51];
    else
      v22 = (std::ostream *)v21((__int64)a2);
    v23 = *(_BYTE **)((char *)v22 + *(_QWORD *)(*(_QWORD *)v22 - 24LL) + 240);
    if ( !v23 )
      std::__throw_bad_cast();
    if ( v23[56] )
    {
      v24 = v23[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v24 = 10;
      v77 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v23 + 48LL);
      if ( v77 != sub_26BE90 )
        v24 = v77((__int64)v23, 10u);
    }
    v25 = (std::ostream *)std::ostream::put(v22, v24);
    std::ostream::flush(v25);
  }
  if ( (unsigned __int8)sub_1859610(a1 + 40, "print_proofs", 0) && v95 )
  {
    sub_DFBCB0(a2);
    sub_1651B90(&v105, a2[37]);
    v26 = v95;
    v110 = a2[31];
    v27 = *(__int64 (__fastcall **)(__int64))(*a2 + 40LL);
    if ( v27 == sub_305010 )
    {
      v28 = a2[51];
    }
    else
    {
      LODWORD(v91) = v95;
      v81 = v27((__int64)a2);
      v26 = (int)v91;
      LODWORD(v28) = v81;
    }
    sub_1654670(
      (unsigned int)&v105,
      v28,
      v26,
      0,
      0,
      0,
      (unsigned int)&v98,
      (unsigned int)&v105,
      (unsigned int)v97,
      0,
      v90,
      (_DWORD)v91);
    v29 = *(__int64 (__fastcall **)(__int64))(*a2 + 40LL);
    if ( v29 == sub_305010 )
      v30 = (std::ostream *)a2[51];
    else
      v30 = (std::ostream *)v29((__int64)a2);
    v31 = *(_BYTE **)((char *)v30 + *(_QWORD *)(*(_QWORD *)v30 - 24LL) + 240);
    if ( !v31 )
      std::__throw_bad_cast();
    if ( v31[56] )
    {
      v32 = v31[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v32 = 10;
      v78 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v31 + 48LL);
      if ( v78 != sub_26BE90 )
        v32 = v78((__int64)v31, 10u);
    }
    v33 = (std::ostream *)std::ostream::put(v30, v32);
    std::ostream::flush(v33);
    if ( v111 != &v112 )
      operator delete(v111, v112 + 1);
    v34 = v109;
    if ( v109 )
    {
      v35 = (unsigned __int64)&v109[*((unsigned int *)v109 - 1)];
      if ( (unsigned __int64)v109 >= v35 )
        goto LABEL_36;
      do
      {
        while ( 1 )
        {
          v36 = *v34;
          if ( *v34 )
          {
            v37 = v108;
            v16 = (*(_DWORD *)(v36 + 8))-- == 1;
            if ( v16 )
              break;
          }
          if ( (unsigned __int64)++v34 >= v35 )
            goto LABEL_35;
        }
        sub_15D7BC0(v37, v36);
        ++v34;
      }
      while ( (unsigned __int64)v34 < v35 );
LABEL_35:
      v34 = v109;
      if ( v109 )
LABEL_36:
        sub_186B220(v34 - 1);
    }
    v38 = v107;
    if ( v107 )
    {
      v39 = (unsigned __int64)&v107[*((unsigned int *)v107 - 1)];
      if ( (unsigned __int64)v107 >= v39 )
        goto LABEL_45;
      do
      {
        while ( 1 )
        {
          v40 = *v38;
          if ( *v38 )
          {
            v41 = v106;
            v16 = (*(_DWORD *)(v40 + 8))-- == 1;
            if ( v16 )
              break;
          }
          if ( (unsigned __int64)++v38 >= v39 )
            goto LABEL_44;
        }
        sub_15D7BC0(v41, v40);
        ++v38;
      }
      while ( (unsigned __int64)v38 < v39 );
LABEL_44:
      v38 = v107;
      if ( v107 )
LABEL_45:
        sub_186B220(v38 - 1);
    }
  }
  v42 = "print_statistics";
  if ( (unsigned __int8)sub_1859610(a1 + 40, "print_statistics", 0) )
  {
    v43 = a2;
    sub_DFBCB0(a2);
    v47 = (_QWORD *)a2[37];
    BYTE2(v106) = 0;
    LOWORD(v106) = 256;
    v105 = v47;
    v107 = v47;
    v108 = 0;
    v109 = nullptr;
    if ( !v89 )
    {
      v42 = *(const char **)v93;
      v43 = v86;
      sub_1670890((_DWORD)v86, v93[0], 256, v44, v45, v46, (_DWORD)v84);
    }
    v48 = sub_186B040();
    Z3_get_estimated_alloc_size_0(v43, v42);
    v49 = *(__int64 (__fastcall **)(__int64))(*a2 + 40LL);
    if ( v49 == sub_305010 )
      v50 = (std::chrono::_V2::steady_clock *)a2[51];
    else
      v50 = (std::chrono::_V2::steady_clock *)v49((__int64)a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    v51 = (char *)v50 + *(_QWORD *)(*(_QWORD *)v50 - 24LL);
    v52 = *((_DWORD *)v51 + 6);
    *((_QWORD *)v51 + 1) = 2;
    v16 = *((_BYTE *)a2 + 904) == 0;
    *((_DWORD *)v51 + 6) = v52 & 0xFFFFFEFB | 4;
    if ( !v16 )
    {
      a2[112] += std::chrono::_V2::steady_clock::now(v50) - a2[111];
      *((_BYTE *)a2 + 904) = 0;
      v80 = std::chrono::_V2::steady_clock::now(v50);
      *((_BYTE *)a2 + 904) = 1;
      a2[111] = v80;
    }
    std::ostream::_M_insert<double>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v53 = (_QWORD *)std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v54 = (char *)v53 + *(_QWORD *)(*v53 - 24LL);
    v55 = *((_DWORD *)v54 + 6);
    *((_QWORD *)v54 + 1) = 2;
    *((_DWORD *)v54 + 6) = v55 & 0xFFFFFEFB | 4;
    v56 = (_QWORD *)std::ostream::_M_insert<double>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v57 = (char *)v56 + *(_QWORD *)(*v56 - 24LL);
    v58 = *((_DWORD *)v57 + 6);
    *((_QWORD *)v57 + 1) = 2;
    *((_DWORD *)v57 + 6) = v58 & 0xFFFFFEFB | 4;
    if ( v48 < 0 )
      v59 = (double)(int)(v48 & 1 | ((unsigned __int64)v48 >> 1))
          + (double)(int)(v48 & 1 | ((unsigned __int64)v48 >> 1));
    else
      v59 = (double)(int)v48;
    v60 = v59 * 0.00000095367431640625;
    std::ostream::_M_insert<double>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v61 = (unsigned int)sub_167E610(*(_QWORD *)(a1 + 56), (int)v84, v86, (int)v88);
    std::ostream::_M_insert<unsigned long>();
    v62 = *a2;
    v63 = *(__int64 (__fastcall **)(__int64))(*a2 + 40LL);
    if ( !v89 )
    {
      if ( v63 != sub_305010 )
        ((void (__fastcall *)(_QWORD *, __int64, double))v63)(a2, v61, v60);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1670600(v87, " :num-shared ", v60);
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v61 = (unsigned int)sub_167E610(v93[0], v85, v87, (int)v88);
      std::ostream::_M_insert<unsigned long>();
      v62 = *a2;
    }
    v64 = *(__int64 (__fastcall **)(__int64))(v62 + 40);
    if ( v64 == sub_305010 )
      v65 = (std::ostream *)a2[51];
    else
      v65 = (std::ostream *)((__int64 (__fastcall *)(_QWORD *, __int64, __int64 (__fastcall *)(__int64), double))v64)(
                              a2,
                              v61,
                              v63,
                              v60);
    std::__ostream_insert<char,std::char_traits<char>>();
    v66 = *(_BYTE **)((char *)v65 + *(_QWORD *)(*(_QWORD *)v65 - 24LL) + 240);
    if ( !v66 )
      std::__throw_bad_cast();
    if ( v66[56] )
    {
      v67 = v66[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v67 = 10;
      v76 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v66 + 48LL);
      if ( v76 != sub_26BE90 )
        v67 = ((__int64 (__fastcall *)(_BYTE *, __int64, double))v76)(v66, 10, v60);
    }
    v68 = (std::ostream *)std::ostream::put(v65, v67);
    std::ostream::flush(v68);
    sub_1670470(v87);
  }
  v98 = &off_1C4C9C8;
  if ( (_BYTE)v103 )
  {
    sub_18296D0(v104);
    if ( !HIBYTE(v103) )
      goto LABEL_67;
LABEL_75:
    sub_1829760(v104);
  }
  if ( HIBYTE(v103) )
    goto LABEL_75;
LABEL_67:
  result = sub_14B63F0(v88);
  v70 = v95;
  if ( v95 )
  {
    v71 = v96;
    v16 = (*(_DWORD *)(v95 + 8))-- == 1;
    if ( v16 )
      result = sub_15D7BC0(v71, v70);
  }
  v72 = *(const char **)v93;
  if ( *(_QWORD *)v93 )
  {
    v73 = v94;
    v16 = (*(_DWORD *)(*(_QWORD *)v93 + 8LL))-- == 1;
    if ( v16 )
      return sub_15D7BC0(v73, v72);
  }
  return result;
}

