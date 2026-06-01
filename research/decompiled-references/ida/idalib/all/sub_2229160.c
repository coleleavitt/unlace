__int64 __fastcall sub_2229160(__int64 a1, __int64 a2)
{
  _QWORD v3[4]; // [rsp+0h] [rbp-98h] BYREF
  char v4; // [rsp+20h] [rbp-78h]
  _QWORD v5[2]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v6[2]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v7[2]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v8[2]; // [rsp+58h] [rbp-40h] BYREF
  _QWORD v9[6]; // [rsp+68h] [rbp-30h] BYREF

  v3[0] = "[{0}:{1}, byte={2}]: {3}";
  v6[1] = a1 + 24;
  v3[2] = v9;
  v3[1] = 24;
  v4 = 1;
  v5[0] = off_2C75C48;
  v5[1] = a1 + 8;
  v3[3] = 4;
  v7[1] = a1 + 20;
  v6[0] = off_2C714B8;
  v7[0] = off_2C714B8;
  v8[0] = off_2C714B8;
  v8[1] = a1 + 16;
  v9[0] = v8;
  v9[1] = v7;
  v9[2] = v6;
  v9[3] = v5;
  return sub_227C750(a2, v3);
}
