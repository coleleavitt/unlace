__int64 __fastcall sub_4125D0(__int64 a1, __int64 a2, double a3, double a4, __m128 a5)
{
  __int64 v6; // rax
  unsigned __int64 *v7; // rbx
  unsigned __int64 *v8; // r12
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r8d
  int v17; // r9d
  _QWORD *v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rsi
  unsigned int v27; // ecx
  unsigned int i; // r12d
  unsigned int v29; // eax
  _BYTE *v30; // r14
  size_t v31; // r15
  unsigned __int64 v32; // rdi
  __int64 v33; // rbp
  _BYTE *v34; // rax
  unsigned int v35; // eax
  unsigned int v36; // esi
  __int64 v37; // rax
  int v38; // ecx
  size_t v39; // r12
  size_t v40; // rdx
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // r14
  __m256i *v43; // rcx
  size_t v44; // r12
  unsigned __int64 v45; // rax
  __m256i *v46; // r10
  __m128i v47; // xmm3
  __int8 *v48; // rdi
  __int64 v49; // r12
  __int64 v50; // r14
  int v51; // eax
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rax
  __int64 v55; // rax
  __m256i *v56; // r8
  __int64 v57; // rcx
  int v58; // esi
  __m256i *v59; // r8
  int v60; // eax
  __int64 v61; // rbp
  int v62; // r9d
  __int64 v63; // rcx
  __int64 *v64; // r14
  int v65; // edi
  __int64 v66; // r9
  __int64 v67; // r10
  __int64 *v68; // rax
  __int64 *v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  _DWORD *v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rax
  int v77; // r10d
  __m128i *v78; // rdx
  __m128i *v79; // rax
  const __m128i *v80; // r15
  __m128i *v81; // r11
  __int64 v82; // rdx
  __m128i *v83; // rsi
  __m128i *v84; // rdx
  __m128i v85; // xmm0
  int v86; // eax
  __int64 *v87; // rsi
  _DWORD *v88; // rdx
  __int64 v89; // rcx
  __int8 *v90; // rdi
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // [rsp+0h] [rbp-228h]
  int v94; // [rsp+0h] [rbp-228h]
  unsigned __int64 *v95; // [rsp+0h] [rbp-228h]
  __m256i **v96; // [rsp+8h] [rbp-220h]
  _QWORD *v97; // [rsp+8h] [rbp-220h]
  unsigned int *v98; // [rsp+10h] [rbp-218h]
  int v99; // [rsp+10h] [rbp-218h]
  unsigned int *v100; // [rsp+10h] [rbp-218h]
  void **p_src; // [rsp+18h] [rbp-210h]
  _QWORD *v102; // [rsp+18h] [rbp-210h]
  _QWORD *v103; // [rsp+20h] [rbp-208h]
  int v104; // [rsp+20h] [rbp-208h]
  _QWORD *v105; // [rsp+28h] [rbp-200h]
  char **v106; // [rsp+28h] [rbp-200h]
  int v107; // [rsp+30h] [rbp-1F8h]
  int v108; // [rsp+30h] [rbp-1F8h]
  __int64 v109; // [rsp+30h] [rbp-1F8h]
  __m256i *v110; // [rsp+30h] [rbp-1F8h]
  size_t v111; // [rsp+30h] [rbp-1F8h]
  __m256i *v112; // [rsp+30h] [rbp-1F8h]
  _QWORD *v113; // [rsp+38h] [rbp-1F0h]
  __m256i *v114; // [rsp+38h] [rbp-1F0h]
  unsigned int *v115; // [rsp+40h] [rbp-1E8h]
  int v116; // [rsp+40h] [rbp-1E8h]
  __int64 v117; // [rsp+48h] [rbp-1E0h]
  void *v118; // [rsp+48h] [rbp-1E0h]
  unsigned int **v119; // [rsp+50h] [rbp-1D8h]
  __m256i *dest; // [rsp+58h] [rbp-1D0h]
  __m256i *v121; // [rsp+60h] [rbp-1C8h]
  int v122; // [rsp+68h] [rbp-1C0h]
  unsigned int v123; // [rsp+70h] [rbp-1B8h]
  int v124; // [rsp+70h] [rbp-1B8h]
  int v125; // [rsp+78h] [rbp-1B0h]
  int v126; // [rsp+80h] [rbp-1A8h]
  __int64 v127; // [rsp+88h] [rbp-1A0h] BYREF
  __int64 v128; // [rsp+90h] [rbp-198h] BYREF
  __int64 v129; // [rsp+98h] [rbp-190h]
  __int64 v130; // [rsp+A0h] [rbp-188h] BYREF
  unsigned int *v131; // [rsp+A8h] [rbp-180h] BYREF
  __int64 v132; // [rsp+B0h] [rbp-178h] BYREF
  unsigned int *v133; // [rsp+B8h] [rbp-170h] BYREF
  _QWORD v134[4]; // [rsp+C0h] [rbp-168h] BYREF
  __m256i *v135; // [rsp+E0h] [rbp-148h] BYREF
  size_t v136; // [rsp+E8h] [rbp-140h]
  _QWORD v137[2]; // [rsp+F0h] [rbp-138h] BYREF
  void *src; // [rsp+100h] [rbp-128h] BYREF
  size_t n; // [rsp+108h] [rbp-120h]
  _QWORD v140[2]; // [rsp+110h] [rbp-118h] BYREF
  __m256i v141; // [rsp+120h] [rbp-108h] BYREF
  __m128i si128; // [rsp+140h] [rbp-E8h]
  __m128i v143; // [rsp+150h] [rbp-D8h]
  __m128i v144; // [rsp+160h] [rbp-C8h]
  __m128i v145; // [rsp+170h] [rbp-B8h]
  __m128i v146; // [rsp+180h] [rbp-A8h]
  __m128i v147; // [rsp+190h] [rbp-98h]
  __m128i v148; // [rsp+1A0h] [rbp-88h]
  __m128i v149; // [rsp+1B0h] [rbp-78h]
  __m128i v150; // [rsp+1C0h] [rbp-68h]
  __m128i v151[5]; // [rsp+1D0h] [rbp-58h]

  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(unsigned __int64 **)(a1 + 112);
  v129 = 0;
  v117 = v6;
  v128 = v6;
  v130 = v6;
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 != v8 )
    {
      do
        sub_4113B0(a1, a2, *v7++, a3, a4, a5);
      while ( v8 != v7 );
      v6 = *(_QWORD *)(a1 + 8);
    }
  }
  if ( !*(_DWORD *)(a1 + 76) )
  {
    v9 = *(_QWORD *)(v6 + 864);
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    sub_3FCDF0(*(_QWORD *)(a1 + 248), *(_QWORD *)(a1 + 256));
    *(_QWORD *)(a1 + 248) = v9;
    sub_2FCDE0((__int64 *)(a1 + 232));
    v115 = nullptr;
    v10 = 0;
    goto LABEL_9;
  }
  v132 = v6;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 296) + 32LL);
  v134[0] = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  LODWORD(v119) = a1 + 240;
  v105 = v134;
  sub_407600((unsigned int **)(a1 + 240), v134);
  v18 = *(_QWORD **)(a1 + 64);
  v19 = &v18[2 * *(unsigned int *)(a1 + 72)];
  LODWORD(v103) = (_DWORD)v18 + 16 * *(_DWORD *)(a1 + 72);
  if ( v18 == v19 )
  {
LABEL_16:
    v98 = nullptr;
    goto LABEL_17;
  }
  while ( *v18 <= 1u )
  {
    v18 += 2;
    if ( v19 == v18 )
      goto LABEL_16;
  }
  v98 = nullptr;
  if ( v19 == v18 )
  {
LABEL_17:
    v115 = nullptr;
    v10 = 0;
    goto LABEL_18;
  }
  v123 = 0;
  v113 = v140;
  p_src = &src;
  v107 = 0;
  LODWORD(v115) = 0;
  v96 = &v135;
  while ( 2 )
  {
    v93 = v18[1];
    v27 = v123;
    if ( v123 <= 9 )
    {
      LOBYTE(v140[0]) = 0;
      v31 = 1;
      src = v113;
      v113 = v140;
      v30 = v140;
LABEL_49:
      v38 = v27 + 48;
      goto LABEL_50;
    }
    for ( i = 1; ; i += 4 )
    {
      if ( v27 <= 0x63 )
      {
        v29 = i + 1;
        goto LABEL_39;
      }
      if ( v27 <= 0x3E7 )
      {
        v29 = i + 2;
        ++i;
        goto LABEL_39;
      }
      if ( v27 <= 0x270F )
      {
        v29 = i + 3;
        i += 2;
        goto LABEL_39;
      }
      v29 = i + 4;
      LODWORD(v15) = v27 / 0x2710;
      if ( v27 <= 0x1869F )
        break;
      v27 /= 0x2710u;
    }
    i += 3;
LABEL_39:
    v30 = v113;
    LOBYTE(v140[0]) = 0;
    v31 = v29;
    n = 0;
    src = v113;
    if ( v29 > 0xF )
    {
      if ( v29 <= 0x1DuLL )
      {
        v33 = 30;
        v32 = 31;
      }
      else
      {
        v32 = v29 + 1LL;
        v33 = v29;
      }
      v34 = (_BYTE *)operator new(v32);
      v30 = v34;
      if ( n )
      {
        if ( n != -1 )
          memcpy(v34, src, n + 1);
      }
      else
      {
        *v34 = *(_BYTE *)src;
      }
      sub_233E40((__int64)p_src);
      src = v30;
      v140[0] = v33;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_18B63F0);
    *(__m128i *)v141.m256i_i8 = _mm_load_si128((const __m128i *)&xmmword_18B63D0);
    v27 = v123;
    v143 = _mm_load_si128((const __m128i *)&xmmword_18B6400);
    *(__m128i *)&v141.m256i_u64[2] = _mm_load_si128((const __m128i *)&xmmword_18B63E0);
    v144 = _mm_load_si128((const __m128i *)&xmmword_18B6410);
    v145 = _mm_load_si128((const __m128i *)&xmmword_18B6420);
    v146 = _mm_load_si128((const __m128i *)&xmmword_18B6430);
    v147 = _mm_load_si128((const __m128i *)&xmmword_18B6440);
    v148 = _mm_load_si128((const __m128i *)&xmmword_18B6450);
    v149 = _mm_load_si128((const __m128i *)&xmmword_18B6460);
    v150 = _mm_load_si128((const __m128i *)&xmmword_18B6470);
    v151[0] = _mm_load_si128((const __m128i *)&xmmword_18B6480);
    *(__m128i *)((char *)v151 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6490);
    if ( v123 > 0x63 )
    {
      do
      {
        v35 = v27 % 0x64;
        v36 = v27;
        v27 /= 0x64u;
        v37 = 2 * v35;
        v30[i] = v141.m256i_i8[(unsigned int)(v37 + 1)];
        v15 = i - 1;
        i -= 2;
        v30[v15] = v141.m256i_i8[v37];
      }
      while ( v36 > 0x270F );
      if ( v36 <= 0x3E7 )
        goto LABEL_49;
    }
    v72 = 2 * v27;
    v30[1] = v141.m256i_i8[(unsigned int)(v72 + 1)];
    v38 = v141.m256i_u8[v72];
LABEL_50:
    *v30 = v38;
    n = v31;
    *((_BYTE *)src + v31) = 0;
    sub_180CE20(
      (int)v96,
      *(_DWORD *)(a1 + 24) + 16,
      v15,
      v38,
      v16,
      v17,
      v93,
      v96,
      (int)v98,
      (__int64)p_src,
      (int)v103,
      (int)v105,
      v107,
      (int)v113,
      (int)v115,
      v117,
      (int)v119,
      (int)dest,
      (int)v121,
      v122,
      v123,
      v125,
      v126,
      v127,
      v128,
      v129,
      v130,
      v131,
      v132,
      (__int64)v133);
    v39 = v136;
    if ( 0x7FFFFFFFFFFFFFFFLL - v136 <= 3 )
      std::__throw_length_error("basic_string::append");
    if ( v135 == (__m256i *)v137 )
      v40 = 15;
    else
      v40 = v137[0];
    if ( v40 < v136 + 4 )
      sub_23A830(v97, v136, 0, "__tr", 4u);
    else
      *(__int32 *)((char *)v135->m256i_i32 + v136) = 1920229215;
    v136 = v39 + 4;
    v135->m256i_i8[v39 + 4] = 0;
    v41 = n;
    v42 = v136;
    v43 = v135;
    v141.m256i_i64[0] = (__int64)&v141.m256i_i64[2];
    v44 = n + v136;
    if ( v135 == (__m256i *)v137 )
    {
      v86 = v136 + 1;
      v87 = &v141.m256i_i64[2];
      v88 = v137;
      if ( (unsigned int)(v136 + 1) >= 8 )
      {
        LODWORD(v91) = 0;
        do
        {
          v92 = (unsigned int)v91;
          v91 = (unsigned int)(v91 + 8);
          *(__int64 *)((char *)&v141.m256i_i64[2] + v92) = *(_QWORD *)((char *)v137 + v92);
        }
        while ( (unsigned int)v91 < (v86 & 0xFFFFFFF8) );
        v87 = (__int64 *)((char *)&v141.m256i_i64[2] + v91);
        v88 = (_DWORD *)((char *)v137 + v91);
      }
      v89 = 0;
      if ( (v86 & 4) != 0 )
      {
        *(_DWORD *)v87 = *v88;
        v89 = 4;
        if ( (v86 & 2) == 0 )
        {
LABEL_147:
          if ( (v86 & 1) == 0 )
            goto LABEL_148;
          goto LABEL_171;
        }
      }
      else if ( (v86 & 2) == 0 )
      {
        goto LABEL_147;
      }
      *(_WORD *)((char *)v87 + v89) = *(_WORD *)((char *)v88 + v89);
      v89 += 2;
      if ( (v86 & 1) == 0 )
      {
LABEL_148:
        v141.m256i_i64[1] = v42;
        v46 = (__m256i *)src;
        v135 = (__m256i *)v137;
        v136 = 0;
        LOBYTE(v137[0]) = 0;
        if ( v44 > 0xF )
        {
          v43 = (__m256i *)&v141.m256i_u64[2];
          v45 = 15;
          if ( src != v114 )
            goto LABEL_59;
          goto LABEL_137;
        }
LABEL_180:
        if ( 0x7FFFFFFFFFFFFFFFLL - v42 < v41 )
LABEL_192:
          std::__throw_length_error("basic_string::append");
        v43 = (__m256i *)&v141.m256i_u64[2];
        goto LABEL_62;
      }
LABEL_171:
      *((_BYTE *)v87 + v89) = *((_BYTE *)v88 + v89);
      goto LABEL_148;
    }
    v45 = v137[0];
    v141.m256i_i64[0] = (__int64)v135;
    v135 = (__m256i *)v137;
    v46 = (__m256i *)src;
    v47 = (__m128i)v137[0];
    LOBYTE(v137[0]) = 0;
    v136 = 0;
    *(__m128i *)&v141.m256i_u64[1] = _mm_unpacklo_epi64((__m128i)v42, v47);
    if ( v43 == (__m256i *)&v141.m256i_u64[2] )
    {
      if ( v44 > 0xF )
      {
        if ( src != v114 )
        {
          v45 = 15;
          goto LABEL_59;
        }
LABEL_137:
        v46 = v114;
        goto LABEL_138;
      }
      goto LABEL_180;
    }
    if ( v45 >= v44 )
    {
      if ( 0x7FFFFFFFFFFFFFFFLL - v42 < n )
        goto LABEL_192;
      goto LABEL_62;
    }
    if ( src == v114 )
    {
      if ( v44 <= 0xF )
      {
LABEL_151:
        if ( 0x7FFFFFFFFFFFFFFFLL - v41 < v42 )
          std::__throw_length_error("basic_string::_M_replace");
        if ( v43 >= v46 && &v46->m256i_i8[v41] >= (__int8 *)v43 )
        {
          std::string::_M_replace_cold();
          v46 = (__m256i *)src;
        }
        else if ( v41 )
        {
          if ( v42 )
          {
            v90 = &v46->m256i_i8[v42];
            if ( v41 == 1 )
            {
              *v90 = v46->m256i_i8[0];
            }
            else
            {
              v121 = v43;
              dest = v46;
              memmove(v90, v46, v41);
              v46 = dest;
              v43 = v121;
            }
LABEL_158:
            if ( v42 == 1 )
              v46->m256i_i8[0] = v43->m256i_i8[0];
            else
              memcpy(v46, v43, v42);
            v46 = (__m256i *)src;
          }
        }
        else if ( v42 )
        {
          goto LABEL_158;
        }
        n = v44;
        v46->m256i_i8[v44] = 0;
        sub_2333C0(v106, v102);
        goto LABEL_67;
      }
      if ( 0x7FFFFFFFFFFFFFFFLL - v42 < n )
        goto LABEL_192;
      goto LABEL_137;
    }
LABEL_59:
    if ( v140[0] >= v44 )
      goto LABEL_151;
    if ( 0x7FFFFFFFFFFFFFFFLL - v42 < v41 )
      goto LABEL_192;
    if ( v45 >= v44 )
    {
LABEL_62:
      if ( v41 )
      {
        v48 = &v43->m256i_i8[v42];
        if ( v41 == 1 )
          *v48 = v46->m256i_i8[0];
        else
          memcpy(v48, v46, v41);
        v43 = (__m256i *)v141.m256i_i64[0];
      }
      goto LABEL_66;
    }
LABEL_138:
    sub_23A830(&v141, v42, 0, v46->m256i_i8, v41);
    v43 = (__m256i *)v141.m256i_i64[0];
LABEL_66:
    v141.m256i_i64[1] = v44;
    v43->m256i_i8[v44] = 0;
    sub_2333C0(v106, &v141);
LABEL_67:
    if ( (unsigned __int64 *)v141.m256i_i64[0] != &v141.m256i_u64[2] )
      operator delete((void *)v141.m256i_i64[0], v141.m256i_i64[2] + 1);
    sub_233E40((__int64)v97);
    sub_233E40((__int64)v102);
    v49 = *(_QWORD *)(a1 + 8);
    v50 = *(_QWORD *)(v49 + 840);
    sub_180C5A0(&v141, v134[0]);
    v51 = sub_15E3510(v49, &v141, 0, 0, v50, 0);
    v54 = sub_15DC610(
            v49,
            v51,
            0,
            0,
            v52,
            v53,
            v94,
            (int)v97,
            v99,
            (int)v102,
            v104,
            (char)v106,
            v108,
            (int)v114,
            v116,
            v118);
    v10 = v54;
    if ( v54 )
      ++*(_DWORD *)(v54 + 8);
    sub_3FCDD0(v109, v117);
    *(_OWORD *)v141.m256i_i8 = *v95;
    v55 = sub_41F0C0(a1 + 64, &v141);
    if ( !v55 )
    {
      sub_1872CE0("");
      sub_1873130(114, 408);
    }
    v56 = *(__m256i **)(v55 + 8);
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    v110 = v56;
    sub_3FCDD0(v56[1].m256i_i64[2], v56[1].m256i_i64[3]);
    v57 = *(unsigned int *)(a1 + 96);
    v58 = *(_DWORD *)(a1 + 104);
    v59 = v110;
    v60 = v58 + *(_DWORD *)(a1 + 100);
    v110[1].m256i_i64[2] = v10;
    if ( 3 * (int)v57 < (unsigned int)(4 * v60) )
    {
      v121 = v110;
      LODWORD(dest) = 2 * v57;
      v111 = 16LL * (unsigned int)(2 * v57);
      v76 = sub_186B270(v111);
      v77 = (int)dest;
      v63 = v111;
      v61 = v76;
      v78 = (__m128i *)v76;
      v59 = v121;
      v79 = (__m128i *)(v76 + v111);
      if ( (_DWORD)dest )
      {
        if ( (((_BYTE)v79 - (_BYTE)v61) & 0x10) == 0
          || (v78 = (__m128i *)(v61 + 16), *(_OWORD *)v61 = 0, v79 != (__m128i *)(v61 + 16)) )
        {
          do
          {
            *v78 = 0;
            v78 += 2;
            v78[-1] = 0;
          }
          while ( v79 != v78 );
        }
      }
      v80 = *(const __m128i **)(a1 + 88);
      v62 = (_DWORD)dest - 1;
      v64 = (__int64 *)v79;
      v81 = (__m128i *)&v80[*(unsigned int *)(a1 + 96)];
      if ( v80 != v81 )
      {
        do
        {
          while ( v80->m128i_i64[0] <= 1uLL )
          {
            if ( v81 == ++v80 )
              goto LABEL_118;
          }
          v82 = 16LL * (*(_DWORD *)(v80->m128i_i64[0] + 12) & (unsigned int)v62);
          v83 = (__m128i *)(v61 + v82);
          if ( v111 == v82 )
          {
LABEL_122:
            if ( (__m128i *)v61 == v83 )
            {
LABEL_142:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v84 = (__m128i *)v61;
            while ( v84->m128i_i64[0] )
            {
              if ( v83 == ++v84 )
                goto LABEL_142;
            }
          }
          else
          {
            v84 = (__m128i *)(v61 + v82);
            while ( v84->m128i_i64[0] )
            {
              if ( v79 == ++v84 )
                goto LABEL_122;
            }
          }
          v85 = _mm_loadu_si128(v80++);
          *v84 = v85;
        }
        while ( v81 != v80 );
LABEL_118:
        v81 = *(__m128i **)(a1 + 88);
      }
      if ( v81 )
      {
        v122 = (int)dest;
        v121 = (__m256i *)v111;
        LODWORD(dest) = (_DWORD)dest - 1;
        v112 = v59;
        sub_186B220(v81);
        v77 = v122;
        v63 = (__int64)v121;
        v62 = (int)dest;
        v59 = v112;
      }
      *(_QWORD *)(a1 + 88) = v61;
      v58 = 0;
      *(_DWORD *)(a1 + 96) = v77;
      *(_DWORD *)(a1 + 104) = 0;
    }
    else
    {
      v61 = *(_QWORD *)(a1 + 88);
      v62 = v57 - 1;
      v63 = 16 * v57;
      v64 = (__int64 *)(v61 + v63);
    }
    v65 = *(_DWORD *)(v10 + 12);
    v66 = 16LL * (v65 & (unsigned int)v62);
    v67 = v61 + v66;
    if ( v66 != v63 )
    {
      v68 = (__int64 *)(v61 + v66);
      v69 = nullptr;
      while ( 1 )
      {
        v70 = *v68;
        if ( (unsigned __int64)*v68 > 1 )
        {
          if ( *(_DWORD *)(v70 + 12) == v65 && v10 == v70 )
          {
            *v68 = v10;
            v68[1] = (__int64)v59;
            goto LABEL_93;
          }
        }
        else
        {
          if ( !v70 )
          {
            if ( v69 )
              goto LABEL_130;
            v69 = v68;
            goto LABEL_131;
          }
          v69 = v68;
        }
        v68 += 2;
        if ( v68 == v64 )
          goto LABEL_87;
      }
    }
    v69 = nullptr;
    while ( 1 )
    {
LABEL_87:
      if ( v67 == v61 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v71 = *(_QWORD *)v61;
      if ( *(_QWORD *)v61 <= 1u )
        break;
      if ( *(_DWORD *)(v71 + 12) == v65 && v10 == v71 )
      {
        *(_QWORD *)v61 = v10;
        *(_QWORD *)(v61 + 8) = v59;
        goto LABEL_93;
      }
LABEL_86:
      v61 += 16;
    }
    if ( v71 )
    {
      v69 = (__int64 *)v61;
      goto LABEL_86;
    }
    if ( v69 )
LABEL_130:
      *(_DWORD *)(a1 + 104) = v58 - 1;
    else
      v69 = (__int64 *)v61;
LABEL_131:
    *v69 = v10;
    v69[1] = (__int64)v59;
    ++*(_DWORD *)(a1 + 100);
LABEL_93:
    ++*(_DWORD *)(v10 + 8);
    v127 = v10;
    sub_407600(v119, &v127);
    v73 = sub_15E1B70(*(_QWORD *)(a1 + 8));
    v135 = (__m256i *)v73;
    if ( v73 )
      ++*(_DWORD *)(v73 + 8);
    v133 = v100;
    sub_407600(&v133, v96);
    v98 = v133;
    if ( *(_DWORD *)(*v95 + 68) )
    {
      v74 = (_DWORD *)sub_15E1A70(*(_QWORD *)(a1 + 8));
      src = v74;
      if ( v74 )
        ++v74[2];
      v131 = v115;
      sub_407600(&v131, p_src);
      v115 = v131;
    }
    v123 = v124 + 1;
    sub_233E40((__int64)v105);
    LODWORD(v15) = (_DWORD)v103;
    v75 = v18 + 2;
    if ( v103 != v18 + 2 )
    {
      while ( 1 )
      {
        v18 = v75;
        if ( *v75 > 1u )
          break;
        v75 += 2;
        if ( v103 == v75 )
          goto LABEL_18;
      }
      if ( v103 != v75 )
      {
        v107 = v10;
        continue;
      }
    }
    break;
  }
LABEL_18:
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 649LL) )
  {
    v20 = *(_QWORD *)(a1 + 240);
    if ( v20 )
      v21 = *(unsigned int *)(v20 - 4);
    else
      v21 = 0;
    v22 = sub_15EC240(*(_QWORD *)(a1 + 232), v21);
    v23 = v22;
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    if ( !v98 || (v24 = *(v98 - 1), v24 == *(v98 - 2)) )
    {
      v133 = v98;
      sub_23A6F0(&v133);
      v98 = v133;
      v24 = *(v133 - 1);
    }
    *(_QWORD *)&v98[2 * v24] = v23;
    *(v98 - 1) = v24 + 1;
    sub_2FCDE0((__int64 *)(a1 + 232));
  }
  v133 = v98;
  sub_41C800(&v141, &v132);
  v25 = *(_QWORD *)(a1 + 248);
  v26 = v141.m256i_i64[1];
  *(_QWORD *)(a1 + 248) = v141.m256i_i64[0];
  sub_3FCDF0(v25, v26);
  sub_2334C0(&v132);
LABEL_9:
  v131 = v115;
  sub_41C800(&v141, &v130);
  v11 = *(_QWORD *)(a1 + 264);
  v12 = v141.m256i_i64[1];
  *(_QWORD *)(a1 + 264) = v141.m256i_i64[0];
  sub_3FCDF0(v11, v12);
  if ( !v115 || !*(v115 - 1) )
    *(_BYTE *)(a1 + 312) = 1;
  sub_3FCDD0(v10, v117);
  sub_2334C0(&v130);
  return sub_2334C0(&v128);
}

