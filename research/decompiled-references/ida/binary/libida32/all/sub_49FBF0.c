void __fastcall sub_49FBF0(__m128i *a1, const __m128i *a2)
{
  void *v3; // rdi
  __int64 v4; // rdi

  if ( a1 != a2 )
  {
    v3 = (void *)a1[2].m128i_i64[1];
    if ( v3 )
    {
      qfree(v3);
      a1[2].m128i_i64[1] = 0;
    }
    *a1 = _mm_loadu_si128(a2);
    a1[1] = _mm_loadu_si128(a2 + 1);
    a1[2].m128i_i32[0] = a2[2].m128i_i32[0];
    v4 = a2[2].m128i_i64[1];
    if ( v4 )
      a1[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}

