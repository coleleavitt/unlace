__int64 *__fastcall sub_831AF0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  void *v8; // r12
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h]
  _QWORD v12[2]; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v13[6]; // [rsp+28h] [rbp-30h] BYREF

  v5 = a2[9];
  v12[0] = 0;
  v12[1] = 0;
  v11 = v5;
  v13[0] = 1;
  v13[1] = 0;
  v10 = 0;
  sub_830C60(a1, a2, a3, a4, a5, (__int64)v12, &v10);
  v6 = v10;
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 8))-- == 1 )
      sub_15D7BC0(v11, v6);
  }
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v12);
  sub_182CBA0(v8, v13);
  return a1;
}

