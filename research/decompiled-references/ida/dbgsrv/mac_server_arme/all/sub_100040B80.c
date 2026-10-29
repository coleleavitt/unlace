/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100040B80
// Address: 0x0000000100040B80

//----- (0000000100040B80) ----------------------------------------------------
__int64 __fastcall sub_100040B80(__int64 a1, int *a2)
{
  __int64 (__fastcall *v3)(_QWORD, _QWORD); // x8
  FILE *v4; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  int v7; // w0
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x9
  unsigned __int64 v10; // x26
  __int64 v11; // x8
  unsigned __int64 v12; // x9
  char *v13; // x10
  char *v14; // x10
  __int64 v15; // x27
  signed __int64 v16; // x28
  void *v17; // x0
  _QWORD *v18; // x1
  size_t v19; // x28
  __int64 v20; // x8
  bool v21; // cf
  __int64 v22; // x8
  __int64 v23; // x19
  unsigned __int64 v24; // x26
  _QWORD *v25; // x1
  __int64 v26; // x8
  char *v27; // x9
  char *v28; // x9
  unsigned __int64 v29; // x27
  void *v30; // x0
  _QWORD *v31; // x1
  unsigned __int8 *v32; // x1
  unsigned __int8 *v33; // x27
  unsigned __int8 *i; // x8
  int v35; // w9
  __int64 v36; // x9
  unsigned __int8 *j; // x1
  unsigned int v38; // t1
  int v39; // w8
  int v40; // w8
  int v41; // w28
  char *v42; // x0
  char *v43; // x26
  void (__fastcall *v44)(_QWORD, char *); // x8
  int v45; // w8
  int v46; // w26
  char *v47; // x1
  unsigned __int8 *k; // x8
  __int64 v49; // x9
  char *v50; // x8
  unsigned int v51; // t1
  unsigned __int8 *v52; // x8
  int v53; // w9
  int v54; // t1
  _BYTE *v55; // x8
  int v57; // w8
  int v58; // w8
  int v59; // w9
  const char *v60; // x26
  __int64 (__fastcall *v61)(_QWORD, const char *); // x8
  int v62; // w0
  int v63; // w2
  __int64 (__fastcall *v64)(_QWORD, _QWORD); // x8
  int v65; // w0
  unsigned __int8 *v66; // x0
  char *v67; // x27
  int v68; // w26
  __int64 v69; // x0
  __int64 v70; // x19
  int v71; // w0
  __int64 (__fastcall *v72)(_QWORD, char *, _QWORD, __int64, bool, _QWORD); // x8
  int v73; // w0
  int v74; // w8
  __int64 result; // x0
  void *__src; // [xsp+10h] [xbp-70h] BYREF
  unsigned __int64 v78; // [xsp+18h] [xbp-68h]
  __int64 v79; // [xsp+20h] [xbp-60h]

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
                            while ( (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 200))(
                                      a1 + 296,
                                      *(_QWORD *)(a1 + 208)) < 0 )
                            {
                              if ( !*(_QWORD *)(a1 + 256) )
                              {
                                result = 0;
                                if ( *(_DWORD *)(a1 + 332) )
                                  v74 = 37;
                                else
                                  v74 = 34;
                                goto LABEL_182;
                              }
                              v4 = *(FILE **)(a1 + 272);
                              if ( v4 )
                                qfclose(v4);
                              qfree(*(void **)(a1 + 280));
                              *(_QWORD *)(a1 + 280) = 0;
                              v5 = *(_QWORD *)(a1 + 256);
                              v6 = *(_QWORD *)(a1 + 248) + 40 * v5;
                              *(_QWORD *)(a1 + 272) = *(_QWORD *)(v6 - 32);
                              *(_DWORD *)(a1 + 288) = *(_DWORD *)(v6 - 8);
                              *(_QWORD *)(a1 + 280) = *(_QWORD *)(v6 - 40);
                              *(_BYTE *)(a1 + 128) = *(_BYTE *)(v6 - 4);
                              *(_QWORD *)(a1 + 200) = *(_QWORD *)(v6 - 24);
                              *(_QWORD *)(a1 + 208) = *(_QWORD *)(v6 - 16);
                              if ( v5 )
                                *(_QWORD *)(a1 + 256) = v5 - 1;
                            }
                            ++*(_DWORD *)(a1 + 288);
                            v3 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 152);
                            if ( v3 )
                            {
                              v7 = v3(*(_QWORD *)(a1 + 192), *(_QWORD *)(a1 + 280));
                              if ( v7 )
                              {
LABEL_178:
                                v74 = v7;
                                result = 0;
LABEL_182:
                                *a2 = v74;
                                return result;
                              }
                            }
                            v8 = *(_QWORD *)(a1 + 304);
                            v9 = v8 - 1;
                            if ( !v8 )
                              v9 = 0;
                            if ( v9 >= 2 )
                            {
                              v10 = v9 - 1;
                              while ( 1 )
                              {
                                v11 = *(_QWORD *)(a1 + 304);
                                v12 = v11 | v10;
                                v13 = v11 | v10 ? (char *)(*(_QWORD *)(a1 + 296) + v10) : &byte_1000A4AEC;
                                if ( *v13 != 92 )
                                  break;
                                v14 = v11 | (v10 - 1) ? (char *)(*(_QWORD *)(a1 + 296) + v10 - 1) : &byte_1000A4AEC;
                                if ( *v14 == 92 )
                                  break;
                                __src = nullptr;
                                v78 = 0;
                                v79 = 0;
                                v15 = (*(__int64 (__fastcall **)(void **, _QWORD))(a1 + 200))(
                                        &__src,
                                        *(_QWORD *)(a1 + 208));
                                if ( (v15 & 0x8000000000000000LL) == 0 )
                                {
                                  ++*(_DWORD *)(a1 + 288);
                                  v16 = *(_QWORD *)(a1 + 304) - 1LL;
                                  if ( v16 > 1 )
                                  {
                                    v18 = *(_QWORD **)(a1 + 296);
                                    if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)v16 )
                                    {
                                      v18 = qvector_reserve((_QWORD *)(a1 + 296), v18, v16, 1u);
                                      *(_QWORD *)(a1 + 296) = v18;
                                    }
                                    *(_QWORD *)(a1 + 304) = v16;
                                    *((_BYTE *)v18 + v16 - 1) = 0;
                                  }
                                  else
                                  {
                                    v17 = *(void **)(a1 + 296);
                                    if ( v17 )
                                    {
                                      *(_QWORD *)(a1 + 304) = 0;
                                      qfree(v17);
                                      *(_QWORD *)(a1 + 296) = 0;
                                      *(_QWORD *)(a1 + 312) = 0;
                                    }
                                  }
                                  if ( v78 )
                                    v19 = v78 - 1;
                                  else
                                    v19 = 0;
                                  v20 = *(_QWORD *)(a1 + 304);
                                  if ( v78 >= 2 )
                                  {
                                    v21 = v20 != 0;
                                    v22 = v20 - 1;
                                    if ( v21 )
                                      v23 = v22;
                                    else
                                      v23 = 0;
                                    v24 = v23 + v19 + 1;
                                    v25 = *(_QWORD **)(a1 + 296);
                                    if ( *(_QWORD *)(a1 + 312) < v24 )
                                    {
                                      v25 = qvector_reserve((_QWORD *)(a1 + 296), v25, v23 + v19 + 1, 1u);
                                      *(_QWORD *)(a1 + 296) = v25;
                                    }
                                    *(_QWORD *)(a1 + 304) = v24;
                                    *((_BYTE *)v25 + v23 + v19) = 0;
                                    memcpy((void *)(*(_QWORD *)(a1 + 296) + v23), __src, v19);
                                    v20 = *(_QWORD *)(a1 + 304);
                                  }
                                  v21 = v20 != 0;
                                  v26 = v20 - 1;
                                  if ( !v21 )
                                    v26 = 0;
                                  v10 = v26 - 1;
                                }
                                if ( __src )
                                {
                                  v78 = 0;
                                  qfree(__src);
                                }
                                if ( v15 < 0 )
                                {
                                  v11 = *(_QWORD *)(a1 + 304);
                                  v12 = v11 | v10;
                                  break;
                                }
                              }
                              if ( v12 )
                                v27 = (char *)(*(_QWORD *)(a1 + 296) + v10);
                              else
                                v27 = &byte_1000A4AEC;
                              if ( *v27 == 92 )
                              {
                                v28 = v11 | (v10 - 1) ? (char *)(*(_QWORD *)(a1 + 296) + v10 - 1) : &byte_1000A4AEC;
                                if ( *v28 == 92 )
                                {
                                  v29 = v11 - 1;
                                  if ( v11 - 1 > 1 )
                                  {
                                    v31 = *(_QWORD **)(a1 + 296);
                                    if ( *(_QWORD *)(a1 + 312) < v29 )
                                    {
                                      v31 = qvector_reserve((_QWORD *)(a1 + 296), v31, v29, 1u);
                                      *(_QWORD *)(a1 + 296) = v31;
                                    }
                                    *(_QWORD *)(a1 + 304) = v29;
                                    *((_BYTE *)v31 + v29 - 1) = 0;
                                  }
                                  else
                                  {
                                    v30 = *(void **)(a1 + 296);
                                    if ( v30 )
                                    {
                                      *(_QWORD *)(a1 + 304) = 0;
                                      qfree(v30);
                                      *(_QWORD *)(a1 + 296) = 0;
                                      *(_QWORD *)(a1 + 312) = 0;
                                    }
                                  }
                                }
                              }
                              v8 = *(_QWORD *)(a1 + 304);
                            }
                          }
                          while ( v8 < 2 );
                          v32 = *(unsigned __int8 **)(a1 + 296);
                          v33 = v32 + 1;
                          for ( i = v32 + 2; ; ++i )
                          {
                            *(_QWORD *)(a1 + 8) = v32;
                            v35 = *v32;
                            if ( (unsigned int)(v35 - 9) >= 5 && v35 != 32 )
                              break;
                            ++v32;
                            ++v33;
                          }
                          if ( v35 == 35 && (*(_BYTE *)(a1 + 128) & 1) == 0 )
                            break;
                          if ( !*(_DWORD *)(a1 + 324) )
                          {
                            *a2 = 0;
                            return *(_QWORD *)(a1 + 8);
                          }
                          sub_1000441A4(a1, v32);
                        }
                        while ( 1 )
                        {
                          *(_QWORD *)(a1 + 8) = v33;
                          v36 = *v33;
                          if ( (unsigned __int64)(v36 - 9) >= 5 && v36 != 32 )
                            break;
                          ++v33;
                          ++i;
                        }
                        if ( (v36 & 0x80) == 0 && (_DefaultRuneLocale.__runetype[v36] & 0x100) != 0
                          || v36 == 36
                          || v36 == 95 )
                        {
                          while ( (v36 & 0x80) == 0 && (_DefaultRuneLocale.__runetype[v36] & 0x500) != 0
                               || v36 == 95
                               || v36 == 36 )
                          {
                            *(_QWORD *)(a1 + 8) = i;
                            v38 = *i++;
                            v36 = v38;
                          }
                          j = i - 1;
                        }
                        else
                        {
                          j = v33;
                        }
                        *(_BYTE *)(a1 + 556) = v36;
                        if ( *j )
                        {
                          *j = 0;
                          for ( j = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 1LL); ; ++j )
                          {
                            *(_QWORD *)(a1 + 8) = j;
                            v39 = *j;
                            if ( (unsigned int)(v39 - 9) >= 5 && v39 != 32 )
                              break;
                          }
                        }
                        sub_1000441A4(a1, j);
                        if ( strcmp((const char *)v33, "else") )
                          break;
                        if ( !*(_DWORD *)(a1 + 332) )
                          goto LABEL_184;
                        if ( !*(_DWORD *)(a1 + 328) )
                        {
                          v45 = *(_DWORD *)(a1 + 324);
                          if ( v45 <= 1 )
                            *(_DWORD *)(a1 + 324) = v45 == 0;
                        }
                      }
                      if ( strcmp((const char *)v33, "elif") )
                        break;
                      if ( !*(_DWORD *)(a1 + 332) )
                      {
LABEL_184:
                        result = 0;
                        v74 = 35;
                        goto LABEL_182;
                      }
                      if ( !*(_DWORD *)(a1 + 328) )
                      {
                        if ( (*(_BYTE *)(a1 + 324) & 1) != 0 )
                          goto LABEL_145;
                        *(_DWORD *)(a1 + 324) = 2;
                      }
                    }
                    v40 = *v33 - 105;
                    if ( *v33 != 105 || (v40 = v33[1] - 102, v33[1] != 102) )
                    {
                      if ( v40 )
                        break;
                      goto LABEL_143;
                    }
                    if ( v33[2] )
                      break;
LABEL_143:
                    ++*(_DWORD *)(a1 + 332);
                    if ( *(_DWORD *)(a1 + 324) )
                      goto LABEL_144;
LABEL_145:
                    v55 = (_BYTE *)(*(_QWORD *)(a1 + 8) - 1LL);
                    do
                      *(_QWORD *)(a1 + 8) = v55;
                    while ( *v55-- );
                    v55[1] = *(_BYTE *)(a1 + 556);
                    LOBYTE(__src) = 1;
                    v78 = 0;
                    if ( !(unsigned int)sub_1000457E4(a1, (__int64)&__src) )
                    {
                      *(_DWORD *)(a1 + 324) = v78 == 0;
LABEL_150:
                      v57 = 2;
                      goto LABEL_151;
                    }
                    *a2 = get_qerrno();
                    v57 = 1;
LABEL_151:
                    if ( v57 == 1 )
                      return 0;
                  }
                  if ( !strcmp((const char *)v33, "ifdef") )
                  {
                    v46 = 1;
                    goto LABEL_119;
                  }
                  if ( strcmp((const char *)v33, "ifndef") )
                    break;
                  v46 = 0;
LABEL_119:
                  v47 = *(char **)(a1 + 8);
                  for ( k = (unsigned __int8 *)(v47 + 1); ; ++k )
                  {
                    v49 = (unsigned __int8)*v47;
                    if ( (unsigned __int64)(v49 - 9) >= 5 && v49 != 32 )
                      break;
                    *(_QWORD *)(a1 + 8) = ++v47;
                  }
                  if ( (v49 & 0x80) == 0 && (_DefaultRuneLocale.__runetype[v49] & 0x100) != 0 || v49 == 95 || v49 == 36 )
                  {
                    while ( (v49 & 0x80) == 0 && (_DefaultRuneLocale.__runetype[v49] & 0x500) != 0
                         || v49 == 95
                         || v49 == 36 )
                    {
                      *(_QWORD *)(a1 + 8) = k;
                      v51 = *k++;
                      v49 = v51;
                    }
                    v50 = (char *)(k - 1);
                  }
                  else
                  {
                    v50 = v47;
                  }
                  *(_BYTE *)(a1 + 556) = v49;
                  if ( *v50 )
                  {
                    *v50 = 0;
                    v52 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 1LL);
                    do
                    {
                      do
                      {
                        *(_QWORD *)(a1 + 8) = v52;
                        v54 = *v52++;
                        v53 = v54;
                      }
                      while ( (unsigned int)(v54 - 9) < 5 );
                    }
                    while ( v53 == 32 );
                  }
                  if ( !*v47 )
                    goto LABEL_187;
                  ++*(_DWORD *)(a1 + 332);
                  if ( *(_DWORD *)(a1 + 324) )
                  {
LABEL_144:
                    ++*(_DWORD *)(a1 + 328);
                  }
                  else if ( v46 != (sub_1000403D0(a1, v47) != nullptr) )
                  {
                    *(_DWORD *)(a1 + 324) = 1;
                  }
                }
                if ( strcmp((const char *)v33, "endif") )
                  break;
                v58 = *(_DWORD *)(a1 + 332);
                if ( !v58 )
                {
                  result = 0;
                  v74 = 36;
                  goto LABEL_182;
                }
                v59 = *(_DWORD *)(a1 + 328);
                if ( v59 )
                  *(_DWORD *)(a1 + 328) = v59 - 1;
                else
                  *(_DWORD *)(a1 + 324) = 0;
                *(_DWORD *)(a1 + 332) = v58 - 1;
              }
            }
            while ( *(_DWORD *)(a1 + 324) );
            if ( strcmp((const char *)v33, "pragma") )
              break;
            v60 = *(const char **)(a1 + 8);
            if ( !strcmp(v60, "once") )
            {
              sub_100046500(&__src, *(char **)(a1 + 280));
              sub_100015DAC((_QWORD *)(a1 + 224), (__int64)&__src);
              sub_100006678(&__src);
            }
            else
            {
              v61 = *(__int64 (__fastcall **)(_QWORD, const char *))(a1 + 160);
              if ( v61 )
              {
                v62 = v61(*(_QWORD *)(a1 + 192), v60);
                *a2 = v62;
                if ( v62 )
                  return 0;
              }
            }
          }
          if ( strcmp((const char *)v33, "warning") )
            break;
          v64 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 168);
          if ( v64 )
          {
            v65 = v64(*(_QWORD *)(a1 + 192), *(_QWORD *)(a1 + 8));
            *a2 = v65;
            if ( v65 )
              return 0;
          }
        }
        v41 = strcmp((const char *)v33, "softinclude");
        if ( v41 )
        {
          if ( !strcmp((const char *)v33, "include_next") )
          {
            v63 = 1;
            goto LABEL_168;
          }
          if ( strcmp((const char *)v33, "include") && strcmp((const char *)v33, "import") )
            break;
        }
        v63 = 0;
LABEL_168:
        v7 = sub_100045F38(a1, v41 == 0, v63);
        if ( v7 )
          goto LABEL_178;
      }
      if ( strcmp((const char *)v33, "define") )
        break;
      v66 = sub_1000443A8(a1);
      if ( !*v66 )
        goto LABEL_187;
      v67 = (char *)v66;
      v68 = *(unsigned __int8 *)(a1 + 556);
      v69 = sub_100044478(a1);
      if ( (_DWORD)v69 != -2 )
      {
        v70 = v69;
        if ( (v69 & 0x80000000) != 0 )
          goto LABEL_187;
        v71 = sub_10004050C(a1, v67, *(_BYTE **)(a1 + 8), v69, v68 == 40, (bool *)&__src);
        *a2 = v71;
        if ( v71
          || (v72 = *(__int64 (__fastcall **)(_QWORD, char *, _QWORD, __int64, bool, _QWORD))(a1 + 176)) != nullptr
          && (v73 = v72(*(_QWORD *)(a1 + 192), v67, *(_QWORD *)(a1 + 8), v70, v68 == 40, (unsigned __int8)__src),
              (*a2 = v73) != 0) )
        {
          v57 = 1;
          goto LABEL_151;
        }
        goto LABEL_150;
      }
    }
    if ( strcmp((const char *)v33, "undef") )
      break;
    v42 = (char *)sub_1000443A8(a1);
    if ( !*v42 )
      goto LABEL_187;
    v43 = v42;
    sub_100040794(a1, v42);
    v44 = *(void (__fastcall **)(_QWORD, char *))(a1 + 184);
    if ( v44 )
      v44(*(_QWORD *)(a1 + 192), v43);
  }
  if ( strcmp((const char *)v33, "error") )
  {
LABEL_187:
    result = 0;
    v74 = 29;
    goto LABEL_182;
  }
  *a2 = 41;
  set_error_string(0);
  return 0;
}
// 1000A4AEC: using guessed type char byte_1000A4AEC;
