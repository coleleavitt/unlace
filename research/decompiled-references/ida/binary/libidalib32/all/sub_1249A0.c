__int64 __fastcall sub_1249A0(
        double a1,
        __m128 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  double v12; // xmm4_8
  double v13; // xmm5_8

  if ( !*(_QWORD *)(a10 + 8) )
    return 1;
  v10 = 0;
  do
  {
    ++v10;
    v11 = getnseg();
    sub_123870(v11, a1, a2, a3, a4, v12, v13, a7, a8);
  }
  while ( v10 < *(_QWORD *)(a10 + 8) );
  return 1;
}

