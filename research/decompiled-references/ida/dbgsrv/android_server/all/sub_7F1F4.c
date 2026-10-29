/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F1F4
// Address: 0x000000000007F1F4

//----- (000000000007F1F4) ----------------------------------------------------
__int64 __fastcall sub_7F1F4(__int64 a1, int *a2)
{
  pthread_mutex_t *v4; // x21
  __int64 (__fastcall *v5)(__int64, __int64); // x8
  __int64 v6; // x0
  __int64 v7; // x1
  int v8; // w0
  FILE *v9; // x0
  __int64 v10; // x9
  __int64 v11; // x10
  __int64 v12; // x10
  unsigned __int64 v13; // x28
  unsigned __int64 v14; // x8
  __int64 v15; // x29
  unsigned __int64 v16; // x8
  char *v17; // x9
  char *v18; // x9
  __int64 v19; // x28
  unsigned __int64 v20; // x29
  void *v21; // x0
  __int64 v22; // x8
  size_t v23; // x29
  void *v24; // x1
  __int64 v25; // x9
  __int64 v26; // x24
  __int64 v27; // x28
  char v28; // w24
  void *v29; // x0
  char *v30; // x1
  __int64 v31; // x8
  char *v32; // x8
  char *v33; // x8
  unsigned __int64 v34; // x29
  void *align; // x0
  char *v36; // x1
  unsigned __int8 *i; // x1
  int v38; // w8
  unsigned __int8 *v39; // x29
  char *v40; // x0
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  char *v47; // x28
  void (__fastcall *v48)(_QWORD, char *); // x8
  int v49; // w8
  int v50; // w9
  _BYTE *v51; // x8
  int v53; // w24
  char *v54; // x0
  int v55; // w9
  int v56; // w8
  int v57; // w9
  const char *v58; // x28
  __int64 (__fastcall *v59)(_QWORD, const char *); // x8
  int v60; // w0
  __int64 (__fastcall *v61)(_QWORD, _QWORD); // x8
  int v62; // w0
  char v63; // w2
  char v64; // w1
  _QWORD *v65; // x10
  __int64 v66; // x28
  _QWORD *v67; // x24
  const char *v68; // x29
  const char *v69; // x1
  unsigned __int8 *v70; // x0
  int v71; // w28
  char *v72; // x29
  unsigned int v73; // w0
  unsigned int v74; // w24
  int v75; // w0
  __int64 (__fastcall *v76)(_QWORD, char *, _QWORD, _QWORD, bool, _QWORD); // x8
  int v77; // w0
  __int64 result; // x0
  int v79; // w8
  pthread_mutex_t *v80; // x0
  __int64 v81; // [xsp+8h] [xbp-98h]
  _QWORD *v82; // [xsp+10h] [xbp-90h]
  pthread_mutex_t *v83; // [xsp+18h] [xbp-88h]
  void *src; // [xsp+20h] [xbp-80h] BYREF
  __int64 v85; // [xsp+28h] [xbp-78h]
  __int64 v86; // [xsp+30h] [xbp-70h]
  __int64 v87; // [xsp+38h] [xbp-68h]

  v83 = (pthread_mutex_t *)(a1 + 224);
  v4 = (pthread_mutex_t *)(a1 + 296);
  v87 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
              while ( (*(__int64 (__fastcall **)(pthread_mutex_t *, _QWORD))(a1 + 200))(v4, *(_QWORD *)(a1 + 208)) < 0 )
              {
                if ( !*(_QWORD *)(a1 + 256) )
                {
                  result = 0;
                  if ( *(_DWORD *)(a1 + 332) )
                    v79 = 37;
                  else
                    v79 = 34;
                  goto LABEL_158;
                }
                v9 = *(FILE **)(a1 + 272);
                if ( v9 )
                  qfclose(v9);
                qfree(*(void **)(a1 + 280));
                v11 = *(_QWORD *)(a1 + 248);
                v10 = *(_QWORD *)(a1 + 256);
                *(_QWORD *)(a1 + 280) = 0;
                v12 = v11 + 40 * (v10 - 1);
                *(_QWORD *)(a1 + 272) = *(_QWORD *)(v12 + 8);
                *(_DWORD *)(a1 + 288) = *(_DWORD *)(v12 + 32);
                *(_QWORD *)(a1 + 280) = *(_QWORD *)v12;
                *(_BYTE *)(a1 + 128) = *(_BYTE *)(v12 + 36);
                *(_QWORD *)(a1 + 200) = *(_QWORD *)(v12 + 16);
                *(_QWORD *)(a1 + 208) = *(_QWORD *)(v12 + 24);
                if ( v10 )
                  *(_QWORD *)(a1 + 256) = v10 - 1;
              }
              v5 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 152);
              ++*(_DWORD *)(a1 + 288);
              if ( v5 )
              {
                v6 = *(_QWORD *)(a1 + 192);
                v7 = *(_QWORD *)(a1 + 280);
                if ( *(_QWORD *)(a1 + 304) )
                {
                  v8 = v5(v6, v7);
                  if ( v8 )
                    goto LABEL_153;
                }
                else
                {
                  v8 = v5(v6, v7);
                  if ( v8 )
                    goto LABEL_153;
                }
              }
              v13 = *(_QWORD *)(a1 + 304);
              v14 = v13 - 1;
              if ( !v13 )
                v14 = 0;
              if ( v14 >= 2 )
              {
                v15 = v14 - 1;
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v16 = v13 | v15;
                    if ( v13 | v15 )
                      v17 = (char *)(v4->__align + v15);
                    else
                      v17 = &byte_166A39;
                    if ( *v17 != 92
                      || (!(v13 | (v15 - 1)) ? (v18 = &byte_166A39) : (v18 = (char *)(v4->__align + v15 - 1)), *v18 == 92) )
                    {
LABEL_49:
                      if ( v16 )
                        v32 = (char *)(v4->__align + v15);
                      else
                        v32 = &byte_166A39;
                      if ( *v32 == 92 )
                      {
                        v33 = v13 | (v15 - 1) ? (char *)(v4->__align + v15 - 1) : &byte_166A39;
                        if ( *v33 == 92 )
                        {
                          v34 = v13 - 1;
                          if ( (__int64)(v13 - 1) > 1 )
                          {
                            v36 = *(char **)(a1 + 296);
                            if ( *(_QWORD *)(a1 + 312) < v34 )
                            {
                              v36 = (char *)qvector_reserve(v4, v36, v13 - 1, 1u);
                              v4->__align = (__int64)v36;
                            }
                            *(_QWORD *)(a1 + 304) = v34;
                            v36[v13 - 2] = 0;
                          }
                          else
                          {
                            align = (void *)v4->__align;
                            if ( v4->__align )
                            {
                              *(_QWORD *)(a1 + 304) = 0;
                              qfree(align);
                              *(_QWORD *)(a1 + 296) = 0;
                              *(_QWORD *)(a1 + 312) = 0;
                            }
                          }
                        }
                      }
                      v13 = *(_QWORD *)(a1 + 304);
                      goto LABEL_64;
                    }
                    v85 = 0;
                    v86 = 0;
                    src = nullptr;
                    if ( ((*(__int64 (__fastcall **)(void **, _QWORD))(a1 + 200))(&src, *(_QWORD *)(a1 + 208))
                        & 0x8000000000000000LL) == 0 )
                      break;
                    v28 = 0;
                    v29 = src;
                    if ( !src )
                      goto LABEL_38;
LABEL_47:
                    v85 = 0;
                    qfree(v29);
                    src = nullptr;
                    v86 = 0;
                    v13 = *(_QWORD *)(a1 + 304);
                    if ( (v28 & 1) == 0 )
                    {
LABEL_48:
                      v16 = v13 | v15;
                      goto LABEL_49;
                    }
                  }
                  v19 = *(_QWORD *)(a1 + 304);
                  v20 = v19 - 1;
                  ++*(_DWORD *)(a1 + 288);
                  if ( v19 - 1 > 1 )
                  {
                    v30 = *(char **)(a1 + 296);
                    if ( *(_QWORD *)(a1 + 312) < v20 )
                    {
                      v30 = (char *)qvector_reserve(v4, v30, v19 - 1, 1u);
                      v4->__align = (__int64)v30;
                    }
                    *(_QWORD *)(a1 + 304) = v20;
                    v30[v19 - 2] = 0;
                    v22 = v85;
                    if ( v85 )
                    {
LABEL_30:
                      v23 = v22 - 1;
                      if ( v22 != 1 )
                      {
                        v24 = *(void **)(a1 + 296);
                        v25 = *(_QWORD *)(a1 + 304);
                        if ( v25 )
                          v26 = v25 - 1;
                        else
                          v26 = 0;
                        v27 = v26 + v22;
                        if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)(v26 + v22) )
                        {
                          v24 = qvector_reserve(v4, v24, v26 + v22, 1u);
                          v4->__align = (__int64)v24;
                        }
                        *(_QWORD *)(a1 + 304) = v27;
                        *((_BYTE *)v24 + v26 + v23) = 0;
                        memcpy((void *)(*(_QWORD *)(a1 + 296) + v26), src, v23);
                      }
                    }
                  }
                  else
                  {
                    v21 = (void *)v4->__align;
                    if ( v4->__align )
                    {
                      *(_QWORD *)(a1 + 304) = 0;
                      qfree(v21);
                      *(_QWORD *)(a1 + 296) = 0;
                      *(_QWORD *)(a1 + 312) = 0;
                    }
                    v22 = v85;
                    if ( v85 )
                      goto LABEL_30;
                  }
                  v31 = *(_QWORD *)(a1 + 304);
                  v28 = 1;
                  if ( v31 )
                    v15 = v31 - 2;
                  else
                    v15 = -1;
                  v29 = src;
                  if ( src )
                    goto LABEL_47;
LABEL_38:
                  v13 = *(_QWORD *)(a1 + 304);
                  if ( (v28 & 1) == 0 )
                    goto LABEL_48;
                }
              }
LABEL_64:
              ;
            }
            while ( v13 < 2 );
            for ( i = (unsigned __int8 *)v4->__align; ; ++i )
            {
              *(_QWORD *)(a1 + 8) = i;
              v38 = *i;
              if ( (unsigned int)(v38 - 9) >= 5 && v38 != 32 )
                break;
            }
            if ( v38 == 35 && !*(_BYTE *)(a1 + 128) )
              break;
            if ( !*(_DWORD *)(a1 + 324) )
            {
              *a2 = 0;
              return *(_QWORD *)(a1 + 8);
            }
            sub_827A0(a1, i);
          }
          *(_QWORD *)(a1 + 8) = i + 1;
          v39 = sub_829A8(a1);
          sub_827A0(a1, *(unsigned __int8 **)(a1 + 8));
          if ( strcmp((const char *)v39, "else") )
            break;
          if ( !*(_DWORD *)(a1 + 332) )
            goto LABEL_160;
          if ( !*(_DWORD *)(a1 + 328) )
          {
            v49 = *(_DWORD *)(a1 + 324);
            if ( v49 <= 1 )
              *(_DWORD *)(a1 + 324) = v49 == 0;
          }
        }
        if ( strcmp((const char *)v39, "elif") )
          break;
        if ( !*(_DWORD *)(a1 + 332) )
        {
LABEL_160:
          v79 = 35;
          goto LABEL_154;
        }
        if ( !*(_DWORD *)(a1 + 328) )
        {
          if ( (*(_BYTE *)(a1 + 324) & 1) != 0 )
            goto LABEL_100;
          *(_DWORD *)(a1 + 324) = 2;
        }
      }
      if ( !strcmp((const char *)v39, "if") )
        break;
      if ( !strcmp((const char *)v39, "ifdef") )
      {
        v53 = 1;
LABEL_106:
        v54 = (char *)sub_829A8(a1);
        if ( !*v54 )
          goto LABEL_163;
        v55 = *(_DWORD *)(a1 + 324);
        ++*(_DWORD *)(a1 + 332);
        if ( v55 )
        {
LABEL_108:
          ++*(_DWORD *)(a1 + 328);
        }
        else if ( v53 != (sub_7DB0C(a1, v54) != nullptr) )
        {
          *(_DWORD *)(a1 + 324) = 1;
        }
      }
      else
      {
        if ( !strcmp((const char *)v39, "ifndef") )
        {
          v53 = 0;
          goto LABEL_106;
        }
        if ( !strcmp((const char *)v39, "endif") )
        {
          v56 = *(_DWORD *)(a1 + 332);
          if ( !v56 )
          {
            v79 = 36;
            goto LABEL_154;
          }
          v57 = *(_DWORD *)(a1 + 328);
          if ( v57 )
            *(_DWORD *)(a1 + 328) = v57 - 1;
          else
            *(_DWORD *)(a1 + 324) = 0;
          *(_DWORD *)(a1 + 332) = v56 - 1;
        }
        else if ( !*(_DWORD *)(a1 + 324) )
        {
          if ( !strcmp((const char *)v39, "pragma") )
          {
            v58 = *(const char **)(a1 + 8);
            if ( !strcmp(v58, "once") )
            {
              sub_39140(&src, *(char **)(a1 + 280));
              v65 = *(_QWORD **)(a1 + 224);
              v66 = 24LL * *(_QWORD *)(a1 + 232);
              if ( v66 )
              {
                v67 = *(_QWORD **)(a1 + 224);
                v81 = 24LL * *(_QWORD *)(a1 + 232);
                v82 = v67;
                if ( v85 )
                  v68 = (const char *)src;
                else
                  v68 = &byte_F154B;
                while ( 1 )
                {
                  v69 = v67[1] ? (const char *)*v67 : &byte_F154B;
                  if ( !strcmp(v68, v69) )
                    break;
                  v66 -= 24;
                  v67 += 3;
                  if ( !v66 )
                    goto LABEL_143;
                }
                v66 = v81;
                v65 = v82;
              }
              else
              {
                v67 = *(_QWORD **)(a1 + 224);
              }
              if ( v67 == (_QWORD *)((char *)v65 + v66) )
LABEL_143:
                sub_46FA4(v83, (__int64)&src);
              if ( src )
              {
                v85 = 0;
                qfree(src);
                src = nullptr;
                v86 = 0;
              }
            }
            else
            {
              v59 = *(__int64 (__fastcall **)(_QWORD, const char *))(a1 + 160);
              if ( v59 )
              {
                v60 = v59(*(_QWORD *)(a1 + 192), v58);
                *a2 = v60;
                if ( v60 )
                  return 0;
              }
            }
          }
          else if ( !strcmp((const char *)v39, "warning") )
          {
            v61 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 168);
            if ( v61 )
            {
              v62 = v61(*(_QWORD *)(a1 + 192), *(_QWORD *)(a1 + 8));
              *a2 = v62;
              if ( v62 )
                return 0;
            }
          }
          else if ( !strcmp((const char *)v39, "softinclude") )
          {
            v63 = 0;
            v64 = 1;
LABEL_138:
            v8 = sub_85788(a1, v64, v63);
            if ( v8 )
            {
LABEL_153:
              v79 = v8;
LABEL_154:
              result = 0;
LABEL_158:
              *a2 = v79;
              return result;
            }
          }
          else
          {
            if ( !strcmp((const char *)v39, "include_next") )
            {
              v64 = 0;
              v63 = 1;
              goto LABEL_138;
            }
            if ( !strcmp((const char *)v39, "include") || !strcmp((const char *)v39, "import") )
            {
              v64 = 0;
              v63 = 0;
              goto LABEL_138;
            }
            if ( !strcmp((const char *)v39, "define") )
            {
              v70 = sub_829A8(a1);
              if ( !*v70 )
                goto LABEL_163;
              v71 = *(unsigned __int8 *)(a1 + 620);
              v72 = (char *)v70;
              v73 = sub_82A98(a1);
              if ( v73 != -2 )
              {
                v74 = v73;
                if ( (v73 & 0x80000000) != 0 )
                  goto LABEL_163;
                v75 = sub_7DD30(a1, v72, *(_BYTE **)(a1 + 8), v73, v71 == 40, (bool *)&src);
                *a2 = v75;
                if ( v75 )
                  return 0;
                v76 = *(__int64 (__fastcall **)(_QWORD, char *, _QWORD, _QWORD, bool, _QWORD))(a1 + 176);
                if ( v76 )
                {
                  v77 = v76(*(_QWORD *)(a1 + 192), v72, *(_QWORD *)(a1 + 8), v74, v71 == 40, (unsigned __int8)src);
                  *a2 = v77;
                  if ( v77 )
                    return 0;
                }
              }
            }
            else
            {
              if ( strcmp((const char *)v39, "undef") )
              {
                v80 = (pthread_mutex_t *)strcmp((const char *)v39, "error");
                if ( !(_DWORD)v80 )
                {
                  *a2 = 41;
                  set_error_string(v80, *(const char **)(a1 + 8));
                  return 0;
                }
LABEL_163:
                v79 = 29;
                goto LABEL_154;
              }
              v40 = (char *)sub_829A8(a1);
              if ( !*v40 )
                goto LABEL_163;
              v47 = v40;
              lex_undefine_macro_0(a1, v40, v41, v42, v43, v44, v45, v46);
              v48 = *(void (__fastcall **)(_QWORD, char *))(a1 + 184);
              if ( v48 )
                v48(*(_QWORD *)(a1 + 192), v47);
            }
          }
        }
      }
    }
    v50 = *(_DWORD *)(a1 + 324);
    ++*(_DWORD *)(a1 + 332);
    if ( v50 )
      goto LABEL_108;
LABEL_100:
    v51 = (_BYTE *)(*(_QWORD *)(a1 + 8) - 1LL);
    do
      *(_QWORD *)(a1 + 8) = v51;
    while ( *v51-- );
    v51[1] = *(_BYTE *)(a1 + 620);
    LOBYTE(src) = 1;
    v85 = 0;
    if ( (unsigned int)sub_84F38(a1, (__int64)&src) )
      break;
    *(_DWORD *)(a1 + 324) = v85 == 0;
  }
  *a2 = get_qerrno();
  return 0;
}
// 7F6F4: variable 'v41' is possibly undefined
// 7F6F4: variable 'v42' is possibly undefined
// 7F6F4: variable 'v43' is possibly undefined
// 7F6F4: variable 'v44' is possibly undefined
// 7F6F4: variable 'v45' is possibly undefined
// 7F6F4: variable 'v46' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 166A39: using guessed type char byte_166A39;
