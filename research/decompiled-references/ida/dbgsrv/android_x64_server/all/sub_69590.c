/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69590
// Address: 0x0000000000069590

//----- (0000000000069590) ----------------------------------------------------
__int64 __fastcall sub_69590(
        __int64 (__fastcall *a1)(__int64, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6)
{
  __int64 v6; // r14
  const char *v9; // r13
  int v10; // ebp
  const char *v11; // rbx
  char *v12; // r13
  char v13; // al
  int v14; // eax
  int v15; // edi
  char v16; // bl
  int v17; // eax
  __int64 i; // r8
  int v19; // r15d
  bool v20; // zf
  int v21; // r15d
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rbx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  const char *v27; // r14
  unsigned __int64 v28; // r12
  __int64 v29; // r14
  int v30; // r13d
  __m128i *v31; // rdx
  __int64 v32; // r14
  int v33; // eax
  int v34; // r14d
  char *v35; // r12
  unsigned int v36; // eax
  signed __int64 v37; // r12
  __int64 v38; // rcx
  __int64 v39; // rbx
  unsigned __int64 v40; // rsi
  int v41; // eax
  int v42; // eax
  char v43; // cl
  char *v44; // rdi
  char v45; // dl
  char v46; // bl
  bool v47; // cc
  __int64 v48; // rbx
  __int64 v49; // r8
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  int v52; // eax
  signed __int64 v53; // rax
  __int64 v54; // rcx
  size_t v55; // rax
  char v56; // cl
  char v57; // al
  unsigned __int8 v58; // bl
  __int64 v59; // r15
  char v60; // al
  __int64 v61; // r12
  int v62; // ebx
  __int64 v63; // rsi
  int v65; // [rsp+Ch] [rbp-48Ch]
  __int64 v66; // [rsp+10h] [rbp-488h]
  __int64 v67; // [rsp+18h] [rbp-480h]
  size_t v68; // [rsp+18h] [rbp-480h]
  __int64 v69; // [rsp+18h] [rbp-480h]
  char v70; // [rsp+24h] [rbp-474h]
  __int64 (__fastcall *v71)(__int64, __int64); // [rsp+28h] [rbp-470h]
  __int64 v72; // [rsp+30h] [rbp-468h]
  __int64 v73; // [rsp+38h] [rbp-460h]
  __int64 v74; // [rsp+38h] [rbp-460h]
  const char *v75; // [rsp+40h] [rbp-458h]
  __int64 v76; // [rsp+48h] [rbp-450h]
  char s[1024]; // [rsp+60h] [rbp-438h] BYREF
  _QWORD v78[7]; // [rsp+460h] [rbp-38h] BYREF

  v6 = a4;
  v78[0] = __readfsqword(0x28u);
  if ( *(int *)(a4 + 8) <= 0 )
  {
    *(_QWORD *)(a4 + 8) = 0;
LABEL_190:
    LODWORD(v24) = 0;
    return (unsigned int)v24;
  }
  v9 = s1;
  if ( *(_QWORD *)(a3 + 16) )
    v9 = *(const char **)(a3 + 8);
  v65 = *(_DWORD *)(a4 + 8);
  v66 = a3 + 32;
  v67 = 0;
  v10 = 0;
  while ( 2 )
  {
    v11 = v9 + 1;
    v12 = (char *)(v9 + 2);
    while ( 1 )
    {
      v13 = *(v11 - 1);
      if ( !v13 )
      {
        *(_QWORD *)(v6 + 8) = v10;
        goto LABEL_190;
      }
      if ( v13 == 37 )
        break;
      v14 = a1(a2, (unsigned int)v13);
      ++v11;
      ++v10;
      ++v12;
      if ( v14 )
      {
LABEL_188:
        LODWORD(v24) = v14;
        return (unsigned int)v24;
      }
    }
    v15 = 0;
    v76 = v6;
    v71 = a1;
    while ( 2 )
    {
      v16 = *(v12 - 1);
      v17 = 2;
      switch ( v16 )
      {
        case ' ':
          v17 = 4;
          goto LABEL_13;
        case '#':
          v17 = 8;
          goto LABEL_13;
        case '*':
          if ( --v65 <= 0 )
          {
            v23 = 0;
            v19 = 0;
            LODWORD(v24) = v67;
            if ( (_DWORD)v67 )
              return (unsigned int)v24;
          }
          else
          {
            v22 = idcv_long(v66, a5, a6);
            if ( v22 )
              goto LABEL_192;
            v23 = *(_DWORD *)(v66 + 8);
            v66 += 32;
            v19 = -v23;
            if ( (signed int)-v23 < 1 )
              v19 = v23;
          }
          v15 |= v23 >> 31;
          v16 = *v12;
          v67 = 0;
LABEL_33:
          i = -1;
          if ( v16 != 46 )
            goto LABEL_45;
          v16 = v12[1];
          if ( v16 == 42 )
          {
            if ( --v65 <= 0 )
            {
              LODWORD(v24) = v67;
              if ( (_DWORD)v67 )
                return (unsigned int)v24;
              i = 0;
            }
            else
            {
              v22 = idcv_long(v66, a5, a6);
              if ( v22 )
                goto LABEL_192;
              i = *(_QWORD *)(v66 + 8);
              v66 += 32;
            }
            v16 = v12[2];
            v12 += 2;
            v67 = 0;
          }
          else
          {
            ++v12;
            for ( i = 0; v16 >= 0; v16 = *++v12 )
            {
              if ( (unsigned int)(unsigned __int8)v16 - 48 > 9 )
                break;
              i = v16 + 10 * i - 48;
            }
          }
LABEL_45:
          v25 = (unsigned int)(v16 - 70);
          v72 = a2;
          if ( (unsigned int)v25 <= 0x26 )
          {
            v26 = 0x4400000141LL;
            if ( _bittest64(&v26, v25) )
              v16 = *++v12;
          }
          break;
        case '+':
          goto LABEL_13;
        case '-':
          v17 = 1;
LABEL_13:
          v15 |= v17;
          ++v12;
          continue;
        case '0':
          LOBYTE(v15) = ~(16 * v15) & 0x10 | v15;
          v16 = *v12;
          goto LABEL_20;
        default:
          --v12;
LABEL_20:
          i = -1;
          v19 = -1;
          if ( v16 < 0 )
            goto LABEL_45;
          while ( (unsigned int)(unsigned __int8)v16 - 48 <= 9 )
          {
            v20 = v19 == -1;
            v21 = 10 * v19 - 48;
            if ( v20 )
              v21 = -48;
            v19 = v16 + v21;
            v16 = *++v12;
            if ( v16 < 0 )
              goto LABEL_45;
          }
          goto LABEL_33;
      }
      break;
    }
    v70 = v15;
    v75 = v12 + 1;
    v27 = &byte_EB522;
    v28 = 10;
    switch ( v16 )
    {
      case '%':
        s[0] = v16;
        v12 = s;
        v35 = (_BYTE *)(&dword_0 + 1);
        v27 = &byte_EB522;
        goto LABEL_111;
      case 'E':
      case 'G':
      case 'e':
      case 'f':
      case 'g':
        v29 = i;
        v30 = v65 - 1;
        LODWORD(v24) = v67;
        if ( v65 - 1 <= 0 || (LODWORD(v24) = idcv_float(v66, a5, a6), (_DWORD)v24) )
        {
          if ( (_DWORD)v24 == 1531 )
            goto LABEL_108;
          if ( (_DWORD)v24 )
            return (unsigned int)v24;
          --v65;
          v31 = nullptr;
        }
        else
        {
          --v65;
          v31 = (__m128i *)(v66 + 8);
          v66 += 32;
        }
        if ( v19 == -1 )
          v19 = 0;
        if ( v29 <= 0 )
          LODWORD(v29) = 0;
        v34 = (_DWORD)v29 << 16;
        if ( !v19 )
          v34 = 0;
        v12 = s;
        realtoasc(s, 1024, v31, v34 | (v19 << 8) | 0xF, a5, a6);
        while ( *v12 == 32 )
          ++v12;
        if ( *v12 == 45 )
        {
          ++v12;
          v27 = "-";
        }
        else if ( (v15 & 2) != 0 )
        {
          v27 = "+";
        }
        else
        {
          v27 = " ";
          if ( (v15 & 4) == 0 )
            v27 = &byte_EB522;
        }
        v35 = (char *)strlen(v12);
        v24 = 0;
        goto LABEL_165;
      case 'X':
      case 'x':
        if ( (v15 & 8) != 0 )
        {
          v27 = "0X";
          if ( v16 == 120 )
            v27 = "0x";
        }
        else
        {
          v27 = &byte_EB522;
        }
        v28 = 16;
        goto LABEL_96;
      case 'a':
        v37 = i;
        if ( v65 - 1 > 0 )
        {
          v22 = idcv_long(v66, a5, a6);
          if ( v22 )
          {
LABEL_192:
            LODWORD(v24) = v22;
            return (unsigned int)v24;
          }
          v38 = *(_QWORD *)(v66 + 8);
          v39 = v66 + 32;
          goto LABEL_148;
        }
        LODWORD(v24) = v67;
        if ( !(_DWORD)v67 )
        {
          v38 = 0;
          v39 = v66;
LABEL_148:
          v66 = v39;
          --v65;
          v12 = s;
          if ( qword_154A40[3] )
            ((void (__fastcall *)(char *, __int64, __int64))qword_154A40[3])(s, 1024, v38);
          else
            qsnprintf(s, 1024, "%a", a5);
LABEL_159:
          v53 = strlen(v12);
          v54 = v37;
          v47 = v53 <= v37;
          v35 = (char *)v53;
          if ( !v47 )
            v35 = (char *)v54;
          if ( v54 < 0 )
            v35 = (char *)v53;
          v24 = 0;
LABEL_164:
          v27 = &byte_EB522;
LABEL_165:
          v55 = strlen(v27);
          v56 = v70;
          if ( (v70 & 0x10) != 0 )
          {
            v68 = v55;
            while ( 1 )
            {
              v57 = *v27;
              if ( !*v27 )
                break;
              ++v27;
              v14 = v71(v72, (unsigned int)v57);
              v56 = v70;
              ++v10;
              if ( v14 )
                goto LABEL_188;
            }
            v55 = v68;
          }
          if ( (v56 & 1) != 0 )
          {
            v59 = v19 - (_QWORD)v35 - v55;
            goto LABEL_178;
          }
          v69 = v24;
          v58 = v56 & 0x10 | 0x20;
          v59 = v19 - 1LL - (_QWORD)v35 - v55;
          while ( v59 >= 0 )
          {
            v14 = v71(v72, v58);
            ++v10;
            --v59;
            if ( v14 )
              goto LABEL_188;
          }
          v24 = v69;
LABEL_178:
          while ( 1 )
          {
            v60 = *v27;
            if ( !*v27 )
              break;
            ++v27;
            v14 = v71(v72, (unsigned int)v60);
            ++v10;
            if ( v14 )
              goto LABEL_188;
          }
          v67 = v24;
          v61 = (__int64)(v35 - 1);
          v62 = 0;
          while ( v61 >= 0 )
          {
            v63 = (unsigned int)*v12++;
            v14 = v71(v72, v63);
            --v61;
            --v62;
            if ( v14 )
              goto LABEL_188;
          }
          v10 -= v62;
          a2 = v72;
          v9 = v75;
          while ( --v59 >= 0 )
          {
            ++v10;
            v14 = v71(v72, 32);
            if ( v14 )
              goto LABEL_188;
          }
          v6 = v76;
          a1 = v71;
          continue;
        }
        return (unsigned int)v24;
      case 'b':
        v27 = "0b";
        if ( (v15 & 8) == 0 )
          v27 = &byte_EB522;
        v28 = 2;
        goto LABEL_96;
      case 'c':
        v30 = v65 - 1;
        v24 = v67;
        if ( v65 - 1 > 0 )
        {
          v36 = idcv_long(v66, a5, a6);
          v24 = v36;
          if ( !v36 )
          {
            --v65;
            v52 = *(unsigned __int8 *)(v66 + 8);
            v66 += 32;
            s[0] = v52;
            v24 = 0;
            goto LABEL_154;
          }
        }
        s[0] = 0;
        if ( !(_DWORD)v24 )
        {
          --v65;
LABEL_154:
          v12 = s;
          v35 = (_BYTE *)(&dword_0 + 1);
          goto LABEL_164;
        }
        v27 = &byte_EB522;
        if ( (_DWORD)v24 != 1531 )
          return (unsigned int)v24;
LABEL_109:
        v65 = v30;
        v66 += 32;
        v24 = 1531;
        v12 = "<obj>";
        v35 = &byte_5;
        goto LABEL_165;
      case 'd':
      case 'i':
        v30 = v65 - 1;
        if ( v65 - 1 > 0 )
        {
          if ( *(_BYTE *)v66 == 2 || (v32 = i, v33 = idcv_int64(v66, a5, a6), i = v32, (LODWORD(v67) = v33) == 0) )
          {
            v40 = *(_QWORD *)(v66 + 8);
            v66 += 32;
            LODWORD(v67) = 64;
            if ( (v40 & 0x8000000000000000LL) != 0LL )
            {
              v40 = -(__int64)v40;
              LODWORD(v67) = 64;
              v27 = "-";
LABEL_124:
              v28 = 10;
              goto LABEL_125;
            }
LABEL_119:
            if ( (v15 & 2) != 0 )
            {
              v27 = "+";
            }
            else
            {
              v27 = " ";
              if ( (v15 & 4) == 0 )
                v27 = &byte_EB522;
            }
            goto LABEL_124;
          }
        }
        if ( !(_DWORD)v67 )
        {
          v40 = 0;
          goto LABEL_119;
        }
        v27 = &byte_EB522;
        LODWORD(v24) = v67;
        if ( (_DWORD)v67 != 1531 )
          return (unsigned int)v24;
        goto LABEL_109;
      case 'o':
        v27 = "0";
        if ( (v15 & 8) == 0 )
          v27 = &byte_EB522;
        v28 = 8;
        goto LABEL_96;
      case 's':
        v37 = i;
        v30 = v65 - 1;
        if ( v65 - 1 <= 0 )
        {
          --v65;
          v12 = nullptr;
        }
        else
        {
          v42 = idcv_string(v66, a5, a6);
          if ( v42 == 1531 )
          {
LABEL_108:
            v27 = &byte_EB522;
            goto LABEL_109;
          }
          LODWORD(v24) = v42;
          if ( v42 )
            return (unsigned int)v24;
          --v65;
          if ( *(_QWORD *)(v66 + 16) )
            v12 = *(char **)(v66 + 8);
          else
            v12 = (char *)s1;
          v66 += 32;
        }
        if ( !v12 )
          v12 = "(null)";
        goto LABEL_159;
      case 'u':
LABEL_96:
        v30 = v65 - 1;
        if ( v65 - 1 <= 0 )
          goto LABEL_100;
        if ( *(_BYTE *)v66 == 2 )
        {
          v40 = *(_QWORD *)(v66 + 8);
          v66 += 32;
LABEL_117:
          LODWORD(v67) = 64;
          goto LABEL_125;
        }
        v73 = i;
        v41 = idcv_int64(v66, a5, a6);
        i = v73;
        LODWORD(v67) = v41;
        if ( !v41 )
        {
          v40 = *(_QWORD *)(v66 + 8);
          v66 += 32;
          goto LABEL_117;
        }
LABEL_100:
        if ( (_DWORD)v67 == 1531 )
          goto LABEL_109;
        if ( (_DWORD)v67 )
        {
          LODWORD(v24) = v67;
          return (unsigned int)v24;
        }
        v40 = 0;
LABEL_125:
        v65 = v30;
        if ( !(i | v40) )
        {
          v24 = 0;
          v12 = nullptr;
          v35 = nullptr;
          goto LABEL_164;
        }
        if ( (unsigned int)v67 <= 0x3F )
          v40 &= ~(-1LL << v67);
        v43 = (32 * (v16 != 88)) | 7;
        v44 = (char *)v78 + 1;
        do
        {
          v45 = v40 % v28 + 48;
          v46 = v43;
          if ( v45 <= 57 )
            v46 = 0;
          *(v44 - 2) = v46 + v45;
          --v44;
          v47 = v28 <= v40;
          v40 /= v28;
        }
        while ( v47 );
        v12 = v44 - 1;
        v35 = (char *)((char *)v78 - (v44 - 1));
        v48 = 1024;
        if ( i < 1025 )
          v48 = i;
        if ( (__int64)v35 >= v48 )
        {
          v24 = 0;
        }
        else
        {
          v49 = ~i;
          if ( v49 <= -1026 )
            v49 = -1025;
          v74 = v49;
          memset((char *)v78 + v49 + 1, 48, (size_t)&v12[~(unsigned __int64)v78 - v49]);
          v50 = (unsigned __int64)&v12[-1026LL - (_QWORD)s - v74];
          if ( (((_BYTE)v44 - 2 - (_BYTE)v74) & 7) != 0 )
          {
            v51 = 0;
            do
            {
              --v12;
              --v51;
            }
            while ( -(__int64)(((_BYTE)v44 - 2 - (_BYTE)v74) & 7) != v51 );
            v35 -= v51;
          }
          if ( v50 >= 7 )
          {
            do
            {
              v12 -= 8;
              v35 += 8;
            }
            while ( (__int64)v35 < v48 );
          }
          v35 = (char *)v48;
          v24 = 0;
        }
        goto LABEL_165;
      default:
        v35 = (char *)strlen(v12);
        v27 = &byte_EB522;
        v75 = &byte_EB522;
LABEL_111:
        v24 = v67;
        goto LABEL_165;
    }
  }
}
// 0: using guessed type int dword_0;
// 5: using guessed type char byte_5;
// 154A40: using guessed type __int64 qword_154A40[4];
// 154A58: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
