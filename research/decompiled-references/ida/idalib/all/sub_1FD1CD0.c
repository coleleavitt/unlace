__int64 __fastcall sub_1FD1CD0(__m128i *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rax
  __m128i si128; // xmm0
  __int64 result; // rax
  char *v8; // rax
  int v9; // eax
  int v10; // r12d
  char *v11; // rax
  char *v12; // r12
  int v13; // ebx
  int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // rbx
  __m128 v17; // xmm0
  const __m128i *v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rbx
  const __m128i *v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rbx
  unsigned __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // r11
  unsigned __int64 v35; // rax
  const __m128i *v36; // rsi
  __int64 v37; // r8
  __m128i *v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdi
  const __m128i *v41; // rdx
  __m128i *v42; // rcx
  __m128 v43; // xmm0
  __m128 v44; // xmm4
  __m128i v45; // xmm2
  __m128i v46; // xmm1
  __m128i v47; // xmm0
  __m128i v48; // xmm2
  __m128i v49; // xmm0
  __m128i v50; // xmm2
  __m128i v51; // xmm3
  __m128i v52; // xmm1
  __m128i v53; // xmm3
  __int64 *v54; // rcx
  __int8 *v55; // rax
  _QWORD *v56; // rdi
  char *v57; // r9
  __int64 v58; // rdx
  __int64 v59; // r12
  __int64 v60; // rbx
  __int64 v61; // rcx
  __int64 v62; // rsi
  __int64 v63; // r8
  unsigned __int64 v64; // rax
  __int64 v65; // r10
  _DWORD *v66; // rdx
  char *v67; // r9
  unsigned __int64 v68; // rcx
  void *v69; // rax
  void *v70; // rdx
  char *v71; // rax
  const void *v72; // r12
  char *v73; // r13
  unsigned int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 *v77; // r8
  __int64 *v78; // rax
  __int64 v79; // rdx
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rsi
  unsigned __int64 v82; // rdx
  void **v83; // rbx
  __int64 v84; // rax
  void **v85; // rcx
  void *v86; // rdx
  void *v87; // rdx
  _BYTE *v88; // rdi
  __int64 v89; // rax
  unsigned int v90; // r9d
  unsigned __int64 *v91; // r8
  unsigned __int64 v92; // rcx
  __int8 *v93; // rdi
  unsigned int v94; // eax
  void *v95; // rax
  void *v96; // rax
  void *v97; // rax
  __int64 *v98; // rdi
  _QWORD *v99; // r12
  _QWORD *v100; // rbx
  _QWORD *v101; // rdi
  _QWORD *v102; // rdi
  __int64 v103; // rdx
  unsigned int v104; // ecx
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rax
  void *v113; // rax
  int v114; // r12d
  int v115; // ebx
  void *v116; // rax
  void *v117; // rax
  char *v118; // rbx
  __int64 v119; // rax
  void *v120; // rax
  void *v121; // rax
  void *v122; // rax
  __int64 v123; // [rsp+8h] [rbp-350h] BYREF
  _QWORD *v124; // [rsp+10h] [rbp-348h]
  unsigned __int8 v125; // [rsp+1Fh] [rbp-339h]
  __int64 v126; // [rsp+20h] [rbp-338h]
  __int64 *v127; // [rsp+28h] [rbp-330h]
  __int8 *v128; // [rsp+30h] [rbp-328h]
  char *v129; // [rsp+38h] [rbp-320h]
  _QWORD *v130; // [rsp+40h] [rbp-318h]
  unsigned __int64 v131; // [rsp+48h] [rbp-310h]
  __int64 v132; // [rsp+50h] [rbp-308h]
  __int64 v133; // [rsp+58h] [rbp-300h]
  __int64 v134; // [rsp+60h] [rbp-2F8h]
  __int64 v135; // [rsp+68h] [rbp-2F0h]
  const __m128i *v136; // [rsp+70h] [rbp-2E8h]
  unsigned __int64 v137; // [rsp+78h] [rbp-2E0h]
  __int64 *v138; // [rsp+80h] [rbp-2D8h] BYREF
  __int64 *v139; // [rsp+88h] [rbp-2D0h] BYREF
  __int64 v140; // [rsp+90h] [rbp-2C8h] BYREF
  __int64 v141; // [rsp+98h] [rbp-2C0h]
  void *v142; // [rsp+A0h] [rbp-2B8h] BYREF
  char v143; // [rsp+A8h] [rbp-2B0h]
  void *src[2]; // [rsp+B0h] [rbp-2A8h] BYREF
  _OWORD v145[2]; // [rsp+C0h] [rbp-298h] BYREF
  __int64 v146; // [rsp+E0h] [rbp-278h]
  void *v147; // [rsp+E8h] [rbp-270h]
  __int64 v148; // [rsp+F0h] [rbp-268h]
  _BYTE v149[24]; // [rsp+F8h] [rbp-260h] BYREF
  void *ptr; // [rsp+110h] [rbp-248h] BYREF
  __int64 v151; // [rsp+118h] [rbp-240h]
  _QWORD v152[71]; // [rsp+120h] [rbp-238h] BYREF

  v3 = (__int64)a1;
  v5 = *a2;
  a1->m128i_i64[1] = 0;
  *a2 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  a1->m128i_i64[0] = v5;
  a1[1].m128i_i64[0] = (__int64)a1[2].m128i_i64;
  a1[1].m128i_i64[1] = 0x1000000000LL;
  a1[90].m128i_i64[0] = 0;
  a1[90].m128i_i64[1] = 0;
  a1[91].m128i_i32[0] = 0;
  a1[91].m128i_i64[1] = 0;
  a1[93].m128i_i64[0] = 0;
  a1[92] = si128;
  v138 = (__int64 *)a1;
  v128 = &a1[91].m128i_i8[8];
  v125 = 0;
  v126 = sub_224A990("Module LoadIndex", 16, 0, 0);
  v124 = v152;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(a3 + 32) && *(_QWORD *)(a3 + 8) <= *(_QWORD *)(a3 + 16) )
      {
        LOBYTE(src[1]) &= ~1u;
        src[0] = nullptr;
        sub_A0B030((__int64 *)src);
        goto LABEL_5;
      }
      sub_A0B360((__int64)&ptr, a3, *(_DWORD *)(a3 + 36));
      LOBYTE(v141) = v151 & 1 | v141 & 0xFE;
      v8 = (char *)ptr;
      if ( (v151 & 1) != 0 )
      {
        ptr = nullptr;
        v140 = (__int64)v8;
      }
      else
      {
        LODWORD(v140) = (_DWORD)ptr;
      }
      sub_A0AE70((__int64 *)&ptr);
      if ( (v141 & 1) != 0 )
      {
        v95 = (void *)v140;
        LOBYTE(src[1]) |= 1u;
        v140 = 0;
        src[0] = v95;
        goto LABEL_16;
      }
      v9 = v140;
      if ( !(_DWORD)v140 )
      {
        v103 = *(unsigned int *)(a3 + 72);
        if ( (_DWORD)v103 )
        {
          v104 = *(_DWORD *)(a3 + 32);
          if ( v104 > 0x1F )
          {
            v9 = 32;
            *(_QWORD *)(a3 + 24) >>= (unsigned __int8)v104 - 32;
          }
          *(_DWORD *)(a3 + 32) = v9;
          v105 = *(_QWORD *)(a3 + 64) + 32 * v103 - 32;
          *(_DWORD *)(a3 + 36) = *(_DWORD *)v105;
          ptr = *(void **)(a3 + 40);
          v106 = *(_QWORD *)(a3 + 48);
          *(_OWORD *)(a3 + 40) = 0;
          v151 = v106;
          v107 = *(_QWORD *)(a3 + 56);
          *(_QWORD *)(a3 + 56) = 0;
          v152[0] = v107;
          *(_QWORD *)(a3 + 40) = *(_QWORD *)(v105 + 8);
          v108 = *(_QWORD *)(v105 + 16);
          *(_QWORD *)(v105 + 8) = 0;
          v109 = *(_QWORD *)(a3 + 48);
          *(_QWORD *)(a3 + 48) = v108;
          v110 = *(_QWORD *)(v105 + 24);
          *(_QWORD *)(v105 + 16) = v109;
          v111 = *(_QWORD *)(a3 + 56);
          *(_QWORD *)(a3 + 56) = v110;
          *(_QWORD *)(v105 + 24) = v111;
          sub_A0AD20((__int64)&ptr);
          v112 = (unsigned int)(*(_DWORD *)(a3 + 72) - 1);
          *(_DWORD *)(a3 + 72) = v112;
          sub_A0AD20(*(_QWORD *)(a3 + 64) + 32 * v112 + 8);
          LOBYTE(src[1]) &= ~1u;
          src[0] = &dword_0 + 1;
        }
        else
        {
          LOBYTE(src[1]) &= ~1u;
          src[0] = nullptr;
        }
        goto LABEL_16;
      }
      if ( (_DWORD)v140 == 1 )
        break;
      if ( (_DWORD)v140 != 2 )
      {
        LOBYTE(src[1]) &= ~1u;
        LODWORD(src[0]) = 3;
        HIDWORD(src[0]) = v140;
        goto LABEL_16;
      }
      sub_20252B0(&ptr, a3);
      if ( ptr )
      {
        LOBYTE(src[1]) |= 1u;
        src[0] = ptr;
        goto LABEL_16;
      }
      sub_A0AE90(&v140);
    }
    sub_A0B360((__int64)&ptr, a3, 8u);
    v143 = v151 & 1 | v143 & 0xFE;
    v96 = ptr;
    if ( (v151 & 1) != 0 )
    {
      ptr = nullptr;
      v142 = v96;
    }
    else
    {
      LODWORD(v142) = (_DWORD)ptr;
    }
    sub_A0AE70((__int64 *)&ptr);
    if ( (v143 & 1) != 0 )
    {
      v97 = v142;
      LOBYTE(v151) = v151 | 1;
      v142 = nullptr;
      ptr = v97;
      v127 = (__int64 *)&v142;
      v98 = (__int64 *)&v142;
    }
    else if ( (char)v142 < 0 )
    {
      v123 = v3;
      v114 = (unsigned __int8)v142 & 0x7F;
      v115 = 7;
      v127 = (__int64 *)&v142;
      while ( 1 )
      {
        sub_A0B360((__int64)src, a3, 8u);
        LOBYTE(v151) = (__int64)src[1] & 1 | v151 & 0xFE;
        v116 = src[0];
        if ( ((__int64)src[1] & 1) != 0 )
        {
          src[0] = nullptr;
          ptr = v116;
        }
        else
        {
          LODWORD(ptr) = src[0];
        }
        sub_A0AE90((__int64 *)&v142);
        v143 = v151 & 1 | v143 & 0xFE;
        if ( (v151 & 1) != 0 )
        {
          v117 = ptr;
          ptr = nullptr;
          v142 = v117;
        }
        else
        {
          LODWORD(v142) = (_DWORD)ptr;
        }
        sub_A0AE90((__int64 *)&ptr);
        sub_A0AE70((__int64 *)src);
        if ( (v143 & 1) != 0 )
          break;
        v114 |= ((unsigned __int8)v142 & 0x7F) << v115;
        if ( ((unsigned __int8)v142 & 0x80) == 0 )
        {
          v3 = v123;
          LOBYTE(v151) = v151 & 0xFE;
          LODWORD(ptr) = v114;
          v98 = v127;
          goto LABEL_123;
        }
        v115 += 7;
        if ( v115 == 35 )
        {
          v119 = std::_V2::generic_category((std::_V2 *)src);
          v3 = v123;
          v137 = v137 & 0xFFFFFFFF00000000LL | 0x54;
          sub_A09EA0((__int64)src, v137, v119, "Unterminated VBR");
          v98 = v127;
          LOBYTE(v151) = v151 | 1;
          ptr = src[0];
          goto LABEL_123;
        }
      }
      v120 = v142;
      v3 = v123;
      v142 = nullptr;
      LOBYTE(v151) = v151 | 1;
      v98 = v127;
      ptr = v120;
    }
    else
    {
      LOBYTE(v151) = v151 & 0xFE;
      LODWORD(ptr) = (_DWORD)v142;
      v98 = (__int64 *)&v142;
      v127 = (__int64 *)&v142;
    }
LABEL_123:
    sub_A0AE90(v98);
    if ( (v151 & 1) != 0 )
    {
      v113 = ptr;
      ptr = nullptr;
      src[0] = v113;
    }
    else
    {
      LODWORD(src[0]) = 2;
      HIDWORD(src[0]) = (_DWORD)ptr;
    }
    LOBYTE(src[1]) = v151 & 1 | (__int64)src[1] & 0xFE;
    sub_A0AE90((__int64 *)&ptr);
LABEL_16:
    sub_A0AE90(&v140);
    if ( ((__int64)src[1] & 1) != 0 )
    {
      v121 = src[0];
      src[0] = nullptr;
      ptr = v121;
      sub_1FD0840(&v138, (__int64 *)&ptr);
    }
    v10 = (int)src[0];
    LODWORD(v123) = HIDWORD(src[0]);
    result = sub_A0B030((__int64 *)src);
    if ( v10 == 1 )
      break;
    if ( !v10 )
      goto LABEL_5;
    if ( v10 == 2 )
    {
      if ( ((v125 ^ 1) & ((_DWORD)v123 == 8)) != 0 )
      {
        LOBYTE(v123) = (v125 ^ 1) & ((_DWORD)v123 == 8);
        sub_202A150(&ptr, a3, 8, 0);
        if ( ptr )
LABEL_33:
          sub_1FD0840(&v138, (__int64 *)&ptr);
        v125 = v123;
      }
      else
      {
        sub_A0BAF0((__int64 *)&ptr, a3);
        if ( ptr )
          goto LABEL_33;
      }
    }
    else
    {
      if ( v10 == 3 && !v125 )
        goto LABEL_5;
      v140 = 0;
      ptr = v124;
      v151 = 0x4000000000LL;
      v127 = (__int64 *)&v142;
      v141 = 0;
      sub_2027F10(&v142, a3, (unsigned int)v123, &ptr, &v140);
      if ( (v143 & 1) != 0 )
      {
        v122 = v142;
        v142 = nullptr;
        src[0] = v122;
        sub_1FD0840(&v138, (__int64 *)src);
      }
      if ( (_DWORD)v142 == 1 )
      {
        v18 = (const __m128i *)ptr;
        v19 = *(unsigned int *)(v3 + 24);
        v20 = v3 + 16;
        v129 = *(char **)ptr;
        v21 = (unsigned int)v129;
        v123 = 88LL * (unsigned int)v129;
        if ( v19 == (unsigned int)v129 )
        {
          v80 = *(unsigned int *)(v3 + 28);
          v81 = (unsigned int)v129 + 1LL;
          src[0] = nullptr;
          src[1] = (char *)v145 + 8;
          memset(v145, 0, sizeof(v145));
          v147 = v149;
          v82 = *(_QWORD *)(v3 + 16);
          v148 = 0x400000000LL;
          v83 = src;
          v146 = 0;
          BYTE8(v145[0]) = 0;
          if ( v81 > v80 )
          {
            if ( v82 <= (unsigned __int64)src && (unsigned __int64)src < v82 + v123 )
            {
              v118 = (char *)src - v82;
              sub_1FD1B40(v20, v81);
              v82 = *(_QWORD *)(v3 + 16);
              v21 = *(unsigned int *)(v3 + 24);
              v83 = (void **)&v118[v82];
            }
            else
            {
              sub_1FD1B40(v20, v81);
              v82 = *(_QWORD *)(v3 + 16);
              v21 = *(unsigned int *)(v3 + 24);
            }
          }
          v84 = v82 + 88 * v21;
          *(_QWORD *)v84 = *v83;
          *(_QWORD *)(v84 + 8) = v84 + 24;
          v85 = (void **)v83[1];
          if ( v85 == v83 + 3 )
          {
            *(__m128i *)(v84 + 24) = _mm_loadu_si128((const __m128i *)(v83 + 3));
          }
          else
          {
            *(_QWORD *)(v84 + 8) = v85;
            *(_QWORD *)(v84 + 24) = v83[3];
          }
          *(_QWORD *)(v84 + 16) = v83[2];
          v83[1] = v83 + 3;
          v86 = v83[5];
          v83[2] = nullptr;
          *((_BYTE *)v83 + 24) = 0;
          *(_QWORD *)(v84 + 40) = v86;
          v87 = v83[6];
          *(_QWORD *)(v84 + 64) = 0x400000000LL;
          *(_QWORD *)(v84 + 48) = v87;
          *(_QWORD *)(v84 + 56) = v84 + 72;
          if ( *((_DWORD *)v83 + 16) )
            sub_1744C20((char ***)(v84 + 56), (char ***)v83 + 7);
          v88 = v147;
          ++*(_DWORD *)(v3 + 24);
          if ( v88 != v149 )
            free(v88);
          if ( src[1] != (char *)v145 + 8 )
            operator delete(src[1]);
          v18 = (const __m128i *)ptr;
          v24 = *(_QWORD *)(v3 + 16);
        }
        else
        {
          v22 = (unsigned int)((_DWORD)v129 + 1);
          LODWORD(v130) = (_DWORD)v129 + 1;
          if ( v22 == v19 )
          {
            v24 = *(_QWORD *)(v3 + 16);
          }
          else
          {
            v23 = 88 * v22;
            if ( v22 < v19 )
            {
              v24 = *(_QWORD *)(v3 + 16);
              v99 = (_QWORD *)(v24 + 88 * v19);
              v100 = (_QWORD *)(v24 + v23);
              if ( v99 != v100 )
              {
                do
                {
                  while ( 1 )
                  {
                    v99 -= 11;
                    v101 = (_QWORD *)v99[7];
                    if ( v101 != v99 + 9 )
                      free(v101);
                    v102 = (_QWORD *)v99[1];
                    if ( v102 == v99 + 3 )
                      break;
                    operator delete(v102);
                    if ( v100 == v99 )
                      goto LABEL_132;
                  }
                }
                while ( v100 != v99 );
LABEL_132:
                v18 = (const __m128i *)ptr;
                v24 = *(_QWORD *)(v3 + 16);
              }
              *(_DWORD *)(v3 + 24) = (_DWORD)v130;
            }
            else
            {
              if ( v22 > *(unsigned int *)(v3 + 28) )
              {
                sub_1FD1B40(v20, v22);
                v19 = *(unsigned int *)(v3 + 24);
              }
              v24 = *(_QWORD *)(v3 + 16);
              v25 = v24 + 88 * v19;
              v26 = v24 + v23;
              if ( v25 != v26 )
              {
                do
                {
                  memset((void *)v25, 0, 0x58u);
                  *(_DWORD *)(v25 + 68) = 4;
                  *(_QWORD *)(v25 + 8) = v25 + 24;
                  v27 = v25 + 72;
                  v25 += 88;
                  *(_QWORD *)(v25 - 32) = v27;
                }
                while ( v26 != v25 );
                v24 = *(_QWORD *)(v3 + 16);
              }
              v18 = (const __m128i *)ptr;
              *(_DWORD *)(v3 + 24) = (_DWORD)v130;
            }
          }
        }
        v28 = v123;
        v29 = v18 + 2;
        *(_QWORD *)(v24 + v123 + 40) = v18->m128i_i64[1];
        *(_QWORD *)(*(_QWORD *)(v3 + 16) + v28 + 48) = v18[1].m128i_i64[0];
        v30 = *(_QWORD *)(v3 + 16) + v28;
        v31 = v18[1].m128i_i64[1];
        v32 = *(_QWORD *)(v30 + 16);
        v33 = v30;
        v130 = (_QWORD *)(v30 + 8);
        v34 = *(_QWORD *)(v30 + 8);
        v131 = v32;
        v35 = 8LL * (unsigned int)v31 + 32;
        src[0] = v145;
        v36 = (const __m128i *)((char *)v18 + v35);
        if ( &v18->m128i_i8[v35] && v18 == (const __m128i *)-32LL )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        v37 = (8LL * (unsigned int)v31) >> 3;
        if ( v35 > 0x98 )
        {
          v136 = v18;
          v135 = v33;
          v134 = v34;
          v133 = (__int64)v18->m128i_i64 + v35;
          v132 = (8LL * (unsigned int)v31) >> 3;
          v38 = (__m128i *)operator new(v37 + 1);
          v37 = v132;
          v18 = v136;
          src[0] = v38;
          v33 = v135;
          *(_QWORD *)&v145[0] = v132;
          v34 = v134;
          v36 = (const __m128i *)v133;
        }
        else
        {
          v38 = (__m128i *)v145;
        }
        if ( v36 != v29 )
        {
          v39 = (unsigned __int64)((char *)v36 - (char *)v18 - 40) >> 3;
          v40 = v39 + 1;
          if ( (v29 >= (const __m128i *)&v38->m128i_i8[v39 + 1] || v38 >= (__m128i *)&v18[2].m128i_u64[v39 + 1])
            && (unsigned __int64)((char *)v36 - (char *)v18 - 40) > 0x70 )
          {
            v41 = v29;
            v42 = v38;
            do
            {
              v43 = (__m128)_mm_loadu_si128(v41);
              v44 = (__m128)_mm_loadu_si128(v41 + 1);
              ++v42;
              v41 += 8;
              v45 = (__m128i)_mm_shuffle_ps(v43, v44, 136);
              v46 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v41 - 6), (__m128)_mm_loadu_si128(v41 - 5), 136);
              v47 = _mm_unpacklo_epi16(v45, v46);
              v48 = _mm_unpackhi_epi16(v45, v46);
              v49 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v47, v48), _mm_unpackhi_epi16(v47, v48));
              v50 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v41 - 2), (__m128)_mm_loadu_si128(v41 - 1), 136);
              v51 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v41 - 4), (__m128)_mm_loadu_si128(v41 - 3), 136);
              v52 = _mm_unpacklo_epi16(v51, v50);
              v53 = _mm_unpackhi_epi16(v51, v50);
              v42[-1] = _mm_packus_epi16(
                          _mm_and_si128(v49, (__m128i)xmmword_23A8D80),
                          _mm_and_si128(
                            _mm_unpacklo_epi16(_mm_unpacklo_epi16(v52, v53), _mm_unpackhi_epi16(v52, v53)),
                            (__m128i)xmmword_23A8D80));
            }
            while ( v42 != &v38[v40 >> 4] );
            v54 = &v29->m128i_i64[v40 & 0xFFFFFFFFFFFFFFF0LL];
            v55 = &v38->m128i_i8[v40 & 0xFFFFFFFFFFFFFFF0LL];
            if ( (v40 & 0xFFFFFFFFFFFFFFF0LL) != v40 )
            {
              *v55 = *v54;
              if ( v36 != (const __m128i *)(v54 + 1) )
              {
                v55[1] = v54[1];
                if ( v36 != (const __m128i *)(v54 + 2) )
                {
                  v55[2] = v54[2];
                  if ( v36 != (const __m128i *)(v54 + 3) )
                  {
                    v55[3] = v54[3];
                    if ( v36 != (const __m128i *)(v54 + 4) )
                    {
                      v55[4] = v54[4];
                      if ( v36 != (const __m128i *)(v54 + 5) )
                      {
                        v55[5] = v54[5];
                        if ( v36 != (const __m128i *)(v54 + 6) )
                        {
                          v55[6] = v54[6];
                          if ( v36 != (const __m128i *)(v54 + 7) )
                          {
                            v55[7] = v54[7];
                            if ( v36 != (const __m128i *)(v54 + 8) )
                            {
                              v55[8] = v54[8];
                              if ( v36 != (const __m128i *)(v54 + 9) )
                              {
                                v55[9] = v54[9];
                                if ( v36 != (const __m128i *)(v54 + 10) )
                                {
                                  v55[10] = v54[10];
                                  if ( v36 != (const __m128i *)(v54 + 11) )
                                  {
                                    v55[11] = v54[11];
                                    if ( v36 != (const __m128i *)(v54 + 12) )
                                    {
                                      v55[12] = v54[12];
                                      if ( v36 != (const __m128i *)(v54 + 13) )
                                      {
                                        v55[13] = v54[13];
                                        if ( v36 != (const __m128i *)(v54 + 14) )
                                          v55[14] = v54[14];
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            do
            {
              v79 = v29->m128i_i64[0];
              v29 = (const __m128i *)((char *)v29 + 8);
              v38 = (__m128i *)((char *)v38 + 1);
              v38[-1].m128i_i8[15] = v79;
            }
            while ( v36 != v29 );
          }
          v38 = (__m128i *)src[0];
        }
        src[1] = (void *)v37;
        v56 = v130;
        v38->m128i_i8[v37] = 0;
        sub_99BDC0(v56, v34 - *(_QWORD *)(v33 + 8), v131, (_BYTE *)src[0], (size_t)src[1]);
        if ( src[0] != v145 )
          operator delete(src[0]);
        v57 = (char *)ptr;
        v58 = (unsigned int)(v31 + 4);
        v59 = *(_QWORD *)(v3 + 16) + v123;
        v60 = 8LL * (unsigned int)(v31 + 5);
        v61 = *(unsigned int *)(v59 + 64);
        v62 = v59;
        v63 = 8LL * *((unsigned int *)ptr + 2 * v58);
        v64 = v63 >> 3;
        v65 = v63 >> 3;
        if ( v61 + (v63 >> 3) > (unsigned __int64)*(unsigned int *)(v59 + 68) )
        {
          v133 = (8LL * *((unsigned int *)ptr + 2 * v58)) >> 3;
          v132 = v63 >> 3;
          v131 = v63;
          v130 = ptr;
          sub_2237220(v59 + 56, v59 + 72, v61 + v64, 4);
          v61 = *(unsigned int *)(v59 + 64);
          v62 = *(_QWORD *)(v3 + 16) + v123;
          v64 = v133;
          v65 = v132;
          v63 = v131;
          v57 = (char *)v130;
        }
        v66 = (_DWORD *)(*(_QWORD *)(v59 + 56) + 4 * v61);
        if ( v63 > 0 )
        {
          v67 = &v57[v60];
          if ( v63 <= 24 )
            goto LABEL_169;
          v68 = 0;
          do
          {
            *(__m128 *)&v66[v68 / 4] = _mm_shuffle_ps(
                                         (__m128)_mm_loadu_si128((const __m128i *)&v67[2 * v68]),
                                         (__m128)_mm_loadu_si128((const __m128i *)&v67[2 * v68 + 16]),
                                         136);
            v68 += 16LL;
          }
          while ( v68 != 16 * (v64 >> 2) );
          v65 = v64 - (v64 & 0xFFFFFFFFFFFFFFFCLL);
          v67 += 8 * (v64 & 0xFFFFFFFFFFFFFFFCLL);
          v66 += v64 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (v64 & 0xFFFFFFFFFFFFFFFCLL) != v64 )
          {
LABEL_169:
            *v66 = *(_QWORD *)v67;
            if ( v65 != 1 )
            {
              v66[1] = *((_QWORD *)v67 + 1);
              if ( v65 != 2 )
                v66[2] = *((_QWORD *)v67 + 2);
            }
          }
          LODWORD(v61) = *(_DWORD *)(v59 + 64);
        }
        *(_DWORD *)(v59 + 64) = v61 + v64;
        v69 = (void *)sub_228AAA0(*(_QWORD *)(v62 + 8), *(_QWORD *)(v62 + 16), 0);
        LOBYTE(v139) = 45;
        src[1] = v70;
        src[0] = v69;
        v71 = (char *)sub_2246E40(src, &v139, 1);
        v72 = src[0];
        v73 = (char *)src[1];
        if ( v71 != (char *)-1LL )
        {
          if ( src[1] <= v71 )
            v71 = (char *)src[1];
          v73 = v71;
        }
        src[1] = v73;
        v74 = sub_2244B30(src[0], v73);
        v75 = (unsigned int)sub_2244CB0(v128, v72, v73, v74);
        v77 = (__int64 *)(*(_QWORD *)(v3 + 1464) + 8 * v75);
        if ( *v77 )
        {
          if ( *v77 != -8 )
          {
            sub_E37610(&v139, v77, 0);
            v78 = v139;
LABEL_96:
            *(_DWORD *)(*v78 + 8) = (_DWORD)v129;
            goto LABEL_26;
          }
          --*(_DWORD *)(v3 + 1480);
        }
        v130 = v77;
        LODWORD(v123) = v75;
        v89 = sub_22300B0(v73 + 17, 8, v75, v76, v77, v75);
        v90 = v123;
        v91 = v130;
        v92 = v89;
        if ( v73 )
        {
          v131 = v89;
          memcpy((void *)(v89 + 16), v72, (size_t)v73);
          v92 = v131;
          v91 = v130;
          v90 = v123;
        }
        v73[v92 + 16] = 0;
        v93 = v128;
        *(_QWORD *)v92 = v73;
        *(_DWORD *)(v92 + 8) = 0;
        *v91 = v92;
        ++*(_DWORD *)(v3 + 1476);
        v94 = sub_22450D0(v93, v90);
        sub_E37610(&v139, (__int64 *)(*(_QWORD *)(v3 + 1464) + 8LL * v94), 0);
        v78 = v139;
        goto LABEL_96;
      }
      if ( (_DWORD)v142 )
      {
        if ( (_DWORD)v142 == 2 )
        {
          v11 = *(char **)ptr;
          if ( *(_QWORD *)ptr )
          {
            v12 = &v11[v140];
            v123 = v140;
            v13 = *(_DWORD *)&v11[v140];
            v14 = *(_DWORD *)&v11[v140 + 4];
            v15 = operator new(0x28u);
            *(_DWORD *)v15 = v13;
            v129 = v12 + 8;
            v16 = v123 + 4;
            *(_DWORD *)(v15 + 4) = v14;
            v17 = _mm_loadh_ps((const double *)&v123);
            *(_QWORD *)(v15 + 32) = v16;
            *(__m128 *)(v15 + 8) = v17;
            *(_QWORD *)(v3 + 8) = v15;
          }
        }
      }
      else if ( !(_DWORD)v151 || *(_QWORD *)ptr != 1 )
      {
        sub_A0AE90(v127);
        if ( ptr != v152 )
          free(ptr);
        goto LABEL_5;
      }
LABEL_26:
      sub_A0AE90(v127);
      if ( ptr != v124 )
        free(ptr);
    }
  }
  if ( !v125 )
  {
LABEL_5:
    result = v126;
    if ( v126 )
      return sub_224D6D0(v126);
    return result;
  }
  if ( v126 )
    return sub_224D6D0(v126);
  return result;
}
