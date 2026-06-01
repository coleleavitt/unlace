__int64 __fastcall sub_25FBA0(
        __int64 a1,
        char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  double v11; // xmm4_8
  double v12; // xmm5_8
  __m128 si128; // xmm0
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __int64 *v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  char *v28; // rbx
  int v29; // r15d
  int v30; // ecx
  int v31; // eax
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  double v36; // xmm4_8
  double v37; // xmm5_8
  char *v38; // r9
  _BYTE *v39; // rcx
  const char *v40; // rdi
  int v41; // r13d
  __int64 v42; // rax
  __int64 v43; // rax
  const char *v44; // r13
  unsigned int v45; // eax
  int v46; // eax
  bool v47; // zf
  const char *v48; // rax
  const char *v49; // r15
  const char *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __m128 v55; // xmm4
  __m128 v56; // xmm5
  __int64 v57; // r12
  __int64 v58; // rbx
  __int64 *v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __m128 v64; // xmm4
  __m128 v65; // xmm5
  __int64 v66; // r13
  unsigned int v67; // r15d
  __int64 v68; // rax
  __int64 v69; // r14
  __int64 v70; // rax
  char *v71; // rax
  int *v72; // r15
  char *v73; // rdx
  char *v74; // r13
  const char *v75; // rax
  int *v76; // r12
  char *v77; // r14
  int *v78; // rbx
  const char *v79; // rsi
  const char *v80; // rdi
  int v81; // eax
  int *v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rdx
  char **v85; // rsi
  __int64 v86; // rbx
  int v87; // eax
  const char *v88; // rdi
  double v89; // xmm4_8
  double v90; // xmm5_8
  double v91; // xmm4_8
  double v92; // xmm5_8
  __int64 v93; // rcx
  int v94; // r8d
  int v95; // r9d
  __int64 v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // rbx
  __int64 v99; // r14
  __int64 *v100; // rax
  __int64 v101; // rdi
  const char *v102; // rdx
  const char *v103; // rsi
  size_t v104; // rax
  size_t v105; // r13
  __int64 v106; // rax
  char v107; // al
  unsigned int v108; // ecx
  __int64 v109; // rax
  __int64 v110; // r8
  __int64 v111; // r9
  __m128 v112; // xmm4
  __m128 v113; // xmm5
  char **v114; // r14
  size_t v115; // rax
  size_t v116; // rbx
  void *v117; // rdi
  size_t v118; // r14
  int v119; // ecx
  int *v120; // r14
  __int64 v121; // rax
  int v122; // ecx
  char *v123; // rdi
  char *v124; // r15
  __int64 v125; // rax
  char v126; // [rsp+0h] [rbp-1940h]
  unsigned int v128; // [rsp+14h] [rbp-192Ch]
  __int64 *v129; // [rsp+20h] [rbp-1920h]
  char *v130; // [rsp+28h] [rbp-1918h]
  unsigned int v131; // [rsp+30h] [rbp-1910h]
  int v132; // [rsp+34h] [rbp-190Ch]
  const char *v133; // [rsp+38h] [rbp-1908h]
  char *s; // [rsp+40h] [rbp-1900h]
  const char *v135; // [rsp+48h] [rbp-18F8h]
  const char *v136; // [rsp+50h] [rbp-18F0h]
  unsigned int v137; // [rsp+50h] [rbp-18F0h]
  char *v138; // [rsp+50h] [rbp-18F0h]
  int v139; // [rsp+50h] [rbp-18F0h]
  int v140; // [rsp+50h] [rbp-18F0h]
  char **p_s2; // [rsp+68h] [rbp-18D8h] BYREF
  char *v142; // [rsp+70h] [rbp-18D0h] BYREF
  __int128 v143; // [rsp+78h] [rbp-18C8h]
  const char *v144; // [rsp+90h] [rbp-18B0h] BYREF
  __int128 v145; // [rsp+98h] [rbp-18A8h]
  __int64 v146; // [rsp+B0h] [rbp-1890h] BYREF
  __int128 v147; // [rsp+B8h] [rbp-1888h]
  char v148; // [rsp+C8h] [rbp-1878h]
  char *s2; // [rsp+D0h] [rbp-1870h] BYREF
  char *v150[3]; // [rsp+D8h] [rbp-1868h] BYREF
  int v151; // [rsp+F0h] [rbp-1850h]
  _BYTE v152[1024]; // [rsp+100h] [rbp-1840h] BYREF
  _BYTE v153[1024]; // [rsp+500h] [rbp-1440h] BYREF
  _BYTE v154[4104]; // [rsp+900h] [rbp-1040h] BYREF
  unsigned __int64 v155; // [rsp+1908h] [rbp-38h]

  v155 = __readfsqword(0x28u);
  if ( !dbg )
    return (unsigned int)-1;
  v128 = dword_8CC5F0;
  if ( dword_8CC5F0 )
    return (unsigned int)-1;
  v131 = 0;
  if ( !(unsigned __int8)((__int64 (*)(void))is_miniidb)() )
    v131 = getinf(92);
  si128 = 0;
  v142 = nullptr;
  v143 = 0;
  do
  {
    *(_QWORD *)&v143 = 0;
    if ( !(unsigned __int8)sub_257390((__int64)&v142, si128, a4, a5, a6, v11, v12, a9, a10) )
      goto LABEL_46;
    si128 = 0;
    v144 = nullptr;
    v148 = 1;
    v20 = &v146;
    v146 = 0;
    v145 = 0;
    v147 = 0;
    sub_256BC0((__int64)v152, (const char *)&elf_gnu_hash_bucket[42]);
    sub_256790((__int64 *)&v144, "Parameters");
    sub_2294E0((__int64)&v146);
    sub_256C80(v153, (const char *)&elf_gnu_hash_bucket[42]);
    v21 = getinf(20);
    if ( (unsigned int)visit_patched_bytes(0, v21, sub_227230, 0) )
      sub_169630(
        (int)"ICON WARNING\n"
             "AUTOHIDE DATABASE\n"
             "The database has been patched.\n"
             "There might be some inconsistency between the disassembly\n"
             "in the database and the actual debugger process.",
        v21,
        v22,
        v23,
        v24,
        v25,
        (__m128)0LL,
        a4,
        a5,
        a6,
        v26,
        v27,
        a9,
        a10,
        v126);
    v135 = &s1;
    if ( (_QWORD)v145 )
      v135 = v144;
    v28 = v154;
    dbg_get_input_path(v154, 4096);
    if ( (*(_BYTE *)(dbg + 34) & 0x10) == 0 )
    {
      if ( (unsigned __int8)getinf_flag(3, 8) )
      {
        v49 = (const char *)qbasename(v154);
        v50 = (const char *)qbasename(v152);
        a2 = (char *)v49;
        if ( !strcmp(v50, v49) )
        {
          v40 = "AUTOHIDE NONE\n"
                "Input file is a dynamic library, it cannot be run by itself.\n"
                "Please specify the host application (Debugger, Process options)";
          sub_169630(
            (int)"AUTOHIDE NONE\n"
                 "Input file is a dynamic library, it cannot be run by itself.\n"
                 "Please specify the host application (Debugger, Process options)",
            (__int64)v49,
            v51,
            v52,
            v53,
            v54,
            (__m128)0LL,
            a4,
            a5,
            a6,
            v55,
            v56,
            a9,
            a10,
            v126);
LABEL_35:
          if ( byte_8CC5F6 )
            sub_233440(si128, a4, a5, a6, *(double *)v18.m128_u64, *(double *)v19.m128_u64, a9, a10, (__int64)v40, a2);
          goto LABEL_37;
        }
      }
    }
    v29 = (unsigned __int8)getinf_flag(3, 8);
    if ( !byte_8CC5F5 )
    {
      if ( (getinf(3) & 6) == 2 )
        v29 |= 4u;
      v29 |= 8 * (unsigned __int8)getinf_flag(3, 4);
    }
    if ( (*(_BYTE *)(dbg + 32) & 1) == 0 )
      v29 |= 2u;
    v31 = v29 | (32 * (unsigned __int8)getinf_flag(45, 16));
    v30 = v31;
    LOBYTE(v31) = v31 | 0x80;
    if ( (dword_8BA5B0 & 0x80000) == 0 )
      v31 = v30;
    v132 = v31;
    v32 = is_database_flag(8);
    v38 = (char *)&unk_5C2F25;
    if ( !v32 )
    {
      v107 = is_miniidb(8, 16, v33, v34, v35, &unk_5C2F25);
      v38 = v154;
      if ( v107 )
      {
        setinf_buf(97, v152, 0);
        v38 = v152;
      }
    }
    v133 = v152;
    v39 = v153;
    while ( 2 )
    {
      a2 = (char *)v135;
      v40 = v133;
      v41 = sub_23EBD0(
              (__int64)v133,
              (__int64)v135,
              (__int64)v20,
              (__int64)v39,
              v132,
              (__int64)v38,
              *(double *)si128.m128_u64,
              a4,
              a5,
              a6,
              v36,
              v37,
              a9,
              a10,
              v131);
      v42 = *(_QWORD *)(dbg + 32);
      if ( v41 == -3 && (v42 & 1) != 0 )
      {
        v15 = 0x40000000000LL;
        if ( (v42 & 0x40000000000LL) == 0 )
          goto LABEL_35;
        v43 = qbasename(v28);
        v44 = (const char *)v43;
        if ( (char *)v43 == v28 || (v45 = sub_22FDB0(dbg, 27, v43, 0, 1, 0), v45 == -1) )
        {
          a2 = "HIDECANCEL\n"
               "The remote file %s could not be found.\n"
               "Do you want IDA to copy the executable to the remote computer?\n"
               "\n"
               "The file will be copied to the current directory of the debug server.\n"
               "The starting directory will be the same directory.";
          v40 = (_BYTE *)(&dword_0 + 1);
          if ( (int)sub_1698A0(
                      1,
                      (int)"HIDECANCEL\n"
                           "The remote file %s could not be found.\n"
                           "Do you want IDA to copy the executable to the remote computer?\n"
                           "\n"
                           "The file will be copied to the current directory of the debug server.\n"
                           "The starting directory will be the same directory.",
                      v28) <= 0 )
            goto LABEL_35;
        }
        else
        {
          sub_22FDB0(dbg, 28, v45);
          a2 = "~C~opy new";
          v40 = "~U~se found";
          v46 = sub_22EDE0(
                  (int)"~U~se found",
                  (int)"~C~opy new",
                  (int)"Cancel",
                  1,
                  (int)"IDA could not find the remote file %s.\n"
                       "But it could find remote file %s.\n"
                       "Do you want to use the found file?\n"
                       "\n"
                       "The starting directory will be the same as\n"
                       "the current directory of the debug server.",
                  v28,
                  v44);
          if ( v46 == -1 )
            goto LABEL_35;
          if ( v46 == 1 )
          {
            sub_258520(v44, "Path", 0);
            sub_25D800(v44);
            goto LABEL_30;
          }
        }
        if ( (unsigned __int8)qfileexist(v28) )
        {
          v66 = (__int64)v28;
        }
        else
        {
          a2 = v28;
          v40 = nullptr;
          v66 = sub_17CD60(
                  0,
                  (int)v28,
                  (int)"Please select the file to copy",
                  v61,
                  v62,
                  v63,
                  si128,
                  a4,
                  a5,
                  a6,
                  v64,
                  v65,
                  a9,
                  a10,
                  v126);
          if ( !v66 )
            goto LABEL_35;
        }
        s = (char *)qbasename(v66);
        v67 = sub_22FDB0(dbg, 27, s, 0, 0, 0);
        if ( v67 == -1 )
        {
          v108 = *__errno_location();
        }
        else
        {
          v68 = open_linput(v66, 0);
          v69 = v68;
          if ( v68 )
          {
            v70 = qlsize(v68);
            if ( !v70 )
            {
              close_linput(v69);
              sub_22FDB0(dbg, 28, v67);
LABEL_59:
              sub_258520(s, "Path", 0);
              si128 = 0;
              *(_OWORD *)v150 = 0;
              s2 = nullptr;
              v71 = (char *)qvector_reserve(&s2, 0, 10, 1);
              s2 = v71;
              v72 = &dword_8CC088;
              v150[0] = byte_9 + 1;
              *(_QWORD *)v71 = 0x6C69467475706E49LL;
              v71[8] = 101;
              v73 = s2;
              s2[9] = 0;
              if ( !qword_8CC090 )
                goto LABEL_102;
              v74 = v150[0];
              v75 = &s1;
              v129 = v20;
              v72 = &dword_8CC088;
              v76 = (int *)qword_8CC090;
              v130 = v28;
              v77 = v73;
              if ( v150[0] )
                v75 = v73;
              v136 = v75;
              while ( 1 )
              {
                v83 = *((_QWORD *)v76 + 5);
                if ( !v74 )
                  break;
                if ( v83 )
                  goto LABEL_72;
                v78 = v76;
                v79 = v77;
                v80 = &s1;
LABEL_65:
                v81 = strcmp(v80, v79);
                v82 = *((int **)v76 + 2);
                v76 = *((int **)v76 + 3);
                if ( v81 >= 0 )
                {
                  v72 = v78;
                  v76 = v82;
                }
                if ( !v76 )
                {
                  v28 = v130;
                  v20 = v129;
                  v102 = v77;
                  goto LABEL_97;
                }
              }
              if ( !v83 )
              {
                while ( 1 )
                {
                  v84 = *((_QWORD *)v76 + 2);
                  if ( !v84 )
                    break;
                  v72 = v76;
                  v76 = *((int **)v76 + 2);
                  if ( *(_QWORD *)(v84 + 40) )
                    goto LABEL_72;
                }
                v102 = v77;
                v120 = v76;
                v28 = v130;
                v20 = v129;
                v72 = v120;
LABEL_97:
                if ( v72 == &dword_8CC088 )
                  goto LABEL_102;
                if ( *((_QWORD *)v72 + 5) )
                {
                  v103 = *((const char **)v72 + 4);
                  if ( !v74 )
                    v102 = &s1;
LABEL_101:
                  if ( strcmp(v102, v103) < 0 )
                  {
LABEL_102:
                    v103 = (const char *)v72;
                    p_s2 = &s2;
                    v72 = (int *)sub_258400(&qword_8CC080, (char *)v72, (__int64 **)&p_s2);
                  }
                }
                else
                {
                  v103 = &s1;
                  if ( v74 )
                    goto LABEL_101;
                }
                if ( s && (v104 = strlen(s), (v105 = v104) != 0) )
                {
                  v117 = *((void **)v72 + 7);
                  v118 = v104 + 1;
                  if ( *((_QWORD *)v72 + 9) < v104 + 1 )
                  {
                    v125 = qvector_reserve(v72 + 14, *((_QWORD *)v72 + 7), v118, 1);
                    *((_QWORD *)v72 + 7) = v125;
                    v117 = (void *)v125;
                  }
                  *((_QWORD *)v72 + 8) = v118;
                  v103 = s;
                  memmove(v117, s, v105);
                  *(_BYTE *)(*((_QWORD *)v72 + 7) + v105) = 0;
                }
                else
                {
                  *((_QWORD *)v72 + 8) = 0;
                }
                if ( s2 )
                {
                  v150[0] = nullptr;
                  *(double *)si128.m128_u64 = qfree(s2, v103);
                }
                setinf_buf(97, s, 0);
LABEL_30:
                dbg_get_input_path(v28, 4096);
                v47 = (unsigned __int8)getinf_flag(3, 8) == 0;
                v48 = v133;
                if ( v47 )
                  v48 = v28;
                v133 = v48;
                set_path(0, v28);
                sub_258520((const char *)&unk_5C2F25, "StartDir", 1);
                byte_8CC55A = 0;
                v38 = v28;
                v39 = &unk_5C2F25;
                continue;
              }
LABEL_72:
              v80 = *((const char **)v76 + 4);
              v79 = v136;
              v78 = v76;
              goto LABEL_65;
            }
            si128 = 0;
            v138 = (char *)v70;
            s2 = nullptr;
            *(_OWORD *)v150 = 0;
            s2 = (char *)qvector_reserve(&s2, 0, v70, 1);
            memset(&s2[(unsigned __int64)v150[0]], 0, v138 - v150[0]);
            v150[0] = v138;
            qlread(v69, s2, v138);
            v121 = sub_22FDB0(dbg, 30, v67, 0, s2, v138, 0);
            v122 = 0;
            if ( v138 != (char *)v121 )
              v122 = *__errno_location();
            if ( s2 )
            {
              v139 = v122;
              v150[0] = nullptr;
              *(double *)si128.m128_u64 = qfree(s2, (_BYTE *)&off_18 + 6);
              v122 = v139;
            }
            v140 = v122;
            close_linput(v69);
            v119 = v140;
          }
          else
          {
            v119 = *__errno_location();
          }
          v137 = v119;
          sub_22FDB0(dbg, 28, v67);
          v108 = v137;
        }
        if ( v108 )
        {
          v109 = qerrstr(v108);
          sub_169630(
            (int)"Failed to copy %s -> %s\n%s",
            v66,
            (__int64)s,
            v109,
            v110,
            v111,
            si128,
            a4,
            a5,
            a6,
            v112,
            v113,
            a9,
            a10,
            v126);
        }
        goto LABEL_59;
      }
      break;
    }
    if ( v41 <= 0 )
      goto LABEL_35;
    si128 = 0;
    v85 = (char **)&byte_6;
    memset(v150, 0, sizeof(v150));
    s2 = (char *)0x800000028LL;
    v151 = -1;
    v86 = dbg;
    if ( !(unsigned int)sub_20CEA0(dbg, 6, &s2) )
    {
      v114 = *(char ***)(v86 + 8);
      if ( v114 && (v115 = strlen(*(const char **)(v86 + 8)), (v116 = v115) != 0) )
      {
        v123 = v150[0];
        v124 = (char *)(v115 + 1);
        if ( v150[2] < (char *)(v115 + 1) )
        {
          v150[0] = (char *)qvector_reserve(v150, v150[0], v124, 1);
          v123 = v150[0];
        }
        v85 = v114;
        v150[1] = v124;
        memmove(v123, v114, v116);
        v150[0][v116] = 0;
      }
      else
      {
        v150[1] = nullptr;
      }
      HIDWORD(s2) = -1;
      v87 = v151;
      if ( v151 < 0 )
        goto LABEL_77;
LABEL_127:
      v85 = (char **)&qword_20;
      setinf_flag(3, 32, v87 != 0);
      if ( SHIDWORD(s2) > 4 )
        goto LABEL_128;
      goto LABEL_77;
    }
    v87 = v151;
    if ( v151 >= 0 )
      goto LABEL_127;
    if ( SHIDWORD(s2) <= 4 )
      goto LABEL_77;
LABEL_128:
    v85 = (char **)&byte_4;
    setinf_flag(3, 4, 1);
LABEL_77:
    if ( v150[1] > (_BYTE *)&dword_0 + 1 )
    {
      v85 = (char **)v150[0];
      v88 = &s1;
      if ( xmmword_8CC318 )
        v88 = qword_8CC310;
      if ( strcmp(v88, v150[0]) )
      {
        v85 = v150;
        sub_2451C0(dbg, (__int64 *)v150, 0);
      }
    }
    sub_24DA10((__m128)0LL);
    dword_8CC560 = sub_233C20(dword_8BA594);
    sub_23C5D0(0, (__int64)v85, (__m128)0LL, a4, a5, a6, v89, v90, a9, a10);
    sub_23C5D0(*(_BYTE *)(dbg + 33) >> 7, (__int64)v85, (__m128)0LL, a4, a5, a6, v91, v92, a9, a10);
    a2 = (_BYTE *)(&dword_0 + 1);
    sub_24BA10((QT::QVariant *)((char *)&dword_0 + 1), 1, 1, 0.0, v93, v94, v95);
    if ( v150[0] )
    {
      v150[1] = nullptr;
      *(double *)si128.m128_u64 = qfree(v150[0], (_BYTE *)&dword_0 + 1);
    }
    if ( v41 == 2 )
    {
      sub_169630(
        (int)"ICON WARNING\n"
             "AUTOHIDE DATABASE\n"
             "The input file has been changed since it was loaded into the database.\n"
             "There might be some inconsistency between the disassembly in the database\n"
             "and the actual debugger process. Please reload the input file into the\n"
             "database.",
        1,
        v96,
        v15,
        v16,
        v17,
        si128,
        a4,
        a5,
        a6,
        v18,
        v19,
        a9,
        a10,
        v126);
LABEL_86:
      v97 = v146;
      if ( v146 )
      {
        if ( (_QWORD)v147 )
        {
          v98 = 0;
          v99 = v147;
          do
          {
            v100 = (__int64 *)(v97 + 24 * v98);
            v101 = *v100;
            if ( *v100 )
            {
              v100[1] = 0;
              *(double *)si128.m128_u64 = qfree(v101, (_BYTE *)&dword_0 + 1, *(double *)si128.m128_u64);
              v97 = v146;
            }
            ++v98;
          }
          while ( v99 != v98 );
        }
        *(_QWORD *)&v147 = 0;
        *(double *)si128.m128_u64 = qfree(v97, (_BYTE *)&dword_0 + 1, *(double *)si128.m128_u64);
      }
      if ( v144 )
      {
        *(_QWORD *)&v145 = 0;
        qfree(v144, (_BYTE *)&dword_0 + 1, *(double *)si128.m128_u64);
      }
      a2 = nullptr;
      sub_231190(a1, 0);
      v128 = 1;
      break;
    }
    if ( v41 == 1 )
      goto LABEL_86;
LABEL_37:
    v14 = v146;
    if ( v146 )
    {
      v57 = v147;
      if ( (_QWORD)v147 )
      {
        v58 = 0;
        do
        {
          v59 = (__int64 *)(v14 + 24 * v58);
          v60 = *v59;
          if ( *v59 )
          {
            v59[1] = 0;
            qfree(v60, a2);
            v14 = v146;
          }
          ++v58;
        }
        while ( v57 != v58 );
      }
      *(_QWORD *)&v147 = 0;
      *(double *)si128.m128_u64 = qfree(v14, a2);
    }
    if ( v144 )
    {
      *(_QWORD *)&v145 = 0;
      *(double *)si128.m128_u64 = qfree(v144, a2, *(double *)si128.m128_u64);
    }
LABEL_46:
    if ( (unsigned __int64)v143 <= 1 )
    {
      a2 = v142;
      if ( *((_QWORD *)&v143 + 1) <= 0x5Du )
      {
        v142 = (char *)qvector_reserve(&v142, v142, 94, 1);
        a2 = v142;
      }
      *(_QWORD *)&v143 = 94;
      *(__m128i *)a2 = _mm_load_si128((const __m128i *)&xmmword_5DCAB0);
      v106 = (__int64)v142;
      *((__m128i *)a2 + 1) = _mm_load_si128((const __m128i *)&xmmword_5DCAC0);
      *((__m128i *)a2 + 2) = _mm_load_si128((const __m128i *)&xmmword_5DCAD0);
      *((__m128i *)a2 + 3) = _mm_load_si128((const __m128i *)&xmmword_5DCAE0);
      *((__m128i *)a2 + 4) = _mm_load_si128((const __m128i *)&xmmword_5DCAF0);
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCB00);
      *(__m128 *)(a2 + 77) = si128;
      *(_BYTE *)(v106 + 93) = 0;
    }
    if ( batch || byte_8CC5F5 )
    {
      a2 = v142;
      sub_169630(
        (int)"ICON ERROR\nAUTOHIDE NONE\n%s",
        (__int64)v142,
        v14,
        v15,
        v16,
        v17,
        si128,
        a4,
        a5,
        a6,
        v18,
        v19,
        a9,
        a10,
        v126);
      break;
    }
  }
  while ( (unsigned __int8)sub_25F920(
                             &v142,
                             *(double *)si128.m128_u64,
                             a4,
                             a5,
                             a6,
                             *(double *)v18.m128_u64,
                             *(double *)v19.m128_u64,
                             a9,
                             a10) );
  if ( v142 )
  {
    *(_QWORD *)&v143 = 0;
    qfree(v142, a2);
  }
  return v128;
}
