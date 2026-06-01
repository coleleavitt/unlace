__int64 __fastcall sub_78A7E0(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        __int16 a8,
        __int16 a9)
{
  __int64 v11; // r13
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // r15
  unsigned __int64 v16; // rax
  int v17; // eax
  bool v18; // zf
  unsigned __int64 v20; // rdi

  v11 = sub_79A610(160, a1, a2, 0);
  sub_779F10(v11, 0x3Cu, a2, a4);
  *(_QWORD *)(v11 + 48) = 0;
  *(_DWORD *)(v11 + 56) = a3;
  *(_QWORD *)(v11 + 40) = a5;
  *(_QWORD *)v11 = &off_47DA4B0;
  sub_79B760(v11 + 64, 60);
  *(_QWORD *)(v11 + 104) = v11;
  *(_QWORD *)(v11 + 112) = 0;
  v12 = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(v11 + 120) = 0;
  *(_QWORD *)v11 = &off_47D9E28;
  *(_QWORD *)(v11 + 96) = v12;
  if ( a6 )
  {
    v13 = *(_QWORD *)(a6 + 104);
    *(_QWORD *)(v11 + 104) = v13;
    v14 = sub_6E77B0((unsigned __int64 *)(v13 + 96), v13);
    v15 = *(_QWORD *)(v11 + 104);
    *(_QWORD *)(v11 + 96) = v14 & 0xFFFFFFFFFFFFFFFCLL;
    *(_WORD *)(v11 + 30) |= *(_WORD *)(v14 + 30) & 0x26;
    v12 = *(_QWORD *)(v15 + 96);
    v16 = v12 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v12 & 1) != 0 )
    {
      if ( v16 )
      {
        if ( (v12 & 4) != 0 )
        {
          v20 = v12 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v20 )
          {
            *(_QWORD *)(v20 + 16) = v11;
            goto LABEL_5;
          }
        }
      }
LABEL_4:
      v16 = v11 & 0xFFFFFFFFFFFFFFFBLL;
LABEL_5:
      *(_QWORD *)(v15 + 96) = v16 | 1;
      goto LABEL_6;
    }
  }
  else
  {
    v16 = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v15 = v11;
  }
  if ( v16 <= 3 )
    goto LABEL_4;
  *(_QWORD *)(v15 + 96) = sub_6D4E90((_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL), v11) | 1;
LABEL_6:
  *(_OWORD *)(v11 + 128) = 0;
  *(_QWORD *)(v11 + 144) = 0;
  *(_QWORD *)v11 = &off_47D9EA0;
  v17 = *(_DWORD *)(v11 + 72);
  *(_DWORD *)(v11 + 152) = 0;
  v17 &= 0x101FFFu;
  BYTE1(v17) |= 0x80u;
  *(_DWORD *)(v11 + 72) = v17;
  *(_WORD *)(v11 + 76) = *(_WORD *)(v11 + 76) & 0xF800 | ((a9 << 9) | (a7 << 7) | (a8 << 8)) & 0x7FF;
  v18 = *(_QWORD *)(v11 + 48) == 0;
  *(_BYTE *)(v11 + 74) = (16 * (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 18LL) >> 7)) | *(_BYTE *)(v11 + 74) & 0xEF;
  if ( v18 )
  {
    if ( a6 )
      *(_QWORD *)(v11 + 48) = *(_QWORD *)(a6 + 48);
    else
      sub_6E8D60(a1, v11);
  }
  return v11;
}

