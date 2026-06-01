_QWORD *__fastcall sub_B9C1B0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx
  __int16 v7; // ax
  unsigned int v9; // [rsp+0h] [rbp-68h] BYREF
  char v10; // [rsp+4h] [rbp-64h]

  v10 &= ~1u;
  v9 = 0;
  v6 = sub_B6C230(120, a1, a2, 0, a5, a6);
  v6[1] = 0;
  v6[2] = 0;
  *v6 = off_2BD8B30;
  v6[3] = v6[3] & 0xFFFF000000000000LL | 0x601E00000000LL;
  v7 = sub_B68380(30);
  *((_BYTE *)v6 + 32) &= 0xF8u;
  *((_WORD *)v6 + 15) = v7 & 0x3FFF | *((_WORD *)v6 + 15) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(30);
  v6[7] = 0;
  *(_OWORD *)(v6 + 5) = 0;
  *v6 = &off_2BDAA68;
  sub_A2FF00((__int64)(v6 + 8), (int *)&v9);
  if ( v9 > 1 )
    sub_A2BBA0((int *)&v9);
  sub_A3B850((__int64)a1, (__int64)sub_B4CF80, (__int64)(v6 + 8));
  return v6;
}

