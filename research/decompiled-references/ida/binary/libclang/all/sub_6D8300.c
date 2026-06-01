bool __fastcall sub_6D8300(__int64 a1, _BYTE *a2)
{
  bool v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  char v9; // di
  __int64 v10; // rax
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 *v15; // rax
  char v16; // si
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  char v24; // r12
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax

  if ( (a2[28] & 0x7Fu) - 38 <= 6 )
  {
    v5 = (unsigned int)sub_6D8040(a1, (__int64)a2) == 0;
    if ( (a2[29] & 1) == 0 )
      return 0;
  }
  else
  {
    if ( (a2[29] & 1) == 0 )
      return 0;
    v5 = 0;
  }
  v6 = sub_79A2B0(a2);
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
  if ( v7 < v8 )
  {
    while ( *(_WORD *)(*(_QWORD *)v7 + 32LL) != 154 )
    {
      v7 += 8LL;
      if ( v8 == v7 )
        goto LABEL_74;
    }
  }
  else
  {
    if ( v7 == v8 )
    {
LABEL_74:
      v9 = a2[29];
      goto LABEL_21;
    }
    while ( *(_WORD *)(*(_QWORD *)v8 + 32LL) != 154 )
    {
      v8 += 8LL;
      if ( v7 == v8 )
        goto LABEL_74;
    }
  }
  v9 = a2[29];
  if ( v7 != v8 )
  {
    if ( (a2[29] & 1) == 0 )
      goto LABEL_89;
    v10 = sub_79A2B0(a2);
    v11 = *(_QWORD **)v10;
    v12 = *(_QWORD *)v10 + 8LL * *(unsigned int *)(v10 + 8);
    if ( (unsigned __int64)v11 >= v12 )
    {
      if ( v11 == (_QWORD *)v12 )
        goto LABEL_89;
      while ( *(_WORD *)(*(_QWORD *)v12 + 32LL) != 154 )
      {
        v12 += 8LL;
        if ( v11 == (_QWORD *)v12 )
          goto LABEL_89;
      }
      v13 = v11;
    }
    else
    {
      v13 = v11;
      while ( *(_WORD *)(*v13 + 32LL) != 154 )
      {
        if ( (_QWORD *)v12 == ++v13 )
          goto LABEL_89;
      }
    }
    if ( v13 == (_QWORD *)v12 )
      goto LABEL_89;
    v14 = *v11;
    if ( *(_WORD *)(*v11 + 32LL) != 154 )
    {
      v15 = v11 + 1;
      do
        v14 = *v15++;
      while ( *(_WORD *)(v14 + 32) != 154 );
    }
    v9 = a2[29];
    v16 = v9 & 1;
    if ( (*(_BYTE *)(v14 + 34) & 4) == 0 )
      goto LABEL_60;
  }
LABEL_21:
  if ( (v9 & 1) == 0 )
    return 0;
  v17 = sub_79A2B0(a2);
  v18 = *(_QWORD *)v17;
  v16 = a2[29] & 1;
  v19 = *(_QWORD *)v17 + 8LL * *(unsigned int *)(v17 + 8);
  if ( v18 < v19 )
  {
    while ( *(_WORD *)(*(_QWORD *)v18 + 32LL) != 153 )
    {
      v18 += 8LL;
      if ( v19 == v18 )
        goto LABEL_86;
    }
LABEL_27:
    if ( v18 == v19 )
      goto LABEL_86;
    if ( v16 )
    {
      v20 = sub_79A2B0(a2);
      v21 = *(_QWORD *)v20;
      v22 = *(_QWORD *)v20 + 8LL * *(unsigned int *)(v20 + 8);
      if ( v21 < v22 )
      {
        v23 = v21;
        while ( *(_WORD *)(*(_QWORD *)v23 + 32LL) != 153 )
        {
          v23 += 8LL;
          if ( v22 == v23 )
            goto LABEL_89;
        }
LABEL_33:
        if ( v23 == v22 )
          goto LABEL_89;
        while ( *(_WORD *)(*(_QWORD *)v21 + 32LL) != 153 )
          v21 += 8LL;
        v16 = a2[29] & 1;
        if ( (*(_BYTE *)(*(_QWORD *)v21 + 34LL) & 4) != 0 )
        {
          if ( !v5 )
            goto LABEL_61;
          if ( !v16 )
            return 0;
          goto LABEL_40;
        }
LABEL_60:
        if ( v5 )
        {
          if ( !v16 )
            return 1;
          v24 = 1;
LABEL_41:
          v25 = sub_79A2B0(a2);
          v26 = *(_QWORD *)v25;
          v27 = *(_QWORD *)v25 + 8LL * *(unsigned int *)(v25 + 8);
          if ( v26 < v27 )
          {
            while ( *(_WORD *)(*(_QWORD *)v26 + 32LL) != 218 )
            {
              v26 += 8LL;
              if ( v27 == v26 )
                goto LABEL_47;
            }
            v24 |= v26 != v27;
          }
          else if ( v26 != v27 )
          {
            while ( *(_WORD *)(*(_QWORD *)v27 + 32LL) != 218 )
            {
              v27 += 8LL;
              if ( v26 == v27 )
                goto LABEL_47;
            }
            v24 |= v27 != v26;
          }
LABEL_47:
          if ( !v24 )
          {
            v16 = a2[29] & 1;
            goto LABEL_61;
          }
          return 1;
        }
        goto LABEL_61;
      }
      if ( v21 != v22 )
      {
        while ( *(_WORD *)(*(_QWORD *)v22 + 32LL) != 153 )
        {
          v22 += 8LL;
          if ( v21 == v22 )
            goto LABEL_89;
        }
        v23 = v21;
        goto LABEL_33;
      }
    }
LABEL_89:
    BUG();
  }
  if ( v18 != v19 )
  {
    while ( *(_WORD *)(*(_QWORD *)v19 + 32LL) != 153 )
    {
      v19 += 8LL;
      if ( v18 == v19 )
        goto LABEL_86;
    }
    goto LABEL_27;
  }
LABEL_86:
  if ( v5 )
  {
    if ( !v16 )
      return 0;
LABEL_40:
    v24 = 0;
    goto LABEL_41;
  }
LABEL_61:
  if ( !v16 )
    return 0;
  v28 = sub_79A2B0(a2);
  v29 = *(_QWORD *)v28;
  v30 = *(_QWORD *)v28 + 8LL * *(unsigned int *)(v28 + 8);
  if ( v29 < v30 )
  {
    while ( *(_WORD *)(*(_QWORD *)v29 + 32LL) != 157 )
    {
      v29 += 8LL;
      if ( v30 == v29 )
        return 0;
    }
  }
  else
  {
    if ( v29 == v30 )
      return 0;
    while ( *(_WORD *)(*(_QWORD *)v30 + 32LL) != 157 )
    {
      v30 += 8LL;
      if ( v29 == v30 )
        return 0;
    }
  }
  if ( v29 == v30 )
    return 0;
  return (unsigned int)sub_6A6F00(a1, a2) == 0;
}

