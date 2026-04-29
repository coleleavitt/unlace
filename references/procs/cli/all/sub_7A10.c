__int64 *__fastcall sub_7A10(__int64 *a1, __int64 a2, unsigned int a3, double a4, double a5, __m128 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rbp
  __m128i v14; // xmm0
  __m128i v15; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+10h] [rbp-38h] BYREF
  __m128i v17; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  if ( (a3 & 0xFFFFFF) != 0 )
  {
    sub_7630((__int64)&v16, a2, a3, 0.0, a5, a6);
    v12 = *a1;
    v13 = v16;
    v14 = _mm_loadu_si128(&v17);
    if ( *a1 )
    {
      a1[1] = 0;
      v15 = v14;
      qfree(v12, a2, v8, v9, v10, v11);
      v14 = _mm_load_si128(&v15);
    }
    *a1 = v13;
    *(__m128i *)(a1 + 1) = v14;
  }
  return a1;
}
