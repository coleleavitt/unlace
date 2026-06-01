void __fastcall sub_1242CB0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const char **a5,
        __int64 a6,
        __m128 si128,
        double a8)
{
  size_t v10; // rsi
  const char *v11; // rbp
  _BYTE *v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // r12
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 *v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r14
  _QWORD *v21; // rax
  __int64 *p_ptr; // rbp
  __int64 v23; // r12
  const __m128i *v24; // r13
  __int64 v25; // r14
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rsi
  int v29; // eax
  __int64 v30; // rsi
  void **v31; // rcx
  void *v32; // rdi
  _QWORD *v33; // r14
  void (__fastcall *v34)(_QWORD *); // rax
  __int64 v35; // r13
  __int64 v36; // r12
  void *v37; // rdi
  _QWORD *v38; // rdi
  _QWORD *v39; // rdi
  void **v40; // r12
  void **v41; // r13
  void *v42; // rdi
  _QWORD *v43; // rdi
  __int64 *v44; // r12
  void *v45; // rdx
  _BYTE *v46; // r14
  void *v47; // r13
  __int64 v48; // rdx
  void *v49; // r13
  const __m128i *v50; // r13
  __int64 v51; // r14
  void *v52; // r15
  __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  __int64 v55; // rsi
  int v56; // eax
  __int64 v57; // rsi
  void **p_src; // rcx
  void *v59; // rdi
  _QWORD *v60; // r13
  void (__fastcall *v61)(_QWORD *); // rdx
  __int64 v62; // r15
  __int64 v63; // r14
  void *v64; // rdi
  _QWORD *v65; // rdi
  _QWORD *v66; // rdi
  void **v67; // r14
  void **v68; // r15
  void *v69; // rdi
  _QWORD *v70; // rdi
  unsigned __int8 *v71; // r12
  _QWORD *v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rax
  void **v76; // r13
  void **v77; // rdi
  void *v78; // rax
  void **v79; // r12
  __int64 v80; // rax
  void **v81; // r14
  void **v82; // r13
  void **v83; // rdi
  void **v84; // rdi
  void **v85; // r14
  void **v86; // r13
  __int64 v87; // rax
  unsigned __int64 v88; // rdx
  const void *v89; // r14
  size_t v90; // r13
  __m128 v91; // xmm0
  char *v92; // rdi
  __int64 v93; // rax
  void *v94; // rdi
  __int64 v95; // rax
  unsigned __int64 v96; // r12
  __int64 v97; // rdi
  size_t v98; // rdx
  unsigned __int64 v99; // r14
  __int64 v100; // rdx
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // r13
  __int64 v108; // rbx
  __int64 v109; // rbp
  void *v110; // rdi
  double v112[2]; // [rsp+20h] [rbp-2A8h] BYREF
  void *v113; // [rsp+30h] [rbp-298h]
  __int64 v114; // [rsp+38h] [rbp-290h]
  const char **v115; // [rsp+40h] [rbp-288h]
  const char *v116; // [rsp+48h] [rbp-280h]
  void *v117; // [rsp+50h] [rbp-278h]
  __int64 v118; // [rsp+58h] [rbp-270h]
  void **v119; // [rsp+60h] [rbp-268h]
  void *v120; // [rsp+68h] [rbp-260h]
  void **v121; // [rsp+70h] [rbp-258h]
  _QWORD *v122; // [rsp+78h] [rbp-250h]
  void *v123; // [rsp+80h] [rbp-248h] BYREF
  __int64 v124; // [rsp+88h] [rbp-240h]
  __int64 v125; // [rsp+90h] [rbp-238h] BYREF
  _QWORD v126[4]; // [rsp+A0h] [rbp-228h] BYREF
  __int16 v127; // [rsp+C0h] [rbp-208h]
  _QWORD v128[4]; // [rsp+D0h] [rbp-1F8h] BYREF
  __int16 v129; // [rsp+F0h] [rbp-1D8h]
  void *v130; // [rsp+100h] [rbp-1C8h] BYREF
  __int64 v131; // [rsp+108h] [rbp-1C0h]
  _BYTE v132[16]; // [rsp+110h] [rbp-1B8h] BYREF
  __int16 v133; // [rsp+120h] [rbp-1A8h]
  void *src; // [rsp+130h] [rbp-198h] BYREF
  size_t n; // [rsp+138h] [rbp-190h]
  void *v136; // [rsp+140h] [rbp-188h] BYREF
  int v137; // [rsp+148h] [rbp-180h]
  const char *v138; // [rsp+150h] [rbp-178h]
  void *v139; // [rsp+160h] [rbp-168h] BYREF
  __int64 v140; // [rsp+168h] [rbp-160h]
  _QWORD v141[16]; // [rsp+170h] [rbp-158h] BYREF
  void *ptr; // [rsp+1F0h] [rbp-D8h] BYREF
  _BYTE v143[24]; // [rsp+1F8h] [rbp-D0h] BYREF
  void *v144; // [rsp+210h] [rbp-B8h]
  const char *v145; // [rsp+218h] [rbp-B0h]
  const char *v146; // [rsp+220h] [rbp-A8h]
  void *v147; // [rsp+228h] [rbp-A0h]
  __int16 v148; // [rsp+230h] [rbp-98h]

  v10 = 0;
  v11 = *a5;
  v114 = a3;
  *(_QWORD *)&v112[0] = a4;
  v115 = a5;
  if ( v11 )
    v10 = strlen(v11);
  v12 = (_BYTE *)sub_228AAA0(v11, v10, 0);
  v119 = &v123;
  v123 = &v125;
  sub_12405F0(&v123, v12, (__int64)&v12[v13]);
  src = &v136;
  sub_12406B0(&src, v123, (__int64)v123 + v124);
  if ( 0x7FFFFFFFFFFFFFFFLL - n <= 4 )
    goto LABEL_182;
  sub_9EE560(&src, "-link", 5u);
  v113 = (void *)sub_1240AD0((_QWORD *)a2, (unsigned __int8 *)src, (unsigned __int8 *)n, (__int64)"bc", 2);
  if ( src != &v136 )
    operator delete(src);
  v140 = 0x1000000000LL;
  v139 = v141;
  v14 = **(__int64 ***)&v112[0];
  v15 = **(_QWORD **)&v112[0] + 40LL * *(unsigned int *)(*(_QWORD *)&v112[0] + 8LL);
  if ( v15 == **(_QWORD **)&v112[0] )
  {
    v18 = 0;
    v116 = "-o";
  }
  else
  {
    v16 = *v14;
    v17 = v14 + 5;
    v18 = 1;
    LODWORD(v140) = 1;
    v141[0] = v16;
    v19 = 1;
    if ( (__int64 *)v15 == v17 )
    {
      v18 = 1;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v20 = *v17;
          if ( v18 + 1 > (unsigned __int64)HIDWORD(v140) )
            break;
          v17 += 5;
          *((_QWORD *)v139 + v19) = v20;
          v19 = (unsigned int)(v140 + 1);
          LODWORD(v140) = v19;
          v18 = (unsigned int)v19;
          if ( (__int64 *)v15 == v17 )
            goto LABEL_10;
        }
        v17 += 5;
        sub_2237220(&v139, v141, v18 + 1, 8);
        *((_QWORD *)v139 + (unsigned int)v140) = v20;
        v18 = (unsigned int)(v140 + 1);
        v19 = v18;
        LODWORD(v140) = v140 + 1;
      }
      while ( (__int64 *)v15 != v17 );
    }
LABEL_10:
    v116 = "-o";
    if ( HIDWORD(v140) < (unsigned __int64)(v18 + 2) )
    {
      sub_2237220(&v139, v141, v18 + 2, 8);
      v18 = (unsigned int)v140;
    }
  }
  v21 = v139;
  p_ptr = (__int64 *)&ptr;
  *((_QWORD *)v139 + v18) = v116;
  v21[v18 + 1] = v113;
  LODWORD(v140) = v140 + 2;
  sub_112D530(&ptr, *(_QWORD *)(a1 + 24), "llvm-link");
  v23 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)a6 + 16LL))(a6, ptr, *(_QWORD *)v143);
  if ( ptr != &v143[8] )
    operator delete(ptr);
  v118 = 1;
  v24 = **(const __m128i ***)&v112[0];
  v25 = *(unsigned int *)(*(_QWORD *)&v112[0] + 8LL);
  v117 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v117, v114, a1, 2, 0, v23, (__int64)&v139, v24, v25, (__int64)v115, 1, 0);
  v26 = *(unsigned int *)(a2 + 160);
  v27 = *(unsigned int *)(a2 + 164);
  ptr = v117;
  v28 = v26 + 1;
  v117 = (void *)(a2 + 152);
  v29 = v26;
  if ( v26 + 1 > v27 )
  {
    v96 = *(_QWORD *)(a2 + 152);
    v97 = a2 + 152;
    if ( v96 > (unsigned __int64)&ptr || (v97 = a2 + 152, (unsigned __int64)&ptr >= v96 + 8 * v26) )
    {
      sub_11673D0(v97, v28, si128, a8);
      v26 = *(unsigned int *)(a2 + 160);
      v30 = *(_QWORD *)(a2 + 152);
      v31 = &ptr;
      v29 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0(v97, v28, si128, a8);
      v30 = *(_QWORD *)(a2 + 152);
      v26 = *(unsigned int *)(a2 + 160);
      v31 = (void **)&v143[v30 - 8 - v96];
      v29 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v30 = *(_QWORD *)(a2 + 152);
    v31 = &ptr;
  }
  v32 = *v31;
  *v31 = nullptr;
  *(_QWORD *)(v30 + 8 * v26) = v32;
  v33 = ptr;
  *(_DWORD *)(a2 + 160) = v29 + 1;
  if ( v33 )
  {
    v34 = *(void (__fastcall **)(_QWORD *))(*v33 + 8LL);
    if ( v34 == sub_10D4290 )
    {
      v35 = v33[58];
      v36 = v33[57];
      *v33 = &off_2BA8F30;
      if ( v35 != v36 )
      {
        do
        {
          if ( *(_BYTE *)(v36 + 32) && *(_QWORD *)v36 != v36 + 16 )
            operator delete(*(void **)v36);
          v36 += 40;
        }
        while ( v35 != v36 );
        v36 = v33[57];
      }
      if ( v36 )
        operator delete((void *)v36);
      v37 = (void *)v33[54];
      if ( v37 )
        operator delete(v37);
      v38 = (_QWORD *)v33[50];
      if ( v38 != v33 + 52 )
        operator delete(v38);
      v39 = (_QWORD *)v33[32];
      if ( v39 != v33 + 34 )
        free(v39);
      v40 = (void **)v33[29];
      v41 = (void **)v33[28];
      if ( v40 != v41 )
      {
        do
        {
          while ( *v41 != v41 + 2 )
          {
            operator delete(*v41);
            v41 += 4;
            if ( v40 == v41 )
            {
              v41 = (void **)v33[28];
              goto LABEL_36;
            }
          }
          v41 += 4;
        }
        while ( v40 != v41 );
        v41 = (void **)v33[28];
      }
LABEL_36:
      if ( v41 )
        operator delete(v41);
      v42 = (void *)v33[25];
      if ( v42 )
        operator delete(v42);
      v43 = (_QWORD *)v33[7];
      if ( v43 != v33 + 9 )
        free(v43);
      operator delete(v33, 0x208u);
    }
    else
    {
      v34(v33);
    }
  }
  v44 = *(__int64 **)a2;
  v46 = (_BYTE *)sub_21B7BC0(a6, 2115, &byte_22F0C30, 0);
  v47 = v45;
  if ( v45 )
  {
    ptr = v46;
    LOWORD(v144) = 261;
    *(_QWORD *)v143 = v45;
    if ( !(unsigned int)sub_228C1E0(&ptr, 0) )
    {
      if ( v46 )
      {
        v130 = v132;
        sub_12405F0(&v130, v46, (__int64)v47 + (_QWORD)v46);
        v48 = v131;
        goto LABEL_47;
      }
LABEL_113:
      v132[0] = 0;
      v130 = v132;
      v131 = 0;
      goto LABEL_114;
    }
    sub_FC70B0((__int64)&ptr, *v44, 0, 443);
    v71 = (unsigned __int8 *)ptr;
    if ( !ptr )
    {
      v100 = *(_QWORD *)v143;
      v101 = *(_DWORD *)(*(_QWORD *)v143 + 14976LL);
      if ( v101 )
      {
        v103 = (unsigned int)(v101 - 1);
        *(_DWORD *)(*(_QWORD *)v143 + 14976LL) = v103;
        v71 = *(unsigned __int8 **)(v100 + 8 * v103 + 14848);
        v104 = *((unsigned int *)v71 + 134);
        v105 = *((_QWORD *)v71 + 66);
        *v71 = 0;
        *((_DWORD *)v71 + 106) = 0;
        v106 = v104 << 6;
        if ( v105 != v105 + v106 )
        {
          v120 = v47;
          v107 = a2;
          v108 = v105 + v106;
          v121 = &ptr;
          v109 = v105;
          do
          {
            while ( 1 )
            {
              v108 -= 64;
              v110 = *(void **)(v108 + 24);
              if ( v110 == (void *)(v108 + 40) )
                break;
              operator delete(v110);
              if ( v109 == v108 )
                goto LABEL_177;
            }
          }
          while ( v109 != v108 );
LABEL_177:
          a2 = v107;
          p_ptr = (__int64 *)v121;
          v47 = v120;
        }
        *((_DWORD *)v71 + 134) = 0;
      }
      else
      {
        v71 = (unsigned __int8 *)operator new(0x3A0u);
        *v71 = 0;
        *((_QWORD *)v71 + 12) = v71 + 112;
        *((_QWORD *)v71 + 16) = v71 + 144;
        *((_QWORD *)v71 + 20) = v71 + 176;
        *((_QWORD *)v71 + 24) = v71 + 208;
        *((_QWORD *)v71 + 28) = v71 + 240;
        *((_QWORD *)v71 + 32) = v71 + 272;
        *((_QWORD *)v71 + 36) = v71 + 304;
        *((_QWORD *)v71 + 40) = v71 + 336;
        *((_QWORD *)v71 + 44) = v71 + 368;
        *((_QWORD *)v71 + 48) = v71 + 400;
        *((_QWORD *)v71 + 52) = v71 + 432;
        *((_QWORD *)v71 + 13) = 0;
        v71[112] = 0;
        *((_QWORD *)v71 + 17) = 0;
        v71[144] = 0;
        *((_QWORD *)v71 + 21) = 0;
        v71[176] = 0;
        *((_QWORD *)v71 + 25) = 0;
        v71[208] = 0;
        *((_QWORD *)v71 + 29) = 0;
        v71[240] = 0;
        *((_QWORD *)v71 + 33) = 0;
        v71[272] = 0;
        *((_QWORD *)v71 + 37) = 0;
        v71[304] = 0;
        *((_QWORD *)v71 + 41) = 0;
        v71[336] = 0;
        *((_QWORD *)v71 + 45) = 0;
        v71[368] = 0;
        *((_QWORD *)v71 + 49) = 0;
        v71[400] = 0;
        *((_QWORD *)v71 + 53) = 0x800000000LL;
        *((_QWORD *)v71 + 66) = v71 + 544;
        *((_QWORD *)v71 + 67) = 0x600000000LL;
      }
      ptr = v71;
    }
    v71[*v71 + 1] = 0;
    src = &v136;
    sub_12405F0(&src, v46, (__int64)v47 + (_QWORD)v46);
    v72 = ptr;
    v73 = *(unsigned __int8 *)ptr;
    *(_BYTE *)ptr = v73 + 1;
    v74 = (unsigned __int8)v73;
    v75 = 4 * (v73 + 3);
    v76 = (void **)&v72[v75];
    v77 = (void **)v72[v75];
    if ( src == &v136 )
    {
      v98 = n;
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)v77 = (_BYTE)v136;
        else
          memcpy(v77, src, n);
        v98 = n;
        v77 = (void **)*v76;
      }
      v76[1] = (void *)v98;
      *((_BYTE *)v77 + v98) = 0;
      v77 = (void **)src;
    }
    else
    {
      if ( v77 == &v72[v75 + 2] )
      {
        *v76 = src;
        v76[1] = (void *)n;
        v76[2] = v136;
      }
      else
      {
        v78 = (void *)v72[4 * v74 + 14];
        *v76 = src;
        v76[1] = (void *)n;
        v76[2] = v136;
        if ( v77 )
        {
          src = v77;
          v136 = v78;
          goto LABEL_90;
        }
      }
      v77 = &v136;
      src = &v136;
    }
LABEL_90:
    n = 0;
    *(_BYTE *)v77 = 0;
    if ( src != &v136 )
      operator delete(src);
    if ( (_BYTE)v148 )
    {
      sub_FC7790(*(__int64 *)&v143[8], p_ptr, SHIBYTE(v148));
      *(_QWORD *)&v143[8] = 0;
      v148 = 0;
    }
    if ( v144 != p_ptr + 6 )
      operator delete(v144);
    v79 = (void **)ptr;
    if ( ptr )
    {
      v80 = *(_QWORD *)v143;
      if ( *(_QWORD *)v143 )
      {
        if ( (unsigned __int64)ptr >= *(_QWORD *)v143 && (unsigned __int64)ptr <= *(_QWORD *)v143 + 14848LL )
        {
          v102 = *(unsigned int *)(*(_QWORD *)v143 + 14976LL);
          *(_DWORD *)(*(_QWORD *)v143 + 14976LL) = v102 + 1;
          *(_QWORD *)(v80 + 8 * v102 + 14848) = v79;
        }
        else
        {
          v81 = *((void ***)ptr + 66);
          v82 = &v81[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
          if ( v81 != v82 )
          {
            do
            {
              while ( 1 )
              {
                v82 -= 8;
                v83 = (void **)v82[3];
                if ( v83 == v82 + 5 )
                  break;
                operator delete(v83);
                if ( v81 == v82 )
                  goto LABEL_103;
              }
            }
            while ( v81 != v82 );
LABEL_103:
            v82 = (void **)v79[66];
          }
          if ( v82 != v79 + 68 )
            free(v82);
          v84 = (void **)v79[52];
          v85 = v79 + 52;
          if ( v84 != v79 + 54 )
            free(v84);
          v86 = v79 + 12;
          do
          {
            while ( 1 )
            {
              v85 -= 4;
              if ( *v85 == v85 + 2 )
                break;
              operator delete(*v85);
              if ( v85 == v86 )
                goto LABEL_111;
            }
          }
          while ( v85 != v86 );
LABEL_111:
          operator delete(v79, 0x3A0u);
        }
      }
    }
  }
  v87 = sub_21B7BC0(a6, 2113, &byte_22F0C30, 0);
  v89 = (const void *)v87;
  v90 = v88;
  if ( !v88 )
    goto LABEL_113;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v92 = (char *)(p_ptr + 3);
  v120 = (void *)(v87 + v88);
  v93 = 0;
  ptr = p_ptr + 3;
  *(__m128 *)v143 = si128;
  if ( v88 > 0x80 )
  {
    sub_2236E10(p_ptr, p_ptr + 3, v88, 1);
    v93 = *(_QWORD *)v143;
    v92 = (char *)ptr + *(_QWORD *)v143;
  }
  if ( v89 != v120 )
  {
    memcpy(v92, v89, v90);
    v93 = *(_QWORD *)v143;
  }
  *(_QWORD *)v143 = v90 + v93;
  v128[0] = "libLLVMHipSpvPasses.so";
  v126[0] = "lib";
  LOWORD(v138) = 257;
  v121 = (void **)v126;
  v133 = 257;
  v129 = 259;
  v127 = 259;
  v122 = v128;
  sub_228A3B0(p_ptr, v126, v128, &v130, &src);
  LOWORD(v138) = 261;
  src = ptr;
  n = *(_QWORD *)v143;
  if ( (unsigned int)sub_228C1E0(&src, 0) )
  {
    *(_QWORD *)v143 = 0;
    v95 = 0;
    if ( v90 > *(_QWORD *)&v143[8] )
    {
      sub_2236E10(p_ptr, p_ptr + 3, v90, 1);
      v95 = *(_QWORD *)v143;
    }
    if ( v89 != v120 )
    {
      memcpy((char *)ptr + v95, v89, v90);
      v95 = *(_QWORD *)v143;
    }
    LOWORD(v138) = 257;
    v133 = 259;
    v130 = "libLLVMHipSpvPasses.so";
    v127 = 259;
    v128[0] = "llvm";
    v129 = 259;
    v126[0] = "lib";
    *(_QWORD *)v143 = v90 + v95;
    sub_228A3B0(p_ptr, v121, v122, &v130, &src);
    LOWORD(v138) = 261;
    src = ptr;
    n = *(_QWORD *)v143;
    if ( (unsigned int)sub_228C1E0(&src, 0) )
    {
      if ( ptr != p_ptr + 3 )
        free(ptr);
      goto LABEL_113;
    }
  }
  v130 = v132;
  if ( !ptr )
  {
    v131 = 0;
    v94 = nullptr;
    v132[0] = 0;
    goto LABEL_152;
  }
  sub_12405F0(&v130, ptr, (__int64)ptr + *(_QWORD *)v143);
  v94 = ptr;
  if ( ptr != p_ptr + 3 )
LABEL_152:
    free(v94);
  v48 = v131;
LABEL_47:
  if ( !v48 )
    goto LABEL_114;
  v49 = (void *)(*(__int64 (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a2 + 80) + 16LL))(*(_QWORD *)(a2 + 80), v130);
  ptr = p_ptr + 2;
  sub_12406B0(p_ptr, v123, (__int64)v123 + v124);
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)v143) <= 5 )
LABEL_182:
    std::__throw_length_error("basic_string::append");
  sub_9EE560(p_ptr, "-lower", 6u);
  v120 = (void *)sub_1240AD0((_QWORD *)a2, (unsigned __int8 *)ptr, *(unsigned __int8 **)v143, (__int64)"bc", 2);
  if ( ptr != p_ptr + 2 )
    operator delete(ptr);
  v144 = v49;
  ptr = p_ptr + 2;
  *(_QWORD *)&v143[8] = v113;
  *(_QWORD *)&v143[16] = "-load-pass-plugin";
  v145 = "-passes=hip-post-link-passes";
  v146 = v116;
  v147 = v120;
  *(_QWORD *)v143 = 0x1000000006LL;
  sub_112D530(&src, *(_QWORD *)(a1 + 24), (char *)"opt");
  v113 = (void *)(*(__int64 (__fastcall **)(__int64, void *, size_t))(*(_QWORD *)a6 + 16LL))(a6, src, n);
  if ( src != &v136 )
    operator delete(src);
  *(_QWORD *)&v112[1] = 1;
  v50 = **(const __m128i ***)&v112[0];
  v51 = *(unsigned int *)(*(_QWORD *)&v112[0] + 8LL);
  *(_QWORD *)&v112[0] = v115;
  v52 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v52, v114, a1, 2, 0, (__int64)v113, (__int64)p_ptr, v50, v51, (__int64)v115, 1, 0);
  v53 = *(unsigned int *)(a2 + 160);
  v54 = *(unsigned int *)(a2 + 164);
  src = v52;
  v55 = v53 + 1;
  v56 = v53;
  if ( v53 + 1 > v54 )
  {
    v99 = *(_QWORD *)(a2 + 152);
    if ( v99 > (unsigned __int64)&src || (unsigned __int64)&src >= v99 + 8 * v53 )
    {
      sub_11673D0((__int64)v117, v55, si128, a8);
      v53 = *(unsigned int *)(a2 + 160);
      p_src = &src;
      v57 = *(_QWORD *)(a2 + 152);
      v56 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0((__int64)v117, v55, si128, a8);
      v57 = *(_QWORD *)(a2 + 152);
      v53 = *(unsigned int *)(a2 + 160);
      p_src = (void **)((char *)&src + v57 - v99);
      v56 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v57 = *(_QWORD *)(a2 + 152);
    p_src = &src;
  }
  v59 = *p_src;
  *p_src = nullptr;
  *(_QWORD *)(v57 + 8 * v53) = v59;
  v60 = src;
  *(_DWORD *)(a2 + 160) = v56 + 1;
  if ( v60 )
  {
    v61 = *(void (__fastcall **)(_QWORD *))(*v60 + 8LL);
    if ( v61 == sub_10D4290 )
    {
      v62 = v60[58];
      v63 = v60[57];
      *v60 = &off_2BA8F30;
      if ( v62 != v63 )
      {
        do
        {
          if ( *(_BYTE *)(v63 + 32) && *(_QWORD *)v63 != v63 + 16 )
            operator delete(*(void **)v63);
          v63 += 40;
        }
        while ( v62 != v63 );
        v63 = v60[57];
      }
      if ( v63 )
        operator delete((void *)v63);
      v64 = (void *)v60[54];
      if ( v64 )
        operator delete(v64);
      v65 = (_QWORD *)v60[50];
      if ( v65 != v60 + 52 )
        operator delete(v65);
      v66 = (_QWORD *)v60[32];
      if ( v66 != v60 + 34 )
        free(v66);
      v67 = (void **)v60[29];
      v68 = (void **)v60[28];
      if ( v67 != v68 )
      {
        do
        {
          while ( *v68 != v68 + 2 )
          {
            operator delete(*v68);
            v68 += 4;
            if ( v68 == v67 )
              goto LABEL_74;
          }
          v68 += 4;
        }
        while ( v67 != v68 );
LABEL_74:
        v68 = (void **)v60[28];
      }
      if ( v68 )
        operator delete(v68);
      v69 = (void *)v60[25];
      if ( v69 )
        operator delete(v69);
      v70 = (_QWORD *)v60[7];
      if ( v70 != v60 + 9 )
        free(v70);
      operator delete(v60, 0x208u);
    }
    else
    {
      v61(v60);
    }
  }
  if ( ptr != p_ptr + 2 )
    free(ptr);
  v113 = v120;
LABEL_114:
  LODWORD(n) = 1;
  *(_QWORD *)&v112[0] = "--spirv-ext=+all";
  *(_QWORD *)v143 = 0x1000000002LL;
  v138 = &byte_22F0C30;
  v91 = _mm_loadh_ps(v112);
  ptr = p_ptr + 2;
  *(__m128 *)&v143[8] = v91;
  v136 = nullptr;
  v137 = 44;
  src = v113;
  sub_12B3580(a2, a1, v114, v115, &src);
  if ( ptr != p_ptr + 2 )
    free(ptr);
  if ( v130 != v132 )
    operator delete(v130);
  if ( v139 != v141 )
    free(v139);
  if ( v123 != v119 + 2 )
    operator delete(v123);
}
