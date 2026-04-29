unsigned __int64 __fastcall sub_87260(__int64 a1)
{
  __int64 v1; // rax
  __m128i v3; // [rsp+0h] [rbp-68h]
  __int16 v4; // [rsp+10h] [rbp-58h]
  __m128i v5; // [rsp+20h] [rbp-48h] BYREF
  __int16 v6; // [rsp+30h] [rbp-38h]
  unsigned __int64 v7; // [rsp+38h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  if ( netnode_supfirst() != -1 )
  {
    do
    {
      if ( netnode_supval() == 20 )
      {
        v1 = node2ea();
        v6 = v4;
        v5 = _mm_add_epi64(_mm_unpacklo_epi64((__m128i)(unsigned __int64)v1, (__m128i)(unsigned __int64)v1), v3);
        sub_6B570(a1, v1, (__int64)&v5, 1);
      }
    }
    while ( netnode_supnext() != -1 );
  }
  return v7 - __readfsqword(0x28u);
}
