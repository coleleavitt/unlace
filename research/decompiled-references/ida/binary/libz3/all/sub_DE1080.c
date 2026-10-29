__int64 __fastcall sub_DE1080(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rax
  _QWORD *v3; // rax
  _OWORD *v4; // rax
  _OWORD *v5; // rax
  __int64 result; // rax
  _BYTE v7[32]; // [rsp+8h] [rbp-20h] BYREF

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 40;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  v2 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 32) = v2;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 40) = 8;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v3 = (_QWORD *)sub_186B270(0x80u);
  v3[1] = 0;
  v3[3] = 0;
  v3[5] = 0;
  v3[7] = 0;
  v3[9] = 0;
  v3[11] = 0;
  v3[13] = 0;
  v3[15] = 0;
  *(_QWORD *)(a1 + 56) = v3;
  *(_QWORD *)(a1 + 64) = 8;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  v4 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 112) = v4;
  *(_QWORD *)(a1 + 120) = 8;
  *(_DWORD *)(a1 + 128) = 0;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v5 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 144) = 8;
  *(_QWORD *)(a1 + 136) = v5;
  *(_DWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  *(_OWORD *)(a1 + 160) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  sub_180C5A0(v7, "datatype");
  result = sub_15DA4C0(a2 + 560, v7);
  *(_DWORD *)(a1 + 96) = result;
  return result;
}

