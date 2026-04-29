__int64 __fastcall sub_12E30(
        _QWORD *a1,
        double a2,
        double a3,
        __m128 a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  unsigned int v9; // eax
  double v10; // xmm4_8
  double v11; // xmm5_8
  char *v12; // rsi
  unsigned int v13; // eax

  v9 = netnode_altval(*(_QWORD *)(a1[77] + 144LL), a1[2], 112);
  v12 = (char *)v9;
  v13 = v9 & 0xFF000000;
  if ( v13 == 335544320 )
  {
    sub_12400(a1, (unsigned int)v12, a2, a3, a4, a5, v10, v11, a8, a9);
    return 1;
  }
  if ( v13 <= 0x14000000 )
  {
    if ( v13 != 0x4000000 )
    {
      if ( v13 == 100663296 )
        return sub_DC40((__int64)a1, -1, (unsigned int)v12, nullptr, nullptr, a2, a3, a4, a5, v10, v11, a8, a9);
      return 0;
    }
    sub_A700(a1, v12, a2, a3, a4, a5, v10, v11, a8, a9);
    return 1;
  }
  if ( v13 == 385875968 )
  {
    sub_12960(a1, (unsigned int)v12, a2, a3, a4, a5, v10, v11, a8, a9);
    return 1;
  }
  return 0;
}
