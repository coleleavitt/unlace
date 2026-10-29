__int64 __fastcall sub_4E2CF0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+18h] [rbp-30h]
  __int64 v7; // [rsp+20h] [rbp-28h]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v4 = 0;
  v6 = 0;
  v2 = (unsigned int)sub_3BEEF0(a1, a2);
  v7 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  if ( !(unsigned __int8)get_fixup(&v4, a2) || (v4 & 0x400000000LL) != 0 )
  {
    if ( (unsigned __int8)get_fixups(nullptr, a2, 4) )
      return -1;
LABEL_11:
    if ( !v2 )
      return v2;
    goto LABEL_12;
  }
  if ( (_WORD)v4 != 4 )
    return -1;
  if ( (v4 & 0x100000000LL) != 0 )
  {
    v2 += si128.m128i_i64[0];
  }
  else if ( si128.m128i_i64[1] != -1 )
  {
    v2 += 16 * sel2para(si128.m128i_i64[1]);
  }
  v2 &= *(_QWORD *)(a1[3] + 16LL);
  if ( (unsigned __int8)is_spec_ea(v2) )
    goto LABEL_11;
  v2 = *(_QWORD *)(a1[3] + 16LL) & (v7 + v2);
  if ( v2 )
  {
LABEL_12:
    if ( sub_505D70(a1 + 203, v2) )
      return v2;
    return -1;
  }
  return v2;
}
