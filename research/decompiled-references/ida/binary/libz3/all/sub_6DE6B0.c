void __fastcall sub_6DE6B0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD v7[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = (_QWORD *)sub_186B270(0x480u);
  *v2 = a2;
  v3 = v2;
  sub_16669D0(v2 + 1, a2);
  *((_BYTE *)v3 + 24) = 0;
  v4 = sub_6DF7C0(v3, 0);
  v3[5] = a2;
  v3[4] = v4;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  v5 = sub_6DF7C0(v3, 1);
  v3[6] = v5;
  v3[7] = a2;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  v7[0] = 0;
  sub_2527E0((__int64)(v3 + 8), (__int64)v7);
  sub_18572D0(v7);
  v3[103] = a2;
  *((_DWORD *)v3 + 208) = 256;
  *((_WORD *)v3 + 418) = 0;
  *((_DWORD *)v3 + 213) = 0;
  v3[112] = v3 + 114;
  v3[113] = 0x1000000000LL;
  *((_OWORD *)v3 + 54) = 0;
  *((_OWORD *)v3 + 55) = 0;
  v7[0] = 0;
  sub_14DC230(v3 + 103, v7);
  sub_18572D0(v7);
  v3[130] = a2;
  v7[0] = 0;
  sub_16669D0(v3 + 131, a2);
  v3[133] = 0;
  *((_WORD *)v3 + 536) = 0;
  *((_BYTE *)v3 + 1074) = 0;
  v3[135] = 0;
  v6 = sub_186B270(0x80u);
  *(_QWORD *)v6 = 0;
  *(_DWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 32) = 0;
  *(_DWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 48) = 0;
  *(_DWORD *)(v6 + 56) = 0;
  *(_QWORD *)(v6 + 64) = 0;
  *(_DWORD *)(v6 + 72) = 0;
  *(_QWORD *)(v6 + 80) = 0;
  *(_DWORD *)(v6 + 88) = 0;
  *(_QWORD *)(v6 + 96) = 0;
  *(_DWORD *)(v6 + 104) = 0;
  *(_QWORD *)(v6 + 112) = 0;
  *(_DWORD *)(v6 + 120) = 0;
  v3[136] = v6;
  v3[137] = 8;
  *((_DWORD *)v3 + 276) = 0;
  *((_BYTE *)v3 + 1120) = 0;
  sub_15079C0(v3 + 130, v7);
  sub_14ECFD0(v3 + 130, v7);
  sub_18572D0(v7);
  v3[142] = a2;
  v3[143] = 0;
  *a1 = v3;
}

