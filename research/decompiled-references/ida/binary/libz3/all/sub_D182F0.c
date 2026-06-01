__int64 __fastcall sub_D182F0(__int64 a1)
{
  __int64 v1; // r13
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _OWORD *v4; // rax
  __int64 v5; // rax
  unsigned int v6; // eax
  _DWORD *v7; // r12
  unsigned __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // rax
  int v11; // eax
  _QWORD v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = **(_QWORD **)(a1 + 16);
  v2 = (_QWORD *)sub_186B270(0x198u);
  *v2 = v1;
  v3 = v2;
  v2[1] = 0;
  v4 = (_OWORD *)sub_186B270(0x80u);
  v3[2] = v4;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v5 = *v3;
  v3[5] = v1;
  v3[7] = v5;
  v3[9] = v5;
  v3[12] = v1;
  v3[15] = v1;
  v3[17] = v1;
  v3[19] = v1;
  v3[3] = 8;
  *((_DWORD *)v3 + 8) = 0;
  v3[6] = 0;
  *((_WORD *)v3 + 32) = 0;
  *((_BYTE *)v3 + 66) = 0;
  v3[10] = 0;
  v3[11] = 0;
  v3[13] = 0;
  v3[14] = 0;
  v3[16] = 0;
  v3[18] = 0;
  v13[0] = 0;
  *((_DWORD *)v3 + 40) = 256;
  *((_WORD *)v3 + 82) = 0;
  *((_DWORD *)v3 + 45) = 0;
  *((_OWORD *)v3 + 12) = 0;
  v3[28] = v3 + 30;
  *((_OWORD *)v3 + 13) = 0;
  v3[29] = 0x1000000000LL;
  sub_14DC230(v3 + 19, v13);
  sub_18572D0(v13);
  *((_DWORD *)v3 + 100) = 0;
  *((_BYTE *)v3 + 378) = sub_1859610(a1 + 24, "common_patterns", 1);
  *((_BYTE *)v3 + 379) = sub_1859610(a1 + 24, "distributivity", 1);
  *((_DWORD *)v3 + 95) = sub_1859960(a1 + 24, "distributivity_blowup", 32);
  *((_BYTE *)v3 + 384) = sub_1859610(a1 + 24, "ite_chains", 1);
  *((_BYTE *)v3 + 385) = sub_1859610(a1 + 24, "ite_extra", 1);
  v6 = sub_1859960(a1 + 24, "max_memory", 0xFFFFFFFFLL);
  v7 = *(_DWORD **)(a1 + 16);
  *((_BYTE *)v3 + 160) = 0;
  v8 = (unsigned __int64)v6 << 20;
  v9 = v6 == -1;
  v10 = -1;
  if ( !v9 )
    v10 = v8;
  v3[49] = v10;
  v11 = v7[100];
  *(_QWORD *)(a1 + 16) = v3;
  *((_DWORD *)v3 + 100) = v11;
  sub_D17CA0((__int64)v7);
  return sub_186B220(v7);
}

