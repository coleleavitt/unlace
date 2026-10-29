__int64 __fastcall sub_1D6FEE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void ***a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        __int64 *a8,
        __int64 *a9)
{
  __m128i v13; // [rsp+10h] [rbp-58h] BYREF
  char v14; // [rsp+28h] [rbp-40h]

  sub_F1F190((__int64)&v13, *(_QWORD **)(a1 + 248), a4, a5, 0, a6);
  v14 = 1;
  return def_1D6C8B3(a1, a2, a3, &v13, a5, a6, a7, a8, a9);
}
