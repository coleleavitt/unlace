_QWORD *__fastcall sub_7D5F50(_QWORD *a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // rbx
  __int16 v5; // ax
  char v6; // al

  v4 = sub_7943D0(88, a1, a2, 8LL * a3);
  *(_OWORD *)(v4 + 1) = 0;
  *v4 = off_49F5208;
  v4[3] = v4[3] & 0xFFFF000000000000LL | 0x604200000000LL;
  v5 = sub_799DF0(0x42u);
  *((_BYTE *)v4 + 32) &= 0xF8u;
  *((_WORD *)v4 + 15) = v5 & 0x3FFF | *((_WORD *)v4 + 15) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(66);
  v4[5] = 0;
  *((_DWORD *)v4 + 16) = 0;
  v4[9] = 0;
  *v4 = &off_49F67F8;
  v6 = *((_BYTE *)v4 + 80);
  *((_DWORD *)v4 + 21) = a3;
  *((_OWORD *)v4 + 3) = 0;
  *((_BYTE *)v4 + 80) = v6 & 0xF8 | 6;
  return v4;
}

