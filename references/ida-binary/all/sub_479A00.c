__int64 __fastcall sub_479A00(const __m128i *a1)
{
  __m128i v1; // xmm0
  _OWORD v3[5]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v4; // [rsp+58h] [rbp-10h]

  v1 = _mm_loadu_si128(a1);
  v4 = __readfsqword(0x28u);
  v3[0] = v1;
  v3[1] = _mm_loadu_si128(a1 + 1);
  v3[2] = _mm_loadu_si128(a1 + 2);
  v3[3] = _mm_loadu_si128(a1 + 3);
  v3[4] = _mm_loadu_si128(a1 + 4);
  return ((__int64 (__fastcall *)(_OWORD *))launch_process)(v3);
}
