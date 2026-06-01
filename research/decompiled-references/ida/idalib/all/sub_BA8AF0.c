_QWORD *__fastcall sub_BA8AF0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx
  __int16 v7; // ax

  v6 = sub_B8FF70(96, a1, a2, 0, a5, a6);
  v6[1] = 0;
  v6[2] = 0;
  *v6 = off_2C02B30;
  v6[3] = v6[3] & 0xFFFF000000000000LL | 0x603200000000LL;
  v7 = sub_B8C0C0(50);
  *((_BYTE *)v6 + 32) &= 0xF8u;
  *((_WORD *)v6 + 15) = v7 & 0x3FFF | *((_WORD *)v6 + 15) & 0xC000;
  if ( byte_2CD7310[0] )
    sub_B8B8D0(50);
  v6[7] = 0;
  *(_OWORD *)(v6 + 5) = 0;
  v6[8] = 0;
  *v6 = &off_2C03A80;
  v6[9] = 0;
  v6[10] = 0;
  *((_BYTE *)v6 + 88) &= 0xF0u;
  return v6;
}
