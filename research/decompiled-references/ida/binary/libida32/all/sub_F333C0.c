__int64 __fastcall sub_F333C0(__int64 a1, __int64 a2, unsigned __int64 a3, _DWORD *a4, char a5, char a6)
{
  char v6; // al
  int v7; // r11d
  char v8; // r10
  char v9; // bl
  char v10; // bp
  char v11; // al
  char v12; // al
  char v13; // bl
  char v14; // r11
  char v15; // r10
  char v16; // r10
  char v17; // al

  v6 = 0;
  if ( !a4 )
    goto LABEL_11;
  v7 = *a4 >> 14;
  v8 = v7 & 0x1F;
  if ( (v7 & 8) != 0 )
  {
    v8 = v7 & 0x1B | 4;
    if ( (v7 & 0x10) == 0 )
    {
      v11 = 0;
      v9 = 8;
      v10 = 4;
      goto LABEL_4;
    }
    v11 = 16;
    v9 = 8;
    goto LABEL_16;
  }
  v9 = 0;
  v10 = 0;
  v11 = v7 & 0x10;
  if ( (v7 & 4) != 0 )
LABEL_16:
    v10 = 4;
LABEL_4:
  v12 = (2 * ((v8 & 2) != 0)) | v10 | v9 | v8 & 1 | v11;
  v13 = v12 & 0x10;
  if ( (v12 & 0x10) != 0 )
    v13 = 16;
  v14 = v12 & 0xC;
  if ( (v12 & 0xC) != 0 )
    v14 = 4;
  v15 = v12 & 2;
  if ( (v12 & 2) != 0 )
    v15 = 2;
  v6 = v15 | v14 | v13 | v12 & 1;
LABEL_11:
  v16 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  *(_QWORD *)a1 = a1;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = a4;
  v17 = v16 & 0x1F | v6 | 6;
  if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    a3 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 17) = *(_BYTE *)(a1 + 17) & 0xE0 | v17 & 0x1F;
  *(_WORD *)(a1 + 16) = *(_WORD *)(a1 + 16) & 0x1F00 | 4;
  *(_BYTE *)(a1 + 18) = (8 * (a6 & 7)) | *(_BYTE *)(a1 + 18) & 0xC0;
  *(_WORD *)(a1 + 18) = ((a5 & 7) << 6) | *(_WORD *)(a1 + 18) & 0xFE3F;
  return (unsigned __int8)(a5 & 7) << 6;
}

