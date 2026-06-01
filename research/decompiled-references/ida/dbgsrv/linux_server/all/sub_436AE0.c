/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436AE0
// Address: 0x0000000000436AE0

//----- (0000000000436AE0) ----------------------------------------------------
__int64 __fastcall sub_436AE0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  void *v10; // rax
  __m128i v11; // xmm0
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __m128i v14; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  ptr = nullptr;
  v14 = 0;
  sub_435B00(
    (__int64 (__fastcall *)(__int64, __int64))sub_435960,
    (__int64)&ptr,
    a1,
    a2,
    0.0,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10);
  v10 = ptr;
  v11 = _mm_loadu_si128(&v14);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = v10;
  *(__m128i *)(a2 + 16) = v11;
  return 0;
}
