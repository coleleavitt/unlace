__int64 __fastcall sub_C1B210(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r12
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rax
  _OWORD *v7; // rax
  _OWORD *v8; // rax
  void *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v15; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v16[6]; // [rsp+8h] [rbp-30h] BYREF

  v15 = 0;
  sub_1862300(&v15, "mul_to_power", 1);
  v2 = sub_186B270(0x18u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C583E8;
  v4 = (_QWORD *)sub_186B270(0xA8u);
  *v4 = a1;
  v5 = v4;
  sub_16669D0(v4 + 1, a1);
  v6 = sub_186B270(0x140u);
  *(_QWORD *)v6 = 0;
  *(_QWORD *)(v6 + 224) = 1;
  *(_QWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 24) = 1;
  *(_QWORD *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 48) = 0;
  *(_QWORD *)(v6 + 56) = 0;
  *(_QWORD *)(v6 + 64) = 1;
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)(v6 + 80) = 0;
  *(_QWORD *)(v6 + 88) = 0;
  *(_QWORD *)(v6 + 96) = 0;
  *(_QWORD *)(v6 + 104) = 1;
  *(_QWORD *)(v6 + 112) = 0;
  *(_QWORD *)(v6 + 120) = 0;
  *(_QWORD *)(v6 + 128) = 0;
  *(_QWORD *)(v6 + 136) = 0;
  *(_QWORD *)(v6 + 144) = 1;
  *(_QWORD *)(v6 + 152) = 0;
  *(_QWORD *)(v6 + 160) = 0;
  *(_QWORD *)(v6 + 168) = 0;
  *(_QWORD *)(v6 + 176) = 0;
  *(_QWORD *)(v6 + 184) = 1;
  *(_QWORD *)(v6 + 192) = 0;
  *(_QWORD *)(v6 + 200) = 0;
  *(_QWORD *)(v6 + 208) = 0;
  *(_QWORD *)(v6 + 216) = 0;
  *(_BYTE *)(v6 + 228) = 0;
  *(_QWORD *)(v6 + 248) = 0;
  *(_OWORD *)(v6 + 232) = 0;
  *(_QWORD *)(v6 + 256) = 0;
  *(_QWORD *)(v6 + 264) = 1;
  *(_QWORD *)(v6 + 272) = 0;
  *(_QWORD *)(v6 + 280) = 0;
  *(_QWORD *)(v6 + 288) = 0;
  *(_QWORD *)(v6 + 296) = 0;
  *(_QWORD *)(v6 + 304) = 1;
  *(_QWORD *)(v6 + 312) = 0;
  v5[3] = v6;
  v5[4] = 8;
  *((_DWORD *)v5 + 10) = 0;
  v7 = (_OWORD *)sub_186B270(0x80u);
  v5[6] = v7;
  v5[7] = 8;
  *((_DWORD *)v5 + 16) = 0;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  v8 = (_OWORD *)sub_186B270(0x80u);
  v5[9] = v8;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v5[10] = 8;
  *((_DWORD *)v5 + 22) = 0;
  v9 = qword_1C7F2C0;
  v5[12] = a1;
  v5[13] = 0;
  v5[14] = 0;
  v5[15] = 1;
  v5[16] = 0;
  v5[17] = 1;
  v5[18] = 0;
  sub_182CBA0(v9, v5 + 17);
  *((_BYTE *)v5 + 140) &= ~1u;
  *((_DWORD *)v5 + 34) = 1;
  v5[20] = 0;
  *(_QWORD *)(v3 + 16) = v5;
  v10 = sub_EE8D70(v3);
  v16[0] = 0;
  v11 = sub_D156B0(a1, (unsigned int)v16);
  v12 = sub_EE8E00(v11, &v15);
  v13 = sub_EE7A70(v12, v10);
  sub_18572D0(v16);
  sub_18572D0(&v15);
  return v13;
}

