__int64 __fastcall sub_129B40(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v10; // rdi
  __int64 v11; // r15
  __m128i v12; // xmm1
  __m128i v13; // xmm1
  __int64 v14; // rdi
  __m128i v16; // [rsp+0h] [rbp-78h] BYREF
  __int64 v17[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v18; // [rsp+20h] [rbp-58h]
  __m128i v19; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  sub_127A20((__int64)v17, a1, a4, 1, a5, a6);
  sub_648D0(a3, v17);
  v10 = a3[2];
  v11 = v18;
  v18 = 0;
  v12 = _mm_loadu_si128(&v19);
  v19 = 0;
  if ( v10 )
  {
    a3[3] = 0;
    v16 = v12;
    qfree(v10);
    v13 = _mm_load_si128(&v16);
    v14 = v18;
    a3[2] = v11;
    *(__m128i *)(a3 + 3) = v13;
    if ( v14 )
    {
      v19.m128i_i64[0] = 0;
      qfree(v14);
    }
  }
  else
  {
    a3[2] = v11;
    *(__m128i *)(a3 + 3) = v12;
  }
  qfree(v17[0]);
  return sub_124CC0(a1, a3, a4, a5, a2, 1u);
}
