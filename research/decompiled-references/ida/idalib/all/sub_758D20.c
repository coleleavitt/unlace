__int64 __fastcall sub_758D20(char *a1, char *a2)
{
  char *v2; // rbx
  unsigned int v3; // ecx
  char *v4; // rax
  char v5; // al
  _DWORD *v6; // rax
  __int64 v7; // r13
  char v8; // dl
  char v9; // al
  int v10; // eax
  char v12; // r15
  char *v13; // r14
  const unsigned __int16 *v14; // rdx
  char *v15; // r13
  __int64 v16; // rax
  unsigned int v17; // r14d
  __int64 v18; // rsi
  char v19; // al
  char v20; // al
  int v21; // eax
  char *v22; // rdx
  char *v23; // rax
  __int64 v24; // rdi
  char *v25; // rdx
  int v26; // eax
  unsigned int v27; // eax
  unsigned __int8 v28; // al
  char *v29; // rsi
  char v30; // cl
  int v31; // edi
  unsigned __int8 v32; // al
  const char *v33; // rsi
  char v34; // dl
  char v35; // dl
  char v36; // cl
  char v37; // dl
  char v38; // al
  char v39; // dl
  char v40; // dl
  char v41; // al
  unsigned int v42; // eax
  char *v43; // rax
  _BYTE *v44; // r15
  char v45; // al
  char *v46; // rax
  char v47; // dl
  char v48; // al
  char v49; // dl
  char v50; // cl
  char v51; // dl
  char v52; // al
  char v53; // al
  unsigned __int8 v54; // al
  _BYTE *v55; // rsi
  int v56; // r15d
  int *i; // rcx
  char v58; // al
  __int64 v59; // rdi
  int v60; // eax
  int v61; // eax
  int *v62; // [rsp+0h] [rbp-68h]
  int v63; // [rsp+14h] [rbp-54h] BYREF
  unsigned int v64; // [rsp+18h] [rbp-50h] BYREF
  unsigned int v65; // [rsp+1Ch] [rbp-4Ch] BYREF
  int v66; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v67; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v68; // [rsp+28h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  byte_2CCCD58 = 0;
  v2 = qword_2CD44C0;
  qword_2CCCD60 = 0;
  v3 = qword_2CD44B8 - (_DWORD)qword_2CD44C0;
  unk_2CD44D0 = 0;
  if ( (_DWORD)qword_2CD44B8 - (_DWORD)qword_2CD44C0 == 254 )
  {
    if ( qword_2CD44C0[250] != 122 )
      goto LABEL_9;
    a1 = qword_2CD44C0 + 250;
    goto LABEL_7;
  }
  if ( v3 == 253 )
  {
    a1 = qword_2CD44C0 + 252;
    if ( qword_2CD44C0[252] != 95 )
    {
LABEL_9:
      qword_2CCCD60 = (__int64)&qword_2CD44C0[v3 - 2];
      goto LABEL_10;
    }
LABEL_7:
    qword_2CCCD60 = (__int64)a1;
    dword_2CD44C8 |= 0x800000u;
    sub_76E7B0(a1);
    v2 = qword_2CD44C0;
    goto LABEL_10;
  }
  if ( v3 == 252 )
  {
    byte_2CCCD58 = 1;
    v4 = qword_2CD44C0 + 220;
    a2 = qword_2CD44C0 + 249;
    while ( 1 )
    {
      a1 = v4;
      if ( (*v4 & 0xFB) == 0x2B )
        goto LABEL_7;
      if ( a2 == ++v4 )
        goto LABEL_9;
    }
  }
  if ( v3 > 0x15 )
    goto LABEL_9;
LABEL_10:
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v5 = *v2;
  if ( *v2 == 36 )
  {
    qword_2CD44C0 = v2 + 2;
    v19 = v2[1];
    if ( v19 != 118 )
    {
      v7 = 0;
      if ( v19 > 118 )
      {
        if ( v19 != 120 )
          goto LABEL_24;
        goto LABEL_64;
      }
LABEL_84:
      if ( v19 != 98 )
      {
        if ( v19 != 111 )
          goto LABEL_24;
        if ( !(_WORD)v63 )
          goto LABEL_81;
        sub_76FA20(&v67, "::operator ", 11);
        sub_770B70(&v63, &v67);
        dword_2CD44C8 |= 0x400000u;
        v67 = sub_756FC0(0);
        sub_770B70(&v63, &v67);
        if ( byte_2CD44A1 )
          goto LABEL_24;
        v23 = qword_2CD44C0++;
        if ( *v23 != 36 )
          goto LABEL_89;
LABEL_74:
        if ( (dword_2CD44CC & 8) != 0 )
          goto LABEL_75;
        v66 = sub_756F20();
        if ( byte_2CD44A1 )
          goto LABEL_24;
        if ( *qword_2CD44C0 != 113 )
          goto LABEL_24;
        v67 = sub_756CF0(1);
        v63 = sub_771320(&v67, &v63);
        if ( byte_2CD44A1 )
          goto LABEL_24;
        if ( (dword_2CD44C8 & 0x8000000) != 0 && (dword_2CD44CC & 0x120) == 0 )
        {
          v67 = sub_76E800(2);
          v63 = sub_771320(&v67, &v63);
        }
        v67 = sub_7577F0(1);
        sub_770B70(&v63, &v67);
        if ( byte_2CD44A1 )
        {
          sub_770D00(&v63);
          ++byte_2CD44A1;
        }
        sub_770B70(&v63, &v66);
        if ( byte_2CD44A1 )
          goto LABEL_24;
        if ( *qword_2CD44C0 != 36 )
          goto LABEL_75;
        ++qword_2CD44C0;
        v66 = sub_756FC0(0);
        if ( byte_2CD44A1 )
        {
          if ( !(_WORD)v66 )
          {
            if ( (dword_2CD44CC & 0x40) != 0 )
              goto LABEL_75;
            goto LABEL_102;
          }
          sub_770D00(&v66);
        }
        if ( (dword_2CD44CC & 0x40) != 0 )
          goto LABEL_75;
        if ( (_WORD)v66 )
          sub_76FD20(&v66, 32);
LABEL_102:
        v63 = sub_771320(&v66, &v63);
        goto LABEL_75;
      }
      sub_771180(&v63);
      v24 = 0;
      v25 = qword_2CD44C0 + 1;
      switch ( *qword_2CD44C0 )
      {
        case '?':
          if ( qword_2CD44C0[1] != 36 )
            goto LABEL_105;
          v24 = 6242143;
          v28 = 0;
          v29 = nullptr;
          goto LABEL_111;
        case 'a':
          v34 = qword_2CD44C0[1];
          if ( v34 == 114 )
          {
            if ( qword_2CD44C0[2] != 111 )
            {
LABEL_230:
              v25 = qword_2CD44C0 + 3;
              goto LABEL_105;
            }
            v25 = qword_2CD44C0 + 4;
            if ( qword_2CD44C0[3] == 119 )
            {
              v28 = 0;
              v29 = nullptr;
              v24 = 15917;
LABEL_111:
              if ( *v25 == 36 )
              {
                qword_2CD44C0 = v25 + 1;
                dword_2CD44C8 |= 0x100000u;
                v27 = sub_7728C0(v24, v29, v28);
                goto LABEL_107;
              }
            }
          }
          else
          {
            if ( v34 <= 114 )
            {
              if ( v34 != 100 )
              {
                if ( v34 != 110 )
                  goto LABEL_104;
                v25 = qword_2CD44C0 + 3;
                if ( qword_2CD44C0[2] == 100 )
                  goto LABEL_131;
                goto LABEL_105;
              }
              v25 = qword_2CD44C0 + 3;
              v58 = qword_2CD44C0[2];
              if ( v58 != 100 )
              {
                if ( v58 == 114 )
                {
LABEL_131:
                  v28 = 0;
                  v29 = nullptr;
                  v24 = 38;
                  goto LABEL_111;
                }
                goto LABEL_105;
              }
              v28 = 0;
              v29 = nullptr;
              v24 = 43;
              goto LABEL_111;
            }
            if ( v34 != 115 )
            {
LABEL_104:
              v25 = qword_2CD44C0 + 2;
              goto LABEL_105;
            }
            v25 = qword_2CD44C0 + 3;
            if ( qword_2CD44C0[2] == 103 )
            {
              v28 = 0;
              v29 = nullptr;
              v24 = 61;
              goto LABEL_111;
            }
          }
LABEL_105:
          ++v25;
LABEL_106:
          v27 = 0;
          qword_2CD44C0 = v25 + 1;
          byte_2CD44A1 = 1;
LABEL_107:
          v67 = v27;
          sub_770B70(&v63, &v67);
          if ( byte_2CD44A1 )
            goto LABEL_24;
          goto LABEL_74;
        case 'c':
          v30 = qword_2CD44C0[1];
          v25 = qword_2CD44C0 + 2;
          if ( v30 == 109 )
          {
            v25 = qword_2CD44C0 + 3;
            if ( qword_2CD44C0[2] != 112 )
              goto LABEL_105;
            v28 = 0;
            v29 = nullptr;
            v24 = 126;
            goto LABEL_111;
          }
          if ( v30 > 109 )
          {
            if ( v30 == 116 )
              goto LABEL_119;
          }
          else
          {
            if ( v30 != 97 )
            {
              if ( (unsigned __int8)(v30 - 99) > 1u )
                goto LABEL_105;
              v25 = qword_2CD44C0 + 3;
              if ( qword_2CD44C0[2] == 116 )
              {
                LODWORD(v24) = 2;
                goto LABEL_119;
              }
              goto LABEL_106;
            }
            if ( qword_2CD44C0[2] != 108 )
              goto LABEL_230;
            v25 = qword_2CD44C0 + 4;
            if ( qword_2CD44C0[3] == 108 )
            {
LABEL_207:
              v28 = 0;
              v29 = nullptr;
              v24 = 10536;
              goto LABEL_111;
            }
          }
          goto LABEL_105;
        case 'd':
          v36 = qword_2CD44C0[1];
          v25 = qword_2CD44C0 + 2;
          if ( v36 == 108 )
          {
            v25 = qword_2CD44C0 + 3;
            if ( qword_2CD44C0[2] != 97 )
              goto LABEL_105;
            v28 = 9;
            v29 = " delete[]";
            goto LABEL_111;
          }
          if ( v36 <= 108 )
          {
            if ( v36 == 101 )
            {
              v50 = qword_2CD44C0[2];
              v25 = qword_2CD44C0 + 3;
              if ( v50 == 99 )
              {
                v28 = 0;
                v29 = nullptr;
                v24 = 11565;
                goto LABEL_111;
              }
              if ( v50 == 108 )
              {
                v25 = qword_2CD44C0 + 4;
                if ( qword_2CD44C0[3] == 101 )
                {
                  v28 = 7;
                  v29 = " delete";
                  goto LABEL_111;
                }
              }
            }
            else if ( v36 == 105 )
            {
              v25 = qword_2CD44C0 + 3;
              if ( qword_2CD44C0[2] == 118 )
              {
                v28 = 0;
                v29 = nullptr;
                v24 = 47;
                goto LABEL_111;
              }
            }
            goto LABEL_105;
          }
          if ( v36 != 116 )
            goto LABEL_105;
          LODWORD(v24) = 1;
LABEL_119:
          if ( !v7 )
            goto LABEL_106;
          if ( *v25 != 114 )
            goto LABEL_105;
          if ( v25[1] != 36 )
          {
            v25 += 2;
            goto LABEL_106;
          }
          v31 = v24 - 1;
          qword_2CD44C0 = v25 + 2;
          if ( v31 <= 0 )
          {
            v61 = dword_2CD44C8;
            dword_2CD44C8 |= 0x200000u;
            if ( v31 )
            {
              v27 = *(_DWORD *)v7;
            }
            else
            {
              dword_2CD44C8 = v61 | 0x300000;
              v27 = sub_7713D0(126, v7);
            }
          }
          else
          {
            v32 = 18;
            v33 = "`class destructor`";
            if ( *(v25 - 2) == 99 )
            {
              v32 = 19;
              v33 = "`class constructor`";
            }
            sub_76FA20(&v67, v33, v32);
            v27 = v67;
          }
          goto LABEL_107;
        case 'e':
          if ( qword_2CD44C0[1] != 113 )
            goto LABEL_104;
          v25 = qword_2CD44C0 + 3;
          if ( qword_2CD44C0[2] != 108 )
            goto LABEL_105;
          v28 = 0;
          v29 = nullptr;
          v24 = 15677;
          goto LABEL_111;
        case 'f':
          if ( qword_2CD44C0[1] != 110 )
            goto LABEL_104;
          v25 = qword_2CD44C0 + 3;
          if ( qword_2CD44C0[2] == 99 )
            goto LABEL_207;
          goto LABEL_105;
        case 'g':
          v35 = qword_2CD44C0[1];
          if ( v35 != 101 )
          {
            if ( v35 != 116 )
              goto LABEL_104;
            v25 = qword_2CD44C0 + 3;
            if ( qword_2CD44C0[2] == 114 )
            {
              v28 = 0;
              v29 = nullptr;
              v24 = 62;
              goto LABEL_111;
            }
            goto LABEL_105;
          }
          v25 = qword_2CD44C0 + 3;
          if ( qword_2CD44C0[2] != 113 )
            goto LABEL_105;
          v28 = 0;
          v29 = nullptr;
          v24 = 15678;
          goto LABEL_111;
        case 'i':
          if ( qword_2CD44C0[1] != 110 )
            goto LABEL_104;
          v25 = qword_2CD44C0 + 3;
          v41 = qword_2CD44C0[2];
          if ( v41 == 99 )
          {
            v28 = 0;
            v29 = nullptr;
            v24 = 11051;
            goto LABEL_111;
          }
          if ( v41 == 100 )
            goto LABEL_160;
          goto LABEL_105;
        case 'l':
          v40 = qword_2CD44C0[1];
          if ( v40 == 111 )
          {
            v25 = qword_2CD44C0 + 3;
            if ( qword_2CD44C0[2] != 114 )
              goto LABEL_105;
            v28 = 0;
            v29 = nullptr;
            v24 = 31868;
            goto LABEL_111;
          }
          if ( v40 > 111 )
          {
            if ( v40 != 115 )
              goto LABEL_104;
            v25 = qword_2CD44C0 + 3;
            v48 = qword_2CD44C0[2];
            if ( v48 == 104 )
            {
              v28 = 0;
              v29 = nullptr;
              v24 = 15420;
            }
            else
            {
              if ( v48 != 115 )
                goto LABEL_105;
              v28 = 0;
              v29 = nullptr;
              v24 = 60;
            }
            goto LABEL_111;
          }
          if ( v40 == 97 )
          {
            if ( qword_2CD44C0[2] != 110 )
              goto LABEL_230;
            v25 = qword_2CD44C0 + 4;
            if ( qword_2CD44C0[3] == 100 )
            {
              v28 = 0;
              v29 = nullptr;
              v24 = 9766;
              goto LABEL_111;
            }
          }
          else
          {
            if ( v40 != 101 )
              goto LABEL_104;
            v25 = qword_2CD44C0 + 3;
            if ( qword_2CD44C0[2] == 113 )
            {
              v28 = 0;
              v29 = nullptr;
              v24 = 15676;
              goto LABEL_111;
            }
          }
          goto LABEL_105;
        case 'm':
          v39 = qword_2CD44C0[1];
          if ( v39 != 111 )
          {
            if ( v39 != 117 )
              goto LABEL_104;
            v25 = qword_2CD44C0 + 3;
            if ( qword_2CD44C0[2] == 108 )
            {
LABEL_160:
              v28 = 0;
              v29 = nullptr;
              v24 = 42;
              goto LABEL_111;
            }
            goto LABEL_105;
          }
          v25 = qword_2CD44C0 + 3;
          if ( qword_2CD44C0[2] != 100 )
            goto LABEL_105;
          v28 = 0;
          v29 = nullptr;
          v24 = 37;
          goto LABEL_111;
        case 'n':
          v37 = qword_2CD44C0[1];
          switch ( v37 )
          {
            case 'o':
              v25 = qword_2CD44C0 + 3;
              if ( qword_2CD44C0[2] != 116 )
                goto LABEL_105;
              v28 = 0;
              v29 = nullptr;
              v24 = 33;
              break;
            case 'w':
              v25 = qword_2CD44C0 + 3;
              if ( qword_2CD44C0[2] != 97 )
                goto LABEL_105;
              v28 = 6;
              v29 = " new[]";
              break;
            case 'e':
              v25 = qword_2CD44C0 + 3;
              v38 = qword_2CD44C0[2];
              if ( v38 == 113 )
              {
                v28 = 0;
                v29 = nullptr;
                v24 = 15649;
              }
              else
              {
                if ( v38 != 119 )
                  goto LABEL_105;
                v24 = 2003136032;
                v28 = 0;
                v29 = nullptr;
              }
              break;
            default:
              goto LABEL_104;
          }
          goto LABEL_111;
        case 'o':
          v25 = qword_2CD44C0 + 2;
          if ( qword_2CD44C0[1] != 114 )
            goto LABEL_105;
          v28 = 0;
          v29 = nullptr;
          v24 = 124;
          goto LABEL_111;
        case 'r':
          switch ( qword_2CD44C0[1] )
          {
            case 'a':
              if ( qword_2CD44C0[2] != 110 )
                goto LABEL_230;
              v25 = qword_2CD44C0 + 4;
              if ( qword_2CD44C0[3] != 100 )
                goto LABEL_105;
              v28 = 0;
              v29 = nullptr;
              v24 = 15654;
              goto LABEL_111;
            case 'd':
              if ( qword_2CD44C0[2] != 105 )
                goto LABEL_230;
              v25 = qword_2CD44C0 + 4;
              if ( qword_2CD44C0[3] != 118 )
                goto LABEL_105;
              v28 = 0;
              v29 = nullptr;
              v24 = 15663;
              goto LABEL_111;
            case 'l':
              if ( qword_2CD44C0[2] != 115 )
                goto LABEL_230;
              v25 = qword_2CD44C0 + 4;
              if ( qword_2CD44C0[3] != 104 )
                goto LABEL_105;
              v24 = 4013116;
              v28 = 0;
              v29 = nullptr;
              goto LABEL_111;
            case 'm':
              v49 = qword_2CD44C0[2];
              switch ( v49 )
              {
                case 'o':
                  v25 = qword_2CD44C0 + 4;
                  if ( qword_2CD44C0[3] != 100 )
                    goto LABEL_105;
                  v28 = 0;
                  v29 = nullptr;
                  v24 = 15653;
                  break;
                case 'u':
                  v25 = qword_2CD44C0 + 4;
                  if ( qword_2CD44C0[3] != 108 )
                    goto LABEL_105;
                  v28 = 0;
                  v29 = nullptr;
                  v24 = 15658;
                  break;
                case 'i':
                  v25 = qword_2CD44C0 + 4;
                  if ( qword_2CD44C0[3] == 110 )
                  {
                    v28 = 0;
                    v29 = nullptr;
                    v24 = 15661;
                    goto LABEL_111;
                  }
                  goto LABEL_105;
                default:
                  goto LABEL_230;
              }
              break;
            case 'o':
              v25 = qword_2CD44C0 + 3;
              if ( qword_2CD44C0[2] != 114 )
                goto LABEL_105;
              v28 = 0;
              v29 = nullptr;
              v24 = 15740;
              goto LABEL_111;
            case 'p':
              if ( qword_2CD44C0[2] != 108 )
                goto LABEL_230;
              v25 = qword_2CD44C0 + 4;
              if ( qword_2CD44C0[3] != 117 )
                goto LABEL_105;
              v28 = 0;
              v29 = nullptr;
              v24 = 15659;
              goto LABEL_111;
            case 'r':
              if ( qword_2CD44C0[2] != 115 )
                goto LABEL_230;
              v25 = qword_2CD44C0 + 4;
              if ( qword_2CD44C0[3] != 104 )
                goto LABEL_105;
              v24 = 4013630;
              v28 = 0;
              v29 = nullptr;
              goto LABEL_111;
            case 's':
              v25 = qword_2CD44C0 + 3;
              if ( qword_2CD44C0[2] != 104 )
                goto LABEL_105;
              v28 = 0;
              v29 = nullptr;
              v24 = 15934;
              goto LABEL_111;
            case 'x':
              if ( qword_2CD44C0[2] != 111 )
                goto LABEL_230;
              v25 = qword_2CD44C0 + 4;
              if ( qword_2CD44C0[3] != 114 )
                goto LABEL_105;
              v28 = 0;
              v29 = nullptr;
              v24 = 15710;
              goto LABEL_111;
            default:
              goto LABEL_104;
          }
          goto LABEL_111;
        case 's':
          if ( qword_2CD44C0[1] != 117 )
            goto LABEL_104;
          v25 = qword_2CD44C0 + 3;
          if ( qword_2CD44C0[2] != 98 )
            goto LABEL_105;
          if ( qword_2CD44C0[3] == 115 )
          {
            v25 = qword_2CD44C0 + 4;
            v29 = nullptr;
            v28 = 0;
            v24 = 23899;
          }
          else
          {
            v28 = 0;
            v29 = nullptr;
            v24 = 45;
          }
          goto LABEL_111;
        case 'x':
          if ( qword_2CD44C0[1] != 111 )
            goto LABEL_104;
          v25 = qword_2CD44C0 + 3;
          if ( qword_2CD44C0[2] != 114 )
            goto LABEL_105;
          v28 = 0;
          v29 = nullptr;
          v24 = 94;
          goto LABEL_111;
        default:
          goto LABEL_105;
      }
    }
    v43 = v2 + 3;
    goto LABEL_187;
  }
  if ( *(_DWORD *)v2 == 1717773376 && *((_WORD *)v2 + 2) == 16420 )
  {
    sub_76FA20(&v67, "'__vdflg__ ", 11);
    a2 = (_BYTE *)(&qword_20 + 7);
    a1 = (char *)&v67;
    v64 = v67;
    sub_76F8C0(&v67, 39);
    qword_2CD44C0 += 6;
    v65 = v67;
    goto LABEL_14;
  }
  if ( v5 != 95 )
  {
    if ( v5 != 64 || (unsigned __int8)(v2[1] - 48) > 9u )
      goto LABEL_14;
LABEL_81:
    sub_76E6C0();
  }
  if ( v2[1] != 36 )
    goto LABEL_14;
  v12 = v2[2];
  if ( (unsigned int)v12 > 0x7F )
    goto LABEL_14;
  v13 = v2 + 2;
  v14 = *__ctype_b_loc();
  v15 = v2 + 2;
  while ( (v14[v12] & 0x100) != 0 )
  {
    v42 = *++v15;
    v12 = v42;
    if ( v42 > 0x7F )
    {
      if ( *(_DWORD *)v15 == (_DWORD)&loc_767124 && v13 != v15 && !byte_2CD44A1 )
        goto LABEL_179;
      goto LABEL_14;
    }
  }
  if ( *(_DWORD *)v15 == (_DWORD)&loc_767124 && v13 != v15 && !byte_2CD44A1 )
  {
LABEL_179:
    qword_2CD44C0 = v15 + 3;
    dword_2CD44C8 |= 0x9000000u;
    sub_76FA20(&v67, "`__tds$thunk__'", 15);
    return v67;
  }
  if ( v12 != 36 || v15[1] != 64 )
  {
LABEL_14:
    v6 = (_DWORD *)sub_76E9D0(a1, a2);
    *v6 = 0;
    v7 = (__int64)v6;
    v63 = sub_757AF0((__int64)v6, 0);
    if ( byte_2CD44A1 )
      goto LABEL_24;
    v2 = qword_2CD44C0;
    v8 = *(qword_2CD44C0 - 1);
    if ( !v8 )
    {
      --qword_2CD44C0;
      v10 = dword_2CD44C8;
      goto LABEL_78;
    }
    v9 = *qword_2CD44C0;
    if ( !*qword_2CD44C0 )
    {
      if ( (v63 & 0x20000) != 0 )
      {
        v10 = dword_2CD44C8;
        goto LABEL_78;
      }
      if ( v8 != 36 )
      {
        v10 = dword_2CD44C8;
        LOBYTE(v10) = dword_2CD44C8 | 0xA0;
        dword_2CD44C8 = v10;
        goto LABEL_78;
      }
      goto LABEL_24;
    }
    if ( (dword_2CD44CC & 0x120) == 0 && (*(_BYTE *)(v7 + 2) & 1) != 0 )
    {
      v67 = sub_76E800(3);
      v26 = sub_771320(&v67, &v63);
      v2 = qword_2CD44C0;
      v63 = v26;
      v9 = *qword_2CD44C0;
    }
    if ( v9 != 36 )
    {
      if ( *(v2 - 1) != 36 )
        goto LABEL_81;
      goto LABEL_74;
    }
    goto LABEL_60;
  }
  v16 = v15[2];
  if ( (unsigned __int8)(v16 - 36) > 1u
    && (_BYTE)v16 != 95
    && ((unsigned int)(char)v16 > 0x7F || (v14[v16] & 0x400) == 0) )
  {
    a1 = v15 + 2;
    if ( !(unsigned int)sub_76F430(v15 + 2, a2) )
      goto LABEL_14;
    v2 = qword_2CD44C0;
  }
  v17 = *((unsigned __int16 *)v2 + 1);
  qword_2CD44C0 = v15 + 2;
  dword_2CD44C8 |= 0x2000000u;
  sub_76F920(&v67, 24415);
  v64 = v67;
  if ( (dword_2CD44C8 & 0x8000000) != 0 )
    v17 &= 0xFFFFDFDF;
  if ( v17 == 18499 )
  {
    v18 = 1651796067;
    goto LABEL_57;
  }
  if ( v17 > 0x4843 )
  {
    if ( v17 == 19526 )
    {
      v18 = 1684959846;
      goto LABEL_57;
    }
    v18 = 2003986548;
    if ( v17 == 19540 )
      goto LABEL_57;
LABEL_195:
    sub_76FA20(&v67, "unkXX__ ", 8);
    a1 = (char *)&v64;
    a2 = (char *)&v67;
    sub_770B70(&v64, &v67);
    goto LABEL_58;
  }
  if ( v17 == 17220 )
  {
    v18 = 1651795055;
    goto LABEL_57;
  }
  v18 = 1651794789;
  if ( v17 != 17221 )
    goto LABEL_195;
LABEL_57:
  sub_76FCD0(&v67, v18, 4);
  sub_770B70(&v64, &v67);
  sub_76FCD0(&v67, 543121260, 4);
  a2 = (char *)&v67;
  a1 = (char *)&v64;
  sub_770B70(&v64, &v67);
LABEL_58:
  if ( v15[2] != 36 )
    goto LABEL_14;
  v7 = ((__int64 (*)(void))sub_76E9D0)();
  *(_DWORD *)v7 = 0;
  v2 = qword_2CD44C0;
LABEL_60:
  qword_2CD44C0 = v2 + 2;
  v19 = v2[1];
  if ( v19 != 118 )
  {
    if ( v19 > 118 )
    {
      if ( v19 != 120 || v7 )
        goto LABEL_24;
LABEL_64:
      qword_2CD44C0 = v2 + 3;
      v20 = v2[2];
      if ( v20 == 112 )
      {
        sub_76FCD0(&v67, &loc_5F5F60, 3);
        v63 = v67;
        sub_770730(&v63, 20548);
        v21 = dword_2CD44C8 | 0x2000000;
        goto LABEL_67;
      }
      if ( v20 == 116 )
      {
        sub_76FCD0(&v67, &loc_5F5F60, 3);
        v63 = v67;
        sub_770730(&v63, 28788);
        v21 = dword_2CD44C8 & 0xFDFFFFFF;
LABEL_67:
        v22 = qword_2CD44C0;
        dword_2CD44C8 = v21;
        ++qword_2CD44C0;
        if ( *v22 != 36 )
        {
LABEL_89:
          byte_2CD44A1 = 1;
          goto LABEL_24;
        }
        if ( byte_2CD44A1 )
          goto LABEL_24;
        dword_2CD44C8 = v21 | 0x4000000;
        sub_76FA20(&v67, "dsc__'[", 7);
        sub_770B70(&v63, &v67);
        v67 = sub_756FC0(0);
        sub_770B70(&v63, &v67);
        sub_76FD20(&v63, 93);
LABEL_75:
        if ( (dword_2CD44C8 & 0x800000) == 0 )
          goto LABEL_33;
        goto LABEL_30;
      }
LABEL_24:
      if ( !(_WORD)v63 )
        goto LABEL_81;
      if ( (unsigned __int64)qword_2CD44C0 < qword_2CCCD60 )
      {
        if ( !byte_2CCCD58 || qword_2CCCD60 - (__int64)qword_2CD44C0 > 119 )
          goto LABEL_81;
        qword_2CD44C0 = (char *)qword_2CD44B8;
      }
      dword_2CD44C8 |= 0x800000u;
LABEL_30:
      if ( byte_2CD44A1 <= 1 )
        goto LABEL_79;
LABEL_31:
      if ( !*(qword_2CD44C0 - 1) )
        --qword_2CD44C0;
      goto LABEL_33;
    }
    goto LABEL_84;
  }
  v43 = v2 + 3;
  if ( v7 )
  {
    qword_2CD44C0 = v2 + 3;
    if ( v2[2] != 115 )
      goto LABEL_24;
    qword_2CD44C0 = v2 + 4;
    if ( (v2[3] & 0xF7) != 0x66 || v2[4] )
      goto LABEL_24;
    dword_2CD44C8 |= 0x1000000u;
    sub_76FA20(&v67, "::`__vdthk__'", 13);
    sub_770B70(&v63, &v67);
    goto LABEL_75;
  }
LABEL_187:
  qword_2CD44C0 = v43;
  if ( v2[2] != 99 )
    goto LABEL_24;
  qword_2CD44C0 = v2 + 4;
  if ( !v2[3] )
    goto LABEL_24;
  qword_2CD44C0 = v2 + 5;
  if ( v2[4] != 36 )
    goto LABEL_89;
  if ( byte_2CD44A1 )
    goto LABEL_24;
  v66 = 0;
  dword_2CD44C8 |= 0x1000000u;
  v44 = (_BYTE *)sub_76EA10("`__vc1$thunk__'[0,0,0,", 0x16u);
  v45 = *(qword_2CD44C0 - 2);
  v44[18] = 0;
  v44[5] = v45;
  v46 = qword_2CD44C0++;
  v47 = *v46;
  v44[16] = *v46;
  switch ( v47 )
  {
    case 'B':
      if ( v44[5] != 49 )
        goto LABEL_192;
      v59 = 1;
      v60 = 2;
      goto LABEL_291;
    case 'C':
      if ( v44[5] != 49 )
        goto LABEL_192;
      v59 = 2;
      v60 = 3;
      goto LABEL_291;
    case 'D':
      if ( v44[5] != 49 )
        goto LABEL_192;
      v59 = 5;
      v60 = 5;
      goto LABEL_291;
    case 'F':
      if ( v46[1] == 70 && v46[2] == 70 )
        goto LABEL_264;
      if ( v44[5] != 49 )
        goto LABEL_192;
      v59 = 4;
      v60 = 4;
      goto LABEL_291;
    case 'N':
LABEL_264:
      qword_2CD44C0 = v46 + 2;
      v51 = v46[1];
      v44[18] = v51;
      if ( !v51 )
        goto LABEL_192;
      qword_2CD44C0 = v46 + 3;
      v52 = v46[2];
      v44[20] = v52;
      if ( !v52 )
        goto LABEL_192;
      v53 = v44[5];
      if ( v53 != 50 )
      {
        if ( v53 != 49 )
        {
LABEL_192:
          byte_2CD44A1 = 1;
          v63 = v66;
          goto LABEL_24;
        }
        dword_2CD44C8 |= 1u;
        goto LABEL_269;
      }
      v59 = 3;
      v60 = 6;
LABEL_291:
      dword_2CD44C8 |= v60;
      if ( (dword_2CD44CC & 0x120) == 0 )
      {
        v66 = sub_76E800(v59);
        if ( (_WORD)v66 )
          sub_76FD20(&v66, 32);
      }
      v54 = 18;
      if ( v44[18] )
LABEL_269:
        v54 = 22;
      v55 = v44;
      v56 = 3;
      sub_76FA20(&v67, v55, v54);
      sub_770B70(&v66, &v67);
      for ( i = &dword_2CD44C8; ; i = v62 )
      {
        v62 = i;
        sub_76F5E0(&v67, 2);
        sub_770B70(&v66, &v67);
        if ( *(qword_2CD44C0 - 1) != 36 )
          goto LABEL_192;
        if ( byte_2CD44A1 )
        {
          v63 = v66;
          goto LABEL_24;
        }
        if ( !--v56 )
          break;
        sub_770C10(&v66);
      }
      sub_76FD20(&v66, 93);
      v63 = v66;
      if ( byte_2CD44A1 )
        goto LABEL_24;
      v10 = *v62;
LABEL_78:
      if ( (v10 & 0x800000) != 0 )
      {
LABEL_79:
        sub_770D00(&v63);
        goto LABEL_31;
      }
LABEL_33:
      v67 = sub_771320(&v64, &v63);
      return sub_771320(&v67, &v65);
    default:
      goto LABEL_192;
  }
}
