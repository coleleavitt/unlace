__int64 __fastcall sub_D162E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 *v3; // rax
  __int64 *v4; // rbx
  _OWORD *v5; // rax
  __int64 v6; // rax
  unsigned int v7; // eax
  unsigned __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 *v15; // rax
  __int64 *v16; // rbx
  _OWORD *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v25; // [rsp+8h] [rbp-60h]
  char v26[8]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v27[8]; // [rsp+28h] [rbp-40h] BYREF

  sub_1858590(v26, a2);
  sub_1862300(v26, "elim_and", 1);
  sub_1862300(v26, "blast_distinct", 1);
  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C5A340;
  sub_1858590(v2 + 24, a2);
  v3 = (__int64 *)sub_186B270(0x198u);
  *v3 = a1;
  v4 = v3;
  v3[1] = 0;
  v5 = (_OWORD *)sub_186B270(0x80u);
  v4[2] = (__int64)v5;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  *((_WORD *)v4 + 32) = 0;
  v4[3] = 8;
  v6 = *v4;
  *((_DWORD *)v4 + 8) = 0;
  v4[7] = v6;
  v4[9] = v6;
  v4[5] = a1;
  v4[6] = 0;
  *((_BYTE *)v4 + 66) = 0;
  v4[10] = 0;
  v4[11] = 0;
  v4[12] = a1;
  v4[13] = 0;
  v4[14] = 0;
  v4[15] = a1;
  v4[16] = 0;
  v4[17] = a1;
  v4[18] = 0;
  v27[0] = 0;
  v4[19] = a1;
  *((_DWORD *)v4 + 40) = 256;
  v4[28] = (__int64)(v4 + 30);
  *((_WORD *)v4 + 82) = 0;
  *((_DWORD *)v4 + 45) = 0;
  v4[29] = 0x1000000000LL;
  *((_OWORD *)v4 + 12) = 0;
  *((_OWORD *)v4 + 13) = 0;
  sub_14DC230(v4 + 19, v27);
  sub_18572D0(v27);
  *((_DWORD *)v4 + 100) = 0;
  *((_BYTE *)v4 + 378) = sub_1859610(a2, "common_patterns", 1);
  *((_BYTE *)v4 + 379) = sub_1859610(a2, "distributivity", 1);
  *((_DWORD *)v4 + 95) = sub_1859960(a2, "distributivity_blowup", 32);
  *((_BYTE *)v4 + 384) = sub_1859610(a2, "ite_chains", 1);
  *((_BYTE *)v4 + 385) = sub_1859610(a2, "ite_extra", 1);
  v7 = sub_1859960(a2, "max_memory", 0xFFFFFFFFLL);
  *((_BYTE *)v4 + 160) = 0;
  v8 = (unsigned __int64)v7 << 20;
  v9 = v7 == -1;
  v10 = -1;
  *(_QWORD *)(v2 + 16) = v4;
  if ( !v9 )
    v10 = v8;
  v4[49] = v10;
  v11 = sub_EE8D70(v2);
  v12 = sub_D156B0(a1, a2);
  v13 = sub_EE8E00(v12, v26);
  v25 = sub_EE7A70(v13, v11);
  v14 = sub_186B270(0x20u);
  *(_DWORD *)(v14 + 8) = 0;
  *(_QWORD *)v14 = &off_1C5A340;
  sub_1858590(v14 + 24, a2);
  v15 = (__int64 *)sub_186B270(0x198u);
  *v15 = a1;
  v16 = v15;
  v15[1] = 0;
  v17 = (_OWORD *)sub_186B270(0x80u);
  v16[2] = (__int64)v17;
  *v17 = 0;
  v17[1] = 0;
  v17[2] = 0;
  v17[3] = 0;
  v17[4] = 0;
  v17[5] = 0;
  v17[6] = 0;
  v17[7] = 0;
  *((_DWORD *)v16 + 8) = 0;
  v16[3] = 8;
  v18 = *v16;
  v16[5] = a1;
  v16[7] = v18;
  v16[9] = v18;
  v16[6] = 0;
  *((_WORD *)v16 + 32) = 0;
  *((_BYTE *)v16 + 66) = 0;
  v16[10] = 0;
  v16[11] = 0;
  v16[12] = a1;
  v16[13] = 0;
  v16[14] = 0;
  v16[15] = a1;
  v16[16] = 0;
  v16[17] = a1;
  v16[18] = 0;
  v27[0] = 0;
  v16[19] = a1;
  *((_DWORD *)v16 + 40) = 256;
  v16[28] = (__int64)(v16 + 30);
  *((_WORD *)v16 + 82) = 0;
  *((_DWORD *)v16 + 45) = 0;
  v16[29] = 0x1000000000LL;
  *((_OWORD *)v16 + 12) = 0;
  *((_OWORD *)v16 + 13) = 0;
  sub_14DC230(v16 + 19, v27);
  sub_18572D0(v27);
  *((_DWORD *)v16 + 100) = 0;
  *((_BYTE *)v16 + 378) = sub_1859610(a2, "common_patterns", 1);
  *((_BYTE *)v16 + 379) = sub_1859610(a2, "distributivity", 1);
  *((_DWORD *)v16 + 95) = sub_1859960(a2, "distributivity_blowup", 32);
  *((_BYTE *)v16 + 384) = sub_1859610(a2, "ite_chains", 1);
  *((_BYTE *)v16 + 385) = sub_1859610(a2, "ite_extra", 1);
  v19 = sub_1859960(a2, "max_memory", 0xFFFFFFFFLL);
  *((_BYTE *)v16 + 160) = 0;
  v20 = (unsigned __int64)v19 << 20;
  v9 = v19 == -1;
  v21 = -1;
  *(_QWORD *)(v14 + 16) = v16;
  if ( !v9 )
    v21 = v20;
  v16[49] = v21;
  v22 = sub_EE8D70(v14);
  v23 = sub_EE9140(v22, v25);
  sub_18572D0(v26);
  return v23;
}

