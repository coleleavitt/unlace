__int64 __fastcall sub_21965F0(__int64 a1, const __m128i *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int epi16; // eax
  __m128i v8; // [rsp+0h] [rbp-38h] BYREF
  __m128i v9; // [rsp+10h] [rbp-28h] BYREF

  if ( (unsigned __int64)a2 < sub_215DEC0(a1) || (v2 = sub_215DEC0(a1), (unsigned __int64)&a2[1] > v3 + v2) )
    sub_2221C70("Malformed MachO file.", 1);
  v4 = *(unsigned int *)(a1 + 8);
  v8 = _mm_loadu_si128(a2);
  v9 = v8;
  if ( (unsigned int)v4 <= 0x14 )
  {
    v5 = 1398784;
    if ( _bittest64(&v5, v4) )
    {
      epi16 = _mm_extract_epi16(_mm_load_si128(&v9), 3);
      v8.m128i_i64[0] = _byteswap_ulong(v8.m128i_u32[0]) | v8.m128i_i64[0] & 0xFFFFFFFF00000000LL;
      LOWORD(epi16) = __ROL2__(epi16, 8);
      v8.m128i_i64[0] = _mm_insert_epi16(_mm_load_si128(&v8), epi16, 3).m128i_u64[0];
      v8.m128i_i64[1] = _byteswap_uint64(v9.m128i_u64[1]);
    }
  }
  return v8.m128i_i64[0];
}
