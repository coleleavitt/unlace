__int64 __fastcall sub_7861E0(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  char v4; // al
  unsigned __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  _WORD *v22; // rdx

  v2 = *(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  v3 = *(_QWORD *)v2;
  if ( *(_BYTE *)(*(_QWORD *)v2 + 16LL) == 26
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 && (v3 = sub_B0D320(v3)) != 0 )
  {
    v4 = *(_BYTE *)(v3 + 23);
    if ( (v4 & 8) != 0 )
    {
      v5 = (v3 + 4LL * ((v4 & 0x10) != 0) + 8LL * (unsigned __int16)(*(_DWORD *)(v3 + 20) >> 6) + 48 + 7)
         & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v5 + 1) & 4) != 0 )
      {
        v6 = 1;
        if ( (*(_BYTE *)(v5 + 8) & 0xE0) != 0 )
          return v6;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v8 = sub_79A2B0(a1);
  v9 = *(_QWORD *)v8;
  v10 = *(_QWORD *)v8 + 8LL * *(unsigned int *)(v8 + 8);
  if ( v9 < v10 )
  {
    while ( *(_WORD *)(*(_QWORD *)v9 + 32LL) != 129 )
    {
      v9 += 8LL;
      if ( v10 == v9 )
        return 0;
    }
  }
  else
  {
    if ( v9 == v10 )
      return 0;
    while ( *(_WORD *)(*(_QWORD *)v10 + 32LL) != 129 )
    {
      v10 += 8LL;
      if ( v9 == v10 )
        return 0;
    }
  }
  if ( v9 == v10 )
    return 0;
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_63;
  v11 = sub_79A2B0(a1);
  v12 = *(_QWORD *)v11;
  v13 = *(_QWORD *)v11 + 8LL * *(unsigned int *)(v11 + 8);
  if ( v12 >= v13 )
  {
    if ( v12 == v13 )
LABEL_63:
      BUG();
    while ( *(_WORD *)(*(_QWORD *)v13 + 32LL) != 129 )
    {
      v13 += 8LL;
      if ( v12 == v13 )
        goto LABEL_63;
    }
    v14 = v12;
  }
  else
  {
    v14 = v12;
    while ( *(_WORD *)(*(_QWORD *)v14 + 32LL) != 129 )
    {
      v14 += 8LL;
      if ( v13 == v14 )
        goto LABEL_63;
    }
  }
  if ( v14 == v13 )
    goto LABEL_63;
  while ( 1 )
  {
    v15 = *(_QWORD *)v12;
    if ( *(_WORD *)(*(_QWORD *)v12 + 32LL) == 129 )
      break;
    v12 += 8LL;
  }
  v16 = *(_QWORD *)(v15 + 40);
  v17 = 16LL * *(unsigned int *)(v15 + 36);
  v18 = v16 + v17;
  v19 = v17 >> 4;
  v20 = v17 >> 6;
  if ( v20 )
  {
    v21 = v16 + (v20 << 6);
    while ( 1 )
    {
      if ( *(_QWORD *)(v16 + 8) == 3 )
      {
        v22 = *(_WORD **)v16;
        if ( **(_WORD **)v16 == 29818 && *((_BYTE *)v22 + 2) == 48 )
          goto LABEL_38;
      }
      if ( *(_QWORD *)(v16 + 24) == 3 )
      {
        v22 = *(_WORD **)(v16 + 16);
        if ( *v22 == 29818 && *((_BYTE *)v22 + 2) == 48 )
        {
          v16 += 16;
          goto LABEL_38;
        }
      }
      if ( *(_QWORD *)(v16 + 40) == 3 )
      {
        v22 = *(_WORD **)(v16 + 32);
        if ( *v22 == 29818 && *((_BYTE *)v22 + 2) == 48 )
        {
          v16 += 32;
          goto LABEL_38;
        }
      }
      if ( *(_QWORD *)(v16 + 56) == 3 )
      {
        v22 = *(_WORD **)(v16 + 48);
        if ( *v22 == 29818 && *((_BYTE *)v22 + 2) == 48 )
        {
          v16 += 48;
          goto LABEL_38;
        }
      }
      v16 += 64;
      if ( v21 == v16 )
      {
        v19 = (v18 - v16) >> 4;
        break;
      }
    }
  }
  if ( v19 == 2 )
  {
LABEL_61:
    if ( !sub_778FB0("zt0", *(void **)v16, *(_QWORD *)(v16 + 8)) )
    {
      v16 += 16;
LABEL_57:
      if ( sub_778FB0("zt0", *(void **)v16, *(_QWORD *)(v16 + 8)) )
        goto LABEL_38;
      return 0;
    }
    goto LABEL_38;
  }
  if ( v19 != 3 )
  {
    if ( v19 != 1 )
      return 0;
    goto LABEL_57;
  }
  if ( !sub_778FB0("zt0", *(void **)v16, *(_QWORD *)(v16 + 8)) )
  {
    v16 += 16;
    goto LABEL_61;
  }
LABEL_38:
  LOBYTE(v22) = v18 != v16;
  return (unsigned int)v22;
}

