unsigned __int64 sub_374430()
{
  __int64 v1; // [rsp+8h] [rbp-30h] BYREF
  int v2; // [rsp+10h] [rbp-28h] BYREF
  int v3; // [rsp+14h] [rbp-24h]
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]
  int v5; // [rsp+20h] [rbp-18h]
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v2 = 1;
  v3 = (unsigned __int8)byte_8CF0E0;
  if ( byte_8CF0DF )
    v3 = (unsigned __int8)byte_8CF0E0 | 2;
  if ( byte_8CF0DE )
    v3 |= 4u;
  if ( byte_8CF0DD )
    v3 |= 8u;
  if ( byte_8CF0DC )
    v3 |= 0x10u;
  v1 = -1;
  v5 = dword_8CF0D0;
  v4 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(qword_8CF0D4)), _mm_cvtsi32_si128(qword_8CF0D4)).m128i_u64[0];
  netnode_check(&v1, "$ proximity view", 0, 1);
  netnode_supset(v1, 1, &v2, 20, 83);
  return v6 - __readfsqword(0x28u);
}
