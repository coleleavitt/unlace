__int64 __fastcall sub_B00E20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 *a7)
{
  __int64 v8; // rbx
  _OWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v13[64]; // [rsp+8h] [rbp-40h] BYREF

  v8 = sub_186B270(0x6B0u);
  sub_E1F060(v8, a2);
  *(_QWORD *)v8 = &off_1C71A08;
  *(_QWORD *)(v8 + 72) = off_1C71C10;
  sub_2527E0(v8 + 120, a3);
  v12 = 0;
  sub_8E4C30(v8 + 880, a2, v8 + 120, &v12);
  sub_18572D0(&v12);
  *(_WORD *)(v8 + 904) = 0;
  *(_DWORD *)(v8 + 908) = -1;
  *(_BYTE *)(v8 + 912) = 0;
  *(_OWORD *)(v8 + 888) = 0;
  v9 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v8 + 920) = v9;
  *(_QWORD *)(v8 + 928) = 8;
  *(_DWORD *)(v8 + 936) = 0;
  *(_QWORD *)(v8 + 944) = 0;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  v12 = 0;
  sub_2527E0(v8 + 952, (__int64)&v12);
  sub_18572D0(&v12);
  v10 = *a7;
  *(_QWORD *)(v8 + 896) = *a7;
  if ( v10 )
    sub_8E35E0(v8 + 880, v10);
  sub_E5E9C0(v8, a3);
  sub_15B6B30(v8 + 120, v8 + 80);
  sub_8E3AA0((_QWORD *)(v8 + 880));
  v12 = v8 + 80;
  sub_17F9A60(v13, "smt");
  *(_BYTE *)(v8 + 905) = sub_1859630(v12, "core.extend_patterns", v13, 0);
  *(_DWORD *)(v8 + 908) = sub_1859980(v12, "core.extend_patterns.max_distance", v13, 0xFFFFFFFFLL);
  *(_BYTE *)(v8 + 912) = sub_1859630(v12, "core.extend_nonlocal_patterns", v13, 0);
  sub_18572D0(v13);
  return v8;
}

