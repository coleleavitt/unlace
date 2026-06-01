/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002F780
// Address: 0x000000010002F780

//----- (000000010002F780) ----------------------------------------------------
__int64 __fastcall sub_10002F780(__int64 a1, __int64 a2)
{
  const char *v2; // rbx
  const char *v3; // r15
  char *i; // rbx
  int v5; // r12d
  void *v6; // rax
  __int64 v7; // r13
  __int64 v8; // rdi
  int v9; // r15d
  int v10; // eax
  unsigned __int8 v11; // r12
  __int64 j; // r14
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  const char *v19; // r13
  unsigned int v20; // ecx
  __int64 v21; // rbx
  int v22; // ecx
  int v23; // r14d
  __int64 v24; // r14
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned __int64 v28; // r11
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rsi
  __int64 v33; // rax
  char *v34; // rdi
  signed __int64 v35; // r10
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  char v38; // r8
  bool v39; // cc
  signed __int64 v40; // rax
  size_t v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r15
  char v44; // r15
  void *v45; // rax
  __int64 v46; // r14
  void *v47; // rax
  __int64 v48; // r14
  char v49; // r14
  char *v50; // r13
  void *v51; // rax
  __int64 v52; // r12
  __int64 v53; // r14
  char v54; // r13
  void *v55; // rax
  __int64 v56; // r12
  __int64 v57; // r14
  void *v58; // rax
  __int64 v59; // r15
  void *v60; // rsi
  const char *v63; // [rsp+8h] [rbp-498h]
  size_t v64; // [rsp+10h] [rbp-490h]
  size_t v65; // [rsp+10h] [rbp-490h]
  int v66; // [rsp+1Ch] [rbp-484h]
  int v67; // [rsp+20h] [rbp-480h]
  size_t v68; // [rsp+28h] [rbp-478h]
  int v69; // [rsp+34h] [rbp-46Ch]
  int v70; // [rsp+38h] [rbp-468h]
  char v71; // [rsp+38h] [rbp-468h]
  __int64 v72; // [rsp+38h] [rbp-468h]
  __int64 v73; // [rsp+40h] [rbp-460h]
  __int64 v74; // [rsp+40h] [rbp-460h]
  int v75; // [rsp+4Ch] [rbp-454h]
  __int128 v76; // [rsp+50h] [rbp-450h] BYREF
  unsigned __int64 v77; // [rsp+60h] [rbp-440h]
  char __s[1023]; // [rsp+70h] [rbp-430h] BYREF
  char v79; // [rsp+46Fh] [rbp-31h] BYREF
  _QWORD v80[6]; // [rsp+470h] [rbp-30h] BYREF

  v76 = 0;
  v77 = 0;
  if ( *(int *)(a2 + 8) <= 0 )
  {
    *(_QWORD *)(a2 + 8) = 0;
  }
  else
  {
    v66 = *(_DWORD *)(a2 + 8);
    v2 = _s1;
    if ( *(_QWORD *)(a1 + 16) )
      v2 = *(const char **)(a1 + 8);
    v73 = a1 + 32;
    v75 = 0;
    v69 = 0;
LABEL_5:
    v3 = v2 + 1;
    for ( i = (char *)(v2 + 2); ; ++i )
    {
      v5 = *((unsigned __int8 *)v3 - 1);
      if ( !*(v3 - 1) )
        break;
      if ( v5 == 37 )
      {
        v70 = 0;
        v8 = v73;
        v9 = v66;
        while ( 2 )
        {
          v11 = *(i - 1);
          switch ( v11 )
          {
            case ' ':
              v10 = 4;
              goto LABEL_19;
            case '#':
              v10 = 8;
              goto LABEL_19;
            case '*':
              v9 = v66 - 1;
              if ( v66 - 1 <= 0 )
              {
                v14 = 0;
                if ( v75 )
                  goto LABEL_227;
              }
              else
              {
                if ( (unsigned int)idcv_long((unsigned __int8 *)v73) )
                  goto LABEL_227;
                v14 = *(_DWORD *)(v73 + 8);
                v8 = v73 + 32;
              }
              v15 = -v14;
              if ( v14 > 0 )
                v15 = v14;
              v67 = v15;
              v70 |= (unsigned int)v14 >> 31;
              v11 = *i;
              v75 = 0;
              goto LABEL_41;
            case '+':
              v10 = 2;
              goto LABEL_19;
            case '-':
              v10 = 1;
LABEL_19:
              v70 |= v10;
              ++i;
              continue;
            case '0':
              LOBYTE(v70) = (16 * ~(_BYTE)v70) & 0x10 | v70;
              v11 = *i;
              goto LABEL_26;
            default:
              --i;
LABEL_26:
              j = -1;
              if ( (v11 & 0x80u) != 0 )
              {
                v67 = -1;
              }
              else
              {
                v67 = -1;
                while ( (_DefaultRuneLocale.__runetype[v11] & 0x400) != 0 )
                {
                  v13 = 10 * v67 - 48;
                  if ( v67 == -1 )
                    v13 = -48;
                  v67 = v11 + v13;
                  v11 = *++i;
                  if ( (v11 & 0x80u) != 0 )
                    goto LABEL_54;
                }
LABEL_41:
                if ( v11 == 46 )
                {
                  v11 = i[1];
                  if ( v11 == 42 )
                  {
                    if ( --v9 <= 0 )
                    {
                      if ( v75 )
                        goto LABEL_227;
                      j = 0;
                    }
                    else
                    {
                      if ( (unsigned int)idcv_long((unsigned __int8 *)v8) )
                        goto LABEL_227;
                      j = *(_QWORD *)(v8 + 8);
                      v8 += 32;
                    }
                    v11 = i[2];
                    i += 2;
                    v75 = 0;
                  }
                  else
                  {
                    ++i;
                    for ( j = 0; (v11 & 0x80u) == 0; v11 = *++i )
                    {
                      if ( (_DefaultRuneLocale.__runetype[v11] & 0x400) == 0 )
                        break;
                      j = v11 + 10 * j - 48;
                    }
                  }
                }
                else
                {
                  j = -1;
                }
              }
LABEL_54:
              v16 = (unsigned int)v11 - 70;
              if ( (unsigned int)v16 <= 0x26 )
              {
                v17 = 0x4400000141LL;
                if ( _bittest64(&v17, v16) )
                  v11 = *++i;
              }
              break;
          }
          break;
        }
        v63 = i + 1;
        v74 = v8;
        switch ( v11 )
        {
          case '%':
            __s[0] = 37;
            v68 = 1;
            i = __s;
            v24 = v8;
            v19 = &_s;
            goto LABEL_164;
          case 'E':
          case 'G':
          case 'e':
          case 'f':
          case 'g':
            --v9;
            v18 = v75;
            if ( v9 <= 0 )
              goto LABEL_60;
            v18 = idcv_float((unsigned __int8 *)v8);
            if ( v18 )
              goto LABEL_60;
            v22 = v67;
            if ( v67 == -1 )
              v22 = 0;
            if ( j <= 0 )
              LODWORD(j) = 0;
            v23 = (_DWORD)j << 16;
            if ( !v22 )
              v23 = 0;
            v67 = v22;
            realtoasc(__s, 1024, v8 + 8, v23 | (v22 << 8) | 0xF);
            v24 = v8 + 32;
            for ( i = __s; ; ++i )
            {
              v25 = (unsigned __int8)*i;
              if ( v25 != 32 )
                break;
            }
            if ( v25 == 45 )
            {
              ++i;
              v19 = "-";
            }
            else if ( (v70 & 2) != 0 )
            {
              v19 = "+";
            }
            else
            {
              v19 = " ";
              if ( (v70 & 4) == 0 )
                v19 = &_s;
            }
            v68 = strlen(i);
            v75 = 0;
            goto LABEL_164;
          case 'X':
          case 'x':
            v21 = 16;
            if ( (v70 & 8) != 0 )
            {
              v19 = "0X";
              if ( v11 == 120 )
                v19 = "0x";
            }
            else
            {
              v19 = &_s;
            }
            goto LABEL_101;
          case 'a':
            if ( --v9 <= 0 )
            {
              if ( v75 )
                goto LABEL_227;
              v30 = 0;
              v31 = v8;
            }
            else
            {
              if ( (unsigned int)idcv_long((unsigned __int8 *)v8) )
                goto LABEL_227;
              v30 = *(_QWORD *)(v8 + 8);
              v31 = v8 + 32;
            }
            v74 = v31;
            i = __s;
            if ( qword_1000AC100[3] )
              ((void (__fastcall *)(char *, __int64, __int64))qword_1000AC100[3])(__s, 1024, v30);
            else
              qsnprintf(__s, 1024, "%a", 0.0);
LABEL_157:
            v40 = strlen(i);
            v41 = j;
            if ( v40 < j )
              v41 = v40;
            if ( j < 0 )
              v41 = v40;
            v68 = v41;
            v75 = 0;
LABEL_162:
            v19 = &_s;
LABEL_163:
            v24 = v74;
            goto LABEL_164;
          case 'b':
            v19 = "0b";
            if ( (v70 & 8) == 0 )
              v19 = &_s;
            v21 = 2;
            goto LABEL_101;
          case 'c':
            --v9;
            v18 = v75;
            if ( v9 > 0 )
            {
              v18 = idcv_long((unsigned __int8 *)v8);
              if ( !v18 )
              {
                v24 = v8 + 32;
                __s[0] = *(_BYTE *)(v8 + 8);
                v68 = 1;
                v75 = 0;
                i = __s;
                v19 = &_s;
                goto LABEL_164;
              }
            }
            __s[0] = 0;
            if ( !v18 )
            {
              v68 = 1;
              v75 = 0;
              i = __s;
              goto LABEL_162;
            }
LABEL_60:
            v19 = &_s;
            if ( v18 != 1531 )
              goto LABEL_227;
            goto LABEL_149;
          case 'd':
          case 'i':
            if ( --v9 > 0 && (*(_BYTE *)v8 == 2 || (v75 = idcv_int64((unsigned __int8 *)v8)) == 0) )
            {
              v29 = *(_QWORD *)(v8 + 8);
              v8 += 32;
              v20 = 64;
              if ( v29 < 0 )
              {
                v74 = v8;
                v32 = -v29;
                v28 = 10;
                v19 = "-";
                goto LABEL_130;
              }
              goto LABEL_120;
            }
            v20 = v75;
            if ( !v75 )
            {
              v29 = 0;
LABEL_120:
              v74 = v8;
              v28 = 10;
              if ( (v70 & 2) != 0 )
              {
                v19 = "+";
              }
              else
              {
                v19 = " ";
                if ( (v70 & 4) == 0 )
                  v19 = &_s;
              }
              goto LABEL_125;
            }
            v19 = &_s;
            if ( v75 != 1531 )
              goto LABEL_227;
LABEL_149:
            v24 = v8 + 32;
            v68 = 5;
            v75 = 1531;
            i = "<obj>";
LABEL_164:
            v66 = v9;
            v73 = v24;
            v64 = strlen(v19);
            if ( (v70 & 0x10) != 0 )
            {
              while ( 1 )
              {
                v44 = *v19;
                if ( !*v19 )
                  break;
                v45 = (void *)v76;
                if ( *((_QWORD *)&v76 + 1) >= 0x401u )
                {
                  sub_100000AE0((int)"%s", (_QWORD)v76);
                  if ( (_QWORD)v76 )
                  {
                    *((_QWORD *)&v76 + 1) = 0;
                    qfree((void *)v76);
                    *(_QWORD *)&v76 = 0;
                    v77 = 0;
                  }
                  v45 = nullptr;
                }
                v46 = 0;
                if ( *((_QWORD *)&v76 + 1) )
                  v46 = *((_QWORD *)&v76 + 1) - 1LL;
                if ( v77 < v46 + 2 )
                {
                  v45 = qvector_reserve((__int64)&v76, v45, v46 + 2, 1u);
                  *(_QWORD *)&v76 = v45;
                }
                ++v19;
                *((_QWORD *)&v76 + 1) = v46 + 2;
                *((_BYTE *)v45 + v46) = v44;
                *(_BYTE *)(v76 + v46 + 1) = 0;
                ++v69;
              }
            }
            v65 = v68 + v64;
            v42 = v67 - v65;
            if ( (v70 & 1) != 0 || (--v42, v42 < 0) )
            {
              v72 = v42;
            }
            else
            {
              v71 = v70 & 0x10 | 0x20;
              v43 = v67 - v65;
              do
              {
                v47 = (void *)v76;
                if ( *((_QWORD *)&v76 + 1) >= 0x401u )
                {
                  sub_100000AE0((int)"%s", (_QWORD)v76);
                  if ( (_QWORD)v76 )
                  {
                    *((_QWORD *)&v76 + 1) = 0;
                    qfree((void *)v76);
                    *(_QWORD *)&v76 = 0;
                    v77 = 0;
                  }
                  v47 = nullptr;
                }
                v48 = 0;
                if ( *((_QWORD *)&v76 + 1) )
                  v48 = *((_QWORD *)&v76 + 1) - 1LL;
                if ( v77 < v48 + 2 )
                {
                  v47 = qvector_reserve((__int64)&v76, v47, v48 + 2, 1u);
                  *(_QWORD *)&v76 = v47;
                }
                *((_QWORD *)&v76 + 1) = v48 + 2;
                *((_BYTE *)v47 + v48) = v71;
                *(_BYTE *)(v76 + v48 + 1) = 0;
                --v43;
              }
              while ( v43 > 0 );
              v72 = -1;
              v69 += v67 - v65;
            }
            v49 = *v19;
            if ( *v19 )
            {
              v50 = (char *)(v19 + 1);
              do
              {
                v51 = (void *)v76;
                if ( *((_QWORD *)&v76 + 1) >= 0x401u )
                {
                  sub_100000AE0((int)"%s", (_QWORD)v76);
                  if ( (_QWORD)v76 )
                  {
                    *((_QWORD *)&v76 + 1) = 0;
                    qfree((void *)v76);
                    *(_QWORD *)&v76 = 0;
                    v77 = 0;
                  }
                  v51 = nullptr;
                }
                v52 = 0;
                if ( *((_QWORD *)&v76 + 1) )
                  v52 = *((_QWORD *)&v76 + 1) - 1LL;
                if ( v77 < v52 + 2 )
                {
                  v51 = qvector_reserve((__int64)&v76, v51, v52 + 2, 1u);
                  *(_QWORD *)&v76 = v51;
                }
                *((_QWORD *)&v76 + 1) = v52 + 2;
                *((_BYTE *)v51 + v52) = v49;
                *(_BYTE *)(v76 + v52 + 1) = 0;
                ++v69;
                v49 = *v50++;
              }
              while ( v49 );
            }
            v53 = v68;
            if ( (__int64)(v68 - 1) >= 0 )
            {
              do
              {
                v54 = *i;
                v55 = (void *)v76;
                if ( *((_QWORD *)&v76 + 1) >= 0x401u )
                {
                  sub_100000AE0((int)"%s", (_QWORD)v76);
                  if ( (_QWORD)v76 )
                  {
                    *((_QWORD *)&v76 + 1) = 0;
                    qfree((void *)v76);
                    *(_QWORD *)&v76 = 0;
                    v77 = 0;
                  }
                  v55 = nullptr;
                }
                v56 = 0;
                if ( *((_QWORD *)&v76 + 1) )
                  v56 = *((_QWORD *)&v76 + 1) - 1LL;
                if ( v77 < v56 + 2 )
                {
                  v55 = qvector_reserve((__int64)&v76, v55, v56 + 2, 1u);
                  *(_QWORD *)&v76 = v55;
                }
                ++i;
                *((_QWORD *)&v76 + 1) = v56 + 2;
                *((_BYTE *)v55 + v56) = v54;
                *(_BYTE *)(v76 + v56 + 1) = 0;
                --v53;
              }
              while ( v53 > 0 );
              v69 += v68;
            }
            if ( v72 - 1 >= 0 )
            {
              v57 = v72;
              do
              {
                v58 = (void *)v76;
                if ( *((_QWORD *)&v76 + 1) >= 0x401u )
                {
                  sub_100000AE0((int)"%s", (_QWORD)v76);
                  if ( (_QWORD)v76 )
                  {
                    *((_QWORD *)&v76 + 1) = 0;
                    qfree((void *)v76);
                    *(_QWORD *)&v76 = 0;
                    v77 = 0;
                  }
                  v58 = nullptr;
                }
                v59 = 0;
                if ( *((_QWORD *)&v76 + 1) )
                  v59 = *((_QWORD *)&v76 + 1) - 1LL;
                if ( v77 < v59 + 2 )
                {
                  v58 = qvector_reserve((__int64)&v76, v58, v59 + 2, 1u);
                  *(_QWORD *)&v76 = v58;
                }
                *((_QWORD *)&v76 + 1) = v59 + 2;
                *((_BYTE *)v58 + v59) = 32;
                *(_BYTE *)(v76 + v59 + 1) = 0;
                --v57;
              }
              while ( v57 > 0 );
              v69 += v72;
            }
            v2 = v63;
            break;
          case 'o':
            v19 = "0";
            if ( (v70 & 8) == 0 )
              v19 = &_s;
            v21 = 8;
            goto LABEL_101;
          case 's':
            if ( --v9 <= 0 )
            {
              i = nullptr;
            }
            else
            {
              v26 = idcv_string(v8);
              if ( v26 == 1531 )
              {
                v19 = &_s;
                goto LABEL_149;
              }
              if ( v26 )
                goto LABEL_227;
              if ( *(_QWORD *)(v8 + 16) )
                i = *(char **)(v8 + 8);
              else
                i = (char *)_s1;
              v74 = v8 + 32;
            }
            if ( !i )
              i = "(null)";
            goto LABEL_157;
          case 'u':
            v21 = 10;
            v19 = &_s;
LABEL_101:
            v27 = v75;
            if ( --v9 <= 0 )
              goto LABEL_105;
            if ( *(_BYTE *)v8 == 2 )
            {
              v28 = v21;
              v29 = *(_QWORD *)(v8 + 8);
              v74 = v8 + 32;
              v20 = 64;
            }
            else
            {
              v27 = idcv_int64((unsigned __int8 *)v8);
              if ( v27 )
              {
LABEL_105:
                if ( v27 == 1531 )
                  goto LABEL_149;
                if ( v27 )
                  goto LABEL_227;
                v28 = v21;
                v20 = 0;
                v29 = 0;
              }
              else
              {
                v28 = v21;
                v29 = *(_QWORD *)(v8 + 8);
                v74 = v8 + 32;
                v20 = 64;
              }
            }
LABEL_125:
            i = nullptr;
            if ( !(j | v29) )
            {
              v75 = 0;
              v68 = 0;
              goto LABEL_162;
            }
            v33 = ~(-1LL << v20);
            if ( v20 >= 0x40 )
              v33 = -1;
            v32 = v33 & v29;
LABEL_130:
            v34 = &v79;
            v35 = 0;
            do
            {
              if ( HIDWORD(v32) )
              {
                v36 = v32 / v28;
                v37 = v32 % v28;
              }
              else
              {
                v37 = (unsigned int)v32 % (unsigned int)v28;
                v36 = (unsigned int)v32 / (unsigned int)v28;
              }
              v38 = (32 * (v11 != 88)) | 7;
              if ( v37 < 0xA )
                v38 = 0;
              *v34 = v37 + v38 + 48;
              ++v35;
              --v34;
              v39 = v28 <= v32;
              v32 = v36;
            }
            while ( v39 );
            if ( j >= 1024 )
              j = 1024;
            v75 = 0;
            if ( j <= v35 )
            {
              v68 = v35;
              i = (char *)v80 - v35;
            }
            else
            {
              i = (char *)v80 - j;
              memset((char *)v80 - j, 48, j - v35);
              v68 = j;
            }
            goto LABEL_163;
          default:
            v24 = v8;
            v68 = strlen(i);
            v19 = &_s;
            v63 = &_s;
            goto LABEL_164;
        }
        goto LABEL_5;
      }
      v6 = (void *)v76;
      if ( *((_QWORD *)&v76 + 1) >= 0x401u )
      {
        sub_100000AE0((int)"%s", (_QWORD)v76);
        if ( (_QWORD)v76 )
        {
          *((_QWORD *)&v76 + 1) = 0;
          qfree((void *)v76);
          *(_QWORD *)&v76 = 0;
          v77 = 0;
        }
        v6 = nullptr;
      }
      v7 = 0;
      if ( *((_QWORD *)&v76 + 1) )
        v7 = *((_QWORD *)&v76 + 1) - 1LL;
      if ( v77 < v7 + 2 )
      {
        v6 = qvector_reserve((__int64)&v76, v6, v7 + 2, 1u);
        *(_QWORD *)&v76 = v6;
      }
      *((_QWORD *)&v76 + 1) = v7 + 2;
      *((_BYTE *)v6 + v7) = v5;
      *(_BYTE *)(v76 + v7 + 1) = 0;
      ++v69;
      ++v3;
    }
    *(_QWORD *)(a2 + 8) = v69;
  }
LABEL_227:
  v60 = (void *)v76;
  if ( *((_QWORD *)&v76 + 1) >= 2u )
  {
    sub_100000AE0((int)"%s", (_QWORD)v76);
    v60 = (void *)v76;
  }
  if ( v60 )
  {
    *((_QWORD *)&v76 + 1) = 0;
    qfree(v60);
  }
  return 0;
}
// 1000AC100: using guessed type __int64 qword_1000AC100[4];
// 1000AC118: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
