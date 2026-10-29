/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000464F0
// Address: 0x00000001000464F0

//----- (00000001000464F0) ----------------------------------------------------
__int64 __fastcall sub_1000464F0(__int64 a1, int *a2)
{
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(_QWORD, _QWORD, __int64, const char *); // rax
  const char *v5; // rcx
  int v6; // eax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  unsigned __int64 v11; // rax
  int *v12; // rcx
  int *v13; // rdx
  __int64 v14; // r14
  signed __int64 v15; // rbx
  char *v16; // rdi
  const char *v17; // rax
  char *v18; // rbx
  __int64 v19; // rax
  bool v20; // cf
  __int64 v21; // rax
  __int64 v22; // r13
  unsigned __int64 v23; // r12
  const char *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  FILE *v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rax
  int *v30; // rcx
  unsigned __int64 v31; // rbx
  int *v32; // rax
  signed __int64 v33; // r14
  char *v34; // rdi
  const char *v35; // rax
  unsigned __int8 *v36; // rax
  char *v37; // r14
  char *i; // rsi
  char v39; // al
  int v40; // ecx
  unsigned __int8 *v41; // rsi
  int v42; // eax
  int v43; // eax
  int v44; // ebx
  char *v45; // rax
  char *v46; // rbx
  void (__fastcall *v47)(_QWORD, char *); // rax
  int v48; // eax
  int v49; // ebx
  const char *v50; // rsi
  char *j; // rax
  char v52; // cl
  int v53; // edx
  const char *v54; // rax
  unsigned __int8 *v55; // rax
  int v56; // ecx
  _BYTE *v57; // rax
  int v59; // ebx
  int v60; // eax
  int v61; // ecx
  const char *v62; // rbx
  __int64 (__fastcall *v63)(_QWORD, const char *); // rax
  int v64; // eax
  unsigned __int8 v65; // al
  __int64 (__fastcall *v66)(_QWORD, _QWORD); // rax
  char *v67; // rax
  const char *v68; // r14
  char v69; // r12
  signed int v70; // eax
  unsigned int v71; // r13d
  int v72; // eax
  __int64 (__fastcall *v73)(_QWORD, const char *, _QWORD, _QWORD, bool, _QWORD); // rax
  int v74; // eax
  _QWORD *v76; // [rsp+8h] [rbp-78h]
  char **v77; // [rsp+10h] [rbp-70h]
  __int64 v78; // [rsp+18h] [rbp-68h]
  const char **v80; // [rsp+28h] [rbp-58h]
  void *__src[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v82; // [rsp+40h] [rbp-40h]

  v80 = (const char **)(a1 + 296);
  v77 = (char **)(a1 + 224);
  v76 = (_QWORD *)(a1 + 280);
  v78 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        while ( (*(__int64 (__fastcall **)(const char **, _QWORD))(a1 + 200))(v80, *(_QWORD *)(a1 + 208)) < 0 )
        {
          if ( !*(_QWORD *)(a1 + 256) )
          {
            v6 = 3 * (*(_DWORD *)(a1 + 332) != 0) + 34;
LABEL_175:
            *a2 = v6;
            return 0;
          }
          v27 = *(FILE **)(a1 + 272);
          if ( v27 )
            qfclose(v27);
          qfree(*(void **)(a1 + 280));
          *v76 = 0;
          v28 = *(_QWORD *)(a1 + 248);
          v29 = *(_QWORD *)(a1 + 256);
          *(_QWORD *)(a1 + 272) = *(_QWORD *)(v28 + 40 * v29 - 32);
          *(_DWORD *)(a1 + 288) = *(_DWORD *)(v28 + 40 * v29 - 8);
          *v76 = *(_QWORD *)(v28 + 40 * v29 - 40);
          *(_BYTE *)(a1 + 128) = *(_BYTE *)(v28 + 40 * v29 - 4);
          *(_QWORD *)(a1 + 200) = *(_QWORD *)(v28 + 40 * v29 - 24);
          *(_QWORD *)(a1 + 208) = *(_QWORD *)(v28 + 40 * v29 - 16);
          if ( v29 )
            *(_QWORD *)(a1 + 256) = v29 - 1;
        }
        v3 = (unsigned int)(*(_DWORD *)(a1 + 288) + 1);
        *(_DWORD *)(a1 + 288) = v3;
        v4 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const char *))(a1 + 152);
        if ( v4 )
        {
          v5 = _s1;
          if ( *(_QWORD *)(a1 + 304) )
            v5 = *v80;
          v6 = v4(*(_QWORD *)(a1 + 192), *(_QWORD *)(a1 + 280), v3, v5);
          if ( v6 )
            goto LABEL_175;
        }
        v7 = *(_QWORD *)(a1 + 304);
        v8 = v7 - 1;
        if ( !v7 )
          v8 = 0;
        if ( v8 >= 2 )
        {
          v9 = v8 - 1;
          while ( 1 )
          {
            v10 = *(_QWORD *)(a1 + 304);
            v11 = v9 | v10;
            v12 = &dword_1000AC1CC;
            if ( v9 | v10 )
              v12 = (int *)&(*v80)[v9];
            if ( *(_BYTE *)v12 != 92 )
              break;
            v13 = &dword_1000AC1CC;
            if ( (v9 - 1) | v10 )
              v13 = (int *)&(*v80)[v9 - 1];
            if ( *(_BYTE *)v13 == 92 )
              break;
            *(_OWORD *)__src = 0;
            v82 = 0;
            v14 = (*(__int64 (__fastcall **)(void **, _QWORD))(a1 + 200))(__src, *(_QWORD *)(a1 + 208));
            if ( v14 >= 0 )
            {
              ++*(_DWORD *)(a1 + 288);
              v15 = *(_QWORD *)(a1 + 304) - 1LL;
              if ( v15 > 1 )
              {
                v17 = *(const char **)(a1 + 296);
                if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)v15 )
                {
                  v17 = (const char *)qvector_reserve((__int64)v80, *(void **)(a1 + 296), v15, 1u);
                  *v80 = v17;
                }
                *(_QWORD *)(a1 + 304) = v15;
                v17[v15 - 1] = 0;
              }
              else
              {
                v16 = (char *)*v80;
                if ( *v80 )
                {
                  *(_QWORD *)(a1 + 304) = 0;
                  qfree(v16);
                  *(_QWORD *)(a1 + 296) = 0;
                  *(_QWORD *)(a1 + 312) = 0;
                }
              }
              v18 = nullptr;
              v19 = *(_QWORD *)(a1 + 304);
              if ( __src[1] )
                v18 = (char *)__src[1] - 1;
              if ( __src[1] > (void *)1 )
              {
                v20 = v19 == 0;
                v21 = v19 - 1;
                v22 = 0;
                if ( !v20 )
                  v22 = v21;
                v23 = (unsigned __int64)&v18[v22 + 1];
                v24 = *(const char **)(a1 + 296);
                if ( *(_QWORD *)(a1 + 312) < v23 )
                {
                  v24 = (const char *)qvector_reserve(
                                        (__int64)v80,
                                        *(void **)(a1 + 296),
                                        (unsigned __int64)&v18[v22 + 1],
                                        1u);
                  *v80 = v24;
                }
                *(_QWORD *)(a1 + 304) = v23;
                v18[v22 + (_QWORD)v24] = 0;
                memcpy((void *)(*(_QWORD *)(a1 + 296) + v22), __src[0], (size_t)v18);
                v19 = *(_QWORD *)(a1 + 304);
              }
              v20 = v19 == 0;
              v25 = v19 - 1;
              v26 = 0;
              if ( !v20 )
                v26 = v25;
              v9 = v26 - 1;
            }
            if ( __src[0] )
            {
              __src[1] = nullptr;
              qfree(__src[0]);
            }
            if ( v14 < 0 )
            {
              v10 = *(_QWORD *)(a1 + 304);
              v11 = v9 | v10;
              break;
            }
          }
          v30 = &dword_1000AC1CC;
          if ( v11 )
            v30 = (int *)&(*v80)[v9];
          if ( *(_BYTE *)v30 == 92 )
          {
            v31 = v9 - 1;
            v32 = &dword_1000AC1CC;
            if ( v31 | v10 )
              v32 = (int *)&(*v80)[v31];
            if ( *(_BYTE *)v32 == 92 )
            {
              v33 = v10 - 1;
              if ( v33 > 1 )
              {
                v35 = *(const char **)(a1 + 296);
                if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)v33 )
                {
                  v35 = (const char *)qvector_reserve((__int64)v80, *(void **)(a1 + 296), v33, 1u);
                  *v80 = v35;
                }
                *(_QWORD *)(a1 + 304) = v33;
                v35[v33 - 1] = 0;
              }
              else
              {
                v34 = (char *)*v80;
                if ( *v80 )
                {
                  *(_QWORD *)(a1 + 304) = 0;
                  qfree(v34);
                  *(_QWORD *)(a1 + 296) = 0;
                  *(_QWORD *)(a1 + 312) = 0;
                }
              }
            }
          }
          v7 = *(_QWORD *)(a1 + 304);
        }
      }
      while ( v7 < 2 );
      v36 = (unsigned __int8 *)*v80;
      v37 = (char *)(*v80 + 1);
      for ( i = (char *)(*v80 + 2); ; ++i )
      {
        *(_QWORD *)(a1 + 8) = v36;
        if ( (unsigned int)*v36 - 9 >= 5 && *v36 != 32 )
          break;
        ++v36;
        ++v37;
      }
      if ( *v36 != 35 || *(_BYTE *)(a1 + 128) )
        break;
      while ( 1 )
      {
        *(_QWORD *)(a1 + 8) = v37;
        v39 = *v37;
        v40 = (unsigned __int8)*v37;
        if ( (unsigned int)(v40 - 9) >= 5 && v40 != 32 )
          break;
        ++v37;
        ++i;
      }
      if ( v39 >= 0 && (_DefaultRuneLocale.__runetype[(unsigned __int8)v39] & 0x100) != 0 || v40 == 36 || v40 == 95 )
      {
        while ( v39 >= 0 && (_DefaultRuneLocale.__runetype[(unsigned __int8)v39] & 0x500) != 0 || v39 == 95 || v39 == 36 )
        {
          *(_QWORD *)(a1 + 8) = i;
          v39 = *i++;
        }
        v41 = (unsigned __int8 *)(i - 1);
      }
      else
      {
        v41 = (unsigned __int8 *)v37;
      }
      *(_BYTE *)(a1 + 516) = v39;
      if ( *v41 )
      {
        *v41 = 0;
        v41 = *(unsigned __int8 **)(a1 + 8);
        do
        {
          do
          {
            *(_QWORD *)(a1 + 8) = ++v41;
            v42 = *v41;
          }
          while ( (unsigned int)(v42 - 9) < 5 );
        }
        while ( v42 == 32 );
      }
      sub_100049E50(a1, v41);
      if ( !strcmp(v37, "else") )
      {
        if ( !*(_DWORD *)(a1 + 332) )
          goto LABEL_179;
        if ( !*(_DWORD *)(a1 + 328) )
        {
          v48 = *(_DWORD *)(a1 + 324);
          if ( v48 <= 1 )
            *(_DWORD *)(a1 + 324) = v48 == 0;
        }
      }
      else if ( !strcmp(v37, "elif") )
      {
        if ( !*(_DWORD *)(a1 + 332) )
        {
LABEL_179:
          *a2 = 35;
          return 0;
        }
        if ( !*(_DWORD *)(a1 + 328) )
        {
          if ( (*(_BYTE *)(a1 + 324) & 1) != 0 )
            goto LABEL_140;
          *(_DWORD *)(a1 + 324) = 2;
        }
      }
      else
      {
        v43 = (unsigned __int8)*v37 - 105;
        if ( *v37 == 105 )
        {
          v43 = (unsigned __int8)v37[1] - 102;
          if ( v37[1] == 102 )
          {
            if ( v37[2] )
              goto LABEL_88;
            goto LABEL_138;
          }
        }
        if ( v43 )
        {
LABEL_88:
          if ( !strcmp(v37, "ifdef") )
          {
            v49 = 1;
LABEL_115:
            v50 = *(const char **)(a1 + 8);
            for ( j = (char *)(v50 + 1); ; ++j )
            {
              v52 = *v50;
              v53 = *(unsigned __int8 *)v50;
              if ( (unsigned int)(v53 - 9) >= 5 && v53 != 32 )
                break;
              *(_QWORD *)(a1 + 8) = ++v50;
            }
            if ( v52 >= 0 && (_DefaultRuneLocale.__runetype[(unsigned __int8)v52] & 0x100) != 0
              || v53 == 95
              || v53 == 36 )
            {
              while ( v52 >= 0 && (_DefaultRuneLocale.__runetype[(unsigned __int8)v52] & 0x500) != 0
                   || v52 == 95
                   || v52 == 36 )
              {
                *(_QWORD *)(a1 + 8) = j;
                v52 = *j++;
              }
              v54 = j - 1;
            }
            else
            {
              v54 = v50;
            }
            *(_BYTE *)(a1 + 516) = v52;
            if ( *v54 )
            {
              *v54 = 0;
              v55 = *(unsigned __int8 **)(a1 + 8);
              do
              {
                do
                {
                  *(_QWORD *)(a1 + 8) = ++v55;
                  v56 = *v55;
                }
                while ( (unsigned int)(v56 - 9) < 5 );
              }
              while ( v56 == 32 );
            }
            if ( !*v50 )
              goto LABEL_182;
            ++*(_DWORD *)(a1 + 332);
            if ( *(_DWORD *)(a1 + 324) )
            {
              ++*(_DWORD *)(a1 + 328);
            }
            else if ( v49 != (sub_100045D60(a1, v50) != nullptr) )
            {
              *(_DWORD *)(a1 + 324) = 1;
            }
          }
          else
          {
            if ( !strcmp(v37, "ifndef") )
            {
              v49 = 0;
              goto LABEL_115;
            }
            if ( !strcmp(v37, "endif") )
            {
              v60 = *(_DWORD *)(a1 + 332);
              if ( !v60 )
              {
                *a2 = 36;
                return 0;
              }
              v61 = *(_DWORD *)(a1 + 328);
              if ( v61 )
                *(_DWORD *)(a1 + 328) = v61 - 1;
              else
                *(_DWORD *)(a1 + 324) = 0;
              *(_DWORD *)(a1 + 332) = v60 - 1;
            }
            else if ( !*(_DWORD *)(a1 + 324) )
            {
              if ( !strcmp(v37, "pragma") )
              {
                v62 = *(const char **)(a1 + 8);
                if ( !strcmp(v62, "once") )
                {
                  sub_10004C380((__int64)__src, *(const char **)(a1 + 280));
                  sub_100016E60(v77, (__int64)__src);
                  sub_100006E30(__src);
                }
                else
                {
                  v63 = *(__int64 (__fastcall **)(_QWORD, const char *))(a1 + 160);
                  if ( v63 )
                  {
                    v64 = v63(*(_QWORD *)(a1 + 192), v62);
LABEL_161:
                    *a2 = v64;
                    if ( v64 )
                      return v78;
                  }
                }
              }
              else if ( !strcmp(v37, "warning") )
              {
                v66 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 168);
                if ( v66 )
                {
                  v64 = v66(*(_QWORD *)(a1 + 192), *(_QWORD *)(a1 + 8));
                  goto LABEL_161;
                }
              }
              else
              {
                v44 = strcmp(v37, "softinclude");
                if ( !v44 )
                  goto LABEL_158;
                if ( !strcmp(v37, "include_next") )
                {
                  v65 = 1;
                  goto LABEL_165;
                }
                if ( !strcmp(v37, "include") || !strcmp(v37, "import") )
                {
LABEL_158:
                  v65 = 0;
LABEL_165:
                  v6 = sub_10004BCB0(a1, v44 == 0, v65);
                  if ( v6 )
                    goto LABEL_175;
                }
                else if ( !strcmp(v37, "define") )
                {
                  v67 = sub_10004A030(a1);
                  if ( !*v67 )
                    goto LABEL_182;
                  v68 = v67;
                  v69 = *(_BYTE *)(a1 + 516);
                  v70 = sub_10004A100(a1);
                  if ( v70 != -2 )
                  {
                    if ( v70 < 0 )
                      goto LABEL_182;
                    v71 = v70;
                    v72 = sub_100045E80(a1, v68, *(_BYTE **)(a1 + 8), v70, v69 == 40, (bool *)__src);
                    *a2 = v72;
                    v59 = 1;
                    if ( !v72 )
                    {
                      v73 = *(__int64 (__fastcall **)(_QWORD, const char *, _QWORD, _QWORD, bool, _QWORD))(a1 + 176);
                      if ( !v73 )
                        goto LABEL_147;
                      v74 = v73(*(_QWORD *)(a1 + 192), v68, *(_QWORD *)(a1 + 8), v71, v69 == 40, LOBYTE(__src[0]));
                      *a2 = v74;
                      if ( !v74 )
                        goto LABEL_147;
                    }
                    goto LABEL_148;
                  }
                }
                else
                {
                  if ( strcmp(v37, "undef") )
                  {
                    if ( !strcmp(v37, "error") )
                    {
                      *a2 = 41;
                      set_error_string(0, *(const char **)(a1 + 8));
                    }
                    else
                    {
LABEL_182:
                      *a2 = 29;
                    }
                    return 0;
                  }
                  v45 = sub_10004A030(a1);
                  if ( !*v45 )
                    goto LABEL_182;
                  v46 = v45;
                  sub_1000460D0(a1, v45);
                  v47 = *(void (__fastcall **)(_QWORD, char *))(a1 + 184);
                  if ( v47 )
                    v47(*(_QWORD *)(a1 + 192), v46);
                }
              }
            }
          }
        }
        else
        {
LABEL_138:
          ++*(_DWORD *)(a1 + 332);
          if ( *(_DWORD *)(a1 + 324) )
          {
            ++*(_DWORD *)(a1 + 328);
          }
          else
          {
LABEL_140:
            v57 = (_BYTE *)(*(_QWORD *)(a1 + 8) - 1LL);
            do
              *(_QWORD *)(a1 + 8) = v57;
            while ( *v57-- != 0 );
            v57[1] = *(_BYTE *)(a1 + 516);
            LOBYTE(__src[0]) = 1;
            __src[1] = nullptr;
            if ( !(unsigned int)sub_10004B4B0(a1, (__int64)__src) )
            {
              *(_DWORD *)(a1 + 324) = __src[1] == nullptr;
LABEL_147:
              v59 = 2;
              goto LABEL_148;
            }
            *a2 = get_qerrno();
            v59 = 1;
LABEL_148:
            if ( v59 == 1 )
              return v78;
          }
        }
      }
    }
    if ( !*(_DWORD *)(a1 + 324) )
      break;
    sub_100049E50(a1, v36);
  }
  *a2 = 0;
  return *(_QWORD *)(a1 + 8);
}
// 1000AC1CC: using guessed type int dword_1000AC1CC;
