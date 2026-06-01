__int64 __fastcall sub_378390(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v17; // rdi

  v10 = sub_17D870(a1);
  if ( !v10 )
    return 0;
  v13 = v10;
  if ( (unsigned int)sub_1EB590(v10, a2, v11, v12, a3) != 3 )
    return 0;
  v17 = *(_QWORD *)(v13 + 904);
  if ( !v17 )
    return 0;
  sub_3772D0(v17, 1, a3, a4, a5, a6, v14, v15, a9, a10);
  return 1;
}
