void __fastcall sub_1051B90(__int64 a1, const __m128i *a2, __int64 a3)
{
  sub_1051490(a1, a2, a3);
  *(_BYTE *)(a1 + 33) = 64;
  *(_QWORD *)a1 = &off_2C02278;
  *(_DWORD *)(a1 + 152) = 4;
  *(_BYTE *)(a1 + 273) = 0;
  *(_BYTE *)(a1 + 23) = 64;
  sub_1009A40((_QWORD *)a1, "e-m:e-p:32:32-Fi8-i64:64-v128:64:128-a:0:32-n32-S64", 51, (__int64)&byte_22CD811);
}

