unsigned __int64 __fastcall sub_428A80(_QWORD *a1, __int64 a2, int a3)
{
  unsigned __int8 *v3; // rax
  __int64 v5; // rdx
  char *v6; // rsi
  int v7; // r13d
  const char *v8; // rbx
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  char *v12; // r8
  char *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  void *v21; // rdi
  __int64 v22; // rdx
  size_t v24; // rax
  char *v25; // r8
  size_t v26; // r9
  void *v27; // rdi
  void *v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // r12
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  char *v36; // rdi
  char *v37; // r15
  __int64 v38; // r12
  __int64 v39; // rax
  __m128i v40; // xmm0
  __int64 v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // rax
  unsigned __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdx
  __m128i v47; // xmm0
  __int64 v48; // rax
  unsigned __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rdx
  __m128i v52; // xmm0
  __int64 v53; // rax
  _QWORD *v54; // r13
  void *v55; // rdi
  __int64 v56; // rsi
  void *v57; // rdi
  _QWORD *v58; // r13
  void *v59; // rdi
  char *v60; // rdi
  __int64 v61; // rsi
  void *v62; // rdi
  void *v63; // rdi
  __int64 v64; // rbx
  __int64 v65; // r15
  unsigned __int64 v66; // r14
  __int64 v67; // rbx
  __int64 v68; // rcx
  __int64 v69; // rsi
  _BYTE *v70; // r15
  int v71; // eax
  __int64 v72; // rax
  _BYTE *v73; // r12
  __int64 v74; // rax
  int v75; // r15d
  unsigned __int64 v76; // r13
  unsigned __int64 v77; // rax
  char *v78; // r14
  _BYTE *v79; // rdx
  __int64 v80; // rax
  char *v81; // rdx
  char *v82; // r13
  __int64 v83; // rax
  char *v84; // rcx
  bool v85; // si
  int v86; // edx
  int v87; // edx
  __int64 v88; // rbx
  __int64 v89; // rax
  char *v90; // r13
  char *v91; // rax
  void **p_ptr; // rax
  _QWORD *v93; // rbx
  unsigned __int64 v94; // r12
  __int64 v95; // rbx
  __int64 v96; // r15
  __int64 v97; // r14
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // r13
  _QWORD *v102; // rbx
  void *v103; // rdi
  _QWORD *v104; // rbx
  void *v105; // rdi
  __int64 v106; // rbx
  __int64 v107; // rcx
  __int64 v108; // r12
  char **v109; // r13
  char **v110; // r15
  bool v111; // zf
  __int64 v112; // r13
  int v113; // ebx
  int v114; // eax
  __int64 v115; // rsi
  int v116; // edx
  _QWORD *v117; // rbx
  void *v118; // rdi
  _QWORD *v119; // rbx
  void *v120; // rdi
  __int64 v121; // rbx
  __int64 i; // r12
  __int64 v123; // rax
  char *v124; // r14
  char *v125; // r13
  __int64 v126; // r15
  char *v127; // rbx
  char *v128; // rax
  __int64 v129; // rbx
  void **p_dest; // rax
  char *v131; // rcx
  char *v132; // r14
  size_t v133; // r12
  __int64 v134; // rbx
  __int64 v135; // rbx
  __int64 v136; // r14
  __int64 v137; // rdx
  __int64 v138; // rax
  __int64 v139; // rax
  int v140; // ecx
  int v141; // edx
  unsigned int v142; // ecx
  __int64 v143; // rax
  __int64 v144; // r12
  _QWORD *v145; // r14
  void *v146; // rdi
  void *v147; // rdi
  __int64 v148; // rax
  _QWORD *v149; // r14
  void *v150; // rdi
  void *v151; // rdi
  void *v152; // rdi
  void *v153; // rdi
  size_t v154; // rax
  size_t v155; // r13
  void *v156; // rdi
  size_t v157; // r14
  size_t v158; // rax
  size_t v159; // r14
  size_t v160; // rax
  size_t v161; // rbx
  size_t v162; // r13
  size_t v163; // rax
  size_t v164; // rbx
  size_t v165; // r13
  __int64 v166; // rax
  void *v167; // r13
  void *v168; // rax
  __int64 v169; // rax
  void *v170; // r13
  void *v171; // rdi
  __int64 *v172; // rax
  __int64 **v173; // rsi
  __int64 *v174; // rdi
  unsigned __int64 v175; // r8
  __int64 v176; // r11
  __int64 v177; // r9
  __int64 *v178; // rcx
  unsigned __int64 v179; // rdx
  unsigned __int64 v180; // r9
  __int64 *v181; // rax
  _QWORD *v182; // r12
  __int64 v183; // rax
  unsigned __int64 v184; // rdx
  __int64 v185; // [rsp+8h] [rbp-B8h]
  __int64 v186; // [rsp+10h] [rbp-B0h]
  size_t v187; // [rsp+10h] [rbp-B0h]
  int v188; // [rsp+18h] [rbp-A8h]
  char *v189; // [rsp+18h] [rbp-A8h]
  __int64 v190; // [rsp+20h] [rbp-A0h]
  int v191; // [rsp+20h] [rbp-A0h]
  _BYTE *srcc; // [rsp+28h] [rbp-98h]
  char *src; // [rsp+28h] [rbp-98h]
  _BYTE *srce; // [rsp+28h] [rbp-98h]
  char *srca; // [rsp+28h] [rbp-98h]
  int srcb; // [rsp+28h] [rbp-98h]
  void *srcd; // [rsp+28h] [rbp-98h]
  char n; // [rsp+30h] [rbp-90h]
  size_t na; // [rsp+30h] [rbp-90h]
  int nb; // [rsp+30h] [rbp-90h]
  size_t nc; // [rsp+30h] [rbp-90h]
  char *s[2]; // [rsp+40h] [rbp-80h] BYREF
  void *ptr; // [rsp+50h] [rbp-70h] BYREF
  __int128 v205; // [rsp+58h] [rbp-68h]
  void *dest; // [rsp+70h] [rbp-50h] BYREF
  __int128 v207; // [rsp+78h] [rbp-48h]
  unsigned __int64 v208; // [rsp+88h] [rbp-38h]

  v3 = *(unsigned __int8 **)(a2 + 8);
  v208 = __readfsqword(0x28u);
  v5 = *(unsigned int *)(a2 + 4);
  v6 = (char *)&v3[v5];
  *(__m128i *)s = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v3, (__m128i)(unsigned __int64)&v3[v5]);
  if ( v3 < &v3[v5] )
  {
    v7 = *v3;
    v8 = (const char *)(v3 + 1);
    s[0] = (char *)(v3 + 1);
    switch ( (char)v7 )
    {
      case 0:
      case 1:
        goto LABEL_4;
      case 2:
        v123 = unpack_dq(s);
        v124 = s[0];
        ptr = nullptr;
        v125 = s[1];
        v126 = v123;
        v205 = 0;
        v127 = s[0];
        while ( v127 < s[1] )
        {
          if ( !*v127++ )
          {
            s[0] = v127;
            if ( v124 && (v163 = strlen(v124)) != 0 )
            {
              v164 = v163 + 1;
              nc = v163;
              ptr = (void *)qvector_reserve(&ptr, 0, v163 + 1, 1);
              *(_QWORD *)&v205 = v164;
              memmove(ptr, v124, nc);
              *((_BYTE *)ptr + nc) = 0;
              v125 = s[1];
              v124 = s[0];
            }
            else
            {
              v124 = v127;
            }
            break;
          }
        }
        dest = nullptr;
        v128 = v124;
        v207 = 0;
        while ( v128 < v125 )
        {
          if ( !*v128++ )
          {
            s[0] = v128;
            if ( v124 )
            {
              v160 = strlen(v124);
              v161 = v160;
              if ( v160 )
              {
                v162 = v160 + 1;
                dest = (void *)qvector_reserve(&dest, 0, v160 + 1, 1);
                *(_QWORD *)&v207 = v162;
                memmove(dest, v124, v161);
                *((_BYTE *)dest + v161) = 0;
              }
            }
            break;
          }
        }
        v129 = a1[6] + 176 * v126;
        p_dest = &dest;
        if ( !a3 )
          p_dest = &ptr;
        if ( (void **)v129 != p_dest )
        {
          v131 = (char *)p_dest[1];
          v132 = v131;
          if ( v131 && (v133 = (size_t)(v131 - 1), v131 != (_BYTE *)&dword_0 + 1) )
          {
            v170 = *p_dest;
            v171 = *(void **)v129;
            if ( *(_QWORD *)(v129 + 16) < (unsigned __int64)v131 )
            {
              v183 = qvector_reserve(a1[6] + 176 * v126, *(_QWORD *)v129, v131, 1);
              *(_QWORD *)v129 = v183;
              v171 = (void *)v183;
            }
            *(_QWORD *)(v129 + 8) = v132;
            memmove(v171, v170, v133);
            v132[*(_QWORD *)v129 - 1] = 0;
          }
          else
          {
            *(_QWORD *)(v129 + 8) = 0;
          }
        }
        *(_DWORD *)(v129 + 168) |= 1u;
        if ( dest )
        {
          *(_QWORD *)&v207 = 0;
          qfree(dest);
        }
        if ( ptr )
        {
          *(_QWORD *)&v205 = 0;
          qfree(ptr);
        }
        return v208 - __readfsqword(0x28u);
      case 3:
        v88 = unpack_dq(s);
        v89 = unpack_dq(s);
        if ( !a3 )
          v89 = v88;
        a1[12] = v89;
        return v208 - __readfsqword(0x28u);
      case 4:
      case 5:
        v64 = unpack_dq(s);
        v65 = unpack_dq(s);
        v66 = unpack_dq(s);
        v67 = a1[6] + 176 * v64;
        v68 = *(_QWORD *)(v67 + 24);
        v69 = v68;
        v70 = (_BYTE *)(v68 + 9 * v65);
        v71 = *(_DWORD *)(v67 + 168) & 4;
        if ( ((_BYTE)v7 != 4) != a3 )
        {
          dest = (void *)v66;
          if ( !v71 )
          {
            sub_428330((char **)(v67 + 48), (unsigned __int64 *)&dest);
            v69 = *(_QWORD *)(v67 + 24);
          }
          v72 = *(_QWORD *)(v67 + 32);
          v73 = &v70[-v69];
          if ( *(_QWORD *)(v67 + 40) < (unsigned __int64)(v72 + 1) )
          {
            v166 = qvector_reserve(v67 + 24, v69, v72 + 1, 9);
            *(_QWORD *)(v67 + 24) = v166;
            v70 = &v73[v166];
            v72 = *(_QWORD *)(v67 + 32);
          }
          memmove(v70 + 9, v70, 9 * v72 - (_QWORD)v73);
          *(_QWORD *)v70 = v66;
          v70[8] = 0;
          v74 = *(_QWORD *)(v67 + 32) + 1LL;
LABEL_63:
          *(_DWORD *)(v67 + 168) |= 1u;
          *(_QWORD *)(v67 + 32) = v74;
          return v208 - __readfsqword(0x28u);
        }
        if ( v71 )
          goto LABEL_181;
        if ( !*(_QWORD *)(v67 + 72) )
        {
          v172 = *(__int64 **)(v67 + 64);
          v173 = (__int64 **)(v67 + 64);
          if ( !v172 )
            goto LABEL_181;
          while ( v66 != v172[1] )
          {
            v173 = (__int64 **)v172;
            if ( !*v172 )
              goto LABEL_181;
            v172 = (__int64 *)*v172;
          }
          v174 = *v173;
          v175 = (unsigned __int64)(*v173)[1] % *(_QWORD *)(v67 + 56);
          v176 = 8 * v175;
LABEL_203:
          v177 = *(_QWORD *)(v67 + 48);
          v178 = (__int64 *)*v174;
          if ( v173 == *(__int64 ***)(v177 + v176) )
          {
            if ( v178 )
            {
              v184 = (unsigned __int64)v178[1] % *(_QWORD *)(v67 + 56);
              if ( v175 != v184 )
              {
                *(_QWORD *)(v177 + 8 * v184) = v173;
                *(_QWORD *)(*(_QWORD *)(v67 + 48) + v176) = 0;
                v178 = (__int64 *)*v174;
              }
            }
            else
            {
              *(_QWORD *)(v177 + v176) = 0;
              v178 = (__int64 *)*v174;
            }
          }
          else if ( v178 )
          {
            v179 = (unsigned __int64)v178[1] % *(_QWORD *)(v67 + 56);
            if ( v175 != v179 )
            {
              *(_QWORD *)(v177 + 8 * v179) = v173;
              v178 = (__int64 *)*v174;
            }
          }
          *v173 = v178;
          operator delete(v174, 0x10u);
          --*(_QWORD *)(v67 + 72);
          v68 = *(_QWORD *)(v67 + 24);
          goto LABEL_181;
        }
        v180 = *(_QWORD *)(v67 + 56);
        v173 = *(__int64 ***)(*(_QWORD *)(v67 + 48) + 8 * (v66 % v180));
        v175 = v66 % v180;
        v176 = 8 * (v66 % v180);
        if ( v173 )
        {
          v181 = *v173;
          if ( v66 == (*v173)[1] )
          {
LABEL_213:
            if ( v173 )
            {
              v174 = *v173;
              goto LABEL_203;
            }
          }
          else
          {
            while ( 1 )
            {
              v182 = (_QWORD *)*v181;
              if ( !*v181 )
                break;
              v173 = (__int64 **)v181;
              if ( v66 % v180 != v182[1] % v180 )
                break;
              v181 = (__int64 *)*v181;
              if ( v66 == v182[1] )
                goto LABEL_213;
            }
          }
        }
LABEL_181:
        memmove(v70, v70 + 9, v68 - (_QWORD)v70 + 9LL * *(_QWORD *)(v67 + 32) - 9);
        v74 = *(_QWORD *)(v67 + 32) - 1LL;
        goto LABEL_63;
      case 6:
        v135 = unpack_dq(s);
        v136 = unpack_dq(s);
        v137 = unpack_dq(s);
        if ( a3 )
        {
          v138 = v137;
          v137 = v136;
          v136 = v138;
        }
        sub_7795B0(a1, a1[6] + 176 * v135 + 24, v137, v136);
        return v208 - __readfsqword(0x28u);
      case 7:
        ptr = nullptr;
        v90 = (char *)(v3 + 1);
        dest = nullptr;
        v205 = 0;
        v207 = 0;
        while ( v6 != v90 )
        {
          if ( !*v90++ )
          {
            s[0] = v90;
            v158 = strlen(v8);
            v159 = v158;
            if ( v158 )
            {
              v165 = v158 + 1;
              ptr = (void *)qvector_reserve(&ptr, 0, v158 + 1, 1);
              *(_QWORD *)&v205 = v165;
              memmove(ptr, v8, v159);
              *((_BYTE *)ptr + v159) = 0;
              v6 = s[1];
              v8 = s[0];
            }
            else
            {
              v8 = v90;
            }
            break;
          }
        }
        v91 = (char *)v8;
        do
        {
          if ( v91 >= v6 )
            goto LABEL_92;
          ++v91;
        }
        while ( *(v91 - 1) );
        s[0] = v91;
        if ( !v8 || (v154 = strlen(v8), (v155 = v154) == 0) )
        {
LABEL_92:
          *(_QWORD *)&v207 = 0;
          goto LABEL_93;
        }
        v156 = dest;
        v157 = v154 + 1;
        if ( *((_QWORD *)&v207 + 1) < v154 + 1 )
        {
          dest = (void *)qvector_reserve(&dest, dest, v157, 1);
          v156 = dest;
        }
        *(_QWORD *)&v207 = v157;
        memmove(v156, v8, v155);
        *((_BYTE *)dest + v155) = 0;
LABEL_93:
        p_ptr = &dest;
        if ( !a3 )
          p_ptr = &ptr;
        v93 = (_QWORD *)a1[5];
        if ( v93 + 2 != p_ptr )
        {
          v94 = (unsigned __int64)p_ptr[1];
          if ( v94 > 1 )
          {
            v167 = *p_ptr;
            v168 = (void *)v93[2];
            if ( v93[4] < v94 )
            {
              v168 = (void *)qvector_reserve(v93 + 2, v93[2], v94, 1);
              v93[2] = v168;
            }
            v93[3] = v94;
            memmove(v168, v167, v94 - 1);
            *(_BYTE *)(v93[2] + v94 - 1) = 0;
          }
          else
          {
            v93[3] = 0;
          }
        }
        sub_428010(a1, 0);
        if ( dest )
        {
          *(_QWORD *)&v207 = 0;
          qfree(dest);
        }
        if ( ptr )
        {
          *(_QWORD *)&v205 = 0;
          qfree(ptr);
        }
        return v208 - __readfsqword(0x28u);
      case 8:
        dest = nullptr;
        v207 = 0;
        nb = unpack_dq(s);
        v75 = unpack_dq(s);
        srcb = unpack_dq(s);
        v191 = unpack_dq(s);
        v76 = unpack_dq(s);
        v77 = v207;
        v78 = (char *)dest;
        if ( v76 == (_QWORD)v207 )
          goto LABEL_74;
        ptr = (void *)-1LL;
        v79 = dest;
        LOBYTE(v205) = 0;
        if ( v76 < (unsigned __int64)v207 )
          goto LABEL_73;
        if ( &ptr < dest || &ptr >= (void **)((char *)dest + 9 * *((_QWORD *)&v207 + 1)) )
        {
          if ( *((_QWORD *)&v207 + 1) < v76 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v76, 9);
            v79 = dest;
            v77 = v207;
          }
          if ( v77 < v76 )
          {
            v169 = 9 * v77;
            do
            {
              *(_QWORD *)&v79[v169] = ptr;
              v79[v169 + 8] = v205;
              v79 = dest;
              v169 += 9;
              v78 = (char *)dest;
            }
            while ( 9 * v76 != v169 );
            goto LABEL_73;
          }
        }
        else
        {
          if ( *((_QWORD *)&v207 + 1) < v76 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v76, 9);
            v79 = dest;
            v77 = v207;
          }
          if ( v77 < v76 )
          {
            v80 = 9 * v77;
            do
            {
              v81 = &v79[v80];
              v80 += 9;
              *(_QWORD *)v81 = -1;
              v81[8] = 0;
              v79 = dest;
              v78 = (char *)dest;
            }
            while ( v80 != 9 * v76 );
LABEL_73:
            *(_QWORD *)&v207 = v76;
            v77 = v76;
LABEL_74:
            v82 = &v78[9 * v77];
            if ( v78 != v82 )
            {
              do
              {
                v83 = unpack_dq(s);
                v84 = s[0];
                v85 = 0;
                if ( s[0] < s[1] )
                {
                  v85 = *s[0] != 0;
                  v84 = s[0] + 1;
                }
                s[0] = v84;
                v78 += 9;
                *(_QWORD *)(v78 - 9) = v83;
                *(v78 - 1) = v85;
              }
              while ( v82 != v78 );
              LODWORD(v82) = (_DWORD)dest;
              v77 = v207;
            }
            if ( a3 )
            {
              v86 = v191;
              v191 = v75;
              v75 = v86;
              v87 = srcb;
              srcb = nb;
              nb = v87;
            }
            sub_776760((_DWORD)a1, srcb, nb, v191, v75, (_DWORD)v82, v77);
            v21 = dest;
            if ( !dest )
              return v208 - __readfsqword(0x28u);
LABEL_18:
            *(_QWORD *)&v207 = 0;
            qfree(v21);
            return v208 - __readfsqword(0x28u);
          }
        }
        v78 = (char *)dest;
        goto LABEL_73;
      case 9:
        v95 = unpack_dq(s);
        v96 = unpack_dq(s);
        v97 = unpack_dq(s);
        v98 = unpack_dq(s);
        v99 = 176 * v95 + a1[6];
        v100 = v97;
        if ( a3 )
          v100 = v98;
        v101 = 176 * v95 + a1[6];
        *(_QWORD *)(*(_QWORD *)(v99 + 24) + 9 * v96) = v100;
        v102 = *(_QWORD **)(v99 + 120);
        *(_DWORD *)(v99 + 168) |= 1u;
        while ( v102 )
        {
          v103 = v102;
          v102 = (_QWORD *)*v102;
          operator delete(v103, 0x10u);
        }
        memset(*(void **)(v101 + 104), 0, 8LL * *(_QWORD *)(v101 + 112));
        v104 = *(_QWORD **)(v101 + 64);
        *(_QWORD *)(v101 + 128) = 0;
        *(_QWORD *)(v101 + 120) = 0;
        while ( v104 )
        {
          v105 = v104;
          v104 = (_QWORD *)*v104;
          operator delete(v105, 0x10u);
        }
        memset(*(void **)(v101 + 48), 0, 8LL * *(_QWORD *)(v101 + 56));
        *(_QWORD *)(v101 + 72) = 0;
        *(_QWORD *)(v101 + 64) = 0;
        if ( (*(_BYTE *)(v101 + 168) & 4) == 0 )
        {
          v106 = *(_QWORD *)(v101 + 24);
          v107 = v101;
          v108 = v106 + 9LL * *(_QWORD *)(v101 + 32);
          if ( v106 != v108 )
          {
            v109 = (char **)(v101 + 104);
            v110 = (char **)(v107 + 48);
            do
            {
              v111 = *(_BYTE *)(v106 + 8) == 0;
              dest = *(void **)v106;
              if ( v111 )
                sub_428330(v110, (unsigned __int64 *)&dest);
              else
                sub_428330(v109, (unsigned __int64 *)&dest);
              v106 += 9;
            }
            while ( v108 != v106 );
          }
        }
        return v208 - __readfsqword(0x28u);
      case 10:
        v139 = a1[6] + 176 * unpack_dq(s);
        v140 = *(_DWORD *)(v139 + 168);
        v141 = v140 | 1;
        v142 = v140 & 0xFFFFFFFE;
        if ( a3 )
          v141 = v142;
        *(_DWORD *)(v139 + 168) = v141;
        return v208 - __readfsqword(0x28u);
      case 11:
        v112 = unpack_dq(s);
        v113 = unpack_dd(s);
        v114 = unpack_dd(s);
        v115 = a1[6] + 176 * v112;
        v116 = v113;
        if ( a3 )
          v116 = v114;
        *(_DWORD *)(v115 + 168) = *(_DWORD *)(a1[6] + 176 * v112 + 168) & 3 | v116 | 1;
        if ( (((unsigned __int8)v114 ^ (unsigned __int8)v113) & 4) != 0 )
        {
          v117 = *(_QWORD **)(v115 + 120);
          while ( v117 )
          {
            v118 = v117;
            v117 = (_QWORD *)*v117;
            operator delete(v118, 0x10u);
          }
          memset(*(void **)(v115 + 104), 0, 8LL * *(_QWORD *)(v115 + 112));
          v119 = *(_QWORD **)(v115 + 64);
          *(_QWORD *)(v115 + 128) = 0;
          *(_QWORD *)(v115 + 120) = 0;
          while ( v119 )
          {
            v120 = v119;
            v119 = (_QWORD *)*v119;
            operator delete(v120, 0x10u);
          }
          memset(*(void **)(v115 + 48), 0, 8LL * *(_QWORD *)(v115 + 56));
          *(_QWORD *)(v115 + 72) = 0;
          *(_QWORD *)(v115 + 64) = 0;
          if ( (*(_BYTE *)(v115 + 168) & 4) == 0 )
          {
            v121 = *(_QWORD *)(v115 + 24);
            for ( i = v121 + 9LL * *(_QWORD *)(v115 + 32); v121 != i; v121 += 9 )
            {
              v111 = *(_BYTE *)(v121 + 8) == 0;
              dest = *(void **)v121;
              if ( v111 )
                sub_428330((char **)(v115 + 48), (unsigned __int64 *)&dest);
              else
                sub_428330((char **)(v115 + 104), (unsigned __int64 *)&dest);
            }
          }
        }
        return v208 - __readfsqword(0x28u);
      case 12:
        v134 = unpack_dq(s);
        sub_779C30(a1, v134, a3 == 1, 1);
        if ( a3 != 1 && !(unsigned __int8)sub_775500(a1[6] + 176 * v134, s, 1) )
        {
          if ( !under_debugger )
            interr(2869);
          BUG();
        }
        return v208 - __readfsqword(0x28u);
      default:
        return v208 - __readfsqword(0x28u);
    }
  }
  v7 = 0;
LABEL_4:
  dest = nullptr;
  v207 = 0;
  v9 = unpack_dq(s);
  v10 = unpack_dq(s);
  v11 = unpack_dq(s);
  v12 = s[0];
  v190 = v11;
  n = 0;
  if ( s[0] < s[1] )
  {
    v12 = s[0] + 1;
    n = *s[0];
  }
  s[0] = v12;
  v13 = v12;
  do
  {
    if ( v13 >= s[1] )
      goto LABEL_9;
    ++v13;
  }
  while ( *(v13 - 1) );
  s[0] = v13;
  if ( !v12 || (src = v12, v24 = strlen(v12), v25 = src, (v26 = v24) == 0) )
  {
LABEL_9:
    *(_QWORD *)&v207 = 0;
    goto LABEL_10;
  }
  v27 = dest;
  v28 = (void *)(v24 + 1);
  if ( *((_QWORD *)&v207 + 1) < v24 + 1 )
  {
    v187 = v24;
    v189 = src;
    srcd = (void *)(v24 + 1);
    dest = (void *)qvector_reserve(&dest, dest, v28, 1);
    v26 = v187;
    v27 = dest;
    v25 = v189;
    v28 = srcd;
  }
  *(_QWORD *)&v207 = v28;
  srce = (_BYTE *)v26;
  memmove(v27, v25, v26);
  srce[(_QWORD)dest] = 0;
LABEL_10:
  v188 = unpack_dd(s);
  v14 = 9 * v10;
  v15 = a1[6] + 176 * v9;
  v16 = *(_QWORD *)(v15 + 24);
  v17 = *(_QWORD *)(v15 + 32);
  v18 = v16 + 9 * v10;
  if ( v7 == a3 )
  {
    memmove((void *)v18, (const void *)(v18 + 9), 9 * v17 - 9 - v14);
    --*(_QWORD *)(v15 + 32);
    if ( n )
    {
      v32 = a1[7];
      if ( v32 )
      {
        v143 = v32 - 1;
        a1[7] = v143;
        v144 = a1[6] + 176 * v143;
        v145 = *(_QWORD **)(v144 + 120);
        while ( v145 )
        {
          v146 = v145;
          v145 = (_QWORD *)*v145;
          operator delete(v146, 0x10u);
        }
        memset(*(void **)(v144 + 104), 0, 8LL * *(_QWORD *)(v144 + 112));
        v147 = *(void **)(v144 + 104);
        v148 = *(_QWORD *)(v144 + 112);
        *(_QWORD *)(v144 + 128) = 0;
        *(_QWORD *)(v144 + 120) = 0;
        if ( v147 != (void *)(v144 + 152) )
          operator delete(v147, 8 * v148);
        v149 = *(_QWORD **)(v144 + 64);
        while ( v149 )
        {
          v150 = v149;
          v149 = (_QWORD *)*v149;
          operator delete(v150, 0x10u);
        }
        memset(*(void **)(v144 + 48), 0, 8LL * *(_QWORD *)(v144 + 56));
        v151 = *(void **)(v144 + 48);
        *(_QWORD *)(v144 + 72) = 0;
        *(_QWORD *)(v144 + 64) = 0;
        if ( v151 != (void *)(v144 + 96) )
          operator delete(v151, 8LL * *(_QWORD *)(v144 + 56));
        v152 = *(void **)(v144 + 24);
        if ( v152 )
        {
          *(_QWORD *)(v144 + 32) = 0;
          qfree(v152);
        }
        v153 = *(void **)v144;
        if ( *(_QWORD *)v144 )
        {
          *(_QWORD *)(v144 + 8) = 0;
          qfree(v153);
        }
      }
    }
    else
    {
      sub_776320(a1, v190);
    }
    v21 = dest;
  }
  else
  {
    if ( *(_QWORD *)(v15 + 40) < (unsigned __int64)(v17 + 1) )
    {
      v33 = qvector_reserve(v15 + 24, v16, v17 + 1, 9);
      v14 = 9 * v10;
      *(_QWORD *)(v15 + 24) = v33;
      v18 = v33 + 9 * v10;
      v17 = *(_QWORD *)(v15 + 32);
    }
    srcc = (_BYTE *)v18;
    memmove((void *)(v18 + 9), (const void *)v18, 9 * v17 - v14);
    srcc[8] = 1;
    *(_QWORD *)srcc = v190;
    ++*(_QWORD *)(v15 + 32);
    if ( n )
    {
      v29 = a1[7];
      v30 = a1[8];
      if ( v30 < v29 + 1 )
      {
        v34 = qvector_reserve(a1 + 6, 0, v29 + 1, 176);
        v35 = a1[8];
        v36 = (char *)a1[6];
        v186 = v34;
        a1[8] = v30;
        v185 = v35;
        srca = (char *)(a1[7] - 1LL);
        if ( (__int64)srca >= 0 )
        {
          v37 = v36 + 96;
          v38 = v34;
          na = (size_t)(v36 + 152);
          do
          {
            v39 = *((_QWORD *)v37 - 12);
            v40 = _mm_loadu_si128((const __m128i *)(v37 - 88));
            *((_QWORD *)v37 - 12) = 0;
            *(_OWORD *)(v37 - 88) = 0;
            *(_QWORD *)v38 = v39;
            *(__m128i *)(v38 + 8) = v40;
            v41 = *((_QWORD *)v37 - 9);
            v42 = _mm_loadu_si128((const __m128i *)v37 - 4);
            *((_QWORD *)v37 - 9) = 0;
            *(_QWORD *)(v38 + 24) = v41;
            *(__m128i *)(v38 + 32) = v42;
            v43 = *((_QWORD *)v37 - 6);
            v44 = *((_QWORD *)v37 - 5);
            *((_OWORD *)v37 - 4) = 0;
            *(_QWORD *)(v38 + 48) = v43;
            v45 = *((_QWORD *)v37 - 4);
            *(_QWORD *)(v38 + 56) = v44;
            *(_QWORD *)(v38 + 64) = v45;
            v46 = *((_QWORD *)v37 - 3);
            *(_QWORD *)(v38 + 96) = 0;
            v47 = _mm_loadu_si128((const __m128i *)v37 - 1);
            *(_QWORD *)(v38 + 72) = v46;
            *(__m128i *)(v38 + 80) = v47;
            if ( *((char **)v37 - 6) == v37 )
            {
              *(_QWORD *)(v38 + 48) = v38 + 96;
              *(_QWORD *)(v38 + 96) = *(_QWORD *)v37;
            }
            if ( v45 )
              *(_QWORD *)(*(_QWORD *)(v38 + 48) + 8 * (*(_QWORD *)(v45 + 8) % v44)) = v38 + 64;
            v48 = *((_QWORD *)v37 + 1);
            *((_QWORD *)v37 - 1) = 0;
            *((_QWORD *)v37 - 5) = 1;
            v49 = *((_QWORD *)v37 + 2);
            *(_QWORD *)v37 = 0;
            *((_QWORD *)v37 - 6) = v37;
            *((_QWORD *)v37 - 4) = 0;
            *((_QWORD *)v37 - 3) = 0;
            *(_QWORD *)(v38 + 104) = v48;
            v50 = *((_QWORD *)v37 + 3);
            *(_QWORD *)(v38 + 112) = v49;
            *(_QWORD *)(v38 + 120) = v50;
            v51 = *((_QWORD *)v37 + 4);
            v52 = _mm_loadu_si128((const __m128i *)(v37 + 40));
            *(_QWORD *)(v38 + 152) = 0;
            *(_QWORD *)(v38 + 128) = v51;
            *(__m128i *)(v38 + 136) = v52;
            if ( *((_QWORD *)v37 + 1) == na )
            {
              *(_QWORD *)(v38 + 104) = v38 + 152;
              *(_QWORD *)(v38 + 152) = *((_QWORD *)v37 + 7);
            }
            if ( v50 )
              *(_QWORD *)(*(_QWORD *)(v38 + 104) + 8 * (*(_QWORD *)(v50 + 8) % v49)) = v38 + 120;
            *((_QWORD *)v37 + 3) = 0;
            *((_QWORD *)v37 + 6) = 0;
            *((_QWORD *)v37 + 1) = na;
            v53 = *((_QWORD *)v37 + 8);
            *((_QWORD *)v37 + 2) = 1;
            *((_QWORD *)v37 + 7) = 0;
            *((_QWORD *)v37 + 4) = 0;
            *(_QWORD *)(v38 + 160) = v53;
            *(_QWORD *)(v38 + 168) = *((_QWORD *)v37 + 9);
            v54 = *((_QWORD **)v37 + 3);
            while ( v54 )
            {
              v55 = v54;
              v54 = (_QWORD *)*v54;
              operator delete(v55, 0x10u);
            }
            memset(*((void **)v37 + 1), 0, 8LL * *((_QWORD *)v37 + 2));
            v56 = *((_QWORD *)v37 + 2);
            v57 = *((void **)v37 + 1);
            *((_QWORD *)v37 + 4) = 0;
            *((_QWORD *)v37 + 3) = 0;
            if ( (void *)na != v57 )
              operator delete(v57, 8 * v56);
            v58 = *((_QWORD **)v37 - 4);
            while ( v58 )
            {
              v59 = v58;
              v58 = (_QWORD *)*v58;
              operator delete(v59, 0x10u);
            }
            memset(*((void **)v37 - 6), 0, 8LL * *((_QWORD *)v37 - 5));
            v60 = *((char **)v37 - 6);
            v61 = *((_QWORD *)v37 - 5);
            *((_QWORD *)v37 - 3) = 0;
            *((_QWORD *)v37 - 4) = 0;
            if ( v60 != v37 )
              operator delete(v60, 8 * v61);
            v62 = *((void **)v37 - 9);
            if ( v62 )
            {
              *((_QWORD *)v37 - 8) = 0;
              qfree(v62);
            }
            v63 = *((void **)v37 - 12);
            if ( v63 )
            {
              *((_QWORD *)v37 - 11) = 0;
              qfree(v63);
            }
            --srca;
            v38 += 176;
            v37 += 176;
            na += 176LL;
          }
          while ( srca != (char *)-1LL );
          v36 = (char *)a1[6];
        }
        qfree(v36);
        a1[6] = v186;
        a1[8] = v185;
        v29 = a1[7];
      }
      else
      {
        v186 = a1[6];
      }
      v31 = 176 * v29 + v186;
      *(_OWORD *)(v31 + 8) = 0;
      *(_OWORD *)(v31 + 32) = 0;
      *(_QWORD *)(v31 + 48) = v31 + 96;
      *(_QWORD *)v31 = 0;
      *(_QWORD *)(v31 + 24) = 0;
      *(_QWORD *)(v31 + 56) = 1;
      *(_QWORD *)(v31 + 64) = 0;
      *(_QWORD *)(v31 + 72) = 0;
      *(_QWORD *)(v31 + 88) = 0;
      *(_QWORD *)(v31 + 96) = 0;
      *(_QWORD *)(v31 + 104) = v31 + 152;
      *(_QWORD *)(v31 + 112) = 1;
      *(_QWORD *)(v31 + 120) = 0;
      *(_QWORD *)(v31 + 128) = 0;
      *(_QWORD *)(v31 + 144) = 0;
      *(_QWORD *)(v31 + 152) = 0;
      *(_QWORD *)(v31 + 160) = 0;
      *(_QWORD *)(v31 + 168) = 0;
      *(_DWORD *)(v31 + 80) = 1065353216;
      *(_DWORD *)(v31 + 136) = 1065353216;
      ++a1[7];
    }
    else
    {
      v19 = a1[10];
      if ( v19 )
        a1[10] = v19 - 1;
    }
    v20 = a1[6] + 176 * v190;
    v21 = *(void **)v20;
    v22 = *(_QWORD *)(v20 + 16);
    *(_QWORD *)v20 = dest;
    *(_OWORD *)(v20 + 8) = v207;
    *((_QWORD *)&v207 + 1) = v22;
    dest = v21;
    *(_QWORD *)(v20 + 160) = v9;
    *(_DWORD *)(v20 + 168) = v188 & 0xFFFFFFFC | 1;
  }
  *(_DWORD *)(v15 + 168) |= 1u;
  if ( v21 )
    goto LABEL_18;
  return v208 - __readfsqword(0x28u);
}
