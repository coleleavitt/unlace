__int64 __fastcall sub_78A600(__int64 a1, char a2, __int64 a3, int a4, int a5, __int64 a6, __int64 a7)
{
  __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // rax
  bool v18; // zf
  unsigned __int64 v20; // rdi

  v12 = sub_79A610(128, a1, a3, 0);
  sub_779F10(v12, 0x38u, a3, a5);
  *(_QWORD *)(v12 + 48) = 0;
  *(_DWORD *)(v12 + 56) = a4;
  *(_QWORD *)(v12 + 40) = a6;
  *(_QWORD *)v12 = &off_47DA4B0;
  sub_79B760(v12 + 64, 56);
  *(_QWORD *)(v12 + 104) = v12;
  *(_QWORD *)(v12 + 112) = 0;
  v13 = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(v12 + 120) = 0;
  *(_QWORD *)(v12 + 96) = v13;
  *(_QWORD *)v12 = &off_47D9E28;
  if ( a7 )
  {
    v14 = *(_QWORD *)(a7 + 104);
    *(_QWORD *)(v12 + 104) = v14;
    v15 = sub_6E77B0((unsigned __int64 *)(v14 + 96), v14);
    v16 = *(_QWORD *)(v12 + 104);
    *(_QWORD *)(v12 + 96) = v15 & 0xFFFFFFFFFFFFFFFCLL;
    *(_WORD *)(v12 + 30) |= *(_WORD *)(v15 + 30) & 0x26;
    v13 = *(_QWORD *)(v16 + 96);
    v17 = v13 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v13 & 1) != 0 )
    {
      if ( v17 )
      {
        if ( (v13 & 4) != 0 )
        {
          v20 = v13 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v20 )
          {
            *(_QWORD *)(v20 + 16) = v12;
            goto LABEL_5;
          }
        }
      }
LABEL_4:
      v17 = v12 & 0xFFFFFFFFFFFFFFFBLL;
LABEL_5:
      *(_QWORD *)(v16 + 96) = v17 | 1;
      goto LABEL_6;
    }
  }
  else
  {
    v17 = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v16 = v12;
  }
  if ( v17 <= 3 )
    goto LABEL_4;
  *(_QWORD *)(v16 + 96) = sub_6D4E90((_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL), v12) | 1;
LABEL_6:
  *(_QWORD *)v12 = &off_47D9F18;
  *(_QWORD *)(v12 + 72) = *(_QWORD *)(v12 + 72) & 0x101FFFLL | ((unsigned __int64)(a2 & 7) << 13);
  v18 = *(_QWORD *)(v12 + 48) == 0;
  *(_BYTE *)(v12 + 74) = (16 * (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 18LL) >> 7)) | *(_BYTE *)(v12 + 74) & 0xEF;
  if ( v18 )
  {
    if ( a7 )
      *(_QWORD *)(v12 + 48) = *(_QWORD *)(a7 + 48);
    else
      sub_6E8D60(a1, v12);
  }
  return v12;
}

