_QWORD *__fastcall sub_7A81C0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r12
  _QWORD *v4; // rbx
  __int16 v5; // ax

  v3 = a3;
  v4 = sub_7943D0(64, a1, a2, 8LL * a3);
  *(_OWORD *)(v4 + 1) = 0;
  *v4 = off_49F5208;
  v4[3] = v4[3] & 0xFFFF000000000000LL | 0x603500000000LL;
  v5 = sub_799DF0(0x35u);
  *((_BYTE *)v4 + 32) &= 0xF8u;
  *((_WORD *)v4 + 15) = v5 & 0x3FFF | *((_WORD *)v4 + 15) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(53);
  v4[5] = 0;
  v4[6] = 0;
  *((_DWORD *)v4 + 14) = v3;
  *v4 = &off_49F5A20;
  if ( (_DWORD)v3 )
    memset(v4 + 8, 0, 8 * v3);
  return v4;
}

