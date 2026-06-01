/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E750
// Address: 0x0004E750

//----- (0004E750) --------------------------------------------------------
int __fastcall sub_4E750(int a1, _DWORD *a2)
{
  int v4; // r9
  int (__fastcall *v5)(_DWORD, _DWORD); // r6
  unsigned int v6; // r5
  unsigned int v7; // r3
  int v8; // r0
  unsigned __int8 *v9; // r3
  int v10; // r6
  int v11; // t1
  bool v12; // zf
  _BYTE *v13; // r1
  int v14; // r7
  _BOOL4 v15; // r6
  int v16; // r3
  int v18; // r7
  int v19; // r1
  int v20; // r3
  int v21; // r2
  char *v22; // r3
  char *v23; // r0
  unsigned int v24; // r7
  size_t v25; // r7
  void *v26; // r1
  int v27; // r7
  int v28; // r3
  char *v29; // r3
  unsigned __int8 *v30; // r5
  int i; // r3
  int v32; // r5
  int v33; // r3
  unsigned int v34; // r6
  char *v35; // r0
  int v36; // r2
  int v37; // r10
  int v38; // r2
  int v39; // r3
  char *v40; // r1
  int v41; // r2
  const char *v42; // r5
  int (__fastcall *v43)(_DWORD, const char *); // r3
  int v44; // r0
  int v45; // r0
  int (__fastcall *v46)(_DWORD, _DWORD); // r3
  int v47; // r0
  const char *v48; // r5
  size_t v49; // r7
  int v50; // r0
  char *v51; // r0
  char *v52; // r5
  void (__fastcall *v53)(_DWORD, char *); // r3
  char *v54; // r7
  _BOOL4 v55; // r10
  signed int v56; // r0
  signed int v57; // r5
  bool *v58; // r0
  int (__fastcall *v59)(_DWORD, char *, _DWORD, signed int, _BOOL4, _DWORD); // r6
  int v60; // r0
  size_t v61; // [sp+10h] [bp-2Ch]
  unsigned int v62; // [sp+1Ch] [bp-20h]
  void *ptr; // [sp+20h] [bp-1Ch] BYREF
  size_t v64; // [sp+24h] [bp-18h]
  __int64 v65; // [sp+28h] [bp-14h]

  v4 = a1 + 160;
  do
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
                        while ( 1 )
                        {
                          while ( (*(int (__fastcall **)(int, _DWORD))(a1 + 112))(v4, *(_DWORD *)(a1 + 116)) < 0 )
                          {
                            if ( !*(_DWORD *)(a1 + 140) )
                            {
                              v16 = *(_DWORD *)(a1 + 184);
                              if ( v16 )
                              {
                                v16 = *(_DWORD *)(a1 + 140);
                                *a2 = 37;
                              }
                              else
                              {
                                *a2 = 34;
                              }
                              return v16;
                            }
                            sub_4B1CC(a1);
                          }
                          v5 = *(int (__fastcall **)(_DWORD, _DWORD))(a1 + 88);
                          v6 = *(_DWORD *)(a1 + 164);
                          ++*(_DWORD *)(a1 + 156);
                          v7 = v6;
                          if ( v5 )
                          {
                            v8 = v5(*(_DWORD *)(a1 + 108), *(_DWORD *)(a1 + 152));
                            if ( v8 )
                              goto LABEL_98;
                            v6 = *(_DWORD *)(a1 + 164);
                            v7 = v6;
                          }
                          if ( v6 )
                          {
                            if ( v6 - 1 > 1 )
                            {
                              v18 = v6 - 2;
LABEL_26:
                              v19 = v18 | v6;
                              if ( !(v18 | v6) )
                              {
                                while ( 1 )
                                {
                                  if ( byte_D49E4 != 92 )
                                    goto LABEL_61;
                                  v20 = *(_DWORD *)(a1 + 160);
                                  v21 = -1;
LABEL_29:
                                  v22 = (char *)(v20 + v21);
LABEL_30:
                                  if ( *v22 == 92 )
                                    goto LABEL_68;
                                  ptr = nullptr;
                                  v64 = 0;
                                  LODWORD(v65) = 0;
                                  if ( (*(int (__fastcall **)(void **, _DWORD))(a1 + 112))(&ptr, *(_DWORD *)(a1 + 116)) < 0 )
                                    break;
                                  v6 = *(_DWORD *)(a1 + 164);
                                  v23 = *(char **)(a1 + 160);
                                  v24 = v6 - 1;
                                  ++*(_DWORD *)(a1 + 156);
                                  if ( (int)(v6 - 1) <= 1 )
                                  {
                                    if ( v23 )
                                    {
                                      *(_DWORD *)(a1 + 164) = 0;
                                      sub_77F70(v23);
                                      *(_DWORD *)(a1 + 160) = 0;
                                      *(_DWORD *)(a1 + 168) = 0;
                                      v6 = *(_DWORD *)(a1 + 164);
                                    }
                                  }
                                  else
                                  {
                                    if ( v24 > *(_DWORD *)(a1 + 168) )
                                    {
                                      v23 = (char *)sub_78018(v4, v23, v6 - 1, 1u);
                                      *(_DWORD *)(a1 + 160) = v23;
                                    }
                                    *(_DWORD *)(a1 + 164) = v24;
                                    v23[v24 - 1] = 0;
                                    v6 = *(_DWORD *)(a1 + 164);
                                  }
                                  if ( v64 )
                                  {
                                    v25 = v64 - 1;
                                    if ( v64 != 1 )
                                    {
                                      if ( v6 )
                                      {
                                        v62 = v6 - 1;
                                        v61 = v25 + v6 - 1;
                                      }
                                      else
                                      {
                                        v62 = 0;
                                        v61 = v64 - 1;
                                      }
                                      v26 = *(void **)(a1 + 160);
                                      if ( v61 + 1 > *(_DWORD *)(a1 + 168) )
                                      {
                                        v26 = sub_78018(v4, v26, v61 + 1, 1u);
                                        *(_DWORD *)(a1 + 160) = v26;
                                      }
                                      *(_DWORD *)(a1 + 164) = v61 + 1;
                                      *((_BYTE *)v26 + v61) = 0;
                                      memcpy((void *)(*(_DWORD *)(a1 + 160) + v62), ptr, v25);
                                      v6 = *(_DWORD *)(a1 + 164);
                                    }
                                  }
                                  v18 = v6 - 2;
                                  if ( !v6 )
                                    v18 = -1;
                                  if ( !ptr )
                                    goto LABEL_26;
                                  v64 = 0;
                                  sub_77F70(ptr);
                                  v6 = *(_DWORD *)(a1 + 164);
                                  v19 = v18 | v6;
                                  if ( v18 | v6 )
                                    goto LABEL_27;
                                }
                                if ( ptr )
                                {
                                  v64 = 0;
                                  sub_77F70(ptr);
                                }
                                v6 = *(_DWORD *)(a1 + 164);
                                v19 = v18 | v6;
LABEL_68:
                                if ( !v19 )
                                {
                                  if ( byte_D49E4 != 92 )
                                    goto LABEL_61;
                                  v27 = v18 - 1;
                                  goto LABEL_57;
                                }
                                v28 = *(_DWORD *)(a1 + 160);
                                if ( *(_BYTE *)(v28 + v18) != 92 )
                                  goto LABEL_61;
                                v27 = v18 - 1;
                                if ( v6 )
                                {
LABEL_59:
                                  v29 = (char *)(v28 + v27);
                                }
                                else
                                {
LABEL_57:
                                  if ( v27 )
                                  {
                                    v28 = *(_DWORD *)(a1 + 160);
                                    goto LABEL_59;
                                  }
                                  v29 = &byte_D49E4;
                                }
                                if ( *v29 != 92 )
                                  goto LABEL_61;
                                v34 = v6 - 1;
                                v35 = *(char **)(a1 + 160);
                                if ( (int)(v6 - 1) <= 1 )
                                {
                                  if ( !v35 )
                                    goto LABEL_61;
                                  *(_DWORD *)(a1 + 164) = 0;
                                  sub_77F70(v35);
                                  *(_DWORD *)(a1 + 160) = 0;
                                  *(_DWORD *)(a1 + 168) = 0;
                                  v7 = *(_DWORD *)(a1 + 164);
                                }
                                else
                                {
                                  if ( v34 > *(_DWORD *)(a1 + 168) )
                                  {
                                    v35 = (char *)sub_78018(v4, *(void **)(a1 + 160), v6 - 1, 1u);
                                    *(_DWORD *)(a1 + 160) = v35;
                                  }
                                  *(_DWORD *)(a1 + 164) = v34;
                                  v35[v34 - 1] = 0;
                                  v7 = *(_DWORD *)(a1 + 164);
                                }
                                goto LABEL_8;
                              }
LABEL_27:
                              v20 = *(_DWORD *)(a1 + 160);
                              if ( *(_BYTE *)(v20 + v18) == 92 )
                              {
                                v21 = v18 - 1;
                                if ( !v6 && v18 == 1 )
                                {
                                  v22 = &byte_D49E4;
                                  goto LABEL_30;
                                }
                                goto LABEL_29;
                              }
LABEL_61:
                              v7 = v6;
                            }
LABEL_8:
                            if ( v7 > 1 )
                              break;
                          }
                        }
                        v9 = *(unsigned __int8 **)(a1 + 160);
                        for ( *(_DWORD *)(a1 + 4) = v9; ; *(_DWORD *)(a1 + 4) = v9 )
                        {
                          v11 = *v9++;
                          v10 = v11;
                          v12 = v11 == 9;
                          if ( v11 != 9 )
                            v12 = v10 == 32;
                          if ( !v12 && !sub_4B1C0(v10) )
                            break;
                        }
                        v14 = 0;
                        v15 = v10 == 35 && (*(_BYTE *)(a1 + 76) ^ 1) & 1;
                        if ( v15 )
                          break;
                        if ( !*(_DWORD *)(a1 + 176) )
                        {
                          *a2 = 0;
                          return *(_DWORD *)(a1 + 4);
                        }
                        sub_4BCA0(a1, v13);
                      }
                      *(_DWORD *)(a1 + 4) = v13 + 1;
                      v30 = sub_4BE20(a1);
                      sub_4BCA0(a1, *(_BYTE **)(a1 + 4));
                      if ( strcmp((const char *)v30, "else") )
                        break;
                      if ( !*(_DWORD *)(a1 + 184) )
                      {
LABEL_109:
                        v16 = 0;
                        *a2 = 35;
                        return v16;
                      }
                      if ( !*(_DWORD *)(a1 + 180) )
                      {
                        v33 = *(_DWORD *)(a1 + 176);
                        if ( v33 <= 1 )
                          *(_DWORD *)(a1 + 176) = v33 == 0;
                      }
                    }
                    if ( strcmp((const char *)v30, "elif") )
                      break;
                    if ( !*(_DWORD *)(a1 + 184) )
                      goto LABEL_109;
                    if ( !*(_DWORD *)(a1 + 180) )
                    {
                      if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
                      {
LABEL_78:
                        for ( i = *(_DWORD *)(a1 + 4); ; --i )
                        {
                          *(_DWORD *)(a1 + 4) = i - 1;
                          v32 = *(unsigned __int8 *)(i - 1);
                          if ( !*(_BYTE *)(i - 1) )
                            break;
                        }
                        *(_BYTE *)(i - 1) = *(_BYTE *)(a1 + 608);
                        v65 = 0;
                        LOBYTE(ptr) = 1;
                        if ( sub_50C78(a1, (int)&ptr) )
                        {
                          v45 = sub_70B7C();
                          v16 = v32;
                          *a2 = v45;
                          return v16;
                        }
                        *(_DWORD *)(a1 + 176) = v65 == 0;
                      }
                      else
                      {
                        *(_DWORD *)(a1 + 176) = 2;
                      }
                    }
                  }
                  if ( strcmp((const char *)v30, "if") )
                    break;
                  v36 = *(_DWORD *)(a1 + 176);
                  ++*(_DWORD *)(a1 + 184);
                  if ( !v36 )
                    goto LABEL_78;
LABEL_95:
                  ++*(_DWORD *)(a1 + 180);
                }
                if ( strcmp((const char *)v30, "ifdef") )
                  break;
                v37 = 1;
LABEL_111:
                v40 = (char *)sub_4BE20(a1);
                if ( !*v40 )
                  goto LABEL_141;
                v41 = *(_DWORD *)(a1 + 176);
                ++*(_DWORD *)(a1 + 184);
                if ( v41 )
                  goto LABEL_95;
                if ( (sub_4D4DC(a1, v40) != 0) != v37 )
                  *(_DWORD *)(a1 + 176) = 1;
              }
              v37 = strcmp((const char *)v30, "ifndef");
              if ( !v37 )
                goto LABEL_111;
              if ( strcmp((const char *)v30, "endif") )
                break;
              v38 = *(_DWORD *)(a1 + 184);
              if ( !v38 )
              {
                v16 = 0;
                *a2 = 36;
                return v16;
              }
              v39 = *(_DWORD *)(a1 + 180);
              if ( v39 )
                *(_DWORD *)(a1 + 180) = v39 - 1;
              else
                *(_DWORD *)(a1 + 176) = 0;
              *(_DWORD *)(a1 + 184) = v38 - 1;
            }
          }
          while ( *(_DWORD *)(a1 + 176) );
          if ( strcmp((const char *)v30, "pragma") )
            break;
          v42 = *(const char **)(a1 + 4);
          if ( !strcmp(v42, "once") )
          {
            v48 = *(const char **)(a1 + 152);
            ptr = nullptr;
            v64 = 0;
            LODWORD(v65) = 0;
            if ( v48 )
            {
              v49 = strlen(v48);
              ptr = sub_78018((int)&ptr, nullptr, v49 + 1, 1u);
              v64 = v49 + 1;
              memmove(ptr, v48, v49);
              *((_BYTE *)ptr + v49) = 0;
            }
            sub_4CC30((_DWORD *)(a1 + 124), (int)&ptr);
            if ( ptr )
            {
              v64 = 0;
              sub_77F70(ptr);
            }
          }
          else
          {
            v43 = *(int (__fastcall **)(_DWORD, const char *))(a1 + 92);
            if ( v43 )
            {
              v44 = v43(*(_DWORD *)(a1 + 108), v42);
              *a2 = v44;
              if ( v44 )
                return 0;
            }
          }
        }
        if ( strcmp((const char *)v30, "warning") )
          break;
        v46 = *(int (__fastcall **)(_DWORD, _DWORD))(a1 + 96);
        if ( v46 )
        {
          v47 = v46(*(_DWORD *)(a1 + 108), *(_DWORD *)(a1 + 4));
          *a2 = v47;
          if ( v47 )
            return 0;
        }
      }
      if ( !strcmp((const char *)v30, "softinclude") )
      {
        v14 = v15;
        LOBYTE(v15) = 0;
        break;
      }
      if ( !strcmp((const char *)v30, "include_next") )
        break;
      v50 = strcmp((const char *)v30, "include");
      if ( !v50 || (v50 = strcmp((const char *)v30, "import")) == 0 )
      {
        LOBYTE(v15) = v50;
        break;
      }
      if ( !strcmp((const char *)v30, "define") )
      {
        v54 = (char *)sub_4BE20(a1);
        if ( !*v54 )
          goto LABEL_141;
        v55 = *(unsigned __int8 *)(a1 + 608) == 40;
        v56 = sub_4BEB0(a1);
        v57 = v56;
        if ( v56 != -2 )
        {
          if ( v56 < 0 )
            goto LABEL_141;
          v58 = sub_4DE34(a1, v54, *(const char **)(a1 + 4), v56, v55, (bool *)&ptr);
          *a2 = v58;
          if ( v58 )
            return 0;
          v59 = *(int (__fastcall **)(_DWORD, char *, _DWORD, signed int, _BOOL4, _DWORD))(a1 + 100);
          if ( v59 )
          {
            v60 = v59(*(_DWORD *)(a1 + 108), v54, *(_DWORD *)(a1 + 4), v57, v55, (unsigned __int8)ptr);
            *a2 = v60;
            if ( v60 )
              return 0;
          }
        }
      }
      else
      {
        if ( strcmp((const char *)v30, "undef") )
        {
          if ( !strcmp((const char *)v30, "error") )
          {
            *a2 = 41;
            sub_70C04(0, *(const char **)(a1 + 4));
            return 0;
          }
          else
          {
LABEL_141:
            v16 = 0;
            *a2 = 29;
          }
          return v16;
        }
        v51 = (char *)sub_4BE20(a1);
        v52 = v51;
        if ( !*v51 )
          goto LABEL_141;
        sub_4DA40(a1, v51);
        v53 = *(void (__fastcall **)(_DWORD, char *))(a1 + 104);
        if ( v53 )
          v53(*(_DWORD *)(a1 + 108), v52);
      }
    }
    v8 = sub_50F80(a1, v14, v15);
  }
  while ( !v8 );
LABEL_98:
  *a2 = v8;
  return 0;
}
// 4E7DA: variable 'v9' is possibly undefined
// 4E9AC: variable 'v13' is possibly undefined
// D49E4: using guessed type char byte_D49E4;
