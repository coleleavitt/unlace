__m128i *__fastcall sub_1DD8EB0(
        __m128i *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v9; // rax
  __int32 v10; // edi
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+8h] [rbp-40h]
  __int64 v14; // [rsp+10h] [rbp-38h]
  unsigned int v15; // [rsp+18h] [rbp-30h]
  __int64 v16; // [rsp+20h] [rbp-28h]
  __int32 v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+30h] [rbp-18h]
  __int16 v19; // [rsp+38h] [rbp-10h]
  char v20; // [rsp+3Ah] [rbp-Eh]

  v9 = a3->m128i_i64[0];
  v10 = a3->m128i_i32[2];
  v12 = a2;
  v17 = v10;
  v18 = v9;
  v19 = 1;
  v16 = a4;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v20 = 0;
  sub_1DD8C40(a1, (__int64)&v12, a3, a7, a8, a4, a5, a6);
  operator delete(v13, 16LL * v15, 8);
  return a1;
}
