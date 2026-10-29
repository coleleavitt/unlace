__int64 __fastcall sub_77E3E0(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax

  v1 = *(_BYTE *)(a1 + 29) & 1;
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_2;
  v5 = sub_79A2B0(a1);
  v6 = *(_QWORD *)v5;
  v7 = *(_QWORD *)v5 + 8LL * *(unsigned int *)(v5 + 8);
  if ( v6 < v7 )
  {
    while ( *(_WORD *)(*(_QWORD *)v6 + 32LL) != 272 )
    {
      v6 += 8LL;
      if ( v7 == v6 )
        goto LABEL_11;
    }
  }
  else
  {
    if ( v6 == v7 )
      goto LABEL_11;
    while ( *(_WORD *)(*(_QWORD *)v7 + 32LL) != 272 )
    {
      v7 += 8LL;
      if ( v6 == v7 )
        goto LABEL_11;
    }
  }
  if ( v6 != v7 )
    return v1;
LABEL_11:
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_2;
  v8 = sub_79A2B0(a1);
  v9 = *(_QWORD *)v8;
  v10 = *(_QWORD *)v8 + 8LL * *(unsigned int *)(v8 + 8);
  if ( v9 < v10 )
  {
    while ( *(_WORD *)(*(_QWORD *)v9 + 32LL) != 163 )
    {
      v9 += 8LL;
      if ( v10 == v9 )
        goto LABEL_18;
    }
  }
  else
  {
    if ( v9 == v10 )
      goto LABEL_18;
    while ( *(_WORD *)(*(_QWORD *)v10 + 32LL) != 163 )
    {
      v10 += 8LL;
      if ( v9 == v10 )
        goto LABEL_18;
    }
  }
  if ( v9 != v10 )
    return v1;
LABEL_18:
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v11 = sub_79A2B0(a1);
    v12 = *(_QWORD *)v11;
    v13 = *(_QWORD *)v11 + 8LL * *(unsigned int *)(v11 + 8);
    if ( v12 < v13 )
    {
      while ( *(_WORD *)(*(_QWORD *)v12 + 32LL) != 144 )
      {
        v12 += 8LL;
        if ( v13 == v12 )
          goto LABEL_2;
      }
    }
    else
    {
      if ( v12 == v13 )
        goto LABEL_2;
      while ( *(_WORD *)(*(_QWORD *)v13 + 32LL) != 144 )
      {
        v13 += 8LL;
        if ( v12 == v13 )
          goto LABEL_2;
      }
    }
    if ( v12 != v13 )
      return v1;
  }
LABEL_2:
  v2 = *(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  v3 = *(_QWORD *)v2;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v2 + 16LL) - 25 <= 1 )
    return *(_BYTE *)(v3 + 19) & 1;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1
    && (v3 = sub_B0D320(v3)) != 0 )
  {
    return *(_BYTE *)(v3 + 19) & 1;
  }
  else
  {
    return 0;
  }
}

