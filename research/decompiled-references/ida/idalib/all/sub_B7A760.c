__int64 __fastcall sub_B7A760(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rbx

  v8 = a6 & 0xFFFFFFFFFFFFFFF8LL;
  v9 = sub_B902D0(96, a1, a2, 0);
  sub_B725B0(v9, 0x41u, a2, a4);
  *(_QWORD *)(v9 + 48) = 0;
  *(_DWORD *)(v9 + 56) = a3;
  *(_QWORD *)(v9 + 40) = a5;
  *(_QWORD *)v9 = &off_2B4B098;
  *(_QWORD *)(v9 + 64) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(v9 + 72) = v9;
  *(_QWORD *)(v9 + 80) = v8;
  *(_QWORD *)(v9 + 88) = 0;
  return v9;
}
