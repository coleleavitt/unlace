__int64 *__fastcall sub_1FDB10(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        const char *a10)
{
  __int64 *result; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  double v13; // xmm0_8
  __int64 v14; // rdi
  double v15; // xmm0_8
  __int64 v16; // rdi
  double v17; // xmm4_8
  double v18; // xmm5_8

  result = &qword_8CC7C0;
  v11 = qword_8CC7C0;
  if ( qword_8CC7C0 )
  {
    v12 = *(_QWORD *)(qword_8CC7C0 + 224);
    if ( v12 )
    {
      v13 = qfree(v12, a10);
      v14 = *(_QWORD *)(v11 + 248);
      *(_QWORD *)(v11 + 224) = 0;
      *(_DWORD *)(v11 + 232) = 0;
      v15 = qfree(v14, a10, v13);
      v16 = *(_QWORD *)(v11 + 216);
      *(_QWORD *)(v11 + 248) = 0;
      *(_DWORD *)(v11 + 256) = 0;
      return (__int64 *)sub_1FD320(v16, v15, a2, a3, a4, v17, v18, a7, a8);
    }
  }
  return result;
}
