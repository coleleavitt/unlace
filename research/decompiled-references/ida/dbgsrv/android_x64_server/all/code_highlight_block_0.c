/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: code_highlight_block_0
// Address: 0x0000000000070990

//----- (0000000000070990) ----------------------------------------------------
unsigned __int64 __fastcall code_highlight_block_0(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // r13
  __int64 v4; // r15
  __int64 v5; // r14
  int v6; // eax
  char v7; // bp
  char *v8; // rbp
  size_t v9; // r15
  _DWORD *v10; // rbp
  unsigned int utf8_char; // eax
  unsigned int v12; // ebp
  unsigned __int64 v13; // r12
  __int64 v14; // r14
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rdx
  char *v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  char *v20; // rbp
  char *v21; // rbx
  int v22; // edi
  char *v23; // rbp
  unsigned int *v24; // rax
  int v25; // eax
  int v26; // eax
  char *v27; // rdx
  unsigned __int64 v28; // rdx
  char *v29; // rbp
  int v30; // eax
  _BYTE *v31; // rbx
  int v32; // eax
  signed __int64 v33; // rbx
  unsigned int v34; // ecx
  __int64 v35; // rax
  unsigned int v36; // esi
  __int64 v37; // r14
  __int64 v38; // rbp
  __int64 v39; // rbx
  char v40; // al
  const char *v41; // rbp
  unsigned __int64 v42; // rbx
  const char **v43; // r14
  __int64 v44; // rax
  __int64 v45; // r13
  const char **v46; // r15
  signed __int64 v47; // rax
  char *v48; // rbx
  int v49; // eax
  int v50; // r13d
  char *v51; // rdi
  __int64 v52; // r12
  int v53; // eax
  char *v54; // rbp
  int v55; // ebx
  bool v56; // r12
  int v57; // eax
  int v58; // eax
  char v59; // r13
  unsigned __int64 v60; // rbp
  int v61; // eax
  int v62; // eax
  int v63; // eax
  unsigned __int64 v64; // r13
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // r13
  __int64 v68; // r12
  __int64 i; // rbx
  __int64 v70; // rax
  __int64 v71; // rbp
  int v72; // eax
  char *v73; // rax
  int v74; // eax
  __int64 v75; // rbp
  int v76; // eax
  __int64 v77; // r12
  int v78; // eax
  __int64 v80; // [rsp+0h] [rbp-D8h]
  unsigned int v81; // [rsp+Ch] [rbp-CCh]
  char v82; // [rsp+Ch] [rbp-CCh]
  unsigned __int64 v83; // [rsp+10h] [rbp-C8h]
  __int64 v84; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v85; // [rsp+10h] [rbp-C8h]
  __int64 v86; // [rsp+18h] [rbp-C0h]
  const char *s1; // [rsp+20h] [rbp-B8h]
  __int64 v88; // [rsp+28h] [rbp-B0h]
  char v89; // [rsp+28h] [rbp-B0h]
  char **v90; // [rsp+30h] [rbp-A8h]
  __int64 v91; // [rsp+38h] [rbp-A0h]
  char v92; // [rsp+38h] [rbp-A0h]
  char *v93; // [rsp+40h] [rbp-98h]
  signed __int64 v94; // [rsp+48h] [rbp-90h]
  __int64 v95; // [rsp+48h] [rbp-90h]
  unsigned int *v96; // [rsp+50h] [rbp-88h]
  size_t v97; // [rsp+60h] [rbp-78h]
  unsigned int *v98; // [rsp+68h] [rbp-70h]
  unsigned int *v99; // [rsp+70h] [rbp-68h]
  char *s; // [rsp+78h] [rbp-60h] BYREF
  void *ptr[2]; // [rsp+80h] [rbp-58h] BYREF
  __int64 v102; // [rsp+90h] [rbp-48h]
  char *v103[8]; // [rsp+98h] [rbp-40h] BYREF

  v103[1] = (char *)__readfsqword(0x28u);
  s = *(char **)a3;
  v93 = s;
  if ( !s )
    return __readfsqword(0x28u);
  v3 = (char **)a3;
  v4 = a2;
  v5 = a1;
  v97 = *(_QWORD *)(a3 + 8);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, 0);
  *(_QWORD *)(a1 + 160) = s;
  *(_QWORD *)(a1 + 168) = v93;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  if ( v6 <= 0 )
  {
    v96 = (unsigned int *)(a1 + 176);
    *(_DWORD *)(a1 + 176) = 0;
  }
  else
  {
    v7 = v6;
    if ( (v6 & 0xF) != 0 )
      sub_70840(a1, a2, (v6 & 0xF) - 1, (const char **)&s);
    if ( (v7 & 0x10) != 0 )
    {
      v8 = s;
      v9 = strlen(s);
      s = &v8[v9];
      sub_70580(a1, a2, (unsigned __int64)&v8[v9], *(_DWORD *)(a1 + 128));
      if ( v8[v9 - 1] == *(_BYTE *)(a1 + 184) )
      {
        v10 = (_DWORD *)(a1 + 128);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 40LL))(a2, 16);
      }
      else
      {
        v10 = (_DWORD *)(a1 + 116);
      }
      v4 = a2;
      v96 = (unsigned int *)(a1 + 176);
      *(_DWORD *)(a1 + 176) = *v10;
      v5 = a1;
    }
    else
    {
      v96 = (unsigned int *)(a1 + 176);
    }
  }
  v98 = (unsigned int *)(v5 + 128);
  v99 = (unsigned int *)(v5 + 116);
  v86 = v5;
  v90 = v3;
LABEL_14:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          ptr[0] = s;
          utf8_char = get_utf8_char((char **)ptr);
          if ( utf8_char >= 0x80 )
          {
            s1 = s;
          }
          else
          {
            v12 = utf8_char;
            if ( isspace((unsigned __int8)utf8_char) )
            {
              if ( (unsigned int)get_utf8_char(&s) == -1 )
                ++s;
              continue;
            }
            s1 = s;
            if ( !v12 )
            {
              if ( s != *(char **)(v5 + 168) )
                sub_70580(v5, v4, (unsigned __int64)s, *(_DWORD *)(v5 + 176));
              return __readfsqword(0x28u);
            }
          }
          break;
        }
        v13 = *(_QWORD *)(v5 + 96);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v5 + 88);
          v15 = 0;
          while ( 1 )
          {
            v16 = *(_QWORD *)(v14 + 48 * v15 + 8);
            if ( v16 >= 2 && !strncmp(s1, *(const char **)(v14 + 48 * v15), v16 - 1) )
              break;
            v15 = (int)v15 + 1;
            if ( v13 <= v15 )
            {
              v17 = (char *)s1;
              v5 = v86;
              goto LABEL_30;
            }
          }
          v18 = (_QWORD *)(v14 + 48 * v15 + 8);
          v5 = v86;
          sub_70580(v86, v4, (unsigned __int64)s1, *(_DWORD *)(v86 + 176));
          v19 = *v18 - 1LL;
          if ( !*v18 )
            v19 = 0;
          s += v19;
          sub_70840(v86, v4, v15, (const char **)&s);
          v17 = s;
        }
        else
        {
          v17 = (char *)s1;
        }
LABEL_30:
        ptr[0] = v17;
        if ( (unsigned int)get_utf8_char((char **)ptr) == *(char *)(v5 + 185) )
        {
          v20 = *(char **)(v5 + 168);
          v21 = s;
          if ( v20 == *v3 )
          {
LABEL_36:
            v20 = v21;
LABEL_37:
            sub_70580(v5, v4, (unsigned __int64)v20, *(_DWORD *)(v5 + 176));
            v23 = s;
            s = &v23[strlen(s)];
            sub_70580(v5, v4, (unsigned __int64)s, *(_DWORD *)(v5 + 128));
            v24 = v99;
            if ( *(s - 1) == *(_BYTE *)(v5 + 184) )
            {
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 40LL))(v4, 16);
              v24 = v98;
            }
            *v96 = *v24;
            continue;
          }
          if ( v20 == s )
            goto LABEL_37;
          while ( 1 )
          {
            v22 = (unsigned __int8)*v20;
            if ( (v22 & 0x80u) != 0 || !isspace(v22) )
              break;
            if ( v21 == ++v20 )
              goto LABEL_36;
          }
        }
        else
        {
          v21 = s;
        }
        break;
      }
      ptr[0] = v21;
      v25 = get_utf8_char((char **)ptr);
      if ( v25 != *(char *)(v5 + 182) && v25 != *(char *)(v5 + 180) )
      {
        v28 = *(_QWORD *)(v5 + 72);
        v29 = s;
        if ( v28 >= 2 && !strncmp(s, *(const char **)(v5 + 64), v28 - 1) )
        {
          sub_70580(v5, v4, (unsigned __int64)v29, *(_DWORD *)(v5 + 176));
          v54 = s;
          s = &v54[strlen(s)];
          sub_70580(v5, v4, (unsigned __int64)s, *(_DWORD *)(v5 + 120));
          *(_DWORD *)(v5 + 176) = *(_DWORD *)(v5 + 116);
          continue;
        }
        ptr[0] = v29;
        v30 = get_utf8_char((char **)ptr);
        if ( v30 != 95 && (v30 & 0xFFFFFFDF) - 65 > 0x19 )
          goto LABEL_73;
        do
        {
          do
          {
            v31 = ptr[0];
            v32 = get_utf8_char((char **)ptr);
          }
          while ( (unsigned int)(v32 - 48) < 0xA );
        }
        while ( v32 == 95 || (v32 & 0xFFFFFFDF) - 65 < 0x1A );
        v33 = v31 - v29;
        if ( v33 )
        {
          *(_OWORD *)ptr = 0;
          v102 = 0;
          if ( v33 != -1 )
          {
            ptr[0] = qvector_reserve((__int64)ptr, nullptr, v33 + 1, 1u);
            memset((char *)ptr[1] + (unsigned __int64)ptr[0], 0, v33 + 1 - (unsigned __int64)ptr[1]);
            ptr[1] = (void *)(v33 + 1);
          }
          *((_BYTE *)ptr[0] + v33) = 0;
          qstrncpy((_BYTE *)ptr[0], (__int64)s, v33 + 1);
          v94 = v33;
          v34 = *(_DWORD *)(v5 + 176);
          LODWORD(v103[0]) = v34;
          v35 = *(_QWORD *)(v5 + 144);
          v36 = v34;
          if ( !(8 * v35) )
            goto LABEL_190;
          v37 = *(_QWORD *)(v5 + 136);
          v38 = 8 * v35 - 8;
          v39 = 0;
          do
          {
            v40 = (v38 == v39)
                | (*(__int64 (__fastcall **)(_QWORD, char **, void **))(**(_QWORD **)(v37 + v39) + 24LL))(
                    *(_QWORD *)(v37 + v39),
                    v103,
                    ptr);
            v39 += 8;
          }
          while ( !v40 );
          v34 = *v96;
          v36 = (unsigned int)v103[0];
          v5 = v86;
          if ( *v96 == LODWORD(v103[0]) )
          {
LABEL_190:
            v83 = *(_QWORD *)(v5 + 48);
            if ( v83 )
            {
              v81 = v34;
              v88 = v4;
              v80 = *(_QWORD *)(v5 + 40);
              v41 = ::s1;
              if ( ptr[1] )
                v41 = (const char *)ptr[0];
              v42 = 0;
              while ( 1 )
              {
                v43 = *(const char ***)(v80 + 32 * v42);
                v44 = *(_QWORD *)(v80 + 32 * v42 + 8);
                v45 = 8 * v44;
                v46 = v43;
                if ( 8 * v44 )
                {
                  v91 = *(_QWORD *)(v80 + 32 * v42 + 8);
                  v46 = *(const char ***)(v80 + 32 * v42);
                  while ( strcmp(v41, *v46) )
                  {
                    ++v46;
                    v45 -= 8;
                    if ( !v45 )
                      goto LABEL_71;
                  }
                  v44 = v91;
                }
                if ( v46 != &v43[v44] )
                  break;
LABEL_71:
                v42 = (int)v42 + 1;
                if ( v83 <= v42 )
                {
                  v4 = v88;
                  v5 = v86;
                  v3 = v90;
                  v34 = v81;
                  goto LABEL_87;
                }
              }
              v36 = *(_DWORD *)(v80 + 32 * v42 + 24);
              LODWORD(v103[0]) = v36;
              v4 = v88;
              v5 = v86;
              v3 = v90;
              v34 = v81;
            }
          }
LABEL_87:
          v55 = 0;
          if ( v34 != v36 )
          {
            sub_70580(v5, v4, (unsigned __int64)s, v34);
            s += v94;
            v55 = 2;
            sub_70580(v5, v4, (unsigned __int64)s, (unsigned int)v103[0]);
          }
          if ( ptr[0] )
          {
            ptr[1] = nullptr;
            qfree(ptr[0]);
            ptr[0] = nullptr;
            v102 = 0;
          }
          if ( v55 )
            continue;
          v92 = 0;
          v47 = v94;
        }
        else
        {
LABEL_73:
          v92 = 1;
          v47 = 0;
        }
        v95 = v47;
        v48 = s;
        if ( !s )
          goto LABEL_141;
        ptr[0] = s;
        v49 = get_utf8_char((char **)ptr);
        if ( !v49 )
          goto LABEL_141;
        v50 = v49;
        sub_4ABC0((__int64)ptr, v93, v97);
        v51 = (char *)::s1;
        if ( ptr[1] )
          v51 = (char *)ptr[0];
        v84 = qustrlen(v51);
        if ( (unsigned int)(v50 - 48) >= 0xA )
        {
          v52 = 0;
          switch ( v50 )
          {
            case '+':
            case '-':
              if ( v48 == v93 )
                break;
              v103[0] = v48;
              prev_utf8_char(nullptr, v103, (unsigned __int64)v93);
              v53 = get_utf8_char(v103);
              if ( v53 == 46 || (unsigned int)(v53 - 48) < 0xA )
                goto LABEL_134;
              v52 = 0;
              if ( (v53 & 0xFFFFFFDF) - 65 < 0x1A )
                goto LABEL_137;
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
              goto LABEL_137;
            case '.':
            case 'E':
              break;
            default:
              if ( v50 == 101 )
                break;
              goto LABEL_137;
          }
        }
        v56 = v50 == 46;
        v103[0] = v48;
        skip_utf8(v103, 1);
        v57 = get_utf8_char(v103);
        v85 = v84 + 1;
        if ( v50 == 48 && (v57 | 0x20) == 0x78 )
        {
          v103[0] = v48;
          skip_utf8(v103, 2);
          v58 = get_utf8_char(v103);
          v59 = 0;
          if ( v58 == 46 || (unsigned int)(v58 - 48) < 0xA )
          {
            v60 = 2;
            if ( v85 <= 2 )
              goto LABEL_136;
            goto LABEL_100;
          }
          v60 = 2;
          if ( (v58 & 0xFFFFFFDF) - 65 > 0x19 )
            goto LABEL_134;
        }
        else
        {
          v64 = (unsigned int)(v50 - 43);
          if ( (unsigned int)v64 > 0x3A || (v65 = 0x400000004000005LL, !_bittest64(&v65, v64)) )
          {
            v60 = 1;
            v59 = 1;
            if ( v85 <= 1 )
            {
LABEL_136:
              v52 = v60;
              goto LABEL_137;
            }
            goto LABEL_100;
          }
          v59 = 1;
          if ( v85 < 2 )
            goto LABEL_134;
          v103[0] = v48;
          skip_utf8(v103, 1);
          v66 = get_utf8_char(v103);
          if ( v66 == 46 || (unsigned int)(v66 - 48) < 0xA )
          {
            v60 = 1;
LABEL_100:
            v89 = v56;
            v82 = 0;
            while ( 1 )
            {
              v52 = v60;
              while ( 1 )
              {
                v103[0] = v48;
                if ( v52 <= 0 )
                {
                  if ( v52 < 0 )
                  {
                    if ( !(_BYTE)under_debugger )
                      interr(1834);
                    goto LABEL_187;
                  }
                }
                else
                {
                  skip_utf8(v103, v52);
                }
                v61 = get_utf8_char(v103);
                if ( v61 != 46 && (unsigned int)(v61 - 48) >= 0xA && (v61 & 0xFFFFFFDF) - 65 > 0x19 )
                  goto LABEL_137;
                v103[0] = v48;
                if ( v52 > 0 )
                  skip_utf8(v103, v52);
                v62 = get_utf8_char(v103);
                if ( (unsigned __int8)v59 | ((unsigned int)(v62 - 48) < 0xA) )
                {
                  if ( (unsigned int)(v62 - 48) > 9 )
                    break;
                  goto LABEL_114;
                }
                if ( (v62 & 0xFFFFFFDF) - 65 >= 6 )
                  break;
LABEL_114:
                if ( ++v52 >= v85 )
                  goto LABEL_137;
              }
              if ( v62 == 46 )
              {
                if ( v89 )
                  goto LABEL_134;
                v60 = v52 + 1;
                v89 = 1;
                if ( v52 + 1 >= v85 )
                {
                  ++v52;
                  goto LABEL_137;
                }
              }
              else
              {
                if ( v82 || (v62 | 0x20) != 0x65 )
                {
                  if ( !v52 || v62 != 76 )
                    goto LABEL_134;
                  v75 = v52 + 1;
                  if ( v52 + 1 >= v85 )
                    goto LABEL_171;
                  v103[0] = v48;
                  if ( v75 > 0 )
                  {
                    skip_utf8(v103, v52 + 1);
                    v5 = v86;
                    v76 = get_utf8_char(v103);
                    if ( v76 == 46 || (unsigned int)(v76 - 48) < 0xA || (v76 & 0xFFFFFFDF) - 65 < 0x1A )
                      goto LABEL_134;
LABEL_171:
                    v77 = v52 - 1;
                    v103[0] = v48;
                    if ( v77 > 0 )
                      skip_utf8(v103, v77);
                    v78 = get_utf8_char(v103);
                    if ( ((unsigned int)(v78 - 48) < 0xA) | (unsigned __int8)v59 )
                    {
                      v52 = v75;
                      v5 = v86;
                      if ( (unsigned int)(v78 - 48) < 0xA )
                        goto LABEL_137;
LABEL_134:
                      v52 = 0;
                      goto LABEL_137;
                    }
                    v52 = v75;
                    v5 = v86;
                    if ( (v78 & 0xFFFFFFDF) - 65 >= 6 )
                      goto LABEL_134;
LABEL_137:
                    if ( ptr[0] )
                    {
                      ptr[1] = nullptr;
                      qfree(ptr[0]);
                      ptr[0] = nullptr;
                      v102 = 0;
                    }
                    if ( v52 )
                    {
                      sub_70580(v5, v4, (unsigned __int64)s, *(_DWORD *)(v5 + 176));
                      skip_utf8(&s, v52);
                      sub_70580(v5, v4, (unsigned __int64)s, 7u);
                      v3 = v90;
                      goto LABEL_14;
                    }
LABEL_141:
                    v67 = 8LL * *(_QWORD *)(v5 + 144);
                    if ( v67 )
                    {
                      v68 = *(_QWORD *)(v5 + 136);
                      for ( i = 0; i != v67; i += 8 )
                      {
                        v70 = (*(__int64 (__fastcall **)(_QWORD, void **, char *))(**(_QWORD **)(v68 + i) + 16LL))(
                                *(_QWORD *)(v68 + i),
                                ptr,
                                s);
                        if ( v70 > 0 )
                        {
                          v71 = v70;
                          sub_70580(v5, v4, (unsigned __int64)s, *(_DWORD *)(v5 + 176));
                          skip_utf8(&s, v71);
                          sub_70580(v5, v4, (unsigned __int64)s, (unsigned int)ptr[0]);
                          *(_DWORD *)(v5 + 176) = *(_DWORD *)(v5 + 116);
                        }
                      }
                    }
                    if ( v92 )
                    {
                      ptr[0] = s;
                      v72 = get_utf8_char((char **)ptr);
                      v3 = v90;
                      if ( v72 == 46 || (unsigned int)(v72 - 48) < 0xA || (v72 & 0xFFFFFFDF) - 65 <= 0x19 )
                      {
                        do
                        {
                          if ( (unsigned int)get_utf8_char(&s) == -1 )
                            v73 = ++s;
                          else
                            v73 = s;
                          ptr[0] = v73;
                          v74 = get_utf8_char((char **)ptr);
                        }
                        while ( v74 == 46 || (unsigned int)(v74 - 48) < 0xA || (v74 & 0xFFFFFFDF) - 65 <= 0x19 );
                      }
                    }
                    else
                    {
                      s += v95;
                      v3 = v90;
                    }
                    if ( s1 == s && (unsigned int)get_utf8_char(&s) == -1 )
                      ++s;
                    goto LABEL_14;
                  }
                  if ( !(_BYTE)under_debugger )
                    interr(1834);
LABEL_187:
                  BUG();
                }
                v60 = v52 + 1;
                v103[0] = v48;
                if ( v52 + 1 <= 0 )
                {
                  if ( !(_BYTE)under_debugger )
                    interr(1834);
                  goto LABEL_187;
                }
                skip_utf8(v103, v52 + 1);
                v63 = get_utf8_char(v103);
                if ( v63 == 43 || v63 == 45 )
                  v60 = v52 + 2;
                v82 = 1;
                v52 = v60;
                if ( v60 >= v85 )
                  goto LABEL_137;
              }
            }
          }
          v60 = 1;
          if ( (v66 & 0xFFFFFFDF) - 65 > 0x19 )
            goto LABEL_134;
        }
        if ( v60 >= v85 )
          goto LABEL_136;
        goto LABEL_100;
      }
      break;
    }
    *(_BYTE *)(v5 + 112) = v25;
    sub_70580(v5, v4, (unsigned __int64)s, *(_DWORD *)(v5 + 176));
    v26 = get_utf8_char(&s);
    v27 = s;
    if ( v26 == -1 )
      v27 = ++s;
    s = sub_70750(v5, v4, v27, *(char *)(v5 + 112));
    if ( s )
      continue;
    return __readfsqword(0x28u);
  }
}
// 71098: the cases 48, 49, 50, 51, 52, 53, 54, 55, 56, 57 were optimized away because r13d.4 is in (1..2F|>=3Au)
// 716F1: conditional instruction was optimized away because %var_C8.8>=2u
// 158B40: using guessed type __int64 under_debugger;
