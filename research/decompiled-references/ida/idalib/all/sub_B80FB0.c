__int64 __fastcall sub_B80FB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = sub_B8FF70(128, a1, a2, 0);
  *(_QWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)v2 = off_2C02B30;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 24) & 0xFFFF000000000000LL | 0x603A00000000LL;
  v3 = sub_B8C0C0(58);
  *(_BYTE *)(v2 + 32) &= 0xF8u;
  *(_WORD *)(v2 + 30) = v3 & 0x3FFF | *(_WORD *)(v2 + 30) & 0xC000;
  if ( byte_2CD7310[0] )
    sub_B8B8D0(58);
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 56) = 0;
  *(_QWORD *)v2 = &off_2B4AFA8;
  sub_B8E080(v2 + 64, 58);
  *(_QWORD *)(v2 + 104) = v2;
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 120) = 0;
  *(_QWORD *)(v2 + 96) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)v2 = &off_2B4A920;
  if ( (a1 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    *(_QWORD *)(v2 + 96) = sub_6E2500((_QWORD *)(a1 & 0xFFFFFFFFFFFFFFFCLL), v2, v4, v5, v6, v7) | 1;
  else
    *(_QWORD *)(v2 + 96) = v2 & 0xFFFFFFFFFFFFFFFALL | 1;
  *(_WORD *)(v2 + 73) &= 0x901Fu;
  *(_QWORD *)(v2 + 72) &= 0x7FFFFFuLL;
  *(_QWORD *)v2 = &off_2B4AA10;
  *(_BYTE *)(v2 + 74) = (8 * *(_BYTE *)(*(_QWORD *)(a1 + 2320) + 21LL)) & 0x10 | *(_BYTE *)(v2 + 74) & 0xEF;
  return v2;
}
