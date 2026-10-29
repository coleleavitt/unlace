void __fastcall liblicui::license_dialog_t__::vfunc_3(
        __int64 a1,
        int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  if ( a2 == 2 )
  {
    sub_5574C0(a1, (__int64 *)(a1 + 872), (int *)(a1 + 960), a3, a4, a5, a6, a7, a8, a9, a10);
    sub_552450(a1);
    byte_8D25D0 = *(_BYTE *)(a1 + 1008);
    callui(203, 8, a1, 8, 1, (unsigned int)&callui);
    *(_BYTE *)(a1 + 1008) = 1;
  }
  else if ( a2 == 3 && !byte_8D25D0 )
  {
    callui(203, 8, a1, 8, 0, (unsigned int)&callui);
    *(_BYTE *)(a1 + 1008) = 0;
    byte_8D25D0 = 0;
  }
}
