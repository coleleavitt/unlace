_QWORD *__fastcall sub_7B9020(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int16 v3; // ax

  v2 = sub_7943D0(136, a1, a2, 0);
  *(_OWORD *)(v2 + 1) = 0;
  *v2 = off_49F5208;
  v2[3] = v2[3] & 0xFFFF000000000000LL | 0x601300000000LL;
  v3 = sub_799DF0(0x13u);
  *((_BYTE *)v2 + 32) &= 0xF8u;
  *((_WORD *)v2 + 15) = v3 & 0x3FFF | *((_WORD *)v2 + 15) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(19);
  v2[5] = 0;
  *v2 = &off_47D9B58;
  sub_79B760((__int64)(v2 + 6), 19);
  *((_BYTE *)v2 + 132) &= 0xFCu;
  v2[10] = 0;
  *((_DWORD *)v2 + 15) = 0;
  *v2 = &off_49F6360;
  v2[13] = 0;
  *((_DWORD *)v2 + 28) = 0;
  v2[15] = 0;
  *((_DWORD *)v2 + 32) = 0;
  *(_OWORD *)(v2 + 11) = 0;
  return v2;
}

