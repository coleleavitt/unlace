__int64 __fastcall sub_EDA00(__int64 a1)
{
  __int64 *v2; // r12
  __int64 v3; // rsi
  const char *v4; // rbx
  int v5; // r15d
  int v6; // ecx
  int v7; // eax
  char v8; // al
  char *v9; // r9
  char *i; // rcx
  const char *v11; // rsi
  const char *v12; // rdi
  int v13; // r13d
  __int64 v14; // r14
  __int64 v15; // rax
  char *v16; // r13
  int v17; // eax
  bool v18; // zf
  const char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rbx
  _QWORD *v23; // rax
  const char *v24; // r13
  __int64 v25; // rax
  char *v26; // rax
  int *v27; // r15
  char *v28; // rdx
  char *v29; // r13
  const char *v30; // rax
  int *v31; // rbx
  char *v32; // r14
  int *v33; // r12
  const char *v34; // rsi
  const char *v35; // rdi
  int v36; // eax
  int *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  char **v40; // rsi
  char *v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rcx
  _BOOL8 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // r15
  _QWORD *v48; // rax
  const char *v49; // rdx
  const char *v50; // rsi
  size_t v51; // rax
  size_t v52; // r13
  char *v53; // rsi
  const char *v54; // rax
  char v55; // al
  int v56; // ecx
  const char *v57; // rax
  const char *v58; // r15
  const char *v59; // rax
  char **v60; // r14
  size_t v61; // rax
  size_t v62; // rbx
  void *v63; // rdi
  size_t v64; // r14
  int v65; // ecx
  int *v66; // r14
  __int64 v67; // rax
  int v68; // ecx
  char *v69; // r15
  __int64 v70; // rax
  unsigned int v72; // [rsp+14h] [rbp-192Ch]
  const char *v73; // [rsp+20h] [rbp-1920h]
  __int64 *v74; // [rsp+28h] [rbp-1918h]
  unsigned int v75; // [rsp+30h] [rbp-1910h]
  int v76; // [rsp+34h] [rbp-190Ch]
  const char *v77; // [rsp+38h] [rbp-1908h]
  char *s; // [rsp+40h] [rbp-1900h]
  const char *v79; // [rsp+48h] [rbp-18F8h]
  const char *v80; // [rsp+50h] [rbp-18F0h]
  int v81; // [rsp+50h] [rbp-18F0h]
  char *v82; // [rsp+50h] [rbp-18F0h]
  int v83; // [rsp+50h] [rbp-18F0h]
  int v84; // [rsp+50h] [rbp-18F0h]
  char **p_s2; // [rsp+68h] [rbp-18D8h] BYREF
  char *v86; // [rsp+70h] [rbp-18D0h] BYREF
  __int128 v87; // [rsp+78h] [rbp-18C8h]
  const char *v88; // [rsp+90h] [rbp-18B0h] BYREF
  __int128 v89; // [rsp+98h] [rbp-18A8h]
  __int64 v90; // [rsp+B0h] [rbp-1890h] BYREF
  __int128 v91; // [rsp+B8h] [rbp-1888h]
  char v92; // [rsp+C8h] [rbp-1878h]
  char *s2; // [rsp+D0h] [rbp-1870h] BYREF
  char *v94[3]; // [rsp+D8h] [rbp-1868h] BYREF
  int v95; // [rsp+F0h] [rbp-1850h]
  _BYTE v96[1024]; // [rsp+100h] [rbp-1840h] BYREF
  _BYTE v97[1024]; // [rsp+500h] [rbp-1440h] BYREF
  _BYTE v98[4104]; // [rsp+900h] [rbp-1040h] BYREF
  unsigned __int64 v99; // [rsp+1908h] [rbp-38h]

  v99 = __readfsqword(0x28u);
  if ( !dbg )
    return (unsigned int)-1;
  v72 = dword_25274C;
  if ( dword_25274C )
    return (unsigned int)-1;
  v75 = 0;
  if ( !(unsigned __int8)is_miniidb() )
    v75 = getinf();
  v86 = nullptr;
  v87 = 0;
  do
  {
    *(_QWORD *)&v87 = 0;
    if ( !(unsigned __int8)sub_E63E0((__int64)&v86) )
      goto LABEL_45;
    v88 = nullptr;
    v92 = 1;
    v2 = &v90;
    v90 = 0;
    v89 = 0;
    v91 = 0;
    sub_E5C30();
    sub_E5800((__int64 *)&v88, "Parameters");
    sub_BA360((__int64)&v90);
    sub_E5CF0(v97);
    v3 = getinf();
    if ( (unsigned int)visit_patched_bytes() )
      sub_92200(
        (__int64)"ICON WARNING\n"
                 "AUTOHIDE DATABASE\n"
                 "The database has been patched.\n"
                 "There might be some inconsistency between the disassembly\n"
                 "in the database and the actual debugger process.",
        v3);
    if ( (*(_BYTE *)(dbg + 32LL) & 1) == 0 )
      TProgram::at_child_exec((TProgram *)((char *)&dword_0 + 1), v3);
    v79 = s1;
    if ( (_QWORD)v89 )
      v79 = v88;
    v4 = v98;
    dbg_get_input_path();
    if ( (*(_BYTE *)(dbg + 34LL) & 0x10) != 0
      || !(unsigned __int8)getinf_flag()
      || (v58 = (const char *)qbasename(), v59 = (const char *)qbasename(), v11 = v58, strcmp(v59, v58)) )
    {
      v5 = (unsigned __int8)getinf_flag();
      if ( !byte_252751 )
      {
        if ( (getinf() & 6) == 2 )
          v5 |= 4u;
        v5 |= 8 * (unsigned __int8)getinf_flag();
      }
      v7 = v5 | (32 * (unsigned __int8)getinf_flag());
      v6 = v7;
      LOBYTE(v7) = v7 | 0x80;
      if ( (dword_245190 & 0x80000) == 0 )
        v7 = v6;
      v76 = v7;
      v8 = is_database_flag();
      v9 = "";
      if ( !v8 )
      {
        v55 = is_miniidb();
        v9 = v98;
        if ( v55 )
        {
          setinf_buf();
          v9 = v96;
        }
      }
      v77 = v96;
      for ( i = v97; ; i = "" )
      {
        v11 = v79;
        v12 = v77;
        v13 = sub_CF450((__int64)v77, (__int64)v79, (__int64)v2, (__int64)i, v76, (__int64)v9, v75);
        v14 = dbg;
        v15 = *(_QWORD *)(dbg + 32LL);
        if ( v13 != -3 || (v15 & 1) == 0 )
        {
          if ( v13 <= 0 )
          {
LABEL_34:
            if ( (*(_BYTE *)(v14 + 32) & 1) == 0 )
              goto LABEL_126;
            goto LABEL_35;
          }
          v40 = (char **)&byte_6;
          v41 = (char *)dbg;
          s2 = (char *)0x800000028LL;
          memset(v94, 0, sizeof(v94));
          v95 = -1;
          if ( (unsigned int)sub_9E1E0() )
          {
            if ( v95 < 0 )
            {
              if ( SHIDWORD(s2) <= 4 )
                goto LABEL_76;
LABEL_133:
              v40 = (char **)&byte_4;
              v41 = (_BYTE *)(&dword_0 + 3);
              setinf_flag();
LABEL_76:
              if ( v94[1] > (_BYTE *)&dword_0 + 1 )
              {
                v40 = (char **)v94[0];
                v41 = (char *)s1;
                if ( xmmword_252478 )
                  v41 = qword_252470;
                if ( strcmp(v41, v94[0]) )
                {
                  v40 = v94;
                  v41 = (char *)dbg;
                  sub_D7D60(dbg, (__int64)v94, 0);
                }
              }
              sub_DF140((__int64)v41, (__int64)v40, v42, v43);
              dword_2526C0 = sub_C4950(dword_245174);
              sub_CCE20(0);
              sub_CCE20(*(_BYTE *)(dbg + 33LL) >> 7);
              v44 = dbg != 0;
              sub_10AF30(1, v44);
              TView::disableCommand((TView *)unk_24EFE6, v44);
              if ( v94[0] )
              {
                v94[1] = nullptr;
                qfree();
              }
              if ( (*(_BYTE *)(dbg + 32LL) & 1) == 0 )
                TProgram::at_child_exec(nullptr, v44);
              if ( v13 == 2 )
              {
                sub_92200((__int64)"ICON WARNING\n"
                                   "AUTOHIDE DATABASE\n"
                                   "The input file has been changed since it was loaded into the database.\n"
                                   "There might be some inconsistency between the disassembly in the database\n"
                                   "and the actual debugger process. Please reload the input file into the\n"
                                   "database.");
              }
              else if ( v13 != 1 )
              {
                goto LABEL_36;
              }
              v45 = v90;
              if ( v90 )
              {
                if ( (_QWORD)v91 )
                {
                  v46 = 0;
                  v47 = v91;
                  do
                  {
                    v48 = (_QWORD *)(v45 + 24 * v46);
                    if ( *v48 )
                    {
                      v48[1] = 0;
                      qfree();
                      v45 = v90;
                    }
                    ++v46;
                  }
                  while ( v47 != v46 );
                }
                *(_QWORD *)&v91 = 0;
                qfree();
              }
              if ( v88 )
              {
                *(_QWORD *)&v89 = 0;
                qfree();
              }
              sub_DC280(a1, 0);
              v72 = 1;
              goto LABEL_49;
            }
          }
          else
          {
            v60 = *(char ***)(v14 + 8);
            if ( v60 && (v41 = (char *)v60, v61 = strlen((const char *)v60), (v62 = v61) != 0) )
            {
              v41 = v94[0];
              v69 = (char *)(v61 + 1);
              if ( v94[2] < (char *)(v61 + 1) )
              {
                v94[0] = (char *)qvector_reserve();
                v41 = v94[0];
              }
              v40 = v60;
              v94[1] = v69;
              memmove(v41, v60, v62);
              v94[0][v62] = 0;
            }
            else
            {
              v94[1] = nullptr;
            }
            HIDWORD(s2) = -1;
            if ( v95 < 0 )
              goto LABEL_76;
          }
          v40 = (char **)&qword_20;
          v41 = (_BYTE *)(&dword_0 + 3);
          setinf_flag();
          if ( SHIDWORD(s2) > 4 )
            goto LABEL_133;
          goto LABEL_76;
        }
        if ( (v15 & 0x40000000000LL) == 0 )
          goto LABEL_34;
        v16 = (char *)qbasename();
        if ( v16 == v4 || (unsigned int)sub_C15F0() == -1 )
        {
          v11 = "HIDECANCEL\n"
                "The remote file %s could not be found.\n"
                "Do you want IDA to copy the executable to the remote computer?\n"
                "\n"
                "The file will be copied to the current directory of the debug server.\n"
                "The starting directory will be the same directory.";
          v12 = (_BYTE *)(&dword_0 + 1);
          if ( (int)sub_92580(
                      1u,
                      (__int64)"HIDECANCEL\n"
                               "The remote file %s could not be found.\n"
                               "Do you want IDA to copy the executable to the remote computer?\n"
                               "\n"
                               "The file will be copied to the current directory of the debug server.\n"
                               "The starting directory will be the same directory.",
                      v4) <= 0 )
            goto LABEL_33;
        }
        else
        {
          sub_C15F0();
          v11 = "~C~opy new";
          v12 = "~U~se found";
          v17 = sub_C0990(
                  (__int64)"~U~se found",
                  (__int64)"~C~opy new",
                  (__int64)"Cancel",
                  1u,
                  (__int64)"IDA could not find the remote file %s.\n"
                           "But it could find remote file %s.\n"
                           "Do you want to use the found file?\n"
                           "\n"
                           "The starting directory will be the same as\n"
                           "the current directory of the debug server.",
                  v4,
                  v16);
          if ( v17 == -1 )
            goto LABEL_33;
          if ( v17 == 1 )
          {
            sub_E7590(v16, "Path", 0);
            sub_EC600(v16);
            goto LABEL_30;
          }
        }
        if ( (unsigned __int8)qfileexist() )
        {
          v24 = v4;
        }
        else
        {
          v11 = v4;
          v12 = nullptr;
          v24 = (const char *)sub_9DC30(0, (__int64)v4, (__int64)"Please select the file to copy");
          if ( !v24 )
          {
LABEL_33:
            v14 = dbg;
            goto LABEL_34;
          }
        }
        s = (char *)qbasename();
        if ( (unsigned int)sub_C15F0() == -1 )
          break;
        if ( !open_linput() )
        {
          v65 = *__errno_location();
          goto LABEL_138;
        }
        v25 = qlsize();
        if ( v25 )
        {
          v82 = (char *)v25;
          s2 = nullptr;
          *(_OWORD *)v94 = 0;
          s2 = (char *)qvector_reserve();
          memset(&s2[(unsigned __int64)v94[0]], 0, v82 - v94[0]);
          v94[0] = v82;
          qlread();
          v67 = sub_C15F0();
          v68 = 0;
          if ( v82 != (char *)v67 )
            v68 = *__errno_location();
          if ( s2 )
          {
            v83 = v68;
            v94[0] = nullptr;
            qfree();
            v68 = v83;
          }
          v84 = v68;
          close_linput();
          v65 = v84;
LABEL_138:
          v81 = v65;
          sub_C15F0();
          v56 = v81;
LABEL_120:
          if ( v56 )
          {
            v57 = (const char *)qerrstr();
            sub_92200((__int64)"Failed to copy %s -> %s\n%s", v24, s, v57);
          }
          goto LABEL_58;
        }
        close_linput();
        sub_C15F0();
LABEL_58:
        sub_E7590(s, "Path", 0);
        *(_OWORD *)v94 = 0;
        s2 = nullptr;
        v26 = (char *)qvector_reserve();
        s2 = v26;
        v27 = &dword_252208;
        v94[0] = byte_9 + 1;
        *(_QWORD *)v26 = 0x6C69467475706E49LL;
        v26[8] = 101;
        v28 = s2;
        s2[9] = 0;
        if ( !qword_252210 )
          goto LABEL_103;
        v29 = v94[0];
        v30 = s1;
        v73 = v4;
        v27 = &dword_252208;
        v31 = (int *)qword_252210;
        v74 = v2;
        v32 = v28;
        if ( v94[0] )
          v30 = v28;
        v80 = v30;
        while ( 1 )
        {
          v38 = *((_QWORD *)v31 + 5);
          if ( !v29 )
            break;
          if ( v38 )
            goto LABEL_71;
          v33 = v31;
          v34 = v32;
          v35 = s1;
LABEL_64:
          v36 = strcmp(v35, v34);
          v37 = *((int **)v31 + 2);
          v31 = *((int **)v31 + 3);
          if ( v36 >= 0 )
          {
            v27 = v33;
            v31 = v37;
          }
          if ( !v31 )
          {
            v2 = v74;
            v4 = v73;
            v49 = v32;
            goto LABEL_98;
          }
        }
        if ( v38 )
        {
LABEL_71:
          v35 = *((const char **)v31 + 4);
          v34 = v80;
          v33 = v31;
          goto LABEL_64;
        }
        while ( 1 )
        {
          v39 = *((_QWORD *)v31 + 2);
          if ( !v39 )
            break;
          v27 = v31;
          v31 = *((int **)v31 + 2);
          if ( *(_QWORD *)(v39 + 40) )
            goto LABEL_71;
        }
        v49 = v32;
        v66 = v31;
        v2 = v74;
        v4 = v73;
        v27 = v66;
LABEL_98:
        if ( v27 == &dword_252208 )
          goto LABEL_103;
        if ( *((_QWORD *)v27 + 5) )
        {
          v50 = *((const char **)v27 + 4);
          if ( !v29 )
            v49 = s1;
LABEL_102:
          if ( strcmp(v49, v50) < 0 )
          {
LABEL_103:
            p_s2 = &s2;
            v27 = (int *)sub_E7470(&qword_252200, v27, (__int64 **)&p_s2);
          }
        }
        else
        {
          v50 = s1;
          if ( v29 )
            goto LABEL_102;
        }
        if ( s && (v51 = strlen(s), (v52 = v51) != 0) )
        {
          v63 = *((void **)v27 + 7);
          v64 = v51 + 1;
          if ( *((_QWORD *)v27 + 9) < v51 + 1 )
          {
            v70 = qvector_reserve();
            *((_QWORD *)v27 + 7) = v70;
            v63 = (void *)v70;
          }
          *((_QWORD *)v27 + 8) = v64;
          memmove(v63, s, v52);
          *(_BYTE *)(*((_QWORD *)v27 + 7) + v52) = 0;
        }
        else
        {
          *((_QWORD *)v27 + 8) = 0;
        }
        if ( s2 )
        {
          v94[0] = nullptr;
          qfree();
        }
        setinf_buf();
LABEL_30:
        dbg_get_input_path();
        v18 = (unsigned __int8)getinf_flag() == 0;
        v19 = v77;
        if ( v18 )
          v19 = v4;
        v77 = v19;
        set_path();
        sub_E7590("", "StartDir", 1);
        byte_2526BA = 0;
        v9 = (char *)v4;
      }
      v56 = *__errno_location();
      goto LABEL_120;
    }
    v12 = "AUTOHIDE NONE\n"
          "Input file is a dynamic library, it cannot be run by itself.\n"
          "Please specify the host application (Debugger, Process options)";
    sub_92200((__int64)"AUTOHIDE NONE\n"
                       "Input file is a dynamic library, it cannot be run by itself.\n"
                       "Please specify the host application (Debugger, Process options)");
    if ( (*(_BYTE *)(dbg + 32LL) & 1) != 0 )
    {
LABEL_35:
      if ( byte_252752 )
        goto LABEL_127;
    }
    else
    {
LABEL_126:
      v12 = nullptr;
      TProgram::at_child_exec(nullptr, (bool)v11);
      if ( byte_252752 )
LABEL_127:
        sub_C4290(v12, v11);
    }
LABEL_36:
    v20 = v90;
    if ( v90 )
    {
      v21 = v91;
      if ( (_QWORD)v91 )
      {
        v22 = 0;
        do
        {
          v23 = (_QWORD *)(v20 + 24 * v22);
          if ( *v23 )
          {
            v23[1] = 0;
            qfree();
            v20 = v90;
          }
          ++v22;
        }
        while ( v21 != v22 );
      }
      *(_QWORD *)&v91 = 0;
      qfree();
    }
    if ( v88 )
    {
      *(_QWORD *)&v89 = 0;
      qfree();
    }
LABEL_45:
    if ( (unsigned __int64)v87 <= 1 )
    {
      v53 = v86;
      if ( *((_QWORD *)&v87 + 1) <= 0x5Du )
      {
        v86 = (char *)qvector_reserve();
        v53 = v86;
      }
      *(_QWORD *)&v87 = 94;
      *(__m128i *)v53 = _mm_load_si128((const __m128i *)&xmmword_1D3370);
      v54 = v86;
      *((__m128i *)v53 + 1) = _mm_load_si128((const __m128i *)&xmmword_1D3380);
      *((__m128i *)v53 + 2) = _mm_load_si128((const __m128i *)&xmmword_1D3390);
      *((__m128i *)v53 + 3) = _mm_load_si128((const __m128i *)&xmmword_1D33A0);
      *((__m128i *)v53 + 4) = _mm_load_si128((const __m128i *)&xmmword_1D33B0);
      *(__m128i *)(v53 + 77) = _mm_load_si128((const __m128i *)&xmmword_1D33C0);
      *((_BYTE *)v54 + 93) = 0;
    }
    if ( batch || byte_252751 )
    {
      sub_92200((__int64)"ICON ERROR\nAUTOHIDE NONE\n%s", v86);
      break;
    }
  }
  while ( (unsigned __int8)sub_EC8A0((__int64)&v86) );
LABEL_49:
  if ( v86 )
  {
    *(_QWORD *)&v87 = 0;
    qfree();
  }
  return v72;
}

