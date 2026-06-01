__int64 __fastcall sub_62E310(__int64 a1, __int64 a2, __int64 *a3, double a4, double a5, __m128 a6)
{
  __int64 v7; // rax
  int v8; // r9d
  unsigned int v9; // r13d
  __m128 si128; // xmm0
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 *v14; // r15
  __int64 v15; // rsi
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rax
  char *v25; // rax
  char *v26; // r12
  __int64 v27; // rsi
  __int64 *v28; // rdx
  unsigned int v29; // r10d
  int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // edi
  __int64 *v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rsi
  __int64 v36; // r8
  __int64 *v37; // rsi
  __int64 *v38; // rcx
  __int64 *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // r13
  __int64 v42; // rcx
  __int64 *v43; // rdi
  __int64 v44; // rcx
  __int64 *v45; // r15
  __m128i v46; // xmm3
  __int64 v47; // rax
  _BYTE *v48; // rax
  size_t v49; // rax
  __int64 v50; // r8
  _QWORD *v51; // r9
  unsigned __int64 v52; // rsi
  __int64 v53; // rax
  char *v54; // rcx
  __int64 *v55; // r11
  char *v56; // rax
  int v57; // edx
  __int64 v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 *v64; // r14
  int v66; // eax
  unsigned int *v67; // rdi
  char *v68; // rax
  int v69; // edx
  size_t v70; // rdx
  void *v71; // rsi
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  unsigned __int64 v74; // rdi
  _QWORD *v75; // rax
  __int64 v76; // r8
  _QWORD *v77; // r9
  _QWORD *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // r15
  __int16 v81; // ax
  __int64 v82; // rax
  void *v83; // r11
  int v84; // r10d
  _QWORD *v85; // r14
  __int64 v86; // rax
  unsigned int v87; // r12d
  std::ios_base *v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rax
  std::ios_base *v91; // rbx
  unsigned __int64 v92; // rdx
  unsigned __int64 v93; // rdi
  __int64 v94; // rax
  std::ios_base *v95; // rbx
  __int64 *v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rax
  int v99; // eax
  __int64 *v100; // r13
  __int64 *v101; // r15
  __int64 *v102; // rdx
  __int64 v103; // [rsp+8h] [rbp-378h]
  __int64 n; // [rsp+10h] [rbp-370h]
  size_t na; // [rsp+10h] [rbp-370h]
  void *v106; // [rsp+18h] [rbp-368h]
  void *v107; // [rsp+18h] [rbp-368h]
  _QWORD *v108; // [rsp+18h] [rbp-368h]
  void *v109; // [rsp+18h] [rbp-368h]
  __int64 v110; // [rsp+20h] [rbp-360h]
  _QWORD *ptr; // [rsp+28h] [rbp-358h]
  __int64 v112; // [rsp+30h] [rbp-350h]
  char *v113; // [rsp+38h] [rbp-348h] BYREF
  __m128i v114; // [rsp+40h] [rbp-340h] BYREF
  __int64 **v115; // [rsp+50h] [rbp-330h]
  int v116; // [rsp+5Ch] [rbp-324h]
  unsigned int v117; // [rsp+60h] [rbp-320h]
  unsigned int v118; // [rsp+64h] [rbp-31Ch]
  __int64 v119; // [rsp+68h] [rbp-318h]
  __m128i v120; // [rsp+70h] [rbp-310h] BYREF
  int v121[2]; // [rsp+80h] [rbp-300h]
  _QWORD *v122; // [rsp+88h] [rbp-2F8h]
  std::locale *v123; // [rsp+90h] [rbp-2F0h]
  __int64 v124; // [rsp+98h] [rbp-2E8h]
  __int64 v125; // [rsp+A0h] [rbp-2E0h]
  unsigned int *v126; // [rsp+A8h] [rbp-2D8h]
  __int64 *v127; // [rsp+B0h] [rbp-2D0h]
  __int64 *v128; // [rsp+B8h] [rbp-2C8h]
  __int64 v129; // [rsp+C0h] [rbp-2C0h]
  char v130[8]; // [rsp+C8h] [rbp-2B8h]
  std::ios_base *v131[2]; // [rsp+D0h] [rbp-2B0h] BYREF
  __int64 v132; // [rsp+E0h] [rbp-2A0h]
  __int64 *v133; // [rsp+E8h] [rbp-298h]
  char v134; // [rsp+F7h] [rbp-289h]
  unsigned int *v135; // [rsp+F8h] [rbp-288h] BYREF
  unsigned __int64 v136; // [rsp+100h] [rbp-280h] BYREF
  __int64 v137; // [rsp+108h] [rbp-278h] BYREF
  __int64 v138; // [rsp+110h] [rbp-270h] BYREF
  __int64 v139; // [rsp+118h] [rbp-268h] BYREF
  __int64 v140; // [rsp+120h] [rbp-260h] BYREF
  __int64 *v141; // [rsp+128h] [rbp-258h] BYREF
  __int64 v142; // [rsp+130h] [rbp-250h] BYREF
  __int64 *v143; // [rsp+138h] [rbp-248h] BYREF
  __int64 v144; // [rsp+140h] [rbp-240h] BYREF
  unsigned __int64 v145; // [rsp+148h] [rbp-238h] BYREF
  __m128 v146; // [rsp+150h] [rbp-230h] BYREF
  void *v147; // [rsp+160h] [rbp-220h] BYREF
  size_t v148; // [rsp+168h] [rbp-218h]
  _QWORD dest[2]; // [rsp+170h] [rbp-210h] BYREF
  void *v150; // [rsp+180h] [rbp-200h] BYREF
  int v151; // [rsp+188h] [rbp-1F8h]
  __int64 v152; // [rsp+18Ch] [rbp-1F4h]
  _QWORD *v153; // [rsp+198h] [rbp-1E8h] BYREF
  int v154; // [rsp+1A0h] [rbp-1E0h]
  __int64 v155; // [rsp+1A4h] [rbp-1DCh]
  _QWORD v156[2]; // [rsp+1B0h] [rbp-1D0h] BYREF
  __int64 *v157; // [rsp+1C0h] [rbp-1C0h] BYREF
  __int64 v158; // [rsp+1C8h] [rbp-1B8h]
  __m128i v159; // [rsp+1D0h] [rbp-1B0h] BYREF
  __int128 v160; // [rsp+1E0h] [rbp-1A0h]
  void *src[2]; // [rsp+1F0h] [rbp-190h]
  __int128 v162; // [rsp+200h] [rbp-180h]
  char v163[8]; // [rsp+210h] [rbp-170h] BYREF
  int v164; // [rsp+218h] [rbp-168h]
  void *v165; // [rsp+220h] [rbp-160h]
  __int64 v166; // [rsp+228h] [rbp-158h]
  _QWORD v167[2]; // [rsp+230h] [rbp-150h] BYREF
  _QWORD v168[28]; // [rsp+240h] [rbp-140h] BYREF
  __int16 v169; // [rsp+320h] [rbp-60h]
  __int128 v170; // [rsp+328h] [rbp-58h]
  __int128 v171; // [rsp+338h] [rbp-48h]

  v7 = a3[1];
  v8 = *(_DWORD *)(a2 + 56);
  v119 = a1;
  v128 = a3;
  *(_QWORD *)v121 = v7;
  if ( v8 )
  {
    v9 = 0;
    v133 = &v146.m128_i64[1];
    si128 = (__m128)_mm_move_epi64((__m128i)(unsigned __int64)v7);
    do
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(a2 + 8LL * v9 + 80);
        v136 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v11 > 7 )
          ++*(_DWORD *)((v11 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        v146 = si128;
        sub_62BD60(v133, &v136);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v146);
        v132 = v146.m128_i64[1];
        v129 = v146.m128_u64[0];
        if ( (*(_QWORD *)(a2 + 8LL * v9 + 80) & 7LL) == 1 )
          break;
        if ( ++v9 >= *(_DWORD *)(a2 + 56) )
          goto LABEL_15;
      }
      a6 = _mm_movehl_ps(a6, si128);
      *(__m128 *)v131 = si128;
      v12 = sub_15E1A70(v121[0]);
      si128 = (__m128)_mm_load_si128((const __m128i *)v131);
      v13 = 0x7FFFFFFF8LL;
      if ( a6.m128_u64[0] )
        v13 = 8LL * (unsigned int)(*(_DWORD *)(a6.m128_u64[0] - 4) - 1);
      v14 = (__int64 *)(a6.m128_u64[0] + v13);
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      v15 = *v14;
      if ( *v14 )
      {
        if ( (*(_DWORD *)(v15 + 8))-- == 1 )
        {
          *(_QWORD *)v130 = v12;
          *(__m128 *)v131 = si128;
          sub_15D7BC0(si128.m128_u64[0], v15);
          v12 = *(_QWORD *)v130;
          si128 = (__m128)_mm_load_si128((const __m128i *)v131);
        }
      }
      *v14 = v12;
      ++v9;
    }
    while ( v9 < *(_DWORD *)(a2 + 56) );
LABEL_15:
    v17 = v128[1];
  }
  else
  {
    v129 = v7;
    v17 = v7;
    v132 = 0;
  }
  v18 = *(_QWORD *)(a2 + 40);
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  sub_629FE0(*v128, v17);
  v19 = v132;
  *v128 = v18;
  if ( v19 )
  {
    v20 = *(_DWORD *)(v19 - 4);
    if ( v20 )
    {
      if ( v20 != 1 )
        sub_15E1AF0(v121[0]);
      v21 = sub_15E1B70(v121[0]);
      v22 = v21;
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      v17 = v128[1];
      sub_629FE0(*v128, v17);
      *v128 = v22;
    }
  }
  v23 = v119 + 296;
  sub_157C960(v119 + 296, v17);
  sub_157E9E0(v119 + 296, *v128);
  v24 = *(_QWORD *)(v119 + 320);
  if ( v24 && *(_DWORD *)(v24 - 4) )
  {
    v25 = (char *)sub_186B270(0x80u);
    *(_QWORD *)v25 = 0;
    v26 = v25;
    *((_QWORD *)v25 + 1) = 0;
    *((_QWORD *)v25 + 2) = 0;
    *((_QWORD *)v25 + 3) = 0;
    *((_QWORD *)v25 + 4) = 0;
    *((_QWORD *)v25 + 5) = 0;
    *((_QWORD *)v25 + 6) = 0;
    *((_QWORD *)v25 + 7) = 0;
    *((_QWORD *)v25 + 8) = 0;
    *((_QWORD *)v25 + 9) = 0;
    *((_QWORD *)v25 + 10) = 0;
    *((_QWORD *)v25 + 11) = 0;
    *((_QWORD *)v25 + 12) = 0;
    *((_QWORD *)v25 + 13) = 0;
    *((_QWORD *)v25 + 14) = 0;
    *((_QWORD *)v25 + 15) = 0;
    v152 = 0;
    ptr = (_QWORD *)sub_186B270(0x40u);
    *(_OWORD *)ptr = 0;
    *((_OWORD *)ptr + 1) = 0;
    *((_OWORD *)ptr + 2) = 0;
    *((_OWORD *)ptr + 3) = 0;
    v113 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 64;
    v155 = 0;
    v27 = *(_QWORD *)(*(_QWORD *)v121 + 840LL);
    v114 = _mm_unpacklo_epi64(
             (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                     + 64),
             (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    sub_157CA60(v23, v27);
    v140 = *v128;
    v126 = (unsigned int *)sub_629F40(ptr, 8u, v140);
    if ( v126 )
    {
      v117 = 8;
      v29 = 8;
      v110 = 0;
    }
    else
    {
      v141 = v28;
      v150 = v26;
      v151 = 8;
      v153 = ptr;
      v154 = 8;
      v156[0] = 0;
      sub_4A3CA0((__int64)&v153, &v141);
      sub_62BD60(v156, &v140);
LABEL_141:
      v26 = (char *)v150;
      v29 = v154;
      v117 = v151;
      ptr = v153;
      v110 = v156[0];
    }
LABEL_29:
    if ( v110 )
    {
      while ( 1 )
      {
        v30 = *(_DWORD *)(v110 - 4);
        if ( !v30 )
          break;
        v79 = (unsigned int)(v30 - 1);
        v80 = *(_QWORD *)(v110 + 8 * v79);
        *(_DWORD *)(v110 - 4) = v79;
        v81 = *(_WORD *)(v80 + 4);
        if ( !v81 )
        {
          v98 = *(_QWORD *)(v80 + 16);
          v150 = v26;
          v154 = v29;
          v139 = *(_QWORD *)(v98 + 16);
          v151 = v117;
          v153 = ptr;
          v156[0] = v110;
          sub_6338A0(&v150, &v139);
          v26 = (char *)v150;
          v29 = v154;
          v117 = v151;
          ptr = v153;
          v110 = v156[0];
          v99 = *(_DWORD *)(v80 + 24);
          if ( v99 )
          {
            v100 = (__int64 *)(v80 + 8LL * (unsigned int)(v99 - 1) + 32);
            v101 = (__int64 *)(v80 + 24);
            do
            {
              v142 = *v100;
              v126 = (unsigned int *)sub_629F40(ptr, v29, v142);
              if ( !v126 )
              {
                v143 = v102;
                v150 = v26;
                v151 = v117;
                v154 = v29;
                v153 = ptr;
                v156[0] = v110;
                sub_4A3CA0((__int64)&v153, &v143);
                sub_62BD60(v156, &v142);
                v26 = (char *)v150;
                v29 = v154;
                v117 = v151;
                ptr = v153;
                v110 = v156[0];
              }
              --v100;
            }
            while ( v101 != v100 );
          }
          goto LABEL_29;
        }
        if ( v81 == 2 )
        {
          v82 = *(_QWORD *)(v80 + 56);
          v150 = v26;
          v154 = v29;
          v138 = v82;
          v151 = v117;
          v153 = ptr;
          v156[0] = v110;
          sub_6338A0(&v150, &v138);
          v83 = v150;
          v84 = v151;
          v85 = v153;
          v133 = (__int64 *)v156[0];
          v86 = *(unsigned int *)(v80 + 20);
          v87 = v154;
          if ( (_DWORD)v86 )
          {
            v131[0] = (std::ios_base *)*(unsigned int *)(v80 + 20);
            v88 = nullptr;
            *(_QWORD *)v130 = &v137;
            while ( 1 )
            {
              v150 = v83;
              v89 = *(_QWORD *)(v80 + 8 * ((_QWORD)v88 + v86) + 80);
              v151 = v84;
              v153 = v85;
              v137 = v89;
              v154 = v87;
              v156[0] = v133;
              sub_6338A0(&v150, *(_QWORD *)v130);
              v88 = (std::ios_base *)((char *)v88 + 1);
              v83 = v150;
              v84 = v151;
              v85 = v153;
              v133 = (__int64 *)v156[0];
              v87 = v154;
              if ( v88 == v131[0] )
                break;
              v86 = *(unsigned int *)(v80 + 20);
            }
          }
          v90 = *(unsigned int *)(v80 + 72);
          if ( (_DWORD)v90 )
          {
            v91 = nullptr;
            v131[0] = (std::ios_base *)(8 * v90);
            *(_QWORD *)v130 = &v145;
            do
            {
              v144 = *(_QWORD *)((char *)v91 + 16 * *(unsigned int *)(v80 + 20) + v80 + 80);
              v126 = (unsigned int *)sub_629F40(v85, v87, v144);
              if ( !v126 )
              {
                v145 = v92;
                v150 = v83;
                v151 = v84;
                v153 = v85;
                v154 = v87;
                v156[0] = v133;
                sub_4A3CA0((__int64)&v153, *(__int64 ***)v130);
                sub_62BD60(v156, &v144);
                v83 = v150;
                v84 = v151;
                v85 = v153;
                v133 = (__int64 *)v156[0];
                v87 = v154;
              }
              v91 = (std::ios_base *)((char *)v91 + 8);
            }
            while ( v91 != v131[0] );
          }
          v94 = *(unsigned int *)(v80 + 76);
          if ( (_DWORD)v94 )
          {
            v95 = nullptr;
            v131[0] = (std::ios_base *)(8 * v94);
            *(_QWORD *)v130 = &v157;
            do
            {
              v147 = *(void **)((char *)v95 + 16 * *(unsigned int *)(v80 + 20) + v80 + 80);
              v126 = (unsigned int *)sub_629F40(v85, v87, (__int64)v147);
              if ( !v126 )
              {
                v157 = v96;
                v150 = v83;
                v151 = v84;
                v153 = v85;
                v154 = v87;
                v156[0] = v133;
                sub_4A3CA0((__int64)&v153, *(__int64 ***)v130);
                sub_62BD60(v156, &v147);
                v83 = v150;
                v84 = v151;
                v85 = v153;
                v133 = (__int64 *)v156[0];
                v87 = v154;
              }
              v95 = (std::ios_base *)((char *)v95 + 8);
            }
            while ( v131[0] != v95 );
          }
          v97 = *(_QWORD *)(v80 + 24);
          v150 = v83;
          v151 = v84;
          v153 = v85;
          v154 = v87;
          v156[0] = v133;
          sub_634400(&v150, v97);
          goto LABEL_141;
        }
      }
    }
    v31 = *(_QWORD *)(v119 + 320);
    if ( v31 )
    {
      v32 = *(_DWORD *)(v31 - 4);
      v33 = *(__int64 **)(v119 + 320);
      v34 = v32 - 1;
      if ( v32 >> 1 )
      {
        do
        {
          v35 = v34;
          v36 = *v33;
          --v34;
          ++v33;
          v37 = (__int64 *)(v31 + 8 * v35);
          *(v33 - 1) = *v37;
          *v37 = v36;
        }
        while ( v34 != v32 - 1 - (v32 >> 1) );
      }
      v118 = 0;
      v126 = nullptr;
      v116 = 0;
      v112 = 16LL * v117;
      v115 = &v157;
LABEL_35:
      if ( v118 < v32 )
      {
        *(_DWORD *)v130 = 65;
        while ( 1 )
        {
          v32 = *(_DWORD *)(v31 - 4);
          if ( v118 >= v32 || *(_DWORD *)v130 == 91 )
          {
            ++v116;
            goto LABEL_35;
          }
          v131[0] = (std::ios_base *)v168;
          std::ios_base::ios_base((std::ios_base *)v168);
          v169 = 0;
          v38 = (__int64 *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
          v170 = 0;
          v171 = 0;
          v39 = (__int64 *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
          v168[0] = (char *)&`vtable for'std::ios + 16;
          v40 = *(v38 - 3);
          v168[27] = 0;
          v157 = v38;
          *(__int64 **)((char *)&v157 + v40) = v39;
          v127 = v39;
          v158 = 0;
          v133 = v38;
          std::ios::init();
          v41 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
          v42 = *(_QWORD *)(v41 - 24);
          v159.m128i_i64[0] = v41;
          v43 = (__int64 *)((char *)v159.m128i_i64 + v42);
          v44 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
          *v43 = v44;
          v125 = v44;
          std::ios::init();
          v45 = (__int64 *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
          v46 = _mm_load_si128(&v114);
          v47 = *(_QWORD *)(`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1] - 24LL);
          v124 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
          v123 = (std::locale *)v163;
          *(__int64 **)((char *)&v157 + v47) = v45;
          v157 = (__int64 *)((char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                           + 24);
          v168[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
          v159 = v46;
          v160 = 0;
          *(_OWORD *)src = 0;
          v162 = 0;
          std::locale::locale((std::locale *)v163);
          v164 = 24;
          v122 = v167;
          v159.m128i_i64[1] = (__int64)&`vtable for'std::stringbuf + 16;
          v165 = v167;
          v166 = 0;
          LOBYTE(v167[0]) = 0;
          std::ios::init();
          v134 = v130[0];
          if ( *(void **)((char *)&src[-2] + *(_QWORD *)(v159.m128i_i64[0] - 24)) )
            std::__ostream_insert<char,std::char_traits<char>>();
          else
            std::ostream::put((std::ostream *)&v159, v130[0]);
          if ( v116 )
            std::ostream::_M_insert<unsigned long>();
          v48 = (_BYTE *)v162;
          v148 = 0;
          v147 = dest;
          LOBYTE(dest[0]) = 0;
          if ( (_QWORD)v162 )
          {
            if ( src[0] >= (void *)v162 )
              v48 = src[0];
            if ( !src[0] )
              v48 = (_BYTE *)v162;
            v49 = v48 - (char *)src[1];
            v50 = v49;
            if ( (v49 & 0x8000000000000000LL) != 0LL )
            {
              v120.m128i_i64[0] = (__int64)&v147;
              std::__throw_length_error("basic_string::_M_replace");
            }
            if ( v49 > 0xF )
            {
              if ( v49 <= 0x1D )
              {
                v103 = 30;
                v74 = 31;
              }
              else
              {
                v74 = v49 + 1;
                if ( (__int64)(v49 + 1) < 0 )
                {
                  v120.m128i_i64[0] = (__int64)&v147;
                  std::__throw_bad_alloc();
                }
                v103 = v49;
              }
              n = v49;
              v107 = src[1];
              v120.m128i_i64[0] = (__int64)&v147;
              v75 = (_QWORD *)operator new(v74);
              v76 = n;
              v77 = v75;
              if ( v107 )
              {
                v120.m128i_i64[0] = n;
                v78 = memcpy(v75, v107, n);
                v76 = v120.m128i_i64[0];
                v77 = v78;
              }
              v108 = v77;
              v120.m128i_i64[0] = v76;
              sub_233E40((__int64)&v147);
              v51 = v108;
              v50 = v120.m128i_i64[0];
              v147 = v108;
              dest[0] = v103;
            }
            else
            {
              v120.m128i_i64[0] = (__int64)&v147;
              if ( src[1] == dest )
              {
                v106 = (void *)v49;
                std::string::_M_replace_cold();
                v50 = (__int64)v106;
                v51 = v147;
              }
              else
              {
                if ( v49 )
                {
                  if ( v49 == 1 )
                  {
                    LOBYTE(dest[0]) = *(_BYTE *)src[1];
                  }
                  else
                  {
                    v120.m128i_i64[0] = v49;
                    memcpy(dest, src[1], v49);
                    v50 = v120.m128i_i64[0];
                  }
                }
                v51 = dest;
              }
            }
            v148 = v50;
            *((_BYTE *)v51 + v50) = 0;
            goto LABEL_54;
          }
          v70 = v166;
          if ( (unsigned __int64)v166 > 0xF )
            break;
          if ( v166 )
          {
            v71 = v165;
            v72 = dest;
            if ( v166 != 1 )
              goto LABEL_132;
            LOBYTE(dest[0]) = *(_BYTE *)v165;
          }
          v73 = dest;
LABEL_104:
          v148 = v70;
          *((_BYTE *)v73 + v70) = 0;
LABEL_54:
          v120 = _mm_unpacklo_epi64(
                   _mm_loadl_epi64((const __m128i *)&v113),
                   (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
          sub_180C5A0(&v145, v147);
          if ( v147 != dest )
            operator delete(v147, dest[0] + 1LL);
          if ( v145 )
          {
            if ( (v145 & 7) == 1 )
              v52 = v145 >> 3;
            else
              LODWORD(v52) = *(_DWORD *)(v145 - 8);
          }
          else
          {
            LODWORD(v52) = -1640531495;
          }
          v53 = 16LL * ((unsigned int)v52 & (v117 - 1));
          v54 = &v26[v53];
          if ( v53 == v112 )
          {
LABEL_87:
            if ( v26 != v54 )
            {
              v55 = v133;
              v68 = v26;
              while ( 1 )
              {
                v69 = *((_DWORD *)v68 + 1);
                if ( v69 == 2 )
                {
                  if ( (_DWORD)v52 == *(_DWORD *)v68 && v145 == *((_QWORD *)v68 + 1) )
                    goto LABEL_66;
                }
                else if ( !v69 )
                {
                  goto LABEL_83;
                }
                v68 += 16;
                if ( v54 == v68 )
                  goto LABEL_83;
              }
            }
            goto LABEL_84;
          }
          v55 = v133;
          v56 = &v26[v53];
          while ( 1 )
          {
            v57 = *((_DWORD *)v56 + 1);
            if ( v57 != 2 )
              break;
            if ( (_DWORD)v52 == *(_DWORD *)v56 && v145 == *((_QWORD *)v56 + 1) )
            {
LABEL_66:
              v133 = v55;
              goto LABEL_67;
            }
LABEL_62:
            v56 += 16;
            if ( &v26[v112] == v56 )
              goto LABEL_87;
          }
          if ( v57 )
            goto LABEL_62;
LABEL_83:
          v133 = v55;
LABEL_84:
          if ( !v126 || (v66 = *(v126 - 1), v66 == *(v126 - 2)) )
          {
            v135 = v126;
            sub_41E8A0(&v135);
            v126 = v135;
            v66 = *(v135 - 1);
          }
          v67 = v126;
          ++v118;
          *(_QWORD *)&v126[2 * v66] = v145;
          *(v67 - 1) = v66 + 1;
LABEL_67:
          v159 = _mm_load_si128(&v120);
          v157 = (__int64 *)((char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                           + 24);
          v168[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
          if ( v165 != v122 )
            operator delete(v165, v167[0] + 1LL);
          v159.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
          std::locale::~locale(v123);
          v58 = v125;
          *(__int64 **)((char *)&v157 + *(_QWORD *)(v124 - 24)) = v45;
          v59 = *(_QWORD *)(v41 - 24);
          v159.m128i_i64[0] = v41;
          *(__int64 *)((char *)v159.m128i_i64 + v59) = v58;
          v157 = v133;
          *(__int64 **)((char *)&v157 + *(v133 - 3)) = v127;
          v158 = 0;
          v168[0] = (char *)&`vtable for'std::ios + 16;
          std::ios_base::~ios_base(v131[0]);
          ++*(_DWORD *)v130;
          v31 = *(_QWORD *)(v119 + 320);
          if ( !v31 )
          {
            v60 = 0;
            v61 = *v128;
            goto LABEL_72;
          }
        }
        if ( v166 < 0 )
        {
          v120.m128i_i64[0] = (__int64)&v147;
          std::__throw_length_error("basic_string::_M_create");
        }
        if ( (unsigned __int64)v166 <= 0x1D )
        {
          v109 = &qword_18 + 6;
          v93 = 31;
        }
        else
        {
          v93 = v166 + 1;
          if ( v166 + 1 < 0 )
          {
            v120.m128i_i64[0] = (__int64)&v147;
            std::__throw_bad_alloc();
          }
          v109 = (void *)v166;
        }
        na = v166;
        v120.m128i_i64[0] = (__int64)&v147;
        v120.m128i_i64[0] = operator new(v93);
        sub_233E40((__int64)&v147);
        v72 = (_QWORD *)v120.m128i_i64[0];
        v71 = v165;
        v70 = na;
        v147 = (void *)v120.m128i_i64[0];
        dest[0] = v109;
LABEL_132:
        v120.m128i_i64[0] = v70;
        memcpy(v72, v71, v70);
        v73 = v147;
        v70 = v120.m128i_i64[0];
        goto LABEL_104;
      }
      v60 = *(unsigned int *)(v31 - 4);
      v61 = *v128;
    }
    else
    {
      v60 = 0;
      v126 = nullptr;
      v61 = *v128;
    }
LABEL_72:
    v62 = sub_15DB6A0(*(_QWORD *)v121, 0, v60, v31, v126, v61, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
    v63 = v62;
    if ( v62 )
      ++*(_DWORD *)(v62 + 8);
    v64 = v128;
    sub_629FE0(*v128, v128[1]);
    *v64 = v63;
    if ( v110 )
      sub_186B220((void *)(v110 - 8));
    if ( ptr )
      sub_186B220(ptr);
    if ( v26 )
      sub_186B220(v26);
    if ( v126 )
      sub_186B220(v126 - 2);
  }
  v146.m128_u64[0] = v129;
  v146.m128_u64[1] = v132;
  return sub_2334C0((__int64 *)&v146);
}

