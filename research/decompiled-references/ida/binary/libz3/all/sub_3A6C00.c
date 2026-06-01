__int64 __fastcall sub_3A6C00(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v9; // rdi
  char v10; // al
  __int64 v11; // rcx
  __int64 v13; // rdi
  __int64 *v14; // rax
  __int64 v15; // r12
  __int64 *v16; // r13
  __int64 v17; // rbx
  __int64 v18; // r12
  __int64 v19; // r14
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rbx
  __int64 v25; // rbp
  _QWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 *v30; // rcx
  _BYTE *v31; // rdi
  char *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rsi
  _QWORD *v35; // rbp
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // r12
  unsigned int *v40; // r13
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rsi
  bool v45; // zf
  unsigned int v46; // r12d
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rsi
  int v51; // r9d
  __int64 v52; // rdx
  _QWORD *v53; // r14
  __int64 v54; // rbx
  unsigned __int64 v55; // rdx
  __int64 v56; // r13
  int i; // ecx
  __int64 v58; // rax
  __int64 v59; // rbx
  int v60; // eax
  _QWORD *v61; // r13
  __int64 v62; // rax
  int *v63; // rax
  int v64; // ecx
  __int64 v65; // rbx
  __int64 v66; // rdx
  unsigned int v67; // ecx
  __int64 *v68; // rdi
  _QWORD *v69; // rax
  unsigned int v70; // ebx
  size_t v71; // rdi
  __int64 v72; // rax
  _QWORD *v73; // rdi
  _DWORD *v74; // rcx
  __int64 v75; // rsi
  unsigned __int64 v76; // rax
  __int64 v77; // rsi
  __m128 v78; // xmm0
  __int64 v79; // r13
  __int64 *v80; // rbx
  unsigned __int64 v81; // r12
  __int64 v82; // rsi
  __int64 v83; // rbx
  int v84; // esi
  __int64 v85; // rax
  __m128 v86; // xmm0
  __m128i *v87; // rdi
  __int64 v88; // rbp
  __int64 v89; // r12
  __int64 v90; // rsi
  char **exception; // rbp
  __m128i *v92; // rbx
  __m128i *v93; // rsi
  __int64 v94; // rbp
  __int64 v95; // r12
  char **v96; // r12
  __m128i *v97; // rbx
  __m128i *v98; // rsi
  _QWORD *v99; // rax
  _QWORD *v100; // rax
  char **v101; // rbx
  void *v102; // r14
  _QWORD *v103; // rsi
  char **v104; // rbp
  __m128i *v105; // rbx
  __m128i *v106; // rsi
  int v107[2]; // [rsp+0h] [rbp-368h] BYREF
  __int64 v108; // [rsp+8h] [rbp-360h]
  int v109[2]; // [rsp+10h] [rbp-358h]
  int v110[2]; // [rsp+18h] [rbp-350h]
  int v111[2]; // [rsp+20h] [rbp-348h]
  char v112[8]; // [rsp+28h] [rbp-340h]
  int v113[2]; // [rsp+30h] [rbp-338h]
  int v114[2]; // [rsp+38h] [rbp-330h]
  int v115[2]; // [rsp+40h] [rbp-328h]
  void *ptr; // [rsp+48h] [rbp-320h]
  __int64 v117; // [rsp+50h] [rbp-318h]
  __int64 *v118; // [rsp+58h] [rbp-310h]
  int v119[2]; // [rsp+60h] [rbp-308h]
  __int64 *v120; // [rsp+68h] [rbp-300h]
  unsigned int **v121; // [rsp+70h] [rbp-2F8h]
  _DWORD *v122; // [rsp+78h] [rbp-2F0h]
  char v123; // [rsp+80h] [rbp-2E8h]
  __int64 v124; // [rsp+88h] [rbp-2E0h] BYREF
  char v125[8]; // [rsp+90h] [rbp-2D8h] BYREF
  int v126[2]; // [rsp+98h] [rbp-2D0h] BYREF
  __int64 v127; // [rsp+A0h] [rbp-2C8h] BYREF
  __int64 v128; // [rsp+A8h] [rbp-2C0h]
  _QWORD v129[2]; // [rsp+B0h] [rbp-2B8h] BYREF
  __int64 v130; // [rsp+C0h] [rbp-2A8h]
  int v131[2]; // [rsp+C8h] [rbp-2A0h] BYREF
  unsigned int *v132; // [rsp+D0h] [rbp-298h] BYREF
  int v133[2]; // [rsp+D8h] [rbp-290h]
  int v134[2]; // [rsp+E0h] [rbp-288h] BYREF
  __int64 v135; // [rsp+E8h] [rbp-280h]
  int v136[2]; // [rsp+100h] [rbp-268h] BYREF
  __int64 v137; // [rsp+108h] [rbp-260h]
  _BYTE v138[520]; // [rsp+110h] [rbp-258h] BYREF
  _BYTE v139[80]; // [rsp+318h] [rbp-50h] BYREF

  *(_QWORD *)v113 = a1;
  v9 = a2[1];
  *(_QWORD *)v109 = a3;
  *(_QWORD *)v111 = a5;
  LODWORD(ptr) = a6;
  v10 = sub_18290A0(v9);
  v11 = a2[1];
  *(_QWORD *)v107 = v11;
  if ( !v10 )
  {
    *a1 = 0;
    a1[1] = v11;
    return *(_QWORD *)v113;
  }
  v13 = *a2;
  v127 = 0;
  v129[1] = 0;
  *(_QWORD *)v114 = *(_QWORD *)(v13 + 48) + 656LL;
  v128 = *(_QWORD *)v107;
  v129[0] = *(_QWORD *)v107;
  v14 = (__int64 *)sub_63BA90(v13 + 72, a4);
  v15 = *v14;
  v16 = v14;
  if ( !*v14 )
  {
    *(_QWORD *)v110 = v136;
    goto LABEL_76;
  }
  v17 = 0;
  *(_QWORD *)v112 = 0;
  *(_QWORD *)v110 = v136;
  *(_QWORD *)v115 = *(_QWORD *)v111 + 32LL;
  if ( !*(_DWORD *)(v15 - 4) )
  {
LABEL_11:
    v108 = *(_QWORD *)v112;
    goto LABEL_76;
  }
  while ( 1 )
  {
    sub_39B8E0(*(__m128i **)v110, (__int64)a2, a4);
    v18 = *(_QWORD *)v136;
    v19 = v137;
    v22 = sub_15DC610(
            a2[1],
            v136[0],
            *(_DWORD *)(*(_QWORD *)v111 + 24LL),
            v115[0],
            v20,
            v21,
            v107[0],
            v108,
            v109[0],
            v110[0],
            v111[0],
            v112[0],
            v113[0],
            v114[0],
            v115[0],
            ptr);
    v108 = v22;
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    sub_399450(*(__int64 *)v112, *(__int64 *)v107);
    if ( (unsigned __int8)sub_1374270(**(_QWORD **)v109, v108) )
      break;
    v17 = (unsigned int)(v17 + 1);
    sub_3993F0(v18, v19);
    v23 = *v16;
    if ( !*v16 )
      goto LABEL_76;
    *(_QWORD *)v112 = v108;
    if ( (unsigned int)v17 >= *(_DWORD *)(v23 - 4) )
      goto LABEL_11;
  }
  v24 = *(_QWORD *)(*v16 + 8 * v17);
  sub_3993F0(v18, v19);
  if ( !v24 )
  {
LABEL_76:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_399470(*(__int64 **)v110, "could not expand BMC rule");
    v92 = *(__m128i **)v110;
    v93 = *(__m128i **)v110;
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v93);
    sub_233E40((__int64)v92);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v25 = *a2;
  sub_62A000(*(_QWORD *)(*a2 + 352LL), v24);
  v26 = *(_QWORD **)(v25 + 360);
  if ( v26 )
  {
    v27 = *((_DWORD *)v26 - 1);
    if ( v27 == *((_DWORD *)v26 - 2) )
    {
      v46 = (3 * v27 + 1) >> 1;
      v47 = 8 * v46 + 8;
      if ( 8 * v27 + 8 >= (unsigned int)v47 || v27 >= v46 )
      {
        v104 = (char **)__cxa_allocate_exception(0x28u);
        sub_399470(*(__int64 **)v110, "Overflow encountered when expanding vector");
        v105 = *(__m128i **)v110;
        v106 = *(__m128i **)v110;
        *v104 = (char *)off_1C63128;
        sub_2333C0(v104 + 1, v106);
        sub_233E40((__int64)v105);
        __cxa_throw(v104, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v48 = (unsigned int *)sub_186B300(v26 - 1, v47);
      v49 = v48[1];
      v26 = v48 + 2;
      *(_QWORD *)(v25 + 360) = v48 + 2;
      *v48 = v46;
      LODWORD(v48) = v49;
      v30 = &v26[v49];
      v29 = (_DWORD)v48 + 1;
    }
    else
    {
      v28 = v27;
      v29 = v27 + 1;
      v30 = &v26[v28];
    }
  }
  else
  {
    v100 = (_QWORD *)sub_186B270(0x18u);
    v26 = v100 + 1;
    *v100 = 2;
    v29 = 1;
    *(_QWORD *)(v25 + 360) = v26;
    v30 = v26;
  }
  *v30 = v24;
  v31 = *(_BYTE **)v114;
  v32 = (char *)v24;
  *((_DWORD *)v26 - 1) = v29;
  sub_62E310(v31, v24, &v127);
  if ( (unsigned int)sub_180B130(v31) )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      v88 = sub_180B150(v31, v24);
      sub_1606360(*(_QWORD *)v110, v127, a2[1], 0, 0, 0);
      sub_160E8B0(v88, *(_QWORD *)v110);
      v32 = "\n";
      std::__ostream_insert<char,std::char_traits<char>>();
      v31 = v138;
      sub_18572D0(v138);
      sub_186A500(v138, "\n");
    }
    else
    {
      v94 = sub_180B150(v31, v24);
      sub_1606360(*(_QWORD *)v110, v127, a2[1], 0, 0, 0);
      sub_160E8B0(v94, *(_QWORD *)v110);
      v32 = "\n";
      std::__ostream_insert<char,std::char_traits<char>>();
      v31 = v138;
      sub_18572D0(v138);
    }
  }
  v33 = *(_QWORD *)(v24 + 48);
  if ( !v33 )
  {
    sub_180B130(v31);
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      v89 = sub_180B150(v31, v32);
      std::__ostream_insert<char,std::char_traits<char>>();
      v90 = *(_QWORD *)(*a2 + 48LL);
      sub_62AAE0(v24, v90, v89, 0);
      sub_186A500(v24, v90);
    }
    else
    {
      v95 = sub_180B150(v31, v32);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_62AAE0(v24, *(_QWORD *)(*a2 + 48LL), v95, 0);
    }
    v96 = (char **)__cxa_allocate_exception(0x28u);
    sub_399470(*(__int64 **)v110, "no proof associated with rule");
    v97 = *(__m128i **)v110;
    v98 = *(__m128i **)v110;
    *v96 = (char *)off_1C63128;
    sub_2333C0(v96 + 1, v98);
    sub_233E40((__int64)v97);
    __cxa_throw(v96, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  *(_QWORD *)v134 = *(_QWORD *)(v24 + 48);
  ++*(_DWORD *)(v33 + 8);
  *(_QWORD *)v131 = 0;
  v130 = *(_QWORD *)v107;
  *(_QWORD *)v114 = v134;
  v121 = (unsigned int **)v131;
  sub_399A70((__int64 *)v131, v134);
  v34 = a2[1];
  v35 = *(_QWORD **)v131;
  v124 = 0;
  v117 = v130;
  HIDWORD(ptr) = *(_DWORD *)(v24 + 68);
  sub_62B3F0(v24, v34, (unsigned int)&v124, v36, v37, v38);
  LODWORD(v34) = *(_DWORD *)(*(_QWORD *)v111 + 24LL);
  v118 = v129;
  sub_3A6490((__int64)v129, v34, *(__int64 **)v115);
  v120 = (__int64 *)&v132;
  sub_39CDA0(&v132, (__int64)a2, v24, &v124, (__int64)v129);
  v39 = *(_QWORD *)v133;
  if ( *(_QWORD *)v133 && *(_DWORD *)(*(_QWORD *)v133 - 4LL) )
  {
    v40 = v132;
    v41 = 0;
    do
    {
      sub_1374250(*(_QWORD *)v110, **(_QWORD **)v109, *(_QWORD *)(v39 + 8 * v41));
      v44 = *(_QWORD *)(v39 + 8 * v41);
      if ( v44 )
      {
        v45 = (*(_DWORD *)(v44 + 8))-- == 1;
        if ( v45 )
          sub_15D7BC0(v40, v44);
      }
      v42 = *(_QWORD *)v136;
      v43 = v137;
      *(_QWORD *)v136 = 0;
      *(_QWORD *)(v39 + 8 * v41++) = v42;
      sub_399450(*(__int64 *)v136, v43);
    }
    while ( (unsigned int)v41 < *(_DWORD *)(v39 - 4) );
    goto LABEL_29;
  }
  if ( HIDWORD(ptr) )
  {
LABEL_29:
    v50 = a2[1];
    *(_QWORD *)v125 = 0;
    *(_QWORD *)v126 = 0;
    sub_399270(*(__int64 *)v110, v50, (__int64)v139);
    v139[8] = 0;
    *(_QWORD *)v136 = &off_1C4CA80;
    *(_QWORD *)v119 = v126;
    sub_399980((__int64 *)v126, v120);
    if ( HIDWORD(ptr) )
    {
      v52 = *(_QWORD *)(v24 + 80);
      v53 = (_QWORD *)(v24 + 80);
      v115[0] = 0;
      v54 = 0;
      v55 = v52 & 0xFFFFFFFFFFFFFFF8LL;
      LODWORD(ptr) = (_DWORD)ptr - 1;
      v56 = *(_QWORD *)(v55 + 16);
      if ( !v39 )
        goto LABEL_41;
LABEL_31:
      for ( i = *(_DWORD *)(v39 - 4); ; i = 0 )
      {
        sub_157BE40(
          v114[0],
          v110[0],
          v55,
          i,
          v39,
          v51,
          v107[0],
          v108,
          v109[0],
          v110[0],
          v111[0],
          *(int *)v112,
          *(__int64 *)v113,
          *(void **)v114);
        v58 = *(_QWORD *)v134;
        *(_QWORD *)v134 = v54;
        *(_QWORD *)v112 = v58;
        sub_399450(v54, v135);
        sub_3A6C00(*(_QWORD *)v114, a2, *(_QWORD *)v109, v56, *(_QWORD *)v112, (unsigned int)ptr);
        v59 = *(_QWORD *)v134;
        if ( !v35 || (v60 = *((_DWORD *)v35 - 1), v60 == *((_DWORD *)v35 - 2)) )
        {
          *(_QWORD *)v131 = v35;
          v130 = v117;
          sub_3A6B20(v121);
          v35 = *(_QWORD **)v131;
          v117 = v130;
          v60 = *(_DWORD *)(*(_QWORD *)v131 - 4LL);
        }
        v61 = *(_QWORD **)v125;
        ++v115[0];
        v35[v60] = v59;
        *((_DWORD *)v35 - 1) = v60 + 1;
        if ( v61 )
        {
          v62 = *((unsigned int *)v61 - 1);
          if ( (_DWORD)v62 == *((_DWORD *)v61 - 2) )
          {
            v70 = (unsigned int)(3 * v62 + 1) >> 1;
            v71 = 8 * v70 + 8;
            if ( 8 * (int)v62 + 8 >= (unsigned int)v71 || (unsigned int)v62 >= v70 )
            {
              v101 = (char **)__cxa_allocate_exception(0x28u);
              sub_399470(*(__int64 **)v114, "Overflow encountered when expanding vector");
              v102 = *(void **)v114;
              v103 = *(_QWORD **)v114;
              *v101 = (char *)off_1C63128;
              sub_2333C0(v101 + 1, v103);
              sub_233E40((__int64)v102);
              __cxa_throw(v101, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v72 = sub_186B270(v71);
            v73 = *(_QWORD **)v125;
            v74 = (_DWORD *)v72;
            v61 = (_QWORD *)(v72 + 8);
            if ( *(_QWORD *)v125 )
            {
              v75 = *(unsigned int *)(*(_QWORD *)v125 - 4LL);
              *(_DWORD *)(v72 + 4) = v75;
              v76 = 0;
              v77 = 8 * v75;
              if ( v77 )
              {
                do
                {
                  *(_QWORD *)&v74[v76 / 4 + 2] = v73[v76 / 8];
                  v76 += 8LL;
                }
                while ( v77 != v76 );
              }
              v122 = v74;
              sub_186B220(v73 - 1);
              v74 = v122;
              v63 = (int *)&v61[v122[1]];
            }
            else
            {
              *(_DWORD *)(v72 + 4) = 0;
              v63 = (int *)(v72 + 8);
            }
            *(_QWORD *)v125 = v61;
            *v74 = v70;
          }
          else
          {
            v63 = (int *)&v61[v62];
          }
        }
        else
        {
          v99 = (_QWORD *)sub_186B270(0x18u);
          v61 = v99 + 1;
          *v99 = 2;
          *(_QWORD *)v125 = v99 + 1;
          v63 = (int *)(v99 + 1);
        }
        v64 = v115[0];
        v65 = a2[1];
        v63[1] = 0;
        v66 = *(_QWORD *)v126;
        *v63 = v64;
        ++*((_DWORD *)v61 - 1);
        v135 = 0;
        if ( !v66 || (v67 = *(_DWORD *)(v66 - 4), v67 == *(_DWORD *)(v66 - 8)) )
        {
          sub_39BC80(*(__int64 **)v119);
          v66 = *(_QWORD *)v126;
          v67 = *(_DWORD *)(*(_QWORD *)v126 - 4LL);
        }
        v68 = *(__int64 **)v114;
        ++v53;
        v69 = (_QWORD *)(v66 + 16LL * v67);
        *v69 = v65;
        v69[1] = 0;
        *(_DWORD *)(v66 - 4) = v67 + 1;
        *(_QWORD *)v134 = v65;
        sub_2334C0(v68);
        if ( v115[0] == HIDWORD(ptr) )
          break;
        v54 = *(_QWORD *)v112;
        v55 = *v53 & 0xFFFFFFFFFFFFFFF8LL;
        v56 = *(_QWORD *)(v55 + 16);
        if ( v39 )
          goto LABEL_31;
LABEL_41:
        ;
      }
      v84 = HIDWORD(ptr);
    }
    else
    {
      *(_QWORD *)v112 = 0;
      v84 = 0;
    }
    v85 = sub_15E9440(
            a2[1],
            v84 + 1,
            (int)v35,
            v111[0],
            (int)v125,
            v119[0],
            v107[0],
            v108,
            v109[0],
            *(void **)v110,
            v111[0],
            *(int *)v112,
            v113[0],
            v114[0],
            v115[0],
            (__int64)ptr,
            v117,
            (int)v118,
            v119[0],
            (int)v120,
            (__int64)v121,
            (__int64)v122,
            v123,
            v124,
            v125[0]);
    v86 = _mm_loadh_ps((const double *)v107);
    if ( v85 )
      ++*(_DWORD *)(v85 + 8);
    v87 = *(__m128i **)v110;
    **(_OWORD **)v113 = v86;
    *(_QWORD *)v136 = &off_1C4CA80;
    sub_267D20(v87);
    sub_2D1E00(*(__int64 ***)v119);
    if ( *(_QWORD *)v125 )
      sub_186B220((void *)(*(_QWORD *)v125 - 8LL));
    goto LABEL_55;
  }
  v78 = _mm_loadh_ps((const double *)v107);
  if ( *v35 )
    ++*(_DWORD *)(*v35 + 8LL);
  *(_QWORD *)v112 = 0;
  **(_OWORD **)v113 = v78;
LABEL_55:
  sub_2334C0(v120);
  if ( v124 )
    sub_186B220((void *)(v124 - 8));
  sub_399410(0, *(__int64 *)v107);
  if ( v35 )
  {
    v79 = v117;
    v80 = v35;
    v81 = (unsigned __int64)&v35[*((unsigned int *)v35 - 1)];
    if ( (unsigned __int64)v35 < v81 )
    {
      do
      {
        while ( 1 )
        {
          v82 = *v80;
          if ( *v80 )
          {
            v45 = (*(_DWORD *)(v82 + 8))-- == 1;
            if ( v45 )
              break;
          }
          if ( (unsigned __int64)++v80 >= v81 )
            goto LABEL_64;
        }
        ++v80;
        sub_15D7BC0(v79, v82);
      }
      while ( (unsigned __int64)v80 < v81 );
    }
LABEL_64:
    sub_186B220(v35 - 1);
  }
  sub_2334C0(v118);
  v83 = *(_QWORD *)v107;
  sub_399450(*(__int64 *)v112, *(__int64 *)v107);
  sub_399450(v127, v128);
  sub_399450(v108, v83);
  return *(_QWORD *)v113;
}

