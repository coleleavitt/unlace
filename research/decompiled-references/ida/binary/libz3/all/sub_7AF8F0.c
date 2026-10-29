__int64 __fastcall sub_7AF8F0(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v4; // r15
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // r12
  __int64 v7; // rax
  _QWORD v9[8]; // [rsp+8h] [rbp-40h] BYREF

  v4 = a2[19];
  v5 = *(__int64 (__fastcall **)(__int64))(*a2 + 424LL);
  if ( v5 == sub_79EFD0 )
    v6 = a2[18];
  else
    v6 = v5((__int64)a2);
  sub_180C5A0(v9, "pb");
  v7 = v9[0];
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = a3;
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)a1 = &off_1C6AEC0;
  *(_QWORD *)(a1 + 32) = off_1C6B150;
  *(_QWORD *)(a1 + 40) = off_1C6B1A0;
  *(_QWORD *)(a1 + 48) = off_1C6B1C8;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = v6;
  *(_QWORD *)(a1 + 80) = off_1C6B220;
  *(_QWORD *)(a1 + 88) = v4;
  *(_QWORD *)(a1 + 96) = v6;
  sub_180C5A0(v9, "pb");
  *(_DWORD *)(a1 + 104) = sub_15DA4C0(v6 + 560, v9);
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 1;
  *(_QWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 204) = 0;
  sub_17E9B40(a1 + 224, "unknown");
  *(_QWORD *)(a1 + 168) = a2;
  *(_QWORD *)(a1 + 912) = a1 + 880;
  *(_DWORD *)(a1 + 808) = 0;
  *(_DWORD *)(a1 + 848) = 0;
  *(_QWORD *)(a1 + 872) = 0;
  *(_QWORD *)(a1 + 880) = a1;
  *(_DWORD *)(a1 + 888) = -2;
  *(_QWORD *)(a1 + 896) = 0;
  *(_DWORD *)(a1 + 904) = 0;
  *(_QWORD *)(a1 + 924) = 0;
  *(_DWORD *)(a1 + 932) = 0;
  *(_WORD *)(a1 + 952) = 0;
  *(_BYTE *)(a1 + 954) = 0;
  *(_DWORD *)(a1 + 992) = 0;
  *(_BYTE *)(a1 + 996) = 0;
  *(_QWORD *)(a1 + 1000) = 0;
  *(_QWORD *)(a1 + 1008) = 0;
  *(_QWORD *)(a1 + 1016) = 0;
  *(_QWORD *)(a1 + 1024) = 0;
  *(_QWORD *)(a1 + 1032) = 0;
  *(_QWORD *)(a1 + 1040) = 0;
  *(_BYTE *)(a1 + 1048) = 0;
  *(_OWORD *)(a1 + 744) = 0;
  *(_OWORD *)(a1 + 760) = 0;
  *(_OWORD *)(a1 + 776) = 0;
  *(_OWORD *)(a1 + 792) = 0;
  *(_OWORD *)(a1 + 816) = 0;
  *(_OWORD *)(a1 + 832) = 0;
  *(_OWORD *)(a1 + 856) = 0;
  *(_OWORD *)(a1 + 936) = 0;
  *(_OWORD *)(a1 + 960) = 0;
  *(_OWORD *)(a1 + 976) = 0;
  return 0;
}

