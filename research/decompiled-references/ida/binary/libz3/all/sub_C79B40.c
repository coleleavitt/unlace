__int64 __fastcall sub_C79B40(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  _OWORD *v8; // rax
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned __int64 v11; // rdx
  bool v12; // zf
  __int64 v13; // rax
  __int64 result; // rax

  *a1 = a2;
  sub_17E9B40(a1 + 1, "fm-tactic");
  sub_16669D0(a1 + 66, *a1);
  v4 = *a1;
  a1[68] = 0;
  a1[70] = 0;
  a1[69] = v4;
  a1[71] = 0;
  v5 = sub_186B270(0x80u);
  *(_QWORD *)v5 = 0;
  *(_DWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  *(_QWORD *)(v5 + 64) = 0;
  *(_DWORD *)(v5 + 72) = 0;
  *(_QWORD *)(v5 + 80) = 0;
  *(_DWORD *)(v5 + 88) = 0;
  *(_QWORD *)(v5 + 96) = 0;
  *(_DWORD *)(v5 + 104) = 0;
  *(_QWORD *)(v5 + 112) = 0;
  *(_DWORD *)(v5 + 120) = 0;
  a1[72] = v5;
  v6 = *a1;
  a1[73] = 8;
  *((_DWORD *)a1 + 148) = 0;
  a1[77] = v6;
  a1[78] = 0;
  *(_OWORD *)(a1 + 75) = 0;
  v7 = sub_186B270(0x80u);
  *(_QWORD *)v7 = 0;
  *(_DWORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0;
  *(_DWORD *)(v7 + 56) = 0;
  *(_QWORD *)(v7 + 64) = 0;
  *(_DWORD *)(v7 + 72) = 0;
  *(_QWORD *)(v7 + 80) = 0;
  *(_DWORD *)(v7 + 88) = 0;
  *(_QWORD *)(v7 + 96) = 0;
  *(_DWORD *)(v7 + 104) = 0;
  *(_QWORD *)(v7 + 112) = 0;
  *(_DWORD *)(v7 + 120) = 0;
  a1[79] = v7;
  a1[80] = 8;
  *((_DWORD *)a1 + 162) = 0;
  a1[84] = 0;
  *((_OWORD *)a1 + 41) = 0;
  v8 = (_OWORD *)sub_186B270(0x40u);
  a1[85] = (__int64)v8;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v9 = *a1;
  a1[86] = 8;
  *((_DWORD *)a1 + 174) = 0;
  *((_DWORD *)a1 + 180) = 0;
  a1[91] = 0;
  a1[97] = 0;
  a1[98] = v9;
  a1[99] = 0;
  a1[100] = 0;
  a1[101] = 0;
  a1[102] = 0;
  a1[103] = 0;
  a1[104] = 0;
  a1[105] = 0;
  *((_OWORD *)a1 + 44) = 0;
  v10 = sub_1859960(a3, "max_memory", 0xFFFFFFFFLL);
  v11 = (unsigned __int64)v10 << 20;
  v12 = v10 == -1;
  v13 = -1;
  if ( !v12 )
    v13 = v11;
  a1[95] = v13;
  *((_BYTE *)a1 + 737) = sub_1859610(a3, "fm_real_only", 1);
  *((_DWORD *)a1 + 185) = sub_1859960(a3, "fm_limit", 5000000);
  *((_DWORD *)a1 + 186) = sub_1859960(a3, "fm_cutoff1", 8);
  *((_DWORD *)a1 + 187) = sub_1859960(a3, "fm_cutoff2", 256);
  *((_DWORD *)a1 + 188) = sub_1859960(a3, "fm_extra", 0);
  result = sub_1859610(a3, "fm_occ", 0);
  *((_BYTE *)a1 + 756) = result;
  return result;
}

