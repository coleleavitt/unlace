void __fastcall sub_111A340(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // rbp

  v3 = (__int64)&a2[a3];
  *(_QWORD *)a1 = a1 + 16;
  sub_1117C40((_QWORD *)a1, a2, (__int64)&a2[a3]);
  *(_QWORD *)(a1 + 32) = a1 + 48;
  sub_1117C40((_QWORD *)(a1 + 32), a2, v3);
  *(_QWORD *)(a1 + 64) = a1 + 80;
  sub_1117C40((_QWORD *)(a1 + 64), a2, v3);
  *(_QWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  sub_1119A00(a1);
  sub_1119A00(a1 + 32);
  sub_1119A00(a1 + 64);
}
