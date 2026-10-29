__int64 __fastcall sub_7BA4F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-58h]
  int v7; // [rsp+Ch] [rbp-4Ch]
  _QWORD v8[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 72);
  v7 = *(_DWORD *)(a1 + 12);
  v6 = *(_QWORD *)(a1 + 88);
  v3 = sub_186B270(0x420u);
  sub_180C5A0(v8, "pb");
  v4 = v8[0];
  *(_BYTE *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = v7;
  *(_QWORD *)(v3 + 16) = v4;
  *(_QWORD *)v3 = &off_1C6AEC0;
  *(_QWORD *)(v3 + 32) = off_1C6B150;
  *(_QWORD *)(v3 + 40) = off_1C6B1A0;
  *(_QWORD *)(v3 + 48) = off_1C6B1C8;
  *(_QWORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 56) = 0;
  *(_QWORD *)(v3 + 64) = 0;
  *(_QWORD *)(v3 + 72) = v2;
  *(_QWORD *)(v3 + 80) = off_1C6B220;
  *(_QWORD *)(v3 + 88) = v6;
  *(_QWORD *)(v3 + 96) = v2;
  sub_180C5A0(v8, "pb");
  *(_DWORD *)(v3 + 104) = sub_15DA4C0(v2 + 560, v8);
  *(_QWORD *)(v3 + 128) = 0;
  *(_QWORD *)(v3 + 136) = 0;
  *(_QWORD *)(v3 + 144) = 1;
  *(_QWORD *)(v3 + 168) = 0;
  *(_OWORD *)(v3 + 112) = 0;
  *(_OWORD *)(v3 + 152) = 0;
  *(_OWORD *)(v3 + 192) = 0;
  *(_OWORD *)(v3 + 176) = 0;
  *(_OWORD *)(v3 + 204) = 0;
  sub_17E9B40(v3 + 224, "unknown");
  *(_QWORD *)(v3 + 24) = a2;
  *(_DWORD *)(v3 + 808) = 0;
  *(_QWORD *)(v3 + 912) = v3 + 880;
  *(_WORD *)(v3 + 952) = 0;
  *(_DWORD *)(v3 + 848) = 0;
  *(_QWORD *)(v3 + 872) = 0;
  *(_QWORD *)(v3 + 880) = v3;
  *(_DWORD *)(v3 + 888) = -2;
  *(_QWORD *)(v3 + 896) = 0;
  *(_DWORD *)(v3 + 904) = 0;
  *(_QWORD *)(v3 + 924) = 0;
  *(_DWORD *)(v3 + 932) = 0;
  *(_BYTE *)(v3 + 954) = 0;
  *(_DWORD *)(v3 + 992) = 0;
  *(_BYTE *)(v3 + 996) = 0;
  *(_QWORD *)(v3 + 1000) = 0;
  *(_QWORD *)(v3 + 1008) = 0;
  *(_QWORD *)(v3 + 1016) = 0;
  *(_QWORD *)(v3 + 1024) = 0;
  *(_QWORD *)(v3 + 1032) = 0;
  *(_QWORD *)(v3 + 1040) = 0;
  *(_BYTE *)(v3 + 1048) = 0;
  *(_OWORD *)(v3 + 744) = 0;
  *(_OWORD *)(v3 + 760) = 0;
  *(_OWORD *)(v3 + 776) = 0;
  *(_OWORD *)(v3 + 792) = 0;
  *(_OWORD *)(v3 + 816) = 0;
  *(_OWORD *)(v3 + 832) = 0;
  *(_OWORD *)(v3 + 856) = 0;
  *(_OWORD *)(v3 + 936) = 0;
  *(_OWORD *)(v3 + 960) = 0;
  *(_OWORD *)(v3 + 976) = 0;
  sub_7B9E80((__m128i)0LL, a1, v3, (__int64 **)(a1 + 744));
  return v3;
}

