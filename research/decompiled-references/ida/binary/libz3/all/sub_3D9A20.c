void __fastcall sub_3D9A20(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        char *a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int8 a7)
{
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v12[64]; // [rsp+8h] [rbp-40h] BYREF

  if ( !a6 )
    sub_3D8E20(a1, a2, a3, a4, a5, 0, a7);
  v10 = a2[1];
  if ( v10 )
  {
    if ( *(_DWORD *)(v10 - 4) )
    {
      v11 = 0;
      sub_1862300(&v11, "reduce_all_selects", a5);
      sub_1862300(&v11, "dont_sub", a7);
      sub_6EF8C0(v12, a1, &v11);
      sub_6F0F90(v12, a2, a4, a3);
      sub_6EF670(v12);
      sub_18572D0(&v11);
    }
  }
}

