unsigned __int64 __fastcall sub_3B79D0(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbp
  __m128i v6; // xmm1
  __m128i v7; // xmm1
  __int64 v8; // rdi
  __m128i v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h] BYREF
  __m128i v12; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v3 = *a1;
  v12 = 0;
  v11 = 0;
  get_ea_name(&v11, v3, 21, 0);
  v4 = *a2;
  v5 = v11;
  v11 = 0;
  v6 = _mm_loadu_si128(&v12);
  v12 = 0;
  if ( v4 )
  {
    a2[1] = 0;
    v10 = v6;
    qfree(v4);
    v7 = _mm_load_si128(&v10);
    v8 = v11;
    *a2 = v5;
    *(__m128i *)(a2 + 1) = v7;
    if ( v8 )
    {
      v12.m128i_i64[0] = 0;
      qfree(v8);
    }
  }
  else
  {
    *a2 = v5;
    *(__m128i *)(a2 + 1) = v6;
  }
  return v13 - __readfsqword(0x28u);
}
