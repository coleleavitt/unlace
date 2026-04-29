__int64 __fastcall sub_2662B0(__int64 a1, __int64 a2, unsigned int a3, _QWORD **a4, __int64 a5)
{
  unsigned int v5; // r12d
  __int64 v7; // rcx
  __int64 v8; // r14
  int v11; // eax
  int v12; // r11d
  __int64 v13; // r10
  int v15; // r12d
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rdx
  unsigned int v19; // eax
  unsigned __int64 v20; // rbp
  char *v21; // rcx
  __int64 v22; // r13
  int v23; // eax
  const char *v24; // r13
  int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rdx
  unsigned int v28; // r8d
  __int64 v29; // rcx
  bool v30; // zf
  __int64 v31; // rdx
  unsigned int v32; // r15d
  int v33; // r12d
  int v34; // r12d
  int v35; // eax
  char *v36; // rsi
  __int64 v37; // r15
  char v38; // al
  char *v39; // rax
  char v40; // al
  int v41; // r12d
  int v42; // eax
  int v43; // r12d
  int v44; // ebp
  int v45; // eax
  char *v46; // rsi
  __int64 v47; // r13
  __int64 v48; // r14
  unsigned __int64 v49; // r15
  char *v50; // rsi
  char *v51; // r13
  __int64 v52; // rdx
  int v53; // eax
  char *v54; // r15
  __int64 v55; // rsi
  double v56; // xmm0_8
  unsigned __int8 v57; // bp
  _QWORD *v58; // rax
  __int64 v59; // r13
  const char *v60; // rsi
  char *v61; // rdi
  char *v62; // r8
  int v63; // eax
  const char *v64; // rdx
  __int64 v65; // rdx
  int v66; // eax
  int v67; // eax
  __int64 v68; // r15
  int v69; // eax
  __int64 v70; // r13
  __int64 v71; // r8
  unsigned __int64 v72; // r15
  char *v73; // rsi
  char *v74; // r13
  __int64 v75; // r13
  __int64 v76; // r14
  unsigned __int64 v77; // r15
  char *v78; // rsi
  char *v79; // r13
  __int64 v80; // rdx
  __int64 v81; // rcx
  const void *v82; // r15
  __int64 v83; // r13
  size_t v84; // rax
  size_t v85; // r14
  size_t v86; // r9
  char *v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // r13
  unsigned __int64 v90; // r15
  char *v91; // rsi
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // r13
  int v95; // eax
  __int64 item_end; // rax
  int v97; // edx
  __int64 v98; // rax
  char v99; // r15
  __int64 v100; // rdi
  char *v101; // rdx
  char *v102; // r13
  char tinfo_property; // al
  __int64 v104; // rdi
  __int64 v105; // r10
  _QWORD *v106; // r15
  __int64 ea_name; // rax
  char *v108; // rax
  __m128i v109; // xmm0
  __int64 v110; // rdi
  unsigned int v111; // r13d
  __int64 v112; // rax
  char v113; // al
  void (__fastcall *v114)(_QWORD **, _QWORD, void *, _QWORD); // r13
  __int64 tinfo_size; // rax
  char *v116; // rsi
  __int64 v117; // r13
  size_t v118; // r15
  __int64 v119; // r14
  size_t v120; // r15
  size_t v121; // r13
  size_t v122; // r14
  __int64 v123; // rdx
  __int64 v124; // rdi
  int v125; // eax
  char v126; // al
  char v127; // al
  char v128; // [rsp+7h] [rbp-A1h]
  char *v129; // [rsp+8h] [rbp-A0h]
  char *v130; // [rsp+8h] [rbp-A0h]
  __int64 v131; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v132; // [rsp+8h] [rbp-A0h]
  __int64 v133; // [rsp+8h] [rbp-A0h]
  __int64 v134; // [rsp+8h] [rbp-A0h]
  __int64 v135; // [rsp+8h] [rbp-A0h]
  __int64 v136; // [rsp+8h] [rbp-A0h]
  __int64 v137; // [rsp+8h] [rbp-A0h]
  __int64 v138; // [rsp+8h] [rbp-A0h]
  __int64 v139; // [rsp+10h] [rbp-98h]
  __int64 v140; // [rsp+10h] [rbp-98h]
  size_t v141; // [rsp+10h] [rbp-98h]
  __int64 v142; // [rsp+18h] [rbp-90h]
  __int64 v143; // [rsp+18h] [rbp-90h]
  char v144; // [rsp+27h] [rbp-81h] BYREF
  __int64 v145; // [rsp+28h] [rbp-80h] BYREF
  char *s; // [rsp+30h] [rbp-78h] BYREF
  __m128i v147; // [rsp+38h] [rbp-70h] BYREF
  char *s1; // [rsp+50h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+58h] [rbp-50h]
  unsigned __int64 v150; // [rsp+68h] [rbp-40h]

  v5 = a3;
  v7 = *(int *)(a1 + 8);
  v150 = __readfsqword(0x28u);
  if ( (unsigned int)v7 > 0x45 )
    return ((unsigned int (*)(_QWORD **, _QWORD, const char *, ...))**a4)(a4, 0, "?op%d", v7) + a3;
  v8 = a1;
  if ( *((_BYTE *)&off_4E0320 + 16 * v7 + 10) == 2 )
    sub_2655A0((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a4, a1);
  if ( *(_DWORD *)(a1 + 12) != -1 )
    sub_264E20(a1, a2, a4);
  v11 = sub_269460(a1, a2, 0, a4);
  if ( v11 )
  {
    v5 += v11;
    return v5;
  }
  v128 = sub_25F3C0(a1, *(_DWORD *)(a1 + 8), a5);
  if ( v128 )
  {
    ++v5;
    ((void (__fastcall *)(_QWORD **, _QWORD, void *))**a4)(a4, 0, &unk_41919E);
    v12 = *(_DWORD *)(a1 + 8);
  }
  v13 = *(_QWORD *)(a2 + 112);
  s = nullptr;
  v147 = 0;
  switch ( v12 )
  {
    case 0:
      goto LABEL_18;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
      v15 = sub_267810(*(_QWORD *)(a1 + 24), a2, v5, a4, a1, 0);
      v16 = sub_2622C0(
              a1,
              *(_DWORD *)(a1 + 8) != 1,
              (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4,
              1u);
      v17 = *(_QWORD *)(a1 + 32);
      v18 = (unsigned int)(v15 + v16);
      goto LABEL_13;
    case 16:
      v41 = sub_267810(*(_QWORD *)(a1 + 24), a2, v5, a4, a1, 0);
      v42 = sub_2622C0(a1, 1u, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 1u);
      v43 = sub_267810(*(_QWORD *)(a1 + 32), a2, (unsigned int)(v41 + v42), a4, a1, 0);
      ((void (__fastcall *)(_QWORD **, _QWORD, void *, void *))**a4)(a4, 0, &unk_4190BD, &unk_4191BB);
      v17 = *(_QWORD *)(a1 + 40);
      v18 = (unsigned int)(v43 + 3);
      goto LABEL_13;
    case 46:
    case 47:
    case 49:
    case 50:
    case 51:
    case 55:
    case 56:
      goto LABEL_31;
    case 48:
      v65 = *(_QWORD *)(a1 + 24);
      v66 = *(_DWORD *)(v65 + 8);
      if ( v66 != 61 )
        goto LABEL_96;
      v110 = *(_QWORD *)(v65 + 24);
      v137 = v13;
      v111 = *(char *)(v110 + 15);
      v112 = sub_255A30((__int64 *)v110, (_QWORD *)(v65 + 48));
      v113 = sub_2612E0((__int64 *)&s, v8 + 48, 0, v112, v111, 1);
      v13 = v137;
      if ( v113 )
        goto LABEL_46;
      v66 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 8LL);
LABEL_96:
      if ( v66 != 63 )
        goto LABEL_97;
      v135 = v13;
      tinfo_property = get_tinfo_property(*(_QWORD *)(v8 + 48), 2);
      v13 = v135;
      if ( (tinfo_property & 0xF) != 0xA )
        goto LABEL_97;
      v104 = *(_QWORD *)(v8 + 48);
      s1 = nullptr;
      s1 = (char *)get_tinfo_property(v104, 9);
      set_tinfo_property(&s1, 6, 192);
      v105 = v135;
      v106 = (_QWORD *)(a2 + 376);
      do
      {
        v136 = v105;
        if ( !(unsigned int)lexcompare_tinfo(s1, *v106, 0) )
        {
          clear_tinfo_t(&s1);
          v114 = (void (__fastcall *)(_QWORD **, _QWORD, void *, _QWORD))**a4;
          tinfo_size = get_tinfo_size(0, *(_QWORD *)(a2 + 376), 0);
          v114(a4, 0, &unk_4191B1, 9 * (unsigned int)(tinfo_size == 4) + 76);
          ++v5;
          goto LABEL_105;
        }
        ++v106;
        v105 = v136;
      }
      while ( v106 != (_QWORD *)(a2 + 408) );
      clear_tinfo_t(&s1);
      v13 = v136;
LABEL_97:
      v67 = *(_DWORD *)(*(_QWORD *)(v13 + 96) + 604LL);
      if ( (v67 & 2) == 0 )
        goto LABEL_105;
      if ( (v67 & 0x800) != 0 || (*(_BYTE *)(v8 + 48) & 0xF) != 0xA )
        goto LABEL_103;
      v68 = *(_QWORD *)(v8 + 24);
      v69 = *(_DWORD *)(v68 + 8);
      if ( v69 == 52 )
      {
        v68 = *(_QWORD *)(v68 + 24);
        v69 = *(_DWORD *)(v68 + 8);
      }
      if ( v69 != 64 || !(unsigned __int8)sub_261AA0(v13, *(_QWORD *)(v68 + 24), 1) )
        goto LABEL_103;
      v124 = *(_QWORD *)(v8 + 48);
      s1 = nullptr;
      s1 = (char *)get_tinfo_property(v124, 9);
      v125 = get_str_type(*(_QWORD *)(v68 + 24)) & 3;
      if ( v125 == 1 )
      {
        v127 = (unsigned __int8)s1 & 0x3F;
        if ( ((unsigned __int8)s1 & 0x3F) != 0x13 && v127 != 35 && v127 != 3 )
          goto LABEL_190;
      }
      else if ( v125 == 2
             || (v126 = (unsigned __int8)s1 & 0x3F, ((unsigned __int8)s1 & 0x3F) != 0x22) && v126 != 50 && v126 != 18 )
      {
LABEL_190:
        clear_tinfo_t(&s1);
LABEL_103:
        s1 = nullptr;
        *(_OWORD *)n = 0;
        sub_261FB0((__int64 *)&s1, v8 + 48);
        ((void (__fastcall *)(_QWORD **, _QWORD, void *, char *))**a4)(a4, 0, &unk_41916E, s1);
        v5 += tag_strlen(s1) + 2;
        if ( s1 )
        {
          n[0] = 0;
          qfree(s1);
        }
LABEL_105:
        v19 = sub_267810(*(_QWORD *)(v8 + 24), a2, v5, a4, v8, 0);
LABEL_14:
        v20 = v147.m128i_i64[0];
        v5 = v19;
        goto LABEL_15;
      }
      clear_tinfo_t(&s1);
      goto LABEL_105;
    case 52:
      v22 = *(_QWORD *)(a1 + 24);
      *(_OWORD *)n = 0;
      v23 = *(_DWORD *)(v22 + 8);
      if ( v23 == 58 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v22 + 24) + 8LL) != 64 )
          goto LABEL_30;
        v92 = *(_QWORD *)(v22 + 32);
        if ( *(_DWORD *)(v92 + 8) != 61 )
          goto LABEL_30;
        v131 = v13;
        v143 = sub_255A30(*(__int64 **)(v92 + 24), (_QWORD *)(v92 + 48));
        v13 = v131;
        if ( v143 > 0 )
        {
          v93 = *(_QWORD *)(v22 + 24);
          if ( (*(_BYTE *)(v93 + 56) & 0x10) != 0 )
          {
            v94 = *(_QWORD *)(v93 + 24);
            v95 = get_tinfo_property(*(_QWORD *)(v93 + 48), 14);
            v13 = v131;
            if ( v95 != -1 )
            {
              v140 = v131;
              v132 = v95 * v143;
              item_end = get_item_end(v94);
              v13 = v140;
              if ( v132 < item_end - v94 )
              {
                s1 = nullptr;
                v97 = sub_261BF0(v140, (__int64 *)&s1, v94, v132, nullptr, 5u);
                v13 = v140;
                v129 = s1;
                if ( v97 )
                {
LABEL_136:
                  v54 = v129;
                  s1 = v129;
                  v5 = sub_25F4D0(
                         v5,
                         (void (__fastcall ***)(_QWORD, _QWORD, void *, const char *))a4,
                         v97,
                         (__int64)&s1,
                         1);
                  if ( !v129 )
                    goto LABEL_46;
                  goto LABEL_137;
                }
                v22 = *(_QWORD *)(a1 + 24);
                if ( *(_DWORD *)(v22 + 8) != 64 )
                  goto LABEL_28;
LABEL_27:
                v142 = v13;
                v139 = *(_QWORD *)(v22 + 24);
                if ( !(unsigned __int8)sub_261870(v13, v139, nullptr, nullptr)
                  || (s1 = v129, v97 = sub_261BF0(v142, (__int64 *)&s1, v139, 0, nullptr, 5u), v129 = s1, !v97) )
                {
LABEL_28:
                  if ( v129 )
                    qfree(v129);
                  goto LABEL_30;
                }
                goto LABEL_136;
              }
            }
          }
        }
        v22 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)(v22 + 8) != 64 )
        {
LABEL_30:
          v12 = *(_DWORD *)(a1 + 8);
LABEL_31:
          v24 = (const char *)*(&off_4E0320 + 2 * v12);
          ((void (__fastcall *)(_QWORD **, _QWORD, void *, const char *))**a4)(a4, 0, &unk_4191B4, v24);
          v25 = strlen(v24);
          v17 = *(_QWORD *)(a1 + 24);
          v18 = v5 + v25;
LABEL_13:
          v19 = sub_267810(v17, a2, v18, a4, v8, 0);
          goto LABEL_14;
        }
      }
      else if ( v23 != 64 )
      {
        goto LABEL_31;
      }
      v129 = nullptr;
      goto LABEL_27;
    case 53:
    case 54:
      v33 = sub_267810(*(_QWORD *)(a1 + 24), a2, v5, a4, a1, 0);
      v20 = v147.m128i_i64[0];
      v5 = sub_2622C0(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0) + v33;
      goto LABEL_15;
    case 57:
      v44 = sub_267810(*(_QWORD *)(a1 + 24), a2, v5, a4, a1, 0);
      v45 = sub_2622C0(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0);
      v46 = s;
      v5 = sub_2676C0(*(_QWORD *)(a1 + 32), (unsigned int)(v44 + v45), a4);
      if ( v147.m128i_i64[1] <= 5uLL )
      {
        s = (char *)qvector_reserve(&s, s, 6, 1);
        v46 = s;
      }
      v147.m128i_i64[0] = 6;
      *(_DWORD *)v46 = 36243713;
      v46[4] = 9;
      s[5] = 0;
      v20 = v147.m128i_i64[0];
      goto LABEL_15;
    case 58:
      v34 = sub_267810(*(_QWORD *)(a1 + 24), a2, v5, a4, a1, 0);
      v35 = sub_2622C0(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0);
      v36 = s;
      v5 = sub_267810(*(_QWORD *)(a1 + 32), a2, (unsigned int)(v34 + v35), a4, 0, 0);
      if ( v147.m128i_i64[1] <= 5uLL )
      {
        s = (char *)qvector_reserve(&s, s, 6, 1);
        v36 = s;
      }
      v147.m128i_i64[0] = 6;
      *(_DWORD *)v36 = 39651585;
      v36[4] = 9;
      s[5] = 0;
      v20 = v147.m128i_i64[0];
      goto LABEL_15;
    case 59:
    case 60:
      v26 = sub_267810(*(_QWORD *)(a1 + 24), a2, v5, a4, a1, 0);
      v27 = *(_QWORD *)(a1 + 24);
      v5 = v26;
      if ( (unsigned int)(*(_DWORD *)(v27 + 8) - 59) > 1 )
        goto LABEL_38;
      v28 = 1;
      if ( a1 )
        v28 = (unsigned int)(*(_DWORD *)(a1 + 8) - 59) > 1;
      v29 = *(unsigned int *)(v27 + 32);
      v30 = (*(_BYTE *)(v27 + 57) & 1) == 0;
      v31 = *(_QWORD *)(v27 + 24);
      if ( !v30 )
        v28 |= 2u;
      if ( (unsigned __int8)sub_263470(nullptr, nullptr, (__int64 *)(v31 + 48), v29, v28) )
LABEL_38:
        v5 += sub_2622C0(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0);
      else
        sub_2655A0((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a4, a1);
      v32 = 1;
      if ( a5 )
        v32 = (unsigned int)(*(_DWORD *)(a5 + 8) - 59) > 1;
      if ( (*(_BYTE *)(a1 + 57) & 1) != 0 )
        v32 |= 2u;
      if ( !(unsigned __int8)sub_263470(
                               (__int64 *)&s,
                               &v144,
                               (__int64 *)(*(_QWORD *)(a1 + 24) + 48LL),
                               *(unsigned int *)(a1 + 32),
                               v32) )
      {
        if ( (v32 & 1) != 0 )
          sub_6B870((__int64 *)&s, (__int64)"%u", *(_DWORD *)(a1 + 32));
        goto LABEL_46;
      }
      v134 = 0;
      if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 59) <= 1 )
      {
        do
        {
          v98 = *(_QWORD *)(v8 + 24);
          s1 = nullptr;
          s1 = (char *)get_tinfo_property(*(_QWORD *)(v98 + 48), 10);
          v99 = get_tinfo_property(s1, 2);
          clear_tinfo_t(&s1);
          if ( (v99 & 0x3F) == 0xD )
            v134 += *(unsigned int *)(v8 + 32);
          v8 = *(_QWORD *)(v8 + 24);
        }
        while ( (unsigned int)(*(_DWORD *)(v8 + 8) - 59) <= 1 );
      }
      s1 = nullptr;
      *(_OWORD *)n = 0;
      v100 = *(_QWORD *)(v8 + 48);
      v145 = 0;
      v145 = get_tinfo_property(v100, 10);
      v101 = (char *)::s1;
      if ( v147.m128i_i64[0] )
        v101 = s;
      if ( !(unsigned __int8)name_requires_qualifier(&s1, v145, v101, 8 * v134) || n[0] <= 1 )
        goto LABEL_147;
      v116 = s;
      if ( v147.m128i_i64[0] )
      {
        v117 = v147.m128i_i64[0] + 2;
        v118 = v147.m128i_i64[0] - 1;
        v119 = v147.m128i_i64[0] + 1;
        if ( v147.m128i_i64[1] >= (unsigned __int64)(v147.m128i_i64[0] + 2) )
          goto LABEL_171;
      }
      else
      {
        if ( v147.m128i_i64[1] > 2uLL )
        {
          v147.m128i_i64[0] = 3;
          s[2] = 0;
          goto LABEL_173;
        }
        v118 = 0;
        v117 = 3;
        v119 = 2;
      }
      s = (char *)qvector_reserve(&s, s, v117, 1);
      v116 = s;
LABEL_171:
      v147.m128i_i64[0] = v117;
      v116[v119] = 0;
      if ( v118 )
        memmove(s + 2, s, v118);
LABEL_173:
      *(_WORD *)s = 14906;
      v120 = n[0];
      v121 = (v147.m128i_i64[0] == 0) + v147.m128i_i64[0] - 1;
      v122 = v121;
      if ( n[0] )
      {
        v120 = n[0] - 1;
        v122 = n[0] - 1 + v121;
      }
      v123 = v122 + 1;
      if ( v147.m128i_i64[1] < v122 + 1 )
      {
        s = (char *)qvector_reserve(&s, s, v123, 1);
        v123 = v122 + 1;
      }
      v147.m128i_i64[0] = v123;
      s[v122] = 0;
      if ( v121 )
        memmove(&s[v120], s, v121);
      memcpy(s, s1, v120);
LABEL_147:
      clear_tinfo_t(&v145);
      if ( s1 )
      {
        n[0] = 0;
        qfree(s1);
      }
      v102 = s;
      s = nullptr;
      v147 = 0;
      if ( *v102 )
        sub_25F780((__int64 *)&s, v144, v102);
      if ( v102 )
        qfree(v102);
      goto LABEL_46;
    case 61:
      v37 = *(_QWORD *)(a1 + 24);
      if ( !(unsigned __int8)sub_265AA0(v37, (__int64 *)&s, (_QWORD *)(a1 + 48), nullptr) )
        sub_261630(v37, (__int64 *)&s, (_QWORD *)(a1 + 48));
      if ( a5 && *(_DWORD *)(a5 + 8) == 47 && *(_BYTE *)tag_skipcodes(s) == 45 )
        ((void (__fastcall *)(_QWORD **, _QWORD, void *))**a4)(a4, 0, &unk_419206);
      v38 = is_enum(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), (unsigned int)*(char *)(*(_QWORD *)(a1 + 24) + 12LL));
      v20 = v147.m128i_i64[0];
      if ( !v38 )
        goto LABEL_15;
      if ( !v147.m128i_i64[0] )
        goto LABEL_18;
      v130 = s;
      v39 = strchr(s, 124);
      if ( !v39 || v39 - v130 == -1 )
        goto LABEL_15;
      v40 = sub_25F3C0(0, 19, a5);
      v21 = v130;
      v128 = v40;
      if ( v40 )
      {
        ((void (__fastcall *)(_QWORD **, _QWORD, void *))**a4)(a4, 0, &unk_41919E);
        ++v5;
        if ( v147.m128i_i64[0] > 1uLL )
          goto LABEL_16;
        goto LABEL_19;
      }
      if ( v20 != 1 )
        goto LABEL_17;
      goto LABEL_21;
    case 62:
      sub_11C210(*(_QWORD *)(a1 + 24), (__int64 *)&s);
      goto LABEL_46;
    case 63:
      v5 += sub_2622C0(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0);
      sub_32AA00(&s, 25, v80, v81);
      v82 = *(const void **)(a1 + 24);
      if ( v82 )
      {
        v83 = v147.m128i_i64[0];
        v84 = strlen(*(const char **)(a1 + 24));
        v85 = v84;
        v86 = v84;
        if ( v83 )
        {
          --v83;
          v86 = v84 + v83;
        }
        v87 = s;
        v88 = v86 + 1;
        if ( v147.m128i_i64[1] < v86 + 1 )
        {
          v141 = v86;
          v138 = v86 + 1;
          s = (char *)qvector_reserve(&s, s, v88, 1);
          v86 = v141;
          v87 = s;
          v88 = v138;
        }
        v147.m128i_i64[0] = v88;
        v87[v86] = 0;
        memmove(&s[v83], v82, v85);
      }
      v89 = v147.m128i_i64[0];
      v90 = 2;
      if ( v147.m128i_i64[0] )
      {
        v90 = v147.m128i_i64[0] + 1;
        v89 = v147.m128i_i64[0] - 1;
      }
      v91 = s;
      if ( v147.m128i_i64[1] < v90 )
      {
        s = (char *)qvector_reserve(&s, s, v90, 1);
        v91 = s;
      }
      v147.m128i_i64[0] = v90;
      v91[v89] = 34;
      s[v89 + 1] = 0;
      sub_32AAE0(&s, 25);
      goto LABEL_46;
    case 64:
      if ( (*(_BYTE *)(a1 + 56) & 0x10) == 0 || a5 && *(_DWORD *)(a5 + 8) == 58 )
        goto LABEL_79;
      v52 = *(_QWORD *)(a1 + 24);
      s1 = nullptr;
      *(_OWORD *)n = 0;
      v53 = sub_261BF0(v13, (__int64 *)&s1, v52, 0, nullptr, 5u);
      v54 = s1;
      if ( !v53 )
      {
        if ( s1 )
          qfree(s1);
LABEL_79:
        v55 = *(_QWORD *)(a1 + 24);
        s1 = nullptr;
        *(_OWORD *)n = 0;
        v56 = sub_3749C0(a2, v55);
        v57 = sub_263730((__int64 *)&s1, *(_QWORD *)(a1 + 24), a1 + 48, v56);
        v58 = a4[5];
        if ( !v58 )
          goto LABEL_87;
        v59 = v58[1];
        if ( *(char *)v59 >= 0 )
        {
LABEL_85:
          if ( sub_213140(v59, s1, 4) )
          {
            ((void (__fastcall *)(_QWORD **, _QWORD, void *))**a4)(a4, 0, &unk_4191A4);
            v5 += 2;
          }
LABEL_87:
          v62 = s1;
LABEL_88:
          ((void (__fastcall *)(_QWORD **, _QWORD, void *, _QWORD, char *, _QWORD))**a4)(
            a4,
            0,
            &unk_4191AB,
            v57,
            v62,
            v57);
          v63 = 0;
          if ( n[0] )
            v63 = LODWORD(n[0]) - 1;
          v5 += v63;
          if ( s1 )
          {
            n[0] = 0;
            qfree(s1);
          }
          goto LABEL_46;
        }
        if ( *(_QWORD *)(v59 + 416) )
        {
          v60 = *(const char **)(v59 + 408);
          v61 = (char *)::s1;
          if ( !n[0] )
            goto LABEL_84;
        }
        else
        {
          v60 = ::s1;
          if ( !n[0] )
            goto LABEL_159;
        }
        v61 = s1;
LABEL_84:
        if ( strcmp(v61, v60) )
          goto LABEL_85;
LABEL_159:
        ea_name = get_ea_name(&s, *(_QWORD *)(v8 + 24), 0, 0);
        v62 = s1;
        if ( ea_name > 0 )
        {
          v108 = s;
          v109 = _mm_loadu_si128(&v147);
          s = s1;
          v147.m128i_i64[0] = 0;
          s1 = v108;
          v62 = v108;
          v147.m128i_i64[1] = n[1];
          *(__m128i *)n = v109;
        }
        goto LABEL_88;
      }
      v5 = sub_25F4D0(v5, (void (__fastcall ***)(_QWORD, _QWORD, void *, const char *))a4, v53, (__int64)&s1, 1);
      if ( !v54 )
        goto LABEL_46;
LABEL_137:
      qfree(v54);
LABEL_46:
      v20 = v147.m128i_i64[0];
LABEL_15:
      if ( v20 > 1 )
      {
LABEL_16:
        v21 = s;
LABEL_17:
        ((void (__fastcall *)(_QWORD **, _QWORD, void *, char *))**a4)(a4, 0, &unk_4190BD, v21);
        v5 += tag_strlen(s);
      }
LABEL_18:
      if ( v128 )
      {
LABEL_19:
        ((void (__fastcall *)(_QWORD **, _QWORD, void *))**a4)(a4, 0, &unk_419175);
        ++v5;
      }
      v21 = s;
LABEL_21:
      if ( v21 )
      {
        v147.m128i_i64[0] = 0;
        qfree(v21);
      }
      return v5;
    case 65:
      sub_262430((int *)(a1 + 24), (__int64 *)&s, (*(_BYTE *)(a1 + 56) & 0x40) != 0);
      goto LABEL_46;
    case 66:
      v5 += sub_2622C0(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0);
      sub_2696A0(*(_QWORD *)(a1 + 24), &s, a4[5]);
      v47 = v147.m128i_i64[0];
      if ( v147.m128i_i64[0] )
      {
        v48 = v147.m128i_i64[0] + 6;
        v49 = v147.m128i_i64[0] + 7;
        v47 = v147.m128i_i64[0] - 1;
      }
      else
      {
        v49 = 8;
        v48 = 7;
      }
      v50 = s;
      if ( v147.m128i_i64[1] < v49 )
      {
        s = (char *)qvector_reserve(&s, s, v49, 1);
        v50 = s;
      }
      v147.m128i_i64[0] = v49;
      v50[v48] = 0;
      v51 = &s[v47];
      *(_DWORD *)v51 = 151061508;
      *(_DWORD *)(v51 + 3) = 151158025;
      v20 = v147.m128i_i64[0];
      goto LABEL_15;
    case 67:
      v70 = v147.m128i_i64[0];
      v5 += sub_2622C0(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0);
      if ( v147.m128i_i64[0] )
      {
        v71 = v147.m128i_i64[0] + 4;
        v72 = v147.m128i_i64[0] + 5;
        v70 = v147.m128i_i64[0] - 1;
      }
      else
      {
        v72 = 6;
        v71 = 5;
      }
      v73 = s;
      if ( v147.m128i_i64[1] < v72 )
      {
        v133 = v71;
        s = (char *)qvector_reserve(&s, s, v72, 1);
        v71 = v133;
        v73 = s;
      }
      v147.m128i_i64[0] = v72;
      v73[v71] = 0;
      v74 = &s[v70];
      *(_DWORD *)v74 = 36178177;
      v74[4] = 9;
      sub_267FE0(*(_QWORD *)(a1 + 24), &s, a4[5]);
      v75 = v147.m128i_i64[0];
      if ( v147.m128i_i64[0] )
      {
        v76 = v147.m128i_i64[0] + 4;
        v77 = v147.m128i_i64[0] + 5;
        v75 = v147.m128i_i64[0] - 1;
      }
      else
      {
        v77 = 6;
        v76 = 5;
      }
      v78 = s;
      if ( v147.m128i_i64[1] < v77 )
      {
        s = (char *)qvector_reserve(&s, s, v77, 1);
        v78 = s;
      }
      v147.m128i_i64[0] = v77;
      v78[v76] = 0;
      v79 = &s[v75];
      *(_DWORD *)v79 = 36243713;
      v79[4] = 9;
      v20 = v147.m128i_i64[0];
      goto LABEL_15;
    case 68:
      v64 = *(const char **)(a1 + 24);
      if ( !*v64 )
        goto LABEL_18;
      sub_25F780((__int64 *)&s, (*(_DWORD *)(a1 + 56) & 0x80) == 0 ? 8 : 18, v64);
      goto LABEL_46;
    case 69:
      sub_261FB0((__int64 *)&s, a1 + 48);
      goto LABEL_46;
    default:
      if ( !under_debugger )
        sub_383060(50124);
      BUG();
  }
}
