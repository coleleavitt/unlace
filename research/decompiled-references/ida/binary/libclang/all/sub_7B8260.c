unsigned __int64 __fastcall sub_7B8260(_QWORD *a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int16 v14; // ax
  bool v16; // al
  __int64 v17; // [rsp+8h] [rbp-40h]

  v11 = sub_79A610(80, a1, a2, 0);
  *(_QWORD *)v11 = off_49F5208;
  if ( !a2
    || (v12 = sub_79A2E0(a2), v13 = *(_QWORD *)(v12 + 8) & 7LL, (*(_QWORD *)(v12 + 8) & 7) == 0)
    || *(char *)(v12 + 29) < 0 && (v17 = *(_QWORD *)(v12 + 8) & 7LL, v16 = sub_7946A0(v12), v13 = v17, !v16) )
  {
    v13 = 0;
  }
  *(_QWORD *)(v11 + 8) = v13;
  *(_DWORD *)(v11 + 24) = a4;
  *(_QWORD *)(v11 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_WORD *)(v11 + 28) = 24625;
  v14 = sub_799DF0(0x31u);
  *(_BYTE *)(v11 + 32) &= 0xF8u;
  *(_WORD *)(v11 + 30) = v14 & 0x3FFF | *(_WORD *)(v11 + 30) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(49);
  *(_QWORD *)(v11 + 40) = a5;
  *(_QWORD *)(v11 + 48) = a6;
  *(_QWORD *)(v11 + 56) = 0;
  *(_DWORD *)(v11 + 64) = a3;
  *(_QWORD *)v11 = &off_47D9DB0;
  *(_DWORD *)(v11 + 68) = 0;
  if ( a7 )
  {
    *(_BYTE *)(v11 + 68) |= 1u;
    *(_QWORD *)(v11 + 72) = a7;
  }
  else
  {
    *(_QWORD *)(v11 + 72) = 0;
  }
  *(_QWORD *)v11 = &off_49F6168;
  return v11;
}

