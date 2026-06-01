void __fastcall sub_215C490(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, int a6, __int128 a7, __int128 a8)
{
  __m128i *v10; // rsi
  unsigned __int64 v11; // r13
  _QWORD *v12; // r12
  size_t v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // r13
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r12
  __int64 v33; // r13
  __int64 v34; // r8
  __int64 v35; // r9
  void *v36; // r14
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r12
  __int64 v40; // r13
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  void *v44; // r13
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r12
  void *v59; // rax
  __m128i v60; // xmm3
  __m128i si128; // xmm1
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  void *v66; // rax
  unsigned __int64 v67; // r14
  size_t v68; // rax
  size_t v69; // r12
  size_t v70; // rax
  size_t v71; // r12
  const void *v72; // r14
  __int64 v73; // rax
  __int64 v74; // rdi
  __m128i v75; // xmm4
  int v76; // eax
  char v77; // dl
  unsigned __int64 v78; // r13
  _QWORD *v79; // rax
  char *v80; // rdi
  unsigned __int64 v81; // r14
  const void *v82; // rsi
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // r14
  const void *v85; // rsi
  unsigned __int64 v86; // r14
  const void *v87; // rsi
  unsigned __int64 v88; // r14
  const void *v89; // rsi
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rax
  __int16 v93; // ax
  size_t v94; // rax
  __int64 v95; // rax
  __int16 v96; // ax
  __int16 v97; // ax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int16 v101; // ax
  void *v102; // rax
  size_t v103; // r14
  __int64 v104; // rax
  size_t v105; // rax
  __int64 v106; // rax
  __int16 v107; // ax
  char v108; // [rsp+0h] [rbp-1E8h]
  const void *v109; // [rsp+0h] [rbp-1E8h]
  _BYTE *s1; // [rsp+18h] [rbp-1D0h]
  unsigned __int64 v111; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v112; // [rsp+38h] [rbp-1B0h] BYREF
  __int64 v113; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v114; // [rsp+48h] [rbp-1A0h] BYREF
  _BYTE *v115; // [rsp+50h] [rbp-198h] BYREF
  size_t v116; // [rsp+58h] [rbp-190h]
  char v117; // [rsp+60h] [rbp-188h]
  __m128i v118; // [rsp+70h] [rbp-178h] BYREF
  char v119; // [rsp+80h] [rbp-168h]
  size_t n[2]; // [rsp+90h] [rbp-158h] BYREF
  __int64 v121; // [rsp+A0h] [rbp-148h]
  __m128i v122[2]; // [rsp+C0h] [rbp-128h] BYREF
  __m128i v123; // [rsp+F0h] [rbp-F8h] BYREF
  __m128i v124; // [rsp+100h] [rbp-E8h] BYREF
  __int64 v125; // [rsp+110h] [rbp-D8h]
  __int64 v126; // [rsp+118h] [rbp-D0h]
  __m128i v127; // [rsp+120h] [rbp-C8h] BYREF
  __m128i v128; // [rsp+130h] [rbp-B8h] BYREF
  void *dest; // [rsp+140h] [rbp-A8h]
  unsigned __int64 v130; // [rsp+148h] [rbp-A0h]
  __int64 v131; // [rsp+150h] [rbp-98h]
  void *ptr[2]; // [rsp+160h] [rbp-88h] BYREF
  __m128i v133; // [rsp+170h] [rbp-78h] BYREF
  __int64 v134; // [rsp+180h] [rbp-68h]
  __int64 v135; // [rsp+188h] [rbp-60h]

  v10 = nullptr;
  v122[0] = (__m128i)a7;
  v122[1] = (__m128i)a8;
  sub_215DE90(a1, 0, DWORD2(a7), a8, a5, a6, a7, a8);
  v11 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 48) = 0;
  v12 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)a1 = &off_2BE9620;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_WORD *)(a1 + 112) = -1;
  *(_OWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  if ( v11 <= 7 )
  {
LABEL_2:
    v13 = j__strlen("<bigaf>\n");
    if ( v11 < v13 || v13 && (v10 = (__m128i *)"<bigaf>\n", memcmp(v12, "<bigaf>\n", v13)) )
    {
      ptr[0] = "file too small to be an archive";
      LOWORD(v134) = 259;
      v10 = (__m128i *)ptr;
      v58 = operator new(0x38u);
      sub_2195A00(v58, ptr, 2);
      *a2 = v58;
      v11 = *(_QWORD *)(a1 + 24);
      v12 = *(_QWORD **)(a1 + 16);
    }
    else
    {
      *(_BYTE *)(a1 + 114) = *(_BYTE *)(a1 + 114) & 0xF0 | 6;
    }
    goto LABEL_17;
  }
  if ( *v12 == 0xA3E6E6968743C21LL )
  {
    *(_BYTE *)(a1 + 114) |= 8u;
  }
  else
  {
    if ( *v12 != 0xA3E686372613C21LL )
      goto LABEL_2;
    *(_BYTE *)(a1 + 114) &= ~8u;
  }
  *(_BYTE *)(a1 + 114) &= 0xF8u;
  if ( v11 != 8 )
  {
    v10 = (__m128i *)a1;
    sub_215AC80((__int64)&v123, a1, (__int64)(v12 + 1), a2);
    if ( *a2 )
    {
      sub_21573D0((__int64)&v127);
    }
    else
    {
      v10 = &v123;
      sub_2157400((__m128i *)ptr, &v123);
      si128 = _mm_load_si128((const __m128i *)ptr);
      v128 = v133;
      v127 = si128;
      LOWORD(dest) = v134;
      v130 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFBLL;
    }
    if ( v123.m128i_i64[1] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v123.m128i_i64[1] + 16LL))(v123.m128i_i64[1]);
    if ( *a2 )
      goto LABEL_14;
LABEL_35:
    sub_21573D0((__int64)ptr);
    if ( ((v135 | v130) & 0xFFFFFFFFFFFFFFF8LL) == 0 || v128.m128i_i64[0] == v133.m128i_i64[0] )
    {
      *a2 = 0;
LABEL_40:
      if ( ptr[1] )
        (*(void (__fastcall **)(void *))(*(_QWORD *)ptr[1] + 16LL))(ptr[1]);
      goto LABEL_14;
    }
    v10 = (__m128i *)v127.m128i_i64[1];
    (*(void (__fastcall **)(_BYTE **))(*(_QWORD *)v127.m128i_i64[1] + 24LL))(&v115);
    v108 = v117 & 1;
    v45 = (__int64)v115;
    if ( (v117 & 1) != 0 )
    {
      v115 = nullptr;
      *a2 = v45;
LABEL_39:
      sub_111DFC0((__int64 *)&v115);
      goto LABEL_40;
    }
    v67 = v116;
    s1 = v115;
    v68 = j__strlen("__.SYMDEF");
    v69 = v68;
    if ( v68 == v67 )
    {
      if ( !v68 || (v10 = (__m128i *)"__.SYMDEF", !memcmp(s1, "__.SYMDEF", v68)) )
      {
        v77 = 2;
      }
      else
      {
        if ( v69 != j__strlen("__.SYMDEF_64") || (v10 = (__m128i *)"__.SYMDEF_64", memcmp(s1, "__.SYMDEF_64", v69)) )
        {
LABEL_64:
          v70 = j__strlen("#1/");
          if ( v70 <= v67 )
          {
            if ( !v70 || (v10 = (__m128i *)"#1/", !memcmp(s1, "#1/", v70)) )
            {
              *(_BYTE *)(a1 + 114) = *(_BYTE *)(a1 + 114) & 0xF8 | 2;
              v10 = &v127;
              sub_2157700((__int64)n, (__int64)&v127);
              if ( (v121 & 1) == 0 )
              {
                v71 = n[1];
                v72 = (const void *)n[0];
                if ( j__strlen("__.SYMDEF SORTED") == v71 )
                {
                  if ( !v71 )
                    goto LABEL_77;
                  v10 = (__m128i *)"__.SYMDEF SORTED";
                  if ( !memcmp(v72, "__.SYMDEF SORTED", v71) )
                    goto LABEL_77;
                  if ( v71 != j__strlen("__.SYMDEF") )
                  {
                    if ( j__strlen("__.SYMDEF_64 SORTED") == v71 )
                      goto LABEL_73;
                    goto LABEL_147;
                  }
                }
                else
                {
                  if ( j__strlen("__.SYMDEF") != v71 )
                  {
                    if ( j__strlen("__.SYMDEF_64 SORTED") == v71 )
                    {
                      if ( !v71 )
                        goto LABEL_76;
                      goto LABEL_73;
                    }
                    goto LABEL_147;
                  }
                  if ( !v71 )
                    goto LABEL_77;
                }
                v10 = (__m128i *)"__.SYMDEF";
                if ( !memcmp(v72, "__.SYMDEF", v71) )
                  goto LABEL_77;
                if ( v71 == j__strlen("__.SYMDEF_64 SORTED") )
                {
LABEL_73:
                  v10 = (__m128i *)"__.SYMDEF_64 SORTED";
                  if ( memcmp(v72, "__.SYMDEF_64 SORTED", v71) )
                  {
                    if ( v71 != j__strlen("__.SYMDEF_64") )
                      goto LABEL_152;
                    goto LABEL_75;
                  }
                  goto LABEL_76;
                }
LABEL_147:
                if ( j__strlen("__.SYMDEF_64") != v71 )
                  goto LABEL_152;
                if ( v71 )
                {
LABEL_75:
                  v10 = (__m128i *)"__.SYMDEF_64";
                  if ( memcmp(v72, "__.SYMDEF_64", v71) )
                    goto LABEL_152;
                }
LABEL_76:
                *(_BYTE *)(a1 + 114) = *(_BYTE *)(a1 + 114) & 0xF8 | 4;
LABEL_77:
                v10 = &v127;
                sub_2157B60((__int64)&v123, (__int64)&v127);
                if ( (v124.m128i_i8[0] & 1) != 0 )
                {
                  v73 = v123.m128i_i64[0];
                  v123.m128i_i64[0] = 0;
                  *a2 = v73;
LABEL_79:
                  sub_111DFC0(v123.m128i_i64);
LABEL_80:
                  sub_111DFC0((__int64 *)n);
                  goto LABEL_39;
                }
                *(__m128i *)(a1 + 48) = _mm_load_si128(&v123);
                sub_111E100(&v127);
                if ( *a2 )
                  goto LABEL_79;
                sub_111DFC0(v123.m128i_i64);
LABEL_152:
                v97 = (__int16)dest;
                *(__m128i *)(a1 + 96) = _mm_load_si128(&v128);
                *(_WORD *)(a1 + 112) = v97;
                goto LABEL_80;
              }
LABEL_117:
              v94 = n[0];
              n[0] = 0;
              *a2 = v94;
              goto LABEL_80;
            }
          }
          if ( v67 == j__strlen("/") )
          {
            if ( v67 )
            {
              v10 = (__m128i *)"/";
              if ( memcmp(s1, "/", v67) )
              {
                if ( v67 != j__strlen("/SYM64/") )
                {
                  if ( v67 != j__strlen("//") )
                    goto LABEL_139;
                  goto LABEL_113;
                }
LABEL_111:
                v10 = (__m128i *)"/SYM64/";
                if ( memcmp(s1, "/SYM64/", v67) )
                {
                  if ( v67 != j__strlen("//") )
                    goto LABEL_139;
LABEL_113:
                  v10 = (__m128i *)"//";
                  if ( !memcmp(s1, "//", v67) )
                    goto LABEL_114;
LABEL_139:
                  if ( *s1 != 47 )
                  {
                    *(_BYTE *)(a1 + 114) = *(_BYTE *)(a1 + 114) & 0xF8 | v108;
                    v96 = (__int16)dest;
                    *(__m128i *)(a1 + 96) = _mm_load_si128(&v128);
                    *(_WORD *)(a1 + 112) = v96;
                    *a2 = 0;
                    goto LABEL_39;
                  }
                  if ( v67 != j__strlen("/") || v67 && memcmp(s1, "/", v67) )
                  {
                    v99 = sub_2195B10();
                    v10 = (__m128i *)(&dword_0 + 3);
                    sub_2220500(&v123, 3, v99);
                    *a2 = v123.m128i_i64[0];
                    goto LABEL_39;
                  }
                  v10 = &v127;
                  *(_BYTE *)(a1 + 114) = *(_BYTE *)(a1 + 114) & 0xF8 | 5;
                  sub_2157B60((__int64)&v118, (__int64)&v127);
                  if ( (v119 & 1) != 0 )
                  {
                    v98 = v118.m128i_i64[0];
                    v118.m128i_i64[0] = 0;
                    *a2 = v98;
LABEL_161:
                    sub_111DFC0(v118.m128i_i64);
                    goto LABEL_39;
                  }
                  *(__m128i *)(a1 + 48) = _mm_load_si128(&v118);
                  sub_111E100(&v127);
                  if ( *a2 )
                    goto LABEL_161;
                  if ( ((v135 | v130) & 0xFFFFFFFFFFFFFFF8LL) == 0 || v128.m128i_i64[0] == v133.m128i_i64[0] )
                    goto LABEL_171;
                  (*(void (__fastcall **)(__m128i *))(*(_QWORD *)v127.m128i_i64[1] + 24LL))(&v123);
                  v10 = &v123;
                  sub_2157570((__int64)&v115, &v123);
                  sub_111DFC0(v123.m128i_i64);
                  v100 = (__int64)v115;
                  if ( (v117 & 1) != 0 )
                  {
                    v115 = nullptr;
                    *a2 = v100;
                    goto LABEL_161;
                  }
                  v103 = v116;
                  v109 = v115;
                  if ( j__strlen("//") == v103 )
                  {
                    if ( v103 )
                    {
                      v10 = (__m128i *)"//";
                      if ( memcmp(v109, "//", v103) )
                      {
                        if ( j__strlen("/<ECSYMBOLS>/") != v103 )
                          goto LABEL_171;
                        goto LABEL_178;
                      }
                    }
                    v10 = &v127;
                    sub_2157B60((__int64)n, (__int64)&v127);
                    if ( (v121 & 1) != 0 )
                    {
                      v105 = n[0];
                      n[0] = 0;
                      *a2 = v105;
LABEL_188:
                      sub_111DFC0((__int64 *)n);
                      goto LABEL_161;
                    }
                    *(__m128i *)(a1 + 80) = _mm_load_si128((const __m128i *)n);
                    sub_111E100(&v127);
                    if ( *a2 )
                      goto LABEL_188;
                    if ( ((v135 | v130) & 0xFFFFFFFFFFFFFFF8LL) == 0 || v128.m128i_i64[0] == v133.m128i_i64[0] )
                    {
                      v107 = (__int16)dest;
                      *(__m128i *)(a1 + 96) = _mm_load_si128(&v128);
                      *(_WORD *)(a1 + 112) = v107;
                      *a2 = 0;
                      goto LABEL_188;
                    }
                    (*(void (__fastcall **)(__m128i *))(*(_QWORD *)v127.m128i_i64[1] + 24LL))(&v123);
                    v10 = &v123;
                    sub_2157570((__int64)&v115, &v123);
                    sub_111DFC0(v123.m128i_i64);
                    v106 = (__int64)v115;
                    if ( (v117 & 1) != 0 )
                    {
                      v115 = nullptr;
                      *a2 = v106;
                      goto LABEL_188;
                    }
                    v103 = v116;
                    v109 = v115;
                    sub_111DFC0((__int64 *)n);
                  }
                  if ( j__strlen("/<ECSYMBOLS>/") != v103 )
                    goto LABEL_171;
                  if ( !v103 )
                  {
LABEL_179:
                    v10 = &v127;
                    sub_2157B60((__int64)&v123, (__int64)&v127);
                    if ( (v124.m128i_i8[0] & 1) != 0 )
                    {
                      v104 = v123.m128i_i64[0];
                      v123.m128i_i64[0] = 0;
                      *a2 = v104;
                      goto LABEL_181;
                    }
                    *(__m128i *)(a1 + 64) = _mm_load_si128(&v123);
                    sub_111E100(&v127);
                    if ( *a2 )
                    {
LABEL_181:
                      sub_111DFC0(v123.m128i_i64);
                      goto LABEL_161;
                    }
                    sub_111DFC0(v123.m128i_i64);
LABEL_171:
                    v101 = (__int16)dest;
                    *(__m128i *)(a1 + 96) = _mm_load_si128(&v128);
                    *(_WORD *)(a1 + 112) = v101;
                    *a2 = 0;
                    goto LABEL_161;
                  }
LABEL_178:
                  v10 = (__m128i *)"/<ECSYMBOLS>/";
                  if ( memcmp(v109, "/<ECSYMBOLS>/", v103) )
                    goto LABEL_171;
                  goto LABEL_179;
                }
              }
            }
          }
          else
          {
            if ( v67 != j__strlen("/SYM64/") )
            {
LABEL_127:
              if ( j__strlen("//") != v67 )
                goto LABEL_139;
              if ( !v67 )
              {
LABEL_114:
                v10 = &v127;
                *(_BYTE *)(a1 + 114) = *(_BYTE *)(a1 + 114) & 0xF8 | v108;
                sub_2157B60((__int64)&v123, (__int64)&v127);
                if ( (v124.m128i_i8[0] & 1) == 0 )
                {
                  *(__m128i *)(a1 + 80) = _mm_load_si128(&v123);
                  sub_111E100(&v127);
                  if ( !*a2 )
                    goto LABEL_116;
                  goto LABEL_91;
                }
                goto LABEL_107;
              }
              goto LABEL_113;
            }
            if ( v67 )
              goto LABEL_111;
          }
          v10 = &v127;
          sub_2157B60((__int64)n, (__int64)&v127);
          v108 = v121 & 1;
          if ( (v121 & 1) != 0 )
            goto LABEL_117;
          *(__m128i *)(a1 + 48) = _mm_load_si128((const __m128i *)n);
          if ( v67 == j__strlen("/SYM64/") )
          {
            v108 = 1;
            if ( v67 )
            {
              v10 = (__m128i *)"/SYM64/";
              v108 = memcmp(s1, "/SYM64/", v67) == 0;
            }
          }
          sub_111E100(&v127);
          if ( *a2 || ((v135 | v130) & 0xFFFFFFFFFFFFFFF8LL) == 0 || v128.m128i_i64[0] == v133.m128i_i64[0] )
            goto LABEL_80;
          v10 = (__m128i *)v127.m128i_i64[1];
          (*(void (__fastcall **)(__m128i *))(*(_QWORD *)v127.m128i_i64[1] + 24LL))(&v123);
          v95 = v123.m128i_i64[0];
          if ( (v124.m128i_i8[0] & 1) != 0 )
          {
            v123.m128i_i64[0] = 0;
            *a2 = v95;
            goto LABEL_79;
          }
          v67 = v123.m128i_u64[1];
          s1 = (_BYTE *)v123.m128i_i64[0];
          sub_111DFC0(v123.m128i_i64);
          sub_111DFC0((__int64 *)n);
          goto LABEL_127;
        }
        v77 = memcmp(s1, "__.SYMDEF", v69) == 0 ? 2 : 4;
      }
    }
    else
    {
      if ( j__strlen("__.SYMDEF_64") != v67 )
        goto LABEL_64;
      if ( v67 )
      {
        v10 = (__m128i *)"__.SYMDEF_64";
        v76 = memcmp(s1, "__.SYMDEF_64", v67);
        v77 = 4;
        if ( v76 )
          goto LABEL_64;
      }
      else
      {
        v77 = 4;
      }
    }
    v10 = &v127;
    *(_BYTE *)(a1 + 114) = v77 & 7 | *(_BYTE *)(a1 + 114) & 0xF8;
    sub_2157B60((__int64)&v123, (__int64)&v127);
    if ( (v124.m128i_i8[0] & 1) == 0 )
    {
      *(__m128i *)(a1 + 48) = _mm_load_si128(&v123);
      sub_111E100(&v127);
      if ( !*a2 )
      {
LABEL_116:
        v93 = (__int16)dest;
        *(__m128i *)(a1 + 96) = _mm_load_si128(&v128);
        *(_WORD *)(a1 + 112) = v93;
        *a2 = 0;
      }
LABEL_91:
      sub_111DFC0(v123.m128i_i64);
      goto LABEL_39;
    }
LABEL_107:
    v92 = v123.m128i_i64[0];
    v123.m128i_i64[0] = 0;
    *a2 = v92;
    goto LABEL_91;
  }
  sub_21573D0((__int64)&v127);
  if ( !*a2 )
    goto LABEL_35;
LABEL_14:
  if ( v127.m128i_i64[1] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v127.m128i_i64[1] + 16LL))(v127.m128i_i64[1]);
  v12 = *(_QWORD **)(a1 + 16);
  v11 = *(_QWORD *)(a1 + 24);
LABEL_17:
  *(_QWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_BYTE *)(a1 + 184) = 0;
  *(_QWORD *)a1 = &off_2BE95E0;
  *(_QWORD *)(a1 + 168) = a1 + 184;
  *(_WORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 144) = v12;
  v111 = v11;
  if ( v11 <= 0x7F )
  {
    v123.m128i_i64[0] = (__int64)ptr;
    ptr[0] = "malformed AIX big archive: incomplete fixed length header, the archive is only";
    v133.m128i_i64[0] = (__int64)&v111;
    LOWORD(v134) = 2819;
    v124.m128i_i64[0] = (__int64)" byte(s)";
    LOWORD(v125) = 770;
    sub_2158040(&v127, (__int64)v10, v14, v15, v16, v17, (char)ptr);
    *a2 = v127.m128i_i64[0];
    return;
  }
  v18 = sub_2157B00((__int64)v12 + 68);
  v20 = v19;
  v21 = v18;
  if ( (unsigned __int8)sub_2247970(v18, v19, 10, ptr) )
  {
    ptr[0] = "\" is not a number";
    v128.m128i_i64[1] = v20;
    LOWORD(v134) = 259;
    LOWORD(dest) = 1283;
    v127.m128i_i64[0] = (__int64)"malformed AIX big archive: first member offset \"";
    v128.m128i_i64[0] = v21;
    sub_A41580((__m128i *)n, &v127, (const __m128i *)ptr, v22, v23, 259);
    sub_2158040(&v123, (__int64)&v127, v54, v55, v56, v57, n[0]);
    *a2 = v123.m128i_i64[0];
  }
  else
  {
    *(void **)(a1 + 152) = ptr[0];
  }
  v24 = sub_2157B00(*(_QWORD *)(a1 + 144) + 88LL);
  v26 = v25;
  v27 = v24;
  if ( (unsigned __int8)sub_2247970(v24, v25, 10, ptr) )
  {
    ptr[0] = "\" is not a number";
    LOWORD(v134) = 259;
    v128.m128i_i64[1] = v26;
    LOWORD(dest) = 1283;
    v127.m128i_i64[0] = (__int64)"malformed AIX big archive: last member offset \"";
    v128.m128i_i64[0] = v27;
    sub_A41580(v122, &v127, (const __m128i *)ptr, v28, 1283, v29);
    sub_2158040(&v123, (__int64)&v127, v50, v51, v52, v53, v122[0].m128i_i8[0]);
    *a2 = v123.m128i_i64[0];
  }
  else
  {
    *(void **)(a1 + 160) = ptr[0];
  }
  v30 = sub_2157B00(*(_QWORD *)(a1 + 144) + 28LL);
  v32 = v31;
  v33 = v30;
  if ( (unsigned __int8)sub_2247970(v30, v31, 10, ptr) )
  {
    ptr[0] = "\" is not a number";
    LOWORD(v125) = 1283;
    LOWORD(v134) = 259;
    v123.m128i_i64[0] = (__int64)"global symbol table offset of 32-bit members \"";
    v124.m128i_i64[0] = v33;
    v124.m128i_i64[1] = v32;
    sub_A41580(&v127, &v123, (const __m128i *)ptr, 259, v34, v35);
    sub_2158040(&v118, (__int64)&v123, v46, v47, v48, v49, v127.m128i_i8[0]);
    *a2 = v118.m128i_i64[0];
    return;
  }
  v36 = ptr[0];
  v37 = sub_2157B00(*(_QWORD *)(a1 + 144) + 48LL);
  v39 = v38;
  v40 = v37;
  if ( (unsigned __int8)sub_2247970(v37, v38, 10, ptr) )
  {
    v124.m128i_i64[0] = v40;
    v127.m128i_i64[0] = (__int64)"\" is not a number";
    LOWORD(dest) = 259;
    LOWORD(v125) = 1283;
    v123.m128i_i64[0] = (__int64)"global symbol table offset of 64-bit members\"";
    v124.m128i_i64[1] = v39;
    sub_A41580((__m128i *)ptr, &v123, &v127, v41, v42, v43);
    sub_2158040(&v118, (__int64)&v123, v62, v63, v64, v65, (char)ptr[0]);
    *a2 = v118.m128i_i64[0];
    return;
  }
  v44 = ptr[0];
  v112 = 0;
  v113 = 0;
  v114 = 0;
  v115 = nullptr;
  sub_215DED0(&v118, a1);
  if ( v36 )
  {
    sub_21591F0(ptr, &v118, (__int64)v36, &v112, &v114, "32-bit");
    v59 = ptr[0];
    *a2 = (__int64)ptr[0];
    if ( v59 )
      return;
    *(_BYTE *)(a1 + 200) = 1;
    if ( !v44 )
    {
      ptr[0] = &v133;
      ptr[1] = (void *)0x100000000LL;
      sub_2156FD0((__int64 *)ptr, v112, v114);
      goto LABEL_51;
    }
    sub_21591F0(ptr, &v118, (__int64)v44, &v113, &v115, "64-bit");
    v102 = ptr[0];
    *a2 = (__int64)ptr[0];
    if ( v102 )
      return;
    *(_BYTE *)(a1 + 201) = 1;
    ptr[0] = &v133;
    ptr[1] = (void *)0x100000000LL;
    sub_2156FD0((__int64 *)ptr, v112, v114);
LABEL_58:
    sub_2156FD0((__int64 *)ptr, v113, (__int64)v115);
LABEL_51:
    if ( LODWORD(ptr[1]) == 1 )
    {
      v60 = _mm_loadu_si128((const __m128i *)((char *)ptr[0] + 40));
      *(__m128i *)(a1 + 48) = _mm_loadu_si128((const __m128i *)((char *)ptr[0] + 8));
      *(__m128i *)(a1 + 80) = v60;
    }
    else if ( LODWORD(ptr[1]) == 2 )
    {
      v128 = 0;
      v127.m128i_i64[0] = (__int64)&off_2BEBE68;
      v131 = a1 + 168;
      v127.m128i_i32[2] = 0;
      LOBYTE(v130) = 0;
      HIDWORD(v130) = 1;
      dest = nullptr;
      sub_227B8B0(&v127, 0, 0, 0);
      v78 = *((_QWORD *)ptr[0] + 7) + *(_QWORD *)ptr[0];
      v123.m128i_i64[0] = _byteswap_uint64(v78);
      sub_227BF10(&v127, &v123, 8);
      v79 = ptr[0];
      v80 = (char *)dest;
      v81 = *((_QWORD *)ptr[0] + 4);
      v82 = *((const void **)ptr[0] + 3);
      v83 = v128.m128i_i64[1] - (_QWORD)dest;
      if ( v81 > v128.m128i_i64[1] - (__int64)dest )
      {
        sub_227BF10(&v127, v82, *((_QWORD *)ptr[0] + 4));
        v80 = (char *)dest;
        v79 = ptr[0];
        v83 = v128.m128i_i64[1] - (_QWORD)dest;
      }
      else if ( v81 )
      {
        memcpy(dest, v82, *((_QWORD *)ptr[0] + 4));
        v79 = ptr[0];
        v80 = (char *)dest + v81;
        dest = v80;
        v83 = v128.m128i_i64[1] - (_QWORD)v80;
      }
      v84 = v79[11];
      v85 = (const void *)v79[10];
      if ( v83 < v84 )
      {
        sub_227BF10(&v127, v85, v79[11]);
        v80 = (char *)dest;
        v79 = ptr[0];
        v83 = v128.m128i_i64[1] - (_QWORD)dest;
      }
      else if ( v84 )
      {
        memcpy(v80, v85, v79[11]);
        v79 = ptr[0];
        v80 = (char *)dest + v84;
        dest = v80;
        v83 = v128.m128i_i64[1] - (_QWORD)v80;
      }
      v86 = v79[6];
      v87 = (const void *)v79[5];
      if ( v83 < v86 )
      {
        sub_227BF10(&v127, v87, v79[6]);
        v80 = (char *)dest;
        v79 = ptr[0];
        v83 = v128.m128i_i64[1] - (_QWORD)dest;
      }
      else if ( v86 )
      {
        memcpy(v80, v87, v79[6]);
        v79 = ptr[0];
        v80 = (char *)dest + v86;
        dest = v80;
        v83 = v128.m128i_i64[1] - (_QWORD)v80;
      }
      v88 = v79[13];
      v89 = (const void *)v79[12];
      if ( v83 < v88 )
      {
        sub_227BF10(&v127, v89, v79[13]);
        v79 = ptr[0];
      }
      else if ( v88 )
      {
        memcpy(v80, v89, v79[13]);
        dest = (char *)dest + v88;
        v79 = ptr[0];
      }
      v90 = *(_QWORD *)(a1 + 168);
      v91 = *(_QWORD *)(a1 + 176);
      *(_QWORD *)(a1 + 48) = v90;
      *(_QWORD *)(a1 + 56) = v91;
      *(_QWORD *)(a1 + 88) = v79[6] + v79[13];
      *(_QWORD *)(a1 + 80) = v90 + 8 * v78 + 8;
      v127.m128i_i64[0] = (__int64)&off_2BEBE68;
      sub_227B7A0(&v127);
    }
    goto LABEL_27;
  }
  if ( v44 )
  {
    sub_21591F0(ptr, &v118, (__int64)v44, &v113, &v115, "64-bit");
    v66 = ptr[0];
    *a2 = (__int64)ptr[0];
    if ( v66 )
      return;
    *(_BYTE *)(a1 + 201) = 1;
    ptr[0] = &v133;
    ptr[1] = (void *)0x100000000LL;
    goto LABEL_58;
  }
  ptr[0] = &v133;
  ptr[1] = (void *)0x100000000LL;
LABEL_27:
  sub_215B0B0((__int64)&v123, a1, a2, 0);
  if ( !*a2 )
  {
    sub_21573D0((__int64)&v127);
    v74 = v127.m128i_i64[1];
    if ( ((v130 | v126) & 0xFFFFFFFFFFFFFFF8LL) != 0 && v124.m128i_i64[0] != v128.m128i_i64[0] )
    {
      v75 = _mm_load_si128(&v124);
      *(_WORD *)(a1 + 112) = v125;
      *(__m128i *)(a1 + 96) = v75;
    }
    *a2 = 0;
    if ( v74 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
  }
  if ( v123.m128i_i64[1] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v123.m128i_i64[1] + 16LL))(v123.m128i_i64[1]);
  if ( ptr[0] != &v133 )
    free(ptr[0]);
}
