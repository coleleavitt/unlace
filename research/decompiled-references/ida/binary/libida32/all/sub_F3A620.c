__int16 __fastcall sub_F3A620(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int16 a5, char a6)
{
  char v6; // al
  unsigned __int8 v7; // r10
  unsigned __int64 v8; // r11
  char v9; // bl
  unsigned __int64 v10; // r10
  char v11; // al
  __int16 v12; // ax
  __int16 v13; // cx
  __int16 v15; // r8
  __int16 result; // ax

  v6 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v7 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  v8 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 32) = a3;
  *(_QWORD *)a1 = a1;
  *(_BYTE *)(a1 + 16) = 46;
  v9 = v6 & 0x1F;
  v10 = v8 | ((unsigned __int8)a2 | v7) & 7;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    v10 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v11 = *(_BYTE *)(a1 + 17) & 0xE0;
  *(_QWORD *)(a1 + 8) = v10;
  *(_BYTE *)(a1 + 17) = v9 | v11;
  v12 = *(_WORD *)(a1 + 17) & 0xF81F;
  *(_WORD *)(a1 + 17) = v12;
  *(_BYTE *)(a1 + 18) = (8 * (v10 != a2)) | HIBYTE(v12) & 0xF7;
  if ( ((8 * (v10 != a2)) & 8) != 0 )
    *(_QWORD *)(a1 + 48) = a2;
  v13 = a4 & 0x7FFF | *(_WORD *)(a1 + 20) & 0x8000;
  *(_WORD *)(a1 + 20) = v13;
  v15 = *(_WORD *)(a1 + 22);
  result = a5 & 0x7FFF;
  *(_BYTE *)(a1 + 21) = (a6 << 7) | HIBYTE(v13) & 0x7F;
  *(_WORD *)(a1 + 22) = result | v15 & 0x8000;
  return result;
}

