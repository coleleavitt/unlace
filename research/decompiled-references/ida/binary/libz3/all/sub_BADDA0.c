__int64 __fastcall sub_BADDA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rax
  _OWORD *v9; // rax
  _OWORD *v10; // rax
  _BYTE v12[48]; // [rsp+8h] [rbp-30h] BYREF

  v3 = sub_186B270(0xB0u);
  v4 = *(_QWORD *)(a2 + 104);
  v5 = v3;
  sub_180C5A0(v12, "datalog_relation");
  v6 = sub_15DA4C0(v4 + 560, v12);
  sub_966710(v5, a2, v6);
  v7 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)v5 = off_1C73998;
  sub_1624F90(v5 + 56, v7);
  sub_16744A0(v5 + 88, *(_QWORD *)(a2 + 104));
  v8 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(v5 + 120) = 0;
  *(_QWORD *)(v5 + 112) = v8;
  v9 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v5 + 128) = v9;
  *(_DWORD *)(v5 + 144) = 0;
  *(_QWORD *)(v5 + 136) = 8;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  v10 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v5 + 152) = v10;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  v10[6] = 0;
  v10[7] = 0;
  *(_QWORD *)(v5 + 160) = 8;
  *(_DWORD *)(v5 + 168) = 0;
  return v5;
}

