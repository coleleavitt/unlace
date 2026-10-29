__int64 __fastcall sub_B77F90(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax

  v2 = sub_B8FF70(80, a1, a2, 0);
  *(_QWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)v2 = off_2C02B30;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 24) & 0xFFFF000000000000LL | 0x603100000000LL;
  v3 = sub_B8C0C0(49);
  *(_BYTE *)(v2 + 32) &= 0xF8u;
  *(_WORD *)(v2 + 30) = v3 & 0x3FFF | *(_WORD *)(v2 + 30) & 0xC000;
  if ( byte_2CD7310[0] )
    sub_B8B8D0(49);
  *(_QWORD *)(v2 + 56) = 0;
  *(_OWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 64) = 0;
  *(_QWORD *)v2 = &off_2B4A8A8;
  *(_QWORD *)(v2 + 72) = 0;
  return v2;
}
