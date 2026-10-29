unsigned __int64 __fastcall sub_1B31C0(unsigned __int64 a1, __int64 *a2, int a3, unsigned int a4)
{
  __m128 v7; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+10h] [rbp-38h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v8 = 0;
  v7 = _mm_loadh_ps((const double *)(get_module_data() + 1344));
  sub_1B2A80(a1, a2, (__int64)&v7, a3, a4);
  return v9 - __readfsqword(0x28u);
}
