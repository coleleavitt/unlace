__int64 __fastcall sub_7BA780(__int64 a1, _QWORD *a2)
{
  int v2; // r15d
  __int64 v3; // r14
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v9; // [rsp+8h] [rbp-50h]
  _QWORD v10[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(_DWORD *)(a1 + 12);
  v3 = a2[19];
  v9 = a2[3];
  v4 = *(__int64 (__fastcall **)(__int64))(*a2 + 424LL);
  if ( v4 == sub_79EFD0 )
    v5 = a2[18];
  else
    v5 = v4((__int64)a2);
  v6 = sub_186B270(0x420u);
  sub_180C5A0(v10, "pb");
  v7 = v10[0];
  *(_BYTE *)(v6 + 8) = 0;
  *(_DWORD *)(v6 + 12) = v2;
  *(_QWORD *)(v6 + 16) = v7;
  *(_QWORD *)v6 = &off_1C6AEC0;
  *(_QWORD *)(v6 + 32) = off_1C6B150;
  *(_QWORD *)(v6 + 40) = off_1C6B1A0;
  *(_QWORD *)(v6 + 48) = off_1C6B1C8;
  *(_QWORD *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 56) = 0;
  *(_QWORD *)(v6 + 64) = 0;
  *(_QWORD *)(v6 + 72) = v5;
  *(_QWORD *)(v6 + 80) = off_1C6B220;
  *(_QWORD *)(v6 + 88) = v3;
  *(_QWORD *)(v6 + 96) = v5;
  sub_180C5A0(v10, "pb");
  *(_DWORD *)(v6 + 104) = sub_15DA4C0(v5 + 560, v10);
  *(_QWORD *)(v6 + 128) = 0;
  *(_QWORD *)(v6 + 136) = 0;
  *(_QWORD *)(v6 + 144) = 1;
  *(_QWORD *)(v6 + 168) = 0;
  *(_OWORD *)(v6 + 112) = 0;
  *(_OWORD *)(v6 + 152) = 0;
  *(_OWORD *)(v6 + 192) = 0;
  *(_OWORD *)(v6 + 176) = 0;
  *(_OWORD *)(v6 + 204) = 0;
  sub_17E9B40(v6 + 224, "unknown");
  *(_OWORD *)(v6 + 744) = 0;
  *(_QWORD *)(v6 + 912) = v6 + 880;
  *(_WORD *)(v6 + 952) = 0;
  *(_OWORD *)(v6 + 760) = 0;
  *(_OWORD *)(v6 + 776) = 0;
  *(_OWORD *)(v6 + 792) = 0;
  *(_OWORD *)(v6 + 816) = 0;
  *(_OWORD *)(v6 + 832) = 0;
  *(_OWORD *)(v6 + 856) = 0;
  *(_OWORD *)(v6 + 936) = 0;
  *(_OWORD *)(v6 + 960) = 0;
  *(_OWORD *)(v6 + 976) = 0;
  *(_DWORD *)(v6 + 808) = 0;
  *(_DWORD *)(v6 + 848) = 0;
  *(_QWORD *)(v6 + 872) = 0;
  *(_QWORD *)(v6 + 880) = v6;
  *(_DWORD *)(v6 + 888) = -2;
  *(_QWORD *)(v6 + 896) = 0;
  *(_DWORD *)(v6 + 904) = 0;
  *(_QWORD *)(v6 + 924) = 0;
  *(_DWORD *)(v6 + 932) = 0;
  *(_BYTE *)(v6 + 954) = 0;
  *(_DWORD *)(v6 + 992) = 0;
  *(_BYTE *)(v6 + 996) = 0;
  *(_QWORD *)(v6 + 1000) = 0;
  *(_QWORD *)(v6 + 1008) = 0;
  *(_QWORD *)(v6 + 1016) = 0;
  *(_QWORD *)(v6 + 1024) = 0;
  *(_QWORD *)(v6 + 1032) = 0;
  *(_QWORD *)(v6 + 1040) = 0;
  *(_BYTE *)(v6 + 1048) = 0;
  *(_QWORD *)(v6 + 24) = v9;
  sub_7B9E80((__m128i)0LL, a1, v6, (__int64 **)(a1 + 744));
  return v6;
}

