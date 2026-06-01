/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8097180
// Address: 0x08097180

//----- (08097180) --------------------------------------------------------
int __cdecl sub_8097180(int a1, int a2, int a3, _DWORD *a4)
{
  int j; // esi
  char *v5; // ebx
  bool v6; // zf
  int v7; // edx
  bool v8; // cl
  unsigned __int8 v9; // al
  _DWORD *v10; // edx
  char *v11; // ebp
  int v12; // esi
  char *v13; // eax
  char v14; // cl
  unsigned __int8 v15; // dl
  _BYTE *v16; // ebx
  char v17; // dl
  char *i; // eax
  int v19; // eax
  char *v21; // eax
  int v22; // edi
  char v23; // bl
  char v24; // al
  char *v25; // esi
  unsigned __int8 v26; // si
  char *v27; // edx
  int v28; // edi
  char v29; // bp
  unsigned int v30; // ebx
  char *v31; // ecx
  unsigned __int8 v32; // al
  int v33; // eax
  char *v34; // eax
  int v35; // eax
  char v36; // al
  int v37; // eax
  char *v38; // esi
  char v39; // di
  char *k; // ebx
  unsigned __int8 v41; // si
  char v42; // al
  int v43; // ebx
  unsigned int v44; // esi
  int v45; // eax
  char v46; // dl
  unsigned __int8 v47; // al
  char v48; // bp
  int v49; // ebx
  char v50; // al
  unsigned int v51; // edi
  int v52; // eax
  int v53; // eax
  int v54; // edi
  unsigned __int8 *v55; // eax
  unsigned __int8 v56; // al
  _BYTE *v57; // eax
  bool v58; // cc
  char *v59; // ecx
  char v60; // al
  int v61; // edi
  int v62; // edx
  int v63; // eax
  unsigned int v64; // ecx
  void *v65; // eax
  char v66; // al
  int v67; // edi
  unsigned int v68; // edx
  int v69; // ecx
  void *v70; // eax
  char v71; // al
  int v72; // eax
  int v73; // eax
  unsigned __int8 v74; // di
  unsigned __int8 *v75; // edi
  int v76; // eax
  bool v77; // cl
  char v78; // dl
  int v79; // eax
  __int16 v80; // ax
  int v81; // edx
  size_t v82; // edi
  unsigned int v83; // ebp
  unsigned __int8 v84; // al
  char v85; // al
  int v86; // eax
  int v87; // eax
  unsigned __int8 *v88; // edi
  char v89; // al
  char *v90; // [esp+14h] [ebp-48h]
  unsigned __int8 v91; // [esp+14h] [ebp-48h]
  char v92; // [esp+14h] [ebp-48h]
  int v93; // [esp+14h] [ebp-48h]
  char v94; // [esp+14h] [ebp-48h]
  unsigned __int8 v95; // [esp+14h] [ebp-48h]
  int v96; // [esp+14h] [ebp-48h]
  int v97; // [esp+18h] [ebp-44h]
  int v98; // [esp+18h] [ebp-44h]
  unsigned __int8 v99; // [esp+18h] [ebp-44h]
  char *v100; // [esp+18h] [ebp-44h]
  unsigned __int8 v101; // [esp+18h] [ebp-44h]
  unsigned __int64 v102; // [esp+18h] [ebp-44h]
  unsigned int v103; // [esp+18h] [ebp-44h]
  unsigned int v104; // [esp+18h] [ebp-44h]
  int c; // [esp+20h] [ebp-3Ch]
  bool ca; // [esp+20h] [ebp-3Ch]
  char cb; // [esp+20h] [ebp-3Ch]
  char cc; // [esp+20h] [ebp-3Ch]
  int ce; // [esp+20h] [ebp-3Ch]
  int cd; // [esp+20h] [ebp-3Ch]
  unsigned __int8 src; // [esp+24h] [ebp-38h]
  char srca; // [esp+24h] [ebp-38h]
  char *srcb; // [esp+24h] [ebp-38h]
  char srce; // [esp+24h] [ebp-38h]
  char *srcc; // [esp+24h] [ebp-38h]
  bool srcd; // [esp+24h] [ebp-38h]
  bool v117; // [esp+28h] [ebp-34h]
  char *v118; // [esp+28h] [ebp-34h]
  bool v119; // [esp+28h] [ebp-34h]
  int v120; // [esp+2Ch] [ebp-30h]
  char *v121; // [esp+38h] [ebp-24h]
  char v122; // [esp+3Eh] [ebp-1Eh]
  char v123; // [esp+3Fh] [ebp-1Dh]

  j = a1;
  v5 = *(char **)(a1 + 4);
  v6 = *(_BYTE *)(a1 + 76) == 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = v5;
  if ( v6 )
    goto LABEL_2;
  while ( 2 )
  {
    v17 = *v5;
    for ( i = v5 + 1; ; ++i )
    {
      if ( v17 != 42 )
      {
        if ( !v17 )
          goto LABEL_63;
        goto LABEL_26;
      }
      *(_DWORD *)(a1 + 4) = i;
      v17 = *i;
      if ( *i == 47 )
        break;
      if ( v17 == 41 )
      {
        if ( (*(_BYTE *)(a1 + 408) & 2) != 0 )
          goto LABEL_32;
LABEL_43:
        ++i;
LABEL_26:
        *(_DWORD *)(a1 + 4) = i;
        v17 = *i;
        continue;
      }
    }
    if ( (*(_BYTE *)(a1 + 408) & 1) == 0 )
      goto LABEL_43;
LABEL_32:
    v5 = i + 1;
    *(_BYTE *)(a1 + 76) = 0;
    for ( j = a1; ; *(_DWORD *)(j + 40) = v33 )
    {
      while ( 1 )
      {
        do
        {
          do
          {
LABEL_2:
            *(_DWORD *)(j + 4) = ++v5;
            v7 = *(v5 - 1);
          }
          while ( (_BYTE)v7 == 9 || (_BYTE)v7 == 32 );
        }
        while ( (unsigned __int8)(v7 - 10) <= 3u );
        v8 = (_BYTE)v7 == 9 || (_BYTE)v7 == 32;
        if ( a4 )
          *a4 = *(_DWORD *)(j + 156);
        if ( !(_BYTE)v7 )
          goto LABEL_63;
        if ( (_BYTE)v7 != 47 )
          break;
        v11 = *(char **)(j + 4);
        if ( *v11 != 47 )
        {
          v97 = 47;
          v90 = v11 - 1;
          c = 47;
          goto LABEL_17;
        }
        if ( (*(_BYTE *)(j + 408) & 4) == 0 )
        {
          ca = (_BYTE)v7 == 9 || (_BYTE)v7 == 32;
          v90 = v11 - 1;
          *(_DWORD *)(j + 12) = v11 - 1;
          if ( !isalpha(47) )
          {
            v8 = ca;
            LOBYTE(v7) = 47;
            v12 = 47;
            c = 47;
            goto LABEL_47;
          }
          goto LABEL_37;
        }
LABEL_63:
        if ( a3 == *(_DWORD *)(a1 + 32) )
        {
          v72 = *(_DWORD *)(a1 + 4);
          if ( !*(_BYTE *)(v72 - 1) )
            *(_DWORD *)(a1 + 4) = v72 - 1;
          *(_WORD *)(a2 + 12) = 1;
          return 0;
        }
        sub_80925F0((_DWORD *)a1);
        v5 = *(char **)(a1 + 4);
        j = a1;
      }
      if ( (_BYTE)v7 == 59 )
      {
        if ( (*(_BYTE *)(j + 408) & 8) == 0 )
        {
          v11 = *(char **)(j + 4);
          v97 = 59;
          c = 59;
          v90 = v11 - 1;
LABEL_17:
          v117 = (_BYTE)v7 == 9 || (_BYTE)v7 == 32;
          src = v7;
          *(_DWORD *)(j + 12) = v90;
          if ( !isalpha((char)v7) )
          {
            v12 = v97;
            v13 = strchr((const char *)&qword_811CFF4 - 249928, c);
            v14 = v117;
            v15 = src;
            if ( v13 )
            {
              *(_WORD *)(a2 + 12) = src;
              goto LABEL_20;
            }
            goto LABEL_65;
          }
          goto LABEL_37;
        }
        goto LABEL_63;
      }
      v9 = v7 + 0x80;
      if ( (unsigned __int8)(v7 + 0x80) > 0x7Eu )
        break;
      if ( !*(_DWORD *)(j + 32) )
      {
        sub_80C78C0(0, v7);
        return sub_80C7880(27);
      }
      v10 = (_DWORD *)(*(_DWORD *)(j + 28) + 28 * *(_DWORD *)(j + 40));
      if ( (unsigned int)v9 >= v10[1] )
        goto LABEL_14;
      v5 = *(char **)(*v10 + 12 * v9);
      if ( !v5 || !*v5 )
        goto LABEL_14;
      sub_8092550((int *)j, 0, nullptr);
      v33 = *(_DWORD *)(*(_DWORD *)(j + 28) + 28 * *(_DWORD *)(j + 40) + 24);
      *(_DWORD *)j = v5;
    }
    v11 = *(char **)(j + 4);
    v90 = v11 - 1;
    *(_DWORD *)(j + 12) = v11 - 1;
    v98 = (char)v7;
    if ( (unsigned int)(char)v7 <= 0x7F )
    {
      srcd = (_BYTE)v7 == 9 || (_BYTE)v7 == 32;
      cc = v7;
      v53 = isalpha((char)v7);
      LOBYTE(v7) = cc;
      if ( !v53 )
      {
        v8 = srcd;
        goto LABEL_35;
      }
      if ( cc != 76 )
      {
LABEL_37:
        v19 = sub_8096D80((int *)j, 0, a2);
        if ( !v19 )
          return 0;
        if ( v19 != 1 )
          return sub_80C7850();
LABEL_14:
        v5 = *(char **)(j + 4);
        goto LABEL_2;
      }
      if ( *v11 != 34 )
      {
        if ( *v11 != 39 )
          goto LABEL_37;
        *(_DWORD *)(a1 + 4) = v11 + 1;
        *(_BYTE *)(a2 + 20) = 1;
LABEL_137:
        v54 = 0;
        *(_WORD *)(a2 + 12) = 5;
        *(_DWORD *)(a2 + 16) = 0;
        while ( 1 )
        {
          v55 = *(unsigned __int8 **)(a1 + 4);
          if ( *v55 == 39 )
            break;
          if ( !*v55 )
            return sub_80C7880(26);
          *(_DWORD *)(a1 + 4) = v55 + 1;
          v56 = *v55;
          if ( v56 == 92 )
            v56 = sub_80C3D70((unsigned __int8 **)(a1 + 4));
          ++v54;
          *(_DWORD *)(a2 + 16) = (*(_DWORD *)(a2 + 16) << 8) | v56;
          if ( v54 == 4 )
          {
            v57 = *(_BYTE **)(a1 + 4);
            if ( *v57 == 39 )
            {
              *(_DWORD *)(a1 + 4) = v57 + 1;
              return 0;
            }
            return sub_80C7880(26);
          }
        }
        if ( !v54 )
          return sub_80C7880(26);
        ++*(_DWORD *)(a1 + 4);
        if ( v54 == 1 )
        {
          *(_DWORD *)(a2 + 16) = *(char *)(a2 + 16);
          return 0;
        }
        return 0;
      }
      v14 = 1;
      *(_DWORD *)(a1 + 4) = v11 + 1;
      goto LABEL_146;
    }
    v98 = -1;
LABEL_35:
    if ( (_BYTE)v7 == 95 || (_BYTE)v7 == 36 )
      goto LABEL_37;
    v12 = v98;
    c = (unsigned __int8)v7;
LABEL_47:
    srca = v8;
    v99 = v7;
    v21 = strchr((const char *)&qword_811CFF4 - 249928, c);
    v15 = v99;
    v14 = srca;
    if ( v21 )
    {
      *(_WORD *)(a2 + 12) = v99;
      if ( v99 == 46 )
      {
        v11 = *(char **)(a1 + 4);
        v22 = *(int *)((char *)&off_811D0B4 + a1 - 135385076);
        v23 = *v11;
        if ( (v22 & 1) == 0 )
          goto LABEL_128;
        if ( (unsigned int)v23 <= 0x7F )
        {
          if ( (unsigned int)(v23 - 48) <= 9 )
          {
            v90 = v11 - 1;
            if ( *(_DWORD *)a1 >= (unsigned int)(v11 - 1)
              || (v24 = sub_80924F0((unsigned __int8)*(v11 - 2)), v15 = v99, v14 = srca, !v24) )
            {
              v25 = v11 - 1;
              LOBYTE(v120) = v22;
              srcb = v11 - 1;
              goto LABEL_55;
            }
          }
LABEL_128:
          if ( v23 == 46 && v11[1] == 46 )
          {
            *(_DWORD *)(a1 + 4) = v11 + 2;
            *(_WORD *)(a2 + 12) = 11868;
            return 0;
          }
        }
        return 0;
      }
LABEL_20:
      if ( v15 != 40 )
        return 0;
      v16 = *(_BYTE **)(a1 + 4);
      if ( *v16 != 42 || (*((_BYTE *)&off_811D18C + a1 - 135385076) & 2) == 0 )
        return 0;
LABEL_23:
      v5 = v16 + 1;
      *(_BYTE *)(a1 + 76) = 1;
      *(_DWORD *)(a1 + 4) = v5;
      *(_DWORD *)(a1 + 8) = v5;
      *(_DWORD *)(a1 + 12) = 0;
      continue;
    }
    break;
  }
LABEL_65:
  srce = v14;
  v101 = v15;
  v34 = strchr((const char *)&qword_811CFF4 - 249912, c);
  v15 = v101;
  v14 = srce;
  if ( v34 )
  {
    *(_WORD *)(a2 + 12) = v101;
    v16 = *(_BYTE **)(a1 + 4);
    v35 = (char)*v16;
    if ( (_BYTE)v35 == 61 )
    {
      *(_WORD *)(a2 + 12) = (v101 << 8) + 61;
      ++*(_DWORD *)(a1 + 4);
      return 0;
    }
    if ( (char)v101 > 62 )
    {
      if ( v101 == 124 && c == v35 )
      {
        *(_WORD *)(a2 + 12) = 257 * v101;
        ++*(_DWORD *)(a1 + 4);
        return 0;
      }
      return 0;
    }
    if ( (char)v101 <= 37 )
      return 0;
    if ( ((1 << (v101 - 38)) & 0x15000A1) != 0 )
    {
      if ( c == (char)v35 )
      {
        *(_WORD *)(a2 + 12) = 257 * v101;
        v37 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)(a1 + 4) = v37 + 1;
        if ( (v101 & 0xFD) == 0x3C && *(_BYTE *)(v37 + 1) == 61 )
        {
          *(_WORD *)(a2 + 12) += 61;
          ++*(_DWORD *)(a1 + 4);
          return 0;
        }
      }
      else if ( v101 == 45 && (_BYTE)v35 == 62 )
      {
        *(_WORD *)(a2 + 12) = 11582;
        ++*(_DWORD *)(a1 + 4);
        return 0;
      }
      return 0;
    }
    if ( v101 != 47 || (_BYTE)v35 != 42 || (*((_BYTE *)&off_811D18C + a1 - 135385076) & 1) == 0 )
      return 0;
    goto LABEL_23;
  }
  if ( (unsigned int)(v12 - 48) > 9 )
  {
    if ( v101 != 34 )
    {
      if ( v101 != 39 )
      {
        if ( v101 == 35 && (v73 = *v11, (char)v73 < -1) )
        {
          if ( *(_DWORD *)(a1 + 32) )
          {
            *(_DWORD *)(a1 + 4) = v11 + 1;
            v74 = *v11 + 0x80;
            v58 = *(_DWORD *)(a2 + 8) <= 0x3FFu;
            *(_WORD *)(a2 + 12) = 4;
            *(_BYTE *)(a2 + 20) = 0;
            *(_DWORD *)(a2 + 4) = 0;
            if ( v58 )
              *(_DWORD *)a2 = sub_80CF920(a2, *(void **)a2, 0x400u, 1u);
            sub_80928A0(a1, (char ***)a2, v74, *(_DWORD *)(a1 + 40));
            return 0;
          }
          sub_80C78C0(0, v73);
        }
        else
        {
          sub_80C78C0(0, v12);
        }
        return sub_80C7880(27);
      }
      goto LABEL_137;
    }
LABEL_146:
    v58 = *(_DWORD *)(a2 + 8) <= 0x3FFu;
    *(_BYTE *)(a2 + 20) = v14;
    *(_WORD *)(a2 + 12) = 4;
    *(_DWORD *)(a2 + 4) = 0;
    if ( v58 )
      *(_DWORD *)a2 = sub_80CF920(a2, *(void **)a2, 0x400u, 1u);
    v59 = *(char **)(a1 + 4);
    v60 = *v59;
    if ( *v59 == 34 )
      goto LABEL_170;
    v61 = *(_DWORD *)(a1 + 4);
    while ( 1 )
    {
      if ( !v60 )
        return sub_80C7880(24);
      if ( v60 == 92 )
      {
        if ( (*(_BYTE *)(a1 + 192) & 0x10) != 0 )
        {
          if ( !*(_BYTE *)(v61 + 1) )
            return sub_80C7880(24);
          v62 = *(_DWORD *)(a2 + 4);
          if ( v62 )
          {
            v63 = v62 + 1;
            v64 = v62 + 2;
            --v62;
            v93 = v63;
          }
          else
          {
            v93 = 2;
            v64 = 3;
          }
          v65 = *(void **)a2;
          if ( *(_DWORD *)(a2 + 8) < v64 )
          {
            cd = v62;
            v104 = v64;
            v65 = sub_80CF920(a2, v65, v64, 1u);
            v62 = cd;
            v64 = v104;
            *(_DWORD *)a2 = v65;
          }
          *(_DWORD *)(a2 + 4) = v64;
          *((_BYTE *)v65 + v93) = 0;
          *(_WORD *)(*(_DWORD *)a2 + v62) = *(_WORD *)v61;
          v61 = *(_DWORD *)(a1 + 4) + 2;
          *(_DWORD *)(a1 + 4) = v61;
          goto LABEL_157;
        }
        *(_DWORD *)(a1 + 4) = v61 + 1;
        v71 = sub_80C3D70((unsigned __int8 **)(a1 + 4));
        v67 = *(_DWORD *)(a2 + 4);
        v94 = v71;
        if ( !v67 )
        {
LABEL_166:
          v69 = 1;
          v68 = 2;
          goto LABEL_162;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 4) = v61 + 1;
        v66 = *(_BYTE *)v61;
        v67 = *(_DWORD *)(a2 + 4);
        v94 = v66;
        if ( !v67 )
          goto LABEL_166;
      }
      v68 = v67 + 1;
      v69 = v67--;
LABEL_162:
      v70 = *(void **)a2;
      if ( *(_DWORD *)(a2 + 8) < v68 )
      {
        ce = v69;
        v103 = v68;
        v70 = sub_80CF920(a2, v70, v68, 1u);
        v69 = ce;
        v68 = v103;
        *(_DWORD *)a2 = v70;
      }
      *(_DWORD *)(a2 + 4) = v68;
      *((_BYTE *)v70 + v67) = v94;
      *(_BYTE *)(*(_DWORD *)a2 + v69) = 0;
      v61 = *(_DWORD *)(a1 + 4);
LABEL_157:
      v60 = *(_BYTE *)v61;
      if ( *(_BYTE *)v61 == 34 )
      {
        v59 = (char *)v61;
LABEL_170:
        *(_DWORD *)(a1 + 4) = v59 + 1;
        return 0;
      }
    }
  }
  srcb = v90;
  v120 = *(int *)((char *)&off_811D0B4 + a1 - 135385076);
  if ( (v120 & 1) == 0 )
    goto LABEL_99;
  v25 = v90;
LABEL_55:
  v100 = v25;
  v26 = v15;
  v27 = srcb;
  v28 = 0;
  v118 = v11;
  v29 = v14;
  while ( 1 )
  {
    v30 = *v27;
    v31 = v27 + 1;
    v32 = *v27;
    if ( v30 <= 0x7F )
    {
      if ( v30 - 48 <= 9 )
        goto LABEL_61;
      if ( v32 == 46 )
      {
        if ( v28 )
          goto LABEL_120;
        v28 = 1;
LABEL_61:
        v27 = v31;
        continue;
      }
    }
    v121 = v27;
    srcc = v27 + 1;
    v36 = toupper(v32);
    if ( v36 != 69 )
      break;
    if ( (v28 & 2) != 0 )
    {
LABEL_120:
      v38 = v100;
      goto LABEL_94;
    }
    v28 |= 2u;
    v31 = srcc;
    if ( ((v121[1] - 43) & 0xFD) != 0 )
      goto LABEL_61;
    v27 = v121 + 2;
  }
  v14 = v29;
  v15 = v26;
  v11 = v118;
  v38 = v100;
  if ( v28 )
  {
    if ( v36 != 76 && v36 != 70
      || (v39 = v121[1], (unsigned int)v39 > 0x7F)
      || !isalnum(v121[1]) && v39 != 95 && v39 != 36 && v39 != 46 )
    {
      *(_DWORD *)(a1 + 4) = v90;
      if ( sub_80C98C0((char **)(a1 + 4), (_OWORD *)(a2 + 24)) != 1 )
        return sub_80C7880(22);
      *(_WORD *)(a2 + 12) = 7;
      v88 = *(unsigned __int8 **)(a1 + 4);
      v95 = *v88;
      v89 = toupper(*v88);
      if ( v89 == 70 || v89 == 76 )
      {
        *(_DWORD *)(a1 + 4) = v88 + 1;
        v95 = v88[1];
      }
LABEL_200:
      if ( (*((_BYTE *)&off_811D0B4 + a1 - 135385076) & 2) != 0 )
      {
        if ( (unsigned __int8)sub_80924F0(v95) )
          return sub_80C7880(23);
        if ( (unsigned __int8)(v95 - 34) <= 0xCu )
        {
          v81 = 4129;
          if ( _bittest(&v81, v95 - 34) )
            return sub_80C7880(23);
        }
      }
      *(_DWORD *)(a1 + 20) = 0;
      v96 = *(_DWORD *)(a1 + 4);
      v82 = v96 - (_DWORD)v38;
      v83 = v96 - (_DWORD)v38 + 1;
      if ( *(_DWORD *)(a1 + 24) < v83 )
        *(_DWORD *)(a1 + 16) = sub_80CF920(a1 + 16, *(void **)(a1 + 16), v96 - (_DWORD)v38 + 1, 1u);
      *(_DWORD *)(a1 + 20) = v83;
      *(_BYTE *)(*(_DWORD *)(a1 + 16) + v82) = 0;
      memmove(*(void **)(a1 + 16), v38, v82);
      return 0;
    }
LABEL_94:
    for ( k = v90; ; v38 = k )
    {
      ++k;
      *(_DWORD *)(a1 + 4) = v38;
      v41 = *(k - 1);
      v42 = sub_80924F0(v41);
      if ( v41 != 46 && !v42 )
        break;
    }
    return sub_80C7880(21);
  }
  srcb = v90;
LABEL_99:
  v102 = c - 48;
  if ( v15 != 48 )
  {
    v43 = 10;
    goto LABEL_101;
  }
  v50 = *v11;
  if ( *v11 == 98 )
    goto LABEL_220;
  if ( v50 <= 98 )
  {
    if ( v50 != 66 )
    {
      if ( v50 != 88 )
        goto LABEL_114;
LABEL_117:
      v92 = v14;
      *(_DWORD *)(a1 + 4) = v11 + 1;
      v51 = v11[1];
      if ( v51 > 0x7F || (v52 = isxdigit(v11[1]), v14 = v92, !v52) )
      {
        sub_80C78C0(0, v51);
        ++*(_DWORD *)(a1 + 4);
        return sub_80C7880(20);
      }
      ++v11;
      v43 = 16;
      goto LABEL_101;
    }
LABEL_220:
    *(_DWORD *)(a1 + 4) = v11 + 1;
    v87 = v11[1];
    if ( (unsigned __int8)(v87 - 48) > 1u )
    {
      sub_80C78C0(0, v87);
      return sub_80C7880(20);
    }
    ++v11;
    v43 = 2;
    goto LABEL_101;
  }
  if ( v50 == 120 )
    goto LABEL_117;
LABEL_114:
  v43 = 8;
LABEL_101:
  v122 = v14;
  while ( 2 )
  {
    v91 = *v11;
    v123 = *v11;
    v44 = *v11;
    if ( v44 > 0x7F || (v45 = isxdigit(v123), v46 = v123, !v45) )
    {
      cb = 1;
      v47 = v91;
      v119 = v43 != 10;
      v48 = 0;
      while ( 1 )
      {
        while ( (v47 & 0xDF) == 0x55 )
        {
          v86 = *(_DWORD *)(a1 + 4);
          cb = 0;
          v119 = 1;
          *(_DWORD *)(a1 + 4) = v86 + 1;
          v47 = *(_BYTE *)(v86 + 1);
        }
        if ( (v47 & 0xDF) != 0x4C )
          break;
        if ( v48 )
          return sub_80C7880(23);
        v49 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)(a1 + 4) = v49 + 1;
        v47 = *(_BYTE *)(v49 + 1);
        if ( (v47 & 0xDF) == 0x4C )
        {
          v48 = 1;
          *(_DWORD *)(a1 + 4) = v49 + 2;
          v47 = *(_BYTE *)(v49 + 2);
        }
      }
      v95 = v47;
      v75 = *(unsigned __int8 **)(a1 + 4);
      v76 = tolower(*v75);
      v77 = v122;
      if ( v76 == 105 )
      {
        v84 = v75[1];
        if ( v84 == 51 )
        {
          if ( v75[2] != 50 )
            goto LABEL_191;
          v85 = 1;
        }
        else
        {
          if ( v84 != 54 )
            goto LABEL_191;
          v85 = 0;
          if ( v75[2] != 52 )
            goto LABEL_191;
        }
        v48 = v85 ^ 1;
        *(_DWORD *)(a1 + 4) = v75 + 3;
        v95 = v75[3];
      }
LABEL_191:
      if ( (v120 & 8) != 0 )
      {
        if ( v48 )
          goto LABEL_210;
        v78 = cb & (v102 <= 0x7FFFFFFF);
        if ( v78 )
        {
          v78 = 0;
          v79 = -1;
          goto LABEL_196;
        }
        if ( HIDWORD(v102) || (v79 = 1, !v119) )
        {
LABEL_210:
          v79 = -1;
          v78 = cb & ((v102 & 0x8000000000000000LL) == 0LL);
          if ( !v78 )
          {
            v79 = v119;
            v78 = 1;
          }
        }
LABEL_196:
        v48 = v78;
        v77 = v79 != -1;
LABEL_197:
        *(_BYTE *)(a2 + 20) = v77;
        if ( !v48 )
        {
          *(_DWORD *)(a2 + 16) = v102;
          v80 = 3;
LABEL_199:
          v38 = srcb;
          *(_WORD *)(a2 + 12) = v80;
          goto LABEL_200;
        }
      }
      else
      {
        if ( !HIDWORD(v102) )
          goto LABEL_197;
        *(_BYTE *)(a2 + 20) = 0;
      }
      *(_QWORD *)(a2 + 24) = v102;
      v80 = 8;
      goto LABEL_199;
    }
    *(_DWORD *)(a1 + 4) = ++v11;
    if ( ((unsigned __int8)v123 <= 0x39u || v43 != 10)
      && ((unsigned __int8)v123 <= 0x37u || v43 != 8)
      && ((unsigned __int8)v123 <= 0x31u || v43 != 2) )
    {
      if ( (unsigned __int8)v123 > 0x39u )
      {
        if ( (unsigned __int8)v123 > 0x60u )
          v46 = v123 - 32;
        v91 = v46 - 7;
      }
      v102 = v43 * v102 + v91 - 48;
      continue;
    }
    break;
  }
  sub_80C78C0(0, v44);
  return sub_80C7880(20);
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811D0B4: using guessed type _UNKNOWN *off_811D0B4;
// 811D18C: using guessed type _UNKNOWN *off_811D18C;
