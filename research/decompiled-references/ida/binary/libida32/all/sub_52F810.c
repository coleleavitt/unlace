int __fastcall sub_52F810(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int8 v4; // dl
  unsigned __int8 v5; // al
  int v6; // ebx
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rax
  bool v12; // cf
  int v13; // r13d
  __int64 v14; // rax
  unsigned __int8 v15; // bp
  unsigned __int8 v16; // al
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int8 v19; // bp
  _QWORD *v20; // r15
  _QWORD *v21; // r12
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rbp
  _QWORD *v25; // r12
  unsigned int v26; // eax
  char v27; // si
  unsigned int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // r15
  int v34; // eax
  __int64 v35; // rax
  const char *v36; // rsi
  const char *v37; // rdi
  unsigned int v38; // eax
  unsigned int v39; // edx
  unsigned int v40; // eax
  unsigned int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // eax
  __int64 *v47; // rdx
  __int64 *v48; // rax
  unsigned __int64 v49; // r12
  unsigned __int64 v50; // rcx
  __int64 v51; // r15
  __int64 v52; // r14
  __int64 v53; // rbp
  __int64 v54; // rax
  const char *v55; // rsi
  const char *v56; // rdi
  size_t v57; // rdx
  _QWORD *v58; // r12
  _QWORD *v59; // rbp
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rax
  const char *v62; // rsi
  const char *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rbp
  __int64 v66; // rbx
  __int64 v67; // rax
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rcx
  __int64 v70; // r8
  int j; // ecx
  int v72; // ebx
  char v73; // dl
  int v74; // eax
  __int64 v75; // rax
  _DWORD *v76; // rsi
  _DWORD *v77; // rax
  bool v78; // cc
  int v79; // ecx
  int v80; // edx
  int v81; // eax
  int v82; // eax
  char v83; // r15
  __int64 v84; // rsi
  _DWORD *v85; // rdi
  _DWORD *v86; // rsi
  int v87; // r15d
  const char *v88; // rsi
  const char *v89; // rdi
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rbx
  __int64 v93; // rax
  __int64 v94; // [rsp-8h] [rbp-60h]
  int v95; // [rsp+8h] [rbp-50h]
  __int64 v96; // [rsp+8h] [rbp-50h]
  int i; // [rsp+8h] [rbp-50h]
  unsigned __int64 v98; // [rsp+8h] [rbp-50h]
  int v99; // [rsp+10h] [rbp-48h]
  size_t v100; // [rsp+10h] [rbp-48h]
  __int64 v101; // [rsp+10h] [rbp-48h]
  size_t v102; // [rsp+18h] [rbp-40h]

  if ( a2 == a3 )
    return 0;
  v4 = a3 & 0xC0;
  v5 = a2 & 0xC0;
  if ( (a2 & 0xC0) != v4 )
    goto LABEL_3;
  v8 = *(_QWORD *)(*a1 + 1632);
  v9 = sub_51B8E0(v8, a2);
  v10 = sub_51B8E0(v8, a3);
  if ( !(v9 | v10) )
  {
    v12 = (unsigned __int8)a3 < (unsigned __int64)(unsigned __int8)a2;
    if ( (unsigned __int8)a3 != (unsigned __int64)(unsigned __int8)a2 )
      goto LABEL_14;
    return 0;
  }
  if ( !v9 )
    return -1;
  if ( !v10 )
    return 1;
  if ( v9 == v10 )
    return 0;
  v11 = *(_QWORD *)(v10 + 32);
  if ( *(_QWORD *)(v9 + 32) )
  {
    if ( !v11 )
      return 1;
    return sub_51DBC0(*(__int64 **)(*a1 + 1632), v9, v10, 32);
  }
  if ( v11 )
    return -1;
  v15 = sub_5246C0((_QWORD **)v9, *a1, 2u, a2, 0, nullptr, 0, 0);
  v16 = sub_5246C0((_QWORD **)v10, *a1, 2u, a3, 0, nullptr, 0, 0);
  v18 = v94;
  v12 = v16 < v15;
  if ( v16 != v15 )
  {
LABEL_14:
    if ( v12 )
      return 1;
    return -1;
  }
  switch ( v15 & 0xF )
  {
    case 0xA:
      v6 = lexcompare_tinfo(*(_QWORD *)v9, *(_QWORD *)v10, 0, v17, v94);
      if ( !v6 )
      {
        v5 = *(_BYTE *)(v9 + 28);
        v4 = *(_BYTE *)(v10 + 28);
        if ( v5 != v4 )
          goto LABEL_3;
        v6 = lexcompare_tinfo(*(_QWORD *)(v9 + 8), *(_QWORD *)(v10 + 8), 0, v42, v43);
        if ( !v6 )
        {
          v46 = *(_DWORD *)(v9 + 24);
          if ( v46 != *(_DWORD *)(v10 + 24) )
          {
            if ( v46 > *(_DWORD *)(v10 + 24) )
              return 1;
            return -1;
          }
          if ( !v46 )
            goto LABEL_56;
          v6 = lexcompare_tinfo(*(_QWORD *)(v9 + 16), *(_QWORD *)(v10 + 16), 0, v44, v45);
          goto LABEL_55;
        }
      }
      return v6;
    case 0xB:
      v6 = lexcompare_tinfo(*(_QWORD *)v9, *(_QWORD *)v10, 0, v17, v94);
      if ( !v6 )
      {
        v40 = *(_DWORD *)(v9 + 8);
        v41 = *(_DWORD *)(v10 + 8);
        if ( v40 == v41 )
        {
          v40 = *(_DWORD *)(v9 + 12);
          v41 = *(_DWORD *)(v10 + 12);
          if ( v40 == v41 )
            goto LABEL_56;
        }
        goto LABEL_46;
      }
      return v6;
    case 0xC:
      v24 = *(_QWORD **)v9;
      v25 = *(_QWORD **)v10;
      v22 = *(_QWORD *)(*(_QWORD *)v9 + 8LL);
      v23 = *(_QWORD *)(*(_QWORD *)v10 + 8LL);
      if ( v22 != v23 )
        goto LABEL_24;
      v26 = v24[11] & 0xF0;
      if ( (v24[11] & 0xF0) == 0xC0 )
        v26 = *((_DWORD *)v24 + 7);
      v27 = *((_BYTE *)v25 + 88);
      v28 = v27 & 0xF0;
      if ( (v27 & 0xF0) == 0xC0 )
        v28 = *((_DWORD *)v25 + 7);
      v12 = v28 < v26;
      if ( v28 != v26 )
        goto LABEL_14;
      v95 = lexcompare_tinfo(v24[4], v25[4], 0, v17, v94);
      if ( v95 )
        return v95;
      v99 = 0;
      while ( 2 )
      {
        if ( (unsigned __int64)v99 < v24[1] )
        {
          v31 = 80LL * v99;
          v32 = v31 + *v24;
          v33 = *v25 + v31;
          v34 = lexcompare_tinfo(*(_QWORD *)(v32 + 64), *(_QWORD *)(v33 + 64), 0, v29, v30);
          if ( v34 )
            return v34;
          v35 = *(_QWORD *)(v32 + 24);
          if ( *(_QWORD *)(v33 + 24) )
          {
            v36 = *(const char **)(v33 + 16);
            v37 = haystack;
            if ( !v35 )
              goto LABEL_39;
          }
          else
          {
            v36 = haystack;
            if ( !v35 )
            {
LABEL_40:
              v38 = *(_DWORD *)(v32 + 72);
              v39 = *(_DWORD *)(v33 + 72);
              if ( v38 < v39 )
                return -1;
              if ( v39 < v38 )
                return 1;
              ++v99;
              continue;
            }
          }
          v37 = *(const char **)(v32 + 16);
LABEL_39:
          v34 = strcmp(v37, v36);
          if ( v34 )
            return v34;
          goto LABEL_40;
        }
        break;
      }
      v73 = *((_BYTE *)v24 + 88);
      v74 = v73 & 0xF0;
      if ( (v73 & 0xF0) == 0xC0 )
        v74 = *((_DWORD *)v24 + 7);
      if ( (unsigned int)(v74 - 208) > 0x2F )
        goto LABEL_116;
      v6 = compare_arglocs(v24 + 5, v25 + 5);
      if ( v6 )
        return v6;
      v82 = *((_DWORD *)v24 + 6);
      if ( (v82 & 0x100) != 0 && (*((_BYTE *)v25 + 25) & 1) != 0 )
        goto LABEL_129;
      if ( (v82 & 0x200) != 0 || (v83 = 0, (*((_BYTE *)v25 + 25) & 2) != 0) )
      {
        if ( (unsigned __int8)sub_688590(v24) )
LABEL_129:
          v83 = 1;
        else
          v83 = sub_688590(v25);
      }
      while ( (unsigned __int64)v6 < v24[1] )
      {
        v84 = 80LL * v6;
        v85 = (_DWORD *)(v84 + *v24);
        v86 = (_DWORD *)(*v25 + v84);
        if ( v83 || *v85 != 1 || *v86 != 1 )
        {
          v34 = compare_arglocs(v85, v86);
          if ( v34 )
            return v34;
        }
        ++v6;
      }
LABEL_116:
      v60 = v24[9];
      v61 = v25[9];
      if ( v60 != v61 )
        goto LABEL_78;
      while ( 1 )
      {
        if ( v95 >= v60 )
        {
          v80 = *((_DWORD *)v24 + 6);
          v81 = *((_DWORD *)v25 + 6);
          BYTE1(v80) &= ~1u;
          BYTE1(v81) &= ~1u;
          if ( v80 < v81 )
            return -1;
          if ( v80 <= v81 )
            goto LABEL_56;
          return 1;
        }
        v75 = 8LL * v95;
        v76 = (_DWORD *)(v25[8] + v75);
        v77 = (_DWORD *)(v24[8] + v75);
        v78 = *v77 <= *v76;
        if ( *v77 != *v76 )
          break;
        v79 = v76[1];
        v78 = v77[1] <= v79;
        if ( v77[1] != v79 )
          break;
        ++v95;
      }
      v6 = 1;
      if ( v78 )
        return -1;
      return v6;
    case 0xD:
      v19 = v15 & 0x30;
      if ( v19 != 32 )
      {
        if ( v19 > 0x20u )
        {
          if ( !under_debugger )
            interr(1065);
          BUG();
        }
        v20 = *(_QWORD **)v9;
        v21 = *(_QWORD **)v10;
        v22 = *(_QWORD *)(*(_QWORD *)v9 + 8LL);
        v23 = *(_QWORD *)(*(_QWORD *)v10 + 8LL);
        if ( v22 != v23 )
        {
LABEL_24:
          if ( v23 < v22 )
            return 1;
          return -1;
        }
        for ( i = 0; ; ++i )
        {
          if ( (unsigned __int64)i >= v20[1] )
          {
            v5 = *((_BYTE *)v20 + 49);
            v4 = *((_BYTE *)v21 + 49);
            if ( v5 != v4 )
              goto LABEL_3;
            v5 = *((_BYTE *)v20 + 50);
            v4 = *((_BYTE *)v21 + 50);
            if ( v5 != v4 )
              goto LABEL_3;
            v40 = *((_DWORD *)v20 + 11);
            v41 = *((_DWORD *)v21 + 11);
            if ( v40 == v41 )
              goto LABEL_56;
            goto LABEL_46;
          }
          v64 = (__int64)i << 7;
          v65 = v64 + *v20;
          v66 = *v21 + v64;
          v34 = lexcompare_tinfo(*(_QWORD *)(v65 + 64), *(_QWORD *)(v66 + 64), 0, v17, v18);
          if ( v34 )
            return v34;
          v5 = *(_BYTE *)(v65 + 120);
          v4 = *(_BYTE *)(v66 + 120);
          if ( v5 != v4 )
            goto LABEL_3;
          v67 = *(_QWORD *)(v65 + 24);
          if ( *(_QWORD *)(v66 + 24) )
          {
            v62 = *(const char **)(v66 + 16);
            v63 = haystack;
            if ( !v67 )
              goto LABEL_83;
          }
          else
          {
            v62 = haystack;
            if ( !v67 )
              goto LABEL_84;
          }
          v63 = *(const char **)(v65 + 16);
LABEL_83:
          v34 = strcmp(v63, v62);
          if ( v34 )
            return v34;
LABEL_84:
          v40 = *(_DWORD *)(v65 + 116);
          v41 = *(_DWORD *)(v66 + 116);
          if ( v40 != v41 )
            goto LABEL_46;
        }
      }
      v58 = *(_QWORD **)v9;
      v59 = *(_QWORD **)v10;
      v60 = *(_QWORD *)(*(_QWORD *)v9 + 8LL);
      v61 = *(_QWORD *)(*(_QWORD *)v10 + 8LL);
      if ( v60 != v61 )
      {
LABEL_78:
        if ( v61 < v60 )
          return 1;
        return -1;
      }
      v68 = v58[4];
      v69 = v59[4];
      if ( v68 != v69 )
      {
LABEL_93:
        if ( v69 < v68 )
          return 1;
        return -1;
      }
      v70 = v58[3];
      for ( j = 0; j < v68; ++j )
      {
        v72 = *(_DWORD *)(v59[3] + 4LL * j);
        if ( *(_DWORD *)(v70 + 4LL * j) < v72 )
          return -1;
        if ( *(_DWORD *)(v70 + 4LL * j) > v72 )
          return 1;
      }
      v87 = 0;
      break;
    case 0xE:
      v6 = sub_51A1C0(
             *(_BYTE *)v9,
             *(_BYTE *)(v9 + 1),
             *(_BYTE *)(v9 + 2),
             *(_BYTE *)v10,
             *(_BYTE *)(v10 + 1),
             *(_BYTE *)(v10 + 2));
LABEL_55:
      if ( !v6 )
        goto LABEL_56;
      return v6;
    default:
LABEL_56:
      v47 = *(__int64 **)(v9 + 40);
      v48 = *(__int64 **)(v10 + 40);
      if ( !v47 )
        return -(v48 != nullptr);
      if ( !v48 )
        return 1;
      v49 = v47[1];
      v50 = v48[1];
      if ( v49 != v50 )
      {
        if ( v50 < v49 )
          return 1;
        return -1;
      }
      if ( !v49 )
        return 0;
      v51 = *v47;
      v13 = 0;
      v96 = *v48;
      v14 = 0;
      while ( 2 )
      {
        v52 = v96 + 48 * v14;
        v53 = v51 + 48 * v14;
        v54 = *(_QWORD *)(v53 + 8);
        if ( *(_QWORD *)(v52 + 8) )
        {
          v55 = *(const char **)v52;
          v56 = haystack;
          if ( !v54 )
            goto LABEL_67;
        }
        else
        {
          v55 = haystack;
          if ( !v54 )
            goto LABEL_68;
        }
        v56 = *(const char **)v53;
LABEL_67:
        v6 = strcmp(v56, v55);
        if ( v6 )
          return v6;
LABEL_68:
        v57 = *(_QWORD *)(v52 + 32);
        v102 = v57;
        if ( *(_QWORD *)(v53 + 32) <= v57 )
          v57 = *(_QWORD *)(v53 + 32);
        v100 = *(_QWORD *)(v53 + 32);
        if ( !v57 )
          goto LABEL_16;
        v6 = memcmp(*(const void **)(v53 + 24), *(const void **)(v52 + 24), v57);
        if ( v6 )
          return v6;
        if ( v100 == v102 )
        {
LABEL_16:
          v14 = ++v13;
          if ( v13 >= v49 )
            return 0;
          continue;
        }
        break;
      }
      if ( v102 < v100 )
        return 1;
      return -1;
  }
  while ( v87 < v60 )
  {
    v91 = 56LL * v87;
    v90 = v91 + *v58;
    v92 = *v59 + v91;
    v93 = *(_QWORD *)(v90 + 8);
    if ( *(_QWORD *)(v92 + 8) )
    {
      v88 = *(const char **)v92;
      v89 = haystack;
      if ( !v93 )
        goto LABEL_145;
    }
    else
    {
      v88 = haystack;
      if ( !v93 )
        goto LABEL_146;
    }
    v89 = *(const char **)v90;
LABEL_145:
    v101 = v90;
    v98 = v60;
    v34 = strcmp(v89, v88);
    v60 = v98;
    v90 = v101;
    if ( v34 )
      return v34;
LABEL_146:
    v68 = *(_QWORD *)(v90 + 48);
    v69 = *(_QWORD *)(v92 + 48);
    if ( v68 != v69 )
      goto LABEL_93;
    ++v87;
  }
  v40 = *((_DWORD *)v58 + 12);
  v41 = *((_DWORD *)v59 + 12);
  if ( v40 != v41 )
  {
LABEL_46:
    if ( v41 < v40 )
      return 1;
    return -1;
  }
  v5 = *((_BYTE *)v58 + 52);
  v4 = *((_BYTE *)v59 + 52);
  if ( v5 == v4 )
    goto LABEL_56;
LABEL_3:
  if ( v4 < v5 )
    return 1;
  return -1;
}

