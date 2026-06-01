void __fastcall sub_1631AA0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const __m128i *v6; // r12
  int v7; // eax
  __int64 **v8; // rax
  __int64 *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char **v18; // rax
  char *v19; // r9
  char **v20; // rbx
  __int64 v21; // r8
  char *v22; // rsi
  char *v23; // rdi
  char *v24; // rax
  __int64 v25; // rax
  char *v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rax
  _BYTE *v29; // r15
  _BYTE *v30; // rbp
  __int64 *v31; // r13
  _QWORD *v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rbp
  __m128i *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  void *v42; // rdi
  unsigned int v43; // r13d
  __int64 v44; // r12
  __int64 v45; // rdi
  char v46; // al
  size_t v47; // r15
  void *v48; // rbx
  char *v49; // r14
  char *v50; // r12
  signed __int64 v51; // rbp
  signed __int64 v52; // rax
  char *v53; // rbp
  __int64 v54; // rax
  __int64 v55; // rbp
  unsigned int v56; // eax
  int v57; // ebx
  size_t v58; // rax
  unsigned int v59; // eax
  int v60; // ebx
  size_t v61; // rax
  char *v62; // rsi
  void *v63; // rax
  _QWORD *v64; // rsi
  __int64 *v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rbp
  __int64 v69; // r8
  __int64 v70; // r9
  void *v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rcx
  __int64 *v74; // rax
  const __m128i *v75; // r13
  const __m128i *i; // r15
  __int64 v77; // rax
  char *v78; // rsi
  unsigned __int8 *v79; // rbp
  _BYTE *v80; // r15
  __int64 v81; // r13
  _QWORD *v82; // rax
  unsigned __int8 *v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  void **v87; // r13
  unsigned __int8 *v88; // rdi
  __int64 v89; // rax
  void *v90; // rdi
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rbp
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rax
  _QWORD *v97; // rax
  _BYTE *v98; // rsi
  __int64 v99; // r14
  __int64 v100; // r13
  unsigned __int8 *v101; // rbp
  _QWORD *v102; // rax
  _BYTE *v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rax
  void **v107; // r13
  _BYTE *v108; // rdi
  __int64 v109; // rax
  size_t v110; // rdx
  size_t v111; // rdx
  __int64 v112; // rdx
  int v113; // eax
  __int64 v114; // rdx
  int v115; // eax
  char *v116; // rax
  char *v117; // r8
  __int64 v118; // rax
  __int64 v119; // r14
  __int64 v120; // rdx
  __int64 v121; // r14
  __int64 v122; // rbx
  void *v123; // rdi
  __int64 v124; // rax
  __int64 v125; // r15
  __int64 v126; // rdx
  __int64 v127; // r15
  __int64 v128; // rbx
  void *v129; // rdi
  _BYTE *v131; // [rsp+8h] [rbp-180h]
  __int64 v132; // [rsp+10h] [rbp-178h]
  int v134; // [rsp+30h] [rbp-158h]
  char v135; // [rsp+36h] [rbp-152h]
  char v136; // [rsp+37h] [rbp-151h]
  unsigned int v137; // [rsp+44h] [rbp-144h] BYREF
  __int64 v138; // [rsp+48h] [rbp-140h] BYREF
  void *s2; // [rsp+50h] [rbp-138h] BYREF
  size_t n; // [rsp+58h] [rbp-130h]
  void *v141[2]; // [rsp+60h] [rbp-128h] BYREF
  void *v142; // [rsp+70h] [rbp-118h]
  void *src; // [rsp+80h] [rbp-108h]
  size_t v144; // [rsp+88h] [rbp-100h]
  _QWORD v145[2]; // [rsp+90h] [rbp-F8h] BYREF
  void *v146; // [rsp+A0h] [rbp-E8h] BYREF
  size_t v147; // [rsp+A8h] [rbp-E0h]
  _QWORD v148[2]; // [rsp+B0h] [rbp-D8h] BYREF
  __m128i v149; // [rsp+C0h] [rbp-C8h] BYREF
  void *v150; // [rsp+D0h] [rbp-B8h]
  unsigned __int8 *v151; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v152; // [rsp+E8h] [rbp-A0h]
  char v153; // [rsp+138h] [rbp-50h]
  unsigned int v154; // [rsp+140h] [rbp-48h]
  char v155; // [rsp+144h] [rbp-44h]

  v6 = (const __m128i *)a3;
  v7 = *(unsigned __int16 *)(a3 + 56);
  if ( !(_WORD)v7 )
  {
    sub_168B9F0(&v149, a1, *(unsigned int *)(a3 + 24), 4184, 0);
    if ( v153 )
    {
      sub_AE9DF0(&v151, (__int64)v6, 0x10u);
      sub_15F7200(&v149);
      v6[3].m128i_i8[10] |= 1u;
    }
    else
    {
      if ( v155 )
      {
        v68 = sub_168B9E0(&v149);
        v71 = v150;
        if ( v150 )
          v71 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v150 + 32LL))(v150);
        v146 = v71;
        v72 = sub_1587BC0(v68, (__int64 *)&v146, v66, v67, v69, v70);
        sub_AE9DF0((unsigned __int8 **)(*v72 + 32LL * v154 + 8), (__int64)v6, 0x10u);
      }
      sub_15F7200(&v149);
      v6[3].m128i_i8[10] |= 1u;
    }
    return;
  }
  v142 = nullptr;
  *(_OWORD *)v141 = 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v8 = (__int64 **)sub_B8C3D0(a2, a2, a3, a4, a5, a6);
    v9 = *v8;
    v10 = (unsigned __int64)&(*v8)[*((unsigned int *)v8 + 2)];
    if ( (unsigned __int64)v9 < v10 )
    {
      v65 = v9;
      while ( *(_WORD *)(*v65 + 36) != 137 )
      {
        if ( (__int64 *)v10 == ++v65 )
          goto LABEL_9;
      }
      if ( (__int64 *)v10 == v65 )
        goto LABEL_9;
    }
    else
    {
      if ( v9 == (__int64 *)v10 )
        goto LABEL_9;
      if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 137 )
      {
        v11 = (__int64 *)(v10 + 8);
        while ( v11 != v9 )
        {
          v12 = *v11++;
          if ( *(_WORD *)(v12 + 36) == 137 )
            goto LABEL_100;
        }
        goto LABEL_9;
      }
    }
LABEL_100:
    v73 = *v9;
    if ( *(_WORD *)(*v9 + 36) != 137 )
    {
      v74 = v9 + 1;
      do
        v73 = *v74++;
      while ( *(_WORD *)(v73 + 36) != 137 );
    }
    v75 = *(const __m128i **)(v73 + 48);
    for ( i = &v75[*(unsigned int *)(v73 + 40)]; i != v75; ++v75 )
    {
      v149 = _mm_loadu_si128(v75);
      if ( v141[1] == v142 )
      {
        sub_1245C50((__int64)v141, (char *)v141[1], &v149);
      }
      else
      {
        v77 = v149.m128i_i64[1];
        v78 = (char *)v141[1] + 16;
        *(_QWORD *)v141[1] = v149.m128i_i64[0];
        *((_QWORD *)v78 - 1) = v77;
        v141[1] = v78;
      }
    }
LABEL_9:
    v134 = v6[3].m128i_u16[4];
    if ( !v6[3].m128i_i16[4] )
    {
      v13 = 1;
      sub_B8DC30(a2, 1);
      goto LABEL_11;
    }
    goto LABEL_36;
  }
  v134 = v7;
LABEL_36:
  v136 = 0;
  v43 = 0;
  v135 = 0;
  v132 = (__int64)v6;
  do
  {
    v44 = v132;
    s2 = nullptr;
    n = 0;
    v45 = *a1;
    v137 = 0;
    v46 = sub_181EB00(v45, v132, v43, &s2, &v137);
    if ( !v46 )
      goto LABEL_69;
    v47 = n;
    v48 = s2;
    if ( n == 2 )
    {
      if ( *(_WORD *)s2 != 24954 )
        goto LABEL_66;
      v135 = v46;
    }
    else
    {
      if ( n != 3 || *(_WORD *)s2 != 29818 || *((_BYTE *)s2 + 2) != 48 )
      {
        v44 = v132;
LABEL_66:
        sub_168B9F0(&v149, a1, v137, 5372, 0);
        if ( !v153 )
        {
          if ( !v155 )
            goto LABEL_68;
          v93 = sub_168B9E0(&v149);
          v96 = (__int64)v150;
          if ( v150 )
            v96 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v150 + 32LL))(v150);
          v138 = v96;
          v97 = sub_1587BC0(v93, &v138, v91, v92, v94, v95);
          v98 = s2;
          v99 = n;
          v100 = *v97 + 32LL * v154;
          v101 = *(unsigned __int8 **)(v100 + 8);
          if ( !v101 )
          {
            v114 = *(_QWORD *)(v100 + 16);
            v115 = *(_DWORD *)(v114 + 14976);
            if ( v115 )
            {
              v124 = (unsigned int)(v115 - 1);
              *(_DWORD *)(v114 + 14976) = v124;
              v101 = *(unsigned __int8 **)(v114 + 8 * v124 + 14848);
              v125 = *((unsigned int *)v101 + 134);
              *v101 = 0;
              v126 = *((_QWORD *)v101 + 66);
              *((_DWORD *)v101 + 106) = 0;
              v127 = v126 + (v125 << 6);
              if ( v126 != v127 )
              {
                v128 = v126;
                do
                {
                  while ( 1 )
                  {
                    v127 -= 64;
                    v129 = *(void **)(v127 + 24);
                    if ( v129 == (void *)(v127 + 40) )
                      break;
                    operator delete(v129);
                    if ( v128 == v127 )
                      goto LABEL_189;
                  }
                }
                while ( v128 != v127 );
              }
LABEL_189:
              *((_DWORD *)v101 + 134) = 0;
            }
            else
            {
              v131 = s2;
              v101 = (unsigned __int8 *)operator new(0x3A0u);
              *v101 = 0;
              *((_QWORD *)v101 + 12) = v101 + 112;
              *((_QWORD *)v101 + 16) = v101 + 144;
              *((_QWORD *)v101 + 20) = v101 + 176;
              *((_QWORD *)v101 + 24) = v101 + 208;
              *((_QWORD *)v101 + 28) = v101 + 240;
              *((_QWORD *)v101 + 32) = v101 + 272;
              *((_QWORD *)v101 + 36) = v101 + 304;
              *((_QWORD *)v101 + 40) = v101 + 336;
              *((_QWORD *)v101 + 44) = v101 + 368;
              *((_QWORD *)v101 + 48) = v101 + 400;
              *((_QWORD *)v101 + 52) = v101 + 432;
              *((_QWORD *)v101 + 13) = 0;
              v101[112] = 0;
              *((_QWORD *)v101 + 17) = 0;
              v101[144] = 0;
              *((_QWORD *)v101 + 21) = 0;
              v101[176] = 0;
              *((_QWORD *)v101 + 25) = 0;
              v101[208] = 0;
              *((_QWORD *)v101 + 29) = 0;
              v101[240] = 0;
              *((_QWORD *)v101 + 33) = 0;
              v101[272] = 0;
              *((_QWORD *)v101 + 37) = 0;
              v101[304] = 0;
              *((_QWORD *)v101 + 41) = 0;
              v101[336] = 0;
              *((_QWORD *)v101 + 45) = 0;
              v101[368] = 0;
              *((_QWORD *)v101 + 49) = 0;
              v101[400] = 0;
              *((_QWORD *)v101 + 53) = 0x800000000LL;
              v98 = v131;
              *((_QWORD *)v101 + 66) = v101 + 544;
              *((_QWORD *)v101 + 67) = 0x600000000LL;
            }
            *(_QWORD *)(v100 + 8) = v101;
          }
          v101[*v101 + 1] = 0;
          v146 = v148;
          if ( !&v98[v99] || v98 )
          {
            if ( (unsigned __int64)v99 <= 0xF )
            {
              if ( v99 == 1 )
              {
                LOBYTE(v148[0]) = *v98;
                v102 = v148;
                goto LABEL_129;
              }
              v102 = v148;
              if ( v99 )
              {
LABEL_149:
                memcpy(v102, v98, v99);
                v102 = v146;
              }
LABEL_129:
              v147 = v99;
              *((_BYTE *)v102 + v99) = 0;
              v103 = *(_BYTE **)(v100 + 8);
              v104 = (unsigned __int8)*v103;
              *v103 = v104 + 1;
              v105 = (unsigned __int8)v104;
              v106 = 32 * (v104 + 3);
              v107 = (void **)&v103[v106];
              v108 = *(_BYTE **)&v103[v106];
              if ( v146 == v148 )
              {
                v111 = v147;
                if ( v147 )
                {
                  if ( v147 == 1 )
                    *v108 = v148[0];
                  else
                    memcpy(v108, v146, v147);
                  v111 = v147;
                  v108 = *v107;
                }
                v107[1] = (void *)v111;
                v108[v111] = 0;
                v108 = v146;
              }
              else
              {
                if ( v108 == &v103[v106 + 16] )
                {
                  *v107 = v146;
                  v107[1] = (void *)v147;
                  v107[2] = (void *)v148[0];
                }
                else
                {
                  v109 = *(_QWORD *)&v103[32 * v105 + 112];
                  *v107 = v146;
                  v107[1] = (void *)v147;
                  v107[2] = (void *)v148[0];
                  if ( v108 )
                  {
                    v146 = v108;
                    v148[0] = v109;
                    goto LABEL_133;
                  }
                }
                v108 = v148;
                v146 = v148;
              }
LABEL_133:
              v147 = 0;
              *v108 = 0;
              v90 = v146;
              if ( v146 == v148 )
              {
LABEL_68:
                sub_15F7200(&v149);
                *(_BYTE *)(v44 + 58) |= 1u;
                goto LABEL_69;
              }
LABEL_120:
              operator delete(v90);
              goto LABEL_68;
            }
            if ( v99 >= 0 )
            {
              v102 = (_QWORD *)operator new(v99 + 1);
              v148[0] = v99;
              v146 = v102;
              goto LABEL_149;
            }
LABEL_206:
            std::__throw_length_error("basic_string::_M_create");
          }
LABEL_207:
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        }
        v79 = v151;
        v80 = s2;
        v81 = n;
        if ( !v151 )
        {
          v112 = v152;
          v113 = *(_DWORD *)(v152 + 14976);
          if ( v113 )
          {
            v118 = (unsigned int)(v113 - 1);
            *(_DWORD *)(v152 + 14976) = v118;
            v79 = *(unsigned __int8 **)(v112 + 8 * v118 + 14848);
            v119 = *((unsigned int *)v79 + 134);
            *v79 = 0;
            v120 = *((_QWORD *)v79 + 66);
            *((_DWORD *)v79 + 106) = 0;
            v121 = v120 + (v119 << 6);
            if ( v120 != v121 )
            {
              v122 = v120;
              do
              {
                while ( 1 )
                {
                  v121 -= 64;
                  v123 = *(void **)(v121 + 24);
                  if ( v123 == (void *)(v121 + 40) )
                    break;
                  operator delete(v123);
                  if ( v122 == v121 )
                    goto LABEL_182;
                }
              }
              while ( v122 != v121 );
            }
LABEL_182:
            *((_DWORD *)v79 + 134) = 0;
          }
          else
          {
            v79 = (unsigned __int8 *)operator new(0x3A0u);
            *v79 = 0;
            *((_QWORD *)v79 + 12) = v79 + 112;
            *((_QWORD *)v79 + 16) = v79 + 144;
            *((_QWORD *)v79 + 20) = v79 + 176;
            *((_QWORD *)v79 + 24) = v79 + 208;
            *((_QWORD *)v79 + 28) = v79 + 240;
            *((_QWORD *)v79 + 32) = v79 + 272;
            *((_QWORD *)v79 + 36) = v79 + 304;
            *((_QWORD *)v79 + 40) = v79 + 336;
            *((_QWORD *)v79 + 44) = v79 + 368;
            *((_QWORD *)v79 + 48) = v79 + 400;
            *((_QWORD *)v79 + 52) = v79 + 432;
            *((_QWORD *)v79 + 13) = 0;
            v79[112] = 0;
            *((_QWORD *)v79 + 17) = 0;
            v79[144] = 0;
            *((_QWORD *)v79 + 21) = 0;
            v79[176] = 0;
            *((_QWORD *)v79 + 25) = 0;
            v79[208] = 0;
            *((_QWORD *)v79 + 29) = 0;
            v79[240] = 0;
            *((_QWORD *)v79 + 33) = 0;
            v79[272] = 0;
            *((_QWORD *)v79 + 37) = 0;
            v79[304] = 0;
            *((_QWORD *)v79 + 41) = 0;
            v79[336] = 0;
            *((_QWORD *)v79 + 45) = 0;
            v79[368] = 0;
            *((_QWORD *)v79 + 49) = 0;
            v79[400] = 0;
            *((_QWORD *)v79 + 53) = 0x800000000LL;
            *((_QWORD *)v79 + 66) = v79 + 544;
            *((_QWORD *)v79 + 67) = 0x600000000LL;
          }
          v151 = v79;
        }
        v79[*v79 + 1] = 0;
        src = v145;
        if ( &v80[v81] && !v80 )
          goto LABEL_207;
        if ( (unsigned __int64)v81 > 0xF )
        {
          if ( v81 < 0 )
            goto LABEL_206;
          v82 = (_QWORD *)operator new(v81 + 1);
          v145[0] = v81;
          src = v82;
          goto LABEL_142;
        }
        if ( v81 == 1 )
        {
          LOBYTE(v145[0]) = *v80;
          v82 = v145;
          goto LABEL_115;
        }
        v82 = v145;
        if ( v81 )
        {
LABEL_142:
          memcpy(v82, v80, v81);
          v82 = src;
        }
LABEL_115:
        v144 = v81;
        *((_BYTE *)v82 + v81) = 0;
        v83 = v151;
        v84 = *v151;
        *v151 = v84 + 1;
        v85 = (unsigned __int8)v84;
        v86 = 32 * (v84 + 3);
        v87 = (void **)&v83[v86];
        v88 = *(unsigned __int8 **)&v83[v86];
        if ( src == v145 )
        {
          v110 = v144;
          if ( v144 )
          {
            if ( v144 == 1 )
              *v88 = v145[0];
            else
              memcpy(v88, src, v144);
            v110 = v144;
            v88 = (unsigned __int8 *)*v87;
          }
          v87[1] = (void *)v110;
          v88[v110] = 0;
          v88 = (unsigned __int8 *)src;
        }
        else
        {
          if ( v88 == &v83[v86 + 16] )
          {
            *v87 = src;
            v87[1] = (void *)v144;
            v87[2] = (void *)v145[0];
          }
          else
          {
            v89 = *(_QWORD *)&v83[32 * v85 + 112];
            *v87 = src;
            v87[1] = (void *)v144;
            v87[2] = (void *)v145[0];
            if ( v88 )
            {
              src = v88;
              v145[0] = v89;
              goto LABEL_119;
            }
          }
          v88 = (unsigned __int8 *)v145;
          src = v145;
        }
LABEL_119:
        v144 = 0;
        *v88 = 0;
        v90 = src;
        if ( src == v145 )
          goto LABEL_68;
        goto LABEL_120;
      }
      v136 = v46;
    }
    v49 = (char *)v141[1];
    v50 = (char *)v141[0];
    v51 = ((char *)v141[1] - (char *)v141[0]) >> 6;
    v52 = ((char *)v141[1] - (char *)v141[0]) >> 4;
    if ( v51 > 0 )
    {
      v53 = (char *)v141[0] + 64 * v51;
      while ( v47 != *((_QWORD *)v50 + 1) || memcmp(*(const void **)v50, v48, v47) )
      {
        if ( v47 == *((_QWORD *)v50 + 3) && !memcmp(*((const void **)v50 + 2), v48, v47) )
        {
          v50 += 16;
          break;
        }
        if ( v47 == *((_QWORD *)v50 + 5) && !memcmp(*((const void **)v50 + 4), v48, v47) )
        {
          v50 += 32;
          break;
        }
        if ( v47 == *((_QWORD *)v50 + 7) && !memcmp(*((const void **)v50 + 6), v48, v47) )
        {
          v50 += 48;
          break;
        }
        v50 += 64;
        if ( v53 == v50 )
        {
          v52 = (v49 - v50) >> 4;
          goto LABEL_76;
        }
      }
LABEL_53:
      if ( v49 != v50 )
        goto LABEL_54;
      goto LABEL_79;
    }
LABEL_76:
    if ( v52 != 2 )
    {
      if ( v52 != 3 )
      {
        if ( v52 != 1 )
          goto LABEL_79;
        goto LABEL_93;
      }
      if ( v47 == *((_QWORD *)v50 + 1) && !memcmp(*(const void **)v50, v48, v47) )
        goto LABEL_53;
      v50 += 16;
    }
    if ( v47 == *((_QWORD *)v50 + 1) && !memcmp(*(const void **)v50, v48, v47) )
      goto LABEL_53;
    v50 += 16;
LABEL_93:
    if ( v47 == *((_QWORD *)v50 + 1) && !memcmp(*(const void **)v50, v48, v47) )
      goto LABEL_53;
LABEL_79:
    v62 = (char *)v141[1];
    if ( v141[1] == v142 )
    {
      sub_1245C50((__int64)v141, (char *)v141[1], &s2);
    }
    else
    {
      v63 = s2;
      *((_QWORD *)v141[1] + 1) = v47;
      v64 = v62 + 16;
      *(v64 - 2) = v63;
      v141[1] = v64;
    }
LABEL_54:
    ++v43;
  }
  while ( v43 != v134 );
  v13 = 1;
  v6 = (const __m128i *)v132;
  v54 = sub_B8DC30(a2, 1);
  v55 = v54;
  if ( *(_BYTE *)(v54 + 16) == 26 )
  {
    if ( (v56 = (unsigned int)sub_1629270(v54) >> 2, v57 = v56 & 7, (v56 & 7) != 0)
      && v135
      && (v58 = j__strlen("za"), v13 = v132, (unsigned __int8)sub_16319F0(*a1, v132, v57, (__int64)"za", v58))
      || (v59 = (unsigned int)sub_1629270(v55) >> 5, v60 = v59 & 7, (v59 & 7) != 0)
      && v136
      && (v61 = j__strlen("zt0"), v13 = v132, (unsigned __int8)sub_16319F0(*a1, v132, v60, (__int64)"zt0", v61)) )
    {
LABEL_69:
      v42 = v141[0];
      if ( v141[0] )
        goto LABEL_70;
      return;
    }
  }
LABEL_11:
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_30;
  v18 = (char **)sub_B8C3D0(a2, v13, v14, v15, v16, v17);
  v19 = *v18;
  v20 = v18;
  v21 = 8LL * *((unsigned int *)v18 + 2);
  v22 = &(*v18)[v21];
  if ( v21 >> 5 )
  {
    if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) == 137 )
    {
      v23 = *v18;
      goto LABEL_171;
    }
    v23 = v19 + 8;
    if ( *(_WORD *)(*((_QWORD *)v19 + 1) + 36LL) == 137
      || (v23 = v19 + 16, *(_WORD *)(*((_QWORD *)v19 + 2) + 36LL) == 137)
      || (v24 = *v18, v23 = v19 + 24, *(_WORD *)(*((_QWORD *)v19 + 3) + 36LL) == 137) )
    {
LABEL_171:
      if ( v22 != v23 )
      {
        v116 = v23 + 8;
        if ( v22 == v23 + 8 )
        {
          v26 = v23;
        }
        else
        {
          do
          {
            if ( *(_WORD *)(*(_QWORD *)v116 + 36LL) != 137 )
            {
              *(_QWORD *)v23 = *(_QWORD *)v116;
              v23 += 8;
            }
            v116 += 8;
          }
          while ( v22 != v116 );
          v19 = *v20;
          v117 = &(*v20)[v21];
          v26 = &v23[v117 - v22];
          if ( v117 != v22 )
          {
            memmove(v23, v22, v117 - v22);
            v19 = *v20;
          }
        }
        goto LABEL_28;
      }
LABEL_27:
      v26 = v22;
      goto LABEL_28;
    }
    while ( 1 )
    {
      v23 = v24 + 32;
      if ( &v19[32 * (v21 >> 5)] == v24 + 32 )
        break;
      if ( *(_WORD *)(*((_QWORD *)v24 + 4) + 36LL) == 137 )
        goto LABEL_171;
      if ( *(_WORD *)(*((_QWORD *)v24 + 5) + 36LL) == 137 )
      {
        v23 = v24 + 40;
        goto LABEL_171;
      }
      if ( *(_WORD *)(*((_QWORD *)v24 + 6) + 36LL) == 137 )
      {
        v23 = v24 + 48;
        goto LABEL_171;
      }
      if ( *(_WORD *)(*((_QWORD *)v24 + 7) + 36LL) == 137 )
      {
        v23 = v24 + 56;
        goto LABEL_171;
      }
      v24 += 32;
    }
  }
  else
  {
    v23 = *v18;
  }
  v25 = (v22 - v23) >> 3;
  if ( v25 == 2 )
  {
LABEL_199:
    if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) == 137 )
      goto LABEL_171;
    v23 += 8;
    goto LABEL_201;
  }
  if ( v25 == 3 )
  {
    if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) == 137 )
      goto LABEL_171;
    v23 += 8;
    goto LABEL_199;
  }
  if ( v25 != 1 )
    goto LABEL_27;
LABEL_201:
  v26 = v22;
  if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) == 137 )
    goto LABEL_171;
LABEL_28:
  v27 = (v26 - v19) >> 3;
  *((_DWORD *)v20 + 2) = v27;
  if ( !(_DWORD)v27 )
    *(_BYTE *)(a2 + 29) &= ~1u;
LABEL_30:
  v28 = sub_168B6C0(a1);
  v29 = v141[0];
  v30 = v141[1];
  v31 = (__int64 *)v28;
  v32 = (_QWORD *)sub_168B6C0(a1);
  v35 = v32[294];
  v36 = (v30 - v29) >> 4;
  v32[304] += 56LL;
  v37 = (__m128i *)((v35 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v32[295] >= (unsigned __int64)&v37[3].m128i_u64[1] && v35 )
    v32[294] = (char *)v37 + 56;
  else
    v37 = (__m128i *)sub_986170((__int64)(v32 + 294), 56, 56, 3, v33, v34);
  sub_B39070(v37, v31, v6, (__int64)v29, v36);
  sub_B8CC60(a2, (__int64)v37, v38, v39, v40, v41);
  v42 = v141[0];
  if ( v141[0] )
LABEL_70:
    operator delete(v42);
}
