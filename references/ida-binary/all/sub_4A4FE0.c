unsigned __int64 __fastcall chooser_flat_bucket_data_t__::vfunc_9(
        __int64 a1,
        const char *a2,
        __m128i *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128 a9,
        __int64 a10,
        int a11)
{
  __int64 v12[3]; // [rsp+0h] [rbp-38h] BYREF
  int v13; // [rsp+18h] [rbp-20h]
  unsigned __int64 v14; // [rsp+28h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  v12[0] = a1;
  v12[1] = a6;
  v12[2] = a10;
  v13 = a11;
  sub_4A4960(v12, a2, a3, a4, a5, a7, a8, a9);
  return v14 - __readfsqword(0x28u);
}
