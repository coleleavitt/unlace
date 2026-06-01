__int64 __fastcall sub_2616E0(
        __int64 a1,
        const char *a2,
        int a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  const char *v13; // rbp
  const char *file_ext; // rax
  __m128 si128; // xmm0
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  char *v25; // r15
  __int64 v26; // rax
  char *v27; // rcx
  int v28; // r8d
  int v29; // r9d
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  __int64 v32; // rdx
  _QWORD *v33; // r12
  __int64 v34; // rdi
  const char **v35; // rbp
  const char *v36; // r15
  size_t v37; // r14
  __int64 v38; // rcx
  __int64 v39; // r8
  size_t v40; // r9
  unsigned __int64 v41; // r14
  __int64 v42; // r8
  size_t v43; // r10
  __int64 v44; // rsi
  __int64 v45; // r14
  const char *v46; // rdi
  double v47; // xmm4_8
  double v48; // xmm5_8
  __int64 v49; // rdi
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __m128 v55; // xmm4
  __m128 v56; // xmm5
  int v57; // r12d
  int v58; // ebp
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  const char *i; // rbp
  __int64 v66; // rdx
  size_t v67; // r8
  __int64 v68; // r9
  char *v69; // rsi
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  _BYTE *v73; // rsi
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __m128 v77; // xmm4
  __m128 v78; // xmm5
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __m128 v84; // xmm4
  __m128 v85; // xmm5
  const char *v86; // rdx
  char v87; // al
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __m128 v92; // xmm4
  __m128 v93; // xmm5
  char v94; // [rsp+0h] [rbp-1128h]
  const char **v95; // [rsp+0h] [rbp-1128h]
  bool v96; // [rsp+8h] [rbp-1120h]
  __int64 v97; // [rsp+8h] [rbp-1120h]
  __int64 v98; // [rsp+8h] [rbp-1120h]
  size_t v99; // [rsp+8h] [rbp-1120h]
  __int64 v100; // [rsp+10h] [rbp-1118h]
  size_t v101; // [rsp+10h] [rbp-1118h]
  size_t v102; // [rsp+10h] [rbp-1118h]
  __int64 v103; // [rsp+18h] [rbp-1110h]
  char v104[8]; // [rsp+20h] [rbp-1108h] BYREF
  char v105[8]; // [rsp+28h] [rbp-1100h] BYREF
  __int64 v106; // [rsp+30h] [rbp-10F8h] BYREF
  __int128 v107; // [rsp+38h] [rbp-10F0h]
  void *src; // [rsp+50h] [rbp-10D8h] BYREF
  __int128 v109; // [rsp+58h] [rbp-10D0h]
  char *v110; // [rsp+70h] [rbp-10B8h] BYREF
  __int128 v111; // [rsp+78h] [rbp-10B0h]
  __int64 v112; // [rsp+88h] [rbp-10A0h]
  __int128 v113; // [rsp+90h] [rbp-1098h]
  const char *v114; // [rsp+A0h] [rbp-1088h]
  __int128 v115; // [rsp+A8h] [rbp-1080h]
  char *v116; // [rsp+B8h] [rbp-1070h]
  __int128 v117; // [rsp+C0h] [rbp-1068h]
  unsigned __int64 v118; // [rsp+D0h] [rbp-1058h]
  unsigned int v119; // [rsp+D8h] [rbp-1050h]
  char v120; // [rsp+DCh] [rbp-104Ch]
  _BYTE v121[4104]; // [rsp+E0h] [rbp-1048h] BYREF
  unsigned __int64 v122; // [rsp+10E8h] [rbp-40h]

  v13 = a2;
  v122 = __readfsqword(0x28u);
  file_ext = (const char *)get_file_ext(a2);
  if ( file_ext && !strcmp(file_ext, "i64") )
  {
    v13 = v121;
    getinf_buf(97, v121, 4096);
  }
  si128 = 0;
  v17 = a1;
  v110 = nullptr;
  v112 = 0;
  v114 = nullptr;
  v116 = nullptr;
  v118 = 0xFFFFFFFF00000000LL;
  v119 = -1;
  v120 = 0;
  v111 = 0;
  v113 = 0;
  v115 = 0;
  v117 = 0;
  v20 = parse_dbgopts(&v110, a1);
  if ( (_BYTE)v20 )
  {
    v25 = (char *)&s1;
    if ( (_QWORD)v111 )
      v25 = v110;
    v95 = (const char **)v115;
    v96 = (unsigned __int64)v115 > 1;
    v17 = (unsigned __int64)v115 > 1;
    v26 = sub_22D9A0(v25, v17, (__m128)0LL, a6, a7, a8, *(double *)v23.m128_u64, *(double *)v24.m128_u64, a11, a12);
    v32 = (__int64)v95;
    v33 = (_QWORD *)v26;
    if ( v26 )
    {
      v34 = *(_QWORD *)(*(_QWORD *)(v26 + 8) + 24LL);
      if ( !v34 )
        goto LABEL_10;
    }
    else
    {
      if ( (unsigned __int64)v95 > 1
        || (v60 = sub_22D9A0(
                    v25,
                    1,
                    (__m128)0LL,
                    a6,
                    a7,
                    a8,
                    *(double *)v30.m128_u64,
                    *(double *)v31.m128_u64,
                    a11,
                    a12),
            (v33 = (_QWORD *)v60) == nullptr) )
      {
        v17 = (__int64)v25;
        if ( sub_22D9A0(v25, 0, (__m128)0LL, a6, a7, a8, *(double *)v30.m128_u64, *(double *)v31.m128_u64, a11, a12) )
          sub_169630(
            (int)"Could not find the remote debugger '%s'\n"
                 "If you wanted to use local debugger, please remove the hostname",
            (__int64)v25,
            v80,
            v81,
            v82,
            v83,
            (__m128)0LL,
            a6,
            a7,
            a8,
            v84,
            v85,
            a11,
            a12,
            (char)v95);
        else
          sub_169630(
            (int)"Could not find debugger '%s'",
            (__int64)v25,
            v80,
            v81,
            v82,
            v83,
            (__m128)0LL,
            a6,
            a7,
            a8,
            v84,
            v85,
            a11,
            a12,
            (char)v95);
        goto LABEL_75;
      }
      v64 = *(_QWORD *)(v60 + 8);
      if ( (*(_WORD *)(v64 + 32) & 0x2002) == 0 )
      {
        v17 = (__int64)v25;
        sub_169630(
          (int)"Could not find the local debugger '%s'\n"
               "If you wanted to use remote debugger, please specify the hostname",
          (__int64)v25,
          v32,
          v61,
          v62,
          v63,
          (__m128)0LL,
          a6,
          a7,
          a8,
          v30,
          v31,
          a11,
          a12,
          (char)v95);
        goto LABEL_75;
      }
      v34 = *(_QWORD *)(v64 + 24);
      v96 = v20;
      if ( !v34 )
      {
        if ( HIDWORD(v118) == -1 )
          sub_258520(v13, "Path", 0);
        goto LABEL_52;
      }
    }
    v17 = 2;
    if ( (unsigned __int8)set_processor_type(v34, 2, v32) )
    {
LABEL_10:
      if ( HIDWORD(v118) == -1 )
      {
        v17 = (__int64)"Path";
        sub_258520(v13, "Path", 0);
        if ( !v96 )
        {
LABEL_12:
          if ( a3 <= 1 )
          {
LABEL_34:
            v17 = 1;
            sub_258CA0(
              v33,
              1,
              v32,
              v27,
              v28,
              v29,
              si128,
              a6,
              a7,
              a8,
              *(double *)v30.m128_u64,
              *(double *)v31.m128_u64,
              a11,
              a12);
            if ( (unsigned __int64)v113 <= 1 )
            {
LABEL_35:
              byte_8CC5F5 = 1;
              if ( v120 )
              {
                v17 = v119;
                v49 = HIDWORD(v118);
                v50 = sub_2579E0(HIDWORD(v118), v119, si128, a6, a7, a8, v47, v48, a11, a12);
                switch ( v50 )
                {
                  case -3:
                    sub_169630(
                      (int)"ICON ERROR\nAUTOHIDE NONE\nSorry, the debugger does not support this command",
                      v17,
                      v51,
                      v52,
                      v53,
                      v54,
                      si128,
                      a6,
                      a7,
                      a8,
                      v55,
                      v56,
                      a11,
                      a12,
                      (char)v95);
                    break;
                  case -2:
                    v87 = is_miniidb(v49, v17, v51, v52, v53, v54);
                    v17 = (__int64)"The debugger could not find running processes corresponding to this database.";
                    if ( v87 )
                      v17 = (__int64)"The process list of the remote machine is empty.";
                    sub_169630(
                      (int)"AUTOHIDE NONE\n%s",
                      v17,
                      v88,
                      v89,
                      v90,
                      v91,
                      si128,
                      a6,
                      a7,
                      a8,
                      v92,
                      v93,
                      a11,
                      a12,
                      (char)v95);
                    break;
                  case -1:
                    sub_169630(
                      (int)"ICON ERROR\n"
                           "AUTOHIDE NONE\n"
                           "The debugger could not attach to the selected process.\n"
                           "This can perhaps indicate the process was just terminated, or that you don't have the necessary privileges.",
                      v17,
                      v51,
                      v52,
                      v53,
                      v54,
                      si128,
                      a6,
                      a7,
                      a8,
                      v55,
                      v56,
                      a11,
                      a12,
                      (char)v95);
                    break;
                  default:
                    v57 = 11;
                    v58 = 0;
                    if ( v50 == 1 )
                    {
                      do
                      {
LABEL_40:
                        v17 = 0xFFFFFFFFLL;
                        v59 = sub_252810(
                                v58,
                                0xFFFFFFFFLL,
                                v51,
                                v52,
                                si128,
                                a6,
                                a7,
                                a8,
                                *(double *)v55.m128_u64,
                                *(double *)v56.m128_u64,
                                a11,
                                a12);
                        v51 = HIDWORD(qword_8CC350) & 0xFFFFFFF;
                      }
                      while ( (_DWORD)v51 != v57 && dword_8CC5F0 > 0 && !qword_8CC108 && byte_8CC55A != 1 && v59 != -1 );
                      goto LABEL_45;
                    }
                    break;
                }
              }
              else if ( (unsigned int)sub_25FBA0(
                                        -1,
                                        (char *)v17,
                                        *(double *)si128.m128_u64,
                                        a6,
                                        a7,
                                        a8,
                                        v47,
                                        v48,
                                        a11,
                                        a12) == 1 )
              {
                v57 = 1;
                v58 = 256;
                goto LABEL_40;
              }
              sub_230E60();
              v20 = 0;
LABEL_45:
              byte_8CC5F5 = 0;
              goto LABEL_76;
            }
            v17 = (__int64)";";
            for ( i = (const char *)qstrtok(v112, ";", v104); ; i = (const char *)qstrtok(0, ";", v104) )
            {
              if ( !i )
                goto LABEL_35;
              v107 = 0;
              v106 = 0;
              src = nullptr;
              v109 = 0;
              qstr2user(&src, i, 0xFFFFFFFFLL);
              v69 = (char *)src;
              if ( (_QWORD)v109 )
              {
                v66 = v109 + 21;
                v67 = v109 - 1;
                v68 = v109 + 20;
                if ( *((_QWORD *)&v109 + 1) >= (unsigned __int64)(v109 + 21) )
                  goto LABEL_60;
              }
              else
              {
                if ( *((_QWORD *)&v109 + 1) > 0x15u )
                {
                  *(_QWORD *)&v109 = 22;
                  *((_BYTE *)src + 21) = 0;
                  goto LABEL_62;
                }
                v67 = 0;
                v66 = 22;
                v68 = 21;
              }
              v101 = v67;
              v98 = v68;
              v95 = (const char **)v66;
              src = (void *)qvector_reserve(&src, src, v66, 1);
              v67 = v101;
              v69 = (char *)src;
              v68 = v98;
              v66 = (__int64)v95;
LABEL_60:
              *(_QWORD *)&v109 = v66;
              v69[v68] = 0;
              v69 = (char *)src;
              if ( v67 )
              {
                v95 = (const char **)src;
                memmove((char *)src + 21, src, v67);
                v69 = (char *)v95;
              }
LABEL_62:
              si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCBE0);
              *(__m128 *)v69 = si128;
              *(_QWORD *)(v69 + 13) = 0x2228656E696C5F67LL;
              v70 = v109;
              if ( (_QWORD)v109 )
              {
                v71 = v109 + 1;
                v72 = v109 + 2;
                v73 = src;
                v70 = v109 - 1;
                if ( *((_QWORD *)&v109 + 1) >= (unsigned __int64)(v109 + 2) )
                  goto LABEL_64;
              }
              else
              {
                v73 = src;
                v72 = 3;
                v71 = 2;
                if ( *((_QWORD *)&v109 + 1) >= 3u )
                  goto LABEL_64;
              }
              v100 = v70;
              v97 = v71;
              v95 = (const char **)v72;
              src = (void *)qvector_reserve(&src, v73, v72, 1);
              v70 = v100;
              v73 = src;
              v71 = v97;
              v72 = (__int64)v95;
LABEL_64:
              *(_QWORD *)&v109 = v72;
              v73[v71] = 0;
              *(_WORD *)((char *)src + v70) = 10530;
              if ( !(unsigned __int8)eval_expr_long(v105, -1, src, &v106) )
              {
                v86 = &s1;
                if ( (_QWORD)v107 )
                  v86 = (const char *)v106;
                v17 = (__int64)i;
                sub_169630(
                  (int)"%s: %s",
                  (__int64)i,
                  (__int64)v86,
                  v74,
                  v75,
                  v76,
                  si128,
                  a6,
                  a7,
                  a8,
                  v77,
                  v78,
                  a11,
                  a12,
                  (char)v95);
                if ( src )
                {
                  *(_QWORD *)&v109 = 0;
                  *(double *)si128.m128_u64 = qfree(src, i);
                }
                if ( v106 )
                {
                  *(_QWORD *)&v107 = 0;
                  *(double *)si128.m128_u64 = qfree(v106, i, *(double *)si128.m128_u64);
                }
                goto LABEL_75;
              }
              if ( src )
              {
                *(_QWORD *)&v109 = 0;
                *(double *)si128.m128_u64 = qfree(src, (const char *)0xFFFFFFFFFFFFFFFFLL);
              }
              if ( v106 )
              {
                *(_QWORD *)&v107 = 0;
                *(double *)si128.m128_u64 = qfree(v106, (const char *)0xFFFFFFFFFFFFFFFFLL, *(double *)si128.m128_u64);
              }
              v17 = (__int64)";";
            }
          }
LABEL_13:
          si128 = 0;
          v35 = (const char **)(a4 + 8);
          v106 = 0;
          v107 = 0;
          v95 = (const char **)(a4 + 8LL * (unsigned int)(a3 - 2) + 16);
          while ( 1 )
          {
            v36 = *v35;
            a6 = 0;
            src = nullptr;
            v109 = 0;
            if ( v36 )
            {
              v37 = strlen(v36);
              v17 = (__int64)v36;
              src = (void *)qvector_reserve(&src, 0, v37 + 1, 1);
              *(_QWORD *)&v109 = v37 + 1;
              memmove(src, v36, v37);
              *((_BYTE *)src + v37) = 0;
            }
            quote_cmdline_arg(&src, v17, v32);
            v41 = v109;
            if ( (_QWORD)v109 )
            {
              v40 = v109 - 1;
              if ( (_QWORD)v109 != 1 )
              {
                v42 = v107;
                v43 = v109 - 1;
                if ( (_QWORD)v107 )
                {
                  v42 = v107 - 1;
                  v43 = v40 + v107 - 1;
                  v41 = v109 + v107 - 1;
                }
                v44 = v106;
                if ( *((_QWORD *)&v107 + 1) < v41 )
                {
                  v103 = v42;
                  v102 = v109 - 1;
                  v99 = v43;
                  v106 = qvector_reserve(&v106, v106, v41, 1);
                  v42 = v103;
                  v44 = v106;
                  v40 = v102;
                  v43 = v99;
                }
                *(_QWORD *)&v107 = v41;
                *(_BYTE *)(v44 + v43) = 0;
                v17 = (__int64)src;
                memcpy((void *)(v42 + v106), src, v40);
              }
            }
            if ( src )
            {
              *(_QWORD *)&v109 = 0;
              *(double *)si128.m128_u64 = qfree(src, (const char *)v17, v32, v38, v39, v40);
            }
            v45 = v107;
            if ( v95 == ++v35 )
              break;
            if ( (unsigned __int64)v107 > 1 )
            {
              v17 = v106;
              if ( *((_QWORD *)&v107 + 1) < (unsigned __int64)(v107 + 1) )
              {
                v106 = qvector_reserve(&v106, v106, v107 + 1, 1);
                v17 = v106;
              }
              *(_QWORD *)&v107 = v45 + 1;
              *(_BYTE *)(v17 + v45 - 1) = 32;
              *(_BYTE *)(v106 + v45) = 0;
            }
          }
          v46 = &s1;
          if ( (_QWORD)v107 )
            v46 = (const char *)v106;
          sub_258520(v46, "Parameters", 0);
          if ( v106 )
          {
            *(_QWORD *)&v107 = 0;
            *(double *)si128.m128_u64 = qfree(v106, "Parameters");
          }
          goto LABEL_34;
        }
      }
      else if ( !v96 )
      {
        goto LABEL_12;
      }
LABEL_52:
      v17 = (__int64)&s1;
      if ( (_QWORD)v117 )
        v17 = (__int64)v116;
      if ( (_QWORD)v115 )
        sub_258B10(v114, (const char *)v17, v118);
      else
        sub_258B10(&s1, (const char *)v17, v118);
      if ( a3 <= 1 )
        goto LABEL_34;
      goto LABEL_13;
    }
  }
  else
  {
    sub_169630(
      (int)"Invalid -r switch, could not parse",
      a1,
      v18,
      v19,
      v21,
      v22,
      (__m128)0LL,
      a6,
      a7,
      a8,
      v23,
      v24,
      a11,
      a12,
      v94);
  }
LABEL_75:
  v20 = 0;
LABEL_76:
  if ( v116 )
  {
    *(_QWORD *)&v117 = 0;
    *(double *)si128.m128_u64 = qfree(v116, (const char *)v17);
  }
  if ( v114 )
  {
    *(_QWORD *)&v115 = 0;
    *(double *)si128.m128_u64 = qfree(v114, (const char *)v17, *(double *)si128.m128_u64);
  }
  if ( v112 )
  {
    *(_QWORD *)&v113 = 0;
    *(double *)si128.m128_u64 = qfree(v112, (const char *)v17, *(double *)si128.m128_u64);
  }
  if ( v110 )
  {
    *(_QWORD *)&v111 = 0;
    qfree(v110, (const char *)v17, *(double *)si128.m128_u64);
  }
  return v20;
}
