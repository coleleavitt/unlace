unsigned __int64 __fastcall sub_A400(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 *a10)
{
  const char *v10; // rbx
  size_t v11; // rax
  void *v12; // r12
  size_t v13; // r14
  char *v14; // rdi
  FILE *v15; // rbx
  char *v16; // rsi
  size_t v17; // rax
  __int64 v18; // rax
  size_t v19; // r13
  size_t v20; // r14
  size_t v21; // r15
  int v22; // r15d
  double v23; // xmm4_8
  double v24; // xmm5_8
  size_t v25; // r14
  size_t v26; // r15
  size_t v27; // r12
  size_t v28; // r13
  size_t v29; // r13
  void *v30; // rdi
  size_t v31; // rdx
  bool v32; // zf
  char *v33; // r15
  void *v34; // rdi
  const char *v35; // rdi
  const char *v36; // rax
  char v37; // r10
  char *v39; // r10
  char *v40; // rdi
  char *v41; // r11
  unsigned __int64 v42; // r15
  size_t v43; // rcx
  char *v44; // rdi
  size_t v45; // r11
  __int64 v46; // r15
  __int64 v47; // rsi
  size_t v48; // rdx
  void *v49; // rdi
  void **v50; // r15
  char *v51; // rax
  __int64 v52; // r9
  size_t v53; // rcx
  char *v54; // r11
  __int64 v55; // rdx
  __int64 v56; // rsi
  char *v57; // rax
  char *v58; // r12
  char *v59; // r13
  char *v60; // r14
  char *v61; // rax
  __int64 v62; // rax
  const void *v63; // r10
  size_t v64; // r9
  char *v65; // r8
  void *v66; // r8
  void *v67; // rdi
  __int64 v68; // rbx
  unsigned __int64 v69; // r12
  char *v70; // rax
  char *v71; // r15
  char *v72; // rax
  signed __int64 v73; // rax
  unsigned __int64 v74; // r13
  unsigned __int64 v75; // r15
  size_t v76; // r13
  size_t v77; // r13
  char *v78; // r13
  __int64 v79; // rax
  char *v80; // rax
  const char *v81; // rbx
  char *v82; // r13
  const char *v83; // rsi
  const char *v84; // rdi
  const char *v85; // r8
  int v86; // eax
  char v87; // r10
  __int64 v88; // r15
  size_t v89; // r12
  const char *v90; // r14
  __int64 v91; // rax
  char *v92; // rbx
  const char *v93; // rsi
  const char *v94; // rdi
  char v95; // al
  size_t v96; // r12
  size_t v97; // r12
  size_t v98; // r12
  char *v99; // rsi
  __int64 v100; // rdx
  void *v101; // r14
  __int64 v102; // rax
  char *v103; // rax
  char *v104; // rdi
  __int64 v105; // r13
  char *v106; // r14
  __int64 v107; // r12
  char *v108; // rdx
  void *v109; // rax
  const char *v110; // rdi
  int v111; // eax
  void *v112; // rdi
  size_t v113; // rdx
  char *v114; // rax
  char *v115; // rdi
  char *v116; // r13
  size_t v117; // r13
  __int64 *v118; // r15
  unsigned __int64 v119; // rsi
  unsigned __int64 v120; // rcx
  __int64 v121; // rax
  unsigned __int64 v122; // rdx
  void *v123; // r13
  __m128i v124; // xmm0
  unsigned __int64 v125; // rax
  void *v126; // rdi
  size_t v127; // rax
  size_t v128; // r15
  size_t v129; // r13
  __int64 v130; // rax
  char *v131; // rsi
  unsigned __int64 v132; // rdx
  void *v133; // r15
  __m128i v134; // xmm0
  char *v135; // rax
  size_t v136; // r13
  size_t v137; // r13
  unsigned __int64 v138; // r13
  char *v139; // rdi
  __int64 v140; // r15
  __int64 v141; // r13
  char *v142; // rdx
  void *v143; // rax
  char *v144; // rdi
  __int64 v145; // r15
  __int64 v146; // r13
  char *v147; // rdx
  void *v148; // rax
  int *v149; // rax
  char *v150; // rax
  __m128i v151; // xmm0
  char *v152; // rax
  __m128i v153; // xmm0
  unsigned __int64 v154; // rax
  __int64 v155; // rcx
  __int64 v156; // r15
  char *v157; // rdx
  char *v158; // rsi
  __int64 v159; // rdx
  __int64 v160; // rdi
  void *v161; // rax
  size_t v162; // rdx
  _QWORD *v163; // rcx
  char *v164; // rdi
  __int64 v165; // r15
  char *v166; // rax
  __int64 v167; // rbx
  char *v168; // rcx
  void *v169; // rax
  __int64 v170; // rax
  size_t v171; // [rsp+8h] [rbp-1228h]
  const void *v172; // [rsp+10h] [rbp-1220h]
  size_t v173; // [rsp+18h] [rbp-1218h]
  const void *v174; // [rsp+20h] [rbp-1210h]
  char *v175; // [rsp+20h] [rbp-1210h]
  FILE *v176; // [rsp+28h] [rbp-1208h]
  __m128i v178; // [rsp+38h] [rbp-11F8h] BYREF
  _BYTE v179[24]; // [rsp+48h] [rbp-11E8h] BYREF
  void *src; // [rsp+60h] [rbp-11D0h]
  char *haystack; // [rsp+68h] [rbp-11C8h]
  void *v182; // [rsp+70h] [rbp-11C0h] BYREF
  __int128 v183; // [rsp+78h] [rbp-11B8h]
  void *v184; // [rsp+90h] [rbp-11A0h] BYREF
  __int128 v185; // [rsp+98h] [rbp-1198h]
  char *s1; // [rsp+B0h] [rbp-1180h] BYREF
  __int128 v187; // [rsp+B8h] [rbp-1178h]
  char *s; // [rsp+D0h] [rbp-1160h] BYREF
  __int128 v189; // [rsp+D8h] [rbp-1158h]
  void *v190; // [rsp+F0h] [rbp-1140h] BYREF
  __int128 v191; // [rsp+F8h] [rbp-1138h]
  void *v192; // [rsp+110h] [rbp-1120h] BYREF
  size_t v193[3]; // [rsp+118h] [rbp-1118h]
  void *v194; // [rsp+130h] [rbp-1100h] BYREF
  __int128 v195; // [rsp+138h] [rbp-10F8h]
  char *command; // [rsp+150h] [rbp-10E0h] BYREF
  void *v197[2]; // [rsp+158h] [rbp-10D8h]
  size_t v198[2]; // [rsp+168h] [rbp-10C8h]
  void *v199; // [rsp+178h] [rbp-10B8h]
  size_t v200[2]; // [rsp+180h] [rbp-10B0h]
  void *ptr; // [rsp+190h] [rbp-10A0h] BYREF
  size_t n[2]; // [rsp+198h] [rbp-1098h] BYREF
  __int128 v203; // [rsp+1A8h] [rbp-1088h]
  void *v204; // [rsp+1B8h] [rbp-1078h]
  __int128 v205; // [rsp+1C0h] [rbp-1070h]
  void *v206; // [rsp+1D0h] [rbp-1060h] BYREF
  __m128i v207; // [rsp+1D8h] [rbp-1058h]
  char v208; // [rsp+1E8h] [rbp-1048h]
  char v209; // [rsp+1F0h] [rbp-1040h] BYREF
  unsigned __int64 v210; // [rsp+11F8h] [rbp-38h]

  v210 = __readfsqword(0x28u);
  v183 = 0;
  v182 = nullptr;
  if ( !(unsigned __int8)sub_10F00("/sbin/ldconfig") )
    sub_10F00("/usr/bin/ldconfig");
  v184 = nullptr;
  v185 = 0;
  sub_7320((char **)&v184);
  v10 = ::s1;
  if ( (_QWORD)v185 )
    v10 = (const char *)v184;
  command = nullptr;
  *(_OWORD *)v197 = 0;
  if ( v10 )
  {
    v11 = strlen(v10);
    v12 = (void *)(v11 + 1);
    v13 = v11;
    *(_QWORD *)&v179[8] = &command;
    command = (char *)sub_11430(&command, 0, v11 + 1, 1);
    v197[0] = v12;
    memmove(command, v10, v13);
    command[v13] = 0;
    if ( !BYTE1(dword_1C340) )
      goto LABEL_7;
    v10 = command;
    if ( v197[0] )
    {
      v58 = (char *)v197[0] - 1;
      v59 = (char *)v197[0] + 4;
      v60 = (char *)v197[0] + 5;
      if ( v197[1] >= (char *)v197[0] + 5 )
        goto LABEL_115;
    }
    else
    {
      if ( v197[1] > &byte_5 )
      {
        v197[0] = &byte_6;
        command[5] = 0;
LABEL_117:
        v61 = command;
        *(_DWORD *)command = 1869112165;
        v61[4] = 32;
        goto LABEL_7;
      }
      v58 = nullptr;
      v60 = &byte_6;
      v59 = &byte_5;
    }
LABEL_119:
    command = (char *)sub_11430(*(_QWORD *)&v179[8], v10, v60, 1);
    v10 = command;
LABEL_115:
    v197[0] = v60;
    v59[(_QWORD)v10] = 0;
    if ( v58 )
      memmove(command + 5, command, (size_t)v58);
    goto LABEL_117;
  }
  if ( BYTE1(dword_1C340) )
  {
    v60 = &byte_6;
    v59 = &byte_5;
    v58 = nullptr;
    *(_QWORD *)&v179[8] = &command;
    goto LABEL_119;
  }
LABEL_7:
  sub_5F00();
  v14 = (char *)::s1;
  if ( v197[0] )
    v14 = command;
  v15 = popen(v14, "r");
  ptr = nullptr;
  *(_OWORD *)n = 0;
  if ( !v15 )
  {
    sub_7320((char **)&v182);
    if ( ptr )
    {
      n[0] = 0;
      j__free(ptr);
    }
    if ( command )
    {
      v197[0] = nullptr;
      j__free(command);
    }
    goto LABEL_107;
  }
  for ( src = &v209; ; memcpy((char *)ptr + v20, src, v19) )
  {
    v18 = sub_11130(v15, src);
    v19 = v18;
    if ( v18 <= 0 )
      break;
    v20 = n[0];
    v21 = n[0] + v18;
    if ( __CFADD__(n[0], v18) )
    {
      if ( n[0] > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( n[0] != 0x7FFFFFFFFFFFFFFFLL )
          n[0] = 0x7FFFFFFFFFFFFFFFLL;
        continue;
      }
      v21 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v16 = (char *)ptr;
    v17 = n[0];
    if ( n[1] < v21 )
    {
      ptr = (void *)sub_11430(&ptr, ptr, v21, 1);
      v16 = (char *)ptr;
      v17 = n[0];
    }
    memset(&v16[v17], 0, v21 - v17);
    n[0] = v21;
  }
  v22 = pclose(v15);
  if ( v22 )
  {
    sub_7320((char **)&v182);
    v25 = n[0];
    v15 = nullptr;
    if ( n[0] )
      goto LABEL_101;
  }
  else
  {
    v25 = n[0];
    v15 = nullptr;
    if ( !n[0] )
      goto LABEL_22;
LABEL_101:
    v15 = (FILE *)sub_113E0(v25);
    memcpy(v15, ptr, v25);
  }
LABEL_22:
  if ( ptr )
  {
    n[0] = 0;
    j__free(ptr);
  }
  if ( command )
  {
    v197[0] = nullptr;
    j__free(command);
  }
  if ( v22 )
  {
LABEL_107:
    sub_5F00();
    if ( v184 )
    {
      *(_QWORD *)&v185 = 0;
      j__free(v184);
    }
    if ( v182 )
    {
      *(_QWORD *)&v183 = 0;
      j__free(v182);
    }
    if ( v15 )
      j__free(v15);
    return v210 - __readfsqword(0x28u);
  }
  haystack = nullptr;
  v26 = 0;
  if ( !v25 )
    goto LABEL_41;
  do
  {
    v27 = v26;
    while ( 1 )
    {
      v28 = v27++;
      if ( *((_BYTE *)v15 + v27 - 1) == 10 )
        break;
      if ( v25 == v27 )
      {
        ptr = nullptr;
        v29 = v25 - v26;
        *(_OWORD *)n = 0;
        goto LABEL_32;
      }
    }
    a4 = 0;
    ptr = nullptr;
    *(_OWORD *)n = 0;
    v29 = v28 - v26;
    if ( !v29 )
    {
      if ( !haystack )
        goto LABEL_40;
      j__free(haystack);
      v34 = ptr;
      haystack = nullptr;
      if ( !ptr )
        goto LABEL_40;
      goto LABEL_37;
    }
LABEL_32:
    v30 = nullptr;
    v31 = v29 + 1;
    if ( v29 != -1 )
    {
      *(_QWORD *)&v179[16] = v29 + 1;
      ptr = (void *)sub_11430(&ptr, 0, v31, 1);
      v31 = *(_QWORD *)&v179[16];
      v30 = ptr;
    }
    n[0] = v31;
    memmove(v30, (char *)v15 + v26, v29);
    v23 = 0.0;
    v32 = haystack == nullptr;
    *((_BYTE *)ptr + v29) = 0;
    v33 = (char *)ptr;
    v29 = n[0];
    ptr = nullptr;
    *(_OWORD *)n = 0;
    if ( !v32 )
    {
      j__free(haystack);
      v34 = ptr;
      if ( ptr )
      {
        haystack = v33;
LABEL_37:
        n[0] = 0;
        j__free(v34);
        goto LABEL_38;
      }
    }
    haystack = v33;
LABEL_38:
    if ( !v29 || *haystack != 9 )
      goto LABEL_40;
    s1 = nullptr;
    v187 = 0;
    sub_51C0(haystack + 1, (__int64)&s1);
    v178.m128i_i64[0] = (__int64)s1;
    *(_QWORD *)&v179[16] = v187;
    if ( (unsigned __int64)v187 <= 0xB || strncmp(s1, "libpython3.", 0xBu) )
      goto LABEL_96;
    sub_5F00();
    s = nullptr;
    v189 = 0;
    sub_51C0(&haystack[*(_QWORD *)&v179[16]], (__int64)&s);
    ptr = nullptr;
    *(_OWORD *)n = 0;
    if ( !(_QWORD)v189 )
      goto LABEL_92;
    v39 = s;
    v40 = s;
    v178.m128i_i64[1] = (__int64)&s[v189 - 1];
    if ( (unsigned __int64)s >= v178.m128i_i64[1] )
    {
      if ( (_QWORD)v189 == 1 || s[(_QWORD)v189 - 2] != 44 )
        goto LABEL_93;
      v43 = 0;
      v41 = nullptr;
LABEL_86:
      if ( n[1] < v43 + 1 )
      {
        *(_QWORD *)&v179[16] = &ptr;
        ptr = (void *)sub_11430(&ptr, v41, v43 + 1, 24);
        v43 = n[0];
        v41 = (char *)ptr;
      }
      v57 = &v41[24 * v43];
      *(_QWORD *)v57 = 0;
      *(_OWORD *)(v57 + 8) = 0;
      v50 = (void **)ptr;
      v43 = ++n[0];
      goto LABEL_89;
    }
    v41 = nullptr;
    v42 = 0;
    v43 = 0;
    while ( 1 )
    {
      *(_QWORD *)v179 = v41;
      *(_QWORD *)&v179[8] = v43;
      *(_QWORD *)&v179[16] = v39;
      v51 = strchr(v39, 44);
      v52 = v178.m128i_i64[1];
      v53 = *(_QWORD *)&v179[8];
      v63 = *(const void **)&v179[16];
      v54 = *(char **)v179;
      v65 = v51;
      if ( v51 )
        v52 = (__int64)v51;
      v55 = *(_QWORD *)&v179[8] + 1LL;
      v64 = v52 - *(_QWORD *)&v179[16];
      if ( v42 < *(_QWORD *)&v179[8] + 1LL )
      {
        v56 = *(_QWORD *)v179;
        v174 = *(const void **)&v179[16];
        *(_QWORD *)v179 = v64;
        *(_QWORD *)&v179[8] = v51;
        *(_QWORD *)&v179[16] = &ptr;
        ptr = (void *)sub_11430(&ptr, v56, v55, 24);
        v53 = n[0];
        v54 = (char *)ptr;
        v63 = v174;
        v65 = *(char **)&v179[8];
        v64 = *(_QWORD *)v179;
      }
      a7 = 0;
      v44 = &v54[24 * v53];
      v45 = v64;
      *(_OWORD *)(v44 + 8) = 0;
      *(_QWORD *)v44 = 0;
      ++n[0];
      v46 = *((_QWORD *)v44 + 1);
      if ( v46 )
      {
        --v46;
        v45 = v64 + v46;
      }
      v47 = *(_QWORD *)v44;
      v48 = v45 + 1;
      if ( v45 != -1 )
      {
        v171 = v45;
        v172 = v63;
        v173 = v64;
        v175 = v65;
        *(_QWORD *)&v179[16] = &ptr;
        *(_QWORD *)v179 = v45 + 1;
        *(_QWORD *)&v179[8] = v44;
        v62 = sub_11430(v44, v47, v48, 1);
        v44 = *(char **)&v179[8];
        v45 = v171;
        v47 = v62;
        v63 = v172;
        v64 = v173;
        **(_QWORD **)&v179[8] = v62;
        v65 = v175;
        v48 = *(_QWORD *)v179;
      }
      *((_QWORD *)v44 + 1) = v48;
      *(_BYTE *)(v47 + v45) = 0;
      v49 = (void *)(*(_QWORD *)v44 + v46);
      *(_QWORD *)&v179[16] = v65;
      memmove(v49, v63, v64);
      v41 = (char *)ptr;
      v43 = n[0];
      v50 = (void **)ptr;
      if ( !*(_QWORD *)&v179[16] )
        break;
      v39 = (char *)(*(_QWORD *)&v179[16] + 1LL);
      if ( (unsigned __int64)(*(_QWORD *)&v179[16] + 1LL) >= v178.m128i_i64[1] )
        break;
      v42 = n[1];
    }
    if ( (unsigned __int64)v189 >= 2 && s[(_QWORD)v189 - 2] == 44 )
      goto LABEL_86;
LABEL_89:
    if ( v43 <= 1 )
    {
      if ( !v50 )
        goto LABEL_92;
      if ( !v43 )
      {
        j__free(v50);
        v40 = s;
        goto LABEL_93;
      }
      goto LABEL_120;
    }
    if ( !v50[1]
      || (v85 = (const char *)*v50,
          *(_QWORD *)&v179[8] = v43,
          *(_QWORD *)&v179[16] = v85,
          v86 = strcmp(v85, "(libc6"),
          v66 = *(void **)&v179[16],
          v43 = *(_QWORD *)&v179[8],
          v86) )
    {
      if ( !v50 )
        goto LABEL_92;
LABEL_120:
      v66 = *v50;
      v179[16] = 0;
LABEL_121:
      *(_QWORD *)&v179[8] = v15;
      v67 = v66;
      *(_QWORD *)v179 = v27;
      v68 = 0;
      v69 = v43;
      v70 = (char *)v50;
      v71 = haystack;
      haystack = nullptr;
      while ( 1 )
      {
        if ( v67 )
        {
          *(_QWORD *)&v70[v68 + 8] = 0;
          j__free(v67);
          v70 = (char *)ptr;
        }
        ++haystack;
        v68 += 24;
        if ( (unsigned __int64)haystack >= v69 )
          break;
        v67 = *(void **)&v70[v68];
      }
      haystack = v71;
      v15 = *(FILE **)&v179[8];
      n[0] = 0;
      v27 = *(_QWORD *)v179;
      j__free(v70);
      goto LABEL_127;
    }
    if ( (unsigned __int64)v50[4] <= 6 )
    {
      v179[16] = 0;
      if ( !v50 )
        goto LABEL_92;
      goto LABEL_121;
    }
    v110 = (const char *)v50[3];
    *(_OWORD *)v179 = *(_OWORD *)&v179[8];
    v111 = strncmp(v110, "x86-64", 6u);
    v66 = *(void **)&v179[8];
    v43 = *(_QWORD *)v179;
    v179[16] = v111 == 0;
    if ( v50 )
      goto LABEL_121;
LABEL_127:
    if ( !v179[16] )
      goto LABEL_92;
    v72 = strstr(haystack, " => ");
    if ( !v72 )
      goto LABEL_92;
    v73 = v72 - haystack;
    if ( v73 == -1 )
      goto LABEL_92;
    v74 = v29 - 1;
    v75 = v73 + 4;
    v190 = nullptr;
    v191 = 0;
    if ( v73 + 4 > v74 )
      v75 = v74;
    v76 = v74 - v75;
    if ( v76 )
    {
      v112 = nullptr;
      v113 = v76 + 1;
      if ( v76 != -1 )
      {
        *(_QWORD *)&v179[16] = v76 + 1;
        v190 = (void *)sub_11430(&v190, 0, v113, 1);
        v113 = *(_QWORD *)&v179[16];
        v112 = v190;
      }
      *(_QWORD *)&v191 = v113;
      memmove(v112, &haystack[v75], v76);
      *((_BYTE *)v190 + v76) = 0;
    }
    sub_5F00();
    command = nullptr;
    v197[0] = nullptr;
    v197[1] = nullptr;
    v199 = nullptr;
    v192 = nullptr;
    *(_QWORD *)&v179[8] = &command;
    *(_OWORD *)v198 = 0;
    *(_OWORD *)v200 = 0;
    *(_OWORD *)v193 = 0;
    if ( !(unsigned __int8)sub_5AD0((__int64)&command, (const char *)v178.m128i_i64[0], "libpython", ".so") )
      goto LABEL_227;
    if ( (unsigned int)command < (unsigned int)qword_1C338 || HIDWORD(command) < HIDWORD(qword_1C338) )
    {
      ptr = nullptr;
      *(_OWORD *)n = 0;
      sub_7320((char **)&ptr);
      sub_5F00();
      if ( ptr )
      {
        n[0] = 0;
        j__free(ptr);
      }
LABEL_240:
      if ( v192 )
      {
        v193[0] = 0;
        j__free(v192);
      }
      if ( v199 )
      {
        v200[0] = 0;
        j__free(v199);
      }
      if ( v197[1] )
      {
        v198[0] = 0;
        j__free(v197[1]);
      }
      if ( v190 )
      {
        *(_QWORD *)&v191 = 0;
        j__free(v190);
      }
      if ( s )
        j__free(s);
      if ( s1 )
        j__free(s1);
      goto LABEL_40;
    }
    sub_7320((char **)&v192);
    sub_5F00();
    *(_QWORD *)v179 = __realpath_chk();
    if ( !*(_QWORD *)v179 )
    {
      v149 = __errno_location();
      sub_11A30(*v149);
      sub_5F00();
      goto LABEL_240;
    }
    ptr = nullptr;
    *(_OWORD *)n = 0;
    v77 = strlen(*(const char **)v179);
    *(_QWORD *)&v179[16] = &ptr;
    v178.m128i_i64[1] = v77 + 1;
    ptr = (void *)sub_11430(&ptr, 0, v77 + 1, 1);
    n[0] = v178.m128i_u64[1];
    memmove(ptr, *(const void **)v179, v77);
    *((_BYTE *)ptr + v77) = 0;
    v78 = (char *)a10[3];
    v79 = a10[4];
    v178.m128i_i64[0] = n[0];
    v178.m128i_i64[1] = (__int64)&v78[24 * v79];
    if ( v78 == (char *)v178.m128i_i64[1] )
    {
      if ( ptr )
      {
        n[0] = 0;
        j__free(ptr);
      }
      goto LABEL_193;
    }
    v80 = haystack;
    v176 = v15;
    v81 = (const char *)ptr;
    haystack = v78;
    v82 = v80;
    while ( 1 )
    {
      if ( *((_QWORD *)haystack + 1) )
      {
        v83 = *(const char **)haystack;
        v84 = ::s1;
        if ( !v178.m128i_i64[0] )
          goto LABEL_140;
        goto LABEL_145;
      }
      if ( !v178.m128i_i64[0] )
        break;
      v83 = ::s1;
LABEL_145:
      v84 = v81;
LABEL_140:
      if ( !strcmp(v84, v83) )
        break;
      haystack += 24;
      if ( (char *)v178.m128i_i64[1] == haystack )
      {
        v114 = v82;
        v115 = (char *)v81;
        v116 = haystack;
        v15 = v176;
        haystack = v114;
        if ( !v115 )
          goto LABEL_193;
        goto LABEL_256;
      }
    }
    v150 = v82;
    v115 = (char *)v81;
    v116 = haystack;
    v15 = v176;
    haystack = v150;
    if ( !v115 )
      goto LABEL_257;
LABEL_256:
    n[0] = 0;
    j__free(v115);
LABEL_257:
    if ( v116 != (char *)v178.m128i_i64[1] )
    {
      sub_5F00();
      goto LABEL_240;
    }
LABEL_193:
    ptr = nullptr;
    *(_OWORD *)n = 0;
    v117 = strlen(*(const char **)v179);
    v178.m128i_i64[1] = v117 + 1;
    ptr = (void *)sub_11430(*(_QWORD *)&v179[16], 0, v117 + 1, 1);
    n[0] = v178.m128i_u64[1];
    v118 = a10 + 3;
    memmove(ptr, *(const void **)v179, v117);
    *((_BYTE *)ptr + v117) = 0;
    v119 = a10[3];
    v120 = a10[5];
    v121 = a10[4];
    v122 = v121 + 1;
    if ( *(_QWORD *)&v179[16] < v119 || *(_QWORD *)&v179[16] >= v119 + 24 * v120 )
    {
      if ( v120 < v122 )
      {
        v119 = sub_11430(v118, v119, v122, 24);
        a10[3] = v119;
        v121 = a10[4];
      }
      v153 = _mm_loadu_si128((const __m128i *)n);
      v154 = v119 + 24 * v121;
      *(_QWORD *)v154 = ptr;
      *(__m128i *)(v154 + 8) = v153;
      ++a10[4];
    }
    else
    {
      a3 = 0;
      v123 = ptr;
      v124 = _mm_loadl_epi64((const __m128i *)n);
      ptr = nullptr;
      a2 = (__m128)_mm_loadl_epi64((const __m128i *)&n[1]);
      *(_OWORD *)n = 0;
      if ( v120 < v122 )
      {
        v178.m128i_i64[0] = a2.m128_u64[0];
        v178.m128i_i64[1] = v124.m128i_i64[0];
        v170 = sub_11430(v118, v119, v122, 24);
        a2 = (__m128)_mm_loadl_epi64(&v178);
        v119 = v170;
        v124 = _mm_loadl_epi64((const __m128i *)&v178.m128i_u64[1]);
        a10[3] = v170;
        v121 = a10[4];
      }
      v125 = v119 + 24 * v121;
      *(_QWORD *)v125 = v123;
      *(__m128i *)(v125 + 8) = _mm_unpacklo_epi64(v124, (__m128i)a2);
      v126 = ptr;
      ++a10[4];
      if ( v126 )
      {
        n[0] = 0;
        j__free(v126);
      }
    }
    v194 = nullptr;
    ptr = nullptr;
    v195 = 0;
    *(_OWORD *)n = 0;
    v127 = strlen(*(const char **)v179);
    v128 = v127 + 1;
    v129 = v127;
    ptr = (void *)sub_11430(*(_QWORD *)&v179[16], 0, v127 + 1, 1);
    n[0] = v128;
    memmove(ptr, *(const void **)v179, v129);
    *((_BYTE *)ptr + v129) = 0;
    v130 = v195;
    v131 = (char *)v194;
    v132 = v195 + 1;
    if ( *(_QWORD *)&v179[16] < (unsigned __int64)v194
      || *(_QWORD *)&v179[16] >= (unsigned __int64)v194 + 24 * *((_QWORD *)&v195 + 1) )
    {
      if ( *((_QWORD *)&v195 + 1) < v132 )
      {
        v194 = (void *)sub_11430(&v194, v194, v132, 24);
        v131 = (char *)v194;
        v130 = v195;
      }
      v151 = _mm_loadu_si128((const __m128i *)n);
      v152 = &v131[24 * v130];
      *(_QWORD *)v152 = ptr;
      *(__m128i *)(v152 + 8) = v151;
      *(_QWORD *)&v195 = v195 + 1;
    }
    else
    {
      a3 = 0;
      v133 = ptr;
      v134 = _mm_loadl_epi64((const __m128i *)n);
      ptr = nullptr;
      a2 = (__m128)_mm_loadl_epi64((const __m128i *)&n[1]);
      *(_OWORD *)n = 0;
      if ( *((_QWORD *)&v195 + 1) < v132 )
      {
        v178.m128i_i64[1] = a2.m128_u64[0];
        *(_QWORD *)v179 = v134.m128i_i64[0];
        v194 = (void *)sub_11430(&v194, v194, v132, 24);
        v131 = (char *)v194;
        a2 = (__m128)_mm_loadl_epi64((const __m128i *)&v178.m128i_u64[1]);
        v134 = _mm_loadl_epi64((const __m128i *)v179);
        v130 = v195;
      }
      v135 = &v131[24 * v130];
      *(_QWORD *)v135 = v133;
      *(__m128i *)(v135 + 8) = _mm_unpacklo_epi64(v134, (__m128i)a2);
      *(_QWORD *)&v195 = v195 + 1;
      if ( ptr )
      {
        n[0] = 0;
        j__free(ptr);
      }
    }
    v136 = v198[0];
    n[1] = 0;
    v203 = 0;
    ptr = command;
    LODWORD(n[0]) = v197[0];
    if ( v198[0] )
    {
      n[1] = sub_113E0(v198[0]);
      *((_QWORD *)&v203 + 1) = v136;
      memcpy((void *)n[1], v197[1], v136);
      *(_QWORD *)&v203 = v136;
    }
    v137 = v200[0];
    v204 = nullptr;
    v205 = 0;
    if ( v200[0] )
    {
      v204 = (void *)sub_113E0(v200[0]);
      *((_QWORD *)&v205 + 1) = v137;
      memcpy(v204, v199, v137);
      *(_QWORD *)&v205 = v137;
    }
    v138 = v195;
    v206 = nullptr;
    v208 = 0;
    v207 = 0;
    if ( (_QWORD)v195 )
    {
      *(_QWORD *)v179 = sub_113E0(24 * v195);
      v155 = *(_QWORD *)v179;
      v156 = 0;
      do
      {
        v157 = (char *)v194;
        a8 = 0;
        *(_QWORD *)v155 = 0;
        *(_OWORD *)(v155 + 8) = 0;
        v158 = &v157[24 * v156];
        v159 = *((_QWORD *)v158 + 1);
        if ( v159 )
        {
          v160 = *((_QWORD *)v158 + 1);
          v178.m128i_i64[0] = v155;
          v178.m128i_i64[1] = v159;
          v161 = (void *)sub_113E0(v160);
          v162 = v178.m128i_u64[1];
          v163 = (_QWORD *)v178.m128i_i64[0];
          *(_QWORD *)(v178.m128i_i64[0] + 16) = v178.m128i_i64[1];
          *v163 = v161;
          memcpy(v161, *(const void **)v158, v162);
          v155 = v178.m128i_i64[0];
          *(_QWORD *)(v178.m128i_i64[0] + 8) = v178.m128i_i64[1];
        }
        ++v156;
        v155 += 24;
      }
      while ( v138 != v156 );
      v164 = (char *)v206;
      if ( v206 )
      {
        if ( v207.m128i_i64[0] )
        {
          v165 = 0;
          v166 = haystack;
          haystack = (char *)v15;
          v167 = v207.m128i_i64[0];
          v178.m128i_i64[1] = (__int64)v166;
          do
          {
            v168 = &v164[24 * v165];
            v169 = *(void **)v168;
            if ( *(_QWORD *)v168 )
            {
              *((_QWORD *)v168 + 1) = 0;
              j__free(v169);
              v164 = (char *)v206;
            }
            ++v165;
          }
          while ( v167 != v165 );
          v15 = (FILE *)haystack;
          haystack = (char *)v178.m128i_i64[1];
        }
        v207.m128i_i64[0] = 0;
        j__free(v164);
      }
    }
    else
    {
      *(_QWORD *)v179 = 0;
    }
    v206 = *(void **)v179;
    v207 = _mm_unpacklo_epi64((__m128i)v138, (__m128i)v138);
    sub_6E80(a10, *(__int64 **)&v179[16]);
    v139 = (char *)v206;
    if ( v206 )
    {
      v140 = v207.m128i_i64[0];
      v141 = 0;
      if ( v207.m128i_i64[0] )
      {
        do
        {
          v142 = &v139[24 * v141];
          v143 = *(void **)v142;
          if ( *(_QWORD *)v142 )
          {
            *((_QWORD *)v142 + 1) = 0;
            j__free(v143);
            v139 = (char *)v206;
          }
          ++v141;
        }
        while ( v140 != v141 );
      }
      v207.m128i_i64[0] = 0;
      j__free(v139);
    }
    if ( v204 )
    {
      *(_QWORD *)&v205 = 0;
      j__free(v204);
    }
    if ( n[1] )
    {
      *(_QWORD *)&v203 = 0;
      j__free((void *)n[1]);
    }
    v144 = (char *)v194;
    if ( v194 )
    {
      v145 = v195;
      v146 = 0;
      if ( (_QWORD)v195 )
      {
        do
        {
          v147 = &v144[24 * v146];
          v148 = *(void **)v147;
          if ( *(_QWORD *)v147 )
          {
            *((_QWORD *)v147 + 1) = 0;
            j__free(v148);
            v144 = (char *)v194;
          }
          ++v146;
        }
        while ( v145 != v146 );
      }
      *(_QWORD *)&v195 = 0;
      j__free(v144);
    }
LABEL_227:
    if ( v192 )
    {
      v193[0] = 0;
      j__free(v192);
    }
    if ( v199 )
    {
      v200[0] = 0;
      j__free(v199);
    }
    if ( v197[1] )
    {
      v198[0] = 0;
      j__free(v197[1]);
    }
    if ( v190 )
    {
      *(_QWORD *)&v191 = 0;
      j__free(v190);
    }
LABEL_92:
    v40 = s;
LABEL_93:
    if ( v40 )
      j__free(v40);
    v178.m128i_i64[0] = (__int64)s1;
LABEL_96:
    if ( v178.m128i_i64[0] )
      j__free((void *)v178.m128i_i64[0]);
LABEL_40:
    v26 = v27;
  }
  while ( v27 < v25 );
LABEL_41:
  v192 = nullptr;
  *(_OWORD *)v193 = 0;
  if ( !(unsigned __int8)sub_A330((__int64)&v192, "Python3TargetDLL", nullptr, 0.0, a2, a3, a4, v23, v24, a7, a8) )
    goto LABEL_52;
  sub_5F00();
  command = nullptr;
  v35 = ::s1;
  v197[0] = nullptr;
  v197[1] = nullptr;
  v199 = nullptr;
  v194 = nullptr;
  *(_OWORD *)v198 = 0;
  *(_OWORD *)v200 = 0;
  v195 = 0;
  if ( v193[0] )
    v35 = (const char *)v192;
  *(_QWORD *)&v179[8] = &command;
  v36 = (const char *)sub_10990(v35);
  *(_QWORD *)&v179[8] = &command;
  v37 = sub_5AD0((__int64)&command, v36, "libpython", ".so");
  if ( !v37 )
  {
    sub_5F00();
    goto LABEL_46;
  }
  LOBYTE(src) = v37;
  sub_7320((char **)&v194);
  v179[16] = (_BYTE)src;
  sub_50B0();
  v87 = v179[16];
  v88 = *a10;
  v32 = *a10 + 96 * a10[1] == *a10;
  src = (void *)(*a10 + 96 * a10[1]);
  if ( v32 )
    goto LABEL_167;
  v178.m128i_i64[1] = (__int64)v15;
  v179[16] = 0;
  v89 = v193[0];
  v179[0] = v87;
  v90 = (const char *)v192;
  v178.m128i_i64[0] = (__int64)haystack;
  while ( 2 )
  {
    v91 = 3LL * *(_QWORD *)(v88 + 72);
    haystack = *(char **)(v88 + 64);
    v92 = &haystack[8 * v91];
    if ( haystack == v92 )
      goto LABEL_165;
    while ( 2 )
    {
      if ( *((_QWORD *)haystack + 1) )
      {
        v93 = *(const char **)haystack;
        v94 = ::s1;
        if ( v89 )
          goto LABEL_162;
        goto LABEL_157;
      }
      if ( v89 )
      {
        v93 = ::s1;
LABEL_162:
        v94 = v90;
LABEL_157:
        if ( !strcmp(v94, v93) )
          break;
        haystack += 24;
        if ( v92 == haystack )
          goto LABEL_165;
        continue;
      }
      break;
    }
    if ( v92 != haystack )
    {
      v95 = v179[0];
      *(_BYTE *)(v88 + 88) = 1;
      v179[16] = v95;
    }
LABEL_165:
    v88 += 96;
    if ( (void *)v88 != src )
      continue;
    break;
  }
  v15 = (FILE *)v178.m128i_i64[1];
  haystack = (char *)v178.m128i_i64[0];
  if ( !v179[16] )
  {
LABEL_167:
    v96 = v198[0];
    n[1] = 0;
    v203 = 0;
    ptr = command;
    LODWORD(n[0]) = v197[0];
    if ( v198[0] )
    {
      n[1] = sub_113E0(v198[0]);
      *((_QWORD *)&v203 + 1) = v96;
      memcpy((void *)n[1], v197[1], v96);
      *(_QWORD *)&v203 = v96;
    }
    v97 = v200[0];
    v204 = nullptr;
    v205 = 0;
    if ( v200[0] )
    {
      v204 = (void *)sub_113E0(v200[0]);
      *((_QWORD *)&v205 + 1) = v97;
      memcpy(v204, v199, v97);
      *(_QWORD *)&v205 = v97;
    }
    v98 = v193[0];
    v206 = nullptr;
    v208 = 0;
    v207 = 0;
    if ( !v193[0] )
    {
      v99 = nullptr;
      v100 = 1;
      v101 = nullptr;
      goto LABEL_173;
    }
    *(_QWORD *)&v179[16] = &ptr;
    v101 = (void *)sub_113E0(v193[0]);
    memcpy(v101, v192, v98);
    v102 = v207.m128i_i64[0];
    v99 = (char *)v206;
    v100 = v207.m128i_i64[0] + 1;
    if ( v207.m128i_i64[1] < (unsigned __int64)(v207.m128i_i64[0] + 1) )
    {
LABEL_173:
      v206 = (void *)sub_11430(&v206, v99, v100, 24);
      v99 = (char *)v206;
      v102 = v207.m128i_i64[0];
    }
    v103 = &v99[24 * v102];
    *(_QWORD *)v103 = v101;
    *(__m128i *)(v103 + 8) = _mm_unpacklo_epi64((__m128i)v98, (__m128i)v98);
    ++v207.m128i_i64[0];
    v208 = 1;
    *(_QWORD *)&v179[16] = &ptr;
    sub_6E80(a10, (__int64 *)&ptr);
    v104 = (char *)v206;
    if ( v206 )
    {
      v105 = v207.m128i_i64[0];
      if ( v207.m128i_i64[0] )
      {
        v106 = haystack;
        v107 = 0;
        do
        {
          v108 = &v104[24 * v107];
          v109 = *(void **)v108;
          if ( *(_QWORD *)v108 )
          {
            *((_QWORD *)v108 + 1) = 0;
            j__free(v109);
            v104 = (char *)v206;
          }
          ++v107;
        }
        while ( v105 != v107 );
        haystack = v106;
      }
      v207.m128i_i64[0] = 0;
      j__free(v104);
    }
    if ( v204 )
    {
      *(_QWORD *)&v205 = 0;
      j__free(v204);
    }
    if ( n[1] )
    {
      *(_QWORD *)&v203 = 0;
      j__free((void *)n[1]);
    }
  }
LABEL_46:
  if ( v194 )
  {
    *(_QWORD *)&v195 = 0;
    j__free(v194);
  }
  if ( v199 )
  {
    v200[0] = 0;
    j__free(v199);
  }
  if ( v197[1] )
  {
    v198[0] = 0;
    j__free(v197[1]);
  }
LABEL_52:
  if ( v192 )
  {
    v193[0] = 0;
    j__free(v192);
  }
  if ( haystack )
    j__free(haystack);
  if ( v184 )
  {
    *(_QWORD *)&v185 = 0;
    j__free(v184);
  }
  if ( v182 )
  {
    *(_QWORD *)&v183 = 0;
    j__free(v182);
  }
  if ( v15 )
    j__free(v15);
  return v210 - __readfsqword(0x28u);
}

