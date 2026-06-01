__int64 __fastcall sub_2F7630(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        char a15)
{
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  __int64 v22; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v23; // [rsp+8h] [rbp-10h]

  v23 = __readfsqword(0x28u);
  sub_2F7090(a1, 3u);
  if ( (*(_BYTE *)(**(_QWORD **)(a1 + 80) + 12LL) & 2) == 0 )
    return sub_169630(
             (int)"Sorry, the current processor has no options",
             3,
             v15,
             v16,
             v17,
             v18,
             a2,
             a3,
             a4,
             a5,
             v19,
             v20,
             a8,
             a9,
             a15);
  v22 = 1;
  sub_1E73C0(8u, 0, 0, 0, &v22, 1);
  return v23 - __readfsqword(0x28u);
}
