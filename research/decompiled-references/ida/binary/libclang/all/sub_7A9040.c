_QWORD *__fastcall sub_7A9040(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int16 v3; // ax

  v2 = sub_7943D0(136, a1, a2, 0);
  *(_OWORD *)(v2 + 1) = 0;
  *v2 = off_49F5208;
  v2[3] = v2[3] & 0xFFFF000000000000LL | 0x601D00000000LL;
  v3 = sub_799DF0(0x1Du);
  *((_BYTE *)v2 + 32) &= 0xF8u;
  *((_WORD *)v2 + 15) = v3 & 0x3FFF | *((_WORD *)v2 + 15) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(29);
  *((_BYTE *)v2 + 84) &= ~1u;
  v2[5] = 0;
  v2[6] = 0;
  *v2 = &off_49F5DD0;
  v2[7] = 0;
  *((_DWORD *)v2 + 20) = 0;
  *((_OWORD *)v2 + 4) = 0;
  return v2;
}

