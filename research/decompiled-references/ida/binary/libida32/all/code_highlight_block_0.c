unsigned __int64 __fastcall code_highlight_block_0(__m128i *a1, __int64 a2, __int64 a3)
{
  char *v3; // rcx
  __int64 v4; // rbx
  void (*v5)(); // rdx
  char *v6; // rax
  __int64 (*v7)(); // rdx
  unsigned int utf8_char; // eax
  unsigned int v9; // ebp
  int v10; // edx
  unsigned __int64 v11; // r12
  char *v12; // rbp
  __int64 v13; // r13
  int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // rdx
  char *v18; // rax
  int v19; // eax
  char *v20; // r14
  char *v21; // r13
  unsigned int v22; // edi
  int v23; // eax
  char *v24; // r13
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // r15
  char *v28; // r14
  int v29; // eax
  unsigned __int64 v30; // rdx
  char *v31; // rax
  signed __int64 v32; // r13
  _QWORD *v33; // r14
  unsigned int v34; // eax
  _QWORD *v35; // r15
  __int64 (*v36)(); // rax
  unsigned int v37; // ecx
  char *v38; // r15
  int v39; // r13d
  _QWORD *v40; // r14
  __int64 v41; // rax
  char *v42; // rdx
  _QWORD *v43; // r12
  __int64 (*v44)(); // rax
  __int64 v45; // rax
  int v46; // eax
  char *v47; // rdx
  int v49; // eax
  int v50; // eax
  char *v51; // rdi
  unsigned __int64 v52; // r14
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rsi
  char **v56; // rdi
  __int64 v57; // rax
  int v58; // eax
  bool v59; // r13
  __int64 v60; // r14
  int v61; // eax
  char *v62; // rbp
  size_t v63; // rax
  unsigned int v64; // ecx
  int v65; // ebp
  int v66; // eax
  char *v67; // rdi
  int v68; // eax
  int v69; // eax
  char *v70; // r12
  char *v71; // r13
  unsigned __int64 v72; // rbp
  __int64 v73; // rsi
  int v74; // r12d
  __int64 v75; // r14
  const char **v76; // rbx
  __int64 v77; // r15
  unsigned int v78; // eax
  int v79; // edx
  int v80; // eax
  int v81; // eax
  int v82; // eax
  signed __int64 v84; // [rsp+18h] [rbp-F0h]
  size_t n; // [rsp+28h] [rbp-E0h]
  char *src; // [rsp+30h] [rbp-D8h]
  unsigned __int8 v88; // [rsp+38h] [rbp-D0h]
  __int64 v89; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v90; // [rsp+40h] [rbp-C8h]
  unsigned int v91; // [rsp+40h] [rbp-C8h]
  char *v92; // [rsp+48h] [rbp-C0h]
  char v93; // [rsp+50h] [rbp-B8h]
  char *v94; // [rsp+50h] [rbp-B8h]
  __int64 v95; // [rsp+58h] [rbp-B0h]
  char *s1; // [rsp+60h] [rbp-A8h] BYREF
  char *v97; // [rsp+68h] [rbp-A0h] BYREF
  char *v98; // [rsp+70h] [rbp-98h] BYREF
  char *v99; // [rsp+78h] [rbp-90h] BYREF
  char *v100; // [rsp+80h] [rbp-88h] BYREF
  char *v101; // [rsp+88h] [rbp-80h] BYREF
  char *v102; // [rsp+90h] [rbp-78h] BYREF
  char *v103; // [rsp+98h] [rbp-70h] BYREF
  char *v104; // [rsp+A0h] [rbp-68h] BYREF
  char *v105; // [rsp+A8h] [rbp-60h] BYREF
  char *v106; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v107; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v108; // [rsp+C8h] [rbp-40h]

  v108 = __readfsqword(0x28u);
  v3 = *(char **)a3;
  src = v3;
  s1 = *(char **)a3;
  if ( !v3 )
    return v108 - __readfsqword(0x28u);
  v4 = (__int64)a1;
  n = *(_QWORD *)(a3 + 8);
  v5 = *(void (**)())(*(_QWORD *)a2 + 40LL);
  v6 = v3;
  if ( v5 != nullsub_223 )
  {
    ((void (__fastcall *)(__int64, _QWORD))v5)(a2, 0);
    v6 = s1;
  }
  a1[10] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)v6);
  v7 = *(__int64 (**)())(*(_QWORD *)a2 + 24LL);
  if ( v7 == sub_76F3D0 || (v65 = ((__int64 (__fastcall *)(__int64))v7)(a2), v6 = s1, v65 <= 0) )
  {
    a1[11].m128i_i32[0] = 0;
  }
  else
  {
    if ( (v65 & 0xF) != 0 )
      sub_76F780((__int64)a1, a2, (v65 & 0xF) - 1, (const char **)&s1);
    if ( (v65 & 0x10) != 0 )
      sub_76F860((__int64)a1, a2, (const char **)&s1);
    v6 = s1;
  }
  while ( 1 )
  {
    v106 = v6;
    utf8_char = get_utf8_char(&v106);
    v9 = utf8_char;
    if ( utf8_char <= 0x7F )
    {
      if ( isspace(utf8_char) )
        goto LABEL_8;
      if ( !v9 )
        break;
    }
    v11 = *(_QWORD *)(v4 + 96);
    v12 = s1;
    if ( v11 )
    {
      v13 = *(_QWORD *)(v4 + 88);
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        v16 = v13 + 48 * v15;
        v17 = *(_QWORD *)(v16 + 8);
        if ( v17 > 1 && !strncmp(v12, *(const char **)v16, v17 - 1) )
          break;
        v15 = ++v14;
        if ( v14 >= v11 )
          goto LABEL_16;
      }
      sub_76F450(v4, a2, v12, *(_DWORD *)(v4 + 176));
      s1 += (*(_QWORD *)(v16 + 8) == 0) + *(_QWORD *)(v16 + 8) - 1;
      sub_76F780(v4, a2, v14, (const char **)&s1);
      v18 = s1;
    }
    else
    {
LABEL_16:
      v18 = v12;
    }
    v106 = v18;
    v19 = get_utf8_char(&v106);
    v20 = s1;
    if ( *(char *)(v4 + 185) != v19 )
      goto LABEL_21;
    v21 = *(char **)(v4 + 168);
    if ( v21 == *(char **)a3 || v21 == s1 )
    {
LABEL_56:
      sub_76F450(v4, a2, v20, *(_DWORD *)(v4 + 176));
      sub_76F860(v4, a2, (const char **)&s1);
      v6 = s1;
    }
    else
    {
      while ( 1 )
      {
        v22 = *v21;
        if ( v22 > 0x7F || !isspace(v22) )
          break;
        if ( ++v21 == v20 )
          goto LABEL_56;
      }
LABEL_21:
      v106 = v20;
      v23 = get_utf8_char(&v106);
      v24 = s1;
      if ( *(char *)(v4 + 182) == v23 || *(char *)(v4 + 180) == v23 )
      {
        *(_BYTE *)(v4 + 112) = v23;
        sub_76F450(v4, a2, v24, *(_DWORD *)(v4 + 176));
        v46 = get_utf8_char(&s1);
        v47 = s1;
        if ( v46 == -1 )
          v47 = ++s1;
        v6 = sub_76F6A0(v4, a2, v47, *(_BYTE *)(v4 + 112));
        s1 = v6;
        if ( !v6 )
          return v108 - __readfsqword(0x28u);
      }
      else
      {
        v25 = *(_QWORD *)(v4 + 72);
        if ( v25 > 1 && !strncmp(s1, *(const char **)(v4 + 64), v25 - 1) )
        {
          sub_76F450(v4, a2, v24, *(_DWORD *)(v4 + 176));
          v62 = s1;
          v63 = strlen(s1);
          v64 = *(_DWORD *)(v4 + 120);
          s1 = &v62[v63];
          sub_76F450(v4, a2, &v62[v63], v64);
          *(_DWORD *)(v4 + 176) = *(_DWORD *)(v4 + 116);
          v6 = s1;
        }
        else
        {
          v106 = v24;
          v26 = (unsigned int)get_utf8_char(&v106) - 65;
          if ( (unsigned int)v26 > 0x39 )
            goto LABEL_41;
          v27 = 0x3FFFFFF43FFFFFFLL;
          if ( !_bittest64(&v27, v26) )
            goto LABEL_41;
          do
          {
            while ( 1 )
            {
              v28 = v106;
              v29 = get_utf8_char(&v106);
              v30 = (unsigned int)(v29 - 65);
              if ( (unsigned int)v30 > 0x39 )
                break;
              if ( !_bittest64(&v27, v30) )
                goto LABEL_29;
            }
          }
          while ( (unsigned int)(v29 - 48) <= 9 );
LABEL_29:
          v84 = v28 - v24;
          if ( v28 == v24 )
          {
LABEL_41:
            v84 = 0;
LABEL_42:
            v38 = s1;
            if ( s1 )
            {
              v106 = s1;
              v39 = get_utf8_char(&v106);
              if ( !v39 )
                goto LABEL_44;
              v106 = nullptr;
              v107 = 0;
              if ( !n )
                goto LABEL_73;
              v67 = nullptr;
              if ( n != -1 )
              {
                v106 = (char *)qvector_reserve(&v106, 0, n + 1, 1);
                v67 = v106;
              }
              *(_QWORD *)&v107 = n + 1;
              memmove(v67, src, n);
              v106[n] = 0;
              if ( (_QWORD)v107 )
                v51 = v106;
              else
LABEL_73:
                v51 = (char *)haystack;
              v90 = qustrlen(v51) + 1;
              if ( (unsigned int)(v39 - 48) <= 9 )
              {
                v55 = 1;
                v98 = v38;
                skip_utf8(&v98);
                v56 = &v98;
                v66 = get_utf8_char(&v98);
                v52 = (unsigned int)(v39 - 43);
                if ( v39 == 48 )
                {
                  if ( (v66 & 0xFFFFFFDF) == 0x58 )
                  {
                    v55 = 2;
                    v97 = v38;
                    skip_utf8(&v97);
                    v56 = &v97;
                    v80 = get_utf8_char(&v97);
                    if ( (v80 & 0xFFFFFFDF) - 65 <= 0x19 )
                    {
                      v88 = 1;
                      v59 = 0;
                      v60 = 2;
                    }
                    else
                    {
                      v88 = v80 == 46 || (unsigned int)(v80 - 48) <= 9;
                      if ( !v88 )
                        goto LABEL_92;
                      v59 = 0;
                      v60 = 2;
                    }
                  }
                  else
                  {
                    v88 = 0;
                    v59 = 0;
                    v60 = 1;
                  }
                  goto LABEL_104;
                }
              }
              else
              {
                v52 = (unsigned int)(v39 - 43);
                if ( (v52 & 0xFFFFFFFD) != 0 )
                {
                  v53 = (unsigned int)(v39 - 46);
                  if ( (unsigned int)v53 > 0x37 )
                    goto LABEL_92;
                  v54 = 0x80000000800001LL;
                  if ( !_bittest64(&v54, v53) )
                    goto LABEL_92;
                }
                else if ( v38 != src )
                {
                  v99 = v38;
                  prev_utf8_char(0, &v99, src);
                  v61 = get_utf8_char(&v99);
                  if ( (unsigned int)(v61 - 97) <= 0x19
                    || (unsigned int)(v61 - 65) <= 0x19
                    || (unsigned int)(v61 - 48) <= 9
                    || v61 == 46 )
                  {
                    goto LABEL_92;
                  }
                }
                v55 = 1;
                v98 = v38;
                skip_utf8(&v98);
                v56 = &v98;
                get_utf8_char(&v98);
              }
              v57 = 0x400000004000005LL;
              v88 = _bittest64(&v57, v52);
              if ( v88 )
              {
                if ( v90 > 1 )
                {
                  v55 = 1;
                  v100 = v38;
                  skip_utf8(&v100);
                  v56 = &v100;
                  v58 = get_utf8_char(&v100);
                  if ( (v58 & 0xFFFFFFDF) - 65 <= 0x19 || (unsigned int)(v58 - 48) <= 9 || v58 == 46 )
                  {
                    v88 = 0;
                    v59 = 0;
                    v60 = 1;
LABEL_105:
                    v93 = 0;
LABEL_106:
                    v104 = v38;
                    if ( v60 <= 0 )
                      sub_76F410(v56, v55);
                    while ( 1 )
                    {
                      skip_utf8(&v104);
                      v68 = get_utf8_char(&v104);
                      if ( (v68 & 0xFFFFFFDF) - 65 > 0x19 && (unsigned int)(v68 - 48) > 9 && v68 != 46 )
                        goto LABEL_115;
                      v55 = v60;
                      v105 = v38;
                      skip_utf8(&v105);
                      v56 = &v105;
                      v69 = get_utf8_char(&v105);
                      if ( (unsigned int)(v69 - 48) <= 9 )
                        goto LABEL_147;
                      if ( v88 )
                        break;
                      if ( v69 == 46 )
                        goto LABEL_122;
                      if ( v93 || (v69 & 0xFFFFFFDF) != 0x45 )
                        goto LABEL_128;
                      v101 = v38;
                      if ( v60 + 1 <= 0 )
                        sub_76F410(&v105, v60);
                      v55 = v60 + 1;
                      skip_utf8(&v101);
                      v56 = &v101;
                      if ( (((unsigned int)get_utf8_char(&v101) - 43) & 0xFFFFFFFD) == 0 )
                      {
                        v93 = 1;
                        v60 += 2;
LABEL_148:
                        if ( v60 < v90 )
                          goto LABEL_106;
                        goto LABEL_115;
                      }
                      if ( v60 + 1 >= v90 )
                        goto LABEL_115;
                      v104 = v38;
                      ++v60;
                      v93 = 1;
                    }
                    if ( (v69 & 0xFFFFFFDF) - 65 <= 5 )
                    {
LABEL_147:
                      ++v60;
                      goto LABEL_148;
                    }
                    if ( v69 == 46 )
                    {
LABEL_122:
                      if ( v59 )
                      {
                        if ( v106 )
                        {
                          *(_QWORD *)&v107 = 0;
                          qfree(v106);
                        }
                        goto LABEL_44;
                      }
                      ++v60;
                      v59 = 1;
                      goto LABEL_148;
                    }
LABEL_128:
                    if ( v69 == 76 )
                    {
                      if ( v60 + 1 >= v90 )
                        goto LABEL_158;
                      v102 = v38;
                      if ( v60 + 1 <= 0 )
                        sub_76F410(&v105, v60);
                      skip_utf8(&v102);
                      v81 = get_utf8_char(&v102);
                      if ( (unsigned int)(v81 - 97) > 0x19
                        && (unsigned int)(v81 - 65) > 0x19
                        && (unsigned int)(v81 - 48) > 9
                        && v81 != 46 )
                      {
LABEL_158:
                        v103 = v38;
                        if ( v60 != 1 )
                          skip_utf8(&v103);
                        v82 = get_utf8_char(&v103);
                        if ( (unsigned int)(v82 - 48) <= 9 || v88 && (v82 & 0xFFFFFFDF) - 65 <= 5 )
                        {
                          if ( v106 )
                          {
                            *(_QWORD *)&v107 = 0;
                            qfree(v106);
                          }
                          goto LABEL_117;
                        }
                      }
                    }
                  }
                }
LABEL_92:
                if ( v106 )
                {
                  *(_QWORD *)&v107 = 0;
                  qfree(v106);
                  v38 = s1;
                  goto LABEL_45;
                }
LABEL_44:
                v38 = s1;
                goto LABEL_45;
              }
              v60 = 1;
              v59 = v39 == 46;
LABEL_104:
              if ( v60 < v90 )
                goto LABEL_105;
LABEL_115:
              if ( v106 )
              {
                *(_QWORD *)&v107 = 0;
                qfree(v106);
              }
LABEL_117:
              sub_76F450(v4, a2, s1, *(_DWORD *)(v4 + 176));
              skip_utf8(&s1);
              sub_76F450(v4, a2, s1, 7u);
              v6 = s1;
            }
            else
            {
LABEL_45:
              v40 = *(_QWORD **)(v4 + 136);
              v41 = *(_QWORD *)(v4 + 144);
              if ( &v40[v41] != v40 )
              {
                v42 = v38;
                v43 = &v40[v41];
                do
                {
                  while ( 1 )
                  {
                    v44 = *(__int64 (**)())(*(_QWORD *)*v40 + 16LL);
                    if ( v44 != sub_76F3F0 )
                    {
                      v45 = ((__int64 (__fastcall *)(_QWORD, char **, char *))v44)(*v40, &v106, v42);
                      v42 = s1;
                      if ( v45 > 0 )
                        break;
                    }
                    if ( v43 == ++v40 )
                      goto LABEL_51;
                  }
                  ++v40;
                  sub_76F450(v4, a2, s1, *(_DWORD *)(v4 + 176));
                  skip_utf8(&s1);
                  sub_76F450(v4, a2, s1, (unsigned int)v106);
                  v42 = s1;
                  *(_DWORD *)(v4 + 176) = *(_DWORD *)(v4 + 116);
                }
                while ( v43 != v40 );
LABEL_51:
                v38 = v42;
              }
              if ( v84 )
              {
                v6 = &v38[v84];
                s1 = &v38[v84];
              }
              else
              {
                while ( 1 )
                {
                  v106 = v38;
                  v50 = get_utf8_char(&v106);
                  if ( (v50 & 0xFFFFFFDF) - 65 > 0x19 && (unsigned int)(v50 - 48) > 9 && v50 != 46 )
                    break;
                  v49 = get_utf8_char(&s1);
                  v38 = s1;
                  if ( v49 == -1 )
                    v38 = ++s1;
                }
                v6 = s1;
              }
              if ( v12 == v6 )
              {
LABEL_8:
                v10 = get_utf8_char(&s1);
                v6 = s1;
                if ( v10 == -1 )
                  v6 = ++s1;
              }
            }
          }
          else
          {
            v31 = nullptr;
            v106 = nullptr;
            v107 = 0;
            v32 = v84 + 1;
            if ( v84 != -1 )
            {
              v106 = (char *)qvector_reserve(&v106, 0, v84 + 1, 1);
              memset(&v106[v107], 0, v32 - v107);
              *(_QWORD *)&v107 = v84 + 1;
              v31 = v106;
            }
            v31[v84] = 0;
            qstrncpy(v106, s1, v32);
            v33 = *(_QWORD **)(v4 + 136);
            v34 = *(_DWORD *)(v4 + 176);
            v35 = &v33[*(_QWORD *)(v4 + 144)];
            LODWORD(v105) = v34;
            if ( v35 == v33 )
              goto LABEL_133;
            do
            {
              v36 = *(__int64 (**)())(*(_QWORD *)*v33 + 24LL);
              if ( v36 != sub_76F400
                && ((unsigned __int8 (__fastcall *)(_QWORD, char **, char **))v36)(*v33, &v105, &v106) )
              {
                break;
              }
              ++v33;
            }
            while ( v35 != v33 );
            v37 = *(_DWORD *)(v4 + 176);
            v34 = (unsigned int)v105;
            if ( v37 == (_DWORD)v105 )
            {
LABEL_133:
              v70 = v106;
              if ( *(_QWORD *)(v4 + 48) )
              {
                v71 = (char *)haystack;
                v91 = v34;
                v95 = v4;
                v89 = *(_QWORD *)(v4 + 40);
                if ( (_QWORD)v107 )
                  v71 = v106;
                v92 = v12;
                v72 = *(_QWORD *)(v4 + 48);
                v73 = 0;
                v94 = v106;
                v74 = 0;
                while ( 1 )
                {
                  v75 = v89 + 32 * v73;
                  v76 = *(const char ***)v75;
                  v77 = *(_QWORD *)v75 + 8LL * *(_QWORD *)(v75 + 8);
                  if ( *(_QWORD *)v75 != v77 )
                  {
                    while ( strcmp(v71, *v76) )
                    {
                      if ( (const char **)v77 == ++v76 )
                        goto LABEL_142;
                    }
                    if ( v76 != (const char **)v77 )
                      break;
                  }
LABEL_142:
                  v73 = ++v74;
                  if ( v74 >= v72 )
                  {
                    v78 = v91;
                    v12 = v92;
                    v70 = v94;
                    v4 = v95;
                    v79 = (int)v105;
                    goto LABEL_144;
                  }
                }
                v79 = *(_DWORD *)(v75 + 24);
                v78 = v91;
                v12 = v92;
                v70 = v94;
                LODWORD(v105) = v79;
                v4 = v95;
LABEL_144:
                if ( v79 != v78 )
                {
                  v37 = v78;
                  goto LABEL_38;
                }
              }
              if ( v70 )
              {
                *(_QWORD *)&v107 = 0;
                qfree(v70);
              }
              goto LABEL_42;
            }
LABEL_38:
            sub_76F450(v4, a2, s1, v37);
            s1 += v84;
            sub_76F450(v4, a2, s1, (unsigned int)v105);
            if ( v106 )
            {
              *(_QWORD *)&v107 = 0;
              qfree(v106);
            }
            v6 = s1;
          }
        }
      }
    }
  }
  if ( *(char **)(v4 + 168) != s1 )
    sub_76F450(v4, a2, s1, *(_DWORD *)(v4 + 176));
  return v108 - __readfsqword(0x28u);
}

