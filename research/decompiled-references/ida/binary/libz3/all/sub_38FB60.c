__int64 __fastcall sub_38FB60(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  _OWORD *v7; // rax
  __int64 v9; // [rsp+10h] [rbp-58h]
  _QWORD v10[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = sub_186B270(0x30u);
  v3 = *(_BYTE *)(a1 + 12);
  v4 = v2;
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C4DE50;
  *(_BYTE *)(v2 + 12) = v3;
  sub_1858590(v2 + 16, a1 + 16);
  *(_OWORD *)(v4 + 24) = 0;
  v5 = sub_186B270(0xF18u);
  *(_QWORD *)v5 = a2;
  v6 = v5;
  *(_BYTE *)(v5 + 8) = v3;
  v9 = v5 + 16;
  sub_3932D0(v5 + 16);
  v10[0] = 0;
  sub_64C8D0(v6 + 32, a2, v9, v6 + 3064, v10);
  sub_18572D0(v10);
  v10[0] = 0;
  sub_2527E0(v6 + 3064, (__int64)v10);
  sub_18572D0(v10);
  v7 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(v6 + 3824) = v7;
  *(_QWORD *)(v6 + 3832) = 8;
  *(_DWORD *)(v6 + 3840) = 0;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  *(_OWORD *)(v6 + 3848) = 0;
  sub_64C4C0(v6 + 32, a1 + 16);
  *(_QWORD *)(v4 + 40) = v6;
  return v4;
}

