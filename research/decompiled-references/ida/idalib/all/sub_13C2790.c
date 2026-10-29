__int64 __fastcall sub_13C2790(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rsi
  bool v13; // cf
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  char v19; // si
  char v20; // r8
  bool v21; // sf
  bool v22; // zf
  __int16 v23; // ax
  __int64 v25; // rsi

  v2 = a2;
  v5 = a2;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v2 + 8);
    if ( !v6 )
      break;
    v2 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v6 & 4) == 0 || !v2 )
      goto LABEL_5;
  }
  v2 = 0;
LABEL_5:
  v7 = *(_QWORD *)(a1 + 344);
  v8 = *(_QWORD *)(a1 + 336);
  v9 = (*(_QWORD *)(a1 + 344) - v8) >> 4;
  if ( *(unsigned int *)(v2 + 72) < v9 )
    goto LABEL_12;
  v10 = a2;
  do
  {
    v11 = *(_QWORD *)(v10 + 8);
    if ( !v11 )
    {
      v12 = 1;
      v13 = v9 > 1;
      if ( v9 )
        goto LABEL_11;
LABEL_28:
      sub_13C22E0((const __m128i **)(a1 + 336), v12 - v9);
      v8 = *(_QWORD *)(a1 + 336);
      goto LABEL_12;
    }
    v10 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  }
  while ( (v11 & 4) != 0 && v10 );
  v12 = (unsigned int)(*(_DWORD *)(v10 + 72) + 1);
  v13 = v12 < v9;
  if ( v12 > v9 )
    goto LABEL_28;
LABEL_11:
  if ( v13 )
  {
    v25 = v8 + 16 * v12;
    if ( v7 != v25 )
      *(_QWORD *)(a1 + 344) = v25;
  }
LABEL_12:
  while ( 1 )
  {
    v14 = *(_QWORD *)(v5 + 8);
    if ( !v14 )
      break;
    v5 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v14 & 4) == 0 || !v5 )
      goto LABEL_15;
  }
  v5 = 0;
LABEL_15:
  v15 = *(_QWORD *)(a1 + 1520);
  v16 = v8 + 16LL * *(unsigned int *)(v5 + 72);
  if ( v15 )
  {
    if ( (*(_BYTE *)(v16 + 1) & 4) == 0 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v15 + 16LL))(v15, a2);
      if ( (v17 & 0x800) != 0 )
      {
        v19 = *(_BYTE *)(v16 + 1) | 4;
        *(_BYTE *)(v16 + 1) = v19;
        if ( (v17 & 0x40) != 0 )
        {
          v20 = 0;
          v21 = ((*(_BYTE *)v16 & 0x79 | (v17 | *(_BYTE *)v16) & 6 | v17 & 0x80 | *(_BYTE *)v16 & 0x80) & 0x80u) != 0LL;
          *(_BYTE *)v16 = *(_BYTE *)v16 & 0x79 | (v17 | *(_BYTE *)v16) & 6 | v17 & 0x80 | *(_BYTE *)v16 & 0x80;
          if ( !v21 )
            v20 = (v19 | BYTE1(v17)) & 1;
          v22 = *(_QWORD *)(v16 + 8) == 0;
          *(_BYTE *)(v16 + 1) = v20 | v19 & 0xFE;
          if ( v22 )
            *(_QWORD *)(v16 + 8) = v18;
          *(_BYTE *)v16 = *(_BYTE *)v16 & 0xC7 | (8 * ((v17 >> 3) & 7));
        }
      }
    }
  }
  v23 = *(_WORD *)v16 & 0xF7BF;
  HIBYTE(v23) |= 8u;
  *(_WORD *)v16 = v23;
  return v16;
}
