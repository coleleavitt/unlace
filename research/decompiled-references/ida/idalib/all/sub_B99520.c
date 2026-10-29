_QWORD *__fastcall sub_B99520(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx
  __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  int v9; // [rsp+8h] [rbp-40h]
  __int64 v10; // [rsp+10h] [rbp-38h] BYREF
  int v11; // [rsp+18h] [rbp-30h]
  __int64 v12; // [rsp+20h] [rbp-28h]

  v11 = 0;
  v10 = 0;
  v12 = 0;
  v8 = 0;
  v9 = 0;
  v6 = sub_B8FF70(176, a1, a2, 0, a5, a6);
  sub_B7C930((__int64)v6, 0x25u, (__int64)a1, 0, 0, &v10, 0, 0, 0, 0, 0, 0, (__int64)&v8);
  v6[21] = 0;
  *v6 = &off_2C02EB8;
  return v6;
}
