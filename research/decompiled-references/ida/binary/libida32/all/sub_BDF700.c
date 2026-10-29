__int64 __fastcall sub_BDF700(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        int a9,
        __int64 a10)
{
  char v13; // al
  __int16 v14; // ax
  __int64 v15; // rax
  unsigned __int8 v16; // al
  __int64 result; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // r15
  int v28; // eax
  int v29; // eax
  char v30; // [rsp+4h] [rbp-44h]
  __int64 v31; // [rsp+8h] [rbp-40h]

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x76;
  if ( unk_2CAD564 )
  {
    v31 = a6;
    v30 = a5;
    sub_EC5E10(118);
    a6 = v31;
    a5 = v30;
  }
  *(_QWORD *)(a1 + 8) = a6;
  *(_BYTE *)(a1 + 2) &= 0xF8u;
  *(_QWORD *)(a1 + 16) = a3;
  v13 = *(_BYTE *)(a1 + 1);
  *(_QWORD *)(a1 + 24) = a4;
  *(_BYTE *)(a1 + 1) = (8 * (a8 & 7)) | (2 * (a7 & 3)) | v13 & 1;
  v14 = (8 * (a5 & 0x3F)) | *(_WORD *)(a1 + 2) & 0xFE07;
  *(_WORD *)(a1 + 2) = v14;
  *(_DWORD *)(a1 + 4) = a9;
  *(_BYTE *)(a1 + 3) = HIBYTE(v14) & 0xFB;
  if ( (a5 & 0x3F) != 0xA )
  {
    if ( (a5 & 0x3F) != 0xB )
      goto LABEL_5;
    v18 = a3;
    a3 = a4;
    a4 = v18;
  }
  if ( ((*(_WORD *)a3 + 394) & 0x1FFu) <= 1 && ((*(_WORD *)(a3 + 2) >> 3) & 0x3F) == 5 )
  {
    v19 = *(_QWORD *)(a3 + 16);
    if ( v19 )
    {
      if ( *(_QWORD *)(a3 + 24) )
      {
        v20 = sub_BD7DA0(v19);
        sub_BD7F30(v20);
        v22 = sub_BD7DA0(v21);
        sub_BD7F30(v22);
        v23 = sub_BD7DA0(a4);
        v24 = sub_BD7F30(v23);
        if ( v24 )
        {
          if ( v25 | v26 )
          {
            if ( (v26 && v26 == v24 || v25 && v25 == v24) && v26 != v25 )
            {
              if ( (v27 = (_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL), (unsigned __int8)sub_F41400(*v27))
                && (v28 = *(_DWORD *)(*(_QWORD *)(a2 + 2320) + 752LL), (v28 & 1) == 0)
                && (v28 & 6) != 0
                || (unsigned __int8)sub_F41620(*v27)
                && (v29 = *(_DWORD *)(*(_QWORD *)(a2 + 2320) + 752LL), (v29 & 1) == 0)
                && (v29 & 0xA) != 0 )
              {
                *(_BYTE *)(a3 + 3) |= 4u;
              }
            }
          }
        }
      }
    }
  }
LABEL_5:
  *(_BYTE *)(a1 + 3) = (2 * (HIDWORD(a10) != 0)) | *(_BYTE *)(a1 + 3) & 0xFD;
  if ( (*(_QWORD *)a1 & 0x2000000LL) != 0 )
  {
    v15 = 48;
    if ( (*(_WORD *)a1 & 0x1FF) != 0x77 )
      v15 = 32;
    *(_QWORD *)(a1 + v15) = a10;
  }
  v16 = sub_B3EF70(a1);
  *(_BYTE *)(a1 + 1) = (v16 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v16 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

