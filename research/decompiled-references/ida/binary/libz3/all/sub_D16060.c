__int64 __fastcall sub_D16060(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _OWORD *v6; // rax
  __int64 v7; // rax
  unsigned int v8; // eax
  unsigned __int64 v9; // rdx
  bool v10; // zf
  __int64 v11; // rax
  _QWORD v13[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C5A340;
  sub_1858590(v2 + 24, a2);
  v4 = (_QWORD *)sub_186B270(0x198u);
  *v4 = a1;
  v5 = v4;
  v4[1] = 0;
  v6 = (_OWORD *)sub_186B270(0x80u);
  v5[2] = v6;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v7 = *v5;
  v5[5] = a1;
  v5[7] = v7;
  v5[9] = v7;
  v5[12] = a1;
  v5[15] = a1;
  v5[17] = a1;
  v5[19] = a1;
  v5[3] = 8;
  *((_DWORD *)v5 + 8) = 0;
  v5[6] = 0;
  *((_WORD *)v5 + 32) = 0;
  *((_BYTE *)v5 + 66) = 0;
  v5[10] = 0;
  v5[11] = 0;
  v5[13] = 0;
  v5[14] = 0;
  v5[16] = 0;
  v5[18] = 0;
  v13[0] = 0;
  *((_DWORD *)v5 + 40) = 256;
  *((_WORD *)v5 + 82) = 0;
  *((_DWORD *)v5 + 45) = 0;
  *((_OWORD *)v5 + 12) = 0;
  v5[28] = v5 + 30;
  *((_OWORD *)v5 + 13) = 0;
  v5[29] = 0x1000000000LL;
  sub_14DC230(v5 + 19, v13);
  sub_18572D0(v13);
  *((_DWORD *)v5 + 100) = 0;
  *((_BYTE *)v5 + 378) = sub_1859610(a2, "common_patterns", 1);
  *((_BYTE *)v5 + 379) = sub_1859610(a2, "distributivity", 1);
  *((_DWORD *)v5 + 95) = sub_1859960(a2, "distributivity_blowup", 32);
  *((_BYTE *)v5 + 384) = sub_1859610(a2, "ite_chains", 1);
  *((_BYTE *)v5 + 385) = sub_1859610(a2, "ite_extra", 1);
  v8 = sub_1859960(a2, "max_memory", 0xFFFFFFFFLL);
  *((_BYTE *)v5 + 160) = 0;
  v9 = (unsigned __int64)v8 << 20;
  v10 = v8 == -1;
  v11 = -1;
  *(_QWORD *)(v3 + 16) = v5;
  if ( !v10 )
    v11 = v9;
  v5[49] = v11;
  return sub_EE8D70(v3);
}

