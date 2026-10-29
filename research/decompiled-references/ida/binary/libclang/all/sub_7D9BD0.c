_QWORD *__fastcall sub_7D9BD0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int16 v3; // ax
  unsigned int v5; // [rsp+0h] [rbp-68h] BYREF
  char v6; // [rsp+4h] [rbp-64h]

  v6 &= ~1u;
  v2 = sub_7943D0(120, a1, a2, 0);
  v5 = 0;
  *(_OWORD *)(v2 + 1) = 0;
  *v2 = off_49F5208;
  v2[3] = v2[3] & 0xFFFF000000000000LL | 0x601C00000000LL;
  v3 = sub_799DF0(0x1Cu);
  *((_BYTE *)v2 + 32) &= 0xF8u;
  *((_WORD *)v2 + 15) = v3 & 0x3FFF | *((_WORD *)v2 + 15) & 0xC000;
  if ( (_BYTE)dword_4AD21D4 )
    sub_797E90(28);
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  *v2 = &off_49F6C40;
  sub_6A4260((__int64)(v2 + 8), (int *)&v5);
  if ( v5 > 1 )
    sub_69F740((__int64)&v5);
  sub_6B5A70((__int64)a1, (__int64)sub_778160, (__int64)(v2 + 8));
  return v2;
}

