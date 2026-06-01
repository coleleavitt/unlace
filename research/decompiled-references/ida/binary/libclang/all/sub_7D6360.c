unsigned __int64 __fastcall sub_7D6360(
        _QWORD *a1,
        char a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        char *src,
        __int64 a8,
        char a9,
        __int64 a10)
{
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  int v14; // r11d
  __int64 v15; // rsi
  __int64 v16; // rax
  _DWORD *v17; // r15
  char v18; // al
  __int64 v19; // rax
  __int64 v21; // rax

  v12 = sub_79A610(184, a1, a3, 0);
  v13 = *(_QWORD *)(a6 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a6 + 40) & 7) != 0 )
    v13 = 0;
  sub_7A2EA0((_QWORD *)v12, 0x3Au, a2, (__int64)a1, a3, a4, a5, v13, a10);
  v14 = a8;
  *(_QWORD *)(v12 + 144) = 0;
  *(_QWORD *)(v12 + 160) = 0;
  *(_QWORD *)v12 = &off_49F6870;
  v15 = 24 * a8 + 8;
  *(_QWORD *)(v12 + 152) = a6 & 0xFFFFFFFFFFFFFFFBLL;
  v16 = a1[274];
  a1[284] += v15;
  v17 = (_DWORD *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[275] >= (unsigned __int64)v17 + v15 && v16 )
  {
    a1[274] = (char *)v17 + v15;
  }
  else
  {
    v21 = sub_7CF9B0((__int64)(a1 + 274), v15, 3);
    v14 = a8;
    v17 = (_DWORD *)v21;
  }
  *v17 = v14;
  if ( &src[24 * a8] != src )
    memmove(v17 + 2, src, 8 * ((unsigned __int64)(24 * a8 - 24) >> 3) + 24);
  *(_BYTE *)(v12 + 74) &= ~0x10u;
  v18 = *(_BYTE *)(v12 + 180);
  *(_QWORD *)(v12 + 168) = v17;
  *(_DWORD *)(v12 + 176) = 0;
  *(_BYTE *)(v12 + 180) = v18 & 0xF0 | (8 * a9) & 0xF;
  v19 = *(_QWORD *)(a6 + 48);
  if ( (*(_BYTE *)(v19 + 74) & 1) == 0 )
    *(_BYTE *)(v12 + 72) = *(_BYTE *)(v19 + 72) & 0x80 | *(_BYTE *)(v12 + 72) & 0x7F;
  if ( !*(_QWORD *)(v12 + 48) )
  {
    if ( a10 )
      *(_QWORD *)(v12 + 48) = *(_QWORD *)(a10 + 48);
    else
      sub_6E8D60((__int64)a1, v12);
  }
  return v12;
}

