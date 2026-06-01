__int64 __fastcall sub_B04810(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // r13
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  char v10; // dl
  __int64 result; // rax
  _BYTE v12[64]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a2 + 104);
  sub_180C5A0(v12, "pb");
  v3 = sub_15DA4C0(v2 + 560, v12);
  sub_966710(a1, a2, v3);
  *(_QWORD *)a1 = off_1C71DA8;
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 112) + 456LL);
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 56) = v4 << 24 >> 24;
  sub_1839FF0(a1 + 72);
  v5 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 672) = 0;
  *(_QWORD *)(a1 + 680) = a1 + 72;
  *(_QWORD *)(a1 + 688) = 0;
  *(_QWORD *)(a1 + 696) = 0;
  *(_QWORD *)(a1 + 704) = 0;
  *(_QWORD *)(a1 + 712) = v5;
  sub_180C5A0(v12, "pb");
  v6 = sub_15DA4C0(v5 + 560, v12);
  *(_QWORD *)(a1 + 744) = 0;
  *(_QWORD *)(a1 + 760) = 1;
  *(_OWORD *)(a1 + 728) = 0;
  *(_OWORD *)(a1 + 776) = 0;
  *(_OWORD *)(a1 + 856) = 0;
  *(_OWORD *)(a1 + 880) = 0;
  *(_DWORD *)(a1 + 720) = v6;
  v7 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 800) = 3;
  *(_QWORD *)(a1 + 904) = v7;
  v8 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 752) = 0;
  *(_QWORD *)(a1 + 928) = v8;
  v9 = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a1 + 768) = 0;
  v10 = *(_BYTE *)(v9 + 460);
  result = *(unsigned int *)(v9 + 456);
  *(_QWORD *)(a1 + 824) = 0;
  *(_QWORD *)(a1 + 840) = 0;
  *(_QWORD *)(a1 + 896) = 0;
  *(_QWORD *)(a1 + 912) = 0;
  *(_QWORD *)(a1 + 920) = 0;
  *(_QWORD *)(a1 + 936) = 0;
  *(_QWORD *)(a1 + 944) = 0;
  *(_QWORD *)(a1 + 952) = 0;
  *(_QWORD *)(a1 + 960) = 0;
  *(_BYTE *)(a1 + 796) = v10;
  *(_DWORD *)(a1 + 792) = result;
  *(_OWORD *)(a1 + 808) = 0;
  return result;
}

