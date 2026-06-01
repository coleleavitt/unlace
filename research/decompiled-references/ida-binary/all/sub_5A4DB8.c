__int64 *__fastcall sub_5A4DB8(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  _BYTE v10[33]; // [rsp+1Fh] [rbp-21h] BYREF

  v2 = sub_5A5456(a2);
  sub_5A5C65(v10, v2);
  v3 = sub_5A4424(a2);
  sub_5A5C8E(a1, v3, v10);
  sub_59D04A((__int64)v10);
  v4 = sub_59C292((__int64)a1);
  v5 = *a1;
  v6 = sub_5A5494(a2);
  v7 = sub_5A5464(a2);
  v8 = sub_5A5CEC(v7, v6, v5, v4);
  a1[1] = v8;
  return a1;
}
