/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002EB10
// Address: 0x000000010002EB10

//----- (000000010002EB10) ----------------------------------------------------
__int64 __fastcall sub_10002EB10(
        __int64 (__fastcall *a1)(__int64, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5)
{
  __int64 v5; // r12
  const char *v7; // rbx
  int v8; // r15d
  const char *v9; // r14
  char *i; // rbx
  int v11; // eax
  __int64 result; // rax
  int v13; // r14d
  int v14; // eax
  unsigned __int8 v15; // r13
  __int64 j; // rdx
  int v17; // r14d
  bool v18; // zf
  int v19; // r14d
  int v20; // ecx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // edx
  int v25; // edx
  int v26; // eax
  __int64 v27; // rsi
  unsigned __int64 v28; // r11
  const char *v29; // r12
  signed __int64 v30; // r13
  __int64 v31; // r10
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rax
  unsigned __int64 v36; // rsi
  char v37; // cl
  char *v38; // rdi
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  char v41; // r8
  bool v42; // cc
  size_t v43; // rdx
  signed __int64 v44; // rax
  size_t v45; // rax
  char v46; // al
  size_t v47; // rcx
  __int64 v48; // r14
  char v49; // al
  __int64 k; // r13
  __int64 v51; // rsi
  __int64 v52; // [rsp+8h] [rbp-478h]
  const char *v53; // [rsp+10h] [rbp-470h]
  __int64 v54; // [rsp+18h] [rbp-468h]
  __int64 v56; // [rsp+28h] [rbp-458h]
  __int64 v57; // [rsp+30h] [rbp-450h]
  unsigned __int64 v58; // [rsp+30h] [rbp-450h]
  int v59; // [rsp+3Ch] [rbp-444h]
  int v60; // [rsp+3Ch] [rbp-444h]
  unsigned __int8 v61; // [rsp+3Ch] [rbp-444h]
  __int64 v62; // [rsp+40h] [rbp-440h]
  __int64 v63; // [rsp+40h] [rbp-440h]
  size_t v64; // [rsp+40h] [rbp-440h]
  int v65; // [rsp+48h] [rbp-438h]
  unsigned int v66; // [rsp+4Ch] [rbp-434h]
  char __s[1023]; // [rsp+50h] [rbp-430h] BYREF
  char v68; // [rsp+44Fh] [rbp-31h] BYREF
  _QWORD v69[6]; // [rsp+450h] [rbp-30h] BYREF

  v5 = a4;
  if ( *(int *)(a4 + 8) <= 0 )
  {
    *(_QWORD *)(a4 + 8) = 0;
    return 0;
  }
  v65 = *(_DWORD *)(a4 + 8);
  v7 = _s1;
  if ( *(_QWORD *)(a3 + 16) )
    v7 = *(const char **)(a3 + 8);
  v62 = a3 + 32;
  v66 = 0;
  v8 = 0;
  while ( 2 )
  {
    v9 = v7 + 1;
    for ( i = (char *)(v7 + 2); ; ++i )
    {
      v11 = *((unsigned __int8 *)v9 - 1);
      if ( !*(v9 - 1) )
      {
        *(_QWORD *)(v5 + 8) = v8;
        return 0;
      }
      if ( v11 == 37 )
        break;
      result = a1(a2, (unsigned int)(char)v11);
      ++v8;
      ++v9;
      if ( (_DWORD)result )
        return result;
    }
    v54 = a2;
    v52 = v5;
    v13 = 0;
    while ( 2 )
    {
      v15 = *(i - 1);
      switch ( v15 )
      {
        case ' ':
          v14 = 4;
          goto LABEL_12;
        case '#':
          v14 = 8;
          goto LABEL_12;
        case '*':
          --v65;
          v60 = v13;
          if ( v65 <= 0 )
          {
            v20 = 0;
            result = v66;
            if ( v66 )
              return result;
          }
          else
          {
            result = idcv_long((unsigned __int8 *)v62);
            if ( (_DWORD)result )
              return result;
            v20 = *(_DWORD *)(v62 + 8);
            v62 += 32;
          }
          v17 = -v20;
          if ( v20 > 0 )
            v17 = v20;
          v59 = ((unsigned int)v20 >> 31) | v60;
          v15 = *i;
          v66 = 0;
LABEL_32:
          j = -1;
          if ( v15 != 46 )
            goto LABEL_44;
          v15 = i[1];
          if ( v15 == 42 )
          {
            if ( --v65 <= 0 )
            {
              result = v66;
              if ( v66 )
                return result;
              j = 0;
            }
            else
            {
              result = idcv_long((unsigned __int8 *)v62);
              if ( (_DWORD)result )
                return result;
              j = *(_QWORD *)(v62 + 8);
              v62 += 32;
            }
            v15 = i[2];
            i += 2;
            v66 = 0;
          }
          else
          {
            ++i;
            for ( j = 0; (v15 & 0x80u) == 0; v15 = *++i )
            {
              if ( (_DefaultRuneLocale.__runetype[v15] & 0x400) == 0 )
                break;
              j = v15 + 10 * j - 48;
            }
          }
LABEL_44:
          v21 = (unsigned int)v15 - 70;
          v56 = j;
          if ( (unsigned int)v21 <= 0x26 )
          {
            v22 = 0x4400000141LL;
            if ( _bittest64(&v22, v21) )
              v15 = *++i;
          }
          break;
        case '+':
          v14 = 2;
          goto LABEL_12;
        case '-':
          v14 = 1;
LABEL_12:
          v13 |= v14;
          ++i;
          continue;
        case '0':
          LOBYTE(v13) = (16 * ~(_BYTE)v13) & 0x10 | v13;
          v15 = *i;
          goto LABEL_19;
        default:
          --i;
LABEL_19:
          LOBYTE(v59) = v13;
          j = -1;
          v17 = -1;
          if ( (v15 & 0x80u) != 0 )
            goto LABEL_44;
          while ( (_DefaultRuneLocale.__runetype[v15] & 0x400) != 0 )
          {
            v18 = v17 == -1;
            v19 = 10 * v17 - 48;
            if ( v18 )
              v19 = -48;
            v17 = v15 + v19;
            v15 = *++i;
            if ( (v15 & 0x80u) != 0 )
              goto LABEL_44;
          }
          goto LABEL_32;
      }
      break;
    }
    v53 = i + 1;
    switch ( v15 )
    {
      case '%':
        __s[0] = 37;
        v30 = 1;
        v57 = v62;
        goto LABEL_141;
      case 'E':
      case 'G':
      case 'e':
      case 'f':
      case 'g':
        --v65;
        v23 = v62;
        result = v66;
        if ( v65 <= 0 )
          goto LABEL_74;
        result = idcv_float((unsigned __int8 *)v62);
        if ( (_DWORD)result )
          goto LABEL_74;
        v57 = v62 + 32;
        if ( v17 == -1 )
          v17 = 0;
        v24 = v56;
        if ( v56 <= 0 )
          v24 = 0;
        v25 = v24 << 16;
        if ( !v17 )
          v25 = 0;
        i = __s;
        realtoasc(__s, 1024, v62 + 8, v25 | (v17 << 8) | 0xF);
        while ( 1 )
        {
          v26 = (unsigned __int8)*i;
          if ( v26 != 32 )
            break;
          ++i;
        }
        if ( v26 == 45 )
        {
          ++i;
          v29 = "-";
        }
        else if ( (v59 & 2) != 0 )
        {
          v29 = "+";
        }
        else
        {
          v29 = " ";
          if ( (v59 & 4) == 0 )
            v29 = &_s;
        }
        v30 = strlen(i);
        v66 = 0;
        goto LABEL_152;
      case 'X':
      case 'x':
        v28 = 16;
        if ( (v59 & 8) != 0 )
        {
          v29 = "0X";
          if ( v15 == 120 )
            v29 = "0x";
        }
        else
        {
          v29 = &_s;
        }
        goto LABEL_89;
      case 'a':
        if ( --v65 <= 0 )
        {
          result = v66;
          v34 = v62;
          if ( v66 )
            return result;
          v33 = 0;
        }
        else
        {
          result = idcv_long((unsigned __int8 *)v62);
          if ( (_DWORD)result )
            return result;
          v33 = *(_QWORD *)(v62 + 8);
          v34 = v62 + 32;
        }
        v62 = v34;
        i = __s;
        if ( qword_1000AC100[3] )
          ((void (__fastcall *)(char *, __int64, __int64))qword_1000AC100[3])(__s, 1024, v33);
        else
          qsnprintf(__s, 1024, "%a", a5);
LABEL_146:
        v44 = strlen(i);
        v30 = v56;
        if ( v44 < v56 )
          v30 = v44;
        if ( v56 < 0 )
          v30 = v44;
        v66 = 0;
        v57 = v62;
LABEL_151:
        v29 = &_s;
        goto LABEL_152;
      case 'b':
        v29 = "0b";
        if ( (v59 & 8) == 0 )
          v29 = &_s;
        v28 = 2;
        goto LABEL_89;
      case 'c':
        --v65;
        v23 = v62;
        if ( v65 <= 0 || (v66 = idcv_long((unsigned __int8 *)v62)) != 0 )
        {
          __s[0] = 0;
          v30 = 1;
          result = v66;
          if ( v66 )
            goto LABEL_74;
        }
        else
        {
          v23 = v62 + 32;
          __s[0] = *(_BYTE *)(v62 + 8);
          v30 = 1;
          v66 = 0;
        }
        v57 = v23;
LABEL_141:
        i = __s;
        goto LABEL_151;
      case 'd':
      case 'i':
        --v65;
        v23 = v62;
        if ( v65 > 0 && (*(_BYTE *)v62 == 2 || (v66 = idcv_int64((unsigned __int8 *)v62)) == 0) )
        {
          v27 = *(_QWORD *)(v62 + 8);
          v23 = v62 + 32;
          v66 = 64;
          if ( v27 < 0 )
          {
            v36 = -v27;
            v28 = 10;
            v29 = "-";
            v31 = v56;
            goto LABEL_115;
          }
          goto LABEL_101;
        }
        result = v66;
        if ( !v66 )
        {
          v27 = 0;
LABEL_101:
          v31 = v56;
          v28 = 10;
          v62 = v23;
          if ( (v59 & 2) != 0 )
          {
            v29 = "+";
          }
          else
          {
            v29 = " ";
            if ( (v59 & 4) == 0 )
              v29 = &_s;
          }
          goto LABEL_110;
        }
LABEL_74:
        v29 = &_s;
        if ( (_DWORD)result != 1531 )
          return result;
LABEL_136:
        v30 = 5;
        v66 = 1531;
        v57 = v23 + 32;
        i = "<obj>";
LABEL_152:
        v45 = strlen(v29);
        if ( (v59 & 0x10) != 0 )
        {
          v64 = v45;
          while ( 1 )
          {
            v46 = *v29;
            if ( !*v29 )
              break;
            ++v29;
            result = a1(v54, (unsigned int)v46);
            ++v8;
            if ( (_DWORD)result )
              return result;
          }
          v45 = v64;
        }
        v47 = v30 + v45;
        if ( (v59 & 1) != 0 )
        {
          v48 = v17 - v47;
LABEL_164:
          while ( 1 )
          {
            v49 = *v29;
            if ( !*v29 )
              break;
            ++v29;
            result = a1(v54, (unsigned int)v49);
            ++v8;
            if ( (_DWORD)result )
              return result;
          }
          for ( k = v30 - 1; k >= 0; --k )
          {
            v51 = (unsigned int)*i++;
            result = a1(v54, v51);
            ++v8;
            if ( (_DWORD)result )
              return result;
          }
          v5 = v52;
          a2 = v54;
          while ( --v48 >= 0 )
          {
            ++v8;
            result = a1(v54, 32);
            if ( (_DWORD)result )
              return result;
          }
          v62 = v57;
          v7 = v53;
          continue;
        }
        v61 = v59 & 0x10 | 0x20;
        v48 = ~v47 + v17;
        do
        {
          if ( v48 < 0 )
            goto LABEL_164;
          result = a1(v54, v61);
          ++v8;
          --v48;
        }
        while ( !(_DWORD)result );
        return result;
      case 'o':
        v29 = "0";
        if ( (v59 & 8) == 0 )
          v29 = &_s;
        v28 = 8;
        goto LABEL_89;
      case 's':
        if ( --v65 <= 0 )
        {
          i = nullptr;
        }
        else
        {
          v23 = v62;
          result = idcv_string(v62);
          if ( (_DWORD)result == 1531 )
          {
            v29 = &_s;
            goto LABEL_136;
          }
          if ( (_DWORD)result )
            return result;
          if ( *(_QWORD *)(v62 + 16) )
            i = *(char **)(v62 + 8);
          else
            i = (char *)_s1;
          v62 += 32;
        }
        if ( !i )
          i = "(null)";
        goto LABEL_146;
      case 'u':
        v28 = 10;
        v29 = &_s;
LABEL_89:
        v23 = v62;
        --v65;
        v31 = j;
        if ( v65 > 0
          && (*(_BYTE *)v62 == 2
           || (v58 = v28, v32 = idcv_int64((unsigned __int8 *)v62), v28 = v58, v31 = v56, (v66 = v32) == 0)) )
        {
          v27 = *(_QWORD *)(v62 + 8);
          v62 += 32;
          v66 = 64;
        }
        else
        {
          result = v66;
          if ( v66 == 1531 )
            goto LABEL_136;
          if ( v66 )
            return result;
          v27 = 0;
        }
LABEL_110:
        i = nullptr;
        if ( !(v31 | v27) )
        {
          v57 = v62;
          v66 = 0;
          v30 = 0;
          goto LABEL_151;
        }
        v35 = ~(-1LL << v66);
        if ( v66 >= 0x40 )
          v35 = -1;
        v36 = v35 & v27;
        v23 = v62;
LABEL_115:
        v37 = (32 * (v15 != 88)) | 7;
        v38 = &v68;
        v30 = 0;
        do
        {
          if ( HIDWORD(v36) )
          {
            v39 = v36 / v28;
            v40 = v36 % v28;
          }
          else
          {
            v40 = (unsigned int)v36 % (unsigned int)v28;
            v39 = (unsigned int)v36 / (unsigned int)v28;
          }
          v41 = v37;
          if ( v40 < 0xA )
            v41 = 0;
          *v38 = v40 + v41 + 48;
          ++v30;
          --v38;
          v42 = v28 <= v36;
          v36 = v39;
        }
        while ( v42 );
        v63 = v23;
        if ( v31 >= 1024 )
          v31 = 1024;
        v66 = 0;
        v43 = v31 - v30;
        if ( v31 <= v30 )
        {
          i = (char *)v69 - v30;
        }
        else
        {
          i = (char *)v69 - v31;
          v30 = v31;
          memset((char *)v69 - v31, 48, v43);
        }
        v57 = v63;
        goto LABEL_152;
      default:
        v30 = strlen(i);
        v57 = v62;
        v29 = &_s;
        v53 = &_s;
        goto LABEL_152;
    }
  }
}
// 1000AC100: using guessed type __int64 qword_1000AC100[4];
// 1000AC118: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
