__int64 __fastcall sub_10EF620(__int64 *a1, __int64 a2, __int64 a3)
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
  const void **v26; // rbx
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
  unsigned __int64 v55; // r12
  unsigned __int64 v56; // rax
  const void **v57; // rbp
  const void **v58; // r12
  size_t v59; // rbp
  const void **v60; // r13
  const void **v61; // rbx
  __int64 v62; // r13
  _QWORD *v63; // rbx
  __int64 v64; // rax
  _QWORD *v65; // rdx
  __m128i *v66; // rax
  unsigned __int64 v67; // r12
  const void **v68; // rbp
  const void **v69; // r12
  const void **v70; // rbx
  __int64 v71; // r13
  size_t v72; // rbp
  __int64 v73; // r13
  _QWORD *v74; // rbx
  __int64 v75; // rax
  _QWORD *v76; // rdx
  __m128i *v77; // rax
  char v78; // dl
  char v79; // dl
  const void **v80; // rcx
  size_t v81; // rax
  __m128i *v82; // rax
  const void **v83; // rcx
  unsigned __int64 v84; // rax
  __m128i *v85; // rax
  size_t v86; // rax
  size_t v87; // rax
  void (__fastcall *v88)(__int64 *, void **); // rax
  size_t v89; // rax
  size_t v90; // rax
  __int64 v91; // rbp
  void **v92; // r12
  void **v93; // rbx
  __int64 v94; // rbp
  char *v95; // r12
  char *v96; // rbx
  void **v97; // r15
  void **v98; // r14
  void **v99; // r12
  void **v100; // rbp
  void **v101; // r12
  void **v102; // rbp
  __int64 v103; // rsi
  const void **v104; // rax
  __int64 v105; // rsi
  __int64 v106; // [rsp+10h] [rbp-138h]
  int v107; // [rsp+20h] [rbp-128h]
  __int64 *v108; // [rsp+20h] [rbp-128h]
  __int64 v110; // [rsp+30h] [rbp-118h]
  __int64 v111; // [rsp+30h] [rbp-118h]
  __int64 v112; // [rsp+38h] [rbp-110h]
  const void **v113; // [rsp+48h] [rbp-100h]
  __int64 v114; // [rsp+48h] [rbp-100h]
  unsigned __int64 v116; // [rsp+60h] [rbp-E8h]
  unsigned __int64 v117; // [rsp+60h] [rbp-E8h]
  __int64 v118; // [rsp+60h] [rbp-E8h]
  __int64 *v119; // [rsp+68h] [rbp-E0h]
  __int64 v120; // [rsp+68h] [rbp-E0h]
  __int64 *v121; // [rsp+68h] [rbp-E0h]
  unsigned __int64 v122; // [rsp+70h] [rbp-D8h]
  unsigned __int64 v123; // [rsp+70h] [rbp-D8h]
  const void **v124; // [rsp+70h] [rbp-D8h]
  const void **v125; // [rsp+78h] [rbp-D0h]
  __int64 *v126; // [rsp+80h] [rbp-C8h]
  __int64 *v127; // [rsp+88h] [rbp-C0h]
  char v128; // [rsp+97h] [rbp-B1h] BYREF
  __int64 v129; // [rsp+98h] [rbp-B0h] BYREF
  __int64 v130; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v131; // [rsp+A8h] [rbp-A0h] BYREF
  void *v132; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v133; // [rsp+B8h] [rbp-90h]
  __m128i v134; // [rsp+C0h] [rbp-88h] BYREF
  void *s2; // [rsp+D0h] [rbp-78h] BYREF
  size_t n; // [rsp+D8h] [rbp-70h]
  __m128i v137; // [rsp+E0h] [rbp-68h] BYREF
  __int16 v138; // [rsp+F0h] [rbp-58h]
  __int64 v139; // [rsp+100h] [rbp-48h]

  v3 = a1;
  v4 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 24))(a1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1) )
    v4 = *(_DWORD *)(a2 + 8);
  if ( v4 )
  {
    v106 = 0;
    v5 = (unsigned int)(v4 - 1);
    v6 = 0;
    v112 = v5;
LABEL_5:
    v107 = v6;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*v3 + 32))(v3, (unsigned int)v6, &v129) )
      goto LABEL_26;
    v7 = *(unsigned int *)(a2 + 8);
    if ( v7 > v6 || (v17 = v106 + 1, v7 == v106 + 1) )
    {
      v8 = *(_QWORD *)a2;
      goto LABEL_8;
    }
    v18 = 160 * v17;
    if ( v7 <= v17 )
    {
      if ( *(unsigned int *)(a2 + 12) < v17 )
      {
        sub_10EF360(a2, v17);
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
    v94 = *(_QWORD *)a2 + 160 * v7;
    v111 = *(_QWORD *)a2 + v18;
    if ( v94 == v111 )
      goto LABEL_35;
LABEL_171:
    v94 -= 160;
    v95 = *(char **)(v94 + 32);
    v96 = &v95[96 * *(unsigned int *)(v94 + 40)];
    if ( v95 == v96 )
      goto LABEL_176;
    while ( 1 )
    {
      v96 -= 96;
      if ( v96[80] )
        goto LABEL_183;
      while ( *(char **)v96 == v96 + 16 )
      {
        if ( v95 == v96 )
        {
LABEL_175:
          v95 = *(char **)(v94 + 32);
LABEL_176:
          if ( v95 != (char *)(v94 + 48) )
            free(v95);
          if ( *(_QWORD *)v94 != v94 + 16 )
          {
            operator delete(*(void **)v94);
            if ( v111 == v94 )
              goto LABEL_34;
            goto LABEL_171;
          }
          if ( v111 != v94 )
            goto LABEL_171;
LABEL_34:
          v8 = *(_QWORD *)a2;
LABEL_35:
          *(_DWORD *)(a2 + 8) = v107 + 1;
LABEL_8:
          v9 = v8 + 160 * v106;
          (*(void (__fastcall **)(__int64 *))(*v3 + 104))(v3);
          if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v3 + 16))(v3) )
          {
            if ( *(_QWORD *)(v9 + 8) )
            {
              if ( *(_DWORD *)(v9 + 40) )
              {
                if ( *(_BYTE *)(v9 + 152) )
                  goto LABEL_9;
                s2 = &v137;
                v47 = j__strlen("custom flag must have a default value");
                v48 = "custom flag must have a default value";
                sub_DD43A0(&s2, "custom flag must have a default value", (__int64)&aCustomFlagMust[v47]);
                if ( n )
                {
LABEL_90:
                  v49 = sub_2259990(&s2, v48);
                  v50 = sub_22581D0(v49, s2, n);
                  v51 = j__strlen("\n");
                  v52 = *(void **)(v50 + 32);
                  v53 = v51;
                  if ( v51 > *(_QWORD *)(v50 + 24) - (_QWORD)v52 )
                  {
                    sub_22581D0(v50, "\n", v51);
                  }
                  else if ( v51 )
                  {
                    memcpy(v52, "\n", v51);
                    *(_QWORD *)(v50 + 32) += v53;
                  }
                }
LABEL_146:
                if ( s2 != &v137 )
                  operator delete(s2);
                goto LABEL_9;
              }
              s2 = &v137;
              v90 = j__strlen("custom flag must have at least one value");
              v48 = "custom flag must have at least one value";
              sub_DD43A0(&s2, "custom flag must have at least one value", (__int64)&aCustomFlagMust_0[v90]);
            }
            else
            {
              s2 = &v137;
              v86 = j__strlen("custom flag requires a name");
              v48 = "custom flag requires a name";
              sub_DD43A0(&s2, "custom flag requires a name", (__int64)&aCustomFlagRequ[v86]);
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
                 &v132,
                 &s2) )
          {
            sub_10E6C30(v3, v9);
            (*(void (__fastcall **)(__int64 *, void *))(*v3 + 128))(v3, s2);
          }
          if ( (*(unsigned __int8 (__fastcall **)(__int64 *, const char *, __int64, _QWORD, char *, __int64 *))(*v3 + 120))(
                 v3,
                 "Values",
                 1,
                 0,
                 &v128,
                 &v130) )
          {
            v23 = (*(__int64 (__fastcall **)(__int64 *))(*v3 + 24))(v3);
            if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v3 + 16))(v3) )
              v23 = *(_DWORD *)(v9 + 40);
            if ( v23 )
            {
              v24 = 0;
              v110 = (unsigned int)(v23 - 1);
              while ( 1 )
              {
                v27 = v24;
                if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*v3 + 32))(
                        v3,
                        (unsigned int)v24,
                        &v131) )
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
                    v91 = v25 + 96 * v28;
                    v114 = v25 + v30;
                    if ( v91 == v25 + v30 )
                      goto LABEL_62;
LABEL_156:
                    v91 -= 96;
                    if ( *(_BYTE *)(v91 + 80) )
                      goto LABEL_162;
                    while ( 1 )
                    {
                      do
                      {
                        if ( *(_QWORD *)v91 != v91 + 16 )
                        {
                          operator delete(*(void **)v91);
                          if ( v114 == v91 )
                            goto LABEL_159;
                          goto LABEL_156;
                        }
                        if ( v114 == v91 )
                        {
LABEL_159:
                          v27 = v24;
                          v25 = *(_QWORD *)(v9 + 32);
                          goto LABEL_62;
                        }
                        v91 -= 96;
                      }
                      while ( !*(_BYTE *)(v91 + 80) );
LABEL_162:
                      v92 = *(void ***)(v91 + 32);
                      v93 = &v92[4 * *(unsigned int *)(v91 + 40)];
                      if ( v92 != v93 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v93 -= 4;
                            if ( *v93 == v93 + 2 )
                              break;
                            operator delete(*v93);
                            if ( v92 == v93 )
                              goto LABEL_165;
                          }
                        }
                        while ( v92 != v93 );
LABEL_165:
                        v92 = *(void ***)(v91 + 32);
                      }
                      if ( v92 != (void **)(v91 + 48) )
                        free(v92);
                    }
                  }
                  if ( *(unsigned int *)(v9 + 44) < v29 )
                  {
                    sub_10EE490(v9 + 32, v29);
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
                v26 = (const void **)(v25 + 96 * v24);
                (*(void (__fastcall **)(__int64 *))(*v3 + 104))(v3);
                v113 = v26;
                if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*v3 + 16))(v3) )
                  goto LABEL_46;
                if ( !v26[1] )
                {
                  s2 = &v137;
                  v39 = j__strlen("custom flag value requires a name");
                  v40 = "custom flag value requires a name";
                  p_s2 = &s2;
                  sub_DD43A0(&s2, "custom flag value requires a name", (__int64)&aCustomFlagValu[v39]);
                  goto LABEL_79;
                }
                if ( *(_QWORD *)(a3 + 1080) )
                {
                  sub_10EB9A0(a3 + 1040, v26);
                  if ( v78 )
                    goto LABEL_46;
                  goto LABEL_139;
                }
                v55 = *(_QWORD *)a3;
                v56 = *(unsigned int *)(a3 + 8);
                v122 = v56;
                v57 = (const void **)(*(_QWORD *)a3 + 32 * v56);
                if ( *(const void ***)a3 == v57 )
                {
                  if ( v56 <= 0x1F )
                    goto LABEL_208;
                  v120 = a3 + 1040;
                  goto LABEL_201;
                }
                v116 = *(_QWORD *)a3;
                v58 = (const void **)(v55 + 32 * v56);
                v59 = (size_t)v26[1];
                v119 = v3;
                v60 = v26;
                v61 = *(const void ***)a3;
                do
                {
                  if ( (const void *)v59 == v61[1] && !sub_990B80(*v61, *v60, v59) )
                  {
                    v57 = v58;
                    v83 = v61;
                    v55 = v116;
                    v26 = v60;
                    v3 = v119;
                    if ( v57 != v83 )
                    {
LABEL_139:
                      sub_BE13C0((__int64)&v132, "duplicate custom flag value name: \"", (__int64)v26);
                      v84 = j__strlen("\"");
                      if ( v84 > 0x7FFFFFFFFFFFFFFFLL - v133 )
                        goto LABEL_225;
                      v40 = "\"";
                      v85 = (__m128i *)sub_9CA820(&v132, "\"", v84);
                      s2 = &v137;
                      if ( (__m128i *)v85->m128i_i64[0] == &v85[1] )
                      {
                        v137 = _mm_loadu_si128(v85 + 1);
                      }
                      else
                      {
                        s2 = (void *)v85->m128i_i64[0];
                        v137.m128i_i64[0] = v85[1].m128i_i64[0];
                      }
                      n = v85->m128i_u64[1];
                      v85->m128i_i64[0] = (__int64)v85[1].m128i_i64;
                      v85->m128i_i64[1] = 0;
                      v85[1].m128i_i8[0] = 0;
                      p_s2 = v132;
                      if ( v132 != &v134 )
                        operator delete(v132);
LABEL_79:
                      if ( n )
                      {
                        v42 = sub_2259990(p_s2, v40);
                        v43 = sub_22581D0(v42, s2, n);
                        v44 = j__strlen("\n");
                        v45 = *(void **)(v43 + 32);
                        v46 = v44;
                        if ( v44 > *(_QWORD *)(v43 + 24) - (_QWORD)v45 )
                        {
                          sub_22581D0(v43, "\n", v44);
                        }
                        else if ( v44 )
                        {
                          memcpy(v45, "\n", v44);
                          *(_QWORD *)(v43 + 32) += v46;
                        }
                      }
                      if ( s2 != &v137 )
                        operator delete(s2);
                      goto LABEL_46;
                    }
                    if ( v122 <= 0x1F )
                      goto LABEL_208;
LABEL_100:
                    v125 = v26;
                    v127 = v3;
                    v62 = v55;
                    v120 = a3 + 1040;
                    v63 = (_QWORD *)(a3 + 1048);
                    do
                    {
                      v64 = sub_10EC2D0((_QWORD *)(a3 + 1040), v63, (const void **)v62);
                      if ( v65 )
                      {
                        if ( !v64 && v65 != v63 )
                          sub_9A0E10(v62, (__int64)(v65 + 4));
                        v66 = (__m128i *)operator new(0x40u);
                        v66[2].m128i_i64[0] = (__int64)v66[3].m128i_i64;
                        if ( *(_QWORD *)v62 == v62 + 16 )
                        {
                          v66[3] = _mm_loadu_si128((const __m128i *)(v62 + 16));
                        }
                        else
                        {
                          v66[2].m128i_i64[0] = *(_QWORD *)v62;
                          v66[3].m128i_i64[0] = *(_QWORD *)(v62 + 16);
                        }
                        v66[2].m128i_i64[1] = *(_QWORD *)(v62 + 8);
                        *(_QWORD *)v62 = v62 + 16;
                        *(_QWORD *)(v62 + 8) = 0;
                        *(_BYTE *)(v62 + 16) = 0;
                        std::_Rb_tree_insert_and_rebalance();
                        ++*(_QWORD *)(a3 + 1080);
                      }
                      v62 += 32;
                    }
                    while ( v57 != (const void **)v62 );
                    v26 = v125;
                    v99 = *(void ***)a3;
                    v3 = v127;
                    v100 = (void **)(*(_QWORD *)a3 + 32LL * *(unsigned int *)(a3 + 8));
                    while ( v99 != v100 )
                    {
                      while ( 1 )
                      {
                        v100 -= 4;
                        if ( *v100 == v100 + 2 )
                          break;
                        operator delete(*v100);
                        if ( v99 == v100 )
                          goto LABEL_201;
                      }
                    }
LABEL_201:
                    *(_DWORD *)(a3 + 8) = 0;
                    sub_10EB9A0(v120, v26);
                    goto LABEL_46;
                  }
                  v61 += 4;
                }
                while ( v58 != v61 );
                v57 = v58;
                v26 = v60;
                v55 = v116;
                v3 = v119;
                if ( v122 > 0x1F )
                  goto LABEL_100;
LABEL_208:
                v103 = v122 + 1;
                v104 = v26;
                if ( v122 + 1 > *(unsigned int *)(a3 + 12) )
                {
                  if ( v55 > (unsigned __int64)v26 || v57 <= v26 )
                  {
                    sub_A684B0(a3, v103);
                    v57 = (const void **)(*(_QWORD *)a3 + 32LL * *(unsigned int *)(a3 + 8));
                    v104 = v26;
                  }
                  else
                  {
                    sub_A684B0(a3, v103);
                    v104 = (const void **)((char *)v26 + *(_QWORD *)a3 - v55);
                    v57 = (const void **)(*(_QWORD *)a3 + 32LL * *(unsigned int *)(a3 + 8));
                  }
                }
                *v57 = v57 + 2;
                sub_10E6B70(v57, *v104, (__int64)v104[1] + (_QWORD)*v104);
                ++*(_DWORD *)(a3 + 8);
LABEL_46:
                if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64, _QWORD, void **, void **))(*v3 + 120))(
                       v3,
                       "Name",
                       1,
                       0,
                       &v132,
                       &s2) )
                {
                  sub_10E6C30(v3, (__int64)v26);
                  (*(void (__fastcall **)(__int64 *, void *))(*v3 + 128))(v3, s2);
                }
                v139 = 0;
                sub_10EBDF0(v3, (__int64)"MacroDefines", (__int64)(v26 + 4), (__int64)&s2, 0);
                if ( (_BYTE)v139 )
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
                  if ( v38 != (void **)&v137 )
                    free(v38);
                }
                if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v3 + 16))(v3) )
                  goto LABEL_50;
                v34 = (size_t)v26[1];
                if ( !v34 )
                {
                  v132 = &v134;
                  v35 = j__strlen("custom flag value requires a name");
                  sub_DD43A0(&v132, "custom flag value requires a name", (__int64)&aCustomFlagValu[v35]);
LABEL_65:
                  if ( v133 )
                  {
                    v36 = *(void (__fastcall **)(__int64 *, void **))(*v3 + 248);
                    v138 = 260;
                    s2 = &v132;
                    v36(v3, &s2);
                  }
                  if ( v132 != &v134 )
                    operator delete(v132);
                  goto LABEL_50;
                }
                if ( *(_QWORD *)(a3 + 1080) )
                {
                  sub_10EB9A0(a3 + 1040, v26);
                  if ( v79 )
                    goto LABEL_50;
                  goto LABEL_132;
                }
                v67 = *(_QWORD *)a3;
                v123 = *(unsigned int *)(a3 + 8);
                v68 = (const void **)(*(_QWORD *)a3 + 32 * v123);
                if ( *(const void ***)a3 == v68 )
                {
                  if ( v123 <= 0x1F )
                    goto LABEL_211;
                  v118 = a3 + 1040;
                  goto LABEL_206;
                }
                v117 = *(_QWORD *)a3;
                v69 = v26;
                v121 = v3;
                v70 = *(const void ***)a3;
                v71 = *(_QWORD *)a3 + 32 * v123;
                v72 = v34;
                while ( 2 )
                {
                  if ( (const void *)v72 == v70[1] && !sub_990B80(*v70, *v69, v72) )
                  {
                    v68 = (const void **)v71;
                    v80 = v70;
                    v3 = v121;
                    v26 = v69;
                    v67 = v117;
                    if ( v68 != v80 )
                    {
LABEL_132:
                      sub_BE13C0((__int64)&s2, "duplicate custom flag value name: \"", (__int64)v26);
                      v81 = j__strlen("\"");
                      if ( v81 <= 0x7FFFFFFFFFFFFFFFLL - n )
                      {
                        v82 = (__m128i *)sub_9CA820(&s2, "\"", v81);
                        v132 = &v134;
                        if ( (__m128i *)v82->m128i_i64[0] == &v82[1] )
                        {
                          v134 = _mm_loadu_si128(v82 + 1);
                        }
                        else
                        {
                          v132 = (void *)v82->m128i_i64[0];
                          v134.m128i_i64[0] = v82[1].m128i_i64[0];
                        }
                        v133 = v82->m128i_i64[1];
                        v82->m128i_i64[0] = (__int64)v82[1].m128i_i64;
                        v82->m128i_i64[1] = 0;
                        v82[1].m128i_i8[0] = 0;
                        if ( s2 != &v137 )
                          operator delete(s2);
                        goto LABEL_65;
                      }
LABEL_225:
                      std::__throw_length_error("basic_string::append");
                    }
                    if ( v123 <= 0x1F )
                      goto LABEL_211;
LABEL_116:
                    v124 = v26;
                    v126 = v3;
                    v73 = v67;
                    v118 = a3 + 1040;
                    v74 = (_QWORD *)(a3 + 1048);
                    do
                    {
                      v75 = sub_10EC2D0((_QWORD *)(a3 + 1040), v74, (const void **)v73);
                      if ( v76 )
                      {
                        if ( !v75 && v74 != v76 )
                          sub_9A0E10(v73, (__int64)(v76 + 4));
                        v77 = (__m128i *)operator new(0x40u);
                        v77[2].m128i_i64[0] = (__int64)v77[3].m128i_i64;
                        if ( *(_QWORD *)v73 == v73 + 16 )
                        {
                          v77[3] = _mm_loadu_si128((const __m128i *)(v73 + 16));
                        }
                        else
                        {
                          v77[2].m128i_i64[0] = *(_QWORD *)v73;
                          v77[3].m128i_i64[0] = *(_QWORD *)(v73 + 16);
                        }
                        v77[2].m128i_i64[1] = *(_QWORD *)(v73 + 8);
                        *(_QWORD *)v73 = v73 + 16;
                        *(_QWORD *)(v73 + 8) = 0;
                        *(_BYTE *)(v73 + 16) = 0;
                        std::_Rb_tree_insert_and_rebalance();
                        ++*(_QWORD *)(a3 + 1080);
                      }
                      v73 += 32;
                    }
                    while ( v68 != (const void **)v73 );
                    v26 = v124;
                    v101 = *(void ***)a3;
                    v3 = v126;
                    v102 = (void **)(*(_QWORD *)a3 + 32LL * *(unsigned int *)(a3 + 8));
                    while ( v101 != v102 )
                    {
                      while ( 1 )
                      {
                        v102 -= 4;
                        if ( *v102 == v102 + 2 )
                          break;
                        operator delete(*v102);
                        if ( v101 == v102 )
                          goto LABEL_206;
                      }
                    }
LABEL_206:
                    *(_DWORD *)(a3 + 8) = 0;
                    sub_10EB9A0(v118, v26);
                    goto LABEL_50;
                  }
                  v70 += 4;
                  if ( (const void **)v71 != v70 )
                    continue;
                  break;
                }
                v26 = v69;
                v68 = (const void **)v71;
                v67 = v117;
                v3 = v121;
                if ( v123 > 0x1F )
                  goto LABEL_116;
LABEL_211:
                v105 = v123 + 1;
                if ( v123 + 1 > *(unsigned int *)(a3 + 12) )
                {
                  if ( v67 > (unsigned __int64)v26 || v68 <= v26 )
                  {
                    sub_A684B0(a3, v105);
                    v68 = (const void **)(*(_QWORD *)a3 + 32LL * *(unsigned int *)(a3 + 8));
                  }
                  else
                  {
                    sub_A684B0(a3, v105);
                    v113 = (const void **)((char *)v26 + *(_QWORD *)a3 - v67);
                    v68 = (const void **)(32LL * *(unsigned int *)(a3 + 8) + *(_QWORD *)a3);
                  }
                }
                *v68 = v68 + 2;
                sub_10E6B70(v68, *v113, (__int64)v113[1] + (_QWORD)*v113);
                ++*(_DWORD *)(a3 + 8);
LABEL_50:
                (*(void (__fastcall **)(__int64 *))(*v3 + 112))(v3);
                (*(void (__fastcall **)(__int64 *, __int64))(*v3 + 40))(v3, v131);
LABEL_51:
                if ( v110 == v24 )
                  break;
                ++v24;
              }
            }
            (*(void (__fastcall **)(__int64 *))(*v3 + 48))(v3);
            (*(void (__fastcall **)(__int64 *, __int64))(*v3 + 128))(v3, v130);
          }
          v137.m128i_i8[0] = 0;
          n = 0;
          s2 = &v137;
          if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64, _QWORD, __int64 *, void **))(*v3 + 120))(
                 v3,
                 "Default",
                 1,
                 0,
                 &v131,
                 &v132) )
          {
            sub_10E6C30(v3, (__int64)&s2);
            (*(void (__fastcall **)(__int64 *, void *))(*v3 + 128))(v3, v132);
          }
          v10 = *(unsigned int *)(v9 + 40);
          v11 = *(_QWORD *)(v9 + 32);
          v12 = (__m128i *)s2;
          if ( v11 != v11 + 96 * v10 )
          {
            v108 = v3;
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
            v3 = v108;
          }
          if ( v12 != &v137 )
            operator delete(v12);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*v3 + 16))(v3) )
          {
            if ( *(_QWORD *)(v9 + 8) )
            {
              if ( *(_DWORD *)(v9 + 40) )
              {
                if ( *(_BYTE *)(v9 + 152) )
                  goto LABEL_25;
                v132 = &v134;
                v22 = j__strlen("custom flag must have a default value");
                sub_DD43A0(&v132, "custom flag must have a default value", (__int64)&aCustomFlagMust[v22]);
              }
              else
              {
                v132 = &v134;
                v89 = j__strlen("custom flag must have at least one value");
                sub_DD43A0(&v132, "custom flag must have at least one value", (__int64)&aCustomFlagMust_0[v89]);
              }
            }
            else
            {
              v132 = &v134;
              v87 = j__strlen("custom flag requires a name");
              sub_DD43A0(&v132, "custom flag requires a name", (__int64)&aCustomFlagRequ[v87]);
            }
            if ( v133 )
            {
              v88 = *(void (__fastcall **)(__int64 *, void **))(*v3 + 248);
              v138 = 260;
              s2 = &v132;
              v88(v3, &s2);
            }
            if ( v132 != &v134 )
              operator delete(v132);
          }
LABEL_25:
          (*(void (__fastcall **)(__int64 *))(*v3 + 112))(v3);
          (*(void (__fastcall **)(__int64 *, __int64))(*v3 + 40))(v3, v129);
LABEL_26:
          v16 = v106 + 1;
          if ( v112 == v106 )
            return (*(__int64 (__fastcall **)(__int64 *))(*v3 + 48))(v3);
          ++v106;
          v6 = v16;
          goto LABEL_5;
        }
        v96 -= 96;
        if ( v96[80] )
        {
LABEL_183:
          v97 = *((void ***)v96 + 4);
          v98 = &v97[4 * *((unsigned int *)v96 + 10)];
          if ( v97 != v98 )
          {
            do
            {
              while ( 1 )
              {
                v98 -= 4;
                if ( *v98 == v98 + 2 )
                  break;
                operator delete(*v98);
                if ( v97 == v98 )
                  goto LABEL_186;
              }
            }
            while ( v97 != v98 );
LABEL_186:
            v97 = *((void ***)v96 + 4);
          }
          if ( v97 != (void **)(v96 + 48) )
            free(v97);
        }
      }
      operator delete(*(void **)v96);
      if ( v95 == v96 )
        goto LABEL_175;
    }
  }
  return (*(__int64 (__fastcall **)(__int64 *))(*v3 + 48))(v3);
}

