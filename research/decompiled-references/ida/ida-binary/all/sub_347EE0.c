void __fastcall sub_347EE0(__int64 a1, const char *a2)
{
  double v2; // xmm0_8
  int *v3; // rax
  const char *v5; // r15
  int *v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rdx
  const char *v9; // rsi
  int v10; // ebp
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r13
  bool v14; // r12
  __int64 fchunk; // rax
  __int64 v16; // r14
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rbp
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  const char *v25; // rdi
  const char *v26; // rcx
  const char *v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // r12
  __int64 v30; // rbp
  _QWORD *v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rdi
  const char *v34; // r12
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // r12
  __int64 v38; // rbp
  _QWORD *v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 not_tail; // r13
  int item_end; // eax
  const char *v44; // rdx
  __int16 v45; // r12
  const char *v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // r13
  __int64 v51; // r14
  __int64 *v52; // rbp
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v55; // rdi
  const char *v56; // r12
  __int64 v57; // rdi
  __int64 v58; // rdi
  __int64 v59; // r12
  __int64 v60; // rbp
  _QWORD *v61; // rbx
  __int64 v62; // rdi
  __int64 v63; // rdi
  const char *problem_name; // rcx
  const char *v65; // rdx
  char *v66; // rbp
  const char *v67; // r12
  size_t v68; // rax
  size_t v69; // r14
  size_t v70; // r13
  __int64 v71; // rax
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rdi
  __int64 v75; // r12
  __int64 v76; // rbp
  _QWORD *v77; // rbx
  __int64 v78; // rdi
  __int64 v79; // rdi
  __int64 v80; // r12
  __int64 v81; // rbp
  _QWORD *v82; // rbx
  __int64 v83; // rdi
  __int64 v84; // rdi
  __int64 v85; // r12
  __int64 v86; // rbp
  _QWORD *v87; // rbx
  __int64 v88; // rdi
  __int64 v89; // rdi
  int v90; // eax
  unsigned int v91; // ebp
  __int64 v92; // rax
  __int64 imm; // rax
  __int64 v94; // r13
  int v95; // eax
  __int64 v96; // rdx
  bool v97; // sf
  int v98; // eax
  const char *v99; // rbp
  __int64 v100; // rdi
  __int64 wide_byte; // rax
  __int64 v102; // rax
  __int64 v103; // rsi
  __int64 v104; // rax
  struct _Unwind_Exception *v105; // rbx
  bool v106; // [rsp+4h] [rbp-114h]
  int v107; // [rsp+4h] [rbp-114h]
  const char *v108; // [rsp+8h] [rbp-110h]
  __int64 v109; // [rsp+8h] [rbp-110h]
  const char *v110; // [rsp+10h] [rbp-108h] BYREF
  __int128 v111; // [rsp+18h] [rbp-100h]
  char *s; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v113; // [rsp+38h] [rbp-E0h]
  __int64 v114; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v115; // [rsp+58h] [rbp-C0h]
  __int64 v116; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v117; // [rsp+78h] [rbp-A0h] BYREF
  __int128 v118; // [rsp+80h] [rbp-98h]
  void *v119; // [rsp+90h] [rbp-88h] BYREF
  __int128 v120; // [rsp+98h] [rbp-80h]
  char v121; // [rsp+A8h] [rbp-70h]
  char v122[40]; // [rsp+B0h] [rbp-68h] BYREF
  unsigned __int64 v123; // [rsp+D8h] [rbp-40h]

  v3 = (int *)qword_8CEFF0;
  v123 = __readfsqword(0x28u);
  if ( !qword_8CEFF0 )
    goto LABEL_8;
  v5 = a2;
  a2 = (const char *)&dword_8CEFE8;
  v6 = &dword_8CEFE8;
  do
  {
    while ( 1 )
    {
      v7 = *((_QWORD *)v3 + 2);
      v8 = *((_QWORD *)v3 + 3);
      if ( *((_QWORD *)v3 + 4) < (unsigned __int64)v5 )
        break;
      v6 = v3;
      v3 = *((int **)v3 + 2);
      if ( !v7 )
        goto LABEL_6;
    }
    v3 = *((int **)v3 + 3);
  }
  while ( v8 );
LABEL_6:
  if ( v6 == &dword_8CEFE8 || (unsigned __int64)v5 < *((_QWORD *)v6 + 4) )
  {
LABEL_8:
    sub_2D1400(a1, a2);
    return;
  }
  sub_2D1400(a1, (const char *)&dword_8CEFE8);
  if ( dword_8BA8F4 )
  {
    v9 = v5;
    v10 = v6[10];
    v111 = 0;
    v110 = nullptr;
    get_nice_colored_name(&v110, v5, 2);
    switch ( QT::QComboBox::currentIndex(*((QT::QComboBox **)qword_8CF010 + 88)) )
    {
      case 0LL:
        v114 = 0;
        v115 = 0;
        get_entry_name(&v114, v10);
        v56 = (const char *)v114;
        v116 = 256;
        v117 = 0;
        v119 = nullptr;
        v121 = 1;
        v118 = 0;
        v120 = 0;
        if ( v114 )
        {
          v117 = qvector_reserve(&v117, 0, 1, 80);
          v57 = 80 * v118 + v117;
          *(_QWORD *)v57 = 0;
          *(_QWORD *)(v57 + 8) = 0;
          *(_QWORD *)(v57 + 32) = 0;
          *(_DWORD *)(v57 + 72) = 0;
          *(_OWORD *)(v57 + 16) = 0;
          *(_OWORD *)(v57 + 40) = 0;
          *(_OWORD *)(v57 + 56) = 0;
          *(_QWORD *)&v118 = v118 + 1;
          sub_1E88D0(v57, v56, 1);
        }
        v9 = v5;
        sub_2D4CE0(a1, v5, (int *)&v116, -1, 0);
        if ( v119 )
        {
          *(_QWORD *)&v120 = 0;
          qfree(v119, v5);
        }
        v58 = v117;
        if ( v117 )
        {
          v59 = v118;
          if ( (_QWORD)v118 )
          {
            v60 = 0;
            do
            {
              v61 = (_QWORD *)(v58 + 80 * v60);
              v62 = v61[4];
              if ( v62 )
              {
                v61[5] = 0;
                qfree(v62, v5);
              }
              v63 = v61[1];
              if ( v63 )
              {
                v61[2] = 0;
                qfree(v63, v5);
              }
              ++v60;
              v58 = v117;
            }
            while ( v59 != v60 );
          }
          *(_QWORD *)&v118 = 0;
          qfree(v58, v5);
        }
        v24 = v114;
        if ( !v114 )
          goto LABEL_37;
        goto LABEL_36;
      case 1LL:
        v116 = 256;
        v117 = 0;
        v119 = nullptr;
        v121 = 1;
        v118 = 0;
        v120 = 0;
        not_tail = (__int64)v5;
        if ( (get_flags_ex(v5, 4) & 0x400) == 0 )
          not_tail = prev_not_tail(v5);
        if ( not_tail == -1 )
        {
          v45 = 16;
        }
        else
        {
          item_end = get_item_end(not_tail);
          v114 = 0;
          v44 = &s1;
          v45 = item_end - not_tail;
          v115 = 0;
          if ( item_end - (int)not_tail > 16 )
            v45 = 16;
          if ( (_QWORD)xmmword_8D0AC8 )
            v44 = (const char *)qword_8D0AC0;
          v46 = v5;
          if ( (unsigned __int8)parse_binpat_str(&v114, v5, v44, (unsigned __int16)xmmword_8BCDC0, 0, 0) )
          {
            if ( (_QWORD)v115 != 1 )
            {
              if ( !under_debugger )
              {
                v105 = (struct _Unwind_Exception *)interr(40554, v5, v47, v48, 0.0);
                v2 = sub_345AF0(&v116, v5);
                if ( v114 )
                {
                  *(_QWORD *)&v115 = 0;
                  v2 = qfree(v114, v5, v2);
                }
                if ( v110 )
                {
                  *(_QWORD *)&v111 = 0;
                  qfree(v110, v5, v2);
                }
                _Unwind_Resume(v105);
              }
              BUG();
            }
            v49 = v114;
            if ( *(_QWORD *)(v114 + 32) )
            {
              v50 = 1;
              if ( !v114 )
                goto LABEL_142;
              goto LABEL_83;
            }
            v94 = *(_QWORD *)(v114 + 8);
            v95 = nbits(v5);
            v96 = (unsigned int)(v95 + 14);
            v97 = v95 + 7 < 0;
            v98 = v95 + 7;
            v99 = v5;
            if ( v97 )
              v98 = v96;
            v107 = 2 * (v98 >> 3);
            if ( v94 )
            {
              do
              {
                wide_byte = get_wide_byte(v99, v46, v96);
                qsnprintf(v122, 32, "%0*llX", v107, wide_byte);
                v102 = v118;
                v103 = v117;
                if ( *((_QWORD *)&v118 + 1) < (unsigned __int64)(v118 + 1) )
                {
                  v117 = qvector_reserve(&v117, v117, v118 + 1, 80);
                  v103 = v117;
                  v102 = v118;
                }
                v100 = v103 + 80 * v102;
                v46 = v122;
                *(_QWORD *)v100 = 0;
                *(_QWORD *)(v100 + 8) = 0;
                *(_QWORD *)(v100 + 32) = 0;
                *(_DWORD *)(v100 + 72) = 0;
                *(_OWORD *)(v100 + 16) = 0;
                *(_OWORD *)(v100 + 40) = 0;
                *(_OWORD *)(v100 + 56) = 0;
                *(_QWORD *)&v118 = v118 + 1;
                sub_1E88D0(v100, v122, 1);
                ++v99;
              }
              while ( &v5[v94] != v99 );
            }
          }
          v49 = v114;
          if ( v114 )
          {
            v50 = v115;
            if ( !(_QWORD)v115 )
            {
LABEL_91:
              *(_QWORD *)&v115 = 0;
              qfree(v49, v46);
              goto LABEL_142;
            }
LABEL_83:
            v51 = 0;
            do
            {
              v52 = (__int64 *)(v49 + 80 * v51);
              v53 = v52[6];
              if ( v53 )
              {
                v52[7] = 0;
                qfree(v53, v46);
              }
              v54 = v52[3];
              if ( v54 )
              {
                v52[4] = 0;
                qfree(v54, v46);
              }
              v55 = *v52;
              if ( *v52 )
              {
                v52[1] = 0;
                qfree(v55, v46);
              }
              ++v51;
              v49 = v114;
            }
            while ( v51 != v50 );
            goto LABEL_91;
          }
        }
LABEL_142:
        v9 = v5;
        sub_2D4CE0(a1, v5, (int *)&v116, -1, v45);
        if ( v119 )
        {
          *(_QWORD *)&v120 = 0;
          qfree(v119, v5);
        }
        v36 = v117;
        if ( v117 )
        {
          v85 = v118;
          if ( (_QWORD)v118 )
          {
            v86 = 0;
            do
            {
              v87 = (_QWORD *)(v36 + 80 * v86);
              v88 = v87[4];
              if ( v88 )
              {
                v87[5] = 0;
                qfree(v88, v5);
              }
              v89 = v87[1];
              if ( v89 )
              {
                v87[2] = 0;
                qfree(v89, v5);
              }
              ++v86;
              v36 = v117;
            }
            while ( v85 != v86 );
          }
LABEL_152:
          *(_QWORD *)&v118 = 0;
          qfree(v36, v9);
        }
LABEL_37:
        v25 = v110;
        if ( v110 )
        {
LABEL_38:
          *(_QWORD *)&v111 = 0;
          qfree(v25, v9);
        }
        return;
      case 2LL:
        v116 = 256;
        v117 = 0;
        v34 = (const char *)qword_8D0AA0;
        v121 = 1;
        v119 = nullptr;
        v118 = 0;
        v120 = 0;
        if ( qword_8D0AA0 )
        {
          v117 = qvector_reserve(&v117, 0, 1, 80);
          v35 = 80 * v118 + v117;
          *(_QWORD *)v35 = 0;
          *(_QWORD *)(v35 + 8) = 0;
          *(_QWORD *)(v35 + 32) = 0;
          *(_DWORD *)(v35 + 72) = 0;
          *(_OWORD *)(v35 + 16) = 0;
          *(_OWORD *)(v35 + 40) = 0;
          *(_OWORD *)(v35 + 56) = 0;
          *(_QWORD *)&v118 = v118 + 1;
          sub_1E88D0(v35, v34, 0);
        }
        v9 = v5;
        sub_2D4CE0(a1, v5, (int *)&v116, -1, 0);
        if ( v119 )
        {
          *(_QWORD *)&v120 = 0;
          qfree(v119, v5);
        }
        v36 = v117;
        if ( !v117 )
          goto LABEL_37;
        v37 = v118;
        if ( (_QWORD)v118 )
        {
          v38 = 0;
          do
          {
            v39 = (_QWORD *)(v36 + 80 * v38);
            v40 = v39[4];
            if ( v40 )
            {
              v39[5] = 0;
              qfree(v40, v5);
            }
            v41 = v39[1];
            if ( v41 )
            {
              v39[2] = 0;
              qfree(v41, v5);
            }
            ++v38;
            v36 = v117;
          }
          while ( v37 != v38 );
        }
        goto LABEL_152;
      case 3LL:
        v9 = v5;
        if ( !(unsigned __int8)xrefblk_t_first_from(&v114, v5, 1) )
        {
          v25 = v110;
          if ( !v110 )
            return;
          goto LABEL_38;
        }
        v116 = 256;
        v117 = 0;
        v119 = nullptr;
        v121 = 1;
        v118 = 0;
        v120 = 0;
        sub_2D2A20(&v117, (const char *)v115);
        v9 = v5;
        sub_2D5030(a1, v5, (const char *)v115, (int *)&v116);
        if ( v119 )
        {
          *(_QWORD *)&v120 = 0;
          qfree(v119, v5);
        }
        v36 = v117;
        if ( v117 )
        {
          v80 = v118;
          if ( (_QWORD)v118 )
          {
            v81 = 0;
            do
            {
              v82 = (_QWORD *)(v36 + 80 * v81);
              v83 = v82[4];
              if ( v83 )
              {
                v82[5] = 0;
                qfree(v83, v5);
              }
              v84 = v82[1];
              if ( v84 )
              {
                v82[2] = 0;
                qfree(v84, v5);
              }
              ++v81;
              v36 = v117;
            }
            while ( v80 != v81 );
          }
          goto LABEL_152;
        }
        goto LABEL_37;
      case 4LL:
      case 5LL:
        v12 = getseg(v5);
        v13 = v12;
        if ( v12 )
        {
          v14 = (*(_BYTE *)(v12 + 44) & 4) == 0;
          set_visible_segm(v12, 1);
        }
        else
        {
          v14 = 0;
        }
        fchunk = get_fchunk(v5);
        v16 = fchunk;
        if ( fchunk )
        {
          v106 = (*(_BYTE *)(fchunk + 16) & 0x40) == 0;
          set_visible_func(fchunk, 1);
        }
        else
        {
          v106 = 0;
        }
        v114 = 0;
        v115 = 0;
        if ( (~((unsigned __int16)get_flags_ex(v5, 4) >> 8) & 6) != 0 )
        {
          sub_169A50(&v114, (__int64)"%lld", *((_QWORD *)&xmmword_8BCDB0 + 1));
        }
        else
        {
          v90 = QT::QComboBox::currentIndex(*((QT::QComboBox **)qword_8CF010 + 88));
          v91 = BYTE2(xmmword_8BCDC0) | 1;
          if ( v90 == 4 )
          {
            v109 = *((_QWORD *)&xmmword_8BCDB0 + 1);
            v104 = prev_not_tail(v5);
            imm = find_imm(v104, v91, v109, &v116);
          }
          else
          {
            v92 = prev_not_tail(v5);
            imm = find_suspop(v92, v91, &v116);
          }
          if ( imm != -1
            && (unsigned __int8)print_operand(&v114, imm, (unsigned int)v116, 0, 0)
            && (unsigned __int64)v115 > 1 )
          {
            tag_remove(&v114, v114, 0);
          }
        }
        v116 = 256;
        v117 = 0;
        v121 = 1;
        v119 = nullptr;
        v108 = (const char *)v114;
        v118 = 0;
        v120 = 0;
        if ( v114 )
        {
          v117 = qvector_reserve(&v117, 0, 1, 80);
          v17 = 80 * v118 + v117;
          *(_QWORD *)v17 = 0;
          *(_QWORD *)(v17 + 8) = 0;
          *(_QWORD *)(v17 + 32) = 0;
          *(_DWORD *)(v17 + 72) = 0;
          *(_OWORD *)(v17 + 16) = 0;
          *(_OWORD *)(v17 + 40) = 0;
          *(_OWORD *)(v17 + 56) = 0;
          *(_QWORD *)&v118 = v118 + 1;
          sub_1E88D0(v17, v108, 1);
        }
        v9 = v5;
        sub_2D4CE0(a1, v5, (int *)&v116, -1, 0);
        if ( v16 )
        {
          v9 = (const char *)v106;
          set_visible_func(v16, v106);
        }
        if ( v13 )
        {
          v9 = (const char *)v14;
          set_visible_segm(v13, v14);
        }
        if ( v119 )
        {
          *(_QWORD *)&v120 = 0;
          qfree(v119, v9);
        }
        v18 = v117;
        if ( v117 )
        {
          v19 = v118;
          if ( (_QWORD)v118 )
          {
            v20 = 0;
            do
            {
              v21 = (_QWORD *)(v18 + 80 * v20);
              v22 = v21[4];
              if ( v22 )
              {
                v21[5] = 0;
                qfree(v22, v9);
              }
              v23 = v21[1];
              if ( v23 )
              {
                v21[2] = 0;
                qfree(v23, v9);
              }
              ++v20;
              v18 = v117;
            }
            while ( v19 != v20 );
          }
          *(_QWORD *)&v118 = 0;
          qfree(v18, v9);
        }
        v24 = v114;
        if ( v114 )
          goto LABEL_36;
        goto LABEL_37;
      case 6LL:
        v114 = 0;
        v115 = 0;
        if ( qword_8CC7C0 )
        {
          sub_1F97A0((__int64 *)qword_8CC7C0, (__int64)&v114, (unsigned int)v10, v11);
          v116 = 256;
          v117 = 0;
          v26 = (const char *)v114;
          v119 = nullptr;
          v121 = 1;
          v118 = 0;
          v120 = 0;
          if ( (_QWORD)v115 )
            goto LABEL_41;
        }
        else
        {
          v116 = 256;
          v117 = 0;
          v119 = nullptr;
          v121 = 1;
          v118 = 0;
          v120 = 0;
        }
        v26 = &s1;
LABEL_41:
        v27 = &s1;
        if ( (_QWORD)v111 )
          v27 = v110;
        sub_169A50((__int64 *)&v119, (__int64)"Marked position - %s: %s", v27, v26);
        v9 = v5;
        sub_2D4CE0(a1, v5, (int *)&v116, -1, 0);
        if ( v119 )
        {
          *(_QWORD *)&v120 = 0;
          qfree(v119, v5);
        }
        v28 = v117;
        if ( v117 )
        {
          v29 = v118;
          if ( (_QWORD)v118 )
          {
            v30 = 0;
            do
            {
              v31 = (_QWORD *)(v28 + 80 * v30);
              v32 = v31[4];
              if ( v32 )
              {
                v31[5] = 0;
                qfree(v32, v5);
              }
              v33 = v31[1];
              if ( v33 )
              {
                v31[2] = 0;
                qfree(v33, v5);
              }
              ++v30;
              v28 = v117;
            }
            while ( v29 != v30 );
          }
          *(_QWORD *)&v118 = 0;
          qfree(v28, v5);
        }
        v24 = v114;
        if ( v114 )
        {
LABEL_36:
          *(_QWORD *)&v115 = 0;
          qfree(v24, v9);
        }
        goto LABEL_37;
      case 7LL:
        s = nullptr;
        v113 = 0;
        problem_name = (const char *)get_problem_name((unsigned __int8)v10, 1);
        v65 = &s1;
        if ( (_QWORD)v111 )
          v65 = v110;
        sub_169A50((__int64 *)&s, (__int64)"Problem - %s: %s", v65, problem_name);
        v114 = 0;
        v115 = 0;
        generate_disasm_line(&v114, v5, 4);
        v66 = s;
        LODWORD(v116) = 256;
        v117 = 0;
        v67 = (const char *)v114;
        v119 = nullptr;
        v118 = 0;
        v120 = 0;
        if ( s )
        {
          v68 = strlen(s);
          v69 = v68 + 1;
          v70 = v68;
          v119 = (void *)qvector_reserve(&v119, 0, v68 + 1, 1);
          *(_QWORD *)&v120 = v69;
          memmove(v119, v66, v70);
          *((_BYTE *)v119 + v70) = 0;
        }
        v121 = 1;
        if ( v67 )
        {
          v71 = v118;
          v72 = v117;
          if ( *((_QWORD *)&v118 + 1) < (unsigned __int64)(v118 + 1) )
          {
            v117 = qvector_reserve(&v117, v117, v118 + 1, 80);
            v72 = v117;
            v71 = v118;
          }
          v73 = v72 + 80 * v71;
          *(_QWORD *)v73 = 0;
          *(_QWORD *)(v73 + 8) = 0;
          *(_QWORD *)(v73 + 32) = 0;
          *(_DWORD *)(v73 + 72) = 0;
          *(_OWORD *)(v73 + 16) = 0;
          *(_OWORD *)(v73 + 40) = 0;
          *(_OWORD *)(v73 + 56) = 0;
          *(_QWORD *)&v118 = v118 + 1;
          sub_1E88D0(v73, v67, 1);
        }
        v9 = v5;
        sub_2D4CE0(a1, v5, (int *)&v116, -1, 0);
        if ( v119 )
        {
          *(_QWORD *)&v120 = 0;
          qfree(v119, v5);
        }
        v74 = v117;
        if ( v117 )
        {
          v75 = v118;
          if ( (_QWORD)v118 )
          {
            v76 = 0;
            do
            {
              v77 = (_QWORD *)(v74 + 80 * v76);
              v78 = v77[4];
              if ( v78 )
              {
                v77[5] = 0;
                qfree(v78, v5);
              }
              v79 = v77[1];
              if ( v79 )
              {
                v77[2] = 0;
                qfree(v79, v5);
              }
              ++v76;
              v74 = v117;
            }
            while ( v75 != v76 );
          }
          *(_QWORD *)&v118 = 0;
          qfree(v74, v5);
        }
        if ( v114 )
        {
          *(_QWORD *)&v115 = 0;
          qfree(v114, v5);
        }
        if ( s )
        {
          *(_QWORD *)&v113 = 0;
          qfree(s, v5);
        }
        goto LABEL_37;
      default:
        goto LABEL_37;
    }
  }
}
