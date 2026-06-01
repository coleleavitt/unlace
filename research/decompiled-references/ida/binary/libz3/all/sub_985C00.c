__int64 __fastcall sub_985C00(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // esi
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 v9; // rax
  _DWORD *v10; // rdx
  _DWORD *v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  char v19; // cl
  __int64 v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  _DWORD *v24; // rdx
  _DWORD *v25; // rsi
  __int64 v26; // rdi

  v5 = a3 & 7;
  if ( dword_1C7EC90 == a2 )
  {
    if ( v5 != 2 )
    {
      if ( v5 <= 2 )
      {
        if ( (a3 & 7) != 0 )
        {
          v7 = 0;
          v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8872LL);
LABEL_5:
          if ( v7 < (*(_DWORD *)(v6 + (a3 & 0x7FFFFFFF0LL) + 8) & 0xFFFFFFu) )
            return *(_DWORD *)(v6 + (a3 & 0x7FFFFFFF0LL) + 8) & 0xFFFFFF;
          return v7;
        }
        v14 = a3 & 0xFFFFFFFFFFFFFFF8LL;
        v7 = 0;
        v16 = *(_DWORD *)v14;
        goto LABEL_29;
      }
      v7 = 0;
LABEL_11:
      if ( v5 != 3 )
      {
        sub_1872CE0("");
        sub_1873130(114, 307);
      }
      v9 = *(_QWORD *)(a1 + 328);
      if ( v9 )
        *(_DWORD *)(v9 - 4) = 0;
      sub_984A90(a1, a3 & 0xFFFFFFFFFFFFFFF8LL, a1 + 328);
      sub_9827B0(a1, 0);
      v10 = *(_DWORD **)(a1 + 328);
      if ( !v10 )
        return v7;
      v11 = &v10[*(v10 - 1)];
      if ( v10 == v11 )
        return v7;
      v12 = 0;
      do
      {
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8872LL);
        if ( v12 < (*(_DWORD *)(v13 + 16LL * (*v10 >> 1) + 8) & 0xFFFFFFu) )
          v12 = *(_DWORD *)(v13 + 16LL * (*v10 >> 1) + 8) & 0xFFFFFF;
        ++v10;
      }
      while ( v11 != v10 );
      goto LABEL_20;
    }
    return 0;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8872LL);
  v7 = *(_DWORD *)(v6 + 16LL * (a2 >> 1) + 8) & 0xFFFFFF;
  if ( v5 == 2 )
    return v7;
  if ( v5 > 2 )
    goto LABEL_11;
  if ( (a3 & 7) != 0 )
    goto LABEL_5;
  v14 = a3 & 0xFFFFFFFFFFFFFFF8LL;
  v5 = 1;
  v15 = *(_DWORD *)(v14 + 8);
  v16 = *(_DWORD *)v14;
  if ( v15 != a2 )
  {
    v5 = 2;
    if ( v7 < (*(_DWORD *)(v6 + 16LL * (v15 >> 1) + 8) & 0xFFFFFFu) )
      v7 = *(_DWORD *)(v6 + 16LL * (v15 >> 1) + 8) & 0xFFFFFF;
  }
LABEL_29:
  if ( v5 < v16 )
  {
    v17 = v14 + 4LL * v5;
    v18 = v14 + 4 * (v5 + (unsigned __int64)(v16 - 1 - v5)) + 4;
    do
    {
      if ( v7 < (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8872LL) + 16LL * (*(_DWORD *)(v17 + 8) >> 1) + 8)
               & 0xFFFFFFu) )
        v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8872LL) + 16LL * (*(_DWORD *)(v17 + 8) >> 1) + 8) & 0xFFFFFF;
      v17 += 4LL;
    }
    while ( v18 != v17 );
  }
  v19 = *(_BYTE *)(v14 + 7);
  if ( (v19 & 0x40) == 0 )
    return v7;
  v20 = v14 + 4LL * (*(_DWORD *)(v14 + 4) & 0xFFFFFF) + 8;
  if ( (v19 & 3u) - 2 < 2 )
    v20 = v14 + 4LL * (*(_DWORD *)(v14 + 4) & 0xFFFFFF) + 12;
  v21 = (__int64 *)((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_BYTE *)(v14 + 7) & 0x20) != 0 )
    ++v21;
  v22 = *v21;
  if ( !*v21 )
    return v7;
  v23 = *(_QWORD *)(a1 + 328);
  if ( v23 )
    *(_DWORD *)(v23 - 4) = 0;
  sub_984A90(a1, v22, a1 + 328);
  sub_9827B0(a1, 0);
  v24 = *(_DWORD **)(a1 + 328);
  if ( !v24 )
    return v7;
  v25 = &v24[*(v24 - 1)];
  if ( v24 == v25 )
    return v7;
  v12 = 0;
  do
  {
    v26 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8872LL);
    if ( v12 < (*(_DWORD *)(v26 + 16LL * (*v24 >> 1) + 8) & 0xFFFFFFu) )
      v12 = *(_DWORD *)(v26 + 16LL * (*v24 >> 1) + 8) & 0xFFFFFF;
    ++v24;
  }
  while ( v25 != v24 );
LABEL_20:
  if ( v7 < v12 )
    return v12;
  return v7;
}

