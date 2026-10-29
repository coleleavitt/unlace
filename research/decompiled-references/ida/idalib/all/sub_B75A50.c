__int64 __fastcall sub_B75A50(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 *v3; // rdx
  unsigned __int64 v4; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // rdx
  unsigned __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // rdx
  _DWORD *v21; // rax
  int v22; // ebx
  _QWORD *v23; // r13
  const char *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 *v29; // rax
  const char *v30; // rax
  __int64 *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 *v37; // rax
  const char *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 *v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 *v46; // rax
  __int64 *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 *v50; // rdx
  unsigned __int64 v51; // rcx
  __int64 *v52; // rax
  __int64 *v53; // rax
  __int64 v54; // rcx
  __int64 *v55; // rax
  __int64 v56; // rcx

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v2 = sub_B8C3D0(a1);
  v3 = *(__int64 **)v2;
  v4 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8);
  if ( (unsigned __int64)v3 >= v4 )
  {
    if ( v3 == (__int64 *)v4 )
      goto LABEL_8;
    if ( *(_WORD *)(*(_QWORD *)v4 + 36LL) != 135 )
    {
      v5 = (__int64 *)(v4 + 8);
      while ( v5 != v3 )
      {
        v6 = *v5++;
        if ( *(_WORD *)(v6 + 36) == 135 )
          goto LABEL_26;
      }
      goto LABEL_8;
    }
LABEL_26:
    v19 = *v3;
    if ( *(_WORD *)(*v3 + 36) != 135 )
    {
      v20 = v3 + 1;
      do
        v19 = *v20++;
      while ( *(_WORD *)(v19 + 36) != 135 );
    }
    v21 = *(_DWORD **)(v19 + 40);
    goto LABEL_30;
  }
  v18 = v3;
  if ( *(_WORD *)(*v3 + 36) == 135 )
  {
LABEL_25:
    if ( (__int64 *)v4 == v18 )
      goto LABEL_8;
    goto LABEL_26;
  }
  while ( (__int64 *)v4 != ++v18 )
  {
    if ( *(_WORD *)(*v18 + 36) == 135 )
      goto LABEL_25;
  }
LABEL_8:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v7 = sub_B8C3D0(a1);
  v8 = *(__int64 **)v7;
  v9 = *(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8);
  if ( (unsigned __int64)v8 < v9 )
  {
    v31 = v8;
    while ( *(_WORD *)(*v31 + 36) != 413 )
    {
      if ( (__int64 *)v9 == ++v31 )
        goto LABEL_15;
    }
    if ( (__int64 *)v9 == v31 )
      goto LABEL_15;
LABEL_64:
    v36 = *v8;
    if ( *(_WORD *)(*v8 + 36) != 413 )
    {
      v37 = v8 + 1;
      do
        v36 = *v37++;
      while ( *(_WORD *)(v36 + 36) != 413 );
    }
    v21 = *(_DWORD **)(v36 + 40);
LABEL_30:
    v22 = (unsigned __int16)(*v21 >> 9);
    if ( v22 == 65534 || (unsigned __int16)(*v21 >> 9) <= 0x23u )
      return 0;
    v16 = v22 - 36;
    goto LABEL_33;
  }
  if ( v8 != (__int64 *)v9 )
  {
    if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 413 )
    {
      v10 = (__int64 *)(v9 + 8);
      while ( v8 != v10 )
      {
        v11 = *v10++;
        if ( *(_WORD *)(v11 + 36) == 413 )
          goto LABEL_64;
      }
      goto LABEL_15;
    }
    goto LABEL_64;
  }
LABEL_15:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v12 = sub_B8C3D0(a1);
  v13 = *(_QWORD *)v12;
  v14 = *(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 8);
  if ( v13 >= v14 )
  {
    if ( v13 == v14 )
      return 0;
    while ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 149 )
    {
      v14 += 8LL;
      if ( v13 == v14 )
        return 0;
    }
  }
  else
  {
    v15 = v13;
    while ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 149 )
    {
      v15 += 8LL;
      if ( v14 == v15 )
        return 0;
    }
    if ( v14 == v15 )
      return 0;
  }
  while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 149 )
    v13 += 8LL;
  v16 = *(_DWORD *)(*(_QWORD *)v13 + 40LL);
LABEL_33:
  if ( !v16 )
    return 0;
  if ( !a2 && (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v32 = sub_B8C3D0(a1);
    v33 = *(_QWORD *)v32;
    v34 = *(_QWORD *)v32 + 8LL * *(unsigned int *)(v32 + 8);
    if ( *(_QWORD *)v32 >= v34 )
    {
      if ( v33 == v34 )
        goto LABEL_36;
      while ( *(_WORD *)(*(_QWORD *)v34 + 36LL) != 435 )
      {
        v34 += 8LL;
        if ( v33 == v34 )
          goto LABEL_36;
      }
    }
    else
    {
      v35 = *(_QWORD *)v32;
      while ( *(_WORD *)(*(_QWORD *)v35 + 36LL) != 435 )
      {
        v35 += 8;
        if ( v34 == v35 )
          goto LABEL_36;
      }
      if ( v34 == v35 )
        goto LABEL_36;
    }
    if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
      return 0;
    v39 = sub_B8C3D0(a1);
    v40 = *(_QWORD *)v39;
    v41 = *(_QWORD *)v39 + 8LL * *(unsigned int *)(v39 + 8);
    if ( *(_QWORD *)v39 >= v41 )
    {
      if ( v40 != v41 )
      {
        while ( *(_WORD *)(*(_QWORD *)v41 + 36LL) != 135 )
        {
          v41 += 8LL;
          if ( v40 == v41 )
            goto LABEL_79;
        }
        goto LABEL_36;
      }
    }
    else
    {
      v42 = *(_QWORD *)v39;
      while ( *(_WORD *)(*(_QWORD *)v42 + 36LL) != 135 )
      {
        v42 += 8;
        if ( v41 == v42 )
          goto LABEL_79;
      }
      if ( v41 != v42 )
        goto LABEL_36;
    }
LABEL_79:
    if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
      return 0;
    v43 = sub_B8C3D0(a1);
    v44 = *(__int64 **)v43;
    v45 = *(_QWORD *)v43 + 8LL * *(unsigned int *)(v43 + 8);
    if ( *(_QWORD *)v43 >= v45 )
    {
      if ( v44 == (__int64 *)v45 )
        return 0;
      if ( *(_WORD *)(*(_QWORD *)v45 + 36LL) != 413 )
      {
        v53 = (__int64 *)(v45 + 8);
        while ( v44 != v53 )
        {
          v54 = *v53++;
          if ( *(_WORD *)(v54 + 36) == 413 )
            goto LABEL_36;
        }
        return 0;
      }
    }
    else
    {
      v46 = *(__int64 **)v43;
      while ( *(_WORD *)(*v46 + 36) != 413 )
      {
        if ( (__int64 *)v45 == ++v46 )
          return 0;
      }
      if ( (__int64 *)v45 == v46 )
        return 0;
    }
  }
LABEL_36:
  v23 = (_QWORD *)sub_B8C330(a1);
  if ( (*(_BYTE *)(v23[290] + 1LL) & 8) != 0 && v16 == 398 )
    return 0;
  v24 = (const char *)sub_FBD4B0(v23[2190], v16);
  if ( !strchr(v24, 102) )
    return v16;
  if ( !a2 && *(_BYTE *)(a1 + 81) >> 5 == 2 )
    return 0;
  v25 = v23[290];
  if ( (*(_BYTE *)(v25 + 47) & 0x20) != 0 )
  {
    v38 = (const char *)sub_FBD4B0(v23[2190], v16);
    if ( !strchr(v38, 102) )
    {
      v25 = v23[290];
      goto LABEL_42;
    }
    return 0;
  }
LABEL_42:
  if ( (*(_BYTE *)(v25 + 60) & 0x10) == 0 || (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_48;
  v26 = sub_B8C3D0(a1);
  v27 = *(__int64 **)v26;
  v28 = *(_QWORD *)v26 + 8LL * *(unsigned int *)(v26 + 8);
  if ( *(_QWORD *)v26 >= v28 )
  {
    if ( v27 == (__int64 *)v28 )
      goto LABEL_48;
    if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 160 )
    {
      v47 = (__int64 *)(v28 + 8);
      while ( v27 != v47 )
      {
        v48 = *v47++;
        if ( *(_WORD *)(v48 + 36) == 160 )
          goto LABEL_103;
      }
      goto LABEL_48;
    }
  }
  else
  {
    v29 = *(__int64 **)v26;
    while ( *(_WORD *)(*v29 + 36) != 160 )
    {
      if ( (__int64 *)v28 == ++v29 )
        goto LABEL_48;
    }
    if ( (__int64 *)v28 == v29 )
      goto LABEL_48;
  }
LABEL_103:
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v49 = sub_B8C3D0(a1);
    v50 = *(__int64 **)v49;
    v51 = *(_QWORD *)v49 + 8LL * *(unsigned int *)(v49 + 8);
    if ( *(_QWORD *)v49 >= v51 )
    {
      if ( v50 != (__int64 *)v51 )
      {
        if ( *(_WORD *)(*(_QWORD *)v51 + 36LL) == 165 )
          goto LABEL_48;
        v55 = (__int64 *)(v51 + 8);
        while ( v50 != v55 )
        {
          v56 = *v55++;
          if ( *(_WORD *)(v56 + 36) == 165 )
            goto LABEL_48;
        }
      }
    }
    else
    {
      v52 = *(__int64 **)v49;
      while ( *(_WORD *)(*v52 + 36) != 165 )
      {
        if ( (__int64 *)v51 == ++v52 )
          goto LABEL_104;
      }
      if ( (__int64 *)v51 != v52 )
        goto LABEL_48;
    }
  }
LABEL_104:
  if ( v16 != 1057 && v16 != 937 )
    return 0;
LABEL_48:
  if ( *(_DWORD *)(v23[2181] + 248LL) == 26 && (*(_BYTE *)(v23[290] + 68LL) & 8) != 0 )
  {
    v30 = (const char *)sub_FBD4B0(v23[2190], v16);
    if ( strchr(v30, 102) )
    {
      if ( v16 != 1057 && v16 != 937 )
        return 0;
    }
  }
  return v16;
}
