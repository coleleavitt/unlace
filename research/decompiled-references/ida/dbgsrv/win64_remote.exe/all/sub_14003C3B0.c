/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003C3B0
// Address: 0x000000014003C3B0

//----- (000000014003C3B0) ----------------------------------------------------
__int64 __fastcall sub_14003C3B0(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  __int64 v5; // rbp
  int v8; // r15d
  __int64 v9; // r12
  _BYTE *v10; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rax
  char *v13; // rax
  unsigned __int64 v14; // rdi
  bool v15; // zf
  _BYTE *v16; // rcx
  int v17; // eax
  __int64 v18; // r8
  char *v19; // rdx
  __int64 v20; // r9
  unsigned __int8 v21; // di
  _BYTE *v22; // rdi
  unsigned __int64 v23; // r8
  char *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdi
  bool v27; // zf
  _BYTE *v28; // rax
  int v29; // edx
  __int64 v30; // rdx
  char v32; // al
  int v33; // ecx
  __int64 v34; // rcx
  _BYTE *v35; // rax
  _BYTE *v36; // rax
  const void *v37; // r13
  int v38; // r12d
  char *v39; // rsi
  int i; // ebp
  int v41; // r14d
  char v42; // al
  char v43; // di
  unsigned __int64 v44; // rdi
  char v45; // al
  unsigned __int8 *v46; // rax
  unsigned __int8 *v47; // rdi
  int v48; // edi
  unsigned __int64 v49; // r14
  unsigned int v50; // esi
  char *v51; // rcx
  char v52; // al
  int v53; // ecx
  __int64 v54; // rcx
  __int64 v55; // rdx
  char v56; // r15
  char v57; // bp
  bool v58; // si
  unsigned __int8 *v59; // rcx
  _BYTE *v60; // rcx
  char v61; // dl
  char v62; // dl
  bool v63; // al
  __int64 v64; // rcx
  char *v65; // rax
  char v66; // bp
  unsigned __int8 **v67; // rdx
  _BYTE *v68; // rcx
  char v69; // al
  __int64 v70; // rax
  __int64 v71; // rdi
  unsigned __int8 *v72; // rax
  unsigned __int8 v73; // dl
  _BYTE *v74; // rax
  _BYTE *v75; // rcx
  unsigned __int8 v76; // si
  _BYTE *v77; // rax

  v5 = a3;
  v8 = 0;
  v9 = 0x5400284000000000LL;
  while ( 2 )
  {
    v10 = *(_BYTE **)(a1 + 8);
    *(_QWORD *)(a1 + 16) = v10;
    *(_QWORD *)(a1 + 24) = 0;
    if ( !*(_BYTE *)(a1 + 152) )
      goto LABEL_14;
    v11 = v10;
    while ( *v11 == 42 )
    {
LABEL_8:
      v10 = v11 + 1;
      v11 = v10;
      *(_QWORD *)(a1 + 8) = v10;
      if ( *v10 == 47 )
      {
        if ( (*(_BYTE *)(a1 + 724) & 1) != 0 )
          goto LABEL_13;
      }
      else if ( *v10 == 41 && (*(_BYTE *)(a1 + 724) & 2) != 0 )
      {
LABEL_13:
        *(_QWORD *)(a1 + 8) = v10 + 1;
        *(_BYTE *)(a1 + 152) = 0;
        goto LABEL_14;
      }
    }
    v12 = v10 + 1;
    while ( *(v12 - 1) )
    {
      v11 = v12;
      *(_QWORD *)(a1 + 8) = v12++;
      if ( *v11 == 42 )
        goto LABEL_8;
    }
LABEL_43:
    v25 = *(_QWORD *)(a1 + 64);
    if ( v25 == v5 )
    {
      v77 = (_BYTE *)(*(_QWORD *)(a1 + 8) - 1LL);
      if ( !*v77 )
        *(_QWORD *)(a1 + 8) = v77;
      *(_WORD *)(a2 + 24) = 1;
      return 0;
    }
    v26 = *(_QWORD *)(a1 + 56) + 56 * v25;
    *(_QWORD *)a1 = *(_QWORD *)(v26 - 32);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v26 - 24);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(v26 - 8);
    if ( v25 )
    {
      *(_QWORD *)(a1 + 64) = v25 - 1;
      if ( *(_QWORD *)(v26 - 56) )
      {
        sub_14001A6C0((_QWORD *)(v26 - 56), 0);
        j_free(*(void **)(v26 - 56));
        *(_QWORD *)(v26 - 56) = 0;
        *(_QWORD *)(v26 - 40) = 0;
      }
    }
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          do
          {
LABEL_14:
            v13 = *(char **)(a1 + 8);
            v14 = *v13;
            *(_QWORD *)(a1 + 8) = v13 + 1;
          }
          while ( (_BYTE)v14 == 32 );
        }
        while ( (unsigned __int8)(v14 - 9) <= 4u );
        if ( a4 )
          *a4 = *(_DWORD *)(a1 + 312);
        switch ( (_BYTE)v14 )
        {
          case 0:
            goto LABEL_43;
          case 0x2F:
            if ( **(_BYTE **)(a1 + 8) == 47 )
            {
              v15 = (*(_BYTE *)(a1 + 724) & 4) == 0;
              goto LABEL_22;
            }
            goto LABEL_23;
          case 0x3B:
            v15 = (*(_BYTE *)(a1 + 724) & 8) == 0;
LABEL_22:
            if ( !v15 )
              goto LABEL_43;
            goto LABEL_23;
        }
        if ( (unsigned __int8)(v14 + 0x80) > 0x7Eu )
          break;
        v18 = *(_QWORD *)(a1 + 64);
        if ( !v18 )
          goto LABEL_63;
        v19 = *(char **)(a1 + 56);
        v20 = 56LL * *(int *)(a1 + 80);
        v21 = v14 + 0x80;
        if ( (unsigned __int64)v21 < *(_QWORD *)&v19[v20 + 8] )
        {
          v22 = *(_BYTE **)(*(_QWORD *)&v19[v20] + 24LL * v21);
          if ( v22 )
          {
            if ( *v22 )
            {
              v23 = v18 + 1;
              if ( v23 > *(_QWORD *)(a1 + 72) )
              {
                v19 = (char *)sub_14005ABE0(a1 + 56, v19, v23, 0x38u);
                *(_QWORD *)(a1 + 56) = v19;
              }
              v24 = &v19[56 * *(_QWORD *)(a1 + 64)];
              *(_QWORD *)v24 = 0;
              *((_QWORD *)v24 + 1) = 0;
              *((_QWORD *)v24 + 2) = 0;
              ++*(_QWORD *)(a1 + 64);
              *((_QWORD *)v24 + 3) = *(_QWORD *)a1;
              *((_QWORD *)v24 + 4) = *(_QWORD *)(a1 + 8);
              *((_DWORD *)v24 + 12) = *(_DWORD *)(a1 + 80);
              *((_QWORD *)v24 + 5) = 0;
              *(_DWORD *)(a1 + 80) = *(_DWORD *)(56LL * *(int *)(a1 + 80) + *(_QWORD *)(a1 + 56) + 48);
              *(_QWORD *)(a1 + 8) = v22;
              *(_QWORD *)a1 = v22;
            }
          }
        }
      }
LABEL_23:
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 8) - 1LL;
      if ( (v14 & 0x80u) != 0LL || !isalpha((unsigned __int8)v14) )
      {
        if ( (_BYTE)v14 == 95 )
          goto LABEL_30;
        if ( (_BYTE)v14 != 36 )
          break;
      }
      if ( (_BYTE)v14 == 76 )
      {
        v16 = *(_BYTE **)(a1 + 8);
        if ( *v16 == 34 )
        {
          *(_QWORD *)(a1 + 8) = v16 + 1;
          v32 = 1;
          goto LABEL_180;
        }
        if ( *v16 == 39 )
        {
          *(_QWORD *)(a1 + 8) = v16 + 1;
          *(_BYTE *)(a2 + 40) = 1;
LABEL_199:
          *(_WORD *)(a2 + 24) = 5;
          *(_QWORD *)(a2 + 32) = 0;
          while ( 1 )
          {
            v72 = *(unsigned __int8 **)(a1 + 8);
            v73 = *v72;
            if ( *v72 == 39 )
              break;
            if ( !v73 )
              return sub_1400640B0(0x1Au);
            *(_QWORD *)(a1 + 8) = v72 + 1;
            if ( v73 == 92 )
              v73 = sub_140059D50((unsigned __int8 **)(a1 + 8));
            *(_QWORD *)(a2 + 32) = v73 | (*(_QWORD *)(a2 + 32) << 8);
            if ( ++v8 >= 4 )
              goto LABEL_208;
          }
          if ( v8 )
          {
LABEL_208:
            v74 = *(_BYTE **)(a1 + 8);
            if ( *v74 == 39 )
            {
              *(_QWORD *)(a1 + 8) = v74 + 1;
              if ( v8 == 1 )
                *(_QWORD *)(a2 + 32) = *(char *)(a2 + 32);
              return 0;
            }
          }
          return sub_1400640B0(0x1Au);
        }
      }
LABEL_30:
      v17 = sub_14003D450((_QWORD *)a1, 0, a2);
      if ( v17 == -1 )
        return sub_140063DE0();
      if ( v17 != 1 )
        return 0;
    }
    if ( !sub_14006CA14((__int64)"?(),.[\\]`{};~@", v14) )
    {
      if ( !sub_14006CA14((__int64)"!%&*+-/<=>^|:", v14) )
      {
        if ( (v14 & 0x80u) == 0LL && isdigit((unsigned __int8)v14) )
          goto LABEL_85;
        if ( (_BYTE)v14 != 34 )
        {
          if ( (_BYTE)v14 == 39 )
            goto LABEL_199;
          if ( (_BYTE)v14 == 35 && (v75 = *(_BYTE **)(a1 + 8), (unsigned __int8)(*v75 + 0x80) <= 0x7Eu) )
          {
            if ( *(_QWORD *)(a1 + 64) )
            {
              v76 = *v75 + 0x80;
              *(_QWORD *)(a1 + 8) = v75 + 1;
              *(_WORD *)(a2 + 24) = 4;
              *(_BYTE *)(a2 + 40) = 0;
              *(_QWORD *)(a2 + 8) = 0;
              if ( *(_QWORD *)(a2 + 16) < 0x400u )
                *(_QWORD *)a2 = sub_14005ABE0(a2, *(void **)a2, 0x400u, 1u);
              sub_14003E370(a1, a2, v76, *(_DWORD *)(a1 + 80));
              return 0;
            }
            v30 = (char)*v75;
          }
          else
          {
LABEL_63:
            v30 = v14;
          }
          sub_140063F20(0, v30);
          return sub_1400640B0(0x1Bu);
        }
        v32 = 0;
LABEL_180:
        *(_BYTE *)(a2 + 40) = v32;
        *(_WORD *)(a2 + 24) = 4;
        *(_QWORD *)(a2 + 8) = 0;
        if ( *(_QWORD *)(a2 + 16) < 0x400u )
          *(_QWORD *)a2 = sub_14005ABE0(a2, *(void **)a2, 0x400u, 1u);
        v65 = *(char **)(a1 + 8);
        v66 = *v65;
        if ( *v65 != 34 )
        {
          v67 = (unsigned __int8 **)(a1 + 8);
          if ( !v66 )
            return sub_1400640B0(0x18u);
          while ( 1 )
          {
            v68 = v65 + 1;
            if ( v66 == 92 )
            {
              if ( (*(_BYTE *)(a1 + 364) & 0x10) != 0 )
              {
                if ( !*v68 )
                  return sub_1400640B0(0x18u);
                sub_1400048F0(a2, v65, 2u);
                *(_QWORD *)(a1 + 8) += 2LL;
              }
              else
              {
                *(_QWORD *)(a1 + 8) = v68;
                v69 = sub_140059D50(v67);
                sub_140004830(a2, v69);
              }
            }
            else
            {
              *(_QWORD *)(a1 + 8) = v68;
              v70 = *(_QWORD *)(a2 + 8);
              v71 = v70 - 1;
              if ( !v70 )
                v71 = 0;
              if ( (unsigned __int64)(v71 + 2) > *(_QWORD *)(a2 + 16) )
                *(_QWORD *)a2 = sub_14005ABE0(a2, *(void **)a2, v71 + 2, 1u);
              *(_QWORD *)(a2 + 8) = v71 + 2;
              *(_BYTE *)(v71 + *(_QWORD *)a2) = v66;
              *(_BYTE *)(*(_QWORD *)a2 + v71 + 1) = 0;
            }
            v65 = *(char **)(a1 + 8);
            v66 = *v65;
            if ( *v65 == 34 )
              break;
            v67 = (unsigned __int8 **)(a1 + 8);
            if ( !v66 )
              return sub_1400640B0(0x18u);
          }
        }
        *(_QWORD *)(a1 + 8) = v65 + 1;
        return 0;
      }
      *(_WORD *)(a2 + 24) = (unsigned __int8)v14;
      v28 = *(_BYTE **)(a1 + 8);
      v29 = (char)*v28;
      if ( *v28 == 61 )
      {
        *(_WORD *)(a2 + 24) = ((unsigned __int8)v14 << 8) + 61;
        ++*(_QWORD *)(a1 + 8);
        return 0;
      }
      if ( (unsigned __int8)v14 <= 0x3Eu && _bittest64(&v9, v14) || (_BYTE)v14 == 124 )
      {
        if ( v29 == (unsigned __int8)v14 )
        {
          *(_WORD *)(a2 + 24) = 257 * (unsigned __int8)v14;
          v36 = (_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL);
          *(_QWORD *)(a1 + 8) = v36;
          if ( (((_BYTE)v14 - 60) & 0xFD) == 0 && *v36 == 61 )
          {
            *(_WORD *)(a2 + 24) += 61;
            ++*(_QWORD *)(a1 + 8);
          }
        }
        else if ( (_BYTE)v14 == 45 && (_BYTE)v29 == 62 )
        {
          *(_WORD *)(a2 + 24) = 11582;
          ++*(_QWORD *)(a1 + 8);
        }
        return 0;
      }
      if ( (_BYTE)v14 != 47 || (_BYTE)v29 != 42 )
        return 0;
      v27 = (*(_BYTE *)(a1 + 724) & 1) == 0;
LABEL_61:
      if ( v27 )
        return 0;
      *(_BYTE *)(a1 + 152) = 1;
      ++*(_QWORD *)(a1 + 8);
      continue;
    }
    break;
  }
  *(_WORD *)(a2 + 24) = (unsigned __int8)v14;
  if ( (_BYTE)v14 != 46 )
  {
    if ( (_BYTE)v14 == 40 && **(_BYTE **)(a1 + 8) == 42 )
    {
      v27 = (*(_BYTE *)(a1 + 724) & 2) == 0;
      goto LABEL_61;
    }
    return 0;
  }
  if ( (*(_BYTE *)(a1 + 364) & 1) == 0
    || (v33 = **(unsigned __int8 **)(a1 + 8), (v33 & 0x80u) != 0)
    || !isdigit(v33)
    || (v34 = *(_QWORD *)(a1 + 8), (unsigned __int64)(v34 - 1) > *(_QWORD *)a1) && sub_14003B660(*(_BYTE *)(v34 - 2)) )
  {
    v35 = *(_BYTE **)(a1 + 8);
    if ( *v35 == 46 && v35[1] == 46 )
    {
      *(_QWORD *)(a1 + 8) = v35 + 2;
      *(_WORD *)(a2 + 24) = 11868;
    }
    return 0;
  }
LABEL_85:
  v37 = (const void *)(*(_QWORD *)(a1 + 8) - 1LL);
  v38 = 1;
  if ( (*(_BYTE *)(a1 + 364) & 1) != 0 )
  {
    v39 = (char *)(*(_QWORD *)(a1 + 8) - 1LL);
    for ( i = 0; ; i |= 2u )
    {
      while ( 1 )
      {
        do
          v41 = (unsigned __int8)*v39++;
        while ( (v41 & 0x80u) == 0 && isdigit(v41) );
        if ( (_BYTE)v41 != 46 )
          break;
        if ( i )
          goto LABEL_107;
        i = 1;
      }
      v42 = toupper(v41);
      if ( v42 != 69 )
        break;
      if ( (i & 2) != 0 )
        goto LABEL_107;
      if ( *v39 == 45 || *v39 == 43 )
        ++v39;
    }
    if ( !i )
      goto LABEL_115;
    if ( v42 == 76 || v42 == 70 )
    {
      v43 = *v39;
      if ( sub_14003B660(*v39) || v43 == 46 )
      {
LABEL_107:
        v47 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) - 1LL);
        for ( *(_QWORD *)(a1 + 8) = v47; ; v47 = *(unsigned __int8 **)(a1 + 8) )
        {
          v48 = *v47;
          if ( ((v48 & 0x80u) != 0 || !isalnum(v48))
            && (_BYTE)v48 != 95
            && (_BYTE)v48 != 36
            && **(_BYTE **)(a1 + 8) != 46 )
          {
            break;
          }
          ++*(_QWORD *)(a1 + 8);
        }
        return sub_1400640B0(0x15u);
      }
    }
    --*(_QWORD *)(a1 + 8);
    if ( (unsigned int)sub_140065D10((char **)(a1 + 8), (_OWORD *)(a2 + 48)) != 1 )
      return sub_1400640B0(0x16u);
    *(_WORD *)(a2 + 24) = 7;
    v44 = **(unsigned __int8 **)(a1 + 8);
    v45 = toupper(v44);
    if ( v45 == 70 || v45 == 76 )
    {
      v46 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 1LL);
      *(_QWORD *)(a1 + 8) = v46;
      v44 = *v46;
    }
    goto LABEL_173;
  }
LABEL_115:
  v49 = (unsigned __int8)v14 - 48LL;
  v50 = 10;
  if ( (_BYTE)v14 != 48 )
    goto LABEL_127;
  v50 = 8;
  v51 = *(char **)(a1 + 8);
  v52 = *v51;
  if ( *v51 == 66 )
    goto LABEL_123;
  if ( v52 == 88 )
    goto LABEL_120;
  if ( v52 == 98 )
  {
LABEL_123:
    v50 = 2;
    *(_QWORD *)(a1 + 8) = v51 + 1;
    v54 = v51[1];
    if ( (_BYTE)v54 != 48 && (_BYTE)v54 != 49 )
    {
      v55 = v54;
LABEL_126:
      sub_140063F20(0, v55);
      return sub_1400640B0(0x14u);
    }
LABEL_127:
    while ( 1 )
    {
      v44 = **(char **)(a1 + 8);
      if ( (v44 & 0x80u) != 0LL || !isxdigit((unsigned __int8)v44) )
        break;
      ++*(_QWORD *)(a1 + 8);
      if ( (unsigned __int8)v44 > 0x39u && v50 == 10
        || (unsigned __int8)v44 > 0x37u && v50 == 8
        || (unsigned __int8)v44 > 0x31u && v50 == 2 )
      {
        v55 = v44;
        goto LABEL_126;
      }
      if ( (unsigned __int8)v44 > 0x39u )
      {
        if ( (unsigned __int8)v44 >= 0x61u )
          LOBYTE(v44) = v44 - 32;
        LOBYTE(v44) = v44 - 7;
      }
      v49 = v49 * v50 + (unsigned __int8)v44 - 48LL;
    }
    v56 = 1;
    v57 = 0;
    v58 = v50 != 10;
    while ( 1 )
    {
      while ( (((_BYTE)v44 - 85) & 0xDF) == 0 )
      {
        v44 = *(unsigned __int8 *)++*(_QWORD *)(a1 + 8);
        v56 = 0;
        v58 = 1;
      }
      if ( (((_BYTE)v44 - 76) & 0xDF) != 0 )
        break;
      if ( v57 )
        return sub_1400640B0(0x17u);
      v59 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 1LL);
      *(_QWORD *)(a1 + 8) = v59;
      v44 = *v59;
      if ( *v59 == 108 || *v59 == 76 )
      {
        *(_QWORD *)(a1 + 8) = v59 + 1;
        v44 = v59[1];
        v57 = 1;
      }
    }
    if ( tolower(**(unsigned __int8 **)(a1 + 8)) == 105 )
    {
      v60 = *(_BYTE **)(a1 + 8);
      v61 = v60[1];
      if ( v61 == 51 && v60[2] == 50 )
      {
        v62 = 0;
LABEL_156:
        *(_QWORD *)(a1 + 8) = v60 + 3;
        v44 = (unsigned __int8)v60[3];
        v57 = v62;
        goto LABEL_157;
      }
      if ( v61 == 54 )
      {
        v62 = 1;
        if ( v60[2] == 52 )
          goto LABEL_156;
      }
    }
LABEL_157:
    if ( (*(_BYTE *)(a1 + 364) & 8) != 0 )
    {
      if ( v57 )
        goto LABEL_164;
      if ( v56 && v49 <= 0x7FFFFFFF )
      {
        v63 = 0;
        goto LABEL_170;
      }
      if ( !v58 || v49 > 0xFFFFFFFF )
      {
LABEL_164:
        v57 = 1;
        if ( v56 && v49 <= 0x7FFFFFFFFFFFFFFFLL )
        {
          v63 = 0;
          goto LABEL_170;
        }
        v38 = v58;
      }
      v63 = v38 != -1;
    }
    else
    {
      v63 = 0;
    }
LABEL_170:
    *(_BYTE *)(a2 + 40) = v63;
    if ( v57 )
    {
      *(_QWORD *)(a2 + 48) = v49;
      *(_WORD *)(a2 + 24) = 8;
    }
    else
    {
      *(_QWORD *)(a2 + 32) = v49;
      *(_WORD *)(a2 + 24) = 3;
    }
LABEL_173:
    if ( (*(_BYTE *)(a1 + 364) & 2) != 0 )
    {
      if ( sub_14003B660(v44) )
        return sub_1400640B0(0x17u);
      if ( (unsigned __int8)v44 <= 0x2Eu )
      {
        v64 = 0x408400000000LL;
        if ( _bittest64(&v64, v44) )
          return sub_1400640B0(0x17u);
      }
    }
    *(_QWORD *)(a1 + 40) = 0;
    sub_1400048F0(a1 + 32, v37, *(_QWORD *)(a1 + 8) - (_QWORD)v37);
    return 0;
  }
  if ( v52 != 120 )
    goto LABEL_127;
LABEL_120:
  v50 = 16;
  *(_QWORD *)(a1 + 8) = v51 + 1;
  v53 = (unsigned __int8)v51[1];
  if ( (v53 & 0x80u) == 0 && isxdigit(v53) )
    goto LABEL_127;
  sub_140063F20(0, **(char **)(a1 + 8));
  ++*(_QWORD *)(a1 + 8);
  return sub_1400640B0(0x14u);
}
