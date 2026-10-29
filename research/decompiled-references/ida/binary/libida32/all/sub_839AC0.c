__int64 __fastcall sub_839AC0(
        unsigned __int8 **a1,
        unsigned __int8 *a2,
        unsigned int *a3,
        int *a4,
        int a5,
        __int16 a6,
        unsigned int a7,
        int a8,
        __int64 a9)
{
  unsigned __int8 *v10; // r13
  unsigned int v11; // r15d
  unsigned __int8 *v12; // r10
  int v15; // r14d
  unsigned int v16; // r11d
  unsigned __int8 *v18; // r9
  unsigned int v19; // edi
  int v20; // r8d
  int v21; // eax
  bool v22; // r8
  unsigned __int8 *v23; // r13
  unsigned __int8 *v24; // r14
  unsigned int v25; // eax
  unsigned __int8 *v26; // rdx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // r15d
  int v31; // eax
  unsigned __int8 v32; // al
  unsigned __int8 *v33; // r13
  unsigned __int8 *v34; // rdi
  bool v35; // al
  bool v36; // cl
  unsigned __int8 *v37; // rdi
  bool v38; // al
  bool v39; // dl
  __int64 v40; // rax
  int v41; // eax
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  int v44; // eax
  int v45; // esi
  int v46; // ecx
  int v47; // edx
  unsigned int v48; // eax
  int v49; // eax
  unsigned __int8 *v50; // r9
  bool v51; // al
  unsigned __int8 *v52; // rdx
  bool v53; // r8
  unsigned __int8 *v54; // r13
  unsigned __int8 *v55; // rdx
  char v56; // r9
  int v57; // ecx
  unsigned __int8 *v58; // r9
  int v59; // ecx
  bool v60; // r8
  unsigned __int8 *v61; // r8
  unsigned __int8 *v62; // rcx
  int v63; // eax
  unsigned __int8 *v64; // rdx
  unsigned __int8 *v65; // r9
  unsigned __int8 *v66; // rax
  bool v67; // di
  unsigned __int8 *v68; // rdx
  unsigned __int8 *v69; // r8
  bool v70; // al
  bool v71; // cl
  unsigned __int8 *v72; // r9
  bool v73; // al
  _BYTE *v74; // rcx
  bool v75; // r8
  unsigned __int8 *v76; // r11
  unsigned __int8 *v77; // rax
  char v78; // r8
  int v79; // ecx
  unsigned __int8 *v80; // r13
  unsigned __int8 *v81; // rax
  int v82; // ecx
  int v83; // r11d
  unsigned __int8 *v84; // r8
  bool v85; // cl
  bool v86; // r9
  unsigned __int8 *v87; // r8
  unsigned __int8 *v88; // rdi
  unsigned __int8 *v90; // [rsp+0h] [rbp-C8h]
  unsigned __int8 *v91; // [rsp+0h] [rbp-C8h]
  unsigned int v92; // [rsp+Ch] [rbp-BCh]
  unsigned __int8 *v93; // [rsp+10h] [rbp-B8h]
  unsigned __int8 *v94; // [rsp+18h] [rbp-B0h]
  unsigned __int8 *v95; // [rsp+18h] [rbp-B0h]
  unsigned __int8 *v96; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v97; // [rsp+28h] [rbp-A0h]
  unsigned __int8 *v98; // [rsp+30h] [rbp-98h]
  unsigned __int8 *v99; // [rsp+38h] [rbp-90h]
  unsigned __int8 *v100; // [rsp+40h] [rbp-88h]
  unsigned __int8 *v101; // [rsp+48h] [rbp-80h]
  unsigned __int8 *v102; // [rsp+50h] [rbp-78h]
  unsigned __int8 *v103; // [rsp+58h] [rbp-70h]
  unsigned __int8 *v104; // [rsp+60h] [rbp-68h]
  unsigned __int8 *v105; // [rsp+68h] [rbp-60h]
  int v106; // [rsp+74h] [rbp-54h] BYREF
  unsigned __int8 *v107; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int8 *v108[9]; // [rsp+80h] [rbp-48h] BYREF

  v10 = *a1;
  v108[1] = (unsigned __int8 *)__readfsqword(0x28u);
  if ( v10 >= a2 )
  {
    *a4 = 101;
    return 0;
  }
  v11 = *v10;
  v12 = v10 + 1;
  v107 = v10 + 1;
  v15 = 0;
  v16 = v11 - 48;
  *a4 = 0;
  if ( v11 - 48 > 0x4A )
    goto LABEL_3;
  v18 = (unsigned __int8 *)word_239B440;
  v15 = word_239B440[v16];
  v92 = a5 & 0x80000;
  v19 = ((a5 & 0x80000u) >> 19) & 1;
  if ( word_239B440[v16] )
  {
    if ( v15 > 0 )
    {
      v11 = word_239B440[v16];
      v15 = 0;
      if ( v11 == 13 && (a6 & 0x10) != 0 )
        v11 = 10;
      goto LABEL_3;
    }
    if ( a9 && (v15 == -15 || v15 == -16 || v15 == -22) )
      *(_DWORD *)(a9 + 232) |= 0x100000u;
    v22 = v12 < a2 && v15 == -12;
    if ( !v22 )
    {
      v15 = -v15;
      goto LABEL_3;
    }
    v15 = 12;
    if ( v10[1] != 123 )
      goto LABEL_3;
    v23 = v10 + 2;
    v24 = v93;
    v25 = 0;
    v108[0] = v23;
    v26 = v23;
    if ( v23 < a2 )
    {
      while ( 1 )
      {
        v18 = (unsigned __int8 *)v25;
        LOBYTE(v25) = *v26 == 9 || *v26 == 32;
        if ( !(_BYTE)v25 )
          break;
        if ( ++v26 == a2 )
        {
          v108[0] = a2;
LABEL_31:
          if ( a8 || !a9 || (v91 = v12, v49 = sub_832980(v108, a2, nullptr, nullptr, a4, v18), v12 = v91, !v49) && !*a4 )
          {
            *a4 = 137;
            v12 = v23;
          }
LABEL_34:
          v15 = 12;
          goto LABEL_3;
        }
        v24 = v26;
      }
      if ( (_BYTE)v18 )
        v108[0] = v24;
    }
    if ( a2 - v26 <= 1 || *v26 != 85 || v26[1] != 43 )
      goto LABEL_31;
    v12 = v26 + 2;
    v107 = v26 + 2;
    if ( !v92 )
    {
      if ( v12 >= a2 )
        goto LABEL_191;
      v65 = v94;
      v66 = v26 + 2;
      v67 = 0;
      while ( byte_239B4E0[*v66] != 0xFF )
      {
        if ( ++v66 == a2 )
          goto LABEL_271;
        v67 = v22;
        v65 = v66;
      }
      v95 = v65;
      if ( v67 )
      {
        v107 = v65;
        if ( v65 >= a2 )
          goto LABEL_191;
      }
      else
      {
        v95 = v26 + 2;
      }
      v68 = v95;
      v69 = v102;
      v70 = 0;
      while ( 1 )
      {
        v71 = v70;
        v70 = *v68 == 9 || *v68 == 32;
        if ( !v70 )
          break;
        if ( ++v68 == a2 )
        {
          v107 = v68;
          goto LABEL_191;
        }
        v69 = v68;
      }
      if ( v71 )
        v107 = v69;
      if ( v68 < a2 && *v68 == 125 )
      {
        v66 = v68 + 1;
LABEL_271:
        v107 = v66;
      }
LABEL_191:
      *a4 = 193;
      v12 = v107;
      goto LABEL_34;
    }
    goto LABEL_206;
  }
  if ( a9 )
  {
    v20 = a6 & 0x20 | a5 & 2;
    switch ( (char)v11 )
    {
      case '0':
        goto LABEL_52;
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        goto LABEL_36;
      case 'F':
      case 'L':
      case 'l':
        goto LABEL_43;
      case 'U':
        if ( v20 )
          goto LABEL_60;
        goto LABEL_98;
      case 'c':
        goto LABEL_47;
      case 'g':
        v11 = 103;
        if ( a8 )
          goto LABEL_3;
        if ( v12 >= a2 )
          goto LABEL_127;
        v32 = v10[1];
        v15 = 27;
        if ( v32 == 39 || v32 == 60 )
          goto LABEL_3;
        if ( v32 == 123 )
        {
          v33 = v10 + 2;
          v34 = v105;
          v35 = 0;
          v108[0] = v33;
          if ( v33 < a2 )
          {
            while ( 1 )
            {
              v36 = v35;
              v35 = *v33 == 9 || *v33 == 32;
              if ( !v35 )
              {
                if ( v36 )
                  v108[0] = v34;
                goto LABEL_77;
              }
              if ( ++v33 == a2 )
                break;
              v34 = v33;
            }
            v108[0] = a2;
          }
LABEL_77:
          v90 = v12;
          v15 = sub_8327E0(v108, a2, a7, 0xFFFFu, 161, (unsigned int *)&v106, a4);
          v12 = v90;
          if ( !v15 )
          {
            if ( !*a4 )
              v15 = 28;
            goto LABEL_87;
          }
          v12 = v108[0];
          if ( v108[0] >= a2 )
            goto LABEL_86;
          v37 = v103;
          v38 = 0;
          while ( 1 )
          {
            v39 = v38;
            v38 = *v12 == 9 || *v12 == 32;
            if ( !v38 )
              break;
            v37 = v12 + 1;
            v12 = v37;
            if ( v37 == a2 )
              goto LABEL_86;
          }
          if ( v39 )
            v108[0] = v37;
          if ( v12 >= a2 || *v12 != 125 )
          {
LABEL_86:
            *a4 = 219;
            v15 = 0;
            goto LABEL_87;
          }
          v107 = v12 + 1;
          goto LABEL_239;
        }
        if ( !(unsigned int)sub_8327E0(&v107, a2, a7, 0xFFFFu, 161, (unsigned int *)&v106, a4) )
        {
          v15 = *a4;
          if ( *a4 )
            goto LABEL_262;
          *a4 = 157;
          v12 = v107;
          goto LABEL_3;
        }
LABEL_239:
        v12 = v107;
        if ( v106 > 0 )
        {
          v15 = ~v106;
          v11 = 103;
          goto LABEL_3;
        }
        *a4 = 115;
        v15 = 0;
        goto LABEL_87;
      case 'o':
        goto LABEL_44;
      case 'u':
        if ( !v20 )
        {
          *a4 = 137;
          goto LABEL_51;
        }
        if ( v12 >= a2 )
          goto LABEL_51;
        v43 = v10[1];
        if ( (_BYTE)v43 != 123 || (a6 & 0x20) == 0 )
        {
          if ( a2 - v12 <= 3 )
            goto LABEL_51;
          v44 = byte_239B4E0[v43];
          if ( v44 == 255 )
            goto LABEL_51;
          v45 = byte_239B4E0[v10[2]];
          if ( v45 == 255 )
            goto LABEL_51;
          v46 = byte_239B4E0[v10[3]];
          if ( v46 == 255 )
            goto LABEL_51;
          v47 = byte_239B4E0[v10[4]];
          if ( v47 == 255 )
            goto LABEL_51;
          v107 = v10 + 5;
          v11 = v47 | (16 * (v46 | (16 * (v45 | (16 * v44)))));
          if ( !v92 )
            goto LABEL_119;
          goto LABEL_319;
        }
        v80 = v10 + 2;
        v11 = 0;
        v81 = v80;
        if ( v80 < a2 )
        {
          while ( 1 )
          {
            v82 = byte_239B4E0[*v81];
            if ( v82 == 255 )
              break;
            if ( v11 > 0xFFFFFFF )
            {
              *a4 = 177;
              v12 = v81;
              v107 = v81;
              break;
            }
            v11 = v82 | (16 * v11);
            if ( a2 == v81 + 1 )
              goto LABEL_279;
            ++v81;
          }
          if ( ++v12 != v81 && v81 < a2 && *v81 == 125 )
          {
            v12 = v81 + 1;
            v107 = v81 + 1;
            if ( !v92 )
            {
LABEL_119:
              if ( v11 > 0xFF )
              {
                *a4 = 177;
                v12 = v107;
                goto LABEL_3;
              }
              goto LABEL_286;
            }
            if ( v11 > 0x10FFFF )
            {
              *a4 = 177;
              goto LABEL_3;
            }
LABEL_319:
            if ( v11 - 55296 > 0x7FF || (a6 & 1) != 0 )
              goto LABEL_286;
            goto LABEL_285;
          }
        }
        else
        {
LABEL_279:
          v12 = v80;
        }
        if ( a8 )
        {
          v12 = v107;
          v11 = 117;
          goto LABEL_3;
        }
        v15 = 29;
LABEL_51:
        v11 = 117;
        goto LABEL_3;
      case 'x':
        if ( !v20 )
          goto LABEL_90;
        if ( a2 - v12 <= 1 )
          goto LABEL_105;
        v30 = byte_239B4E0[v10[1]];
        if ( v30 == 255 )
          goto LABEL_105;
        v31 = byte_239B4E0[v10[2]];
        if ( v31 == 255 )
          goto LABEL_105;
        v12 = v10 + 3;
        v11 = v31 | (16 * v30);
        goto LABEL_3;
      default:
        goto LABEL_14;
    }
  }
  if ( (unsigned __int8)(v11 - 48) <= 0x3Fu )
  {
    v42 = 0x80080000000003FFLL;
    if ( !_bittest64((const __int64 *)&v42, v11 - 48) )
    {
      if ( v11 == 103 )
      {
LABEL_100:
        if ( !a8 )
        {
          if ( v12 >= a2 )
          {
LABEL_127:
            *a4 = 157;
            v11 = 103;
          }
          else
          {
            if ( v10[1] == 60 )
            {
              v108[0] = v10 + 2;
              if ( (unsigned int)sub_8327E0(v108, a2, -1, 0xFFFFu, 161, (unsigned int *)&v106, a4) )
              {
                v12 = v108[0];
                if ( v108[0] < a2 && *v108[0] == 62 )
                {
                  v12 = v108[0] + 1;
                  v15 = ~v106;
                }
                else
                {
                  *a4 = 219;
                }
              }
              else
              {
                v12 = v10 + 1;
                if ( !*a4 )
                  v15 = 27;
              }
            }
            else
            {
              *a4 = 157;
            }
LABEL_87:
            v11 = 103;
          }
        }
        goto LABEL_3;
      }
LABEL_126:
      *a4 = 103;
      goto LABEL_3;
    }
    switch ( v11 )
    {
      case '0':
LABEL_52:
        v16 = 0;
        if ( v12 < a2 )
          goto LABEL_53;
        if ( (a6 & 0x4000) == 0 )
          goto LABEL_198;
        goto LABEL_197;
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
LABEL_36:
        if ( a8 )
          goto LABEL_107;
        if ( (a6 & 0x2000) != 0 )
        {
          if ( *v10 > 0x37u
            || v10 + 2 >= a2
            || (unsigned __int8)(v10[1] - 48) > 7u
            || (unsigned __int8)(v10[2] - 48) > 7u )
          {
            v107 = v10;
            v27 = sub_8327E0(&v107, a2, -1, 0xFFFFu, 0, (unsigned int *)&v106, a4);
            v12 = v107;
            v15 = v27;
            if ( v27 )
              v15 = ~v106;
            else
              *a4 = 161;
            goto LABEL_3;
          }
LABEL_107:
          if ( v11 > 0x37 )
            goto LABEL_3;
LABEL_108:
          if ( v12 < a2 )
          {
LABEL_53:
            v28 = v10[1];
            if ( (unsigned __int8)(v28 - 48) <= 7u )
            {
              v12 = v10 + 2;
              v11 = v28 + 8 * v16 - 48;
              if ( v10 + 2 < a2 )
              {
                v29 = v10[2];
                if ( (unsigned __int8)(v29 - 48) <= 7u )
                {
                  v11 = v29 + 8 * v11 - 48;
                  v12 = v10 + 3;
                  if ( v11 > 0xFF )
                  {
                    if ( (a6 & 0x2000) != 0 )
                    {
                      *a4 = 202;
                    }
                    else if ( !v92 )
                    {
                      *a4 = 151;
                    }
                  }
                }
              }
              goto LABEL_3;
            }
            if ( (a6 & 0x4000) != 0 && !v16 )
            {
LABEL_197:
              *a4 = 198;
LABEL_198:
              v11 = 0;
              goto LABEL_3;
            }
          }
          v11 = v16;
          goto LABEL_3;
        }
        v107 = v10;
        v63 = sub_8327E0(&v107, a2, -1, 0xFFFFu, 0, (unsigned int *)&v106, a4);
        v12 = v10 + 1;
        v16 = v11 - 48;
        if ( v63 )
        {
          if ( v106 > 9 && v11 <= 0x37 && a7 < v106 )
            goto LABEL_108;
          v12 = v107;
          v64 = v107;
          if ( (unsigned int)v106 <= 0xFFFF )
          {
            v15 = ~v106;
            goto LABEL_3;
          }
        }
        else
        {
          v106 = 0x7FFFFFFF;
          v64 = v107;
          if ( v11 <= 0x37 && a7 <= 0x7FFFFFFE )
            goto LABEL_108;
        }
        *a4 = 161;
        v12 = v64;
        v15 = 0;
        goto LABEL_3;
      case ':':
      case ';':
      case '<':
      case '=':
      case '>':
      case '?':
      case '@':
      case 'A':
      case 'B':
      case 'C':
      case 'D':
      case 'E':
      case 'G':
      case 'H':
      case 'I':
      case 'J':
      case 'K':
      case 'M':
      case 'N':
      case 'O':
      case 'P':
      case 'Q':
      case 'R':
      case 'S':
      case 'T':
      case 'V':
      case 'W':
      case 'X':
      case 'Y':
      case 'Z':
      case '[':
      case '\\':
      case ']':
      case '^':
      case '_':
      case '`':
      case 'a':
      case 'b':
      case 'd':
      case 'e':
      case 'f':
      case 'h':
      case 'i':
      case 'j':
      case 'k':
      case 'm':
      case 'n':
LABEL_14:
        v21 = 103;
        goto LABEL_15;
      case 'F':
      case 'L':
      case 'l':
LABEL_43:
        v21 = 137;
LABEL_15:
        *a4 = v21;
        goto LABEL_3;
      case 'U':
LABEL_98:
        *a4 = 137;
LABEL_60:
        v11 = 85;
        goto LABEL_3;
      case 'c':
LABEL_47:
        if ( v12 >= a2 )
        {
          *a4 = 102;
          v11 = 99;
          goto LABEL_3;
        }
        v11 = v10[1];
        v48 = v11 - 32;
        if ( v11 - 97 <= 0x19 )
          goto LABEL_130;
        if ( v48 > 0x5E )
        {
          *a4 = 168;
          goto LABEL_124;
        }
        v48 = v10[1];
LABEL_130:
        v12 = v10 + 2;
        v11 = v48 ^ 0x40;
        goto LABEL_3;
      case 'g':
        v11 = 103;
        goto LABEL_100;
      case 'o':
LABEL_44:
        if ( v12 >= a2 || v10[1] != 123 )
        {
          *a4 = 155;
          v11 = 111;
          goto LABEL_3;
        }
        v12 = v10 + 2;
        v50 = v100;
        v51 = 0;
        v107 = v10 + 2;
        v52 = v10 + 2;
        if ( v10 + 2 >= a2 )
          goto LABEL_194;
        while ( 2 )
        {
          v53 = v51;
          v51 = *v52 == 9 || *v52 == 32;
          if ( v51 )
          {
            v50 = v52 + 1;
            if ( v52 + 1 != a2 )
            {
              ++v52;
              continue;
            }
          }
          else
          {
            if ( v53 )
            {
              v107 = v50;
              v12 = v50;
            }
            if ( v52 < a2 && *v52 != 125 )
            {
              if ( v12 >= a2 )
              {
                v11 = 0;
                goto LABEL_265;
              }
              v54 = v97;
              v55 = v12;
              v56 = 0;
              v11 = 0;
              while ( 1 )
              {
                v57 = *v55;
                if ( (unsigned __int8)(v57 - 48) > 7u )
                  break;
                ++v55;
                if ( v11 || v57 != 48 )
                {
                  v11 = v57 + 8 * v11 - 48;
                  if ( ((_BYTE)v19 == 0 ? 255 : 1114111) < v11 )
                  {
                    v107 = v55;
                    v58 = v96;
                    v12 = v55;
                    v59 = 1;
                    if ( v55 < a2 )
                      goto LABEL_158;
                    goto LABEL_169;
                  }
                }
                else
                {
                  v11 = 0;
                }
                v56 = 1;
                if ( v55 == a2 )
                {
                  v107 = a2;
                  v12 = a2;
                  goto LABEL_282;
                }
                v54 = v55;
              }
              if ( v56 )
              {
                v107 = v54;
                v12 = v54;
              }
              if ( v12 >= a2 )
              {
LABEL_282:
                if ( v11 - 55296 > 0x7FF || !(_BYTE)v19 )
                  goto LABEL_265;
              }
              else
              {
                v58 = v96;
                v59 = 0;
LABEL_158:
                while ( 1 )
                {
                  v60 = v51;
                  v51 = *v12 == 9 || *v12 == 32;
                  if ( !v51 )
                    break;
                  v58 = v12 + 1;
                  if ( v12 + 1 == a2 )
                  {
                    v55 = v12 + 1;
                    v107 = a2;
                    if ( !v59 )
                    {
                      v12 = a2;
                      goto LABEL_249;
                    }
LABEL_169:
                    *a4 = 134;
                    v12 = v55;
                    goto LABEL_3;
                  }
                  ++v12;
                }
                if ( v60 )
                  v107 = v58;
                if ( v59 )
                {
                  v55 = v107;
                  v61 = v104;
                  v62 = v107;
                  if ( v107 < a2 )
                  {
                    while ( 1 )
                    {
                      if ( (unsigned __int8)(*v62 - 48) > 7u )
                      {
                        if ( v51 )
                        {
                          v107 = v61;
                          v55 = v61;
                        }
                        goto LABEL_169;
                      }
                      ++v62;
                      v51 = 1;
                      if ( v62 == a2 )
                        break;
                      v61 = v62;
                    }
                    v107 = v62;
                    v55 = v62;
                  }
                  goto LABEL_169;
                }
LABEL_249:
                if ( v11 - 55296 > 0x7FF || !(_BYTE)v19 )
                {
LABEL_251:
                  if ( v12 < a2 && *v12 == 125 )
                  {
                    ++v12;
                    goto LABEL_3;
                  }
LABEL_265:
                  *a4 = 164;
                  v12 = v107;
                  goto LABEL_124;
                }
              }
              if ( (a6 & 1) == 0 )
              {
LABEL_285:
                *a4 = 173;
LABEL_286:
                v12 = v107;
                goto LABEL_3;
              }
              goto LABEL_251;
            }
            a2 = v12;
          }
          break;
        }
        v12 = a2;
LABEL_194:
        *a4 = 178;
        v11 = 111;
        goto LABEL_3;
      default:
        break;
    }
  }
  if ( v11 != 120 )
    goto LABEL_126;
LABEL_90:
  if ( v12 >= a2 )
  {
LABEL_104:
    *a4 = 178;
LABEL_105:
    v11 = 120;
    goto LABEL_3;
  }
  v40 = v10[1];
  if ( (_BYTE)v40 != 123 )
  {
    v11 = byte_239B4E0[v40];
    if ( v11 != 255 )
    {
      v12 = v10 + 2;
      if ( v10 + 2 < a2 )
      {
        v41 = byte_239B4E0[v10[2]];
        if ( v41 != 255 )
        {
          v12 = v10 + 3;
          v11 = v41 | (16 * v11);
        }
      }
      goto LABEL_3;
    }
    goto LABEL_104;
  }
  v12 = v10 + 2;
  v72 = v101;
  v73 = 0;
  v107 = v10 + 2;
  v74 = v10 + 2;
  if ( v10 + 2 >= a2 )
    goto LABEL_223;
  while ( 1 )
  {
    v75 = v73;
    v73 = *v74 == 9 || *v74 == 32;
    if ( !v73 )
      break;
    v72 = v74 + 1;
    if ( v74 + 1 == a2 )
    {
      v12 = v74 + 1;
      goto LABEL_223;
    }
    ++v74;
  }
  if ( !v75 )
    goto LABEL_207;
  v107 = v72;
  v12 = v72;
LABEL_206:
  if ( v12 >= a2 )
  {
LABEL_223:
    *a4 = 178;
    v15 = 0;
    goto LABEL_3;
  }
LABEL_207:
  if ( *v12 == 125 )
    goto LABEL_223;
  v76 = v99;
  v77 = v12;
  v78 = 0;
  v11 = 0;
  while ( 1 )
  {
    v79 = byte_239B4E0[*v77];
    if ( v79 == 255 )
    {
      if ( v78 )
      {
        v107 = v76;
        v12 = v76;
      }
      if ( v12 < a2 )
      {
        v83 = 0;
        goto LABEL_291;
      }
LABEL_258:
      if ( v11 - 55296 > 0x7FF || !(_BYTE)v19 )
        goto LABEL_311;
      goto LABEL_260;
    }
    ++v77;
    if ( !(v11 | v79) )
    {
      v11 = 0;
      goto LABEL_213;
    }
    v11 = v79 | (16 * v11);
    if ( v11 > 0x10FFFF )
    {
      if ( (_BYTE)v19 )
        break;
    }
    if ( v11 > 0xFF && (unsigned __int8)(v92 >> 19) != 1 )
      break;
LABEL_213:
    v78 = 1;
    if ( v77 == a2 )
    {
      v107 = a2;
      v12 = a2;
      goto LABEL_258;
    }
    v76 = v77;
  }
  v107 = v77;
  v12 = v77;
  v83 = 1;
  if ( v77 >= a2 )
  {
LABEL_304:
    *a4 = 134;
    v12 = v77;
    v15 = 0;
    goto LABEL_3;
  }
LABEL_291:
  v84 = v98;
  v85 = 0;
  while ( 1 )
  {
    v86 = v85;
    v85 = *v12 == 9 || *v12 == 32;
    if ( !v85 )
      break;
    v84 = v12 + 1;
    if ( v12 + 1 == a2 )
    {
      v107 = a2;
      if ( !v83 )
      {
        v12 = a2;
        goto LABEL_307;
      }
      v87 = v12 + 1;
LABEL_324:
      v77 = v87;
      goto LABEL_304;
    }
    ++v12;
  }
  if ( v86 )
    v107 = v84;
  if ( v83 )
  {
    v87 = v107;
    v88 = v107;
    if ( v107 >= a2 )
      goto LABEL_324;
    while ( byte_239B4E0[*v88] != 0xFF )
    {
      v77 = v88 + 1;
      v85 = 1;
      if ( v88 + 1 == a2 )
        goto LABEL_304;
      ++v88;
    }
    if ( !v85 )
      goto LABEL_324;
    goto LABEL_304;
  }
LABEL_307:
  if ( v11 - 55296 <= 0x7FF && (_BYTE)v19 )
  {
LABEL_260:
    if ( (a6 & 1) != 0 )
      goto LABEL_309;
    *a4 = 173;
LABEL_262:
    v12 = v107;
    v15 = 0;
    goto LABEL_3;
  }
LABEL_309:
  if ( v12 >= a2 || *v12 != 125 )
  {
LABEL_311:
    *a4 = 167;
    v12 = v107;
  }
LABEL_124:
  ++v12;
  v15 = 0;
LABEL_3:
  *a1 = v12;
  *a3 = v11;
  return (unsigned int)v15;
}

