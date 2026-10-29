__int64 __fastcall sub_38EF50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rbx
  _OWORD *v5; // rax
  __int64 v7; // [rsp+10h] [rbp-58h]
  _QWORD v8[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = sub_186B270(0x30u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C4DE50;
  *(_BYTE *)(v2 + 12) = 0;
  sub_1858590(v2 + 16, a2);
  *(_OWORD *)(v2 + 24) = 0;
  v3 = sub_186B270(0xF18u);
  *(_QWORD *)v3 = a1;
  v4 = v3;
  *(_BYTE *)(v3 + 8) = 0;
  v7 = v3 + 16;
  sub_3932D0(v3 + 16);
  v8[0] = 0;
  sub_64C8D0(v4 + 32, a1, v7, v4 + 3064, v8);
  sub_18572D0(v8);
  v8[0] = 0;
  sub_2527E0(v4 + 3064, (__int64)v8);
  sub_18572D0(v8);
  v5 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(v4 + 3824) = v5;
  *(_QWORD *)(v4 + 3832) = 8;
  *(_DWORD *)(v4 + 3840) = 0;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  *(_OWORD *)(v4 + 3848) = 0;
  sub_64C4C0(v4 + 32, a2);
  *(_QWORD *)(v2 + 40) = v4;
  return sub_EE8D70(v2);
}

