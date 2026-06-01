_QWORD *__fastcall sub_BBFEF0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx
  __int16 v7; // ax
  unsigned int v9; // [rsp+0h] [rbp-68h] BYREF
  char v10; // [rsp+4h] [rbp-64h]

  v10 &= ~1u;
  v9 = 0;
  v6 = sub_B8FF70(120, a1, a2, 0, a5, a6);
  v6[1] = 0;
  v6[2] = 0;
  *v6 = off_2C02B30;
  v6[3] = v6[3] & 0xFFFF000000000000LL | 0x601E00000000LL;
  v7 = sub_B8C0C0(30);
  *((_BYTE *)v6 + 32) &= 0xF8u;
  *((_WORD *)v6 + 15) = v7 & 0x3FFF | *((_WORD *)v6 + 15) & 0xC000;
  if ( byte_2CD7310[0] )
    sub_B8B8D0(30);
  v6[7] = 0;
  *(_OWORD *)(v6 + 5) = 0;
  *v6 = &off_2C04A68;
  sub_A53C40((__int64)(v6 + 8), (int *)&v9);
  if ( v9 > 1 )
    sub_A4F8E0((int *)&v9);
  sub_A5F590((__int64)a1, (__int64)sub_B70CC0, (__int64)(v6 + 8));
  return v6;
}
