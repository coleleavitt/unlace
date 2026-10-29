__int64 __fastcall sub_22BC1E0(__int64 a1, char *a2, char *a3, unsigned int a4)
{
  int v5; // ebx
  char *v6; // r15
  bool v7; // r13
  bool v8; // dl
  bool v9; // r14
  bool v10; // cl
  __int64 v11; // r12
  __int64 v12; // rsi
  char *v13; // rdx
  unsigned int v14; // r13d
  unsigned __int64 v15; // rbx
  char *v16; // r15
  char *j; // r13
  size_t v18; // rax
  size_t v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // r13
  char *v22; // rdx
  char *v23; // rax
  size_t v24; // rax
  size_t v25; // rax
  _QWORD *v26; // rax
  _QWORD *k; // r13
  char *v28; // rax
  __int64 v29; // rdx
  size_t v30; // rax
  size_t v31; // rdx
  char *v32; // r15
  __int64 v33; // rbx
  size_t v34; // rax
  char *v35; // r13
  size_t v36; // r12
  unsigned __int64 v37; // rsi
  __int64 v38; // rbx
  char *v39; // rax
  __m128i v40; // xmm1
  char *v41; // rsi
  __m128i v42; // xmm0
  __m128i v43; // xmm2
  char *v44; // rdx
  __int64 v45; // rbx
  unsigned __int64 v46; // rax
  size_t v47; // rdx
  _BYTE *v48; // rsi
  char *v49; // r15
  size_t v50; // rdx
  _BYTE *v51; // rsi
  unsigned int v53; // ebx
  __int64 v54; // r14
  __int64 v55; // r14
  bool v56; // al
  bool v57; // cc
  size_t v58; // rax
  size_t v59; // rax
  size_t v60; // rax
  bool v61; // al
  size_t v62; // rax
  __int64 v63; // r13
  __int64 v64; // r14
  __m128i v65; // xmm4
  size_t v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rdi
  __int64 v70; // rax
  unsigned int v71; // edx
  __int64 *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // rbx
  char *v76; // rax
  char *v77; // rdx
  size_t v78; // rax
  size_t v79; // rax
  int v80; // eax
  int v81; // edx
  int v82; // eax
  size_t v83; // rax
  size_t v84; // rax
  bool v85; // al
  int v86; // eax
  unsigned int v87; // eax
  char *v88; // rdx
  char *v89; // rax
  char *v90; // rax
  __int64 v91; // rdx
  unsigned int v92; // r8d
  unsigned int v93; // r13d
  unsigned int v94; // edx
  const char *v95; // r14
  const char *i; // rbx
  const char **v97; // rax
  const char *v98; // rcx
  const char *v99; // rdi
  unsigned int v100; // eax
  const char **v101; // rax
  unsigned int v102; // edx
  _QWORD *v103; // r15
  size_t v104; // rax
  unsigned __int64 v105; // rax
  __int64 v106; // rdx
  unsigned __int64 v107; // rax
  size_t v108; // rax
  unsigned __int64 v109; // r13
  __int64 v110; // rax
  _BYTE *v111; // rax
  __int64 v112; // r9
  _BYTE *v113; // r10
  _BYTE *v114; // rbx
  _BYTE *v115; // r8
  size_t v116; // rax
  unsigned __int64 v117; // r12
  unsigned int v118; // ecx
  _QWORD *v119; // rsi
  size_t v120; // rax
  char *v121; // rax
  _QWORD *v122; // rcx
  __int64 v123; // rdx
  size_t v124; // rax
  _BYTE *v125; // rdi
  __m128 v126; // xmm0
  unsigned __int64 v127; // rax
  _QWORD *v128; // rax
  size_t v129; // rdx
  int v130; // [rsp+0h] [rbp-158h]
  __int64 v131; // [rsp+0h] [rbp-158h]
  size_t v132; // [rsp+0h] [rbp-158h]
  int v133; // [rsp+10h] [rbp-148h]
  _BYTE *v134; // [rsp+10h] [rbp-148h]
  bool v135; // [rsp+18h] [rbp-140h]
  unsigned int v136; // [rsp+20h] [rbp-138h]
  __int64 v137; // [rsp+20h] [rbp-138h]
  bool v138; // [rsp+2Bh] [rbp-12Dh]
  __m128i *v140; // [rsp+30h] [rbp-128h] BYREF
  int v141; // [rsp+38h] [rbp-120h]
  unsigned int v142; // [rsp+3Ch] [rbp-11Ch]
  char *v143[3]; // [rsp+40h] [rbp-118h] BYREF
  bool v144; // [rsp+5Ch] [rbp-FCh]
  bool v145; // [rsp+5Dh] [rbp-FBh]
  bool v146; // [rsp+5Eh] [rbp-FAh]
  bool v147; // [rsp+5Fh] [rbp-F9h]
  void *dest; // [rsp+60h] [rbp-F8h]
  __m128 v149; // [rsp+68h] [rbp-F0h] BYREF
  void *src; // [rsp+80h] [rbp-D8h] BYREF
  size_t n; // [rsp+88h] [rbp-D0h]
  _QWORD v152[2]; // [rsp+90h] [rbp-C8h] BYREF
  __m128i v153; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v154; // [rsp+B0h] [rbp-A8h]
  unsigned __int64 v155; // [rsp+B8h] [rbp-A0h]
  __int16 v156; // [rsp+C0h] [rbp-98h]
  void *ptr; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v158; // [rsp+D8h] [rbp-80h]
  _BYTE v159[120]; // [rsp+E0h] [rbp-78h] BYREF

  v143[0] = a2;
  v143[1] = a3;
  ptr = v159;
  v158 = 0x400000000LL;
  sub_22476F0(v143, (__int64)&ptr, 45, -1, 1);
  v5 = v158;
  if ( !(_DWORD)v158 )
  {
    v6 = (char *)ptr;
    v7 = 0;
LABEL_3:
    v141 = 0;
    v8 = 0;
    v9 = 0;
    v130 = 0;
    v135 = 0;
    v138 = 0;
LABEL_4:
    v133 = 0;
    v10 = 0;
    goto LABEL_5;
  }
  v80 = sub_22B8CF0(*(_OWORD *)ptr);
  v5 = v158;
  if ( (unsigned int)v158 <= 1 )
  {
    v6 = (char *)ptr;
    v7 = v80 != 0;
    goto LABEL_3;
  }
  v6 = (char *)ptr;
  v141 = sub_22B3FD0(*((_QWORD *)ptr + 2), *((_QWORD *)ptr + 3));
  v7 = v81 != 0;
  v9 = v141 != 0;
  if ( v5 == 2 )
  {
    v8 = 0;
    v130 = 0;
    v135 = 0;
    v138 = 0;
    goto LABEL_4;
  }
  v82 = sub_22B4390(*((_QWORD *)v6 + 4), *((_QWORD *)v6 + 5));
  v6 = (char *)ptr;
  v130 = v82;
  v83 = j__strlen("cygwin");
  v135 = sub_9C7D00((__int64)(v6 + 32), "cygwin", v83);
  if ( !v135 )
  {
    v120 = j__strlen("msys");
    v135 = sub_9C7D00((__int64)(v6 + 32), "msys", v120);
  }
  v84 = j__strlen("mingw");
  v85 = sub_9C7D00((__int64)(v6 + 32), "mingw", v84);
  v5 = v158;
  v138 = v85;
  v8 = v130 != 0;
  if ( (unsigned int)v158 <= 3 )
    goto LABEL_4;
  v86 = sub_22B4A60(*((_QWORD *)v6 + 6), *((_QWORD *)v6 + 7));
  v5 = v158;
  v8 = v130 != 0;
  v133 = v86;
  v6 = (char *)ptr;
  v10 = v86 != 0;
  if ( (unsigned int)v158 > 4 )
  {
    v87 = sub_22B4190(*((_DWORD **)ptr + 8), *((_QWORD *)ptr + 9));
    v8 = v130 != 0;
    v136 = v87;
    goto LABEL_6;
  }
LABEL_5:
  v136 = 0;
LABEL_6:
  v145 = v9;
  v11 = 0;
  LODWORD(v12) = v5;
  v147 = v10;
  v140 = &v153;
  v144 = v7;
  v146 = v8;
  v13 = v6;
  do
  {
    v14 = v11;
    if ( !*(&v144 + v11) && (_DWORD)v12 )
    {
      v53 = 0;
      v54 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v53 <= 3 && *(&v144 + v53) )
            goto LABEL_87;
          v55 = 16 * v54;
          v153 = _mm_loadu_si128((const __m128i *)&v13[v55]);
          if ( (_DWORD)v11 == 2 )
            break;
          if ( (_DWORD)v11 == 3 )
          {
            v133 = sub_22B4A60(v153.m128i_i64[0], v153.m128i_i64[1]);
            if ( v133 )
              goto LABEL_79;
            v136 = sub_22B4190(v153.m128i_i64[0], v153.m128i_u64[1]);
            v56 = v136 != 0;
          }
          else
          {
            if ( (_DWORD)v11 == 1 )
            {
              v141 = sub_22B3FD0(v153.m128i_i64[0], v153.m128i_i64[1]);
              if ( v141 )
                goto LABEL_79;
              goto LABEL_90;
            }
            v56 = (unsigned int)sub_22B8CF0((__int128)v153) != 0;
          }
          if ( v56 )
            goto LABEL_79;
LABEL_90:
          LODWORD(v12) = v158;
          v54 = v53 + 1;
          v13 = (char *)ptr;
          v53 = v54;
          if ( (_DWORD)v54 == (_DWORD)v158 )
            goto LABEL_8;
        }
        v130 = sub_22B4390(v153.m128i_i64[0], v153.m128i_u64[1]);
        v58 = j__strlen("cygwin");
        if ( sub_9C7D00((__int64)v140, "cygwin", v58) )
          break;
        v59 = j__strlen("msys");
        v135 = sub_9C7D00((__int64)v140, "msys", v59);
        if ( v135 )
          break;
        v60 = j__strlen("mingw");
        v61 = sub_9C7D00((__int64)v140, "mingw", v60);
        v138 = v61;
        if ( v130 || v61 )
        {
LABEL_79:
          v57 = (unsigned int)v11 <= v53;
          if ( (unsigned int)v11 >= v53 )
            goto LABEL_80;
LABEL_103:
          v67 = (char *)ptr + v55;
          v68 = *(_QWORD *)((char *)ptr + v55 + 8);
          v69 = *(_QWORD *)((char *)ptr + v55);
          v67[1] = 0;
          *v67 = &byte_22F0C30;
          LODWORD(v12) = v158;
          if ( !v68 )
            goto LABEL_81;
          while ( 2 )
          {
            v70 = v14;
            if ( v14 <= 3 && *(&v144 + v14) )
            {
              v71 = v14 + 1;
              if ( v14 == 3 )
              {
LABEL_115:
                v14 = 4;
                v70 = 4;
              }
              else
              {
                v70 = v71;
                if ( !*(&v144 + v71) )
                  goto LABEL_147;
                v71 = v14 + 2;
                if ( v14 == 2 )
                  goto LABEL_115;
                v70 = v71;
                if ( *(&v144 + v71) )
                {
                  if ( v14 == 1 )
                    goto LABEL_115;
                  v14 = 4 - !v147;
                  v70 = 4LL - !v147;
                }
                else
                {
LABEL_147:
                  v14 = v71;
                }
              }
            }
            v72 = (__int64 *)((char *)ptr + 16 * v70);
            ++v14;
            v73 = v72[1];
            v74 = *v72;
            v72[1] = v68;
            *v72 = v69;
            if ( !v73 )
              goto LABEL_81;
            v69 = v74;
            v68 = v73;
            continue;
          }
        }
        v135 = 0;
        LODWORD(v12) = v158;
        v13 = (char *)ptr;
LABEL_87:
        v54 = v53 + 1;
        v53 = v54;
        if ( (_DWORD)v54 == (_DWORD)v12 )
          goto LABEL_8;
      }
      v66 = j__strlen("mingw");
      v135 = 1;
      v138 = sub_9C7D00((__int64)v140, "mingw", v66);
      v57 = v53 >= 2;
      if ( v53 > 2 )
        goto LABEL_103;
LABEL_80:
      v12 = (unsigned int)v158;
      if ( v57 )
        goto LABEL_81;
      v92 = v11;
      v93 = v53;
LABEL_149:
      v94 = v93;
      v95 = nullptr;
      for ( i = &byte_22F0C30; ; i = v99 )
      {
        if ( v94 >= (unsigned int)v12 )
        {
          if ( v95 )
          {
            if ( v12 + 1 > (unsigned __int64)HIDWORD(v158) )
            {
              v142 = v92;
              sub_2237220((__int64)&ptr, v159, v12 + 1, 16);
              v12 = (unsigned int)v158;
              v92 = v142;
            }
            v101 = (const char **)((char *)ptr + 16 * v12);
            *v101 = i;
            v101[1] = v95;
            v12 = (unsigned int)(v158 + 1);
            LODWORD(v158) = v158 + 1;
          }
LABEL_164:
          v102 = v93 + 1;
          if ( !*(&v144 + v93 + 1) )
          {
            ++v93;
            if ( v92 <= v102 )
              goto LABEL_81;
            goto LABEL_149;
          }
          v93 += 2;
          if ( v93 == 4 || *(&v144 + v93) || v92 <= v93 )
          {
LABEL_81:
            *(&v144 + v11) = 1;
            v13 = (char *)ptr;
            goto LABEL_8;
          }
          goto LABEL_149;
        }
        v97 = (const char **)((char *)ptr + 16 * v94);
        v98 = v97[1];
        v99 = *v97;
        v97[1] = v95;
        *v97 = i;
        if ( !v98 )
          goto LABEL_164;
        v100 = v94 + 1;
        if ( v94 + 1 > 3 || !*(&v144 + v100) )
          goto LABEL_169;
        v100 = v94 + 2;
        if ( v94 != 2 )
        {
          if ( !*(&v144 + v100) )
            goto LABEL_169;
          v100 = v94 + 3;
          if ( v94 != 1 )
            break;
        }
        v94 = 4;
LABEL_158:
        v95 = v98;
      }
      if ( *(&v144 + v100) )
      {
        v94 += 4;
        goto LABEL_158;
      }
LABEL_169:
      v94 = v100;
      goto LABEL_158;
    }
LABEL_8:
    ++v11;
  }
  while ( v11 != 4 );
  v15 = (unsigned int)v12;
  v16 = v13;
  if ( v144 && !v145 && !v146 && v147 )
  {
    v62 = j__strlen("none");
    v63 = *((_QWORD *)v16 + 3);
    if ( v63 == v62 )
    {
      v64 = *((_QWORD *)v16 + 2);
      if ( (!v63 || !memcmp(*((const void **)v16 + 2), "none", *((_QWORD *)v16 + 3))) && !*((_QWORD *)v16 + 5) )
      {
        v65 = _mm_loadu_si128((const __m128i *)v16 + 2);
        *((_QWORD *)v16 + 4) = v64;
        *((_QWORD *)v16 + 5) = v63;
        *((__m128i *)v16 + 1) = v65;
      }
    }
  }
  for ( j = &v16[16 * (unsigned int)v12]; j != v16; *((_QWORD *)v16 - 1) = v18 )
  {
    while ( *((_QWORD *)v16 + 1) )
    {
      v16 += 16;
      if ( j == v16 )
        goto LABEL_15;
    }
    v16 += 16;
    v18 = j__strlen("unknown");
    *((_QWORD *)v16 - 2) = "unknown";
  }
LABEL_15:
  v149.m128_i8[8] = 0;
  v149.m128_u64[0] = 0;
  dest = &v149.m128_u16[4];
  if ( v133 != 17 )
  {
    if ( v141 == 12 && v133 == 5 )
    {
      v19 = j__strlen("gnueabihf");
      v20 = ptr;
      *((_QWORD *)ptr + 6) = "gnueabihf";
      v20[7] = v19;
    }
    goto LABEL_19;
  }
  v103 = ptr;
  v104 = j__strlen("androideabi");
  if ( !sub_9C7D00((__int64)(v103 + 6), "androideabi", v104) )
    goto LABEL_19;
  v105 = v103[7];
  if ( v105 <= 0xA || (v106 = v103[6] + 11LL, (v107 = v105 - 11) == 0) )
  {
    v108 = j__strlen("android");
    v103[6] = "android";
    v103[7] = v108;
    goto LABEL_19;
  }
  v155 = v107;
  v156 = 1283;
  v153.m128i_i64[0] = (__int64)"android";
  v154 = v106;
  sub_2253560(&src, &v153);
  v125 = dest;
  if ( src == v152 )
  {
    v129 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v152[0];
      else
        memcpy(dest, src, n);
      v129 = n;
      v125 = dest;
    }
    v149.m128_u64[0] = v129;
    v125[v129] = 0;
    v125 = src;
    goto LABEL_210;
  }
  v140 = (__m128i *)v152[0];
  if ( dest == &v149.m128_u16[4] )
  {
    dest = src;
    v149 = _mm_loadh_ps((const double *)&v140);
    goto LABEL_223;
  }
  v126 = _mm_loadh_ps((const double *)&v140);
  v127 = v149.m128_u64[1];
  dest = src;
  v149 = v126;
  if ( !v125 )
  {
LABEL_223:
    v125 = v152;
    src = v152;
    goto LABEL_210;
  }
  src = v125;
  v152[0] = v127;
LABEL_210:
  n = 0;
  *v125 = 0;
  if ( src != v152 )
    operator delete(src);
  v128 = ptr;
  v15 = (unsigned int)v158;
  *((_QWORD *)ptr + 6) = dest;
  v128[7] = v149.m128_u64[0];
LABEL_19:
  if ( v130 != 15 )
  {
    if ( v138 )
    {
      if ( v15 != 4 )
      {
        if ( v15 <= 4 )
        {
          if ( HIDWORD(v158) <= 3 )
            sub_2237220((__int64)&ptr, v159, 4u, 16);
          v21 = ptr;
          v22 = (char *)ptr + 64;
          v23 = (char *)ptr + 16 * (unsigned int)v158;
          if ( v23 != (char *)ptr + 64 )
          {
            do
            {
              *(_QWORD *)v23 = 0;
              v23 += 16;
              *((_QWORD *)v23 - 1) = 0;
            }
            while ( v22 != v23 );
            v21 = ptr;
          }
          LODWORD(v158) = 4;
LABEL_29:
          v24 = j__strlen("windows");
          v21[4] = "windows";
          v21[5] = v24;
          v25 = j__strlen("gnu");
          v21[6] = "gnu";
          v21[7] = v25;
LABEL_30:
          v15 = 4;
          if ( v136 > 1 )
          {
LABEL_31:
            if ( HIDWORD(v158) <= 4 )
            {
              sub_2237220((__int64)&ptr, v159, 5u, 16);
              v11 = (unsigned int)v158;
              v21 = ptr;
            }
            v26 = &v21[2 * v11];
            for ( k = v21 + 10; k != v26; *(v26 - 1) = 0 )
            {
              *v26 = 0;
              v26 += 2;
            }
            goto LABEL_35;
          }
          goto LABEL_38;
        }
        LODWORD(v158) = 4;
      }
      v21 = ptr;
      goto LABEL_29;
    }
    if ( !v135 )
    {
      v21 = ptr;
      goto LABEL_38;
    }
    if ( v15 != 4 )
    {
      if ( v15 <= 4 )
      {
        if ( HIDWORD(v158) <= 3 )
        {
          sub_2237220((__int64)&ptr, v159, 4u, 16);
          v15 = (unsigned int)v158;
        }
        v21 = ptr;
        v75 = 16 * v15;
        v76 = (char *)ptr + v75;
        v77 = (char *)ptr + 64;
        if ( (char *)ptr + v75 != (char *)ptr + 64 )
        {
          do
          {
            *(_QWORD *)v76 = 0;
            v76 += 16;
            *((_QWORD *)v76 - 1) = 0;
          }
          while ( v77 != v76 );
          v21 = ptr;
        }
        LODWORD(v158) = 4;
        goto LABEL_125;
      }
      LODWORD(v158) = 4;
    }
    v21 = ptr;
LABEL_125:
    v78 = j__strlen("windows");
    v21[4] = "windows";
    v21[5] = v78;
    v79 = j__strlen("cygnus");
    v21[6] = "cygnus";
    v21[7] = v79;
    goto LABEL_30;
  }
  if ( v15 == 4 )
    goto LABEL_179;
  if ( v15 > 4 )
  {
    LODWORD(v158) = 4;
LABEL_179:
    v21 = ptr;
    goto LABEL_141;
  }
  if ( HIDWORD(v158) <= 3 )
    sub_2237220((__int64)&ptr, v159, 4u, 16);
  v21 = ptr;
  v88 = (char *)ptr + 64;
  v89 = (char *)ptr + 16 * (unsigned int)v158;
  if ( v89 != (char *)ptr + 64 )
  {
    do
    {
      *(_QWORD *)v89 = 0;
      v89 += 16;
      *((_QWORD *)v89 - 1) = 0;
    }
    while ( v88 != v89 );
    v21 = ptr;
  }
  LODWORD(v158) = 4;
LABEL_141:
  v21[5] = j__strlen("windows");
  v21[4] = "windows";
  if ( v133 )
    goto LABEL_30;
  if ( v136 <= 1 )
  {
    v124 = j__strlen("msvc");
    v15 = (unsigned int)v158;
    v21[6] = "msvc";
    v21[7] = v124;
  }
  else
  {
    v90 = sub_22B7340(v136);
    v21 = ptr;
    *((_QWORD *)ptr + 6) = v90;
    v21[7] = v91;
    if ( v135 || v138 )
    {
      v11 = (unsigned int)v158;
      if ( (unsigned int)v158 != 5 )
      {
        if ( (unsigned int)v158 <= 5uLL )
          goto LABEL_31;
LABEL_35:
        LODWORD(v158) = 5;
      }
      v28 = sub_22B7340(v136);
      v21 = ptr;
      *((_QWORD *)ptr + 8) = v28;
      v21[9] = v29;
    }
    v15 = (unsigned int)v158;
  }
LABEL_38:
  v30 = j__strlen("dxil");
  v31 = v21[1];
  if ( v31 == v30 && (!v31 || !memcmp((const void *)*v21, "dxil", v31)) )
  {
    if ( (unsigned int)v15 > 4 )
    {
      LODWORD(v158) = 4;
      v15 = 4;
    }
    if ( v130 == 38 )
    {
      v121 = sub_22B6320((_BYTE *)v21[4], v21[5]);
      v122 = ptr;
      v15 = (unsigned int)v158;
      *(_QWORD *)ptr = v121;
      v122[1] = v123;
    }
  }
  if ( a4 - 3 > 2 || (v109 = a4, a4 == v15) )
  {
    v32 = (char *)ptr;
  }
  else if ( a4 >= v15 )
  {
    v116 = j__strlen("unknown");
    v117 = a4 - v15;
    v118 = a4;
    if ( a4 > (unsigned __int64)HIDWORD(v158) )
    {
      v132 = v116;
      sub_2237220((__int64)&ptr, v159, a4, 16);
      v15 = (unsigned int)v158;
      v116 = v132;
      v118 = v117 + v158;
      v109 = (unsigned int)(v117 + v158);
    }
    v32 = (char *)ptr;
    v119 = (char *)ptr + 16 * v15;
    if ( v117 )
    {
      do
      {
        *v119 = "unknown";
        v119 += 2;
        *(v119 - 1) = v116;
        --v117;
      }
      while ( v117 );
      v32 = (char *)ptr;
    }
    LODWORD(v158) = v118;
    v15 = v109;
  }
  else
  {
    v32 = (char *)ptr;
    v15 = a4;
    LODWORD(v158) = a4;
  }
  v33 = 16 * v15;
  v34 = j__strlen("-");
  v35 = &v32[v33];
  *(_QWORD *)(a1 + 8) = 0;
  v36 = v34;
  *(_QWORD *)a1 = a1 + 16;
  *(_BYTE *)(a1 + 16) = 0;
  if ( &v32[v33] != v32 )
  {
    v37 = v33 - 16;
    v38 = v34 * ((v33 >> 4) - 1);
    v39 = v32;
    if ( v37 <= 0x40 )
    {
      v44 = v32;
    }
    else
    {
      v40 = 0;
      v41 = &v32[v37 & 0xFFFFFFFFFFFFFFE0LL];
      do
      {
        v42 = _mm_loadu_si128((const __m128i *)(v39 + 8));
        v43 = _mm_loadu_si128((const __m128i *)(v39 + 24));
        v39 += 32;
        v40 = _mm_add_epi64(v40, _mm_unpacklo_epi64(v42, v43));
      }
      while ( v41 != v39 );
      v44 = &v32[16 * (((unsigned __int64)(v35 - v32 - 16) >> 4) & 0xFFFFFFFFFFFFFFFELL)];
      v38 += _mm_add_epi64(v40, _mm_srli_si128(v40, 8)).m128i_u64[0];
    }
    v45 = *((_QWORD *)v44 + 1) + v38;
    if ( v35 != v44 + 16 )
    {
      v45 += *((_QWORD *)v44 + 3);
      if ( v35 != v44 + 32 )
      {
        v45 += *((_QWORD *)v44 + 5);
        if ( v35 != v44 + 48 )
        {
          v45 += *((_QWORD *)v44 + 7);
          if ( v35 != v44 + 64 )
            v45 += *((_QWORD *)v44 + 9);
        }
      }
    }
    v46 = 0x7FFFFFFFFFFFFFFFLL;
    if ( (unsigned __int64)v45 > 0xF )
    {
      if ( v45 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v110 = 30;
      if ( (unsigned __int64)v45 >= 0x1E )
        v110 = v45;
      v131 = v110;
      v111 = (_BYTE *)operator new(v110 + 1);
      v112 = *(_QWORD *)(a1 + 8);
      v113 = *(_BYTE **)a1;
      v114 = v111;
      v115 = (_BYTE *)(a1 + 16);
      if ( v112 )
      {
        if ( v112 != -1 )
        {
          v137 = *(_QWORD *)(a1 + 8);
          v134 = *(_BYTE **)a1;
          memcpy(v111, *(const void **)a1, v112 + 1);
          v112 = v137;
          v115 = (_BYTE *)(a1 + 16);
          v113 = v134;
        }
      }
      else
      {
        *v111 = *v113;
      }
      if ( v115 != v113 )
      {
        operator delete(v113);
        v112 = *(_QWORD *)(a1 + 8);
      }
      *(_QWORD *)a1 = v114;
      *(_QWORD *)(a1 + 16) = v131;
      v46 = 0x7FFFFFFFFFFFFFFFLL - v112;
    }
    v47 = *((_QWORD *)v32 + 1);
    v48 = *(_BYTE **)v32;
    if ( v46 < v47 )
      goto LABEL_218;
    v49 = v32 + 16;
    sub_9EE560((_QWORD *)a1, v48, v47);
    if ( v49 != v35 )
    {
      while ( v36 <= 0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8) )
      {
        sub_9EE560((_QWORD *)a1, "-", v36);
        v50 = *((_QWORD *)v49 + 1);
        v51 = *(_BYTE **)v49;
        if ( v50 > 0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8) )
          break;
        v49 += 16;
        sub_9EE560((_QWORD *)a1, v51, v50);
        if ( v35 == v49 )
          goto LABEL_65;
      }
LABEL_218:
      std::__throw_length_error("basic_string::append");
    }
  }
LABEL_65:
  if ( dest != &v149.m128_u16[4] )
    operator delete(dest);
  if ( ptr != v159 )
    free(ptr);
  return a1;
}
