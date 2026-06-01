__int64 __fastcall sub_9D5820(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // rsi
  void *v6; // r14
  void *v7; // r14
  void *v8; // r12
  _BYTE v10[16]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v11[16]; // [rsp+10h] [rbp-78h] BYREF
  _BYTE v12[16]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v15[56]; // [rsp+50h] [rbp-38h] BYREF

  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 720) + 4LL * a3 + 3) & 0x40) != 0 )
  {
    v5 = a4 + 32;
    if ( a5 )
      sub_9A9130((__int64)v10, v5);
    else
      sub_9ABE60((__int64)v10, v5);
    sub_894960((__int64)v12, (__int64)v10);
    sub_9D4F70(a1, (__int64)v12);
    v6 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v14);
    sub_182CBA0(v6, v15);
    v7 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v12);
    sub_182CBA0(v7, v13);
    v8 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v10);
    sub_182CBA0(v8, v11);
    return a1;
  }
  else
  {
    sub_8A6550(a1, a4);
    return a1;
  }
}

