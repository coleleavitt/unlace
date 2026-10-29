void __fastcall sub_3D46D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v10[64]; // [rsp+8h] [rbp-40h] BYREF

  v9 = 0;
  sub_1862300(&v9, "reduce_all_selects", a5);
  sub_1862300(&v9, "dont_sub", a7);
  sub_6EF8C0(v10, a1, &v9);
  sub_6F0F90(v10, a2, a4, a3);
  sub_6EF670(v10);
  sub_18572D0(&v9);
}

