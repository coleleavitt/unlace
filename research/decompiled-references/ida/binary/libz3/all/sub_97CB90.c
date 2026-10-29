__int64 __fastcall sub_97CB90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  _QWORD *v8; // rax
  void *v9; // rdi
  __int64 result; // rax
  _BYTE v11[48]; // [rsp+18h] [rbp-30h] BYREF

  sub_180C5A0(v11, "weighted_maxsat");
  v7 = sub_15DA4C0(a3 + 560, v11);
  sub_966710(a1, a2, v7);
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)a1 = off_1C70328;
  sub_1839FF0(a1 + 64);
  *(_QWORD *)(a1 + 664) = a3;
  *(_QWORD *)(a1 + 672) = 0;
  *(_QWORD *)(a1 + 680) = a3;
  *(_QWORD *)(a1 + 688) = 0;
  *(_QWORD *)(a1 + 696) = 0;
  *(_QWORD *)(a1 + 704) = 0;
  *(_QWORD *)(a1 + 712) = a1 + 64;
  *(_QWORD *)(a1 + 720) = 0;
  *(_QWORD *)(a1 + 728) = a1 + 64;
  *(_QWORD *)(a1 + 736) = 0;
  *(_QWORD *)(a1 + 768) = 0;
  *(_QWORD *)(a1 + 776) = 0;
  *(_QWORD *)(a1 + 784) = 1;
  *(_QWORD *)(a1 + 792) = 0;
  *(_QWORD *)(a1 + 800) = a1 + 64;
  *(_QWORD *)(a1 + 808) = 0;
  *(_QWORD *)(a1 + 816) = 0;
  *(_QWORD *)(a1 + 824) = a1 + 64;
  *(_QWORD *)(a1 + 832) = 0;
  *(_QWORD *)(a1 + 840) = 0;
  *(_BYTE *)(a1 + 848) = 0;
  *(_OWORD *)(a1 + 752) = 0;
  v8 = (_QWORD *)sub_186B270(0x80u);
  *v8 = 0;
  v8[2] = 0;
  v8[4] = 0;
  v8[6] = 0;
  v8[8] = 0;
  v8[10] = 0;
  v8[12] = 0;
  v8[14] = 0;
  *(_QWORD *)(a1 + 856) = v8;
  *(_QWORD *)(a1 + 864) = 8;
  *(_DWORD *)(a1 + 872) = 0;
  v9 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 880) = 0;
  *(_BYTE *)(a1 + 888) = 0;
  *(_BYTE *)(a1 + 890) = 0;
  *(_QWORD *)(a1 + 896) = 1;
  *(_QWORD *)(a1 + 904) = 0;
  *(_QWORD *)(a1 + 912) = 1;
  *(_QWORD *)(a1 + 920) = 0;
  result = sub_182CBA0(v9, a1 + 912);
  *(_BYTE *)(a1 + 916) &= ~1u;
  *(_DWORD *)(a1 + 912) = 1;
  *(_QWORD *)(a1 + 944) = 0;
  *(_OWORD *)(a1 + 928) = 0;
  return result;
}

