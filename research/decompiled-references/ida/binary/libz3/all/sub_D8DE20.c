_OWORD *__fastcall sub_D8DE20(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  _OWORD *v7; // rax
  _OWORD *v8; // rax
  _OWORD *v9; // rax
  _OWORD *result; // rax
  void *v11; // [rsp+0h] [rbp-38h]
  int v12[2]; // [rsp+8h] [rbp-30h] BYREF

  v3 = a1 + 16;
  *(_QWORD *)(v3 - 16) = &off_1C5A7F0;
  *(_QWORD *)(v3 - 8) = a2;
  sub_15C5470(v3, a2);
  sub_16744A0(a1 + 80, a2);
  *(_QWORD *)v12 = 0;
  sub_14B7810(a1 + 104, a2, (int)v12, v4, v5, v6, v11);
  sub_18572D0(v12);
  v7 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 120) = v7;
  *(_DWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 128) = 8;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  v8 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 144) = v8;
  *(_QWORD *)(a1 + 152) = 8;
  *(_DWORD *)(a1 + 160) = 0;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v9 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 168) = v9;
  *(_QWORD *)(a1 + 176) = 8;
  *(_DWORD *)(a1 + 184) = 0;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  result = (_OWORD *)sub_186B270(0xC0u);
  *(_QWORD *)(a1 + 192) = result;
  *(_QWORD *)(a1 + 200) = 8;
  *(_DWORD *)(a1 + 208) = 0;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = 0;
  return result;
}

