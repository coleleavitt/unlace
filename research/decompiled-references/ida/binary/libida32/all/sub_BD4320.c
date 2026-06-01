__int64 __fastcall sub_BD4320(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int8 v10; // al

  v8 = sub_A4C2D0(a1, *(_QWORD *)(a1 + 18648) | 1LL);
  v9 = sub_ECAC60(40, a1, 8);
  *(_WORD *)v9 = *(_WORD *)v9 & 0xFE00 | 0xE;
  if ( unk_2CAD564 )
    sub_EC5E10(14);
  *(_WORD *)(v9 + 1) &= 0xF801u;
  *(_QWORD *)(v9 + 8) = v8;
  *(_DWORD *)(v9 + 16) = a2;
  *(_DWORD *)(v9 + 20) = a3;
  *(_DWORD *)(v9 + 24) = a4;
  *(_QWORD *)(v9 + 32) = a5;
  v10 = sub_B40550(v9);
  *(_BYTE *)(v9 + 1) = (v10 << 6) | *(_BYTE *)(v9 + 1) & 0x3F;
  *(_BYTE *)(v9 + 2) = *(_BYTE *)(v9 + 2) & 0xF8 | (v10 >> 2) & 7;
  return v9;
}

