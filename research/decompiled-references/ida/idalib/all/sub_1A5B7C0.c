__int64 __fastcall sub_1A5B7C0(__int64 a1, __int64 *a2, __int64 a3, int a4, int a5, int a6, double a7, double a8)
{
  __int64 v10; // r9
  _QWORD vars0[2]; // [rsp+8h] [rbp+0h] BYREF
  _OWORD _18[5]; // [rsp+18h] [rbp+10h] BYREF
  __int64 vars60; // [rsp+68h] [rbp+60h]
  __int64 vars68; // [rsp+70h] [rbp+68h]
  __int64 vars70; // [rsp+78h] [rbp+70h]
  int vars78; // [rsp+80h] [rbp+78h]
  _QWORD _88[2]; // [rsp+88h] [rbp+80h] BYREF
  int vars90; // [rsp+98h] [rbp+90h]
  int vars94; // [rsp+9Ch] [rbp+94h]
  bool vars98; // [rsp+A0h] [rbp+98h]
  bool vars99; // [rsp+A1h] [rbp+99h]
  char vars9A; // [rsp+A2h] [rbp+9Ah]
  bool vars9B; // [rsp+A3h] [rbp+9Bh]
  bool vars9C; // [rsp+A4h] [rbp+9Ch]
  char vars9D; // [rsp+A5h] [rbp+9Dh]
  __int16 vars9E; // [rsp+A6h] [rbp+9Eh]
  _QWORD *varsB0; // [rsp+B8h] [rbp+B0h]

  varsB0 = vars0;
  vars68 = a1;
  _18[4] = 0;
  vars0[0] = _18;
  vars70 = a3;
  vars78 = a4;
  vars0[1] = 0x800000000LL;
  vars60 = 0;
  sub_B85890(_88, a3);
  _88[1] = 0;
  vars98 = a6 != 0;
  vars99 = a6 == 2;
  vars90 = a5;
  vars9B = a6 == 0;
  vars9C = a6 == 0;
  vars9E = 0;
  vars94 = 0;
  vars9A = 1;
  vars9D = 0;
  sub_1A395A0((__int64)vars0);
  sub_1A49A10(a1, (__int64)vars0, a2, 0, 0, v10, 0.0, a8);
  sub_169D230((__int64)vars0);
  return 0;
}
