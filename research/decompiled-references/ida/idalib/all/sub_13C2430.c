__int64 __fastcall sub_13C2430(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rsi
  bool v13; // cf
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbx
  char v17; // al
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  char v21; // si
  char v22; // r8
  bool v23; // sf
  bool v24; // zf
  int v25; // eax
  char v26; // dl
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rax

  v3 = a2;
  if ( !*(_QWORD *)(a1 + 1520) )
  {
    v27 = a2;
    while ( 1 )
    {
      v28 = *(_QWORD *)(v27 + 8);
      if ( !v28 )
        break;
      v27 = v28 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v28 & 4) == 0 || !v27 )
        goto LABEL_36;
    }
    v27 = 0;
LABEL_36:
    v29 = *(_QWORD *)(a1 + 336);
    if ( *(unsigned int *)(v27 + 72) >= (unsigned __int64)((*(_QWORD *)(a1 + 344) - v29) >> 4) )
      return 0;
    while ( 1 )
    {
      v30 = *(_QWORD *)(v3 + 8);
      if ( !v30 )
        break;
      v3 = v30 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v30 & 4) == 0 || !v3 )
        goto LABEL_40;
    }
    v3 = 0;
LABEL_40:
    v16 = v29 + 16LL * *(unsigned int *)(v3 + 72);
    if ( !v16 )
      return 0;
LABEL_28:
    if ( (*(_BYTE *)(v16 + 1) & 8) == 0 )
      return 0;
    return v16;
  }
  v5 = a2;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v5 + 8);
    if ( !v6 )
      break;
    v5 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v6 & 4) == 0 || !v5 )
      goto LABEL_6;
  }
  v5 = 0;
LABEL_6:
  v7 = *(_QWORD *)(a1 + 344);
  v8 = *(_QWORD *)(a1 + 336);
  v9 = (*(_QWORD *)(a1 + 344) - v8) >> 4;
  if ( *(unsigned int *)(v5 + 72) < v9 )
    goto LABEL_15;
  v10 = a2;
  do
  {
    v11 = *(_QWORD *)(v10 + 8);
    if ( !v11 )
    {
      v12 = 1;
      v13 = v9 > 1;
      if ( v9 )
        goto LABEL_12;
LABEL_43:
      sub_13C22E0((const __m128i **)(a1 + 336), v12 - v9);
      v8 = *(_QWORD *)(a1 + 336);
      goto LABEL_15;
    }
    v10 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  }
  while ( (v11 & 4) != 0 && v10 );
  v12 = (unsigned int)(*(_DWORD *)(v10 + 72) + 1);
  v13 = v12 < v9;
  if ( v12 > v9 )
    goto LABEL_43;
LABEL_12:
  if ( v13 )
  {
    v14 = v8 + 16 * v12;
    if ( v7 != v14 )
      *(_QWORD *)(a1 + 344) = v14;
  }
LABEL_15:
  while ( 1 )
  {
    v15 = *(_QWORD *)(v3 + 8);
    if ( !v15 )
      break;
    v3 = v15 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v15 & 4) == 0 || !v3 )
      goto LABEL_18;
  }
  v3 = 0;
LABEL_18:
  v16 = v8 + 16LL * *(unsigned int *)(v3 + 72);
  v17 = *(_BYTE *)(v16 + 1);
  if ( (v17 & 4) == 0 )
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(a1 + 1520) + 16LL))(
            *(_QWORD *)(a1 + 1520),
            a2);
    if ( (v19 & 0x800) != 0 )
    {
      v21 = *(_BYTE *)(v16 + 1) | 4;
      *(_BYTE *)(v16 + 1) = v21;
      if ( (v19 & 0x40) != 0 )
      {
        v22 = 0;
        v23 = ((*(_BYTE *)v16 & 0x79 | (v19 | *(_BYTE *)v16) & 6 | v19 & 0x80 | *(_BYTE *)v16 & 0x80) & 0x80u) != 0LL;
        *(_BYTE *)v16 = *(_BYTE *)v16 & 0x79 | (v19 | *(_BYTE *)v16) & 6 | v19 & 0x80 | *(_BYTE *)v16 & 0x80;
        if ( !v23 )
          v22 = (v21 | BYTE1(v19)) & 1;
        v24 = *(_QWORD *)(v16 + 8) == 0;
        *(_BYTE *)(v16 + 1) = v22 | v21 & 0xFE;
        if ( v24 )
          *(_QWORD *)(v16 + 8) = v20;
        v25 = *(_BYTE *)v16 & 0xC7 | (8 * ((v19 >> 3) & 7));
        *(_BYTE *)v16 = v25;
        v26 = (*(_WORD *)v16 & 0x840) != 2048;
        *(_BYTE *)(v16 + 1) |= 8u;
        *(_BYTE *)v16 = (v26 << 6) | v25 & 0xBF;
      }
    }
    goto LABEL_28;
  }
  if ( (v17 & 8) != 0 )
    return v16;
  return 0;
}
