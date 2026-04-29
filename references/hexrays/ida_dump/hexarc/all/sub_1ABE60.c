unsigned __int64 __fastcall sub_1ABE60(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  __m128 v5; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+10h] [rbp-28h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v6 = 0;
  v5 = _mm_loadh_ps((const double *)(get_module_data((unsigned int)dword_4BB8D8) + 1344));
  sub_1AA560(a1, a2, (__int64)&v5, a3, *(double *)v5.m128_u64);
  return v7 - __readfsqword(0x28u);
}
