__int64 __fastcall sub_BAD3F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rax
  _OWORD *v7; // rax
  _OWORD *v8; // rax
  _BYTE v10[48]; // [rsp+8h] [rbp-30h] BYREF

  v1 = sub_186B270(0xB0u);
  v2 = *(_QWORD *)(a1 + 104);
  v3 = v1;
  sub_180C5A0(v10, "datalog_relation");
  v4 = sub_15DA4C0(v2 + 560, v10);
  sub_966710(v3, a1, v4);
  v5 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)v3 = off_1C73998;
  sub_1624F90(v3 + 56, v5);
  sub_16744A0(v3 + 88, *(_QWORD *)(a1 + 104));
  v6 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(v3 + 120) = 0;
  *(_QWORD *)(v3 + 112) = v6;
  v7 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v3 + 128) = v7;
  *(_DWORD *)(v3 + 144) = 0;
  *(_QWORD *)(v3 + 136) = 8;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  v8 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v3 + 152) = v8;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  *(_QWORD *)(v3 + 160) = 8;
  *(_DWORD *)(v3 + 168) = 0;
  return v3;
}

