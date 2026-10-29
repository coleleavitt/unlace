__int64 __fastcall sub_31C150(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 path; // rax
  double v9; // xmm4_8
  double v10; // xmm5_8
  char v11; // dl
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  char v19; // [rsp+0h] [rbp-8h]

  path = get_path(1);
  v11 = sub_31C050(path, 0, *(double *)a1.m128_u64, a2, a3, a4, v9, v10, a7, a8);
  result = 0;
  if ( v11 )
  {
    sub_30A040(nullptr, *(double *)a1.m128_u64);
    sub_169700((int)"Database has been saved\n", 0, v13, v14, v15, v16, a1, a2, a3, a4, v17, v18, a7, a8, v19);
    return 1;
  }
  return result;
}
