__int64 __fastcall sub_2C42D0(
        __int64 a1,
        __int64 a2,
        char a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v12; // rax
  __int64 *v13; // rbx
  __int64 v14; // rax
  double v15; // xmm4_8
  double v16; // xmm5_8
  double v17; // xmm4_8
  double v18; // xmm5_8

  v12 = sub_2B27A0(a1, a2, a4);
  if ( !v12 )
    return 0;
  v13 = (__int64 *)v12;
  v14 = *(_QWORD *)(v12 + 440);
  if ( v14 )
    v14 = *(_QWORD *)(v14 + 8);
  *(_DWORD *)(v14 + 36) = a2;
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v13 + 152))(v13, 0, 0);
  if ( a3 )
  {
    sub_2C4210((__int64)v13, a4, a5, a6, a7, v15, v16, a10, a11);
  }
  else
  {
    sub_2C30D0(a1, 2);
    sub_2C4180(v13, 0, a4, *(double *)a5.m128_u64, a6, a7, v17, v18, a10, a11);
  }
  return 1;
}
