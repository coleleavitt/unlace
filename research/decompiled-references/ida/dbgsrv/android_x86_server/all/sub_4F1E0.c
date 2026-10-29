/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4F1E0
// Address: 0x0004F1E0

//----- (0004F1E0) --------------------------------------------------------
unsigned int __cdecl sub_4F1E0(int (__cdecl *a1)(int, int), int a2, int a3, int a4)
{
  char *v4; // esi
  char *v5; // edi
  char *i; // esi
  char v7; // al
  int v8; // eax
  char v9; // dl
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  int v16; // edi
  const char *v17; // edx
  int v18; // eax
  unsigned int v19; // edx
  _WORD *v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // esi
  int v24; // edx
  int v25; // esi
  int v26; // esi
  int v27; // ecx
  const char *v28; // eax
  char *v29; // ecx
  int v30; // esi
  int v31; // eax
  int v32; // eax
  int v33; // eax
  char *v34; // eax
  size_t v35; // eax
  int v36; // edi
  unsigned __int64 v37; // rax
  char v38; // cl
  char v39; // bl
  bool v40; // cf
  int v41; // eax
  int v42; // edx
  char *v43; // eax
  signed int v44; // eax
  char *v45; // edx
  size_t v46; // eax
  char v47; // dl
  const char *v48; // edi
  char v49; // al
  int j; // edi
  const char *v51; // ecx
  const char *v52; // edi
  char *v53; // ecx
  int v54; // edi
  int v55; // eax
  int v56; // esi
  unsigned int v58; // [esp+1Ch] [ebp-450h]
  int v59; // [esp+20h] [ebp-44Ch]
  char *v60; // [esp+24h] [ebp-448h]
  int v61; // [esp+24h] [ebp-448h]
  char *v62; // [esp+24h] [ebp-448h]
  int v63; // [esp+28h] [ebp-444h]
  int v64; // [esp+2Ch] [ebp-440h]
  unsigned __int8 v65; // [esp+2Ch] [ebp-440h]
  const char *v66; // [esp+30h] [ebp-43Ch]
  const char *v67; // [esp+30h] [ebp-43Ch]
  const char *v68; // [esp+30h] [ebp-43Ch]
  const char *v69; // [esp+30h] [ebp-43Ch]
  int v70; // [esp+34h] [ebp-438h]
  char v71; // [esp+38h] [ebp-434h]
  char *v72; // [esp+38h] [ebp-434h]
  size_t v73; // [esp+38h] [ebp-434h]
  int v74; // [esp+3Ch] [ebp-430h]
  int v75; // [esp+3Ch] [ebp-430h]
  int v76; // [esp+3Ch] [ebp-430h]
  int v77; // [esp+44h] [ebp-428h]
  char v78; // [esp+4Bh] [ebp-421h]
  int v79; // [esp+4Ch] [ebp-420h]
  char *v80; // [esp+4Ch] [ebp-420h]
  char *v81; // [esp+50h] [ebp-41Ch]
  int s[256]; // [esp+58h] [ebp-414h] BYREF
  _DWORD v83[5]; // [esp+458h] [ebp-14h] BYREF

  v83[0] = __readgsdword(0x14u);
  if ( *(int *)(a4 + 4) <= 0 )
  {
    *(_DWORD *)(a4 + 4) = 0;
    return 0;
  }
  else
  {
    if ( *(_DWORD *)(a3 + 8) )
      v4 = *(char **)(a3 + 4);
    else
      v4 = byte_EF875;
    v63 = *(_DWORD *)(a4 + 4);
    v59 = a3 + 20;
    v58 = 0;
    v77 = 0;
LABEL_8:
    v5 = v4 + 1;
    for ( i = v4 + 2; ; ++i )
    {
      v7 = *(v5 - 1);
      if ( !v7 )
      {
        *(_DWORD *)(a4 + 4) = v77;
        return 0;
      }
      if ( v7 == 37 )
        break;
      v8 = a1(a2, v7);
      ++v5;
      ++v77;
      if ( v8 )
        return v8;
    }
    v64 = 0;
    while ( 2 )
    {
      v9 = *(i - 1);
      v10 = 2;
      switch ( v9 )
      {
        case ' ':
          v10 = 4;
          goto LABEL_14;
        case '#':
          v10 = 8;
          goto LABEL_14;
        case '*':
          if ( --v63 <= 0 )
          {
            v14 = 0;
            v11 = 0;
            if ( v58 )
              return v58;
          }
          else
          {
            v13 = idcv_long(v59);
            if ( v13 )
              return v13;
            v14 = *(_DWORD *)(v59 + 4);
            v59 += 20;
            v11 = -v14;
            if ( (signed int)-v14 < 1 )
              v11 = v14;
          }
          v15 = (v14 >> 31) | v64;
          v9 = *i;
          v58 = 0;
LABEL_35:
          v70 = -1;
          LOBYTE(v64) = v15;
          if ( v9 != 46 )
            goto LABEL_49;
          v9 = i[1];
          if ( v9 != 42 )
          {
            ++i;
            if ( v9 < 0 )
            {
              v70 = 0;
            }
            else
            {
              v70 = 0;
              do
              {
                if ( (unsigned int)(unsigned __int8)v9 - 48 > 9 )
                  break;
                v70 = v9 + 10 * v70 - 48;
                v9 = *++i;
              }
              while ( v9 >= 0 );
            }
            goto LABEL_49;
          }
          if ( --v63 > 0 )
          {
            v74 = v11;
            v13 = idcv_long(v59);
            if ( !v13 )
            {
              v70 = *(_DWORD *)(v59 + 4);
              v59 += 20;
              v11 = v74;
LABEL_47:
              v9 = i[2];
              i += 2;
              v58 = 0;
              goto LABEL_49;
            }
            return v13;
          }
          v70 = 0;
          if ( !v58 )
            goto LABEL_47;
          break;
        case '+':
          goto LABEL_14;
        case '-':
          v10 = 1;
LABEL_14:
          v64 |= v10;
          ++i;
          continue;
        case '0':
          LOBYTE(v64) = ~(16 * v64) & 0x10 | v64;
          v9 = *i;
          goto LABEL_21;
        default:
          --i;
LABEL_21:
          v11 = -1;
          if ( v9 < 0 )
            goto LABEL_26;
          do
          {
            if ( (unsigned int)(unsigned __int8)v9 - 48 > 9 )
            {
              LOBYTE(v15) = v64;
              goto LABEL_35;
            }
            v12 = 10 * v11 - 48;
            if ( v11 == -1 )
              v12 = -48;
            v11 = v9 + v12;
            v9 = *++i;
          }
          while ( v9 >= 0 );
LABEL_26:
          v70 = -1;
LABEL_49:
          v71 = v9;
          switch ( v9 )
          {
            case 'F':
            case 'L':
            case 'N':
            case 'h':
            case 'l':
              v71 = *++i;
              break;
            default:
              break;
          }
          v75 = v11;
          v81 = i + 1;
          v16 = 10;
          v17 = &byte_DCEE2;
          switch ( v71 )
          {
            case '%':
              LOBYTE(s[0]) = v71;
              v17 = &byte_DCEE2;
              goto LABEL_89;
            case 'E':
            case 'G':
            case 'e':
            case 'f':
            case 'g':
              --v63;
              v18 = v58;
              if ( v63 <= 0 || (v18 = idcv_float(v59), v11 = v75, v18) )
              {
                if ( v18 == 1531 )
                  goto LABEL_118;
                v19 = v18;
                v20 = nullptr;
                v58 = v19;
                if ( v19 )
                  return v58;
              }
              else
              {
                v20 = (_WORD *)(v59 + 4);
                v59 += 20;
                v11 = v75;
              }
              v24 = v11;
              if ( v11 == -1 )
                v24 = 0;
              v25 = v70;
              if ( v70 < 0 )
                v25 = 0;
              v26 = v25 << 16;
              if ( !v24 )
                v26 = 0;
              v75 = v24;
              v27 = v26 | (v24 << 8) | 0xF;
              i = (char *)s;
              realtoasc(s, (int *)&stru_400, v20, v27);
              while ( *i == 32 )
                ++i;
              if ( *i == 45 )
              {
                ++i;
                v28 = "-";
LABEL_113:
                v66 = v28;
                goto LABEL_114;
              }
              if ( (v64 & 2) != 0 )
              {
                v28 = "+";
                goto LABEL_113;
              }
              v29 = " ";
              if ( (v64 & 4) == 0 )
                v29 = &byte_DCEE2;
              v66 = v29;
LABEL_114:
              v58 = 0;
              v60 = (char *)strlen(i);
              v17 = v66;
              goto LABEL_163;
            case 'X':
            case 'x':
              if ( (v64 & 8) != 0 )
              {
                v17 = "0X";
                if ( v71 == 120 )
                  v17 = "0x";
              }
              v16 = 16;
              goto LABEL_96;
            case 'a':
              if ( --v63 <= 0 )
              {
                v32 = 0;
                if ( v58 )
                  return v58;
              }
              else
              {
                v13 = idcv_long(v59);
                if ( v13 )
                  return v13;
                v32 = *(_DWORD *)(v59 + 4);
                v59 += 20;
              }
              i = (char *)s;
              if ( dword_13B624[3] )
                ((void (__cdecl *)(int *, int, int))dword_13B624[3])(s, 1024, v32);
              else
                qsnprintf(s, 1024, "%a", v32);
LABEL_158:
              v44 = strlen(i);
              v45 = (char *)v44;
              if ( v44 > v70 )
                v45 = (char *)v70;
              if ( v70 < 0 )
                v45 = (char *)v44;
              v60 = v45;
              v17 = &byte_DCEE2;
              v58 = 0;
              goto LABEL_163;
            case 'b':
              v17 = "0b";
              if ( (v64 & 8) == 0 )
                v17 = &byte_DCEE2;
              v16 = 2;
              goto LABEL_96;
            case 'c':
              --v63;
              v30 = v59;
              v31 = v58;
              if ( v63 > 0 )
              {
                v31 = idcv_long(v59);
                if ( !v31 )
                {
                  v59 += 20;
                  LOBYTE(s[0]) = *(_BYTE *)(v30 + 4);
                  v17 = &byte_DCEE2;
                  v60 = (_BYTE *)(&dword_0 + 1);
                  v58 = 0;
                  i = (char *)s;
                  goto LABEL_163;
                }
              }
              LOBYTE(s[0]) = 0;
              v17 = &byte_DCEE2;
              v58 = v31;
              if ( !v31 )
              {
LABEL_89:
                v60 = (_BYTE *)(&dword_0 + 1);
                i = (char *)s;
                goto LABEL_163;
              }
              if ( v31 != 1531 )
                return v58;
              goto LABEL_119;
            case 'd':
            case 'i':
              if ( --v63 <= 0 )
                goto LABEL_116;
              if ( *(_BYTE *)v59 == 2 )
              {
                v21 = *(_DWORD *)(v59 + 4);
                v22 = v59;
                v23 = v21 >> 31;
                v58 = 32;
                goto LABEL_130;
              }
              v58 = idcv_int64(v59);
              if ( !v58 )
              {
                v21 = *(_DWORD *)(v59 + 4);
                v22 = v59;
                v23 = *(_DWORD *)(v59 + 8);
                v58 = 64;
LABEL_130:
                v59 = v22 + 20;
                if ( v23 < 0 )
                {
                  v21 = -v21;
                  v79 = 10;
                  v17 = "-";
                  v23 = (unsigned __int64)-__SPAIR64__(v23, v21) >> 32;
                  if ( !v70 )
                    goto LABEL_104;
                }
                else
                {
LABEL_131:
                  v79 = 10;
                  if ( (v64 & 2) == 0 )
                  {
                    v17 = " ";
                    if ( (v64 & 4) == 0 )
                      v17 = &byte_DCEE2;
                    if ( v70 )
                      goto LABEL_139;
LABEL_104:
                    if ( !(v23 | v21) )
                    {
                      v58 = 0;
                      v17 = &byte_DCEE2;
                      i = nullptr;
                      v60 = nullptr;
                      goto LABEL_163;
                    }
                    goto LABEL_139;
                  }
                  v17 = "+";
                  if ( !v70 )
                    goto LABEL_104;
                }
LABEL_139:
                v68 = v17;
                if ( v58 <= 0x3F )
                {
                  v23 &= ~((unsigned __int64)(-1LL << v58) >> 32);
                  v21 &= ~(unsigned int)(-1LL << v58);
                }
                v78 = (32 * (v71 != 88)) | 7;
                v72 = (char *)v83 + 1;
                v36 = v79;
                do
                {
                  v37 = __PAIR64__(v23, v21) / (unsigned int)v36;
                  v61 = HIDWORD(v37);
                  HIDWORD(v37) = v21;
                  v38 = __PAIR64__(v23, v21) % (unsigned int)v36 + 48;
                  v39 = v78;
                  if ( v38 <= 57 )
                    v39 = 0;
                  *(v72 - 2) = v39 + v38;
                  --v72;
                  v36 = v79;
                  v40 = __PAIR64__(v23, HIDWORD(v37)) < (unsigned int)v79;
                  v21 = v37;
                  v23 = v61;
                }
                while ( !v40 );
                i = v72 - 1;
                v41 = 1024;
                if ( v70 < 1025 )
                  v41 = v70;
                v58 = 0;
                v60 = (char *)((char *)v83 - (v72 - 1));
                v80 = (char *)v41;
                if ( (int)v60 < v41 )
                {
                  v42 = ~v70;
                  if ( ~v70 < -1026 || v70 == 1025 )
                    v42 = -1025;
                  memset((char *)v83 + v42 + 1, 48, (size_t)&i[~(unsigned int)v83 - v42]);
                  v43 = (char *)((char *)v83 - (v72 - 1));
                  do
                  {
                    --i;
                    ++v43;
                  }
                  while ( (int)v43 < (int)v80 );
                  v60 = v80;
                }
                v17 = v68;
                goto LABEL_163;
              }
LABEL_116:
              v21 = 0;
              if ( !v58 )
              {
                v23 = 0;
                goto LABEL_131;
              }
              if ( v58 != 1531 )
                return v58;
LABEL_118:
              v17 = &byte_DCEE2;
LABEL_119:
              v59 += 20;
              v60 = &byte_5;
              i = "<obj>";
              v58 = 1531;
LABEL_163:
              v69 = v17;
              v46 = strlen(v17);
              v47 = v64;
              if ( (v64 & 0x10) != 0 )
              {
                v73 = v46;
                v48 = v69;
                while ( 1 )
                {
                  v49 = *v48;
                  if ( !*v48 )
                    break;
                  ++v48;
                  v13 = a1(a2, v49);
                  ++v77;
                  if ( v13 )
                    return v13;
                }
                v69 = v48;
                v47 = v64;
                v46 = v73;
              }
              if ( (v47 & 1) != 0 )
              {
                j = v75 - (_DWORD)v60 - v46;
              }
              else
              {
                v65 = v47 & 0x10 | 0x20;
                for ( j = v75 - 1 - (_DWORD)v60 - v46; j >= 0; --j )
                {
                  v13 = a1(a2, v65);
                  ++v77;
                  if ( v13 )
                    return v13;
                }
              }
              v76 = j;
              v51 = v69;
              while ( *v51 )
              {
                v52 = v51 + 1;
                v13 = a1(a2, *v51);
                v51 = v52;
                ++v77;
                if ( v13 )
                  return v13;
              }
              v53 = v60 - 1;
              v54 = 0;
              v62 = v60 - 1;
              while ( (int)&v53[v54] >= 0 )
              {
                v55 = *i++;
                v8 = a1(a2, v55);
                v53 = v62;
                --v54;
                if ( v8 )
                  return v8;
              }
              v56 = v77 - v54;
              while ( v76 - 1 >= 0 )
              {
                --v76;
                ++v56;
                v13 = a1(a2, 32);
                if ( v13 )
                  return v13;
              }
              v77 = v56;
              v4 = v81;
              break;
            case 'o':
              v17 = "0";
              if ( (v64 & 8) == 0 )
                v17 = &byte_DCEE2;
              v16 = 8;
              goto LABEL_96;
            case 's':
              if ( --v63 <= 0 )
              {
                v34 = nullptr;
              }
              else
              {
                v13 = idcv_string(v59);
                if ( v13 == 1531 )
                  goto LABEL_118;
                if ( v13 )
                  return v13;
                if ( *(_DWORD *)(v59 + 8) )
                  v34 = *(char **)(v59 + 4);
                else
                  v34 = byte_EF875;
                v59 += 20;
              }
              i = "(null)";
              if ( v34 )
                i = v34;
              goto LABEL_158;
            case 'u':
LABEL_96:
              v79 = v16;
              if ( --v63 <= 0 )
                goto LABEL_101;
              if ( *(_BYTE *)v59 == 2 )
              {
                v21 = *(_DWORD *)(v59 + 4);
                v59 += 20;
                v23 = v21 >> 31;
                v58 = 32;
                if ( !v70 )
                  goto LABEL_104;
                goto LABEL_139;
              }
              v67 = v17;
              v33 = idcv_int64(v59);
              v17 = v67;
              v58 = v33;
              if ( !v33 )
              {
                v21 = *(_DWORD *)(v59 + 4);
                v23 = *(_DWORD *)(v59 + 8);
                v58 = 64;
                v59 += 20;
                if ( !v70 )
                  goto LABEL_104;
                goto LABEL_139;
              }
LABEL_101:
              if ( v58 == 1531 )
                goto LABEL_119;
              v21 = 0;
              v23 = 0;
              if ( v58 )
                return v58;
              if ( v70 )
                goto LABEL_139;
              goto LABEL_104;
            default:
              v35 = strlen(i);
              v17 = &byte_DCEE2;
              v60 = (char *)v35;
              v81 = &byte_DCEE2;
              goto LABEL_163;
          }
          goto LABEL_8;
      }
      break;
    }
  }
  return v58;
}
// 0: using guessed type int dword_0;
// 5: using guessed type char;
// 400: using guessed type Elf32_Sym stru_400;
// DCEE2: using guessed type char byte_DCEE2;
// 13B624: using guessed type int dword_13B624[4];
