__int64 __fastcall sub_F32E20(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, char a5, char a6, _DWORD *a7)
{
  __int64 v7; // r10
  char v8; // r14
  char v12; // al
  int v13; // eax
  char v14; // r11
  char v15; // dl
  char v16; // cl
  char v17; // di
  unsigned __int64 v18; // rcx
  char v19; // dl
  char v20; // r14
  char v21; // al
  __int16 v22; // ax
  __int64 result; // rax

  v7 = a1;
  v8 = 6;
  if ( a2 != 4 )
    v8 = 8 * (a2 == 6);
  v12 = 0;
  if ( a7 )
  {
    v13 = *a7 >> 14;
    v14 = v13 & 0x1F;
    if ( (v13 & 8) != 0 )
    {
      v14 = v13 & 0x1B | 4;
      if ( (v13 & 0x10) == 0 )
      {
        v17 = 0;
        v15 = 8;
        v16 = 4;
        goto LABEL_6;
      }
      v17 = 16;
      v15 = 8;
    }
    else
    {
      v15 = 0;
      v16 = 0;
      v17 = v13 & 0x10;
      if ( (v13 & 4) == 0 )
      {
LABEL_6:
        v12 = sub_F328B0((unsigned __int8)(2 * ((v14 & 2) != 0)) | (unsigned __int8)(v16 | v15 | v14 & 1 | v17));
        goto LABEL_7;
      }
    }
    v16 = 4;
    goto LABEL_6;
  }
LABEL_7:
  v18 = v7 & 0xFFFFFFFFFFFFFFF0LL;
  v19 = *(_BYTE *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  *(_BYTE *)(v7 + 16) = a2;
  *(_QWORD *)(v7 + 32) = a3;
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 24) = 0;
  v20 = v12 | v19 & 0x1F | v8;
  v21 = *(_BYTE *)(v7 + 17);
  if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v18 = a4;
  *(_QWORD *)(v7 + 8) = v18;
  *(_BYTE *)(v7 + 17) = v21 & 0xE0 | v20 & 0x1F;
  v22 = *(_WORD *)(v7 + 17) & 0xF81F;
  *(_WORD *)(v7 + 17) = v22;
  result = (8 * (a6 & 7)) | HIBYTE(v22) & 0xC7u;
  *(_BYTE *)(v7 + 18) = result;
  *(_WORD *)(v7 + 18) = ((a5 & 7) << 6) | *(_WORD *)(v7 + 18) & 0xFE3F;
  return result;
}

