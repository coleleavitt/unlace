unsigned __int64 __fastcall folder_data_t__::vfunc_9(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  _QWORD v9[3]; // [rsp+0h] [rbp-38h] BYREF
  int v10; // [rsp+18h] [rbp-20h]
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  v9[0] = a1;
  v9[1] = a6;
  v9[2] = a7;
  v10 = a8;
  sub_4940C0((__int64)v9, a2, a3, a4, a5);
  return v11 - __readfsqword(0x28u);
}
