unsigned __int64 __fastcall sub_BBED70(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int16 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        const void *a9,
        __int64 a10)
{
  size_t v12; // r12
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int16 v17; // ax
  unsigned int v18; // ebp
  char v19; // al
  char v21; // al
  __int64 v24; // [rsp+18h] [rbp-40h]

  v12 = 8 * a10;
  v13 = sub_B902D0(88, a1, a2, 8 * a10);
  *(_QWORD *)v13 = off_2C02B30;
  if ( a2
    && (v14 = sub_B8C1B0(a2), v15 = *(_QWORD *)(v14 + 8) & 7LL, (*(_QWORD *)(v14 + 8) & 7) != 0)
    && (*(char *)(v14 + 29) >= 0 || (v24 = *(_QWORD *)(v14 + 8) & 7LL, v21 = sub_B8C610(v14), v15 = v24, v21)) )
  {
    v16 = v15;
  }
  else
  {
    v16 = 0;
  }
  *(_QWORD *)(v13 + 8) = v16;
  *(_DWORD *)(v13 + 24) = a3;
  *(_QWORD *)(v13 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v13 + 28) = 24644;
  v17 = sub_B8C0C0(68);
  *(_BYTE *)(v13 + 32) &= 0xF8u;
  *(_WORD *)(v13 + 30) = v17 & 0x3FFF | *(_WORD *)(v13 + 30) & 0xC000;
  if ( byte_2CD7310[0] )
    sub_B8B8D0(68);
  *(_QWORD *)(v13 + 48) = 0;
  *(_QWORD *)(v13 + 72) = 0;
  *(_QWORD *)(v13 + 40) = a6;
  *(_DWORD *)(v13 + 84) = a10;
  *(_QWORD *)(v13 + 56) = a8;
  v18 = *(_DWORD *)(v13 + 64) & 0xFFF00000 | a4 & 0xFFFFF;
  *(_DWORD *)(v13 + 64) = v18;
  *(_QWORD *)v13 = &off_2C04620;
  v19 = *(_BYTE *)(v13 + 80);
  *(_WORD *)(v13 + 66) = BYTE2(v18) & 0xF | (16 * a5);
  *(_BYTE *)(v13 + 80) = a7 & 1 | v19 & 0xF8 | 6;
  if ( v12 )
    memmove((void *)(v13 + 88), a9, v12);
  return v13;
}
