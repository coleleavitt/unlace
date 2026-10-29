unsigned __int64 __fastcall sub_7B7EF0(
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
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rcx
  __int16 v19; // ax
  bool v21; // al
  _QWORD *v22; // rax
  __int64 v23; // [rsp+8h] [rbp-40h]

  if ( a2 )
  {
    v14 = a2;
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x12 )
      v14 = *(_QWORD *)(a2 + 88);
    *(_QWORD *)((*(_QWORD *)(v14 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 64) = 0;
    v15 = (a2 + 48) & 0xFFFFFFFFFFFFFFFBLL;
    v16 = sub_79A610(96, a1, a2 + 48, 0);
    *(_QWORD *)v16 = off_49F5208;
    v17 = sub_79A2E0(a2 + 48);
    v18 = *(_QWORD *)(v17 + 8) & 7LL;
    if ( (*(_QWORD *)(v17 + 8) & 7) != 0 && *(char *)(v17 + 29) < 0 )
    {
      v23 = *(_QWORD *)(v17 + 8) & 7LL;
      v21 = sub_7946A0(v17);
      v18 = v23;
      if ( !v21 )
        v18 = 0;
    }
  }
  else
  {
    v22 = (_QWORD *)sub_79A610(96, a1, 0, 0);
    v15 = 0;
    v18 = 0;
    v16 = (unsigned __int64)v22;
    *v22 = off_49F5208;
  }
  *(_QWORD *)(v16 + 8) = v18;
  *(_QWORD *)(v16 + 16) = v15;
  *(_DWORD *)(v16 + 24) = a4;
  *(_WORD *)(v16 + 28) = 24624;
  v19 = sub_799DF0(0x30u);
  *(_BYTE *)(v16 + 32) &= 0xF8u;
  *(_WORD *)(v16 + 30) = v19 & 0x3FFF | *(_WORD *)(v16 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(48);
  *(_QWORD *)(v16 + 40) = a5;
  *(_QWORD *)(v16 + 48) = a6;
  *(_DWORD *)(v16 + 64) = a3;
  *(_QWORD *)(v16 + 56) = a7 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v16 + 68) = 0;
  *(_QWORD *)v16 = &off_47D9DB0;
  if ( a9 )
  {
    *(_BYTE *)(v16 + 68) |= 1u;
    *(_QWORD *)(v16 + 72) = a9;
  }
  else
  {
    *(_QWORD *)(v16 + 72) = 0;
  }
  *(_QWORD *)(v16 + 80) = 0;
  *(_QWORD *)v16 = &off_49F60F0;
  *(_BYTE *)(v16 + 88) = *(_BYTE *)(v16 + 88) & 0xF0 | a8 & 7 | (8 * a10) & 0xF;
  return v16;
}

