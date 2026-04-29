unsigned __int64 __fastcall sub_2B3220(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD v5[2]; // [rsp+0h] [rbp-38h] BYREF
  char v6; // [rsp+10h] [rbp-28h]
  __m128i v7; // [rsp+18h] [rbp-20h]
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 1336);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a2 + 40);
    v6 = 73;
    v5[1] = v3;
    v5[0] = &off_4B4B08;
    v7 = _mm_unpacklo_epi64((__m128i)v2, (__m128i)a2);
    sub_2B0E40(a1, (__int64)v5, 0);
  }
  return v8 - __readfsqword(0x28u);
}
