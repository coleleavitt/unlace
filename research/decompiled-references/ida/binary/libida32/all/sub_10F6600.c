void __fastcall sub_10F6600(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // rbp

  v3 = (__int64)&a2[a3];
  *(_QWORD *)a1 = a1 + 16;
  sub_10F3F00((_QWORD *)a1, a2, (__int64)&a2[a3]);
  *(_QWORD *)(a1 + 32) = a1 + 48;
  sub_10F3F00((_QWORD *)(a1 + 32), a2, v3);
  *(_QWORD *)(a1 + 64) = a1 + 80;
  sub_10F3F00((_QWORD *)(a1 + 64), a2, v3);
  *(_QWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  sub_10F5CC0(a1);
  sub_10F5CC0(a1 + 32);
  sub_10F5CC0(a1 + 64);
}

