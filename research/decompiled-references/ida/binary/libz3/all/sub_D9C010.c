void __fastcall sub_D9C010(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _OWORD *v10; // rax
  _OWORD *v11; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  void *v15; // [rsp+0h] [rbp-58h]
  int v16[2]; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v17[64]; // [rsp+18h] [rbp-40h] BYREF

  *(_QWORD *)a1 = a2;
  sub_1858590(a1 + 8, a3);
  *(_QWORD *)(a1 + 16) = a5;
  sub_1684300(a1 + 24, a2);
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 48) = 0;
  v10 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 56) = v10;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 64) = 8;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  v10[6] = 0;
  v10[7] = 0;
  v11 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 80) = v11;
  *(_QWORD *)(a1 + 88) = 8;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = a6;
  *v11 = 0;
  v11[1] = 0;
  v11[2] = 0;
  v11[3] = 0;
  v11[4] = 0;
  v11[5] = 0;
  v11[6] = 0;
  v11[7] = 0;
  sub_16744A0(a1 + 120, a2);
  sub_1684300(a1 + 144, a2);
  *(_QWORD *)v16 = 0;
  sub_14B7810(a1 + 160, a2, (int)v16, v12, v13, v14, v15);
  sub_18572D0(v16);
  *(_QWORD *)(a1 + 176) = a2;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)v16 = a3;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = &off_1C62200;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = a4;
  *(_BYTE *)(a1 + 296) = 0;
  sub_17F9A60(v17, "ackermannization");
  *(_BYTE *)(a1 + 200) = sub_1859630(*(_QWORD *)v16, "eager", v17, 1);
  sub_18572D0(v17);
}

