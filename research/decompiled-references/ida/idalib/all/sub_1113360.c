__int64 __fastcall sub_1113360(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r13
  int v4; // ebx
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rbx
  __m128i *v12; // r14
  size_t v13; // r12
  __int64 v14; // r13
  __int64 v15; // rbp
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // r12
  _DWORD *v19; // rdx
  _DWORD *v20; // r12
  _DWORD *v21; // rcx
  size_t v22; // rax
  int v23; // ebx
  unsigned __int64 v24; // r14
  __int64 v25; // rcx
  __m128i *v26; // rbx
  int v27; // r12d
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rsi
  __int64 v30; // rbx
  char *v31; // rdx
  char *v32; // rbp
  char *v33; // rcx
  size_t v34; // r8
  size_t v35; // rax
  void (__fastcall *v36)(__int64 *, void **); // rax
  void **v37; // r12
  void **v38; // rbp
  size_t v39; // rax
  char *v40; // rsi
  void *p_s2; // rdi
  __int64 v42; // rax
  __int64 v43; // rbp
  size_t v44; // rax
  void *v45; // rdi
  size_t v46; // r12
  size_t v47; // rax
  const char *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rbx
  size_t v51; // rax
  void *v52; // rdi
  size_t v53; // rbp
  __m128i *v55; // r12
  unsigned __int64 v56; // rax
  __m128i *v57; // rbp
  __m128i *v58; // r12
  size_t v59; // rbp
  const void **v60; // r13
  __m128i *v61; // rbx
  __m128i *v62; // r13
  _QWORD *v63; // rbx
  __int64 v64; // rax
  _QWORD *v65; // rdx
  unsigned int v66; // r14d
  __m128i *v67; // rax
  __m128i *v68; // r12
  __m128i *v69; // rbp
  const void **v70; // r12
  __m128i *v71; // rbx
  __int64 v72; // r13
  size_t v73; // rbp
  __m128i *v74; // r13
  _QWORD *v75; // rbx
  __int64 v76; // rax
  _QWORD *v77; // rdx
  unsigned int v78; // r14d
  __m128i *v79; // rax
  char v80; // dl
  char v81; // dl
  __m128i *v82; // rcx
  size_t v83; // rax
  __m128i *v84; // rax
  __m128i *v85; // rcx
  unsigned __int64 v86; // rax
  __m128i *v87; // rax
  size_t v88; // rax
  size_t v89; // rax
  void (__fastcall *v90)(__int64 *, void **); // rax
  size_t v91; // rax
  size_t v92; // rax
  __int64 v93; // rbp
  void **v94; // r12
  void **v95; // rbx
  __int64 v96; // rbp
  char *v97; // r12
  char *v98; // rbx
  void **v99; // r15
  void **v100; // r14
  unsigned int v101; // eax
  unsigned int v102; // eax
  void **v103; // r12
  void **v104; // rbp
  void **v105; // r12
  void **v106; // rbp
  __int64 v107; // rsi
  __m128i *v108; // rax
  __int64 v109; // rsi
  __int64 v110; // [rsp+10h] [rbp-138h]
  int v111; // [rsp+20h] [rbp-128h]
  __int64 *v112; // [rsp+20h] [rbp-128h]
  __int64 v114; // [rsp+30h] [rbp-118h]
  __int64 v115; // [rsp+30h] [rbp-118h]
  __int64 v116; // [rsp+38h] [rbp-110h]
  __m128i *v117; // [rsp+48h] [rbp-100h]
  _QWORD *v118; // [rsp+48h] [rbp-100h]
  __int64 v119; // [rsp+48h] [rbp-100h]
  _QWORD *v120; // [rsp+48h] [rbp-100h]
  __m128i *v122; // [rsp+60h] [rbp-E8h]
  _QWORD *v123; // [rsp+60h] [rbp-E8h]
  __m128i *v124; // [rsp+60h] [rbp-E8h]
  __int64 v125; // [rsp+60h] [rbp-E8h]
  _QWORD *v126; // [rsp+60h] [rbp-E8h]
  __int64 *v127; // [rsp+68h] [rbp-E0h]
  __int64 v128; // [rsp+68h] [rbp-E0h]
  __int64 *v129; // [rsp+68h] [rbp-E0h]
  unsigned __int64 v130; // [rsp+70h] [rbp-D8h]
  unsigned __int64 v131; // [rsp+70h] [rbp-D8h]
  __m128i *v132; // [rsp+70h] [rbp-D8h]
  __m128i *v133; // [rsp+78h] [rbp-D0h]
  unsigned __int64 v134; // [rsp+78h] [rbp-D0h]
  unsigned __int64 v135; // [rsp+80h] [rbp-C8h]
  __int64 *v136; // [rsp+80h] [rbp-C8h]
  __int64 *v137; // [rsp+88h] [rbp-C0h]
  char v138; // [rsp+97h] [rbp-B1h] BYREF
  __int64 v139; // [rsp+98h] [rbp-B0h] BYREF
  __int64 v140; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v141; // [rsp+A8h] [rbp-A0h] BYREF
  void *v142; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v143; // [rsp+B8h] [rbp-90h]
  __m128i v144; // [rsp+C0h] [rbp-88h] BYREF
  void *s2; // [rsp+D0h] [rbp-78h] BYREF
  size_t n; // [rsp+D8h] [rbp-70h]
  __m128i v147; // [rsp+E0h] [rbp-68h] BYREF
  __int16 v148; // [rsp+F0h] [rbp-58h]
  __int64 v149; // [rsp+100h] [rbp-48h]

  v3 = a1;
  v4 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 24))(a1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1) )
    v4 = *(_DWORD *)(a2 + 8);
  if ( v4 )
  {
    v110 = 0;
    v5 = (unsigned int)(v4 - 1);
    v6 = 0;
    v116 = v5;
LABEL_5:
    v111 = v6;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*v3 + 32))(v3, (unsigned int)v6, &v139) )
      goto LABEL_26;
    v7 = *(unsigned int *)(a2 + 8);
    if ( v7 > v6 || (v17 = v110 + 1, v7 == v110 + 1) )
    {
      v8 = *(_QWORD *)a2;
      goto LABEL_8;
    }
    v18 = 160 * v17;
    if ( v7 <= v17 )
    {
      if ( *(unsigned int *)(a2 + 12) < v17 )
      {
        sub_11130A0(a2, v17);
        v7 = *(unsigned int *)(a2 + 8);
      }
      v8 = *(_QWORD *)a2;
      v19 = (_DWORD *)(*(_QWORD *)a2 + 160 * v7);
      v20 = (_DWORD *)(*(_QWORD *)a2 + v18);
      if ( v19 != v20 )
      {
        do
        {
          memset(v19, 0, 0xA0u);
          v19[11] = 1;
          *(_QWORD *)v19 = v19 + 4;
          v21 = v19 + 12;
          v19 += 40;
          *((_QWORD *)v19 - 16) = v21;
        }
        while ( v20 != v19 );
        goto LABEL_34;
      }
      goto LABEL_35;
    }
    v8 = *(_QWORD *)a2;
    v96 = *(_QWORD *)a2 + 160 * v7;
    v115 = *(_QWORD *)a2 + v18;
    if ( v96 == v115 )
      goto LABEL_35;
LABEL_171:
    v96 -= 160;
    v97 = *(char **)(v96 + 32);
    v98 = &v97[96 * *(unsigned int *)(v96 + 40)];
    if ( v97 == v98 )
      goto LABEL_176;
    while ( 1 )
    {
      v98 -= 96;
      if ( v98[80] )
        goto LABEL_183;
      while ( *(char **)v98 == v98 + 16 )
      {
        if ( v97 == v98 )
        {
LABEL_175:
          v97 = *(char **)(v96 + 32);
LABEL_176:
          if ( v97 != (char *)(v96 + 48) )
            free(v97);
          if ( *(_QWORD *)v96 != v96 + 16 )
          {
            operator delete(*(void **)v96);
            if ( v115 == v96 )
              goto LABEL_34;
            goto LABEL_171;
          }
          if ( v115 != v96 )
            goto LABEL_171;
LABEL_34:
          v8 = *(_QWORD *)a2;
LABEL_35:
          *(_DWORD *)(a2 + 8) = v111 + 1;
LABEL_8:
          v9 = v8 + 160 * v110;
          (*(void (__fastcall **)(__int64 *))(*v3 + 104))(v3);
          if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v3 + 16))(v3) )
          {
            if ( *(_QWORD *)(v9 + 8) )
            {
              if ( *(_DWORD *)(v9 + 40) )
              {
                if ( *(_BYTE *)(v9 + 152) )
                  goto LABEL_9;
                s2 = &v147;
                v47 = j__strlen("custom flag must have a default value");
                v48 = "custom flag must have a default value";
                sub_DF80E0(&s2, "custom flag must have a default value", (__int64)&aCustomFlagMust[v47]);
                if ( n )
                {
LABEL_90:
                  v49 = sub_227D6D0(&s2, v48);
                  v50 = sub_227BF10(v49, s2, n);
                  v51 = j__strlen("\n");
                  v52 = *(void **)(v50 + 32);
                  v53 = v51;
                  if ( v51 > *(_QWORD *)(v50 + 24) - (_QWORD)v52 )
                  {
                    sub_227BF10(v50, "\n", v51);
                  }
                  else if ( v51 )
                  {
                    memcpy(v52, "\n", v51);
                    *(_QWORD *)(v50 + 32) += v53;
                  }
                }
LABEL_146:
                if ( s2 != &v147 )
                  operator delete(s2);
                goto LABEL_9;
              }
              s2 = &v147;
              v92 = j__strlen("custom flag must have at least one value");
              v48 = "custom flag must have at least one value";
              sub_DF80E0(&s2, "custom flag must have at least one value", (__int64)&aCustomFlagMust_0[v92]);
            }
            else
            {
              s2 = &v147;
              v88 = j__strlen("custom flag requires a name");
              v48 = "custom flag requires a name";
              sub_DF80E0(&s2, "custom flag requires a name", (__int64)&aCustomFlagRequ[v88]);
            }
            if ( n )
              goto LABEL_90;
            goto LABEL_146;
          }
LABEL_9:
          if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64, _QWORD, void **, void **))(*v3 + 120))(
                 v3,
                 "Name",
                 1,
                 0,
                 &v142,
                 &s2) )
          {
            sub_110A970(v3, v9);
            (*(void (__fastcall **)(__int64 *, void *))(*v3 + 128))(v3, s2);
          }
          if ( (*(unsigned __int8 (__fastcall **)(__int64 *, const char *, __int64, _QWORD, char *, __int64 *))(*v3 + 120))(
                 v3,
                 "Values",
                 1,
                 0,
                 &v138,
                 &v140) )
          {
            v23 = (*(__int64 (__fastcall **)(__int64 *))(*v3 + 24))(v3);
            if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v3 + 16))(v3) )
              v23 = *(_DWORD *)(v9 + 40);
            if ( v23 )
            {
              v24 = 0;
              v114 = (unsigned int)(v23 - 1);
              while ( 1 )
              {
                v27 = v24;
                if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*v3 + 32))(
                        v3,
                        (unsigned int)v24,
                        &v141) )
                  goto LABEL_51;
                v28 = *(unsigned int *)(v9 + 40);
                if ( v28 > v24 || (v29 = v24 + 1, v28 == v24 + 1) )
                {
                  v25 = *(_QWORD *)(v9 + 32);
                }
                else
                {
                  v30 = 96 * v29;
                  if ( v28 > v29 )
                  {
                    v25 = *(_QWORD *)(v9 + 32);
                    v93 = v25 + 96 * v28;
                    v119 = v25 + v30;
                    if ( v93 == v25 + v30 )
                      goto LABEL_62;
LABEL_156:
                    v93 -= 96;
                    if ( *(_BYTE *)(v93 + 80) )
                      goto LABEL_162;
                    while ( 1 )
                    {
                      do
                      {
                        if ( *(_QWORD *)v93 != v93 + 16 )
                        {
                          operator delete(*(void **)v93);
                          if ( v119 == v93 )
                            goto LABEL_159;
                          goto LABEL_156;
                        }
                        if ( v119 == v93 )
                        {
LABEL_159:
                          v27 = v24;
                          v25 = *(_QWORD *)(v9 + 32);
                          goto LABEL_62;
                        }
                        v93 -= 96;
                      }
                      while ( !*(_BYTE *)(v93 + 80) );
LABEL_162:
                      v94 = *(void ***)(v93 + 32);
                      v95 = &v94[4 * *(unsigned int *)(v93 + 40)];
                      if ( v94 != v95 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v95 -= 4;
                            if ( *v95 == v95 + 2 )
                              break;
                            operator delete(*v95);
                            if ( v94 == v95 )
                              goto LABEL_165;
                          }
                        }
                        while ( v94 != v95 );
LABEL_165:
                        v94 = *(void ***)(v93 + 32);
                      }
                      if ( v94 != (void **)(v93 + 48) )
                        free(v94);
                    }
                  }
                  if ( *(unsigned int *)(v9 + 44) < v29 )
                  {
                    sub_11121D0(v9 + 32, v29);
                    v28 = *(unsigned int *)(v9 + 40);
                  }
                  v25 = *(_QWORD *)(v9 + 32);
                  v31 = (char *)(v25 + 96 * v28);
                  v32 = (char *)(v25 + v30);
                  if ( v31 != (char *)(v25 + v30) )
                  {
                    do
                    {
                      memset(v31, 0, 0x60u);
                      v33 = v31 + 16;
                      v31 += 96;
                      *((_QWORD *)v31 - 12) = v33;
                    }
                    while ( v32 != v31 );
                    v25 = *(_QWORD *)(v9 + 32);
                  }
LABEL_62:
                  *(_DWORD *)(v9 + 40) = v27 + 1;
                }
                v26 = (__m128i *)(v25 + 96 * v24);
                (*(void (__fastcall **)(__int64 *))(*v3 + 104))(v3);
                v117 = v26;
                if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*v3 + 16))(v3) )
                  goto LABEL_46;
                if ( !v26->m128i_i64[1] )
                {
                  s2 = &v147;
                  v39 = j__strlen("custom flag value requires a name");
                  v40 = "custom flag value requires a name";
                  p_s2 = &s2;
                  sub_DF80E0(&s2, "custom flag value requires a name", (__int64)&aCustomFlagValu[v39]);
                  goto LABEL_79;
                }
                if ( *(_QWORD *)(a3 + 1080) )
                {
                  sub_110F6E0(a3 + 1040, v26);
                  if ( v80 )
                    goto LABEL_46;
                  goto LABEL_139;
                }
                v55 = *(__m128i **)a3;
                v56 = *(unsigned int *)(a3 + 8);
                v130 = v56;
                v57 = (__m128i *)(*(_QWORD *)a3 + 32 * v56);
                if ( *(__m128i **)a3 == v57 )
                {
                  if ( v56 <= 0x1F )
                    goto LABEL_210;
                  v128 = a3 + 1040;
                  goto LABEL_203;
                }
                v122 = *(__m128i **)a3;
                v58 = &v55[2 * v56];
                v59 = v26->m128i_u64[1];
                v127 = v3;
                v60 = (const void **)v26;
                v61 = *(__m128i **)a3;
                do
                {
                  if ( v59 == v61->m128i_i64[1] && !sub_9B48C0((const void *)v61->m128i_i64[0], *v60, v59) )
                  {
                    v57 = v58;
                    v85 = v61;
                    v55 = v122;
                    v26 = (__m128i *)v60;
                    v3 = v127;
                    if ( v57 != v85 )
                    {
LABEL_139:
                      sub_C05100((__int64)&v142, "duplicate custom flag value name: \"", (__int64)v26);
                      v86 = j__strlen("\"");
                      if ( v86 > 0x7FFFFFFFFFFFFFFFLL - v143 )
                        goto LABEL_227;
                      v40 = "\"";
                      v87 = (__m128i *)sub_9EE560(&v142, "\"", v86);
                      s2 = &v147;
                      if ( (__m128i *)v87->m128i_i64[0] == &v87[1] )
                      {
                        v147 = _mm_loadu_si128(v87 + 1);
                      }
                      else
                      {
                        s2 = (void *)v87->m128i_i64[0];
                        v147.m128i_i64[0] = v87[1].m128i_i64[0];
                      }
                      n = v87->m128i_u64[1];
                      v87->m128i_i64[0] = (__int64)v87[1].m128i_i64;
                      v87->m128i_i64[1] = 0;
                      v87[1].m128i_i8[0] = 0;
                      p_s2 = v142;
                      if ( v142 != &v144 )
                        operator delete(v142);
LABEL_79:
                      if ( n )
                      {
                        v42 = sub_227D6D0(p_s2, v40);
                        v43 = sub_227BF10(v42, s2, n);
                        v44 = j__strlen("\n");
                        v45 = *(void **)(v43 + 32);
                        v46 = v44;
                        if ( v44 > *(_QWORD *)(v43 + 24) - (_QWORD)v45 )
                        {
                          sub_227BF10(v43, "\n", v44);
                        }
                        else if ( v44 )
                        {
                          memcpy(v45, "\n", v44);
                          *(_QWORD *)(v43 + 32) += v46;
                        }
                      }
                      if ( s2 != &v147 )
                        operator delete(s2);
                      goto LABEL_46;
                    }
                    if ( v130 <= 0x1F )
                      goto LABEL_210;
LABEL_100:
                    v133 = v26;
                    v137 = v3;
                    v62 = v55;
                    v128 = a3 + 1040;
                    v135 = v24;
                    v63 = (_QWORD *)(a3 + 1048);
                    do
                    {
                      v64 = sub_1110010((_QWORD *)(a3 + 1040), v63, (__int64)v62);
                      if ( v65 )
                      {
                        if ( v64 || v65 == v63 )
                        {
                          v66 = 1;
                        }
                        else
                        {
                          v126 = v65;
                          v102 = sub_9C4B50((__int64)v62, (__int64)(v65 + 4));
                          v65 = v126;
                          v66 = v102 >> 31;
                        }
                        v123 = v65;
                        v67 = (__m128i *)operator new(0x40u);
                        v67[2].m128i_i64[0] = (__int64)v67[3].m128i_i64;
                        if ( (__m128i *)v62->m128i_i64[0] == &v62[1] )
                        {
                          v67[3] = _mm_loadu_si128(v62 + 1);
                        }
                        else
                        {
                          v67[2].m128i_i64[0] = v62->m128i_i64[0];
                          v67[3].m128i_i64[0] = v62[1].m128i_i64[0];
                        }
                        v67[2].m128i_i64[1] = v62->m128i_i64[1];
                        v62->m128i_i64[0] = (__int64)v62[1].m128i_i64;
                        v62->m128i_i64[1] = 0;
                        v62[1].m128i_i8[0] = 0;
                        std::_Rb_tree_insert_and_rebalance(v66, v67, v123, v63);
                        ++*(_QWORD *)(a3 + 1080);
                      }
                      v62 += 2;
                    }
                    while ( v57 != v62 );
                    v26 = v133;
                    v24 = v135;
                    v103 = *(void ***)a3;
                    v3 = v137;
                    v104 = (void **)(*(_QWORD *)a3 + 32LL * *(unsigned int *)(a3 + 8));
                    while ( v103 != v104 )
                    {
                      while ( 1 )
                      {
                        v104 -= 4;
                        if ( *v104 == v104 + 2 )
                          break;
                        operator delete(*v104);
                        if ( v103 == v104 )
                          goto LABEL_203;
                      }
                    }
LABEL_203:
                    *(_DWORD *)(a3 + 8) = 0;
                    sub_110F6E0(v128, v26);
                    goto LABEL_46;
                  }
                  v61 += 2;
                }
                while ( v58 != v61 );
                v57 = v58;
                v26 = (__m128i *)v60;
                v55 = v122;
                v3 = v127;
                if ( v130 > 0x1F )
                  goto LABEL_100;
LABEL_210:
                v107 = v130 + 1;
                v108 = v26;
                if ( v130 + 1 > *(unsigned int *)(a3 + 12) )
                {
                  if ( v55 > v26 || v57 <= v26 )
                  {
                    sub_A8C1F0(a3, v107);
                    v57 = (__m128i *)(*(_QWORD *)a3 + 32LL * *(unsigned int *)(a3 + 8));
                    v108 = v26;
                  }
                  else
                  {
                    sub_A8C1F0(a3, v107);
                    v108 = (__m128i *)(*(_QWORD *)a3 + (char *)v26 - (char *)v55);
                    v57 = (__m128i *)(*(_QWORD *)a3 + 32LL * *(unsigned int *)(a3 + 8));
                  }
                }
                v57->m128i_i64[0] = (__int64)v57[1].m128i_i64;
                sub_110A8B0(v57, v108->m128i_i64[0], v108->m128i_i64[0] + v108->m128i_i64[1]);
                ++*(_DWORD *)(a3 + 8);
LABEL_46:
                if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64, _QWORD, void **, void **))(*v3 + 120))(
                       v3,
                       "Name",
                       1,
                       0,
                       &v142,
                       &s2) )
                {
                  sub_110A970(v3, (__int64)v26);
                  (*(void (__fastcall **)(__int64 *, void *))(*v3 + 128))(v3, s2);
                }
                v149 = 0;
                sub_110FB30(v3, (__int64)"MacroDefines", (__int64)v26[2].m128i_i64, (__int64)&s2, 0);
                if ( (_BYTE)v149 )
                {
                  v37 = (void **)s2;
                  v38 = (void **)((char *)s2 + 32 * (unsigned int)n);
                  if ( s2 != v38 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v38 -= 4;
                        if ( *v38 == v38 + 2 )
                          break;
                        operator delete(*v38);
                        if ( v37 == v38 )
                          goto LABEL_72;
                      }
                    }
                    while ( v37 != v38 );
LABEL_72:
                    v38 = (void **)s2;
                  }
                  if ( v38 != (void **)&v147 )
                    free(v38);
                }
                if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v3 + 16))(v3) )
                  goto LABEL_50;
                v34 = v26->m128i_u64[1];
                if ( !v34 )
                {
                  v142 = &v144;
                  v35 = j__strlen("custom flag value requires a name");
                  sub_DF80E0(&v142, "custom flag value requires a name", (__int64)&aCustomFlagValu[v35]);
LABEL_65:
                  if ( v143 )
                  {
                    v36 = *(void (__fastcall **)(__int64 *, void **))(*v3 + 248);
                    v148 = 260;
                    s2 = &v142;
                    v36(v3, &s2);
                  }
                  if ( v142 != &v144 )
                    operator delete(v142);
                  goto LABEL_50;
                }
                if ( *(_QWORD *)(a3 + 1080) )
                {
                  sub_110F6E0(a3 + 1040, v26);
                  if ( v81 )
                    goto LABEL_50;
                  goto LABEL_132;
                }
                v68 = *(__m128i **)a3;
                v131 = *(unsigned int *)(a3 + 8);
                v69 = (__m128i *)(*(_QWORD *)a3 + 32 * v131);
                if ( *(__m128i **)a3 == v69 )
                {
                  if ( v131 <= 0x1F )
                    goto LABEL_213;
                  v125 = a3 + 1040;
                  goto LABEL_208;
                }
                v124 = *(__m128i **)a3;
                v70 = (const void **)v26;
                v129 = v3;
                v71 = *(__m128i **)a3;
                v72 = *(_QWORD *)a3 + 32 * v131;
                v73 = v34;
                while ( 2 )
                {
                  if ( v73 == v71->m128i_i64[1] && !sub_9B48C0((const void *)v71->m128i_i64[0], *v70, v73) )
                  {
                    v69 = (__m128i *)v72;
                    v82 = v71;
                    v3 = v129;
                    v26 = (__m128i *)v70;
                    v68 = v124;
                    if ( v69 != v82 )
                    {
LABEL_132:
                      sub_C05100((__int64)&s2, "duplicate custom flag value name: \"", (__int64)v26);
                      v83 = j__strlen("\"");
                      if ( v83 <= 0x7FFFFFFFFFFFFFFFLL - n )
                      {
                        v84 = (__m128i *)sub_9EE560(&s2, "\"", v83);
                        v142 = &v144;
                        if ( (__m128i *)v84->m128i_i64[0] == &v84[1] )
                        {
                          v144 = _mm_loadu_si128(v84 + 1);
                        }
                        else
                        {
                          v142 = (void *)v84->m128i_i64[0];
                          v144.m128i_i64[0] = v84[1].m128i_i64[0];
                        }
                        v143 = v84->m128i_i64[1];
                        v84->m128i_i64[0] = (__int64)v84[1].m128i_i64;
                        v84->m128i_i64[1] = 0;
                        v84[1].m128i_i8[0] = 0;
                        if ( s2 != &v147 )
                          operator delete(s2);
                        goto LABEL_65;
                      }
LABEL_227:
                      std::__throw_length_error("basic_string::append");
                    }
                    if ( v131 <= 0x1F )
                      goto LABEL_213;
LABEL_116:
                    v132 = v26;
                    v136 = v3;
                    v74 = v68;
                    v125 = a3 + 1040;
                    v134 = v24;
                    v75 = (_QWORD *)(a3 + 1048);
                    do
                    {
                      v76 = sub_1110010((_QWORD *)(a3 + 1040), v75, (__int64)v74);
                      if ( v77 )
                      {
                        if ( v76 || v75 == v77 )
                        {
                          v78 = 1;
                        }
                        else
                        {
                          v120 = v77;
                          v101 = sub_9C4B50((__int64)v74, (__int64)(v77 + 4));
                          v77 = v120;
                          v78 = v101 >> 31;
                        }
                        v118 = v77;
                        v79 = (__m128i *)operator new(0x40u);
                        v79[2].m128i_i64[0] = (__int64)v79[3].m128i_i64;
                        if ( (__m128i *)v74->m128i_i64[0] == &v74[1] )
                        {
                          v79[3] = _mm_loadu_si128(v74 + 1);
                        }
                        else
                        {
                          v79[2].m128i_i64[0] = v74->m128i_i64[0];
                          v79[3].m128i_i64[0] = v74[1].m128i_i64[0];
                        }
                        v79[2].m128i_i64[1] = v74->m128i_i64[1];
                        v74->m128i_i64[0] = (__int64)v74[1].m128i_i64;
                        v74->m128i_i64[1] = 0;
                        v74[1].m128i_i8[0] = 0;
                        std::_Rb_tree_insert_and_rebalance(v78, v79, v118, v75);
                        ++*(_QWORD *)(a3 + 1080);
                      }
                      v74 += 2;
                    }
                    while ( v69 != v74 );
                    v26 = v132;
                    v24 = v134;
                    v105 = *(void ***)a3;
                    v3 = v136;
                    v106 = (void **)(*(_QWORD *)a3 + 32LL * *(unsigned int *)(a3 + 8));
                    while ( v105 != v106 )
                    {
                      while ( 1 )
                      {
                        v106 -= 4;
                        if ( *v106 == v106 + 2 )
                          break;
                        operator delete(*v106);
                        if ( v105 == v106 )
                          goto LABEL_208;
                      }
                    }
LABEL_208:
                    *(_DWORD *)(a3 + 8) = 0;
                    sub_110F6E0(v125, v26);
                    goto LABEL_50;
                  }
                  v71 += 2;
                  if ( (__m128i *)v72 != v71 )
                    continue;
                  break;
                }
                v26 = (__m128i *)v70;
                v69 = (__m128i *)v72;
                v68 = v124;
                v3 = v129;
                if ( v131 > 0x1F )
                  goto LABEL_116;
LABEL_213:
                v109 = v131 + 1;
                if ( v131 + 1 > *(unsigned int *)(a3 + 12) )
                {
                  if ( v68 > v26 || v69 <= v26 )
                  {
                    sub_A8C1F0(a3, v109);
                    v69 = (__m128i *)(*(_QWORD *)a3 + 32LL * *(unsigned int *)(a3 + 8));
                  }
                  else
                  {
                    sub_A8C1F0(a3, v109);
                    v117 = (__m128i *)(*(_QWORD *)a3 + (char *)v26 - (char *)v68);
                    v69 = (__m128i *)(32LL * *(unsigned int *)(a3 + 8) + *(_QWORD *)a3);
                  }
                }
                v69->m128i_i64[0] = (__int64)v69[1].m128i_i64;
                sub_110A8B0(v69, v117->m128i_i64[0], v117->m128i_i64[0] + v117->m128i_i64[1]);
                ++*(_DWORD *)(a3 + 8);
LABEL_50:
                (*(void (__fastcall **)(__int64 *))(*v3 + 112))(v3);
                (*(void (__fastcall **)(__int64 *, __int64))(*v3 + 40))(v3, v141);
LABEL_51:
                if ( v114 == v24 )
                  break;
                ++v24;
              }
            }
            (*(void (__fastcall **)(__int64 *))(*v3 + 48))(v3);
            (*(void (__fastcall **)(__int64 *, __int64))(*v3 + 128))(v3, v140);
          }
          v147.m128i_i8[0] = 0;
          n = 0;
          s2 = &v147;
          if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64, _QWORD, __int64 *, void **))(*v3 + 120))(
                 v3,
                 "Default",
                 1,
                 0,
                 &v141,
                 &v142) )
          {
            sub_110A970(v3, (__int64)&s2);
            (*(void (__fastcall **)(__int64 *, void *))(*v3 + 128))(v3, v142);
          }
          v10 = *(unsigned int *)(v9 + 40);
          v11 = *(_QWORD *)(v9 + 32);
          v12 = (__m128i *)s2;
          if ( v11 != v11 + 96 * v10 )
          {
            v112 = v3;
            v13 = n;
            v14 = v11 + 96 * v10;
            v15 = 0;
            do
            {
              while ( 1 )
              {
                *(_QWORD *)(v11 + 88) = v9;
                if ( *(_QWORD *)(v11 + 8) == v13 && (!v13 || !memcmp(*(const void **)v11, v12, v13)) )
                  break;
                v11 += 96;
                ++v15;
                if ( v14 == v11 )
                  goto LABEL_21;
              }
              v11 += 96;
              *(_QWORD *)(v9 + 144) = v15++;
              *(_BYTE *)(v9 + 152) = 1;
            }
            while ( v14 != v11 );
LABEL_21:
            v3 = v112;
          }
          if ( v12 != &v147 )
            operator delete(v12);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*v3 + 16))(v3) )
          {
            if ( *(_QWORD *)(v9 + 8) )
            {
              if ( *(_DWORD *)(v9 + 40) )
              {
                if ( *(_BYTE *)(v9 + 152) )
                  goto LABEL_25;
                v142 = &v144;
                v22 = j__strlen("custom flag must have a default value");
                sub_DF80E0(&v142, "custom flag must have a default value", (__int64)&aCustomFlagMust[v22]);
              }
              else
              {
                v142 = &v144;
                v91 = j__strlen("custom flag must have at least one value");
                sub_DF80E0(&v142, "custom flag must have at least one value", (__int64)&aCustomFlagMust_0[v91]);
              }
            }
            else
            {
              v142 = &v144;
              v89 = j__strlen("custom flag requires a name");
              sub_DF80E0(&v142, "custom flag requires a name", (__int64)&aCustomFlagRequ[v89]);
            }
            if ( v143 )
            {
              v90 = *(void (__fastcall **)(__int64 *, void **))(*v3 + 248);
              v148 = 260;
              s2 = &v142;
              v90(v3, &s2);
            }
            if ( v142 != &v144 )
              operator delete(v142);
          }
LABEL_25:
          (*(void (__fastcall **)(__int64 *))(*v3 + 112))(v3);
          (*(void (__fastcall **)(__int64 *, __int64))(*v3 + 40))(v3, v139);
LABEL_26:
          v16 = v110 + 1;
          if ( v116 == v110 )
            return (*(__int64 (__fastcall **)(__int64 *))(*v3 + 48))(v3);
          ++v110;
          v6 = v16;
          goto LABEL_5;
        }
        v98 -= 96;
        if ( v98[80] )
        {
LABEL_183:
          v99 = *((void ***)v98 + 4);
          v100 = &v99[4 * *((unsigned int *)v98 + 10)];
          if ( v99 != v100 )
          {
            do
            {
              while ( 1 )
              {
                v100 -= 4;
                if ( *v100 == v100 + 2 )
                  break;
                operator delete(*v100);
                if ( v99 == v100 )
                  goto LABEL_186;
              }
            }
            while ( v99 != v100 );
LABEL_186:
            v99 = *((void ***)v98 + 4);
          }
          if ( v99 != (void **)(v98 + 48) )
            free(v99);
        }
      }
      operator delete(*(void **)v98);
      if ( v97 == v98 )
        goto LABEL_175;
    }
  }
  return (*(__int64 (__fastcall **)(__int64 *))(*v3 + 48))(v3);
}
