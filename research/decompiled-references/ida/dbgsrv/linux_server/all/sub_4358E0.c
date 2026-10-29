/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4358E0
// Address: 0x00000000004358E0

//----- (00000000004358E0) ----------------------------------------------------
__int64 __fastcall sub_4358E0(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        double a5,
        double a6,
        double a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  pthread_mutex_t *v14; // r15
  __int64 v15; // rbp
  double v16; // xmm4_8
  double v17; // xmm5_8
  unsigned int v18; // ebx

  v14 = (pthread_mutex_t *)qword_4C8210;
  sub_482EC0((pthread_mutex_t *)qword_4C8210);
  v15 = sub_438630();
  sub_451950(*(_QWORD *)(v15 + 32), a1, *(_QWORD *)(v15 + 24));
  v18 = sub_435540(v15, a3, a2, a4 ^ 1u, a5, a6, a7, a8, v16, v17, a11, a12);
  sub_482F10(v14);
  return v18;
}
// 435932: variable 'v16' is possibly undefined
// 435932: variable 'v17' is possibly undefined
