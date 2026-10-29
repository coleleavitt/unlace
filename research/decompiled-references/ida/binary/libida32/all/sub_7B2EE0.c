void __fastcall __noreturn sub_7B2EE0(
        __int64 a1,
        int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rbp
  void *v15; // [rsp+8h] [rbp-278h] BYREF
  void *v16[2]; // [rsp+10h] [rbp-270h]
  unsigned __int64 v17; // [rsp+240h] [rbp-40h]
  __int64 v18; // [rsp+258h] [rbp-28h]

  v18 = v14;
  v17 = __readfsqword(0x28u);
  *(_OWORD *)v16 = 0;
  v15 = nullptr;
  sub_7B2C80(a1, (__m128)0LL, a4, a5, a6, a7, a8, a9, a10, (__int64)&v15, a11, a12, a13, a14);
}

