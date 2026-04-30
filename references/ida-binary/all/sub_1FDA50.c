__int64 __fastcall sub_1FDA50(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rdi
  double v12; // xmm0_8
  __int64 v13; // rdi
  double v14; // xmm0_8
  __int64 v15; // rdi
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 result; // rax

  v11 = *(_QWORD *)(a1 + 8);
  if ( v11 )
  {
    v12 = qfree(v11, a2);
    *(_DWORD *)(a1 + 16) = 0;
    v13 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 8) = 0;
    v14 = qfree(v13, a2, v12);
    *(_QWORD *)(a1 + 32) = 0;
    v15 = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 40) = 0;
    return sub_1FD320(v15, v14, a4, a5, a6, v16, v17, a9, a10);
  }
  return result;
}
