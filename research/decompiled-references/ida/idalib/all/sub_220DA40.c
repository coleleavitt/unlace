_QWORD *__fastcall sub_220DA40(_QWORD *a1, __int64 *a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  std::_V2 *v7; // rax
  __int64 v8; // rdx
  _DWORD *v9; // rsi
  std::_V2 *v10; // rcx
  signed __int64 v11; // rdx
  std::_V2 *v12; // rdx
  std::_V2 *v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rdx
  char v16; // cl
  __int64 v17; // rdx
  __int64 v18; // r13
  const void *v19; // rax
  char *v20; // rcx
  size_t v21; // rdx
  size_t v22; // r14
  unsigned __int64 v23; // rdx
  __int64 (__fastcall ***v24)(); // rdi
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  _QWORD *v27; // r13
  __int64 v28; // rax
  unsigned __int64 v29; // rdi
  __int64 v30; // r15
  _DWORD **v31; // r10
  _DWORD *v32; // rcx
  unsigned int v33; // r8d
  __int64 v34; // r13
  __int64 v35; // r14
  void (__fastcall *v36)(__int64, const char *, __int64, __int64, __int64); // r15
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r15
  _BYTE *(__fastcall *v40)(__int64, const void *, size_t, __int64, __int64); // r10
  __int64 (__fastcall *v41)(__int64); // rax
  __int64 v42; // r14
  unsigned __int64 v43; // rbp
  const void *v44; // rsi
  __int64 v45; // rax
  _BYTE *v46; // rdi
  unsigned __int64 v47; // rdx
  int v48; // ebp
  __int64 v49; // rax
  _WORD *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdi
  _BYTE *v53; // rax
  bool v54; // zf
  __int64 v55; // rax
  char v57; // al
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  _QWORD *v60; // r8
  _QWORD **v61; // r15
  __int64 v62; // rax
  size_t v63; // rdx
  size_t v64; // r13
  const void *v65; // r14
  const void *v66; // rax
  _BYTE *v67; // rdi
  size_t v68; // rdx
  size_t v69; // rcx
  unsigned __int64 v70; // rdx
  __int64 (__fastcall ***v71)(); // r15
  __int64 v72; // rax
  __int64 (__fastcall **v73)(); // rdi
  const void *v74; // rax
  char *v75; // rcx
  size_t v76; // rdx
  size_t v77; // r13
  unsigned __int64 v78; // rdx
  __int64 (__fastcall ***v79)(); // rdi
  __int64 (__fastcall ***v80)(); // r13
  char *v81; // r15
  size_t v82; // rax
  _BYTE *v83; // rdi
  size_t v84; // r14
  __int64 (__fastcall **v85)(); // rax
  __int64 v86; // rax
  std::_V2 *v87; // rdi
  __m128i v88; // rax
  size_t v89; // r15
  void *v90; // rax
  _QWORD *v91; // rax
  _QWORD *v92; // r9
  __int64 **v93; // rsi
  unsigned __int64 v94; // r11
  __int64 *v95; // rdi
  unsigned __int64 v96; // rdx
  __int64 **v97; // rax
  _QWORD *v98; // rdi
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rsi
  __int64 v102; // rdx
  __m128i v103; // rax
  char v104; // al
  void **v105; // rcx
  __int64 v106; // r14
  __int64 v107; // rax
  __m128i v108; // xmm2
  __int64 v110; // [rsp+10h] [rbp-1D0h]
  __int64 v111; // [rsp+18h] [rbp-1C8h]
  __int64 v112; // [rsp+20h] [rbp-1C0h]
  __int64 v113; // [rsp+28h] [rbp-1B8h]
  unsigned __int64 v114; // [rsp+28h] [rbp-1B8h]
  _QWORD *v115; // [rsp+28h] [rbp-1B8h]
  size_t v116; // [rsp+28h] [rbp-1B8h]
  void *v117; // [rsp+30h] [rbp-1B0h]
  unsigned __int64 v118; // [rsp+30h] [rbp-1B0h]
  std::_V2 *v119; // [rsp+40h] [rbp-1A0h] BYREF
  unsigned __int64 v120; // [rsp+48h] [rbp-198h] BYREF
  __int64 v121; // [rsp+50h] [rbp-190h] BYREF
  __int128 v122; // [rsp+58h] [rbp-188h] BYREF
  void *ptr; // [rsp+68h] [rbp-178h] BYREF
  __m128i si128; // [rsp+70h] [rbp-170h]
  __int64 v125; // [rsp+80h] [rbp-160h] BYREF
  void *v126[2]; // [rsp+88h] [rbp-158h] BYREF
  __int64 v127; // [rsp+98h] [rbp-148h] BYREF
  _QWORD v128[4]; // [rsp+A8h] [rbp-138h] BYREF
  __int16 v129; // [rsp+C8h] [rbp-118h]
  __m128i v130; // [rsp+D8h] [rbp-108h] BYREF
  __m128i v131; // [rsp+E8h] [rbp-F8h] BYREF
  __int64 v132; // [rsp+F8h] [rbp-E8h]
  void *v133[2]; // [rsp+108h] [rbp-D8h] BYREF
  __int64 v134; // [rsp+118h] [rbp-C8h] BYREF
  __int16 v135; // [rsp+128h] [rbp-B8h]
  __m128i v136; // [rsp+138h] [rbp-A8h] BYREF
  __m128i v137; // [rsp+148h] [rbp-98h]
  __int64 v138; // [rsp+158h] [rbp-88h]
  __int64 (__fastcall **v139)(); // [rsp+168h] [rbp-78h] BYREF
  int v140; // [rsp+170h] [rbp-70h]
  __int128 v141; // [rsp+178h] [rbp-68h]
  void *dest; // [rsp+188h] [rbp-58h]
  char v143; // [rsp+190h] [rbp-50h]
  int v144; // [rsp+194h] [rbp-4Ch]
  void **p_ptr; // [rsp+198h] [rbp-48h]

  v122 = 0;
  ptr = &v125;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
  v141 = 0;
  v139 = &off_2BEBEE0;
  v140 = 2;
  v143 = 0;
  v144 = 1;
  dest = nullptr;
  p_ptr = &ptr;
  sub_227B8B0(&v139, 0, 0, 0);
  v113 = a2[23];
  v110 = sub_2219E40(a2 + 20, a2 + 23, a2 + 24);
  v5 = a2[23];
  a2[23] = v113;
  v111 = v6;
  v112 = v5;
  v7 = (std::_V2 *)sub_2219FE0(a2 + 20, a2 + 23, a2 + 24);
  v8 = a2[19];
  v9 = (_DWORD *)a2[18];
  v119 = v7;
  v8 *= 24;
  v10 = (std::_V2 *)((char *)v9 + v8);
  v11 = 0xAAAAAAAAAAAAAAABLL * (v8 >> 3);
  if ( v11 >> 2 > 0 )
  {
    if ( v7 == (std::_V2 *)(unsigned int)*v9 )
    {
      v13 = (std::_V2 *)v9;
    }
    else if ( v7 == (std::_V2 *)(unsigned int)v9[6] )
    {
      v13 = (std::_V2 *)(v9 + 6);
    }
    else if ( v7 == (std::_V2 *)(unsigned int)v9[12] )
    {
      v13 = (std::_V2 *)(v9 + 12);
    }
    else if ( v7 == (std::_V2 *)(unsigned int)v9[18] )
    {
      v13 = (std::_V2 *)(v9 + 18);
    }
    else
    {
      v12 = (std::_V2 *)&v9[24 * (v11 >> 2)];
      while ( 1 )
      {
        v13 = (std::_V2 *)(v9 + 24);
        if ( v9 + 24 == (_DWORD *)v12 )
        {
          v11 = 0xAAAAAAAAAAAAAAABLL * ((v10 - v12) >> 3);
          goto LABEL_14;
        }
        if ( v7 == (std::_V2 *)(unsigned int)v9[24] )
          goto LABEL_23;
        if ( v7 == (std::_V2 *)(unsigned int)v9[30] )
        {
          v13 = (std::_V2 *)(v9 + 30);
          goto LABEL_23;
        }
        if ( v7 == (std::_V2 *)(unsigned int)v9[36] )
        {
          v13 = (std::_V2 *)(v9 + 36);
          goto LABEL_23;
        }
        if ( v7 == (std::_V2 *)(unsigned int)v9[42] )
          break;
        v9 += 24;
      }
      v13 = (std::_V2 *)(v9 + 42);
    }
    goto LABEL_23;
  }
  v13 = (std::_V2 *)v9;
LABEL_14:
  if ( v11 == 2 )
    goto LABEL_112;
  if ( v11 == 3 )
  {
    if ( v7 == (std::_V2 *)*(unsigned int *)v13 )
      goto LABEL_23;
    v13 = (std::_V2 *)((char *)v13 + 24);
LABEL_112:
    if ( v7 == (std::_V2 *)*(unsigned int *)v13 )
      goto LABEL_23;
    v13 = (std::_V2 *)((char *)v13 + 24);
    goto LABEL_114;
  }
  if ( v11 != 1 )
  {
LABEL_17:
    v136.m128i_i64[0] = (__int64)&v119;
    v137.m128i_i64[0] = (__int64)" is not a valid tag number";
    LOWORD(v138) = 779;
    v14 = std::_V2::generic_category(v13);
    sub_2253560(v133, &v136);
    v15 = 33;
    goto LABEL_18;
  }
LABEL_114:
  if ( v7 != (std::_V2 *)*(unsigned int *)v13 )
    goto LABEL_17;
LABEL_23:
  if ( v10 == v13 )
    goto LABEL_17;
  v16 = (_BYTE)v7 - 4;
  if ( (unsigned __int64)v7 - 4 > 0x3F )
    goto LABEL_28;
  v17 = 1LL << v16;
  if ( ((1LL << v16) & 0x8000000010000003LL) != 0 )
  {
    v62 = sub_2219E40(a2 + 20, a2 + 23, a2 + 24);
    v64 = v63;
    v65 = (const void *)v62;
    v66 = (const void *)sub_221DDC0((unsigned int)v119, a2[18], a2[19], 1);
    v67 = dest;
    v69 = v68;
    v70 = *((_QWORD *)&v141 + 1) - (_QWORD)dest;
    if ( *((_QWORD *)&v141 + 1) - (_QWORD)dest < v69 )
    {
      v100 = sub_227BF10(&v139, v66, v69);
      v67 = *(_BYTE **)(v100 + 32);
      v71 = (__int64 (__fastcall ***)())v100;
      v70 = *(_QWORD *)(v100 + 24) - (_QWORD)v67;
    }
    else
    {
      v71 = &v139;
      if ( v69 )
      {
        v116 = v69;
        memcpy(dest, v66, v69);
        v71 = &v139;
        dest = (char *)dest + v116;
        v67 = dest;
        v70 = *((_QWORD *)&v141 + 1) - (_QWORD)dest;
      }
    }
    if ( v70 > 2 )
    {
      v67[2] = 32;
      *(_WORD *)v67 = 15648;
      v73 = (__int64 (__fastcall **)())((char *)v71[4] + 3);
      v71[4] = v73;
    }
    else
    {
      v72 = sub_227BF10(v71, " = ", 3);
      v73 = *(__int64 (__fastcall ***)())(v72 + 32);
      v71 = (__int64 (__fastcall ***)())v72;
    }
    if ( v64 > (char *)v71[3] - (char *)v73 )
    {
      sub_227BF10(v71, v65, v64);
    }
    else if ( v64 )
    {
      memcpy(v73, v65, v64);
      v71[4] = (__int64 (__fastcall **)())((char *)v71[4] + v64);
    }
    goto LABEL_34;
  }
  if ( (v17 & 0x2000000000000000LL) != 0 )
  {
    v87 = (std::_V2 *)(unsigned int)v7;
    v88.m128i_i64[0] = sub_221DDC0((unsigned int)v7, a2[18], a2[19], 1);
    v136 = v88;
    LOWORD(v138) = 773;
    v137.m128i_i64[0] = (__int64)" cannot be recursively defined";
    v14 = std::_V2::generic_category(v87);
    sub_2253560(v133, &v136);
    v15 = 22;
LABEL_18:
    sub_22205D0(&v130, v133, v15, v14);
    if ( v133[0] != &v134 )
      operator delete(v133[0]);
    *(_QWORD *)&v122 = v130.m128i_i64[0];
    if ( BYTE8(v122) )
      goto LABEL_34;
    goto LABEL_21;
  }
  if ( (v17 & 4) == 0 )
  {
LABEL_28:
    v18 = sub_2219FE0(a2 + 20, a2 + 23, a2 + 24);
    v19 = (const void *)sub_221DDC0((unsigned int)v119, a2[18], a2[19], 1);
    v20 = (char *)dest;
    v22 = v21;
    v23 = *((_QWORD *)&v141 + 1) - (_QWORD)dest;
    if ( *((_QWORD *)&v141 + 1) - (_QWORD)dest < v22 )
    {
      v86 = sub_227BF10(&v139, v19, v22);
      v20 = *(char **)(v86 + 32);
      v24 = (__int64 (__fastcall ***)())v86;
      if ( *(_QWORD *)(v86 + 24) - (_QWORD)v20 <= 2u )
      {
LABEL_32:
        v24 = (__int64 (__fastcall ***)())sub_227BF10(v24, " = ", 3);
LABEL_33:
        sub_227B910(v24, v18);
        goto LABEL_34;
      }
    }
    else
    {
      v24 = &v139;
      if ( v22 )
      {
        memcpy(dest, v19, v22);
        v24 = &v139;
        v20 = (char *)dest + v22;
        dest = v20;
        v23 = *((_QWORD *)&v141 + 1) - (_QWORD)v20;
      }
      if ( v23 <= 2 )
        goto LABEL_32;
    }
    v20[2] = 32;
    *(_WORD *)v20 = 15648;
    v24[4] = (__int64 (__fastcall **)())((char *)v24[4] + 3);
    goto LABEL_33;
  }
  v120 = sub_2219FE0(a2 + 20, a2 + 23, a2 + 24);
  if ( v120 <= 0x16 )
  {
    v74 = (const void *)sub_221DDC0((unsigned int)v119, a2[18], a2[19], 1);
    v75 = (char *)dest;
    v77 = v76;
    v78 = *((_QWORD *)&v141 + 1) - (_QWORD)dest;
    if ( v77 > *((_QWORD *)&v141 + 1) - (_QWORD)dest )
    {
      v107 = sub_227BF10(&v139, v74, v77);
      v75 = *(char **)(v107 + 32);
      v79 = (__int64 (__fastcall ***)())v107;
      v78 = *(_QWORD *)(v107 + 24) - (_QWORD)v75;
    }
    else
    {
      v79 = &v139;
      if ( v77 )
      {
        memcpy(dest, v74, v77);
        v79 = &v139;
        v75 = (char *)dest + v77;
        dest = v75;
        v78 = *((_QWORD *)&v141 + 1) - (_QWORD)v75;
      }
    }
    if ( v78 > 2 )
    {
      v75[2] = 32;
      *(_WORD *)v75 = 15648;
      v79[4] = (__int64 (__fastcall **)())((char *)v79[4] + 3);
    }
    else
    {
      v79 = (__int64 (__fastcall ***)())sub_227BF10(v79, " = ", 3);
    }
    sub_227B910(v79, v120);
    if ( !off_2BEAA00[v120] )
      goto LABEL_34;
    if ( *((_QWORD *)&v141 + 1) - (_QWORD)dest > 1u )
    {
      v80 = &v139;
      *(_WORD *)dest = 10272;
      dest = (char *)dest + 2;
    }
    else
    {
      v80 = (__int64 (__fastcall ***)())sub_227BF10(&v139, " (", 2);
    }
    v81 = off_2BEAA00[v120];
    if ( v81 )
    {
      v82 = strlen(off_2BEAA00[v120]);
      v83 = v80[4];
      v84 = v82;
      v85 = v80[3];
      if ( v84 <= (char *)v85 - v83 )
      {
        if ( v84 )
        {
          memcpy(v83, v81, v84);
          v85 = v80[3];
          v83 = (char *)v80[4] + v84;
          v80[4] = (__int64 (__fastcall **)())v83;
        }
        goto LABEL_100;
      }
      v80 = (__int64 (__fastcall ***)())sub_227BF10(v80, v81, v84);
    }
    v83 = v80[4];
    v85 = v80[3];
LABEL_100:
    if ( v85 <= (__int64 (__fastcall **)())v83 )
    {
      sub_227BA10(v80, 41);
    }
    else
    {
      v80[4] = (__int64 (__fastcall **)())(v83 + 1);
      *v83 = 41;
    }
    goto LABEL_34;
  }
  v101 = a2[18];
  v102 = a2[19];
  v133[0] = " value";
  v135 = 259;
  v103.m128i_i64[0] = sub_221DDC0((unsigned int)v119, v101, v102, 1);
  v129 = 779;
  v131 = v103;
  v128[0] = &v120;
  LOWORD(v132) = 1282;
  v104 = v135;
  v128[2] = " is not a valid ";
  v130.m128i_i64[0] = (__int64)v128;
  if ( (_BYTE)v135 )
  {
    if ( (_BYTE)v135 == 1 )
    {
      v108 = _mm_load_si128(&v131);
      v136 = _mm_load_si128(&v130);
      v137 = v108;
      v138 = v132;
    }
    else
    {
      if ( HIBYTE(v135) == 1 )
      {
        v117 = v133[1];
        v105 = (void **)v133[0];
      }
      else
      {
        v105 = v133;
        v104 = 2;
      }
      v137.m128i_i64[0] = (__int64)v105;
      v136.m128i_i64[0] = (__int64)&v130;
      v137.m128i_i64[1] = (__int64)v117;
      LOBYTE(v138) = 2;
      BYTE1(v138) = v104;
    }
  }
  else
  {
    LOWORD(v138) = 256;
  }
  v106 = std::_V2::generic_category((std::_V2 *)(unsigned int)v119);
  sub_2253560(v126, &v136);
  sub_22205D0(&v121, v126, 33, v106);
  if ( v126[0] != &v127 )
    operator delete(v126[0]);
  *(_QWORD *)&v122 = v121;
  if ( BYTE8(v122) )
    goto LABEL_34;
LABEL_21:
  BYTE8(v122) = 1;
LABEL_34:
  v25 = operator new(0x20u);
  v26 = a2[11];
  *(_QWORD *)v25 = 0;
  v27 = (_QWORD *)v25;
  *(_DWORD *)(v25 + 8) = a3;
  *(_QWORD *)(v25 + 16) = v110;
  *(_QWORD *)(v25 + 24) = v111;
  v28 = *(_QWORD *)(a2[10] + 8 * (a3 % v26));
  v29 = a3 % v26;
  v30 = v29;
  if ( !v28 )
    goto LABEL_74;
  v31 = *(_DWORD ***)v28;
  if ( a3 == *(_DWORD *)(*(_QWORD *)v28 + 8LL) )
    goto LABEL_44;
  v32 = *v31;
  if ( !*v31 )
    goto LABEL_74;
  v33 = v32[2];
  if ( v29 != v33 % v26 )
    goto LABEL_74;
  while ( a3 != v33 )
  {
    if ( !*(_QWORD *)v32 )
      goto LABEL_74;
    v31 = (_DWORD **)v32;
    v33 = *(_DWORD *)(*(_QWORD *)v32 + 8LL);
    if ( v29 != v33 % v26 )
      goto LABEL_74;
    v32 = *(_DWORD **)v32;
  }
  if ( *v31 )
  {
LABEL_44:
    operator delete(v27);
  }
  else
  {
LABEL_74:
    v57 = std::__detail::_Prime_rehash_policy::_M_need_rehash(
            (std::__detail::_Prime_rehash_policy *)(a2 + 14),
            v26,
            a2[13],
            1u);
    v59 = v58;
    if ( v57 )
    {
      if ( v58 == 1 )
      {
        v60 = a2 + 16;
        a2[16] = 0;
        v92 = a2 + 16;
      }
      else
      {
        if ( v58 > 0x1FFFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v89 = 8 * v58;
        v114 = v58;
        v90 = (void *)operator new(8 * v58);
        v91 = memset(v90, 0, v89);
        v59 = v114;
        v92 = a2 + 16;
        v60 = v91;
      }
      v93 = (__int64 **)a2[12];
      a2[12] = 0;
      if ( v93 )
      {
        v94 = 0;
        do
        {
          v95 = *v93;
          v96 = *((unsigned int *)v93 + 2) % v59;
          v97 = (__int64 **)&v60[v96];
          if ( *v97 )
          {
            *v93 = (__int64 *)**v97;
            **v97 = (__int64)v93;
          }
          else
          {
            *v93 = (__int64 *)a2[12];
            a2[12] = (__int64)v93;
            *v97 = a2 + 12;
            if ( *v93 )
              v60[v94] = v93;
            v94 = v96;
          }
          v93 = (__int64 **)v95;
        }
        while ( v95 );
      }
      v98 = (_QWORD *)a2[10];
      if ( v92 != v98 )
      {
        v118 = v59;
        v115 = v60;
        operator delete(v98);
        v59 = v118;
        v60 = v115;
      }
      a2[11] = v59;
      a2[10] = (__int64)v60;
      v30 = a3 % v59;
    }
    else
    {
      v60 = (_QWORD *)a2[10];
    }
    v61 = (_QWORD **)&v60[v30];
    if ( *v61 )
    {
      *v27 = **v61;
      **v61 = v27;
    }
    else
    {
      v99 = a2[12];
      a2[12] = (__int64)v27;
      *v27 = v99;
      if ( v99 )
        v60[*(unsigned int *)(v99 + 8) % (unsigned __int64)a2[11]] = v27;
      *v61 = a2 + 12;
    }
    ++a2[13];
  }
  v34 = a2[17];
  if ( v34 )
  {
    (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v34 + 248LL))(a2[17], "Attribute", 9);
    (*(void (__fastcall **)(__int64, char *, __int64, _QWORD))(*(_QWORD *)a2[17] + 64LL))(a2[17], "Tag", 3, a3);
    v35 = a2[17];
    v36 = *(void (__fastcall **)(__int64, const char *, __int64, __int64, __int64))(*(_QWORD *)v35 + 232LL);
    v37 = sub_221DDC0(a3, a2[18], a2[19], 0);
    v36(v35, "TagName", 7, v37, v38);
    v39 = a2[17];
    v40 = *(_BYTE *(__fastcall **)(__int64, const void *, size_t, __int64, __int64))(*(_QWORD *)v39 + 368LL);
    if ( v40 != sub_220D240 )
    {
      v40(a2[17], "Value", 5, v110, v111);
LABEL_62:
      if ( si128.m128i_i64[0] )
        (*(void (__fastcall **)(__int64, char *, __int64, void *))(*(_QWORD *)a2[17] + 232LL))(
          a2[17],
          "Description",
          11,
          ptr);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 256LL))(v34);
      goto LABEL_65;
    }
    v41 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 288LL);
    if ( v41 != sub_20CE4D0 )
    {
      v49 = v41(a2[17]);
      v46 = *(_BYTE **)(v49 + 32);
      v42 = v49;
      v47 = *(_QWORD *)(v49 + 24) - (_QWORD)v46;
      goto LABEL_57;
    }
    v42 = *(_QWORD *)(v39 + 8);
    v43 = *(_QWORD *)(v39 + 32);
    v44 = *(const void **)(v39 + 24);
    v45 = *(_QWORD *)(v42 + 24);
    v46 = *(_BYTE **)(v42 + 32);
    v47 = v45 - (_QWORD)v46;
    if ( v45 - (__int64)v46 < v43 )
    {
      sub_227BF10(*(_QWORD *)(v39 + 8), v44, *(_QWORD *)(v39 + 32));
    }
    else
    {
      if ( !v43 )
        goto LABEL_50;
      memcpy(v46, v44, *(_QWORD *)(v39 + 32));
      *(_QWORD *)(v42 + 32) += v43;
    }
    v42 = *(_QWORD *)(v39 + 8);
    v45 = *(_QWORD *)(v42 + 24);
    v46 = *(_BYTE **)(v42 + 32);
    v47 = v45 - (_QWORD)v46;
LABEL_50:
    if ( *(int *)(v39 + 16) > 0 )
    {
      v48 = 0;
      do
      {
        if ( (unsigned __int64)(v45 - (_QWORD)v46) <= 1 )
        {
          sub_227BF10(v42, "  ", 2);
        }
        else
        {
          *(_WORD *)v46 = 8224;
          *(_QWORD *)(v42 + 32) += 2LL;
        }
        v42 = *(_QWORD *)(v39 + 8);
        ++v48;
        v46 = *(_BYTE **)(v42 + 32);
        v45 = *(_QWORD *)(v42 + 24);
      }
      while ( *(_DWORD *)(v39 + 16) > v48 );
      if ( (unsigned __int64)(v45 - (_QWORD)v46) <= 4 )
      {
LABEL_72:
        v42 = sub_227BF10(v42, "Value", 5);
        v50 = *(_WORD **)(v42 + 32);
        if ( *(_QWORD *)(v42 + 24) - (_QWORD)v50 > 1u )
          goto LABEL_73;
        goto LABEL_59;
      }
LABEL_58:
      *(_DWORD *)v46 = 1970037078;
      v46[4] = 101;
      v50 = (_WORD *)(*(_QWORD *)(v42 + 32) + 5LL);
      v51 = *(_QWORD *)(v42 + 24);
      *(_QWORD *)(v42 + 32) = v50;
      if ( (unsigned __int64)(v51 - (_QWORD)v50) > 1 )
      {
LABEL_73:
        *v50 = 8250;
        *(_QWORD *)(v42 + 32) += 2LL;
LABEL_60:
        sub_227BA90(*(_QWORD *)(v39 + 8), v110, v111, 0);
        v52 = *(_QWORD *)(v39 + 8);
        v53 = *(_BYTE **)(v52 + 32);
        if ( (unsigned __int64)v53 >= *(_QWORD *)(v52 + 24) )
        {
          sub_227BA10(v52, 10);
        }
        else
        {
          *(_QWORD *)(v52 + 32) = v53 + 1;
          *v53 = 10;
        }
        goto LABEL_62;
      }
LABEL_59:
      sub_227BF10(v42, ": ", 2);
      goto LABEL_60;
    }
LABEL_57:
    if ( v47 <= 4 )
      goto LABEL_72;
    goto LABEL_58;
  }
LABEL_65:
  v54 = BYTE8(v122) == 0;
  a2[23] = v112;
  if ( v54 )
  {
    *a1 = 0;
  }
  else
  {
    v55 = v122;
    *(_QWORD *)&v122 = 0;
    *a1 = v55;
  }
  v139 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v139);
  if ( ptr != &v125 )
    free(ptr);
  sub_20CE5C0((__int64 *)&v122);
  return a1;
}
