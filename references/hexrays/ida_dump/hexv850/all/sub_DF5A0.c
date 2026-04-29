__int64 __fastcall sub_DF5A0(__int64 a1, __int64 *a2, const char *a3, int a4)
{
  const char *v5; // rax
  char j; // dl
  const char *v7; // rbp
  bool v8; // zf
  __int64 *v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  _BYTE *v12; // rsi
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // rdi
  unsigned int v16; // ebx
  __int64 v19; // rsi
  const char *v20; // rdx
  char v21; // al
  char v22; // r14
  int v23; // r13d
  const char *v24; // rax
  unsigned __int64 v25; // rdx
  const char *v26; // rcx
  char v27; // al
  const char *v28; // r14
  char v29; // dl
  _BOOL8 v30; // rcx
  char v31; // r8
  const char *v32; // r15
  __int64 v33; // rdi
  const char *v34; // rcx
  char v35; // al
  const char *v36; // rcx
  _BYTE *v37; // rax
  __int64 v38; // rdx
  unsigned int v39; // edx
  char *v40; // rax
  __int64 v41; // r15
  __int64 v42; // rax
  char v43; // dl
  unsigned int v44; // edx
  int v45; // esi
  __int64 v46; // rax
  __int64 v47; // rdx
  int v48; // r15d
  int v49; // r15d
  char v50; // al
  const char *i; // rax
  __int64 v52; // rax
  int v53; // eax
  __int64 idati; // rax
  __int64 v55; // rax
  char v56; // [rsp+2h] [rbp-96h]
  bool v57; // [rsp+3h] [rbp-95h]
  unsigned int v58; // [rsp+4h] [rbp-94h]
  int v59; // [rsp+8h] [rbp-90h]
  int v60; // [rsp+Ch] [rbp-8Ch]
  char v62; // [rsp+20h] [rbp-78h]
  unsigned int v63; // [rsp+20h] [rbp-78h]
  char v64; // [rsp+24h] [rbp-74h]
  char v65; // [rsp+26h] [rbp-72h]
  bool v66; // [rsp+27h] [rbp-71h]
  const char *v67; // [rsp+28h] [rbp-70h] BYREF
  __int64 v68; // [rsp+30h] [rbp-68h] BYREF
  __int64 v69; // [rsp+38h] [rbp-60h] BYREF
  __int64 v70; // [rsp+40h] [rbp-58h] BYREF
  const char *v71; // [rsp+48h] [rbp-50h]
  __int16 v72; // [rsp+50h] [rbp-48h]
  unsigned __int64 v73; // [rsp+58h] [rbp-40h]

  v67 = a3;
  v73 = __readfsqword(0x28u);
  if ( a4 != 3 )
  {
    v68 = 0;
    sub_326800(&v70, *(_QWORD *)(a1 + 112), *(unsigned int *)(*(_QWORD *)(a1 + 112) + 80LL));
    v19 = (__int64)&v70;
    copy_tinfo_t(&v68, &v70);
    clear_tinfo_t(&v70);
    v20 = v67;
    v21 = *v67;
    if ( *v67 )
    {
      v22 = 0;
      v23 = -1;
      while ( 1 )
      {
        if ( v21 != 37 )
        {
          v24 = v67;
          goto LABEL_56;
        }
        v24 = v20 + 1;
        v25 = (unsigned int)v20[1];
        v67 = v24;
        if ( (_BYTE)v25 != 37 )
          break;
LABEL_56:
        v20 = v24 + 1;
        v21 = v24[1];
        v67 = v20;
        if ( !v21 )
          goto LABEL_57;
      }
      v58 = -1;
      v56 = v22 | (v23 == -1);
      if ( v56 )
      {
        v58 = sub_DEDD0(&v67);
        if ( v58 == -1 )
        {
          if ( v23 != -1 )
            goto LABEL_53;
          v24 = v67;
          v56 = v22;
          v23 = 0;
          v25 = (unsigned int)*v67;
        }
        else
        {
          v24 = v67;
          v23 = 0;
          v25 = (unsigned int)*v67;
        }
      }
      if ( (_BYTE)v25 == 35 )
        v25 = (unsigned int)*++v24;
      if ( (unsigned __int8)v25 > 0x30u )
      {
        if ( (_BYTE)v25 != 73 )
          goto LABEL_91;
        v26 = v24;
        goto LABEL_64;
      }
      v19 = 0x1280100000000LL;
      if ( _bittest64(&v19, v25) )
      {
        LODWORD(v25) = v24[1];
        v26 = v24 + 1;
        if ( v24[1] != 39 )
          goto LABEL_28;
        goto LABEL_68;
      }
      if ( (_BYTE)v25 == 39 )
      {
        v26 = v24;
LABEL_68:
        LODWORD(v25) = *++v26;
LABEL_28:
        if ( (_BYTE)v25 != 73 )
        {
LABEL_29:
          if ( (_BYTE)v25 == 42 )
          {
            v24 = v26 + 1;
            v67 = v26 + 1;
            if ( a4 != 1 )
              goto LABEL_31;
            goto LABEL_107;
          }
          v24 = v26;
LABEL_91:
          if ( (unsigned int)v25 > 0x7F )
          {
            v43 = *v24;
LABEL_93:
            v67 = v24;
            v64 = 0;
            if ( v43 != 46 )
            {
LABEL_94:
              v57 = a4 == 1 && v43 == 109;
              v60 = -1;
              if ( v57 )
                v67 = v24 + 1;
              v59 = -1;
              goto LABEL_37;
            }
            if ( a4 == 1 )
              goto LABEL_53;
            v59 = -1;
LABEL_80:
            v39 = v24[1];
            if ( v24[1] == 42 )
            {
              v67 = v24 + 2;
              if ( v56 )
                v60 = sub_DEDD0(&v67);
              else
                v60 = v23++;
              v19 = (unsigned int)v60;
              if ( v60 < 0 )
                goto LABEL_53;
LABEL_36:
              v64 = 0;
              v57 = 0;
              goto LABEL_37;
            }
            for ( i = v24 + 1; v39 <= 0x7F; v39 = *++i )
            {
              if ( v39 - 48 > 9 )
                break;
            }
            v67 = i;
LABEL_35:
            v60 = -1;
            goto LABEL_36;
          }
          v26 = v24;
LABEL_101:
          while ( (unsigned int)(v25 - 48) <= 9 )
          {
            LODWORD(v25) = *++v26;
            if ( (unsigned int)v25 > 0x7F )
            {
              v67 = v26;
              v60 = -1;
              v59 = -1;
              v64 = 0;
              v57 = 0;
              goto LABEL_37;
            }
          }
LABEL_120:
          v43 = *v26;
          v24 = v26;
          goto LABEL_93;
        }
LABEL_64:
        if ( *v26 == 73 )
        {
          if ( v26[1] == 54 && v26[2] == 52 )
            goto LABEL_120;
          if ( v26[1] == 51 && v26[2] == 50 )
          {
            LODWORD(v25) = 73;
            goto LABEL_101;
          }
        }
        LODWORD(v25) = *++v26;
        goto LABEL_29;
      }
      if ( (_BYTE)v25 != 42 )
      {
        LODWORD(v25) = (char)v25;
        v26 = v24;
        goto LABEL_101;
      }
      v26 = v24++;
      v67 = v24;
      if ( a4 == 1 )
      {
LABEL_107:
        v44 = v26[1];
        if ( v44 > 0x7F )
          goto LABEL_111;
        while ( v44 - 48 <= 9 )
        {
          v44 = *++v24;
          if ( v44 > 0x7F )
          {
            v67 = v24;
LABEL_111:
            v60 = -1;
            v59 = -1;
            v64 = 1;
            v57 = 0;
LABEL_37:
            v27 = getinf(57);
            v28 = v67;
            v29 = v27 & 0xF;
            LOBYTE(v30) = (v27 & 0xF) == 1;
            if ( (v27 & 0xF) != 1 )
            {
              v31 = *v67;
              goto LABEL_39;
            }
            if ( *v67 == 73 && (v67[1] == 54 && v67[2] == 52 || v67[1] == 51 && v67[2] == 50) )
            {
              v32 = v67 + 3;
              v67 += 3;
              goto LABEL_40;
            }
            v31 = *v67;
            if ( *v67 == 119 )
            {
              v32 = v67;
              if ( (v67[1] & 0xDF) == 0x5A )
                goto LABEL_75;
            }
            else
            {
LABEL_39:
              v32 = v67;
              if ( !v31 )
                goto LABEL_40;
              v19 = (unsigned int)v31;
              v66 = v29 == 1;
              v65 = v27 & 0xF;
              v62 = v31;
              v40 = strchr("hlLjt", v19);
              v29 = v65;
              v30 = v66;
              if ( !v40 )
              {
                if ( v62 == 122 )
                {
                  if ( v65 == 1 && a4 == 1 )
                    goto LABEL_40;
                }
                else if ( v62 == 73 )
                {
                  if ( v65 != 1 )
                    goto LABEL_40;
                }
                else if ( v62 != 113 || v65 == 1 )
                {
                  v32 = v28;
                  goto LABEL_40;
                }
LABEL_75:
                v32 = v28 + 1;
                v67 = v28 + 1;
                goto LABEL_40;
              }
              v41 = 1;
              if ( (v62 & 0xFB) == 0x68 )
              {
                v41 = 2;
                if ( v28[1] != v62 )
                  v41 = 1;
              }
              v32 = &v28[v41];
              v67 = v32;
            }
LABEL_40:
            v69 = 0;
            v33 = (unsigned int)*v32;
            if ( v57 )
            {
              if ( (unsigned __int8)(*v32 - 91) > 0x18u || (v19 = 16777473, !_bittest64(&v19, (unsigned int)(v33 - 91))) )
              {
LABEL_52:
                clear_tinfo_t(&v69);
                goto LABEL_53;
              }
            }
            switch ( *v32 )
            {
              case 'A':
              case 'E':
              case 'F':
              case 'G':
              case 'a':
              case 'e':
              case 'f':
              case 'g':
                v45 = (_DWORD)v32 - (_DWORD)v28;
                if ( (_DWORD)v32 == (_DWORD)v28 )
                {
                  v46 = 9;
                  if ( a4 != 1 )
                    v46 = 25;
                }
                else
                {
                  if ( *v28 != 108 )
                  {
                    if ( *v28 == 76 && v45 == 1 )
                    {
                      v46 = 41;
                      goto LABEL_160;
                    }
                    goto LABEL_159;
                  }
                  if ( v45 == 1 )
                  {
                    if ( a4 == 1 || (v46 = 41, !v30) )
                      v46 = 25;
                  }
                  else
                  {
                    v46 = 0;
                    if ( v45 == 2 && v28[1] == 108 )
                    {
                      if ( v29 == 1 || (v46 = 41, a4 != 1) )
LABEL_159:
                        v46 = 0;
                    }
                  }
                }
LABEL_160:
                v19 = (__int64)&v70;
                v70 = v46;
                copy_tinfo_t(&v69, &v70);
                clear_tinfo_t(&v70);
                if ( !(_BYTE)v69 )
                  goto LABEL_52;
                goto LABEL_151;
              case 'C':
              case 'S':
              case 'c':
              case 's':
                v48 = (_DWORD)v32 - (_DWORD)v28;
                if ( v48 == 1 )
                {
                  v50 = *v28;
                  if ( *v28 != 108 && (v29 != 1 || a4 == 1 || v50 != 76 && v50 != 119) )
                  {
                    if ( v50 != 104 || !v30 )
                      goto LABEL_52;
                    v49 = tolower(v33);
LABEL_148:
                    v19 = a1 + 208;
                    if ( v49 != 115 )
                      v19 = (__int64)&v68;
LABEL_150:
                    copy_tinfo_t(&v69, v19);
                    goto LABEL_151;
                  }
                  v49 = tolower(v33);
                }
                else
                {
                  if ( v48 )
                    goto LABEL_52;
                  v49 = tolower((char)v33);
                  if ( islower((char)v33) )
                    goto LABEL_148;
                }
                v72 = 256;
                v71 = "wchar_t";
                v19 = 61;
                v70 = ((__int64 (*)(void))get_idati)();
                create_tinfo(&v69, 61, 61, &v70);
                if ( (unsigned int)verify_tinfo(v69) )
                {
                  v19 = a1 + 240;
                  if ( v49 != 115 )
                    v19 = (__int64)&v68;
                  goto LABEL_150;
                }
                if ( v49 == 115 )
                {
                  if ( (_BYTE)v69 )
                    v69 |= 0x40uLL;
LABEL_190:
                  sub_326AD0(&v70, *(_QWORD *)(a1 + 112), &v69);
                  v19 = (__int64)&v70;
                  copy_tinfo_t(&v69, &v70);
                  clear_tinfo_t(&v70);
                }
LABEL_151:
                if ( a4 == 1 )
                {
LABEL_168:
                  if ( v64 )
                  {
                    if ( v57 )
                      goto LABEL_52;
                  }
                  else
                  {
                    if ( !v56 )
                      v58 = v23++;
                    v19 = v58;
                    sub_DF3A0(a2, v58, (__int64)&v68);
                  }
                  clear_tinfo_t(&v69);
                  v24 = v67;
                  v22 = v56;
                }
                else
                {
                  if ( *v67 != 109 )
                  {
LABEL_136:
                    if ( !v56 )
                      v58 = v23++;
                    sub_DF3A0(a2, v58, (__int64)&v69);
                  }
LABEL_139:
                  v70 = 7;
                  sub_DF3A0(a2, v59, (__int64)&v70);
                  clear_tinfo_t(&v70);
                  v19 = (unsigned int)v60;
                  v70 = 7;
                  sub_DF3A0(a2, v60, (__int64)&v70);
                  clear_tinfo_t(&v70);
                  clear_tinfo_t(&v69);
                  v24 = v67;
                  v22 = v56;
                }
                break;
              case 'D':
                if ( a4 == 1 )
                  goto LABEL_168;
                goto LABEL_52;
              case 'X':
              case 'd':
              case 'i':
              case 'n':
              case 'o':
              case 'u':
              case 'x':
                v47 = *(unsigned __int8 *)(a1 + 130);
                switch ( *v28 )
                {
                  case 'I':
                    if ( *v28 == 73 && v28[1] == 54 && v28[2] == 52 )
                      goto LABEL_219;
                    v47 = 4;
                    goto LABEL_188;
                  case 'L':
                    if ( a4 != 1 || v30 || !strchr("dioux", *v32) )
                      goto LABEL_52;
                    goto LABEL_212;
                  case 'h':
                    if ( a4 == 1 && v30 && v32 != v28 + 1 )
                      goto LABEL_52;
                    goto LABEL_188;
                  case 'j':
                    v72 = 256;
                    v71 = "intmax_t";
                    idati = get_idati(v33, v19, v47, 256);
                    v19 = 61;
                    v70 = idati;
                    create_tinfo(&v69, 61, 61, &v70);
                    v47 = *(unsigned __int8 *)(a1 + 136);
                    goto LABEL_201;
                  case 'l':
                    if ( v28[1] == 108 )
LABEL_212:
                      v47 = *(unsigned __int8 *)(a1 + 136);
                    else
                      v47 = *(unsigned __int8 *)(a1 + 135);
                    goto LABEL_188;
                  case 'q':
LABEL_219:
                    v47 = 8;
                    goto LABEL_188;
                  case 't':
                    v72 = 256;
                    v71 = "ptrdiff_t";
                    v55 = get_idati(v33, v19, 256, v30);
                    v19 = 61;
                    v70 = v55;
                    create_tinfo(&v69, 61, 61, &v70);
                    goto LABEL_200;
                  case 'z':
                    v19 = 20;
                    get_stock_tinfo(&v69, 20, v47, v30);
LABEL_200:
                    v47 = *(unsigned int *)(*(_QWORD *)(a1 + 112) + 80LL);
LABEL_201:
                    if ( !(_BYTE)v69 )
                      goto LABEL_188;
                    v63 = v47;
                    v53 = verify_tinfo(v69);
                    v47 = v63;
                    if ( v53 )
                      goto LABEL_188;
                    goto LABEL_189;
                  default:
                    if ( v28 != v32 )
                      goto LABEL_52;
LABEL_188:
                    sub_326800(&v70, *(_QWORD *)(a1 + 112), v47);
                    v19 = (__int64)&v70;
                    copy_tinfo_t(&v69, &v70);
                    clear_tinfo_t(&v70);
LABEL_189:
                    if ( *v32 == 110 )
                      goto LABEL_190;
                    goto LABEL_151;
                }
              case 'Z':
              case 'z':
                if ( v29 != 1 || v28 != v32 && *v28 != 119 )
                  goto LABEL_52;
                if ( a4 != 1 )
                  goto LABEL_136;
                goto LABEL_168;
              case '[':
                if ( a4 != 1 )
                  goto LABEL_52;
                v34 = v32 + 1;
                v67 = v32 + 1;
                v35 = v32[1];
                if ( v35 == 94 )
                {
                  v34 = v32 + 2;
                  v67 = v32 + 2;
                  v35 = v32[2];
                }
                if ( v35 == 93 )
                {
                  v35 = v34[1];
                  v67 = ++v34;
                  if ( v35 == 93 )
                    goto LABEL_168;
                }
                v36 = v34 + 1;
                while ( 2 )
                {
                  if ( !v35 )
                    goto LABEL_52;
                  v35 = *v36;
                  if ( *v36 != 93 )
                  {
                    ++v36;
                    continue;
                  }
                  break;
                }
                v67 = v36;
                goto LABEL_168;
              case 'm':
                if ( v28 != v32 || a4 == 1 )
                  goto LABEL_52;
                goto LABEL_139;
              case 'p':
                if ( v28 != v32 )
                  goto LABEL_52;
                v19 = a1 + 240;
                copy_tinfo_t(&v69, a1 + 240);
                goto LABEL_151;
              default:
                goto LABEL_52;
            }
            goto LABEL_56;
          }
        }
        v43 = *v24;
        v67 = v24;
        if ( v43 != 46 )
        {
          v64 = 1;
          goto LABEL_94;
        }
        goto LABEL_53;
      }
LABEL_31:
      if ( v56 )
        v59 = sub_DEDD0(&v67);
      else
        v59 = v23++;
      if ( v59 >= 0 )
      {
        v24 = v67;
        if ( *v67 != 46 )
          goto LABEL_35;
        goto LABEL_80;
      }
    }
    else
    {
LABEL_57:
      v37 = (_BYTE *)*a2;
      v38 = *a2 + 8 * a2[1];
      if ( *a2 == v38 )
      {
LABEL_226:
        v16 = 1;
        goto LABEL_54;
      }
      while ( *v37 )
      {
        v37 += 8;
        if ( (_BYTE *)v38 == v37 )
          goto LABEL_226;
      }
    }
LABEL_53:
    v16 = 0;
LABEL_54:
    clear_tinfo_t(&v68);
    return v16;
  }
  v5 = a3;
  for ( j = *a3; j; v67 = v7 + 1 )
  {
    if ( j == 37 )
    {
      v7 = v5 + 1;
      v8 = v5[1] == 37;
      v67 = v5 + 1;
      if ( !v8 )
      {
        v9 = (__int64 *)*a2;
        v10 = a2[2];
        v69 = 25;
        if ( &v69 < v9 || &v69 >= &v9[v10] )
        {
          v14 = a2[1];
          if ( v10 < v14 + 1 )
          {
            v42 = qvector_reserve(a2, v9, v14 + 1, 8);
            *a2 = v42;
            v9 = (__int64 *)v42;
            v14 = a2[1];
          }
          v15 = &v9[v14];
          *v15 = 0;
          copy_tinfo_t(v15, &v69);
        }
        else
        {
          v70 = 0;
          copy_tinfo_t(&v70, &v69);
          v11 = a2[1];
          v12 = (_BYTE *)*a2;
          if ( a2[2] < (unsigned __int64)(v11 + 1) )
          {
            v52 = qvector_reserve(a2, v12, v11 + 1, 8);
            *a2 = v52;
            v12 = (_BYTE *)v52;
            v11 = a2[1];
          }
          v13 = &v12[8 * v11];
          *v13 = 0;
          copy_tinfo_t(v13, &v70);
          clear_tinfo_t(&v70);
        }
        ++a2[1];
        clear_tinfo_t(&v69);
      }
    }
    else
    {
      v7 = v67;
    }
    j = v7[1];
    v5 = v7 + 1;
  }
  return 1;
}
