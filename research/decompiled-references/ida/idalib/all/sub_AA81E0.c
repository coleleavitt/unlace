__int64 __fastcall sub_AA81E0(char **a1, _QWORD *a2, _DWORD *a3, _BYTE *a4, char a5, __int64 a6)
{
  char v8; // r12
  char v9; // bp
  char *v11; // rdx
  __int64 v12; // r8
  const char *v13; // rdi
  int v14; // eax
  int v15; // eax
  __int64 v16; // rbx
  char *v17; // rdx
  char v18; // r12
  int v19; // eax
  int v20; // eax
  unsigned int v22; // ebp
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rbx
  unsigned __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rbx
  unsigned __int64 v36; // rax
  unsigned int v37; // ebp
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // rax
  unsigned int v46; // ebp
  __int64 v47; // rax
  char v48; // al
  __int64 v49; // rsi
  __int64 v50; // rbx
  unsigned __int64 v51; // rax
  char *endptr[8]; // [rsp+18h] [rbp-40h] BYREF

  v8 = 0;
  v9 = 0;
  *a4 = 0;
  v11 = *a1;
  v12 = 0;
  while ( 2 )
  {
    v13 = v11 + 1;
    *a1 = v11 + 1;
    switch ( *v11 )
    {
      case 'I':
        *a4 = 1;
        goto LABEL_5;
      case 'L':
        goto LABEL_4;
      case 'N':
        v12 = (*(_BYTE *)(a2[2181] + 30LL) == 32) + (unsigned int)v12;
        goto LABEL_5;
      case 'O':
        LODWORD(v12) = (*(_BYTE *)(a2[290] + 47LL) & 0x20) == 0;
LABEL_4:
        v12 = (unsigned int)(v12 + 1);
        goto LABEL_5;
      case 'S':
        v8 = 1;
        goto LABEL_5;
      case 'U':
        v9 = 1;
        goto LABEL_5;
      case 'W':
        v15 = *(_DWORD *)(a2[2181] + 168LL);
        if ( v15 == 7 )
          goto LABEL_14;
        if ( v15 != 9 )
          goto LABEL_18;
        v12 = 2;
        goto LABEL_5;
      case 'Z':
        v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _BYTE *, __int64))(*(_QWORD *)a2[2181] + 16LL))(
                a2[2181],
                32,
                1,
                a4,
                v12);
        if ( v14 == 7 )
        {
          v13 = *a1;
LABEL_14:
          v12 = 1;
        }
        else
        {
          if ( v14 != 9 )
            goto LABEL_18;
          v13 = *a1;
          v12 = 2;
        }
        goto LABEL_5;
      default:
        switch ( *v11 )
        {
          case 'A':
            v39 = sub_AA7570(a2);
            v43 = *(_QWORD *)(v39 + 48);
            if ( v43 )
            {
              v44 = v43 & 0xFFFFFFFFFFFFFFF0LL;
              v45 = v43 & 0xFFFFFFFFFFFFFFF0LL;
            }
            else
            {
              v44 = sub_A7AA70((__int64)a2, v39, 0, v40, v41, v42);
              v45 = v44 & 0xFFFFFFFFFFFFFFF0LL;
            }
            if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v45 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
                                 - 2) > 4u )
              v16 = sub_A73030((__int64)a2, v44, 1u);
            else
              v16 = sub_A72210(a2, v44);
            goto LABEL_21;
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
            v16 = sub_A63B40(a2, *(_DWORD *)(a2[2181] + 136LL));
            goto LABEL_21;
          case 'E':
            v37 = strtoul(v13, endptr, 10);
            *a1 = endptr[0];
            v38 = sub_AA81E0(a1, a2, a3, a4, 0);
            v16 = sub_A76A60((__int64)a2, v38, v37);
            goto LABEL_21;
          case 'F':
            v16 = sub_A8A8A0(a2);
            goto LABEL_21;
          case 'G':
            v16 = sub_A8A430(a2, (unsigned __int8)(*v11 - 65), (__int64)v11, (__int64)a4, v12, a6);
            goto LABEL_21;
          case 'H':
            v24 = sub_A8A1F0(a2);
            v29 = *(_QWORD *)(v24 + 48);
            if ( !v29 )
              goto LABEL_71;
            goto LABEL_56;
          case 'J':
            if ( v8 )
            {
              v34 = a2[208];
              if ( !v34 )
                goto LABEL_69;
            }
            else
            {
              v34 = a2[207];
              if ( !v34 )
                goto LABEL_69;
            }
            v35 = *(_QWORD *)(v34 + 48);
            if ( v35 )
            {
              v16 = v35 & 0xFFFFFFFFFFFFFFF0LL;
              v36 = v16;
            }
            else
            {
              v16 = sub_A7AA70((__int64)a2, v34, (__int64)v11, (__int64)a4, v12, a6);
              v36 = v16 & 0xFFFFFFFFFFFFFFF0LL;
            }
            if ( v36 )
              goto LABEL_21;
LABEL_69:
            *a3 = 3;
            return 0;
          case 'K':
            v31 = a2[209];
            if ( v31 )
            {
              v32 = *(_QWORD *)(v31 + 48);
              if ( v32 )
              {
                v16 = v32 & 0xFFFFFFFFFFFFFFF0LL;
                v33 = v16;
              }
              else
              {
                v16 = sub_A7AA70((__int64)a2, v31, (__int64)v11, (__int64)a4, v12, a6);
                v33 = v16 & 0xFFFFFFFFFFFFFFF0LL;
              }
              if ( v33 )
                goto LABEL_21;
            }
            *a3 = 4;
            return 0;
          case 'M':
            v16 = sub_A872A0(a2);
            goto LABEL_21;
          case 'P':
            v49 = a2[206];
            if ( v49 )
            {
              v50 = *(_QWORD *)(v49 + 48);
              if ( v50 )
              {
                v16 = v50 & 0xFFFFFFFFFFFFFFF0LL;
                v51 = v16;
              }
              else
              {
                v16 = sub_A7AA70((__int64)a2, v49, (__int64)v11, (__int64)a4, v12, a6);
                v51 = v16 & 0xFFFFFFFFFFFFFFF0LL;
              }
              if ( v51 )
                goto LABEL_21;
            }
            *a3 = 2;
            return 0;
          case 'Q':
            *a1 = v11 + 2;
            v48 = v11[1];
            if ( v48 != 97 )
            {
              if ( v48 == 98 )
              {
                v16 = a2[2837];
                goto LABEL_21;
              }
LABEL_18:
              v13 = *a1;
              v12 = 0;
LABEL_5:
              v11 = (char *)v13;
              continue;
            }
            v16 = a2[2508];
LABEL_21:
            if ( a5 )
            {
              v17 = *a1;
              while ( 2 )
              {
                *a1 = v17 + 1;
                v18 = *v17;
                switch ( *v17 )
                {
                  case '&':
                  case '*':
                    v19 = strtoul(v17 + 1, endptr, 10);
                    if ( *a1 != endptr[0] )
                    {
                      v20 = sub_A68500((__int64)a2, v19);
                      v16 = sub_A70E70((__int64)a2, v16, v20);
                      *a1 = endptr[0];
                    }
                    if ( v18 == 42 )
                      v16 = sub_A70010((__int64)a2, v16);
                    else
                      v16 = sub_A73030((__int64)a2, v16, 1u);
                    v17 = *a1;
                    continue;
                  case 'C':
                    v16 = v16 & 7 | 1 | v16 & 0xFFFFFFFFFFFFFFF8LL;
                    ++v17;
                    continue;
                  case 'D':
                    v16 = v16 & 7 | 4 | v16 & 0xFFFFFFFFFFFFFFF8LL;
                    ++v17;
                    continue;
                  case 'R':
                    v16 = v16 & 7 | 2 | v16 & 0xFFFFFFFFFFFFFFF8LL;
                    ++v17;
                    continue;
                  default:
                    *a1 = v17;
                    break;
                }
                break;
              }
            }
            return v16;
          case 'V':
            v46 = strtoul(v13, endptr, 10);
            *a1 = endptr[0];
            v47 = sub_AA81E0(a1, a2, a3, a4, 0);
            v16 = sub_A70300((__int64)a2, v47, v46, 0);
            goto LABEL_21;
          case 'X':
            v30 = sub_AA81E0(a1, a2, a3, a4, 0);
            v16 = sub_A74CE0((__int64)a2, v30);
            goto LABEL_21;
          case 'Y':
            v16 = sub_A63D20(a2);
            goto LABEL_21;
          case 'a':
            v24 = sub_AA7570(a2);
            v29 = *(_QWORD *)(v24 + 48);
            if ( v29 )
LABEL_56:
              v16 = v29 & 0xFFFFFFFFFFFFFFF0LL;
            else
LABEL_71:
              v16 = sub_A7AA70((__int64)a2, v24, v25, v26, v27, v28);
            goto LABEL_21;
          case 'b':
            v16 = a2[2330];
            goto LABEL_21;
          case 'c':
            if ( v8 )
            {
              v16 = a2[2338];
            }
            else if ( v9 )
            {
              v16 = a2[2344];
            }
            else
            {
              v16 = a2[2331];
            }
            goto LABEL_21;
          case 'd':
            if ( (_DWORD)v12 == 1 )
            {
              v16 = a2[2352];
            }
            else if ( (_DWORD)v12 == 2 )
            {
              v16 = a2[2353];
            }
            else
            {
              v16 = a2[2351];
            }
            goto LABEL_21;
          case 'f':
            v16 = a2[2350];
            goto LABEL_21;
          case 'h':
            v16 = a2[2379];
            goto LABEL_21;
          case 'i':
            switch ( (_DWORD)v12 )
            {
              case 3:
                if ( v9 )
                  v16 = a2[2349];
                else
                  v16 = a2[2343];
                break;
              case 2:
                if ( v9 )
                  v16 = a2[2348];
                else
                  v16 = a2[2342];
                break;
              case 1:
                if ( v9 )
                  v16 = a2[2347];
                else
                  v16 = a2[2341];
                break;
              default:
                if ( v9 )
                  v16 = a2[2346];
                else
                  v16 = a2[2340];
                break;
            }
            goto LABEL_21;
          case 'm':
            v16 = a2[2509];
            goto LABEL_21;
          case 'p':
            v16 = sub_A63DC0(a2);
            goto LABEL_21;
          case 'q':
            v22 = strtoul(v13, endptr, 10);
            *a1 = endptr[0];
            v23 = sub_AA81E0(a1, a2, a3, a4, 0);
            v16 = sub_A980E0(a2, v23, v22, 1);
            goto LABEL_21;
          case 's':
            if ( v9 )
              v16 = a2[2345];
            else
              v16 = a2[2339];
            goto LABEL_21;
          case 'v':
            v16 = a2[2329];
            goto LABEL_21;
          case 'w':
            v16 = a2[2333];
            goto LABEL_21;
          case 'x':
            v16 = a2[2381];
            goto LABEL_21;
          case 'y':
            v16 = a2[2380];
            goto LABEL_21;
        }
    }
  }
}
