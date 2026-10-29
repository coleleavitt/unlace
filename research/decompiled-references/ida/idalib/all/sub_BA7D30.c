_QWORD *__fastcall sub_BA7D30(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx
  __int16 v7; // ax
  int v8; // eax

  v6 = sub_B8FF70(136, a1, a2, 0, a5, a6);
  v6[1] = 0;
  v6[2] = 0;
  *v6 = off_2C02B30;
  v6[3] = v6[3] & 0xFFFF000000000000LL | 0x601200000000LL;
  v7 = sub_B8C0C0(18);
  *((_BYTE *)v6 + 32) &= 0xF8u;
  *((_WORD *)v6 + 15) = v7 & 0x3FFF | *((_WORD *)v6 + 15) & 0xC000;
  if ( byte_2CD7310[0] )
    sub_B8B8D0(18);
  v6[5] = 0;
  *v6 = &off_2B4A650;
  sub_B8E080((__int64)(v6 + 6), 18);
  v6[10] = 0;
  *(_OWORD *)(v6 + 11) = 0;
  v6[13] = 0;
  *v6 = &off_2C03990;
  v8 = *(_DWORD *)((char *)v6 + 57);
  v6[14] = 0;
  *(_OWORD *)(v6 + 15) = 0;
  *((_BYTE *)v6 + 29) &= ~2u;
  *(_DWORD *)((char *)v6 + 57) = v8 & 0xC000001F | 0x40003E0;
  return v6;
}
