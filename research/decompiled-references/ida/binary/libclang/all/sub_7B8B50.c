_QWORD *__fastcall sub_7B8B50(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int16 v3; // ax

  v2 = sub_7943D0(152, a1, a2, 0);
  *(_OWORD *)(v2 + 1) = 0;
  *v2 = off_49F5208;
  v2[3] = v2[3] & 0xFFFF000000000000LL | 0x601500000000LL;
  v3 = sub_799DF0(0x15u);
  *((_BYTE *)v2 + 32) &= 0xF8u;
  *((_WORD *)v2 + 15) = v3 & 0x3FFF | *((_WORD *)v2 + 15) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(21);
  v2[5] = 0;
  *v2 = &off_47D9B58;
  sub_79B760((__int64)(v2 + 6), 21);
  v2[10] = 0;
  *((_DWORD *)v2 + 15) = 0;
  *(_OWORD *)(v2 + 11) = 0;
  *v2 = &off_49F6260;
  v2[13] = 0;
  *((_DWORD *)v2 + 28) = 0;
  v2[17] = 0;
  *((_DWORD *)v2 + 36) = 0;
  *(_OWORD *)(v2 + 15) = 0;
  return v2;
}

