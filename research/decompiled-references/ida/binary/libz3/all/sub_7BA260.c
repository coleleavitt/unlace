__int64 __fastcall sub_7BA260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD v11[8]; // [rsp+18h] [rbp-40h] BYREF

  v7 = sub_186B270(0x420u);
  sub_180C5A0(v11, "pb");
  v8 = v11[0];
  *(_BYTE *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 16) = v8;
  *(_QWORD *)v7 = &off_1C6AEC0;
  *(_QWORD *)(v7 + 32) = off_1C6B150;
  *(_QWORD *)(v7 + 40) = off_1C6B1A0;
  *(_QWORD *)(v7 + 48) = off_1C6B1C8;
  *(_DWORD *)(v7 + 12) = a5;
  *(_QWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 56) = 0;
  *(_QWORD *)(v7 + 64) = 0;
  *(_QWORD *)(v7 + 72) = a2;
  *(_QWORD *)(v7 + 80) = off_1C6B220;
  *(_QWORD *)(v7 + 88) = a4;
  *(_QWORD *)(v7 + 96) = a2;
  sub_180C5A0(v11, "pb");
  *(_DWORD *)(v7 + 104) = sub_15DA4C0(a2 + 560, v11);
  *(_QWORD *)(v7 + 128) = 0;
  *(_QWORD *)(v7 + 136) = 0;
  *(_QWORD *)(v7 + 144) = 1;
  *(_QWORD *)(v7 + 168) = 0;
  *(_OWORD *)(v7 + 112) = 0;
  *(_OWORD *)(v7 + 152) = 0;
  *(_OWORD *)(v7 + 192) = 0;
  *(_OWORD *)(v7 + 176) = 0;
  *(_OWORD *)(v7 + 204) = 0;
  sub_17E9B40(v7 + 224, "unknown");
  *(_QWORD *)(v7 + 24) = a3;
  *(_DWORD *)(v7 + 808) = 0;
  *(_QWORD *)(v7 + 912) = v7 + 880;
  *(_WORD *)(v7 + 952) = 0;
  *(_DWORD *)(v7 + 848) = 0;
  *(_QWORD *)(v7 + 872) = 0;
  *(_QWORD *)(v7 + 880) = v7;
  *(_DWORD *)(v7 + 888) = -2;
  *(_QWORD *)(v7 + 896) = 0;
  *(_DWORD *)(v7 + 904) = 0;
  *(_QWORD *)(v7 + 924) = 0;
  *(_DWORD *)(v7 + 932) = 0;
  *(_BYTE *)(v7 + 954) = 0;
  *(_DWORD *)(v7 + 992) = 0;
  *(_BYTE *)(v7 + 996) = 0;
  *(_QWORD *)(v7 + 1000) = 0;
  *(_QWORD *)(v7 + 1008) = 0;
  *(_QWORD *)(v7 + 1016) = 0;
  *(_QWORD *)(v7 + 1024) = 0;
  *(_QWORD *)(v7 + 1032) = 0;
  *(_QWORD *)(v7 + 1040) = 0;
  *(_BYTE *)(v7 + 1048) = 0;
  *(_OWORD *)(v7 + 744) = 0;
  *(_OWORD *)(v7 + 760) = 0;
  *(_OWORD *)(v7 + 776) = 0;
  *(_OWORD *)(v7 + 792) = 0;
  *(_OWORD *)(v7 + 816) = 0;
  *(_OWORD *)(v7 + 832) = 0;
  *(_OWORD *)(v7 + 856) = 0;
  *(_OWORD *)(v7 + 936) = 0;
  *(_OWORD *)(v7 + 960) = 0;
  *(_OWORD *)(v7 + 976) = 0;
  sub_7B9E80((__m128i)0LL, a1, v7, (__int64 **)(a1 + 744));
  return v7;
}

