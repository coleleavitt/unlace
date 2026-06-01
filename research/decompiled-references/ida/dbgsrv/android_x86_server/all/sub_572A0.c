/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_572A0
// Address: 0x000572A0

//----- (000572A0) --------------------------------------------------------
unsigned int __cdecl sub_572A0(int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // eax
  char v5; // di
  char *v6; // edi
  size_t v7; // esi
  char v8; // al
  _DWORD *v9; // esi
  unsigned int utf8_char; // eax
  unsigned int v11; // esi
  int v12; // esi
  unsigned int v13; // ecx
  _DWORD *v14; // edi
  unsigned int v15; // esi
  int v16; // eax
  char *v17; // eax
  int v18; // ecx
  char *v19; // edi
  char *v20; // esi
  int v21; // eax
  bool v22; // zf
  char *v23; // eax
  unsigned int v24; // eax
  char *v25; // esi
  int v26; // eax
  int v27; // esi
  int v28; // eax
  int v29; // eax
  int v30; // esi
  int v31; // ecx
  char *v32; // edx
  int v33; // eax
  char *v34; // esi
  _DWORD *v35; // esi
  int v36; // edi
  char v37; // al
  char v38; // al
  char *v39; // eax
  char *v40; // esi
  int v41; // eax
  char *v42; // eax
  char *v43; // esi
  int v44; // edx
  int v45; // esi
  int v46; // eax
  int v47; // eax
  const char **v48; // edx
  int v49; // eax
  int v50; // edi
  const char **v51; // esi
  char *v52; // eax
  int v53; // esi
  int v54; // eax
  int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // edi
  _DWORD *v62; // esi
  int v63; // edi
  int v64; // eax
  int v65; // eax
  char *v66; // eax
  int v67; // eax
  unsigned int v68; // ecx
  unsigned int v69; // eax
  unsigned int v70; // ecx
  int v71; // eax
  int v72; // esi
  int v73; // eax
  char *v74; // esi
  char **v75; // eax
  int v77; // [esp-8h] [ebp-74h]
  int v78; // [esp+4h] [ebp-68h]
  int v79; // [esp+4h] [ebp-68h]
  unsigned int v80; // [esp+4h] [ebp-68h]
  int v81; // [esp+4h] [ebp-68h]
  unsigned int v82; // [esp+8h] [ebp-64h]
  char *v83; // [esp+8h] [ebp-64h]
  char *v84; // [esp+8h] [ebp-64h]
  const char *v85; // [esp+8h] [ebp-64h]
  int v86; // [esp+8h] [ebp-64h]
  int v87; // [esp+Ch] [ebp-60h]
  int v88; // [esp+Ch] [ebp-60h]
  unsigned int v89; // [esp+Ch] [ebp-60h]
  const char *v90; // [esp+10h] [ebp-5Ch]
  int v91; // [esp+14h] [ebp-58h]
  char v92; // [esp+14h] [ebp-58h]
  int v93; // [esp+18h] [ebp-54h]
  unsigned int v94; // [esp+1Ch] [ebp-50h]
  char v95; // [esp+1Ch] [ebp-50h]
  char *v96; // [esp+20h] [ebp-4Ch]
  int v97; // [esp+24h] [ebp-48h]
  char v98; // [esp+24h] [ebp-48h]
  const char **v99; // [esp+28h] [ebp-44h]
  bool v100; // [esp+28h] [ebp-44h]
  char **v101; // [esp+2Ch] [ebp-40h]
  char *v102; // [esp+30h] [ebp-3Ch]
  char *v103; // [esp+34h] [ebp-38h]
  size_t v104; // [esp+38h] [ebp-34h]
  char **v105; // [esp+3Ch] [ebp-30h]
  char **v106; // [esp+40h] [ebp-2Ch]
  char *v107; // [esp+44h] [ebp-28h] BYREF
  int v108; // [esp+48h] [ebp-24h] BYREF
  int v109; // [esp+4Ch] [ebp-20h]
  int v110; // [esp+50h] [ebp-1Ch]
  char *v111[6]; // [esp+54h] [ebp-18h] BYREF

  v111[1] = (char *)__readgsdword(0x14u);
  v107 = *(char **)a3;
  v96 = v107;
  if ( !v107 )
    return __readgsdword(0x14u);
  v3 = a1;
  v104 = *(_DWORD *)(a3 + 4);
  (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)a2 + 20))(a2, 0);
  *(_DWORD *)(a1 + 88) = v107;
  *(_DWORD *)(a1 + 92) = v96;
  v4 = (*(int (__cdecl **)(int))(*(_DWORD *)a2 + 12))(a2);
  if ( v4 <= 0 )
  {
    v101 = (char **)(a1 + 96);
    *(_DWORD *)(a1 + 96) = 0;
  }
  else
  {
    if ( (v4 & 0xF) != 0 )
    {
      v5 = v4;
      sub_57120((_DWORD *)a1, a2, (v4 & 0xF) - 1, (const char **)&v107);
      LOBYTE(v4) = v5;
    }
    if ( (v4 & 0x10) != 0 )
    {
      v6 = v107;
      v7 = strlen(v107);
      v107 = &v6[v7];
      sub_56E70(a1, a2, (unsigned int)&v6[v7], *(_DWORD *)(a1 + 72));
      v8 = v6[v7 - 1];
      v3 = a1;
      if ( v8 == *(_BYTE *)(a1 + 104) )
      {
        v9 = (_DWORD *)(a1 + 72);
        (*(void (__cdecl **)(int, int))(*(_DWORD *)a2 + 20))(a2, 16);
      }
      else
      {
        v9 = (_DWORD *)(a1 + 60);
      }
      v101 = (char **)(a1 + 96);
      *(_DWORD *)(a1 + 96) = *v9;
    }
    else
    {
      v3 = a1;
      v101 = (char **)(a1 + 96);
    }
  }
  v105 = (char **)(v3 + 72);
  v106 = (char **)(v3 + 60);
LABEL_14:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          v108 = (int)v107;
          utf8_char = get_utf8_char((char **)&v108);
          if ( utf8_char >= 0x80 )
          {
            v90 = v107;
          }
          else
          {
            v11 = utf8_char;
            if ( isspace((unsigned __int8)utf8_char) )
            {
              if ( get_utf8_char(&v107) == -1 )
                ++v107;
              continue;
            }
            v90 = v107;
            if ( !v11 )
            {
              if ( v107 != *(char **)(a1 + 92) )
                sub_56E70(a1, a2, (unsigned int)v107, *(_DWORD *)(a1 + 96));
              return __readgsdword(0x14u);
            }
          }
          break;
        }
        v12 = a1;
        v13 = *(_DWORD *)(a1 + 48);
        if ( v13 )
        {
          v14 = (_DWORD *)(*(_DWORD *)(a1 + 44) + 4);
          v15 = 0;
          v82 = *(_DWORD *)(a1 + 48);
          while ( 1 )
          {
            if ( *v14 >= 2u )
            {
              v16 = strncmp(v90, (const char *)*(v14 - 1), *v14 - 1);
              v13 = v82;
              if ( !v16 )
                break;
            }
            ++v15;
            v14 += 6;
            if ( v15 >= v13 )
            {
              v17 = (char *)v90;
              v12 = a1;
              goto LABEL_30;
            }
          }
          sub_56E70(a1, a2, (unsigned int)v90, *(_DWORD *)(a1 + 96));
          v18 = *v14 - 1;
          if ( !*v14 )
            v18 = 0;
          v107 += v18;
          v77 = v15;
          v12 = a1;
          sub_57120((_DWORD *)a1, a2, v77, (const char **)&v107);
          v17 = v107;
        }
        else
        {
          v17 = (char *)v90;
        }
LABEL_30:
        v108 = (int)v17;
        if ( get_utf8_char((char **)&v108) == *(char *)(v12 + 105) )
        {
          v19 = *(char **)(v12 + 92);
          v20 = v107;
          if ( v19 == *(char **)a3 )
          {
LABEL_175:
            v19 = v20;
LABEL_176:
            sub_56E70(a1, a2, (unsigned int)v19, *(_DWORD *)(a1 + 96));
            v74 = v107;
            v107 = &v74[strlen(v107)];
            sub_56E70(a1, a2, (unsigned int)v107, *(_DWORD *)(a1 + 72));
            v75 = v106;
            if ( *(v107 - 1) == *(_BYTE *)(a1 + 104) )
            {
              (*(void (__cdecl **)(int, int))(*(_DWORD *)a2 + 20))(a2, 16);
              v75 = v105;
            }
            *v101 = *v75;
            continue;
          }
          if ( v19 == v107 )
            goto LABEL_176;
          while ( *v19 >= 0 && isspace((unsigned __int8)*v19) )
          {
            if ( v20 == ++v19 )
              goto LABEL_175;
          }
        }
        else
        {
          v20 = v107;
        }
        break;
      }
      v108 = (int)v20;
      v21 = get_utf8_char((char **)&v108);
      if ( v21 != *(char *)(a1 + 102) && v21 != *(char *)(a1 + 100) )
      {
        v24 = *(_DWORD *)(a1 + 36);
        v25 = v107;
        if ( v24 >= 2 && !strncmp(v107, *(const char **)(a1 + 32), v24 - 1) )
        {
          sub_56E70(a1, a2, (unsigned int)v25, *(_DWORD *)(a1 + 96));
          v43 = v107;
          v107 = &v43[strlen(v107)];
          sub_56E70(a1, a2, (unsigned int)v107, *(_DWORD *)(a1 + 64));
          *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 60);
          continue;
        }
        v83 = v25;
        v108 = (int)v25;
        v26 = get_utf8_char((char **)&v108);
        if ( v26 != 95 && (v26 & 0xFFFFFFDF) - 65 > 0x19 )
          goto LABEL_59;
        do
        {
          do
          {
            v27 = v108;
            v28 = get_utf8_char((char **)&v108);
          }
          while ( (unsigned int)(v28 - 48) < 0xA );
        }
        while ( v28 == 95 || (v28 & 0xFFFFFFDF) - 65 < 0x1A );
        v29 = v27 - (_DWORD)v83;
        if ( (char *)v27 == v83 )
        {
LABEL_59:
          v93 = 0;
          v92 = 1;
        }
        else
        {
          v108 = 0;
          v109 = 0;
          v110 = 0;
          v30 = v29 + 1;
          v93 = v29;
          v108 = (int)qvector_reserve((int)&v108, nullptr, v29 + 1, 1u);
          memset((void *)(v109 + v108), 0, v30 - v109);
          v109 = v30;
          *(_BYTE *)(v108 + v93) = 0;
          qstrncpy(v108, (int)v107, v30);
          v31 = a1;
          v32 = *(char **)(a1 + 96);
          v111[0] = v32;
          v33 = *(_DWORD *)(a1 + 80);
          v34 = v32;
          if ( (v33 & 0x3FFFFFFF) == 0 )
            goto LABEL_190;
          v35 = *(_DWORD **)(a1 + 76);
          v36 = 4 * v33 - 4;
          do
          {
            v37 = (*(int (__cdecl **)(_DWORD, char **, int *))(*(_DWORD *)*v35 + 12))(*v35, v111, &v108);
            ++v35;
            v38 = (v36 == 0) | v37;
            v36 -= 4;
          }
          while ( !v38 );
          v32 = *v101;
          v34 = v111[0];
          v31 = a1;
          if ( *v101 == v111[0] )
          {
LABEL_190:
            v94 = *(_DWORD *)(v31 + 24);
            if ( v94 )
            {
              v91 = *(_DWORD *)(v31 + 20);
              v102 = v32;
              v103 = v34;
              if ( v109 )
                v39 = (char *)v108;
              else
                v39 = byte_EF875;
              v85 = v39;
              v47 = 0;
              while ( 1 )
              {
                v88 = v47;
                v48 = *(const char ***)(v91 + 16 * v47);
                v79 = 16 * v47;
                v49 = *(_DWORD *)(v91 + 16 * v47 + 4);
                v50 = 4 * v49;
                v51 = v48;
                if ( 4 * v49 )
                {
                  v97 = v49;
                  v99 = v48;
                  v51 = v48;
                  while ( strcmp(v85, *v51) )
                  {
                    ++v51;
                    v50 -= 4;
                    if ( !v50 )
                      goto LABEL_82;
                  }
                  v48 = v99;
                  v49 = v97;
                }
                if ( v51 != &v48[v49] )
                  break;
LABEL_82:
                v47 = v88 + 1;
                if ( v88 + 1 >= v94 )
                {
                  v32 = v102;
                  v34 = v103;
                  goto LABEL_85;
                }
              }
              v34 = *(char **)(v91 + v79 + 12);
              v111[0] = v34;
              v32 = v102;
            }
          }
LABEL_85:
          v52 = v34;
          v53 = 0;
          if ( v32 != v52 )
          {
            sub_56E70(a1, a2, (unsigned int)v107, (int)v32);
            v107 += v93;
            v53 = 2;
            sub_56E70(a1, a2, (unsigned int)v107, (int)v111[0]);
          }
          if ( v108 )
          {
            v109 = 0;
            qfree((void *)v108);
            v108 = 0;
            v110 = 0;
          }
          if ( v53 )
            continue;
          v92 = 0;
        }
        v40 = v107;
        if ( !v107 )
          goto LABEL_141;
        v108 = (int)v107;
        v41 = get_utf8_char((char **)&v108);
        if ( !v41 )
          goto LABEL_141;
        v78 = v41;
        sub_2DCA0(&v108, v96, v104);
        if ( v109 )
          v42 = (char *)v108;
        else
          v42 = byte_EF875;
        v84 = v40;
        v87 = qustrlen(v42);
        v44 = v78;
        if ( (unsigned int)(v78 - 48) >= 0xA )
        {
          v45 = 0;
          switch ( v78 )
          {
            case '+':
            case '-':
              if ( v84 != v96 )
              {
                v111[0] = v84;
                prev_utf8_char(nullptr, v111, (unsigned int)v96);
                v46 = get_utf8_char(v111);
                v44 = v78;
                if ( v46 == 46 || (unsigned int)(v46 - 48) < 0xA || (v46 & 0xFFFFFFDF) - 65 < 0x1A )
                  goto LABEL_137;
              }
              break;
            case ',':
            case '/':
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
              goto LABEL_137;
            case '.':
            case 'E':
              break;
            default:
              if ( v78 == 101 )
                break;
              goto LABEL_137;
          }
        }
        v100 = v44 == 46;
        v111[0] = v84;
        skip_utf8(v111, 1);
        v54 = get_utf8_char(v111);
        v89 = v87 + 1;
        if ( v78 == 48 && (v54 | 0x20) == 0x78 )
        {
          v111[0] = v84;
          skip_utf8(v111, 2);
          v55 = get_utf8_char(v111);
          v95 = 0;
          v80 = 2;
          if ( v55 != 46 && (unsigned int)(v55 - 48) >= 0xA )
          {
            v45 = 0;
            if ( (v55 & 0xFFFFFFDF) - 65 > 0x19 )
              goto LABEL_137;
          }
        }
        else
        {
          v95 = 1;
          if ( (unsigned int)(v78 - 43) <= 0x1A && (v56 = 67108869, _bittest(&v56, v78 - 43)) || v78 == 101 )
          {
            v45 = 0;
            if ( v89 < 2 )
              goto LABEL_137;
            v111[0] = v84;
            skip_utf8(v111, 1);
            v57 = get_utf8_char(v111);
            v80 = 1;
            if ( v57 != 46 && (unsigned int)(v57 - 48) >= 0xA && (v57 & 0xFFFFFFDF) - 65 > 0x19 )
              goto LABEL_137;
          }
          else
          {
            v80 = 1;
          }
        }
        if ( v80 >= v89 )
        {
          v45 = v80;
          goto LABEL_137;
        }
        v98 = 0;
LABEL_109:
        v45 = v80;
        while ( 1 )
        {
          v111[0] = v84;
          if ( v45 <= 0 )
          {
            if ( v45 < 0 )
            {
              if ( !(_BYTE)under_debugger )
                interr(1834);
              goto LABEL_187;
            }
          }
          else
          {
            skip_utf8(v111, v45);
          }
          v58 = get_utf8_char(v111);
          if ( v58 != 46 && (unsigned int)(v58 - 48) >= 0xA && (v58 & 0xFFFFFFDF) - 65 > 0x19 )
            goto LABEL_137;
          v111[0] = v84;
          if ( v45 > 0 )
            skip_utf8(v111, v45);
          v59 = get_utf8_char(v111);
          if ( (unsigned __int8)v95 | ((unsigned int)(v59 - 48) < 0xA) )
          {
            if ( (unsigned int)(v59 - 48) > 9 )
              goto LABEL_124;
          }
          else if ( (v59 & 0xFFFFFFDF) - 65 >= 6 )
          {
LABEL_124:
            if ( v59 == 46 )
            {
              if ( v100 )
                goto LABEL_174;
              v100 = 1;
              v80 = v45 + 1;
              if ( v45 + 1 >= v89 )
              {
                ++v45;
                goto LABEL_137;
              }
              goto LABEL_109;
            }
            if ( !v98 && (v59 | 0x20) == 0x65 )
            {
              v111[0] = v84;
              if ( v45 + 1 > 0 )
              {
                v80 = v45 + 1;
                skip_utf8(v111, v45 + 1);
                v60 = get_utf8_char(v111);
                if ( v60 == 43 || v60 == 45 )
                  v80 = v45 + 2;
                v98 = 1;
                v45 = v80;
                if ( v80 >= v89 )
                  goto LABEL_137;
                goto LABEL_109;
              }
              if ( !(_BYTE)under_debugger )
                interr(1834);
LABEL_187:
              BUG();
            }
            if ( !v45 || v59 != 76 )
              goto LABEL_174;
            v81 = v45 + 1;
            if ( v45 + 1 >= v89 )
              goto LABEL_168;
            v111[0] = v84;
            if ( v81 <= 0 )
            {
              if ( !(_BYTE)under_debugger )
                interr(1834);
              goto LABEL_187;
            }
            skip_utf8(v111, v81);
            v71 = get_utf8_char(v111);
            if ( v71 != 46 && (unsigned int)(v71 - 48) >= 0xA && (v71 & 0xFFFFFFDF) - 65 >= 0x1A )
            {
LABEL_168:
              v72 = v45 - 1;
              v111[0] = v84;
              if ( v72 > 0 )
                skip_utf8(v111, v72);
              v73 = get_utf8_char(v111);
              if ( ((unsigned int)(v73 - 48) < 0xA) | (unsigned __int8)v95 )
              {
                v45 = v81;
                if ( (unsigned int)(v73 - 48) >= 0xA )
                  goto LABEL_174;
              }
              else
              {
                v45 = v81;
                if ( (v73 & 0xFFFFFFDF) - 65 >= 6 )
                  goto LABEL_174;
              }
            }
            else
            {
LABEL_174:
              v45 = 0;
            }
LABEL_137:
            if ( v108 )
            {
              v109 = 0;
              qfree((void *)v108);
              v108 = 0;
              v110 = 0;
            }
            if ( v45 )
            {
              sub_56E70(a1, a2, (unsigned int)v107, *(_DWORD *)(a1 + 96));
              skip_utf8(&v107, v45);
              sub_56E70(a1, a2, (unsigned int)v107, 7);
              goto LABEL_14;
            }
LABEL_141:
            v61 = *(_DWORD *)(a1 + 80);
            if ( (v61 & 0x3FFFFFFF) != 0 )
            {
              v62 = *(_DWORD **)(a1 + 76);
              v63 = 4 * v61;
              do
              {
                v64 = (*(int (__cdecl **)(_DWORD, int *, char *))(*(_DWORD *)*v62 + 8))(*v62, &v108, v107);
                if ( v64 > 0 )
                {
                  v86 = v64;
                  sub_56E70(a1, a2, (unsigned int)v107, *(_DWORD *)(a1 + 96));
                  skip_utf8(&v107, v86);
                  sub_56E70(a1, a2, (unsigned int)v107, v108);
                  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 60);
                }
                ++v62;
                v63 -= 4;
              }
              while ( v63 );
            }
            if ( v92 )
            {
              v108 = (int)v107;
              v65 = get_utf8_char((char **)&v108);
              if ( v65 == 46 || (unsigned int)(v65 - 48) < 0xA || (v65 & 0xFFFFFFDF) - 65 <= 0x19 )
              {
                while ( 1 )
                {
                  if ( get_utf8_char(&v107) == -1 )
                    v66 = ++v107;
                  else
                    v66 = v107;
                  v108 = (int)v66;
                  v67 = get_utf8_char((char **)&v108);
                  v68 = v67 & 0xFFFFFFDF;
                  v22 = v67 == 46;
                  v69 = v67 - 48;
                  if ( !v22 )
                  {
                    v70 = v68 - 65;
                    if ( v69 >= 0xA && v70 > 0x19 )
                      break;
                  }
                }
              }
            }
            else
            {
              v107 += v93;
            }
            if ( v90 == v107 && get_utf8_char(&v107) == -1 )
              ++v107;
            goto LABEL_14;
          }
          if ( ++v45 >= v89 )
            goto LABEL_137;
        }
      }
      break;
    }
    *(_BYTE *)(a1 + 56) = v21;
    sub_56E70(a1, a2, (unsigned int)v107, *(_DWORD *)(a1 + 96));
    v22 = get_utf8_char(&v107) == -1;
    v23 = v107;
    if ( v22 )
      v23 = ++v107;
    v107 = sub_57030(a1, a2, v23, *(_BYTE *)(a1 + 56));
    if ( v107 )
      continue;
    return __readgsdword(0x14u);
  }
}
// 57871: the cases 48, 49, 50, 51, 52, 53, 54, 55, 56, 57 were optimized away because %0x14.4 is in (1..2F|>=3Au)
// 13E34C: using guessed type int under_debugger;
