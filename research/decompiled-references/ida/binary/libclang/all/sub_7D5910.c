_QWORD *__fastcall sub_7D5910(_QWORD *a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  _QWORD *v5; // rbx
  __int16 v6; // ax

  v5 = sub_7943D0(88, a1, a2, 16LL * a3 + 8LL * a4);
  *(_OWORD *)(v5 + 1) = 0;
  *v5 = off_49F5208;
  v5[3] = v5[3] & 0xFFFF000000000000LL | 0x602D00000000LL;
  v6 = sub_799DF0(0x2Du);
  *((_BYTE *)v5 + 32) &= 0xF8u;
  *((_WORD *)v5 + 15) = v6 & 0x3FFF | *((_WORD *)v5 + 15) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(45);
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  *v5 = &off_49F6780;
  *((_WORD *)v5 + 40) = 257;
  v5[8] = 0;
  v5[9] = 0;
  *((_DWORD *)v5 + 21) = a3;
  return v5;
}

