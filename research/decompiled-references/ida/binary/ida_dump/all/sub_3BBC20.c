unsigned __int64 __fastcall sub_3BBC20(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __m128i v3; // xmm1
  __m128i v4; // xmm1
  __int64 v5; // rdi
  __m128i v7; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+10h] [rbp-38h]
  __m128i v9; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v9 = 0;
  v8 = 0;
  get_ea_name();
  v2 = *a2;
  v8 = 0;
  v3 = _mm_loadu_si128(&v9);
  v9 = 0;
  if ( v2 )
  {
    a2[1] = 0;
    v7 = v3;
    qfree();
    v4 = _mm_load_si128(&v7);
    v5 = v8;
    *a2 = 0;
    *(__m128i *)(a2 + 1) = v4;
    if ( v5 )
    {
      v9.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    *a2 = 0;
    *(__m128i *)(a2 + 1) = v3;
  }
  return v10 - __readfsqword(0x28u);
}
