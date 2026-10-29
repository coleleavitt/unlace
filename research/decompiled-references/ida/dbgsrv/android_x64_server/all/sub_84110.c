/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84110
// Address: 0x0000000000084110

//----- (0000000000084110) ----------------------------------------------------
__int64 __fastcall sub_84110(__int64 a1, int *a2, double a3, __m128 a4)
{
  const char **v5; // r12
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(_QWORD, _QWORD, __int64, const char *); // rax
  const char *v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r14
  __int64 v12; // r14
  unsigned __int64 v13; // rax
  char *v14; // rcx
  char *v15; // rdx
  __int64 v16; // rbp
  unsigned __int64 v17; // rbx
  char *v18; // rdi
  char v19; // bl
  const char *v20; // rax
  char *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rbp
  const char *v24; // rax
  char *v25; // rbx
  char *v26; // rcx
  __int64 v27; // r14
  char *v28; // rax
  unsigned __int64 v29; // rbx
  char *v30; // rdi
  FILE *v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rdx
  const char *v34; // rax
  unsigned __int8 *i; // rsi
  unsigned __int8 v36; // al
  char *v37; // r14
  char *v38; // rax
  char *v39; // rbx
  void (__fastcall *v40)(_QWORD, char *); // rax
  int v41; // eax
  _BYTE *v42; // rax
  int v44; // ebx
  char *v45; // rax
  int v46; // ebx
  int v47; // eax
  int v48; // ecx
  const char *v49; // rbx
  __int64 (__fastcall *v50)(_QWORD, const char *); // rax
  int v51; // eax
  __int64 (__fastcall *v52)(_QWORD, _QWORD); // rax
  int v53; // eax
  char v54; // al
  __int64 v55; // rcx
  __int64 v56; // r14
  __int64 v57; // rbp
  const char *v58; // rbx
  const char *v59; // rsi
  char v60; // cl
  char *v61; // rax
  const char *v62; // r14
  char v63; // bp
  signed int v64; // eax
  int v65; // eax
  __int64 (__fastcall *v66)(_QWORD, const char *, _QWORD, _QWORD, bool, _QWORD); // rax
  int v67; // eax
  __int64 v68; // rbx
  __int64 v71; // [rsp+8h] [rbp-70h]
  unsigned int v72; // [rsp+8h] [rbp-70h]
  __int64 v73; // [rsp+10h] [rbp-68h]
  __int64 v74; // [rsp+18h] [rbp-60h]
  void *src[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v76; // [rsp+30h] [rbp-48h]
  unsigned __int64 v77; // [rsp+40h] [rbp-38h]

  v77 = __readfsqword(0x28u);
  v5 = (const char **)(a1 + 296);
  v74 = a1 + 224;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            do
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        while ( 1 )
                        {
                          do
                          {
                            while ( (*(__int64 (__fastcall **)(const char **, _QWORD))(a1 + 200))(
                                      v5,
                                      *(_QWORD *)(a1 + 208)) < 0 )
                            {
                              if ( !*(_QWORD *)(a1 + 256) )
                              {
                                v9 = 3 * (*(_DWORD *)(a1 + 332) != 0) + 34;
LABEL_147:
                                *a2 = v9;
                                return 0;
                              }
                              v31 = *(FILE **)(a1 + 272);
                              if ( v31 )
                                qfclose(v31);
                              qfree(*(void **)(a1 + 280));
                              *(_QWORD *)(a1 + 280) = 0;
                              v32 = *(_QWORD *)(a1 + 248);
                              v33 = *(_QWORD *)(a1 + 256);
                              *(_QWORD *)(a1 + 272) = *(_QWORD *)(v32 + 40 * (v33 - 1) + 8);
                              *(_DWORD *)(a1 + 288) = *(_DWORD *)(v32 + 40 * (v33 - 1) + 32);
                              *(_QWORD *)(a1 + 280) = *(_QWORD *)(v32 + 40 * (v33 - 1));
                              *(_BYTE *)(a1 + 128) = *(_BYTE *)(v32 + 40 * (v33 - 1) + 36);
                              *(_QWORD *)(a1 + 200) = *(_QWORD *)(v32 + 40 * (v33 - 1) + 16);
                              *(_QWORD *)(a1 + 208) = *(_QWORD *)(v32 + 40 * (v33 - 1) + 24);
                              if ( v33 )
                                *(_QWORD *)(a1 + 256) = v33 - 1;
                            }
                            v6 = (unsigned int)(*(_DWORD *)(a1 + 288) + 1);
                            *(_DWORD *)(a1 + 288) = v6;
                            v7 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const char *))(a1 + 152);
                            if ( v7 )
                            {
                              v8 = s1;
                              if ( *(_QWORD *)(a1 + 304) )
                                v8 = *v5;
                              v9 = v7(*(_QWORD *)(a1 + 192), *(_QWORD *)(a1 + 280), v6, v8);
                              if ( v9 )
                                goto LABEL_147;
                            }
                            v10 = *(_QWORD *)(a1 + 304);
                            v11 = v10 - 1;
                            if ( !v10 )
                              v11 = 0;
                            if ( v11 >= 2 )
                            {
                              v12 = v11 - 1;
                              while ( 1 )
                              {
                                v13 = v12 | v10;
                                v14 = byte_155771;
                                if ( v12 | v10 )
                                  v14 = (char *)&(*v5)[v12];
                                if ( *v14 != 92 )
                                  break;
                                v15 = byte_155771;
                                if ( (v12 - 1) | v10 )
                                  v15 = (char *)&(*v5)[v12 - 1];
                                if ( *v15 == 92 )
                                  break;
                                a3 = 0.0;
                                *(_OWORD *)src = 0;
                                v76 = 0;
                                if ( (*(__int64 (__fastcall **)(void **, _QWORD))(a1 + 200))(src, *(_QWORD *)(a1 + 208)) < 0 )
                                {
                                  v19 = 0;
                                }
                                else
                                {
                                  ++*(_DWORD *)(a1 + 288);
                                  v16 = *(_QWORD *)(a1 + 304);
                                  v17 = v16 - 1;
                                  if ( v16 - 1 > 1 )
                                  {
                                    v20 = *(const char **)(a1 + 296);
                                    if ( *(_QWORD *)(a1 + 312) < v17 )
                                    {
                                      v20 = (const char *)qvector_reserve(
                                                            (__int64)v5,
                                                            *(char **)(a1 + 296),
                                                            v16 - 1,
                                                            1u);
                                      *v5 = v20;
                                    }
                                    *(_QWORD *)(a1 + 304) = v17;
                                    v20[v16 - 2] = 0;
                                  }
                                  else
                                  {
                                    v18 = (char *)*v5;
                                    if ( *v5 )
                                    {
                                      *(_QWORD *)(a1 + 304) = 0;
                                      qfree(v18);
                                      *(_QWORD *)(a1 + 296) = 0;
                                      *(_QWORD *)(a1 + 312) = 0;
                                    }
                                  }
                                  if ( src[1] )
                                  {
                                    v21 = (char *)src[1] - 1;
                                    if ( src[1] != (char *)&dword_0 + 1 )
                                    {
                                      v22 = *(_QWORD *)(a1 + 304);
                                      v23 = v22 - 1;
                                      if ( !v22 )
                                        v23 = 0;
                                      v24 = *(const char **)(a1 + 296);
                                      v25 = (char *)src[1] + v23;
                                      if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)src[1] + v23 )
                                      {
                                        v24 = (const char *)qvector_reserve(
                                                              (__int64)v5,
                                                              *(char **)(a1 + 296),
                                                              (unsigned __int64)v25,
                                                              1u);
                                        *v5 = v24;
                                      }
                                      *(_QWORD *)(a1 + 304) = v25;
                                      v21[v23 + (_QWORD)v24] = 0;
                                      memcpy((void *)(*(_QWORD *)(a1 + 296) + v23), src[0], (size_t)v21);
                                    }
                                  }
                                  v12 = (*(_QWORD *)(a1 + 304) - 2LL) | -(__int64)(*(_QWORD *)(a1 + 304) == 0);
                                  v19 = 1;
                                }
                                if ( src[0] )
                                {
                                  src[1] = nullptr;
                                  qfree(src[0]);
                                  src[0] = nullptr;
                                  v76 = 0;
                                }
                                v10 = *(_QWORD *)(a1 + 304);
                                if ( !v19 )
                                {
                                  v13 = v12 | v10;
                                  break;
                                }
                              }
                              v26 = byte_155771;
                              if ( v13 )
                                v26 = (char *)&(*v5)[v12];
                              if ( *v26 == 92 )
                              {
                                v27 = v12 - 1;
                                v28 = byte_155771;
                                if ( v27 | v10 )
                                  v28 = (char *)&(*v5)[v27];
                                if ( *v28 == 92 )
                                {
                                  v29 = v10 - 1;
                                  if ( (__int64)(v10 - 1) > 1 )
                                  {
                                    v34 = *(const char **)(a1 + 296);
                                    if ( *(_QWORD *)(a1 + 312) < v29 )
                                    {
                                      v34 = (const char *)qvector_reserve(
                                                            (__int64)v5,
                                                            *(char **)(a1 + 296),
                                                            v10 - 1,
                                                            1u);
                                      *v5 = v34;
                                    }
                                    *(_QWORD *)(a1 + 304) = v29;
                                    v34[v10 - 2] = 0;
                                  }
                                  else
                                  {
                                    v30 = (char *)*v5;
                                    if ( *v5 )
                                    {
                                      *(_QWORD *)(a1 + 304) = 0;
                                      qfree(v30);
                                      *(_QWORD *)(a1 + 296) = 0;
                                      *(_QWORD *)(a1 + 312) = 0;
                                    }
                                  }
                                }
                              }
                              v10 = *(_QWORD *)(a1 + 304);
                            }
                          }
                          while ( v10 < 2 );
                          for ( i = (unsigned __int8 *)*v5; ; ++i )
                          {
                            *(_QWORD *)(a1 + 8) = i;
                            v36 = *i;
                            if ( (unsigned __int8)(*i - 9) >= 5u && v36 != 32 )
                              break;
                          }
                          if ( v36 == 35 && !*(_BYTE *)(a1 + 128) )
                            break;
                          if ( !*(_DWORD *)(a1 + 324) )
                          {
                            *a2 = 0;
                            return *(_QWORD *)(a1 + 8);
                          }
                          sub_87AE0(a1, i);
                        }
                        *(_QWORD *)(a1 + 8) = i + 1;
                        v37 = sub_87CD0(a1);
                        sub_87AE0(a1, *(unsigned __int8 **)(a1 + 8));
                        if ( strcmp(v37, "else") )
                          break;
                        if ( !*(_DWORD *)(a1 + 332) )
                          goto LABEL_151;
                        if ( !*(_DWORD *)(a1 + 328) )
                        {
                          v41 = *(_DWORD *)(a1 + 324);
                          if ( v41 <= 1 )
                            *(_DWORD *)(a1 + 324) = v41 == 0;
                        }
                      }
                      if ( strcmp(v37, "elif") )
                        break;
                      if ( !*(_DWORD *)(a1 + 332) )
                      {
LABEL_151:
                        *a2 = 35;
                        return 0;
                      }
                      if ( !*(_DWORD *)(a1 + 328) )
                      {
                        if ( (*(_BYTE *)(a1 + 324) & 1) != 0 )
                          goto LABEL_92;
                        *(_DWORD *)(a1 + 324) = 2;
                      }
                    }
                    if ( strcmp(v37, "if") )
                      break;
                    ++*(_DWORD *)(a1 + 332);
                    if ( !*(_DWORD *)(a1 + 324) )
                    {
LABEL_92:
                      v42 = (_BYTE *)(*(_QWORD *)(a1 + 8) - 1LL);
                      do
                        *(_QWORD *)(a1 + 8) = v42;
                      while ( *v42-- != 0 );
                      v42[1] = *(_BYTE *)(a1 + 452);
                      LOBYTE(src[0]) = 1;
                      src[1] = nullptr;
                      if ( (unsigned int)sub_8A480(a1, (__int64)src) )
                      {
                        *a2 = get_qerrno();
                        return 0;
                      }
                      *(_DWORD *)(a1 + 324) = src[1] == nullptr;
LABEL_104:
                      v46 = 2;
                      goto LABEL_105;
                    }
                    ++*(_DWORD *)(a1 + 328);
                  }
                  if ( !strcmp(v37, "ifdef") )
                  {
                    v44 = 1;
                    goto LABEL_98;
                  }
                  if ( strcmp(v37, "ifndef") )
                    break;
                  v44 = 0;
LABEL_98:
                  v45 = sub_87CD0(a1);
                  if ( !*v45 )
                    goto LABEL_154;
                  ++*(_DWORD *)(a1 + 332);
                  if ( *(_DWORD *)(a1 + 324) )
                  {
                    ++*(_DWORD *)(a1 + 328);
                  }
                  else if ( v44 != (sub_827A0(a1, v45) != nullptr) )
                  {
                    *(_DWORD *)(a1 + 324) = 1;
                  }
                }
                if ( strcmp(v37, "endif") )
                  break;
                v47 = *(_DWORD *)(a1 + 332);
                if ( !v47 )
                {
                  *a2 = 36;
                  return 0;
                }
                v48 = *(_DWORD *)(a1 + 328);
                if ( v48 )
                  *(_DWORD *)(a1 + 328) = v48 - 1;
                else
                  *(_DWORD *)(a1 + 324) = 0;
                *(_DWORD *)(a1 + 332) = v47 - 1;
              }
            }
            while ( *(_DWORD *)(a1 + 324) );
            if ( strcmp(v37, "pragma") )
              break;
            v49 = *(const char **)(a1 + 8);
            if ( !strcmp(v49, "once") )
            {
              sub_37F60((__int64)src, *(const char **)(a1 + 280));
              v55 = *(_QWORD *)(a1 + 224);
              v56 = 24LL * *(_QWORD *)(a1 + 232);
              v57 = v55;
              if ( v56 )
              {
                v58 = s1;
                if ( src[1] )
                  v58 = (const char *)src[0];
                v73 = 24LL * *(_QWORD *)(a1 + 232);
                v71 = *(_QWORD *)(a1 + 224);
                v57 = v71;
                while ( 1 )
                {
                  v59 = s1;
                  if ( *(_QWORD *)(v57 + 8) )
                    v59 = *(const char **)v57;
                  if ( !strcmp(v58, v59) )
                    break;
                  v57 += 24;
                  v56 -= 24;
                  if ( !v56 )
                    goto LABEL_136;
                }
                v55 = v71;
                v56 = v73;
              }
              if ( v57 == v56 + v55 )
LABEL_136:
                sub_47F30(v74, (__int64)src);
              if ( src[0] )
              {
                src[1] = nullptr;
                qfree(src[0]);
                src[0] = nullptr;
                v76 = 0;
              }
            }
            else
            {
              v50 = *(__int64 (__fastcall **)(_QWORD, const char *))(a1 + 160);
              if ( v50 )
              {
                v51 = v50(*(_QWORD *)(a1 + 192), v49);
                *a2 = v51;
                if ( v51 )
                  return 0;
              }
            }
          }
          if ( strcmp(v37, "warning") )
            break;
          v52 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 168);
          if ( v52 )
          {
            v53 = v52(*(_QWORD *)(a1 + 192), *(_QWORD *)(a1 + 8));
            *a2 = v53;
            if ( v53 )
              return 0;
          }
        }
        if ( strcmp(v37, "softinclude") )
          break;
        v54 = 1;
LABEL_130:
        v60 = 0;
LABEL_132:
        v9 = sub_8AE70(a1, v54, v60, a3, a4);
        if ( v9 )
          goto LABEL_147;
      }
      if ( !strcmp(v37, "include_next") )
      {
        v60 = 1;
        v54 = 0;
        goto LABEL_132;
      }
      if ( !strcmp(v37, "include") || !strcmp(v37, "import") )
      {
        v54 = 0;
        goto LABEL_130;
      }
      if ( strcmp(v37, "define") )
        break;
      v61 = sub_87CD0(a1);
      if ( !*v61 )
        goto LABEL_154;
      v62 = v61;
      v63 = *(_BYTE *)(a1 + 452);
      v64 = sub_87DB0(a1);
      if ( v64 != -2 )
      {
        if ( v64 < 0 )
          goto LABEL_154;
        v72 = v64;
        v65 = sub_829B0(a1, v62, *(const char **)(a1 + 8), v64, v63 == 40, (bool *)src);
        *a2 = v65;
        v46 = 1;
        if ( !v65 )
        {
          v66 = *(__int64 (__fastcall **)(_QWORD, const char *, _QWORD, _QWORD, bool, _QWORD))(a1 + 176);
          if ( !v66 )
            goto LABEL_104;
          v67 = v66(*(_QWORD *)(a1 + 192), v62, *(_QWORD *)(a1 + 8), v72, v63 == 40, LOBYTE(src[0]));
          *a2 = v67;
          if ( !v67 )
            goto LABEL_104;
        }
LABEL_105:
        if ( v46 == 1 )
          return 0;
      }
    }
    if ( strcmp(v37, "undef") )
      break;
    v38 = sub_87CD0(a1);
    if ( !*v38 )
      goto LABEL_154;
    v39 = v38;
    lex_undefine_macro_0(a1, v38);
    v40 = *(void (__fastcall **)(_QWORD, char *))(a1 + 184);
    if ( v40 )
      v40(*(_QWORD *)(a1 + 192), v39);
  }
  if ( strcmp(v37, "error") )
  {
LABEL_154:
    *a2 = 29;
    return 0;
  }
  *a2 = 41;
  v68 = 0;
  set_error_string(0, *(const char **)(a1 + 8));
  return v68;
}
// 0: using guessed type int dword_0;
