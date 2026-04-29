__int64 __fastcall sub_643C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // ecx
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rsi
  int v12; // eax
  __int16 v13; // ax
  int v14; // eax
  __int64 v15; // rdi
  char v16; // dl
  unsigned __int16 v17; // si
  char v18; // di
  unsigned __int64 v19; // rsi
  __int64 v20; // rcx
  int v21; // eax
  char v22; // r8
  __int16 v23; // ax
  __int64 v25; // rsi
  int v26; // esi
  unsigned __int16 v27; // si
  int v28; // esi
  int v29; // esi
  unsigned __int64 v30; // rax
  int v31; // edi
  unsigned __int64 v32; // rax

  v7 = *(_DWORD *)(a1 + 52);
  v8 = v7 >> 5;
  v9 = v7 >> 8;
  v10 = v8 & 1;
  v11 = v9 & 0xF;
  if ( (~(_BYTE)v9 & 0xC) != 0 )
  {
    v12 = -((_DWORD)v10 == 0);
    if ( (v9 & 1) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      v13 = (v12 & 0x35) + 311;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 8);
      v13 = (v12 & 0xFFF9) + 358;
    }
    *(_WORD *)(v9 + 24) = v13;
LABEL_5:
    v14 = *(unsigned __int8 *)(a1 + 48) << 7;
    LOBYTE(v14) = *(_BYTE *)(a1 + 24) | (*(_BYTE *)(a1 + 48) << 7);
    v15 = v14 | (16 * (unsigned __int8)*(_WORD *)(a1 + 54)) & 0x70u;
    switch ( v11 )
    {
      case 0LL:
      case 1LL:
        v19 = (unsigned __int8)v15;
        v16 = 15;
        v18 = 2;
        break;
      case 2LL:
      case 3LL:
        v16 = 15;
        v27 = (_WORD)v15 << 8;
        v18 = 2;
        v19 = v27 & 0xFF00;
        break;
      case 4LL:
      case 5LL:
        v16 = 15;
        v26 = (_DWORD)v15 << 16;
        v18 = 2;
        v19 = v26 & 0xFF0000;
        break;
      case 6LL:
      case 7LL:
        v16 = 15;
        v25 = (unsigned __int8)v15;
        v18 = 2;
        v19 = v25 << 24;
        break;
      case 8LL:
      case 9LL:
        v19 = (unsigned __int8)v15;
        v16 = 14;
        v18 = 1;
        break;
      case 10LL:
      case 11LL:
        v16 = 14;
        v17 = (_WORD)v15 << 8;
        v18 = 1;
        v19 = v17 & 0xFF00;
        break;
      case 12LL:
        v16 = 15;
        v29 = (unsigned __int8)v15 << 8;
        v18 = 2;
        v19 = v29 | 0xFFu;
        break;
      case 13LL:
        v16 = 15;
        v28 = (unsigned __int8)v15 << 16;
        v18 = 2;
        v19 = v28 | 0xFFFFu;
        break;
      case 14LL:
        if ( (_DWORD)v10 )
          goto LABEL_28;
        v19 = (unsigned __int8)v15;
        v16 = 13;
        v18 = 0;
        break;
      case 15LL:
        v30 = sub_62710((unsigned __int8)v15, 32, v10, v9, a5, a6);
        v18 = 3;
        v16 = 20;
        v19 = v30;
        break;
    }
    goto LABEL_12;
  }
  if ( (v8 & 1) == 0 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 351;
    goto LABEL_5;
  }
  if ( (v9 & 2) == 0 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 358;
    goto LABEL_5;
  }
  if ( (v9 & 1) != 0 )
    return 0;
  *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 351;
  v31 = *(unsigned __int8 *)(a1 + 48) << 7;
  LOBYTE(v31) = *(_BYTE *)(a1 + 24) | v31;
  v15 = (16 * (unsigned __int8)*(_WORD *)(a1 + 54)) & 0x70 | (unsigned int)v31;
LABEL_28:
  v19 = (unsigned __int8)(v15 << 63 >> 63);
  v32 = v19;
  BYTE1(v32) = -1;
  if ( (v15 & 2) != 0 )
    v19 = v32;
  if ( (v15 & 4) != 0 )
    v19 |= 0xFF0000u;
  if ( (v15 & 8) != 0 )
    v19 |= 0xFF000000;
  if ( (v15 & 0x10) != 0 )
    v19 |= 0xFF00000000uLL;
  if ( (v15 & 0x20) != 0 )
    v19 |= 0xFF0000000000uLL;
  if ( (v15 & 0x40) != 0 )
    v19 |= 0xFF000000000000uLL;
  if ( (v15 & 0x80u) != 0LL )
    v19 |= 0xFF00000000000000LL;
  v18 = 7;
  v16 = 16;
LABEL_12:
  v20 = *(_QWORD *)(a1 + 8);
  v21 = *(_DWORD *)(a1 + 20) | (16 * *(_DWORD *)(a1 + 32));
  if ( !*(_DWORD *)(a1 + 40) )
  {
    v23 = v21 + 61;
    v22 = 7;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    v22 = 8;
    v23 = v21 / 2 + 45;
LABEL_15:
    *(_WORD *)(v20 + 46) = v23;
    *(_BYTE *)(v20 + 41) = 1;
    *(_BYTE *)(v20 + 45) = v22;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 81LL) = 5;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) = v19;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 45LL) = v18;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 85LL) = v18;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 33LL) = v16 | 0x80;
    return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
  }
  return 0;
}
