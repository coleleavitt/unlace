/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A4E0
// Address: 0x000000000043A4E0

//----- (000000000043A4E0) ----------------------------------------------------
bool __fastcall sub_43A4E0(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v8; // rax
  double v9; // xmm4_8
  double v10; // xmm5_8

  sub_436E20((__int64)qword_4C6140);
  v8 = sub_438630();
  sub_43A330(v8, a1, a2, a3, a4, v9, v10, a7, a8);
  sub_482C00((pthread_mutex_t *)qword_4C8210);
  return sub_482C00((pthread_mutex_t *)qword_4C80E0);
}
// 43A4F8: variable 'v9' is possibly undefined
// 43A4F8: variable 'v10' is possibly undefined
// 4C6140: using guessed type __int64 qword_4C6140[5];
// 4C80E0: using guessed type __int64 qword_4C80E0;
