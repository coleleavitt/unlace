__int64 __fastcall sub_BF7BD0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        char a6,
        int a7,
        _QWORD *a8,
        char a9)
{
  char v11; // al
  char v12; // r9
  char v13; // cl
  __int64 v14; // rcx
  char v15; // al
  unsigned __int8 v16; // al
  __int64 result; // rax
  __int64 v18; // [rsp+10h] [rbp-28h]
  char v19; // [rsp+1Ch] [rbp-1Ch]

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x47;
  if ( unk_2CD7484 )
  {
    v19 = a6;
    v18 = a5;
    sub_EE9B50(71);
    a6 = v19;
    a5 = v18;
  }
  *(_QWORD *)(a1 + 16) = a3;
  v11 = 2 * (a6 & 3);
  v12 = *(_BYTE *)(a1 + 1);
  *(_QWORD *)(a1 + 8) = a5;
  *(_BYTE *)(a1 + 1) = v11 | v12 & 0xF9;
  *(_WORD *)(a1 + 1) &= 0xF807u;
  v13 = *(_BYTE *)(a1 + 2);
  *(_QWORD *)(a1 + 24) = *a8;
  v14 = (a4 << 7) | v13 & 0x7Fu;
  v15 = *(_BYTE *)(a1 + 3);
  *(_BYTE *)(a1 + 2) = v14;
  *(_BYTE *)(a1 + 3) = (2 * (a9 & 3)) | v15 & 0xF9;
  *(_WORD *)(a1 + 2) &= 0xF687u;
  *(_DWORD *)(a1 + 4) = a7;
  v16 = sub_B63DB0((unsigned __int64 *)a1, a2, 2 * (a9 & 3u), v14, a5);
  *(_BYTE *)(a1 + 1) = (v16 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v16 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}
