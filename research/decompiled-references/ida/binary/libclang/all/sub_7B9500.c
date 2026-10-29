_QWORD *__fastcall sub_7B9500(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int16 v3; // ax

  v2 = sub_7943D0(128, a1, a2, 0);
  *(_OWORD *)(v2 + 1) = 0;
  *v2 = off_49F5208;
  v2[3] = v2[3] & 0xFFFF000000000000LL | 0x604900000000LL;
  v3 = sub_799DF0(0x49u);
  *((_BYTE *)v2 + 32) &= 0xF8u;
  *((_WORD *)v2 + 15) = v3 & 0x3FFF | *((_WORD *)v2 + 15) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(73);
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  *v2 = &off_49F6458;
  v2[8] = 0;
  v2[9] &= 0xFFFFFFFC00000000LL;
  v2[12] = 0;
  v2[15] = 0;
  *((_OWORD *)v2 + 5) = 0;
  *(_OWORD *)(v2 + 13) = 0;
  return v2;
}

