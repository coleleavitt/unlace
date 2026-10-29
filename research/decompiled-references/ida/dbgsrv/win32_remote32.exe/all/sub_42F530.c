/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42F530
// Address: 0x0042F530

//----- (0042F530) --------------------------------------------------------
int __usercall sub_42F530@<eax>(int a1@<esi>, __m128i a2@<xmm0>, int (__cdecl *a3)(int, CHAR), int a4, int a5, int a6)
{
  int (__cdecl *v6)(int, CHAR); // ecx
  int v7; // edx
  int v8; // ebx
  int result; // eax
  int v10; // ebp
  int v11; // edi
  const CHAR *v12; // esi
  CHAR v13; // al
  const CHAR *v14; // esi
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // eax
  int v18; // ebx
  int v19; // ecx
  int v20; // eax
  char v21; // al
  int v22; // edi
  int v23; // eax
  __int8 v24; // cl
  const char *v25; // edx
  __m128i *i; // edi
  signed int v27; // esi
  __int64 v28; // rax
  int v29; // ecx
  char *v30; // eax
  const char *v31; // ecx
  bool v32; // zf
  const char *v33; // eax
  int v34; // edx
  const char *v35; // ecx
  unsigned int v36; // esi
  int v37; // ecx
  int v38; // ebx
  char v39; // al
  char v40; // cl
  __int64 v41; // rax
  int v42; // ecx
  int v43; // eax
  __m128i *v44; // esi
  int v45; // eax
  char *v46; // eax
  const char *v47; // ecx
  unsigned int v48; // esi
  int v49; // esi
  int v50; // eax
  int v51; // eax
  unsigned int v52; // kr00_4
  char v53; // cl
  int v54; // ebx
  const char *v55; // eax
  int j; // esi
  int k; // ebx
  double v58; // [esp-Ch] [ebp-478h]
  const char *v59; // [esp+8h] [ebp-464h]
  char *v60; // [esp+8h] [ebp-464h]
  char v61; // [esp+Fh] [ebp-45Dh]
  char v62; // [esp+Fh] [ebp-45Dh]
  int v63; // [esp+10h] [ebp-45Ch]
  int v64; // [esp+14h] [ebp-458h]
  int v65; // [esp+18h] [ebp-454h]
  __int8 v66; // [esp+1Fh] [ebp-44Dh]
  char v67; // [esp+20h] [ebp-44Ch]
  const CHAR *v68; // [esp+24h] [ebp-448h]
  const CHAR *v69; // [esp+24h] [ebp-448h]
  int v70; // [esp+2Ch] [ebp-440h]
  unsigned int v71; // [esp+30h] [ebp-43Ch]
  int v72; // [esp+34h] [ebp-438h]
  int v73; // [esp+38h] [ebp-434h]
  int v74; // [esp+3Ch] [ebp-430h]
  unsigned int v75; // [esp+44h] [ebp-428h]
  int v76; // [esp+50h] [ebp-41Ch]
  char v77; // [esp+54h] [ebp-418h]
  char v78; // [esp+58h] [ebp-414h]
  CHAR v79; // [esp+5Ch] [ebp-410h]
  CHAR v80; // [esp+60h] [ebp-40Ch]
  __m128i v81[64]; // [esp+68h] [ebp-404h] BYREF
  int v82; // [esp+468h] [ebp-4h] BYREF

  v6 = a3;
  v7 = a4;
  v8 = a6;
  v65 = *(_DWORD *)(a6 + 8);
  if ( v65 <= 0 )
  {
    *(_DWORD *)(a6 + 8) = 0;
    return 0;
  }
  HIDWORD(v58) = a1;
  v10 = 0;
  v11 = a5 + 24;
  v73 = 0;
  v63 = a5 + 24;
  if ( *(_DWORD *)(a5 + 12) )
    v12 = *(const CHAR **)(a5 + 8);
  else
    v12 = MultiByteStr;
  v64 = 0;
  v13 = *v12;
  v14 = v12 + 1;
  v68 = v14;
  v79 = v13;
  if ( !v13 )
    goto LABEL_184;
  while ( 2 )
  {
    if ( v13 != 37 )
    {
      result = v6(v7, v79);
      if ( result )
        return result;
      v73 = ++v10;
      goto LABEL_179;
    }
    v15 = 0;
    v16 = *v14 - 32;
    v67 = 0;
    while ( 2 )
    {
      switch ( v16 )
      {
        case 0u:
          v15 |= 4u;
          goto LABEL_16;
        case 1u:
        case 2u:
        case 4u:
        case 5u:
        case 6u:
        case 7u:
        case 8u:
        case 9u:
        case 0xAu:
        case 0xCu:
          goto LABEL_17;
        case 3u:
          v15 |= 8u;
          goto LABEL_16;
        case 0xBu:
          v15 |= 2u;
          goto LABEL_16;
        case 0xDu:
          v15 |= 1u;
LABEL_16:
          v17 = *++v14;
          v16 = v17 - 32;
          if ( v16 <= 0xD )
            continue;
LABEL_17:
          v67 = v15;
          v68 = v14;
LABEL_18:
          v18 = -1;
          v76 = -1;
          if ( *v14 == 42 )
          {
            if ( --v65 <= 0 )
            {
              v19 = v64;
            }
            else
            {
              v19 = sub_4247F0(-1, (char *)v11);
              v64 = v19;
              if ( !v19 )
              {
                v20 = *(_DWORD *)(v11 + 8);
                v63 = v11 + 24;
LABEL_33:
                if ( v20 < 0 )
                  v67 |= 1u;
                v68 = ++v14;
                v18 = abs32(v20);
                v76 = v18;
                goto LABEL_37;
              }
            }
            v20 = 0;
            v64 = v19;
            v63 = v11;
            if ( v19 )
              return v19;
            goto LABEL_33;
          }
          if ( *v14 == 48 )
          {
            if ( (v15 & 1) == 0 )
              v67 = v15 | 0x10;
            goto LABEL_22;
          }
          while ( 1 )
          {
            v61 = *v14;
            if ( *v14 < 0 || !sub_46B760(v18, *(unsigned __int8 *)v14) )
              break;
            if ( v18 == -1 )
              v18 = 0;
            v18 = v61 + 2 * (5 * v18 - 24);
            v76 = v18;
LABEL_22:
            v68 = ++v14;
          }
          v19 = v64;
LABEL_37:
          v72 = -1;
          if ( *v14 == 46 )
          {
            v21 = *++v14;
            v22 = 0;
            if ( v21 == 42 )
            {
              if ( --v65 <= 0 || (v19 = sub_4247F0(v18, (char *)v63), (v64 = v19) != 0) )
              {
                v72 = 0;
                if ( v19 )
                  return v19;
                ++v14;
              }
              else
              {
                v72 = *(_DWORD *)(v63 + 8);
                ++v14;
                v63 += 24;
              }
            }
            else
            {
              LOBYTE(v18) = v21;
              while ( (v18 & 0x80u) == 0 && sub_46B760(v18, (unsigned __int8)v18) )
              {
                v23 = (char)v18;
                LOBYTE(v18) = *++v14;
                v22 = v23 + 2 * (5 * v22 - 24);
              }
              v18 = v76;
              v72 = v22;
            }
            v68 = v14;
          }
          v24 = *v14;
          v66 = *v14;
          switch ( *v14 )
          {
            case 'F':
            case 'L':
            case 'N':
            case 'h':
            case 'l':
              v24 = *++v14;
              v68 = v14;
              v66 = v24;
              break;
            default:
              goto LABEL_52;
          }
          break;
        default:
          goto LABEL_18;
      }
      break;
    }
LABEL_52:
    v69 = v68 + 1;
    v25 = v14;
    i = nullptr;
    v59 = pNodeName;
    v27 = 0;
    switch ( v24 )
    {
      case '%':
        v81[0].m128i_i8[0] = v24;
        i = v81;
        v27 = 1;
        goto LABEL_157;
      case 'E':
      case 'G':
      case 'e':
      case 'f':
      case 'g':
        if ( --v65 <= 0 )
        {
          result = v64;
        }
        else
        {
          result = sub_4245A0((char *)v63);
          v64 = result;
          if ( !result )
          {
            v44 = (__m128i *)(v63 + 8);
            v63 += 24;
            goto LABEL_112;
          }
        }
        v44 = nullptr;
        if ( result == 1531 )
          goto LABEL_141;
        if ( result )
          return result;
LABEL_112:
        v45 = 0;
        if ( v18 == -1 )
          v18 = 0;
        if ( v72 > 0 )
          v45 = v72;
        sub_45F950(v81, 1024, v44, ((v18 | ((v18 != 0 ? v45 : 0) << 8)) << 8) | 0xF);
        for ( i = v81; i->m128i_i8[0] == 32; i = (__m128i *)((char *)i + 1) )
          ;
        if ( i->m128i_i8[0] == 45 )
        {
          v59 = "-";
          i = (__m128i *)((char *)i + 1);
        }
        else if ( (v67 & 2) != 0 )
        {
          v59 = "+";
        }
        else
        {
          v46 = &byte_48A240;
          if ( (v67 & 4) == 0 )
            v46 = (char *)pNodeName;
          v59 = v46;
        }
        v47 = &i->m128i_i8[1];
        v48 = (unsigned int)i->m128i_u32 + strlen(i->m128i_i8) + 1;
LABEL_156:
        v27 = v48 - (_DWORD)v47;
        goto LABEL_157;
      case 'X':
      case 'x':
        v70 = 16;
        if ( (v67 & 8) == 0 )
          goto LABEL_77;
        v32 = v24 == 120;
        v70 = 16;
        v33 = "0x";
        v31 = "0X";
LABEL_74:
        if ( !v32 )
          v33 = v31;
        v59 = v33;
LABEL_77:
        if ( --v65 <= 0 )
        {
          v34 = v64;
        }
        else
        {
          if ( *(_BYTE *)v63 == 2 )
          {
            v75 = 32;
            v64 = 0;
            v28 = *(int *)(v63 + 8);
            v63 += 24;
LABEL_86:
            v71 = HIDWORD(v28);
            v74 = v28;
            goto LABEL_87;
          }
          v34 = sub_4246D0(v18, 0, (char *)v63);
          v64 = v34;
          if ( !v34 )
          {
            v75 = 64;
            v28 = *(_QWORD *)(v63 + 8);
            v63 += 24;
            goto LABEL_86;
          }
        }
        a2 = 0;
        v75 = 0;
        if ( v34 != 1531 )
        {
          if ( v34 )
            return v34;
          v28 = 0;
          goto LABEL_86;
        }
LABEL_141:
        v63 += 24;
        i = (__m128i *)"<obj>";
        v27 = 5;
        goto LABEL_157;
      case 'a':
        if ( --v65 <= 0 )
        {
          v19 = v64;
        }
        else
        {
          v19 = sub_4247F0(v18, (char *)v63);
          v64 = v19;
          if ( !v19 )
          {
            v51 = *(_DWORD *)(v63 + 8);
            v63 += 24;
            goto LABEL_148;
          }
        }
        v51 = 0;
        if ( v19 )
          return v19;
LABEL_148:
        LODWORD(v58) = v51;
        if ( dword_4B407C )
          dword_4B407C(v81, 1024, v51);
        else
          sub_453D50(a2, v81, 1024, "%a", v58);
        i = v81;
LABEL_152:
        v27 = strlen(i->m128i_i8);
        if ( v72 >= 0 && v27 > v72 )
          v27 = v72;
        goto LABEL_157;
      case 'b':
        v31 = "0b";
        v32 = (v67 & 8) == 0;
        v70 = 2;
        v33 = pNodeName;
        goto LABEL_74;
      case 'c':
        if ( --v65 <= 0 )
        {
          result = v64;
        }
        else
        {
          result = sub_4247F0(v18, (char *)v63);
          v64 = result;
          if ( !result )
          {
            i = v81;
            v81[0].m128i_i8[0] = *(_DWORD *)(v63 + 8);
            v63 += 24;
            v27 = 1;
            goto LABEL_157;
          }
        }
        v81[0].m128i_i8[0] = 0;
        if ( result == 1531 )
          goto LABEL_141;
        if ( result )
          return result;
        i = v81;
        v27 = 1;
        goto LABEL_157;
      case 'd':
      case 'i':
        if ( --v65 <= 0 )
        {
          v19 = v64;
        }
        else
        {
          if ( *(_BYTE *)v63 == 2 )
          {
            v75 = 32;
            v64 = 0;
            v28 = *(int *)(v63 + 8);
            v29 = *(_DWORD *)(v63 + 8);
            v74 = v29;
            goto LABEL_58;
          }
          v19 = sub_4246D0(v18, 0, (char *)v63);
          v64 = v19;
          if ( !v19 )
          {
            v75 = 64;
            v29 = *(_DWORD *)(v63 + 8);
            HIDWORD(v28) = *(_DWORD *)(v63 + 12);
            v74 = v29;
LABEL_58:
            v10 = v73;
            v63 += 24;
            v71 = HIDWORD(v28);
            if ( v28 < 0 )
            {
              LODWORD(v28) = -v29;
              v74 = -v29;
              HIDWORD(v28) = (unsigned __int64)-v28 >> 32;
              v59 = "-";
              v71 = HIDWORD(v28);
              v70 = 10;
              goto LABEL_87;
            }
            goto LABEL_64;
          }
        }
        a2 = 0;
        v75 = 0;
        v74 = 0;
        if ( v19 == 1531 )
          goto LABEL_141;
        if ( v19 )
          return v19;
        HIDWORD(v28) = 0;
        v71 = 0;
LABEL_64:
        if ( (v67 & 2) != 0 )
        {
          LODWORD(v28) = v74;
          v59 = "+";
          v70 = 10;
        }
        else
        {
          v70 = 10;
          v30 = &byte_48A240;
          if ( (v67 & 4) == 0 )
            v30 = (char *)pNodeName;
          v59 = v30;
          LODWORD(v28) = v74;
        }
LABEL_87:
        if ( v28 || v72 )
        {
          v36 = v71;
          if ( v75 < 0x40 )
          {
            v37 = 0;
            if ( v75 >= 0x20 )
              v37 = 1 << v75;
            v74 &= (v37 ^ (1 << v75)) - 1;
            v36 = ((__PAIR64__(v37, v37 ^ (unsigned int)(1 << v75)) - 1) >> 32) & v71;
          }
          v38 = v74;
          i = (__m128i *)&v82;
          do
          {
            v39 = sub_463580(__PAIR64__(v36, v38), (unsigned int)v70) + 48;
            v62 = v39;
            if ( v39 > 57 )
            {
              v40 = 39;
              if ( v66 == 88 )
                v40 = 7;
              v62 = v40 + v39;
            }
            LODWORD(v41) = sub_463510(__PAIR64__(v36, v38), (unsigned int)v70);
            v38 = v41;
            i = (__m128i *)((char *)i - 1);
            v36 = HIDWORD(v41);
            i->m128i_i8[0] = v62;
          }
          while ( v41 );
          v42 = v72;
          v18 = v76;
          v27 = (char *)&v82 - (char *)i;
          v10 = v73;
          if ( v72 > 1024 )
            v42 = 1024;
          if ( v27 < v42 )
          {
            v43 = v42 - v27;
            v27 = v42;
            do
            {
              i = (__m128i *)((char *)i - 1);
              i->m128i_i8[0] = 48;
              --v43;
            }
            while ( v43 );
          }
LABEL_157:
          v35 = v59;
        }
        else
        {
          v35 = pNodeName;
          v59 = pNodeName;
        }
        v52 = strlen(v35);
        v53 = v67;
        v54 = v18 - v52 - v27;
        if ( (v67 & 0x10) != 0 )
        {
          v55 = v59;
          if ( *v59 )
          {
            v77 = *v59;
            do
            {
              v59 = v55 + 1;
              result = a3(a4, v77);
              if ( result )
                return result;
              v73 = ++v10;
              v77 = *v59;
              v55 = v59;
            }
            while ( *v59 );
            v53 = v67;
          }
        }
        if ( (v53 & 1) != 0 || (--v54, v80 = v53 & 0x10 | 0x20, v54 < 0) )
        {
LABEL_168:
          result = (int)v59;
          if ( *v59 )
          {
            v78 = *v59;
            do
            {
              v60 = (char *)(result + 1);
              result = a3(a4, v78);
              if ( result )
                return result;
              v73 = ++v10;
              v78 = *v60;
              result = (int)v60;
            }
            while ( *v60 );
          }
          for ( j = v27 - 1; j >= 0; v73 = v10 )
          {
            LOBYTE(result) = i->m128i_i8[0];
            i = (__m128i *)((char *)i + 1);
            result = a3(a4, result);
            if ( result )
              return result;
            ++v10;
            --j;
          }
          for ( k = v54 - 1; k >= 0; v73 = v10 )
          {
            result = a3(a4, 32);
            if ( result )
              return result;
            ++v10;
            --k;
          }
          v11 = v63;
          v14 = v69;
LABEL_179:
          v13 = *v14++;
          v68 = v14;
          v79 = v13;
          if ( !v13 )
          {
            v8 = a6;
LABEL_184:
            *(_DWORD *)(v8 + 8) = v10;
            return 0;
          }
          v6 = a3;
          v7 = a4;
          continue;
        }
        while ( 1 )
        {
          result = a3(a4, v80);
          if ( result )
            return result;
          ++v10;
          --v54;
          v73 = v10;
          if ( v54 < 0 )
            goto LABEL_168;
        }
      case 'o':
        v31 = "0";
        v32 = (v67 & 8) == 0;
        v70 = 8;
        v33 = pNodeName;
        goto LABEL_74;
      case 's':
        v64 = 0;
        if ( --v65 <= 0 )
          goto LABEL_139;
        v49 = v63;
        v50 = sub_424980((char *)v63);
        v64 = v50;
        if ( !v50 )
        {
          v63 += 24;
          if ( *(_DWORD *)(v49 + 12) )
            i = *(__m128i **)(v49 + 8);
          else
            i = (__m128i *)MultiByteStr;
          if ( !i )
LABEL_139:
            i = (__m128i *)"(null)";
          goto LABEL_152;
        }
        v19 = v50;
        v64 = v50;
        if ( v50 != 1531 )
          return v19;
        goto LABEL_141;
      case 'u':
        v70 = 10;
        goto LABEL_77;
      default:
        i = (__m128i *)v25;
        v47 = v25 + 1;
        v48 = (unsigned int)&v25[strlen(v25) + 1];
        v69 = pNodeName;
        goto LABEL_156;
    }
  }
}
// 42F530: could not find valid save-restore pair for esi
// 42FA7E: conditional instruction was optimized away because %var_428.4 is in (==0|==20)
// 42FAE1: variable 'v41' is possibly undefined
// 42FD42: variable 'v58' is possibly undefined
// 48A240: using guessed type char byte_48A240;
// 4B407C: using guessed type int (__stdcall *dword_4B407C)(_DWORD, _DWORD, _DWORD);
