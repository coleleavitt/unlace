/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003BA20
// Address: 0x000000014003BA20

//----- (000000014003BA20) ----------------------------------------------------
__int64 __fastcall sub_14003BA20(__int64 a1, int *a2)
{
  const char **v4; // r15
  __int64 v5; // r8
  __int64 (__fastcall *v6)(_QWORD, _QWORD, __int64, const char *); // rax
  const char *v7; // r9
  int v8; // eax
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int16 *v13; // rax
  __int16 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int16 *v17; // rax
  __int16 *v18; // rax
  char *v19; // rdx
  unsigned __int8 *v20; // r9
  unsigned __int8 *v21; // rax
  char *v22; // r10
  unsigned __int8 *v23; // r8
  char *v24; // rdi
  int v25; // ecx
  _BYTE *v26; // rcx
  int v27; // edi
  char *v28; // rax
  int v29; // ecx
  int v30; // eax
  const char *v31; // rdi
  const char *v32; // rsi
  size_t v33; // rdi
  __int64 (__fastcall *v34)(_QWORD, const char *); // rax
  const char *v35; // rdx
  int v36; // eax
  char v38; // si
  char v39; // r14
  char *v40; // rsi
  char v41; // r14
  signed int v42; // eax
  unsigned int v43; // edi
  int v44; // eax
  __int64 (__fastcall *v45)(_QWORD, char *, _QWORD, _QWORD, int, int); // r10
  int v46; // eax
  char *v47; // rax
  char *v48; // rdi
  void (__fastcall *v49)(_QWORD, char *); // rax
  int v50; // [rsp+20h] [rbp-50h]
  int v51; // [rsp+28h] [rbp-48h]
  char v52[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v53; // [rsp+38h] [rbp-38h]
  void *Block[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v55; // [rsp+50h] [rbp-20h]
  void *v56[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v57; // [rsp+68h] [rbp-8h]
  bool v58; // [rsp+A0h] [rbp+30h] BYREF

  v4 = (const char **)(a1 + 320);
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
                            while ( (*(__int64 (__fastcall **)(const char **, _QWORD))(a1 + 224))(
                                      v4,
                                      *(_QWORD *)(a1 + 232)) < 0 )
                            {
                              if ( !*(_QWORD *)(a1 + 280) )
                              {
                                v8 = 37;
                                if ( !*(_DWORD *)(a1 + 356) )
                                  v8 = 34;
LABEL_120:
                                *a2 = v8;
                                return 0;
                              }
                              sub_14003C2F0(a1);
                            }
                            v5 = (unsigned int)(*(_DWORD *)(a1 + 312) + 1);
                            *(_DWORD *)(a1 + 312) = v5;
                            v6 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const char *))(a1 + 176);
                            if ( v6 )
                            {
                              v7 = Str1;
                              if ( *(_QWORD *)(a1 + 328) )
                                v7 = *v4;
                              v8 = v6(*(_QWORD *)(a1 + 216), *(_QWORD *)(a1 + 304), v5, v7);
                              if ( v8 )
                                goto LABEL_120;
                            }
                            v9 = *(_QWORD *)(a1 + 328);
                            v10 = v9 - 1;
                            if ( !v9 )
                              v10 = 0;
                            if ( v10 > 1 )
                            {
                              v11 = v10 - 1;
                              while ( 1 )
                              {
                                v12 = *(_QWORD *)(a1 + 328);
                                if ( v12 || v11 )
                                  v13 = (__int16 *)&(*v4)[v11];
                                else
                                  v13 = word_1400CAE32;
                                if ( *(_BYTE *)v13 != 92 )
                                  break;
                                v14 = v12 || v11 != 1 ? (__int16 *)&(*v4)[v11 - 1] : word_1400CAE32;
                                if ( *(_BYTE *)v14 == 92 )
                                  break;
                                *(_OWORD *)Block = 0;
                                v55 = 0;
                                if ( (*(__int64 (__fastcall **)(void **, _QWORD))(a1 + 224))(
                                       Block,
                                       *(_QWORD *)(a1 + 232)) < 0 )
                                {
                                  if ( Block[0] )
                                  {
                                    Block[1] = nullptr;
                                    j_free(Block[0]);
                                    Block[0] = nullptr;
                                    v55 = 0;
                                  }
                                  break;
                                }
                                ++*(_DWORD *)(a1 + 312);
                                sub_14003D890((__int64)v4, 1);
                                sub_14000E160((__int64)v4, (__int64)Block);
                                v15 = *(_QWORD *)(a1 + 328);
                                v11 = v15 - 2;
                                if ( !v15 )
                                  v11 = -1;
                                if ( Block[0] )
                                {
                                  Block[1] = nullptr;
                                  j_free(Block[0]);
                                  Block[0] = nullptr;
                                  v55 = 0;
                                }
                              }
                              v16 = *(_QWORD *)(a1 + 328);
                              if ( v16 || v11 )
                                v17 = (__int16 *)&(*v4)[v11];
                              else
                                v17 = word_1400CAE32;
                              if ( *(_BYTE *)v17 == 92 )
                              {
                                v18 = v16 || v11 != 1 ? (__int16 *)&(*v4)[v11 - 1] : word_1400CAE32;
                                if ( *(_BYTE *)v18 == 92 )
                                  sub_14003D890((__int64)v4, 1);
                              }
                            }
                          }
                          while ( *(_QWORD *)(a1 + 328) <= 1u );
                          v19 = (char *)*v4;
                          *(_QWORD *)(a1 + 8) = *v4;
                          v20 = (unsigned __int8 *)v19;
                          v21 = (unsigned __int8 *)(v19 + 1);
                          v22 = v19;
                          while ( 1 )
                          {
                            v23 = (unsigned __int8 *)v22;
                            v22 = (char *)v21;
                            if ( *v19 != 32 && (unsigned __int8)(*v19 - 9) > 4u )
                              break;
                            v20 = v21;
                            *(_QWORD *)(a1 + 8) = v21;
                            ++v19;
                            ++v21;
                          }
                          if ( !*(_BYTE *)(a1 + 152) )
                          {
                            v20 = v23;
                            if ( *v23 == 35 )
                              break;
                          }
                          if ( !*(_DWORD *)(a1 + 348) )
                          {
                            *a2 = 0;
                            return *(_QWORD *)(a1 + 8);
                          }
                          sub_140039C00(a1, v20);
                        }
                        *(_QWORD *)(a1 + 8) = v23 + 1;
                        v24 = sub_14003A8A0(a1);
                        sub_140039C00(a1, *(unsigned __int8 **)(a1 + 8));
                        if ( strcmp(v24, "else") )
                          break;
                        if ( !*(_DWORD *)(a1 + 356) )
                          goto LABEL_122;
                        if ( !*(_DWORD *)(a1 + 352) )
                        {
                          v25 = *(_DWORD *)(a1 + 348);
                          if ( v25 < 2 )
                            *(_DWORD *)(a1 + 348) = v25 == 0;
                        }
                      }
                      if ( strcmp(v24, "elif") )
                        break;
                      if ( !*(_DWORD *)(a1 + 356) )
                      {
LABEL_122:
                        *a2 = 35;
                        return 0;
                      }
                      if ( !*(_DWORD *)(a1 + 352) )
                      {
                        if ( (*(_BYTE *)(a1 + 348) & 1) != 0 )
                        {
LABEL_62:
                          v26 = *(_BYTE **)(a1 + 8);
                          do
                            *(_QWORD *)(a1 + 8) = --v26;
                          while ( *v26 );
                          *v26 = *(_BYTE *)(a1 + 644);
                          v52[0] = 1;
                          v53 = 0;
                          if ( (unsigned int)sub_140039DB0(a1, (__int64)v52) )
                          {
                            *a2 = sub_140063DE0();
                            return 0;
                          }
                          *(_DWORD *)(a1 + 348) = v53 == 0;
                        }
                        else
                        {
                          *(_DWORD *)(a1 + 348) = 2;
                        }
                      }
                    }
                    if ( strcmp(v24, "if") )
                      break;
                    ++*(_DWORD *)(a1 + 356);
                    if ( !*(_DWORD *)(a1 + 348) )
                      goto LABEL_62;
                    ++*(_DWORD *)(a1 + 352);
                  }
                  if ( !strcmp(v24, "ifdef") )
                  {
                    v27 = 1;
                    goto LABEL_70;
                  }
                  if ( strcmp(v24, "ifndef") )
                    break;
                  v27 = 0;
LABEL_70:
                  v28 = sub_14003A8A0(a1);
                  if ( !*v28 )
                    goto LABEL_127;
                  ++*(_DWORD *)(a1 + 356);
                  if ( *(_DWORD *)(a1 + 348) )
                  {
                    ++*(_DWORD *)(a1 + 352);
                  }
                  else if ( (sub_14003A4F0(a1, v28) != nullptr) != v27 )
                  {
                    *(_DWORD *)(a1 + 348) = 1;
                  }
                }
                if ( strcmp(v24, "endif") )
                  break;
                v29 = *(_DWORD *)(a1 + 356);
                if ( !v29 )
                {
                  *a2 = 36;
                  return 0;
                }
                v30 = *(_DWORD *)(a1 + 352);
                if ( v30 )
                  *(_DWORD *)(a1 + 352) = v30 - 1;
                else
                  *(_DWORD *)(a1 + 348) = 0;
                *(_DWORD *)(a1 + 356) = v29 - 1;
              }
            }
            while ( *(_DWORD *)(a1 + 348) );
            if ( strcmp(v24, "pragma") )
              break;
            v31 = *(const char **)(a1 + 8);
            if ( !strcmp(v31, "once") )
            {
              v32 = *(const char **)(a1 + 304);
              *(_OWORD *)v56 = 0;
              v57 = 0;
              if ( v32 )
              {
                v33 = strlen(v32);
                sub_140002F60((__int64)v56, v33 + 1);
                memcpy(v56[0], v32, v33);
                *((_BYTE *)v56[0] + v33) = 0;
              }
              sub_140038020((__int64 *)(a1 + 248), (__int64)v56);
              if ( v56[0] )
              {
                v56[1] = nullptr;
                j_free(v56[0]);
              }
            }
            else
            {
              v34 = *(__int64 (__fastcall **)(_QWORD, const char *))(a1 + 184);
              if ( v34 )
              {
                v35 = v31;
LABEL_91:
                v36 = v34(*(_QWORD *)(a1 + 216), v35);
                *a2 = v36;
                if ( v36 )
                  return 0;
              }
            }
          }
          if ( strcmp(v24, "warning") )
            break;
          v34 = *(__int64 (__fastcall **)(_QWORD, const char *))(a1 + 192);
          if ( v34 )
          {
            v35 = *(const char **)(a1 + 8);
            goto LABEL_91;
          }
        }
        v38 = 0;
        v39 = 0;
        if ( strcmp(v24, "softinclude") )
          break;
        v38 = 1;
LABEL_98:
        v8 = sub_14003AD50(a1, v38, v39);
        if ( v8 )
          goto LABEL_120;
      }
      if ( !strcmp(v24, "include_next") )
      {
        v39 = 1;
        goto LABEL_98;
      }
      if ( !strcmp(v24, "include") || !strcmp(v24, "import") )
        goto LABEL_98;
      if ( strcmp(v24, "define") )
        break;
      v40 = sub_14003A8A0(a1);
      if ( !*v40 )
        goto LABEL_127;
      v41 = *(_BYTE *)(a1 + 644) == 40;
      v42 = sub_14003CF10(a1);
      v43 = v42;
      if ( v42 != -2 )
      {
        if ( v42 < 0 )
          goto LABEL_127;
        v44 = sub_140037CF0(a1, v40, *(_BYTE **)(a1 + 8), v42, v41, &v58);
        *a2 = v44;
        if ( v44 )
          return 0;
        v45 = *(__int64 (__fastcall **)(_QWORD, char *, _QWORD, _QWORD, int, int))(a1 + 200);
        if ( v45 )
        {
          LOBYTE(v51) = v58;
          LOBYTE(v50) = v41;
          v46 = v45(*(_QWORD *)(a1 + 216), v40, *(_QWORD *)(a1 + 8), v43, v50, v51);
          *a2 = v46;
          if ( v46 )
            return 0;
        }
      }
    }
    if ( strcmp(v24, "undef") )
      break;
    v47 = sub_14003A8A0(a1);
    v48 = v47;
    if ( !*v47 )
      goto LABEL_127;
    sub_14003B6A0(a1, v47);
    v49 = *(void (__fastcall **)(_QWORD, char *))(a1 + 208);
    if ( v49 )
      v49(*(_QWORD *)(a1 + 216), v48);
  }
  if ( !strcmp(v24, "error") )
  {
    *a2 = 41;
    sub_140063F70(0, *(_BYTE **)(a1 + 8));
    return 0;
  }
  else
  {
LABEL_127:
    *a2 = 29;
    return 0;
  }
}
// 14003C0A7: variable 'v50' is possibly undefined
// 14003C0A7: variable 'v51' is possibly undefined
// 1400CAE32: using guessed type __int16 word_1400CAE32[3];
