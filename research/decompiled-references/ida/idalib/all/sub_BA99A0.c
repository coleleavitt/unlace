unsigned __int64 __fastcall sub_BA99A0(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        char a10)
{
  __int64 v12; // r13
  __int64 v14; // rdx
  unsigned __int64 v15; // rbp

  v12 = a2;
  if ( a2 )
  {
    v14 = a2;
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x14 )
      v14 = *(_QWORD *)(a2 + 88);
    v12 = a2 + 48;
    *(_QWORD *)((*(_QWORD *)(v14 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 64) = 0;
    v15 = sub_B902D0(96, a1, a2 + 48, 0);
  }
  else
  {
    v15 = sub_B902D0(96, a1, 0, 0);
  }
  sub_B725B0(v15, 0x32u, v12, a4);
  *(_QWORD *)(v15 + 40) = a5;
  *(_QWORD *)(v15 + 48) = a6;
  *(_DWORD *)(v15 + 64) = a3;
  *(_QWORD *)(v15 + 56) = a7 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v15 + 68) = 0;
  *(_QWORD *)v15 = &off_2B4A8A8;
  if ( a9 )
  {
    *(_BYTE *)(v15 + 68) |= 1u;
    *(_QWORD *)(v15 + 72) = a9;
  }
  else
  {
    *(_QWORD *)(v15 + 72) = 0;
  }
  *(_QWORD *)(v15 + 80) = 0;
  *(_QWORD *)v15 = &off_2C03A80;
  *(_BYTE *)(v15 + 88) = (8 * (a10 & 1)) | a8 & 7 | *(_BYTE *)(v15 + 88) & 0xF0;
  return v15;
}
