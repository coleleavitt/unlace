_QWORD *__fastcall sub_7D6C00(_QWORD *a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // rbx
  __int16 v5; // ax

  v4 = sub_7943D0(40, a1, a2, 24LL * a3);
  *(_OWORD *)(v4 + 1) = 0;
  *v4 = off_49F5208;
  v4[3] = v4[3] & 0xFFFF000000000000LL | 0x605100000000LL;
  v5 = sub_799DF0(0x51u);
  *((_BYTE *)v4 + 32) &= 0xF8u;
  *((_WORD *)v4 + 15) = v5 & 0x3FFF | *((_WORD *)v4 + 15) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(81);
  *((_DWORD *)v4 + 9) = a3;
  *v4 = &off_49F65A8;
  return v4;
}

