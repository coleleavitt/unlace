__int64 __fastcall sub_3954E0(
        __m128i *a1,
        __m128i *a2,
        __m128i *a3,
        __int64 *a4,
        unsigned __int8 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 v9; // [rsp-10h] [rbp-38h]

  sub_3953D0(a1, a2, a4, a5);
  sub_3953D0(a2, a3, a4, a5);
  sub_393110(
    a1->m128i_i64,
    (__int64)a2,
    a3->m128i_i64,
    0xAAAAAAAAAAAAAAABLL * (a2 - a1),
    0xAAAAAAAAAAAAAAABLL * (a3 - a2),
    (const char **)a4,
    (unsigned __int8 (__fastcall *)(const char **, __int64, double, double))a5);
  return v9;
}
