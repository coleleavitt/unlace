unsigned __int64 __fastcall sub_707040(char **a1, unsigned __int64 *a2, int *a3, _BYTE *a4, char a5)
{
  int v5; // r10d
  char v8; // r12
  char *v11; // rdi
  char *v12; // rdx
  const char *v13; // r9
  char v14; // si
  int v15; // eax
  unsigned __int64 v16; // r12
  const char *v17; // rdi
  char *v18; // rax
  char v19; // bl
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rax
  unsigned int v24; // r12d
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // r12
  unsigned __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rsi
  __int64 v31; // r12
  unsigned __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // r12
  unsigned __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rsi
  int v38; // eax
  unsigned int v39; // r12d
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rsi
  unsigned __int64 v43; // rsi
  unsigned __int64 v44; // rax
  int v45; // r12d
  __int64 v46; // rax
  unsigned __int64 *v47; // rax
  unsigned int v48; // eax
  unsigned __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 (__fastcall *v52)(__int64, int); // rdx
  __int64 v53; // rdx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rdi
  __int64 (__fastcall *v56)(__int64, int); // rax
  unsigned __int64 *v57; // rax
  unsigned __int64 *v58; // rax
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  unsigned __int64 *v64; // rax
  char v65; // [rsp+7h] [rbp-51h]
  char *endptr[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = 0;
  v8 = 0;
  *a4 = 0;
  v11 = *a1;
  v65 = 0;
  while ( 2 )
  {
    v12 = v11;
    v13 = v11 + 1;
    *a1 = v11 + 1;
    v14 = *v11++;
    switch ( v14 )
    {
      case 'I':
        *a4 = 1;
        v11 = *a1;
        continue;
      case 'L':
        goto LABEL_5;
      case 'N':
        if ( *(_BYTE *)(a2[2161] + 30) == 32 )
LABEL_5:
          ++v5;
        continue;
      case 'O':
        if ( (*(_BYTE *)(a2[270] + 47) & 0x20) == 0 )
          goto LABEL_8;
        goto LABEL_13;
      case 'S':
        v65 = 1;
        continue;
      case 'U':
        v8 = 1;
        continue;
      case 'W':
        if ( *(_DWORD *)(a2[2161] + 168) == 7 )
          goto LABEL_13;
        goto LABEL_8;
      case 'Z':
        v15 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(*(_QWORD *)a2[2161] + 16LL))(
                a2[2161],
                32,
                1);
        if ( v15 == 7 )
        {
          v11 = *a1;
LABEL_13:
          v5 = 1;
        }
        else if ( v15 == 9 )
        {
          v11 = *a1;
LABEL_8:
          v5 = 2;
        }
        else
        {
          v11 = *a1;
          v5 = 0;
        }
        continue;
      default:
        switch ( v14 )
        {
          case 'A':
            v41 = sub_706400(a2);
            v42 = *(_QWORD *)(v41 + 48);
            if ( v42 )
            {
              v43 = v42 & 0xFFFFFFFFFFFFFFF0LL;
              v44 = v43;
            }
            else
            {
              v43 = sub_6E8D60((__int64)a2, v41);
              v44 = v43 & 0xFFFFFFFFFFFFFFF0LL;
            }
            if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
                                 - 2) > 4u )
              v16 = sub_6C4DA0((__int64)a2, v43, 1u);
            else
              v16 = sub_6DA450(a2, v43);
            goto LABEL_19;
          case 'B':
          case 'C':
          case 'D':
          case 'I':
          case 'L':
          case 'N':
          case 'O':
          case 'R':
          case 'S':
          case 'T':
          case 'U':
          case 'W':
          case 'Z':
          case '[':
          case '\\':
          case ']':
          case '^':
          case '_':
          case '`':
          case 'e':
          case 'g':
          case 'j':
          case 'k':
          case 'l':
          case 'n':
          case 'o':
          case 'r':
          case 't':
          case 'u':
          case 'z':
            v16 = sub_6CD020(a2, *(_DWORD *)(a2[2161] + 136));
            goto LABEL_19;
          case 'E':
            v39 = strtoul(v13, endptr, 10);
            *a1 = endptr[0];
            v40 = sub_707040(a1, a2, a3, a4, 0);
            v16 = sub_6C6470((__int64)a2, v40, v39);
            goto LABEL_19;
          case 'F':
            v37 = a2[192];
            if ( !v37 )
              v37 = sub_6E9230(a2);
            goto LABEL_61;
          case 'G':
            v37 = a2[176];
            if ( !v37 )
            {
              v61 = sub_6DE400(a2, a2[2372], nullptr, nullptr, nullptr, 0, 0);
              v62 = sub_6C94F0((__int64)a2, v61);
              v63 = sub_6BAD90(a2, v62, "id", 2u);
              a2[176] = v63;
              v37 = v63;
            }
            v22 = *(_QWORD *)(v37 + 48);
            if ( v22 )
              goto LABEL_29;
            v38 = *(_BYTE *)(v37 + 28) & 0x7F;
            if ( (unsigned int)(v38 - 62) > 2 )
            {
              if ( (unsigned int)(v38 - 56) > 3 )
              {
                if ( (*(_BYTE *)(v37 + 28) & 0x7F) == 0x3C )
                  v16 = sub_6E8C30((__int64)a2, v37);
                else
                  v16 = sub_6C7D80((__int64)a2, v37);
              }
              else
              {
                v16 = sub_6E8B00((__int64)a2, v37);
              }
            }
            else
            {
LABEL_61:
              v16 = sub_6DE140((__int64)a2, v37, 0);
            }
            goto LABEL_19;
          case 'H':
            v36 = a2[177];
            if ( !v36 )
            {
              v59 = sub_6C4160((__int64)a2, a2[2374]);
              v60 = sub_6BAD90(a2, v59, "SEL", 3u);
              a2[177] = v60;
              v36 = v60;
            }
            v22 = *(_QWORD *)(v36 + 48);
            if ( !v22 )
              goto LABEL_56;
            goto LABEL_29;
          case 'J':
            if ( v65 )
            {
              v33 = a2[198];
              if ( !v33 )
                goto LABEL_52;
            }
            else
            {
              v33 = a2[197];
              if ( !v33 )
                goto LABEL_52;
            }
            v34 = *(_QWORD *)(v33 + 48);
            if ( v34 )
            {
              v16 = v34 & 0xFFFFFFFFFFFFFFF0LL;
              v35 = v16;
            }
            else
            {
              v16 = sub_6E8D60((__int64)a2, v33);
              v35 = v16 & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v35 > 0xF )
            {
LABEL_19:
              if ( !a5 )
                return v16;
              v17 = *a1;
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v18 = (char *)v17++;
                    *a1 = (char *)v17;
                    v19 = *v18;
                    if ( *v18 != 68 )
                      break;
                    v16 = v16 & 7 | 4 | v16 & 0xFFFFFFFFFFFFFFF8LL;
                  }
                  if ( v19 > 68 )
                    break;
                  if ( v19 == 67 )
                  {
                    v16 = v16 & 7 | 1 | v16 & 0xFFFFFFFFFFFFFFF8LL;
                  }
                  else
                  {
                    if ( ((v19 - 38) & 0xFB) != 0 )
                      goto LABEL_25;
                    v48 = strtoul(v17, endptr, 10);
                    if ( *a1 != endptr[0] )
                    {
                      v49 = a2[270];
                      v50 = v48;
                      if ( (*(_BYTE *)(v49 + 47) & 0x20) != 0 )
                      {
                        v51 = a2[2161];
                        v52 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v51 + 704LL);
                        if ( v52 == sub_6A6830 )
                          LODWORD(v53) = v48 + 22;
                        else
                          LODWORD(v53) = v52(v51, v48);
                      }
                      else
                      {
                        v53 = v48 + 22;
                        if ( (*(_BYTE *)(v49 + 60) & 0x10) != 0 )
                        {
                          v55 = a2[2161];
                          v56 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v55 + 712LL);
                          if ( v56 != sub_6A6840 )
                            LODWORD(v53) = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v56)(
                                             v55,
                                             v50,
                                             v53);
                        }
                      }
                      v16 = sub_6C3BC0(a2, v16, v53);
                      *a1 = endptr[0];
                    }
                    if ( v19 == 42 )
                      v54 = sub_6C4160((__int64)a2, v16);
                    else
                      v54 = sub_6C4DA0((__int64)a2, v16, 1u);
                    v17 = *a1;
                    v16 = v54;
                  }
                }
                if ( v19 != 82 )
                {
LABEL_25:
                  *a1 = v18;
                  return v16;
                }
                v16 = v16 & 7 | 2 | v16 & 0xFFFFFFFFFFFFFFF8LL;
              }
            }
LABEL_52:
            v29 = 3;
LABEL_40:
            v16 = 0;
            *a3 = v29;
            return v16;
          case 'K':
            v30 = a2[199];
            if ( v30 )
            {
              v31 = *(_QWORD *)(v30 + 48);
              if ( v31 )
              {
                v16 = v31 & 0xFFFFFFFFFFFFFFF0LL;
                v32 = v16;
              }
              else
              {
                v16 = sub_6E8D60((__int64)a2, v30);
                v32 = v16 & 0xFFFFFFFFFFFFFFF8LL;
              }
              if ( v32 > 0xF )
                goto LABEL_19;
            }
            v29 = 4;
            goto LABEL_40;
          case 'M':
            v16 = sub_6E9020(a2);
            goto LABEL_19;
          case 'P':
            v26 = a2[196];
            if ( v26 )
            {
              v27 = *(_QWORD *)(v26 + 48);
              if ( v27 )
              {
                v16 = v27 & 0xFFFFFFFFFFFFFFF0LL;
                v28 = v16;
              }
              else
              {
                v16 = sub_6E8D60((__int64)a2, v26);
                v28 = v16 & 0xFFFFFFFFFFFFFFF8LL;
              }
              if ( v28 > 0xF )
                goto LABEL_19;
            }
            v29 = 2;
            goto LABEL_40;
          case 'Q':
            *a1 = v12 + 2;
            if ( v12[1] == 97 )
              v16 = a2[2488];
            else
              v16 = a2[2816];
            goto LABEL_19;
          case 'V':
            v24 = strtoul(v13, endptr, 10);
            *a1 = endptr[0];
            v25 = sub_707040(a1, a2, a3, a4, 0);
            v16 = sub_6C5F70((__int64)a2, v25, v24, 0);
            goto LABEL_19;
          case 'X':
            v23 = sub_707040(a1, a2, a3, a4, 0);
            v16 = sub_6C3F40((__int64)a2, v23);
            goto LABEL_19;
          case 'Y':
            v16 = sub_6CD020(a2, *(_DWORD *)(a2[2161] + 144));
            goto LABEL_19;
          case 'a':
            v21 = sub_706400(a2);
            v22 = *(_QWORD *)(v21 + 48);
            if ( v22 )
            {
LABEL_29:
              v16 = v22 & 0xFFFFFFFFFFFFFFF0LL;
            }
            else
            {
              v36 = v21;
LABEL_56:
              v16 = sub_6E8D60((__int64)a2, v36);
            }
            goto LABEL_19;
          case 'b':
            v16 = a2[2310];
            goto LABEL_19;
          case 'c':
            if ( v65 )
            {
              v16 = a2[2318];
            }
            else if ( v8 )
            {
              v16 = a2[2324];
            }
            else
            {
              v16 = a2[2311];
            }
            goto LABEL_19;
          case 'd':
            if ( v5 == 1 )
            {
              v16 = a2[2332];
            }
            else if ( v5 == 2 )
            {
              v16 = a2[2333];
            }
            else
            {
              v16 = a2[2331];
            }
            goto LABEL_19;
          case 'f':
            v16 = a2[2330];
            goto LABEL_19;
          case 'h':
            v16 = a2[2359];
            goto LABEL_19;
          case 'i':
            switch ( v5 )
            {
              case 3:
                v57 = a2 + 2323;
                if ( v8 )
                  v57 = a2 + 2329;
                v16 = *v57;
                break;
              case 2:
                v58 = a2 + 2322;
                if ( v8 )
                  v58 = a2 + 2328;
                v16 = *v58;
                break;
              case 1:
                v64 = a2 + 2321;
                if ( v8 )
                  v64 = a2 + 2327;
                v16 = *v64;
                break;
              default:
                v47 = a2 + 2320;
                if ( v8 )
                  v47 = a2 + 2326;
                v16 = *v47;
                break;
            }
            goto LABEL_19;
          case 'm':
            v16 = a2[2489];
            goto LABEL_19;
          case 'p':
            v16 = sub_6CD020(a2, *(_DWORD *)(a2[2161] + 180));
            goto LABEL_19;
          case 'q':
            v45 = strtoul(v13, endptr, 10);
            *a1 = endptr[0];
            v46 = sub_707040(a1, a2, a3, a4, 0);
            v16 = sub_6F7140(a2, v46, v45, 1);
            goto LABEL_19;
          case 's':
            if ( v8 )
              v16 = a2[2325];
            else
              v16 = a2[2319];
            goto LABEL_19;
          case 'v':
            v16 = a2[2309];
            goto LABEL_19;
          case 'w':
            v16 = a2[2313];
            goto LABEL_19;
          case 'x':
            v16 = a2[2361];
            goto LABEL_19;
          case 'y':
            v16 = a2[2360];
            goto LABEL_19;
        }
    }
  }
}

