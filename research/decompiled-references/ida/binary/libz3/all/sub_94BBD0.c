__int64 __fastcall sub_94BBD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD v5[6]; // [rsp+8h] [rbp-30h] BYREF

  *(_QWORD *)a1 = a2;
  sub_1858590(a1 + 8, a3);
  sub_16669D0(a1 + 16, a2);
  *(_QWORD *)(a1 + 32) = a2;
  v5[0] = 0;
  sub_16669D0(a1 + 40, a2);
  *(_QWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 64) = 0;
  *(_BYTE *)(a1 + 66) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  v3 = sub_186B270(0x80u);
  *(_QWORD *)v3 = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 40) = 0;
  *(_QWORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  *(_QWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 72) = 0;
  *(_QWORD *)(v3 + 80) = 0;
  *(_DWORD *)(v3 + 88) = 0;
  *(_QWORD *)(v3 + 96) = 0;
  *(_DWORD *)(v3 + 104) = 0;
  *(_QWORD *)(v3 + 112) = 0;
  *(_DWORD *)(v3 + 120) = 0;
  *(_QWORD *)(a1 + 80) = v3;
  *(_QWORD *)(a1 + 88) = 8;
  *(_DWORD *)(a1 + 96) = 0;
  *(_BYTE *)(a1 + 112) = 0;
  sub_15079C0(a1 + 32, v5);
  sub_14ECFD0(a1 + 32, v5);
  sub_18572D0(v5);
  sub_1862300(a1 + 8, "gcd_rounding", 1);
  return sub_14F37E0(a1 + 32, a1 + 8);
}

