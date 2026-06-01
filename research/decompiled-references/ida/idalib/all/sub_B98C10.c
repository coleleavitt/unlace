_QWORD *__fastcall sub_B98C10(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  char v7; // bp
  _QWORD *v8; // rbx
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  int v11; // [rsp+8h] [rbp-50h]
  __int64 v12; // [rsp+10h] [rbp-48h] BYREF
  int v13; // [rsp+18h] [rbp-40h]
  __int64 v14; // [rsp+20h] [rbp-38h]

  v6 = (a3 >> 1) & 1;
  v7 = 32 * (a3 & 1);
  v13 = 0;
  v12 = 0;
  v14 = 0;
  v10 = 0;
  v11 = 0;
  v8 = sub_B8FF70(176, a1, a2, 16 * (a3 & 1) + 8LL * ((a3 & 2) != 0), a5, a6);
  sub_B7C930((__int64)v8, 0x26u, (__int64)a1, 0, 0, &v12, 0, 0, 0, 0, 0, 0, (__int64)&v10);
  *((_BYTE *)v8 + 29) &= ~2u;
  *((_DWORD *)v8 + 21) &= 0x60001FFFu;
  v8[21] = 0;
  *v8 = &off_2C02DC8;
  *((_BYTE *)v8 + 87) = ((_BYTE)v6 << 6) | v7;
  return v8;
}
