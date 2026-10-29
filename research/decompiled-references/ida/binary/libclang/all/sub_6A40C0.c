unsigned __int64 __fastcall sub_6A40C0(_QWORD *a1, unsigned int *a2, unsigned int *a3)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 v5; // rdx

  v3 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*a2), _mm_cvtsi32_si128(*a3)).m128i_u64[0];
  v4 = __ROR8__(v3 + 16, 16);
  v5 = 0x9DDFEA08EB382D69LL
     * ((0x9DDFEA08EB382D69LL * (v4 ^ *a1 ^ 0xFF51AFD7ED558CCDLL))
      ^ v4
      ^ ((0x9DDFEA08EB382D69LL * (v4 ^ *a1 ^ 0xFF51AFD7ED558CCDLL)) >> 47));
  return v3 ^ (0x9DDFEA08EB382D69LL * (v5 ^ (v5 >> 47)));
}

