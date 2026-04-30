__int64 __fastcall sub_52EA50(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  _QWORD v20[5]; // [rsp+0h] [rbp-28h] BYREF

  v20[1] = __readfsqword(0x28u);
  v20[0] = a1;
  result = sub_52E860(v20, 0, a2, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( (_BYTE)result )
    return sub_52E860(v20, 1u, a2, a3, a4, a5, a6, v18, v19, a9, a10, v15, v16, v17);
  return result;
}
