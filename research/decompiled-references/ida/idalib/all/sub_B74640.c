__int64 __fastcall sub_B74640(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = sub_B8FF70(104, a1, a2, 0);
  *(_QWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)v2 = off_2C02B30;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 24) & 0xFFFF000000000000LL | 0x602B00000000LL;
  v3 = sub_B8C0C0(43);
  *(_BYTE *)(v2 + 32) &= 0xF8u;
  *(_WORD *)(v2 + 30) = v3 & 0x3FFF | *(_WORD *)(v2 + 30) & 0xC000;
  if ( byte_2CD7310[0] )
    sub_B8B8D0(43);
  *(_QWORD *)(v2 + 80) = v2;
  *(_DWORD *)(v2 + 96) = 0;
  *(_OWORD *)(v2 + 40) = 0;
  *(_QWORD *)v2 = &off_2B4A7B8;
  v4 = *(_QWORD *)(v2 + 96);
  *(_QWORD *)(v2 + 56) = 0;
  v5 = (unsigned int)v4 & 0xFFFFF9FF;
  *(_DWORD *)(v2 + 64) = 0;
  BYTE1(v5) |= 6u;
  *(_QWORD *)(v2 + 72) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(v2 + 96) = v5;
  *(_QWORD *)(v2 + 88) = 0;
  return v2;
}
