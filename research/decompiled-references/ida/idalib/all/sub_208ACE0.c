__int64 __fastcall sub_208ACE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rsi
  _QWORD v12[8]; // [rsp+8h] [rbp-40h] BYREF

  v7 = sub_20AFB20(a1);
  v8 = operator new(0x60u);
  sub_208B2F0(v12, a4);
  v9 = v12[0];
  *(_QWORD *)(v8 + 16) = 0;
  *(_OWORD *)v8 = 0;
  *(_QWORD *)(v8 + 24) = v9;
  if ( v9 )
  {
    sub_20B2EE0(v8 + 24, v9, 1);
    v10 = v12[0];
    *(_BYTE *)(v8 + 32) = 0;
    if ( v10 )
      sub_20A0850(v12);
  }
  else
  {
    *(_BYTE *)(v8 + 32) = 0;
  }
  *(_QWORD *)(v8 + 40) = v7;
  *(_QWORD *)(v8 + 48) = 0;
  *(_QWORD *)(v8 + 56) = 0;
  sub_20B30C0(v8 + 40);
  *(_BYTE *)(v8 + 64) = 1;
  sub_208ACB0((_QWORD *)(v8 + 72), a2);
  sub_208AC80((_QWORD *)(v8 + 80), a3);
  *(_QWORD *)(v8 + 88) = 0;
  return v8;
}
