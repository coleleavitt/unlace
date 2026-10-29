__int64 __fastcall sub_337EF0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  unsigned int v10; // ebp
  double v11; // xmm4_8
  double v12; // xmm5_8
  double v14; // xmm4_8
  double v15; // xmm5_8
  int v16; // eax

  v9 = *(_DWORD *)(a1 + 8);
  if ( v9 == 25 || v9 == 58 )
  {
    v16 = *(_DWORD *)(a1 + 8);
    if ( v16 == 25 || v16 == 58 )
      return sub_3ABB70(a1, 0);
    else
      return 0;
  }
  else
  {
    if ( sub_32FD50() )
      return 1;
    dword_8BCD78 = (unsigned __int8)get_default_reftype(xmmword_8CC810) | dword_8BCD78 & 0xFFFFFFB0;
    v10 = sub_331180(0, 0, 0);
    if ( (unsigned __int8)is_off(*((_QWORD *)&xmmword_8CC820 + 1), v10) )
      get_refinfo(&xmmword_8BCD60, xmmword_8CC810, v10);
    if ( (unsigned __int8)sub_337800(
                            (__int64)&xmmword_8BCD60,
                            (const char *)xmmword_8CC810,
                            *(double *)a2.m128_u64,
                            a3,
                            a4,
                            a5,
                            v11,
                            v12,
                            a8,
                            a9) )
    {
      if ( !sub_1EC200(qword_8CD7E8) )
      {
        if ( (unsigned __int8)is_off(*((_QWORD *)&xmmword_8CC820 + 1), v10) )
          clr_op_type(xmmword_8CC810, v10);
      }
      return sub_331480(
               "Offset",
               (__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD, _QWORD))sub_331B90,
               (__int64)&xmmword_8BCD60,
               1,
               0,
               a2,
               a3,
               a4,
               a5,
               v14,
               v15,
               a8,
               a9);
    }
    else
    {
      return 1;
    }
  }
}
