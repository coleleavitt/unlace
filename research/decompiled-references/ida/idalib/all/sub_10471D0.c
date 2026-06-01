void __fastcall sub_10471D0(__int64 a1, const __m128i *a2, __int64 a3)
{
  sub_1046F90(a1, a2, a3);
  *(_BYTE *)(a1 + 24) = 64;
  *(_QWORD *)a1 = &off_2C0B0C8;
  *(_BYTE *)(a1 + 60) = 32;
  *(_QWORD *)(a1 + 112) = sub_21F90B0();
  sub_102D780(
    (_QWORD *)a1,
    "e-m:e-p:32:32-p270:32:32-p271:32:32-p272:64:64-i64:32-f64:32-f128:32-n8:16:32-a:0:32-S32",
    88,
    (__int64)&byte_22F0C30);
  *(_DWORD *)(a1 + 156) = 6;
}
