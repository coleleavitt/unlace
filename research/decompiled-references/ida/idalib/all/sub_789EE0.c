__int64 __fastcall sub_789EE0(__int64 a1, __int64 a2)
{
  void *v2; // rax
  __m128i v3; // xmm0
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __m128i v6; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  ptr = nullptr;
  v6 = 0;
  sub_788F00((__int64 (__fastcall *)(__int64, __int64))sub_788D40, (__int64)&ptr, a1, a2);
  v2 = ptr;
  v3 = _mm_loadu_si128(&v6);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = v2;
  *(__m128i *)(a2 + 16) = v3;
  return 0;
}
