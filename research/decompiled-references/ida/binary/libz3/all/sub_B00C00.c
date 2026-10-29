__int64 __fastcall sub_B00C00(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbx
  _OWORD *v5; // rax
  __int64 v6; // rsi
  __int64 v9; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v10[64]; // [rsp+18h] [rbp-40h] BYREF

  v4 = sub_186B270(0x6B0u);
  sub_E1F060(v4, a1);
  *(_QWORD *)v4 = &off_1C71A08;
  *(_QWORD *)(v4 + 72) = off_1C71C10;
  sub_2527E0(v4 + 120, a2);
  v9 = 0;
  sub_8E4C30(v4 + 880, a1, v4 + 120, &v9);
  sub_18572D0(&v9);
  *(_WORD *)(v4 + 904) = 0;
  *(_DWORD *)(v4 + 908) = -1;
  *(_BYTE *)(v4 + 912) = 0;
  *(_OWORD *)(v4 + 888) = 0;
  v5 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v4 + 920) = v5;
  *(_QWORD *)(v4 + 928) = 8;
  *(_DWORD *)(v4 + 936) = 0;
  *(_QWORD *)(v4 + 944) = 0;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v9 = 0;
  sub_2527E0(v4 + 952, (__int64)&v9);
  sub_18572D0(&v9);
  v6 = *a3;
  *(_QWORD *)(v4 + 896) = *a3;
  if ( v6 )
    sub_8E35E0(v4 + 880, v6);
  sub_E5E9C0(v4, a2);
  sub_15B6B30(v4 + 120, v4 + 80);
  sub_8E3AA0((_QWORD *)(v4 + 880));
  v9 = v4 + 80;
  sub_17F9A60(v10, "smt");
  *(_BYTE *)(v4 + 905) = sub_1859630(v9, "core.extend_patterns", v10, 0);
  *(_DWORD *)(v4 + 908) = sub_1859980(v9, "core.extend_patterns.max_distance", v10, 0xFFFFFFFFLL);
  *(_BYTE *)(v4 + 912) = sub_1859630(v9, "core.extend_nonlocal_patterns", v10, 0);
  sub_18572D0(v10);
  return v4;
}

