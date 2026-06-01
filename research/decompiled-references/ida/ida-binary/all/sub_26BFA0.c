__int64 __fastcall sub_26BFA0(__int64 a1, const char *a2, __int64 a3, __int64 a4, __m128 a5)
{
  char *v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 view_options; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // r14
  __int64 v17; // r13
  char v18; // dl
  __int64 v19; // r15
  __int64 v20; // rbx
  char v21; // r12
  __int64 v22; // r13
  __int16 v23; // dx
  __int64 v24; // r15
  __int64 v25; // rbx
  __int16 v26; // r12
  __int64 v27; // r13
  char v28; // dl
  __int64 v29; // r15
  __int64 v30; // rbx
  char v31; // r12
  __int64 v32; // r13
  char v33; // dl
  __int64 v34; // r15
  __int64 v35; // rbx
  char v36; // r12
  __int64 v37; // r12
  char v38; // dl
  __int64 v39; // r13
  __int64 v40; // rbx
  char v41; // r15
  __int64 v42; // r12
  __int64 v43; // r13
  __int64 v44; // rbx
  unsigned int v45; // r15d
  __int64 v46; // r15
  __int64 v47; // r13
  __int64 v48; // r14
  _QWORD *v49; // r13
  const char *v50; // rsi
  _DWORD *v51; // rax
  __int64 v52; // r15
  __int64 v53; // rbx
  __int64 v54; // r13
  const char *v55; // rbp
  const char *v56; // rdi
  const char *v57; // rdx
  __int64 v58; // r14
  __int64 v59; // r15
  char v60; // r12
  __int64 v61; // rbx
  __int64 v62; // r14
  __int64 v63; // rax
  __int64 v64; // rbx
  QT::QObject *Child_helper; // rax
  __int64 v66; // r12
  __int64 v67; // rdx
  __int64 v68; // rcx
  _BOOL8 v69; // rdi
  __int64 v70; // rax
  __int64 i; // rbx
  _BYTE *v73; // r12
  __int64 v74; // rax
  __int64 v75; // rsi
  const char *v76; // r12
  __int64 v77; // r9
  size_t v78; // rax
  __int64 v79; // r15
  __int64 v80; // r12
  __int64 v81; // r14
  void *v82; // rax
  unsigned __int64 v83; // r15
  __int64 v84; // r12
  char *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  char *v88; // r10
  __int64 *v89; // r9
  char *v90; // r11
  __int64 v91; // rax
  struct _Unwind_Exception *v92; // rbx
  char **v93; // [rsp+8h] [rbp-C0h]
  _QWORD *v94; // [rsp+8h] [rbp-C0h]
  __int64 *v95; // [rsp+8h] [rbp-C0h]
  char *v96; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v98; // [rsp+27h] [rbp-A1h]
  __int64 v99; // [rsp+28h] [rbp-A0h]
  __int64 v100; // [rsp+28h] [rbp-A0h]
  __int64 v101; // [rsp+28h] [rbp-A0h]
  __int64 v102; // [rsp+28h] [rbp-A0h]
  __int64 v103; // [rsp+28h] [rbp-A0h]
  __int64 v104; // [rsp+28h] [rbp-A0h]
  unsigned __int8 v105; // [rsp+28h] [rbp-A0h]
  size_t v106; // [rsp+30h] [rbp-98h]
  __int64 *v107; // [rsp+30h] [rbp-98h]
  char *v108; // [rsp+30h] [rbp-98h]
  size_t n; // [rsp+38h] [rbp-90h]
  size_t nb; // [rsp+38h] [rbp-90h]
  size_t na; // [rsp+38h] [rbp-90h]
  char v112; // [rsp+4Fh] [rbp-79h] BYREF
  _QWORD v113[2]; // [rsp+50h] [rbp-78h] BYREF
  char v114; // [rsp+60h] [rbp-68h]
  _DWORD *v115; // [rsp+70h] [rbp-58h] BYREF
  __int128 v116; // [rsp+78h] [rbp-50h]
  unsigned __int64 v117; // [rsp+88h] [rbp-40h]

  v5 = (char *)&v115;
  v117 = __readfsqword(0x28u);
  v6 = a3;
  v114 = 0;
  v113[0] = 0;
  v113[1] = 0;
  LODWORD(v115) = 0;
  jvalue_t_copy(&v115, a2, a3, a4);
  v8 = (unsigned int)dword_8CC5F0;
  if ( dword_8CC5F0 )
  {
    a2 = (const char *)&v115;
    v5 = &v112;
    v112 = 0;
    sub_265C00(&v112, (int *)&v115, a5);
  }
  if ( (_DWORD)v115 != 3 )
  {
    v92 = (struct _Unwind_Exception *)sub_264AC0(*(double *)a5.m128_u64, (__int64)v5, (__int64)a2, v7, v8);
    if ( v115 )
    {
      *(_QWORD *)&v116 = 0;
      qfree(v115, a2);
    }
    jvalue_t_clear(v113);
    _Unwind_Resume(v92);
  }
  v9 = v116;
  *(_QWORD *)&v116 = 0;
  LODWORD(v115) = 0;
  sub_4B74C0(v113, v9);
  jvalue_t_clear(&v115);
  v98 = sub_4BA5C0(a1, v113, v6);
  if ( !v98 )
    goto LABEL_86;
  v93 = (char **)&unk_8603E0;
  do
  {
    v10 = *(unsigned __int8 *)v93;
    view_options = get_view_options(v10);
    v14 = sub_268430((__int64)v113, v10, v12, v13, *(double *)a5.m128_u64);
    v16 = v14;
    if ( v14 )
    {
      v17 = v14[1];
      v18 = *(_BYTE *)(view_options + 8);
      if ( v17 )
      {
        v99 = view_options;
        v19 = *v14;
        v20 = 0;
        v21 = v18;
        while ( !*(_QWORD *)(v19 + 8) || strcmp(*(const char **)v19, "indent") )
        {
          ++v20;
          v19 += 40;
          if ( v17 == v20 )
          {
            view_options = v99;
            v18 = v21;
            goto LABEL_14;
          }
        }
        view_options = v99;
        v18 = v21;
        if ( *(_DWORD *)(v19 + 24) == 1 )
          v18 = *(_BYTE *)(v19 + 32);
      }
LABEL_14:
      *(_BYTE *)(view_options + 8) = v18;
      v22 = v16[1];
      v23 = *(_WORD *)(view_options + 12);
      if ( v22 )
      {
        v100 = view_options;
        v24 = *v16;
        v25 = 0;
        v26 = v23;
        while ( !*(_QWORD *)(v24 + 8) || strcmp(*(const char **)v24, "opcode_bytes") )
        {
          ++v25;
          v24 += 40;
          if ( v22 == v25 )
          {
            view_options = v100;
            v23 = v26;
            goto LABEL_21;
          }
        }
        view_options = v100;
        v23 = v26;
        if ( *(_DWORD *)(v24 + 24) == 1 )
          v23 = *(_WORD *)(v24 + 32);
      }
LABEL_21:
      *(_WORD *)(view_options + 12) = v23;
      v27 = v16[1];
      v28 = *(_BYTE *)(view_options + 6);
      if ( v27 )
      {
        v101 = view_options;
        v29 = *v16;
        v30 = 0;
        v31 = v28;
        while ( !*(_QWORD *)(v29 + 8) || strcmp(*(const char **)v29, "show_line_prefix") )
        {
          ++v30;
          v29 += 40;
          if ( v27 == v30 )
          {
            view_options = v101;
            v28 = v31;
            goto LABEL_28;
          }
        }
        view_options = v101;
        v28 = v31;
        if ( *(_DWORD *)(v29 + 24) == 5 )
          v28 = *(_BYTE *)(v29 + 32);
      }
LABEL_28:
      *(_BYTE *)(view_options + 6) = v28;
      v32 = v16[1];
      v33 = *(_BYTE *)(view_options + 9);
      if ( v32 )
      {
        v102 = view_options;
        v34 = *v16;
        v35 = 0;
        v36 = v33;
        while ( !*(_QWORD *)(v34 + 8) || strcmp(*(const char **)v34, "limiter") )
        {
          ++v35;
          v34 += 40;
          if ( v32 == v35 )
          {
            view_options = v102;
            v33 = v36;
            goto LABEL_35;
          }
        }
        view_options = v102;
        v33 = v36;
        if ( *(_DWORD *)(v34 + 24) == 1 )
          v33 = *(_BYTE *)(v34 + 32);
      }
LABEL_35:
      *(_BYTE *)(view_options + 9) = v33;
      v37 = v16[1];
      v38 = *(_BYTE *)(view_options + 5);
      if ( v37 )
      {
        v103 = view_options;
        v39 = *v16;
        v40 = 0;
        v41 = v38;
        while ( !*(_QWORD *)(v39 + 8) || strcmp(*(const char **)v39, "xrefnum") )
        {
          ++v40;
          v39 += 40;
          if ( v37 == v40 )
          {
            view_options = v103;
            v38 = v41;
            goto LABEL_42;
          }
        }
        view_options = v103;
        v38 = v41;
        if ( *(_DWORD *)(v39 + 24) == 1 )
          v38 = *(_BYTE *)(v39 + 32);
      }
LABEL_42:
      *(_BYTE *)(view_options + 5) = v38;
      v42 = v16[1];
      v15 = *(unsigned __int8 *)(view_options + 7);
      if ( v42 )
      {
        v104 = view_options;
        v43 = *v16;
        v44 = 0;
        v45 = v15;
        while ( !*(_QWORD *)(v43 + 8) || strcmp(*(const char **)v43, "cmt_indent") )
        {
          ++v44;
          v43 += 40;
          if ( v42 == v44 )
          {
            view_options = v104;
            v15 = v45;
            goto LABEL_49;
          }
        }
        view_options = v104;
        v15 = v45;
        if ( *(_DWORD *)(v43 + 24) == 1 )
          v15 = *(unsigned __int8 *)(v43 + 32);
      }
LABEL_49:
      *(_BYTE *)(view_options + 7) = v15;
      v46 = v16[1];
      v10 = *(unsigned __int16 *)(view_options + 10);
      if ( v46 )
      {
        v47 = *v16;
        v48 = 0;
        while ( !*(_QWORD *)(v47 + 8) || strcmp(*(const char **)v47, "margin") )
        {
          ++v48;
          v47 += 40;
          if ( v46 == v48 )
          {
            v10 = (unsigned int)v10;
            *(_WORD *)(view_options + 10) = v10;
            goto LABEL_57;
          }
        }
        v10 = (unsigned int)v10;
        if ( *(_DWORD *)(v47 + 24) == 1 )
          v10 = *(unsigned __int16 *)(v47 + 32);
      }
      *(_WORD *)(view_options + 10) = v10;
    }
LABEL_57:
    v93 += 2;
  }
  while ( off_860400 != v93 );
  v49 = (_QWORD *)sub_268380((__int64)v113, v10, v15, (__int64)off_860400, *(double *)a5.m128_u64);
  if ( !v49 )
    goto LABEL_80;
  v105 = getinf_flag(48, 4);
  if ( byte_8CC6B8 )
    goto LABEL_60;
  if ( dword_8CD7F4 > 0 )
  {
    for ( i = 0; dword_8CD7F4 > (int)i; ++i )
    {
      while ( 1 )
      {
        v73 = *(_BYTE **)(qword_8CD7F8 + 8 * i);
        if ( *v73 == 45 && (v73[1] & 0xDF) == 0x44 )
          break;
LABEL_96:
        if ( dword_8CD7F4 <= (int)++i )
          goto LABEL_103;
      }
      v74 = xmmword_8CC6C8;
      v75 = qword_8CC6C0;
      if ( *((_QWORD *)&xmmword_8CC6C8 + 1) < (unsigned __int64)(xmmword_8CC6C8 + 1) )
      {
        qword_8CC6C0 = qvector_reserve(&qword_8CC6C0, qword_8CC6C0, xmmword_8CC6C8 + 1, 24);
        v75 = qword_8CC6C0;
        v74 = xmmword_8CC6C8;
      }
      v76 = v73 + 2;
      v77 = v75 + 24 * v74;
      *(_QWORD *)v77 = 0;
      *(_OWORD *)(v77 + 8) = 0;
      v95 = (__int64 *)v77;
      *(_QWORD *)&xmmword_8CC6C8 = xmmword_8CC6C8 + 1;
      v78 = strlen(v76);
      if ( v78 )
      {
        n = v78;
        v106 = v78 + 1;
        v82 = (void *)qvector_reserve(v95, *v95, v78 + 1, 1);
        v95[1] = v106;
        *v95 = (__int64)v82;
        memmove(v82, v76, n);
        *(_BYTE *)(*v95 + n) = 0;
        v83 = v95[1];
        if ( v83 )
        {
          v84 = *v95;
          v85 = strchr((const char *)*v95, 61);
          if ( v85 )
          {
            v88 = &v85[-v84];
            if ( &v85[-v84] != (char *)-1LL )
            {
              v89 = v95;
              if ( v88 )
              {
                v90 = v88 + 1;
                if ( v83 < (unsigned __int64)(v88 + 1) )
                {
                  if ( v95[2] < (unsigned __int64)v90 )
                  {
                    na = (size_t)&v85[-v84];
                    v108 = v88 + 1;
                    v91 = qvector_reserve(v95, v84, v88 + 1, 1);
                    v89 = v95;
                    v88 = (char *)na;
                    v84 = v91;
                    v90 = v108;
                    *v95 = v91;
                    v83 = v95[1];
                  }
                  v107 = v89;
                  v96 = v90;
                  nb = (size_t)v88;
                  memset((void *)(v84 + v83), 0, (size_t)&v90[-v83]);
                  v107[1] = (__int64)v96;
                  v85 = (char *)(*v107 + nb);
                }
                else if ( (char *)v83 != v88 + 1 )
                {
                  v95[1] = (__int64)v90;
                }
                *v85 = 0;
              }
              else if ( v84 )
              {
                v95[1] = 0;
                qfree(v84, (_BYTE *)&word_3C + 1, v86, v87, &qword_8CD7F8);
                *v95 = 0;
                v95[2] = 0;
              }
            }
          }
        }
        goto LABEL_96;
      }
      v95[1] = 0;
    }
  }
LABEL_103:
  byte_8CC6B8 = 1;
LABEL_60:
  a5.m128_u64[0] = 0;
  v50 = nullptr;
  v116 = 0;
  v115 = nullptr;
  v51 = (_DWORD *)qvector_reserve(&v115, 0, 8, 1);
  v115 = v51;
  *(_QWORD *)&v116 = 8;
  *v51 = 1464813651;
  *(_DWORD *)((char *)v51 + 3) = 1347641175;
  *((_BYTE *)v115 + 7) = 0;
  v52 = v116;
  v53 = qword_8CC6C0 + 24 * xmmword_8CC6C8;
  if ( qword_8CC6C0 == v53 )
  {
    if ( v115 )
    {
      *(_QWORD *)&v116 = 0;
      *(double *)a5.m128_u64 = qfree(v115, nullptr);
    }
LABEL_105:
    v79 = v49[1];
    if ( v79 )
    {
      v80 = *v49;
      v81 = 0;
      while ( !*(_QWORD *)(v80 + 8) || strcmp(*(const char **)v80, "show_stack") )
      {
        ++v81;
        v80 += 40;
        if ( v79 == v81 )
          goto LABEL_112;
      }
      if ( *(_DWORD *)(v80 + 24) == 5 )
        v105 = *(_BYTE *)(v80 + 32);
    }
LABEL_112:
    setinf_flag(48, 4, v105);
    goto LABEL_72;
  }
  v94 = v49;
  v54 = qword_8CC6C0;
  v55 = (const char *)v115;
  while ( 1 )
  {
    if ( *(_QWORD *)(v54 + 8) )
    {
      v50 = *(const char **)v54;
      v56 = &s1;
      if ( !v52 )
        goto LABEL_63;
      goto LABEL_68;
    }
    if ( !v52 )
      break;
    v50 = &s1;
LABEL_68:
    v56 = v55;
LABEL_63:
    if ( !strcmp(v56, v50) )
      break;
    v54 += 24;
    if ( v53 == v54 )
    {
      v57 = v55;
      v58 = v54;
      v49 = v94;
      if ( !v55 )
        goto LABEL_105;
      goto LABEL_70;
    }
  }
  v57 = v55;
  v58 = v54;
  v49 = v94;
  if ( !v55 )
    goto LABEL_71;
LABEL_70:
  *(_QWORD *)&v116 = 0;
  *(double *)a5.m128_u64 = qfree(v57, v50);
LABEL_71:
  if ( v53 == v58 )
    goto LABEL_105;
LABEL_72:
  v59 = v49[1];
  v60 = byte_8BA8DC;
  if ( v59 )
  {
    v61 = *v49;
    v62 = 0;
    while ( !*(_QWORD *)(v61 + 8) || strcmp(*(const char **)v61, "show_graph_overview") )
    {
      ++v62;
      v61 += 40;
      if ( v59 == v62 )
        goto LABEL_79;
    }
    if ( *(_DWORD *)(v61 + 24) == 5 )
      v60 = *(_BYTE *)(v61 + 32);
  }
LABEL_79:
  byte_8BA8DC = v60;
LABEL_80:
  v63 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 224LL))(a1);
  v64 = v63;
  if ( v63 )
  {
    Child_helper = (QT::QObject *)QT::qt_qFindChild_helper(v63, 0, 0, &off_87CC60, 1);
    v66 = (__int64)Child_helper;
    if ( Child_helper )
    {
      sub_2A7270(Child_helper);
      v69 = 1;
      if ( (unsigned int)sub_1EB590(v66, 0, v67, v68, *(double *)a5.m128_u64) == 1 )
        v69 = *(_QWORD *)(v66 + 888) == 0;
      v70 = get_view_options(v69);
      dto_copy_to_inf(v70);
      qword_8CD7E8 = v66;
      qword_8CC7C0 = v66;
    }
    else
    {
      sub_310F00(v64, 0);
    }
    sub_313F40(v64);
  }
LABEL_86:
  jvalue_t_clear(v113);
  return v98;
}
