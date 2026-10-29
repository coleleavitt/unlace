void __fastcall sub_20045C0(__int64 a1, char **a2, __int64 a3, char **a4)
{
  char **v4; // rbx
  char *v5; // rdi
  __int64 v6; // rdx
  char *v7; // r13
  char *v8; // rbp
  int v9; // r12d
  __m128i *v10; // rax
  __m128i *v11; // rsi
  __int64 v12; // rdx
  __int8 *v13; // rbx
  size_t v14; // r15
  _QWORD *v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  char *v19; // rdi
  __int64 v20; // rdx
  __int128 v21; // rax
  char **v22; // r15
  __m128 *v23; // r12
  char *v24; // rdi
  char **v25; // rbp
  unsigned __int64 v26; // r13
  char **v27; // rax
  void **v28; // rsi
  void **v29; // r12
  void **v30; // rbp
  _BYTE *v31; // rdx
  unsigned __int64 v32; // rax
  char *v33; // rax
  __int64 v34; // r13
  _BYTE *v35; // r12
  __int64 v36; // rdx
  _BYTE *v37; // rax
  _BYTE *v38; // rdi
  size_t v39; // rdx
  char *v40; // rdx
  char *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // rax
  char *v47; // rdx
  void **v48; // r15
  void **v49; // r12
  signed __int64 v50; // r13
  char **v51; // rax
  char *v52; // rsi
  signed __int64 v53; // r13
  char **v54; // rbp
  void **v55; // r12
  char *v56; // r14
  char *v57; // rax
  char **v58; // rbp
  char v59; // r13
  char *i; // rax
  char v61; // bp
  size_t v62; // r14
  _BYTE *v63; // r13
  unsigned __int64 v64; // r15
  __int64 v65; // rbx
  char *v66; // rcx
  char *v67; // rcx
  char v68; // r14
  __int64 v69; // rbx
  __int64 v70; // rax
  unsigned __int64 v71; // r13
  unsigned __int64 v72; // rdx
  char v73; // r14
  _QWORD *v74; // rbp
  char *v75; // rax
  __int128 v76; // kr00_16
  __int64 v77; // rbx
  __int64 v78; // rax
  unsigned __int64 v79; // r14
  unsigned __int64 v80; // rdx
  char v81; // r13
  __int64 v82; // rbx
  unsigned __int64 v83; // rdi
  _BYTE *v84; // rax
  char **v85; // r8
  void **v86; // r13
  void *v87; // r13
  void **v88; // r12
  void **v89; // rbp
  const char **v90; // r15
  _BYTE *v91; // rdi
  const char **v92; // r13
  __int64 v93; // rbp
  const char **v94; // r12
  char **v95; // rax
  const char *v96; // r13
  const char *v97; // rbx
  const char **v98; // r13
  size_t v99; // rax
  size_t v100; // r12
  char *v101; // rax
  char *v102; // r13
  char *v103; // r12
  _BYTE *j; // rdx
  __int64 v105; // rsi
  unsigned int v106; // ecx
  __int64 v107; // rdi
  __m128i *v108; // r13
  __m128i *v109; // r12
  __int64 v110; // rsi
  __int64 v111; // rdi
  char **v112; // [rsp+8h] [rbp-870h] BYREF
  void **p_ptr; // [rsp+10h] [rbp-868h]
  void **v114; // [rsp+18h] [rbp-860h]
  void **v115; // [rsp+20h] [rbp-858h]
  __int64 v116; // [rsp+28h] [rbp-850h]
  void **v117; // [rsp+30h] [rbp-848h]
  char **v118; // [rsp+38h] [rbp-840h]
  __int64 v119; // [rsp+40h] [rbp-838h]
  char **v120; // [rsp+48h] [rbp-830h]
  __int128 *v121; // [rsp+50h] [rbp-828h]
  char **v122; // [rsp+58h] [rbp-820h]
  __int128 *v123; // [rsp+68h] [rbp-810h] BYREF
  char *v124; // [rsp+70h] [rbp-808h] BYREF
  __int64 v125; // [rsp+78h] [rbp-800h]
  void *v126[2]; // [rsp+80h] [rbp-7F8h] BYREF
  void *v127; // [rsp+90h] [rbp-7E8h]
  void *v128; // [rsp+A0h] [rbp-7D8h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-7D0h]
  __m128i v130; // [rsp+C0h] [rbp-7B8h] BYREF
  __m128i v131; // [rsp+D0h] [rbp-7A8h] BYREF
  __int128 src; // [rsp+E0h] [rbp-798h] BYREF
  _QWORD v133[2]; // [rsp+F0h] [rbp-788h] BYREF
  char *v134; // [rsp+100h] [rbp-778h] BYREF
  __int64 v135; // [rsp+108h] [rbp-770h]
  char *v136; // [rsp+110h] [rbp-768h]
  void **v137; // [rsp+118h] [rbp-760h] BYREF
  void *v138; // [rsp+120h] [rbp-758h]
  void *v139; // [rsp+128h] [rbp-750h]
  void *v140; // [rsp+130h] [rbp-748h] BYREF
  __m128i v141; // [rsp+138h] [rbp-740h]
  void *v142; // [rsp+170h] [rbp-708h] BYREF
  __m128i v143; // [rsp+178h] [rbp-700h]
  __int128 v144; // [rsp+1B0h] [rbp-6C8h] BYREF
  void *v145; // [rsp+1C0h] [rbp-6B8h]
  __int64 v146; // [rsp+1C8h] [rbp-6B0h]
  __int16 v147; // [rsp+1D0h] [rbp-6A8h] BYREF
  __m128i *v148; // [rsp+1F0h] [rbp-688h]
  __int64 v149; // [rsp+1F8h] [rbp-680h]
  __m128i v150; // [rsp+200h] [rbp-678h] BYREF
  void *v151; // [rsp+210h] [rbp-668h] BYREF
  __int64 v152; // [rsp+218h] [rbp-660h]
  _BYTE v153[16]; // [rsp+220h] [rbp-658h] BYREF
  __int16 v154; // [rsp+230h] [rbp-648h]
  void *ptr; // [rsp+420h] [rbp-458h] BYREF
  __m128i v156; // [rsp+428h] [rbp-450h]
  __int16 v157; // [rsp+440h] [rbp-438h]

  v120 = &a2[6 * a3];
  if ( v120 != a2 )
  {
    v118 = a4;
    v4 = a2;
    v114 = &v128;
    v115 = &v140;
    v117 = &v142;
    v119 = a1;
    p_ptr = &ptr;
    while ( 1 )
    {
      v5 = *v4;
      v128 = v114 + 3;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
      v141 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
      v140 = v115 + 3;
      v142 = v117 + 3;
      v143 = v141;
      if ( v5 )
      {
        v124 = (char *)((__int64 (*)(void))sub_2270420)();
        v125 = v6;
      }
      else
      {
        v125 = 0;
        v124 = (char *)&byte_22F0C30;
      }
      v7 = v4[2];
      v127 = nullptr;
      v8 = v4[1];
      *(_OWORD *)v126 = 0;
      v9 = *(_DWORD *)(v119 + 80);
      v156 = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
      ptr = p_ptr + 3;
      if ( v7 - v8 != 8 )
      {
        if ( v8 == v7 )
          goto LABEL_37;
        v112 = v4;
        while ( 1 )
        {
          v13 = (__int8 *)sub_2270420(*(_QWORD *)v8, p_ptr);
          v14 = v12;
          v130.m128i_i64[0] = (__int64)&v131;
          if ( &v13[v12] && !v13 )
            goto LABEL_113;
          if ( (unsigned __int64)v12 > 0xF )
            break;
          if ( v12 == 1 )
          {
            v131.m128i_i8[0] = *v13;
            v10 = &v131;
            goto LABEL_9;
          }
          v10 = &v131;
          if ( v12 )
            goto LABEL_22;
LABEL_9:
          v130.m128i_i64[1] = v14;
          v10->m128i_i8[v14] = 0;
          v11 = (__m128i *)v126[1];
          if ( v126[1] != v127 )
          {
            *(_QWORD *)v126[1] = (char *)v126[1] + 16;
            if ( (__m128i *)v130.m128i_i64[0] == &v131 )
            {
              v11[1] = _mm_load_si128(&v131);
            }
            else
            {
              v11->m128i_i64[0] = v130.m128i_i64[0];
              v11[1].m128i_i64[0] = v131.m128i_i64[0];
            }
            v11->m128i_i64[1] = v130.m128i_i64[1];
            v126[1] = (char *)v126[1] + 32;
            goto LABEL_13;
          }
          sub_A82970((void ***)v126, (const __m128i *)v126[1], &v130);
          if ( (__m128i *)v130.m128i_i64[0] == &v131 )
          {
LABEL_13:
            v8 += 8;
            if ( v7 == v8 )
              goto LABEL_26;
          }
          else
          {
            operator delete((void *)v130.m128i_i64[0]);
            v8 += 8;
            if ( v7 == v8 )
            {
LABEL_26:
              v4 = v112;
              goto LABEL_27;
            }
          }
        }
        if ( v12 < 0 )
          goto LABEL_165;
        v10 = (__m128i *)operator new(v12 + 1);
        v131.m128i_i64[0] = v14;
        v130.m128i_i64[0] = (__int64)v10;
LABEL_22:
        memcpy(v10, v13, v14);
        v10 = (__m128i *)v130.m128i_i64[0];
        goto LABEL_9;
      }
      v42 = sub_2270420(*(_QWORD *)v8, p_ptr);
      v44 = v43;
      if ( !v9 )
        break;
      v134 = (char *)v42;
      v45 = v42 - 1;
      v135 = v43;
      v137 = nullptr;
      v138 = nullptr;
      v139 = nullptr;
      v121 = (__int128 *)v4;
      while ( 1 )
      {
        v46 = v44 + v42;
        while ( 1 )
        {
          v47 = (char *)(v45 + 1);
          v136 = (char *)(v45 + 1);
          if ( v45 + 1 == v46 )
            goto LABEL_100;
          if ( *(_BYTE *)(v45 + 1) != 32 )
            break;
          ++v45;
        }
        LOBYTE(v133[0]) = 0;
        v58 = (char **)v133;
        src = (unsigned __int64)v133;
        v59 = *(_BYTE *)(v45 + 1);
LABEL_115:
        if ( v59 != 34 )
        {
          i = v47 + 1;
          if ( v59 == 39 )
          {
            while ( 1 )
            {
              v67 = &v134[v135];
              v136 = i;
              if ( i == &v134[v135] )
                goto LABEL_161;
              v68 = *i;
              if ( *i == 39 )
                goto LABEL_134;
              v69 = *((_QWORD *)&src + 1);
              v70 = src;
              v71 = *((_QWORD *)&src + 1) + 1LL;
              if ( (char **)src == v58 )
                v72 = 15;
              else
                v72 = v133[0];
              if ( v71 > v72 )
              {
                sub_998B30((__int64)&src, *((size_t *)&src + 1), 0, nullptr, 1u);
                v70 = src;
              }
              *(_BYTE *)(v70 + v69) = v68;
              *((_QWORD *)&src + 1) = v71;
              *(_BYTE *)(src + v69 + 1) = 0;
              i = v136 + 1;
            }
          }
          v112 = v58;
          v61 = v59;
          while ( 1 )
          {
            if ( v61 == 92 )
            {
              v136 = v47 + 1;
              if ( v47 + 1 == &v134[v135] )
                goto LABEL_161;
              v61 = v47[1];
            }
            v62 = *((_QWORD *)&src + 1);
            v63 = (_BYTE *)src;
            v64 = *((_QWORD *)&src + 1) + 1LL;
            if ( (char **)src == v112 )
            {
              if ( v64 > 0xF )
              {
                v65 = 15;
LABEL_164:
                if ( (v64 & 0x8000000000000000LL) != 0LL )
                  goto LABEL_165;
                v82 = 2 * v65;
                if ( v64 < v82 )
                {
                  v83 = v82 + 1;
                  if ( v82 < 0 )
                  {
                    v83 = 0x8000000000000000LL;
                    v82 = 0x7FFFFFFFFFFFFFFFLL;
                  }
                }
                else
                {
                  v83 = *((_QWORD *)&src + 1) + 2LL;
                  v82 = *((_QWORD *)&src + 1) + 1LL;
                }
                v84 = (_BYTE *)operator new(v83);
                v85 = (char **)src;
                v63 = v84;
                if ( v62 )
                {
                  if ( v62 == 1 )
                  {
                    *v84 = *(_BYTE *)src;
                  }
                  else
                  {
                    v116 = src;
                    memcpy(v84, (const void *)src, v62);
                    v85 = (char **)v116;
                  }
                }
                if ( v85 != v112 )
                  operator delete(v85);
                *(_QWORD *)&src = v63;
                v133[0] = v82;
              }
            }
            else
            {
              v65 = v133[0];
              if ( v64 > v133[0] )
                goto LABEL_164;
            }
            v63[v62] = v61;
            *((_QWORD *)&src + 1) = v64;
            *(_BYTE *)(src + v62 + 1) = 0;
            v66 = v136;
            v47 = v136 + 1;
            v136 = v47;
            if ( v47 == &v134[v135] )
              goto LABEL_161;
            v61 = v66[1];
            if ( (v61 & 0xFD) == 0x20 || v61 == 39 )
            {
              v59 = v66[1];
              v58 = v112;
LABEL_136:
              if ( v59 == 32 )
              {
                v73 = 1;
                goto LABEL_138;
              }
              goto LABEL_115;
            }
          }
        }
        for ( i = v47 + 1; ; i = v136 + 1 )
        {
          v67 = &v134[v135];
          v136 = i;
          if ( i == &v134[v135] )
            break;
          v81 = *i;
          if ( *i == 34 )
          {
LABEL_134:
            v47 = i + 1;
            v136 = i + 1;
            if ( i + 1 != v67 )
            {
              v59 = i[1];
              goto LABEL_136;
            }
            break;
          }
          if ( v81 == 92 )
          {
            v136 = i + 1;
            if ( i + 1 == v67 )
              break;
            v81 = i[1];
          }
          v77 = *((_QWORD *)&src + 1);
          v78 = src;
          v79 = *((_QWORD *)&src + 1) + 1LL;
          if ( (char **)src == v58 )
            v80 = 15;
          else
            v80 = v133[0];
          if ( v79 > v80 )
          {
            sub_998B30((__int64)&src, *((size_t *)&src + 1), 0, nullptr, 1u);
            v78 = src;
          }
          *(_BYTE *)(v78 + v77) = v81;
          *((_QWORD *)&src + 1) = v79;
          *(_BYTE *)(src + v77 + 1) = 0;
        }
LABEL_161:
        v73 = 0;
LABEL_138:
        v74 = v138;
        if ( v138 == v139 )
        {
          sub_10BCB90(&v137, (const __m128i *)v138, (__int64)&src);
          goto LABEL_145;
        }
        v75 = (char *)v138 + 16;
        *(_QWORD *)v138 = (char *)v138 + 16;
        v76 = src;
        if ( *((_QWORD *)&src + 1) + (_QWORD)src && !(_QWORD)src )
          goto LABEL_113;
        if ( *((_QWORD *)&src + 1) > 0xFu )
        {
          if ( src < 0 )
LABEL_165:
            std::__throw_length_error("basic_string::_M_create");
          v75 = (char *)operator new(*((_QWORD *)&src + 1) + 1LL);
          v74[2] = *((_QWORD *)&v76 + 1);
          *v74 = v75;
          goto LABEL_189;
        }
        if ( *((_QWORD *)&src + 1) == 1 )
        {
          *((_BYTE *)v74 + 16) = *(_BYTE *)src;
          goto LABEL_144;
        }
        if ( *((_QWORD *)&src + 1) )
        {
LABEL_189:
          memcpy(v75, (const void *)v76, *((size_t *)&v76 + 1));
          v75 = (char *)*v74;
        }
LABEL_144:
        v74[1] = *((_QWORD *)&v76 + 1);
        v75[*((_QWORD *)&v76 + 1)] = 0;
        v138 = (char *)v138 + 32;
LABEL_145:
        if ( (_QWORD *)src != v133 )
          break;
        if ( !v73 )
          goto LABEL_100;
LABEL_147:
        v42 = (__int64)v134;
        v44 = v135;
        v45 = (__int64)v136;
      }
      operator delete((void *)src);
      if ( v73 )
        goto LABEL_147;
LABEL_100:
      v48 = (void **)v138;
      v49 = v137;
      v4 = (char **)v121;
      v50 = (_BYTE *)v138 - (_BYTE *)v137;
      if ( ((_BYTE *)v138 - (_BYTE *)v137) >> 5 )
      {
        if ( (unsigned __int64)(((_BYTE *)v138 - (_BYTE *)v137) >> 5) > 0x7FFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v51 = (char **)operator new((_BYTE *)v138 - (_BYTE *)v137);
        v48 = (void **)v138;
        v49 = v137;
        v112 = v51;
      }
      else
      {
        v112 = nullptr;
      }
      v116 = (__int64)v112 + v50;
      if ( v48 == v49 )
      {
        v54 = v112;
        goto LABEL_194;
      }
      *v112 = (char *)(v112 + 2);
      v52 = (char *)*v49;
      v53 = (signed __int64)v49[1];
      if ( (char *)*v49 + v53 && !v52 )
        goto LABEL_113;
      v54 = v112;
      v55 = v49 + 4;
      v56 = v52;
      while ( 2 )
      {
        if ( (unsigned __int64)v53 > 0xF )
        {
          if ( v53 < 0 )
            goto LABEL_165;
          v57 = (char *)operator new(v53 + 1);
          v54[2] = (char *)v53;
          *v54 = v57;
          goto LABEL_183;
        }
        v57 = *v54;
        if ( v53 == 1 )
        {
          *v57 = *v56;
          v57 = *v54;
          goto LABEL_110;
        }
        if ( v53 )
        {
LABEL_183:
          memcpy(v57, v56, v53);
          v57 = *v54;
        }
LABEL_110:
        v54[1] = (char *)v53;
        v54 += 4;
        v57[v53] = 0;
        if ( v48 != v55 )
        {
          v55 += 4;
          *v54 = (char *)(v54 + 2);
          v56 = (char *)*(v55 - 4);
          v53 = (signed __int64)*(v55 - 3);
          if ( &v56[v53] && !v56 )
            goto LABEL_113;
          continue;
        }
        break;
      }
      v49 = (void **)v138;
      v86 = v137;
      if ( v138 != v137 )
      {
        do
        {
          while ( *v86 != v86 + 2 )
          {
            operator delete(*v86);
            v86 += 4;
            if ( v49 == v86 )
              goto LABEL_193;
          }
          v86 += 4;
        }
        while ( v49 != v86 );
LABEL_193:
        v49 = v137;
      }
LABEL_194:
      if ( v49 )
        operator delete(v49);
LABEL_196:
      v112 = v54;
      v87 = v126[0];
      v88 = (void **)v126[1];
      v127 = (void *)v116;
      v89 = (void **)v126[0];
      for ( *(__m128 *)v126 = _mm_loadh_ps((const double *)&v112); v88 != v89; v89 += 4 )
      {
        while ( *v89 != v89 + 2 )
        {
          operator delete(*v89);
          v89 += 4;
          if ( v88 == v89 )
            goto LABEL_199;
        }
      }
LABEL_199:
      if ( v87 )
        operator delete(v87);
LABEL_27:
      v15 = v126[0];
      if ( (__int16 *)((char *)v126[1] - (char *)v126[0]) > (__int16 *)((char *)&word_3E + 1) )
      {
        while ( 2 )
        {
          v16 = sub_228AA60(*v15, v15[1], 0);
          if ( v17 <= 3 )
            break;
          if ( *(_DWORD *)(v17 + v16 - 4) == 1702389038 && v17 > v17 - 4 )
            v17 -= 4LL;
          if ( v17 == 6 )
          {
            if ( *(_DWORD *)v16 == 1953720676 )
            {
              if ( *(_WORD *)(v16 + 4) != 25443 )
              {
                if ( *(_DWORD *)v16 != 1667326819 )
                  break;
                goto LABEL_79;
              }
            }
            else
            {
              if ( *(_DWORD *)v16 != 1667326819 )
                break;
LABEL_79:
              if ( *(_WORD *)(v16 + 4) != 25960 )
                break;
            }
          }
          else if ( v17 != 7
                 || *(_DWORD *)v16 != 1633903475
                 || *(_WORD *)(v16 + 4) != 26723
                 || *(_BYTE *)(v16 + 6) != 101 )
          {
            break;
          }
          v31 = *((_BYTE **)v126[0] + 4);
          if ( *v31 == 45 )
            break;
          v32 = *((_QWORD *)v126[0] + 5);
          if ( v32 > 3 && *(_DWORD *)&v31[v32 - 4] == 1702389038 && v32 > v32 - 4 )
            v32 -= 4LL;
          v151 = *((void **)v126[0] + 4);
          v154 = 261;
          v152 = v32;
          if ( (unsigned __int8)sub_228AF30(&v151, 0) )
            break;
          v33 = (char *)v126[0] + 32;
          if ( v126[1] == (char *)v126[0] + 32 )
            goto LABEL_86;
          v34 = ((char *)v126[1] - (char *)v33) >> 5;
          if ( (char *)v126[1] - (char *)v33 <= 0 )
          {
            v33 = (char *)v126[1];
            goto LABEL_86;
          }
          v35 = (char *)v126[0] + 48;
LABEL_71:
          v37 = *((_BYTE **)v35 - 2);
          v38 = *((_BYTE **)v35 - 6);
          if ( v37 == v35 )
          {
            v39 = *((_QWORD *)v35 - 1);
            if ( v39 )
            {
              if ( v39 == 1 )
                *v38 = *v35;
              else
                memcpy(v38, v35, v39);
              v39 = *((_QWORD *)v35 - 1);
              v38 = *((_BYTE **)v35 - 6);
            }
            *((_QWORD *)v35 - 5) = v39;
            v38[v39] = 0;
            v38 = *((_BYTE **)v35 - 2);
          }
          else
          {
            if ( v38 == v35 - 32 )
            {
              *((_QWORD *)v35 - 6) = v37;
              *((_QWORD *)v35 - 5) = *((_QWORD *)v35 - 1);
              *((_QWORD *)v35 - 4) = *(_QWORD *)v35;
            }
            else
            {
              *((_QWORD *)v35 - 6) = v37;
              v36 = *((_QWORD *)v35 - 4);
              *((_QWORD *)v35 - 5) = *((_QWORD *)v35 - 1);
              *((_QWORD *)v35 - 4) = *(_QWORD *)v35;
              if ( v38 )
              {
                *((_QWORD *)v35 - 2) = v38;
                *(_QWORD *)v35 = v36;
                goto LABEL_70;
              }
            }
            *((_QWORD *)v35 - 2) = v35;
            v38 = v35;
          }
LABEL_70:
          *((_QWORD *)v35 - 1) = 0;
          v35 += 32;
          *v38 = 0;
          if ( !--v34 )
          {
            v33 = (char *)v126[1];
LABEL_86:
            v40 = v33 - 32;
            v126[1] = v33 - 32;
            v41 = *((char **)v33 - 4);
            if ( v41 == v33 - 16 )
            {
              v15 = v126[0];
              if ( (unsigned __int64)(v40 - (char *)v126[0]) <= 0x3F )
                break;
            }
            else
            {
              operator delete(v41);
              v15 = v126[0];
              if ( (__int16 *)((char *)v126[1] - (char *)v126[0]) <= (__int16 *)((char *)&word_3E + 1) )
                break;
            }
            continue;
          }
          goto LABEL_71;
        }
      }
      if ( ptr != p_ptr + 3 )
        free(ptr);
LABEL_37:
      v18 = sub_2270420(v4[4], v115);
      v19 = v4[5];
      v134 = (char *)v18;
      v135 = v20;
      *(_QWORD *)&v21 = sub_2270420(v19, v114);
      v22 = v118;
      src = v21;
      v23 = (__m128 *)v118[1];
      if ( v23 == (__m128 *)v118[2] )
      {
        sub_20039F0(v118, v118[1], &src, &v134, v126, &v124);
      }
      else
      {
        v24 = v118[1];
        v147 = 261;
        v25 = (char **)v126[1];
        v154 = 261;
        v144 = src;
        v26 = (unsigned __int64)v127;
        v157 = 261;
        v127 = nullptr;
        v151 = v134;
        v152 = v135;
        v27 = (char **)v126[0];
        *(_OWORD *)v126 = 0;
        v112 = v27;
        ptr = v124;
        v156.m128i_i64[0] = v125;
        sub_2253560(v24, &v144);
        sub_2253560(&v23[2], &v151);
        v23[5].m128_u64[0] = v26;
        v28 = p_ptr;
        v112 = v25;
        v23[4] = _mm_loadh_ps((const double *)&v112);
        sub_2253560(&v23[5].m128_u16[4], v28);
        v23[8].m128_u64[0] = 0;
        v23[7].m128_u64[1] = (unsigned __int64)&v23[8].m128_u64[1];
        v23[8].m128_i8[8] = 0;
        v22[1] += 152;
      }
      v29 = (void **)v126[1];
      v30 = (void **)v126[0];
      if ( v126[1] != v126[0] )
      {
        do
        {
          while ( *v30 != v30 + 2 )
          {
            operator delete(*v30);
            v30 += 4;
            if ( v29 == v30 )
              goto LABEL_42;
          }
          v30 += 4;
        }
        while ( v29 != v30 );
LABEL_42:
        v30 = (void **)v126[0];
      }
      if ( v30 )
        operator delete(v30);
      if ( v142 != v117 + 3 )
        free(v142);
      if ( v140 != v115 + 3 )
        free(v140);
      if ( v128 == v114 + 3 )
      {
        v4 += 6;
        if ( v120 == v4 )
          return;
      }
      else
      {
        free(v128);
        v4 += 6;
        if ( v120 == v4 )
          return;
      }
    }
    v144 = 0;
    v145 = &v147;
    v121 = &v144;
    v148 = &v150;
    v123 = &v144;
    v146 = 0x400000000LL;
    v151 = v153;
    v152 = 0x4000000000LL;
    v149 = 0;
    v150 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
    sub_22142C0(v42, v43, &v123, &v151, 0);
    v90 = (const char **)v151;
    v91 = v151;
    v92 = (const char **)((char *)v151 + 8 * (unsigned int)v152);
    v93 = 4LL * (unsigned int)v152;
    v94 = v92;
    if ( !(8LL * (unsigned int)v152) )
    {
      v116 = 32LL * (unsigned int)v152;
      v54 = nullptr;
      v112 = nullptr;
      goto LABEL_222;
    }
    v95 = (char **)operator new(32LL * (unsigned int)v152);
    v112 = v95;
    v116 = (__int64)&v95[v93];
    if ( v90 == v92 )
    {
      v54 = v112;
      v91 = v151;
      goto LABEL_222;
    }
    v96 = *v90;
    *v95 = (char *)(v95 + 2);
    if ( !v96 )
LABEL_113:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v122 = v4;
    v54 = v95;
    v97 = v96;
    v98 = v94;
    while ( 1 )
    {
      v99 = strlen(v97);
      v100 = v99;
      if ( v99 > 0xF )
        break;
      v101 = *v54;
      if ( v100 == 1 )
      {
        *v101 = *v97;
        v101 = *v54;
        goto LABEL_213;
      }
      if ( v100 )
        goto LABEL_220;
LABEL_213:
      ++v90;
      v54[1] = (char *)v100;
      v54 += 4;
      v101[v100] = 0;
      if ( v98 == v90 )
      {
        v4 = v122;
        v91 = v151;
LABEL_222:
        if ( v91 != v153 )
          free(v91);
        v102 = (char *)v145;
        v103 = (char *)v145 + 8 * (unsigned int)v146;
        if ( v145 != v103 )
        {
          for ( j = v145; ; j = v145 )
          {
            v105 = 0x40000000000LL;
            v106 = (unsigned int)((v102 - j) >> 3) >> 7;
            if ( v106 <= 0x1D )
              v105 = 4096LL << v106;
            v107 = *(_QWORD *)v102;
            v102 += 8;
            operator delete(v107, v105, 16);
            if ( v103 == v102 )
              break;
          }
        }
        v108 = v148;
        v109 = &v148[(unsigned int)v149];
        if ( v148 != v109 )
        {
          do
          {
            v110 = v108->m128i_i64[1];
            v111 = v108->m128i_i64[0];
            ++v108;
            operator delete(v111, v110, 16);
          }
          while ( v109 != v108 );
          v109 = v148;
        }
        if ( v109 != (__m128i *)(v121 + 5) )
          free(v109);
        if ( v145 != v121 + 2 )
          free(v145);
        goto LABEL_196;
      }
      v97 = *v90;
      *v54 = (char *)(v54 + 2);
      if ( !v97 )
        goto LABEL_113;
    }
    v101 = (char *)operator new(v99 + 1);
    v54[2] = (char *)v100;
    *v54 = v101;
LABEL_220:
    memcpy(v101, v97, v100);
    v101 = *v54;
    goto LABEL_213;
  }
}
