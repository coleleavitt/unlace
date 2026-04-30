__int64 __fastcall sub_332B80(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int default_encoding_idx; // ebx
  int v10; // r12d
  double v11; // xmm4_8
  double v12; // xmm5_8
  unsigned int v13; // ebx

  default_encoding_idx = get_default_encoding_idx(2);
  v10 = getinf(52);
  setinf(52, (default_encoding_idx << 24) | 9);
  v13 = sub_3327D0(a1, a2, a3, a4, a5, v11, v12, a8, a9);
  setinf(52, v10);
  if ( v13 )
    return v13;
  sub_1C7D20(nullptr);
  return 0;
}
