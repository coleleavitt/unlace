_QWORD *__fastcall sub_BBE900(_QWORD *a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rbx
  __int16 v8; // ax

  v7 = sub_B8FF70(88, a1, a2, 8LL * a3, a5, a6);
  v7[1] = 0;
  v7[2] = 0;
  *v7 = off_2C02B30;
  v7[3] = v7[3] & 0xFFFF000000000000LL | 0x602F00000000LL;
  v8 = sub_B8C0C0(47);
  *((_BYTE *)v7 + 32) &= 0xF8u;
  *((_WORD *)v7 + 15) = v8 & 0x3FFF | *((_WORD *)v7 + 15) & 0xC000;
  if ( byte_2CD7310[0] )
    sub_B8B8D0(47);
  v7[7] = 0;
  *(_OWORD *)(v7 + 5) = 0;
  v7[8] = 0;
  *v7 = &off_2C045A8;
  v7[9] = 0;
  *((_WORD *)v7 + 40) = 0;
  *((_DWORD *)v7 + 21) = 0;
  if ( a3 )
    v7[11] = 0;
  return v7;
}
