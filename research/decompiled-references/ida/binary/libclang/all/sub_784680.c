__int64 __fastcall sub_784680(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int16 v14; // ax
  char v16; // al
  _QWORD *v17; // rax
  __int64 v19; // [rsp+8h] [rbp-40h]

  if ( a2 )
  {
    v10 = (a2 + 64) & 0xFFFFFFFFFFFFFFFBLL;
    v11 = sub_79A610(88, a1, a2 + 64, 0);
    *(_QWORD *)v11 = off_49F5208;
    v12 = sub_79A2E0(a2 + 64);
    v13 = *(_QWORD *)(v12 + 8) & 7LL;
    if ( (*(_QWORD *)(v12 + 8) & 7) != 0 && *(char *)(v12 + 29) < 0 )
    {
      v19 = *(_QWORD *)(v12 + 8) & 7LL;
      v16 = sub_7946A0(v12);
      v13 = v19;
      if ( !v16 )
        v13 = 0;
    }
  }
  else
  {
    v17 = (_QWORD *)sub_79A610(88, a1, 0, 0);
    v10 = 0;
    v13 = 0;
    v11 = (__int64)v17;
    *v17 = off_49F5208;
  }
  *(_QWORD *)(v11 + 8) = v13;
  *(_QWORD *)(v11 + 16) = v10;
  *(_DWORD *)(v11 + 24) = a3;
  *(_WORD *)(v11 + 28) = 24607;
  v14 = sub_799DF0(31);
  *(_BYTE *)(v11 + 32) &= 0xF8u;
  *(_WORD *)(v11 + 30) = v14 & 0x3FFF | *(_WORD *)(v11 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(31);
  *(_QWORD *)(v11 + 40) = a4;
  *(_QWORD *)(v11 + 48) = a5;
  *(_QWORD *)(v11 + 72) = a6;
  *(_QWORD *)v11 = &off_47DA438;
  *(_QWORD *)(v11 + 56) = 0;
  *(_DWORD *)(v11 + 64) = 0;
  sub_808730(v11 + 56, a1, a7);
  *(_BYTE *)(v11 + 80) = *(_BYTE *)(a7 + 12);
  return v11;
}

