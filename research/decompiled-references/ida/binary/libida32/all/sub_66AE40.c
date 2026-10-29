__int64 __fastcall sub_66AE40(__m128i *a1, __int64 a2, unsigned int a3, int a4, __int64 a5, char a6)
{
  void *v8; // r14
  unsigned int *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ebp
  const char *v18; // r14
  __int64 v19; // rax
  unsigned int v20; // eax
  const char *i; // rdi
  int v22; // eax
  const char *v23; // rsi
  int name_ea; // eax
  char v25; // al
  char *v26; // rax
  int v27; // r13d
  char *v28; // r14
  unsigned int *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rax
  unsigned int v35; // ebp
  int v36; // eax
  __int64 v37; // r8
  __int64 v38; // r9
  const char *v39; // rcx
  unsigned int v40; // r14d
  int v41; // r8d
  int v42; // r9d
  const char *v43; // rcx
  unsigned int v45; // eax
  bool v46; // al
  char *v47; // rdi
  const char *v48; // rcx
  char *v49; // rdi
  unsigned int v50; // ebp
  unsigned int v51; // r14d
  unsigned int *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rdi
  char *v55; // rcx
  char *v56; // rax
  __int64 v57; // rdx
  char *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned int *v67; // rax
  int v68; // eax
  unsigned int *v69; // r8
  unsigned int *v70; // rax
  int v71; // eax
  __int64 v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r8
  __int64 v78; // r9
  const char *v79; // rcx
  unsigned int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // [rsp+0h] [rbp-638h]
  __int64 *p_s1; // [rsp+8h] [rbp-630h]
  __int64 v87; // [rsp+10h] [rbp-628h]
  int v88; // [rsp+18h] [rbp-620h]
  int v89; // [rsp+1Ch] [rbp-61Ch]
  __int64 v90; // [rsp+20h] [rbp-618h]
  void *v91; // [rsp+28h] [rbp-610h]
  __int64 v92; // [rsp+30h] [rbp-608h]
  int v93; // [rsp+38h] [rbp-600h]
  char v94; // [rsp+3Dh] [rbp-5FBh]
  bool v95; // [rsp+3Eh] [rbp-5FAh]
  bool v96; // [rsp+3Fh] [rbp-5F9h]
  _QWORD *v97; // [rsp+40h] [rbp-5F8h]
  unsigned int *v98; // [rsp+48h] [rbp-5F0h]
  unsigned int *v99; // [rsp+48h] [rbp-5F0h]
  const char *v100; // [rsp+50h] [rbp-5E8h]
  __int64 v101; // [rsp+58h] [rbp-5E0h]
  int v102; // [rsp+60h] [rbp-5D8h]
  int v103; // [rsp+68h] [rbp-5D0h]
  int v104; // [rsp+6Ch] [rbp-5CCh] BYREF
  void *ptr; // [rsp+70h] [rbp-5C8h] BYREF
  __int64 v106[2]; // [rsp+78h] [rbp-5C0h]
  int v107; // [rsp+88h] [rbp-5B0h]
  char *s1; // [rsp+90h] [rbp-5A8h] BYREF
  __int128 v109; // [rsp+98h] [rbp-5A0h]
  int v110; // [rsp+A8h] [rbp-590h]
  __m128i si128; // [rsp+ACh] [rbp-58Ch]
  __int64 v112; // [rsp+C0h] [rbp-578h]
  int v113; // [rsp+C8h] [rbp-570h]
  __int64 v114; // [rsp+D0h] [rbp-568h]
  int v115; // [rsp+D8h] [rbp-560h]
  __int64 v116; // [rsp+E0h] [rbp-558h]
  int v117; // [rsp+E8h] [rbp-550h]
  __int64 v118; // [rsp+F0h] [rbp-548h]
  int v119; // [rsp+F8h] [rbp-540h]
  __int64 v120; // [rsp+100h] [rbp-538h]
  _QWORD v121[3]; // [rsp+110h] [rbp-528h] BYREF
  char v122; // [rsp+128h] [rbp-510h] BYREF
  char v123; // [rsp+1E8h] [rbp-450h] BYREF
  char v124[1032]; // [rsp+1F0h] [rbp-448h] BYREF
  unsigned __int64 v125; // [rsp+5F8h] [rbp-40h]

  v8 = *(void **)(a5 + 16);
  v85 = a2;
  v89 = a4;
  v90 = a5;
  BYTE3(v92) = a6;
  v125 = __readfsqword(0x28u);
  v93 = (int)v8;
  v97 = *(_QWORD **)(a1->m128i_i64[0] + 1584);
  if ( (debug & 4) != 0 )
    sub_383DA0();
  v9 = sub_4EE820((__int64)a1[97].m128i_i64, a3);
  if ( !v9 || v9[1] < a3 + *(_DWORD *)v90 )
    return 1;
  v10 = *(_QWORD *)(v90 + 8);
  if ( (int)v8 > 0 )
  {
    v91 = v8;
    v11 = v10 + 32 * ((unsigned int)((_DWORD)v8 - 1) + 1LL);
    while ( 1 )
    {
      LODWORD(s1) = a3;
      if ( !*(_DWORD *)(v10 + 24) && v89 )
        LODWORD(s1) = a3 - v89;
      v12 = sub_375980(0x48u, v85, v10, &s1);
      v17 = (unsigned int)s1;
      if ( v12 != 1 )
        v17 = *(_DWORD *)(v10 + 24) + (_DWORD)s1;
      v18 = *(const char **)v10;
      v19 = *(_QWORD *)(v10 + 8);
      if ( *(_BYTE *)(*(_QWORD *)v10 + 1LL) )
        break;
      if ( v19 )
      {
        if ( *v18 != 46 && *v18 != 63 )
          goto LABEL_15;
      }
      else if ( byte_2CA12E1 != 46 && byte_2CA12E1 != 63 )
      {
        goto LABEL_23;
      }
LABEL_29:
      v10 += 32;
      if ( v10 == v11 )
      {
        LODWORD(v8) = (_DWORD)v91;
        v10 = *(_QWORD *)(v90 + 8);
        goto LABEL_31;
      }
    }
    if ( v19 )
    {
LABEL_15:
      if ( !strncmp(*(const char **)v10, "W?$Wcm", 6u) )
      {
        v20 = v18[6];
        for ( i = v18 + 6; v20 <= 0x7F; v20 = *++i )
        {
          if ( v20 - 48 > 9 )
            break;
        }
        if ( !strcmp(i, "$nx[]uc") )
          return 1;
      }
      if ( !strncmp(v18, "@$xp$", 5u) )
      {
        v22 = *(_DWORD *)(v10 + 24);
        if ( v22 != -4
          || (v45 = sub_3BA060(a1, v17),
              v13 = v17 + 4,
              v14 = v45,
              v22 = *(_DWORD *)(v10 + 24),
              (_DWORD)v13 == (_DWORD)v14) )
        {
          if ( !v22 )
          {
            v40 = v17 - 4;
            if ( v17 == (unsigned int)sub_3BA060(a1, v17 - 4) )
            {
              *(_DWORD *)(v10 + 24) -= 4;
              v17 -= 4;
              get_default_reftype(v40);
              op_offset(v40, 0);
            }
          }
        }
        else
        {
          v17 += 4;
          *(_DWORD *)(v10 + 24) = v22 + 4;
        }
      }
    }
LABEL_23:
    if ( (sub_614FB0(a1->m128i_i64[0], 10, v13, v14, v15, v16) & 0x2000000) == 0 )
    {
      v23 = haystack;
      if ( *(_QWORD *)(v10 + 8) )
        v23 = *(const char **)v10;
      name_ea = get_name_ea(0xFFFFFFFFLL, v23);
      if ( name_ea != -1 && v17 != name_ea )
      {
        if ( (debug & 4) != 0 )
          sub_383DA0();
        sub_4DB6D0(a1, 0xFu, v17, 0);
        if ( (sub_3B9AA0((__int64)a1, v17, 4) & 0x800) == 0 )
        {
          v43 = haystack;
          if ( *(_QWORD *)(v10 + 8) )
            v43 = *(const char **)v10;
          qsnprintf((int)v124, 1024, (int)"FLAIR COLLISION WITH: %s", (int)v43, v41, v42, v85);
          sub_3CB5F0(a1, v17, v124, 0);
        }
        return 1;
      }
    }
    if ( (sub_3B9AA0((__int64)a1, v17, 4) & 0x600) == 0x200 )
    {
      if ( (debug & 4) != 0 )
        sub_383DA0();
      return 1;
    }
    goto LABEL_29;
  }
LABEL_31:
  v25 = *(_BYTE *)(v10 + 28);
  v121[0] = -1;
  v121[2] = 0;
  v94 = v25 & 4;
  v121[1] = 0xFFFFFFFFLL;
  v26 = &v122;
  do
  {
    *(_WORD *)v26 = 0;
    v26 += 24;
    *((_WORD *)v26 - 11) = 0;
    *((_WORD *)v26 - 10) = 0;
    *((_DWORD *)v26 - 1) = 0;
    *((_WORD *)v26 - 9) = 0;
    *((_QWORD *)v26 - 2) = 0;
    *((_DWORD *)v26 - 2) = 0;
  }
  while ( &v123 != v26 );
  if ( (int)v8 <= 0 )
  {
    HIDWORD(v92) = 0;
LABEL_99:
    v50 = a3 + *(_DWORD *)v90;
    if ( a3 < v50 )
    {
      v51 = a3;
      do
      {
        v52 = sub_4EE820((__int64)&a1[101].m128i_i64[1], v51);
        if ( !v52 )
        {
          v80 = sub_4ECA50((__int64)&a1[101].m128i_i64[1], v51);
          v52 = sub_4EE890((__int64)&a1[101].m128i_i64[1], v80);
          if ( !v52 )
            break;
        }
        v53 = *((_QWORD *)v52 + 1);
        if ( (v53 & 0x8000) != 0 )
          break;
        v54 = *v52;
        if ( (unsigned int)v54 >= v50 )
          break;
        if ( (v53 & 4) == 0 )
        {
          set_abits(v54, 1024);
          *((_QWORD *)v52 + 1) |= 4uLL;
          if ( (sub_614FB0(a1->m128i_i64[0], 10, v81, v82, v83, v84) & 0x4000000) != 0 )
            *((_QWORD *)v52 + 1) |= 0x40uLL;
          sub_5ACD60((__int64)a1, v52, 0);
          mark_builtin_widgets(8, 0, 1);
        }
        v51 = v52[1];
      }
      while ( v51 < v50 );
      v50 = a3 + *(_DWORD *)v90;
    }
    sub_39F720((__int64)a1, a3, v50, 0x3Cu);
    if ( *v97 == v85 )
    {
      sub_669590(a1, SHIDWORD(v92));
      mark_builtin_widgets(256, 0, 1);
    }
    return 0;
  }
  HIDWORD(v92) = 0;
  LOBYTE(v91) = v89 != 0;
  v96 = (_DWORD)v8 == 1;
  v87 = v10 + 32 * ((unsigned int)((_DWORD)v8 - 1) + 1LL);
  v95 = (_DWORD)v8 == 1 && haystack == nullptr;
  p_s1 = (__int64 *)&s1;
  while ( 1 )
  {
    LODWORD(s1) = a3;
    if ( !*(_DWORD *)(v10 + 24) && (_BYTE)v91 )
      LODWORD(s1) = a3 - v89;
    v34 = sub_375980(0x48u, v85, v10, p_s1);
    v35 = (unsigned int)s1;
    if ( v34 != 1 )
      v35 = *(_DWORD *)(v10 + 24) + (_DWORD)s1;
    v36 = sub_3B9AA0((__int64)a1, v35, 4);
    ptr = nullptr;
    v27 = v36;
    *(_OWORD *)v106 = 0;
    if ( a3 == v35 && BYTE3(v92) )
    {
      sub_55E700(a1, v35, nullptr);
      v27 = sub_3B9AA0((__int64)a1, v35, 4);
      v28 = nullptr;
      goto LABEL_37;
    }
    if ( !*(_QWORD *)(v10 + 8) )
    {
      v46 = v95;
      v28 = (char *)haystack;
      goto LABEL_81;
    }
    v28 = *(char **)v10;
    if ( !*(_BYTE *)(*(_QWORD *)v10 + 1LL) )
      break;
LABEL_140:
    v46 = v96 && v28 == nullptr;
LABEL_81:
    if ( v46 )
      goto LABEL_110;
    if ( (v27 & 0xC000) != 0x4000 )
      goto LABEL_55;
    s1 = nullptr;
    v109 = 0;
    if ( v28 )
      goto LABEL_84;
LABEL_148:
    v28 = nullptr;
LABEL_88:
    if ( sub_668910(a3, (unsigned int *)v90) <= 15
      && ((*(_BYTE *)(v10 + 28) & 1) != 0 || (~(_WORD)v27 & 0x600) == 0 && (v27 & 0x10000000) != 0) )
    {
      if ( (debug & 4) != 0 )
        sub_383DA0();
      if ( s1 )
      {
        *(_QWORD *)&v109 = 0;
        qfree(s1);
      }
      goto LABEL_113;
    }
LABEL_91:
    if ( (get_aflags(v35) & 0x400) == 0 )
    {
      v48 = haystack;
      if ( *(_QWORD *)(v85 + 64) )
        v48 = *(const char **)(v85 + 56);
      sub_396090(0x54u, v35, v28, v48);
      ++HIDWORD(v92);
    }
    v49 = s1;
    if ( s1 )
    {
LABEL_96:
      *(_QWORD *)&v109 = 0;
      qfree(v49);
    }
LABEL_37:
    set_abits(v35, 1024);
    if ( (*(_BYTE *)(v10 + 28) & 1) == 0 )
    {
      if ( (v27 & 0x600) == 0 )
      {
        if ( (unsigned int)get_mangled_name_type(v28)
          && (!(unsigned int)decode_insn(v121, v35, v59, v60, v61, v62) || sub_375980(0x24u, v121, 0) <= 50)
          || (sub_55E700(a1, v35, nullptr), v27 = sub_3B9AA0((__int64)a1, v35, 4), (v27 & 0x600) == 0) )
        {
          if ( !(unsigned int)decode_insn(v121, v35, v63, v64, v65, v66) || sub_375980(0x24u, v121, 0) <= 50 )
            goto LABEL_129;
          sub_55E700(a1, v35, nullptr);
          v27 = sub_3B9AA0((__int64)a1, v35, 4);
        }
      }
      v29 = sub_5AFCE0((__int64)a1, v35);
      v33 = (__int64)v29;
      if ( v29 )
      {
        if ( *v29 != v35 )
          goto LABEL_41;
LABEL_131:
        *(_QWORD *)(v33 + 8) |= 4uLL;
        v99 = (unsigned int *)v33;
        v68 = sub_614FB0(a1->m128i_i64[0], 10, v30, v31, v33, v32);
        v69 = v99;
        if ( (v68 & 0x4000000) != 0 )
        {
          sub_5B08F0((__int64)a1, (__int64)v99, 0);
          v69 = v99;
        }
        if ( (*(_BYTE *)(v10 + 28) & 2) != 0 )
          *((_QWORD *)v69 + 1) |= 8uLL;
        v98 = v69;
        v70 = sub_4EE820((__int64)&a1[101].m128i_i64[1], v35);
        if ( v70 && *((char *)v70 + 9) >= 0 && !(unsigned __int8)sub_5AF5A0(a1->m128i_i64[0], v98, 0xFFFFFFFF, v28) )
          sub_5ACD60((__int64)a1, v98, 0);
        mark_builtin_widgets(8, 0, 1);
        goto LABEL_41;
      }
      if ( (~v27 & 0x600) != 0 || sub_375980(0x47u, v35, v28, v31, 0) )
      {
LABEL_41:
        if ( ptr )
        {
          v106[0] = 0;
          qfree(ptr);
        }
        goto LABEL_43;
      }
      s1 = (char *)(v35 | 0xFFFFFFFF00000000LL);
      LOWORD(v110) = 0;
      *(_QWORD *)&v109 = 512;
      *((_QWORD *)&v109 + 1) = 0xFFFFFFFFLL;
      v112 = 0;
      v113 = 0;
      v114 = 0;
      v115 = 0;
      v116 = 0;
      v117 = 0;
      v118 = 0;
      v119 = 0;
      v120 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23836A0);
      add_func_ex((int)p_s1);
LABEL_129:
      v67 = sub_5AFCE0((__int64)a1, v35);
      v33 = (__int64)v67;
      if ( v67 && *v67 == v35 )
        goto LABEL_131;
      goto LABEL_41;
    }
    if ( ptr )
    {
      v106[0] = 0;
      v10 += 32;
      qfree(ptr);
      if ( v10 == v87 )
        goto LABEL_99;
    }
    else
    {
LABEL_43:
      v10 += 32;
      if ( v10 == v87 )
        goto LABEL_99;
    }
  }
  if ( *v28 != 63 )
  {
    if ( *v28 == 46 )
    {
      v28 = (char *)(v85 + 22);
      if ( (v36 & 0xC000) != 0x4000 )
      {
LABEL_55:
        if ( (debug & 4) != 0 )
          sub_383DA0();
        sub_5FF360(a1->m128i_i64[0], v35, (__int64)v28);
        if ( !v94 )
        {
          if ( v28 )
          {
            sub_4C0DE0(
              a1->m128i_i64,
              v35,
              v28,
              0x1800u,
              v37,
              v38,
              v85,
              (int)p_s1,
              v87,
              v88,
              v90,
              v91,
              v92,
              v93,
              (int)v97,
              v98,
              (__int64)v100,
              v101,
              v102,
              v103,
              (int)ptr,
              v106[0],
              v106[1],
              v107,
              (__int64)s1,
              v109,
              SDWORD2(v109),
              v110,
              si128.m128i_i32[1],
              si128.m128i_i32[3],
              v112,
              v113,
              v114,
              v115,
              v116);
          }
          else
          {
            v71 = sub_79B3A0(&a1[160], a1->m128i_i64[0], 0, 65);
            v72 = a1->m128i_i64[0];
            v104 = v71 + 1;
            sub_79B440(&a1[160], v72, 0, &v104, 4, 65);
            sub_3573A0((char **)&ptr);
            v28 = (char *)ptr;
            if ( (sub_614FB0(a1->m128i_i64[0], 10, v73, v74, v75, v76) & 0x1000000) != 0 )
              append_cmt();
            sub_4C0DE0(
              a1->m128i_i64,
              v35,
              v28,
              0x1800u,
              v77,
              v78,
              v85,
              (int)p_s1,
              v87,
              v88,
              v90,
              v91,
              v92,
              v93,
              (int)v97,
              &a1[160],
              (__int64)v100,
              v101,
              v102,
              v103,
              (int)ptr,
              v106[0],
              v106[1],
              v107,
              (__int64)s1,
              v109,
              SDWORD2(v109),
              v110,
              si128.m128i_i32[1],
              si128.m128i_i32[3],
              v112,
              v113,
              v114,
              v115,
              v116);
            sub_4B7790(a1->m128i_i64, v35);
          }
          v39 = haystack;
          if ( *(_QWORD *)(v85 + 64) )
            v39 = *(const char **)(v85 + 56);
          sub_396090(0x54u, v35, v28, v39);
          ++HIDWORD(v92);
          goto LABEL_37;
        }
        if ( !v28 )
          goto LABEL_37;
        s1 = nullptr;
        v109 = 0;
        v98 = (unsigned int *)sub_3BE2C0((__int64)a1, p_s1, v35);
        if ( (__int64)v98 <= 0 )
          goto LABEL_157;
        v55 = (char *)haystack;
        if ( (_QWORD)v109 )
          v55 = s1;
        v101 = v109;
        v100 = v55;
        v56 = strstr(v55, v28);
        if ( !v56 || (v57 = v101, v56 - v100 == -1) )
        {
LABEL_157:
          append_cmt();
          v79 = haystack;
          if ( *(_QWORD *)(v85 + 64) )
            v79 = *(const char **)(v85 + 56);
          sub_396090(0x54u, v35, v28, v79);
          ++HIDWORD(v92);
          if ( (__int64)v98 > 0 )
          {
            v57 = v109;
            goto LABEL_121;
          }
        }
        else
        {
LABEL_121:
          if ( v57 )
          {
            v100 = "doubtful name";
            v98 = (unsigned int *)s1;
            v58 = strstr(s1, "doubtful name");
            if ( v58 )
            {
              v49 = (char *)v98;
              if ( v58 - (char *)v98 != -1 )
              {
LABEL_124:
                if ( v49 )
                  goto LABEL_96;
                goto LABEL_37;
              }
            }
          }
        }
        append_cmt();
        v49 = s1;
        goto LABEL_124;
      }
      s1 = nullptr;
      v109 = 0;
LABEL_84:
      if ( get_ea_name(p_s1, v35, 0, 0) <= 0 )
        goto LABEL_91;
      v47 = (char *)haystack;
      if ( (_QWORD)v109 )
        v47 = s1;
      if ( !strcmp(v47, v28) )
        goto LABEL_91;
      goto LABEL_88;
    }
    goto LABEL_140;
  }
  if ( v93 != 1 )
  {
LABEL_54:
    v28 = nullptr;
    if ( (v27 & 0xC000) != 0x4000 )
      goto LABEL_55;
    s1 = nullptr;
    v109 = 0;
    goto LABEL_148;
  }
LABEL_110:
  if ( sub_668910(a3, (unsigned int *)v90) > 7 )
    goto LABEL_54;
  if ( (debug & 4) != 0 )
    sub_383DA0();
LABEL_113:
  if ( ptr )
  {
    v106[0] = 0;
    qfree(ptr);
  }
  return 1;
}

