_QWORD *__fastcall sub_7D5840(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  _QWORD *v3; // rbx
  __int16 v4; // ax

  v3 = sub_7943D0(88, a1, a2, 8LL * a3);
  *(_OWORD *)(v3 + 1) = 0;
  *v3 = off_49F5208;
  v3[3] = v3[3] & 0xFFFF000000000000LL | 0x602D00000000LL;
  v4 = sub_799DF0(0x2Du);
  *((_BYTE *)v3 + 32) &= 0xF8u;
  *((_WORD *)v3 + 15) = v4 & 0x3FFF | *((_WORD *)v3 + 15) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(45);
  v3[7] = 0;
  v3[8] = 0;
  v3[9] = 0;
  *v3 = &off_49F6780;
  *((_WORD *)v3 + 40) = 0;
  *((_DWORD *)v3 + 21) = 0;
  *(_OWORD *)(v3 + 5) = 0;
  return v3;
}

