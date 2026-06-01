__int64 __fastcall sub_77F000(__int64 a1, char a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 *v7; // rax
  int v8; // eax
  unsigned int v9; // r12d
  _QWORD *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rdx
  unsigned __int64 v26; // rax
  _QWORD *v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rax
  unsigned __int64 v35; // rdx
  _QWORD *v36; // rcx
  __int64 v37; // rdx
  __int64 *v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v2 = sub_79A2B0(a1);
  v3 = *(_QWORD **)v2;
  v4 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8);
  if ( (unsigned __int64)v3 >= v4 )
  {
    if ( v3 == (_QWORD *)v4 )
    {
LABEL_56:
      if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
        return 0;
      v24 = sub_79A2B0(a1);
      v25 = *(_QWORD **)v24;
      v26 = *(_QWORD *)v24 + 8LL * *(unsigned int *)(v24 + 8);
      if ( (unsigned __int64)v25 >= v26 )
      {
        if ( v25 == (_QWORD *)v26 )
          goto LABEL_96;
        while ( *(_WORD *)(*(_QWORD *)v26 + 32LL) != 403 )
        {
          v26 += 8LL;
          if ( v25 == (_QWORD *)v26 )
            goto LABEL_96;
        }
        v27 = v25;
      }
      else
      {
        v27 = v25;
        while ( *(_WORD *)(*v27 + 32LL) != 403 )
        {
          if ( (_QWORD *)v26 == ++v27 )
            goto LABEL_96;
        }
      }
      if ( v27 != (_QWORD *)v26 )
      {
        v6 = *v25;
        if ( *(_WORD *)(*v25 + 32LL) != 403 )
        {
          v28 = v25 + 1;
          do
            v6 = *v28++;
          while ( *(_WORD *)(v6 + 32) != 403 );
        }
        goto LABEL_10;
      }
LABEL_96:
      if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
        return 0;
      v33 = sub_79A2B0(a1);
      v34 = *(_QWORD **)v33;
      v35 = *(_QWORD *)v33 + 8LL * *(unsigned int *)(v33 + 8);
      if ( (unsigned __int64)v34 >= v35 )
      {
        if ( v34 == (_QWORD *)v35 )
          return 0;
        while ( *(_WORD *)(*(_QWORD *)v35 + 32LL) != 143 )
        {
          v35 += 8LL;
          if ( v34 == (_QWORD *)v35 )
            return 0;
        }
        v36 = v34;
      }
      else
      {
        v36 = v34;
        while ( *(_WORD *)(*v36 + 32LL) != 143 )
        {
          if ( (_QWORD *)v35 == ++v36 )
            return 0;
        }
      }
      if ( v36 == (_QWORD *)v35 )
        return 0;
      v37 = *v34;
      if ( *(_WORD *)(*v34 + 32LL) != 143 )
      {
        v38 = v34 + 1;
        do
          v37 = *v38++;
        while ( *(_WORD *)(v37 + 32) != 143 );
      }
      v9 = *(_DWORD *)(v37 + 36);
      goto LABEL_13;
    }
    while ( *(_WORD *)(*(_QWORD *)v4 + 32LL) != 127 )
    {
      v4 += 8LL;
      if ( v3 == (_QWORD *)v4 )
        goto LABEL_56;
    }
    v5 = v3;
  }
  else
  {
    v5 = v3;
    while ( *(_WORD *)(*v5 + 32LL) != 127 )
    {
      if ( (_QWORD *)v4 == ++v5 )
        goto LABEL_56;
    }
  }
  if ( v5 == (_QWORD *)v4 )
    goto LABEL_56;
  v6 = *v3;
  if ( *(_WORD *)(*v3 + 32LL) != 127 )
  {
    v7 = v3 + 1;
    do
      v6 = *v7++;
    while ( *(_WORD *)(v6 + 32) != 127 );
  }
LABEL_10:
  v8 = **(_DWORD **)(v6 + 40) >> 9;
  if ( (_WORD)v8 == 0xFFFE || (unsigned __int16)v8 <= 0x23u )
    return 0;
  v9 = (unsigned __int16)v8 - 36;
LABEL_13:
  if ( !v9 )
    return 0;
  if ( !a2 && (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v15 = sub_79A2B0(a1);
    v16 = *(_QWORD *)v15;
    v17 = *(_QWORD *)v15 + 8LL * *(unsigned int *)(v15 + 8);
    if ( v16 < v17 )
    {
      while ( *(_WORD *)(*(_QWORD *)v16 + 32LL) != 425 )
      {
        v16 += 8LL;
        if ( v17 == v16 )
          goto LABEL_15;
      }
    }
    else
    {
      if ( v16 == v17 )
        goto LABEL_15;
      while ( *(_WORD *)(*(_QWORD *)v17 + 32LL) != 425 )
      {
        v17 += 8LL;
        if ( v16 == v17 )
          goto LABEL_15;
      }
    }
    if ( v16 != v17 )
    {
      if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
        return 0;
      v18 = sub_79A2B0(a1);
      v19 = *(_QWORD *)v18;
      v20 = *(_QWORD *)v18 + 8LL * *(unsigned int *)(v18 + 8);
      if ( v19 < v20 )
      {
        while ( *(_WORD *)(*(_QWORD *)v19 + 32LL) != 127 )
        {
          v19 += 8LL;
          if ( v20 == v19 )
            goto LABEL_48;
        }
      }
      else
      {
        if ( v19 == v20 )
        {
LABEL_48:
          if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
            return 0;
          v21 = sub_79A2B0(a1);
          v22 = *(_QWORD *)v21;
          v23 = *(_QWORD *)v21 + 8LL * *(unsigned int *)(v21 + 8);
          if ( v22 < v23 )
          {
            while ( *(_WORD *)(*(_QWORD *)v22 + 32LL) != 403 )
            {
              v22 += 8LL;
              if ( v23 == v22 )
                return 0;
            }
          }
          else
          {
            if ( v22 == v23 )
              return 0;
            while ( *(_WORD *)(*(_QWORD *)v23 + 32LL) != 403 )
            {
              v23 += 8LL;
              if ( v22 == v23 )
                return 0;
            }
          }
          if ( v22 == v23 )
            return 0;
          goto LABEL_15;
        }
        while ( *(_WORD *)(*(_QWORD *)v20 + 32LL) != 127 )
        {
          v20 += 8LL;
          if ( v19 == v20 )
            goto LABEL_48;
        }
      }
      if ( v19 != v20 )
        goto LABEL_15;
      goto LABEL_48;
    }
  }
LABEL_15:
  v10 = (_QWORD *)sub_798D40(a1);
  if ( (*(_BYTE *)(v10[270] + 1LL) & 8) != 0 && v9 == 395 )
    return 0;
  v11 = sub_C63970(v10[2170], v9);
  if ( !strchr(*(const char **)(v11 + 24), 102) )
    return v9;
  if ( !a2 && *(_BYTE *)(a1 + 81) >> 5 == 2 )
    return 0;
  v12 = v10[270];
  if ( (*(_BYTE *)(v12 + 47) & 0x20) == 0 )
    goto LABEL_21;
  v29 = sub_C63970(v10[2170], v9);
  if ( strchr(*(const char **)(v29 + 24), 102) )
    return 0;
  v12 = v10[270];
LABEL_21:
  if ( (*(_BYTE *)(v12 + 60) & 0x10) != 0 && (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v30 = sub_79A2B0(a1);
    v31 = *(_QWORD *)v30;
    v32 = *(_QWORD *)v30 + 8LL * *(unsigned int *)(v30 + 8);
    if ( v31 < v32 )
    {
      while ( *(_WORD *)(*(_QWORD *)v31 + 32LL) != 154 )
      {
        v31 += 8LL;
        if ( v32 == v31 )
          goto LABEL_22;
      }
    }
    else
    {
      if ( v31 == v32 )
        goto LABEL_22;
      while ( *(_WORD *)(*(_QWORD *)v32 + 32LL) != 154 )
      {
        v32 += 8LL;
        if ( v31 == v32 )
          goto LABEL_22;
      }
    }
    if ( v31 != v32 )
    {
      if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
      {
LABEL_90:
        if ( v9 != 1024 && v9 != 904 )
          return 0;
        goto LABEL_22;
      }
      v39 = sub_79A2B0(a1);
      v40 = *(_QWORD *)v39;
      v41 = *(_QWORD *)v39 + 8LL * *(unsigned int *)(v39 + 8);
      if ( v40 < v41 )
      {
        while ( *(_WORD *)(*(_QWORD *)v40 + 32LL) != 159 )
        {
          v40 += 8LL;
          if ( v41 == v40 )
            goto LABEL_90;
        }
      }
      else
      {
        if ( v40 == v41 )
          goto LABEL_90;
        while ( *(_WORD *)(*(_QWORD *)v41 + 32LL) != 159 )
        {
          v41 += 8LL;
          if ( v40 == v41 )
            goto LABEL_90;
        }
      }
      if ( v40 != v41 )
        goto LABEL_22;
      goto LABEL_90;
    }
  }
LABEL_22:
  if ( *(_DWORD *)(v10[2161] + 248LL) == 26 && (*(_BYTE *)(v10[270] + 68LL) & 8) != 0 )
  {
    v13 = sub_C63970(v10[2170], v9);
    if ( strchr(*(const char **)(v13 + 24), 102) )
    {
      if ( v9 != 1024 && v9 != 904 )
        return 0;
    }
  }
  return v9;
}

