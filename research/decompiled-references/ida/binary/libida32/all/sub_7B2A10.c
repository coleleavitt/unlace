void __fastcall __noreturn sub_7B2A10(
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
  int v15[2]; // [rsp+8h] [rbp-78h]
  void *ptr; // [rsp+10h] [rbp-70h]
  __int64 v17; // [rsp+18h] [rbp-68h] BYREF
  int v18[4]; // [rsp+20h] [rbp-60h]
  int v19; // [rsp+30h] [rbp-50h]
  unsigned __int64 v20; // [rsp+40h] [rbp-40h]
  __int64 v21; // [rsp+58h] [rbp-28h]

  v21 = v14;
  v20 = __readfsqword(0x28u);
  LOBYTE(ptr) = 47;
  v19 = 0;
  *(_QWORD *)v15 = &off_2B11D70;
  v17 = 0;
  *(_OWORD *)v18 = 0;
  sub_7B25C0(a1, (__m128)0LL, a4, a5, a6, a7, a8, a9, a10, (__int64)&v17, a11, a12, a13, a14);
}

