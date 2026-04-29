unsigned __int64 __fastcall sub_1B1EF0(__int64 a1, void (***a2)(_QWORD, _QWORD, const char *, ...))
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbp
  __m128i v6; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 480);
  v8 = __readfsqword(0x28u);
  v7 = 0;
  v4 = *(_QWORD *)(v3 + 1344);
  *(_QWORD *)(v3 + 1344) = v2;
  v6 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(v2 + 1496)), (__m128i)v2);
  sub_1B1DC0(a1, a2, (__int64)&v6);
  *(_QWORD *)(*(_QWORD *)(a1 + 480) + 1344LL) = v4;
  return v8 - __readfsqword(0x28u);
}
