__int64 __fastcall sub_51A150(unsigned __int64 *a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __m128i v5; // xmm0

  v2 = *(_QWORD **)a2;
  v3 = *a1;
  if ( (*(_BYTE *)(*(_QWORD *)a2 + 45LL) & 4) == 0 )
    return 4294967291LL;
  if ( v3 > 0xFFFFFFFE )
    return 4294967259LL;
  v4 = v2[1];
  if ( v4 )
  {
    v5 = _mm_loadu_si128((const __m128i *)(*v2 + (v4 << 7) - 128));
    if ( 8 * v3 < _mm_add_epi64(v5, _mm_srli_si128(v5, 8)).m128i_u64[0] )
      return 4294967259LL;
  }
  v2[3] = v3;
  return 0;
}

