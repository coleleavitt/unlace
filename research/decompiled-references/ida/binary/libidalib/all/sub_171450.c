__int64 __fastcall sub_171450(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __m128i v3; // xmm0
  __m128i v5; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v5.m128i_i64[0] = -1;
  v5.m128i_i16[4] = 0;
  if ( a2 >= 0 )
  {
    v2 = *(_QWORD **)(a1 + 192);
    if ( (unsigned __int64)a2 < v2[1] && *(_QWORD *)(a1 + 200) == -1 )
      v5 = _mm_loadu_si128((const __m128i *)(*v2 + 16 * a2));
  }
  if ( *(_QWORD *)(a1 + 256) )
  {
    *(_QWORD *)(a1 + 264) = 0;
    qfree();
    *(_QWORD *)(a1 + 256) = 0;
    *(_QWORD *)(a1 + 272) = 0;
  }
  sub_171080((__m128i **)(a1 + 256), *(_QWORD *)(a1 + 216), *(_DWORD *)(a1 + 224), nullptr, 0, 1);
  if ( *(_QWORD *)(a1 + 200) != -1 )
  {
    v3 = _mm_loadu_si128((const __m128i *)(a1 + 200));
    *(_QWORD *)(a1 + 200) = -1;
    v5 = v3;
  }
  return sub_171380(a1, (unsigned __int64 *)&v5);
}

