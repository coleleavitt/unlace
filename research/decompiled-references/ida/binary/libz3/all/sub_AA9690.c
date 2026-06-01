__int64 *__fastcall sub_AA9690(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4, int a5, const char **a6)
{
  char **v6; // r12
  char **exception; // r12
  __int64 v8; // r15
  __int64 v11; // r13
  _OWORD *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  unsigned int *v17; // r14
  unsigned int *v18; // r15
  __int64 v19; // rbx
  __int64 *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 *v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rax
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 *v31; // rbx
  unsigned __int64 v32; // rbp
  __int64 v33; // rsi
  bool v34; // zf
  __int64 *v35; // rbx
  unsigned __int64 v36; // rbp
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 *v39; // rbx
  unsigned __int64 v40; // rbp
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 *v43; // rbx
  unsigned __int64 v44; // rbp
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 *result; // rax
  unsigned int v48; // ecx
  size_t v49; // rsi
  unsigned int v50; // r13d
  unsigned int *v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // eax
  __int64 v54; // rbx
  __int64 *v55; // rdx
  unsigned int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  __int64 *v59; // rcx
  unsigned int v60; // ebp
  size_t v61; // rsi
  unsigned int *v62; // rax
  __int64 v63; // rcx
  _QWORD *v64; // rax
  int v65[2]; // [rsp+0h] [rbp-368h]
  __int64 v66; // [rsp+10h] [rbp-358h]
  __int64 v68; // [rsp+20h] [rbp-348h]
  __int64 v69; // [rsp+28h] [rbp-340h]
  __int64 v70; // [rsp+30h] [rbp-338h]
  int v71; // [rsp+38h] [rbp-330h]
  __int64 v72; // [rsp+40h] [rbp-328h] BYREF
  int v73[2]; // [rsp+48h] [rbp-320h]
  __int64 v74; // [rsp+50h] [rbp-318h] BYREF
  int v75; // [rsp+58h] [rbp-310h]
  int v76; // [rsp+60h] [rbp-308h]
  int v77; // [rsp+68h] [rbp-300h]
  __int64 v78; // [rsp+70h] [rbp-2F8h] BYREF
  void *v79; // [rsp+78h] [rbp-2F0h]
  __int64 v80; // [rsp+80h] [rbp-2E8h]
  int v81; // [rsp+88h] [rbp-2E0h]
  __int64 *v82; // [rsp+90h] [rbp-2D8h]
  void *v83; // [rsp+98h] [rbp-2D0h] BYREF
  int v84; // [rsp+A0h] [rbp-2C8h]
  void *v85; // [rsp+A8h] [rbp-2C0h]
  void *v86; // [rsp+B0h] [rbp-2B8h]
  __int64 v87; // [rsp+C8h] [rbp-2A0h]
  char v88[16]; // [rsp+D0h] [rbp-298h] BYREF
  char v89[24]; // [rsp+E0h] [rbp-288h] BYREF
  char v90[16]; // [rsp+F8h] [rbp-270h] BYREF
  char v91[64]; // [rsp+108h] [rbp-260h] BYREF
  __int64 v92; // [rsp+148h] [rbp-220h] BYREF
  __m128 v93; // [rsp+150h] [rbp-218h]
  int v94; // [rsp+160h] [rbp-208h]
  __int64 *v95; // [rsp+168h] [rbp-200h]
  __int64 v96; // [rsp+170h] [rbp-1F8h]
  int v97; // [rsp+178h] [rbp-1F0h]
  __int64 *v98; // [rsp+180h] [rbp-1E8h]
  __int64 v99; // [rsp+188h] [rbp-1E0h]
  int v100; // [rsp+190h] [rbp-1D8h]
  __int64 v101; // [rsp+198h] [rbp-1D0h]
  __int64 v102; // [rsp+1A0h] [rbp-1C8h]
  __int64 *v103; // [rsp+1A8h] [rbp-1C0h]
  __int64 v104; // [rsp+1B0h] [rbp-1B8h]
  __int64 v105; // [rsp+1B8h] [rbp-1B0h]
  __int64 v106; // [rsp+1C0h] [rbp-1A8h]
  __int64 v107; // [rsp+1C8h] [rbp-1A0h]
  char v108[24]; // [rsp+1D0h] [rbp-198h] BYREF
  char v109[8]; // [rsp+1E8h] [rbp-180h] BYREF
  void *v110; // [rsp+1F0h] [rbp-178h]
  void *v111; // [rsp+1F8h] [rbp-170h]
  int v112; // [rsp+208h] [rbp-160h]
  __int64 v113; // [rsp+210h] [rbp-158h]
  int v114; // [rsp+218h] [rbp-150h]
  __int64 v115; // [rsp+220h] [rbp-148h]
  int v116; // [rsp+228h] [rbp-140h]
  __int64 v117; // [rsp+230h] [rbp-138h]
  __int64 v118; // [rsp+240h] [rbp-128h]
  void *v119; // [rsp+248h] [rbp-120h]
  __int64 v120; // [rsp+250h] [rbp-118h]
  __int64 *v121; // [rsp+258h] [rbp-110h]
  __int64 v122; // [rsp+260h] [rbp-108h]
  char v123[8]; // [rsp+268h] [rbp-100h] BYREF
  __int64 v124; // [rsp+270h] [rbp-F8h]
  __int64 v125; // [rsp+278h] [rbp-F0h]
  __int64 v126; // [rsp+280h] [rbp-E8h]
  __int64 v127; // [rsp+288h] [rbp-E0h]
  __int64 v128; // [rsp+290h] [rbp-D8h]
  __int64 v129; // [rsp+298h] [rbp-D0h]
  __int64 (__fastcall **v130)(); // [rsp+2A0h] [rbp-C8h]
  void *v131; // [rsp+2B8h] [rbp-B0h]
  void *v132; // [rsp+2D0h] [rbp-98h]
  __int64 v133; // [rsp+2D8h] [rbp-90h]
  __int64 *v134; // [rsp+2E0h] [rbp-88h]
  __int64 v135; // [rsp+2E8h] [rbp-80h]
  __int64 v136; // [rsp+328h] [rbp-40h]

  v8 = a3;
  HIDWORD(v68) = a5;
  v78 = *(_QWORD *)(a1 + 104);
  v11 = v78;
  v12 = (_OWORD *)sub_186B270(0x40u);
  v80 = 8;
  v79 = v12;
  *v12 = 0;
  v12[1] = 0;
  v12[2] = 0;
  v12[3] = 0;
  v81 = 0;
  sub_16511B0(&v83);
  v87 = v11;
  v82 = (__int64 *)&off_1C63D10;
  sub_16669D0(v88, v11);
  sub_16744A0(v89, v11);
  sub_1684300(v90, v11);
  sub_15C5470(v91, v11);
  v92 = v11;
  sub_180C5A0(&v74, "seq");
  v13 = sub_15DA4C0(v11 + 560, &v74);
  v14 = sub_15D2690(v11, v13);
  v93 = _mm_loadh_ps((const double *)(v14 + 88));
  v15 = *(_DWORD *)(v14 + 16);
  v95 = &v92;
  v96 = v92;
  v99 = v92;
  v102 = v92;
  v94 = v15;
  v97 = v15;
  v98 = &v92;
  v100 = v15;
  v101 = 0;
  v103 = nullptr;
  v104 = 0;
  v105 = 0;
  v106 = 0xFFFFFFFFLL;
  v107 = 0;
  sub_15F01E0(v108, v11);
  sub_1624F90(v109, v11);
  v113 = 0;
  v112 = 0;
  v115 = 0;
  v114 = 0;
  v117 = 0;
  v116 = 0;
  v118 = 0;
  v119 = nullptr;
  v120 = v11;
  v121 = nullptr;
  v122 = 0;
  sub_15C0990(v123, v11);
  v16 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)v73 = 0;
  v72 = v16;
  sub_168AD20(&v78, &v72);
  v69 = *(_QWORD *)(a1 + 104);
  if ( (_DWORD)v8 )
  {
    v17 = a4;
    v18 = &a4[v8];
    do
    {
      while ( 1 )
      {
        v25 = *v17;
        if ( *v17 != dword_1C7ECE4 )
          break;
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 856LL);
        if ( v19 )
          goto LABEL_6;
        v20 = *(__int64 **)v73;
        if ( !*(_QWORD *)v73 )
          goto LABEL_14;
LABEL_8:
        v21 = *((_DWORD *)v20 - 1);
        if ( v21 == *((_DWORD *)v20 - 2) )
        {
          v48 = (3 * v21 + 1) >> 1;
          v49 = 8 * v48 + 8;
          v50 = v48;
          if ( 8 * v21 + 8 >= (unsigned int)v49 || v21 >= v48 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v74, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v74);
            sub_233E40((__int64)&v74);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v51 = (unsigned int *)sub_186B300(v20 - 1, v49);
          v52 = v51[1];
          v20 = (__int64 *)(v51 + 2);
          *v51 = v50;
          *(_QWORD *)v73 = v20;
          LODWORD(v51) = v52;
          v24 = &v20[v52];
          v23 = (_DWORD)v51 + 1;
        }
        else
        {
          v22 = v21;
          v23 = v21 + 1;
          v24 = &v20[v22];
        }
        ++v17;
        *v24 = v19;
        *((_DWORD *)v20 - 1) = v23;
        if ( v18 == v17 )
          goto LABEL_15;
      }
      if ( v25 == dword_1C7ECE0 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 864LL);
        if ( v19 )
          goto LABEL_6;
      }
      else
      {
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (v25 >> 1));
        if ( (v25 & 1) == 0 )
        {
          if ( !v19 )
            goto LABEL_7;
LABEL_6:
          ++*(_DWORD *)(v19 + 8);
          goto LABEL_7;
        }
        v19 = sub_15E1A70(*(_QWORD *)(a1 + 104));
        if ( v19 )
          goto LABEL_6;
      }
LABEL_7:
      v20 = *(__int64 **)v73;
      if ( *(_QWORD *)v73 )
        goto LABEL_8;
LABEL_14:
      v26 = sub_186B270(0x18u);
      *(_QWORD *)v26 = 2;
      ++v17;
      *(_QWORD *)v73 = v26 + 8;
      *(_QWORD *)(v26 + 8) = v19;
      *(_DWORD *)(v26 + 4) = 1;
    }
    while ( v18 != v17 );
  }
LABEL_15:
  if ( HIDWORD(v68) != dword_1C7ECE0 )
  {
    v53 = HIDWORD(v68) ^ 1;
    if ( (HIDWORD(v68) ^ 1) == dword_1C7ECE4 )
    {
      v54 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 856LL);
      if ( !v54 )
        goto LABEL_114;
    }
    else if ( dword_1C7ECE0 == v53 )
    {
      v54 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 864LL);
      if ( !v54 )
        goto LABEL_114;
    }
    else
    {
      v54 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (v53 >> 1));
      if ( (v53 & 1) != 0 )
      {
        v54 = sub_15E1A70(*(_QWORD *)(a1 + 104));
        if ( !v54 )
          goto LABEL_114;
      }
      else if ( !v54 )
      {
LABEL_114:
        v55 = *(__int64 **)v73;
        if ( *(_QWORD *)v73 )
        {
          v56 = *(_DWORD *)(*(_QWORD *)v73 - 4LL);
          if ( v56 == *(_DWORD *)(*(_QWORD *)v73 - 8LL) )
          {
            v60 = (3 * v56 + 1) >> 1;
            v61 = 8 * v60 + 8;
            if ( 8 * v56 + 8 >= (unsigned int)v61 || v56 >= v60 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v74, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, &v74);
              sub_233E40((__int64)&v74);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v62 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v73 - 8LL), v61);
            v63 = v62[1];
            v55 = (__int64 *)(v62 + 2);
            *v62 = v60;
            *(_QWORD *)v73 = v55;
            LODWORD(v62) = v63;
            v59 = &v55[v63];
            v58 = (_DWORD)v62 + 1;
          }
          else
          {
            v57 = v56;
            v58 = v56 + 1;
            v59 = (__int64 *)(*(_QWORD *)v73 + 8 * v57);
          }
        }
        else
        {
          v64 = (_QWORD *)sub_186B270(0x18u);
          v55 = v64 + 1;
          *v64 = 2;
          v58 = 1;
          *(_QWORD *)v73 = v55;
          v59 = v55;
        }
        *v59 = v54;
        *((_DWORD *)v55 - 1) = v58;
        goto LABEL_16;
      }
    }
    ++*(_DWORD *)(v54 + 8);
    goto LABEL_114;
  }
LABEL_16:
  if ( *a6 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( ((unsigned __int8)*a6 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( *a6 )
        strlen(*a6);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  sub_168AD20(&v78, &v72);
  sub_168C010(
    (int)&v78,
    a2,
    v27,
    v28,
    v29,
    v30,
    &v78,
    (__int64)&v74,
    (int)&v72,
    (int)a6,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73[0],
    v74,
    v75,
    v76,
    v77,
    v78,
    (__int64)v79,
    v80,
    v81,
    v82,
    (int)v83,
    v84,
    v85);
  sub_168BA90(*(_QWORD *)v65, a2, v66, 1);
  std::__ostream_insert<char,std::char_traits<char>>();
  v31 = *(__int64 **)v73;
  if ( *(_QWORD *)v73 )
  {
    v32 = *(_QWORD *)v73 + 8LL * *(unsigned int *)(*(_QWORD *)v73 - 4LL);
    if ( *(_QWORD *)v73 >= v32 )
      goto LABEL_30;
    do
    {
      while ( 1 )
      {
        v33 = *v31;
        if ( *v31 )
        {
          v34 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v34 )
            break;
        }
        if ( (unsigned __int64)++v31 >= v32 )
          goto LABEL_29;
      }
      sub_15D7BC0(v72, v33);
      ++v31;
    }
    while ( (unsigned __int64)v31 < v32 );
LABEL_29:
    v31 = *(__int64 **)v73;
    if ( *(_QWORD *)v73 )
LABEL_30:
      sub_186B220(v31 - 1);
  }
  if ( v136 )
    sub_186B220((void *)(v136 - 8));
  if ( v135 )
    sub_186B220((void *)(v135 - 8));
  v35 = v134;
  if ( v134 )
  {
    v36 = (unsigned __int64)&v134[*((unsigned int *)v134 - 1)];
    if ( (unsigned __int64)v134 >= v36 )
      goto LABEL_43;
    do
    {
      while ( 1 )
      {
        v37 = *v35;
        if ( *v35 )
        {
          v38 = v133;
          v34 = (*(_DWORD *)(v37 + 8))-- == 1;
          if ( v34 )
            break;
        }
        if ( (unsigned __int64)++v35 >= v36 )
          goto LABEL_42;
      }
      sub_15D7BC0(v38, v37);
      ++v35;
    }
    while ( (unsigned __int64)v35 < v36 );
LABEL_42:
    v35 = v134;
    if ( v134 )
LABEL_43:
      sub_186B220(v35 - 1);
  }
  v130 = &off_1C62200;
  if ( v132 )
    sub_186B220(v132);
  if ( v131 )
    sub_186B220(v131);
  if ( v129 )
    sub_186B220((void *)(v129 - 8));
  if ( v128 )
    sub_186B220((void *)(v128 - 8));
  if ( v127 )
    sub_186B220((void *)(v127 - 8));
  if ( v126 )
    sub_186B220((void *)(v126 - 8));
  if ( v125 )
    sub_186B220((void *)(v125 - 8));
  if ( v124 )
    sub_186B220((void *)(v124 - 8));
  if ( v122 )
    sub_186B220((void *)(v122 - 8));
  v39 = v121;
  if ( v121 )
  {
    v40 = (unsigned __int64)&v121[*((unsigned int *)v121 - 1)];
    if ( (unsigned __int64)v121 >= v40 )
      goto LABEL_70;
    do
    {
      while ( 1 )
      {
        v41 = *v39;
        if ( *v39 )
        {
          v42 = v120;
          v34 = (*(_DWORD *)(v41 + 8))-- == 1;
          if ( v34 )
            break;
        }
        if ( (unsigned __int64)++v39 >= v40 )
          goto LABEL_69;
      }
      sub_15D7BC0(v42, v41);
      ++v39;
    }
    while ( (unsigned __int64)v39 < v40 );
LABEL_69:
    v39 = v121;
    if ( v121 )
LABEL_70:
      sub_186B220(v39 - 1);
  }
  if ( v119 )
    sub_186B220(v119);
  if ( v117 )
    sub_186B220((void *)(v117 - 8));
  if ( v115 )
    sub_186B220((void *)(v115 - 8));
  if ( v113 )
    sub_186B220((void *)(v113 - 8));
  v82 = (__int64 *)&off_1C63D10;
  if ( v111 )
    sub_186B220(v111);
  if ( v110 )
    sub_186B220(v110);
  v43 = v103;
  if ( v103 )
  {
    v44 = (unsigned __int64)&v103[*((unsigned int *)v103 - 1)];
    if ( (unsigned __int64)v103 >= v44 )
      goto LABEL_91;
    do
    {
      while ( 1 )
      {
        v45 = *v43;
        if ( *v43 )
        {
          v46 = v102;
          v34 = (*(_DWORD *)(v45 + 8))-- == 1;
          if ( v34 )
            break;
        }
        if ( (unsigned __int64)++v43 >= v44 )
          goto LABEL_90;
      }
      sub_15D7BC0(v46, v45);
      ++v43;
    }
    while ( (unsigned __int64)v43 < v44 );
LABEL_90:
    v43 = v103;
    if ( v103 )
LABEL_91:
      sub_186B220(v43 - 1);
  }
  if ( v101 )
    sub_186B220((void *)(v101 - 8));
  result = qword_1C7A350;
  v82 = qword_1C7A350;
  if ( v86 )
    result = (__int64 *)sub_186B220(v86);
  if ( v83 )
    result = (__int64 *)sub_186B220(v83);
  if ( v79 )
    return (__int64 *)sub_186B220(v79);
  return result;
}

