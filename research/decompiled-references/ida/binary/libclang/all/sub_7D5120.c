_QWORD *__fastcall sub_7D5120(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  _QWORD *v4; // rbx
  __int16 v5; // ax
  char v6; // al

  v4 = sub_7943D0(80, a1, a2, 16LL * a3);
  *(_OWORD *)(v4 + 1) = 0;
  *v4 = off_49F5208;
  v4[3] = v4[3] & 0xFFFF000000000000LL | 0x604100000000LL;
  v5 = sub_799DF0(0x41u);
  *((_BYTE *)v4 + 32) &= 0xF8u;
  *((_WORD *)v4 + 15) = v5 & 0x3FFF | *((_WORD *)v4 + 15) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(65);
  v4[5] = 0;
  v4[6] = 0;
  *((_DWORD *)v4 + 14) = 0;
  *v4 = &off_49F6708;
  v6 = *((_BYTE *)v4 + 60);
  *((_DWORD *)v4 + 16) = 0;
  v4[9] = 0;
  *((_BYTE *)v4 + 60) = (2 * a3) & 0xF | v6 & 0xF0;
  return v4;
}

