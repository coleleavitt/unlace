_BOOL8 __fastcall main(__int64 a1, char **a2, char **a3)
{
  char **v3; // rbx
  _QWORD *v4; // rax
  int v5; // edx
  int v6; // ecx
  void *v7; // rdi
  size_t v8; // r12
  int v9; // r8d
  int v10; // r9d
  size_t v11; // r14
  size_t v12; // r14
  size_t v13; // r14
  size_t v14; // r13
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  char *v20; // r13
  char v21; // al
  _BOOL4 v22; // ebx
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  size_t v28; // rax
  void *v29; // rax
  void *v30; // rax
  void *v31; // rax
  void *v32; // rax
  void *v33; // rax
  char *v34; // rax
  void *v35; // rax
  char *v36; // rax
  _QWORD *v37; // r13
  __int64 v38; // rbx
  __int64 v39; // rbx
  __int64 v40; // rcx
  char v41; // bl
  __int64 v42; // r13
  const char *v43; // rsi
  char *v44; // rdi
  const char *v45; // rsi
  char *v46; // rdi
  void *v47; // r13
  void *v48; // rax
  size_t v49; // rbx
  __int64 v50; // r13
  __int64 v51; // r8
  unsigned __int64 v52; // rdx
  __int64 v53; // rbx
  __int64 v54; // r9
  __int64 v55; // rbx
  int v56; // edx
  int v57; // ecx
  int v58; // r8d
  int v59; // r9d
  __int64 v60; // rax
  __int64 v61; // rax
  size_t v62; // rax
  __int32 v63; // r9d
  const char *v64; // r8
  __int64 v65; // r13
  _QWORD *v66; // rax
  __int64 *v67; // rdi
  __int64 v68; // rdx
  bool v69; // zf
  const char **v70; // r13
  const char *v71; // rdi
  void *v72; // r13
  int v73; // r13d
  char *v74; // rsi
  char *v75; // rdi
  void *v76; // rsi
  void *v77; // r13
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rsi
  __m128i v81; // xmm0
  const char *v82; // rsi
  int v83; // r8d
  int v84; // r9d
  const char *v85; // rdx
  const char *v86; // rsi
  const char *v87; // rsi
  void *v88; // [rsp-10h] [rbp-370h]
  __int64 v89; // [rsp+0h] [rbp-360h]
  char v90; // [rsp+0h] [rbp-360h]
  void *v91; // [rsp+8h] [rbp-358h]
  void *v92; // [rsp+8h] [rbp-358h]
  __int64 v93; // [rsp+10h] [rbp-350h]
  __int16 v94; // [rsp+14h] [rbp-34Ch]
  __int32 v95; // [rsp+14h] [rbp-34Ch]
  __m128i s; // [rsp+18h] [rbp-348h] BYREF
  void *v97; // [rsp+28h] [rbp-338h]
  int v98; // [rsp+30h] [rbp-330h]
  int v99; // [rsp+38h] [rbp-328h]
  __int32 v100; // [rsp+3Ch] [rbp-324h] BYREF
  __int64 v101; // [rsp+40h] [rbp-320h] BYREF
  __int128 v102; // [rsp+48h] [rbp-318h]
  int v103; // [rsp+58h] [rbp-308h]
  void *v104; // [rsp+60h] [rbp-300h] BYREF
  __int128 v105; // [rsp+68h] [rbp-2F8h]
  __int64 v106; // [rsp+78h] [rbp-2E8h]
  void *v107; // [rsp+80h] [rbp-2E0h] BYREF
  __int128 v108; // [rsp+88h] [rbp-2D8h]
  __int64 v109; // [rsp+98h] [rbp-2C8h]
  void *ptr; // [rsp+A0h] [rbp-2C0h] BYREF
  __int128 v111; // [rsp+A8h] [rbp-2B8h]
  int v112; // [rsp+B8h] [rbp-2A8h]
  __int64 v113; // [rsp+C0h] [rbp-2A0h] BYREF
  __int128 v114; // [rsp+C8h] [rbp-298h]
  void *v115; // [rsp+E0h] [rbp-280h] BYREF
  __int128 v116; // [rsp+E8h] [rbp-278h]
  void *v117; // [rsp+100h] [rbp-260h] BYREF
  __int128 v118; // [rsp+108h] [rbp-258h]
  __int64 v119; // [rsp+118h] [rbp-248h]
  void *v120; // [rsp+120h] [rbp-240h] BYREF
  __int128 v121; // [rsp+128h] [rbp-238h]
  void *v122; // [rsp+138h] [rbp-228h]
  __int128 v123; // [rsp+140h] [rbp-220h]
  void *v124; // [rsp+150h] [rbp-210h]
  __int128 v125; // [rsp+158h] [rbp-208h]
  __int64 v126; // [rsp+168h] [rbp-1F8h]
  __int128 v127; // [rsp+170h] [rbp-1F0h]
  __int64 v128; // [rsp+180h] [rbp-1E0h]
  int v129[2]; // [rsp+190h] [rbp-1D0h] BYREF
  char *s1; // [rsp+198h] [rbp-1C8h] BYREF
  __int128 v131; // [rsp+1A0h] [rbp-1C0h]
  __int16 v132; // [rsp+1B0h] [rbp-1B0h]
  char *v133; // [rsp+1B8h] [rbp-1A8h]
  __int128 v134; // [rsp+1C0h] [rbp-1A0h]
  void *v135; // [rsp+1D0h] [rbp-190h]
  __int128 v136; // [rsp+1D8h] [rbp-188h]
  void *v137; // [rsp+1E8h] [rbp-178h]
  size_t v138[2]; // [rsp+1F0h] [rbp-170h]
  __int16 v139; // [rsp+200h] [rbp-160h]
  void *v140; // [rsp+208h] [rbp-158h]
  size_t v141[2]; // [rsp+210h] [rbp-150h]
  void *v142; // [rsp+220h] [rbp-140h]
  size_t v143[2]; // [rsp+228h] [rbp-138h]
  int v144; // [rsp+238h] [rbp-128h]
  void *src; // [rsp+240h] [rbp-120h]
  size_t n[3]; // [rsp+248h] [rbp-118h]
  __m256i v147; // [rsp+260h] [rbp-100h] BYREF
  __int16 v148; // [rsp+280h] [rbp-E0h]
  char *s2; // [rsp+288h] [rbp-D8h]
  __int128 v150; // [rsp+290h] [rbp-D0h]
  void *v151; // [rsp+2A0h] [rbp-C0h]
  __int128 v152; // [rsp+2A8h] [rbp-B8h]
  void *v153; // [rsp+2B8h] [rbp-A8h]
  __int128 v154; // [rsp+2C0h] [rbp-A0h]
  __int16 v155; // [rsp+2D0h] [rbp-90h]
  void *v156; // [rsp+2D8h] [rbp-88h]
  __int128 v157; // [rsp+2E0h] [rbp-80h]
  void *v158; // [rsp+2F0h] [rbp-70h]
  __int128 v159; // [rsp+2F8h] [rbp-68h]
  int v160; // [rsp+308h] [rbp-58h]
  void *v161; // [rsp+310h] [rbp-50h]
  __int128 v162; // [rsp+318h] [rbp-48h]
  unsigned __int64 v163; // [rsp+328h] [rbp-38h]

  LODWORD(v97) = a1;
  v163 = __readfsqword(0x28u);
  v3 = a2;
  sub_73C50(a1, a2, a3);
  sub_9C8C0("hvui");
  LODWORD(a2) = 0;
  memset(&v147, 0, 24);
  v4 = (_QWORD *)sub_96080(&v147, 0, 9, 1);
  v6 = 1987601768;
  v147.m256i_i64[0] = (__int64)v4;
  v147.m256i_i64[1] = 9;
  *v4 = 0x746C756176786568LL;
  v7 = (void *)v147.m256i_i64[0];
  *(_BYTE *)(v147.m256i_i64[0] + 8) = 0;
  v8 = v147.m256i_u64[1];
  s1 = nullptr;
  v131 = 0;
  if ( v147.m256i_i64[1] )
  {
    v36 = (char *)sub_96030(v147.m256i_i64[1]);
    LODWORD(a2) = v147.m256i_i32[0];
    s1 = v36;
    *((_QWORD *)&v131 + 1) = v8;
    memcpy(v36, (const void *)v147.m256i_i64[0], v8);
    *(_QWORD *)&v131 = v8;
    v7 = (void *)v147.m256i_i64[0];
  }
  v9 = -103;
  v10 = 0;
  v132 = -103;
  v133 = nullptr;
  v135 = nullptr;
  *(_QWORD *)v129 = &off_15F0D8;
  v137 = nullptr;
  v139 = 0;
  v140 = nullptr;
  v142 = nullptr;
  v144 = 0;
  v134 = 0;
  v136 = 0;
  *(_OWORD *)v138 = 0;
  *(_OWORD *)v141 = 0;
  *(_OWORD *)v143 = 0;
  if ( v7 )
  {
    LODWORD(a2) = 0;
    v147.m256i_i64[1] = 0;
    j__free(v7);
  }
  src = nullptr;
  *(_QWORD *)v129 = &off_15F120;
  *(_OWORD *)n = 0;
  sub_72DC0(
    (int)v129,
    (int)a2,
    v5,
    v6,
    v9,
    v10,
    v89,
    (__int64)v91,
    v93,
    s.m128i_i64[0],
    s.m128i_i64[1],
    (int)v97,
    v98,
    v99,
    v101,
    (void *)v102,
    *((__int64 *)&v102 + 1),
    v103,
    (int)v104,
    v105,
    *((__int64 *)&v105 + 1),
    v106,
    (int)v107,
    v108,
    *((__int64 *)&v108 + 1),
    v109,
    (int)ptr,
    v111,
    SDWORD2(v111),
    v112,
    v113);
  memset(&v147.m256i_u64[1], 0, 24);
  if ( (_QWORD)v131 )
  {
    s.m128i_i64[1] = v131;
    v35 = (void *)sub_96030(v131);
    LODWORD(a2) = (_DWORD)s1;
    v147.m256i_i64[1] = (__int64)v35;
    v147.m256i_i64[3] = s.m128i_i64[1];
    memcpy(v35, s1, s.m128i_u64[1]);
    v147.m256i_i64[2] = s.m128i_i64[1];
  }
  s2 = nullptr;
  v150 = 0;
  v94 = v132;
  v148 = v132;
  if ( (_QWORD)v134 )
  {
    s.m128i_i64[1] = v134;
    v34 = (char *)sub_96030(v134);
    LODWORD(a2) = (_DWORD)v133;
    s2 = v34;
    *((_QWORD *)&v150 + 1) = s.m128i_i64[1];
    memcpy(v34, v133, s.m128i_u64[1]);
    *(_QWORD *)&v150 = s.m128i_i64[1];
  }
  v151 = nullptr;
  v152 = 0;
  if ( (_QWORD)v136 )
  {
    s.m128i_i64[1] = v136;
    v33 = (void *)sub_96030(v136);
    LODWORD(a2) = (_DWORD)v135;
    v151 = v33;
    *((_QWORD *)&v152 + 1) = s.m128i_i64[1];
    memcpy(v33, v135, s.m128i_u64[1]);
    *(_QWORD *)&v152 = s.m128i_i64[1];
  }
  v147.m256i_i64[0] = (__int64)&off_15F0D8;
  v11 = v138[0];
  v153 = nullptr;
  v154 = 0;
  if ( v138[0] )
  {
    v32 = (void *)sub_96030(v138[0]);
    LODWORD(a2) = (_DWORD)v137;
    v153 = v32;
    *((_QWORD *)&v154 + 1) = v11;
    memcpy(v32, v137, v11);
    *(_QWORD *)&v154 = v11;
  }
  v12 = v141[0];
  v156 = nullptr;
  v157 = 0;
  v155 = v139;
  if ( v141[0] )
  {
    v31 = (void *)sub_96030(v141[0]);
    LODWORD(a2) = (_DWORD)v140;
    v156 = v31;
    *((_QWORD *)&v157 + 1) = v12;
    memcpy(v31, v140, v12);
    *(_QWORD *)&v157 = v12;
  }
  v13 = v143[0];
  v158 = nullptr;
  v159 = 0;
  if ( v143[0] )
  {
    v30 = (void *)sub_96030(v143[0]);
    LODWORD(a2) = (_DWORD)v142;
    v158 = v30;
    *((_QWORD *)&v159 + 1) = v13;
    memcpy(v30, v142, v13);
    *(_QWORD *)&v159 = v13;
  }
  v147.m256i_i64[0] = (__int64)&off_15F120;
  v14 = n[0];
  v161 = nullptr;
  v160 = v144;
  v162 = 0;
  if ( n[0] )
  {
    v29 = (void *)sub_96030(n[0]);
    LODWORD(a2) = (_DWORD)src;
    v161 = v29;
    *((_QWORD *)&v162 + 1) = v14;
    memcpy(v29, src, v14);
    *(_QWORD *)&v162 = v14;
  }
  v15 = fileno(stdout);
  s.m128i_i8[8] = 0;
  byte_165962 = isatty(v15) != 0;
  if ( (int)v97 <= 1 )
  {
LABEL_25:
    sub_169F0(
      (unsigned int)"Vault client. Copyright 2026 Hex-Rays SA.\n"
                    "usage: hv command [arguments]\n"
                    "  -h... vault host name\n"
                    "  -u... user name\n"
                    "  -p... password\n"
                    "  -s... site name\n"
                    "  -P... proxy host name\n"
                    "  -v    show/hide file transfer progress (default: on if stdout is tty)\n"
                    "the command list can be obtained with 'hv help'\n",
      (_DWORD)a2,
      v16,
      v17,
      v18,
      v19,
      v90);
    v22 = 1;
    goto LABEL_26;
  }
  do
  {
    a2 = (char **)v3[1];
    if ( *(_BYTE *)a2 != 45 )
    {
      v37 = v3 + 1;
      v101 = 0;
      v102 = 0;
      v38 = (__int64)&v3[(unsigned int)((_DWORD)v97 - 2) + 2];
      v97 = &v101;
      do
      {
        sub_17260(&v117, *v37);
        sub_17B80(v97, &v117);
        if ( v117 )
        {
          *(_QWORD *)&v118 = 0;
          j__free(v117);
        }
        ++v37;
      }
      while ( (_QWORD *)v38 != v37 );
      v39 = v101;
      if ( (unsigned __int8)sub_17000(v101, "help") || (unsigned __int8)sub_17000(v39, "?") )
      {
        sub_23920(v97);
        v22 = 0;
LABEL_117:
        sub_172F0(v97);
        goto LABEL_26;
      }
      v41 = v144;
      v42 = v131;
      if ( (v144 & 0x100) != 0 )
        goto LABEL_53;
      if ( v147.m256i_i64[2] )
      {
        v43 = (const char *)v147.m256i_i64[1];
        v44 = (char *)haystack;
        if ( !(_QWORD)v131 )
          goto LABEL_51;
      }
      else
      {
        v43 = haystack;
        if ( !(_QWORD)v131 )
          goto LABEL_123;
      }
      v44 = s1;
LABEL_51:
      if ( strcmp(v44, v43) )
      {
LABEL_52:
        n[0] = 0;
        goto LABEL_53;
      }
LABEL_123:
      if ( v132 != v94 )
        goto LABEL_52;
      if ( (_QWORD)v150 )
      {
        v74 = s2;
        v75 = (char *)haystack;
        if ( !(_QWORD)v134 )
          goto LABEL_127;
      }
      else
      {
        v74 = (char *)haystack;
        if ( !(_QWORD)v134 )
          goto LABEL_53;
      }
      v75 = v133;
LABEL_127:
      if ( strcmp(v75, v74) )
        goto LABEL_52;
LABEL_53:
      if ( (v41 & 2) != 0 )
        goto LABEL_65;
      if ( v147.m256i_i64[2] )
      {
        v45 = (const char *)v147.m256i_i64[1];
        v46 = (char *)haystack;
        if ( !v42 )
          goto LABEL_57;
      }
      else
      {
        v45 = haystack;
        if ( !v42 )
        {
LABEL_58:
          if ( v132 != v94 )
            goto LABEL_59;
LABEL_65:
          v47 = nullptr;
          if ( (unsigned __int64)v131 <= 1 )
            goto LABEL_121;
          v115 = nullptr;
          v116 = 0;
          sub_17E40(&v117, &s1, 0);
          v48 = (void *)v118;
          if ( (_QWORD)v118 )
          {
            v48 = (void *)(v118 - 1);
            v49 = v118 - 1;
            if ( (_QWORD)v118 != 1 )
            {
              v50 = ((_QWORD)v116 == 0) + (_QWORD)v116 - 1LL;
              v51 = (__int64)v48 + v50;
              v52 = (unsigned __int64)v48 + ((_QWORD)v116 == 0) + (_QWORD)v116;
              if ( *((_QWORD *)&v116 + 1) < v52 )
              {
                s.m128i_i64[0] = (__int64)v48 + v50;
                s.m128i_i64[1] = (__int64)v48 + ((_QWORD)v116 == 0) + (_QWORD)v116;
                v115 = (void *)sub_96080(&v115, v115, v52, 1);
                v52 = s.m128i_u64[1];
                v51 = s.m128i_i64[0];
              }
              *(_QWORD *)&v116 = v52;
              *((_BYTE *)v115 + v51) = 0;
              v48 = memcpy((char *)v115 + v50, v117, v49);
            }
          }
          if ( v117 )
          {
            *(_QWORD *)&v118 = 0;
            j__free(v117);
          }
          v47 = v115;
          if ( (unsigned __int64)v116 <= 1 )
          {
LABEL_121:
            sub_169F0(
              (unsigned int)"Please specify the %s with -%s or with the %s envvar.\n"
                            "Also, you may use \"--set -%s\" to save the %s in the %s.\n"
                            "\n",
              (unsigned int)"server:port",
              (unsigned int)"h",
              (unsigned int)"VAULT_HOST",
              (unsigned int)"h",
              (unsigned int)"server:port",
              "registry",
              v40);
            v48 = v88;
          }
          if ( v47 )
            j__free(v47);
          if ( (unsigned __int64)v134 <= 1 )
            sub_169F0(
              (unsigned int)"Please specify the %s with -%s or with the %s envvar.\n"
                            "Also, you may use \"--set -%s\" to save the %s in the %s.\n"
                            "\n",
              (unsigned int)"user name",
              (unsigned int)"u",
              (unsigned int)"VAULT_USER",
              (unsigned int)"u",
              (unsigned int)"user name",
              "registry",
              v48);
          v53 = v136;
          v104 = nullptr;
          v107 = nullptr;
          v105 = 0;
          v108 = 0;
          if ( (unsigned __int64)v136 > 1 )
          {
            v76 = v135;
            v104 = (void *)sub_96080(&v104, 0, v136, 1);
            *(_QWORD *)&v105 = v53;
            memmove(v104, v76, v53 - 1);
            *((char *)v104 + v53 - 1) = 0;
          }
          else
          {
            sub_73250(v129, &v104, &v107);
          }
          if ( (unsigned __int64)v105 <= 1 )
            sub_169F0(
              (unsigned int)"Please specify the %s with -%s or with the %s envvar.\n"
                            "Also, you may use \"--set -%s\" to save the %s in the %s.\n"
                            "\n",
              (unsigned int)"password",
              (unsigned int)"p",
              (unsigned int)"VAULT_PASS",
              (unsigned int)"p",
              (unsigned int)"password",
              "keychain",
              v54);
          if ( (unsigned __int64)v131 <= 1 || (unsigned __int64)v134 <= 1 || (unsigned __int64)v105 <= 1 )
          {
            v22 = 1;
          }
          else
          {
            v55 = sub_31EC0();
            if ( !(*(unsigned __int8 (__fastcall **)(__int64, void **, int *))(*(_QWORD *)v55 + 24LL))(v55, &v107, v129) )
            {
              v82 = haystack;
              if ( (_QWORD)v108 )
                LODWORD(v82) = (_DWORD)v107;
              sub_16AB0((unsigned int)"%s", (_DWORD)v82, v56, v57, v58, v59, v90);
            }
            ptr = nullptr;
            v111 = 0;
            v60 = *(_QWORD *)v55;
            v100 = 0;
            (*(void (__fastcall **)(__int64, void **, __int32 *))(v60 + 32))(v55, &ptr, &v100);
            v117 = nullptr;
            v118 = 0;
            v61 = sub_62780(&v117, sub_16380, 16);
            if ( v117 )
            {
              s.m128i_i64[1] = v61;
              *(_QWORD *)&v118 = 0;
              j__free(v117);
              v61 = s.m128i_i64[1];
            }
            v119 = v61;
            v120 = nullptr;
            v122 = nullptr;
            v124 = nullptr;
            s.m128i_i32[2] = v100;
            v117 = &off_15F250;
            v118 = 0u;
            v126 = 0;
            v128 = 16;
            v121 = 0;
            v123 = 0;
            v125 = 0;
            v127 = 0;
            if ( ptr )
            {
              s.m128i_i64[0] = (__int64)ptr;
              v62 = strlen((const char *)ptr);
              v63 = s.m128i_i32[2];
              if ( v62 )
              {
                v92 = (void *)s.m128i_i64[0];
                v95 = s.m128i_i32[2];
                s.m128i_i64[0] = v62;
                s.m128i_i64[1] = v62 + 1;
                v120 = (void *)sub_96080(&v120, 0, v62 + 1, 1);
                *(_QWORD *)&v121 = s.m128i_i64[1];
                memmove(v120, v92, s.m128i_u64[0]);
                v63 = v95;
                *((_BYTE *)v120 + s.m128i_i64[0]) = 0;
              }
              HIDWORD(v128) = v63;
            }
            s.m128i_i64[1] = (__int64)haystack;
            if ( (_QWORD)v134 )
              s.m128i_i64[1] = (__int64)v133;
            v64 = haystack;
            if ( (_QWORD)v105 )
              v64 = (const char *)v104;
            if ( !(unsigned __int8)sub_18F90(&v117, &v107, v55, s.m128i_i64[1], v64) )
            {
              sub_17E40(&v115, &s1, 0);
              v85 = haystack;
              if ( (_QWORD)v116 )
                LODWORD(v85) = (_DWORD)v115;
              v86 = haystack;
              if ( (_QWORD)v108 )
                LODWORD(v86) = (_DWORD)v107;
              sub_16AB0(
                (unsigned int)"%s (server %s, user %s)",
                (_DWORD)v86,
                (_DWORD)v85,
                s.m128i_i32[2],
                v83,
                v84,
                v90);
            }
            v65 = v118;
            v66 = (_QWORD *)operator new(8u);
            *v66 = off_15F168;
            v67 = *(__int64 **)(v65 + 16);
            if ( v67 )
            {
              v68 = *v67;
              s.m128i_i64[1] = (__int64)v66;
              (*(void (__fastcall **)(__int64 *))(v68 + 8))(v67);
              v66 = (_QWORD *)s.m128i_i64[1];
            }
            v69 = (_QWORD)v102 == 0;
            *(_QWORD *)(v65 + 16) = v66;
            if ( !v69 )
            {
              v70 = (const char **)&off_15F1C0;
              s.m128i_i64[0] = v101;
              s.m128i_i64[1] = *(_QWORD *)(v101 + 8);
              while ( 1 )
              {
                v71 = haystack;
                if ( s.m128i_i64[1] )
                  v71 = *(const char **)s.m128i_i64[0];
                if ( !strcmp(v71, *v70) )
                  break;
                if ( ++v70 == (const char **)qword_15F208 )
                {
                  if ( n[0] > 1 )
                  {
                    v113 = 0;
                    v114 = 0;
                    sub_17260(&v115, "site");
                    s.m128i_i64[1] = (__int64)&v113;
                    sub_17B80(&v113, &v115);
                    if ( v115 )
                    {
                      *(_QWORD *)&v116 = 0;
                      j__free(v115);
                    }
                    sub_17260(&v115, "use");
                    sub_17B80(s.m128i_i64[1], &v115);
                    if ( v115 )
                    {
                      *(_QWORD *)&v116 = 0;
                      j__free(v115);
                    }
                    v77 = nullptr;
                    s.m128i_i64[0] = n[0];
                    if ( n[0] )
                    {
                      v77 = (void *)sub_96030(n[0]);
                      memcpy(v77, src, s.m128i_u64[0]);
                    }
                    v78 = v114;
                    if ( *((_QWORD *)&v114 + 1) < (unsigned __int64)(v114 + 1) )
                    {
                      v113 = sub_96080(s.m128i_i64[1], v113, v114 + 1, 24);
                      v78 = v114;
                    }
                    v79 = v113 + 24 * v78;
                    v80 = s.m128i_i64[1];
                    v81 = _mm_loadl_epi64(&s);
                    *(_QWORD *)v79 = v77;
                    *(__m128i *)(v79 + 8) = _mm_unpacklo_epi64(v81, v81);
                    byte_165A12 = 1;
                    *(_QWORD *)&v114 = v114 + 1;
                    sub_239C0(&v117, v80);
                    byte_165A12 = 0;
                    sub_172F0((void *)s.m128i_i64[1]);
                  }
                  break;
                }
              }
            }
            v72 = v97;
            if ( !(unsigned __int8)sub_17030(&v117, v97, "perm", sub_17360) )
              sub_17030(&v117, v72, "filt", sub_17620);
            v73 = sub_239C0(&v117, v97);
            if ( v55 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 8LL))(v55);
            v22 = v73 != 0;
            sub_16D80(&v117);
            if ( ptr )
            {
              *(_QWORD *)&v111 = 0;
              j__free(ptr);
            }
          }
          if ( v107 )
          {
            *(_QWORD *)&v108 = 0;
            j__free(v107);
          }
          if ( v104 )
          {
            *(_QWORD *)&v105 = 0;
            j__free(v104);
          }
          goto LABEL_117;
        }
      }
      v46 = s1;
LABEL_57:
      if ( strcmp(v46, v45) )
      {
LABEL_59:
        if ( v137 )
        {
          v138[0] = 0;
          j__free(v137);
          v137 = nullptr;
          v138[1] = 0;
        }
        v139 = 0;
        if ( v140 )
        {
          v141[0] = 0;
          j__free(v140);
          v140 = nullptr;
          v141[1] = 0;
        }
        if ( v142 )
        {
          v143[0] = 0;
          j__free(v142);
          v142 = nullptr;
          v143[1] = 0;
        }
        goto LABEL_65;
      }
      goto LABEL_58;
    }
    if ( !(unsigned __int8)sub_713B0(v129) )
    {
      v20 = v3[1];
      v21 = v20[1];
      switch ( v21 )
      {
        case 'v':
          byte_165962 ^= 1u;
          break;
        case 'z':
          a2 = (char **)"%X%n";
          s.m128i_i64[0] = (__int64)(v20 + 2);
          if ( (unsigned int)sub_9A8C0(
                               (int)v20 + 2,
                               (unsigned int)"%X%n",
                               (unsigned int)&dword_1671A4,
                               (unsigned int)&v117,
                               v18,
                               v19,
                               v90) != 1
            || (v28 = strlen(v20 + 2), v16 = (int)v117, (int)v117 != v28) )
          {
            if ( v20[4] )
              sub_16AB0((unsigned int)"Bad -z switch", (unsigned int)"%X%n", v16, v17, v18, v19, v90);
            dword_1671A4 = -1;
          }
          break;
        case '-':
          a2 = (char **)"--set";
          if ( strcmp(v3[1], "--set") )
            goto LABEL_25;
          sub_714C0(1);
          s.m128i_i8[8] = 1;
          break;
        default:
          goto LABEL_25;
      }
    }
    LODWORD(v97) = (_DWORD)v97 - 1;
    ++v3;
  }
  while ( (_DWORD)v97 != 1 );
  if ( !s.m128i_i8[8] )
    goto LABEL_25;
  v117 = nullptr;
  v118 = 0;
  if ( !(unsigned __int8)sub_73240(v129, &v117) )
  {
    v87 = haystack;
    if ( (_QWORD)v118 )
      LODWORD(v87) = (_DWORD)v117;
    sub_16AB0((unsigned int)"Couldn't persist credentials: %s\n", (_DWORD)v87, v24, v25, v26, v27, v90);
  }
  sub_169F0((unsigned int)"Information has been saved.\n", (unsigned int)&v117, v24, v25, v26, v27, v90);
  if ( v117 )
  {
    *(_QWORD *)&v118 = 0;
    j__free(v117);
  }
  v22 = 0;
LABEL_26:
  sub_16850(&v147);
  sub_16850(v129);
  return v22;
}

