__int64 __fastcall sub_82A730(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax
  unsigned __int8 v6; // cl
  char v7; // dl
  unsigned __int8 v8; // si
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  int v18; // eax
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD v25[5]; // [rsp+0h] [rbp-28h] BYREF

  v25[0] = a1;
  v25[1] = a2;
  LOBYTE(v3) = sub_69F610(v25);
  if ( !(_BYTE)v3 )
    goto LABEL_40;
  if ( !v25[0] )
    goto LABEL_10;
  LODWORD(v2) = v3;
  if ( (v25[0] & 3) != 0 )
  {
    if ( (unsigned __int64)(v25[0] & 3) - 2 <= 1 )
      goto LABEL_40;
LABEL_10:
    v12 = v25[0] & 0xFFFFFFFFFFFFFFFCLL;
    v13 = *(unsigned __int16 *)(v25[0] & 0xFFFFFFFFFFFFFFFCLL);
    LOWORD(v13) = v13 & 0x1FF;
    if ( (_WORD)v13 == 77 )
    {
      v2 = (*(__int64 *)(v12 + 24) >> 2) & 1;
      if ( ((*(__int64 *)(v12 + 24) >> 2) & 1) != 0 )
        LOBYTE(v2) = ((*(_BYTE *)(v12 + 1) >> 1) & 3) == 1;
      return (unsigned int)v2;
    }
    if ( (unsigned __int16)v13 > 0x4Du )
    {
      switch ( (_WORD)v13 )
      {
        case 0x76:
          v21 = *(_QWORD *)(v12 + 16);
          LODWORD(v2) = 0;
          if ( !*(_DWORD *)(v21 + 112) )
            LODWORD(v2) = (*(_BYTE *)(v21 + 49) & 0x40) == 0;
          return (unsigned int)v2;
        case 0x80:
LABEL_40:
          LODWORD(v2) = 1;
          return (unsigned int)v2;
        case 0x5A:
          v15 = sub_80FBD0(v12);
          if ( v15 != 204 && v15 != 223 )
          {
            LOBYTE(v2) = v15 == 1030;
            LOBYTE(v15) = v15 == 216;
            LODWORD(v2) = v15 | v2;
            return (unsigned int)v2;
          }
          goto LABEL_40;
      }
    }
    else
    {
      if ( (unsigned __int16)v13 > 0x28u )
      {
        LOBYTE(v2) = (_WORD)v13 == 55;
        if ( (_WORD)v13 == 49 )
        {
          v20 = *(_QWORD *)(v12 + 16);
          LODWORD(v2) = 0;
          if ( (v20 & 4) != 0 )
            LOBYTE(v2) = (unsigned int)sub_7A7340(v20 & 0xFFFFFFFFFFFFFFF8LL) == 3;
        }
        return (unsigned int)v2;
      }
      if ( (unsigned __int16)v13 > 9u )
      {
        v14 = 0x4040081400LL;
        if ( !_bittest64(&v14, v13) )
        {
          LODWORD(v2) = 0;
          if ( (_WORD)v13 == 40 && !*(_QWORD *)(v12 + 24) )
            LOBYTE(v2) = *(_QWORD *)(v12 + 16) != 0;
          return (unsigned int)v2;
        }
        goto LABEL_40;
      }
    }
    LODWORD(v2) = 0;
    return (unsigned int)v2;
  }
  v4 = v25[0] & 0xFFFFFFFFFFFFFFFCLL;
  v5 = *(_BYTE *)((v25[0] & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7F;
  v6 = *(_BYTE *)((v25[0] & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7F;
  if ( (unsigned int)(v5 - 38) > 6 )
  {
    if ( v6 != 28 )
    {
      LODWORD(v2) = 0;
      if ( v6 <= 0x25u )
      {
        v16 = 0x3F28000000LL;
        LOBYTE(v2) = _bittest64(&v16, v5);
      }
      return (unsigned int)v2;
    }
    goto LABEL_40;
  }
  v7 = *(_BYTE *)((v25[0] & 0xFFFFFFFFFFFFFFFCLL) + 96);
  v8 = v7 & 7;
  if ( (v7 & 7) != 0 )
  {
    if ( (v7 & 7) != 5 )
    {
LABEL_39:
      LOBYTE(v2) = v8 <= 3u;
      return (unsigned int)v2;
    }
    if ( (_DWORD)v5 != 38 && (_DWORD)v5 != 44 )
      goto LABEL_51;
    v22 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
      v22 = *(_QWORD *)(v22 + 8);
    if ( !v22 )
      goto LABEL_51;
    v23 = *(_BYTE *)(sub_79C2A0(v22) + 8) & 0x7F;
    if ( (unsigned __int8)v23 > 0x10u )
    {
      if ( (((_BYTE)v23 + 96) & 0x7Fu) > 5 )
        goto LABEL_58;
    }
    else
    {
      v24 = 65922;
      if ( !_bittest64(&v24, v23) )
      {
LABEL_58:
        v6 = *(_BYTE *)(v4 + 28) & 0x7F;
LABEL_51:
        if ( v6 != 41 )
          return (unsigned int)v2;
      }
    }
    v8 = *(_BYTE *)(v4 + 96) & 7;
    goto LABEL_39;
  }
  v9 = *(_QWORD *)(v4 + 48);
  v10 = *(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v10 & 8) != 0
    && (unsigned int)((*(__int64 *)((char *)&qword_18 + (v10 & 0xFFFFFFFFFFFFFFF0LL))
                     | (unsigned __int64)(((unsigned __int8)v10 | (unsigned __int8)v9) & 7)) >> 9) == 3 )
  {
    return (unsigned int)v2;
  }
  if ( (*(_BYTE *)((v25[0] & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7D) == 0x29 )
  {
LABEL_37:
    LOBYTE(v2) = (v7 & 0x18) != 0;
    return (unsigned int)v2;
  }
  v17 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
    v17 = *(_QWORD *)(v17 + 8);
  v18 = *(_BYTE *)(sub_79C2A0(v17) + 8) & 0x7F;
  if ( v18 && v18 != 22 )
  {
    if ( (*(_BYTE *)(v4 + 28) & 0x7F) == 0x29 )
      goto LABEL_36;
    v19 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
      v19 = *(_QWORD *)v19;
    if ( ((*(_BYTE *)(v19 + 8) + 72) & 0x7Fu) > 3 )
    {
LABEL_36:
      v7 = *(_BYTE *)(v4 + 96);
      goto LABEL_37;
    }
  }
  return (unsigned int)v2;
}

