_QWORD *__fastcall sub_7B83C0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int16 v3; // ax

  v2 = sub_7943D0(80, a1, a2, 0);
  *(_OWORD *)(v2 + 1) = 0;
  *v2 = off_49F5208;
  v2[3] = v2[3] & 0xFFFF000000000000LL | 0x603100000000LL;
  v3 = sub_799DF0(0x31u);
  *((_BYTE *)v2 + 32) &= 0xF8u;
  *((_WORD *)v2 + 15) = v3 & 0x3FFF | *((_WORD *)v2 + 15) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(49);
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  *v2 = &off_49F6168;
  *(_OWORD *)(v2 + 5) = 0;
  return v2;
}

