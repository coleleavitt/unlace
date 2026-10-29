__int64 __fastcall sub_77E660(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned int v5; // ecx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v2 = sub_79A2B0(a1);
  v3 = *(_QWORD *)v2;
  v4 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8);
  if ( v3 < v4 )
  {
    while ( *(_WORD *)(*(_QWORD *)v3 + 32LL) != 367 )
    {
      v3 += 8LL;
      if ( v4 == v3 )
        goto LABEL_13;
    }
  }
  else
  {
    if ( v3 == v4 )
      goto LABEL_13;
    while ( *(_WORD *)(*(_QWORD *)v4 + 32LL) != 367 )
    {
      v4 += 8LL;
      if ( v3 == v4 )
        goto LABEL_13;
    }
  }
  v5 = 1;
  if ( v3 != v4 )
    return v5;
LABEL_13:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v6 = sub_79A2B0(a1);
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
  if ( v7 < v8 )
  {
    while ( *(_WORD *)(*(_QWORD *)v7 + 32LL) != 369 )
    {
      v7 += 8LL;
      if ( v8 == v7 )
        goto LABEL_20;
    }
  }
  else
  {
    if ( v7 == v8 )
      goto LABEL_20;
    while ( *(_WORD *)(*(_QWORD *)v8 + 32LL) != 369 )
    {
      v8 += 8LL;
      if ( v7 == v8 )
        goto LABEL_20;
    }
  }
  v5 = 5;
  if ( v7 != v8 )
    return v5;
LABEL_20:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v9 = sub_79A2B0(a1);
  v10 = *(_QWORD *)v9;
  v11 = *(_QWORD *)v9 + 8LL * *(unsigned int *)(v9 + 8);
  if ( v10 < v11 )
  {
    while ( *(_WORD *)(*(_QWORD *)v10 + 32LL) != 151 )
    {
      v10 += 8LL;
      if ( v11 == v10 )
        goto LABEL_23;
    }
  }
  else
  {
    if ( v10 == v11 )
      goto LABEL_23;
    while ( *(_WORD *)(*(_QWORD *)v11 + 32LL) != 151 )
    {
      v11 += 8LL;
      if ( v10 == v11 )
        goto LABEL_23;
    }
  }
  v5 = 3;
  if ( v10 != v11 )
    return v5;
LABEL_23:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v12 = sub_79A2B0(a1);
  v13 = *(_QWORD *)v12;
  v14 = *(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 8);
  if ( v13 < v14 )
  {
    while ( *(_WORD *)(*(_QWORD *)v13 + 32LL) != 152 )
    {
      v13 += 8LL;
      if ( v14 == v13 )
        goto LABEL_30;
    }
  }
  else
  {
    if ( v13 == v14 )
      goto LABEL_30;
    while ( *(_WORD *)(*(_QWORD *)v14 + 32LL) != 152 )
    {
      v14 += 8LL;
      if ( v13 == v14 )
        goto LABEL_30;
    }
  }
  v5 = 2;
  if ( v13 == v14 )
  {
LABEL_30:
    if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
    {
      v15 = sub_79A2B0(a1);
      v16 = *(_QWORD *)v15;
      v17 = *(_QWORD *)v15 + 8LL * *(unsigned int *)(v15 + 8);
      if ( v16 < v17 )
      {
        while ( *(_WORD *)(*(_QWORD *)v16 + 32LL) != 368 )
        {
          v16 += 8LL;
          if ( v17 == v16 )
            return 0;
        }
        return 4 * (unsigned int)(v17 != v16);
      }
      if ( v16 != v17 )
      {
        while ( *(_WORD *)(*(_QWORD *)v17 + 32LL) != 368 )
        {
          v17 += 8LL;
          if ( v16 == v17 )
            return 0;
        }
        return 4 * (unsigned int)(v16 != v17);
      }
    }
    return 0;
  }
  return v5;
}

