void __fastcall sub_11D4F40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        _QWORD *a6,
        double a7,
        double a8)
{
  __int64 *v9; // r14
  void **p_ptr; // rbp
  void **v11; // r12
  __int64 v12; // rdx
  char *v13; // r13
  bool v14; // zf
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  char **v18; // r13
  __m128 v19; // xmm0
  char **v20; // r15
  char *v21; // rbx
  char *v22; // r13
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  char *v33; // r15
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // r13
  _QWORD *v39; // rdx
  _QWORD *v40; // rbx
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  _QWORD *v44; // rax
  _QWORD *v45; // rbx
  _QWORD *v46; // r13
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  _QWORD *v53; // rax
  _QWORD *v54; // rbx
  _QWORD *v55; // r13
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  char **v59; // rdx
  char **v60; // r15
  char *v61; // rbx
  char **v62; // r13
  char *v63; // rax
  void **v64; // rax
  char *v65; // rbp
  char **v66; // rbx
  void **v67; // r15
  void **v68; // rax
  int v69; // eax
  void **v70; // rax
  _QWORD *v71; // rdx
  void **v72; // rcx
  _QWORD *v73; // rbp
  _QWORD *v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rdi
  char v77; // al
  __int64 v78; // rax
  __int64 v79; // r13
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rbx
  const __m128i *v83; // r13
  __int64 v84; // r14
  void *v85; // r15
  __int64 v86; // rdx
  __int64 v87; // rsi
  int v88; // eax
  __int64 v89; // rcx
  void *v90; // rsi
  _QWORD *v91; // rbx
  void (__fastcall *v92)(_QWORD *); // rax
  __int64 v93; // r13
  __int64 v94; // r12
  void *v95; // rdi
  _QWORD *v96; // rdi
  _QWORD *v97; // rdi
  void **v98; // r13
  void **v99; // r12
  void *v100; // rdi
  _QWORD *v101; // rdi
  __int64 v102; // rax
  __int64 v103; // rcx
  unsigned __int64 v104; // rdx
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rcx
  unsigned __int64 v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rcx
  unsigned __int64 v111; // rdx
  _QWORD *v112; // r13
  _QWORD *v113; // rbx
  __int64 v114; // rax
  unsigned __int64 v115; // rbx
  __int64 v116; // rdi
  _QWORD *v117; // r13
  _QWORD *v118; // rbx
  _QWORD *v119; // r13
  __int64 v120; // rax
  __int64 v121; // rax
  unsigned __int64 v122; // rdx
  _QWORD *v128; // [rsp+30h] [rbp-128h] BYREF
  char *v129; // [rsp+38h] [rbp-120h]
  __m128i *v130; // [rsp+40h] [rbp-118h]
  _QWORD *v131; // [rsp+48h] [rbp-110h]
  __m128i v132[2]; // [rsp+50h] [rbp-108h] BYREF
  void *v133[2]; // [rsp+70h] [rbp-E8h] BYREF
  _QWORD v134[2]; // [rsp+80h] [rbp-D8h] BYREF
  void *ptr; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v136; // [rsp+98h] [rbp-C0h]
  _BYTE v137[184]; // [rsp+A0h] [rbp-B8h] BYREF

  v9 = *(__int64 **)(a1 + 24);
  p_ptr = &ptr;
  v11 = v133;
  v12 = v9[1];
  v13 = v137;
  v14 = *(_QWORD *)(v12 + 496) == 0;
  ptr = v137;
  v136 = 0x1000000000LL;
  if ( !v14 )
  {
    sub_C05100((__int64)v133, "--sysroot=", v12 + 488);
    v102 = (*(__int64 (__fastcall **)(_QWORD *, void *, void *))(*a6 + 16LL))(a6, v133[0], v133[1]);
    v103 = (unsigned int)v136;
    v104 = (unsigned int)v136 + 1LL;
    if ( v104 > HIDWORD(v136) )
    {
      v128 = (_QWORD *)v102;
      sub_2237220(&ptr, v137, v104, 8);
      v103 = (unsigned int)v136;
      v102 = (__int64)v128;
    }
    *((_QWORD *)ptr + v103) = v102;
    v105 = (unsigned int)(v136 + 1);
    LODWORD(v136) = v136 + 1;
    if ( v133[0] != v134 )
    {
      operator delete(v133[0]);
      v105 = (unsigned int)v136;
    }
    if ( v105 + 1 > (unsigned __int64)HIDWORD(v136) )
    {
      sub_2237220(&ptr, v137, v105 + 1, 8);
      v13 = (char *)ptr + 8 * (unsigned int)v136;
    }
    else
    {
      v13 = (char *)ptr + 8 * v105;
    }
  }
  *(_QWORD *)v13 = "-m";
  LODWORD(v136) = v136 + 1;
  v15 = (unsigned int)v136;
  if ( (unsigned __int64)(unsigned int)v136 + 1 > HIDWORD(v136) )
  {
    sub_2237220(&ptr, v137, (unsigned int)v136 + 1LL, 8);
    v15 = (unsigned int)v136;
  }
  v130 = v132;
  *((_QWORD *)ptr + v15) = "cskyelf";
  LODWORD(v136) = v136 + 1;
  sub_1132E50(v132, *(_QWORD *)(a1 + 24), nullptr);
  v133[0] = (void *)0xBEB00000BF0LL;
  v16 = sub_21B6DA0(a6, v133, 2);
  v17 = a6[1];
  v134[0] = 0xBEB00000BF0LL;
  v18 = (char **)(v17 + 8 * HIDWORD(v16));
  v128 = v18;
  v19 = _mm_loadh_ps((const double *)&v128);
  *(__m128 *)v133 = v19;
  if ( (char **)(v17 + 8LL * (unsigned int)v16) == v18 )
    goto LABEL_11;
  v128 = a6;
  v20 = (char **)(v17 + 8LL * (unsigned int)v16);
  while ( 1 )
  {
    v21 = *v20;
    if ( *v20 )
    {
      if ( (unsigned __int8)sub_21B9810(*v20, 3056) || (unsigned __int8)sub_21B9810(v21, 3051) )
        break;
    }
    v133[0] = ++v20;
    if ( v18 == v20 )
    {
      a6 = v128;
      goto LABEL_11;
    }
  }
  a6 = v128;
  v59 = v20;
  v128 = v18;
  v134[0] = 0xBEB00000BF0LL;
  v19 = _mm_loadh_ps((const double *)&v128);
  *(__m128 *)v133 = v19;
  if ( v18 == v20 )
  {
LABEL_11:
    v22 = (char *)"crtbegin.o";
    v23 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(*v9 + 600))(v9, a6);
    v129 = "crtend.o";
    if ( v23 != 1 )
    {
      v22 = (char *)sub_112D2D0((__int64)v9, (__int64)a6, (__int64)"crtbegin", 8, 0, 0);
      v129 = (char *)sub_112D2D0((__int64)v9, (__int64)a6, (__int64)"crtend", 6, 0, 0);
    }
    sub_112D4E0(v133, (__int64)v9, "crt0.o");
    v24 = (*(__int64 (__fastcall **)(_QWORD *, void *, void *))(*a6 + 16LL))(a6, v133[0], v133[1]);
    v25 = (unsigned int)v136;
    v26 = (unsigned int)v136 + 1LL;
    if ( v26 > HIDWORD(v136) )
    {
      v128 = (_QWORD *)v24;
      sub_2237220(&ptr, v137, v26, 8);
      v25 = (unsigned int)v136;
      v24 = (__int64)v128;
    }
    *((_QWORD *)ptr + v25) = v24;
    LODWORD(v136) = v136 + 1;
    if ( v133[0] != v134 )
      operator delete(v133[0]);
    sub_112D4E0(v133, (__int64)v9, "crti.o");
    v27 = (*(__int64 (__fastcall **)(_QWORD *, void *, void *))(*a6 + 16LL))(a6, v133[0], v133[1]);
    v28 = (unsigned int)v136;
    v29 = (unsigned int)v136 + 1LL;
    if ( v29 > HIDWORD(v136) )
    {
      v128 = (_QWORD *)v27;
      sub_2237220(&ptr, v137, v29, 8);
      v28 = (unsigned int)v136;
      v27 = (__int64)v128;
    }
    *((_QWORD *)ptr + v28) = v27;
    LODWORD(v136) = v136 + 1;
    if ( v133[0] != v134 )
      operator delete(v133[0]);
    sub_112D4E0(v133, (__int64)v9, v22);
    v30 = (*(__int64 (__fastcall **)(_QWORD *, void *, void *))(*a6 + 16LL))(a6, v133[0], v133[1]);
    v31 = (unsigned int)v136;
    v32 = (unsigned int)v136 + 1LL;
    if ( v32 > HIDWORD(v136) )
    {
      v128 = (_QWORD *)v30;
      sub_2237220(&ptr, v137, v32, 8);
      v31 = (unsigned int)v136;
      v30 = (__int64)v128;
    }
    *((_QWORD *)ptr + v31) = v30;
    LODWORD(v136) = v136 + 1;
    if ( v133[0] != v134 )
      operator delete(v133[0]);
    v33 = nullptr;
  }
  else
  {
    v128 = a6;
    v60 = v18;
    do
    {
      v61 = *v59;
      v62 = v59 + 1;
      v63 = *((char **)*v59 + 2);
      if ( !v63 )
        v63 = *v59;
      v63[44] |= 1u;
      v133[0] = v59 + 1;
      if ( v62 == v60 )
        break;
      v64 = p_ptr;
      v65 = v61;
      v66 = v60;
      v67 = v64;
      while ( 1 )
      {
        if ( *v62 )
        {
          v129 = *v62;
          if ( (unsigned __int8)sub_21B9810(v129, 3056) || (unsigned __int8)sub_21B9810(v129, 3051) )
            break;
        }
        v133[0] = ++v62;
        if ( v66 == v62 )
        {
          v68 = v67;
          a6 = v128;
          v33 = v65;
          p_ptr = v68;
          goto LABEL_67;
        }
      }
      v59 = (char **)v133[0];
      v70 = v67;
      v60 = v66;
      v61 = v65;
      p_ptr = v70;
    }
    while ( v60 != v133[0] );
    v33 = v61;
    a6 = v128;
LABEL_67:
    v69 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(*v9 + 600))(v9, a6);
    v129 = "crtend.o";
    if ( v69 != 1 )
    {
      sub_112D2D0((__int64)v9, (__int64)a6, (__int64)"crtbegin", 8, 0, 0);
      v129 = (char *)sub_112D2D0((__int64)v9, (__int64)a6, (__int64)"crtend", 6, 0, 0);
    }
  }
  sub_21B7F70(a6, p_ptr, 2204);
  sub_112D940((__int64)v9, (__int64)a6, (__int64)p_ptr, v34, v35);
  v133[0] = (void *)0xCF90000000FLL;
  v133[1] = (void *)0xCA400000D17LL;
  sub_21B6650(a6, p_ptr, v133, 4);
  sub_11C3660((__int64)v9, a5, (__int64)a6, (__int64)p_ptr, a3);
  LODWORD(v133[0]) = 3056;
  v36 = sub_21B6DA0(a6, v133, 1);
  v37 = a6[1];
  v38 = (_QWORD *)(v37 + 8LL * (unsigned int)v36);
  v39 = (_QWORD *)(v37 + 8 * HIDWORD(v36));
  if ( v38 == v39 )
    goto LABEL_32;
  v128 = a6;
  v40 = v39;
  while ( !*v38 || !(unsigned __int8)sub_21B9810(*v38, 3056) )
  {
    if ( v40 == ++v38 )
    {
      a6 = v128;
      goto LABEL_32;
    }
  }
  v71 = v40;
  a6 = v128;
  if ( v71 == v38 )
  {
LABEL_32:
    LODWORD(v133[0]) = 3037;
    v41 = sub_21B6DA0(a6, v133, 1);
    v42 = a6[1];
    v43 = (unsigned int)v41;
    v44 = (_QWORD *)(v42 + 8 * HIDWORD(v41));
    v131 = v44;
    if ( (_QWORD *)(v42 + 8 * v43) == v44 )
      goto LABEL_38;
    v128 = a6;
    v45 = (_QWORD *)(v42 + 8 * v43);
    v46 = v44;
    while ( !*v45 || !(unsigned __int8)sub_21B9810(*v45, 3037) )
    {
      if ( v46 == ++v45 )
      {
        a6 = v128;
        goto LABEL_38;
      }
    }
    v112 = v45;
    a6 = v128;
    if ( v112 == v131 )
    {
LABEL_38:
      if ( sub_112D7B0((__int64)v9, (__int64)a6) )
        (*(void (__fastcall **)(__int64 *, _QWORD *, void **))(*v9 + 640))(v9, a6, p_ptr);
      v47 = (unsigned int)v136;
      v48 = (unsigned int)v136 + 1LL;
      if ( v48 > HIDWORD(v136) )
      {
        sub_2237220(p_ptr, p_ptr + 2, v48, 8);
        v47 = (unsigned int)v136;
      }
      *((_QWORD *)ptr + v47) = "--start-group";
      LODWORD(v136) = v136 + 1;
      v49 = (unsigned int)v136;
      if ( (unsigned __int64)(unsigned int)v136 + 1 > HIDWORD(v136) )
      {
        sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v136 + 1LL, 8);
        v49 = (unsigned int)v136;
      }
      *((_QWORD *)ptr + v49) = "-lc";
      LODWORD(v136) = v136 + 1;
      LODWORD(v133[0]) = 2866;
      v50 = sub_21B6DA0(a6, v133, 1);
      v51 = a6[1];
      v52 = (unsigned int)v50;
      v53 = (_QWORD *)(v51 + 8 * HIDWORD(v50));
      v131 = v53;
      if ( (_QWORD *)(v51 + 8 * v52) == v53 )
        goto LABEL_50;
      v128 = a6;
      v54 = (_QWORD *)(v51 + 8 * v52);
      v55 = v53;
      while ( !*v54 || !(unsigned __int8)sub_21B9810(*v54, 2866) )
      {
        if ( v55 == ++v54 )
        {
          a6 = v128;
          goto LABEL_50;
        }
      }
      v117 = v54;
      a6 = v128;
      if ( v131 == v117 )
      {
LABEL_50:
        v56 = (unsigned int)v136;
        v57 = (unsigned int)v136 + 1LL;
        if ( HIDWORD(v136) < v57 )
        {
          sub_2237220(p_ptr, p_ptr + 2, v57, 8);
          v56 = (unsigned int)v136;
        }
        *((_QWORD *)ptr + v56) = "-lnosys";
        v58 = (unsigned int)(v136 + 1);
        LODWORD(v136) = v136 + 1;
      }
      else
      {
        v118 = v117;
        v119 = v131;
        do
        {
          v120 = *(_QWORD *)(*v118 + 16LL);
          if ( !v120 )
            v120 = *v118;
          ++v118;
          *(_BYTE *)(v120 + 44) |= 1u;
          if ( v118 == v119 )
            break;
          while ( !*v118 || !(unsigned __int8)sub_21B9810(*v118, 2866) )
          {
            if ( v119 == ++v118 )
              goto LABEL_165;
          }
        }
        while ( v118 != v119 );
LABEL_165:
        v121 = (unsigned int)v136;
        a6 = v128;
        v122 = (unsigned int)v136 + 1LL;
        if ( HIDWORD(v136) < v122 )
        {
          sub_2237220(p_ptr, p_ptr + 2, v122, 8);
          v121 = (unsigned int)v136;
        }
        *((_QWORD *)ptr + v121) = "-lsemi";
        v58 = (unsigned int)(v136 + 1);
        LODWORD(v136) = v136 + 1;
      }
      if ( v58 + 1 > (unsigned __int64)HIDWORD(v136) )
      {
        sub_2237220(p_ptr, p_ptr + 2, v58 + 1, 8);
        v58 = (unsigned int)v136;
      }
      *((_QWORD *)ptr + v58) = "--end-group";
      LODWORD(v136) = v136 + 1;
      sub_11BEF20((__int64)v9, v9[1], (__int64)p_ptr, (__int64)a6);
    }
    else
    {
      v113 = v131;
      do
      {
        v114 = *(_QWORD *)(*v112 + 16LL);
        if ( !v114 )
          v114 = *v112;
        ++v112;
        *(_BYTE *)(v114 + 44) |= 1u;
        if ( v112 == v113 )
          break;
        while ( !*v112 || !(unsigned __int8)sub_21B9810(*v112, 3037) )
        {
          if ( v113 == ++v112 )
            goto LABEL_146;
        }
      }
      while ( v112 != v113 );
LABEL_146:
      a6 = v128;
    }
  }
  else
  {
    v72 = p_ptr;
    v73 = v128;
    v74 = v71;
    do
    {
      v75 = *v38;
      if ( *(_QWORD *)(*v38 + 16LL) )
        v75 = *(_QWORD *)(*v38 + 16LL);
      ++v38;
      *(_BYTE *)(v75 + 44) |= 1u;
      if ( v38 == v74 )
        break;
      while ( 1 )
      {
        v76 = *v38;
        if ( *v38 )
        {
          v128 = v72;
          v77 = sub_21B9810(v76, 3056);
          v72 = (void **)v128;
          if ( v77 )
            break;
        }
        if ( v74 == ++v38 )
          goto LABEL_79;
      }
    }
    while ( v38 != v74 );
LABEL_79:
    a6 = v73;
    p_ptr = v72;
  }
  if ( v33 )
    goto LABEL_81;
  sub_112D4E0(v133, (__int64)v9, v129);
  v106 = (*(__int64 (__fastcall **)(_QWORD *, void *, void *))(*a6 + 16LL))(a6, v133[0], v133[1]);
  v107 = (unsigned int)v136;
  v108 = (unsigned int)v136 + 1LL;
  if ( v108 > HIDWORD(v136) )
  {
    v128 = (_QWORD *)v106;
    sub_2237220(p_ptr, p_ptr + 2, v108, 8);
    v107 = (unsigned int)v136;
    v106 = (__int64)v128;
  }
  *((_QWORD *)ptr + v107) = v106;
  LODWORD(v136) = v136 + 1;
  if ( v133[0] != v134 )
    operator delete(v133[0]);
  sub_112D4E0(v133, (__int64)v9, "crtn.o");
  v109 = (*(__int64 (__fastcall **)(_QWORD *, void *, void *))(*a6 + 16LL))(a6, v133[0], v133[1]);
  v110 = (unsigned int)v136;
  v111 = (unsigned int)v136 + 1LL;
  if ( v111 > HIDWORD(v136) )
  {
    v128 = (_QWORD *)v109;
    sub_2237220(p_ptr, p_ptr + 2, v111, 8);
    v110 = (unsigned int)v136;
    v109 = (__int64)v128;
  }
  *((_QWORD *)ptr + v110) = v109;
  v78 = (unsigned int)(v136 + 1);
  LODWORD(v136) = v136 + 1;
  if ( v133[0] != v134 )
  {
    operator delete(v133[0]);
LABEL_81:
    v78 = (unsigned int)v136;
  }
  if ( v78 + 1 > (unsigned __int64)HIDWORD(v136) )
  {
    sub_2237220(p_ptr, p_ptr + 2, v78 + 1, 8);
    v78 = (unsigned int)v136;
  }
  *((_QWORD *)ptr + v78) = "-o";
  v79 = *a4;
  LODWORD(v136) = v136 + 1;
  v80 = (unsigned int)v136;
  if ( (unsigned __int64)(unsigned int)v136 + 1 > HIDWORD(v136) )
  {
    sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v136 + 1LL, 8);
    v80 = (unsigned int)v136;
  }
  *((_QWORD *)ptr + v80) = v79;
  v81 = *a6;
  LODWORD(v136) = v136 + 1;
  v82 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(v81 + 16))(
          a6,
          v132[0].m128i_i64[0],
          v132[0].m128i_i64[1]);
  v83 = *(const __m128i **)a5;
  v84 = *(unsigned int *)(a5 + 8);
  v85 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v85, a3, a1, 0x100000000LL, (__int64)"@", v82, (__int64)p_ptr, v83, v84, (__int64)a4, 1, 0);
  v133[0] = v85;
  v86 = *(unsigned int *)(a2 + 160);
  v87 = v86 + 1;
  v88 = *(_DWORD *)(a2 + 160);
  if ( v86 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 164) )
  {
    v115 = *(_QWORD *)(a2 + 152);
    v116 = a2 + 152;
    if ( v115 > (unsigned __int64)v133 )
    {
      sub_11673D0(v116, v87, v19, a8);
      v86 = *(unsigned int *)(a2 + 160);
      v89 = *(_QWORD *)(a2 + 152);
      v88 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      if ( (unsigned __int64)v133 < v115 + 8 * v86 )
      {
        sub_11673D0(v116, v87, v19, a8);
        v89 = *(_QWORD *)(a2 + 152);
        v86 = *(unsigned int *)(a2 + 160);
        v11 = (void **)((char *)v133 + v89 - v115);
      }
      else
      {
        sub_11673D0(v116, v87, v19, a8);
        v86 = *(unsigned int *)(a2 + 160);
        v89 = *(_QWORD *)(a2 + 152);
      }
      v88 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v89 = *(_QWORD *)(a2 + 152);
  }
  v90 = *v11;
  *v11 = nullptr;
  *(_QWORD *)(v89 + 8 * v86) = v90;
  v91 = v133[0];
  *(_DWORD *)(a2 + 160) = v88 + 1;
  if ( v91 )
  {
    v92 = *(void (__fastcall **)(_QWORD *))(*v91 + 8LL);
    if ( v92 == sub_10D4290 )
    {
      v93 = v91[58];
      v94 = v91[57];
      *v91 = &off_2BA8F30;
      if ( v93 != v94 )
      {
        do
        {
          if ( *(_BYTE *)(v94 + 32) && *(_QWORD *)v94 != v94 + 16 )
            operator delete(*(void **)v94);
          v94 += 40;
        }
        while ( v93 != v94 );
        v94 = v91[57];
      }
      if ( v94 )
        operator delete((void *)v94);
      v95 = (void *)v91[54];
      if ( v95 )
        operator delete(v95);
      v96 = (_QWORD *)v91[50];
      if ( v96 != v91 + 52 )
        operator delete(v96);
      v97 = (_QWORD *)v91[32];
      if ( v97 != v91 + 34 )
        free(v97);
      v98 = (void **)v91[29];
      v99 = (void **)v91[28];
      if ( v98 != v99 )
      {
        do
        {
          while ( *v99 != v99 + 2 )
          {
            operator delete(*v99);
            v99 += 4;
            if ( v98 == v99 )
            {
              v99 = (void **)v91[28];
              goto LABEL_108;
            }
          }
          v99 += 4;
        }
        while ( v98 != v99 );
        v99 = (void **)v91[28];
      }
LABEL_108:
      if ( v99 )
        operator delete(v99);
      v100 = (void *)v91[25];
      if ( v100 )
        operator delete(v100);
      v101 = (_QWORD *)v91[7];
      if ( v101 != v91 + 9 )
        free(v101);
      operator delete(v91, 0x208u);
    }
    else
    {
      v92(v91);
    }
  }
  if ( (__m128i *)v132[0].m128i_i64[0] != &v130[1] )
    operator delete((void *)v132[0].m128i_i64[0]);
  if ( ptr != p_ptr + 2 )
    free(ptr);
}
