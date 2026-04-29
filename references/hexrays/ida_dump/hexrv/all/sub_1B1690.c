unsigned __int64 __fastcall sub_1B1690(_QWORD *a1, __int64 *a2, double a3, double a4)
{
  __m128 v5; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+10h] [rbp-28h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v6 = 0;
  v5 = _mm_loadh_ps((const double *)(get_module_data((unsigned int)dword_4C1BB8) + 1344));
  sub_1AF600(a1, a2, (__int64)&v5, *(double *)v5.m128_u64, a4);
  return v7 - __readfsqword(0x28u);
}
