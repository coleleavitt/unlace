/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431970
// Address: 0x00431970

//----- (00431970) --------------------------------------------------------
_DWORD *__thiscall sub_431970(int *this)
{
  unsigned int v2; // esi
  __m128d v3; // xmm0
  __m128 v4; // xmm0
  unsigned int v5; // eax
  unsigned int v6; // ecx
  double v8; // [esp+10h] [ebp-8h]

  v2 = *(this + 7);
  v3 = (__m128d)COERCE_UNSIGNED_INT64((double)(*(this + 2) + 1));
  v3.m128d_f64[0] = (double)(unsigned int)(*(this + 2) + 1);
  v4 = _mm_cvtpd_ps(v3);
  v4.m128_f32[0] = v4.m128_f32[0] / *(float *)this;
  v8 = sub_468340((const __m128i)_mm_cvtps_pd(v4));
  v5 = sub_462B40((__m128i)_mm_cvtpd_ps((__m128d)*(unsigned __int64 *)&v8));
  v6 = 8;
  if ( v5 > 8 )
    v6 = v5;
  if ( v2 < v6 )
  {
    if ( v2 >= 0x200 || (v2 *= 8, v2 < v6) )
      v2 = v6;
  }
  return sub_4315E0(this, v2);
}
