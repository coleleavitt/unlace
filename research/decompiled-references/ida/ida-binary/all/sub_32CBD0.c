__int64 __fastcall sub_32CBD0(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 v14; // rdx
  __int64 v15; // rcx
  double v16; // xmm4_8
  double v17; // xmm5_8

  v8 = 4;
  if ( (unsigned __int8)getinf_flag(45, 4) )
  {
    sub_17CE30(1090);
    return sub_32C370(1u, a1, a2, a3, a4, v11, v12, a7, a8, v8, v9, v10);
  }
  v8 = 1;
  if ( (unsigned __int8)getinf_flag(45, 1) )
    return sub_32C370(1u, a1, a2, a3, a4, v11, v12, a7, a8, v8, v9, v10);
  sub_17CE30(1089);
  return sub_32C370(1u, a1, a2, a3, a4, v16, v17, a7, a8, 1, v14, v15);
}
