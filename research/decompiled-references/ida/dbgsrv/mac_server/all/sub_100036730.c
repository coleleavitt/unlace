/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100036730
// Address: 0x0000000100036730

//----- (0000000100036730) ----------------------------------------------------
__int64 __fastcall sub_100036730(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  __int64 v4; // r13
  int v5; // eax
  char v6; // bl
  char *v7; // rbx
  char *v8; // rsi
  unsigned int v9; // r15d
  unsigned int v10; // r12d
  unsigned int v11; // eax
  int *v12; // rbx
  unsigned int utf8_char; // eax
  char *v14; // rax
  unsigned __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // rax
  int v18; // ebx
  unsigned __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rdi
  char *v22; // rsi
  char *v23; // rax
  unsigned int v24; // r12d
  unsigned int v25; // r13d
  unsigned int v26; // eax
  bool v27; // cf
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // rcx
  __int64 v30; // r14
  char *v31; // r12
  char *v32; // rbx
  char *v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // r15d
  unsigned int v36; // r12d
  unsigned int v37; // eax
  char *v38; // r15
  unsigned int v39; // ebx
  unsigned int v40; // r12d
  unsigned int v41; // eax
  _DWORD *v42; // rax
  int v43; // eax
  __int64 v44; // r14
  char *v45; // rbx
  char *v46; // rsi
  unsigned int v47; // r15d
  unsigned int v48; // r12d
  unsigned int v49; // eax
  int v50; // eax
  char *v51; // rdx
  unsigned __int64 v52; // rdx
  char *v53; // rbx
  int v54; // eax
  __int64 v55; // r14
  int v56; // eax
  __int64 v57; // r14
  __int64 v58; // r13
  unsigned int v59; // r14d
  __int64 v60; // rax
  unsigned int v61; // r15d
  __int64 v62; // rbx
  __int64 v63; // r14
  __int64 v64; // r15
  char v65; // al
  bool v66; // cl
  const char *v67; // rbx
  __int64 v68; // r15
  int v69; // r13d
  const char **v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // r15
  const char **v73; // r14
  __int64 v74; // r12
  char *v75; // r12
  int v76; // ebx
  void *v77; // rax
  char *v78; // r12
  unsigned int v79; // r15d
  unsigned int v80; // r12d
  unsigned int v81; // eax
  char *v82; // r15
  unsigned int v83; // ebx
  unsigned int v84; // r12d
  unsigned int v85; // eax
  char *v86; // rbx
  char *v87; // rsi
  unsigned int v88; // r12d
  unsigned int v89; // eax
  unsigned int v90; // eax
  char *v91; // rbx
  unsigned int v92; // r12d
  unsigned int v93; // eax
  char *v94; // rdi
  __int64 v95; // r13
  int v96; // eax
  bool v97; // r13
  int v98; // eax
  bool v99; // r15
  unsigned __int64 v100; // r14
  unsigned __int64 v101; // rbx
  __int64 v102; // rax
  int v103; // eax
  char v104; // bl
  int v105; // eax
  int v106; // eax
  int v107; // eax
  char *v108; // rbx
  char *v109; // rsi
  unsigned int v110; // r15d
  unsigned int v111; // r12d
  unsigned int v112; // eax
  char *v113; // rbx
  char *v114; // rsi
  unsigned int v115; // r15d
  unsigned int v116; // eax
  __int64 v117; // r14
  __int64 v118; // rbx
  char *v119; // r13
  char *v120; // rsi
  unsigned int v121; // r12d
  unsigned int v122; // r15d
  unsigned int v123; // eax
  char *v124; // rbx
  __int64 v125; // rcx
  char *v126; // rsi
  unsigned int v127; // r12d
  unsigned int v128; // r15d
  unsigned int v129; // eax
  int i; // eax
  int v131; // eax
  char *v132; // rcx
  int v133; // eax
  int v134; // eax
  char *v135; // rbx
  char *v136; // rsi
  unsigned int v137; // r15d
  unsigned int v138; // r12d
  unsigned int v139; // eax
  _DWORD *v141; // [rsp+0h] [rbp-E0h]
  __int64 v142; // [rsp+8h] [rbp-D8h]
  _DWORD *v143; // [rsp+10h] [rbp-D0h]
  unsigned int v145; // [rsp+2Ch] [rbp-B4h]
  size_t __len; // [rsp+30h] [rbp-B0h]
  __int64 v147; // [rsp+38h] [rbp-A8h]
  unsigned int v148; // [rsp+44h] [rbp-9Ch]
  const char **v149; // [rsp+48h] [rbp-98h]
  char v150; // [rsp+48h] [rbp-98h]
  char *__src; // [rsp+50h] [rbp-90h]
  char *__s1; // [rsp+58h] [rbp-88h]
  unsigned __int64 v153; // [rsp+60h] [rbp-80h]
  char v154; // [rsp+60h] [rbp-80h]
  __int64 v155; // [rsp+60h] [rbp-80h]
  char **v156; // [rsp+68h] [rbp-78h]
  __int64 v157; // [rsp+70h] [rbp-70h]
  unsigned int v158; // [rsp+70h] [rbp-70h]
  __int64 v159; // [rsp+70h] [rbp-70h]
  unsigned __int64 v160; // [rsp+70h] [rbp-70h]
  __int64 v161; // [rsp+70h] [rbp-70h]
  __int64 v162; // [rsp+70h] [rbp-70h]
  char *__s; // [rsp+88h] [rbp-58h] BYREF
  __int128 v166; // [rsp+90h] [rbp-50h] BYREF
  __int64 v167; // [rsp+A0h] [rbp-40h]
  char *v168; // [rsp+A8h] [rbp-38h] BYREF

  __s = *(char **)a3;
  __src = __s;
  if ( !__s )
    return __stack_chk_guard;
  __len = *(_QWORD *)(a3 + 8);
  v3 = 0;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, 0);
  v4 = a1;
  *(_QWORD *)(a1 + 160) = __s;
  *(_QWORD *)(a1 + 168) = __src;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  if ( v5 > 0 )
  {
    v6 = v5;
    if ( (v5 & 0xF) != 0 )
    {
      sub_100036610(a1, a2, (v5 & 0xF) - 1, &__s);
      v4 = a1;
    }
    if ( (v6 & 0x10) == 0 )
      goto LABEL_13;
    v7 = &__s[strlen(__s)];
    __s = v7;
    v8 = *(char **)(v4 + 168);
    if ( v8 < v7 )
    {
      v9 = *(_DWORD *)(v4 + 128);
      v10 = sub_100036380(*(_BYTE **)(v4 + 160), v8);
      v11 = sub_100036380(*(_BYTE **)(v4 + 168), v7);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, v10, v11, v9);
      *(_QWORD *)(v4 + 168) = v7;
    }
    if ( *(v7 - 1) == *(_BYTE *)(v4 + 184) )
    {
      v12 = (int *)(v4 + 128);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 40LL))(a2, 16);
    }
    else
    {
      v12 = (int *)(v4 + 116);
    }
    v3 = *v12;
  }
  *(_DWORD *)(v4 + 176) = v3;
LABEL_13:
  v141 = (_DWORD *)(v4 + 116);
  v143 = (_DWORD *)(v4 + 128);
  v156 = (char **)(v4 + 168);
  while ( 1 )
  {
    while ( 1 )
    {
      *(_QWORD *)&v166 = __s;
      utf8_char = get_utf8_char((char **)&v166);
      if ( utf8_char <= 0x7F )
        break;
LABEL_18:
      v14 = __s;
      v15 = *(_QWORD *)(a1 + 96);
      __s1 = __s;
      if ( v15 )
      {
        v16 = *(_QWORD *)(a1 + 88);
        v17 = 0;
        v18 = 0;
        while ( 1 )
        {
          v19 = *(_QWORD *)(v16 + 48 * v17 + 8);
          if ( v19 >= 2 )
          {
            v20 = v16 + 48 * v17;
            if ( !strncmp(__s1, *(const char **)v20, v19 - 1) )
              break;
          }
          v17 = ++v18;
          if ( v15 <= v18 )
          {
            v14 = __s1;
            goto LABEL_29;
          }
        }
        v21 = a1;
        v22 = *(char **)(a1 + 168);
        v23 = __s1;
        if ( v22 < __s1 )
        {
          v24 = *(_DWORD *)(a1 + 176);
          v25 = sub_100036380(*(_BYTE **)(a1 + 160), v22);
          v26 = sub_100036380(*(_BYTE **)(a1 + 168), __s1);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, v25, v26, v24);
          *v156 = __s1;
          v19 = *(_QWORD *)(v20 + 8);
          v23 = __s;
          v21 = a1;
        }
        v27 = v19 == 0;
        v28 = v19 - 1;
        v29 = 0;
        if ( !v27 )
          v29 = v28;
        __s = &v23[v29];
        sub_100036610(v21, a2, v18, &__s);
        v14 = __s;
      }
LABEL_29:
      *(_QWORD *)&v166 = v14;
      v30 = a1;
      if ( (unsigned int)get_utf8_char((char **)&v166) == *(char *)(a1 + 185) )
      {
        v31 = *(char **)(a1 + 168);
        v32 = __s;
        v33 = v31;
        if ( v31 != *(char **)a3 && v31 != __s )
        {
          do
          {
            v34 = *v33;
            if ( v34 < 0 || (_DefaultRuneLocale.__runetype[v34] & 0x4000) == 0 )
              goto LABEL_41;
          }
          while ( ++v33 != __s );
        }
        if ( v31 < __s )
        {
          v35 = *(_DWORD *)(a1 + 176);
          v36 = sub_100036380(*(_BYTE **)(a1 + 160), *(_BYTE **)(a1 + 168));
          v37 = sub_100036380(*(_BYTE **)(a1 + 168), v32);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, v36, v37, v35);
          *v156 = v32;
          v31 = v32;
          v32 = __s;
          v30 = a1;
        }
        v38 = &v32[strlen(v32)];
        __s = v38;
        if ( v31 < v38 )
        {
          v39 = *(_DWORD *)(v30 + 128);
          v40 = sub_100036380(*(_BYTE **)(v30 + 160), v31);
          v41 = sub_100036380(*(_BYTE **)(a1 + 168), v38);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, v40, v41, v39);
          *v156 = v38;
          v38 = __s;
          v30 = a1;
        }
        v42 = v141;
        if ( *(v38 - 1) == *(_BYTE *)(v30 + 184) )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 40LL))(a2, 16);
          v42 = v143;
          v30 = a1;
        }
        *(_DWORD *)(v30 + 176) = *v42;
      }
      else
      {
        v32 = __s;
LABEL_41:
        *(_QWORD *)&v166 = v32;
        v43 = get_utf8_char((char **)&v166);
        v44 = a1;
        if ( v43 == *(char *)(a1 + 182) || v43 == *(char *)(a1 + 180) )
        {
          *(_BYTE *)(a1 + 112) = v43;
          v45 = __s;
          v46 = *(char **)(a1 + 168);
          if ( v46 < __s )
          {
            v47 = *(_DWORD *)(a1 + 176);
            v48 = sub_100036380(*(_BYTE **)(a1 + 160), v46);
            v49 = sub_100036380(*(_BYTE **)(a1 + 168), v45);
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, v48, v49, v47);
            *v156 = v45;
          }
          v50 = get_utf8_char(&__s);
          v51 = __s;
          if ( v50 == -1 )
            v51 = ++__s;
          __s = sub_1000364A0(a1, a2, v51, *(char *)(a1 + 112));
          if ( !__s )
            return __stack_chk_guard;
        }
        else
        {
          v52 = *(_QWORD *)(a1 + 72);
          v53 = __s;
          if ( v52 >= 2 && !strncmp(__s, *(const char **)(a1 + 64), v52 - 1) )
          {
            v78 = *(char **)(a1 + 168);
            if ( v78 < v53 )
            {
              v79 = *(_DWORD *)(a1 + 176);
              v80 = sub_100036380(*(_BYTE **)(a1 + 160), *(_BYTE **)(a1 + 168));
              v81 = sub_100036380(*(_BYTE **)(a1 + 168), v53);
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, v80, v81, v79);
              *v156 = v53;
              v78 = v53;
              v53 = __s;
              v44 = a1;
            }
            v82 = &v53[strlen(v53)];
            __s = v82;
            if ( v78 < v82 )
            {
              v83 = *(_DWORD *)(v44 + 120);
              v84 = sub_100036380(*(_BYTE **)(v44 + 160), v78);
              v85 = sub_100036380(*(_BYTE **)(a1 + 168), v82);
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, v84, v85, v83);
              *v156 = v82;
              v44 = a1;
            }
            *(_DWORD *)(v44 + 176) = *(_DWORD *)(v44 + 116);
          }
          else
          {
            *(_QWORD *)&v166 = v53;
            v54 = get_utf8_char((char **)&v166);
            if ( v54 != 95 && (v54 & 0xFFFFFFDF) - 65 > 0x19 )
              goto LABEL_75;
            do
            {
              do
              {
                v55 = v166;
                v56 = get_utf8_char((char **)&v166);
              }
              while ( (unsigned int)(v56 - 48) < 0xA );
            }
            while ( v56 == 95 || (v56 & 0xFFFFFFDF) - 65 < 0x1A );
            v57 = v55 - (_QWORD)v53;
            v58 = a1;
            if ( v57 )
            {
              v166 = 0;
              v167 = 0;
              sub_100012FB0((__int64)&v166, v57);
              qstrncpy((_BYTE *)v166, (__int64)__s, v57 + 1);
              v147 = v57;
              v59 = *(_DWORD *)(a1 + 176);
              LODWORD(v168) = v59;
              v60 = *(_QWORD *)(a1 + 144);
              v61 = v59;
              if ( (v60 & 0x1FFFFFFFFFFFFFFFLL) == 0 )
                goto LABEL_195;
              v62 = *(_QWORD *)(a1 + 136);
              v63 = 8 * v60 - 8;
              v64 = 0;
              do
              {
                v65 = (*(__int64 (__fastcall **)(_QWORD, char **, __int128 *))(**(_QWORD **)(v62 + v64) + 24LL))(
                        *(_QWORD *)(v62 + v64),
                        &v168,
                        &v166);
                v66 = v63 != v64;
                v64 += 8;
              }
              while ( (v66 & (unsigned __int8)~v65) != 0 );
              v59 = *(_DWORD *)(a1 + 176);
              v61 = (unsigned int)v168;
              if ( v59 == (_DWORD)v168 )
              {
LABEL_195:
                v153 = *(_QWORD *)(a1 + 48);
                if ( v153 )
                {
                  v145 = v61;
                  v148 = v59;
                  v67 = _s1;
                  if ( *((_QWORD *)&v166 + 1) )
                    v67 = (const char *)v166;
                  v157 = *(_QWORD *)(a1 + 40);
                  v68 = 0;
                  v69 = 0;
                  while ( 1 )
                  {
                    v72 = 32 * v68;
                    v70 = *(const char ***)(v157 + v72);
                    v71 = *(_QWORD *)(v157 + v72 + 8);
                    v73 = v70;
                    if ( (v71 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
                    {
                      v142 = *(_QWORD *)(v157 + v72 + 8);
                      v74 = 8 * v71;
                      v149 = *(const char ***)(v157 + v72);
                      v73 = v149;
                      while ( strcmp(v67, *v73) )
                      {
                        ++v73;
                        v74 -= 8;
                        if ( !v74 )
                          goto LABEL_69;
                      }
                      v70 = v149;
                      v71 = v142;
                    }
                    if ( v73 != &v70[v71] )
                      break;
LABEL_69:
                    v68 = ++v69;
                    if ( v153 <= v69 )
                    {
                      v58 = a1;
                      v59 = v148;
                      v61 = v145;
                      goto LABEL_87;
                    }
                  }
                  v61 = *(_DWORD *)(v72 + v157 + 24);
                  LODWORD(v168) = v61;
                  v58 = a1;
                  v59 = v148;
                  if ( v148 == v61 )
                    goto LABEL_105;
LABEL_88:
                  v86 = __s;
                  v87 = *(char **)(v58 + 168);
                  if ( v87 >= __s )
                  {
                    v90 = v61;
                  }
                  else
                  {
                    v88 = sub_100036380(*(_BYTE **)(v58 + 160), v87);
                    v89 = sub_100036380(*(_BYTE **)(v58 + 168), v86);
                    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, v88, v89, v59);
                    *(_QWORD *)(v58 + 168) = v86;
                    v87 = v86;
                    v86 = __s;
                    v90 = (unsigned int)v168;
                  }
                  v91 = &v86[v147];
                  __s = v91;
                  if ( v87 < v91 )
                  {
                    v158 = v90;
                    v92 = sub_100036380(*(_BYTE **)(v58 + 160), v87);
                    v93 = sub_100036380(*(_BYTE **)(v58 + 168), v91);
                    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, v92, v93, v158);
                    *(_QWORD *)(v58 + 168) = v91;
                  }
                  goto LABEL_105;
                }
              }
LABEL_87:
              if ( v59 != v61 )
                goto LABEL_88;
LABEL_105:
              if ( (_QWORD)v166 )
              {
                *((_QWORD *)&v166 + 1) = 0;
                qfree((void *)v166);
              }
              if ( v59 == v61 )
              {
                v150 = 0;
                goto LABEL_76;
              }
            }
            else
            {
LABEL_75:
              v150 = 1;
              v147 = 0;
LABEL_76:
              if ( !__s )
                goto LABEL_154;
              v75 = __s;
              *(_QWORD *)&v166 = __s;
              v76 = get_utf8_char((char **)&v166);
              if ( !v76 )
                goto LABEL_154;
              v166 = 0;
              v167 = 0;
              if ( __len
                && (__len == -1
                  ? (v77 = nullptr)
                  : (void *)(v77 = qvector_reserve((__int64)&v166, nullptr, __len + 1, 1u), *(_QWORD *)&v166 = v77),
                    *((_QWORD *)&v166 + 1) = __len + 1,
                    memmove(v77, __src, __len),
                    *(_BYTE *)(v166 + __len) = 0,
                    *((_QWORD *)&v166 + 1)) )
              {
                v94 = (char *)v166;
              }
              else
              {
                v94 = (char *)_s1;
              }
              v159 = qustrlen(v94);
              if ( (unsigned int)(v76 - 48) >= 0xA )
              {
                v95 = 0;
                switch ( v76 )
                {
                  case '+':
                  case '-':
                    if ( v75 == __src )
                      break;
                    v168 = v75;
                    prev_utf8_char(nullptr, (unsigned __int64 *)&v168, (unsigned __int64)__src);
                    v96 = get_utf8_char(&v168);
                    if ( v96 == 46 || (unsigned int)(v96 - 58) > 0xFFFFFFF5 )
                      goto LABEL_119;
                    v95 = 0;
                    if ( (v96 & 0xFFFFFFDF) - 91 > 0xFFFFFFE5 )
                      goto LABEL_147;
                    break;
                  case ',':
                  case '/':
                  case ':':
                  case ';':
                  case '<':
                  case '=':
                  case '>':
                  case '?':
                  case '@':
                  case 'A':
                  case 'B':
                  case 'C':
                  case 'D':
                    goto LABEL_147;
                  case '.':
                  case 'E':
                    break;
                  default:
                    if ( v76 == 101 )
                      break;
                    goto LABEL_147;
                }
              }
              v97 = v76 == 46;
              v168 = v75;
              skip_utf8(&v168, 1);
              v160 = v159 + 1;
              v98 = v76 ^ 0x30 | get_utf8_char(&v168) & 0xFFFFFFDF ^ 0x58;
              v99 = v98 != 0;
              if ( v98 )
              {
                v100 = 1;
                v101 = (unsigned int)(v76 - 43);
                if ( (unsigned int)v101 > 0x3A )
                  goto LABEL_120;
                v102 = 0x400000004000005LL;
                if ( !_bittest64(&v102, v101) )
                  goto LABEL_120;
                if ( v160 < 2 )
                  goto LABEL_119;
                v168 = v75;
                skip_utf8(&v168, 1);
                v103 = get_utf8_char(&v168);
                if ( v103 == 46 )
                  goto LABEL_120;
LABEL_117:
                if ( (unsigned int)(v103 - 58) <= 0xFFFFFFF5 && (v103 & 0xFFFFFFDF) - 91 < 0xFFFFFFE6 )
                  goto LABEL_119;
                goto LABEL_120;
              }
              v168 = v75;
              skip_utf8(&v168, 2);
              v103 = get_utf8_char(&v168);
              v100 = 2;
              if ( v103 != 46 )
                goto LABEL_117;
LABEL_120:
              if ( v100 >= v160 )
              {
                v95 = v100;
                goto LABEL_147;
              }
              v154 = v97;
              v104 = 0;
              while ( 2 )
              {
                while ( 2 )
                {
                  v95 = v100;
                  while ( 1 )
                  {
                    v168 = v75;
                    if ( v95 <= 0 )
                    {
                      if ( v95 < 0 )
                      {
                        if ( under_debugger != 1 )
                          goto LABEL_189;
                        goto LABEL_190;
                      }
                    }
                    else
                    {
                      skip_utf8(&v168, v95);
                    }
                    v105 = get_utf8_char(&v168);
                    if ( v105 != 46 && (unsigned int)(v105 - 58) <= 0xFFFFFFF5 && (v105 & 0xFFFFFFDF) - 91 < 0xFFFFFFE6 )
                      goto LABEL_147;
                    v168 = v75;
                    if ( v95 > 0 )
                      skip_utf8(&v168, v95);
                    v106 = get_utf8_char(&v168);
                    if ( v99 || (unsigned int)(v106 - 48) < 0xA )
                    {
                      if ( (unsigned int)(v106 - 48) > 9 )
                        break;
                      goto LABEL_124;
                    }
                    if ( (v106 & 0xFFFFFFDF) - 65 >= 6 )
                      break;
LABEL_124:
                    if ( ++v95 >= v160 )
                      goto LABEL_147;
                  }
                  if ( v106 == 46 )
                  {
                    if ( (v154 & 1) != 0 )
                      goto LABEL_119;
                    v154 = 1;
                    v100 = v95 + 1;
                    if ( v95 + 1 >= v160 )
                    {
                      ++v95;
                      goto LABEL_147;
                    }
                    continue;
                  }
                  break;
                }
                if ( !(((v106 & 0xFFFFFFDF) != 69) | v104 & 1) )
                {
                  v168 = v75;
                  if ( (unsigned __int64)v95 > 0x7FFFFFFFFFFFFFFELL )
                  {
                    if ( under_debugger != 1 )
LABEL_189:
                      interr(0x72Au);
LABEL_190:
                    BUG();
                  }
                  v100 = v95 + 1;
                  skip_utf8(&v168, v95 + 1);
                  v107 = get_utf8_char(&v168);
                  if ( v107 == 43 || v107 == 45 )
                    v100 = v95 + 2;
                  v104 = 1;
                  v95 = v100;
                  if ( v100 >= v160 )
                    goto LABEL_147;
                  continue;
                }
                break;
              }
              if ( v106 != 76 )
                goto LABEL_119;
              if ( v95 + 1 < v160 )
              {
                sub_1000378A0(v75, v95 + 1, 0);
                if ( v133 == 46 || (unsigned int)(v133 - 58) > 0xFFFFFFF5 || (v133 & 0xFFFFFFDF) - 91 > 0xFFFFFFE5 )
                  goto LABEL_119;
              }
              sub_1000378A0(v75, v95 - 1, (unsigned __int64)__src);
              if ( (unsigned int)(v134 - 48) < 0xA || v99 )
              {
                ++v95;
                if ( (unsigned int)(v134 - 48) < 0xA )
                  goto LABEL_147;
LABEL_119:
                v95 = 0;
                goto LABEL_147;
              }
              ++v95;
              if ( (v134 & 0xFFFFFFDF) - 65 >= 6 )
                goto LABEL_119;
LABEL_147:
              if ( (_QWORD)v166 )
              {
                *((_QWORD *)&v166 + 1) = 0;
                qfree((void *)v166);
              }
              if ( v95 )
              {
                v108 = __s;
                v109 = *(char **)(a1 + 168);
                if ( v109 < __s )
                {
                  v110 = *(_DWORD *)(a1 + 176);
                  v111 = sub_100036380(*(_BYTE **)(a1 + 160), v109);
                  v112 = sub_100036380(*(_BYTE **)(a1 + 168), v108);
                  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, v111, v112, v110);
                  *v156 = v108;
                }
                skip_utf8(&__s, v95);
                v113 = __s;
                v114 = *(char **)(a1 + 168);
                if ( v114 < __s )
                {
                  v115 = sub_100036380(*(_BYTE **)(a1 + 160), v114);
                  v116 = sub_100036380(*(_BYTE **)(a1 + 168), v113);
                  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a2 + 16LL))(a2, v115, v116, 7);
                  *v156 = v113;
                }
              }
              else
              {
LABEL_154:
                v161 = *(_QWORD *)(a1 + 144);
                if ( (v161 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
                {
                  v155 = *(_QWORD *)(a1 + 136);
                  v162 = 8 * v161;
                  v117 = 0;
                  do
                  {
                    v118 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, char *))(**(_QWORD **)(v155 + v117) + 16LL))(
                             *(_QWORD *)(v155 + v117),
                             &v166,
                             __s);
                    if ( v118 > 0 )
                    {
                      v119 = __s;
                      v120 = *(char **)(a1 + 168);
                      if ( v120 < __s )
                      {
                        v121 = *(_DWORD *)(a1 + 176);
                        v122 = sub_100036380(*(_BYTE **)(a1 + 160), v120);
                        v123 = sub_100036380(*(_BYTE **)(a1 + 168), v119);
                        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(
                          a2,
                          v122,
                          v123,
                          v121);
                        *v156 = v119;
                      }
                      skip_utf8(&__s, v118);
                      v124 = __s;
                      v125 = a1;
                      v126 = *(char **)(a1 + 168);
                      if ( v126 < __s )
                      {
                        v127 = v166;
                        v128 = sub_100036380(*(_BYTE **)(a1 + 160), v126);
                        v129 = sub_100036380(*(_BYTE **)(a1 + 168), v124);
                        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(
                          a2,
                          v128,
                          v129,
                          v127);
                        *v156 = v124;
                        v125 = a1;
                      }
                      *(_DWORD *)(v125 + 176) = *(_DWORD *)(v125 + 116);
                    }
                    v117 += 8;
                  }
                  while ( v162 != v117 );
                }
                if ( v150 )
                {
                  *(_QWORD *)&v166 = __s;
                  for ( i = get_utf8_char((char **)&v166);
                        i == 46 || (unsigned int)(i - 58) > 0xFFFFFFF5 || (i & 0xFFFFFFDF) - 91 >= 0xFFFFFFE6;
                        i = get_utf8_char((char **)&v166) )
                  {
                    v131 = get_utf8_char(&__s);
                    v132 = __s;
                    if ( v131 == -1 )
                      v132 = ++__s;
                    *(_QWORD *)&v166 = v132;
                  }
                }
                else
                {
                  __s += v147;
                }
                if ( __s1 == __s && (unsigned int)get_utf8_char(&__s) == -1 )
                  ++__s;
              }
            }
          }
        }
      }
    }
    if ( (_DefaultRuneLocale.__runetype[utf8_char] & 0x4000) == 0 )
      break;
    if ( (unsigned int)get_utf8_char(&__s) == -1 )
      ++__s;
  }
  if ( utf8_char )
    goto LABEL_18;
  v135 = __s;
  v136 = *(char **)(a1 + 168);
  if ( v136 < __s )
  {
    v137 = *(_DWORD *)(a1 + 176);
    v138 = sub_100036380(*(_BYTE **)(a1 + 160), v136);
    v139 = sub_100036380(*(_BYTE **)(a1 + 168), v135);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, v138, v139, v137);
    *v156 = v135;
  }
  return __stack_chk_guard;
}
// 10003710C: the cases 48, 49, 50, 51, 52, 53, 54, 55, 56, 57 were optimized away because ebx.4 is in (<30u|>=3Au)
// 1000376C2: variable 'v133' is possibly undefined
// 1000376F8: variable 'v134' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
