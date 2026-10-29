void __fastcall sub_1516830(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int16 v4; // ax
  unsigned int v5; // ebx
  __int16 v6; // r15
  __int64 v7; // r13
  unsigned int v8; // ebp
  _BYTE *v9; // rax
  _UNKNOWN **v10; // rbx
  signed __int64 v11; // rdx
  _BYTE *v12; // rsi
  char *v13; // rcx
  __m128i *v14; // rax
  _QWORD *v15; // rdi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rax
  _BYTE *v19; // rdi
  unsigned __int8 **v20; // r14
  void **v21; // rbp
  void **v22; // rbx
  _UNKNOWN **v23; // r14
  unsigned int *v24; // r15
  size_t v25; // r10
  _UNKNOWN **v26; // rbp
  bool v27; // r8
  int v28; // r15d
  size_t v29; // rbx
  size_t v30; // rdx
  const void *v31; // rsi
  int v32; // eax
  char v33; // cl
  int v34; // r12d
  int v35; // esi
  char v36; // cl
  int v37; // eax
  __int64 v38; // rbx
  _UNKNOWN **v39; // rax
  _BYTE *v40; // rsi
  __int64 v41; // rdx
  size_t v42; // rdx
  _UNKNOWN **v43; // rax
  size_t v44; // rax
  __m128i *v45; // rax
  _BYTE *v46; // rdi
  size_t v47; // rdx
  char *v48; // rax
  void **v49; // rbx
  void **p_dest; // rdx
  unsigned __int64 v51; // rsi
  void **v52; // rdi
  __int64 v53; // rdx
  char v54; // al
  size_t v55; // rbx
  size_t v56; // rdx
  _BYTE *v57; // rdi
  size_t v58; // rbx
  unsigned __int64 v59; // rax
  _BYTE *v60; // rdi
  __m128i *v61; // rdi
  size_t v62; // rdx
  _UNKNOWN **v63; // rax
  int v64; // ecx
  int v65; // edx
  int v66; // r9d
  int v67; // r8d
  __int64 v68; // rdx
  unsigned __int8 *v69; // r15
  void *v70; // rdi
  _QWORD *v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  size_t v75; // rdx
  size_t v76; // rdx
  void *v77; // r15
  const char *v78; // rdx
  char v79; // al
  void *v80; // rbx
  size_t v81; // rdx
  int v82; // eax
  __int64 v83; // rax
  __int64 v84; // rbp
  __int64 v85; // rdx
  __int64 v86; // rbp
  __int64 v87; // r14
  __int64 v88; // rbx
  void *v89; // rdi
  char v90; // [rsp+10h] [rbp-1F8h]
  void *s1; // [rsp+18h] [rbp-1F0h] BYREF
  _UNKNOWN **v92; // [rsp+20h] [rbp-1E8h] BYREF
  unsigned __int64 v93; // [rsp+28h] [rbp-1E0h]
  __int64 v94; // [rsp+30h] [rbp-1D8h]
  int v95; // [rsp+38h] [rbp-1D0h]
  char v96; // [rsp+3Fh] [rbp-1C9h]
  void ***v97; // [rsp+40h] [rbp-1C8h]
  unsigned int v98; // [rsp+48h] [rbp-1C0h]
  unsigned int v99; // [rsp+4Ch] [rbp-1BCh]
  void *v100; // [rsp+50h] [rbp-1B8h] BYREF
  signed __int64 v101; // [rsp+58h] [rbp-1B0h]
  _BYTE v102[16]; // [rsp+60h] [rbp-1A8h] BYREF
  void *v103; // [rsp+70h] [rbp-198h] BYREF
  unsigned __int64 v104; // [rsp+78h] [rbp-190h]
  _QWORD v105[2]; // [rsp+80h] [rbp-188h] BYREF
  void *dest; // [rsp+90h] [rbp-178h] BYREF
  __m128 v107; // [rsp+98h] [rbp-170h] BYREF
  void *src; // [rsp+B0h] [rbp-158h] BYREF
  size_t n; // [rsp+B8h] [rbp-150h]
  __m128i v110; // [rsp+C0h] [rbp-148h] BYREF
  __int64 (__fastcall *v111)(__int64); // [rsp+D0h] [rbp-138h]
  __int64 v112; // [rsp+D8h] [rbp-130h]
  __int64 v113; // [rsp+E0h] [rbp-128h]
  void *v114; // [rsp+F0h] [rbp-118h] BYREF
  size_t v115; // [rsp+F8h] [rbp-110h]
  __m128i v116; // [rsp+100h] [rbp-108h] BYREF
  __int64 (__fastcall *v117)(__int64); // [rsp+110h] [rbp-F8h]
  __int64 v118; // [rsp+118h] [rbp-F0h]
  __int64 v119; // [rsp+120h] [rbp-E8h]
  void **v120; // [rsp+140h] [rbp-C8h] BYREF
  __int64 v121; // [rsp+148h] [rbp-C0h]
  char v122; // [rsp+150h] [rbp-B8h] BYREF

  v98 = a2;
  v97 = &v120;
  v120 = (void **)&v122;
  v121 = 0x400000000LL;
  v99 = a3;
  v90 = 0;
  while ( 1 )
  {
    v4 = *(_WORD *)(a1 + 32);
    if ( v4 == 449 )
      break;
    while ( 1 )
    {
      v5 = *(_DWORD *)(a1 + 16);
      if ( (unsigned __int16)(v4 - 5) <= 1u )
        break;
      sub_1504200(a1);
      v6 = *(_WORD *)(a1 + 32);
      LOBYTE(v92) = v6 == 22;
      v7 = 0;
LABEL_5:
      v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 232LL) + 64LL);
      s1 = &v114;
      sub_1564820(&v114, a1, v5, 2178);
      v9 = (_BYTE *)sub_20EAB70(v98, v8);
      v10 = &off_2BB3420;
      sub_AEC220((unsigned __int8 **)&v114, v9, v11);
      v104 = 0;
      v103 = v105;
      LOBYTE(v105[0]) = 0;
      do
      {
        while ( 1 )
        {
          v12 = *v10;
          dest = &v107.m128_u16[4];
          if ( v12 )
          {
            sub_1504120(&dest, v12, (__int64)v10[1] + (_QWORD)v12);
          }
          else
          {
            v107.m128_u64[0] = 0;
            v107.m128_i8[8] = 0;
          }
          v13 = "', '";
          if ( !v104 )
            v13 = "'";
          v14 = (__m128i *)sub_99BDC0(&dest, 0, 0, v13, (-(__int64)(v104 == 0) & 0xFFFFFFFFFFFFFFFDLL) + 4);
          src = &v110;
          if ( (__m128i *)v14->m128i_i64[0] == &v14[1] )
          {
            v110 = _mm_loadu_si128(v14 + 1);
          }
          else
          {
            src = (void *)v14->m128i_i64[0];
            v110.m128i_i64[0] = v14[1].m128i_i64[0];
          }
          n = v14->m128i_u64[1];
          v14->m128i_i64[0] = (__int64)v14[1].m128i_i64;
          v15 = v103;
          v14->m128i_i64[1] = 0;
          v16 = v104;
          v14[1].m128i_i8[0] = 0;
          v17 = n + v16;
          v18 = v15 == v105 ? 15LL : v105[0];
          if ( v17 > v18 )
          {
            v93 = n + v16;
            sub_998B30((__int64)&v103, v16, 0, src, n);
            v15 = v103;
            v17 = v93;
          }
          else if ( n )
          {
            v19 = (char *)v15 + v16;
            if ( n == 1 )
            {
              *v19 = *(_BYTE *)src;
              v15 = v103;
            }
            else
            {
              v93 = n + v16;
              memcpy(v19, src, n);
              v15 = v103;
              v17 = v93;
            }
          }
          v104 = v17;
          *((_BYTE *)v15 + v17) = 0;
          if ( src != &v110 )
            operator delete(src);
          if ( dest == &v107.m128_u16[4] )
            break;
          operator delete(dest);
          v10 += 3;
          if ( &unk_2BB34E0 == (_UNKNOWN *)v10 )
            goto LABEL_22;
        }
        v10 += 3;
      }
      while ( &unk_2BB34E0 != (_UNKNOWN *)v10 );
LABEL_22:
      v100 = v102;
      sub_1504060(&v100, v103, (__int64)v103 + v104);
      if ( v101 == 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_167;
      sub_9EE560(&v100, "'", 1u);
      if ( v103 != v105 )
        operator delete(v103);
      v20 = (unsigned __int8 **)s1;
      sub_AEC220((unsigned __int8 **)s1, v100, v101);
      sub_1503AF0(v20, (unsigned __int8)v92);
      if ( v100 != v102 )
        operator delete(v100);
      sub_AEA040((__int64)s1);
      if ( v6 == 22 )
      {
        v78 = &byte_22F0C30;
        if ( v7 )
          v78 = (const char *)(*(_QWORD *)(v7 + 16) + 16LL);
        src = (void *)(a1 + 1952);
        v79 = *(_BYTE *)(a1 + 1952);
        *(_BYTE *)(a1 + 1952) = 1;
        LOBYTE(n) = v79;
        v110.m128i_i16[6] = 449;
        v110.m128i_i64[0] = a1;
        v110.m128i_i32[2] = 1507350;
        v111 = sub_146A990;
        v112 = 0;
        v113 = 0;
        if ( !(unsigned __int8)sub_156A040(&src, 1625, v78, 0) )
        {
          sub_156E210(&src);
          if ( HIDWORD(v113) )
          {
            v80 = s1;
            sub_1564820(s1, a1, HIDWORD(v113), 2041);
            sub_AEA040((__int64)v80);
          }
        }
        *(_BYTE *)src = n;
      }
LABEL_28:
      v4 = *(_WORD *)(a1 + 32);
      v90 = 1;
      if ( v4 == 449 )
        goto LABEL_29;
    }
    v7 = *(_QWORD *)(a1 + 24);
    v23 = &off_2BB3420;
    v24 = *(unsigned int **)(v7 + 16);
    v25 = *v24;
    s1 = v24 + 4;
    if ( v25 )
    {
      LODWORD(v93) = v5;
      v26 = &off_2BB3420;
      v27 = 0;
      v28 = 0;
      v29 = v25;
      v94 = a1;
      while ( 1 )
      {
        v36 = *((_BYTE *)v26 + 16);
        v34 = v28;
        LOBYTE(v35) = v27;
        ++v28;
        if ( v36 )
          break;
        if ( v27 || (_UNKNOWN *)v29 != v26[1] )
        {
LABEL_47:
          v26 += 3;
          if ( v28 == 8 )
            goto LABEL_54;
        }
        else
        {
          v37 = memcmp(s1, *v26, v29);
          if ( v37 )
            v34 = v95;
          LOBYTE(v35) = v37 == 0;
          v26 += 3;
          v95 = v34;
          v27 = v37 == 0;
          if ( v28 == 8 )
          {
LABEL_54:
            v5 = v93;
            a1 = v94;
            goto LABEL_55;
          }
        }
      }
      if ( !v27 )
      {
        v30 = (size_t)v26[1];
        if ( v29 >= v30 )
        {
          LOBYTE(v92) = 0;
          if ( v30 )
          {
            v31 = *v26;
            v96 = v36;
            v32 = memcmp(s1, v31, v30);
            v33 = v96;
            if ( v32 )
            {
              v34 = v95;
              v33 = (char)v92;
            }
            v27 = v32 == 0;
            v95 = v34;
            LOBYTE(v35) = v33;
          }
          else
          {
            LOBYTE(v35) = v36;
            v95 = v34;
            v27 = 1;
          }
        }
      }
      goto LABEL_47;
    }
    v63 = &off_2BB3420;
    v64 = 0;
    v65 = 0;
    v66 = v95;
    do
    {
      while ( 1 )
      {
        v67 = v65;
        v35 = v64;
        ++v65;
        if ( *((_BYTE *)v63 + 16) )
        {
          if ( !(_BYTE)v64 )
          {
            LOBYTE(v35) = *((_BYTE *)v63 + 16);
            if ( v63[1] )
              LOBYTE(v35) = 0;
            else
              v66 = v67;
            LOBYTE(v64) = v63[1] == nullptr;
          }
          goto LABEL_107;
        }
        if ( !(_BYTE)v64 )
          break;
LABEL_107:
        v63 += 3;
        if ( v65 == 8 )
          goto LABEL_113;
      }
      LOBYTE(v35) = v63[1] == nullptr;
      if ( !v63[1] )
        v66 = v67;
      v63 += 3;
      v64 = v35;
    }
    while ( v65 != 8 );
LABEL_113:
    v95 = v66;
LABEL_55:
    if ( !(_BYTE)v35 )
    {
      sub_1504200(a1);
      v6 = *(_WORD *)(a1 + 32);
      LOBYTE(v92) = v6 == 22;
      goto LABEL_5;
    }
    sub_1504200(a1);
    v38 = v95;
    v39 = &off_2BB3420 + 3 * v95;
    if ( *((_BYTE *)v39 + 17) || *((_BYTE *)v39 + 18) )
    {
      v53 = *(_QWORD *)(v7 + 16);
      v114 = (void *)(a1 + 1952);
      v54 = *(_BYTE *)(a1 + 1952);
      *(_BYTE *)(a1 + 1952) = 1;
      LOBYTE(v115) = v54;
      v116.m128i_i16[6] = 449;
      v116.m128i_i64[0] = a1;
      v116.m128i_i32[2] = 1507350;
      v117 = sub_146A990;
      v118 = 0;
      v119 = 0;
      if ( !(unsigned __int8)sub_156A040(&v114, 1625, v53 + 16, 0) )
        sub_156E210(&v114);
      *(_BYTE *)v114 = v115;
      goto LABEL_28;
    }
    if ( *(_WORD *)(a1 + 32) == 22 )
    {
      v68 = *(unsigned int *)(a1 + 16);
      s1 = &v114;
      sub_1564820(&v114, a1, v68, 2179);
      v69 = (unsigned __int8 *)v114;
      if ( !v114 )
      {
        v81 = v115;
        v82 = *(_DWORD *)(v115 + 14976);
        if ( v82 )
        {
          v83 = (unsigned int)(v82 - 1);
          *(_DWORD *)(v115 + 14976) = v83;
          v69 = *(unsigned __int8 **)(v81 + 8 * v83 + 14848);
          v84 = *((unsigned int *)v69 + 134);
          *v69 = 0;
          v85 = *((_QWORD *)v69 + 66);
          *((_DWORD *)v69 + 106) = 0;
          v86 = v85 + (v84 << 6);
          if ( v85 != v86 )
          {
            v92 = &off_2BB3420;
            v87 = v38;
            v88 = v85;
            do
            {
              while ( 1 )
              {
                v86 -= 64;
                v89 = *(void **)(v86 + 24);
                if ( v89 == (void *)(v86 + 40) )
                  break;
                operator delete(v89);
                if ( v88 == v86 )
                  goto LABEL_162;
              }
            }
            while ( v88 != v86 );
LABEL_162:
            v38 = v87;
            v23 = v92;
          }
          *((_DWORD *)v69 + 134) = 0;
        }
        else
        {
          v69 = (unsigned __int8 *)operator new(0x3A0u);
          *v69 = 0;
          *((_QWORD *)v69 + 12) = v69 + 112;
          *((_QWORD *)v69 + 16) = v69 + 144;
          *((_QWORD *)v69 + 20) = v69 + 176;
          *((_QWORD *)v69 + 24) = v69 + 208;
          *((_QWORD *)v69 + 28) = v69 + 240;
          *((_QWORD *)v69 + 32) = v69 + 272;
          *((_QWORD *)v69 + 36) = v69 + 304;
          *((_QWORD *)v69 + 40) = v69 + 336;
          *((_QWORD *)v69 + 44) = v69 + 368;
          *((_QWORD *)v69 + 48) = v69 + 400;
          *((_QWORD *)v69 + 52) = v69 + 432;
          *((_QWORD *)v69 + 13) = 0;
          v69[112] = 0;
          *((_QWORD *)v69 + 17) = 0;
          v69[144] = 0;
          *((_QWORD *)v69 + 21) = 0;
          v69[176] = 0;
          *((_QWORD *)v69 + 25) = 0;
          v69[208] = 0;
          *((_QWORD *)v69 + 29) = 0;
          v69[240] = 0;
          *((_QWORD *)v69 + 33) = 0;
          v69[272] = 0;
          *((_QWORD *)v69 + 37) = 0;
          v69[304] = 0;
          *((_QWORD *)v69 + 41) = 0;
          v69[336] = 0;
          *((_QWORD *)v69 + 45) = 0;
          v69[368] = 0;
          *((_QWORD *)v69 + 49) = 0;
          v69[400] = 0;
          *((_QWORD *)v69 + 53) = 0x800000000LL;
          *((_QWORD *)v69 + 66) = v69 + 544;
          *((_QWORD *)v69 + 67) = 0x600000000LL;
        }
        v114 = v69;
      }
      v70 = s1;
      v69[*v69 + 1] = 5;
      v71 = v114;
      v72 = *(unsigned __int8 *)v114;
      *(_BYTE *)v114 = v72 + 1;
      v71[v72 + 2] = v7;
      sub_AEA040((__int64)v70);
      v73 = *(_QWORD *)(v7 + 16);
      v110.m128i_i64[0] = a1;
      v110.m128i_i32[2] = 1507350;
      v74 = v73 + 16;
      src = (void *)(a1 + 1952);
      LOBYTE(v73) = *(_BYTE *)(a1 + 1952);
      *(_BYTE *)(a1 + 1952) = 1;
      LOBYTE(n) = v73;
      v110.m128i_i16[6] = 449;
      v111 = sub_146A990;
      v112 = 0;
      v113 = 0;
      if ( !(unsigned __int8)sub_156A040(&src, 1625, v74, 0) )
      {
        sub_156E210(&src);
        if ( HIDWORD(v113) )
        {
          v77 = s1;
          sub_1564820(s1, a1, HIDWORD(v113), 2041);
          sub_AEA040((__int64)v77);
        }
      }
      *(_BYTE *)src = n;
    }
    v40 = (_BYTE *)(*(_QWORD *)(v7 + 16) + 16LL);
    if ( *(_QWORD *)(v7 + 16) == -16 )
    {
      v107.m128_i8[8] = 0;
      v42 = 0;
      v107.m128_u64[0] = 0;
      dest = &v107.m128_u16[4];
    }
    else
    {
      v41 = (__int64)&v40[(unsigned int)**(_QWORD **)(v7 + 16)];
      dest = &v107.m128_u16[4];
      sub_1504120(&dest, v40, v41);
      v42 = v107.m128_u64[0];
    }
    v43 = &v23[3 * v38];
    if ( !*((_BYTE *)v43 + 16) )
    {
      n = 0;
      v110.m128i_i8[0] = 0;
      src = &v110;
      sub_995C30((__int64)&src, v42 + 4);
      v55 = n;
      if ( 0x7FFFFFFFFFFFFFFFLL - n <= 3 )
LABEL_167:
        std::__throw_length_error("basic_string::append");
      if ( src == &v110 )
        v56 = 15;
      else
        v56 = v110.m128i_i64[0];
      if ( n + 4 > v56 )
        sub_998B30((__int64)&src, n, 0, "omp_", 4u);
      else
        *(_DWORD *)((char *)src + n) = 1601203567;
      n = v55 + 4;
      *((_BYTE *)src + v55 + 4) = 0;
      v57 = src;
      v58 = v107.m128_u64[0] + n;
      if ( src == &v110 )
        v59 = 15;
      else
        v59 = v110.m128i_i64[0];
      if ( v58 > v59 )
      {
        sub_998B30((__int64)&src, n, 0, dest, v107.m128_u64[0]);
        v57 = src;
      }
      else if ( v107.m128_u64[0] )
      {
        v60 = (char *)src + n;
        if ( v107.m128_u64[0] == 1 )
          *v60 = *(_BYTE *)dest;
        else
          memcpy(v60, dest, v107.m128_u64[0]);
        v57 = src;
      }
      n = v58;
      v57[v58] = 0;
      v61 = (__m128i *)dest;
      if ( src == &v110 )
      {
        v75 = n;
        if ( n )
        {
          if ( n == 1 )
            *(_BYTE *)dest = v110.m128i_i8[0];
          else
            memcpy(dest, src, n);
          v75 = n;
          v61 = (__m128i *)dest;
        }
        v107.m128_u64[0] = v75;
        v61->m128i_i8[v75] = 0;
        v61 = (__m128i *)src;
        goto LABEL_98;
      }
      if ( dest == &v107.m128_u16[4] )
      {
        s1 = (void *)v110.m128i_i64[0];
        dest = src;
        v107 = _mm_loadh_ps((const double *)&s1);
      }
      else
      {
        s1 = (void *)v110.m128i_i64[0];
        v62 = v107.m128_u64[1];
        dest = src;
        v107 = _mm_loadh_ps((const double *)&s1);
        if ( v61 )
        {
          src = v61;
          v110.m128i_i64[0] = v62;
LABEL_98:
          n = 0;
          v61->m128i_i8[0] = 0;
          goto LABEL_73;
        }
      }
      v61 = &v110;
      src = &v110;
      goto LABEL_98;
    }
    v44 = (size_t)v43[1];
    if ( v44 > v42 )
      std::__throw_out_of_range_fmt(
        "%s: __pos (which is %zu) > this->size() (which is %zu)",
        "basic_string::substr",
        v44,
        v42);
    src = &v110;
    sub_1504120(&src, (_BYTE *)dest + v44, (__int64)dest + v42);
    v45 = (__m128i *)sub_99BDC0(&src, 0, 0, "ompx_", 5u);
    s1 = &v114;
    v114 = &v116;
    if ( (__m128i *)v45->m128i_i64[0] == &v45[1] )
    {
      v116 = _mm_loadu_si128(v45 + 1);
    }
    else
    {
      v114 = (void *)v45->m128i_i64[0];
      v116.m128i_i64[0] = v45[1].m128i_i64[0];
    }
    v115 = v45->m128i_u64[1];
    v45->m128i_i64[0] = (__int64)v45[1].m128i_i64;
    v45->m128i_i64[1] = 0;
    v45[1].m128i_i8[0] = 0;
    v46 = dest;
    if ( v114 != (char *)s1 + 16 )
    {
      if ( dest == &v107.m128_u16[4] )
      {
        v92 = (_UNKNOWN **)v116.m128i_i64[0];
        dest = v114;
        v107 = _mm_loadh_ps((const double *)&v92);
      }
      else
      {
        v92 = (_UNKNOWN **)v116.m128i_i64[0];
        v47 = v107.m128_u64[1];
        dest = v114;
        v107 = _mm_loadh_ps((const double *)&v92);
        if ( v46 )
        {
          v114 = v46;
          v116.m128i_i64[0] = v47;
          goto LABEL_71;
        }
      }
      v46 = (char *)s1 + 16;
      v114 = (char *)s1 + 16;
      goto LABEL_71;
    }
    v76 = v115;
    if ( v115 )
    {
      if ( v115 == 1 )
        *(_BYTE *)dest = v116.m128i_i8[0];
      else
        memcpy(dest, v114, v115);
      v76 = v115;
      v46 = dest;
    }
    v107.m128_u64[0] = v76;
    v46[v76] = 0;
    v46 = v114;
LABEL_71:
    v48 = (char *)s1;
    v115 = 0;
    *v46 = 0;
    if ( v114 != v48 + 16 )
      operator delete(v114);
LABEL_73:
    if ( src != &v110 )
      operator delete(src);
    v49 = v120;
    p_dest = &dest;
    v51 = (unsigned int)v121 + 1LL;
    v52 = &v120[4 * (unsigned int)v121];
    if ( v51 > HIDWORD(v121) )
    {
      if ( v120 > &dest || v52 <= &dest )
      {
        sub_A8C1F0((__int64)v97, v51);
        p_dest = &dest;
        v52 = &v120[4 * (unsigned int)v121];
      }
      else
      {
        sub_A8C1F0((__int64)v97, v51);
        p_dest = (void **)((char *)v120 + (char *)&dest - (char *)v49);
        v52 = &v120[4 * (unsigned int)v121];
      }
    }
    *v52 = v52 + 2;
    sub_1504060(v52, *p_dest, (__int64)p_dest[1] + (_QWORD)*p_dest);
    LODWORD(v121) = v121 + 1;
    if ( dest != &v107.m128_u16[4] )
      operator delete(dest);
  }
LABEL_29:
  sub_1B08230(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), v99, v98, v120, (unsigned int)v121, v90 & 1);
  v21 = v120;
  v22 = &v120[4 * (unsigned int)v121];
  if ( v120 != v22 )
  {
    do
    {
      while ( 1 )
      {
        v22 -= 4;
        if ( *v22 == v22 + 2 )
          break;
        operator delete(*v22);
        if ( v21 == v22 )
          goto LABEL_32;
      }
    }
    while ( v21 != v22 );
LABEL_32:
    v22 = v120;
  }
  if ( v22 != (void **)(v97 + 2) )
    free(v22);
}
