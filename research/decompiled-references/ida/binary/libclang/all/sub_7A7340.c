__int64 __fastcall sub_7A7340(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  char v3; // cl
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  char v8; // dl
  unsigned __int8 v9; // di
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rdx

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
  {
    v2 = *(_BYTE *)(v1 + 28) & 0x7F;
    v3 = *(_BYTE *)(v1 + 28) & 0x7F;
    if ( (unsigned int)(v2 - 47) <= 2 )
      return 1;
    if ( v3 == 50 )
    {
      v4 = *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v1 + 16) & 4) != 0 )
        v4 = *(_QWORD *)v4;
      v5 = *(_BYTE *)(v4 + 8) & 0x7F;
      if ( (unsigned __int8)v5 > 0x10u )
      {
        if ( (((_BYTE)v5 + 96) & 0x7Fu) <= 5 )
          return 1;
      }
      else
      {
        v6 = 65922;
        if ( _bittest64(&v6, v5) )
          return 1;
      }
      return 3;
    }
    v8 = *(_BYTE *)(v1 + 96);
    v9 = v8 & 7;
    if ( (v8 & 7) == 0 )
    {
      v10 = *(_QWORD *)(v1 + 48);
      v11 = *(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v11 & 8) != 0
        && (unsigned int)((*(__int64 *)((char *)&qword_18 + (v11 & 0xFFFFFFFFFFFFFFF0LL))
                         | (unsigned __int64)(((unsigned __int8)v11 | (unsigned __int8)v10) & 7)) >> 9) == 3 )
      {
        goto LABEL_12;
      }
      if ( (*(_BYTE *)(v1 + 28) & 0x7D) == 0x29 )
      {
LABEL_27:
        if ( (v8 & 0x18) == 0 )
          return 1;
        return 2;
      }
      v12 = *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v1 + 16) & 4) != 0 )
        v12 = *(_QWORD *)(v12 + 8);
      v13 = *(_BYTE *)(sub_79C2A0(v12) + 8) & 0x7F;
      if ( v13 != 22 && v13 )
      {
        if ( (*(_BYTE *)(v1 + 28) & 0x7F) == 0x29 )
          goto LABEL_26;
        v14 = *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v1 + 16) & 4) != 0 )
          v14 = *(_QWORD *)v14;
        if ( ((*(_BYTE *)(v14 + 8) + 72) & 0x7Fu) > 3 )
        {
LABEL_26:
          v8 = *(_BYTE *)(v1 + 96);
          goto LABEL_27;
        }
      }
LABEL_34:
      v8 = *(_BYTE *)(v1 + 96);
      goto LABEL_12;
    }
    if ( (*(_BYTE *)(v1 + 96) & 7) != 5 )
    {
LABEL_15:
      if ( v9 > 3u )
        return 1;
      goto LABEL_12;
    }
    if ( v2 != 44 && v2 != 38 )
      goto LABEL_37;
    v15 = *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v1 + 16) & 4) != 0 )
      v15 = *(_QWORD *)(v15 + 8);
    if ( !v15 )
    {
LABEL_37:
      if ( v3 == 41 )
        return 1;
LABEL_12:
      if ( (v8 & 0x18) == 0 )
        return 3;
      return 2;
    }
    v16 = *(_BYTE *)(sub_79C2A0(v15) + 8) & 0x7F;
    if ( (unsigned __int8)v16 > 0x10u )
    {
      if ( (((_BYTE)v16 + 96) & 0x7Fu) <= 5 )
      {
LABEL_44:
        v8 = *(_BYTE *)(v1 + 96);
        v9 = v8 & 7;
        goto LABEL_15;
      }
    }
    else
    {
      v17 = 65922;
      if ( _bittest64(&v17, v16) )
        goto LABEL_44;
    }
    if ( (*(_BYTE *)(v1 + 28) & 0x7F) != 0x29 )
      goto LABEL_34;
    goto LABEL_44;
  }
  return 0;
}

