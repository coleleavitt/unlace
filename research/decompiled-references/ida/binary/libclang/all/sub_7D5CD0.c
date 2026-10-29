unsigned __int64 __fastcall sub_7D5CD0(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        char a7,
        __int64 a8,
        _QWORD *a9,
        __int64 a10)
{
  signed __int64 v12; // r15
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  __int16 v16; // ax
  bool v18; // al
  __int64 v21; // [rsp+18h] [rbp-40h]

  v12 = 8 * a10;
  v13 = sub_79A610(88, a1, a2, 8 * a10);
  *(_QWORD *)v13 = off_49F5208;
  if ( !a2
    || (v14 = sub_79A2E0(a2), v15 = *(_QWORD *)(v14 + 8) & 7LL, (*(_QWORD *)(v14 + 8) & 7) == 0)
    || *(char *)(v14 + 29) < 0 && (v21 = *(_QWORD *)(v14 + 8) & 7LL, v18 = sub_7946A0(v14), v15 = v21, !v18) )
  {
    v15 = 0;
  }
  *(_QWORD *)(v13 + 8) = v15;
  *(_DWORD *)(v13 + 24) = a3;
  *(_QWORD *)(v13 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v13 + 28) = 24642;
  v16 = sub_799DF0(0x42u);
  *(_BYTE *)(v13 + 32) &= 0xF8u;
  *(_WORD *)(v13 + 30) = v16 & 0x3FFF | *(_WORD *)(v13 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(66);
  *(_DWORD *)(v13 + 84) = a10;
  *(_QWORD *)(v13 + 48) = 0;
  *(_QWORD *)(v13 + 40) = a6;
  *(_DWORD *)(v13 + 64) = a4 & 0xFFFFF | (a5 << 20);
  *(_QWORD *)(v13 + 56) = a8;
  *(_QWORD *)(v13 + 72) = 0;
  *(_QWORD *)v13 = &off_49F67F8;
  *(_BYTE *)(v13 + 80) = a7 & 1 | 6 | *(_BYTE *)(v13 + 80) & 0xF8;
  if ( a10 )
  {
    if ( v12 <= 8 )
    {
      if ( v12 == 8 )
        *(_QWORD *)(v13 + 88) = *a9;
    }
    else
    {
      memmove((void *)(v13 + 88), a9, v12);
    }
  }
  return v13;
}

