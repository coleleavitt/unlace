/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50294
// Address: 0x00050294

//----- (00050294) --------------------------------------------------------
int __fastcall sub_50294(_DWORD *a1, int *a2)
{
  int v2; // r5
  char **v3; // r7
  int (__fastcall *v4)(_DWORD, void *); // r4
  int v5; // r1
  int v6; // r0
  int v7; // r4
  int v8; // r0
  unsigned int v9; // r6
  unsigned int v10; // r0
  int v11; // r4
  int v12; // r0
  char *v13; // r1
  char *v14; // r1
  int v15; // r7
  unsigned int v16; // r5
  int v17; // r4
  char *v18; // r0
  char *v19; // r1
  size_t v20; // r4
  int v21; // r5
  unsigned int v22; // r6
  size_t v23; // r3
  char **v24; // r2
  void *v25; // r1
  bool v26; // zf
  char *v27; // r0
  char *v28; // r0
  unsigned int v29; // r4
  char *v30; // r0
  char *v31; // r1
  char *i; // r1
  int v33; // r0
  unsigned __int8 *v34; // r4
  int v35; // r6
  int v36; // r0
  int v37; // r2
  int v38; // r6
  int v39; // r0
  int v40; // r0
  char *v41; // r4
  void (__fastcall *v42)(_DWORD, char *); // r2
  int v43; // r0
  char *v44; // r1
  _BYTE *v45; // r0
  _BYTE *v46; // r1
  int v47; // r7
  int v48; // r0
  int *v49; // r2
  int v50; // r1
  int v51; // r4
  int (__fastcall *v52)(int, int); // r2
  int v53; // r0
  int v54; // r1
  int v55; // r0
  _DWORD *v56; // r6
  int v57; // r0
  _DWORD *v58; // r2
  char *v59; // r4
  int v60; // r7
  const char *v61; // r1
  unsigned __int8 *v62; // r0
  char *v63; // r4
  int v64; // r6
  signed int v65; // r3
  char *v66; // r2
  int v67; // r6
  int v68; // r0
  signed int v69; // r5
  int v70; // r0
  int v71; // r0
  int v72; // r4
  int v74; // [sp+10h] [bp-6Ch]
  _BYTE *v75; // [sp+18h] [bp-64h]
  int *v77; // [sp+28h] [bp-54h]
  int *v78; // [sp+2Ch] [bp-50h]
  int *v79; // [sp+30h] [bp-4Ch]
  _DWORD *v80; // [sp+34h] [bp-48h]
  _BYTE *v81; // [sp+38h] [bp-44h]
  FILE **v82; // [sp+3Ch] [bp-40h]
  void **v83; // [sp+40h] [bp-3Ch]
  int *v84; // [sp+44h] [bp-38h]
  _DWORD *v85; // [sp+48h] [bp-34h]
  unsigned int *v86; // [sp+54h] [bp-28h]
  _DWORD *v87; // [sp+58h] [bp-24h]
  char **v89; // [sp+60h] [bp-1Ch]
  unsigned int *v90; // [sp+64h] [bp-18h]
  char *s1; // [sp+68h] [bp-14h] BYREF
  unsigned int v92; // [sp+6Ch] [bp-10h]
  __int64 v93; // [sp+70h] [bp-Ch]

  v2 = (int)a1;
  v75 = a1 + 115;
  v74 = (int)(a1 + 29);
  v77 = a1 + 43;
  v78 = a1 + 44;
  v79 = a1 + 42;
  v81 = a1 + 17;
  v80 = a1 + 32;
  v86 = a1 + 40;
  v82 = (FILE **)(a1 + 35);
  v83 = (void **)(a1 + 36);
  v90 = a1 + 39;
  v87 = a1 + 37;
  v84 = a1 + 33;
  v3 = (char **)(a1 + 38);
  v89 = (char **)(a1 + 38);
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
                            while ( (*(int (__fastcall **)(char **, _DWORD))(v2 + 104))(v3, *(_DWORD *)(v2 + 108)) < 0 )
                            {
                              if ( !*v84 )
                              {
                                v8 = 34;
                                if ( *v78 )
                                  v8 = 37;
                                goto LABEL_156;
                              }
                              if ( *v82 )
                                qfclose(*v82);
                              qfree(*v83);
                              *v83 = nullptr;
                              v5 = *v84;
                              v6 = *v84 - 1;
                              v7 = *v80 + 24 * v6;
                              *v82 = *(FILE **)(v7 + 4);
                              *v87 = *(_DWORD *)(v7 + 16);
                              *v83 = *(void **)v7;
                              *v81 = *(_BYTE *)(v7 + 20);
                              v2 = (int)a1;
                              a1[26] = *(_DWORD *)(v7 + 8);
                              a1[27] = *(_DWORD *)(v7 + 12);
                              v3 = v89;
                              if ( v5 )
                                *v84 = v6;
                            }
                            ++*v87;
                            v4 = *(int (__fastcall **)(_DWORD, void *))(v2 + 80);
                            if ( v4 )
                            {
                              v8 = v4(*(_DWORD *)(v2 + 100), *v83);
                              if ( v8 )
                                goto LABEL_156;
                            }
                            v9 = *v90;
                            v10 = *v90 - 1;
                            if ( !*v90 )
                              v10 = 0;
                            if ( v10 >= 2 )
                            {
                              v11 = v10 - 1;
                              while ( 1 )
                              {
                                v12 = v9 | v11;
                                v13 = v9 | v11 ? &(*v3)[v11] : byte_DE331;
                                if ( *v13 != 92 )
                                  break;
                                v14 = v9 | (v11 - 1) ? &(*v3)[v11 - 1] : byte_DE331;
                                if ( *v14 == 92 )
                                  break;
                                v15 = 0;
                                v92 = 0;
                                s1 = nullptr;
                                LODWORD(v93) = 0;
                                if ( (*(int (__fastcall **)(char **, _DWORD))(v2 + 104))(&s1, *(_DWORD *)(v2 + 108)) >= 0 )
                                {
                                  ++*v87;
                                  v16 = *v90;
                                  v17 = *v90 - 1;
                                  if ( v17 > 1 )
                                  {
                                    v19 = *v89;
                                    if ( *v86 < v17 )
                                    {
                                      v19 = (char *)qvector_reserve((int)v89, v19, *v90 - 1, 1u);
                                      *v89 = v19;
                                    }
                                    *v90 = v17;
                                    v19[v16 - 2] = 0;
                                  }
                                  else
                                  {
                                    v18 = *v89;
                                    if ( *v89 )
                                    {
                                      *v90 = 0;
                                      qfree(v18);
                                      *v89 = nullptr;
                                      *v86 = 0;
                                    }
                                  }
                                  v20 = v92 - 1;
                                  if ( v92 >= 2 )
                                  {
                                    v21 = *v90 - 1;
                                    if ( !*v90 )
                                      v21 = 0;
                                    v22 = v21 + v92;
                                    v23 = v21 + v20;
                                    v24 = v89;
                                    v25 = *v89;
                                    if ( *v86 < v21 + v92 )
                                    {
                                      v25 = qvector_reserve((int)v89, v25, v22, 1u);
                                      v24 = v89;
                                      *v89 = (char *)v25;
                                      v23 = v21 + v20;
                                    }
                                    *v90 = v22;
                                    *((_BYTE *)v25 + v23) = 0;
                                    qmemcpy(&(*v24)[v21], s1, v20);
                                  }
                                  v11 = -1;
                                  if ( *v90 )
                                    v11 = *v90 - 2;
                                  v15 = 1;
                                }
                                v2 = (int)a1;
                                if ( s1 )
                                {
                                  v92 = 0;
                                  qfree(s1);
                                  LODWORD(v93) = 0;
                                  s1 = nullptr;
                                }
                                v9 = *v90;
                                v26 = v15 == 0;
                                v3 = v89;
                                if ( v26 )
                                {
                                  v12 = v9 | v11;
                                  break;
                                }
                              }
                              if ( v12 )
                                v27 = &(*v3)[v11];
                              else
                                v27 = byte_DE331;
                              if ( *v27 == 92 )
                              {
                                v28 = v9 | (v11 - 1) ? &(*v3)[v11 - 1] : byte_DE331;
                                if ( *v28 == 92 )
                                {
                                  v29 = v9 - 1;
                                  if ( (int)(v9 - 1) > 1 )
                                  {
                                    v31 = *v3;
                                    if ( *v86 < v29 )
                                    {
                                      v31 = (char *)qvector_reserve((int)v3, v31, v9 - 1, 1u);
                                      *v3 = v31;
                                    }
                                    *v90 = v29;
                                    v31[v9 - 2] = 0;
                                  }
                                  else
                                  {
                                    v30 = *v3;
                                    if ( *v3 )
                                    {
                                      *v90 = 0;
                                      qfree(v30);
                                      *v3 = nullptr;
                                      *v86 = 0;
                                    }
                                  }
                                }
                              }
                              v9 = *v90;
                            }
                          }
                          while ( v9 < 2 );
                          for ( i = *v3; ; ++i )
                          {
                            *(_DWORD *)(v2 + 4) = i;
                            v33 = (unsigned __int8)*i;
                            if ( (unsigned int)(v33 - 9) >= 5 && v33 != 32 )
                              break;
                          }
                          if ( v33 == 35 && !*v81 )
                            break;
                          if ( !*v79 )
                          {
                            *a2 = 0;
                            return *(_DWORD *)(v2 + 4);
                          }
                          sub_52B58(v2, i);
                        }
                        *(_DWORD *)(v2 + 4) = i + 1;
                        v34 = sub_52CB0(v2);
                        sub_52B58(v2, *(_BYTE **)(v2 + 4));
                        if ( strcmp((const char *)v34, "else") )
                          break;
                        if ( !*v78 )
                          goto LABEL_155;
                        if ( !*v77 && *v79 <= 1 )
                          *v79 = *v79 == 0;
                      }
                      if ( strcmp((const char *)v34, "elif") )
                        break;
                      if ( !*v78 )
                      {
LABEL_155:
                        v8 = 35;
                        goto LABEL_156;
                      }
                      if ( !*v77 )
                      {
                        if ( *(unsigned __int8 *)v79 << 31 )
                          goto LABEL_105;
                        v43 = 2;
LABEL_102:
                        *v79 = v43;
                      }
                    }
                    if ( strcmp((const char *)v34, "if") )
                      break;
                    ++*v78;
                    if ( !*v79 )
                    {
LABEL_105:
                      v45 = (_BYTE *)(*(_DWORD *)(v2 + 4) - 1);
                      do
                      {
                        *(_DWORD *)(v2 + 4) = v45;
                        v46 = v45 - 1;
                        v26 = *v45-- == 0;
                      }
                      while ( !v26 );
                      v46[1] = *v75;
                      LOBYTE(s1) = 1;
                      v93 = 0;
                      if ( sub_54E2C(v2, (int)&s1) )
                      {
                        *a2 = get_qerrno();
                        v47 = 1;
                      }
                      else
                      {
                        *v79 = v93 == 0;
                        v47 = 2;
                      }
                      goto LABEL_111;
                    }
LABEL_104:
                    ++*v77;
                  }
                  v35 = 1;
                  if ( strcmp((const char *)v34, "ifdef") )
                  {
                    v35 = 0;
                    if ( strcmp((const char *)v34, "ifndef") )
                      break;
                  }
                  v44 = (char *)sub_52CB0(v2);
                  if ( !*v44 )
                    goto LABEL_159;
                  ++*v78;
                  if ( *v79 )
                    goto LABEL_104;
                  if ( v35 != (sub_4F0A0(v2, v44) != nullptr) )
                  {
                    v43 = 1;
                    goto LABEL_102;
                  }
                }
                if ( strcmp((const char *)v34, "endif") )
                  break;
                v48 = *v78;
                if ( !*v78 )
                {
                  v8 = 36;
LABEL_156:
                  *a2 = v8;
                  return 0;
                }
                v49 = v77;
                if ( *v77 )
                {
                  v50 = *v77 - 1;
                }
                else
                {
                  v50 = 0;
                  v49 = v79;
                }
                *v49 = v50;
                *v78 = v48 - 1;
              }
            }
            while ( *v79 );
            if ( strcmp((const char *)v34, "pragma") )
              break;
            v51 = *(_DWORD *)(v2 + 4);
            if ( !strcmp(*(const char **)(v2 + 4), "once") )
            {
              sub_1B09C((int)&s1, (char *)*v83);
              v56 = *(_DWORD **)(v2 + 116);
              v57 = *(_DWORD *)(v2 + 120);
              v58 = &v56[3 * v57];
              if ( 12 * v57 )
              {
                v85 = &v56[3 * v57];
                if ( v92 )
                  v59 = s1;
                else
                  v59 = &byte_B3CBE;
                v60 = 12 * v57;
                while ( 1 )
                {
                  v61 = v56[1] ? (const char *)*v56 : &byte_B3CBE;
                  if ( !strcmp(v59, v61) )
                    break;
                  v60 -= 12;
                  v56 += 3;
                  if ( !v60 )
                    goto LABEL_142;
                }
                v58 = v85;
              }
              if ( v56 == v58 )
LABEL_142:
                sub_24B4C(v74, (int)&s1);
              v3 = v89;
              if ( s1 )
              {
                v92 = 0;
                qfree(s1);
                LODWORD(v93) = 0;
                s1 = nullptr;
              }
            }
            else
            {
              v52 = *(int (__fastcall **)(int, int))(v2 + 84);
              if ( v52 )
              {
                v53 = *(_DWORD *)(v2 + 100);
                v54 = v51;
LABEL_125:
                v55 = v52(v53, v54);
                *a2 = v55;
                v72 = 0;
                if ( v55 )
                  return v72;
              }
            }
          }
          if ( strcmp((const char *)v34, "warning") )
            break;
          v52 = *(int (__fastcall **)(int, int))(v2 + 88);
          if ( v52 )
          {
            v54 = *(_DWORD *)(v2 + 4);
            v53 = *(_DWORD *)(v2 + 100);
            goto LABEL_125;
          }
        }
        v36 = strcmp((const char *)v34, "softinclude");
        v37 = 0;
        v38 = 1;
        if ( !v36 )
          goto LABEL_130;
        v39 = strcmp((const char *)v34, "include_next");
        v38 = 0;
        v37 = 1;
        if ( !v39 )
          goto LABEL_130;
        v38 = 0;
        if ( strcmp((const char *)v34, "include") )
          break;
        v37 = 0;
LABEL_130:
        v8 = sub_55420(v2, v38, v37);
        if ( v8 )
          goto LABEL_156;
      }
      v40 = strcmp((const char *)v34, "import");
      v37 = 0;
      if ( !v40 )
        goto LABEL_130;
      if ( strcmp((const char *)v34, "define") )
        break;
      v62 = sub_52CB0(v2);
      v63 = (char *)v62;
      if ( !*v62 )
        goto LABEL_159;
      v64 = (unsigned __int8)*v75;
      v65 = sub_52D54(v2);
      if ( v65 != -2 )
      {
        if ( v65 < 0 )
          goto LABEL_159;
        v66 = *(char **)(v2 + 4);
        v67 = v64 - 40;
        v68 = v2;
        v69 = v65;
        v70 = sub_4F21C(v68, v63, v66, v65, v67 == 0, (bool *)&s1);
        *a2 = v70;
        v47 = 1;
        if ( !v70 )
        {
          if ( !a1[23]
            || (v71 = ((int (__fastcall *)(_DWORD, char *, _DWORD, signed int, bool, _DWORD, _DWORD))a1[23])(
                        a1[25],
                        v63,
                        a1[1],
                        v69,
                        v67 == 0,
                        (unsigned __int8)s1,
                        a1[23]),
                (*a2 = v71) == 0) )
          {
            v47 = 2;
          }
        }
        v2 = (int)a1;
LABEL_111:
        v72 = 0;
        v26 = v47 == 1;
        v3 = v89;
        if ( v26 )
          return v72;
      }
    }
    if ( strcmp((const char *)v34, "undef") )
      break;
    v41 = (char *)sub_52CB0(v2);
    if ( !*v41 )
      goto LABEL_159;
    sub_4FF90(v2, v41);
    v42 = *(void (__fastcall **)(_DWORD, char *))(v2 + 96);
    if ( v42 )
      v42(*(_DWORD *)(v2 + 100), v41);
  }
  if ( strcmp((const char *)v34, "error") )
  {
LABEL_159:
    v8 = 29;
    goto LABEL_156;
  }
  *a2 = 41;
  v72 = 0;
  set_error_string(0, *(const char **)(v2 + 4));
  return v72;
}
// B3CBE: using guessed type char byte_B3CBE;
