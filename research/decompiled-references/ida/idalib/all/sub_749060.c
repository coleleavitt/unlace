__int64 __fastcall sub_749060(_BYTE *a1, void *a2, __int64 a3, __int64 a4, __int64 (__fastcall *a5)(), __int64 a6)
{
  __int64 (__fastcall *v7)(); // rbp
  void *v8; // rbx
  unsigned int token; // r12d
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // r15
  const void *v13; // r10
  size_t v14; // r11
  void *v15; // rdi
  unsigned int v16; // eax
  char *v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r15
  const char *v20; // r14
  __int64 v21; // r12
  void (__fastcall *v22)(__int64, _QWORD, signed __int64 *); // r14
  int v23; // esi
  __int64 v24; // rdx
  unsigned int v25; // ebx
  const char *file_line; // rax
  size_t v28; // rax
  const char *v29; // r9
  size_t v30; // r10
  size_t v31; // rax
  char *v32; // r10
  size_t v33; // r9
  const char *v34; // rax
  void *v35; // rdi
  void *v36; // rdx
  void *v37; // rdi
  void *v38; // rdx
  __int64 v39; // rax
  size_t v40; // r13
  __int64 v41; // rdx
  void *v42; // rbp
  char *v43; // rsi
  __m128i v44; // xmm0
  __int64 v45; // r8
  __int16 v46; // r9
  __int64 v47; // rax
  char v48; // dl
  char *v49; // rax
  __m128i v50; // xmm0
  unsigned int v51; // eax
  signed __int64 *v52; // r13
  const char *v53; // rbp
  char *v54; // rdx
  __int64 v55; // r13
  __int64 v56; // r12
  char *v57; // rax
  void *v58; // rdi
  int v59; // ecx
  int v60; // r8d
  int v61; // r9d
  __int64 v62; // rsi
  const char *v63; // rax
  __int64 v64; // rbp
  size_t v65; // rbp
  __m128i v66; // xmm0
  __m128i si128; // xmm0
  int v68; // r9d
  void *v69; // r8
  const char *v70; // rax
  char *v71; // rdx
  __int64 v72; // r12
  __int64 v73; // rbx
  char *v74; // rax
  void *v75; // rdi
  char v76; // al
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 *v80; // rax
  char *v81; // r14
  __int64 v82; // r15
  __int64 v83; // rbp
  const char **v84; // r13
  __int64 v85; // rbx
  size_t v86; // r9
  size_t v87; // r11
  __m128i v88; // xmm0
  __m128i v89; // xmm0
  const char *v90; // rax
  void *v91; // r15
  char *v92; // r15
  void *v93; // r15
  size_t v95; // [rsp+0h] [rbp-218h]
  char *srcd; // [rsp+8h] [rbp-210h]
  const char *src; // [rsp+8h] [rbp-210h]
  char *srca; // [rsp+8h] [rbp-210h]
  _BYTE *srcf; // [rsp+8h] [rbp-210h]
  _BYTE *srch; // [rsp+8h] [rbp-210h]
  void *srcc; // [rsp+8h] [rbp-210h]
  void *srce; // [rsp+8h] [rbp-210h]
  void *srcg; // [rsp+8h] [rbp-210h]
  void *srcb; // [rsp+8h] [rbp-210h]
  __int64 *v106; // [rsp+10h] [rbp-208h]
  void *v108; // [rsp+18h] [rbp-200h]
  size_t v109; // [rsp+18h] [rbp-200h]
  size_t v110; // [rsp+20h] [rbp-1F8h]
  __int64 v111; // [rsp+20h] [rbp-1F8h]
  char *v112; // [rsp+20h] [rbp-1F8h]
  const char *v113; // [rsp+20h] [rbp-1F8h]
  __int64 (__fastcall *v114)(); // [rsp+20h] [rbp-1F8h]
  size_t v115; // [rsp+20h] [rbp-1F8h]
  const void *v116; // [rsp+28h] [rbp-1F0h]
  __int16 v117; // [rsp+28h] [rbp-1F0h]
  size_t v118; // [rsp+28h] [rbp-1F0h]
  size_t v119; // [rsp+28h] [rbp-1F0h]
  int v120; // [rsp+34h] [rbp-1E4h] BYREF
  signed __int64 v121; // [rsp+38h] [rbp-1E0h] BYREF
  _QWORD v122[2]; // [rsp+40h] [rbp-1D8h] BYREF
  void *v123; // [rsp+50h] [rbp-1C8h] BYREF
  __int128 v124; // [rsp+58h] [rbp-1C0h]
  char *s; // [rsp+70h] [rbp-1A8h] BYREF
  __int128 v126; // [rsp+78h] [rbp-1A0h]
  char *s2; // [rsp+90h] [rbp-188h] BYREF
  __int128 v128; // [rsp+98h] [rbp-180h]
  __int64 v129; // [rsp+A8h] [rbp-170h]
  __int64 v130; // [rsp+B0h] [rbp-168h]
  __int64 v131; // [rsp+B8h] [rbp-160h]
  __m128i v132; // [rsp+C0h] [rbp-158h] BYREF
  void *v133; // [rsp+D0h] [rbp-148h] BYREF
  size_t n[2]; // [rsp+D8h] [rbp-140h]
  __int64 v135; // [rsp+E8h] [rbp-130h]
  __int64 v136; // [rsp+F0h] [rbp-128h]
  __int64 v137; // [rsp+F8h] [rbp-120h]
  __m128i v138[3]; // [rsp+100h] [rbp-118h] BYREF
  char v139; // [rsp+138h] [rbp-E0h]
  __m128i v140; // [rsp+140h] [rbp-D8h] BYREF
  void *v141[2]; // [rsp+150h] [rbp-C8h] BYREF
  __int128 v142; // [rsp+160h] [rbp-B8h]
  __int16 v143; // [rsp+170h] [rbp-A8h]
  __int64 v144; // [rsp+178h] [rbp-A0h]
  char v145; // [rsp+180h] [rbp-98h]
  __m128i v146; // [rsp+188h] [rbp-90h]
  void *dest; // [rsp+198h] [rbp-80h] BYREF
  __int128 v148; // [rsp+1A0h] [rbp-78h]
  __int16 v149; // [rsp+1B0h] [rbp-68h]
  __int64 v150; // [rsp+1B8h] [rbp-60h]
  char v151; // [rsp+1C0h] [rbp-58h]
  __m128i v152; // [rsp+1C8h] [rbp-50h] BYREF
  unsigned __int64 v153; // [rsp+1D8h] [rbp-40h]

  v7 = a5;
  v8 = a2;
  v153 = __readfsqword(0x28u);
  if ( !a5 )
    v7 = off_2C81C00;
  s2 = nullptr;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v133 = nullptr;
  v135 = 0;
  v136 = 0;
  v137 = 0;
  v128 = 0;
  v132 = 0;
  *(_OWORD *)n = 0;
  v138[0] = 0;
  token = lex_get_token((int)a2);
  v10 = sub_7A0520(a2);
  v11 = *(_QWORD *)(v10 + 8);
  v12 = v10;
  if ( v11 <= 1 )
  {
    file_line = (const char *)lex_get_file_line(a2, v10 + 72, &s, 0);
    if ( file_line && (src = file_line, v28 = strlen(file_line), v29 = src, (v30 = v28) != 0) )
    {
      v37 = *(void **)(v12 + 24);
      v38 = (void *)(v28 + 1);
      if ( *(_QWORD *)(v12 + 40) < v28 + 1 )
      {
        v119 = v28;
        v113 = src;
        srcg = (void *)(v28 + 1);
        v78 = qvector_reserve(v12 + 24, v37, v38, 1);
        *(_QWORD *)(v12 + 24) = v78;
        v30 = v119;
        v37 = (void *)v78;
        v29 = v113;
        v38 = srcg;
      }
      *(_QWORD *)(v12 + 32) = v38;
      srch = (_BYTE *)v30;
      memmove(v37, v29, v30);
      srch[*(_QWORD *)(v12 + 24)] = 0;
    }
    else
    {
      *(_QWORD *)(v12 + 32) = 0;
    }
    if ( !s || (srca = s, v31 = strlen(s), v32 = srca, (v33 = v31) == 0) )
    {
      *(_QWORD *)(v12 + 56) = 0;
      if ( !token )
        goto LABEL_8;
LABEL_34:
      v34 = (const char *)qstrerror(token);
      goto LABEL_35;
    }
    v35 = *(void **)(v12 + 48);
    v36 = (void *)(v31 + 1);
    if ( *(_QWORD *)(v12 + 64) < v31 + 1 )
    {
      v118 = v31;
      v112 = srca;
      srce = (void *)(v31 + 1);
      v77 = qvector_reserve(v12 + 48, v35, v36, 1);
      *(_QWORD *)(v12 + 48) = v77;
      v33 = v118;
      v35 = (void *)v77;
      v32 = v112;
      v36 = srce;
    }
    *(_QWORD *)(v12 + 56) = v36;
    srcf = (_BYTE *)v33;
    memmove(v35, v32, v33);
    srcf[*(_QWORD *)(v12 + 48)] = 0;
  }
  else
  {
    *(_QWORD *)(v10 + 32) = 0;
    v13 = *(const void **)v10;
    v14 = v11 - 1;
    v15 = *(void **)(v10 + 48);
    if ( *(_QWORD *)(v10 + 64) < v11 )
    {
      v116 = *(const void **)v10;
      v110 = v11 - 1;
      srcc = (void *)v11;
      v39 = qvector_reserve(v10 + 48, v15, v11, 1);
      *(_QWORD *)(v12 + 48) = v39;
      v13 = v116;
      v15 = (void *)v39;
      v14 = v110;
      v11 = (unsigned __int64)srcc;
    }
    *(_QWORD *)(v12 + 56) = v11;
    srcd = (char *)v11;
    memmove(v15, v13, v14);
    srcd[*(_QWORD *)(v12 + 48) - 1] = 0;
    *(_DWORD *)(v12 + 72) = 0;
  }
  if ( token )
    goto LABEL_34;
LABEL_8:
  if ( (_WORD)v129 == 1 )
  {
    *a1 = 1;
    goto LABEL_22;
  }
  v16 = lex_get_token((int)a2);
  if ( v16 )
    goto LABEL_44;
  if ( (_WORD)v135 != 61 )
  {
    v34 = (const char *)qstrerror(1347);
    goto LABEL_35;
  }
  v16 = lex_get_token((int)a2);
  if ( v16 )
  {
LABEL_44:
    v34 = (const char *)qstrerror(v16);
    goto LABEL_35;
  }
  v17 = (char *)haystack;
  if ( (_QWORD)v128 )
    v17 = s2;
  if ( a4 )
  {
    v18 = 0;
    v19 = a4;
    v20 = v17;
    v21 = a3;
    do
    {
      if ( !strcmp(*(const char **)v21, v20) )
      {
        v8 = a2;
        goto LABEL_19;
      }
      ++v18;
      v21 += 40;
    }
    while ( v19 != v18 );
    v8 = a2;
    v21 = 0;
LABEL_19:
    v106 = (__int64 *)sub_7A0520(v8);
    v22 = nullptr;
    if ( v21 )
      goto LABEL_20;
  }
  else
  {
    v106 = (__int64 *)sub_7A0520(a2);
  }
  if ( (unsigned __int64)v106[1] <= 1 || (v80 = (__int64 *)sub_6005A0(0.0, 0.0), *v80 == *v80 + 32 * v80[1]) )
  {
    v79 = ((__int64 (__fastcall *)(void *, char **, void **, double, double))v7)(v8, &s2, &v133, 0.0, 0.0);
    goto LABEL_114;
  }
  srcb = (void *)(*v80 + 32 * v80[1]);
  v81 = (char *)haystack;
  v82 = *v80;
  if ( (_QWORD)v128 )
    v81 = s2;
  v108 = v8;
  v114 = v7;
  do
  {
    v83 = *(_QWORD *)(v82 + 8);
    if ( v83 )
    {
      v84 = *(const char ***)v82;
      v85 = 0;
      while ( 1 )
      {
        v21 = (__int64)v84;
        if ( !strcmp(*v84, v81) )
          break;
        ++v85;
        v84 += 5;
        if ( v83 == v85 )
          goto LABEL_126;
      }
      if ( v84 )
      {
        v8 = v108;
        v22 = *(void (__fastcall **)(__int64, _QWORD, signed __int64 *))(v82 + 16);
        a6 = *(_QWORD *)(v82 + 24);
LABEL_20:
        v143 = 0;
        v144 = 0;
        v145 = 0;
        dest = nullptr;
        v149 = 0;
        v150 = 0;
        v151 = 0;
        s = nullptr;
        v124 = 0;
        v142 = 0;
        v146 = 0;
        v148 = 0;
        v152 = 0;
        v126 = 0;
        v23 = *(_DWORD *)(v21 + 16);
        v123 = nullptr;
        v120 = 0;
        v24 = v23 & 0xF;
        v121 = 0;
        v122[0] = 0;
        v122[1] = 0;
        *(_OWORD *)v141 = 0;
        switch ( v23 & 0xF )
        {
          case 1:
            if ( (v23 & 0x2000000) != 0 )
              v76 = sub_748AD0((__int64 *)&v123, (__int64)v8, (__int64)&v133);
            else
              v76 = sub_748160((__int64 *)&v123, (__int64)v8, (__int64)&v133);
            if ( !v76 )
              goto LABEL_90;
            v52 = (signed __int64 *)haystack;
            v24 = *(_DWORD *)(v21 + 16) & 0xF;
            if ( (_QWORD)v124 )
              v52 = (signed __int64 *)v123;
            goto LABEL_50;
          case 2:
            v52 = &v121;
            v68 = 0x8000000;
            LODWORD(v69) = 0x4000000;
            goto LABEL_83;
          case 3:
            if ( (unsigned __int16)v135 > 0x83u )
            {
              if ( (unsigned __int16)(v135 - 132) > 1u )
                goto LABEL_88;
            }
            else
            {
              if ( (unsigned __int16)v135 > 0x80u )
              {
LABEL_136:
                v52 = (signed __int64 *)&v120;
LABEL_50:
                v53 = (const char *)cfgopt_t__apply3(v21, (__int64)v8, v24, v52, a6);
                if ( (*(_DWORD *)(v21 + 16) & 0xF) == 6 )
                {
                  v86 = v148;
                  if ( (_QWORD)v148 && (v87 = v148 - 1, (_QWORD)v148 != 1) )
                  {
                    v93 = dest;
                    if ( n[1] < (unsigned __int64)v148 )
                    {
                      v115 = v148 - 1;
                      v109 = v148;
                      v133 = (void *)qvector_reserve(&v133, v133, v148, 1);
                      v87 = v115;
                      v86 = v109;
                    }
                    n[0] = v86;
                    v95 = v86;
                    memmove(v133, v93, v87);
                    *((char *)v133 + v95 - 1) = 0;
                  }
                  else
                  {
                    n[0] = 0;
                  }
                  v88 = _mm_loadu_si128(&v152);
                  LOWORD(v135) = v149;
                  v138[0] = v88;
                  v136 = v150;
                  LOBYTE(v137) = v151;
                }
                if ( !v53 && v22 )
                  v22(v21, *(_DWORD *)(v21 + 16) & 0xF, v52);
                v54 = s;
                if ( s )
                {
                  v55 = v126;
                  if ( (_QWORD)v126 )
                  {
                    v56 = 0;
                    do
                    {
                      v57 = &v54[64 * v56];
                      v58 = *(void **)v57;
                      if ( *(_QWORD *)v57 )
                      {
                        *((_QWORD *)v57 + 1) = 0;
                        qfree(v58);
                        v54 = s;
                      }
                      ++v56;
                    }
                    while ( v55 != v56 );
                  }
                  *(_QWORD *)&v126 = 0;
                  qfree(v54);
                }
                jvalue_t_clear(v122);
                if ( dest )
                {
                  *(_QWORD *)&v148 = 0;
                  qfree(dest);
                }
                if ( v141[1] )
                {
                  *(_QWORD *)&v142 = 0;
                  qfree(v141[1]);
                }
                if ( v123 )
                {
                  *(_QWORD *)&v124 = 0;
                  qfree(v123);
                }
                goto LABEL_67;
              }
              if ( (_WORD)v135 != 128 )
              {
LABEL_88:
                v70 = (const char *)qstrerror(1355);
LABEL_89:
                sub_747B60((__int64)v8, (__int64)"%s", v70);
              }
            }
            v120 = 1;
            goto LABEL_136;
          case 5:
            v52 = &v121;
            v68 = 0x2000000;
            v69 = &loc_1000000;
LABEL_83:
            if ( !(unsigned __int8)sub_7485D0(v21, &v121, (__int64)v8, (__int64)&v133, (int)v69, v68) )
            {
LABEL_90:
              v71 = s;
              if ( s )
              {
                v72 = v126;
                if ( (_QWORD)v126 )
                {
                  v73 = 0;
                  do
                  {
                    v74 = &v71[64 * v73];
                    v75 = *(void **)v74;
                    if ( *(_QWORD *)v74 )
                    {
                      *((_QWORD *)v74 + 1) = 0;
                      qfree(v75);
                      v71 = s;
                    }
                    ++v73;
                  }
                  while ( v72 != v73 );
                }
                *(_QWORD *)&v126 = 0;
                qfree(v71);
              }
              jvalue_t_clear(v122);
              if ( dest )
              {
                *(_QWORD *)&v148 = 0;
                qfree(dest);
              }
              if ( v141[1] )
              {
                *(_QWORD *)&v142 = 0;
                qfree(v141[1]);
              }
              if ( v123 )
              {
                *(_QWORD *)&v124 = 0;
                v25 = 0;
                qfree(v123);
              }
              else
              {
LABEL_36:
                v25 = 0;
              }
              goto LABEL_23;
            }
            v24 = *(_DWORD *)(v21 + 16) & 0xF;
            goto LABEL_50;
          case 6:
            v64 = v128;
            v141[0] = v8;
            if ( (unsigned __int64)v128 > 1 )
            {
              v92 = s2;
              v141[1] = (void *)qvector_reserve(&v141[1], 0, v128, 1);
              *(_QWORD *)&v142 = v64;
              memmove(v141[1], v92, v64 - 1);
              *((_BYTE *)v141[1] + v64 - 1) = 0;
            }
            v65 = n[0];
            v66 = _mm_load_si128(&v132);
            v143 = v129;
            v146 = v66;
            v144 = v130;
            v145 = v131;
            if ( n[0] > 1 )
            {
              v91 = v133;
              if ( *((_QWORD *)&v148 + 1) < n[0] )
                dest = (void *)qvector_reserve(&dest, dest, n[0], 1);
              *(_QWORD *)&v148 = v65;
              memmove(dest, v91, v65 - 1);
              *((char *)dest + v65 - 1) = 0;
            }
            else
            {
              *(_QWORD *)&v148 = 0;
            }
            v52 = (signed __int64 *)v141;
            si128 = _mm_load_si128(v138);
            v149 = v135;
            v152 = si128;
            v150 = v136;
            v151 = v137;
            v24 = *(_DWORD *)(v21 + 16) & 0xF;
            goto LABEL_50;
          case 7:
            v40 = n[0];
            if ( n[0] )
            {
              v42 = (void *)qalloc_or_throw(n[0]);
              memcpy(v42, v133, v40);
              v47 = v126;
              v89 = _mm_load_si128(v138);
              v43 = s;
              v139 = v137;
              v45 = v136;
              v41 = v126 + 1;
              v46 = v135;
              v140 = v89;
              if ( *((_QWORD *)&v126 + 1) >= (unsigned __int64)(v126 + 1) )
              {
LABEL_48:
                v48 = v139;
                v49 = &v43[64 * v47];
                *(__m128i *)(v49 + 8) = _mm_unpacklo_epi64((__m128i)v40, (__m128i)v40);
                v50 = _mm_load_si128(&v140);
                v49[40] = v48;
                *(_QWORD *)v49 = v42;
                *((_WORD *)v49 + 12) = v46;
                *((_QWORD *)v49 + 4) = v45;
                *((__m128i *)v49 + 3) = v50;
                *(_QWORD *)&v126 = v126 + 1;
                v51 = parse_json(v122, v8, &s);
                if ( v51 )
                {
                  v90 = (const char *)qstrerror(v51);
                  sub_747B60((__int64)v8, (__int64)"%s", v90);
                }
                v52 = v122;
                v24 = *(_DWORD *)(v21 + 16) & 0xF;
                goto LABEL_50;
              }
            }
            else
            {
              v41 = 1;
              v42 = nullptr;
              v43 = nullptr;
              v44 = _mm_load_si128(v138);
              v45 = v136;
              v46 = v135;
              v139 = v137;
              v140 = v44;
            }
            v117 = v46;
            v111 = v45;
            s = (char *)qvector_reserve(&s, v43, v41, 64);
            v43 = s;
            v46 = v117;
            v47 = v126;
            v45 = v111;
            goto LABEL_48;
          default:
            v70 = (const char *)qstrerror(1364);
            goto LABEL_89;
        }
      }
    }
LABEL_126:
    v82 += 32;
  }
  while ( srcb != (void *)v82 );
  v8 = v108;
  v79 = ((__int64 (__fastcall *)(void *, char **, void **, double, double))v114)(v108, &s2, &v133, 0.0, 0.0);
LABEL_114:
  v53 = (const char *)v79;
LABEL_67:
  if ( v53 == (_BYTE *)&dword_0 + 2 )
  {
    v63 = (const char *)qstrerror(1364);
    goto LABEL_75;
  }
  if ( (unsigned __int64)v53 > 2 )
  {
    if ( v53 != (_BYTE *)&dword_0 + 3 )
      sub_747B60((__int64)v8, (__int64)"%s", v53);
    v63 = (const char *)qstrerror(1353);
LABEL_75:
    sub_747B60((__int64)v8, (__int64)"%s", v63);
  }
  if ( v53 )
  {
    if ( (unsigned __int64)v106[1] > 1 )
    {
      if ( !byte_2CCCD28 )
      {
        v62 = *v106;
        byte_2CCCD28 = 1;
        callui(117, v62, (int)&callui, v59, v60, v61);
      }
      goto LABEL_36;
    }
    v34 = (const char *)qstrerror(1363);
LABEL_35:
    sub_747B60((__int64)v8, (__int64)"%s", v34);
  }
LABEL_22:
  v25 = 1;
LABEL_23:
  if ( v133 )
  {
    n[0] = 0;
    qfree(v133);
  }
  if ( s2 )
  {
    *(_QWORD *)&v128 = 0;
    qfree(s2);
  }
  return v25;
}
