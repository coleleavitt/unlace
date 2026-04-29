__int64 __fastcall sub_129320(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdi
  __int64 v10; // r15
  __m128i v11; // xmm1
  __m128i v12; // xmm1
  __int64 v13; // rdi
  __m128i v15; // [rsp+0h] [rbp-78h] BYREF
  __int64 v16[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v17; // [rsp+20h] [rbp-58h]
  __m128i v18; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  sub_124680((__int64)v16, a1, a4, 1u);
  sub_648D0(a2, v16);
  v9 = a2[2];
  v10 = v17;
  v17 = 0;
  v11 = _mm_loadu_si128(&v18);
  v18 = 0;
  if ( v9 )
  {
    a2[3] = 0;
    v15 = v11;
    qfree();
    v12 = _mm_load_si128(&v15);
    v13 = v17;
    a2[2] = v10;
    *(__m128i *)(a2 + 3) = v12;
    if ( v13 )
    {
      v18.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    a2[2] = v10;
    *(__m128i *)(a2 + 3) = v11;
  }
  qfree();
  return sub_129150(a1, a2, *(_QWORD *)(a4 + 16), a5, a3, 0, 0x101u);
}
