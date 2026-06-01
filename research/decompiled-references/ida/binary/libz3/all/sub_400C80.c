__int64 __fastcall sub_400C80(__int64 *a1, _DWORD *a2)
{
  _DWORD *v2; // r12
  double v4; // xmm0_8

  v2 = (_DWORD *)*a1;
  ++*a2;
  if ( v2 )
  {
    if ( (*v2)-- == 1 )
    {
      sub_41CB00(v2);
      sub_186B220(v2);
    }
  }
  *a1 = (__int64)a2;
  *(_QWORD *)&v4 = _mm_unpacklo_epi16(_mm_cvtsi32_si128(a2[18]), (__m128i)0LL).m128i_u64[0];
  *((double *)a1 + 1) = v4;
  return sub_3FE030(a1, v4);
}

