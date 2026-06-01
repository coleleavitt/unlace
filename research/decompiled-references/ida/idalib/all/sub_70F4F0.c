__int64 __fastcall sub_70F4F0(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v11; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  double v22; // xmm4_8
  double v23; // xmm5_8

  v11 = *(_QWORD *)(a2 + 40);
  if ( (unsigned __int8)sub_70F1F0(a1, v11, a3, a4, a5, a6, a7, a8, a9, a10)
    && (!(unsigned __int8)sub_F62DD0(a2)
     || (v18 = sub_F61C10(a2, v11, v13, v14, v15),
         (unsigned __int8)sub_70EBE0(
                            a1,
                            *(_QWORD *)(v18 + 48) & 0xFFFFFFFFFFFFFFF0LL,
                            v19,
                            v20,
                            v21,
                            a3,
                            a4,
                            a5,
                            a6,
                            v22,
                            v23,
                            a9,
                            a10))) )
  {
    return sub_70EBE0(a1, *(_QWORD *)(a2 + 32), v13, v14, v15, a3, a4, a5, a6, v16, v17, a9, a10);
  }
  else
  {
    return 0;
  }
}
