__int64 __fastcall sub_CA2DB0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  _OWORD *v8; // rax
  _OWORD *v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // rax
  __int64 result; // rax
  _BYTE v17[64]; // [rsp+18h] [rbp-40h] BYREF

  *a1 = a2;
  sub_F735C0(a1 + 1, a2);
  v5 = *a1;
  *((_DWORD *)a1 + 36) = 256;
  a1[17] = v5;
  *((_WORD *)a1 + 74) = 0;
  a1[26] = a1 + 28;
  *((_DWORD *)a1 + 41) = 0;
  a1[27] = 0x1000000000LL;
  *((_OWORD *)a1 + 11) = 0;
  *((_OWORD *)a1 + 12) = 0;
  sub_14DC230(a1 + 17, a3);
  sub_1474610(a1 + 44, *a1, a3);
  sub_16669D0(a1 + 45, *a1);
  sub_16744A0(a1 + 47, *a1);
  v6 = *a1;
  a1[50] = *a1;
  sub_180C5A0(v17, "pb");
  *((_DWORD *)a1 + 102) = sub_15DA4C0(v6 + 560, v17);
  v7 = *a1;
  a1[54] = 0;
  a1[55] = 0;
  a1[56] = 1;
  a1[57] = 0;
  a1[58] = v7;
  a1[59] = 0;
  *((_OWORD *)a1 + 26) = 0;
  v8 = (_OWORD *)sub_186B270(0x80u);
  a1[63] = v8;
  *((_DWORD *)a1 + 130) = 0;
  a1[64] = 8;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v9 = (_OWORD *)sub_186B270(0x80u);
  a1[67] = 8;
  v10 = *a1;
  a1[66] = v9;
  *((_DWORD *)a1 + 136) = 0;
  a1[69] = v10;
  a1[70] = 0;
  a1[71] = 0;
  a1[72] = v10;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  sub_1584DD0(a1 + 73, v10, 0);
  a1[91] = a1 + 140;
  a1[73] = &off_1C59180;
  *((_DWORD *)a1 + 184) = 0;
  a1[93] = 0;
  sub_1584DD0(a1 + 94, v10, 0);
  a1[112] = 0;
  *((_DWORD *)a1 + 226) = 0;
  a1[94] = &off_1C61DB8;
  sub_1584DD0(a1 + 114, v10, 0);
  v11 = *a1;
  a1[134] = v10;
  *((_DWORD *)a1 + 264) = 0;
  a1[114] = &off_1C61DE0;
  a1[133] = 0;
  a1[135] = 0;
  a1[136] = v10;
  a1[137] = 0;
  a1[138] = v10;
  a1[139] = 0;
  a1[73] = &off_1C591A0;
  a1[140] = v11;
  a1[141] = a1;
  a1[142] = 0;
  a1[143] = v11;
  v12 = sub_1859960(a3, "max_memory", 0xFFFFFFFFLL);
  v13 = (unsigned __int64)v12 << 20;
  v14 = v12 == -1;
  v15 = -1;
  if ( !v14 )
    v15 = v13;
  a1[62] = v15;
  *((_DWORD *)a1 + 121) = sub_1859960(a3, "pb2bv_all_clauses_limit", 8);
  *((_DWORD *)a1 + 122) = sub_1859960(a3, "pb2bv_cardinality_limit", 0xFFFFFFFFLL);
  sub_14DC230(a1 + 17, a3);
  result = sub_1473C20(a1 + 44, a3);
  *((_BYTE *)a1 + 144) = 0;
  *((_BYTE *)a1 + 147) = 1;
  return result;
}

