/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6EB10
// Address: 0x0006EB10

//----- (0006EB10) --------------------------------------------------------
int __cdecl sub_6EB10(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // ebx
  char v5; // cl
  char **v6; // edi
  char *v7; // eax
  char *v8; // ecx
  char *v9; // ecx
  char v10; // al
  char v11; // dl
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // edx
  char *v16; // eax
  int i; // ecx
  char v18; // al
  int v19; // edx
  char *v20; // esi
  int v21; // edi
  int v22; // edx
  _DWORD *v23; // ecx
  int v24; // ebx
  bool v25; // zf
  int v26; // eax
  int v27; // esi
  _BYTE *v28; // esi
  int v29; // ecx
  int v30; // esi
  int v31; // ecx
  char *v32; // eax
  int v33; // ecx
  int v34; // esi
  char *v36; // eax
  char v37; // cl
  unsigned __int8 v38; // al
  char *v39; // eax
  char v40; // cl
  char v41; // al
  void *v42; // eax
  int v43; // ebx
  char *v44; // esi
  char v45; // al
  void *v46; // eax
  int v47; // esi
  int v48; // ecx
  char *v49; // eax
  char v50; // al
  void *v51; // eax
  int v52; // ecx
  int v53; // esi
  int v54; // ecx
  void *v55; // eax
  int v56; // ecx
  int v57; // ebx
  int v58; // ecx
  unsigned __int8 v59; // al
  char *v60; // eax
  char v61; // cl
  unsigned __int8 v62; // al
  char v63; // cl
  unsigned __int8 v64; // al
  char *v65; // eax
  int v66; // esi
  int v67; // edx
  int v68; // eax
  unsigned __int8 *v69; // eax
  int v70; // edx
  unsigned __int8 *v71; // esi
  char v72; // al
  int v73; // edx
  char *v74; // eax
  int v75; // ecx
  char *v76; // eax
  char *v77; // eax
  int v78; // ebx
  char *v79; // esi
  char *v80; // ecx
  int v81; // eax
  int v82; // eax
  int v83; // ecx
  char v84; // al
  unsigned __int8 v85; // si
  int v86; // eax
  char *j; // esi
  char v88; // al
  int v89; // esi
  int v90; // eax
  char *v91; // esi
  void *v92; // eax
  char *v93; // esi
  unsigned int v94; // esi
  unsigned __int8 v95; // cl
  char v96; // dl
  char *v97; // esi
  char v98; // dl
  char v99; // al
  int v100; // esi
  char *v101; // esi
  int v102; // eax
  char v103; // cl
  int v104; // ecx
  int v105; // edx
  int v106; // esi
  char v107; // al
  char v108; // cl
  int v109; // ecx
  void **v110; // eax
  size_t v111; // esi
  _BYTE *v112; // eax
  char v113; // si
  int v114; // eax
  unsigned __int8 v115; // al
  char v116; // dl
  int v117; // ecx
  unsigned __int8 v118; // cf
  int v119; // [esp+4h] [ebp-48h]
  int v120; // [esp+10h] [ebp-3Ch]
  int v121; // [esp+10h] [ebp-3Ch]
  _DWORD *v122; // [esp+10h] [ebp-3Ch]
  char v123; // [esp+10h] [ebp-3Ch]
  char v124; // [esp+10h] [ebp-3Ch]
  char v125; // [esp+10h] [ebp-3Ch]
  unsigned __int8 v126; // [esp+10h] [ebp-3Ch]
  unsigned __int8 v127; // [esp+10h] [ebp-3Ch]
  unsigned __int8 v128; // [esp+10h] [ebp-3Ch]
  int v129; // [esp+18h] [ebp-34h]
  int v130; // [esp+18h] [ebp-34h]
  int v131; // [esp+18h] [ebp-34h]
  int v132; // [esp+18h] [ebp-34h]
  unsigned __int64 v133; // [esp+18h] [ebp-34h]
  char *v134; // [esp+1Ch] [ebp-30h]
  char v135; // [esp+20h] [ebp-2Ch]
  char *v136; // [esp+20h] [ebp-2Ch]
  char v137; // [esp+20h] [ebp-2Ch]
  char v138; // [esp+24h] [ebp-28h]
  int v139; // [esp+24h] [ebp-28h]
  bool v140; // [esp+24h] [ebp-28h]
  unsigned __int8 *v141; // [esp+28h] [ebp-24h]
  unsigned __int8 *v142; // [esp+28h] [ebp-24h]
  _DWORD *v143; // [esp+2Ch] [ebp-20h]
  char v144; // [esp+30h] [ebp-1Ch]
  _DWORD *v145; // [esp+34h] [ebp-18h]
  int v146; // [esp+38h] [ebp-14h]

  v4 = a1;
  v5 = *(_BYTE *)(a1 + 68);
  v6 = (char **)(a1 + 4);
  v7 = *(char **)(a1 + 4);
  v143 = (_DWORD *)(a1 + 4);
  while ( 1 )
  {
    *(_DWORD *)(v4 + 8) = v7;
    *(_DWORD *)(v4 + 12) = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = v7;
          v10 = *v7;
          if ( v10 != 42 )
            break;
          v7 = v9 + 1;
          *v6 = v9 + 1;
          v11 = v9[1];
          if ( v11 == 41 )
          {
            if ( (*(_BYTE *)(v4 + 276) & 2) != 0 )
              goto LABEL_14;
          }
          else if ( v11 == 47 && (*(_BYTE *)(v4 + 276) & 1) != 0 )
          {
LABEL_14:
            *(_DWORD *)(v4 + 4) = v9 + 2;
            *(_BYTE *)(v4 + 68) = 0;
            goto LABEL_20;
          }
        }
        if ( !v10 )
          break;
        v8 = v9 + 1;
        *v6 = v8;
        v7 = v8;
      }
LABEL_15:
      v12 = *(_DWORD *)(v4 + 32);
      if ( v12 == a3 )
      {
        if ( !*(*v6 - 1) )
          --*v6;
        *(_WORD *)(a2 + 12) = 1;
        return 0;
      }
      v13 = *(_DWORD *)(v4 + 28);
      v120 = v12 - 1;
      v129 = 27 * (v12 - 1);
      v14 = v12 + v129 - 1;
      *(_DWORD *)a1 = *(_DWORD *)(v13 + v14 + 12);
      *(_DWORD *)(a1 + 4) = *(_DWORD *)(v13 + v14 + 16);
      v4 = a1;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(v13 + v14 + 24);
      if ( v12 )
      {
        *(_DWORD *)(a1 + 32) = v120;
        sub_1BC40((char **)(v120 + v129 + v13));
        v4 = a1;
      }
    }
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_20:
        for ( i = (int)(*v6 + 1); ; ++i )
        {
          *v6 = (char *)i;
          v18 = *(_BYTE *)(i - 1);
          if ( (unsigned __int8)(v18 - 9) >= 5u && v18 != 32 )
            break;
        }
        v19 = (unsigned __int8)v18;
        if ( a4 )
          *a4 = *(_DWORD *)(v4 + 148);
        switch ( v18 )
        {
          case 0:
            goto LABEL_15;
          case 47:
            v20 = *v6;
            if ( **v6 == 47 && (*(_BYTE *)(v4 + 276) & 4) != 0 )
              goto LABEL_15;
            goto LABEL_34;
          case 59:
            if ( (*(_BYTE *)(v4 + 276) & 8) != 0 )
              goto LABEL_15;
            v20 = *v6;
LABEL_34:
            v121 = v18;
            *(_DWORD *)(v4 + 12) = v20 - 1;
            goto LABEL_35;
        }
        if ( v18 > -2 )
          break;
        v130 = *(_DWORD *)(v4 + 32);
        if ( !v130 )
        {
          set_error_data(0, v18);
          return set_qerrno(27);
        }
        v27 = *(_DWORD *)(v4 + 40);
        v122 = *(_DWORD **)(v4 + 28);
        if ( v122[7 * v27 + 1] > ((unsigned __int8)v18 ^ 0x80u) )
        {
          v28 = *(_BYTE **)(v122[7 * v27] + 12 * ((unsigned __int8)v18 ^ 0x80));
          if ( v28 )
          {
            if ( *v28 )
            {
              v29 = *(_DWORD *)(v4 + 32);
              if ( *(_DWORD *)(v4 + 36) >= (unsigned int)(v130 + 1) )
              {
                v16 = *(char **)(v4 + 28);
              }
              else
              {
                v16 = (char *)qvector_reserve(a1 + 28, v122, v130 + 1, 0x1Cu);
                v4 = a1;
                *(_DWORD *)(a1 + 28) = v16;
                v29 = *(_DWORD *)(a1 + 32);
              }
              v15 = 28 * v29;
              *(_DWORD *)&v16[v15] = 0;
              *(_DWORD *)&v16[v15 + 4] = 0;
              *(_DWORD *)&v16[v15 + 8] = 0;
              ++*(_DWORD *)(v4 + 32);
              *(_DWORD *)&v16[v15 + 12] = *(_DWORD *)v4;
              *(_DWORD *)&v16[v15 + 16] = *(_DWORD *)(v4 + 4);
              *(_DWORD *)&v16[v15 + 24] = *(_DWORD *)(v4 + 40);
              *(_DWORD *)&v16[v15 + 20] = 0;
              *(_DWORD *)(v4 + 40) = *(_DWORD *)(*(_DWORD *)(v4 + 28) + 28 * *(_DWORD *)(v4 + 40) + 24);
              *(_DWORD *)(v4 + 4) = v28;
              *(_DWORD *)v4 = v28;
            }
          }
        }
      }
      v121 = v18;
      v20 = *(char **)(v4 + 4);
      *(_DWORD *)(v4 + 12) = v20 - 1;
      if ( v18 < 0 )
      {
        v138 = 0;
        goto LABEL_54;
      }
LABEL_35:
      v21 = (unsigned __int8)v18;
      if ( !isalpha((unsigned __int8)v18) )
        break;
      v22 = a2;
      v23 = (_DWORD *)a1;
      v6 = (char **)(a1 + 4);
      if ( (_BYTE)v121 != 76 )
        goto LABEL_42;
      if ( *v20 == 39 )
      {
        *v143 = v20 + 1;
        *(_BYTE *)(a2 + 20) = 1;
        goto LABEL_71;
      }
      if ( *v20 == 34 )
      {
        *v143 = v20 + 1;
        v41 = 1;
        goto LABEL_78;
      }
LABEL_42:
      v26 = sub_6E940(v23, 0, v22);
      v4 = a1;
      if ( v26 != 1 )
      {
        if ( v26 != -1 )
          return 0;
        return get_qerrno();
      }
    }
    v24 = v21;
    v25 = (_BYTE)v21 == 36;
    v22 = a2;
    v23 = (_DWORD *)a1;
    v6 = (char **)(a1 + 4);
    if ( v25 || (_BYTE)v24 == 95 )
      goto LABEL_42;
    v138 = 1;
    v19 = v24;
LABEL_54:
    v30 = v19;
    v131 = v19;
    if ( !__strchr_chk(&qword_13ACD8 - 35699, v19, 15) )
      break;
    v31 = a2;
    *(_WORD *)(a2 + 12) = v30;
    if ( (_BYTE)v121 != 40 )
    {
      if ( (_BYTE)v121 != 46 )
        return 0;
      v65 = *(char **)(a1 + 4);
      v66 = (unsigned __int8)*v65;
      if ( ((unsigned __int8)*(_UNKNOWN **)((char *)&off_13AD90 + a1 - 1289432) & 1) != 0 )
      {
        v146 = *(int *)((char *)&off_13AD90 + a1 - 1289432);
        if ( (v66 & 0x80u) != 0 )
          return 0;
        v134 = *(char **)(a1 + 4);
        if ( (unsigned int)(v66 - 48) <= 9 )
        {
          v145 = (_UNKNOWN **)((char *)&off_13AD90 + a1 - 1289432);
          v141 = (unsigned __int8 *)(v65 - 1);
          if ( (unsigned int)(v65 - 1) <= *(_DWORD *)a1
            || ((v67 = (unsigned __int8)*(v65 - 2), LOBYTE(v66) = *v65, (v67 & 0x80u) != 0)
             || (v135 = *(v65 - 2), v68 = isalnum(v67), LOBYTE(v67) = v135, v31 = a2, v25 = v68 == 0, v65 = v134, v25))
            && (_BYTE)v67 != 95
            && (_BYTE)v67 != 36 )
          {
            v69 = v141;
            goto LABEL_157;
          }
        }
      }
      if ( (_BYTE)v66 == 46 && v65[1] == 46 )
      {
        *v6 = v65 + 2;
        *(_WORD *)(v31 + 12) = 11868;
      }
      return 0;
    }
    v32 = *v6;
    if ( **v6 != 42 || (*(_BYTE *)(a1 + 276) & 2) == 0 )
      return 0;
LABEL_2:
    v4 = a1;
    *(_BYTE *)(a1 + 68) = 1;
    v7 = v32 + 1;
    *(_DWORD *)(a1 + 4) = v7;
    v5 = 1;
  }
  if ( __strchr_chk((char *)&qword_13ACD8 - 285577, v30, 14) )
  {
    *(_WORD *)(a2 + 12) = v30;
    v32 = *v6;
    v33 = **v6;
    if ( v33 == 61 )
    {
      *(_WORD *)(a2 + 12) = ((_WORD)v131 << 8) | 0x3D;
      ++*v6;
      return 0;
    }
    if ( (unsigned __int8)(v121 - 38) <= 0x18u && (v34 = 22020257, _bittest(&v34, (unsigned __int8)(v121 - 38)))
      || (_BYTE)v121 == 124 )
    {
      if ( v33 == v131 )
      {
        *(_WORD *)(a2 + 12) = v131 | ((_WORD)v131 << 8);
        v76 = *v6 + 1;
        *v6 = v76;
        if ( ((unsigned __int8)v131 | 2) == 0x3E && *v76 == 61 )
        {
          *(_WORD *)(a2 + 12) += 61;
          ++*v6;
        }
      }
      else if ( (_BYTE)v131 == 45 && (_BYTE)v33 == 62 )
      {
        *(_WORD *)(a2 + 12) = 11582;
        ++*v6;
      }
      return 0;
    }
    if ( (_BYTE)v121 != 47 || (_BYTE)v33 != 42 || (*(_BYTE *)(a1 + 276) & 1) == 0 )
      return 0;
    goto LABEL_2;
  }
  v22 = a2;
  if ( ((unsigned int)(v30 - 48) > 9) | (unsigned __int8)v138 ^ 1 )
  {
    switch ( (_BYTE)v30 )
    {
      case '\'':
LABEL_71:
        *(_WORD *)(v22 + 12) = 5;
        *(_DWORD *)(v22 + 16) = 0;
        v36 = *v6;
        v37 = **v6;
        if ( v37 != 39 && v37 )
        {
          *v6 = v36 + 1;
          v38 = *v36;
          if ( v38 == 92 )
          {
            v38 = back_char(v6);
            v22 = a2;
          }
          *(_DWORD *)(v22 + 16) = (*(_DWORD *)(v22 + 16) << 8) | v38;
          v39 = *v6;
          v40 = **v6;
          if ( v40 )
          {
            if ( v40 == 39 )
            {
              *v6 = v39 + 1;
              *(_DWORD *)(v22 + 16) = *(char *)(v22 + 16);
              return 0;
            }
            *v6 = v39 + 1;
            v59 = *v39;
            if ( v59 == 92 )
            {
              v59 = back_char(v6);
              v22 = a2;
            }
            *(_DWORD *)(v22 + 16) = (*(_DWORD *)(v22 + 16) << 8) | v59;
            v60 = *v6;
            v61 = **v6;
            if ( v61 )
            {
              if ( v61 == 39 )
                goto LABEL_120;
              *v6 = v60 + 1;
              v62 = *v60;
              if ( v62 == 92 )
              {
                v62 = back_char(v6);
                v22 = a2;
              }
              *(_DWORD *)(v22 + 16) = (*(_DWORD *)(v22 + 16) << 8) | v62;
              v60 = *v6;
              v63 = **v6;
              if ( v63 )
              {
                if ( v63 == 39 )
                  goto LABEL_120;
                *v6 = v60 + 1;
                v64 = *v60;
                if ( v64 == 92 )
                {
                  v64 = back_char(v6);
                  v22 = a2;
                }
                *(_DWORD *)(v22 + 16) = (*(_DWORD *)(v22 + 16) << 8) | v64;
                v60 = *v6;
                if ( **v6 == 39 )
                {
LABEL_120:
                  *v6 = v60 + 1;
                  return 0;
                }
              }
            }
          }
        }
        return set_qerrno(26);
      case '#':
        v77 = *v6;
        if ( **v6 <= -2 )
        {
          if ( *(_DWORD *)(a1 + 32) )
          {
            *v6 = v77 + 1;
            v126 = *v77 ^ 0x80;
            *(_WORD *)(a2 + 12) = 4;
            *(_BYTE *)(a2 + 20) = 0;
            *(_DWORD *)(a2 + 4) = 0;
            if ( *(_DWORD *)(a2 + 8) <= 0x3FFu )
            {
              v92 = qvector_reserve(a2, *(void **)a2, 0x400u, 1u);
              v22 = a2;
              *(_DWORD *)a2 = v92;
            }
            sub_6E850(a1, (void **)v22, v126, *(_DWORD *)(a1 + 40));
            return 0;
          }
          v119 = **v6;
          goto LABEL_155;
        }
        break;
      case '"':
        v41 = 0;
LABEL_78:
        *(_BYTE *)(v22 + 20) = v41;
        *(_WORD *)(v22 + 12) = 4;
        *(_DWORD *)(v22 + 4) = 0;
        if ( *(_DWORD *)(v22 + 8) <= 0x3FFu )
        {
          v42 = qvector_reserve(v22, *(void **)v22, 0x400u, 1u);
          v22 = a2;
          *(_DWORD *)a2 = v42;
        }
LABEL_81:
        v43 = a1;
        while ( 1 )
        {
          v44 = *v6;
          v45 = **v6;
          if ( v45 == 92 )
          {
            v49 = v44 + 1;
            if ( (*(_BYTE *)(v43 + 184) & 0x10) != 0 )
            {
              if ( !*v49 )
                return set_qerrno(24);
              v55 = *(void **)v22;
              v56 = *(_DWORD *)(v22 + 4);
              v57 = v56 - 1;
              if ( !v56 )
                v57 = 0;
              v58 = v57 + 3;
              if ( *(_DWORD *)(v22 + 8) < (unsigned int)(v57 + 3) )
              {
                v55 = qvector_reserve(v22, v55, v57 + 3, 1u);
                v58 = v57 + 3;
                v22 = a2;
                *(_DWORD *)a2 = v55;
              }
              *(_DWORD *)(v22 + 4) = v58;
              *((_BYTE *)v55 + v57 + 2) = 0;
              *(_WORD *)(*(_DWORD *)v22 + v57) = *(_WORD *)v44;
              *v6 += 2;
            }
            else
            {
              *v6 = v49;
              v50 = back_char(v6);
              v22 = a2;
              v124 = v50;
              v51 = *(void **)a2;
              v52 = *(_DWORD *)(a2 + 4);
              v53 = v52 - 1;
              if ( !v52 )
                v53 = 0;
              v54 = v53 + 2;
              if ( *(_DWORD *)(a2 + 8) < (unsigned int)(v53 + 2) )
              {
                v51 = qvector_reserve(a2, v51, v53 + 2, 1u);
                v54 = v53 + 2;
                v22 = a2;
                *(_DWORD *)a2 = v51;
              }
              *(_DWORD *)(v22 + 4) = v54;
              *((_BYTE *)v51 + v53) = v124;
              *(_BYTE *)(*(_DWORD *)v22 + v53 + 1) = 0;
            }
            goto LABEL_81;
          }
          if ( v45 == 34 )
            break;
          if ( !v45 )
            return set_qerrno(24);
          *v6 = v44 + 1;
          v123 = *v44;
          v46 = *(void **)v22;
          v47 = *(_DWORD *)(v22 + 4);
          if ( v47 )
            --v47;
          v48 = v47 + 2;
          if ( *(_DWORD *)(v22 + 8) < (unsigned int)(v47 + 2) )
          {
            v46 = qvector_reserve(v22, v46, v47 + 2, 1u);
            v48 = v47 + 2;
            v43 = a1;
            v22 = a2;
            *(_DWORD *)a2 = v46;
          }
          *(_DWORD *)(v22 + 4) = v48;
          *((_BYTE *)v46 + v47) = v123;
          *(_BYTE *)(*(_DWORD *)v22 + v47 + 1) = 0;
        }
        *v6 = v44 + 1;
        return 0;
    }
    v119 = v121;
LABEL_155:
    set_error_data(0, v119);
    return set_qerrno(27);
  }
  v145 = (_UNKNOWN **)((char *)&off_13AD90 + a1 - 1289432);
  v134 = *(char **)(a1 + 4);
  v69 = (unsigned __int8 *)(v134 - 1);
  LOBYTE(v146) = *v145;
  v70 = v30;
  if ( (v146 & 1) == 0 )
    goto LABEL_136;
LABEL_157:
  v78 = 0;
  v142 = v69;
  v79 = (char *)v69;
  while ( 1 )
  {
    while ( 1 )
    {
      v80 = v79 + 1;
      do
      {
        v79 = v80;
        v81 = (unsigned __int8)*(v80 - 1);
        if ( (v81 & 0x80u) != 0 )
          goto LABEL_165;
        ++v80;
      }
      while ( (unsigned int)(v81 - 48) < 0xA );
      if ( (_BYTE)v81 != 46 )
        break;
      v25 = v78 == 0;
      v78 |= v78 == 0;
      if ( !v25 )
        goto LABEL_178;
    }
LABEL_165:
    v82 = toupper(v81) << 24;
    if ( v82 != 1157627904 )
      break;
    if ( (v78 & 2) != 0 )
      goto LABEL_178;
    v78 |= 2u;
    if ( *v79 == 43 || *v79 == 45 )
      ++v79;
  }
  v83 = a2;
  v70 = v131;
  if ( !v78 )
  {
    v69 = v142;
LABEL_136:
    v71 = v69;
    v72 = v70;
    v73 = v70 - 48;
    v25 = v72 == 48;
    v74 = v134;
    LOBYTE(v75) = *v134;
    v139 = 10;
    if ( !v25 )
      goto LABEL_196;
    v139 = 8;
    if ( (char)v75 > 97 )
    {
      if ( (char)v75 != 98 )
      {
        if ( (char)v75 != 120 )
          goto LABEL_140;
        goto LABEL_188;
      }
    }
    else if ( (char)v75 != 66 )
    {
      if ( (char)v75 != 88 )
      {
LABEL_140:
        v74 = v134;
LABEL_196:
        v142 = v71;
        if ( (v75 & 0x80u) != 0 )
        {
          v133 = v73;
          goto LABEL_212;
        }
        v91 = v74;
LABEL_198:
        HIDWORD(v133) = v73 >> 31;
        v93 = v91 + 1;
        while ( 1 )
        {
          v127 = v75;
          v136 = v93;
          LODWORD(v133) = v73;
          v94 = (unsigned __int8)v75;
          if ( !isxdigit((unsigned __int8)v75) )
            break;
          *v6 = v136;
          if ( v127 > 0x39u && v139 == 10 || v127 > 0x37u && v139 == 8 || v127 > 0x31u && v139 == 2 )
          {
            set_error_data(0, (char)v127);
            return set_qerrno(20);
          }
          v95 = v127;
          if ( v127 >= 0x3Au )
          {
            if ( v127 > 0x60u )
              v95 = v127 - 32;
            v94 = (unsigned __int8)(v95 - 7);
          }
          v73 = v94 + v139 * v133 - 48;
          HIDWORD(v133) = (__PAIR64__(v139 * HIDWORD(v133), v94)
                         + (unsigned int)v139 * (unsigned __int64)(unsigned int)v133
                         - 48) >> 32;
          LOBYTE(v75) = *v136;
          v93 = v136 + 1;
          if ( *v136 < 0 )
          {
            LODWORD(v133) = v73;
            v74 = v136;
            goto LABEL_212;
          }
        }
        v74 = v136 - 1;
        LOBYTE(v75) = v127;
LABEL_212:
        v140 = v139 != 10;
        v137 = 1;
        v96 = 0;
LABEL_213:
        v97 = v74 + 1;
        while ( 1 )
        {
          if ( (char)v75 > 107 )
          {
            v74 = v97;
            if ( (_BYTE)v75 != 108 )
            {
              if ( (_BYTE)v75 == 117 )
                goto LABEL_224;
LABEL_227:
              v144 = v96;
              v128 = v75;
              if ( tolower((unsigned __int8)v75) != 105 )
              {
                if ( (v146 & 8) == 0 )
                  goto LABEL_252;
                goto LABEL_242;
              }
              if ( *v97 == 54 )
              {
                v99 = 1;
                v98 = v146;
                if ( v97[1] != 52 )
                  goto LABEL_251;
LABEL_248:
                *v143 = v97 + 2;
                v128 = v97[2];
                v144 = v99;
                if ( (v98 & 8) != 0 )
                  goto LABEL_242;
LABEL_252:
                v106 = HIDWORD(v133);
                v108 = 1;
                if ( !HIDWORD(v133) )
                  v108 = v144;
                v107 = 0;
                v144 = v108;
                v104 = a2;
                v105 = v133;
              }
              else
              {
                if ( *v97 == 51 )
                {
                  v98 = v146;
                  if ( v97[1] == 50 )
                  {
                    v99 = 0;
                    goto LABEL_248;
                  }
                }
                else
                {
                  v98 = v146;
                }
LABEL_251:
                if ( (v98 & 8) == 0 )
                  goto LABEL_252;
LABEL_242:
                v104 = a2;
                v106 = HIDWORD(v133);
                v105 = v133;
                if ( (v144 & 1) != 0 )
                  goto LABEL_260;
                v107 = 0;
                if ( v133 <= 0x7FFFFFFF && v137 )
                {
                  v104 = a2;
                  v106 = HIDWORD(v133);
                  v105 = v133;
                  goto LABEL_255;
                }
                v106 = HIDWORD(v133);
                v104 = a2;
                v105 = v133;
                if ( HIDWORD(v133) || (v107 = 1, !v140) )
                {
LABEL_260:
                  *(_BYTE *)(v104 + 20) = v137 ^ 1 | (v106 < 0);
LABEL_261:
                  *(_DWORD *)(v104 + 24) = v105;
                  *(_DWORD *)(v104 + 28) = v106;
                  *(_WORD *)(v104 + 12) = 8;
                  goto LABEL_262;
                }
              }
LABEL_255:
              *(_BYTE *)(v104 + 20) = v107;
              if ( (v144 & 1) != 0 )
                goto LABEL_261;
              *(_DWORD *)(v104 + 16) = v105;
              *(_WORD *)(v104 + 12) = 3;
LABEL_262:
              v103 = v128;
              if ( (*(_BYTE *)v145 & 2) == 0 )
              {
LABEL_263:
                v109 = a1;
                v110 = (void **)(a1 + 16);
                *(_DWORD *)(a1 + 20) = 0;
                v111 = *(_DWORD *)(a1 + 4) - (_DWORD)v142;
                if ( *(_DWORD *)(a1 + 24) >= v111 + 1 )
                {
                  v112 = *v110;
                }
                else
                {
                  v112 = qvector_reserve((int)v110, *v110, v111 + 1, 1u);
                  v109 = a1;
                  *(_DWORD *)(a1 + 16) = v112;
                }
                *(_DWORD *)(v109 + 20) = v111 + 1;
                v112[v111] = 0;
                memmove(*(void **)(v109 + 16), v142, v111);
                return 0;
              }
LABEL_265:
              if ( v103 < 0 || (v113 = v103, v114 = isalnum((unsigned __int8)v103), v103 = v113, !v114) )
              {
                v115 = v103 - 34;
                if ( (unsigned __int8)(v103 - 34) > 0xCu
                  || (v116 = v103, v117 = 4133, v118 = _bittest(&v117, v115), v103 = v116, !v118) )
                {
                  if ( v103 != 95 )
                    goto LABEL_263;
                }
              }
              return set_qerrno(23);
            }
          }
          else
          {
            v74 = v97;
            if ( (_BYTE)v75 != 76 )
            {
              if ( (_BYTE)v75 != 85 )
                goto LABEL_227;
LABEL_224:
              *v6 = v74;
              LOBYTE(v75) = *v74;
              v140 = 1;
              v137 = 0;
              goto LABEL_213;
            }
          }
          if ( (v96 & 1) != 0 )
            return set_qerrno(23);
          *v6 = v74;
          LOBYTE(v75) = *v74;
          v97 = v74 + 1;
          if ( ((unsigned __int8)*v74 | 0x20) == 0x6C )
          {
            ++v74;
            *v6 = v97;
            LOBYTE(v75) = *v97;
            v96 = 1;
            goto LABEL_213;
          }
        }
      }
LABEL_188:
      v142 = v71;
      v132 = v73;
      *v6 = v134 + 1;
      v75 = v134[1];
      if ( v75 < 0 || (v89 = v134[1], v90 = isxdigit((unsigned __int8)v75), v75 = v89, !v90) )
      {
        set_error_data(0, v75);
        ++*v6;
        return set_qerrno(20);
      }
      v139 = 16;
      v73 = v132;
      v91 = v134 + 1;
      goto LABEL_198;
    }
    v74 = v134 + 1;
    *v6 = v134 + 1;
    LOBYTE(v75) = v134[1];
    v139 = 2;
    if ( (v75 & 0xFE) != 0x30 )
    {
      set_error_data(0, (char)v75);
      return set_qerrno(20);
    }
    goto LABEL_196;
  }
  if ( v82 == 1275068416 || v82 == 1174405120 )
  {
    if ( (v84 = *v79, *v79 >= 0) && (v85 = *v79, v86 = isalnum(v85), v83 = a2, v25 = v86 == 0, v84 = v85, !v25)
      || v84 == 36
      || v84 == 95
      || v84 == 46 )
    {
LABEL_178:
      for ( j = (char *)v142; ; ++j )
      {
        *v6 = j;
        v88 = *j;
        if ( *j >= 0 )
        {
          v125 = *j;
          v25 = isalnum((unsigned __int8)*j) == 0;
          v88 = v125;
          if ( !v25 )
            continue;
        }
        if ( v88 != 36 && v88 != 95 && v88 != 46 )
          break;
      }
      return set_qerrno(21);
    }
  }
  *v6 = (char *)v142;
  v100 = v83;
  if ( asctoreal(v6, v83 + 24) == 1 )
  {
    *(_WORD *)(v100 + 12) = 7;
    v101 = *v6;
    v128 = **v6;
    v102 = toupper(v128) << 24;
    if ( v102 != 1275068416 && v102 != 1174405120 )
      goto LABEL_262;
    *v143 = v101 + 1;
    v103 = v101[1];
    if ( (*(_BYTE *)v145 & 2) == 0 )
      goto LABEL_263;
    goto LABEL_265;
  }
  return set_qerrno(22);
}
// 17C00: using guessed type int __cdecl __strchr_chk(_DWORD, _DWORD, _DWORD);
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13AD90: using guessed type _UNKNOWN *off_13AD90;
